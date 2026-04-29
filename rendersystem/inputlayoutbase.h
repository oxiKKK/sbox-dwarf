
//
// rendersystem/inputlayoutbase.h
//
//	referenced by: librendersystemempty.so
//				   librendersystemvulkan.so
//
//	class: 1
//

// <00047361> rendersystem/inputlayoutbase.h:24
// member functions: 22
// member variables: 3
// class size: 24
class CInputLayoutBase {
	/* rendersystem/inputlayoutbase.h:27 */
	void CInputLayoutBase(CInputLayoutBase* , int, const RenderInputLayoutField_t* , const char* );
	/* rendersystem/inputlayoutbase.h:28 */
	void ~CInputLayoutBase(CInputLayoutBase* );
	/* rendersystem/inputlayoutbase.h:31 */
	int AddRef(CInputLayoutBase* );
	/* rendersystem/inputlayoutbase.h:32 */
	int Release(CInputLayoutBase* );
	/* rendersystem/inputlayoutbase.h:33 */
	int GetRefCount(const CInputLayoutBase* );
	/* rendersystem/inputlayoutbase.h:36 */
	const char* GetDebugName(const CInputLayoutBase* );
	/* rendersystem/inputlayoutbase.h:39 */
	int GetFieldCount(const CInputLayoutBase* );
	/* rendersystem/inputlayoutbase.h:40 */
	int GetSlotsUsed(const CInputLayoutBase* );
	/* rendersystem/inputlayoutbase.h:45 */
	int AddFieldsToLayout(CInputLayoutBase* , int, RenderInputLayoutField_t* , int);
	/* rendersystem/inputlayoutbase.h:47 */
	bool GetFriendlyShaderSemanticToActualSemanticMapping(const char** , uint32* , const char* , const CVsInputSignatureVector* );
	/* rendersystem/inputlayoutbase.h:49 */
	RenderInputLayoutField_t* GetFieldDescs(CInputLayoutBase* );
protected:
	int m_nFieldCount; /* 0 4 */
	RenderInputLayoutField_t * m_pFieldDescs; /* 8 8 */
private:
	CInterlockedInt m_nRef __attribute__((__aligned__(4))); /* 16 4 */
	void CInputLayoutBase(class CInputLayoutBase *, int, const class RenderInputLayoutField_t  *, const char  *); /* linkage=_ZN16CInputLayoutBaseC4EiPK24RenderInputLayoutField_tPKc */
	void ~CInputLayoutBase(class CInputLayoutBase *); /* linkage=_ZN16CInputLayoutBaseD4Ev */
	int AddRef(class CInputLayoutBase *); /* linkage=_ZN16CInputLayoutBase6AddRefEv */
	int Release(class CInputLayoutBase *); /* linkage=_ZN16CInputLayoutBase7ReleaseEv */
	int GetRefCount(const class CInputLayoutBase  *); /* linkage=_ZNK16CInputLayoutBase11GetRefCountEv */
	const char  * GetDebugName(const class CInputLayoutBase  *); /* linkage=_ZNK16CInputLayoutBase12GetDebugNameEv */
	int GetFieldCount(const class CInputLayoutBase  *); /* linkage=_ZNK16CInputLayoutBase13GetFieldCountEv */
	int GetSlotsUsed(const class CInputLayoutBase  *); /* linkage=_ZNK16CInputLayoutBase12GetSlotsUsedEv */
	int AddFieldsToLayout(class CInputLayoutBase *, int, class RenderInputLayoutField_t *, int); /* linkage=_ZN16CInputLayoutBase17AddFieldsToLayoutEiP24RenderInputLayoutField_ti */
	bool GetFriendlyShaderSemanticToActualSemanticMapping(const char  * *, uint32 *, const char  *, const CVsInputSignatureVector  *); /* linkage=_ZN16CInputLayoutBase48GetFriendlyShaderSemanticToActualSemanticMappingEPPKcPjS1_PK10CUtlVectorI25VsInputSignatureElement_t10CUtlMemoryIS5_iEE */
	class RenderInputLayoutField_t * GetFieldDescs(class CInputLayoutBase *); /* linkage=_ZN16CInputLayoutBase13GetFieldDescsEv */
} __attribute__((__aligned__(8)));

