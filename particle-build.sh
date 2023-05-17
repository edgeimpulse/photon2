#!/bin/bash
set -e


###############################################################################
COMMAND=$1

################################ Parse args ###################################
PART_COMMAND=0


POSITIONAL_ARGS=()

while [[ $# -gt 0 ]]; do
  case $1 in
    --build)
      PART_COMMAND="compile-user"
      shift # past argument
      ;;
    --clean)
      PART_COMMAND="clean-user"
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

echo "Command" $PART_COMMAND

make -f $HOME/.particle/toolchains/buildscripts/1.11.0/Makefile $PART_COMMAND -s DEVICE_OS_PATH=$HOME/.particle/toolchains/deviceOS/5.3.1/ PLATFORM=Photon2 PLATFORM_ID=32 APPDIR=${PWD}