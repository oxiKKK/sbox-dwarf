
//
// animgraph/animupdateparameterlist.h
//
//	referenced by: libanimationsystem.so
//
//	class: 1
//

// <00DA306A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdateparameterlist.h:16
// member functions: 32
// member variables: 6
// class size: 48
class CAnimUpdateParameterList {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdateparameterlist.h:19 */
	void CAnimUpdateParameterList(CAnimUpdateParameterList* , const CAnimParameterList& , CSaveablePackedData& , const CAnimParamIdMap& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdateparameterlist.h:21 */
	CAnimVariant GetParamValue(const CAnimUpdateParameterList* , const CAnimParamHandle& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdateparameterlist.h:22 */
	void SetParamValue(CAnimUpdateParameterList* , const CAnimParamHandle& , const CAnimVariant& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdateparameterlist.h:23 */
	void SetParamValue(CAnimUpdateParameterList* , int, const CAnimVariant& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdateparameterlist.h:25 */
	int GetBoolCount(const CAnimUpdateParameterList* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdateparameterlist.h:26 */
	bool& GetBool(CAnimUpdateParameterList* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdateparameterlist.h:28 */
	int GetEnumCount(const CAnimUpdateParameterList* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdateparameterlist.h:29 */
	CAnimEnum& GetEnum(CAnimUpdateParameterList* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdateparameterlist.h:31 */
	int GetIntCount(const CAnimUpdateParameterList* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdateparameterlist.h:32 */
	int& GetInt(CAnimUpdateParameterList* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdateparameterlist.h:34 */
	int GetFloatCount(const CAnimUpdateParameterList* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdateparameterlist.h:35 */
	float& GetFloat(CAnimUpdateParameterList* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdateparameterlist.h:37 */
	int GetVectorCount(const CAnimUpdateParameterList* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdateparameterlist.h:38 */
	Vector& GetVector(CAnimUpdateParameterList* , int);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdateparameterlist.h:40 */
	int GetQuaternionCount(const CAnimUpdateParameterList* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animupdateparameterlist.h:41 */
	Quaternion& GetQuaternion(CAnimUpdateParameterList* , int);
private:
	CRelativeArray<bool> m_boolParams; /* 0 8 */
	CRelativeArray<CAnimEnum> m_enumParams; /* 8 8 */
	CRelativeArray<int> m_intParams; /* 16 8 */
	CRelativeArray<float> m_floatParams; /* 24 8 */
	CRelativeArray<Vector> m_vecParams; /* 32 8 */
	CRelativeArray<Quaternion> m_quatParams; /* 40 8 */
	void CAnimUpdateParameterList(class CAnimUpdateParameterList *, const class CAnimParameterList  &, CSaveablePackedData &, const class CAnimParamIdMap  &); /* linkage=_ZN24CAnimUpdateParameterListC4ERK18CAnimParameterListR12CPackedDataTILb1EERK15CAnimParamIdMap */
	class CAnimVariant GetParamValue(const class CAnimUpdateParameterList  *, const class CAnimParamHandle  &); /* linkage=_ZNK24CAnimUpdateParameterList13GetParamValueERK16CAnimParamHandle */
	void SetParamValue(class CAnimUpdateParameterList *, const class CAnimParamHandle  &, const class CAnimVariant  &); /* linkage=_ZN24CAnimUpdateParameterList13SetParamValueERK16CAnimParamHandleRK12CAnimVariant */
	void SetParamValue(class CAnimUpdateParameterList *, int, const class CAnimVariant  &); /* linkage=_ZN24CAnimUpdateParameterList13SetParamValueEiRK12CAnimVariant */
	int GetBoolCount(const class CAnimUpdateParameterList  *); /* linkage=_ZNK24CAnimUpdateParameterList12GetBoolCountEv */
	bool & GetBool(class CAnimUpdateParameterList *, int); /* linkage=_ZN24CAnimUpdateParameterList7GetBoolEi */
	int GetEnumCount(const class CAnimUpdateParameterList  *); /* linkage=_ZNK24CAnimUpdateParameterList12GetEnumCountEv */
	class CAnimEnum & GetEnum(class CAnimUpdateParameterList *, int); /* linkage=_ZN24CAnimUpdateParameterList7GetEnumEi */
	int GetIntCount(const class CAnimUpdateParameterList  *); /* linkage=_ZNK24CAnimUpdateParameterList11GetIntCountEv */
	int & GetInt(class CAnimUpdateParameterList *, int); /* linkage=_ZN24CAnimUpdateParameterList6GetIntEi */
	int GetFloatCount(const class CAnimUpdateParameterList  *); /* linkage=_ZNK24CAnimUpdateParameterList13GetFloatCountEv */
	float & GetFloat(class CAnimUpdateParameterList *, int); /* linkage=_ZN24CAnimUpdateParameterList8GetFloatEi */
	int GetVectorCount(const class CAnimUpdateParameterList  *); /* linkage=_ZNK24CAnimUpdateParameterList14GetVectorCountEv */
	class Vector & GetVector(class CAnimUpdateParameterList *, int); /* linkage=_ZN24CAnimUpdateParameterList9GetVectorEi */
	int GetQuaternionCount(const class CAnimUpdateParameterList  *); /* linkage=_ZNK24CAnimUpdateParameterList18GetQuaternionCountEv */
	class Quaternion & GetQuaternion(class CAnimUpdateParameterList *, int); /* linkage=_ZN24CAnimUpdateParameterList13GetQuaternionEi */
};

