
//
// common/vfx/vfx_shader_file.h
//
//	referenced by: librendersystemvulkan.so
//				   libvfx_vulkan.so
//
//	functions: 19
//	classes: 2
//	structs: 4
//

// <0094951A> ../common/vfx/vfx_shader_file.h:30
// member variables: 2
// struct size: 2
struct HiddenUAVCounter_t {
	uint8_t m_nAssociatedShaderStorageIndex; /* 0 1 */
	uint8_t m_nUAVHiddenCounterBinding; /* 1 1 */
};

// <0094956A> ../common/vfx/vfx_shader_file.h:47
// member functions: 2
// member variables: 3
// struct size: 8
struct VfxDescriptor_t {
	/* ../common/vfx/vfx_shader_file.h:49 */
	void VfxDescriptor_t(VfxDescriptor_t* , int32, int32);
	/* ../common/vfx/vfx_shader_file.h:56 */
	void VfxDescriptor_t(VfxDescriptor_t* , int32, int32, DescriptorFlag_t);
	int32 m_nDescriptorSet; /* 0 4 */
	int32 m_nBinding:20; /* 4: 0 4 */
	DescriptorFlag_t m_nDescriptorFlag:4; /* 4:20 4 */
};

// <000A705C> ../../common/vfx/vfx_shader_file.h:47
// member functions: 2
// member variables: 3
// struct size: 8
struct VfxDescriptor_t {
	/* ../../common/vfx/vfx_shader_file.h:49 */
	void VfxDescriptor_t(VfxDescriptor_t* , int32, int32);
	/* ../../common/vfx/vfx_shader_file.h:56 */
	void VfxDescriptor_t(VfxDescriptor_t* , int32, int32, DescriptorFlag_t);
	int32 m_nDescriptorSet; /* 0 4 */
	int32 m_nBinding:20; /* 4: 0 4 */
	DescriptorFlag_t m_nDescriptorFlag:4; /* 4:20 4 */
};

// <0177F4EC> ../common/vfx/vfx_shader_file.h:49
void VfxDescriptor_t::VfxDescriptor_t(int32 nDescriptorSet, int32 nBinding)
{
} /* size: 0 */

// <0177F4BB> ../common/vfx/vfx_shader_file.h:49
inline void VfxDescriptor_t::VfxDescriptor_t(int32 nDescriptorSet, int32 nBinding)
{
} /* size: 0 */

// <0177F495> ../common/vfx/vfx_shader_file.h:56
void VfxDescriptor_t::VfxDescriptor_t(int32 nDescriptorSet, int32 nBinding, DescriptorFlag_t nDescriptorFlag)
{
} /* size: 0 */

// <0177F458> ../common/vfx/vfx_shader_file.h:56
inline void VfxDescriptor_t::VfxDescriptor_t(int32 nDescriptorSet, int32 nBinding, DescriptorFlag_t nDescriptorFlag)
{
} /* size: 0 */

// <006CCF68> ../common/vfx/vfx_shader_file.h:78
// member variables: 3
// struct size: 4
struct ShaderStorageBufferBinding_t {
	uint16 m_nBinding:14; /* 0: 0 2 */
	uint16 m_nRegisterSpace:2; /* 0:14 2 */
	uint16 m_nDescriptorSet; /* 2 2 */
};

// <017769C6> ../common/vfx/vfx_shader_file.h:91
// member functions: 16
// member variables: 4
// vtable entries: 2
// class size: 24
class CVfxShaderFile {
	void CVfxShaderFile(CVfxShaderFile* , const CVfxShaderFile& );
	int ()(void) * * _vptr.CVfxShaderFile; /* 0 8 */
	/* vfx/vfx_shader_file.cpp:13 */
	void CVfxShaderFile(CVfxShaderFile* );
	/* vfx/vfx_shader_file.cpp:21 */
	virtual void ~CVfxShaderFile(CVfxShaderFile* );
	/* vfx/vfx_shader_file.cpp:31 */
	virtual void Serialize(const CVfxShaderFile* , CUtlBuffer& );
	/* vfx/vfx_shader_file.cpp:39 */
	virtual bool Unserialize(CVfxShaderFile* , CUtlBuffer& );
	/* vfx/vfx_shader_file.cpp:65 */
	void SetShaderSource(CVfxShaderFile* , const char* , int32);
	/* vfx/vfx_shader_file.cpp:79 */
	const char* GetShaderSource(const CVfxShaderFile* );
	/* vfx/vfx_shader_file.cpp:85 */
	int GetShaderSourceSize(const CVfxShaderFile* );
protected:
	int32 m_nFileVersion; /* 8 4 */
	int32 m_nShaderSourceSize; /* 12 4 */
	char * m_pShaderSource; /* 16 8 */
	void CVfxShaderFile(class CVfxShaderFile *, const class CVfxShaderFile  &); /* linkage=_ZN14CVfxShaderFileC4ERKS_ */
	void CVfxShaderFile(class CVfxShaderFile *); /* linkage=_ZN14CVfxShaderFileC4Ev */
	virtual void ~CVfxShaderFile(class CVfxShaderFile *); /* linkage=_ZN14CVfxShaderFileD4Ev */
	/* <1782927> vfx/vfx_shader_file.cpp:31 */
	virtual void Serialize(const class CVfxShaderFile  *, class CUtlBuffer &); /* linkage=_ZNK14CVfxShaderFile9SerializeER10CUtlBuffer */
	virtual bool Unserialize(class CVfxShaderFile *, class CUtlBuffer &); /* linkage=_ZN14CVfxShaderFile11UnserializeER10CUtlBuffer */
	void SetShaderSource(class CVfxShaderFile *, const char  *, int32); /* linkage=_ZN14CVfxShaderFile15SetShaderSourceEPKci */
	const char  * GetShaderSource(const class CVfxShaderFile  *); /* linkage=_ZNK14CVfxShaderFile15GetShaderSourceEv */
	int GetShaderSourceSize(const class CVfxShaderFile  *); /* linkage=_ZNK14CVfxShaderFile19GetShaderSourceSizeEv */
};

// <00BB5D7B> ../common/vfx/vfx_shader_file.h:94
void CVfxShaderFile::CVfxShaderFile()
{
} /* size: 0 */

// <009A6463> ../common/vfx/vfx_shader_file.h:95
void CVfxShaderFile::~CVfxShaderFile()
{
} /* size: 0 */

// <01771C2F> ../common/vfx/vfx_shader_file.h:122
// member functions: 86
// member variables: 18
// vtable entries: 2
// class size: 224
class CVfxShaderFileVulkan : public CVfxShaderFile {
	/* ../common/vfx/vfx_shader_file.h:198 */
	struct PerDescriptorSetBindingInfo_t {
		int16 m_nNumActiveSamplers; /* 0 2 */
		int16 m_nNumActiveUniformBuffers; /* 2 2 */
		uint64 m_nActiveSamplerBindingMask[1]; /* 8 8 */
		int16 m_nNumActiveTextures; /* 16 2 */
		uint64 m_nActiveTextureBindingMask[2]; /* 24 16 */
		uint16 m_nActiveUniformBindingMask; /* 40 2 */
		uint64 m_nActiveInputAttachmentsBindingMask[2]; /* 48 16 */
		uint16 m_nActiveStorageTexelBufferBindingMask; /* 64 2 */
		int16 m_nNumActiveUniformTexelBuffers; /* 66 2 */
		uint64 m_nActiveUniformTexelBufferBindingMask[2]; /* 72 16 */
		uint16 m_nActiveImageBindingMask; /* 88 2 */
	};
public:
	/* class CVfxShaderFile <ancestor>; */ /* 0 24 */
	void CVfxShaderFileVulkan(CVfxShaderFileVulkan* , const CVfxShaderFileVulkan& );
	/* vfx/vfx_shader_file.cpp:95 */
	void CVfxShaderFileVulkan(CVfxShaderFileVulkan* );
	/* vfx/vfx_shader_file.cpp:126 */
	virtual void ~CVfxShaderFileVulkan(CVfxShaderFileVulkan* );
	/* vfx/vfx_shader_file.cpp:166 */
	virtual void Serialize(const CVfxShaderFileVulkan* , CUtlBuffer& );
	/* vfx/vfx_shader_file.cpp:294 */
	virtual bool Unserialize(CVfxShaderFileVulkan* , CUtlBuffer& );
	/* vfx/vfx_shader_file.cpp:263 */
	bool ValidateDescriptorBindings(CVfxShaderFileVulkan* );
	/* ../common/vfx/vfx_shader_file.h:133 */
	int32 GetAttribMapSize(const CVfxShaderFileVulkan* );
	/* ../common/vfx/vfx_shader_file.h:134 */
	const uint8* GetAttribMap(const CVfxShaderFileVulkan* );
	/* vfx/vfx_shader_file.cpp:397 */
	void SetAttribMap(CVfxShaderFileVulkan* , const CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >& );
	/* vfx/vfx_shader_file.cpp:410 */
	void SetActiveSamplerBindings(CVfxShaderFileVulkan* , const CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >& );
	/* vfx/vfx_shader_file.cpp:435 */
	void GetActiveSamplerBindings(CVfxShaderFileVulkan* , CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >& );
	/* vfx/vfx_shader_file.cpp:511 */
	void SetActiveUniformBufferBindings(CVfxShaderFileVulkan* , const CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >& );
	/* vfx/vfx_shader_file.cpp:534 */
	void GetActiveUniformBufferBindings(CVfxShaderFileVulkan* , CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >& );
	/* vfx/vfx_shader_file.cpp:454 */
	void SetActiveTextureBindings(CVfxShaderFileVulkan* , const CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >& );
	/* vfx/vfx_shader_file.cpp:487 */
	void GetActiveTextureBindings(CVfxShaderFileVulkan* , CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >& );
	/* vfx/vfx_shader_file.cpp:550 */
	void SetActiveImageBindings(CVfxShaderFileVulkan* , const CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >& );
	/* vfx/vfx_shader_file.cpp:570 */
	void GetActiveImageBindings(CVfxShaderFileVulkan* , CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >& );
	/* vfx/vfx_shader_file.cpp:586 */
	void SetActiveStorageBufferBindings(CVfxShaderFileVulkan* , const CUtlVector<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >& );
	/* vfx/vfx_shader_file.cpp:610 */
	void GetActiveStorageBufferBindings(CVfxShaderFileVulkan* , CUtlVector<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >& );
	/* ../common/vfx/vfx_shader_file.h:152 */
	int16 GetNumActiveUniformTexelBuffers(CVfxShaderFileVulkan* , uint32);
	/* vfx/vfx_shader_file.cpp:617 */
	void SetActiveUniformTexelBufferBindings(CVfxShaderFileVulkan* , const CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >& );
	/* vfx/vfx_shader_file.cpp:643 */
	void GetActiveUniformTexelBufferBindings(CVfxShaderFileVulkan* , CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >& );
	/* vfx/vfx_shader_file.cpp:662 */
	void SetActiveStorageTexelBufferBindings(CVfxShaderFileVulkan* , const CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >& );
	/* vfx/vfx_shader_file.cpp:682 */
	void GetActiveStorageTexelBufferBindings(CVfxShaderFileVulkan* , CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >& );
	/* ../common/vfx/vfx_shader_file.h:159 */
	void SetPushConstantSize(CVfxShaderFileVulkan* , uint16);
	/* ../common/vfx/vfx_shader_file.h:160 */
	bool HashPushConstant(const CVfxShaderFileVulkan* );
	/* ../common/vfx/vfx_shader_file.h:161 */
	uint16 GetPushConstantSize(const CVfxShaderFileVulkan* );
	/* vfx/vfx_shader_file.cpp:698 */
	void SetHiddenUAVCounters(CVfxShaderFileVulkan* , const CUtlVector<HiddenUAVCounter_t, CUtlMemory<HiddenUAVCounter_t, int> >& );
	/* vfx/vfx_shader_file.cpp:715 */
	void GetHiddenUAVCounters(CVfxShaderFileVulkan* , CUtlVector<HiddenUAVCounter_t, CUtlMemory<HiddenUAVCounter_t, int> >& );
	/* vfx/vfx_shader_file.cpp:725 */
	void SetThreadGroupSize(CVfxShaderFileVulkan* , const uint32_t* );
	/* vfx/vfx_shader_file.cpp:733 */
	void GetThreadGroupSize(CVfxShaderFileVulkan* , uint32_t* );
	/* ../common/vfx/vfx_shader_file.h:171 */
	void SetRequiredSubgroupSize(CVfxShaderFileVulkan* , uint16);
	/* ../common/vfx/vfx_shader_file.h:172 */
	uint16 GetRequiredSubgroupSize(const CVfxShaderFileVulkan* );
	/* ../common/vfx/vfx_shader_file.h:174 */
	int32 GetNumDescriptorSets(const CVfxShaderFileVulkan* );
	/* ../common/vfx/vfx_shader_file.h:176 */
	void SetUseShaderStageName(CVfxShaderFileVulkan* , bool);
	/* ../common/vfx/vfx_shader_file.h:177 */
	bool UseShaderStageName(const CVfxShaderFileVulkan* );
	/* vfx/vfx_shader_file.cpp:805 */
	void SetDescriptorSetNameHash(CVfxShaderFileVulkan* , uint32, CUtlStringToken);
	/* vfx/vfx_shader_file.cpp:841 */
	CUtlStringToken GetDescriptorSetNameHash(const CVfxShaderFileVulkan* , uint32);
	/* vfx/vfx_shader_file.cpp:741 */
	void SetEntryPoints(CVfxShaderFileVulkan* , uint32, CUtlStringToken* );
	/* ../common/vfx/vfx_shader_file.h:184 */
	uint32 GetEntryPointCount(const CVfxShaderFileVulkan* );
	/* ../common/vfx/vfx_shader_file.h:185 */
	const CUtlStringToken* GetEntryPoints(const CVfxShaderFileVulkan* );
protected:
	int32 m_nAttribMapSize; /* 24 4 */
	uint8 * m_pAttribMap; /* 32 8 */
	PerDescriptorSetBindingInfo_t m_defaultDescriptorSetBindingInfo; /* 40 96 */
	uint16 m_nNumActiveHiddenUAVCounters; /* 136 2 */
	HiddenUAVCounter_t * m_pHiddenUAVCounters; /* 144 8 */
	uint16 m_nNumActiveShaderStorageBufferBindings; /* 152 2 */
	ShaderStorageBufferBinding_t * m_pShaderStorageBufferBindings; /* 160 8 */
	uint32_t m_nThreadGroupSize[3]; /* 168 12 */
	uint16 m_nNumStaticDescriptorSets; /* 180 2 */
	PerDescriptorSetBindingInfo_t * m_pStaticDescriptorSetBindingInfo; /* 184 8 */
	uint16 m_nPushConstantSize; /* 192 2 */
	uint16 m_nRequiredSubgroupSize; /* 194 2 */
	bool m_bUseShaderStageName; /* 196 1 */
	uint16 m_nNumDescriptorSetHashes; /* 198 2 */
	CUtlStringToken * m_pDescriptorSetHashes; /* 200 8 */
	uint32 m_nEntryPointCount; /* 208 4 */
	CUtlStringToken * m_pEntryPoints; /* 216 8 */
private:
	/* vfx/vfx_shader_file.cpp:790 */
	PerDescriptorSetBindingInfo_t* GetDescriptorBindingInfo(CVfxShaderFileVulkan* , int32);
	/* vfx/vfx_shader_file.cpp:762 */
	void ResizeStaticDescriptorBindingInfoIfNecessary(CVfxShaderFileVulkan* , const CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >& );
	virtual void ~CVfxShaderFileVulkan(class CVfxShaderFileVulkan *); /* linkage=_ZN20CVfxShaderFileVulkanD4Ev */
	virtual void Serialize(const class CVfxShaderFileVulkan  *, class CUtlBuffer &); /* linkage=_ZNK20CVfxShaderFileVulkan9SerializeER10CUtlBuffer */
	void SetEntryPoints(class CVfxShaderFileVulkan *, uint32, class CUtlStringToken *); /* linkage=_ZN20CVfxShaderFileVulkan14SetEntryPointsEjP15CUtlStringToken */
	void SetDescriptorSetNameHash(class CVfxShaderFileVulkan *, uint32, class CUtlStringToken); /* linkage=_ZN20CVfxShaderFileVulkan24SetDescriptorSetNameHashEj15CUtlStringToken */
	void SetThreadGroupSize(class CVfxShaderFileVulkan *, const uint32_t  *); /* linkage=_ZN20CVfxShaderFileVulkan18SetThreadGroupSizeEPKj */
	void SetHiddenUAVCounters(class CVfxShaderFileVulkan *, const class CUtlVector<HiddenUAVCounter_t, CUtlMemory<HiddenUAVCounter_t, int> >  &); /* linkage=_ZN20CVfxShaderFileVulkan20SetHiddenUAVCountersERK10CUtlVectorI18HiddenUAVCounter_t10CUtlMemoryIS1_iEE */
	void SetActiveStorageTexelBufferBindings(class CVfxShaderFileVulkan *, const class CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >  &); /* linkage=_ZN20CVfxShaderFileVulkan35SetActiveStorageTexelBufferBindingsERK10CUtlVectorI15VfxDescriptor_t10CUtlMemoryIS1_iEE */
	void SetActiveUniformTexelBufferBindings(class CVfxShaderFileVulkan *, const class CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >  &); /* linkage=_ZN20CVfxShaderFileVulkan35SetActiveUniformTexelBufferBindingsERK10CUtlVectorI15VfxDescriptor_t10CUtlMemoryIS1_iEE */
	void SetActiveStorageBufferBindings(class CVfxShaderFileVulkan *, const class CUtlVector<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> >  &); /* linkage=_ZN20CVfxShaderFileVulkan30SetActiveStorageBufferBindingsERK10CUtlVectorI28ShaderStorageBufferBinding_t10CUtlMemoryIS1_iEE */
	void SetActiveImageBindings(class CVfxShaderFileVulkan *, const class CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >  &); /* linkage=_ZN20CVfxShaderFileVulkan22SetActiveImageBindingsERK10CUtlVectorI15VfxDescriptor_t10CUtlMemoryIS1_iEE */
	void SetActiveTextureBindings(class CVfxShaderFileVulkan *, const class CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >  &); /* linkage=_ZN20CVfxShaderFileVulkan24SetActiveTextureBindingsERK10CUtlVectorI15VfxDescriptor_t10CUtlMemoryIS1_iEE */
	void SetActiveUniformBufferBindings(class CVfxShaderFileVulkan *, const class CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >  &); /* linkage=_ZN20CVfxShaderFileVulkan30SetActiveUniformBufferBindingsERK10CUtlVectorI15VfxDescriptor_t10CUtlMemoryIS1_iEE */
	void SetActiveSamplerBindings(class CVfxShaderFileVulkan *, const class CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >  &); /* linkage=_ZN20CVfxShaderFileVulkan24SetActiveSamplerBindingsERK10CUtlVectorI15VfxDescriptor_t10CUtlMemoryIS1_iEE */
	void SetAttribMap(class CVfxShaderFileVulkan *, const class CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >  &); /* linkage=_ZN20CVfxShaderFileVulkan12SetAttribMapERK10CUtlVectorIh10CUtlMemoryIhiEE */
	void CVfxShaderFileVulkan(class CVfxShaderFileVulkan *); /* linkage=_ZN20CVfxShaderFileVulkanC4Ev */
	void SetUseShaderStageName(class CVfxShaderFileVulkan *, bool); /* linkage=_ZN20CVfxShaderFileVulkan21SetUseShaderStageNameEb */
	void SetRequiredSubgroupSize(class CVfxShaderFileVulkan *, uint16); /* linkage=_ZN20CVfxShaderFileVulkan23SetRequiredSubgroupSizeEt */
	void SetPushConstantSize(class CVfxShaderFileVulkan *, uint16); /* linkage=_ZN20CVfxShaderFileVulkan19SetPushConstantSizeEt */
	void CVfxShaderFileVulkan(class CVfxShaderFileVulkan *, const class CVfxShaderFileVulkan  &); /* linkage=_ZN20CVfxShaderFileVulkanC4ERKS_ */
	/* <1780c21> vfx/vfx_shader_file.cpp:294 */
	virtual bool Unserialize(class CVfxShaderFileVulkan *, class CUtlBuffer &); /* linkage=_ZN20CVfxShaderFileVulkan11UnserializeER10CUtlBuffer */
	bool ValidateDescriptorBindings(class CVfxShaderFileVulkan *); /* linkage=_ZN20CVfxShaderFileVulkan26ValidateDescriptorBindingsEv */
	int32 GetAttribMapSize(const class CVfxShaderFileVulkan  *); /* linkage=_ZNK20CVfxShaderFileVulkan16GetAttribMapSizeEv */
	const uint8  * GetAttribMap(const class CVfxShaderFileVulkan  *); /* linkage=_ZNK20CVfxShaderFileVulkan12GetAttribMapEv */
	void GetActiveSamplerBindings(class CVfxShaderFileVulkan *, class CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> > &); /* linkage=_ZN20CVfxShaderFileVulkan24GetActiveSamplerBindingsER10CUtlVectorI15VfxDescriptor_t10CUtlMemoryIS1_iEE */
	void GetActiveUniformBufferBindings(class CVfxShaderFileVulkan *, class CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> > &); /* linkage=_ZN20CVfxShaderFileVulkan30GetActiveUniformBufferBindingsER10CUtlVectorI15VfxDescriptor_t10CUtlMemoryIS1_iEE */
	void GetActiveTextureBindings(class CVfxShaderFileVulkan *, class CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> > &); /* linkage=_ZN20CVfxShaderFileVulkan24GetActiveTextureBindingsER10CUtlVectorI15VfxDescriptor_t10CUtlMemoryIS1_iEE */
	void GetActiveImageBindings(class CVfxShaderFileVulkan *, class CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> > &); /* linkage=_ZN20CVfxShaderFileVulkan22GetActiveImageBindingsER10CUtlVectorI15VfxDescriptor_t10CUtlMemoryIS1_iEE */
	void GetActiveStorageBufferBindings(class CVfxShaderFileVulkan *, class CUtlVector<ShaderStorageBufferBinding_t, CUtlMemory<ShaderStorageBufferBinding_t, int> > &); /* linkage=_ZN20CVfxShaderFileVulkan30GetActiveStorageBufferBindingsER10CUtlVectorI28ShaderStorageBufferBinding_t10CUtlMemoryIS1_iEE */
	int16 GetNumActiveUniformTexelBuffers(class CVfxShaderFileVulkan *, uint32); /* linkage=_ZN20CVfxShaderFileVulkan31GetNumActiveUniformTexelBuffersEj */
	void GetActiveUniformTexelBufferBindings(class CVfxShaderFileVulkan *, class CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> > &); /* linkage=_ZN20CVfxShaderFileVulkan35GetActiveUniformTexelBufferBindingsER10CUtlVectorI15VfxDescriptor_t10CUtlMemoryIS1_iEE */
	void GetActiveStorageTexelBufferBindings(class CVfxShaderFileVulkan *, class CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> > &); /* linkage=_ZN20CVfxShaderFileVulkan35GetActiveStorageTexelBufferBindingsER10CUtlVectorI15VfxDescriptor_t10CUtlMemoryIS1_iEE */
	bool HashPushConstant(const class CVfxShaderFileVulkan  *); /* linkage=_ZNK20CVfxShaderFileVulkan16HashPushConstantEv */
	uint16 GetPushConstantSize(const class CVfxShaderFileVulkan  *); /* linkage=_ZNK20CVfxShaderFileVulkan19GetPushConstantSizeEv */
	void GetHiddenUAVCounters(class CVfxShaderFileVulkan *, class CUtlVector<HiddenUAVCounter_t, CUtlMemory<HiddenUAVCounter_t, int> > &); /* linkage=_ZN20CVfxShaderFileVulkan20GetHiddenUAVCountersER10CUtlVectorI18HiddenUAVCounter_t10CUtlMemoryIS1_iEE */
	void GetThreadGroupSize(class CVfxShaderFileVulkan *, uint32_t *); /* linkage=_ZN20CVfxShaderFileVulkan18GetThreadGroupSizeEPj */
	uint16 GetRequiredSubgroupSize(const class CVfxShaderFileVulkan  *); /* linkage=_ZNK20CVfxShaderFileVulkan23GetRequiredSubgroupSizeEv */
	int32 GetNumDescriptorSets(const class CVfxShaderFileVulkan  *); /* linkage=_ZNK20CVfxShaderFileVulkan20GetNumDescriptorSetsEv */
	bool UseShaderStageName(const class CVfxShaderFileVulkan  *); /* linkage=_ZNK20CVfxShaderFileVulkan18UseShaderStageNameEv */
	class CUtlStringToken GetDescriptorSetNameHash(const class CVfxShaderFileVulkan  *, uint32); /* linkage=_ZNK20CVfxShaderFileVulkan24GetDescriptorSetNameHashEj */
	uint32 GetEntryPointCount(const class CVfxShaderFileVulkan  *); /* linkage=_ZNK20CVfxShaderFileVulkan18GetEntryPointCountEv */
	const class CUtlStringToken  * GetEntryPoints(const class CVfxShaderFileVulkan  *); /* linkage=_ZNK20CVfxShaderFileVulkan14GetEntryPointsEv */
	/* <1781fef> vfx/vfx_shader_file.cpp:790 */
	class PerDescriptorSetBindingInfo_t * GetDescriptorBindingInfo(class CVfxShaderFileVulkan *, int32); /* linkage=_ZN20CVfxShaderFileVulkan24GetDescriptorBindingInfoEi */
	void ResizeStaticDescriptorBindingInfoIfNecessary(class CVfxShaderFileVulkan *, const class CUtlVector<VfxDescriptor_t, CUtlMemory<VfxDescriptor_t, int> >  &); /* linkage=_ZN20CVfxShaderFileVulkan44ResizeStaticDescriptorBindingInfoIfNecessaryERK10CUtlVectorI15VfxDescriptor_t10CUtlMemoryIS1_iEE */
};

// <00BB5D1E> ../common/vfx/vfx_shader_file.h:125
void CVfxShaderFileVulkan::CVfxShaderFileVulkan()
{
} /* size: 0 */

// <000B795C> ../../common/vfx/vfx_shader_file.h:126
void CVfxShaderFileVulkan::~CVfxShaderFileVulkan()
{
} /* size: 0 */

// <00A55DF6> ../common/vfx/vfx_shader_file.h:133
inline void CVfxShaderFileVulkan::GetAttribMapSize()
{
} /* size: 0 */

// <00A55DDD> ../common/vfx/vfx_shader_file.h:134
inline void CVfxShaderFileVulkan::GetAttribMap()
{
} /* size: 0 */

// <000D60B2> ../../common/vfx/vfx_shader_file.h:159
inline void CVfxShaderFileVulkan::SetPushConstantSize(uint16 nPushConstantSize)
{
} /* size: 0 */

// <00A55DC4> ../common/vfx/vfx_shader_file.h:161
inline void CVfxShaderFileVulkan::GetPushConstantSize()
{
} /* size: 0 */

// <000D608D> ../../common/vfx/vfx_shader_file.h:171
inline void CVfxShaderFileVulkan::SetRequiredSubgroupSize(uint16 nRequiredSubgroupSize)
{
} /* size: 0 */

// <00A55DAB> ../common/vfx/vfx_shader_file.h:172
inline void CVfxShaderFileVulkan::GetRequiredSubgroupSize()
{
} /* size: 0 */

// <0177F43F> ../common/vfx/vfx_shader_file.h:174
inline void CVfxShaderFileVulkan::GetNumDescriptorSets()
{
} /* size: 0 */

// <000D6068> ../../common/vfx/vfx_shader_file.h:176
inline void CVfxShaderFileVulkan::SetUseShaderStageName(bool bUseShaderStageName)
{
} /* size: 0 */

// <00A55D79> ../common/vfx/vfx_shader_file.h:177
inline void CVfxShaderFileVulkan::UseShaderStageName()
{
} /* size: 0 */

// <00A55D60> ../common/vfx/vfx_shader_file.h:184
inline void CVfxShaderFileVulkan::GetEntryPointCount()
{
} /* size: 0 */

// <00A55D47> ../common/vfx/vfx_shader_file.h:185
inline void CVfxShaderFileVulkan::GetEntryPoints()
{
} /* size: 0 */

