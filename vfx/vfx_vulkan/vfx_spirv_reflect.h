
//
// vfx/vfx_vulkan/vfx_spirv_reflect.h
//
//	referenced by: libvfx_vulkan.so
//
//	functions: 2
//	class: 1
//

// <00168A5A> vfx/vfx_vulkan/vfx_spirv_reflect.h:20
// member functions: 22
// member variables: 2
// class size: 16
class CVfxSpirVReflect {
	/* vfx/vfx_vulkan/vfx_spirv_reflect.h:36 */
	struct BindingNumberChange_t {
		int32 nDescriptorSet; /* 0 4 */
		int32 nOldBinding; /* 4 4 */
		int32 nNewBinding; /* 8 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	void CVfxSpirVReflect(CVfxSpirVReflect* , const CVfxSpirVReflect& );
	int ()(void) * * _vptr.CVfxSpirVReflect; /* 0 8 */
	/* vfx/vfx_vulkan/vfx_spirv_reflect.cpp:39 */
	void CVfxSpirVReflect(CVfxSpirVReflect* );
	/* vfx/vfx_vulkan/vfx_spirv_reflect.cpp:45 */
	virtual void ~CVfxSpirVReflect(CVfxSpirVReflect* );
	/* vfx/vfx_vulkan/vfx_spirv_reflect.cpp:54 */
	void SetSpirVCode(CVfxSpirVReflect* , uint32, const uint8* );
	/* vfx/vfx_vulkan/vfx_spirv_reflect.cpp:67 */
	bool GetActiveUniforms(const CVfxSpirVReflect* , CUtlVector<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> >& );
	/* vfx/vfx_vulkan/vfx_spirv_reflect.cpp:209 */
	bool GetActiveUniformBlocks(const CVfxSpirVReflect* , CUtlVector<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> >& );
	/* vfx/vfx_vulkan/vfx_spirv_reflect.cpp:380 */
	bool GetThreadGroupSize(const CVfxSpirVReflect* , uint32* );
	/* vfx/vfx_vulkan/vfx_spirv_reflect.cpp:425 */
	bool GetOutputVertices(const CVfxSpirVReflect* , uint32* , uint32* );
	/* vfx/vfx_vulkan/vfx_spirv_reflect.cpp:453 */
	bool GetEntryPoints(const CVfxSpirVReflect* , CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >& );
	/* vfx/vfx_vulkan/vfx_spirv_reflect.cpp:473 */
	void ShiftBindingsMatchingName(CVfxSpirVReflect* , uint32, const CUtlString& , uint32, CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& );
	/* vfx/vfx_vulkan/vfx_spirv_reflect.cpp:545 */
	void ChangeBindingNumbers(CVfxSpirVReflect* , const CUtlVector<CVfxSpirVReflect::BindingNumberChange_t, CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int> >& , CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& );
private:
	ShaderModule * m_pSpirVReflect; /* 8 8 */
	void CVfxSpirVReflect(class CVfxSpirVReflect *, const class CVfxSpirVReflect  &); /* linkage=_ZN16CVfxSpirVReflectC4ERKS_ */
	void CVfxSpirVReflect(class CVfxSpirVReflect *); /* linkage=_ZN16CVfxSpirVReflectC4Ev */
	virtual void ~CVfxSpirVReflect(class CVfxSpirVReflect *); /* linkage=_ZN16CVfxSpirVReflectD4Ev */
	void SetSpirVCode(class CVfxSpirVReflect *, uint32, const uint8  *); /* linkage=_ZN16CVfxSpirVReflect12SetSpirVCodeEjPKh */
	bool GetActiveUniforms(const class CVfxSpirVReflect  *, class CUtlVector<VfxUniformInfo_t, CUtlMemory<VfxUniformInfo_t, int> > &); /* linkage=_ZNK16CVfxSpirVReflect17GetActiveUniformsER10CUtlVectorI16VfxUniformInfo_t10CUtlMemoryIS1_iEE */
	bool GetActiveUniformBlocks(const class CVfxSpirVReflect  *, class CUtlVector<VfxUniformBlockInfo_t, CUtlMemory<VfxUniformBlockInfo_t, int> > &); /* linkage=_ZNK16CVfxSpirVReflect22GetActiveUniformBlocksER10CUtlVectorI21VfxUniformBlockInfo_t10CUtlMemoryIS1_iEE */
	bool GetThreadGroupSize(const class CVfxSpirVReflect  *, uint32 *); /* linkage=_ZNK16CVfxSpirVReflect18GetThreadGroupSizeEPj */
	bool GetOutputVertices(const class CVfxSpirVReflect  *, uint32 *, uint32 *); /* linkage=_ZNK16CVfxSpirVReflect17GetOutputVerticesEPjS0_ */
	bool GetEntryPoints(const class CVfxSpirVReflect  *, class CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> > &); /* linkage=_ZNK16CVfxSpirVReflect14GetEntryPointsER10CUtlVectorI15CUtlStringToken10CUtlMemoryIS1_iEE */
	void ShiftBindingsMatchingName(class CVfxSpirVReflect *, uint32, const class CUtlString  &, uint32, class CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > &); /* linkage=_ZN16CVfxSpirVReflect25ShiftBindingsMatchingNameEjRK10CUtlStringjR10CUtlVectorIh10CUtlMemoryIhiEE */
	void ChangeBindingNumbers(class CVfxSpirVReflect *, const class CUtlVector<CVfxSpirVReflect::BindingNumberChange_t, CUtlMemory<CVfxSpirVReflect::BindingNumberChange_t, int> >  &, class CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > &); /* linkage=_ZN16CVfxSpirVReflect20ChangeBindingNumbersERK10CUtlVectorINS_21BindingNumberChange_tE10CUtlMemoryIS1_iEERS0_IhS2_IhiEE */
};

// <0012AB0A> vfx/vfx_vulkan/vfx_spirv_reflect.h:23
void CVfxSpirVReflect::CVfxSpirVReflect()
{
} /* size: 0 */

// <0012A9EB> vfx/vfx_vulkan/vfx_spirv_reflect.h:24
void CVfxSpirVReflect::~CVfxSpirVReflect()
{
} /* size: 0 */

