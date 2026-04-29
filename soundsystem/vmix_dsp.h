
//
// soundsystem/vmix_dsp.h
//
//	referenced by: libengine2.so
//
//	functions: 3
//	classes: 2
//	structs: 2
//

// <02491431> soundsystem/vmix_dsp.h:14
// member variables: 2
// struct size: 16
struct param_choices_t {
	int m_nChoices; /* 0 4 */
	const char * * pChoices; /* 8 8 */
};

// <0249145D> soundsystem/vmix_dsp.h:21
// member variables: 5
// struct size: 32
struct prm_rng_t {
	int iprm; /* 0 4 */
	const char * pName; /* 8 8 */
	param_choices_t * pChoices; /* 16 8 */
	float lo; /* 24 4 */
	float hi; /* 28 4 */
};

// <01200A2A> soundsystem/vmix_dsp.h:312
// member functions: 8
// member variables: 2
// class size: 48
class DspInstance {
private:
	pset_t * m_pPsets[5]; /* 0 40 */
	int m_nChannels; /* 40 4 */
	/* soundsystem/vmix_dsp.h:319 */
	void DspInstance(DspInstance* , pset_t* , int);
	/* soundsystem/vmix_dsp.h:320 */
	void ~DspInstance(DspInstance* );
	/* soundsystem/vmix_dsp.h:322 */
	void Clear(DspInstance* );
	/* soundsystem/vmix_dsp.h:323 */
	void ProcessChannel(DspInstance* , const CAudioMixBuffer* , CAudioMixBuffer* , int);
	void DspInstance(class DspInstance *, class pset_t *, int); /* linkage=_ZN11DspInstanceC4EP6pset_ti */
	void ~DspInstance(class DspInstance *); /* linkage=_ZN11DspInstanceD4Ev */
	void Clear(class DspInstance *); /* linkage=_ZN11DspInstance5ClearEv */
	void ProcessChannel(class DspInstance *, const class CAudioMixBuffer  *, class CAudioMixBuffer *, int); /* linkage=_ZN11DspInstance14ProcessChannelEPK15CAudioMixBufferPS0_i */
};

// <01259AFB> soundsystem/vmix_dsp.h:320
void DspInstance::~DspInstance()
{
} /* size: 0 */

// <01200B22> soundsystem/vmix_dsp.h:326
// member functions: 10
// member variables: 2
// class size: 16
class DspPreset {
private:
	pset_t * ptr; /* 0 8 */
	/* soundsystem/vmix_dsp.h:332 */
	void DspPreset(DspPreset* , const char* );
	/* soundsystem/vmix_dsp.h:333 */
	void ~DspPreset(DspPreset* );
	/* soundsystem/vmix_dsp.h:336 */
	void AddProcessor(DspPreset* , int, float* , int);
	/* soundsystem/vmix_dsp.h:337 */
	void FinishBuilding(DspPreset* );
	/* soundsystem/vmix_dsp.h:339 */
	DspInstance* Instantiate(DspPreset* , int);
	CUtlString m_Name; /* 8 8 */
	void DspPreset(class DspPreset *, const char  *); /* linkage=_ZN9DspPresetC4EPKc */
	void ~DspPreset(class DspPreset *); /* linkage=_ZN9DspPresetD4Ev */
	void AddProcessor(class DspPreset *, int, float *, int); /* linkage=_ZN9DspPreset12AddProcessorEiPfi */
	void FinishBuilding(class DspPreset *); /* linkage=_ZN9DspPreset14FinishBuildingEv */
	class DspInstance * Instantiate(class DspPreset *, int); /* linkage=_ZN9DspPreset11InstantiateEi */
};

// <01259AD0> soundsystem/vmix_dsp.h:332
void DspPreset::DspPreset(const char* name)
{
} /* size: 0 */

// <01259AB4> soundsystem/vmix_dsp.h:333
void DspPreset::~DspPreset()
{
} /* size: 0 */

