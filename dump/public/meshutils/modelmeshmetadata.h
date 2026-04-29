
//
// public/meshutils/modelmeshmetadata.h
//
//	referenced by: libengine2.so
//
//	functions: 5
//	classes: 2
//

// <05FA0F6E> ../public/meshutils/modelmeshmetadata.h:12
void CModelMeshMetaData::CModelMeshMetaData()
{
} /* size: 0 */

// <05FA0F52> ../public/meshutils/modelmeshmetadata.h:12
inline void CModelMeshMetaData::CModelMeshMetaData()
{
} /* size: 0 */

// <05F9ECDC> ../public/meshutils/modelmeshmetadata.h:12
inline void CModelMeshMetaData::operator=(const CModelMeshMetaData &)
{
} /* size: 0 */

// <05C4DB52> ../public/meshutils/modelmeshmetadata.h:12
// member functions: 38
// member variable: 1
// class size: 16
class CModelMeshMetaData {
	/* ../public/meshutils/modelmeshmetadata.h:18 */
	void SetMeshID(CModelMeshMetaData* , int);
	/* ../public/meshutils/modelmeshmetadata.h:19 */
	int GetMeshID(const CModelMeshMetaData* );
	/* ../public/meshutils/modelmeshmetadata.h:21 */
	void SetNoCollapse(CModelMeshMetaData* , bool);
	/* ../public/meshutils/modelmeshmetadata.h:22 */
	bool GetNoCollapse(const CModelMeshMetaData* );
	/* ../public/meshutils/modelmeshmetadata.h:24 */
	void SetPackToSharedVB(CModelMeshMetaData* , bool);
	/* ../public/meshutils/modelmeshmetadata.h:25 */
	bool GetPackToSharedVB(const CModelMeshMetaData* );
	/* ../public/meshutils/modelmeshmetadata.h:27 */
	void SetUseBaseVertex(CModelMeshMetaData* , bool);
	/* ../public/meshutils/modelmeshmetadata.h:28 */
	bool GetUseBaseVertex(const CModelMeshMetaData* );
	/* ../public/meshutils/modelmeshmetadata.h:30 */
	void SetUseTintColor(CModelMeshMetaData* , bool);
	/* ../public/meshutils/modelmeshmetadata.h:31 */
	bool GetUseTintColor(const CModelMeshMetaData* );
	/* ../public/meshutils/modelmeshmetadata.h:33 */
	void SetTintColor(CModelMeshMetaData* , const Vector4D& );
	/* ../public/meshutils/modelmeshmetadata.h:34 */
	const Vector4D GetTintColor(const CModelMeshMetaData* );
	/* ../public/meshutils/modelmeshmetadata.h:36 */
	void SetCollisionType(CModelMeshMetaData* , int);
	/* ../public/meshutils/modelmeshmetadata.h:37 */
	int GetCollisionType(const CModelMeshMetaData* );
	/* ../public/meshutils/modelmeshmetadata.h:39 */
	void SetLightmapScaleBias(CModelMeshMetaData* , float);
	/* ../public/meshutils/modelmeshmetadata.h:40 */
	float GetLightmapScaleBias(const CModelMeshMetaData* );
	/* ../public/meshutils/modelmeshmetadata.h:44 */
	void Clear(CModelMeshMetaData* );
	/* ../public/meshutils/modelmeshmetadata.h:49 */
	bool IsEmpty(const CModelMeshMetaData* );
private:
	KeyValues3 m_KVData; /* 0 16 */
	void SetMeshID(class CModelMeshMetaData *, int); /* linkage=_ZN18CModelMeshMetaData9SetMeshIDEi */
	int GetMeshID(const class CModelMeshMetaData  *); /* linkage=_ZNK18CModelMeshMetaData9GetMeshIDEv */
	void SetNoCollapse(class CModelMeshMetaData *, bool); /* linkage=_ZN18CModelMeshMetaData13SetNoCollapseEb */
	bool GetNoCollapse(const class CModelMeshMetaData  *); /* linkage=_ZNK18CModelMeshMetaData13GetNoCollapseEv */
	void SetPackToSharedVB(class CModelMeshMetaData *, bool); /* linkage=_ZN18CModelMeshMetaData17SetPackToSharedVBEb */
	bool GetPackToSharedVB(const class CModelMeshMetaData  *); /* linkage=_ZNK18CModelMeshMetaData17GetPackToSharedVBEv */
	void SetUseBaseVertex(class CModelMeshMetaData *, bool); /* linkage=_ZN18CModelMeshMetaData16SetUseBaseVertexEb */
	bool GetUseBaseVertex(const class CModelMeshMetaData  *); /* linkage=_ZNK18CModelMeshMetaData16GetUseBaseVertexEv */
	void SetUseTintColor(class CModelMeshMetaData *, bool); /* linkage=_ZN18CModelMeshMetaData15SetUseTintColorEb */
	bool GetUseTintColor(const class CModelMeshMetaData  *); /* linkage=_ZNK18CModelMeshMetaData15GetUseTintColorEv */
	void SetTintColor(class CModelMeshMetaData *, const class Vector4D  &); /* linkage=_ZN18CModelMeshMetaData12SetTintColorERK8Vector4D */
	const class Vector4D  GetTintColor(const class CModelMeshMetaData  *); /* linkage=_ZNK18CModelMeshMetaData12GetTintColorEv */
	void SetCollisionType(class CModelMeshMetaData *, int); /* linkage=_ZN18CModelMeshMetaData16SetCollisionTypeEi */
	int GetCollisionType(const class CModelMeshMetaData  *); /* linkage=_ZNK18CModelMeshMetaData16GetCollisionTypeEv */
	void SetLightmapScaleBias(class CModelMeshMetaData *, float); /* linkage=_ZN18CModelMeshMetaData20SetLightmapScaleBiasEf */
	float GetLightmapScaleBias(const class CModelMeshMetaData  *); /* linkage=_ZNK18CModelMeshMetaData20GetLightmapScaleBiasEv */
	void Clear(class CModelMeshMetaData *); /* linkage=_ZN18CModelMeshMetaData5ClearEv */
	bool IsEmpty(const class CModelMeshMetaData  *); /* linkage=_ZNK18CModelMeshMetaData7IsEmptyEv */
	class CModelMeshMetaData & operator=(class CModelMeshMetaData *, const class CModelMeshMetaData  &); /* linkage=_ZN18CModelMeshMetaDataaSERKS_ */
	void CModelMeshMetaData(class CModelMeshMetaData *); /* linkage=_ZN18CModelMeshMetaDataC4Ev */
};

// <05F32478> ../public/meshutils/modelmeshmetadata.h:12
// member functions: 40
// member variable: 1
// class size: 16
class CModelMeshMetaData {
	/* ../public/meshutils/modelmeshmetadata.h:18 */
	void SetMeshID(CModelMeshMetaData* , int);
	/* ../public/meshutils/modelmeshmetadata.h:19 */
	int GetMeshID(const CModelMeshMetaData* );
	/* ../public/meshutils/modelmeshmetadata.h:21 */
	void SetNoCollapse(CModelMeshMetaData* , bool);
	/* ../public/meshutils/modelmeshmetadata.h:22 */
	bool GetNoCollapse(const CModelMeshMetaData* );
	/* ../public/meshutils/modelmeshmetadata.h:24 */
	void SetPackToSharedVB(CModelMeshMetaData* , bool);
	/* ../public/meshutils/modelmeshmetadata.h:25 */
	bool GetPackToSharedVB(const CModelMeshMetaData* );
	/* ../public/meshutils/modelmeshmetadata.h:27 */
	void SetUseBaseVertex(CModelMeshMetaData* , bool);
	/* ../public/meshutils/modelmeshmetadata.h:28 */
	bool GetUseBaseVertex(const CModelMeshMetaData* );
	/* ../public/meshutils/modelmeshmetadata.h:30 */
	void SetUseTintColor(CModelMeshMetaData* , bool);
	/* ../public/meshutils/modelmeshmetadata.h:31 */
	bool GetUseTintColor(const CModelMeshMetaData* );
	/* ../public/meshutils/modelmeshmetadata.h:33 */
	void SetTintColor(CModelMeshMetaData* , const Vector4D& );
	/* ../public/meshutils/modelmeshmetadata.h:34 */
	const Vector4D GetTintColor(const CModelMeshMetaData* );
	/* ../public/meshutils/modelmeshmetadata.h:36 */
	void SetCollisionType(CModelMeshMetaData* , int);
	/* ../public/meshutils/modelmeshmetadata.h:37 */
	int GetCollisionType(const CModelMeshMetaData* );
	/* ../public/meshutils/modelmeshmetadata.h:39 */
	void SetLightmapScaleBias(CModelMeshMetaData* , float);
	/* ../public/meshutils/modelmeshmetadata.h:40 */
	float GetLightmapScaleBias(const CModelMeshMetaData* );
	/* ../public/meshutils/modelmeshmetadata.h:44 */
	void Clear(CModelMeshMetaData* );
	/* ../public/meshutils/modelmeshmetadata.h:49 */
	bool IsEmpty(const CModelMeshMetaData* );
private:
	KeyValues3 m_KVData; /* 0 16 */
	CModelMeshMetaData& operator=(CModelMeshMetaData* , const CModelMeshMetaData& );
	void CModelMeshMetaData(CModelMeshMetaData* );
	void SetMeshID(class CModelMeshMetaData *, int); /* linkage=_ZN18CModelMeshMetaData9SetMeshIDEi */
	int GetMeshID(const class CModelMeshMetaData  *); /* linkage=_ZNK18CModelMeshMetaData9GetMeshIDEv */
	void SetNoCollapse(class CModelMeshMetaData *, bool); /* linkage=_ZN18CModelMeshMetaData13SetNoCollapseEb */
	bool GetNoCollapse(const class CModelMeshMetaData  *); /* linkage=_ZNK18CModelMeshMetaData13GetNoCollapseEv */
	void SetPackToSharedVB(class CModelMeshMetaData *, bool); /* linkage=_ZN18CModelMeshMetaData17SetPackToSharedVBEb */
	bool GetPackToSharedVB(const class CModelMeshMetaData  *); /* linkage=_ZNK18CModelMeshMetaData17GetPackToSharedVBEv */
	void SetUseBaseVertex(class CModelMeshMetaData *, bool); /* linkage=_ZN18CModelMeshMetaData16SetUseBaseVertexEb */
	bool GetUseBaseVertex(const class CModelMeshMetaData  *); /* linkage=_ZNK18CModelMeshMetaData16GetUseBaseVertexEv */
	void SetUseTintColor(class CModelMeshMetaData *, bool); /* linkage=_ZN18CModelMeshMetaData15SetUseTintColorEb */
	bool GetUseTintColor(const class CModelMeshMetaData  *); /* linkage=_ZNK18CModelMeshMetaData15GetUseTintColorEv */
	void SetTintColor(class CModelMeshMetaData *, const class Vector4D  &); /* linkage=_ZN18CModelMeshMetaData12SetTintColorERK8Vector4D */
	const class Vector4D  GetTintColor(const class CModelMeshMetaData  *); /* linkage=_ZNK18CModelMeshMetaData12GetTintColorEv */
	void SetCollisionType(class CModelMeshMetaData *, int); /* linkage=_ZN18CModelMeshMetaData16SetCollisionTypeEi */
	int GetCollisionType(const class CModelMeshMetaData  *); /* linkage=_ZNK18CModelMeshMetaData16GetCollisionTypeEv */
	void SetLightmapScaleBias(class CModelMeshMetaData *, float); /* linkage=_ZN18CModelMeshMetaData20SetLightmapScaleBiasEf */
	float GetLightmapScaleBias(const class CModelMeshMetaData  *); /* linkage=_ZNK18CModelMeshMetaData20GetLightmapScaleBiasEv */
	void Clear(class CModelMeshMetaData *); /* linkage=_ZN18CModelMeshMetaData5ClearEv */
	bool IsEmpty(const class CModelMeshMetaData  *); /* linkage=_ZNK18CModelMeshMetaData7IsEmptyEv */
	class CModelMeshMetaData & operator=(class CModelMeshMetaData *, const class CModelMeshMetaData  &); /* linkage=_ZN18CModelMeshMetaDataaSERKS_ */
	void CModelMeshMetaData(class CModelMeshMetaData *); /* linkage=_ZN18CModelMeshMetaDataC4Ev */
};

// <05FA1122> ../public/meshutils/modelmeshmetadata.h:44
inline void CModelMeshMetaData::Clear()
{
} /* size: 0 */

// <05FA1109> ../public/meshutils/modelmeshmetadata.h:49
inline void CModelMeshMetaData::IsEmpty()
{
} /* size: 0 */

