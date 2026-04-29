
//
// public/meshsystem/morphset.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 34
//	classes: 2
//	structs: 3
//

// <02D9A6FA> ../public/meshsystem/morphset.h:11
// member variables: 4
// struct size: 24
struct MorphCompositeDesc_t {
	const class CMorphData * m_pMorphData; /* 0 8 */
	float m_flWeight; /* 8 4 */
	float m_flDelayedWeight; /* 12 4 */
	MorphCompositeDesc_t * m_pNext; /* 16 8 */
};

// <02D9AB67> ../public/meshsystem/morphset.h:21
// member functions: 32
// member variables: 6
// class size: 40
class CMorphCompositeSet {
	/* ../public/meshsystem/morphset.h:24 */
	void CMorphCompositeSet(CMorphCompositeSet* );
	/* ../public/meshsystem/morphset.h:25 */
	void ~CMorphCompositeSet(CMorphCompositeSet* );
	/* ../public/meshsystem/morphset.h:27 */
	CUtlIntrusiveList<MorphCompositeDesc_t>* GetMorphCompositeDescList(CMorphCompositeSet* );
	/* ../public/meshsystem/morphset.h:32 */
	CMorphCompositeSet* GetNext(const CMorphCompositeSet* );
	/* ../public/meshsystem/morphset.h:37 */
	void SetNext(CMorphCompositeSet* , CMorphCompositeSet* );
	/* ../public/meshsystem/morphset.h:42 */
	void MarkTransformTextureMorphingUnused(matrix3x4a_t* );
	/* ../public/meshsystem/morphset.h:51 */
	bool IsTransformTextureMorphingUnused(matrix3x4a_t* );
	/* ../public/meshsystem/morphset.h:56 */
	void SetTransformTextureMorphSubrect(float, float, float, float, matrix3x4a_t* );
	/* ../public/meshsystem/morphset.h:64 */
	void SetTransformSlotIndexForMorphInfo(CMorphCompositeSet* , int);
	/* ../public/meshsystem/morphset.h:65 */
	int GetTransformSlotIndexForMorphInfo(CMorphCompositeSet* );
	/* ../public/meshsystem/morphset.h:67 */
	void SetOriginWithinCMTAtlas(CMorphCompositeSet* , const Vector2D& );
	/* ../public/meshsystem/morphset.h:68 */
	const Vector2D& GetOriginWithinCMTAtlas(CMorphCompositeSet* );
	/* ../public/meshsystem/morphset.h:69 */
	void SetWidthWithinCMTAtlas(CMorphCompositeSet* , int);
	/* ../public/meshsystem/morphset.h:70 */
	int GetWidthWithinCMTAtlas(CMorphCompositeSet* );
	/* ../public/meshsystem/morphset.h:71 */
	void SetHeightWithinCMTAtlas(CMorphCompositeSet* , int);
	/* ../public/meshsystem/morphset.h:72 */
	int GetHeightWithinCMTAtlas(CMorphCompositeSet* );
private:
	int m_nTransformSlotIndexForMorphInfo; /* 0 4 */
	Vector2D m_vOriginWithinCMTAtlas; /* 4 8 */
	int m_nWidthWithinCMTAtlas; /* 12 4 */
	int m_nHeightWithinCMTAtlas; /* 16 4 */
	CUtlIntrusiveList<MorphCompositeDesc_t> m_morphCompositeDescList; /* 24 8 */
	CMorphCompositeSet * m_pNext; /* 32 8 */
	void CMorphCompositeSet(class CMorphCompositeSet *); /* linkage=_ZN18CMorphCompositeSetC4Ev */
	void ~CMorphCompositeSet(class CMorphCompositeSet *); /* linkage=_ZN18CMorphCompositeSetD4Ev */
	class CUtlIntrusiveList<MorphCompositeDesc_t> * GetMorphCompositeDescList(class CMorphCompositeSet *); /* linkage=_ZN18CMorphCompositeSet25GetMorphCompositeDescListEv */
	class CMorphCompositeSet * GetNext(const class CMorphCompositeSet  *); /* linkage=_ZNK18CMorphCompositeSet7GetNextEv */
	void SetNext(class CMorphCompositeSet *, class CMorphCompositeSet *); /* linkage=_ZN18CMorphCompositeSet7SetNextEPS_ */
	void MarkTransformTextureMorphingUnused(class matrix3x4a_t *); /* linkage=_ZN18CMorphCompositeSet34MarkTransformTextureMorphingUnusedEP12matrix3x4a_t */
	bool IsTransformTextureMorphingUnused(class matrix3x4a_t *); /* linkage=_ZN18CMorphCompositeSet32IsTransformTextureMorphingUnusedEP12matrix3x4a_t */
	void SetTransformTextureMorphSubrect(float, float, float, float, class matrix3x4a_t *); /* linkage=_ZN18CMorphCompositeSet31SetTransformTextureMorphSubrectEffffP12matrix3x4a_t */
	void SetTransformSlotIndexForMorphInfo(class CMorphCompositeSet *, int); /* linkage=_ZN18CMorphCompositeSet33SetTransformSlotIndexForMorphInfoEi */
	int GetTransformSlotIndexForMorphInfo(class CMorphCompositeSet *); /* linkage=_ZN18CMorphCompositeSet33GetTransformSlotIndexForMorphInfoEv */
	void SetOriginWithinCMTAtlas(class CMorphCompositeSet *, const class Vector2D  &); /* linkage=_ZN18CMorphCompositeSet23SetOriginWithinCMTAtlasERK8Vector2D */
	const class Vector2D  & GetOriginWithinCMTAtlas(class CMorphCompositeSet *); /* linkage=_ZN18CMorphCompositeSet23GetOriginWithinCMTAtlasEv */
	void SetWidthWithinCMTAtlas(class CMorphCompositeSet *, int); /* linkage=_ZN18CMorphCompositeSet22SetWidthWithinCMTAtlasEi */
	int GetWidthWithinCMTAtlas(class CMorphCompositeSet *); /* linkage=_ZN18CMorphCompositeSet22GetWidthWithinCMTAtlasEv */
	void SetHeightWithinCMTAtlas(class CMorphCompositeSet *, int); /* linkage=_ZN18CMorphCompositeSet23SetHeightWithinCMTAtlasEi */
	int GetHeightWithinCMTAtlas(class CMorphCompositeSet *); /* linkage=_ZN18CMorphCompositeSet23GetHeightWithinCMTAtlasEv */
};

// <03E9CA2D> ../public/meshsystem/morphset.h:24
void CMorphCompositeSet::CMorphCompositeSet()
{
} /* size: 0 */

// <03E9CA14> ../public/meshsystem/morphset.h:24
inline void CMorphCompositeSet::CMorphCompositeSet()
{
} /* size: 0 */

// <02F202F9> ../public/meshsystem/morphset.h:25
void CMorphCompositeSet::~CMorphCompositeSet()
{
} /* size: 0 */

// <02F202E0> ../public/meshsystem/morphset.h:25
inline void CMorphCompositeSet::~CMorphCompositeSet()
{
} /* size: 0 */

// <03E9C9FB> ../public/meshsystem/morphset.h:27
inline void CMorphCompositeSet::GetMorphCompositeDescList()
{
} /* size: 0 */

// <02F202AE> ../public/meshsystem/morphset.h:32
inline void CMorphCompositeSet::GetNext()
{
} /* size: 0 */

// <02F20289> ../public/meshsystem/morphset.h:37
inline void CMorphCompositeSet::SetNext(CMorphCompositeSet* pNext)
{
} /* size: 0 */

// <03E9C9E4> ../public/meshsystem/morphset.h:42
inline void MarkTransformTextureMorphingUnused(matrix3x4a_t* pTransform)
{
} /* size: 0 */

// <02F20272> ../public/meshsystem/morphset.h:51
inline void IsTransformTextureMorphingUnused(matrix3x4a_t* pTransform)
{
} /* size: 0 */

// <03E9C99D> ../public/meshsystem/morphset.h:56
inline void SetTransformTextureMorphSubrect(float flUOffset, float flURange, float flVOffset, float flVRange, matrix3x4a_t* pTransform)
{
} /* size: 0 */

// <03E9C978> ../public/meshsystem/morphset.h:64
inline void CMorphCompositeSet::SetTransformSlotIndexForMorphInfo(int nTransformSlotIndexForMorphInfo)
{
} /* size: 0 */

// <02F20212> ../public/meshsystem/morphset.h:65
inline void CMorphCompositeSet::GetTransformSlotIndexForMorphInfo()
{
} /* size: 0 */

// <02F201EE> ../public/meshsystem/morphset.h:67
inline void CMorphCompositeSet::SetOriginWithinCMTAtlas(const Vector2D& pt)
{
} /* size: 0 */

// <02F201D5> ../public/meshsystem/morphset.h:68
inline void CMorphCompositeSet::GetOriginWithinCMTAtlas()
{
} /* size: 0 */

// <02F201B0> ../public/meshsystem/morphset.h:69
inline void CMorphCompositeSet::SetWidthWithinCMTAtlas(int width)
{
} /* size: 0 */

// <02F20197> ../public/meshsystem/morphset.h:70
inline void CMorphCompositeSet::GetWidthWithinCMTAtlas()
{
} /* size: 0 */

// <02F20172> ../public/meshsystem/morphset.h:71
inline void CMorphCompositeSet::SetHeightWithinCMTAtlas(int height)
{
} /* size: 0 */

// <02F20159> ../public/meshsystem/morphset.h:72
inline void CMorphCompositeSet::GetHeightWithinCMTAtlas()
{
} /* size: 0 */

// <04E81D2B> ../public/meshsystem/morphset.h:92
void FlexControllerMapping_t::FlexControllerMapping_t()
{
} /* size: 0 */

// <04E81D0E> ../public/meshsystem/morphset.h:92
inline void FlexControllerMapping_t::FlexControllerMapping_t()
{
} /* size: 0 */

// <02D9ADFC> ../public/meshsystem/morphset.h:92
// member variable: 1
// struct size: 8
struct FlexControllerMapping_t {
	const class CFlexController * m_pFlexController; /* 0 8 */
};

// <04E81150> ../public/meshsystem/morphset.h:97
void FlexDescMapping_t::FlexDescMapping_t()
{
} /* size: 0 */

// <04E81133> ../public/meshsystem/morphset.h:97
inline void FlexDescMapping_t::FlexDescMapping_t()
{
} /* size: 0 */

// <02D9AE1E> ../public/meshsystem/morphset.h:97
// member variables: 3
// struct size: 24
struct FlexDescMapping_t {
	const class CMorphData * m_pMorphData; /* 0 8 */
	const class CFlexRule * m_pFlexRule; /* 8 8 */
	const class CFlexDesc * m_pFlexDesc; /* 16 8 */
};

// <02D9E38F> ../public/meshsystem/morphset.h:106
// member functions: 44
// member variables: 7
// class size: 104
class CMorphSet {
	/* ../public/meshsystem/morphset.h:110 */
	void CMorphSet(CMorphSet* );
	/* ../public/meshsystem/morphset.h:111 */
	void ~CMorphSet(CMorphSet* );
	/* ../public/meshsystem/morphset.h:113 */
	void InitFromV0Data(CMorphSet* , CConvertOldDiskCtx& , CMorphSetData* );
	/* ../public/meshsystem/morphset.h:114 */
	void InitFromV0DataExternalTexture(CMorphSet* , CConvertOldDiskCtx& , CMorphSetData* , IRD_RegisterResourceDataUtils* , ResourceHandle_t, const char* );
	/* ../public/meshsystem/morphset.h:116 */
	bool ConvertMorphRuleToExpressionString(const CMorphSet* , CUtlString& , int);
	/* ../public/meshsystem/morphset.h:118 */
	void RunFlexRules(const CMorphSet* , const int16* , const float* , int, float* );
	/* ../public/meshsystem/morphset.h:124 */
	CUtlIntrusiveList<CMorphCompositeSet>* GetMorphCompositeSetList(CMorphSet* );
	/* ../public/meshsystem/morphset.h:129 */
	CMorphSet* GetNext(CMorphSet* );
	/* ../public/meshsystem/morphset.h:134 */
	void SetNext(CMorphSet* , CMorphSet* );
	/* ../public/meshsystem/morphset.h:139 */
	uint GetFrame(const CMorphSet* );
	/* ../public/meshsystem/morphset.h:144 */
	bool UpdateFrameCountTS(CMorphSet* , int, int);
	/* ../public/meshsystem/morphset.h:149 */
	const CMorphSetData* GetMorphSetData(const CMorphSet* );
	/* ../public/meshsystem/morphset.h:154 */
	int GetFlexControllerCount(const CMorphSet* );
	/* ../public/meshsystem/morphset.h:159 */
	const CFlexController* GetFlexController(const CMorphSet* , int);
	/* ../public/meshsystem/morphset.h:169 */
	int GetFlexDescCount(const CMorphSet* );
	/* ../public/meshsystem/morphset.h:174 */
	int GetFlexRuleCount(const CMorphSet* );
	/* ../public/meshsystem/morphset.h:180 */
	const CFlexRule* GetFlexRule(const CMorphSet* , int);
	/* ../public/meshsystem/morphset.h:190 */
	const CFlexDesc* GetFlexDesc(const CMorphSet* , int);
	/* ../public/meshsystem/morphset.h:200 */
	int GetFlexDescIndex(const CMorphSet* , int);
	/* ../public/meshsystem/morphset.h:207 */
	const CMorphData* FindMorphData(const CMorphSet* , int);
	/* ../public/meshsystem/morphset.h:215 */
	void SetName(CMorphSet* , const char* );
private:
	/* ../public/meshsystem/morphset.h:223 */
	void Initialize(CMorphSet* );
	CSmartPtr<CMorphSetData, CRefCountAccessor> m_pMorphSetData; /* 0 8 */
	CUtlVector<FlexControllerMapping_t, CUtlMemory<FlexControllerMapping_t, int> > m_controllerMappings; /* 8 32 */
	CUtlVector<FlexDescMapping_t, CUtlMemory<FlexDescMapping_t, int> > m_descMappings; /* 40 32 */
	CUtlIntrusiveList<CMorphCompositeSet> m_morphCompositeSetList; /* 72 8 */
	uint32 m_nFrameCount; /* 80 4 */
	CMorphSet * m_pNext; /* 88 8 */
	CUtlString m_name; /* 96 8 */
	void CMorphSet(class CMorphSet *); /* linkage=_ZN9CMorphSetC4Ev */
	void ~CMorphSet(class CMorphSet *); /* linkage=_ZN9CMorphSetD4Ev */
	void InitFromV0Data(class CMorphSet *, class CConvertOldDiskCtx &, class CMorphSetData *); /* linkage=_ZN9CMorphSet14InitFromV0DataER18CConvertOldDiskCtxP13CMorphSetData */
	void InitFromV0DataExternalTexture(class CMorphSet *, class CConvertOldDiskCtx &, class CMorphSetData *, class IRD_RegisterResourceDataUtils *, ResourceHandle_t, const char  *); /* linkage=_ZN9CMorphSet29InitFromV0DataExternalTextureER18CConvertOldDiskCtxP13CMorphSetDataP29IRD_RegisterResourceDataUtilsPK21ResourceBindingBase_tPKc */
	bool ConvertMorphRuleToExpressionString(const class CMorphSet  *, class CUtlString &, int); /* linkage=_ZNK9CMorphSet34ConvertMorphRuleToExpressionStringER10CUtlStringi */
	void RunFlexRules(const class CMorphSet  *, const int16  *, const float  *, int, float *); /* linkage=_ZNK9CMorphSet12RunFlexRulesEPKsPKfiPf */
	class CUtlIntrusiveList<CMorphCompositeSet> * GetMorphCompositeSetList(class CMorphSet *); /* linkage=_ZN9CMorphSet24GetMorphCompositeSetListEv */
	class CMorphSet * GetNext(class CMorphSet *); /* linkage=_ZN9CMorphSet7GetNextEv */
	void SetNext(class CMorphSet *, class CMorphSet *); /* linkage=_ZN9CMorphSet7SetNextEPS_ */
	uint GetFrame(const class CMorphSet  *); /* linkage=_ZNK9CMorphSet8GetFrameEv */
	bool UpdateFrameCountTS(class CMorphSet *, int, int); /* linkage=_ZN9CMorphSet18UpdateFrameCountTSEii */
	const class CMorphSetData  * GetMorphSetData(const class CMorphSet  *); /* linkage=_ZNK9CMorphSet15GetMorphSetDataEv */
	int GetFlexControllerCount(const class CMorphSet  *); /* linkage=_ZNK9CMorphSet22GetFlexControllerCountEv */
	const class CFlexController  * GetFlexController(const class CMorphSet  *, int); /* linkage=_ZNK9CMorphSet17GetFlexControllerEi */
	int GetFlexDescCount(const class CMorphSet  *); /* linkage=_ZNK9CMorphSet16GetFlexDescCountEv */
	int GetFlexRuleCount(const class CMorphSet  *); /* linkage=_ZNK9CMorphSet16GetFlexRuleCountEv */
	const class CFlexRule  * GetFlexRule(const class CMorphSet  *, int); /* linkage=_ZNK9CMorphSet11GetFlexRuleEi */
	const class CFlexDesc  * GetFlexDesc(const class CMorphSet  *, int); /* linkage=_ZNK9CMorphSet11GetFlexDescEi */
	int GetFlexDescIndex(const class CMorphSet  *, int); /* linkage=_ZNK9CMorphSet16GetFlexDescIndexEi */
	const class CMorphData  * FindMorphData(const class CMorphSet  *, int); /* linkage=_ZNK9CMorphSet13FindMorphDataEi */
	void SetName(class CMorphSet *, const char  *); /* linkage=_ZN9CMorphSet7SetNameEPKc */
	void Initialize(class CMorphSet *); /* linkage=_ZN9CMorphSet10InitializeEv */
};

// <04CA98D7> ../public/meshsystem/morphset.h:110
void CMorphSet::CMorphSet()
{
} /* size: 0 */

// <04CA99C7> ../public/meshsystem/morphset.h:111
void CMorphSet::~CMorphSet()
{
} /* size: 0 */

// <03E9C95F> ../public/meshsystem/morphset.h:124
inline void CMorphSet::GetMorphCompositeSetList()
{
} /* size: 0 */

// <02F20127> ../public/meshsystem/morphset.h:129
inline void CMorphSet::GetNext()
{
} /* size: 0 */

// <03E9C946> ../public/meshsystem/morphset.h:139
inline void CMorphSet::GetFrame()
{
} /* size: 0 */

// <03E9C915> ../public/meshsystem/morphset.h:144
inline void CMorphSet::UpdateFrameCountTS(int nNewFrameCount, int nCurrentFrameCount)
{
} /* size: 0 */

// <04CD9712> ../public/meshsystem/morphset.h:149
inline void CMorphSet::GetMorphSetData()
{
} /* size: 0 */

// <04E98F23> ../public/meshsystem/morphset.h:154
inline void CMorphSet::GetFlexControllerCount()
{
} /* size: 0 */

// <003723A7> ../public/meshsystem/morphset.h:159
// variables: 2
inline void CMorphSet::GetFlexController(int i)
{
	const char   __FUNCTION__; // 27575
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 163
	}
} /* size: 0, variables: 1 */

// <04E98F0A> ../public/meshsystem/morphset.h:169
inline void CMorphSet::GetFlexDescCount()
{
} /* size: 0 */

// <03E9C8F0> ../public/meshsystem/morphset.h:207
inline void CMorphSet::FindMorphData(int nFlexDesc)
{
} /* size: 0 */

// <04CD96BB> ../public/meshsystem/morphset.h:215
inline void CMorphSet::SetName(const char* pszName)
{
} /* size: 0 */

