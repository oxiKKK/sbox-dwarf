
//
// public/modellib/movementsettings.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 8
//	classes: 5
//

// <04DBA0B2> ../public/modellib/movementsettings.h:19
void CMoveSpeed::~CMoveSpeed()
{
} /* size: 0 */

// <04DBA096> ../public/modellib/movementsettings.h:19
inline void CMoveSpeed::~CMoveSpeed()
{
} /* size: 0 */

// <04DB963C> ../public/modellib/movementsettings.h:19
inline void CMoveSpeed::operator=(const CMoveSpeed &)
{
} /* size: 0 */

// <049B584D> ../public/modellib/movementsettings.h:19
// member functions: 16
// member variables: 2
// class size: 16
class CMoveSpeed {
	/* ../public/modellib/movementsettings.h:24 */
	void CMoveSpeed(CMoveSpeed* );
	/* ../public/modellib/movementsettings.h:26 */
	const CUtlString& GetName(const CMoveSpeed* );
	/* ../public/modellib/movementsettings.h:27 */
	void SetName(CMoveSpeed* , const CUtlString& );
	/* ../public/modellib/movementsettings.h:29 */
	float GetSpeed(const CMoveSpeed* );
	/* ../public/modellib/movementsettings.h:30 */
	void SetSpeed(CMoveSpeed* , float);
	/* ../public/modellib/movementsettings.h:32 */
	void KV3TransferSave(const CMoveSpeed* , CKV3TransferSaveContext* );
	/* ../public/modellib/movementsettings.h:33 */
	void KV3TransferLoad(CMoveSpeed* , CKV3TransferLoadContext* );
private:
	CUtlString m_sName; /* 0 8 */
	float m_flSpeed; /* 8 4 */
	void CMoveSpeed(class CMoveSpeed *); /* linkage=_ZN10CMoveSpeedC4Ev */
	/* <4dc476b> modellib/movementsettings.cpp:12 */
	const class CUtlString  & GetName(const class CMoveSpeed  *); /* linkage=_ZNK10CMoveSpeed7GetNameEv */
	void SetName(class CMoveSpeed *, const class CUtlString  &); /* linkage=_ZN10CMoveSpeed7SetNameERK10CUtlString */
	/* <4dc4795> modellib/movementsettings.cpp:24 */
	float GetSpeed(const class CMoveSpeed  *); /* linkage=_ZNK10CMoveSpeed8GetSpeedEv */
	void SetSpeed(class CMoveSpeed *, float); /* linkage=_ZN10CMoveSpeed8SetSpeedEf */
	void KV3TransferSave(const class CMoveSpeed  *, class CKV3TransferSaveContext *); /* linkage=_ZNK10CMoveSpeed15KV3TransferSaveEP23CKV3TransferSaveContext */
	void KV3TransferLoad(class CMoveSpeed *, class CKV3TransferLoadContext *); /* linkage=_ZN10CMoveSpeed15KV3TransferLoadEP23CKV3TransferLoadContext */
	class CMoveSpeed & operator=(class CMoveSpeed *, const class CMoveSpeed  &); /* linkage=_ZN10CMoveSpeedaSERKS_ */
	void ~CMoveSpeed(class CMoveSpeed *); /* linkage=_ZN10CMoveSpeedD4Ev */
};

// <04DA973B> ../public/modellib/movementsettings.h:19
// member functions: 18
// member variables: 2
// class size: 16
class CMoveSpeed {
	/* ../public/modellib/movementsettings.h:22 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
	/* ../public/modellib/movementsettings.h:24 */
	void CMoveSpeed(CMoveSpeed* );
	/* ../public/modellib/movementsettings.h:26 */
	const CUtlString& GetName(const CMoveSpeed* );
	/* ../public/modellib/movementsettings.h:27 */
	void SetName(CMoveSpeed* , const CUtlString& );
	/* ../public/modellib/movementsettings.h:29 */
	float GetSpeed(const CMoveSpeed* );
	/* ../public/modellib/movementsettings.h:30 */
	void SetSpeed(CMoveSpeed* , float);
	/* ../public/modellib/movementsettings.h:32 */
	void KV3TransferSave(const CMoveSpeed* , CKV3TransferSaveContext* );
	/* ../public/modellib/movementsettings.h:33 */
	void KV3TransferLoad(CMoveSpeed* , CKV3TransferLoadContext* );
private:
	CUtlString m_sName; /* 0 8 */
	float m_flSpeed; /* 8 4 */
	CMoveSpeed& operator=(CMoveSpeed* , const CMoveSpeed& );
	void ~CMoveSpeed(CMoveSpeed* );
	void CMoveSpeed(class CMoveSpeed *); /* linkage=_ZN10CMoveSpeedC4Ev */
	/* <4dc476b> modellib/movementsettings.cpp:12 */
	const class CUtlString  & GetName(const class CMoveSpeed  *); /* linkage=_ZNK10CMoveSpeed7GetNameEv */
	void SetName(class CMoveSpeed *, const class CUtlString  &); /* linkage=_ZN10CMoveSpeed7SetNameERK10CUtlString */
	/* <4dc4795> modellib/movementsettings.cpp:24 */
	float GetSpeed(const class CMoveSpeed  *); /* linkage=_ZNK10CMoveSpeed8GetSpeedEv */
	void SetSpeed(class CMoveSpeed *, float); /* linkage=_ZN10CMoveSpeed8SetSpeedEf */
	void KV3TransferSave(const class CMoveSpeed  *, class CKV3TransferSaveContext *); /* linkage=_ZNK10CMoveSpeed15KV3TransferSaveEP23CKV3TransferSaveContext */
	void KV3TransferLoad(class CMoveSpeed *, class CKV3TransferLoadContext *); /* linkage=_ZN10CMoveSpeed15KV3TransferLoadEP23CKV3TransferLoadContext */
	class CMoveSpeed & operator=(class CMoveSpeed *, const class CMoveSpeed  &); /* linkage=_ZN10CMoveSpeedaSERKS_ */
	void ~CMoveSpeed(class CMoveSpeed *); /* linkage=_ZN10CMoveSpeedD4Ev */
};

// <00FC80D3> ../public/modellib/movementsettings.h:19
// member functions: 17
// member variables: 2
// class size: 16
class CMoveSpeed {
	/* ../public/modellib/movementsettings.h:24 */
	void CMoveSpeed(CMoveSpeed* );
	/* ../public/modellib/movementsettings.h:26 */
	const CUtlString& GetName(const CMoveSpeed* );
	/* ../public/modellib/movementsettings.h:27 */
	void SetName(CMoveSpeed* , const CUtlString& );
	/* ../public/modellib/movementsettings.h:29 */
	float GetSpeed(const CMoveSpeed* );
	/* ../public/modellib/movementsettings.h:30 */
	void SetSpeed(CMoveSpeed* , float);
	/* ../public/modellib/movementsettings.h:32 */
	void KV3TransferSave(const CMoveSpeed* , CKV3TransferSaveContext* );
	/* ../public/modellib/movementsettings.h:33 */
	void KV3TransferLoad(CMoveSpeed* , CKV3TransferLoadContext* );
private:
	CUtlString m_sName; /* 0 8 */
	float m_flSpeed; /* 8 4 */
	void ~CMoveSpeed(CMoveSpeed* );
	void CMoveSpeed(class CMoveSpeed *); /* linkage=_ZN10CMoveSpeedC4Ev */
	/* <4dc476b> modellib/movementsettings.cpp:12 */
	const class CUtlString  & GetName(const class CMoveSpeed  *); /* linkage=_ZNK10CMoveSpeed7GetNameEv */
	void SetName(class CMoveSpeed *, const class CUtlString  &); /* linkage=_ZN10CMoveSpeed7SetNameERK10CUtlString */
	/* <4dc4795> modellib/movementsettings.cpp:24 */
	float GetSpeed(const class CMoveSpeed  *); /* linkage=_ZNK10CMoveSpeed8GetSpeedEv */
	void SetSpeed(class CMoveSpeed *, float); /* linkage=_ZN10CMoveSpeed8SetSpeedEf */
	void KV3TransferSave(const class CMoveSpeed  *, class CKV3TransferSaveContext *); /* linkage=_ZNK10CMoveSpeed15KV3TransferSaveEP23CKV3TransferSaveContext */
	void KV3TransferLoad(class CMoveSpeed *, class CKV3TransferLoadContext *); /* linkage=_ZN10CMoveSpeed15KV3TransferLoadEP23CKV3TransferLoadContext */
	class CMoveSpeed & operator=(class CMoveSpeed *, const class CMoveSpeed  &); /* linkage=_ZN10CMoveSpeedaSERKS_ */
	void ~CMoveSpeed(class CMoveSpeed *); /* linkage=_ZN10CMoveSpeedD4Ev */
};

// <04DC43AD> ../public/modellib/movementsettings.h:24
void CMoveSpeed::CMoveSpeed()
{
} /* size: 0 */

// <04DC4394> ../public/modellib/movementsettings.h:24
inline void CMoveSpeed::CMoveSpeed()
{
} /* size: 0 */

// <0108104B> ../public/modellib/movementsettings.h:43
void CMovementSettings::~CMovementSettings()
{
} /* size: 0 */

// <0108102F> ../public/modellib/movementsettings.h:43
inline void CMovementSettings::~CMovementSettings()
{
} /* size: 0 */

// <049B5973> ../public/modellib/movementsettings.h:43
// member functions: 59
// member variables: 10
// class size: 80
class CMovementSettings {
	/* ../public/modellib/movementsettings.h:48 */
	void CMovementSettings(CMovementSettings* );
	/* ../public/modellib/movementsettings.h:49 */
	void CMovementSettings(CMovementSettings* , const CMovementSettings& );
	/* ../public/modellib/movementsettings.h:50 */
	void CMovementSettings(CMovementSettings* , CMovementSettings& );
	/* ../public/modellib/movementsettings.h:52 */
	CMovementSettings& operator=(CMovementSettings* , const CMovementSettings& );
	/* ../public/modellib/movementsettings.h:53 */
	CMovementSettings& operator=(CMovementSettings* , CMovementSettings& );
	/* ../public/modellib/movementsettings.h:55 */
	float GetRunSpeed(const CMovementSettings* );
	/* ../public/modellib/movementsettings.h:56 */
	void SetRunSpeed(CMovementSettings* , float);
	/* ../public/modellib/movementsettings.h:58 */
	float GetWalkSpeed(const CMovementSettings* );
	/* ../public/modellib/movementsettings.h:59 */
	void SetWalkSpeed(CMovementSettings* , float);
	/* ../public/modellib/movementsettings.h:61 */
	int GetCustomSpeedCount(const CMovementSettings* );
	/* ../public/modellib/movementsettings.h:62 */
	void AddCustomSpeed(CMovementSettings* );
	/* ../public/modellib/movementsettings.h:63 */
	void RemoveCustomSpeed(CMovementSettings* , int);
	/* ../public/modellib/movementsettings.h:65 */
	CMoveSpeed& GetCustomSpeed(CMovementSettings* , int);
	/* ../public/modellib/movementsettings.h:66 */
	const CMoveSpeed& GetCustomSpeed(const CMovementSettings* , int);
	/* ../public/modellib/movementsettings.h:68 */
	bool GetCustomSpeed(const CMovementSettings* , const char* , float& );
	/* ../public/modellib/movementsettings.h:70 */
	bool UseSmoothPaths(const CMovementSettings* );
	/* ../public/modellib/movementsettings.h:71 */
	void SetUseSmoothPaths(CMovementSettings* , bool);
	/* ../public/modellib/movementsettings.h:73 */
	bool UseMotionDamping(const CMovementSettings* );
	/* ../public/modellib/movementsettings.h:74 */
	void SetUseMotionDamping(CMovementSettings* , bool);
	/* ../public/modellib/movementsettings.h:76 */
	float GetMaxSpringTension(const CMovementSettings* );
	/* ../public/modellib/movementsettings.h:77 */
	void SetMaxSpringTension(CMovementSettings* , float);
	/* ../public/modellib/movementsettings.h:79 */
	float GetSpringConstant(const CMovementSettings* );
	/* ../public/modellib/movementsettings.h:80 */
	void SetSpringConstant(CMovementSettings* , float);
	/* ../public/modellib/movementsettings.h:82 */
	float GetSharpStartAngle(const CMovementSettings* );
	/* ../public/modellib/movementsettings.h:83 */
	void SetSharpStartAngle(CMovementSettings* , float);
	/* ../public/modellib/movementsettings.h:85 */
	const VectorAligned& GetSlopeTraceScale(const CMovementSettings* );
	/* ../public/modellib/movementsettings.h:86 */
	void SetSlopeTraceScale(CMovementSettings* , const VectorAligned& );
	/* ../public/modellib/movementsettings.h:88 */
	void KV3TransferSave(const CMovementSettings* , CKV3TransferSaveContext* );
	/* ../public/modellib/movementsettings.h:89 */
	void KV3TransferLoad(CMovementSettings* , CKV3TransferLoadContext* );
private:
	CUtlString m_name; /* 0 8 */
	CUtlVector<CMoveSpeed, CUtlMemory<CMoveSpeed, int> > m_customSpeeds; /* 8 32 */
	float m_flRunSpeed; /* 40 4 */
	float m_flWalkSpeed; /* 44 4 */
	float m_flMaxSpringTension; /* 48 4 */
	float m_flSpringConstant; /* 52 4 */
	bool m_bUseSmoothPaths; /* 56 1 */
	bool m_bUseMotionDamping; /* 57 1 */
	float m_flSharpStartAngle; /* 60 4 */
	VectorAligned m_vTraceScale __attribute__((__aligned__(16))); /* 64 16 */
	void CMovementSettings(class CMovementSettings *); /* linkage=_ZN17CMovementSettingsC4Ev */
	void CMovementSettings(class CMovementSettings *, const class CMovementSettings  &); /* linkage=_ZN17CMovementSettingsC4ERKS_ */
	void CMovementSettings(class CMovementSettings *, class CMovementSettings &); /* linkage=_ZN17CMovementSettingsC4EOS_ */
	class CMovementSettings & operator=(class CMovementSettings *, const class CMovementSettings  &); /* linkage=_ZN17CMovementSettingsaSERKS_ */
	class CMovementSettings & operator=(class CMovementSettings *, class CMovementSettings &); /* linkage=_ZN17CMovementSettingsaSEOS_ */
	float GetRunSpeed(const class CMovementSettings  *); /* linkage=_ZNK17CMovementSettings11GetRunSpeedEv */
	void SetRunSpeed(class CMovementSettings *, float); /* linkage=_ZN17CMovementSettings11SetRunSpeedEf */
	float GetWalkSpeed(const class CMovementSettings  *); /* linkage=_ZNK17CMovementSettings12GetWalkSpeedEv */
	void SetWalkSpeed(class CMovementSettings *, float); /* linkage=_ZN17CMovementSettings12SetWalkSpeedEf */
	int GetCustomSpeedCount(const class CMovementSettings  *); /* linkage=_ZNK17CMovementSettings19GetCustomSpeedCountEv */
	void AddCustomSpeed(class CMovementSettings *); /* linkage=_ZN17CMovementSettings14AddCustomSpeedEv */
	void RemoveCustomSpeed(class CMovementSettings *, int); /* linkage=_ZN17CMovementSettings17RemoveCustomSpeedEi */
	/* <4dc47bf> modellib/movementsettings.cpp:166 */
	class CMoveSpeed & GetCustomSpeed(class CMovementSettings *, int); /* linkage=_ZN17CMovementSettings14GetCustomSpeedEi */
	const class CMoveSpeed  & GetCustomSpeed(const class CMovementSettings  *, int); /* linkage=_ZNK17CMovementSettings14GetCustomSpeedEi */
	bool GetCustomSpeed(const class CMovementSettings  *, const char  *, float &); /* linkage=_ZNK17CMovementSettings14GetCustomSpeedEPKcRf */
	bool UseSmoothPaths(const class CMovementSettings  *); /* linkage=_ZNK17CMovementSettings14UseSmoothPathsEv */
	void SetUseSmoothPaths(class CMovementSettings *, bool); /* linkage=_ZN17CMovementSettings17SetUseSmoothPathsEb */
	bool UseMotionDamping(const class CMovementSettings  *); /* linkage=_ZNK17CMovementSettings16UseMotionDampingEv */
	void SetUseMotionDamping(class CMovementSettings *, bool); /* linkage=_ZN17CMovementSettings19SetUseMotionDampingEb */
	float GetMaxSpringTension(const class CMovementSettings  *); /* linkage=_ZNK17CMovementSettings19GetMaxSpringTensionEv */
	void SetMaxSpringTension(class CMovementSettings *, float); /* linkage=_ZN17CMovementSettings19SetMaxSpringTensionEf */
	float GetSpringConstant(const class CMovementSettings  *); /* linkage=_ZNK17CMovementSettings17GetSpringConstantEv */
	void SetSpringConstant(class CMovementSettings *, float); /* linkage=_ZN17CMovementSettings17SetSpringConstantEf */
	float GetSharpStartAngle(const class CMovementSettings  *); /* linkage=_ZNK17CMovementSettings18GetSharpStartAngleEv */
	void SetSharpStartAngle(class CMovementSettings *, float); /* linkage=_ZN17CMovementSettings18SetSharpStartAngleEf */
	const class VectorAligned  & GetSlopeTraceScale(const class CMovementSettings  *); /* linkage=_ZNK17CMovementSettings18GetSlopeTraceScaleEv */
	void SetSlopeTraceScale(class CMovementSettings *, const class VectorAligned  &); /* linkage=_ZN17CMovementSettings18SetSlopeTraceScaleERK13VectorAligned */
	void KV3TransferSave(const class CMovementSettings  *, class CKV3TransferSaveContext *); /* linkage=_ZNK17CMovementSettings15KV3TransferSaveEP23CKV3TransferSaveContext */
	void KV3TransferLoad(class CMovementSettings *, class CKV3TransferLoadContext *); /* linkage=_ZN17CMovementSettings15KV3TransferLoadEP23CKV3TransferLoadContext */
	void ~CMovementSettings(class CMovementSettings *); /* linkage=_ZN17CMovementSettingsD4Ev */
} __attribute__((__aligned__(16)));

// <00FC8216> ../public/modellib/movementsettings.h:43
// member functions: 60
// member variables: 10
// class size: 80
class CMovementSettings {
	/* ../public/modellib/movementsettings.h:48 */
	void CMovementSettings(CMovementSettings* );
	/* ../public/modellib/movementsettings.h:49 */
	void CMovementSettings(CMovementSettings* , const CMovementSettings& );
	/* ../public/modellib/movementsettings.h:50 */
	void CMovementSettings(CMovementSettings* , CMovementSettings& );
	/* ../public/modellib/movementsettings.h:52 */
	CMovementSettings& operator=(CMovementSettings* , const CMovementSettings& );
	/* ../public/modellib/movementsettings.h:53 */
	CMovementSettings& operator=(CMovementSettings* , CMovementSettings& );
	/* ../public/modellib/movementsettings.h:55 */
	float GetRunSpeed(const CMovementSettings* );
	/* ../public/modellib/movementsettings.h:56 */
	void SetRunSpeed(CMovementSettings* , float);
	/* ../public/modellib/movementsettings.h:58 */
	float GetWalkSpeed(const CMovementSettings* );
	/* ../public/modellib/movementsettings.h:59 */
	void SetWalkSpeed(CMovementSettings* , float);
	/* ../public/modellib/movementsettings.h:61 */
	int GetCustomSpeedCount(const CMovementSettings* );
	/* ../public/modellib/movementsettings.h:62 */
	void AddCustomSpeed(CMovementSettings* );
	/* ../public/modellib/movementsettings.h:63 */
	void RemoveCustomSpeed(CMovementSettings* , int);
	/* ../public/modellib/movementsettings.h:65 */
	CMoveSpeed& GetCustomSpeed(CMovementSettings* , int);
	/* ../public/modellib/movementsettings.h:66 */
	const CMoveSpeed& GetCustomSpeed(const CMovementSettings* , int);
	/* ../public/modellib/movementsettings.h:68 */
	bool GetCustomSpeed(const CMovementSettings* , const char* , float& );
	/* ../public/modellib/movementsettings.h:70 */
	bool UseSmoothPaths(const CMovementSettings* );
	/* ../public/modellib/movementsettings.h:71 */
	void SetUseSmoothPaths(CMovementSettings* , bool);
	/* ../public/modellib/movementsettings.h:73 */
	bool UseMotionDamping(const CMovementSettings* );
	/* ../public/modellib/movementsettings.h:74 */
	void SetUseMotionDamping(CMovementSettings* , bool);
	/* ../public/modellib/movementsettings.h:76 */
	float GetMaxSpringTension(const CMovementSettings* );
	/* ../public/modellib/movementsettings.h:77 */
	void SetMaxSpringTension(CMovementSettings* , float);
	/* ../public/modellib/movementsettings.h:79 */
	float GetSpringConstant(const CMovementSettings* );
	/* ../public/modellib/movementsettings.h:80 */
	void SetSpringConstant(CMovementSettings* , float);
	/* ../public/modellib/movementsettings.h:82 */
	float GetSharpStartAngle(const CMovementSettings* );
	/* ../public/modellib/movementsettings.h:83 */
	void SetSharpStartAngle(CMovementSettings* , float);
	/* ../public/modellib/movementsettings.h:85 */
	const VectorAligned& GetSlopeTraceScale(const CMovementSettings* );
	/* ../public/modellib/movementsettings.h:86 */
	void SetSlopeTraceScale(CMovementSettings* , const VectorAligned& );
	/* ../public/modellib/movementsettings.h:88 */
	void KV3TransferSave(const CMovementSettings* , CKV3TransferSaveContext* );
	/* ../public/modellib/movementsettings.h:89 */
	void KV3TransferLoad(CMovementSettings* , CKV3TransferLoadContext* );
private:
	CUtlString m_name; /* 0 8 */
	CUtlVector<CMoveSpeed, CUtlMemory<CMoveSpeed, int> > m_customSpeeds; /* 8 32 */
	float m_flRunSpeed; /* 40 4 */
	float m_flWalkSpeed; /* 44 4 */
	float m_flMaxSpringTension; /* 48 4 */
	float m_flSpringConstant; /* 52 4 */
	bool m_bUseSmoothPaths; /* 56 1 */
	bool m_bUseMotionDamping; /* 57 1 */
	float m_flSharpStartAngle; /* 60 4 */
	VectorAligned m_vTraceScale __attribute__((__aligned__(16))); /* 64 16 */
	void ~CMovementSettings(CMovementSettings* );
	void CMovementSettings(class CMovementSettings *); /* linkage=_ZN17CMovementSettingsC4Ev */
	void CMovementSettings(class CMovementSettings *, const class CMovementSettings  &); /* linkage=_ZN17CMovementSettingsC4ERKS_ */
	void CMovementSettings(class CMovementSettings *, class CMovementSettings &); /* linkage=_ZN17CMovementSettingsC4EOS_ */
	class CMovementSettings & operator=(class CMovementSettings *, const class CMovementSettings  &); /* linkage=_ZN17CMovementSettingsaSERKS_ */
	class CMovementSettings & operator=(class CMovementSettings *, class CMovementSettings &); /* linkage=_ZN17CMovementSettingsaSEOS_ */
	float GetRunSpeed(const class CMovementSettings  *); /* linkage=_ZNK17CMovementSettings11GetRunSpeedEv */
	void SetRunSpeed(class CMovementSettings *, float); /* linkage=_ZN17CMovementSettings11SetRunSpeedEf */
	float GetWalkSpeed(const class CMovementSettings  *); /* linkage=_ZNK17CMovementSettings12GetWalkSpeedEv */
	void SetWalkSpeed(class CMovementSettings *, float); /* linkage=_ZN17CMovementSettings12SetWalkSpeedEf */
	int GetCustomSpeedCount(const class CMovementSettings  *); /* linkage=_ZNK17CMovementSettings19GetCustomSpeedCountEv */
	void AddCustomSpeed(class CMovementSettings *); /* linkage=_ZN17CMovementSettings14AddCustomSpeedEv */
	void RemoveCustomSpeed(class CMovementSettings *, int); /* linkage=_ZN17CMovementSettings17RemoveCustomSpeedEi */
	/* <4dc47bf> modellib/movementsettings.cpp:166 */
	class CMoveSpeed & GetCustomSpeed(class CMovementSettings *, int); /* linkage=_ZN17CMovementSettings14GetCustomSpeedEi */
	const class CMoveSpeed  & GetCustomSpeed(const class CMovementSettings  *, int); /* linkage=_ZNK17CMovementSettings14GetCustomSpeedEi */
	bool GetCustomSpeed(const class CMovementSettings  *, const char  *, float &); /* linkage=_ZNK17CMovementSettings14GetCustomSpeedEPKcRf */
	bool UseSmoothPaths(const class CMovementSettings  *); /* linkage=_ZNK17CMovementSettings14UseSmoothPathsEv */
	void SetUseSmoothPaths(class CMovementSettings *, bool); /* linkage=_ZN17CMovementSettings17SetUseSmoothPathsEb */
	bool UseMotionDamping(const class CMovementSettings  *); /* linkage=_ZNK17CMovementSettings16UseMotionDampingEv */
	void SetUseMotionDamping(class CMovementSettings *, bool); /* linkage=_ZN17CMovementSettings19SetUseMotionDampingEb */
	float GetMaxSpringTension(const class CMovementSettings  *); /* linkage=_ZNK17CMovementSettings19GetMaxSpringTensionEv */
	void SetMaxSpringTension(class CMovementSettings *, float); /* linkage=_ZN17CMovementSettings19SetMaxSpringTensionEf */
	float GetSpringConstant(const class CMovementSettings  *); /* linkage=_ZNK17CMovementSettings17GetSpringConstantEv */
	void SetSpringConstant(class CMovementSettings *, float); /* linkage=_ZN17CMovementSettings17SetSpringConstantEf */
	float GetSharpStartAngle(const class CMovementSettings  *); /* linkage=_ZNK17CMovementSettings18GetSharpStartAngleEv */
	void SetSharpStartAngle(class CMovementSettings *, float); /* linkage=_ZN17CMovementSettings18SetSharpStartAngleEf */
	const class VectorAligned  & GetSlopeTraceScale(const class CMovementSettings  *); /* linkage=_ZNK17CMovementSettings18GetSlopeTraceScaleEv */
	void SetSlopeTraceScale(class CMovementSettings *, const class VectorAligned  &); /* linkage=_ZN17CMovementSettings18SetSlopeTraceScaleERK13VectorAligned */
	void KV3TransferSave(const class CMovementSettings  *, class CKV3TransferSaveContext *); /* linkage=_ZNK17CMovementSettings15KV3TransferSaveEP23CKV3TransferSaveContext */
	void KV3TransferLoad(class CMovementSettings *, class CKV3TransferLoadContext *); /* linkage=_ZN17CMovementSettings15KV3TransferLoadEP23CKV3TransferLoadContext */
	void ~CMovementSettings(class CMovementSettings *); /* linkage=_ZN17CMovementSettingsD4Ev */
} __attribute__((__aligned__(16)));

// <04AA2FDF> ../public/modellib/movementsettings.h:48
void CMovementSettings::CMovementSettings()
{
} /* size: 0 */

