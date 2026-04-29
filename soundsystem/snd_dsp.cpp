
//
// soundsystem/snd_dsp.cpp
//
//	referenced by: libengine2.so
//
//	functions: 199
//	structs: 18
//

// <024A244D> soundsystem/snd_dsp.cpp:267
inline void DlyPtrReverse(int dlysize, int* psamps, int** ppsamp)
{
} /* size: 0 */

// <024A23E8> soundsystem/snd_dsp.cpp:287
// variable: 1
inline int IIRFilter_Update_Order1(int* denom, int cnumer, int* numer, int* psamp, int in)
{
	int out; // 289
} /* size: 0, variables: 1 */

// <024A238F> soundsystem/snd_dsp.cpp:309
// variable: 1
inline int GetDly(int dlysize, int* psamps, int* psamp, int tdelay)
{
	int* pout; // 311
} /* size: 0, variables: 1 */

// <024A2354> soundsystem/snd_dsp.cpp:326
inline void DlyUpdate(int dlysize, int* psamps, int** ppsamp)
{
} /* size: 0 */

// <024A22C9> soundsystem/snd_dsp.cpp:353
// variables: 2
inline int ReverbSimple(int delaysize, int tdelay, int* psamps, int** ppsamp, int fbgain, int outgain, int in)
{
	int out; // 355
	int sD; // 355
} /* size: 0, variables: 2 */

// <024A2218> soundsystem/snd_dsp.cpp:376
// variables: 3
inline int ReverbSimple_xfade(int delaysize, int tdelay, int tdelaynew, int xf, int* psamps, int** ppsamp, int fbgain, int outgain, int in)
{
	int out; // 378
	int sD; // 378
	int sDnew; // 379
} /* size: 0, variables: 3 */

// <024A2142> soundsystem/snd_dsp.cpp:399
// variables: 5
inline int ReverbSimple_multitap(int delaysize, int tdelay0, int tdelay1, int tdelay2, int tdelay3, int* psamps, int** ppsamp, int fbgain, int outgain, int in)
{
	int s1; // 401
	int s2; // 401
	int s3; // 401
	int s4; // 401
	int sum; // 401
} /* size: 0, variables: 5 */

// <024A203A> soundsystem/snd_dsp.cpp:423
// variables: 7
inline int ReverbSimple_multitap_xfade(int delaysize, int tdelay0, int tdelaynew, int xf, int tdelay1, int tdelay2, int tdelay3, int* psamps, int** ppsamp, int fbgain, int outgain, int in)
{
	int s1; // 425
	int s2; // 425
	int s3; // 425
	int s4; // 425
	int sum; // 425
	int sD; // 426
	int sDnew; // 426
} /* size: 0, variables: 7 */

// <024A1FD5> soundsystem/snd_dsp.cpp:463
// variable: 1
inline int DelayLinear(int delaysize, int tdelay, int* psamps, int** ppsamp, int in)
{
	int out; // 465
} /* size: 0, variables: 1 */

// <024A1F4A> soundsystem/snd_dsp.cpp:478
// variables: 2
inline int DelayLinear_xfade(int delaysize, int tdelay, int tdelaynew, int xf, int* psamps, int** ppsamp, int in)
{
	int out; // 480
	int outnew; // 481
} /* size: 0, variables: 2 */

// <024A1E8C> soundsystem/snd_dsp.cpp:519
// variables: 2
inline int DelayLowpass(int delaysize, int tdelay, int* psamps, int** ppsamp, int fbgain, int outgain, int* denom, int Ll, int* numer, int* pfsamps, int in)
{
	int out; // 521
	int sD; // 521
} /* size: 0, variables: 2 */

// <024A1DA8> soundsystem/snd_dsp.cpp:544
// variables: 3
inline int DelayLowpass_xfade(int delaysize, int tdelay, int tdelaynew, int xf, int* psamps, int** ppsamp, int fbgain, int outgain, int* denom, int Ll, int* numer, int* pfsamps, int in)
{
	int out; // 546
	int sD; // 546
	int sDnew; // 547
} /* size: 0, variables: 3 */

// <024A1C93> soundsystem/snd_dsp.cpp:577
// variables: 6
inline int DelayLowpass_multitap(int delaysize, int tdelay0, int tdelay1, int tdelay2, int tdelay3, int* psamps, int** ppsamp, int fbgain, int outgain, int* denom, int Ll, int* numer, int* pfsamps, int in)
{
	int s0; // 579
	int s1; // 579
	int s2; // 579
	int s3; // 579
	int s4; // 579
	int sum; // 579
} /* size: 0, variables: 6 */

// <024A1B4C> soundsystem/snd_dsp.cpp:601
// variables: 8
inline int DelayLowpass_multitap_xfade(int delaysize, int tdelay0, int tdelaynew, int xf, int tdelay1, int tdelay2, int tdelay3, int* psamps, int** ppsamp, int fbgain, int outgain, int* denom, int Ll, int* numer, int* pfsamps, int in)
{
	int s0; // 603
	int s1; // 603
	int s2; // 603
	int s3; // 603
	int s4; // 603
	int sum; // 603
	int sD; // 605
	int sDnew; // 605
} /* size: 0, variables: 8 */

// <024A1A8D> soundsystem/snd_dsp.cpp:643
// variables: 2
inline int DelayLinear_lowpass(int delaysize, int tdelay, int* psamps, int** ppsamp, int fbgain, int outgain, int* denom, int cnumer, int* numer, int* pfsamps, int in)
{
	int out; // 645
	int sD; // 645
} /* size: 0, variables: 2 */

// <024A19A8> soundsystem/snd_dsp.cpp:668
// variables: 3
inline int DelayLinear_lowpass_xfade(int delaysize, int tdelay, int tdelaynew, int xf, int* psamps, int** ppsamp, int fbgain, int outgain, int* denom, int cnumer, int* numer, int* pfsamps, int in)
{
	int out; // 670
	int sD; // 670
	int sDnew; // 671
} /* size: 0, variables: 3 */

// <024A1911> soundsystem/snd_dsp.cpp:718
// variables: 3
inline int DelayAllpass(int delaysize, int tdelay, int* psamps, int** ppsamp, int fbgain, int outgain, int in)
{
	int out; // 720
	int s0; // 720
	int sD; // 720
} /* size: 0, variables: 3 */

// <024A1854> soundsystem/snd_dsp.cpp:733
// variables: 4
inline int DelayAllpass_xfade(int delaysize, int tdelay, int tdelaynew, int xf, int* psamps, int** ppsamp, int fbgain, int outgain, int in)
{
	int out; // 735
	int s0; // 735
	int sD; // 735
	int sDnew; // 736
} /* size: 0, variables: 4 */

// <0249201E> soundsystem/snd_dsp.cpp:786
// member variables: 8
// struct size: 120
struct prc_t {
	DSPProcessorType_t type; /* 0 4 */
	float prm[16]; /* 4 64 */
	prc_Param_t pfnParam; /* 72 8 */
	prc_GetNext_t pfnGetNext; /* 80 8 */
	prc_GetNextN_t pfnGetNextN; /* 88 8 */
	prc_Free_t pfnFree; /* 96 8 */
	prc_Mod_t pfnMod; /* 104 8 */
	void * pdata; /* 112 8 */
};

// <024920BD> soundsystem/snd_dsp.cpp:814
// member function: 1
// member variables: 10
// struct size: 200
struct flt_t {
	bool fused; /* 0 1 */
	int b[13]; /* 4 52 */
	int a[13]; /* 56 52 */
	int w[13]; /* 108 52 */
	int L; /* 160 4 */
	int M; /* 164 4 */
	int N; /* 168 4 */
	flt_t * pf1; /* 176 8 */
	flt_t * pf2; /* 184 8 */
	flt_t * pf3; /* 192 8 */
	/* soundsystem/snd_dsp.cpp:829 */
	void SetToZero(flt_t* );
};

// <024A183B> soundsystem/snd_dsp.cpp:829
inline void flt_t::SetToZero()
{
} /* size: 0 */

// <024A181B> soundsystem/snd_dsp.cpp:836
void FLT_Init(flt_t* pf)
{
} /* size: 0 */

// <024A17FA> soundsystem/snd_dsp.cpp:837
// variable: 1
void FLT_InitAll(void)
{
	{
		int i; // 837
	}
} /* size: 0 */

// <024A149B> soundsystem/snd_dsp.cpp:838
// function calls: 12
void FLT_Free(flt_t* pf)
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 829
	flt_t::SetToZero(); // 843
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 829
	flt_t::SetToZero(); // 846
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 829
	flt_t::SetToZero(); // 849
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 829
	flt_t::SetToZero(); // 851
} /* size: 101, inline expansions: 12 (156 bytes) */

// <024A1465> soundsystem/snd_dsp.cpp:855
// variable: 1
void FLT_FreeAll(void)
{
	{
		int i; // 855
	}
} /* size: 0 */

// <024A1352> soundsystem/snd_dsp.cpp:863
// variables: 5
flt_t* FLT_Alloc(int N, int M, int L, int* a, int* b, float gain)
{
	int i; // 865
	int j; // 865
	flt_t* pf; // 866
	const char   __FUNCTION__; // 19432
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 894
	}
} /* size: 0, variables: 4 */

// <024A12C6> soundsystem/snd_dsp.cpp:906
// variables: 4
void FLT_Design_3db_IIR(float cutoff, prc_filter_type_t ftype, int* pM, int* pL, int* a, int* b)
{
	double Wc; // 910
	double Oc; // 911
	double fa; // 912
	double fb; // 913
} /* size: 0, variables: 4 */

// <024A0CE8> soundsystem/snd_dsp.cpp:949
// variables: 22
// function calls: 5
flt_t* FLT_Params(prc_t* pprc)
{
	float qual; // 951
	float cutoff; // 952
	prc_filter_type_t ftype; // 953
	float qwidth; // 954
	float gain; // 955
	int L; // 957
	int M; // 958
	int b; // 959
	int b_scaled; // 960
	int a; // 961
	int L_bp; // 963
	int M_bp; // 964
	int b_bp; // 965
	int b_bp_scaled; // 966
	int a_bp; // 967
	int N; // 969
	bool bpass; // 970
	flt_t* pf0; // 1011
	flt_t* pf1; // 1012
	flt_t* pf2; // 1013
	flt_t* pf3; // 1014
	{
		int i; // 1018
	}
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 1004
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 999
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 1000
	FLT_Design_3db_IIR(float cutoff,
				prc_filter_type_t ftype,
				int* pM,
				int* pL,
				int* a,
				int* b);  // 989
	Max<int>(const int& val1,
		const int& val2);  // 1009
} /* size: 1082, variables: 21, inline expansions: 5 (321 bytes) */

// <024A0C6D> soundsystem/snd_dsp.cpp:1063
void* FLT_VParams(void* p)
{
} /* size: 38 */

// <024A0C2C> soundsystem/snd_dsp.cpp:1069
void FLT_Mod(void* p, float v)
{
} /* size: 5 */

// <024A0BCB> soundsystem/snd_dsp.cpp:1073
// variables: 4
inline int FLT_GetNext(flt_t* pf, int x)
{
	flt_t* pf1; // 1075
	flt_t* pf2; // 1076
	flt_t* pf3; // 1077
	int y; // 1078
} /* size: 0, variables: 4 */

// <024A0698> soundsystem/snd_dsp.cpp:1111
// variables: 2
// function calls: 11
void FLT_GetNextN(flt_t* pflt, int* pbuffer, int SampleCount)
{
	int count; // 1113
	int* pb; // 1114
	IIRFilter_Update_Order1(int* denom,
				int cnumer,
				int* numer,
				int* psamp,
				int in);  // 1084
	IIRFilter_Update_Order1(int* denom,
				int cnumer,
				int* numer,
				int* psamp,
				int in);  // 1102
	IIRFilter_Update_Order1(int* denom,
				int cnumer,
				int* numer,
				int* psamp,
				int in);  // 1103
	IIRFilter_Update_Order1(int* denom,
				int cnumer,
				int* numer,
				int* psamp,
				int in);  // 1104
	IIRFilter_Update_Order1(int* denom,
				int cnumer,
				int* numer,
				int* psamp,
				int in);  // 1105
	IIRFilter_Update_Order1(int* denom,
				int cnumer,
				int* numer,
				int* psamp,
				int in);  // 1094
	IIRFilter_Update_Order1(int* denom,
				int cnumer,
				int* numer,
				int* psamp,
				int in);  // 1095
	IIRFilter_Update_Order1(int* denom,
				int cnumer,
				int* numer,
				int* psamp,
				int in);  // 1096
	IIRFilter_Update_Order1(int* denom,
				int cnumer,
				int* numer,
				int* psamp,
				int in);  // 1088
	IIRFilter_Update_Order1(int* denom,
				int cnumer,
				int* numer,
				int* psamp,
				int in);  // 1089
	FLT_GetNext(flt_t* pf,
			int x);  // 1118
} /* size: 769, variables: 2, inline expansions: 11 (1301 bytes) */

// <024921C3> soundsystem/snd_dsp.cpp:1131
// member variables: 4
// struct size: 16
struct pos_t {
	fix20int step; /* 0 4 */
	fix20int cstep; /* 4 4 */
	int pos; /* 8 4 */
	int D; /* 12 4 */
};

// <024A066E> soundsystem/snd_dsp.cpp:1145
inline void POS_Wrap(int D, int* i)
{
} /* size: 0 */

// <024A062A> soundsystem/snd_dsp.cpp:1159
// variable: 1
inline void POS_Init(pos_t* p, int D, float fstep)
{
	float step; // 1161
} /* size: 0, variables: 1 */

// <024A05FE> soundsystem/snd_dsp.cpp:1177
inline void POS_ChangeVal(pos_t* p, float fstepnew)
{
} /* size: 0 */

// <024A05B0> soundsystem/snd_dsp.cpp:1184
// variables: 2
inline int POS_GetNext(pos_t* p)
{
	const char   __FUNCTION__; // 19486
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1202
	}
} /* size: 0, variables: 1 */

// <02492210> soundsystem/snd_dsp.cpp:1208
// member variables: 2
// struct size: 20
struct pos_one_t {
	pos_t p; /* 0 16 */
	bool fhitend; /* 16 1 */
};

// <024A0578> soundsystem/snd_dsp.cpp:1218
inline void POS_ONE_Init(pos_one_t* p1, int D, float fstep)
{
} /* size: 0 */

// <024A0504> soundsystem/snd_dsp.cpp:1227
// variables: 4
inline int POS_ONE_GetNext(pos_one_t* p1)
{
	int pos; // 1229
	pos_t* p0; // 1230
	const char   __FUNCTION__; // 19579
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1253
	}
} /* size: 0, variables: 3 */

// <0249223D> soundsystem/snd_dsp.cpp:1274
// member functions: 3
// member variables: 18
// struct size: 88
struct dly_t {
	bool fused; /* 0 1 */
	int type; /* 4 4 */
	int D; /* 8 4 */
	int t; /* 12 4 */
	int tnew; /* 16 4 */
	int xf; /* 20 4 */
	int t1; /* 24 4 */
	int t2; /* 28 4 */
	int t3; /* 32 4 */
	int a1; /* 36 4 */
	int a2; /* 40 4 */
	int a3; /* 44 4 */
	int D0; /* 48 4 */
	int * p; /* 56 8 */
	int * w; /* 64 8 */
	int a; /* 72 4 */
	int b; /* 76 4 */
	flt_t * pflt; /* 80 8 */
	/* soundsystem/snd_dsp.cpp:1294 */
	void SetToZero(dly_t* );
	/* soundsystem/snd_dsp.cpp:1295 */
	void Init(dly_t* );
	/* soundsystem/snd_dsp.cpp:1300 */
	void Free(dly_t* );
};

// <024A04EB> soundsystem/snd_dsp.cpp:1294
inline void dly_t::SetToZero()
{
} /* size: 0 */

// <024A04D2> soundsystem/snd_dsp.cpp:1295
inline void dly_t::Init()
{
} /* size: 0 */

// <024A04B9> soundsystem/snd_dsp.cpp:1300
inline void dly_t::Free()
{
} /* size: 0 */

// <024A0498> soundsystem/snd_dsp.cpp:1316
// variable: 1
void DLY_InitAll(void)
{
	{
		int i; // 1316
	}
} /* size: 0 */

// <024A0372> soundsystem/snd_dsp.cpp:1317
// variable: 1
// function calls: 4
void DLY_FreeAll(void)
{
	{
		int i; // 1317
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 1294
		dly_t::SetToZero(); // 1310
		dly_t::Free(); // 1317
	}
} /* size: 0 */

// <024A0351> soundsystem/snd_dsp.cpp:1318
void DLY_Free(dly_t* pDelay)
{
} /* size: 0 */

// <024A0306> soundsystem/snd_dsp.cpp:1327
// variable: 1
float DLY_NormalizeFeedback(int dmin, float fbmin, int dly)
{
	float fb; // 1347
} /* size: 0, variables: 1 */

// <024A0241> soundsystem/snd_dsp.cpp:1355
// variables: 4
// function call: 1
void DLY_SetNormalizingGain(dly_t* pdly, int feedback)
{
	float fgain; // 1370
	float gain; // 1371
	int b; // 1372
	float fb; // 1373
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 1391
} /* size: 142, variables: 4, inline expansions: 1 (30 bytes) */

// <0249FE12> soundsystem/snd_dsp.cpp:1410
// variables: 5
// function calls: 9
dly_t* DLY_AllocLP(int D, int a, int b, int type, int M, int L, int* fa, int* fb)
{
	int* w; // 1412
	int i; // 1413
	dly_t* pdly; // 1414
	int feedback; // 1415
	{
		float gain; // 1453
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1294
	dly_t::SetToZero(); // 1297
	dly_t::Init(); // 1424
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1475
	Min<int>(const int& val1,
		const int& val2);  // 1487
	DLY_ChangeTaps(dly_t* pdly,
			int t0,
			int t1,
			int t2,
			int t3);  // 1673
	DLY_ChangeTaps(dly_t* pdly,
			int t0,
			int t1,
			int t2,
			int t3);  // 1509
} /* size: 582, variables: 4, inline expansions: 9 (158 bytes) */

// <0249FDCC> soundsystem/snd_dsp.cpp:1517
dly_t* DLY_Alloc(int D, int a, int b, int type)
{
} /* size: 0 */

// <0249F95C> soundsystem/snd_dsp.cpp:1528
// variables: 18
// function calls: 7
dly_t* DLY_Params(prc_t* pprc)
{
	dly_t* pdly; // 1530
	int D; // 1531
	int a; // 1531
	int b; // 1531
	float delay; // 1533
	float feedback; // 1534
	float gain; // 1535
	prc_delay_type_t type; // 1536
	float ftype; // 1538
	float cutoff; // 1539
	float qwidth; // 1540
	float qual; // 1541
	float t1; // 1543
	float t2; // 1544
	float t3; // 1545
	{
		prc_t prcf; // 1566
		flt_t* pflt; // 1574
	}
	DLY_Alloc(int D,
			int a,
			int b,
			int type);  // 1557
	{
		int i; // 1682
	}
	Min<int>(const int& val1,
		const int& val2);  // 1689
	Min<int>(const int& val1,
		const int& val2);  // 1690
	Min<int>(const int& val1,
		const int& val2);  // 1691
	Min<int>(const int& val1,
		const int& val2);  // 1692
	DLY_ChangeTaps(dly_t* pdly,
			int t0,
			int t1,
			int t2,
			int t3);  // 1673
	DLY_ChangeTaps(dly_t* pdly,
			int t0,
			int t1,
			int t2,
			int t3);  // 1592
} /* size: 625, variables: 15, inline expansions: 7 (248 bytes) */

// <0249EB43> soundsystem/snd_dsp.cpp:1605
// function calls: 36
int DLY_GetNext(dly_t* pdly, int x)
{
	GetDly(int dlysize,
		int* psamps,
		int* psamp,
		int tdelay);  // 359
	DlyUpdate(int dlysize,
			int* psamps,
			int** ppsamp);  // 371
	ReverbSimple(int delaysize,
			int tdelay,
			int* psamps,
			int** ppsamp,
			int fbgain,
			int outgain,
			int in);  // 1611
	GetDly(int dlysize,
		int* psamps,
		int* psamp,
		int tdelay);  // 403
	GetDly(int dlysize,
		int* psamps,
		int* psamp,
		int tdelay);  // 404
	GetDly(int dlysize,
		int* psamps,
		int* psamp,
		int tdelay);  // 405
	GetDly(int dlysize,
		int* psamps,
		int* psamp,
		int tdelay);  // 406
	DlyPtrReverse(int dlysize,
			int* psamps,
			int** ppsamp);  // 333
	DlyUpdate(int dlysize,
			int* psamps,
			int** ppsamp);  // 416
	ReverbSimple_multitap(int delaysize,
				int tdelay0,
				int tdelay1,
				int tdelay2,
				int tdelay3,
				int* psamps,
				int** ppsamp,
				int fbgain,
				int outgain,
				int in);  // 1621
	GetDly(int dlysize,
		int* psamps,
		int* psamp,
		int tdelay);  // 722
	DlyPtrReverse(int dlysize,
			int* psamps,
			int** ppsamp);  // 333
	DlyUpdate(int dlysize,
			int* psamps,
			int** ppsamp);  // 727
	DelayAllpass(int delaysize,
			int tdelay,
			int* psamps,
			int** ppsamp,
			int fbgain,
			int outgain,
			int in);  // 1613
	GetDly(int dlysize,
		int* psamps,
		int* psamp,
		int tdelay);  // 525
	IIRFilter_Update_Order1(int* denom,
				int cnumer,
				int* numer,
				int* psamp,
				int in);  // 529
	DlyPtrReverse(int dlysize,
			int* psamps,
			int** ppsamp);  // 333
	DlyUpdate(int dlysize,
			int* psamps,
			int** ppsamp);  // 537
	DelayLowpass(int delaysize,
			int tdelay,
			int* psamps,
			int** ppsamp,
			int fbgain,
			int outgain,
			int* denom,
			int Ll,
			int* numer,
			int* pfsamps,
			int in);  // 1615
	GetDly(int dlysize,
		int* psamps,
		int* psamp,
		int tdelay);  // 649
	IIRFilter_Update_Order1(int* denom,
				int cnumer,
				int* numer,
				int* psamp,
				int in);  // 653
	DlyPtrReverse(int dlysize,
			int* psamps,
			int** ppsamp);  // 333
	DlyUpdate(int dlysize,
			int* psamps,
			int** ppsamp);  // 661
	DelayLinear_lowpass(int delaysize,
				int tdelay,
				int* psamps,
				int** ppsamp,
				int fbgain,
				int outgain,
				int* denom,
				int cnumer,
				int* numer,
				int* pfsamps,
				int in);  // 1619
	GetDly(int dlysize,
		int* psamps,
		int* psamp,
		int tdelay);  // 581
	GetDly(int dlysize,
		int* psamps,
		int* psamp,
		int tdelay);  // 582
	GetDly(int dlysize,
		int* psamps,
		int* psamp,
		int tdelay);  // 583
	GetDly(int dlysize,
		int* psamps,
		int* psamp,
		int tdelay);  // 584
	IIRFilter_Update_Order1(int* denom,
				int cnumer,
				int* numer,
				int* psamp,
				int in);  // 588
	DlyPtrReverse(int dlysize,
			int* psamps,
			int** ppsamp);  // 333
	DlyUpdate(int dlysize,
			int* psamps,
			int** ppsamp);  // 596
	DelayLowpass_multitap(int delaysize,
				int tdelay0,
				int tdelay1,
				int tdelay2,
				int tdelay3,
				int* psamps,
				int** ppsamp,
				int fbgain,
				int outgain,
				int* denom,
				int Ll,
				int* numer,
				int* pfsamps,
				int in);  // 1623
	GetDly(int dlysize,
		int* psamps,
		int* psamp,
		int tdelay);  // 467
	DlyPtrReverse(int dlysize,
			int* psamps,
			int** ppsamp);  // 333
	DlyUpdate(int dlysize,
			int* psamps,
			int** ppsamp);  // 471
	DelayLinear(int delaysize,
			int tdelay,
			int* psamps,
			int** ppsamp,
			int in);  // 1617
} /* size: 1070, inline expansions: 36 (1655 bytes) */

// <0249D9B3> soundsystem/snd_dsp.cpp:1627
// function calls: 43
int DLY_GetNextXfade(dly_t* pdly, int x)
{
	GetDly(int dlysize,
		int* psamps,
		int* psamp,
		int tdelay);  // 383
	GetDly(int dlysize,
		int* psamps,
		int* psamp,
		int tdelay);  // 384
	DlyUpdate(int dlysize,
			int* psamps,
			int** ppsamp);  // 389
	ReverbSimple_xfade(int delaysize,
				int tdelay,
				int tdelaynew,
				int xf,
				int* psamps,
				int** ppsamp,
				int fbgain,
				int outgain,
				int in);  // 1634
	GetDly(int dlysize,
		int* psamps,
		int* psamp,
		int tdelay);  // 430
	GetDly(int dlysize,
		int* psamps,
		int* psamp,
		int tdelay);  // 431
	GetDly(int dlysize,
		int* psamps,
		int* psamp,
		int tdelay);  // 435
	GetDly(int dlysize,
		int* psamps,
		int* psamp,
		int tdelay);  // 436
	GetDly(int dlysize,
		int* psamps,
		int* psamp,
		int tdelay);  // 437
	DlyPtrReverse(int dlysize,
			int* psamps,
			int** ppsamp);  // 333
	DlyUpdate(int dlysize,
			int* psamps,
			int** ppsamp);  // 447
	ReverbSimple_multitap_xfade(int delaysize,
					int tdelay0,
					int tdelaynew,
					int xf,
					int tdelay1,
					int tdelay2,
					int tdelay3,
					int* psamps,
					int** ppsamp,
					int fbgain,
					int outgain,
					int in);  // 1644
	GetDly(int dlysize,
		int* psamps,
		int* psamp,
		int tdelay);  // 740
	GetDly(int dlysize,
		int* psamps,
		int* psamp,
		int tdelay);  // 741
	DlyPtrReverse(int dlysize,
			int* psamps,
			int** ppsamp);  // 333
	DlyUpdate(int dlysize,
			int* psamps,
			int** ppsamp);  // 748
	DelayAllpass_xfade(int delaysize,
				int tdelay,
				int tdelaynew,
				int xf,
				int* psamps,
				int** ppsamp,
				int fbgain,
				int outgain,
				int in);  // 1636
	GetDly(int dlysize,
		int* psamps,
		int* psamp,
		int tdelay);  // 551
	GetDly(int dlysize,
		int* psamps,
		int* psamp,
		int tdelay);  // 552
	IIRFilter_Update_Order1(int* denom,
				int cnumer,
				int* numer,
				int* psamp,
				int in);  // 557
	DlyPtrReverse(int dlysize,
			int* psamps,
			int** ppsamp);  // 333
	DlyUpdate(int dlysize,
			int* psamps,
			int** ppsamp);  // 565
	DelayLowpass_xfade(int delaysize,
				int tdelay,
				int tdelaynew,
				int xf,
				int* psamps,
				int** ppsamp,
				int fbgain,
				int outgain,
				int* denom,
				int Ll,
				int* numer,
				int* pfsamps,
				int in);  // 1638
	GetDly(int dlysize,
		int* psamps,
		int* psamp,
		int tdelay);  // 483
	GetDly(int dlysize,
		int* psamps,
		int* psamp,
		int tdelay);  // 485
	DlyPtrReverse(int dlysize,
			int* psamps,
			int** ppsamp);  // 333
	DlyUpdate(int dlysize,
			int* psamps,
			int** ppsamp);  // 491
	DelayLinear_xfade(int delaysize,
				int tdelay,
				int tdelaynew,
				int xf,
				int* psamps,
				int** ppsamp,
				int in);  // 1640
	GetDly(int dlysize,
		int* psamps,
		int* psamp,
		int tdelay);  // 675
	GetDly(int dlysize,
		int* psamps,
		int* psamp,
		int tdelay);  // 676
	IIRFilter_Update_Order1(int* denom,
				int cnumer,
				int* numer,
				int* psamp,
				int in);  // 679
	DlyPtrReverse(int dlysize,
			int* psamps,
			int** ppsamp);  // 333
	DlyUpdate(int dlysize,
			int* psamps,
			int** ppsamp);  // 683
	DelayLinear_lowpass_xfade(int delaysize,
					int tdelay,
					int tdelaynew,
					int xf,
					int* psamps,
					int** ppsamp,
					int fbgain,
					int outgain,
					int* denom,
					int cnumer,
					int* numer,
					int* pfsamps,
					int in);  // 1642
	GetDly(int dlysize,
		int* psamps,
		int* psamp,
		int tdelay);  // 609
	GetDly(int dlysize,
		int* psamps,
		int* psamp,
		int tdelay);  // 610
	GetDly(int dlysize,
		int* psamps,
		int* psamp,
		int tdelay);  // 614
	GetDly(int dlysize,
		int* psamps,
		int* psamp,
		int tdelay);  // 615
	GetDly(int dlysize,
		int* psamps,
		int* psamp,
		int tdelay);  // 616
	IIRFilter_Update_Order1(int* denom,
				int cnumer,
				int* numer,
				int* psamp,
				int in);  // 620
	DlyPtrReverse(int dlysize,
			int* psamps,
			int** ppsamp);  // 333
	DlyUpdate(int dlysize,
			int* psamps,
			int** ppsamp);  // 623
	DelayLowpass_multitap_xfade(int delaysize,
					int tdelay0,
					int tdelaynew,
					int xf,
					int tdelay1,
					int tdelay2,
					int tdelay3,
					int* psamps,
					int** ppsamp,
					int fbgain,
					int outgain,
					int* denom,
					int Ll,
					int* numer,
					int* pfsamps,
					int in);  // 1646
} /* size: 1420, inline expansions: 43 (2218 bytes) */

// <0249D90F> soundsystem/snd_dsp.cpp:1655
// variables: 2
void DLY_GetNextN(dly_t* pdly, int* pbuffer, int SampleCount)
{
	int count; // 1657
	int* pb; // 1658
} /* size: 81, variables: 2 */

// <0249D8A4> soundsystem/snd_dsp.cpp:1673
// variables: 2
void DLY_ChangeTaps(dly_t* pdly, int t0, int t1, int t2, int t3)
{
	int temp; // 1678
	{
		int i; // 1682
	}
} /* size: 0, variables: 1 */

// <0249D878> soundsystem/snd_dsp.cpp:1699
void DLY_ChangeVal(dly_t* pdly, int t)
{
} /* size: 0 */

// <0249D837> soundsystem/snd_dsp.cpp:1708
void DLY_Mod(void* p, float v)
{
} /* size: 5 */

// <024923E1> soundsystem/snd_dsp.cpp:1716
// member function: 1
// member variables: 7
// struct size: 40
struct rmp_t {
	int initval; /* 0 4 */
	int target; /* 4 4 */
	int sign; /* 8 4 */
	int yprev; /* 12 4 */
	bool fhitend; /* 16 1 */
	bool bEndAtTime; /* 17 1 */
	pos_one_t ps; /* 20 20 */
	/* soundsystem/snd_dsp.cpp:1728 */
	void SetToZero(rmp_t* );
};

// <0249D81E> soundsystem/snd_dsp.cpp:1728
inline void rmp_t::SetToZero()
{
} /* size: 0 */

// <0249D7AF> soundsystem/snd_dsp.cpp:1741
// variables: 2
void RMP_Init(rmp_t* prmp, float ramptime, int initval, int targetval, bool bEndAtTime)
{
	int rise; // 1743
	int run; // 1744
} /* size: 0, variables: 2 */

// <0249D6AF> soundsystem/snd_dsp.cpp:1769
// function call: 1
void RMP_SetNext(rmp_t* prmp, float ramptime, int targetval)
{
	RMP_Init(rmp_t* prmp,
		float ramptime,
		int initval,
		int targetval,
		bool bEndAtTime);  // 1771
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0249D68A> soundsystem/snd_dsp.cpp:1774
inline bool RMP_HitEnd(rmp_t* prmp)
{
} /* size: 0 */

// <0249D669> soundsystem/snd_dsp.cpp:1779
inline void RMP_SetEnd(rmp_t* prmp)
{
} /* size: 0 */

// <0249D62E> soundsystem/snd_dsp.cpp:1787
// variables: 2
inline int RMP_GetNext(rmp_t* prmp)
{
	int y; // 1789
	int d; // 1790
} /* size: 0, variables: 2 */

// <02492484> soundsystem/snd_dsp.cpp:1845
// member function: 1
// member variables: 10
// struct size: 80
struct mdy_t {
	bool fused; /* 0 1 */
	bool fchanging; /* 1 1 */
	dly_t * pdly; /* 8 8 */
	float ramptime; /* 16 4 */
	int mtime; /* 20 4 */
	int mtimecur; /* 24 4 */
	float depth; /* 28 4 */
	int mix; /* 32 4 */
	rmp_t rmp_interp; /* 36 40 */
	bool bPhaseInvert; /* 76 1 */
	/* soundsystem/snd_dsp.cpp:1865 */
	void SetToZero(mdy_t* );
};

// <0249D615> soundsystem/snd_dsp.cpp:1865
inline void mdy_t::SetToZero()
{
} /* size: 0 */

// <0249D5F4> soundsystem/snd_dsp.cpp:1870
void MDY_Init(mdy_t* pmdy)
{
} /* size: 0 */

// <0249D5D3> soundsystem/snd_dsp.cpp:1871
void MDY_Free(mdy_t* pmdy)
{
} /* size: 0 */

// <0249D5B2> soundsystem/snd_dsp.cpp:1880
// variable: 1
void MDY_InitAll(void)
{
	{
		int i; // 1880
	}
} /* size: 0 */

// <0249D591> soundsystem/snd_dsp.cpp:1881
// variable: 1
void MDY_FreeAll(void)
{
	{
		int i; // 1881
	}
} /* size: 0 */

// <0249D3AD> soundsystem/snd_dsp.cpp:1890
// variables: 2
// function calls: 5
mdy_t* MDY_Alloc(dly_t* pdly, float ramptime, float modtime, float depth, float mix)
{
	int i; // 1892
	mdy_t* pmdy; // 1893
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1865
	mdy_t::SetToZero(); // 1870
	MDY_Init(mdy_t* pmdy); // 1870
	MDY_Init(mdy_t* pmdy); // 1904
} /* size: 222, variables: 2, inline expansions: 5 (65 bytes) */

// <0249D381> soundsystem/snd_dsp.cpp:1932
void MDY_ChangeVal(mdy_t* pmdy, int t)
{
} /* size: 0 */

// <0249D2FE> soundsystem/snd_dsp.cpp:1952
// variables: 4
inline int MDY_GetNext(mdy_t* pmdy, int x)
{

mdy_return: // 2012
	int xout; // 1954
	{
		int D0; // 1997
		int Dnew; // 1998
		float D1; // 1999
	}
} /* size: 0, variables: 1, goto labels: 1 */

// <0249CF48> soundsystem/snd_dsp.cpp:2041
// variables: 5
// function calls: 9
void MDY_GetNextN(mdy_t* pmdy, int* pbuffer, int SampleCount)
{
	int count; // 2043
	int* pb; // 2044

mdy_return: // 2012
	{
		int D0; // 1997
		int Dnew; // 1998
		float D1; // 1999
		Min<int>(const int& val1,
			const int& val2);  // 1936
		RMP_Init(rmp_t* prmp,
			float ramptime,
			int initval,
			int targetval,
			bool bEndAtTime);  // 1942
		MDY_ChangeVal(mdy_t* pmdy,
				int t);  // 2009
	}
	{
	}
	POS_ONE_GetNext(pos_one_t* p1); // 1799
	RMP_GetNext(rmp_t* prmp); // 1977
	RMP_HitEnd(rmp_t* prmp); // 1979
	Min<int>(const int& val1,
		const int& val2);  // 1703
	DLY_ChangeVal(dly_t* pdly,
			int t);  // 1983
	MDY_GetNext(mdy_t* pmdy,
			int x);  // 2048
} /* size: 609, variables: 2, goto labels: 1, inline expansions: 6 (859 bytes) */

// <0249CE4E> soundsystem/snd_dsp.cpp:2055
// variables: 6
mdy_t* MDY_Params(prc_t* pprc)
{
	mdy_t* pmdy; // 2057
	dly_t* pdly; // 2058
	float ramptime; // 2060
	float modtime; // 2061
	float depth; // 2066
	float mix; // 2067
} /* size: 152, variables: 6 */

// <0249CDD3> soundsystem/snd_dsp.cpp:2081
void* MDY_VParams(void* p)
{
} /* size: 38 */

// <0249CC71> soundsystem/snd_dsp.cpp:2090
// variables: 2
// function calls: 3
void MDY_Mod(mdy_t* pmdy, float v)
{
	int D0; // 2093
	float v2; // 2094
	Min<int>(const int& val1,
		const int& val2);  // 1936
	RMP_Init(rmp_t* prmp,
		float ramptime,
		int initval,
		int targetval,
		bool bEndAtTime);  // 1942
	MDY_ChangeVal(mdy_t* pmdy,
			int t);  // 2117
} /* size: 143, variables: 2, inline expansions: 3 (88 bytes) */

// <02492580> soundsystem/snd_dsp.cpp:2134
// member function: 1
// member variables: 7
// struct size: 224
struct rva_t {
	bool fused; /* 0 1 */
	int m; /* 4 4 */
	int fparallel; /* 8 4 */
	flt_t * pflt; /* 16 8 */
	dly_t * pdlys[12]; /* 24 96 */
	mdy_t * pmdlys[12]; /* 120 96 */
	bool fmoddly; /* 216 1 */
	/* soundsystem/snd_dsp.cpp:2145 */
	void SetToZero(rva_t* );
};

// <0249CC37> soundsystem/snd_dsp.cpp:2150
void RVA_Init(rva_t* prva)
{
} /* size: 0 */

// <0249CC16> soundsystem/snd_dsp.cpp:2151
// variable: 1
void RVA_InitAll(void)
{
	{
		int i; // 2151
	}
} /* size: 0 */

// <0249CBEA> soundsystem/snd_dsp.cpp:2155
// variable: 1
void RVA_Free(rva_t* prva)
{
	int i; // 2157
} /* size: 0, variables: 1 */

// <0249CBC9> soundsystem/snd_dsp.cpp:2183
// variable: 1
void RVA_FreeAll(void)
{
	{
		int i; // 2183
	}
} /* size: 0 */

// <0249C673> soundsystem/snd_dsp.cpp:2198
// variables: 13
// function calls: 9
rva_t* RVA_Alloc(int* D, int* a, int* b, int m, flt_t* pflt, int fparallel, float fmoddly, float fmodrate, float ftaps)
{
	int i; // 2201
	int dtype; // 2202
	rva_t* prva; // 2203
	flt_t* pflt2; // 2204
	bool btaps; // 2206
	{
		float t1; // 2273
		float t2; // 2274
		float t3; // 2275
		{
			int i; // 1682
		}
		Min<int>(const int& val1,
			const int& val2);  // 1689
		Min<int>(const int& val1,
			const int& val2);  // 1690
		Min<int>(const int& val1,
			const int& val2);  // 1691
		Min<int>(const int& val1,
			const int& val2);  // 1692
		DLY_ChangeTaps(dly_t* pdly,
				int t0,
				int t1,
				int t2,
				int t3);  // 1673
		DLY_ChangeTaps(dly_t* pdly,
				int t0,
				int t1,
				int t2,
				int t3);  // 2277
	}
	{
		float ramptime; // 2290
		float modtime; // 2291
		float depth; // 2292
		{
			int nDelaySize; // 2299
			clamp<float, float>(const float& val,
						const float& minVal,
						const float& maxVal);  // 2303
		}
	}
	DLY_Alloc(int D,
			int a,
			int b,
			int type);  // 2265
	RVA_Free(rva_t* prva); // 2321
} /* size: 1396, variables: 5, inline expansions: 2 (30 bytes) */

// <0249C5FA> soundsystem/snd_dsp.cpp:2355
// variables: 4
inline int RVA_GetNext(rva_t* prva, int x)
{
	int m; // 2357
	int y; // 2358
	{
		int i; // 2364
	}
	{
		int i; // 2371
	}
} /* size: 0, variables: 2 */

// <0249C1AE> soundsystem/snd_dsp.cpp:2392
// variables: 7
// function calls: 10
void RVA_GetNextN(rva_t* prva, int* pbuffer, int SampleCount)
{
	int count; // 2394
	int* pb; // 2395
	{
		int i; // 2371
	}
	{
		int i; // 2364

mdy_return: // 2012
		{
			int D0; // 1997
			int Dnew; // 1998
			float D1; // 1999
			RMP_Init(rmp_t* prmp,
				float ramptime,
				int initval,
				int targetval,
				bool bEndAtTime);  // 1942
			Min<int>(const int& val1,
				const int& val2);  // 1936
			MDY_ChangeVal(mdy_t* pmdy,
					int t);  // 2009
		}
		{
		}
		POS_ONE_GetNext(pos_one_t* p1); // 1799
		RMP_GetNext(rmp_t* prmp); // 1977
		RMP_HitEnd(rmp_t* prmp); // 1979
		Min<int>(const int& val1,
			const int& val2);  // 1703
		DLY_ChangeVal(dly_t* pdly,
				int t);  // 1983
		MDY_GetNext(mdy_t* pmdy,
				int x);  // 2365
	}
	RVA_GetNext(rva_t* prva,
			int x);  // 2399
} /* size: 865, variables: 2, inline expansions: 1 (780 bytes) */

// <0249BF28> soundsystem/snd_dsp.cpp:2426
// variables: 10
// function calls: 3
void RVA_ConstructDelays(float* rgd, float* rgf, int m, int* D, int* a, int* b, float gain, float feedback)
{
	int i; // 2429
	float r; // 2430
	int d; // 2431
	float t; // 2432
	float d1; // 2432
	float d2; // 2432
	float dm; // 2432
	bool bpredelay; // 2433
	int dmin; // 2458
	{
		int j; // 2475
		Max<int>(const int& val1,
			const int& val2);  // 2485
	}
	DLY_NormalizeFeedback(int dmin,
				float fbmin,
				int dly);  // 2451
	DLY_NormalizeFeedback(int dmin,
				float fbmin,
				int dly);  // 2452
} /* size: 915, variables: 9, inline expansions: 2 (59 bytes) */

// <0249BE20> soundsystem/snd_dsp.cpp:2508
// variables: 7
void RVA_PerfTest(void)
{
	double time1; // 2510
	double time2; // 2510
	int i; // 2512
	int k; // 2513
	int j; // 2514
	int m; // 2515
	int a; // 2516
} /* size: 0, variables: 7 */

// <0249BA0E> soundsystem/snd_dsp.cpp:2554
// variables: 26
// function calls: 3
rva_t* RVA_Params(prc_t* pprc)
{
	rva_t* prva; // 2556
	float size_max; // 2558
	float size_min; // 2559
	float numdelays; // 2561
	float feedback; // 2562
	float gain; // 2563
	float cutoff; // 2565
	float fparallel; // 2567
	float fmoddly; // 2569
	float fmodrate; // 2570
	float width; // 2572
	float depth; // 2573
	float height; // 2574
	float fbwidth; // 2576
	float fbdepth; // 2577
	float fbheight; // 2578
	float ftaps; // 2580
	int D; // 2591
	int a; // 2592
	int b; // 2593
	int m; // 2594
	flt_t* pflt; // 2653
	{
		float rgd; // 2606
		float rgfb; // 2607
	}
	{
		int i; // 2626
		DLY_NormalizeFeedback(int dmin,
					float fbmin,
					int dly);  // 2644
	}
	{
		prc_t prcf; // 2660
	}
	Clamp<int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 119
	ClampFloatToInt<float>(float val,
				int minVal,
				int maxVal);  // 2598
} /* size: 1113, variables: 22, inline expansions: 2 (55 bytes) */

// <024926AB> soundsystem/snd_dsp.cpp:2697
// member function: 1
// member variables: 4
// struct size: 200
struct dfr_t {
	bool fused; /* 0 1 */
	int n; /* 4 4 */
	int w[16]; /* 8 64 */
	dly_t * pdlys[16]; /* 72 128 */
	/* soundsystem/snd_dsp.cpp:2704 */
	void SetToZero(dfr_t* );
};

// <0249B939> soundsystem/snd_dsp.cpp:2704
inline void dfr_t::SetToZero()
{
} /* size: 0 */

// <0249B918> soundsystem/snd_dsp.cpp:2709
void DFR_Init(dfr_t* pdfr)
{
} /* size: 0 */

// <0249B7DF> soundsystem/snd_dsp.cpp:2710
// variable: 1
// function calls: 5
void DFR_InitAll(void)
{
	{
		int i; // 2710
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 829
		flt_t::SetToZero(); // 836
		FLT_Init(flt_t* pf); // 836
		DFR_Init(dfr_t* pdfr); // 2710
	}
} /* size: 0 */

// <0249B7B1> soundsystem/snd_dsp.cpp:2714
// variable: 1
void DFR_Free(dfr_t* pdfr)
{
	{
		int i; // 2720
	}
} /* size: 0 */

// <0249B4DB> soundsystem/snd_dsp.cpp:2730
// variables: 2
// function calls: 10
void DFR_FreeAll(void)
{
	{
		int i; // 2730
		{
			int i; // 2720
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 1294
			dly_t::SetToZero(); // 1310
			dly_t::Free(); // 1318
			DLY_Free(dly_t* pDelay); // 2722
		}
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 2704
		dfr_t::SetToZero(); // 2725
		DFR_Free(dfr_t* pdfr); // 2714
		DFR_Free(dfr_t* pdfr); // 2730
	}
} /* size: 0 */

// <0249B24F> soundsystem/snd_dsp.cpp:2739
// variables: 2
// function calls: 7
dfr_t* DFR_Alloc(int* D, int* a, int* b, int n)
{
	int i; // 2742
	dfr_t* pdfr; // 2743
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 829
	flt_t::SetToZero(); // 836
	FLT_Init(flt_t* pf); // 836
	DFR_Init(dfr_t* pdfr); // 2763
	DLY_Alloc(int D,
			int a,
			int b,
			int type);  // 2768
	DFR_Free(dfr_t* pdfr); // 2776
} /* size: 368, variables: 2, inline expansions: 7 (109 bytes) */

// <0249B1FC> soundsystem/snd_dsp.cpp:2791
// variables: 3
inline int DFR_GetNext(dfr_t* pdfr, int x)
{
	int i; // 2793
	int y; // 2794
	dly_t* pdly; // 2795
} /* size: 0, variables: 3 */

// <0249AFA2> soundsystem/snd_dsp.cpp:2810
// variables: 2
// function calls: 5
void DFR_GetNextN(dfr_t* pdfr, int* pbuffer, int SampleCount)
{
	int count; // 2812
	int* pb; // 2813
	GetDly(int dlysize,
		int* psamps,
		int* psamp,
		int tdelay);  // 722
	DlyPtrReverse(int dlysize,
			int* psamps,
			int** ppsamp);  // 333
	DlyUpdate(int dlysize,
			int* psamps,
			int** ppsamp);  // 727
	DelayAllpass(int delaysize,
			int tdelay,
			int* psamps,
			int** ppsamp,
			int fbgain,
			int outgain,
			int in);  // 2802
	DFR_GetNext(dfr_t* pdfr,
			int x);  // 2817
} /* size: 236, variables: 2, inline expansions: 5 (370 bytes) */

// <0249ADFF> soundsystem/snd_dsp.cpp:2829
// variables: 11
// function calls: 2
dfr_t* DFR_Params(prc_t* pprc)
{
	dfr_t* pdfr; // 2831
	int i; // 2832
	int s; // 2833
	float size; // 2834
	float numdelays; // 2835
	float feedback; // 2836
	float gain; // 2837
	int D; // 2844
	int a; // 2845
	int b; // 2846
	int n; // 2847
	Clamp<int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 119
	ClampFloatToInt<float>(float val,
				int minVal,
				int maxVal);  // 2856
} /* size: 572, variables: 11, inline expansions: 2 (180 bytes) */

// <0249AD84> soundsystem/snd_dsp.cpp:2880
void* DFR_VParams(void* p)
{
} /* size: 38 */

// <0249AD43> soundsystem/snd_dsp.cpp:2886
void DFR_Mod(void* p, float v)
{
} /* size: 5 */

// <02492783> soundsystem/snd_dsp.cpp:2899
// member function: 1
// member variables: 2
// struct size: 16
struct lfowav_t {
	int type; /* 0 4 */
	dly_t * pdly; /* 8 8 */
	/* soundsystem/snd_dsp.cpp:2903 */
	void SetToZero(lfowav_t* );
};

// <0249AD2A> soundsystem/snd_dsp.cpp:2903
inline void lfowav_t::SetToZero()
{
} /* size: 0 */

// <0249AD09> soundsystem/snd_dsp.cpp:2910
void LFOWAV_Free(lfowav_t* plw)
{
} /* size: 0 */

// <0249AAB7> soundsystem/snd_dsp.cpp:2922
// variable: 1
// function calls: 9
void LFOWAV_FreeAll(void)
{
	{
		int i; // 2924
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 1294
		dly_t::SetToZero(); // 1310
		dly_t::Free(); // 1318
		DLY_Free(dly_t* pDelay); // 2915
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 2903
		lfowav_t::SetToZero(); // 2917
		LFOWAV_Free(lfowav_t* plw); // 2925
	}
} /* size: 0 */

// <0249A9C7> soundsystem/snd_dsp.cpp:2931
// variables: 2
void LFOWAV_Fill(int* w, int count, int type)
{
	int i; // 2933
	int x; // 2933
} /* size: 0, variables: 2 */

// <0249A840> soundsystem/snd_dsp.cpp:2986
// variables: 2
// function calls: 3
void LFOWAV_InitAll(void)
{
	int i; // 2988
	dly_t* pdly; // 2989
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 2991
	DLY_Alloc(int D,
			int a,
			int b,
			int type);  // 2997
} /* size: 0, variables: 2, inline expansions: 3 (0 bytes) */

// <024927FF> soundsystem/snd_dsp.cpp:3023
// member function: 1
// member variables: 7
// struct size: 64
struct lfo_t {
	bool fused; /* 0 1 */
	dly_t * pdly; /* 8 8 */
	int gain; /* 16 4 */
	float f; /* 20 4 */
	pos_t pos; /* 24 16 */
	pos_one_t pos1; /* 40 20 */
	int foneshot; /* 60 4 */
	/* soundsystem/snd_dsp.cpp:3037 */
	void SetToZero(lfo_t* );
};

// <0249A827> soundsystem/snd_dsp.cpp:3037
inline void lfo_t::SetToZero()
{
} /* size: 0 */

// <0249A806> soundsystem/snd_dsp.cpp:3042
void LFO_Init(lfo_t* plfo)
{
} /* size: 0 */

// <0249A7E5> soundsystem/snd_dsp.cpp:3043
// variable: 1
void LFO_InitAll(void)
{
	{
		int i; // 3043
	}
} /* size: 0 */

// <0249A7C4> soundsystem/snd_dsp.cpp:3044
void LFO_Free(lfo_t* plfo)
{
} /* size: 0 */

// <0249A7A3> soundsystem/snd_dsp.cpp:3045
// variable: 1
void LFO_FreeAll(void)
{
	{
		int i; // 3045
	}
} /* size: 0 */

// <0249A771> soundsystem/snd_dsp.cpp:3050
// variable: 1
inline float LFO_HzToStep(float freqHz)
{
	float lfoHz; // 3052
} /* size: 0, variables: 1 */

// <0249A45D> soundsystem/snd_dsp.cpp:3068
// variables: 4
// function calls: 10
lfo_t* LFO_Alloc(int wtype, float freqHz, bool foneshot, float gain)
{
	int i; // 3070
	int type; // 3071
	float lfostep; // 3072
	{
		lfo_t* plfo; // 3078
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 3037
		lfo_t::SetToZero(); // 3044
		LFO_Free(lfo_t* plfo); // 3044
		LFO_Init(lfo_t* plfo); // 3080
		LFO_HzToStep(float freqHz); // 3088
		POS_Init(pos_t* p,
			int D,
			float fstep);  // 3093
		POS_Init(pos_t* p,
			int D,
			float fstep);  // 1220
		POS_ONE_Init(pos_one_t* p1,
				int D,
				float fstep);  // 3095
	}
	Min<int>(const int& val1,
		const int& val2);  // 3071
} /* size: 343, variables: 3, inline expansions: 1 (19 bytes) */

// <0249A422> soundsystem/snd_dsp.cpp:3111
// variable: 1
inline int LFO_GetNext(lfo_t* plfo, int x)
{
	int i; // 3113
} /* size: 0, variables: 1 */

// <0249A25F> soundsystem/snd_dsp.cpp:3132
// variables: 2
// function calls: 4
void LFO_GetNextN(lfo_t* plfo, int* pbuffer, int SampleCount)
{
	int count; // 3134
	int* pb; // 3135
	POS_Wrap(int D,
		int* i);  // 1198
	{
	}
	POS_GetNext(pos_t* p); // 3118
	{
	}
	POS_ONE_GetNext(pos_one_t* p1); // 3120
	LFO_GetNext(lfo_t* plfo,
			int x);  // 3139
} /* size: 418, variables: 2, inline expansions: 4 (745 bytes) */

// <0249A213> soundsystem/snd_dsp.cpp:3144
// variables: 3
lfo_t* LFO_Params(prc_t* pprc)
{
	lfo_t* plfo; // 3146
	bool foneshot; // 3147
	float gain; // 3148
} /* size: 0, variables: 3 */

// <0249A1D8> soundsystem/snd_dsp.cpp:3155
// variable: 1
void LFO_ChangeVal(lfo_t* plfo, float fhz)
{
	float fstep; // 3157
} /* size: 0, variables: 1 */

// <0249A122> soundsystem/snd_dsp.cpp:3167
// function call: 1
void* LFO_VParams(void* p)
{
	LFO_Params(prc_t* pprc); // 3170
} /* size: 71, inline expansions: 1 (38 bytes) */

// <02499FC8> soundsystem/snd_dsp.cpp:3176
// variables: 2
// function calls: 4
void LFO_Mod(lfo_t* plfo, float v)
{
	float fhz; // 3178
	float fhznew; // 3179
	LFO_HzToStep(float freqHz); // 3157
	POS_ChangeVal(pos_t* p,
			float fstepnew);  // 3162
	POS_ChangeVal(pos_t* p,
			float fstepnew);  // 3164
	LFO_ChangeVal(lfo_t* plfo,
			float fhz);  // 3184
} /* size: 52, variables: 2, inline expansions: 4 (61 bytes) */

// <024928C9> soundsystem/snd_dsp.cpp:3198
// member function: 1
// member variables: 14
// struct size: 88
struct ptc_t {
	bool fused; /* 0 1 */
	bool fdup; /* 1 1 */
	dly_t * pdly_in; /* 8 8 */
	dly_t * pdly_out; /* 16 8 */
	int * pin; /* 24 8 */
	int * pout; /* 32 8 */
	int cin; /* 40 4 */
	int cout; /* 44 4 */
	int cxfade; /* 48 4 */
	int ccut; /* 52 4 */
	int cduplicate; /* 56 4 */
	int iin; /* 60 4 */
	pos_one_t psn; /* 64 20 */
	float fstep; /* 84 4 */
	/* soundsystem/snd_dsp.cpp:3221 */
	void SetToZero(ptc_t* );
};

// <02499FAF> soundsystem/snd_dsp.cpp:3221
inline void ptc_t::SetToZero()
{
} /* size: 0 */

// <02499F8E> soundsystem/snd_dsp.cpp:3226
void PTC_Init(ptc_t* pptc)
{
} /* size: 0 */

// <02499F4C> soundsystem/snd_dsp.cpp:3237
// variable: 1
void PTC_InitAll(void)
{
	{
		int i; // 3237
	}
} /* size: 0 */

// <02499BA2> soundsystem/snd_dsp.cpp:3283
// variables: 8
// function calls: 8
ptc_t* PTC_Alloc(float timeslice, float timexfade, float fstep)
{
	int i; // 3286
	ptc_t* pptc; // 3287
	float tout; // 3288
	int cin; // 3289
	int cout; // 3289
	float tslice; // 3290
	float txfade; // 3291
	float tcutdup; // 3292
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 3226
	PTC_Init(ptc_t* pptc); // 3226
	PTC_Init(ptc_t* pptc); // 3310
	DLY_Alloc(int D,
			int a,
			int b,
			int type);  // 3338
	DLY_Alloc(int D,
			int a,
			int b,
			int type);  // 3339
	POS_Init(pos_t* p,
		int D,
		float fstep);  // 1220
	POS_ONE_Init(pos_one_t* p1,
			int D,
			float fstep);  // 3359
} /* size: 624, variables: 8, inline expansions: 8 (299 bytes) */

// <02499B3E> soundsystem/snd_dsp.cpp:3380
// variables: 2
inline int xfade(int yfadein, int yfadeout, int nsamples, int isample)
{
	int yout; // 3382
	int m; // 3383
} /* size: 0, variables: 2 */

// <024999D2> soundsystem/snd_dsp.cpp:3398
// variables: 6
// function call: 1
void TimeExpand(int* w, int* v, int cin, int cout, int cxfade, int cduplicate)
{
	int i; // 3400
	int j; // 3400
	int m; // 3401
	int p; // 3402
	int q; // 3403
	int D; // 3404
	xfade(int yfadein,
		int yfadeout,
		int nsamples,
		int isample);  // 3434
} /* size: 234, variables: 6, inline expansions: 1 (26 bytes) */

// <02499867> soundsystem/snd_dsp.cpp:3455
// variables: 6
// function call: 1
void TimeCompress(int* w, int* v, int cin, int cout, int cxfade, int ccut)
{
	int i; // 3457
	int j; // 3457
	int m; // 3458
	int p; // 3459
	int q; // 3460
	int D; // 3461
	xfade(int yfadein,
		int yfadeout,
		int nsamples,
		int isample);  // 3494
} /* size: 170, variables: 6, inline expansions: 1 (28 bytes) */

// <0249978B> soundsystem/snd_dsp.cpp:3505
// variables: 6
inline int PTC_GetNext(ptc_t* pptc, int x)
{
	int iout; // 3507
	int xout; // 3507
	bool fhitend; // 3508
	const char   __FUNCTION__; // 19486
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3511
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 3525
	}
} /* size: 0, variables: 4 */

// <0249951C> soundsystem/snd_dsp.cpp:3550
// variables: 2
// function calls: 4
void PTC_GetNextN(ptc_t* pptc, int* pbuffer, int SampleCount)
{
	int count; // 3552
	int* pb; // 3553
	{
	}
	{
	}
	POS_ONE_GetNext(pos_one_t* p1); // 3524
	{
	}
	POS_Init(pos_t* p,
		int D,
		float fstep);  // 1220
	POS_ONE_Init(pos_one_t* p1,
			int D,
			float fstep);  // 3537
	PTC_GetNext(ptc_t* pptc,
			int x);  // 3557
} /* size: 486, variables: 2, inline expansions: 4 (641 bytes) */

// <024994E1> soundsystem/snd_dsp.cpp:3566
void PTC_ChangeVal(ptc_t* pptc, float fstep, float ramptime)
{
} /* size: 0 */

// <02499488> soundsystem/snd_dsp.cpp:3572
// variables: 4
ptc_t* PTC_Params(prc_t* pprc)
{
	ptc_t* pptc; // 3574
	float pitch; // 3576
	float timeslice; // 3577
	float txfade; // 3578
} /* size: 0, variables: 4 */

// <024993C5> soundsystem/snd_dsp.cpp:3585
// function call: 1
void* PTC_VParams(void* p)
{
	PTC_Params(prc_t* pprc); // 3588
} /* size: 53, inline expansions: 1 (20 bytes) */

// <02499358> soundsystem/snd_dsp.cpp:3595
// variables: 2
void PTC_Mod(ptc_t* pptc, float v)
{
	float fstep; // 3597
	float fstepnew; // 3598
} /* size: 5, variables: 2 */

// <02492A05> soundsystem/snd_dsp.cpp:3616
// member function: 1
// member variables: 5
// struct size: 168
struct env_t {
	bool fused; /* 0 1 */
	bool fhitend; /* 1 1 */
	bool fexp; /* 2 1 */
	int ienv; /* 4 4 */
	rmp_t rmps[4]; /* 8 160 */
	/* soundsystem/snd_dsp.cpp:3625 */
	void SetToZero(env_t* );
};

// <024992FD> soundsystem/snd_dsp.cpp:3631
void ENV_Free(env_t* penv)
{
} /* size: 0 */

// <024992DC> soundsystem/snd_dsp.cpp:3632
// variable: 1
void ENV_InitAll(void)
{
	{
		int i; // 3632
	}
} /* size: 0 */

// <024992BB> soundsystem/snd_dsp.cpp:3633
// variable: 1
void ENV_FreeAll(void)
{
	{
		int i; // 3633
	}
} /* size: 0 */

// <02498E09> soundsystem/snd_dsp.cpp:3642
// variables: 5
// function calls: 9
env_t* ENV_Alloc(int type, float famp1, float famp2, float famp3, float attack, float decay, float sustain, float release, bool fexp)
{
	int i; // 3644
	env_t* penv; // 3645
	{
		int amp1; // 3652
		int amp2; // 3653
		int amp3; // 3654
		RMP_Init(rmp_t* prmp,
			float ramptime,
			int initval,
			int targetval,
			bool bEndAtTime);  // 3664
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 3625
		env_t::SetToZero(); // 3631
		ENV_Free(env_t* penv); // 3631
		ENV_Init(env_t* penv); // 3658
		RMP_Init(rmp_t* prmp,
			float ramptime,
			int initval,
			int targetval,
			bool bEndAtTime);  // 3665
		RMP_Init(rmp_t* prmp,
			float ramptime,
			int initval,
			int targetval,
			bool bEndAtTime);  // 3666
		RMP_Init(rmp_t* prmp,
			float ramptime,
			int initval,
			int targetval,
			bool bEndAtTime);  // 3667
	}
} /* size: 269, variables: 2 */

// <02498DC1> soundsystem/snd_dsp.cpp:3681
// variables: 2
inline int ENV_GetNext(env_t* penv, int x)
{
	{
		int i; // 3685
		int y; // 3686
	}
} /* size: 0 */

// <02498C0E> soundsystem/snd_dsp.cpp:3716
// variables: 4
// function calls: 4
void ENV_GetNextN(env_t* penv, int* pbuffer, int SampleCount)
{
	int count; // 3718
	int* pb; // 3719
	{
		int i; // 3685
		int y; // 3686
		{
		}
		POS_ONE_GetNext(pos_one_t* p1); // 1799
		RMP_GetNext(rmp_t* prmp); // 3689
	}
	ENV_GetNext(env_t* penv,
			int x);  // 3681
	ENV_GetNext(env_t* penv,
			int x);  // 3723
} /* size: 498, variables: 2, inline expansions: 2 (786 bytes) */

// <02498AE0> soundsystem/snd_dsp.cpp:3728
// variables: 11
env_t* ENV_Params(prc_t* pprc)
{
	env_t* penv; // 3730
	float type; // 3732
	float amp1; // 3733
	float amp2; // 3734
	float amp3; // 3735
	float attack; // 3736
	float decay; // 3737
	float sustain; // 3738
	float release; // 3739
	float fexp; // 3740
	bool bexp; // 3741
} /* size: 96, variables: 11 */

// <02492AC1> soundsystem/snd_dsp.cpp:3762
// member function: 1
// member variables: 11
// struct size: 108
struct efo_t {
	bool fused; /* 0 1 */
	int xout; /* 4 4 */
	bool bgate; /* 8 1 */
	bool bgateon; /* 9 1 */
	bool bexp; /* 10 1 */
	int thresh; /* 12 4 */
	int thresh_off; /* 16 4 */
	float attack_time; /* 20 4 */
	float decay_time; /* 24 4 */
	rmp_t rmp_attack; /* 28 40 */
	rmp_t rmp_decay; /* 68 40 */
	/* soundsystem/snd_dsp.cpp:3783 */
	void SetToZero(efo_t* );
};

// <02498A0B> soundsystem/snd_dsp.cpp:3783
inline void efo_t::SetToZero()
{
} /* size: 0 */

// <024989EA> soundsystem/snd_dsp.cpp:3788
void EFO_Init(efo_t* pefo)
{
} /* size: 0 */

// <024989C9> soundsystem/snd_dsp.cpp:3789
void EFO_Free(efo_t* pefo)
{
} /* size: 0 */

// <024989A8> soundsystem/snd_dsp.cpp:3790
// variable: 1
void EFO_InitAll(void)
{
	{
		int i; // 3790
	}
} /* size: 0 */

// <02498987> soundsystem/snd_dsp.cpp:3791
// variable: 1
void EFO_FreeAll(void)
{
	{
		int i; // 3791
	}
} /* size: 0 */

// <02498671> soundsystem/snd_dsp.cpp:3805
// variables: 2
// function calls: 9
efo_t* EFO_Alloc(float threshold, float attack_sec, float decay_sec, bool bexp)
{
	int i; // 3807
	efo_t* pefo; // 3808
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 3783
	efo_t::SetToZero(); // 3789
	EFO_Free(efo_t* pefo); // 3789
	EFO_Init(efo_t* pefo); // 3816
	RMP_Init(rmp_t* prmp,
		float ramptime,
		int initval,
		int targetval,
		bool bEndAtTime);  // 3830
	RMP_Init(rmp_t* prmp,
		float ramptime,
		int initval,
		int targetval,
		bool bEndAtTime);  // 3831
	RMP_SetEnd(rmp_t* prmp); // 3832
	RMP_SetEnd(rmp_t* prmp); // 3833
} /* size: 322, variables: 2, inline expansions: 9 (137 bytes) */

// <0249860E> soundsystem/snd_dsp.cpp:3883
// variables: 4
inline int EFO_GetNext(efo_t* pefo, int x)
{
	int r; // 3885
	int xa; // 3886
	int xdif; // 3887
	{
		bool bgateon_prev; // 3914
	}
} /* size: 0, variables: 3 */

// <02498097> soundsystem/snd_dsp.cpp:4010
// variables: 3
// function calls: 15
void EFO_GetNextN(efo_t* pefo, int* pbuffer, int SampleCount)
{
	int count; // 4012
	int* pb; // 4013
	{
		bool bgateon_prev; // 3914
		RMP_HitEnd(rmp_t* prmp); // 3929
		RMP_SetEnd(rmp_t* prmp); // 3972
		RMP_Init(rmp_t* prmp,
			float ramptime,
			int initval,
			int targetval,
			bool bEndAtTime);  // 3974
		RMP_HitEnd(rmp_t* prmp); // 3938
		RMP_SetEnd(rmp_t* prmp); // 3939
		RMP_Init(rmp_t* prmp,
			float ramptime,
			int initval,
			int targetval,
			bool bEndAtTime);  // 3943
		{
		}
		POS_ONE_GetNext(pos_one_t* p1); // 1799
		RMP_GetNext(rmp_t* prmp); // 3990
		{
		}
		POS_ONE_GetNext(pos_one_t* p1); // 1799
		RMP_GetNext(rmp_t* prmp); // 3950
		{
		}
		POS_ONE_GetNext(pos_one_t* p1); // 1799
		RMP_GetNext(rmp_t* prmp); // 3971
		{
		}
		POS_ONE_GetNext(pos_one_t* p1); // 1799
		RMP_GetNext(rmp_t* prmp); // 3938
	}
	EFO_GetNext(efo_t* pefo,
			int x);  // 4017
} /* size: 1137, variables: 2, inline expansions: 1 (961 bytes) */

// <02498072> soundsystem/snd_dsp.cpp:4024
inline float Gain_To_Amplitude(float gain)
{
} /* size: 0 */

// <02497F08> soundsystem/snd_dsp.cpp:4029
// variables: 6
// function calls: 3
efo_t* EFO_Params(prc_t* pprc)
{
	efo_t* penv; // 4031
	float threshold; // 4033
	float attack; // 4034
	float decay; // 4035
	float fexp; // 4036
	bool bexp; // 4037
	dB_To_Gain(float dB); // 53
	dB_To_Gain(float dB); // 4033
	Gain_To_Amplitude(float gain); // 4033
} /* size: 176, variables: 6, inline expansions: 3 (73 bytes) */

// <02497E8D> soundsystem/snd_dsp.cpp:4050
void* EFO_VParams(void* p)
{
} /* size: 38 */

// <02497E4C> soundsystem/snd_dsp.cpp:4056
void EFO_Mod(void* p, float v)
{
} /* size: 5 */

// <02492BCD> soundsystem/snd_dsp.cpp:4066
// member function: 1
// member variables: 4
// struct size: 32
struct crs_t {
	bool fused; /* 0 1 */
	mdy_t * pmdy; /* 8 8 */
	lfo_t * plfo; /* 16 8 */
	int lfoprev; /* 24 4 */
	/* soundsystem/snd_dsp.cpp:4075 */
	void SetToZero(crs_t* );
};

// <02497E33> soundsystem/snd_dsp.cpp:4075
inline void crs_t::SetToZero()
{
} /* size: 0 */

// <02497E12> soundsystem/snd_dsp.cpp:4080
void CRS_Init(crs_t* pcrs)
{
} /* size: 0 */

// <02497DF1> soundsystem/snd_dsp.cpp:4081
void CRS_Free(crs_t* pcrs)
{
} /* size: 0 */

// <02497932> soundsystem/snd_dsp.cpp:4093
// variable: 1
// function calls: 19
void CRS_FreeAll(void)
{
	{
		int i; // 4093
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 1294
		dly_t::SetToZero(); // 1310
		dly_t::Free(); // 1318
		DLY_Free(dly_t* pDelay); // 1875
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 1865
		mdy_t::SetToZero(); // 1876
		MDY_Free(mdy_t* pmdy); // 4085
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 3037
		lfo_t::SetToZero(); // 3044
		LFO_Free(lfo_t* plfo); // 3044
		LFO_Free(lfo_t* plfo); // 4086
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 4075
		crs_t::SetToZero(); // 4087
		CRS_Free(crs_t* pcrs); // 4081
		CRS_Free(crs_t* pcrs); // 4093
	}
} /* size: 0 */

// <024974CA> soundsystem/snd_dsp.cpp:4104
// variables: 7
// function calls: 11
crs_t* CRS_Alloc(int lfotype, float fHz, float fdepth, float mix)
{
	int i; // 4107
	crs_t* pcrs; // 4108
	dly_t* pdly; // 4109
	mdy_t* pmdy; // 4110
	lfo_t* plfo; // 4111
	float ramptime; // 4112
	int D; // 4113
	DLY_Alloc(int D,
			int a,
			int b,
			int type);  // 4137
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 4075
	crs_t::SetToZero(); // 4080
	CRS_Init(crs_t* pcrs); // 4080
	CRS_Init(crs_t* pcrs); // 4131
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 3037
	lfo_t::SetToZero(); // 3044
	LFO_Free(lfo_t* plfo); // 3044
	LFO_Free(lfo_t* plfo); // 4145
} /* size: 352, variables: 7, inline expansions: 11 (252 bytes) */

// <0249746A> soundsystem/snd_dsp.cpp:4160
// variables: 4
inline int CRS_GetNext(crs_t* pcrs, int x)
{
	int l; // 4162
	int y; // 4163
	{
		int D; // 4180
		int tap; // 4181
	}
} /* size: 0, variables: 2 */

// <02496E07> soundsystem/snd_dsp.cpp:4200
// variables: 7
// function calls: 17
void CRS_GetNextN(crs_t* pcrs, int* pbuffer, int SampleCount)
{
	int count; // 4202
	int* pb; // 4203
	POS_Wrap(int D,
		int* i);  // 1198
	{
	}
	POS_GetNext(pos_t* p); // 3118
	{
	}
	POS_ONE_GetNext(pos_one_t* p1); // 3120
	LFO_GetNext(lfo_t* plfo,
			int x);  // 4172
	{
		int D; // 4180
		int tap; // 4181
		RMP_Init(rmp_t* prmp,
			float ramptime,
			int initval,
			int targetval,
			bool bEndAtTime);  // 1942
		Min<int>(const int& val1,
			const int& val2);  // 1936
		MDY_ChangeVal(mdy_t* pmdy,
				int t);  // 4190
	}

mdy_return: // 2012
	{
		int D0; // 1997
		int Dnew; // 1998
		float D1; // 1999
		Min<int>(const int& val1,
			const int& val2);  // 1936
		RMP_Init(rmp_t* prmp,
			float ramptime,
			int initval,
			int targetval,
			bool bEndAtTime);  // 1942
		MDY_ChangeVal(mdy_t* pmdy,
				int t);  // 2009
	}
	{
	}
	POS_ONE_GetNext(pos_one_t* p1); // 1799
	RMP_GetNext(rmp_t* prmp); // 1977
	RMP_HitEnd(rmp_t* prmp); // 1979
	Min<int>(const int& val1,
		const int& val2);  // 1703
	DLY_ChangeVal(dly_t* pdly,
			int t);  // 1983
	MDY_GetNext(mdy_t* pmdy,
			int x);  // 4167
	CRS_GetNext(crs_t* pcrs,
			int x);  // 4207
} /* size: 1032, variables: 2, goto labels: 1, inline expansions: 11 (2475 bytes) */

// <02496DD5> soundsystem/snd_dsp.cpp:4214
// variable: 1
crs_t* CRS_Params(prc_t* pprc)
{
	crs_t* pcrs; // 4216
} /* size: 0, variables: 1 */

// <02496D39> soundsystem/snd_dsp.cpp:4223
// function call: 1
void* CRS_VParams(void* p)
{
	CRS_Params(prc_t* pprc); // 4226
} /* size: 58, inline expansions: 1 (25 bytes) */

// <02496CF8> soundsystem/snd_dsp.cpp:4229
void CRS_Mod(void* p, float v)
{
} /* size: 5 */

// <02492C69> soundsystem/snd_dsp.cpp:4240
// member function: 1
// member variables: 13
// struct size: 88
struct amp_t {
	bool fused; /* 0 1 */
	int gain; /* 4 4 */
	int gain_max; /* 8 4 */
	int distmix; /* 12 4 */
	int vfeed; /* 16 4 */
	int vthresh; /* 20 4 */
	bool fchanging; /* 24 1 */
	float ramptime; /* 28 4 */
	int mtime; /* 32 4 */
	int mtimecur; /* 36 4 */
	int depth; /* 40 4 */
	bool brand; /* 44 1 */
	rmp_t rmp_interp; /* 48 40 */
	/* soundsystem/snd_dsp.cpp:4259 */
	void SetToZero(amp_t* );
};

// <02496CDF> soundsystem/snd_dsp.cpp:4259
inline void amp_t::SetToZero()
{
} /* size: 0 */

// <02496CBE> soundsystem/snd_dsp.cpp:4264
void AMP_Init(amp_t* pamp)
{
} /* size: 0 */

// <02496C9D> soundsystem/snd_dsp.cpp:4265
void AMP_Free(amp_t* pamp)
{
} /* size: 0 */

// <02496C7C> soundsystem/snd_dsp.cpp:4274
// variable: 1
void AMP_InitAll(void)
{
	{
		int i; // 4274
	}
} /* size: 0 */

// <02496C5B> soundsystem/snd_dsp.cpp:4275
// variable: 1
void AMP_FreeAll(void)
{
	{
		int i; // 4275
	}
} /* size: 0 */

// <02496A79> soundsystem/snd_dsp.cpp:4278
// variables: 2
// function calls: 4
amp_t* AMP_Alloc(float gain, float vthresh, float distmix, float vfeed, float ramptime, float modtime, float depth, bool brand)
{
	int i; // 4280
	amp_t* pamp; // 4281
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 3226
	PTC_Init(ptc_t* pptc); // 3226
	AMP_Init(amp_t* pamp); // 4299
} /* size: 214, variables: 2, inline expansions: 4 (52 bytes) */

// <024969DE> soundsystem/snd_dsp.cpp:4324
// variables: 7
inline int AMP_GetNext(amp_t* pamp, int x)
{
	int y; // 4326
	int d; // 4327
	int xout; // 4354
	{
		int vthresh; // 4333
	}
	{
		int gain_new; // 4385
		int G1; // 4386
		int G2; // 4387
	}
} /* size: 0, variables: 3 */

// <024966D3> soundsystem/snd_dsp.cpp:4419
// variables: 6
// function calls: 7
void AMP_GetNextN(amp_t* pamp, int* pbuffer, int SampleCount)
{
	int count; // 4421
	int* pb; // 4422
	{
		int vthresh; // 4333
	}
	{
	}
	POS_ONE_GetNext(pos_one_t* p1); // 1799
	RMP_GetNext(rmp_t* prmp); // 4369
	RMP_HitEnd(rmp_t* prmp); // 4371
	{
		int gain_new; // 4385
		int G1; // 4386
		int G2; // 4387
		RMP_Init(rmp_t* prmp,
			float ramptime,
			int initval,
			int targetval,
			bool bEndAtTime);  // 4410
		Max<int>(const int& val1,
			const int& val2);  // 4395
		Min<int>(const int& val1,
			const int& val2);  // 4395
	}
	AMP_GetNext(amp_t* pamp,
			int x);  // 4426
} /* size: 575, variables: 2, inline expansions: 4 (775 bytes) */

// <02496690> soundsystem/snd_dsp.cpp:4431
void AMP_Mod(amp_t* pamp, float v)
{
} /* size: 5 */

// <024965CB> soundsystem/snd_dsp.cpp:4436
// variables: 6
amp_t* AMP_Params(prc_t* pprc)
{
	amp_t* pamp; // 4438
	float ramptime; // 4440
	float modtime; // 4441
	float depth; // 4442
	float flRand; // 4443
	bool brand; // 4444
} /* size: 140, variables: 6 */

// <02496550> soundsystem/snd_dsp.cpp:4461
void* AMP_VParams(void* p)
{
} /* size: 38 */

// <02492D95> soundsystem/snd_dsp.cpp:4472
// member variable: 1
// struct size: 4
struct nul_t {
	int type; /* 0 4 */
};

// <0249651A> soundsystem/snd_dsp.cpp:4479
void NULL_Init(nul_t* pnul)
{
} /* size: 0 */

// <0249650A> soundsystem/snd_dsp.cpp:4480
void NULL_InitAll(void)
{
} /* size: 0 */

// <024964E9> soundsystem/snd_dsp.cpp:4481
void NULL_Free(nul_t* pnul)
{
} /* size: 0 */

// <024964DA> soundsystem/snd_dsp.cpp:4482
void NULL_FreeAll(void)
{
} /* size: 0 */

// <024964B3> soundsystem/snd_dsp.cpp:4483
nul_t* NULL_Alloc(void)
{
} /* size: 0 */

// <0249646D> soundsystem/snd_dsp.cpp:4485
int NULL_GetNext(void* p, int x)
{
} /* size: 7 */

// <02496413> soundsystem/snd_dsp.cpp:4487
void NULL_GetNextN(nul_t* pnul, int* pbuffer, int SampleCount)
{
} /* size: 5 */

// <024963D2> soundsystem/snd_dsp.cpp:4489
void NULL_Mod(void* p, float v)
{
} /* size: 5 */

// <02496399> soundsystem/snd_dsp.cpp:4491
void* NULL_VParams(void* p)
{
} /* size: 12 */

// <024962A1> soundsystem/snd_dsp.cpp:4508
// variables: 7
bool PRC_InitAll(prc_t* prcs, int count)
{
	int i; // 4510
	prc_Param_t pfnParam; // 4511
	prc_GetNext_t pfnGetNext; // 4512
	prc_GetNextN_t pfnGetNextN; // 4513
	prc_Free_t pfnFree; // 4514
	prc_Mod_t pfnMod; // 4515
	bool fok; // 4517
} /* size: 776, variables: 7 */

// <02496280> soundsystem/snd_dsp.cpp:4636
void PRC_Free(prc_t* pprc)
{
} /* size: 0 */

// <02496245> soundsystem/snd_dsp.cpp:4646
// variable: 1
void PRC_FreeAll(prc_t* prcs, int count)
{
	{
		int i; // 4648
	}
} /* size: 0 */

// <02496142> soundsystem/snd_dsp.cpp:4662
// variables: 2
// function call: 1
void PRC_CheckParams(prc_t* pprc, prm_rng_t* prng)
{
	int cprm; // 4666
	{
		int i; // 4668
		clamp<float, float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 4675
	}
} /* size: 149, variables: 1 */

// <02491984> soundsystem/snd_dsp.cpp:4692
// member functions: 6
// member variables: 13
// struct size: 680
struct pset_t {
	uint32 nNameToken; /* 0 4 */
	DSPPresetConfiguration_t type; /* 4 4 */
	int cprcs; /* 8 4 */
	prc_t prcs[5]; /* 16 600 */
	float mix_min; /* 616 4 */
	float mix_max; /* 620 4 */
	float db_min; /* 624 4 */
	float db_mixdrop; /* 628 4 */
	float duration; /* 632 4 */
	float fade; /* 636 4 */
	int csamp_duration; /* 640 4 */
	int w[8]; /* 644 32 */
	int fused; /* 676 4 */
	/* soundsystem/snd_dsp.cpp:4711 */
	void SetToZero(pset_t* );
	/* soundsystem/snd_dsp.cpp:4714 */
	void Init(pset_t* );
	/* soundsystem/snd_dsp.cpp:4720 */
	void Free(pset_t* );
	/* soundsystem/snd_dsp.cpp:4729 */
	bool IsOneShot(pset_t* );
	/* soundsystem/snd_dsp.cpp:4734 */
	bool HasExpired(pset_t* );
	/* soundsystem/snd_dsp.cpp:4743 */
	void UpdateDuration(pset_t* , int);
};

// <02496129> soundsystem/snd_dsp.cpp:4711
inline void pset_t::SetToZero()
{
} /* size: 0 */

// <02496110> soundsystem/snd_dsp.cpp:4714
inline void pset_t::Init()
{
} /* size: 0 */

// <024960F7> soundsystem/snd_dsp.cpp:4720
inline void pset_t::Free()
{
} /* size: 0 */

// <024960DE> soundsystem/snd_dsp.cpp:4729
inline void pset_t::IsOneShot()
{
} /* size: 0 */

// <024960B8> soundsystem/snd_dsp.cpp:4743
inline void pset_t::UpdateDuration(int nSampleCount)
{
} /* size: 0 */

// <02496049> soundsystem/snd_dsp.cpp:4761
// variables: 4
inline void PSET_GetNextN(pset_t* ppset, int* pbuffer, int SampleCount)
{
	int* pbf; // 4763
	prc_t* pprc; // 4764
	int count; // 4765
	{
		int i; // 4792
	}
} /* size: 0, variables: 3 */

// <02495F82> soundsystem/snd_dsp.cpp:4808
// variables: 4
int PSET_GetNext(pset_t* ppset, int x)
{
	prc_t* pprc; // 4821
	int count; // 4822
	int* w; // 4873
	{
		int y; // 4826
	}
} /* size: 1166, variables: 3 */

// <02495F5D> soundsystem/snd_dsp.cpp:5144
inline bool FBatchPreset(pset_t* ppset)
{
} /* size: 0 */

// <02495F0C> soundsystem/snd_dsp.cpp:5158
// variables: 2
void ConvertToInt(int* pOut, uint nSamples, const float* pInput)
{
	const float  flScale; // 5160
	{
		uint i; // 5161
	}
} /* size: 0, variables: 1 */

// <02495EBB> soundsystem/snd_dsp.cpp:5167
// variables: 2
void ConvertToFloat(const int* pInput, uint nSamples, float* pOutput)
{
	const float  flScale; // 5169
	{
		uint i; // 5170
	}
} /* size: 0, variables: 1 */

// <02495322> soundsystem/snd_dsp.cpp:5176
// variables: 10
// function calls: 57
void DSP_InitAll(const KeyValues3* pKeys)
{
	{
		int i; // 837
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 829
		flt_t::SetToZero(); // 836
		FLT_Init(flt_t* pf); // 836
		FLT_Init(flt_t* pf); // 837
	}
	FLT_InitAll(void); // 5181
	{
		int i; // 1316
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 1294
		dly_t::SetToZero(); // 1297
		dly_t::Init(); // 1316
	}
	DLY_InitAll(void); // 5182
	{
		int i; // 2151
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 2145
		rva_t::SetToZero(); // 2150
		RVA_Init(rva_t* prva); // 2150
		RVA_Init(rva_t* prva); // 2151
	}
	RVA_InitAll(void); // 5183
	{
		int i; // 3043
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 3037
		lfo_t::SetToZero(); // 3044
		LFO_Free(lfo_t* plfo); // 3044
		LFO_Init(lfo_t* plfo); // 3043
	}
	LFO_InitAll(void); // 5185
	{
		int i; // 4092
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 4075
		crs_t::SetToZero(); // 4080
		CRS_Init(crs_t* pcrs); // 4080
		CRS_Init(crs_t* pcrs); // 4092
	}
	CRS_InitAll(void); // 5187
	{
		int i; // 3237
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 3226
		PTC_Init(ptc_t* pptc); // 3226
		PTC_Init(ptc_t* pptc); // 3237
	}
	PTC_InitAll(void); // 5188
	{
		int i; // 3632
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 3625
		env_t::SetToZero(); // 3631
		ENV_Free(env_t* penv); // 3631
		ENV_Init(env_t* penv); // 3632
	}
	ENV_InitAll(void); // 5189
	{
		int i; // 3790
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 3783
		efo_t::SetToZero(); // 3789
		EFO_Free(efo_t* pefo); // 3789
		EFO_Init(efo_t* pefo); // 3790
	}
	EFO_InitAll(void); // 5190
	{
		int i; // 1880
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 1865
		mdy_t::SetToZero(); // 1870
		MDY_Init(mdy_t* pmdy); // 1870
		MDY_Init(mdy_t* pmdy); // 1880
	}
	MDY_InitAll(void); // 5191
	{
		int i; // 4274
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 3226
		PTC_Init(ptc_t* pptc); // 3226
		AMP_Init(amp_t* pamp); // 4274
	}
	AMP_InitAll(void); // 5192
} /* size: 0, inline expansions: 10 (0 bytes) */

// <02495192> soundsystem/snd_dsp.cpp:5195
// function calls: 5
void DspPreset::DspPreset(const char* name)
{
	CUtlString::CUtlString(); // 5195
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 4711
	pset_t::SetToZero(); // 5198
	CUtlString::operator=(
			const char* src);  // 5200
} /* size: 181, inline expansions: 5 (61 bytes) */

// <02495167> soundsystem/snd_dsp.cpp:5195
void DspPreset::DspPreset(const char* name)
{
} /* size: 0 */

// <024950DC> soundsystem/snd_dsp.cpp:5213
// function call: 1
void DspPreset::~DspPreset()
{
	CUtlString::~CUtlString(); // 5216
} /* size: 70, inline expansions: 1 (21 bytes) */

// <024950BE> soundsystem/snd_dsp.cpp:5213
void DspPreset::~DspPreset()
{
} /* size: 0 */

// <0249500C> soundsystem/snd_dsp.cpp:5218
// variables: 2
void DspPreset::AddProcessor(int nType, float* params, int paramCount)
{
	int i; // 5220
	{
		int j; // 5225
	}
} /* size: 97, variables: 1 */

// <02494D9F> soundsystem/snd_dsp.cpp:5239
// variables: 5
// function calls: 4
pset_t* PSET_Alloc(const pset_t& dspTemplate)
{
	pset_t* ppset; // 5241
	bool bOk; // 5242
	int i; // 5246
	const char   __FUNCTION__; // 19459
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 5262
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 4716
	pset_t::Init(); // 5253
	pset_t::IsOneShot(); // 5270
} /* size: 0, variables: 4, inline expansions: 4 (140 bytes) */

// <02494CD8> soundsystem/snd_dsp.cpp:5278
// variables: 4
void DspInstance::DspInstance(pset_t* from, int channels)
{
	{
		bool bIsValid; // 5282
		{
			int i; // 5284
		}
	}
	{
		bool bIsValid; // 5282
		{
			int i; // 5284
		}
	}
} /* size: 140 */

// <02494C84> soundsystem/snd_dsp.cpp:5278
// variables: 2
void DspInstance::DspInstance(pset_t* from, int channels)
{
	{
		bool bIsValid; // 5282
		{
			int i; // 5284
		}
	}
} /* size: 0 */

// <02494A1B> soundsystem/snd_dsp.cpp:5306
// variables: 2
// function calls: 6
void DspInstance::Clear()
{
	{
		int i; // 5308
		{
			int i; // 4648
			PRC_Free(prc_t* pprc); // 4649
		}
		PRC_FreeAll(prc_t* prcs,
				int count);  // 4724
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 4711
		pset_t::SetToZero(); // 4727
		pset_t::Free(); // 5312
	}
} /* size: 160 */

// <0249499B> soundsystem/snd_dsp.cpp:5319
void DspPreset::Instantiate(int channels)
{
} /* size: 61 */

// <024944FF> soundsystem/snd_dsp.cpp:5324
// variables: 8
// function calls: 11
void DspInstance::ProcessChannel(const CAudioMixBuffer* input, CAudioMixBuffer* pOutput, int nChannelIndex)
{
	uint nSampleCount; // 5332
	int nTemp; // 5333
	{
		int* pbf; // 5342
		int count; // 5343
		{
			int x; // 5346
		}
	}
	{
		uint i; // 5161
	}
	ConvertToInt(int* pOut,
			uint nSamples,
			const float* pInput);  // 5334
	pset_t::IsOneShot(); // 4745
	pset_t::UpdateDuration(
			int nSampleCount);  // 4743
	pset_t::UpdateDuration(
			int nSampleCount);  // 5335
	FBatchPreset(pset_t* ppset); // 5336
	{
		int i; // 4792
	}
	PSET_GetNextN(pset_t* ppset,
			int* pbuffer,
			int SampleCount);  // 4761
	PSET_GetNextN(pset_t* ppset,
			int* pbuffer,
			int SampleCount);  // 5338
	{
		uint i; // 5170
	}
	ConvertToFloat(const int* pInput,
			uint nSamples,
			float* pOutput);  // 5352
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 289
	CAudioMixBuffer::CopyFrom(
		const CAudioMixBuffer* src);  // 5328
} /* size: 455, variables: 2, inline expansions: 11 (336 bytes) */

// <024939C5> soundsystem/snd_dsp.cpp:5355
// variables: 8
// function calls: 51
void DSP_FreeAll(void)
{
	{
		int i; // 4274
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 3226
		PTC_Init(ptc_t* pptc); // 3226
		AMP_Init(amp_t* pamp); // 4274
	}
	AMP_InitAll(void); // 5357
	{
		int i; // 1881
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 1294
		dly_t::SetToZero(); // 1310
		dly_t::Free(); // 1318
		DLY_Free(dly_t* pDelay); // 1875
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 1865
		mdy_t::SetToZero(); // 1876
		MDY_Free(mdy_t* pmdy); // 1881
	}
	MDY_FreeAll(void); // 5358
	{
		int i; // 3790
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 3783
		efo_t::SetToZero(); // 3789
		EFO_Free(efo_t* pefo); // 3789
		EFO_Init(efo_t* pefo); // 3790
	}
	EFO_InitAll(void); // 5359
	{
		int i; // 3632
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 3625
		env_t::SetToZero(); // 3631
		ENV_Free(env_t* penv); // 3631
		ENV_Init(env_t* penv); // 3632
	}
	ENV_InitAll(void); // 5360
	{
		int i; // 3238
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 1294
		dly_t::SetToZero(); // 1310
		dly_t::Free(); // 1318
		DLY_Free(dly_t* pDelay); // 3231
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 1294
		dly_t::SetToZero(); // 1310
		dly_t::Free(); // 1318
		DLY_Free(dly_t* pDelay); // 3232
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 3221
		ptc_t::SetToZero(); // 3234
		PTC_Free(ptc_t* pptc); // 3238
	}
	PTC_FreeAll(void); // 5361
	{
		int i; // 3043
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 3037
		lfo_t::SetToZero(); // 3044
		LFO_Free(lfo_t* plfo); // 3044
		LFO_Init(lfo_t* plfo); // 3043
	}
	LFO_InitAll(void); // 5364
	{
		int i; // 2183
		RVA_Free(rva_t* prva); // 2183
	}
	RVA_FreeAll(void); // 5366
	{
		int i; // 855
	}
	FLT_FreeAll(void); // 5368
} /* size: 0, inline expansions: 8 (0 bytes) */

