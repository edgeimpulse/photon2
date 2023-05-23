#!/bin/bash
set -e


###############################################################################
COMMAND=$1

DEVICE="p2"
DEVICE_ID="32"
DEVICE_OS_VERSION="5.3.1"
BUILD_PATH=$HOME/.particle/toolchains/deviceOS/$DEVICE_OS_VERSION/
BUILDSCRIPT="$HOME/.particle/toolchains/buildscripts/1.11.0/Makefile"
PROJECT_PATH=${PWD}

################################ Parse args ###################################
PART_COMMAND=0
CLEAN=0

POSITIONAL_ARGS=()

while [[ $# -gt 0 ]]; do
  case $1 in
    --build)
      PART_COMMAND="compile-user"
      shift # past argument
      ;;
    --clean)
      PART_COMMAND="clean-user"
      CLEAN=1
      shift # past argument
      ;;
    --flash)
      PART_COMMAND="flash-user"
      shift # past argument
      ;;
    --build-all)
      PART_COMMAND="compile-all"
      shift # past argument
      ;;
    --clean-all)
      PART_COMMAND="clean-all"
      CLEAN=1
      shift # past argument
      ;;
    --flash-all)
      PART_COMMAND="flash-all"
      shift # past argument
      ;;
    -*|--*)
      echo "Unknown option $1"
      exit 1
      ;;
    *)
      POSITIONAL_ARGS+=("$1") # save positional arg
      shift # past argument
      ;;
  esac
done

set -- "${POSITIONAL_ARGS[@]}" # restore positional parameters


# Application flags
APP_FLAGS="-DEIDSP_USE_CMSIS_DSP=1 "
APP_FLAGS+="-D__STATIC_FORCEINLINE='__attribute__((always_inline)) static inline' "
APP_FLAGS+="-DEI_PORTING_PARTICLE=1 "
APP_FLAGS+="-DEIDSP_LOAD_CMSIS_DSP_SOURCES=1"


if [[ $CLEAN -eq 1 ]]
then
    # Clean requires trimmed down command
    make -f $BUILDSCRIPT clean-all DEVICE_OS_PATH=$BUILD_PATH PLATFORM_ID=32
else
    make -f $BUILDSCRIPT $PART_COMMAND -s DEVICE_OS_PATH=$BUILD_PATH PLATFORM=$DEVICE_OS_VERSION/$DEVICE PLATFORM_ID=$DEVICE_ID APPDIR=$PROJECT_PATH EXTRA_CFLAGS="$APP_FLAGS"
fi