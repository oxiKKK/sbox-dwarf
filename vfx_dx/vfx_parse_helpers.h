
//
// vfx_dx/vfx_parse_helpers.h
//
//	referenced by: libvfx_vulkan.so
//
//	functions: 45
//	classes: 15
//

// <002A52AA> ../vfx_dx/vfx_parse_helpers.h:130
void CVfxAnnotation::~CVfxAnnotation()
{
} /* size: 0 */

// <002A528D> ../vfx_dx/vfx_parse_helpers.h:130
inline void CVfxAnnotation::~CVfxAnnotation()
{
} /* size: 0 */

// <002945F7> ../vfx_dx/vfx_parse_helpers.h:130
void CVfxAnnotation::CVfxAnnotation(const CVfxAnnotation &)
{
} /* size: 0 */

// <002945D5> ../vfx_dx/vfx_parse_helpers.h:130
inline void CVfxAnnotation::CVfxAnnotation(const CVfxAnnotation &)
{
} /* size: 0 */

// <0009D82A> ../vfx_dx/vfx_parse_helpers.h:130
// member functions: 12
// member variables: 4
// class size: 1,040
class CVfxAnnotation {
	/* ../vfx_dx/vfx_parse_helpers.h:152 */
	union {
		char m_stringData[1024]; /* 0 1024 */
		float32 m_flData[64]; /* 0 256 */
	};
	/* ../vfx_dx/vfx_parse_helpers.h:133 */
	void CVfxAnnotation(CVfxAnnotation* );
	CUtlString m_name; /* 0 8 */
	VfxParsedShaderParamType_t m_type; /* 8 4 */
	/* ../vfx_dx/vfx_parse_helpers.h:138 */
	const char* GetString(const CVfxAnnotation* );
	/* ../vfx_dx/vfx_parse_helpers.h:139 */
	bool GetFloatArray(const CVfxAnnotation* , float32* , int32);
	/* ../vfx_dx/vfx_parse_helpers.h:141 */
	void SetString(CVfxAnnotation* , const char* );
	/* ../vfx_dx/vfx_parse_helpers.h:142 */
	void SetFloatArray(CVfxAnnotation* , const float32* , int32);
private:
	union {
		char m_stringData[1024]; /* 12 1024 */
		float32 m_flData[64]; /* 12 256 */
	}; /* 12 1024 */
	int32 m_nDataSize; /* 1036 4 */
	void ~CVfxAnnotation(CVfxAnnotation* );
	void CVfxAnnotation(class CVfxAnnotation *); /* linkage=_ZN14CVfxAnnotationC4Ev */
	/* <25094a> ../vfx_dx/vfx_parse_helpers.cpp:2856 */
	const char  * GetString(const class CVfxAnnotation  *); /* linkage=_ZNK14CVfxAnnotation9GetStringEv */
	/* <250975> ../vfx_dx/vfx_parse_helpers.cpp:2866 */
	bool GetFloatArray(const class CVfxAnnotation  *, float32 *, int32); /* linkage=_ZNK14CVfxAnnotation13GetFloatArrayEPfi */
	void SetString(class CVfxAnnotation *, const char  *); /* linkage=_ZN14CVfxAnnotation9SetStringEPKc */
	void SetFloatArray(class CVfxAnnotation *, const float32  *, int32); /* linkage=_ZN14CVfxAnnotation13SetFloatArrayEPKfi */
	void ~CVfxAnnotation(class CVfxAnnotation *); /* linkage=_ZN14CVfxAnnotationD4Ev */
};

// <002148F9> ../vfx_dx/vfx_parse_helpers.h:130
// member functions: 11
// member variables: 4
// class size: 1,040
class CVfxAnnotation {
	/* ../vfx_dx/vfx_parse_helpers.h:146 */
	enum {
		MAX_NUM_FLOATS = 64,
		MAX_STRING_LENGTH = 1024,
	};
	/* ../vfx_dx/vfx_parse_helpers.h:152 */
	union {
		char m_stringData[1024]; /* 0 1024 */
		float32 m_flData[64]; /* 0 256 */
	};
	/* ../vfx_dx/vfx_parse_helpers.h:133 */
	void CVfxAnnotation(CVfxAnnotation* );
	CUtlString m_name; /* 0 8 */
	VfxParsedShaderParamType_t m_type; /* 8 4 */
	/* ../vfx_dx/vfx_parse_helpers.h:138 */
	const char* GetString(const CVfxAnnotation* );
	/* ../vfx_dx/vfx_parse_helpers.h:139 */
	bool GetFloatArray(const CVfxAnnotation* , float32* , int32);
	/* ../vfx_dx/vfx_parse_helpers.h:141 */
	void SetString(CVfxAnnotation* , const char* );
	/* ../vfx_dx/vfx_parse_helpers.h:142 */
	void SetFloatArray(CVfxAnnotation* , const float32* , int32);
private:
	union {
		char m_stringData[1024]; /* 12 1024 */
		float32 m_flData[64]; /* 12 256 */
	}; /* 12 1024 */
	int32 m_nDataSize; /* 1036 4 */
	void CVfxAnnotation(class CVfxAnnotation *); /* linkage=_ZN14CVfxAnnotationC4Ev */
	/* <25094a> ../vfx_dx/vfx_parse_helpers.cpp:2856 */
	const char  * GetString(const class CVfxAnnotation  *); /* linkage=_ZNK14CVfxAnnotation9GetStringEv */
	/* <250975> ../vfx_dx/vfx_parse_helpers.cpp:2866 */
	bool GetFloatArray(const class CVfxAnnotation  *, float32 *, int32); /* linkage=_ZNK14CVfxAnnotation13GetFloatArrayEPfi */
	void SetString(class CVfxAnnotation *, const char  *); /* linkage=_ZN14CVfxAnnotation9SetStringEPKc */
	void SetFloatArray(class CVfxAnnotation *, const float32  *, int32); /* linkage=_ZN14CVfxAnnotation13SetFloatArrayEPKfi */
	void ~CVfxAnnotation(class CVfxAnnotation *); /* linkage=_ZN14CVfxAnnotationD4Ev */
};

// <0026EEED> ../vfx_dx/vfx_parse_helpers.h:130
// member functions: 13
// member variables: 4
// class size: 1,040
class CVfxAnnotation {
	/* ../vfx_dx/vfx_parse_helpers.h:152 */
	union {
		char m_stringData[1024]; /* 0 1024 */
		float32 m_flData[64]; /* 0 256 */
	};
	/* ../vfx_dx/vfx_parse_helpers.h:133 */
	void CVfxAnnotation(CVfxAnnotation* );
	CUtlString m_name; /* 0 8 */
	VfxParsedShaderParamType_t m_type; /* 8 4 */
	/* ../vfx_dx/vfx_parse_helpers.h:138 */
	const char* GetString(const CVfxAnnotation* );
	/* ../vfx_dx/vfx_parse_helpers.h:139 */
	bool GetFloatArray(const CVfxAnnotation* , float32* , int32);
	/* ../vfx_dx/vfx_parse_helpers.h:141 */
	void SetString(CVfxAnnotation* , const char* );
	/* ../vfx_dx/vfx_parse_helpers.h:142 */
	void SetFloatArray(CVfxAnnotation* , const float32* , int32);
private:
	union {
		char m_stringData[1024]; /* 12 1024 */
		float32 m_flData[64]; /* 12 256 */
	}; /* 12 1024 */
	int32 m_nDataSize; /* 1036 4 */
	void CVfxAnnotation(CVfxAnnotation* , const CVfxAnnotation& );
	void ~CVfxAnnotation(CVfxAnnotation* );
	void CVfxAnnotation(class CVfxAnnotation *); /* linkage=_ZN14CVfxAnnotationC4Ev */
	/* <25094a> ../vfx_dx/vfx_parse_helpers.cpp:2856 */
	const char  * GetString(const class CVfxAnnotation  *); /* linkage=_ZNK14CVfxAnnotation9GetStringEv */
	/* <250975> ../vfx_dx/vfx_parse_helpers.cpp:2866 */
	bool GetFloatArray(const class CVfxAnnotation  *, float32 *, int32); /* linkage=_ZNK14CVfxAnnotation13GetFloatArrayEPfi */
	void SetString(class CVfxAnnotation *, const char  *); /* linkage=_ZN14CVfxAnnotation9SetStringEPKc */
	void SetFloatArray(class CVfxAnnotation *, const float32  *, int32); /* linkage=_ZN14CVfxAnnotation13SetFloatArrayEPKfi */
	void ~CVfxAnnotation(class CVfxAnnotation *); /* linkage=_ZN14CVfxAnnotationD4Ev */
};

// <0028A325> ../vfx_dx/vfx_parse_helpers.h:133
void CVfxAnnotation::CVfxAnnotation()
{
} /* size: 0 */

// <000CC9B7> ../vfx_dx/vfx_parse_helpers.h:165
void CVfxParsedShaderParam::~CVfxParsedShaderParam()
{
} /* size: 0 */

// <000CC99B> ../vfx_dx/vfx_parse_helpers.h:165
inline void CVfxParsedShaderParam::~CVfxParsedShaderParam()
{
} /* size: 0 */

// <0009EC12> ../vfx_dx/vfx_parse_helpers.h:165
// member functions: 10
// member variables: 23
// class size: 176
class CVfxParsedShaderParam {
	/* ../vfx_dx/vfx_parse_helpers.h:168 */
	void CVfxParsedShaderParam(CVfxParsedShaderParam* );
	CUtlString m_name; /* 0 8 */
	VfxParsedShaderParamClass_t m_paramClass; /* 8 4 */
	VfxParsedShaderParamType_t m_type; /* 12 4 */
	VfxParsedShaderParamType_t m_bindlessIndexType; /* 16 4 */
	uint32 m_nNumRows; /* 20 4 */
	uint32 m_nNumColumns; /* 24 4 */
	uint32 m_nNumElements; /* 28 4 */
	uint32 m_nNumAnnotations; /* 32 4 */
	uint32 m_nNumStructMembers; /* 36 4 */
	int32 m_nBindlessTextureIdx; /* 40 4 */
	CUtlString m_variableTypeOrSemantic; /* 48 8 */
	bool m_bIsArray; /* 56 1 */
	bool m_bIsBindlessTexture2D; /* 57 1 */
	VfxRegisterType_t m_registerSet; /* 60 4 */
	int32 m_nRegisterOffset; /* 64 4 */
	uint32 m_nRegisterCount; /* 68 4 */
	int32 m_nDescriptorSet; /* 72 4 */
	int32 m_nSamplerBinding; /* 76 4 */
	CVfxParsedConstantBuffer * m_pMyCB; /* 80 8 */
	CVfxParsedShaderParam * m_pParamToPullSamplerAnnotationsFrom; /* 88 8 */
	CUtlVector<CVfxParsedShaderParam*, CUtlMemory<CVfxParsedShaderParam*, int> > m_pDependentParams; /* 96 32 */
	CVfxAnnotationMap m_annotationMap; /* 128 40 */
	/* ../vfx_dx/vfx_parse_helpers.h:217 */
	bool IsUsedInShader(const CVfxParsedShaderParam* );
	/* ../vfx_dx/vfx_parse_helpers.h:218 */
	void SetUsedInShader(CVfxParsedShaderParam* , bool);
private:
	bool m_bUsedInShader; /* 168 1 */
	/* ../vfx_dx/vfx_parse_helpers.h:227 */
	void SetUsedInShaderInternal(CVfxParsedShaderParam* , bool, CUtlVector<CVfxParsedShaderParam*, CUtlMemory<CVfxParsedShaderParam*, int> >& );
	void ~CVfxParsedShaderParam(CVfxParsedShaderParam* );
	void CVfxParsedShaderParam(class CVfxParsedShaderParam *); /* linkage=_ZN21CVfxParsedShaderParamC4Ev */
	bool IsUsedInShader(const class CVfxParsedShaderParam  *); /* linkage=_ZNK21CVfxParsedShaderParam14IsUsedInShaderEv */
	/* <2ab75c> ../vfx_dx/vfx_parse_helpers.h:218 */
	void SetUsedInShader(class CVfxParsedShaderParam *, bool); /* linkage=_ZN21CVfxParsedShaderParam15SetUsedInShaderEb */
	void SetUsedInShaderInternal(class CVfxParsedShaderParam *, bool, class CUtlVector<CVfxParsedShaderParam*, CUtlMemory<CVfxParsedShaderParam*, int> > &); /* linkage=_ZN21CVfxParsedShaderParam23SetUsedInShaderInternalEbR10CUtlVectorIPS_10CUtlMemoryIS1_iEE */
	void ~CVfxParsedShaderParam(class CVfxParsedShaderParam *); /* linkage=_ZN21CVfxParsedShaderParamD4Ev */
};

// <00215CC1> ../vfx_dx/vfx_parse_helpers.h:165
// member functions: 9
// member variables: 23
// class size: 176
class CVfxParsedShaderParam {
	/* ../vfx_dx/vfx_parse_helpers.h:168 */
	void CVfxParsedShaderParam(CVfxParsedShaderParam* );
	CUtlString m_name; /* 0 8 */
	VfxParsedShaderParamClass_t m_paramClass; /* 8 4 */
	VfxParsedShaderParamType_t m_type; /* 12 4 */
	VfxParsedShaderParamType_t m_bindlessIndexType; /* 16 4 */
	uint32 m_nNumRows; /* 20 4 */
	uint32 m_nNumColumns; /* 24 4 */
	uint32 m_nNumElements; /* 28 4 */
	uint32 m_nNumAnnotations; /* 32 4 */
	uint32 m_nNumStructMembers; /* 36 4 */
	int32 m_nBindlessTextureIdx; /* 40 4 */
	CUtlString m_variableTypeOrSemantic; /* 48 8 */
	bool m_bIsArray; /* 56 1 */
	bool m_bIsBindlessTexture2D; /* 57 1 */
	VfxRegisterType_t m_registerSet; /* 60 4 */
	int32 m_nRegisterOffset; /* 64 4 */
	uint32 m_nRegisterCount; /* 68 4 */
	int32 m_nDescriptorSet; /* 72 4 */
	int32 m_nSamplerBinding; /* 76 4 */
	CVfxParsedConstantBuffer * m_pMyCB; /* 80 8 */
	CVfxParsedShaderParam * m_pParamToPullSamplerAnnotationsFrom; /* 88 8 */
	CUtlVector<CVfxParsedShaderParam*, CUtlMemory<CVfxParsedShaderParam*, int> > m_pDependentParams; /* 96 32 */
	CVfxAnnotationMap m_annotationMap; /* 128 40 */
	/* ../vfx_dx/vfx_parse_helpers.h:217 */
	bool IsUsedInShader(const CVfxParsedShaderParam* );
	/* ../vfx_dx/vfx_parse_helpers.h:218 */
	void SetUsedInShader(CVfxParsedShaderParam* , bool);
private:
	bool m_bUsedInShader; /* 168 1 */
	/* ../vfx_dx/vfx_parse_helpers.h:227 */
	void SetUsedInShaderInternal(CVfxParsedShaderParam* , bool, CUtlVector<CVfxParsedShaderParam*, CUtlMemory<CVfxParsedShaderParam*, int> >& );
	void CVfxParsedShaderParam(class CVfxParsedShaderParam *); /* linkage=_ZN21CVfxParsedShaderParamC4Ev */
	bool IsUsedInShader(const class CVfxParsedShaderParam  *); /* linkage=_ZNK21CVfxParsedShaderParam14IsUsedInShaderEv */
	/* <2ab75c> ../vfx_dx/vfx_parse_helpers.h:218 */
	void SetUsedInShader(class CVfxParsedShaderParam *, bool); /* linkage=_ZN21CVfxParsedShaderParam15SetUsedInShaderEb */
	void SetUsedInShaderInternal(class CVfxParsedShaderParam *, bool, class CUtlVector<CVfxParsedShaderParam*, CUtlMemory<CVfxParsedShaderParam*, int> > &); /* linkage=_ZN21CVfxParsedShaderParam23SetUsedInShaderInternalEbR10CUtlVectorIPS_10CUtlMemoryIS1_iEE */
	void ~CVfxParsedShaderParam(class CVfxParsedShaderParam *); /* linkage=_ZN21CVfxParsedShaderParamD4Ev */
};

// <002AA5AC> ../vfx_dx/vfx_parse_helpers.h:168
void CVfxParsedShaderParam::CVfxParsedShaderParam()
{
} /* size: 0 */

// <002AA593> ../vfx_dx/vfx_parse_helpers.h:168
inline void CVfxParsedShaderParam::CVfxParsedShaderParam()
{
} /* size: 0 */

// <0024F356> ../vfx_dx/vfx_parse_helpers.h:217
inline void CVfxParsedShaderParam::IsUsedInShader()
{
} /* size: 0 */

// <002AB75C> ../vfx_dx/vfx_parse_helpers.h:218
// variables: 11
// function calls: 110
void CVfxParsedShaderParam::SetUsedInShader(bool bUsed)
{
	CUtlVector<CVfxParsedShaderParam*, CUtlMemory<CVfxParsedShaderParam*, int> > visited; // 220
	CUtlVectorBase<CVfxParsedShaderParam::GrowMemory(
			int num);  // 1249
	Construct<CVfxParsedShaderParam*, CVfxParsedShaderParam*>(CVfxParsedShaderParam** pMemory); // 1252
	CUtlVectorBase<CVfxParsedShaderParam::AddToTail(
			CVfxParsedShaderParam *& src);  // 229
	{
		int i; // 231
		{
			int i; // 231
			{
				int i; // 231
				{
					int i; // 231
					{
						int i; // 231
						CUtlVectorBase<CVfxParsedShaderParam::Count(); // 231
						CUtlMemory<CVfxParsedShaderParam::operator[](
								int i);  // 588
						CUtlVectorBase<CVfxParsedShaderParam::operator[](
								int i);  // 233
						{
							int i; // 1531
						}
						CUtlVectorBase<CVfxParsedShaderParam::Find(
							CVfxParsedShaderParam* const& src);  // 233
					}
					CUtlVectorBase<CVfxParsedShaderParam::GrowMemory(
							int num);  // 1249
					Construct<CVfxParsedShaderParam*, CVfxParsedShaderParam*>(CVfxParsedShaderParam** pMemory); // 1252
					CUtlVectorBase<CVfxParsedShaderParam::AddToTail(
							CVfxParsedShaderParam *& src);  // 229
					CVfxParsedShaderParam::SetUsedInShaderInternal(
								bool bUsed,
								CUtlVector<CVfxParsedShaderParam*, CUtlMemory<CVfxParsedShaderParam*, int> >& alreadyVisited);  // 221
					CUtlMemory<CVfxParsedShaderParam::ValidateGrowSize(); // 475
					CUtlMemory<CVfxParsedShaderParam::CUtlMemory(
							int nGrowSize,
							int nInitAllocationCount);  // 527
					CUtlVectorBase<CVfxParsedShaderParam::ResetDbgInfo(); // 530
					CUtlVectorBase<CVfxParsedShaderParam::CUtlVectorBase(
							int growSize,
							int initCapacity);  // 418
					CUtlVector<CVfxParsedShaderParam::CUtlVector(); // 220
					CUtlMemory<CVfxParsedShaderParam::Purge(); // 903
					CUtlMemory<CVfxParsedShaderParam::Purge(); // 1799
					CUtlVectorBase<CVfxParsedShaderParam::Purge(); // 560
					ValidateAlignment<CVfxParsedShaderParam*>(void); // 508
					CUtlMemory<CVfxParsedShaderParam::Purge(); // 903
					CUtlMemory<CVfxParsedShaderParam::Purge(); // 510
					CUtlMemory<CVfxParsedShaderParam::~CUtlMemory(); // 562
					CUtlVectorBase<CVfxParsedShaderParam::~CUtlVectorBase(); // 410
					CUtlVector<CVfxParsedShaderParam::~CUtlVector(); // 222
					CVfxParsedShaderParam::SetUsedInShader(
							bool bUsed);  // 235
					CUtlVectorBase<CVfxParsedShaderParam::Count(); // 231
					CUtlMemory<CVfxParsedShaderParam::operator[](
							int i);  // 588
					CUtlVectorBase<CVfxParsedShaderParam::operator[](
							int i);  // 233
					{
						int i; // 1531
					}
					CUtlVectorBase<CVfxParsedShaderParam::Find(
						CVfxParsedShaderParam* const& src);  // 233
				}
				CUtlVectorBase<CVfxParsedShaderParam::GrowMemory(
						int num);  // 1249
				Construct<CVfxParsedShaderParam*, CVfxParsedShaderParam*>(CVfxParsedShaderParam** pMemory); // 1252
				CUtlVectorBase<CVfxParsedShaderParam::AddToTail(
						CVfxParsedShaderParam *& src);  // 229
				CVfxParsedShaderParam::SetUsedInShaderInternal(
							bool bUsed,
							CUtlVector<CVfxParsedShaderParam*, CUtlMemory<CVfxParsedShaderParam*, int> >& alreadyVisited);  // 221
				CUtlMemory<CVfxParsedShaderParam::ValidateGrowSize(); // 475
				CUtlMemory<CVfxParsedShaderParam::CUtlMemory(
						int nGrowSize,
						int nInitAllocationCount);  // 527
				CUtlVectorBase<CVfxParsedShaderParam::ResetDbgInfo(); // 530
				CUtlVectorBase<CVfxParsedShaderParam::CUtlVectorBase(
						int growSize,
						int initCapacity);  // 418
				CUtlVector<CVfxParsedShaderParam::CUtlVector(); // 220
				CUtlMemory<CVfxParsedShaderParam::Purge(); // 903
				CUtlMemory<CVfxParsedShaderParam::Purge(); // 1799
				CUtlVectorBase<CVfxParsedShaderParam::Purge(); // 560
				ValidateAlignment<CVfxParsedShaderParam*>(void); // 508
				CUtlMemory<CVfxParsedShaderParam::Purge(); // 903
				CUtlMemory<CVfxParsedShaderParam::Purge(); // 510
				CUtlMemory<CVfxParsedShaderParam::~CUtlMemory(); // 562
				CUtlVectorBase<CVfxParsedShaderParam::~CUtlVectorBase(); // 410
				CUtlVector<CVfxParsedShaderParam::~CUtlVector(); // 222
				CVfxParsedShaderParam::SetUsedInShader(
						bool bUsed);  // 235
				CUtlVectorBase<CVfxParsedShaderParam::Count(); // 231
				CUtlMemory<CVfxParsedShaderParam::operator[](
						int i);  // 588
				CUtlVectorBase<CVfxParsedShaderParam::operator[](
						int i);  // 233
				{
					int i; // 1531
				}
				CUtlVectorBase<CVfxParsedShaderParam::Find(
					CVfxParsedShaderParam* const& src);  // 233
			}
			CUtlVectorBase<CVfxParsedShaderParam::GrowMemory(
					int num);  // 1249
			Construct<CVfxParsedShaderParam*, CVfxParsedShaderParam*>(CVfxParsedShaderParam** pMemory); // 1252
			CUtlVectorBase<CVfxParsedShaderParam::AddToTail(
					CVfxParsedShaderParam *& src);  // 229
			CVfxParsedShaderParam::SetUsedInShaderInternal(
						bool bUsed,
						CUtlVector<CVfxParsedShaderParam*, CUtlMemory<CVfxParsedShaderParam*, int> >& alreadyVisited);  // 221
			CUtlMemory<CVfxParsedShaderParam::ValidateGrowSize(); // 475
			CUtlMemory<CVfxParsedShaderParam::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<CVfxParsedShaderParam::ResetDbgInfo(); // 530
			CUtlVectorBase<CVfxParsedShaderParam::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<CVfxParsedShaderParam::CUtlVector(); // 220
			CUtlMemory<CVfxParsedShaderParam::Purge(); // 903
			CUtlMemory<CVfxParsedShaderParam::Purge(); // 1799
			CUtlVectorBase<CVfxParsedShaderParam::Purge(); // 560
			ValidateAlignment<CVfxParsedShaderParam*>(void); // 508
			CUtlMemory<CVfxParsedShaderParam::Purge(); // 903
			CUtlMemory<CVfxParsedShaderParam::Purge(); // 510
			CUtlMemory<CVfxParsedShaderParam::~CUtlMemory(); // 562
			CUtlVectorBase<CVfxParsedShaderParam::~CUtlVectorBase(); // 410
			CUtlVector<CVfxParsedShaderParam::~CUtlVector(); // 222
			CVfxParsedShaderParam::SetUsedInShader(
					bool bUsed);  // 235
			CUtlVectorBase<CVfxParsedShaderParam::Count(); // 231
			CUtlMemory<CVfxParsedShaderParam::operator[](
					int i);  // 588
			CUtlVectorBase<CVfxParsedShaderParam::operator[](
					int i);  // 233
			{
				int i; // 1531
			}
			CUtlVectorBase<CVfxParsedShaderParam::Find(
				CVfxParsedShaderParam* const& src);  // 233
		}
		CUtlVectorBase<CVfxParsedShaderParam::GrowMemory(
				int num);  // 1249
		Construct<CVfxParsedShaderParam*, CVfxParsedShaderParam*>(CVfxParsedShaderParam** pMemory); // 1252
		CUtlVectorBase<CVfxParsedShaderParam::AddToTail(
				CVfxParsedShaderParam *& src);  // 229
		CVfxParsedShaderParam::SetUsedInShaderInternal(
					bool bUsed,
					CUtlVector<CVfxParsedShaderParam*, CUtlMemory<CVfxParsedShaderParam*, int> >& alreadyVisited);  // 221
		CUtlMemory<CVfxParsedShaderParam::ValidateGrowSize(); // 475
		CUtlMemory<CVfxParsedShaderParam::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CVfxParsedShaderParam::ResetDbgInfo(); // 530
		CUtlVectorBase<CVfxParsedShaderParam::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CVfxParsedShaderParam::CUtlVector(); // 220
		CUtlMemory<CVfxParsedShaderParam::Purge(); // 903
		CUtlMemory<CVfxParsedShaderParam::Purge(); // 1799
		CUtlVectorBase<CVfxParsedShaderParam::Purge(); // 560
		ValidateAlignment<CVfxParsedShaderParam*>(void); // 508
		CUtlMemory<CVfxParsedShaderParam::Purge(); // 903
		CUtlMemory<CVfxParsedShaderParam::Purge(); // 510
		CUtlMemory<CVfxParsedShaderParam::~CUtlMemory(); // 562
		CUtlVectorBase<CVfxParsedShaderParam::~CUtlVectorBase(); // 410
		CUtlVector<CVfxParsedShaderParam::~CUtlVector(); // 222
		CVfxParsedShaderParam::SetUsedInShader(
				bool bUsed);  // 235
		CUtlVectorBase<CVfxParsedShaderParam::Count(); // 231
		CUtlMemory<CVfxParsedShaderParam::operator[](
				int i);  // 588
		CUtlVectorBase<CVfxParsedShaderParam::operator[](
				int i);  // 233
		{
			int i; // 1531
		}
		CUtlVectorBase<CVfxParsedShaderParam::Find(
			CVfxParsedShaderParam* const& src);  // 233
	}
	CVfxParsedShaderParam::SetUsedInShaderInternal(
				bool bUsed,
				CUtlVector<CVfxParsedShaderParam*, CUtlMemory<CVfxParsedShaderParam*, int> >& alreadyVisited);  // 221
	CUtlMemory<CVfxParsedShaderParam::ValidateGrowSize(); // 475
	CUtlMemory<CVfxParsedShaderParam::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CVfxParsedShaderParam::ResetDbgInfo(); // 530
	CUtlVectorBase<CVfxParsedShaderParam::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CVfxParsedShaderParam::CUtlVector(); // 220
	CUtlMemory<CVfxParsedShaderParam::Purge(); // 903
	CUtlMemory<CVfxParsedShaderParam::Purge(); // 1799
	CUtlVectorBase<CVfxParsedShaderParam::Purge(); // 560
	CUtlVectorBase<CVfxParsedShaderParam::~CUtlVectorBase(); // 410
	CUtlVector<CVfxParsedShaderParam::~CUtlVector(); // 222
} /* size: 0, variables: 1, inline expansions: 14 (0 bytes) */

// <002AA561> ../vfx_dx/vfx_parse_helpers.h:218
// variable: 1
inline void CVfxParsedShaderParam::SetUsedInShader(bool bUsed)
{
	CUtlVector<CVfxParsedShaderParam*, CUtlMemory<CVfxParsedShaderParam*, int> > visited; // 220
} /* size: 0, variables: 1 */

// <000D7135> ../vfx_dx/vfx_parse_helpers.h:218
// variables: 11
// function calls: 111
void CVfxParsedShaderParam::SetUsedInShader(bool bUsed)
{
	CUtlVector<CVfxParsedShaderParam*, CUtlMemory<CVfxParsedShaderParam*, int> > visited; // 220
	CUtlMemory<CVfxParsedShaderParam::ValidateGrowSize(); // 475
	CUtlMemory<CVfxParsedShaderParam::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CVfxParsedShaderParam::ResetDbgInfo(); // 530
	CUtlVectorBase<CVfxParsedShaderParam::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CVfxParsedShaderParam::CUtlVector(); // 220
	CUtlMemory<CVfxParsedShaderParam::Grow(
		int num);  // 806
	CUtlVectorBase<CVfxParsedShaderParam::GrowMemory(
			int num);  // 1249
	Construct<CVfxParsedShaderParam*, CVfxParsedShaderParam*>(CVfxParsedShaderParam** pMemory); // 1252
	CUtlVectorBase<CVfxParsedShaderParam::AddToTail(
			CVfxParsedShaderParam *& src);  // 229
	{
		int i; // 231
		CUtlVectorBase<CVfxParsedShaderParam::Count(); // 231
		{
			int i; // 231
			{
				int i; // 231
				{
					int i; // 231
					{
						int i; // 231
						CUtlVectorBase<CVfxParsedShaderParam::Count(); // 231
						CUtlMemory<CVfxParsedShaderParam::operator[](
								int i);  // 588
						CUtlVectorBase<CVfxParsedShaderParam::operator[](
								int i);  // 233
						{
							int i; // 1531
						}
						CUtlVectorBase<CVfxParsedShaderParam::Find(
							CVfxParsedShaderParam* const& src);  // 233
					}
					CUtlMemory<CVfxParsedShaderParam::Grow(
						int num);  // 806
					CUtlVectorBase<CVfxParsedShaderParam::GrowMemory(
							int num);  // 1249
					Construct<CVfxParsedShaderParam*, CVfxParsedShaderParam*>(CVfxParsedShaderParam** pMemory); // 1252
					CUtlVectorBase<CVfxParsedShaderParam::AddToTail(
							CVfxParsedShaderParam *& src);  // 229
					CVfxParsedShaderParam::SetUsedInShaderInternal(
								bool bUsed,
								CUtlVector<CVfxParsedShaderParam*, CUtlMemory<CVfxParsedShaderParam*, int> >& alreadyVisited);  // 221
					CUtlMemory<CVfxParsedShaderParam::ValidateGrowSize(); // 475
					CUtlMemory<CVfxParsedShaderParam::CUtlMemory(
							int nGrowSize,
							int nInitAllocationCount);  // 527
					CUtlVectorBase<CVfxParsedShaderParam::ResetDbgInfo(); // 530
					CUtlVectorBase<CVfxParsedShaderParam::CUtlVectorBase(
							int growSize,
							int initCapacity);  // 418
					CUtlVector<CVfxParsedShaderParam::CUtlVector(); // 220
					CUtlMemory<CVfxParsedShaderParam::Purge(); // 903
					CUtlMemory<CVfxParsedShaderParam::Purge(); // 1799
					CUtlVectorBase<CVfxParsedShaderParam::Purge(); // 560
					ValidateAlignment<CVfxParsedShaderParam*>(void); // 508
					CUtlMemory<CVfxParsedShaderParam::Purge(); // 510
					CUtlMemory<CVfxParsedShaderParam::~CUtlMemory(); // 562
					CUtlVectorBase<CVfxParsedShaderParam::~CUtlVectorBase(); // 410
					CUtlVector<CVfxParsedShaderParam::~CUtlVector(); // 222
					CVfxParsedShaderParam::SetUsedInShader(
							bool bUsed);  // 235
					CUtlVectorBase<CVfxParsedShaderParam::Count(); // 231
					CUtlMemory<CVfxParsedShaderParam::operator[](
							int i);  // 588
					CUtlVectorBase<CVfxParsedShaderParam::operator[](
							int i);  // 233
					{
						int i; // 1531
					}
					CUtlVectorBase<CVfxParsedShaderParam::Find(
						CVfxParsedShaderParam* const& src);  // 233
				}
				CUtlMemory<CVfxParsedShaderParam::Grow(
					int num);  // 806
				CUtlVectorBase<CVfxParsedShaderParam::GrowMemory(
						int num);  // 1249
				Construct<CVfxParsedShaderParam*, CVfxParsedShaderParam*>(CVfxParsedShaderParam** pMemory); // 1252
				CUtlVectorBase<CVfxParsedShaderParam::AddToTail(
						CVfxParsedShaderParam *& src);  // 229
				CVfxParsedShaderParam::SetUsedInShaderInternal(
							bool bUsed,
							CUtlVector<CVfxParsedShaderParam*, CUtlMemory<CVfxParsedShaderParam*, int> >& alreadyVisited);  // 221
				CUtlMemory<CVfxParsedShaderParam::ValidateGrowSize(); // 475
				CUtlMemory<CVfxParsedShaderParam::CUtlMemory(
						int nGrowSize,
						int nInitAllocationCount);  // 527
				CUtlVectorBase<CVfxParsedShaderParam::ResetDbgInfo(); // 530
				CUtlVectorBase<CVfxParsedShaderParam::CUtlVectorBase(
						int growSize,
						int initCapacity);  // 418
				CUtlVector<CVfxParsedShaderParam::CUtlVector(); // 220
				CUtlMemory<CVfxParsedShaderParam::Purge(); // 903
				CUtlMemory<CVfxParsedShaderParam::Purge(); // 1799
				CUtlVectorBase<CVfxParsedShaderParam::Purge(); // 560
				ValidateAlignment<CVfxParsedShaderParam*>(void); // 508
				CUtlMemory<CVfxParsedShaderParam::Purge(); // 510
				CUtlMemory<CVfxParsedShaderParam::~CUtlMemory(); // 562
				CUtlVectorBase<CVfxParsedShaderParam::~CUtlVectorBase(); // 410
				CUtlVector<CVfxParsedShaderParam::~CUtlVector(); // 222
				CVfxParsedShaderParam::SetUsedInShader(
						bool bUsed);  // 235
				CUtlVectorBase<CVfxParsedShaderParam::Count(); // 231
				CUtlMemory<CVfxParsedShaderParam::operator[](
						int i);  // 588
				CUtlVectorBase<CVfxParsedShaderParam::operator[](
						int i);  // 233
				{
					int i; // 1531
				}
				CUtlVectorBase<CVfxParsedShaderParam::Find(
					CVfxParsedShaderParam* const& src);  // 233
			}
			CUtlMemory<CVfxParsedShaderParam::Grow(
				int num);  // 806
			CUtlVectorBase<CVfxParsedShaderParam::GrowMemory(
					int num);  // 1249
			Construct<CVfxParsedShaderParam*, CVfxParsedShaderParam*>(CVfxParsedShaderParam** pMemory); // 1252
			CUtlVectorBase<CVfxParsedShaderParam::AddToTail(
					CVfxParsedShaderParam *& src);  // 229
			CVfxParsedShaderParam::SetUsedInShaderInternal(
						bool bUsed,
						CUtlVector<CVfxParsedShaderParam*, CUtlMemory<CVfxParsedShaderParam*, int> >& alreadyVisited);  // 221
			CUtlMemory<CVfxParsedShaderParam::ValidateGrowSize(); // 475
			CUtlMemory<CVfxParsedShaderParam::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<CVfxParsedShaderParam::ResetDbgInfo(); // 530
			CUtlVectorBase<CVfxParsedShaderParam::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<CVfxParsedShaderParam::CUtlVector(); // 220
			CUtlMemory<CVfxParsedShaderParam::Purge(); // 903
			CUtlMemory<CVfxParsedShaderParam::Purge(); // 1799
			CUtlVectorBase<CVfxParsedShaderParam::Purge(); // 560
			ValidateAlignment<CVfxParsedShaderParam*>(void); // 508
			CUtlMemory<CVfxParsedShaderParam::Purge(); // 510
			CUtlMemory<CVfxParsedShaderParam::~CUtlMemory(); // 562
			CUtlVectorBase<CVfxParsedShaderParam::~CUtlVectorBase(); // 410
			CUtlVector<CVfxParsedShaderParam::~CUtlVector(); // 222
			CVfxParsedShaderParam::SetUsedInShader(
					bool bUsed);  // 235
			CUtlVectorBase<CVfxParsedShaderParam::Count(); // 231
			CUtlMemory<CVfxParsedShaderParam::operator[](
					int i);  // 588
			CUtlVectorBase<CVfxParsedShaderParam::operator[](
					int i);  // 233
			{
				int i; // 1531
			}
			CUtlVectorBase<CVfxParsedShaderParam::Find(
				CVfxParsedShaderParam* const& src);  // 233
		}
		CUtlMemory<CVfxParsedShaderParam::Grow(
			int num);  // 806
		CUtlVectorBase<CVfxParsedShaderParam::GrowMemory(
				int num);  // 1249
		Construct<CVfxParsedShaderParam*, CVfxParsedShaderParam*>(CVfxParsedShaderParam** pMemory); // 1252
		CUtlVectorBase<CVfxParsedShaderParam::AddToTail(
				CVfxParsedShaderParam *& src);  // 229
		CVfxParsedShaderParam::SetUsedInShaderInternal(
					bool bUsed,
					CUtlVector<CVfxParsedShaderParam*, CUtlMemory<CVfxParsedShaderParam*, int> >& alreadyVisited);  // 221
		CUtlMemory<CVfxParsedShaderParam::ValidateGrowSize(); // 475
		CUtlMemory<CVfxParsedShaderParam::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CVfxParsedShaderParam::ResetDbgInfo(); // 530
		CUtlVectorBase<CVfxParsedShaderParam::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CVfxParsedShaderParam::CUtlVector(); // 220
		CUtlMemory<CVfxParsedShaderParam::Purge(); // 903
		CUtlMemory<CVfxParsedShaderParam::Purge(); // 1799
		CUtlVectorBase<CVfxParsedShaderParam::Purge(); // 560
		ValidateAlignment<CVfxParsedShaderParam*>(void); // 508
		CUtlMemory<CVfxParsedShaderParam::Purge(); // 510
		CUtlMemory<CVfxParsedShaderParam::~CUtlMemory(); // 562
		CUtlVectorBase<CVfxParsedShaderParam::~CUtlVectorBase(); // 410
		CUtlVector<CVfxParsedShaderParam::~CUtlVector(); // 222
		CVfxParsedShaderParam::SetUsedInShader(
				bool bUsed);  // 235
		CUtlMemory<CVfxParsedShaderParam::operator[](
				int i);  // 588
		CUtlVectorBase<CVfxParsedShaderParam::operator[](
				int i);  // 233
		{
			int i; // 1531
		}
		CUtlVectorBase<CVfxParsedShaderParam::Find(
			CVfxParsedShaderParam* const& src);  // 233
	}
	CVfxParsedShaderParam::SetUsedInShaderInternal(
				bool bUsed,
				CUtlVector<CVfxParsedShaderParam*, CUtlMemory<CVfxParsedShaderParam*, int> >& alreadyVisited);  // 221
	CUtlMemory<CVfxParsedShaderParam::Purge(); // 903
	CUtlMemory<CVfxParsedShaderParam::Purge(); // 1799
	CUtlVectorBase<CVfxParsedShaderParam::Purge(); // 560
	CUtlVectorBase<CVfxParsedShaderParam::~CUtlVectorBase(); // 410
	CUtlVector<CVfxParsedShaderParam::~CUtlVector(); // 222
} /* size: 961, variables: 1, inline expansions: 15 (1126 bytes) */

// <002AA523> ../vfx_dx/vfx_parse_helpers.h:227
// variable: 1
inline void CVfxParsedShaderParam::SetUsedInShaderInternal(bool bUsed, CUtlVector<CVfxParsedShaderParam*, CUtlMemory<CVfxParsedShaderParam*, int> >& alreadyVisited)
{
	{
		int i; // 231
	}
} /* size: 0 */

// <000CC8B4> ../vfx_dx/vfx_parse_helpers.h:241
void CVfxMainEntryPointInfo::~CVfxMainEntryPointInfo()
{
} /* size: 0 */

// <000CC898> ../vfx_dx/vfx_parse_helpers.h:241
inline void CVfxMainEntryPointInfo::~CVfxMainEntryPointInfo()
{
} /* size: 0 */

// <000A1516> ../vfx_dx/vfx_parse_helpers.h:241
// member functions: 6
// member variables: 14
// class size: 104
class CVfxMainEntryPointInfo {
	/* ../vfx_dx/vfx_parse_helpers.h:244 */
	void CVfxMainEntryPointInfo(CVfxMainEntryPointInfo* , const char* );
	/* ../vfx_dx/vfx_parse_helpers.h:246 */
	const CUtlString& GetName(const CVfxMainEntryPointInfo* );
	CUtlString m_returnTypeName; /* 0 8 */
	CUtlString m_inputTypeName; /* 8 8 */
	bool m_bFound; /* 16 1 */
	CUtlString m_gsInputPrimitiveType; /* 24 8 */
	CUtlString m_gsOutputPrimitiveType; /* 32 8 */
	int m_nGSMaxVertexCount; /* 40 4 */
	int m_nHSOutputControlPoints; /* 44 4 */
	CUtlString m_hsPatchConstantFuncName; /* 48 8 */
	CUtlString m_hsPatchConstantReturnTypeName; /* 56 8 */
	bool m_bPatchConstantArgumentIsInput; /* 64 1 */
	CUtlString m_dsPartitioning; /* 72 8 */
	CUtlString m_dsOutputTopology; /* 80 8 */
	int m_nInputPatchSize; /* 88 4 */
private:
	CUtlString m_name; /* 96 8 */
	void ~CVfxMainEntryPointInfo(CVfxMainEntryPointInfo* );
	void CVfxMainEntryPointInfo(class CVfxMainEntryPointInfo *, const char  *); /* linkage=_ZN22CVfxMainEntryPointInfoC4EPKc */
	const class CUtlString  & GetName(const class CVfxMainEntryPointInfo  *); /* linkage=_ZNK22CVfxMainEntryPointInfo7GetNameEv */
	void ~CVfxMainEntryPointInfo(class CVfxMainEntryPointInfo *); /* linkage=_ZN22CVfxMainEntryPointInfoD4Ev */
};

// <00272BCA> ../vfx_dx/vfx_parse_helpers.h:241
// member functions: 5
// member variables: 14
// class size: 104
class CVfxMainEntryPointInfo {
	/* ../vfx_dx/vfx_parse_helpers.h:244 */
	void CVfxMainEntryPointInfo(CVfxMainEntryPointInfo* , const char* );
	/* ../vfx_dx/vfx_parse_helpers.h:246 */
	const CUtlString& GetName(const CVfxMainEntryPointInfo* );
	CUtlString m_returnTypeName; /* 0 8 */
	CUtlString m_inputTypeName; /* 8 8 */
	bool m_bFound; /* 16 1 */
	CUtlString m_gsInputPrimitiveType; /* 24 8 */
	CUtlString m_gsOutputPrimitiveType; /* 32 8 */
	int m_nGSMaxVertexCount; /* 40 4 */
	int m_nHSOutputControlPoints; /* 44 4 */
	CUtlString m_hsPatchConstantFuncName; /* 48 8 */
	CUtlString m_hsPatchConstantReturnTypeName; /* 56 8 */
	bool m_bPatchConstantArgumentIsInput; /* 64 1 */
	CUtlString m_dsPartitioning; /* 72 8 */
	CUtlString m_dsOutputTopology; /* 80 8 */
	int m_nInputPatchSize; /* 88 4 */
private:
	CUtlString m_name; /* 96 8 */
	void CVfxMainEntryPointInfo(class CVfxMainEntryPointInfo *, const char  *); /* linkage=_ZN22CVfxMainEntryPointInfoC4EPKc */
	const class CUtlString  & GetName(const class CVfxMainEntryPointInfo  *); /* linkage=_ZNK22CVfxMainEntryPointInfo7GetNameEv */
	void ~CVfxMainEntryPointInfo(class CVfxMainEntryPointInfo *); /* linkage=_ZN22CVfxMainEntryPointInfoD4Ev */
};

// <000D62C6> ../vfx_dx/vfx_parse_helpers.h:244
void CVfxMainEntryPointInfo::CVfxMainEntryPointInfo(const char* pName)
{
} /* size: 0 */

// <000D62A1> ../vfx_dx/vfx_parse_helpers.h:244
inline void CVfxMainEntryPointInfo::CVfxMainEntryPointInfo(const char* pName)
{
} /* size: 0 */

// <002AA50A> ../vfx_dx/vfx_parse_helpers.h:246
inline void CVfxMainEntryPointInfo::GetName()
{
} /* size: 0 */

// <000BD8FB> ../vfx_dx/vfx_parse_helpers.h:276
void CVfxStructMember::~CVfxStructMember()
{
} /* size: 0 */

// <000BD8DE> ../vfx_dx/vfx_parse_helpers.h:276
inline void CVfxStructMember::~CVfxStructMember()
{
} /* size: 0 */

// <000A1677> ../vfx_dx/vfx_parse_helpers.h:276
// member functions: 4
// member variables: 10
// class size: 88
class CVfxStructMember {
	/* ../vfx_dx/vfx_parse_helpers.h:279 */
	void CVfxStructMember(CVfxStructMember* );
	CUtlString m_name; /* 0 8 */
	CUtlString m_semantic; /* 8 8 */
	CUtlString m_interpolationModifier; /* 16 8 */
	VfxParsedShaderParamClass_t m_paramClass; /* 24 4 */
	VfxParsedShaderParamType_t m_type; /* 28 4 */
	uint32 m_nNumRows; /* 32 4 */
	uint32 m_nNumColumns; /* 36 4 */
	uint32 m_nNumElements; /* 40 4 */
	bool m_bIsArray; /* 44 1 */
	CVfxAnnotationMap m_annotationMap; /* 48 40 */
	void ~CVfxStructMember(CVfxStructMember* );
	void CVfxStructMember(class CVfxStructMember *); /* linkage=_ZN16CVfxStructMemberC4Ev */
	void ~CVfxStructMember(class CVfxStructMember *); /* linkage=_ZN16CVfxStructMemberD4Ev */
};

// <00272D0F> ../vfx_dx/vfx_parse_helpers.h:276
// member functions: 3
// member variables: 10
// class size: 88
class CVfxStructMember {
	/* ../vfx_dx/vfx_parse_helpers.h:279 */
	void CVfxStructMember(CVfxStructMember* );
	CUtlString m_name; /* 0 8 */
	CUtlString m_semantic; /* 8 8 */
	CUtlString m_interpolationModifier; /* 16 8 */
	VfxParsedShaderParamClass_t m_paramClass; /* 24 4 */
	VfxParsedShaderParamType_t m_type; /* 28 4 */
	uint32 m_nNumRows; /* 32 4 */
	uint32 m_nNumColumns; /* 36 4 */
	uint32 m_nNumElements; /* 40 4 */
	bool m_bIsArray; /* 44 1 */
	CVfxAnnotationMap m_annotationMap; /* 48 40 */
	void CVfxStructMember(class CVfxStructMember *); /* linkage=_ZN16CVfxStructMemberC4Ev */
	void ~CVfxStructMember(class CVfxStructMember *); /* linkage=_ZN16CVfxStructMemberD4Ev */
};

// <002AA4F3> ../vfx_dx/vfx_parse_helpers.h:279
void CVfxStructMember::CVfxStructMember()
{
} /* size: 0 */

// <002AA4DA> ../vfx_dx/vfx_parse_helpers.h:279
inline void CVfxStructMember::CVfxStructMember()
{
} /* size: 0 */

// <002A91CD> ../vfx_dx/vfx_parse_helpers.h:296
void CVfxStructDecl::CVfxStructDecl()
{
} /* size: 0 */

// <002A91B0> ../vfx_dx/vfx_parse_helpers.h:296
inline void CVfxStructDecl::CVfxStructDecl()
{
} /* size: 0 */

// <000BD2B1> ../vfx_dx/vfx_parse_helpers.h:296
void CVfxStructDecl::~CVfxStructDecl()
{
} /* size: 0 */

// <000BD294> ../vfx_dx/vfx_parse_helpers.h:296
inline void CVfxStructDecl::~CVfxStructDecl()
{
} /* size: 0 */

// <000A2EEB> ../vfx_dx/vfx_parse_helpers.h:296
// member functions: 4
// member variables: 3
// class size: 48
class CVfxStructDecl {
	CUtlString m_name; /* 0 8 */
	CUtlVectorAutoPurge<CVfxStructMember*> m_members; /* 8 32 */
	int m_sizeInBytes; /* 40 4 */
	void ~CVfxStructDecl(CVfxStructDecl* );
	void CVfxStructDecl(CVfxStructDecl* );
	void ~CVfxStructDecl(class CVfxStructDecl *); /* linkage=_ZN14CVfxStructDeclD4Ev */
	void CVfxStructDecl(class CVfxStructDecl *); /* linkage=_ZN14CVfxStructDeclC4Ev */
};

// <000BD3A8> ../vfx_dx/vfx_parse_helpers.h:307
void CVfxParsedConstantBuffer::~CVfxParsedConstantBuffer()
{
} /* size: 0 */

// <000BD38B> ../vfx_dx/vfx_parse_helpers.h:307
inline void CVfxParsedConstantBuffer::~CVfxParsedConstantBuffer()
{
} /* size: 0 */

// <000A1426> ../vfx_dx/vfx_parse_helpers.h:307
// member functions: 4
// member variables: 9
// class size: 104
class CVfxParsedConstantBuffer {
	/* ../vfx_dx/vfx_parse_helpers.h:310 */
	void CVfxParsedConstantBuffer(CVfxParsedConstantBuffer* );
	CUtlString m_name; /* 0 8 */
	CUtlVector<CVfxParsedShaderParam*, CUtlMemory<CVfxParsedShaderParam*, int> > m_constants; /* 8 32 */
	CVfxAnnotationMap m_annotationMap; /* 40 40 */
	bool m_bUsedInShader; /* 80 1 */
	int32 m_nBindSlot; /* 84 4 */
	uint32 m_nBaseConstantRegister; /* 88 4 */
	uint32 m_nSizeInBytes; /* 92 4 */
	int32 m_nDescriptorSet; /* 96 4 */
	bool m_bIsPushConstant; /* 100 1 */
	void ~CVfxParsedConstantBuffer(CVfxParsedConstantBuffer* );
	void CVfxParsedConstantBuffer(class CVfxParsedConstantBuffer *); /* linkage=_ZN24CVfxParsedConstantBufferC4Ev */
	void ~CVfxParsedConstantBuffer(class CVfxParsedConstantBuffer *); /* linkage=_ZN24CVfxParsedConstantBufferD4Ev */
};

// <002184E7> ../vfx_dx/vfx_parse_helpers.h:307
// member functions: 3
// member variables: 9
// class size: 104
class CVfxParsedConstantBuffer {
	/* ../vfx_dx/vfx_parse_helpers.h:310 */
	void CVfxParsedConstantBuffer(CVfxParsedConstantBuffer* );
	CUtlString m_name; /* 0 8 */
	CUtlVector<CVfxParsedShaderParam*, CUtlMemory<CVfxParsedShaderParam*, int> > m_constants; /* 8 32 */
	CVfxAnnotationMap m_annotationMap; /* 40 40 */
	bool m_bUsedInShader; /* 80 1 */
	int32 m_nBindSlot; /* 84 4 */
	uint32 m_nBaseConstantRegister; /* 88 4 */
	uint32 m_nSizeInBytes; /* 92 4 */
	int32 m_nDescriptorSet; /* 96 4 */
	bool m_bIsPushConstant; /* 100 1 */
	void CVfxParsedConstantBuffer(class CVfxParsedConstantBuffer *); /* linkage=_ZN24CVfxParsedConstantBufferC4Ev */
	void ~CVfxParsedConstantBuffer(class CVfxParsedConstantBuffer *); /* linkage=_ZN24CVfxParsedConstantBufferD4Ev */
};

// <002AA4C3> ../vfx_dx/vfx_parse_helpers.h:310
void CVfxParsedConstantBuffer::CVfxParsedConstantBuffer()
{
} /* size: 0 */

// <002AA4AA> ../vfx_dx/vfx_parse_helpers.h:310
inline void CVfxParsedConstantBuffer::CVfxParsedConstantBuffer()
{
} /* size: 0 */

// <000BE94B> ../vfx_dx/vfx_parse_helpers.h:328
void VfxParsedInputSignatureElement_t::~VfxParsedInputSignatureElement_t()
{
} /* size: 0 */

// <000BE92E> ../vfx_dx/vfx_parse_helpers.h:328
inline void VfxParsedInputSignatureElement_t::~VfxParsedInputSignatureElement_t()
{
} /* size: 0 */

// <000A2F61> ../vfx_dx/vfx_parse_helpers.h:328
// member functions: 4
// member variables: 2
// class size: 240
class VfxParsedInputSignatureElement_t {
	/* ../vfx_dx/vfx_parse_helpers.h:331 */
	void VfxParsedInputSignatureElement_t(VfxParsedInputSignatureElement_t* );
	VsInputSignatureElement_t m_inputSignatureElement; /* 0 196 */
	CVfxAnnotationMap m_annotationMap; /* 200 40 */
	void ~VfxParsedInputSignatureElement_t(VfxParsedInputSignatureElement_t* );
	void VfxParsedInputSignatureElement_t(class VfxParsedInputSignatureElement_t *); /* linkage=_ZN32VfxParsedInputSignatureElement_tC4Ev */
	void ~VfxParsedInputSignatureElement_t(class VfxParsedInputSignatureElement_t *); /* linkage=_ZN32VfxParsedInputSignatureElement_tD4Ev */
};

// <002185C5> ../vfx_dx/vfx_parse_helpers.h:328
// member functions: 3
// member variables: 2
// class size: 240
class VfxParsedInputSignatureElement_t {
	/* ../vfx_dx/vfx_parse_helpers.h:331 */
	void VfxParsedInputSignatureElement_t(VfxParsedInputSignatureElement_t* );
	VsInputSignatureElement_t m_inputSignatureElement; /* 0 196 */
	CVfxAnnotationMap m_annotationMap; /* 200 40 */
	void VfxParsedInputSignatureElement_t(class VfxParsedInputSignatureElement_t *); /* linkage=_ZN32VfxParsedInputSignatureElement_tC4Ev */
	void ~VfxParsedInputSignatureElement_t(class VfxParsedInputSignatureElement_t *); /* linkage=_ZN32VfxParsedInputSignatureElement_tD4Ev */
};

// <002AA493> ../vfx_dx/vfx_parse_helpers.h:331
void VfxParsedInputSignatureElement_t::VfxParsedInputSignatureElement_t()
{
} /* size: 0 */

// <002AA47A> ../vfx_dx/vfx_parse_helpers.h:331
inline void VfxParsedInputSignatureElement_t::VfxParsedInputSignatureElement_t()
{
} /* size: 0 */

// <00294349> ../vfx_dx/vfx_parse_helpers.h:338
void CVfxFunctionAttribute::~CVfxFunctionAttribute()
{
} /* size: 0 */

// <0029432C> ../vfx_dx/vfx_parse_helpers.h:338
inline void CVfxFunctionAttribute::~CVfxFunctionAttribute()
{
} /* size: 0 */

// <00291F05> ../vfx_dx/vfx_parse_helpers.h:338
void CVfxFunctionAttribute::CVfxFunctionAttribute()
{
} /* size: 0 */

// <00291EE8> ../vfx_dx/vfx_parse_helpers.h:338
inline void CVfxFunctionAttribute::CVfxFunctionAttribute()
{
} /* size: 0 */

// <00274605> ../vfx_dx/vfx_parse_helpers.h:338
// member functions: 4
// member variables: 2
// class size: 40
class CVfxFunctionAttribute {
	CUtlString m_attribute; /* 0 8 */
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> > m_args; /* 8 32 */
	void CVfxFunctionAttribute(CVfxFunctionAttribute* );
	void ~CVfxFunctionAttribute(CVfxFunctionAttribute* );
	void CVfxFunctionAttribute(class CVfxFunctionAttribute *); /* linkage=_ZN21CVfxFunctionAttributeC4Ev */
	void ~CVfxFunctionAttribute(class CVfxFunctionAttribute *); /* linkage=_ZN21CVfxFunctionAttributeD4Ev */
};

// <000B7B67> ../vfx_dx/vfx_parse_helpers.h:358
bool VfxAddConstantVariableDescriptions(const CVfx *, VfxProgram_t, const CVfxParsedShaderParamMap &, const CVfxParsedConstantBuffer &, VfxCompiledShaderInfo_t &, bool)
{
} /* size: 0 */

// <000B7B31> ../vfx_dx/vfx_parse_helpers.h:362
bool VfxAddRenderStateVariableDescriptions(const CVfxParsedShaderParamMap &, VfxProgram_t, const CVfx *, CUtlVector<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> > *, CUtlVector<CVfxTextureChannelProcessor, CUtlMemory<CVfxTextureChannelProcessor, int> > *, CVfxRenderStateInfo *)
{
} /* size: 0 */

// <000B7BC5> ../vfx_dx/vfx_parse_helpers.h:372
bool VfxAddExternalConstantBufferDescriptions(VfxCompileTarget_t, VfxProgram_t, const CVfxParsedShaderParamMap &, const CVfxParsedConstantBufferVector &, VfxCompiledShaderInfo_t &)
{
} /* size: 0 */

// <000B7BA3> ../vfx_dx/vfx_parse_helpers.h:376
bool VfxAddExternalDescriptorSetDescriptions(const CVfxParsedShaderParamMap &, VfxCompiledShaderInfo_t &)
{
} /* size: 0 */

// <000B7AEF> ../vfx_dx/vfx_parse_helpers.h:379
bool VfxAddAttributes(const CVfxParsedShaderParamMap &, const CVfx *, VfxProgram_t, CUtlVector<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> > *, CUtlVector<CVfxTextureChannelProcessor, CUtlMemory<CVfxTextureChannelProcessor, int> > *, VfxCompiledShaderInfo_t &)
{
} /* size: 0 */

// <000B7AC7> ../vfx_dx/vfx_parse_helpers.h:383
bool VfxBuildFinalVsInputSignature(const CVfxParsedInputSignatureVector &, CUtlVector<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> > *)
{
} /* size: 0 */

