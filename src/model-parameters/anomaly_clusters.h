/* Generated by Edge Impulse
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef _EI_CLASSIFIER_ANOMALY_CLUSTERS_H_
#define _EI_CLASSIFIER_ANOMALY_CLUSTERS_H_

#include "edge-impulse-sdk/classifier/ei_model_types.h"

const uint16_t ei_classifier_anom_axes[] = { 0, 11, 22, 24 };
// (before - mean) / scale
const float ei_classifier_anom_scale[4] = { 4.833019708983657, 2.708733943482681, 1.5792952935389322, 9.045315161866217 };
const float ei_classifier_anom_mean[4] = { 4.6116951246010975, 2.4667033843756103, 2.4762731974969268, 6.629312184015947 };

const ei_classifier_anom_cluster_t ei_classifier_anom_clusters[32] = {
	{ ( float[4] ) { -0.416262686252594, -0.1445731520652771, 3.0603270530700684, -0.8292945027351379 }, 0.6634068663836772 },
	{ ( float[4] ) { -0.5714337229728699, 0.06611721217632294, 1.4319896697998047, -0.8345383405685425 }, 0.45782240558325366 },
	{ ( float[4] ) { 1.1931673288345337, 0.1908707618713379, -0.7599301338195801, -0.7805922627449036 }, 0.5352401439498048 },
	{ ( float[4] ) { -0.05634597688913345, 3.761180877685547, -0.47548213601112366, -0.784766674041748 }, 0.6437165094965616 },
	{ ( float[4] ) { -0.7502449154853821, -0.32631537318229675, -0.44445186853408813, 0.9407650232315063 }, 0.2801184586982066 },
	{ ( float[4] ) { 1.3561406135559082, 0.5430781841278076, -0.38267502188682556, -0.7640617489814758 }, 0.5493766378139535 },
	{ ( float[4] ) { -0.7241648435592651, -0.281065970659256, -0.4432632327079773, 1.286496877670288 }, 0.4180829037998934 },
	{ ( float[4] ) { 1.7201484441757202, 0.2749479413032532, 0.13533326983451843, -0.7753881216049194 }, 0.5133822311988007 },
	{ ( float[4] ) { -0.5041751265525818, -0.3844289779663086, 2.58332896232605, -0.8555242419242859 }, 0.6172505829154471 },
	{ ( float[4] ) { 1.2253373861312866, -0.3379104733467102, 0.1154635027050972, -0.8218191862106323 }, 0.5415078592282063 },
	{ ( float[4] ) { 0.9521359801292419, 3.32499623298645, 1.064239501953125, -0.863564133644104 }, 0.2963400568295158 },
	{ ( float[4] ) { 1.8751771450042725, 0.10734234750270844, 1.335601568222046, -0.7970656156539917 }, 0.3621430245071055 },
	{ ( float[4] ) { -0.536075234413147, -0.33623215556144714, 2.039334535598755, -0.8365229964256287 }, 0.3958875572272001 },
	{ ( float[4] ) { -0.9498072862625122, -0.9049402475357056, -0.427783340215683, 1.4390987157821655 }, 0.07120834886801675 },
	{ ( float[4] ) { 1.2299646139144897, -0.2178707867860794, -0.7777198553085327, -0.7110490798950195 }, 0.5441840610404213 },
	{ ( float[4] ) { -0.3001335859298706, 3.4226911067962646, -0.6958255767822266, -0.8120653629302979 }, 0.6060956491362316 },
	{ ( float[4] ) { -0.5804818868637085, -0.9029542207717896, -1.518800973892212, 1.422786831855774 }, 0.04011557514185802 },
	{ ( float[4] ) { 1.8772963285446167, 0.006879945285618305, 0.6463719010353088, -0.776017427444458 }, 0.40226531435210666 },
	{ ( float[4] ) { -0.6954700946807861, -0.00009335856884717941, 1.8896914720535278, -0.853523313999176 }, 0.3424946817573474 },
	{ ( float[4] ) { 0.9866761565208435, -0.14903955161571503, 0.5564442873001099, -0.8073286414146423 }, 0.6212926811245164 },
	{ ( float[4] ) { 1.0297837257385254, -0.18976707756519318, -0.527082085609436, -0.7545329332351685 }, 0.5068289880348746 },
	{ ( float[4] ) { -0.7380344271659851, -0.3407200276851654, -0.380497008562088, 0.2764882743358612 }, 0.3257846439765841 },
	{ ( float[4] ) { -0.7783810496330261, -0.5728545188903809, 1.1767529249191284, -0.8225492238998413 }, 0.5667771641712608 },
	{ ( float[4] ) { -0.3207058310508728, 1.6804205179214478, -0.271272748708725, -0.821211040019989 }, 0.6587730797569753 },
	{ ( float[4] ) { -0.7176268696784973, -0.323866605758667, 1.5996811389923096, -0.8277254700660706 }, 0.3374648592931896 },
	{ ( float[4] ) { 1.575307846069336, 0.7086061835289001, 0.2612507939338684, -0.8098888993263245 }, 0.4452016452707544 },
	{ ( float[4] ) { -0.48997747898101807, 0.6522379517555237, 0.23021334409713745, -0.5081671476364136 }, 0.8605774939073829 },
	{ ( float[4] ) { -0.5806796550750732, 0.36270302534103394, -0.06114276498556137, -0.10430648177862167 }, 0.4267009819098014 },
	{ ( float[4] ) { -0.8453975915908813, -0.2821978032588959, -1.5568207502365112, 0.10184437036514282 }, 0.4657394603990578 },
	{ ( float[4] ) { 0.7672687768936157, 2.8053739070892334, 0.5594580173492432, -0.8034873604774475 }, 0.5227894853362456 },
	{ ( float[4] ) { -0.9250110983848572, -0.26085373759269714, -1.534400224685669, 1.2387504577636719 }, 0.5711631051278149 },
	{ ( float[4] ) { -0.32537198066711426, 1.071715235710144, 2.468975305557251, -0.7094904780387878 }, 0.33757409518286124 },
};

#endif // _EI_CLASSIFIER_ANOMALY_CLUSTERS_H_
