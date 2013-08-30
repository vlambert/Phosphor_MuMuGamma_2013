#include "rochcor2012v2.hh"
#include <TLorentzVector.h>


const float rochcor2012::netabin[9] = {-2.4,-2.1,-1.4,-0.7,0.0,0.7,1.4,2.1,2.4};

const float rochcor2012::dcor_bf[8][8]={{-0.000019748,-0.000034252,-0.000002432,-0.000002632,0.000005143,0.000007048,-0.000022204,-0.000033271},
					{-0.000018668,-0.000011823,0.000007692,-0.000002098,-0.000001723,-0.000006353,-0.000003129,-0.000019580},
					{0.000001227,-0.000015146,0.000009085,-0.000017923,-0.000006751,-0.000009371,-0.000020462,-0.000059697},
					{-0.000050241,-0.000026312,-0.000005426,-0.000009739,-0.000019282,-0.000021477,-0.000035437,-0.000064338},
					{-0.000093309,-0.000045040,-0.000011104,-0.000005945,-0.000017859,-0.000008542,-0.000044646,-0.000064470},
					{-0.000044309,-0.000059894,-0.000009516,0.000000582,0.000000856,0.000001772,-0.000035992,-0.000039668},
					{-0.000089588,-0.000055024,-0.000012787,-0.000004298,0.000000600,0.000014389,-0.000023549,-0.000024638},
					{-0.000048470,-0.000044721,0.000000718,0.000005472,0.000003716,0.000006975,0.000002142,-0.000014061}};
const float rochcor2012::dcor_ma[8][8]={{0.000141981,0.000006621,-0.000100720,-0.000142759,-0.000152952,-0.000168350,0.000082466,0.000580023},
					{0.000810470,0.000159639,-0.000005042,-0.000029185,-0.000017442,-0.000014856,-0.000045384,-0.000134170},
					{0.000097250,0.000071463,0.000106505,0.000104951,0.000103529,0.000050857,-0.000088951,-0.000302643},
					{-0.000770876,-0.000057492,0.000225237,0.000216310,0.000210894,0.000166573,0.000020633,-0.000080681},
					{-0.000662852,0.000026234,0.000232772,0.000188186,0.000178874,0.000192805,0.000165072,-0.000017758},
					{-0.000240109,-0.000005283,0.000083258,0.000077423,0.000053266,0.000081663,0.000213240,0.000216367},
					{0.000150483,-0.000067431,-0.000115291,-0.000128890,-0.000175200,-0.000177806,-0.000104638,0.000431372},
					{-0.000063281,-0.000014813,-0.000161224,-0.000184123,-0.000209513,-0.000289872,-0.000077784,0.000647775}};
const float rochcor2012::dcor_bfD[8][8]={{-0.000024838,-0.000044556,-0.000005628,0.000009510,0.000006596,0.000008845,-0.000011439,-0.000070856},
					 {-0.000007117,-0.000032825,0.000015974,0.000004766,0.000000031,-0.000016604,-0.000028987,-0.000022525},
					 {-0.000035939,-0.000020849,0.000000949,-0.000014554,-0.000003563,-0.000003292,-0.000023822,-0.000056096},
					 {-0.000053803,-0.000024567,-0.000009537,-0.000007780,-0.000014406,-0.000016597,-0.000046622,-0.000093960},
					 {-0.000077891,-0.000039829,-0.000008270,-0.000000256,0.000003654,-0.000018755,-0.000032274,-0.000098797},
					 {-0.000068313,-0.000045644,-0.000018374,0.000009060,-0.000002304,-0.000002650,-0.000027371,-0.000061713},
					 {-0.000091286,-0.000058883,-0.000008230,0.000000867,-0.000004065,0.000014062,-0.000030384,-0.000072984},
					 {-0.000052261,-0.000043578,-0.000003821,-0.000000952,0.000012655,0.000014029,-0.000021165,-0.000012368}};
const float rochcor2012::dcor_maD[8][8]={{0.000137291,-0.000012532,-0.000102897,-0.000136926,-0.000169810,-0.000172377,0.000087330,0.000634729},
					 {0.000762018,0.000135900,-0.000016600,-0.000022221,-0.000032865,-0.000043720,-0.000068514,-0.000098600},
					 {0.000113634,0.000044900,0.000069470,0.000079446,0.000076403,0.000002606,-0.000108818,-0.000337588},
					 {-0.000783656,-0.000068179,0.000216671,0.000199783,0.000192930,0.000158140,-0.000002177,-0.000110710},
					 {-0.000631172,0.000041392,0.000234342,0.000187263,0.000184248,0.000202431,0.000157819,0.000014033},
					 {-0.000175829,0.000005795,0.000104599,0.000099939,0.000088512,0.000127171,0.000231690,0.000288776},
					 {0.000160850,-0.000049309,-0.000105267,-0.000111423,-0.000159928,-0.000162016,-0.000098076,0.000434477},
					 {-0.000029634,-0.000035942,-0.000142134,-0.000165445,-0.000192258,-0.000280685,-0.000069143,0.000663518}};
const float rochcor2012::mcor_bf[8][8]={{-0.000071806,-0.000042738,-0.000005168,0.000008530,0.000006657,0.000001403,-0.000046476,-0.000077701},
					{-0.000079501,-0.000043963,0.000002809,0.000013418,0.000006740,-0.000009243,-0.000036724,-0.000053361},
					{-0.000086731,-0.000040736,-0.000007970,0.000002559,-0.000002886,-0.000003930,-0.000032835,-0.000108170},
					{-0.000078597,-0.000032426,-0.000000507,0.000008674,0.000011006,-0.000010700,-0.000049114,-0.000067586},
					{-0.000077383,-0.000039116,0.000001962,0.000007945,0.000006559,0.000002716,-0.000030194,-0.000072644},
					{-0.000047655,-0.000039136,0.000002394,0.000016047,0.000004600,-0.000002543,-0.000038468,-0.000069981},
					{-0.000057153,-0.000035963,-0.000001395,0.000013020,0.000013557,0.000000570,-0.000043211,-0.000073572},
					{-0.000078923,-0.000037795,-0.000002042,0.000014883,0.000010629,0.000002679,-0.000035537,-0.000058614}};
const float rochcor2012::mcor_ma[8][8]={{0.000282014,0.000062614,-0.000048363,-0.000058016,-0.000057209,-0.000077560,-0.000034640,0.000171967},
					{0.000146645,-0.000028641,-0.000046078,-0.000037986,-0.000040030,-0.000020762,0.000065515,0.000186970},
					{0.000013427,-0.000030694,0.000002951,0.000008824,0.000008922,0.000029666,0.000036620,-0.000070866},
					{0.000210925,0.000170459,0.000068899,0.000041447,0.000050304,0.000065185,0.000130217,0.000138370},
					{0.000216844,0.000137060,0.000075496,0.000056760,0.000056176,0.000063500,0.000115420,0.000237142},
					{-0.000361274,-0.000055447,0.000033291,0.000040406,0.000036132,0.000029008,0.000026157,0.000220532},
					{-0.000384866,-0.000080785,-0.000015095,-0.000009202,-0.000005052,-0.000003704,-0.000014772,-0.000031949},
					{0.000221685,0.000020988,-0.000065403,-0.000053498,-0.000045621,-0.000042911,-0.000154784,-0.000419276}};

//==========================================================================================================================
const float rochcor2012::dmavg[8][8]={{0.025933114,0.025211954,0.024878030,0.025213760,0.025164077,0.024834509,0.025279892,0.026299342},
				      {0.026355878,0.025268478,0.024945619,0.025365190,0.025393415,0.024962174,0.025041991,0.025640544},
				      {0.025853195,0.025177580,0.025043087,0.025437304,0.025466913,0.025054432,0.025073615,0.025466143},
				      {0.025302843,0.025173182,0.025160404,0.025486295,0.025546831,0.025159509,0.025242201,0.025772532},
				      {0.025452019,0.025281325,0.025127977,0.025396693,0.025453818,0.025149110,0.025393084,0.025806789},
				      {0.025536119,0.025226552,0.025052227,0.025407335,0.025405678,0.025029203,0.025334398,0.025926075},
				      {0.025985213,0.025150668,0.024931984,0.025242651,0.025188850,0.024824173,0.025091307,0.026182721},
				      {0.025782857,0.025201388,0.024830891,0.025187110,0.025173126,0.024764581,0.025151455,0.026302267}};
const float rochcor2012::dpavg[8][8]={{0.025760540,0.025205154,0.025057930,0.025475078,0.025467728,0.025091795,0.025150639,0.025535991},
				      {0.025179443,0.024958758,0.024962845,0.025420844,0.025446001,0.025014644,0.025171478,0.025884318},
				      {0.025741483,0.025146384,0.024870600,0.025330802,0.025317841,0.024987678,0.025294214,0.026113652},
				      {0.026604544,0.025317115,0.024766347,0.025185208,0.025200966,0.024867880,0.025266070,0.026020507},
				      {0.026593420,0.025315189,0.024783697,0.025175451,0.025161702,0.024860970,0.025115207,0.025931964},
				      {0.026071797,0.025241677,0.024912988,0.025308884,0.025353108,0.024885105,0.025025361,0.025700343},
				      {0.025879373,0.025311713,0.025080549,0.025442282,0.025471560,0.025128031,0.025263913,0.025523349},
				      {0.025972306,0.025248717,0.025102289,0.025503796,0.025525872,0.025232318,0.025262437,0.025364862}};
const float rochcor2012::dmavgD[8][8]={{0.025933114,0.025211954,0.024878030,0.025213760,0.025164077,0.024834509,0.025279892,0.026299342},
				       {0.026355878,0.025268478,0.024945619,0.025365190,0.025393415,0.024962174,0.025041991,0.025640544},
				       {0.025853195,0.025177580,0.025043087,0.025437304,0.025466913,0.025054432,0.025073615,0.025466143},
				       {0.025302843,0.025173182,0.025160404,0.025486295,0.025546831,0.025159509,0.025242201,0.025772532},
				       {0.025452019,0.025281325,0.025127977,0.025396693,0.025453818,0.025149110,0.025393084,0.025806789},
				       {0.025536119,0.025226552,0.025052227,0.025407335,0.025405678,0.025029203,0.025334398,0.025926075},
				       {0.025985213,0.025150668,0.024931984,0.025242651,0.025188850,0.024824173,0.025091307,0.026182721},
				       {0.025782857,0.025201388,0.024830891,0.025187110,0.025173126,0.024764581,0.025151455,0.026302267}};
const float rochcor2012::dpavgD[8][8]={{0.025760540,0.025205154,0.025057930,0.025475078,0.025467728,0.025091795,0.025150639,0.025535991},
				       {0.025179443,0.024958758,0.024962845,0.025420844,0.025446001,0.025014644,0.025171478,0.025884318},
				       {0.025741483,0.025146384,0.024870600,0.025330802,0.025317841,0.024987678,0.025294214,0.026113652},
				       {0.026604544,0.025317115,0.024766347,0.025185208,0.025200966,0.024867880,0.025266070,0.026020507},
				       {0.026593420,0.025315189,0.024783697,0.025175451,0.025161702,0.024860970,0.025115207,0.025931964},
				       {0.026071797,0.025241677,0.024912988,0.025308884,0.025353108,0.024885105,0.025025361,0.025700343},
				       {0.025879373,0.025311713,0.025080549,0.025442282,0.025471560,0.025128031,0.025263913,0.025523349},
				       {0.025972306,0.025248717,0.025102289,0.025503796,0.025525872,0.025232318,0.025262437,0.025364862}};
const float rochcor2012::mmavg[8][8]={{0.026058156,0.025288242,0.024914332,0.025234715,0.025215595,0.024929635,0.025270115,0.025953079},
				      {0.025884172,0.025161363,0.024956277,0.025306438,0.025303837,0.024965949,0.025254987,0.025902839},
				      {0.025917520,0.025163348,0.024993308,0.025319856,0.025347663,0.025035577,0.025274874,0.025796417},
				      {0.026117465,0.025390911,0.025062392,0.025311546,0.025316478,0.025039940,0.025369449,0.025927631},
				      {0.026077926,0.025368480,0.025004913,0.025266120,0.025282883,0.025055789,0.025296928,0.026123998},
				      {0.025568735,0.025178538,0.025031160,0.025364352,0.025371157,0.025003405,0.025254490,0.025926064},
				      {0.025522195,0.025161997,0.024978428,0.025258552,0.025309075,0.024950539,0.025195544,0.025826596},
				      {0.026082824,0.025253782,0.024939655,0.025269799,0.025249572,0.024941604,0.025109541,0.025501534}};
const float rochcor2012::mpavg[8][8]={{0.025715677,0.025167430,0.025012492,0.025360102,0.025379251,0.025026302,0.025263846,0.025867599},
				      {0.025773304,0.025212873,0.024995786,0.025398794,0.025404635,0.025042453,0.025220045,0.025789688},
				      {0.025956906,0.025259180,0.024997460,0.025345088,0.025376761,0.024991251,0.025196061,0.025988617},
				      {0.025820694,0.025128369,0.024896937,0.025237798,0.025295188,0.024883958,0.025165118,0.025862797},
				      {0.025796839,0.025146159,0.024926421,0.025250195,0.025246977,0.024944807,0.025171534,0.025776059},
				      {0.026171851,0.025266560,0.024932881,0.025320040,0.025318938,0.024982888,0.025231810,0.025805723},
				      {0.026380484,0.025369597,0.025003962,0.025313980,0.025316192,0.025017893,0.025234826,0.026008156},
				      {0.025769622,0.025252647,0.025040967,0.025371246,0.025346839,0.025008565,0.025377072,0.026334648}};
//==========================================================================================================================
const float rochcor2012::dcor_bfer[8][8]={{0.000047200,0.000024665,0.000020335,0.000018630,0.000018560,0.000020545,0.000024162,0.000044394},
					  {0.000042695,0.000023402,0.000020505,0.000018954,0.000018758,0.000020679,0.000023357,0.000042913},
					  {0.000044218,0.000024148,0.000020383,0.000018789,0.000018554,0.000020365,0.000023534,0.000042863},
					  {0.000042763,0.000023783,0.000020245,0.000018592,0.000018526,0.000020333,0.000023400,0.000042304},
					  {0.000044506,0.000024600,0.000020516,0.000018726,0.000018652,0.000020416,0.000024016,0.000045064},
					  {0.000042819,0.000023441,0.000020219,0.000019056,0.000019035,0.000020377,0.000023644,0.000042755},
					  {0.000043253,0.000023966,0.000020373,0.000018576,0.000018892,0.000020265,0.000023193,0.000042732},
					  {0.000043491,0.000024026,0.000020240,0.000018604,0.000018475,0.000020444,0.000023506,0.000042387}};
const float rochcor2012::dcor_maer[8][8]={{0.000047200,0.000024665,0.000020335,0.000018630,0.000018560,0.000020545,0.000024162,0.000044394},
					  {0.000042695,0.000023402,0.000020505,0.000018954,0.000018758,0.000020679,0.000023357,0.000042913},
					  {0.000044218,0.000024148,0.000020383,0.000018789,0.000018554,0.000020365,0.000023534,0.000042863},
					  {0.000042763,0.000023783,0.000020245,0.000018592,0.000018526,0.000020333,0.000023400,0.000042304},
					  {0.000044506,0.000024600,0.000020516,0.000018726,0.000018652,0.000020416,0.000024016,0.000045064},
					  {0.000042819,0.000023441,0.000020219,0.000019056,0.000019035,0.000020377,0.000023644,0.000042755},
					  {0.000043253,0.000023966,0.000020373,0.000018576,0.000018892,0.000020265,0.000023193,0.000042732},
					  {0.000043491,0.000024026,0.000020240,0.000018604,0.000018475,0.000020444,0.000023506,0.000042387}};
const float rochcor2012::dcor_bfDer[8][8]={{0.000047200,0.000024665,0.000020335,0.000018630,0.000018560,0.000020545,0.000024162,0.000044394},
					   {0.000042695,0.000023402,0.000020505,0.000018954,0.000018758,0.000020679,0.000023357,0.000042913},
					   {0.000044218,0.000024148,0.000020383,0.000018789,0.000018554,0.000020365,0.000023534,0.000042863},
					   {0.000042763,0.000023783,0.000020245,0.000018592,0.000018526,0.000020333,0.000023400,0.000042304},
					   {0.000044506,0.000024600,0.000020516,0.000018726,0.000018652,0.000020416,0.000024016,0.000045064},
					   {0.000042819,0.000023441,0.000020219,0.000019056,0.000019035,0.000020377,0.000023644,0.000042755},
					   {0.000043253,0.000023966,0.000020373,0.000018576,0.000018892,0.000020265,0.000023193,0.000042732},
					   {0.000043491,0.000024026,0.000020240,0.000018604,0.000018475,0.000020444,0.000023506,0.000042387}};
const float rochcor2012::dcor_maDer[8][8]={{0.000047200,0.000024665,0.000020335,0.000018630,0.000018560,0.000020545,0.000024162,0.000044394},
					   {0.000042695,0.000023402,0.000020505,0.000018954,0.000018758,0.000020679,0.000023357,0.000042913},
					   {0.000044218,0.000024148,0.000020383,0.000018789,0.000018554,0.000020365,0.000023534,0.000042863},
					   {0.000042763,0.000023783,0.000020245,0.000018592,0.000018526,0.000020333,0.000023400,0.000042304},
					   {0.000044506,0.000024600,0.000020516,0.000018726,0.000018652,0.000020416,0.000024016,0.000045064},
					   {0.000042819,0.000023441,0.000020219,0.000019056,0.000019035,0.000020377,0.000023644,0.000042755},
					   {0.000043253,0.000023966,0.000020373,0.000018576,0.000018892,0.000020265,0.000023193,0.000042732},
					   {0.000043491,0.000024026,0.000020240,0.000018604,0.000018475,0.000020444,0.000023506,0.000042387}};
const float rochcor2012::mcor_bfer[8][8]={{0.000047815,0.000025172,0.000021069,0.000019264,0.000019165,0.000021343,0.000024927,0.000045633},
					  {0.000044371,0.000024478,0.000021293,0.000019543,0.000019431,0.000021466,0.000024209,0.000044329},
					  {0.000045310,0.000025143,0.000021216,0.000019483,0.000019279,0.000021192,0.000024523,0.000044429},
					  {0.000044504,0.000024779,0.000021058,0.000019274,0.000019184,0.000021143,0.000024413,0.000044281},
					  {0.000045494,0.000025065,0.000021169,0.000019306,0.000019304,0.000021131,0.000024836,0.000046798},
					  {0.000044599,0.000024474,0.000020983,0.000019729,0.000019618,0.000021050,0.000024673,0.000044435},
					  {0.000045441,0.000024933,0.000021162,0.000019292,0.000019560,0.000021106,0.000024186,0.000044568},
					  {0.000045326,0.000024917,0.000021085,0.000019279,0.000019166,0.000021262,0.000024469,0.000043777}};
const float rochcor2012::mcor_maer[8][8]={{0.000047815,0.000025172,0.000021069,0.000019264,0.000019165,0.000021343,0.000024927,0.000045633},
					  {0.000044371,0.000024478,0.000021293,0.000019543,0.000019431,0.000021466,0.000024209,0.000044329},
					  {0.000045310,0.000025143,0.000021216,0.000019483,0.000019279,0.000021192,0.000024523,0.000044429},
					  {0.000044504,0.000024779,0.000021058,0.000019274,0.000019184,0.000021143,0.000024413,0.000044281},
					  {0.000045494,0.000025065,0.000021169,0.000019306,0.000019304,0.000021131,0.000024836,0.000046798},
					  {0.000044599,0.000024474,0.000020983,0.000019729,0.000019618,0.000021050,0.000024673,0.000044435},
					  {0.000045441,0.000024933,0.000021162,0.000019292,0.000019560,0.000021106,0.000024186,0.000044568},
					  {0.000045326,0.000024917,0.000021085,0.000019279,0.000019166,0.000021262,0.000024469,0.000043777}};

const float rochcor2012::sf[8] = {0.0153729,0.0103115,0.00701322,0.00472529,0.00460413,0.00700919,0.00967325,0.0147967};
const float rochcor2012:: sfer[8] = {0.00026422,0.000131926,0.000158204,0.000141117,0.000152415,0.000145095,0.000128231,0.000244732};

const float rochcor2012::gsf[8] = {0.999141,0.999708,0.999852,1.0001,1.00009,0.999897,0.999671,0.999534};
const float rochcor2012::gsfer[8] = {0.00018916,6.84925e-05,5.07571e-05,4.01735e-05,4.02512e-05,5.07904e-05,6.64705e-05,0.000186549};

//===============================================================================================
//parameters for Z pt correction

const float rochcor2012::ptlow[85] = {0.0, 0.5, 1.0, 1.5, 2.0, 2.5, 3.0, 3.5, 4.0, 4.5, 5.0, 5.5,
				  6.0, 6.5, 7.0, 7.5, 8.0, 8.5, 9.0, 9.5,
				  10.0, 10.5, 11.0, 11.5, 12.0, 12.5, 13.0, 13.5, 14.0, 14.5,
				  15.0, 15.5, 16.0, 16.5, 17.0, 17.5, 18.0, 18.5, 19.0, 19.5,
				  20.0, 20.5, 21.0, 21.5, 22.0, 22.5, 23.0, 23.5, 24.0, 24.5,
				  25.0, 26.0, 27.0, 28.0, 29.0,
				  30.0, 32.0, 34.0, 36.0, 38.0,
				  40.0, 44.0, 48.0, 52.0, 56.0,
				  60.0, 65.0, 70.0, 75.0, 80.0, 85.0, 90.0, 95.0,
				  100.0, 110.0, 120.0, 130.0, 140.0, 150.0, 175.0,
				  200.0, 250.0, 350.0, 500.0, 1000.0};

//int nptbins( sizeof(ptlow)/sizeof(float) - 1 );
  
const float rochcor2012::zptscl[84] = {1.49177,1.45654,1.36283,1.28569,1.2418,1.12336,1.10416,1.08731,0.994051,0.96532,
				   0.94427,0.932725,0.918082,0.899665,0.898398,0.927687,0.908047,0.892392,0.924027,0.945895,
				   0.937149,0.923983,0.923387,0.955362,0.947812,0.962943,0.948781,0.961555,0.95222,0.999207,
				   0.973884,0.993013,0.953487,0.951402,0.985583,0.986603,0.981388,1.00022,1.0294,0.964748,
				   0.974592,1.01546,0.992343,1.00101,0.990866,0.98982,1.02924,1.02265,0.967695,1.02411,
				   0.97331,1.01052,1.01561,0.992594,0.976504,1.01205,0.981111,1.00078,1.02078,1.00719,
				   1.0099,1.02865,1.03845,1.03254,1.09815,1.10263,1.06302,1.0725,1.14703,1.10574,
				   1.13911,1.16947,1.1709,1.11413,1.28793,1.18953,1.20212,1.18112,1.25471,1.15329,
				   1.14276,1.17223,1.09173,2.00229};
  
const float rochcor2012::zptscler[84] = {0.0270027,0.0154334,0.0115338,0.00958085,0.0084683,0.00736665,0.0069567,0.00671434,
				     0.00617693,0.00601943,0.00594735,0.00594569,0.00594903,0.00595495,0.00608115,0.00633704,
				     0.0063916,0.0064468,0.00678106,0.00706769,0.00717517,0.00727958,0.00747182,0.00785544,
				     0.00798754,0.00828787,0.00839147,0.00865826,0.00876775,0.00933276,0.00935768,0.0097289,
				     0.00962058,0.00983828,0.0103044,0.0104871,0.0106575,0.0110388,0.0114986,0.0111494,
				     0.0115202,0.0121059,0.0121345,0.0124923,0.0125972,0.0128401,0.0134519,0.0136279,
				     0.0133414,0.014186,0.00992195,0.0105984,0.0109484,0.0111756,0.0114579,0.00870013,
				     0.00904749,0.00970734,0.0104583,0.0109818,0.00837852,0.00939894,0.010415,0.0113433,
				     0.013007,0.0128788,0.0140174,0.0156993,0.0181717,0.019765,0.0222326,0.0249408,
				     0.0272806,0.0211706,0.0278087,0.0306654,0.0361387,0.041327,0.0341513,0.0440116,
				     0.0473006,0.0680212,0.149162,0.56279};

rochcor2012::~rochcor2012(){
}

rochcor2012::rochcor2012(){
  
  eran.SetSeed(123456);
  sran.SetSeed(1234);
  
  gscler_mc_dev=0;
  gscler_da_dev=0;

  for(int i=0; i<8; ++i){
      for(int j=0; j<8; ++j){
          mptsys_mc_dm[i][j]=0;
          mptsys_mc_da[i][j]=0;
          mptsys_da_dm[i][j]=0;
          mptsys_da_da[i][j]=0;
      }
  }

}

rochcor2012::rochcor2012(int seed){
  eran.SetSeed(123456);
  sran.SetSeed(seed);

  gscler_mc_dev=sran.Gaus(0.0, 1.0);
  gscler_da_dev=sran.Gaus(0.0, 1.0);

  for(int i=0; i<8; ++i){
      for(int j=0; j<8; ++j){
          mptsys_mc_dm[i][j]=sran.Gaus(0.0, 1.0);
          mptsys_mc_da[i][j]=sran.Gaus(0.0, 1.0);
          mptsys_da_dm[i][j]=sran.Gaus(0.0, 1.0);
          mptsys_da_da[i][j]=sran.Gaus(0.0, 1.0);
      }
  }
}

void rochcor2012::momcor_mc( TLorentzVector& mu, float charge, int runopt, float& qter){
  
  //sysdev == num : deviation = num

  float ptmu = mu.Pt();
  float muphi = mu.Phi();
  float mueta = mu.Eta(); // same with mu.Eta() in Root

  float px = mu.Px();
  float py = mu.Py();
  float pz = mu.Pz();
  float e = mu.E();

  int mu_phibin = phibin(muphi);
  int mu_etabin = etabin(mueta);
  
  float Mf = (mcor_bf[mu_phibin][mu_etabin] + mptsys_mc_dm[mu_phibin][mu_etabin]*mcor_bfer[mu_phibin][mu_etabin])/(mpavg[mu_phibin][mu_etabin]+mmavg[mu_phibin][mu_etabin]);
  float Af = ((mcor_ma[mu_phibin][mu_etabin]+mptsys_mc_da[mu_phibin][mu_etabin]*mcor_maer[mu_phibin][mu_etabin]) - Mf*(mpavg[mu_phibin][mu_etabin]-mmavg[mu_phibin][mu_etabin]));     
  
  float cor = 1.0/(1.0 + 2.0*Mf + charge*Af*ptmu);
  
  //for the momentum tuning - eta,phi,Q correction
  px *= cor;
  py *= cor;
  pz *= cor;
  e  *= cor;
  
  float gscler = mgscl_stat;    
  float gscl = (genm_smr/mrecm);
  
  px *= (gscl + gscler_mc_dev*gscler);
  py *= (gscl + gscler_mc_dev*gscler);
  pz *= (gscl + gscler_mc_dev*gscler);
  e  *= (gscl + gscler_mc_dev*gscler);
  
  float momscl = sqrt(px*px + py*py)/ptmu;
  
  float tune = gsf[mu_etabin]*eran.Gaus(1.0,sf[mu_etabin]);
  
  px *= (tune); 
  py *= (tune);  
  pz *= (tune);  
  e  *= (tune);   
  
  qter *= sqrt(momscl*momscl + (1.0-tune)*(1.0-tune));
  
  mu.SetPxPyPzE(px,py,pz,e);
  
}


void rochcor2012::momcor_data( TLorentzVector& mu, float charge, int runopt, float& qter){
  
  float ptmu = mu.Pt();

  float muphi = mu.Phi();
  float mueta = mu.Eta(); // same with mu.Eta() in Root

  float px = mu.Px();
  float py = mu.Py();
  float pz = mu.Pz();
  float e = mu.E();
  
  int mu_phibin = phibin(muphi);
  int mu_etabin = etabin(mueta);

  float Mf = 0.0;
  float Af = 0.0;

  if(runopt==0){
    Mf = (dcor_bf[mu_phibin][mu_etabin]+mptsys_da_dm[mu_phibin][mu_etabin]*dcor_bfer[mu_phibin][mu_etabin])/(dpavg[mu_phibin][mu_etabin]+dmavg[mu_phibin][mu_etabin]);
    Af = ((dcor_ma[mu_phibin][mu_etabin]+mptsys_da_da[mu_phibin][mu_etabin]*dcor_maer[mu_phibin][mu_etabin]) - Mf*(dpavg[mu_phibin][mu_etabin]-dmavg[mu_phibin][mu_etabin]));     
  }else if(runopt==1){
    Mf = (dcor_bfD[mu_phibin][mu_etabin]+mptsys_da_dm[mu_phibin][mu_etabin]*dcor_bfDer[mu_phibin][mu_etabin])/(dpavgD[mu_phibin][mu_etabin]+dmavgD[mu_phibin][mu_etabin]);
    Af = ((dcor_maD[mu_phibin][mu_etabin]+mptsys_da_da[mu_phibin][mu_etabin]*dcor_maDer[mu_phibin][mu_etabin]) - Mf*(dpavgD[mu_phibin][mu_etabin]-dmavgD[mu_phibin][mu_etabin]));     
  }
  
  float cor = 1.0/(1.0 + 2.0*Mf + charge*Af*ptmu);
  
  px *= cor;
  py *= cor;
  pz *= cor;
  e  *= cor;
  
  //after Z pt correction
  float gscler = dgscl_stat;
  float gscl = (genm_smr/drecm);
  
  px *= (gscl + gscler_da_dev*gscler);
  py *= (gscl + gscler_da_dev*gscler);
  pz *= (gscl + gscler_da_dev*gscler);
  e  *= (gscl + gscler_da_dev*gscler);
  
  float momscl = sqrt(px*px + py*py)/ptmu;
  qter *= momscl;
  
  mu.SetPxPyPzE(px,py,pz,e);
  
}

Int_t rochcor2012::phibin(float phi){
  
  int nphibin = -1;
  
  for(int i=0; i<8; i++){
    if(-1*pi+(2.0*pi/8.0)*i <= phi && -1*pi+(2.0*pi/8.0)*(i+1) > phi){
      nphibin = i;
      break;
    }
  }
  
  return nphibin;
}

Int_t rochcor2012::etabin(float eta){

  int nbin = -1;
  
  for(int i=0; i<8; i++){
    if(netabin[i] <= eta && netabin[i+1] > eta){
      nbin = i;
      break;
    }
  }
  
  return nbin;
}

float rochcor2012::zptcor(float gzpt) {
  int ibin( 0 );
  
  // mcptscl[] = 84 bins: [0] and [83] are the underflow and overflow
  if ( gzpt > ptlow[nptbins] ) return nptbins-1;
  if ( gzpt < ptlow[0      ] ) return 0;
  
  for ( int i=0; i<nptbins; ++i ) {
    if ( gzpt>=ptlow[i] && gzpt<ptlow[i+1] ) { ibin=i; break; }
  }

  float zptwt = zptscl[ibin];

  return zptwt;
}