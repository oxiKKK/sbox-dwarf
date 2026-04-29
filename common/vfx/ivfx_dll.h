
//
// common/vfx/ivfx_dll.h
//
//	referenced by: libengine2.so
//				   libmaterialsystem2.so
//				   librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	functions: 8
//	classes: 3
//	structs: 4
//

// <0009BF6E> ../../common/vfx/ivfx_dll.h:21
// member variables: 2
// struct size: 16
struct VfxShaderMacro_t {
	const char * Name; /* 0 8 */
	const char * Definition; /* 8 8 */
};

// <012A0528> ../common/vfx/ivfx_dll.h:32
// variables: 4
// function calls: 87
void VfxCompiledShaderInfo_t::~VfxCompiledShaderInfo_t()
{
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 32
	CUtlString::~CUtlString(); // 32
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlStringToken, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlStringToken, int>::Purge(); // 903
	CUtlMemory<CUtlStringToken, int>::Purge(); // 1799
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Purge(); // 560
	ValidateAlignment<CUtlStringToken>(void); // 508
	CUtlMemory<CUtlStringToken, int>::Purge(); // 510
	CUtlMemory<CUtlStringToken, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::~CUtlVector(); // 32
	CUtlVectorBase<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >::RemoveAll(); // 1798
	CUtlMemory<VsInputSignatureElement_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<VsInputSignatureElement_t, int>::Purge(); // 903
	CUtlMemory<VsInputSignatureElement_t, int>::Purge(); // 1799
	CUtlVectorBase<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >::Purge(); // 560
	ValidateAlignment<VsInputSignatureElement_t>(void); // 508
	CUtlMemory<VsInputSignatureElement_t, int>::Purge(); // 510
	CUtlMemory<VsInputSignatureElement_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> >::~CUtlVector(); // 32
	{
		int i; // 1721
		CUtlMemory<CVfxShaderAttribute, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CVfxShaderAttribute, CUtlMemory<CVfxShaderAttribute, int> >::Element(
			int i);  // 1723
		CVfxShaderAttribute::FreeExpressionBuffer(); // 753
		CVfxShaderAttribute::FreeExpressionBuffer(); // 691
		CVfxShaderAttribute::~CVfxShaderAttribute(); // 1526
		Destruct<CVfxShaderAttribute>(CVfxShaderAttribute* pMemory); // 1723
	}
	CUtlVectorBase<CVfxShaderAttribute, CUtlMemory<CVfxShaderAttribute, int> >::RemoveAll(); // 1798
	CUtlMemory<CVfxShaderAttribute, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CVfxShaderAttribute, int>::Purge(); // 903
	CUtlMemory<CVfxShaderAttribute, int>::Purge(); // 1799
	CUtlVectorBase<CVfxShaderAttribute, CUtlMemory<CVfxShaderAttribute, int> >::Purge(); // 560
	ValidateAlignment<CVfxShaderAttribute>(void); // 508
	CUtlMemory<CVfxShaderAttribute, int>::Purge(); // 510
	CUtlMemory<CVfxShaderAttribute, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CVfxShaderAttribute, CUtlMemory<CVfxShaderAttribute, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CVfxShaderAttribute, CUtlMemory<CVfxShaderAttribute, int> >::~CUtlVector(); // 32
	{
		int i; // 1721
		CUtlMemory<ConstantBufferDescription_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<ConstantBufferDescription_t, CUtlMemory<ConstantBufferDescription_t, int> >::Element(
			int i);  // 1723
		CUtlVectorBase<ConstantBufferVariable_t, CUtlMemory<ConstantBufferVariable_t, int> >::RemoveAll(); // 1798
		CUtlMemory<ConstantBufferVariable_t, int>::IsExternallyAllocated(); // 905
		CUtlMemory<ConstantBufferVariable_t, int>::Purge(); // 903
		CUtlMemory<ConstantBufferVariable_t, int>::Purge(); // 1799
		CUtlVectorBase<ConstantBufferVariable_t, CUtlMemory<ConstantBufferVariable_t, int> >::Purge(); // 560
		ValidateAlignment<ConstantBufferVariable_t>(void); // 508
		CUtlMemory<ConstantBufferVariable_t, int>::Purge(); // 510
		CUtlMemory<ConstantBufferVariable_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<ConstantBufferVariable_t, CUtlMemory<ConstantBufferVariable_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<ConstantBufferVariable_t, CUtlMemory<ConstantBufferVariable_t, int> >::~CUtlVector(); // 54
		ConstantBufferDescription_t::~ConstantBufferDescription_t(); // 1526
		Destruct<ConstantBufferDescription_t>(ConstantBufferDescription_t* pMemory); // 1723
	}
	CUtlVectorBase<ConstantBufferDescription_t, CUtlMemory<ConstantBufferDescription_t, int> >::RemoveAll(); // 1798
	CUtlMemory<ConstantBufferDescription_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<ConstantBufferDescription_t, int>::Purge(); // 903
	CUtlMemory<ConstantBufferDescription_t, int>::Purge(); // 1799
	CUtlVectorBase<ConstantBufferDescription_t, CUtlMemory<ConstantBufferDescription_t, int> >::Purge(); // 560
	ValidateAlignment<ConstantBufferDescription_t>(void); // 508
	CUtlMemory<ConstantBufferDescription_t, int>::Purge(); // 510
	CUtlMemory<ConstantBufferDescription_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<ConstantBufferDescription_t, CUtlMemory<ConstantBufferDescription_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<ConstantBufferDescription_t, CUtlMemory<ConstantBufferDescription_t, int> >::~CUtlVector(); // 32
	{
		int i; // 1721
	}
	CUtlVectorBase<CVfxTextureChannelProcessor, CUtlMemory<CVfxTextureChannelProcessor, int> >::RemoveAll(); // 1798
	CUtlMemory<CVfxTextureChannelProcessor, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CVfxTextureChannelProcessor, int>::Purge(); // 903
	CUtlMemory<CVfxTextureChannelProcessor, int>::Purge(); // 1799
	CUtlVectorBase<CVfxTextureChannelProcessor, CUtlMemory<CVfxTextureChannelProcessor, int> >::Purge(); // 560
	ValidateAlignment<CVfxTextureChannelProcessor>(void); // 508
	CUtlMemory<CVfxTextureChannelProcessor, int>::Purge(); // 510
	CUtlMemory<CVfxTextureChannelProcessor, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CVfxTextureChannelProcessor, CUtlMemory<CVfxTextureChannelProcessor, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CVfxTextureChannelProcessor, CUtlMemory<CVfxTextureChannelProcessor, int> >::~CUtlVector(); // 32
	{
		int i; // 1721
		CUtlMemory<CVfxVariableDescription, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::Element(
			int i);  // 1723
		Destruct<CVfxVariableDescription>(CVfxVariableDescription* pMemory); // 1723
	}
	CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::RemoveAll(); // 1798
	CUtlMemory<CVfxVariableDescription, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CVfxVariableDescription, int>::Purge(); // 903
	CUtlMemory<CVfxVariableDescription, int>::Purge(); // 1799
	CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::Purge(); // 560
	CUtlVectorBase<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> >::~CUtlVector(); // 32
} /* size: 523, inline expansions: 64 (1936 bytes) */

// <012A050C> ../common/vfx/ivfx_dll.h:32
inline void VfxCompiledShaderInfo_t::~VfxCompiledShaderInfo_t()
{
} /* size: 0 */

// <01240BE6> ../common/vfx/ivfx_dll.h:32
// member functions: 2
// member variables: 19
// struct size: 400
struct VfxCompiledShaderInfo_t {
	uint64 nStaticComboIndex; /* 0 8 */
	uint64 nDynamicComboIndex; /* 8 8 */
	bool compileFailed; /* 16 1 */
	CUtlVector<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> > variableDescriptions; /* 24 32 */
	CUtlVector<CVfxTextureChannelProcessor, CUtlMemory<CVfxTextureChannelProcessor, int> > textureChannelProcessors; /* 56 32 */
	CUtlVector<ConstantBufferDescription_t, CUtlMemory<ConstantBufferDescription_t, int> > externalConstantBufferDescriptions; /* 88 32 */
	CUtlVector<CVfxShaderAttribute, CUtlMemory<CVfxShaderAttribute, int> > attributes; /* 120 32 */
	CUtlVector<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> > vsInputSignature; /* 152 32 */
	CVfxRenderStateInfo renderStateInfo; /* 184 60 */
	uint32 nCbBindSlot; /* 244 4 */
	uint32 nCbDescriptorSet; /* 248 4 */
	uint32 nCbSize; /* 252 4 */
	uint32 nFlags; /* 256 4 */
	uint32 nInputPatchSizeForHullShader; /* 260 4 */
	uint32 nThreadGroupSize[3]; /* 264 12 */
	bool m_bGlobalsInBufferDeviceAddress; /* 276 1 */
	CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> > entryPoints; /* 280 32 */
	CUtlString compilerOutput; /* 312 8 */
	CUtlBuffer compiledShader; /* 320 80 */
	/* ../common/vfx/ivfx_dll.h:55 */
	void VfxCompiledShaderInfo_t(VfxCompiledShaderInfo_t* );
	void ~VfxCompiledShaderInfo_t(VfxCompiledShaderInfo_t* );
};

// <0155803B> ../common/vfx/ivfx_dll.h:32
// member function: 1
// member variables: 19
// struct size: 400
struct VfxCompiledShaderInfo_t {
	uint64 nStaticComboIndex; /* 0 8 */
	uint64 nDynamicComboIndex; /* 8 8 */
	bool compileFailed; /* 16 1 */
	CUtlVector<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> > variableDescriptions; /* 24 32 */
	CUtlVector<CVfxTextureChannelProcessor, CUtlMemory<CVfxTextureChannelProcessor, int> > textureChannelProcessors; /* 56 32 */
	CUtlVector<ConstantBufferDescription_t, CUtlMemory<ConstantBufferDescription_t, int> > externalConstantBufferDescriptions; /* 88 32 */
	CUtlVector<CVfxShaderAttribute, CUtlMemory<CVfxShaderAttribute, int> > attributes; /* 120 32 */
	CUtlVector<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> > vsInputSignature; /* 152 32 */
	CVfxRenderStateInfo renderStateInfo; /* 184 60 */
	uint32 nCbBindSlot; /* 244 4 */
	uint32 nCbDescriptorSet; /* 248 4 */
	uint32 nCbSize; /* 252 4 */
	uint32 nFlags; /* 256 4 */
	uint32 nInputPatchSizeForHullShader; /* 260 4 */
	uint32 nThreadGroupSize[3]; /* 264 12 */
	bool m_bGlobalsInBufferDeviceAddress; /* 276 1 */
	CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> > entryPoints; /* 280 32 */
	CUtlString compilerOutput; /* 312 8 */
	CUtlBuffer compiledShader; /* 320 80 */
	/* ../common/vfx/ivfx_dll.h:55 */
	void VfxCompiledShaderInfo_t(VfxCompiledShaderInfo_t* );
};

// <0004EA9A> ../../common/vfx/ivfx_dll.h:32
// member function: 1
// member variables: 19
// struct size: 400
struct VfxCompiledShaderInfo_t {
	uint64 nStaticComboIndex; /* 0 8 */
	uint64 nDynamicComboIndex; /* 8 8 */
	bool compileFailed; /* 16 1 */
	CUtlVector<CVfxVariableDescription, CUtlMemory<CVfxVariableDescription, int> > variableDescriptions; /* 24 32 */
	CUtlVector<CVfxTextureChannelProcessor, CUtlMemory<CVfxTextureChannelProcessor, int> > textureChannelProcessors; /* 56 32 */
	CUtlVector<ConstantBufferDescription_t, CUtlMemory<ConstantBufferDescription_t, int> > externalConstantBufferDescriptions; /* 88 32 */
	CUtlVector<CVfxShaderAttribute, CUtlMemory<CVfxShaderAttribute, int> > attributes; /* 120 32 */
	CUtlVector<VsInputSignatureElement_t, CUtlMemory<VsInputSignatureElement_t, int> > vsInputSignature; /* 152 32 */
	CVfxRenderStateInfo renderStateInfo; /* 184 60 */
	uint32 nCbBindSlot; /* 244 4 */
	uint32 nCbDescriptorSet; /* 248 4 */
	uint32 nCbSize; /* 252 4 */
	uint32 nFlags; /* 256 4 */
	uint32 nInputPatchSizeForHullShader; /* 260 4 */
	uint32 nThreadGroupSize[3]; /* 264 12 */
	bool m_bGlobalsInBufferDeviceAddress; /* 276 1 */
	CUtlVector<CUtlStringToken, CUtlMemory<CUtlStringToken, int> > entryPoints; /* 280 32 */
	CUtlString compilerOutput; /* 312 8 */
	CUtlBuffer compiledShader; /* 320 80 */
	/* ../../common/vfx/ivfx_dll.h:55 */
	void VfxCompiledShaderInfo_t(VfxCompiledShaderInfo_t* );
};

// <0132320A> ../common/vfx/ivfx_dll.h:55
void VfxCompiledShaderInfo_t::VfxCompiledShaderInfo_t()
{
} /* size: 0 */

// <013231F1> ../common/vfx/ivfx_dll.h:55
inline void VfxCompiledShaderInfo_t::VfxCompiledShaderInfo_t()
{
} /* size: 0 */

// <000C02F5> ../../common/vfx/ivfx_dll.h:70
void IShaderCompileContext::IShaderCompileContext()
{
} /* size: 0 */

// <000C02D9> ../../common/vfx/ivfx_dll.h:70
inline void IShaderCompileContext::IShaderCompileContext()
{
} /* size: 0 */

// <000A6C0D> ../../common/vfx/ivfx_dll.h:70
// member functions: 10
// member variable: 1
// vtable entry: 1
// class size: 8
class IShaderCompileContext {
	void IShaderCompileContext(IShaderCompileContext* , IShaderCompileContext& );
	void IShaderCompileContext(IShaderCompileContext* , const IShaderCompileContext& );
	void IShaderCompileContext(IShaderCompileContext* );
	void ~IShaderCompileContext(IShaderCompileContext* );
	int ()(void) * * _vptr.IShaderCompileContext; /* 0 8 */
	/* ../../common/vfx/ivfx_dll.h:73 */
	virtual void SetMaskedCode(IShaderCompileContext* , const char* );
	void IShaderCompileContext(class IShaderCompileContext *, class IShaderCompileContext &); /* linkage=_ZN21IShaderCompileContextC4EOS_ */
	void IShaderCompileContext(class IShaderCompileContext *, const class IShaderCompileContext  &); /* linkage=_ZN21IShaderCompileContextC4ERKS_ */
	void IShaderCompileContext(class IShaderCompileContext *); /* linkage=_ZN21IShaderCompileContextC4Ev */
	void ~IShaderCompileContext(class IShaderCompileContext *); /* linkage=_ZN21IShaderCompileContextD4Ev */
	virtual void SetMaskedCode(class IShaderCompileContext *, const char  *); /* linkage=_ZN21IShaderCompileContext13SetMaskedCodeEPKc */
};

// <0011E05F> ../../common/vfx/ivfx_dll.h:70
// member functions: 7
// member variable: 1
// vtable entry: 1
// class size: 8
class IShaderCompileContext {
	void ~IShaderCompileContext(IShaderCompileContext* );
	int ()(void) * * _vptr.IShaderCompileContext; /* 0 8 */
	/* ../../common/vfx/ivfx_dll.h:73 */
	virtual void SetMaskedCode(IShaderCompileContext* , const char* );
	void IShaderCompileContext(class IShaderCompileContext *, class IShaderCompileContext &); /* linkage=_ZN21IShaderCompileContextC4EOS_ */
	void IShaderCompileContext(class IShaderCompileContext *, const class IShaderCompileContext  &); /* linkage=_ZN21IShaderCompileContextC4ERKS_ */
	void IShaderCompileContext(class IShaderCompileContext *); /* linkage=_ZN21IShaderCompileContextC4Ev */
	void ~IShaderCompileContext(class IShaderCompileContext *); /* linkage=_ZN21IShaderCompileContextD4Ev */
	virtual void SetMaskedCode(class IShaderCompileContext *, const char  *); /* linkage=_ZN21IShaderCompileContext13SetMaskedCodeEPKc */
};

// <00053A4A> ../../common/vfx/ivfx_dll.h:77
void IVfx::IVfx()
{
} /* size: 0 */

// <00053A2D> ../../common/vfx/ivfx_dll.h:77
inline void IVfx::IVfx()
{
} /* size: 0 */

// <000520CC> ../../common/vfx/ivfx_dll.h:77
// member functions: 22
// member variable: 1
// vtable entries: 7
// class size: 8
class IVfx {
	void IVfx(IVfx* , IVfx& );
	void IVfx(IVfx* , const IVfx& );
	void IVfx(IVfx* );
	void ~IVfx(IVfx* );
	int ()(void) * * _vptr.IVfx; /* 0 8 */
	/* ../../common/vfx/ivfx_dll.h:80 */
	virtual void Init(IVfx* , CreateInterfaceFn);
	/* ../../common/vfx/ivfx_dll.h:82 */
	virtual const CUtlVector<VfxCompileTarget_t, CUtlMemory<VfxCompileTarget_t, int> >& GetSupportedCompileTargets(IVfx* );
	/* ../../common/vfx/ivfx_dll.h:85 */
	virtual bool CompileShaderAndGetVariables(IVfx* , uint64, uint64, const CVfx* , VfxCompileTarget_t, VfxProgram_t, VfxCompiledShaderInfo_t* , bool, uint, IShaderCompileContext* );
	/* ../../common/vfx/ivfx_dll.h:87 */
	virtual void ClearShaderCache(IVfx* );
	/* ../../common/vfx/ivfx_dll.h:89 */
	virtual void SerializeCompiledShaderInfo(IVfx* , const VfxCompiledShaderInfo_t& , CUtlBuffer& );
	/* ../../common/vfx/ivfx_dll.h:90 */
	virtual void UnserializeCompiledShaderInfo(IVfx* , VfxCompiledShaderInfo_t* , CUtlBuffer& );
	/* ../../common/vfx/ivfx_dll.h:92 */
	virtual IShaderCompileContext* CreateSharedContext(IVfx* );
	void IVfx(class IVfx *, class IVfx &); /* linkage=_ZN4IVfxC4EOS_ */
	void IVfx(class IVfx *, const class IVfx  &); /* linkage=_ZN4IVfxC4ERKS_ */
	void IVfx(class IVfx *); /* linkage=_ZN4IVfxC4Ev */
	void ~IVfx(class IVfx *); /* linkage=_ZN4IVfxD4Ev */
	virtual void Init(class IVfx *, CreateInterfaceFn); /* linkage=_ZN4IVfx4InitEPFPvPKcPiE */
	virtual const class CUtlVector<VfxCompileTarget_t, CUtlMemory<VfxCompileTarget_t, int> >  & GetSupportedCompileTargets(class IVfx *); /* linkage=_ZN4IVfx26GetSupportedCompileTargetsEv */
	virtual bool CompileShaderAndGetVariables(class IVfx *, uint64, uint64, const class CVfx  *, enum VfxCompileTarget_t, enum VfxProgram_t, class VfxCompiledShaderInfo_t *, bool, uint, class IShaderCompileContext *); /* linkage=_ZN4IVfx28CompileShaderAndGetVariablesEyyPK4CVfx18VfxCompileTarget_t12VfxProgram_tP23VfxCompiledShaderInfo_tbjP21IShaderCompileContext */
	virtual void ClearShaderCache(class IVfx *); /* linkage=_ZN4IVfx16ClearShaderCacheEv */
	virtual void SerializeCompiledShaderInfo(class IVfx *, const class VfxCompiledShaderInfo_t  &, class CUtlBuffer &); /* linkage=_ZN4IVfx27SerializeCompiledShaderInfoERK23VfxCompiledShaderInfo_tR10CUtlBuffer */
	virtual void UnserializeCompiledShaderInfo(class IVfx *, class VfxCompiledShaderInfo_t *, class CUtlBuffer &); /* linkage=_ZN4IVfx29UnserializeCompiledShaderInfoEP23VfxCompiledShaderInfo_tR10CUtlBuffer */
	virtual class IShaderCompileContext * CreateSharedContext(class IVfx *); /* linkage=_ZN4IVfx19CreateSharedContextEv */
};

