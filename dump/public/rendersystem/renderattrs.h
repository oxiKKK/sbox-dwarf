
//
// public/rendersystem/renderattrs.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libvfx_vulkan.so
//
//	functions: 141
//	classes: 6
//

// <000493C4> ../public/rendersystem/renderattrs.h:20
// member functions: 216
// member variables: 10
// class size: 1,184
class CRenderAttributes {
	/* ../public/rendersystem/renderattrs.h:26 */
	struct SamplerAttrForStorage_t {
		CSamplerStateDesc samplerDesc; /* 0 20 */
		/* ../public/rendersystem/renderattrs.h:30 */
		void SamplerAttrForStorage_t(SamplerAttrForStorage_t* );
		/* ../public/rendersystem/renderattrs.h:33 */
		void SamplerAttrForStorage_t(SamplerAttrForStorage_t* , const CSamplerStateDesc& );
		/* ../public/rendersystem/renderattrs.h:37 */
		void SamplerAttrForStorage_t(SamplerAttrForStorage_t* , const SamplerAttr_t& );
		/* ../public/rendersystem/renderattrs.h:44 */
		SamplerAttrForStorage_t& operator=(SamplerAttrForStorage_t* , const SamplerAttr_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/rendersystem/renderattrs.h:47 */
	struct SamplerAttr_t {
		CSamplerStateDesc samplerDesc; /* 0 20 */
		/* ../public/rendersystem/renderattrs.h:50 */
		void SamplerAttr_t(SamplerAttr_t* );
		/* ../public/rendersystem/renderattrs.h:53 */
		void SamplerAttr_t(SamplerAttr_t* , const CSamplerStateDesc& );
		/* ../public/rendersystem/renderattrs.h:57 */
		void SamplerAttr_t(SamplerAttr_t* , const SamplerAttrForStorage_t& );
		/* ../public/rendersystem/renderattrs.h:64 */
		SamplerAttr_t& operator=(SamplerAttr_t* , const SamplerAttrForStorage_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/rendersystem/renderattrs.h:74 */
	struct TextureAttrForStorage_t {
		/* ../public/rendersystem/renderattrs.h:76 */
		void TextureAttrForStorage_t(TextureAttrForStorage_t* );
		/* ../public/rendersystem/renderattrs.h:77 */
		void TextureAttrForStorage_t(TextureAttrForStorage_t* , HRenderTexture, int32);
		/* ../public/rendersystem/renderattrs.h:78 */
		void TextureAttrForStorage_t(TextureAttrForStorage_t* , const TextureAttr_t& );
		HRenderTexture texture; /* 0 8 */
		int32 nSpecificMipLevelToBind; /* 8 4 */
		/* ../public/rendersystem/renderattrs.h:82 */
		TextureAttrForStorage_t& operator=(TextureAttrForStorage_t* , const TextureAttr_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/rendersystem/renderattrs.h:90 */
	struct TextureAttr_t {
		/* ../public/rendersystem/renderattrs.h:92 */
		void TextureAttr_t(TextureAttr_t* );
		/* ../public/rendersystem/renderattrs.h:93 */
		void TextureAttr_t(TextureAttr_t* , HRenderTexture, int32);
		/* ../public/rendersystem/renderattrs.h:94 */
		void TextureAttr_t(TextureAttr_t* , const TextureAttrForStorage_t& );
		HRenderTexture texture; /* 0 8 */
		int32 nSpecificMipLevelToBind; /* 8 4 */
		/* ../public/rendersystem/renderattrs.h:103 */
		TextureAttr_t& operator=(TextureAttr_t* , const TextureAttrForStorage_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/rendersystem/renderattrs.h:709 */
	struct ConstantBufferAttr_t {
		/* ../public/rendersystem/renderattrs.h:711 */
		void ConstantBufferAttr_t(ConstantBufferAttr_t* );
		/* ../public/rendersystem/renderattrs.h:712 */
		void ConstantBufferAttr_t(ConstantBufferAttr_t* , ConstantBufferHandle_t, uint32);
		/* ../public/rendersystem/renderattrs.h:713 */
		void ConstantBufferAttr_t(ConstantBufferAttr_t* , const ConstantBufferAttr_t& );
		ConstantBufferHandle_t hBuffer; /* 0 8 */
		uint32 nView; /* 8 4 */
		/* ../public/rendersystem/renderattrs.h:722 */
		ConstantBufferAttr_t& operator=(ConstantBufferAttr_t* , const ConstantBufferAttr_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/rendersystem/renderattrs.h:766 */
	struct DescriptorSetAttr_t {
		/* ../public/rendersystem/renderattrs.h:768 */
		void DescriptorSetAttr_t(DescriptorSetAttr_t* );
		/* ../public/rendersystem/renderattrs.h:769 */
		void DescriptorSetAttr_t(DescriptorSetAttr_t* , RenderDescriptorSetHandle_t, int32, int32, int32, int32);
		/* ../public/rendersystem/renderattrs.h:777 */
		void DescriptorSetAttr_t(DescriptorSetAttr_t* , const DescriptorSetAttr_t& );
		RenderDescriptorSetHandle_t hDescriptorSet; /* 0 8 */
		int32 nCbufferOffsets[4]; /* 8 16 */
		/* ../public/rendersystem/renderattrs.h:793 */
		DescriptorSetAttr_t& operator=(DescriptorSetAttr_t* , const DescriptorSetAttr_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/rendersystem/renderattrs.h:67 */
	typedef struct CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8> SamplerAttrList_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/rendersystem/renderattrs.h:69 */
	const SamplerAttrList_t& SamplerAttributes(const CRenderAttributes* );
	/* ../public/rendersystem/renderattrs.h:70 */
	SamplerAttrList_t& SamplerAttributes(CRenderAttributes* );
	/* ../public/rendersystem/renderattrs.h:106 */
	typedef struct CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8> TextureAttrList_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/rendersystem/renderattrs.h:109 */
	const TextureAttrList_t& TextureAttributes(const CRenderAttributes* );
	/* ../public/rendersystem/renderattrs.h:110 */
	TextureAttrList_t& TextureAttributes(CRenderAttributes* );
	/* ../public/rendersystem/renderattrs.h:113 */
	bool IsEmpty(const CRenderAttributes* );
	/* ../public/rendersystem/renderattrs.h:126 */
	void Clear(CRenderAttributes* , bool, bool);
	/* ../public/rendersystem/renderattrs.h:146 */
	void SetFloatValue(CRenderAttributes* , CUtlStringToken, float);
	/* ../public/rendersystem/renderattrs.h:151 */
	float GetFloatValue(const CRenderAttributes* , CUtlStringToken, float);
	/* ../public/rendersystem/renderattrs.h:156 */
	QAngle GetQAngleValue(const CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:163 */
	bool GetFloatValue(const CRenderAttributes* , float* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:178 */
	void DeleteFloatValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:183 */
	float CopyVectorFloatValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , float);
	/* ../public/rendersystem/renderattrs.h:193 */
	void SetVector2DValue(CRenderAttributes* , CUtlStringToken, Vector2D);
	/* ../public/rendersystem/renderattrs.h:198 */
	Vector2D GetVector2DValue(const CRenderAttributes* , CUtlStringToken, Vector2D);
	/* ../public/rendersystem/renderattrs.h:204 */
	bool GetVector2DValue(const CRenderAttributes* , Vector2D* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:219 */
	void DeleteVector2DValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:224 */
	Vector2D CopyVector2DValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , Vector2D);
	/* ../public/rendersystem/renderattrs.h:234 */
	void SetVectorValue(CRenderAttributes* , CUtlStringToken, Vector);
	/* ../public/rendersystem/renderattrs.h:239 */
	Vector GetVectorValue(const CRenderAttributes* , CUtlStringToken, Vector);
	/* ../public/rendersystem/renderattrs.h:245 */
	bool GetVectorValue(const CRenderAttributes* , Vector* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:260 */
	void DeleteVectorValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:265 */
	Vector CopyVectorValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , Vector);
	/* ../public/rendersystem/renderattrs.h:275 */
	void SetVector4DValue(CRenderAttributes* , CUtlStringToken, Vector4D);
	/* ../public/rendersystem/renderattrs.h:280 */
	Vector4D GetVector4DValue(const CRenderAttributes* , CUtlStringToken, Vector4D);
	/* ../public/rendersystem/renderattrs.h:286 */
	bool GetVector4DValue(const CRenderAttributes* , Vector4D* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:291 */
	void DeleteVector4DValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:296 */
	Vector4D CopyVector4DValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , Vector4D);
	/* ../public/rendersystem/renderattrs.h:311 */
	void SetVMatrixValue(CRenderAttributes* , CUtlStringToken, VMatrix);
	/* ../public/rendersystem/renderattrs.h:316 */
	VMatrix GetVMatrixValue(const CRenderAttributes* , CUtlStringToken, VMatrix);
	/* ../public/rendersystem/renderattrs.h:322 */
	bool GetVMatrixValue(const CRenderAttributes* , VMatrix* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:327 */
	void DeleteVMatrixValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:332 */
	VMatrix CopyVMatrixValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , VMatrix);
	/* ../public/rendersystem/renderattrs.h:347 */
	void SetPtrValue(CRenderAttributes* , CUtlStringToken, void* );
	/* ../public/rendersystem/renderattrs.h:352 */
	void* GetPtrValue(const CRenderAttributes* , CUtlStringToken, void* );
	/* ../public/rendersystem/renderattrs.h:358 */
	bool GetPtrValue(const CRenderAttributes* , void** , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:363 */
	void DeletePtrValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:368 */
	void* CopyPtrValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , void* );
	/* ../public/rendersystem/renderattrs.h:383 */
	void SetBufferValue(CRenderAttributes* , CUtlStringToken, IndexBufferHandle_t);
	/* ../public/rendersystem/renderattrs.h:391 */
	void SetBufferValue(CRenderAttributes* , CUtlStringToken, VertexBufferHandle_t);
	/* ../public/rendersystem/renderattrs.h:396 */
	void SetBufferValue(CRenderAttributes* , CUtlStringToken, RenderBufferHandle_t);
	/* ../public/rendersystem/renderattrs.h:404 */
	void SetStringValue(CRenderAttributes* , CUtlStringToken, const char* );
	/* ../public/rendersystem/renderattrs.h:410 */
	bool GetStringValue(const CRenderAttributes* , CUtlString* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:415 */
	void DeleteStringValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:425 */
	void SetIntVector4DValue(CRenderAttributes* , CUtlStringToken, int, int, int, int);
	/* ../public/rendersystem/renderattrs.h:430 */
	IntVector4D GetIntVector4DValue(const CRenderAttributes* , CUtlStringToken, IntVector4D);
	/* ../public/rendersystem/renderattrs.h:435 */
	bool GetIntVector4DValue(const CRenderAttributes* , IntVector4D* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:450 */
	void SetIntValue(CRenderAttributes* , CUtlStringToken, int);
	/* ../public/rendersystem/renderattrs.h:459 */
	int GetIntValue(const CRenderAttributes* , CUtlStringToken, int);
	/* ../public/rendersystem/renderattrs.h:469 */
	bool GetIntValue(const CRenderAttributes* , int* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:485 */
	void DeleteIntValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:494 */
	int CopyIntValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , int);
	/* ../public/rendersystem/renderattrs.h:510 */
	void SetComboValue(CRenderAttributes* , CUtlStringToken, uint8);
	/* ../public/rendersystem/renderattrs.h:518 */
	uint8 GetComboValue(const CRenderAttributes* , CUtlStringToken, uint8);
	/* ../public/rendersystem/renderattrs.h:529 */
	bool GetComboValue(const CRenderAttributes* , uint8* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:546 */
	uint8 CopyComboValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , uint8);
	/* ../public/rendersystem/renderattrs.h:553 */
	void DeleteComboValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:569 */
	void SetBoolValue(CRenderAttributes* , CUtlStringToken, bool);
	/* ../public/rendersystem/renderattrs.h:574 */
	bool GetBoolValue(const CRenderAttributes* , CUtlStringToken, bool);
	/* ../public/rendersystem/renderattrs.h:579 */
	bool GetBoolValue(const CRenderAttributes* , bool* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:590 */
	void DeleteBoolValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:598 */
	void SetSamplerValue(CRenderAttributes* , CUtlStringToken, CSamplerStateDesc);
	/* ../public/rendersystem/renderattrs.h:603 */
	CSamplerStateDescBase GetSamplerValue(const CRenderAttributes* , CUtlStringToken, CSamplerStateDesc);
	/* ../public/rendersystem/renderattrs.h:609 */
	bool GetSamplerValueToBind(const CRenderAttributes* , SamplerAttr_t& , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:617 */
	void SetTextureValue(CRenderAttributes* , CUtlStringToken, HRenderTexture, int32);
	/* ../public/rendersystem/renderattrs.h:622 */
	HRenderTexture GetTextureValue(const CRenderAttributes* , CUtlStringToken, HRenderTexture);
	/* ../public/rendersystem/renderattrs.h:629 */
	HRenderTexture GetFirstTexture(const CRenderAttributes* );
	/* ../public/rendersystem/renderattrs.h:646 */
	bool GetTextureValue(const CRenderAttributes* , HRenderTexture* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:660 */
	bool GetTextureValueAndMipLevelToBind(const CRenderAttributes* , TextureAttr_t& , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:665 */
	const TextureAttrForStorage_t* GetTextureValueAndMipLevelToBind(const CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:671 */
	bool GetTextureValueAndMipLevelToBind(const CRenderAttributes* , HRenderTexture* , int* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:689 */
	void DeleteTextureValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:694 */
	HRenderTexture CopyTextureValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , HRenderTexture);
	/* ../public/rendersystem/renderattrs.h:730 */
	void SetConstantBufferValue(CRenderAttributes* , CUtlStringToken, ConstantBufferHandle_t, uint32);
	/* ../public/rendersystem/renderattrs.h:735 */
	ConstantBufferAttr_t GetConstantBufferValue(const CRenderAttributes* , CUtlStringToken, ConstantBufferHandle_t, uint32);
	/* ../public/rendersystem/renderattrs.h:741 */
	bool GetConstantBufferValue(const CRenderAttributes* , ConstantBufferAttr_t* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:746 */
	void DeleteConstantBufferValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:751 */
	ConstantBufferAttr_t CopyConstantBufferValue(CRenderAttributes* , CUtlStringToken, CRenderAttributes& , ConstantBufferHandle_t, uint32);
	/* ../public/rendersystem/renderattrs.h:804 */
	void SetDescriptorSetValue(CRenderAttributes* , CUtlStringToken, RenderDescriptorSetHandle_t, int32, int32, int32, int32);
	/* ../public/rendersystem/renderattrs.h:810 */
	DescriptorSetAttr_t GetDescriptorSetValue(const CRenderAttributes* , CUtlStringToken, DescriptorSetAttr_t);
	/* ../public/rendersystem/renderattrs.h:816 */
	bool GetDescriptorSetValue(const CRenderAttributes* , DescriptorSetAttr_t* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:821 */
	void DeleteDescriptorSetValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:834 */
	void MoveToAnother(CRenderAttributes* , CRenderAttributes& );
	/* ../public/rendersystem/renderattrs.h:848 */
	void MergeTo(const CRenderAttributes* , CRenderAttributes& );
	/* ../public/rendersystem/renderattrs.h:861 */
	void SetParent(CRenderAttributes* , const CRenderAttributes* );
	/* ../public/rendersystem/renderattrs.h:890 */
	const CRenderAttributes* GetParent(const CRenderAttributes* );
	/* ../public/rendersystem/renderattrs.h:898 */
	void CRenderAttributes(CRenderAttributes* );
	/* ../public/rendersystem/renderattrs.h:902 */
	void ~CRenderAttributes(CRenderAttributes* );
private:
	/* ../public/rendersystem/renderattrs.h:912 */
	void SetAttr(CRenderAttributes* , CUtlStringToken, CSamplerStateDesc);
	/* ../public/rendersystem/renderattrs.h:913 */
	void SetAttr(CRenderAttributes* , CUtlStringToken, HRenderTexture);
	/* ../public/rendersystem/renderattrs.h:914 */
	void SetAttr(CRenderAttributes* , CUtlStringToken, HRenderTextureStrong);
	/* ../public/rendersystem/renderattrs.h:915 */
	void SetAttr(CRenderAttributes* , CUtlStringToken, float);
	/* ../public/rendersystem/renderattrs.h:916 */
	void SetAttr(CRenderAttributes* , CUtlStringToken, const Vector& );
	/* ../public/rendersystem/renderattrs.h:917 */
	void SetAttr(CRenderAttributes* , CUtlStringToken, const VMatrix& );
	/* ../public/rendersystem/renderattrs.h:918 */
	void SetAttr(CRenderAttributes* , CUtlStringToken, void* );
	/* ../public/rendersystem/renderattrs.h:919 */
	void SetAttr(CRenderAttributes* , CUtlStringToken, bool);
	CUtlAttributeList<Vector4D, 8, Vector4D, 4> m_vec4Attrs; /* 0 176 */
	CUtlAttributeList<VMatrix, 1, VMatrix, 2> m_matrix4x4Attrs; /* 176 96 */
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4> m_intAttrs; /* 272 176 */
	TextureAttrList_t m_textureAttrs; /* 448 176 */
	SamplerAttrList_t m_samplerAttrs; /* 624 208 */
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4> m_constantBufferAttrs; /* 832 96 */
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4> m_descriptorSetAttrs; /* 928 128 */
	CUtlAttributeList<void*, 4, void*, 4> m_ptrAttrs; /* 1056 64 */
	CUtlAttributeList<CUtlString, 2, CUtlString, 2> m_stringAttrs; /* 1120 48 */
	const class CRenderAttributes * m_pParent; /* 1168 8 */
	/* ../public/rendersystem/renderattrs.h:938 */
	void MergeToPtr(const CRenderAttributes* , CRenderAttributes* );
	const SamplerAttrList_t  & SamplerAttributes(const class CRenderAttributes  *); /* linkage=_ZNK17CRenderAttributes17SamplerAttributesEv */
	SamplerAttrList_t & SamplerAttributes(class CRenderAttributes *); /* linkage=_ZN17CRenderAttributes17SamplerAttributesEv */
	const TextureAttrList_t  & TextureAttributes(const class CRenderAttributes  *); /* linkage=_ZNK17CRenderAttributes17TextureAttributesEv */
	TextureAttrList_t & TextureAttributes(class CRenderAttributes *); /* linkage=_ZN17CRenderAttributes17TextureAttributesEv */
	/* <40287e2> ../public/rendersystem/renderattrs.h:113 */
	bool IsEmpty(const class CRenderAttributes  *); /* linkage=_ZNK17CRenderAttributes7IsEmptyEv */
	void Clear(class CRenderAttributes *, bool, bool); /* linkage=_ZN17CRenderAttributes5ClearEbb */
	void SetFloatValue(class CRenderAttributes *, class CUtlStringToken, float); /* linkage=_ZN17CRenderAttributes13SetFloatValueE15CUtlStringTokenf */
	float GetFloatValue(const class CRenderAttributes  *, class CUtlStringToken, float); /* linkage=_ZNK17CRenderAttributes13GetFloatValueE15CUtlStringTokenf */
	class QAngle GetQAngleValue(const class CRenderAttributes  *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes14GetQAngleValueE15CUtlStringToken */
	bool GetFloatValue(const class CRenderAttributes  *, float *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes13GetFloatValueEPf15CUtlStringToken */
	void DeleteFloatValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes16DeleteFloatValueE15CUtlStringToken */
	float CopyVectorFloatValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, float); /* linkage=_ZN17CRenderAttributes20CopyVectorFloatValueE15CUtlStringTokenRKS_f */
	void SetVector2DValue(class CRenderAttributes *, class CUtlStringToken, class Vector2D); /* linkage=_ZN17CRenderAttributes16SetVector2DValueE15CUtlStringToken8Vector2D */
	class Vector2D GetVector2DValue(const class CRenderAttributes  *, class CUtlStringToken, class Vector2D); /* linkage=_ZNK17CRenderAttributes16GetVector2DValueE15CUtlStringToken8Vector2D */
	bool GetVector2DValue(const class CRenderAttributes  *, class Vector2D *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes16GetVector2DValueEP8Vector2D15CUtlStringToken */
	void DeleteVector2DValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes19DeleteVector2DValueE15CUtlStringToken */
	class Vector2D CopyVector2DValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, class Vector2D); /* linkage=_ZN17CRenderAttributes17CopyVector2DValueE15CUtlStringTokenRKS_8Vector2D */
	void SetVectorValue(class CRenderAttributes *, class CUtlStringToken, class Vector); /* linkage=_ZN17CRenderAttributes14SetVectorValueE15CUtlStringToken6Vector */
	class Vector GetVectorValue(const class CRenderAttributes  *, class CUtlStringToken, class Vector); /* linkage=_ZNK17CRenderAttributes14GetVectorValueE15CUtlStringToken6Vector */
	bool GetVectorValue(const class CRenderAttributes  *, class Vector *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes14GetVectorValueEP6Vector15CUtlStringToken */
	void DeleteVectorValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes17DeleteVectorValueE15CUtlStringToken */
	class Vector CopyVectorValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, class Vector); /* linkage=_ZN17CRenderAttributes15CopyVectorValueE15CUtlStringTokenRKS_6Vector */
	void SetVector4DValue(class CRenderAttributes *, class CUtlStringToken, class Vector4D); /* linkage=_ZN17CRenderAttributes16SetVector4DValueE15CUtlStringToken8Vector4D */
	class Vector4D GetVector4DValue(const class CRenderAttributes  *, class CUtlStringToken, class Vector4D); /* linkage=_ZNK17CRenderAttributes16GetVector4DValueE15CUtlStringToken8Vector4D */
	bool GetVector4DValue(const class CRenderAttributes  *, class Vector4D *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes16GetVector4DValueEP8Vector4D15CUtlStringToken */
	void DeleteVector4DValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes19DeleteVector4DValueE15CUtlStringToken */
	class Vector4D CopyVector4DValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, class Vector4D); /* linkage=_ZN17CRenderAttributes17CopyVector4DValueE15CUtlStringTokenRKS_8Vector4D */
	void SetVMatrixValue(class CRenderAttributes *, class CUtlStringToken, class VMatrix); /* linkage=_ZN17CRenderAttributes15SetVMatrixValueE15CUtlStringToken7VMatrix */
	class VMatrix GetVMatrixValue(const class CRenderAttributes  *, class CUtlStringToken, class VMatrix); /* linkage=_ZNK17CRenderAttributes15GetVMatrixValueE15CUtlStringToken7VMatrix */
	bool GetVMatrixValue(const class CRenderAttributes  *, class VMatrix *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes15GetVMatrixValueEP7VMatrix15CUtlStringToken */
	void DeleteVMatrixValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes18DeleteVMatrixValueE15CUtlStringToken */
	class VMatrix CopyVMatrixValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, class VMatrix); /* linkage=_ZN17CRenderAttributes16CopyVMatrixValueE15CUtlStringTokenRKS_7VMatrix */
	void SetPtrValue(class CRenderAttributes *, class CUtlStringToken, void *); /* linkage=_ZN17CRenderAttributes11SetPtrValueE15CUtlStringTokenPv */
	void * GetPtrValue(const class CRenderAttributes  *, class CUtlStringToken, void *); /* linkage=_ZNK17CRenderAttributes11GetPtrValueE15CUtlStringTokenPv */
	bool GetPtrValue(const class CRenderAttributes  *, void * *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes11GetPtrValueEPPv15CUtlStringToken */
	void DeletePtrValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes14DeletePtrValueE15CUtlStringToken */
	void * CopyPtrValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, void *); /* linkage=_ZN17CRenderAttributes12CopyPtrValueE15CUtlStringTokenRKS_Pv */
	void SetBufferValue(class CRenderAttributes *, class CUtlStringToken, IndexBufferHandle_t); /* linkage=_ZN17CRenderAttributes14SetBufferValueE15CUtlStringTokenP21IndexBufferHandle_t__ */
	void SetBufferValue(class CRenderAttributes *, class CUtlStringToken, VertexBufferHandle_t); /* linkage=_ZN17CRenderAttributes14SetBufferValueE15CUtlStringTokenP22VertexBufferHandle_t__ */
	void SetBufferValue(class CRenderAttributes *, class CUtlStringToken, RenderBufferHandle_t); /* linkage=_ZN17CRenderAttributes14SetBufferValueE15CUtlStringTokenP22RenderBufferHandle_t__ */
	void SetStringValue(class CRenderAttributes *, class CUtlStringToken, const char  *); /* linkage=_ZN17CRenderAttributes14SetStringValueE15CUtlStringTokenPKc */
	bool GetStringValue(const class CRenderAttributes  *, class CUtlString *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes14GetStringValueEP10CUtlString15CUtlStringToken */
	void DeleteStringValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes17DeleteStringValueE15CUtlStringToken */
	void SetIntVector4DValue(class CRenderAttributes *, class CUtlStringToken, int, int, int, int); /* linkage=_ZN17CRenderAttributes19SetIntVector4DValueE15CUtlStringTokeniiii */
	class IntVector4D GetIntVector4DValue(const class CRenderAttributes  *, class CUtlStringToken, class IntVector4D); /* linkage=_ZNK17CRenderAttributes19GetIntVector4DValueE15CUtlStringToken11IntVector4D */
	bool GetIntVector4DValue(const class CRenderAttributes  *, class IntVector4D *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes19GetIntVector4DValueEP11IntVector4D15CUtlStringToken */
	void SetIntValue(class CRenderAttributes *, class CUtlStringToken, int); /* linkage=_ZN17CRenderAttributes11SetIntValueE15CUtlStringTokeni */
	int GetIntValue(const class CRenderAttributes  *, class CUtlStringToken, int); /* linkage=_ZNK17CRenderAttributes11GetIntValueE15CUtlStringTokeni */
	bool GetIntValue(const class CRenderAttributes  *, int *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes11GetIntValueEPi15CUtlStringToken */
	void DeleteIntValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes14DeleteIntValueE15CUtlStringToken */
	int CopyIntValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, int); /* linkage=_ZN17CRenderAttributes12CopyIntValueE15CUtlStringTokenRKS_i */
	void SetComboValue(class CRenderAttributes *, class CUtlStringToken, uint8); /* linkage=_ZN17CRenderAttributes13SetComboValueE15CUtlStringTokenh */
	uint8 GetComboValue(const class CRenderAttributes  *, class CUtlStringToken, uint8); /* linkage=_ZNK17CRenderAttributes13GetComboValueE15CUtlStringTokenh */
	bool GetComboValue(const class CRenderAttributes  *, uint8 *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes13GetComboValueEPh15CUtlStringToken */
	uint8 CopyComboValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, uint8); /* linkage=_ZN17CRenderAttributes14CopyComboValueE15CUtlStringTokenRKS_h */
	void DeleteComboValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes16DeleteComboValueE15CUtlStringToken */
	void SetBoolValue(class CRenderAttributes *, class CUtlStringToken, bool); /* linkage=_ZN17CRenderAttributes12SetBoolValueE15CUtlStringTokenb */
	bool GetBoolValue(const class CRenderAttributes  *, class CUtlStringToken, bool); /* linkage=_ZNK17CRenderAttributes12GetBoolValueE15CUtlStringTokenb */
	bool GetBoolValue(const class CRenderAttributes  *, bool *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes12GetBoolValueEPb15CUtlStringToken */
	void DeleteBoolValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes15DeleteBoolValueE15CUtlStringToken */
	void SetSamplerValue(class CRenderAttributes *, class CUtlStringToken, class CSamplerStateDesc); /* linkage=_ZN17CRenderAttributes15SetSamplerValueE15CUtlStringToken17CSamplerStateDesc */
	class CSamplerStateDescBase GetSamplerValue(const class CRenderAttributes  *, class CUtlStringToken, class CSamplerStateDesc); /* linkage=_ZNK17CRenderAttributes15GetSamplerValueE15CUtlStringToken17CSamplerStateDesc */
	bool GetSamplerValueToBind(const class CRenderAttributes  *, class SamplerAttr_t &, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes21GetSamplerValueToBindERNS_13SamplerAttr_tE15CUtlStringToken */
	void SetTextureValue(class CRenderAttributes *, class CUtlStringToken, HRenderTexture, int32); /* linkage=_ZN17CRenderAttributes15SetTextureValueE15CUtlStringToken11CWeakHandleI31InfoForResourceTypeCTextureBaseEi */
	HRenderTexture GetTextureValue(const class CRenderAttributes  *, class CUtlStringToken, HRenderTexture); /* linkage=_ZNK17CRenderAttributes15GetTextureValueE15CUtlStringToken11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	HRenderTexture GetFirstTexture(const class CRenderAttributes  *); /* linkage=_ZNK17CRenderAttributes15GetFirstTextureEv */
	bool GetTextureValue(const class CRenderAttributes  *, HRenderTexture *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes15GetTextureValueEP11CWeakHandleI31InfoForResourceTypeCTextureBaseE15CUtlStringToken */
	bool GetTextureValueAndMipLevelToBind(const class CRenderAttributes  *, class TextureAttr_t &, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes32GetTextureValueAndMipLevelToBindERNS_13TextureAttr_tE15CUtlStringToken */
	const class TextureAttrForStorage_t  * GetTextureValueAndMipLevelToBind(const class CRenderAttributes  *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes32GetTextureValueAndMipLevelToBindE15CUtlStringToken */
	bool GetTextureValueAndMipLevelToBind(const class CRenderAttributes  *, HRenderTexture *, int *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes32GetTextureValueAndMipLevelToBindEP11CWeakHandleI31InfoForResourceTypeCTextureBaseEPi15CUtlStringToken */
	void DeleteTextureValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes18DeleteTextureValueE15CUtlStringToken */
	HRenderTexture CopyTextureValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, HRenderTexture); /* linkage=_ZN17CRenderAttributes16CopyTextureValueE15CUtlStringTokenRKS_11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	void SetConstantBufferValue(class CRenderAttributes *, class CUtlStringToken, ConstantBufferHandle_t, uint32); /* linkage=_ZN17CRenderAttributes22SetConstantBufferValueE15CUtlStringTokenP24ConstantBufferHandle_t__j */
	class ConstantBufferAttr_t GetConstantBufferValue(const class CRenderAttributes  *, class CUtlStringToken, ConstantBufferHandle_t, uint32); /* linkage=_ZNK17CRenderAttributes22GetConstantBufferValueE15CUtlStringTokenP24ConstantBufferHandle_t__j */
	bool GetConstantBufferValue(const class CRenderAttributes  *, class ConstantBufferAttr_t *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes22GetConstantBufferValueEPNS_20ConstantBufferAttr_tE15CUtlStringToken */
	void DeleteConstantBufferValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes25DeleteConstantBufferValueE15CUtlStringToken */
	class ConstantBufferAttr_t CopyConstantBufferValue(class CRenderAttributes *, class CUtlStringToken, class CRenderAttributes &, ConstantBufferHandle_t, uint32); /* linkage=_ZN17CRenderAttributes23CopyConstantBufferValueE15CUtlStringTokenRS_P24ConstantBufferHandle_t__j */
	void SetDescriptorSetValue(class CRenderAttributes *, class CUtlStringToken, RenderDescriptorSetHandle_t, int32, int32, int32, int32); /* linkage=_ZN17CRenderAttributes21SetDescriptorSetValueE15CUtlStringTokenP29RenderDescriptorSetHandle_t__iiii */
	class DescriptorSetAttr_t GetDescriptorSetValue(const class CRenderAttributes  *, class CUtlStringToken, class DescriptorSetAttr_t); /* linkage=_ZNK17CRenderAttributes21GetDescriptorSetValueE15CUtlStringTokenNS_19DescriptorSetAttr_tE */
	bool GetDescriptorSetValue(const class CRenderAttributes  *, class DescriptorSetAttr_t *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes21GetDescriptorSetValueEPNS_19DescriptorSetAttr_tE15CUtlStringToken */
	void DeleteDescriptorSetValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes24DeleteDescriptorSetValueE15CUtlStringToken */
	void MoveToAnother(class CRenderAttributes *, class CRenderAttributes &); /* linkage=_ZN17CRenderAttributes13MoveToAnotherERS_ */
	void MergeTo(const class CRenderAttributes  *, class CRenderAttributes &); /* linkage=_ZNK17CRenderAttributes7MergeToERS_ */
	void SetParent(class CRenderAttributes *, const class CRenderAttributes  *); /* linkage=_ZN17CRenderAttributes9SetParentEPKS_ */
	const class CRenderAttributes  * GetParent(const class CRenderAttributes  *); /* linkage=_ZNK17CRenderAttributes9GetParentEv */
	void CRenderAttributes(class CRenderAttributes *); /* linkage=_ZN17CRenderAttributesC4Ev */
	void ~CRenderAttributes(class CRenderAttributes *); /* linkage=_ZN17CRenderAttributesD4Ev */
	void SetAttr(class CRenderAttributes *, class CUtlStringToken, class CSamplerStateDesc); /* linkage=_ZN17CRenderAttributes7SetAttrE15CUtlStringToken17CSamplerStateDesc */
	void SetAttr(class CRenderAttributes *, class CUtlStringToken, HRenderTexture); /* linkage=_ZN17CRenderAttributes7SetAttrE15CUtlStringToken11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	void SetAttr(class CRenderAttributes *, class CUtlStringToken, HRenderTextureStrong); /* linkage=_ZN17CRenderAttributes7SetAttrE15CUtlStringToken13CStrongHandleI31InfoForResourceTypeCTextureBaseE */
	void SetAttr(class CRenderAttributes *, class CUtlStringToken, float); /* linkage=_ZN17CRenderAttributes7SetAttrE15CUtlStringTokenf */
	void SetAttr(class CRenderAttributes *, class CUtlStringToken, const class Vector  &); /* linkage=_ZN17CRenderAttributes7SetAttrE15CUtlStringTokenRK6Vector */
	void SetAttr(class CRenderAttributes *, class CUtlStringToken, const class VMatrix  &); /* linkage=_ZN17CRenderAttributes7SetAttrE15CUtlStringTokenRK7VMatrix */
	void SetAttr(class CRenderAttributes *, class CUtlStringToken, void *); /* linkage=_ZN17CRenderAttributes7SetAttrE15CUtlStringTokenPv */
	void SetAttr(class CRenderAttributes *, class CUtlStringToken, bool); /* linkage=_ZN17CRenderAttributes7SetAttrE15CUtlStringTokenb */
	void MergeToPtr(const class CRenderAttributes  *, class CRenderAttributes *); /* linkage=_ZNK17CRenderAttributes10MergeToPtrEPS_ */
};

// <01183170> ../public/rendersystem/renderattrs.h:20
// member functions: 218
// member variables: 10
// class size: 1,184
class CRenderAttributes {
	/* ../public/rendersystem/renderattrs.h:26 */
	struct SamplerAttrForStorage_t {
		CSamplerStateDesc samplerDesc; /* 0 20 */
		/* ../public/rendersystem/renderattrs.h:30 */
		void SamplerAttrForStorage_t(SamplerAttrForStorage_t* );
		/* ../public/rendersystem/renderattrs.h:33 */
		void SamplerAttrForStorage_t(SamplerAttrForStorage_t* , const CSamplerStateDesc& );
		/* ../public/rendersystem/renderattrs.h:37 */
		void SamplerAttrForStorage_t(SamplerAttrForStorage_t* , const SamplerAttr_t& );
		/* ../public/rendersystem/renderattrs.h:44 */
		SamplerAttrForStorage_t& operator=(SamplerAttrForStorage_t* , const SamplerAttr_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/rendersystem/renderattrs.h:47 */
	struct SamplerAttr_t {
		CSamplerStateDesc samplerDesc; /* 0 20 */
		/* ../public/rendersystem/renderattrs.h:50 */
		void SamplerAttr_t(SamplerAttr_t* );
		/* ../public/rendersystem/renderattrs.h:53 */
		void SamplerAttr_t(SamplerAttr_t* , const CSamplerStateDesc& );
		/* ../public/rendersystem/renderattrs.h:57 */
		void SamplerAttr_t(SamplerAttr_t* , const SamplerAttrForStorage_t& );
		/* ../public/rendersystem/renderattrs.h:64 */
		SamplerAttr_t& operator=(SamplerAttr_t* , const SamplerAttrForStorage_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/rendersystem/renderattrs.h:74 */
	struct TextureAttrForStorage_t {
		/* ../public/rendersystem/renderattrs.h:76 */
		void TextureAttrForStorage_t(TextureAttrForStorage_t* );
		/* ../public/rendersystem/renderattrs.h:77 */
		void TextureAttrForStorage_t(TextureAttrForStorage_t* , HRenderTexture, int32);
		/* ../public/rendersystem/renderattrs.h:78 */
		void TextureAttrForStorage_t(TextureAttrForStorage_t* , const TextureAttr_t& );
		HRenderTexture texture; /* 0 8 */
		int32 nSpecificMipLevelToBind; /* 8 4 */
		/* ../public/rendersystem/renderattrs.h:82 */
		TextureAttrForStorage_t& operator=(TextureAttrForStorage_t* , const TextureAttr_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/rendersystem/renderattrs.h:90 */
	struct TextureAttr_t {
		/* ../public/rendersystem/renderattrs.h:92 */
		void TextureAttr_t(TextureAttr_t* );
		/* ../public/rendersystem/renderattrs.h:93 */
		void TextureAttr_t(TextureAttr_t* , HRenderTexture, int32);
		/* ../public/rendersystem/renderattrs.h:94 */
		void TextureAttr_t(TextureAttr_t* , const TextureAttrForStorage_t& );
		HRenderTexture texture; /* 0 8 */
		int32 nSpecificMipLevelToBind; /* 8 4 */
		/* ../public/rendersystem/renderattrs.h:103 */
		TextureAttr_t& operator=(TextureAttr_t* , const TextureAttrForStorage_t& );
		void TextureAttr_t(TextureAttr_t* , TextureAttr_t& );
		void TextureAttr_t(TextureAttr_t* , const TextureAttr_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/rendersystem/renderattrs.h:709 */
	struct ConstantBufferAttr_t {
		/* ../public/rendersystem/renderattrs.h:711 */
		void ConstantBufferAttr_t(ConstantBufferAttr_t* );
		/* ../public/rendersystem/renderattrs.h:712 */
		void ConstantBufferAttr_t(ConstantBufferAttr_t* , ConstantBufferHandle_t, uint32);
		/* ../public/rendersystem/renderattrs.h:713 */
		void ConstantBufferAttr_t(ConstantBufferAttr_t* , const ConstantBufferAttr_t& );
		ConstantBufferHandle_t hBuffer; /* 0 8 */
		uint32 nView; /* 8 4 */
		/* ../public/rendersystem/renderattrs.h:722 */
		ConstantBufferAttr_t& operator=(ConstantBufferAttr_t* , const ConstantBufferAttr_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/rendersystem/renderattrs.h:766 */
	struct DescriptorSetAttr_t {
		/* ../public/rendersystem/renderattrs.h:768 */
		void DescriptorSetAttr_t(DescriptorSetAttr_t* );
		/* ../public/rendersystem/renderattrs.h:769 */
		void DescriptorSetAttr_t(DescriptorSetAttr_t* , RenderDescriptorSetHandle_t, int32, int32, int32, int32);
		/* ../public/rendersystem/renderattrs.h:777 */
		void DescriptorSetAttr_t(DescriptorSetAttr_t* , const DescriptorSetAttr_t& );
		RenderDescriptorSetHandle_t hDescriptorSet; /* 0 8 */
		int32 nCbufferOffsets[4]; /* 8 16 */
		/* ../public/rendersystem/renderattrs.h:793 */
		DescriptorSetAttr_t& operator=(DescriptorSetAttr_t* , const DescriptorSetAttr_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/rendersystem/renderattrs.h:67 */
	typedef struct CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8> SamplerAttrList_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/rendersystem/renderattrs.h:69 */
	const SamplerAttrList_t& SamplerAttributes(const CRenderAttributes* );
	/* ../public/rendersystem/renderattrs.h:70 */
	SamplerAttrList_t& SamplerAttributes(CRenderAttributes* );
	/* ../public/rendersystem/renderattrs.h:106 */
	typedef struct CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8> TextureAttrList_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/rendersystem/renderattrs.h:109 */
	const TextureAttrList_t& TextureAttributes(const CRenderAttributes* );
	/* ../public/rendersystem/renderattrs.h:110 */
	TextureAttrList_t& TextureAttributes(CRenderAttributes* );
	/* ../public/rendersystem/renderattrs.h:113 */
	bool IsEmpty(const CRenderAttributes* );
	/* ../public/rendersystem/renderattrs.h:126 */
	void Clear(CRenderAttributes* , bool, bool);
	/* ../public/rendersystem/renderattrs.h:146 */
	void SetFloatValue(CRenderAttributes* , CUtlStringToken, float);
	/* ../public/rendersystem/renderattrs.h:151 */
	float GetFloatValue(const CRenderAttributes* , CUtlStringToken, float);
	/* ../public/rendersystem/renderattrs.h:156 */
	QAngle GetQAngleValue(const CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:163 */
	bool GetFloatValue(const CRenderAttributes* , float* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:178 */
	void DeleteFloatValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:183 */
	float CopyVectorFloatValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , float);
	/* ../public/rendersystem/renderattrs.h:193 */
	void SetVector2DValue(CRenderAttributes* , CUtlStringToken, Vector2D);
	/* ../public/rendersystem/renderattrs.h:198 */
	Vector2D GetVector2DValue(const CRenderAttributes* , CUtlStringToken, Vector2D);
	/* ../public/rendersystem/renderattrs.h:204 */
	bool GetVector2DValue(const CRenderAttributes* , Vector2D* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:219 */
	void DeleteVector2DValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:224 */
	Vector2D CopyVector2DValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , Vector2D);
	/* ../public/rendersystem/renderattrs.h:234 */
	void SetVectorValue(CRenderAttributes* , CUtlStringToken, Vector);
	/* ../public/rendersystem/renderattrs.h:239 */
	Vector GetVectorValue(const CRenderAttributes* , CUtlStringToken, Vector);
	/* ../public/rendersystem/renderattrs.h:245 */
	bool GetVectorValue(const CRenderAttributes* , Vector* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:260 */
	void DeleteVectorValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:265 */
	Vector CopyVectorValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , Vector);
	/* ../public/rendersystem/renderattrs.h:275 */
	void SetVector4DValue(CRenderAttributes* , CUtlStringToken, Vector4D);
	/* ../public/rendersystem/renderattrs.h:280 */
	Vector4D GetVector4DValue(const CRenderAttributes* , CUtlStringToken, Vector4D);
	/* ../public/rendersystem/renderattrs.h:286 */
	bool GetVector4DValue(const CRenderAttributes* , Vector4D* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:291 */
	void DeleteVector4DValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:296 */
	Vector4D CopyVector4DValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , Vector4D);
	/* ../public/rendersystem/renderattrs.h:311 */
	void SetVMatrixValue(CRenderAttributes* , CUtlStringToken, VMatrix);
	/* ../public/rendersystem/renderattrs.h:316 */
	VMatrix GetVMatrixValue(const CRenderAttributes* , CUtlStringToken, VMatrix);
	/* ../public/rendersystem/renderattrs.h:322 */
	bool GetVMatrixValue(const CRenderAttributes* , VMatrix* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:327 */
	void DeleteVMatrixValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:332 */
	VMatrix CopyVMatrixValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , VMatrix);
	/* ../public/rendersystem/renderattrs.h:347 */
	void SetPtrValue(CRenderAttributes* , CUtlStringToken, void* );
	/* ../public/rendersystem/renderattrs.h:352 */
	void* GetPtrValue(const CRenderAttributes* , CUtlStringToken, void* );
	/* ../public/rendersystem/renderattrs.h:358 */
	bool GetPtrValue(const CRenderAttributes* , void** , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:363 */
	void DeletePtrValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:368 */
	void* CopyPtrValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , void* );
	/* ../public/rendersystem/renderattrs.h:383 */
	void SetBufferValue(CRenderAttributes* , CUtlStringToken, IndexBufferHandle_t);
	/* ../public/rendersystem/renderattrs.h:391 */
	void SetBufferValue(CRenderAttributes* , CUtlStringToken, VertexBufferHandle_t);
	/* ../public/rendersystem/renderattrs.h:396 */
	void SetBufferValue(CRenderAttributes* , CUtlStringToken, RenderBufferHandle_t);
	/* ../public/rendersystem/renderattrs.h:404 */
	void SetStringValue(CRenderAttributes* , CUtlStringToken, const char* );
	/* ../public/rendersystem/renderattrs.h:410 */
	bool GetStringValue(const CRenderAttributes* , CUtlString* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:415 */
	void DeleteStringValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:425 */
	void SetIntVector4DValue(CRenderAttributes* , CUtlStringToken, int, int, int, int);
	/* ../public/rendersystem/renderattrs.h:430 */
	IntVector4D GetIntVector4DValue(const CRenderAttributes* , CUtlStringToken, IntVector4D);
	/* ../public/rendersystem/renderattrs.h:435 */
	bool GetIntVector4DValue(const CRenderAttributes* , IntVector4D* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:450 */
	void SetIntValue(CRenderAttributes* , CUtlStringToken, int);
	/* ../public/rendersystem/renderattrs.h:459 */
	int GetIntValue(const CRenderAttributes* , CUtlStringToken, int);
	/* ../public/rendersystem/renderattrs.h:469 */
	bool GetIntValue(const CRenderAttributes* , int* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:485 */
	void DeleteIntValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:494 */
	int CopyIntValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , int);
	/* ../public/rendersystem/renderattrs.h:510 */
	void SetComboValue(CRenderAttributes* , CUtlStringToken, uint8);
	/* ../public/rendersystem/renderattrs.h:518 */
	uint8 GetComboValue(const CRenderAttributes* , CUtlStringToken, uint8);
	/* ../public/rendersystem/renderattrs.h:529 */
	bool GetComboValue(const CRenderAttributes* , uint8* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:546 */
	uint8 CopyComboValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , uint8);
	/* ../public/rendersystem/renderattrs.h:553 */
	void DeleteComboValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:569 */
	void SetBoolValue(CRenderAttributes* , CUtlStringToken, bool);
	/* ../public/rendersystem/renderattrs.h:574 */
	bool GetBoolValue(const CRenderAttributes* , CUtlStringToken, bool);
	/* ../public/rendersystem/renderattrs.h:579 */
	bool GetBoolValue(const CRenderAttributes* , bool* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:590 */
	void DeleteBoolValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:598 */
	void SetSamplerValue(CRenderAttributes* , CUtlStringToken, CSamplerStateDesc);
	/* ../public/rendersystem/renderattrs.h:603 */
	CSamplerStateDescBase GetSamplerValue(const CRenderAttributes* , CUtlStringToken, CSamplerStateDesc);
	/* ../public/rendersystem/renderattrs.h:609 */
	bool GetSamplerValueToBind(const CRenderAttributes* , SamplerAttr_t& , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:617 */
	void SetTextureValue(CRenderAttributes* , CUtlStringToken, HRenderTexture, int32);
	/* ../public/rendersystem/renderattrs.h:622 */
	HRenderTexture GetTextureValue(const CRenderAttributes* , CUtlStringToken, HRenderTexture);
	/* ../public/rendersystem/renderattrs.h:629 */
	HRenderTexture GetFirstTexture(const CRenderAttributes* );
	/* ../public/rendersystem/renderattrs.h:646 */
	bool GetTextureValue(const CRenderAttributes* , HRenderTexture* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:660 */
	bool GetTextureValueAndMipLevelToBind(const CRenderAttributes* , TextureAttr_t& , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:665 */
	const TextureAttrForStorage_t* GetTextureValueAndMipLevelToBind(const CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:671 */
	bool GetTextureValueAndMipLevelToBind(const CRenderAttributes* , HRenderTexture* , int* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:689 */
	void DeleteTextureValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:694 */
	HRenderTexture CopyTextureValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , HRenderTexture);
	/* ../public/rendersystem/renderattrs.h:730 */
	void SetConstantBufferValue(CRenderAttributes* , CUtlStringToken, ConstantBufferHandle_t, uint32);
	/* ../public/rendersystem/renderattrs.h:735 */
	ConstantBufferAttr_t GetConstantBufferValue(const CRenderAttributes* , CUtlStringToken, ConstantBufferHandle_t, uint32);
	/* ../public/rendersystem/renderattrs.h:741 */
	bool GetConstantBufferValue(const CRenderAttributes* , ConstantBufferAttr_t* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:746 */
	void DeleteConstantBufferValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:751 */
	ConstantBufferAttr_t CopyConstantBufferValue(CRenderAttributes* , CUtlStringToken, CRenderAttributes& , ConstantBufferHandle_t, uint32);
	/* ../public/rendersystem/renderattrs.h:804 */
	void SetDescriptorSetValue(CRenderAttributes* , CUtlStringToken, RenderDescriptorSetHandle_t, int32, int32, int32, int32);
	/* ../public/rendersystem/renderattrs.h:810 */
	DescriptorSetAttr_t GetDescriptorSetValue(const CRenderAttributes* , CUtlStringToken, DescriptorSetAttr_t);
	/* ../public/rendersystem/renderattrs.h:816 */
	bool GetDescriptorSetValue(const CRenderAttributes* , DescriptorSetAttr_t* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:821 */
	void DeleteDescriptorSetValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:834 */
	void MoveToAnother(CRenderAttributes* , CRenderAttributes& );
	/* ../public/rendersystem/renderattrs.h:848 */
	void MergeTo(const CRenderAttributes* , CRenderAttributes& );
	/* ../public/rendersystem/renderattrs.h:861 */
	void SetParent(CRenderAttributes* , const CRenderAttributes* );
	/* ../public/rendersystem/renderattrs.h:890 */
	const CRenderAttributes* GetParent(const CRenderAttributes* );
	/* ../public/rendersystem/renderattrs.h:898 */
	void CRenderAttributes(CRenderAttributes* );
	/* ../public/rendersystem/renderattrs.h:902 */
	void ~CRenderAttributes(CRenderAttributes* );
private:
	/* ../public/rendersystem/renderattrs.h:912 */
	void SetAttr(CRenderAttributes* , CUtlStringToken, CSamplerStateDesc);
	/* ../public/rendersystem/renderattrs.h:913 */
	void SetAttr(CRenderAttributes* , CUtlStringToken, HRenderTexture);
	/* ../public/rendersystem/renderattrs.h:914 */
	void SetAttr(CRenderAttributes* , CUtlStringToken, HRenderTextureStrong);
	/* ../public/rendersystem/renderattrs.h:915 */
	void SetAttr(CRenderAttributes* , CUtlStringToken, float);
	/* ../public/rendersystem/renderattrs.h:916 */
	void SetAttr(CRenderAttributes* , CUtlStringToken, const Vector& );
	/* ../public/rendersystem/renderattrs.h:917 */
	void SetAttr(CRenderAttributes* , CUtlStringToken, const VMatrix& );
	/* ../public/rendersystem/renderattrs.h:918 */
	void SetAttr(CRenderAttributes* , CUtlStringToken, void* );
	/* ../public/rendersystem/renderattrs.h:919 */
	void SetAttr(CRenderAttributes* , CUtlStringToken, bool);
	CUtlAttributeList<Vector4D, 8, Vector4D, 4> m_vec4Attrs; /* 0 176 */
	CUtlAttributeList<VMatrix, 1, VMatrix, 2> m_matrix4x4Attrs; /* 176 96 */
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4> m_intAttrs; /* 272 176 */
	TextureAttrList_t m_textureAttrs; /* 448 176 */
	SamplerAttrList_t m_samplerAttrs; /* 624 208 */
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4> m_constantBufferAttrs; /* 832 96 */
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4> m_descriptorSetAttrs; /* 928 128 */
	CUtlAttributeList<void*, 4, void*, 4> m_ptrAttrs; /* 1056 64 */
	CUtlAttributeList<CUtlString, 2, CUtlString, 2> m_stringAttrs; /* 1120 48 */
	const class CRenderAttributes * m_pParent; /* 1168 8 */
	/* ../public/rendersystem/renderattrs.h:938 */
	void MergeToPtr(const CRenderAttributes* , CRenderAttributes* );
	const SamplerAttrList_t  & SamplerAttributes(const class CRenderAttributes  *); /* linkage=_ZNK17CRenderAttributes17SamplerAttributesEv */
	SamplerAttrList_t & SamplerAttributes(class CRenderAttributes *); /* linkage=_ZN17CRenderAttributes17SamplerAttributesEv */
	const TextureAttrList_t  & TextureAttributes(const class CRenderAttributes  *); /* linkage=_ZNK17CRenderAttributes17TextureAttributesEv */
	TextureAttrList_t & TextureAttributes(class CRenderAttributes *); /* linkage=_ZN17CRenderAttributes17TextureAttributesEv */
	/* <40287e2> ../public/rendersystem/renderattrs.h:113 */
	bool IsEmpty(const class CRenderAttributes  *); /* linkage=_ZNK17CRenderAttributes7IsEmptyEv */
	void Clear(class CRenderAttributes *, bool, bool); /* linkage=_ZN17CRenderAttributes5ClearEbb */
	void SetFloatValue(class CRenderAttributes *, class CUtlStringToken, float); /* linkage=_ZN17CRenderAttributes13SetFloatValueE15CUtlStringTokenf */
	float GetFloatValue(const class CRenderAttributes  *, class CUtlStringToken, float); /* linkage=_ZNK17CRenderAttributes13GetFloatValueE15CUtlStringTokenf */
	class QAngle GetQAngleValue(const class CRenderAttributes  *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes14GetQAngleValueE15CUtlStringToken */
	bool GetFloatValue(const class CRenderAttributes  *, float *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes13GetFloatValueEPf15CUtlStringToken */
	void DeleteFloatValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes16DeleteFloatValueE15CUtlStringToken */
	float CopyVectorFloatValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, float); /* linkage=_ZN17CRenderAttributes20CopyVectorFloatValueE15CUtlStringTokenRKS_f */
	void SetVector2DValue(class CRenderAttributes *, class CUtlStringToken, class Vector2D); /* linkage=_ZN17CRenderAttributes16SetVector2DValueE15CUtlStringToken8Vector2D */
	class Vector2D GetVector2DValue(const class CRenderAttributes  *, class CUtlStringToken, class Vector2D); /* linkage=_ZNK17CRenderAttributes16GetVector2DValueE15CUtlStringToken8Vector2D */
	bool GetVector2DValue(const class CRenderAttributes  *, class Vector2D *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes16GetVector2DValueEP8Vector2D15CUtlStringToken */
	void DeleteVector2DValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes19DeleteVector2DValueE15CUtlStringToken */
	class Vector2D CopyVector2DValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, class Vector2D); /* linkage=_ZN17CRenderAttributes17CopyVector2DValueE15CUtlStringTokenRKS_8Vector2D */
	void SetVectorValue(class CRenderAttributes *, class CUtlStringToken, class Vector); /* linkage=_ZN17CRenderAttributes14SetVectorValueE15CUtlStringToken6Vector */
	class Vector GetVectorValue(const class CRenderAttributes  *, class CUtlStringToken, class Vector); /* linkage=_ZNK17CRenderAttributes14GetVectorValueE15CUtlStringToken6Vector */
	bool GetVectorValue(const class CRenderAttributes  *, class Vector *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes14GetVectorValueEP6Vector15CUtlStringToken */
	void DeleteVectorValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes17DeleteVectorValueE15CUtlStringToken */
	class Vector CopyVectorValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, class Vector); /* linkage=_ZN17CRenderAttributes15CopyVectorValueE15CUtlStringTokenRKS_6Vector */
	void SetVector4DValue(class CRenderAttributes *, class CUtlStringToken, class Vector4D); /* linkage=_ZN17CRenderAttributes16SetVector4DValueE15CUtlStringToken8Vector4D */
	class Vector4D GetVector4DValue(const class CRenderAttributes  *, class CUtlStringToken, class Vector4D); /* linkage=_ZNK17CRenderAttributes16GetVector4DValueE15CUtlStringToken8Vector4D */
	bool GetVector4DValue(const class CRenderAttributes  *, class Vector4D *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes16GetVector4DValueEP8Vector4D15CUtlStringToken */
	void DeleteVector4DValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes19DeleteVector4DValueE15CUtlStringToken */
	class Vector4D CopyVector4DValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, class Vector4D); /* linkage=_ZN17CRenderAttributes17CopyVector4DValueE15CUtlStringTokenRKS_8Vector4D */
	void SetVMatrixValue(class CRenderAttributes *, class CUtlStringToken, class VMatrix); /* linkage=_ZN17CRenderAttributes15SetVMatrixValueE15CUtlStringToken7VMatrix */
	class VMatrix GetVMatrixValue(const class CRenderAttributes  *, class CUtlStringToken, class VMatrix); /* linkage=_ZNK17CRenderAttributes15GetVMatrixValueE15CUtlStringToken7VMatrix */
	bool GetVMatrixValue(const class CRenderAttributes  *, class VMatrix *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes15GetVMatrixValueEP7VMatrix15CUtlStringToken */
	void DeleteVMatrixValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes18DeleteVMatrixValueE15CUtlStringToken */
	class VMatrix CopyVMatrixValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, class VMatrix); /* linkage=_ZN17CRenderAttributes16CopyVMatrixValueE15CUtlStringTokenRKS_7VMatrix */
	void SetPtrValue(class CRenderAttributes *, class CUtlStringToken, void *); /* linkage=_ZN17CRenderAttributes11SetPtrValueE15CUtlStringTokenPv */
	void * GetPtrValue(const class CRenderAttributes  *, class CUtlStringToken, void *); /* linkage=_ZNK17CRenderAttributes11GetPtrValueE15CUtlStringTokenPv */
	bool GetPtrValue(const class CRenderAttributes  *, void * *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes11GetPtrValueEPPv15CUtlStringToken */
	void DeletePtrValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes14DeletePtrValueE15CUtlStringToken */
	void * CopyPtrValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, void *); /* linkage=_ZN17CRenderAttributes12CopyPtrValueE15CUtlStringTokenRKS_Pv */
	void SetBufferValue(class CRenderAttributes *, class CUtlStringToken, IndexBufferHandle_t); /* linkage=_ZN17CRenderAttributes14SetBufferValueE15CUtlStringTokenP21IndexBufferHandle_t__ */
	void SetBufferValue(class CRenderAttributes *, class CUtlStringToken, VertexBufferHandle_t); /* linkage=_ZN17CRenderAttributes14SetBufferValueE15CUtlStringTokenP22VertexBufferHandle_t__ */
	void SetBufferValue(class CRenderAttributes *, class CUtlStringToken, RenderBufferHandle_t); /* linkage=_ZN17CRenderAttributes14SetBufferValueE15CUtlStringTokenP22RenderBufferHandle_t__ */
	void SetStringValue(class CRenderAttributes *, class CUtlStringToken, const char  *); /* linkage=_ZN17CRenderAttributes14SetStringValueE15CUtlStringTokenPKc */
	bool GetStringValue(const class CRenderAttributes  *, class CUtlString *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes14GetStringValueEP10CUtlString15CUtlStringToken */
	void DeleteStringValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes17DeleteStringValueE15CUtlStringToken */
	void SetIntVector4DValue(class CRenderAttributes *, class CUtlStringToken, int, int, int, int); /* linkage=_ZN17CRenderAttributes19SetIntVector4DValueE15CUtlStringTokeniiii */
	class IntVector4D GetIntVector4DValue(const class CRenderAttributes  *, class CUtlStringToken, class IntVector4D); /* linkage=_ZNK17CRenderAttributes19GetIntVector4DValueE15CUtlStringToken11IntVector4D */
	bool GetIntVector4DValue(const class CRenderAttributes  *, class IntVector4D *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes19GetIntVector4DValueEP11IntVector4D15CUtlStringToken */
	void SetIntValue(class CRenderAttributes *, class CUtlStringToken, int); /* linkage=_ZN17CRenderAttributes11SetIntValueE15CUtlStringTokeni */
	int GetIntValue(const class CRenderAttributes  *, class CUtlStringToken, int); /* linkage=_ZNK17CRenderAttributes11GetIntValueE15CUtlStringTokeni */
	bool GetIntValue(const class CRenderAttributes  *, int *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes11GetIntValueEPi15CUtlStringToken */
	void DeleteIntValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes14DeleteIntValueE15CUtlStringToken */
	int CopyIntValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, int); /* linkage=_ZN17CRenderAttributes12CopyIntValueE15CUtlStringTokenRKS_i */
	void SetComboValue(class CRenderAttributes *, class CUtlStringToken, uint8); /* linkage=_ZN17CRenderAttributes13SetComboValueE15CUtlStringTokenh */
	uint8 GetComboValue(const class CRenderAttributes  *, class CUtlStringToken, uint8); /* linkage=_ZNK17CRenderAttributes13GetComboValueE15CUtlStringTokenh */
	bool GetComboValue(const class CRenderAttributes  *, uint8 *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes13GetComboValueEPh15CUtlStringToken */
	uint8 CopyComboValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, uint8); /* linkage=_ZN17CRenderAttributes14CopyComboValueE15CUtlStringTokenRKS_h */
	void DeleteComboValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes16DeleteComboValueE15CUtlStringToken */
	void SetBoolValue(class CRenderAttributes *, class CUtlStringToken, bool); /* linkage=_ZN17CRenderAttributes12SetBoolValueE15CUtlStringTokenb */
	bool GetBoolValue(const class CRenderAttributes  *, class CUtlStringToken, bool); /* linkage=_ZNK17CRenderAttributes12GetBoolValueE15CUtlStringTokenb */
	bool GetBoolValue(const class CRenderAttributes  *, bool *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes12GetBoolValueEPb15CUtlStringToken */
	void DeleteBoolValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes15DeleteBoolValueE15CUtlStringToken */
	void SetSamplerValue(class CRenderAttributes *, class CUtlStringToken, class CSamplerStateDesc); /* linkage=_ZN17CRenderAttributes15SetSamplerValueE15CUtlStringToken17CSamplerStateDesc */
	class CSamplerStateDescBase GetSamplerValue(const class CRenderAttributes  *, class CUtlStringToken, class CSamplerStateDesc); /* linkage=_ZNK17CRenderAttributes15GetSamplerValueE15CUtlStringToken17CSamplerStateDesc */
	bool GetSamplerValueToBind(const class CRenderAttributes  *, class SamplerAttr_t &, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes21GetSamplerValueToBindERNS_13SamplerAttr_tE15CUtlStringToken */
	void SetTextureValue(class CRenderAttributes *, class CUtlStringToken, HRenderTexture, int32); /* linkage=_ZN17CRenderAttributes15SetTextureValueE15CUtlStringToken11CWeakHandleI31InfoForResourceTypeCTextureBaseEi */
	HRenderTexture GetTextureValue(const class CRenderAttributes  *, class CUtlStringToken, HRenderTexture); /* linkage=_ZNK17CRenderAttributes15GetTextureValueE15CUtlStringToken11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	HRenderTexture GetFirstTexture(const class CRenderAttributes  *); /* linkage=_ZNK17CRenderAttributes15GetFirstTextureEv */
	bool GetTextureValue(const class CRenderAttributes  *, HRenderTexture *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes15GetTextureValueEP11CWeakHandleI31InfoForResourceTypeCTextureBaseE15CUtlStringToken */
	bool GetTextureValueAndMipLevelToBind(const class CRenderAttributes  *, class TextureAttr_t &, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes32GetTextureValueAndMipLevelToBindERNS_13TextureAttr_tE15CUtlStringToken */
	const class TextureAttrForStorage_t  * GetTextureValueAndMipLevelToBind(const class CRenderAttributes  *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes32GetTextureValueAndMipLevelToBindE15CUtlStringToken */
	bool GetTextureValueAndMipLevelToBind(const class CRenderAttributes  *, HRenderTexture *, int *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes32GetTextureValueAndMipLevelToBindEP11CWeakHandleI31InfoForResourceTypeCTextureBaseEPi15CUtlStringToken */
	void DeleteTextureValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes18DeleteTextureValueE15CUtlStringToken */
	HRenderTexture CopyTextureValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, HRenderTexture); /* linkage=_ZN17CRenderAttributes16CopyTextureValueE15CUtlStringTokenRKS_11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	void SetConstantBufferValue(class CRenderAttributes *, class CUtlStringToken, ConstantBufferHandle_t, uint32); /* linkage=_ZN17CRenderAttributes22SetConstantBufferValueE15CUtlStringTokenP24ConstantBufferHandle_t__j */
	class ConstantBufferAttr_t GetConstantBufferValue(const class CRenderAttributes  *, class CUtlStringToken, ConstantBufferHandle_t, uint32); /* linkage=_ZNK17CRenderAttributes22GetConstantBufferValueE15CUtlStringTokenP24ConstantBufferHandle_t__j */
	bool GetConstantBufferValue(const class CRenderAttributes  *, class ConstantBufferAttr_t *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes22GetConstantBufferValueEPNS_20ConstantBufferAttr_tE15CUtlStringToken */
	void DeleteConstantBufferValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes25DeleteConstantBufferValueE15CUtlStringToken */
	class ConstantBufferAttr_t CopyConstantBufferValue(class CRenderAttributes *, class CUtlStringToken, class CRenderAttributes &, ConstantBufferHandle_t, uint32); /* linkage=_ZN17CRenderAttributes23CopyConstantBufferValueE15CUtlStringTokenRS_P24ConstantBufferHandle_t__j */
	void SetDescriptorSetValue(class CRenderAttributes *, class CUtlStringToken, RenderDescriptorSetHandle_t, int32, int32, int32, int32); /* linkage=_ZN17CRenderAttributes21SetDescriptorSetValueE15CUtlStringTokenP29RenderDescriptorSetHandle_t__iiii */
	class DescriptorSetAttr_t GetDescriptorSetValue(const class CRenderAttributes  *, class CUtlStringToken, class DescriptorSetAttr_t); /* linkage=_ZNK17CRenderAttributes21GetDescriptorSetValueE15CUtlStringTokenNS_19DescriptorSetAttr_tE */
	bool GetDescriptorSetValue(const class CRenderAttributes  *, class DescriptorSetAttr_t *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes21GetDescriptorSetValueEPNS_19DescriptorSetAttr_tE15CUtlStringToken */
	void DeleteDescriptorSetValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes24DeleteDescriptorSetValueE15CUtlStringToken */
	void MoveToAnother(class CRenderAttributes *, class CRenderAttributes &); /* linkage=_ZN17CRenderAttributes13MoveToAnotherERS_ */
	void MergeTo(const class CRenderAttributes  *, class CRenderAttributes &); /* linkage=_ZNK17CRenderAttributes7MergeToERS_ */
	void SetParent(class CRenderAttributes *, const class CRenderAttributes  *); /* linkage=_ZN17CRenderAttributes9SetParentEPKS_ */
	const class CRenderAttributes  * GetParent(const class CRenderAttributes  *); /* linkage=_ZNK17CRenderAttributes9GetParentEv */
	void CRenderAttributes(class CRenderAttributes *); /* linkage=_ZN17CRenderAttributesC4Ev */
	void ~CRenderAttributes(class CRenderAttributes *); /* linkage=_ZN17CRenderAttributesD4Ev */
	void SetAttr(class CRenderAttributes *, class CUtlStringToken, class CSamplerStateDesc); /* linkage=_ZN17CRenderAttributes7SetAttrE15CUtlStringToken17CSamplerStateDesc */
	void SetAttr(class CRenderAttributes *, class CUtlStringToken, HRenderTexture); /* linkage=_ZN17CRenderAttributes7SetAttrE15CUtlStringToken11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	void SetAttr(class CRenderAttributes *, class CUtlStringToken, HRenderTextureStrong); /* linkage=_ZN17CRenderAttributes7SetAttrE15CUtlStringToken13CStrongHandleI31InfoForResourceTypeCTextureBaseE */
	void SetAttr(class CRenderAttributes *, class CUtlStringToken, float); /* linkage=_ZN17CRenderAttributes7SetAttrE15CUtlStringTokenf */
	void SetAttr(class CRenderAttributes *, class CUtlStringToken, const class Vector  &); /* linkage=_ZN17CRenderAttributes7SetAttrE15CUtlStringTokenRK6Vector */
	void SetAttr(class CRenderAttributes *, class CUtlStringToken, const class VMatrix  &); /* linkage=_ZN17CRenderAttributes7SetAttrE15CUtlStringTokenRK7VMatrix */
	void SetAttr(class CRenderAttributes *, class CUtlStringToken, void *); /* linkage=_ZN17CRenderAttributes7SetAttrE15CUtlStringTokenPv */
	void SetAttr(class CRenderAttributes *, class CUtlStringToken, bool); /* linkage=_ZN17CRenderAttributes7SetAttrE15CUtlStringTokenb */
	void MergeToPtr(const class CRenderAttributes  *, class CRenderAttributes *); /* linkage=_ZNK17CRenderAttributes10MergeToPtrEPS_ */
};

// <018DC669> ../public/rendersystem/renderattrs.h:20
// member functions: 217
// member variables: 10
// class size: 1,184
class CRenderAttributes {
	/* ../public/rendersystem/renderattrs.h:26 */
	struct SamplerAttrForStorage_t {
		CSamplerStateDesc samplerDesc; /* 0 20 */
		/* ../public/rendersystem/renderattrs.h:30 */
		void SamplerAttrForStorage_t(SamplerAttrForStorage_t* );
		/* ../public/rendersystem/renderattrs.h:33 */
		void SamplerAttrForStorage_t(SamplerAttrForStorage_t* , const CSamplerStateDesc& );
		/* ../public/rendersystem/renderattrs.h:37 */
		void SamplerAttrForStorage_t(SamplerAttrForStorage_t* , const SamplerAttr_t& );
		/* ../public/rendersystem/renderattrs.h:44 */
		SamplerAttrForStorage_t& operator=(SamplerAttrForStorage_t* , const SamplerAttr_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/rendersystem/renderattrs.h:47 */
	struct SamplerAttr_t {
		CSamplerStateDesc samplerDesc; /* 0 20 */
		/* ../public/rendersystem/renderattrs.h:50 */
		void SamplerAttr_t(SamplerAttr_t* );
		/* ../public/rendersystem/renderattrs.h:53 */
		void SamplerAttr_t(SamplerAttr_t* , const CSamplerStateDesc& );
		/* ../public/rendersystem/renderattrs.h:57 */
		void SamplerAttr_t(SamplerAttr_t* , const SamplerAttrForStorage_t& );
		/* ../public/rendersystem/renderattrs.h:64 */
		SamplerAttr_t& operator=(SamplerAttr_t* , const SamplerAttrForStorage_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/rendersystem/renderattrs.h:74 */
	struct TextureAttrForStorage_t {
		/* ../public/rendersystem/renderattrs.h:76 */
		void TextureAttrForStorage_t(TextureAttrForStorage_t* );
		/* ../public/rendersystem/renderattrs.h:77 */
		void TextureAttrForStorage_t(TextureAttrForStorage_t* , HRenderTexture, int32);
		/* ../public/rendersystem/renderattrs.h:78 */
		void TextureAttrForStorage_t(TextureAttrForStorage_t* , const TextureAttr_t& );
		HRenderTexture texture; /* 0 8 */
		int32 nSpecificMipLevelToBind; /* 8 4 */
		/* ../public/rendersystem/renderattrs.h:82 */
		TextureAttrForStorage_t& operator=(TextureAttrForStorage_t* , const TextureAttr_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/rendersystem/renderattrs.h:90 */
	struct TextureAttr_t {
		/* ../public/rendersystem/renderattrs.h:92 */
		void TextureAttr_t(TextureAttr_t* );
		/* ../public/rendersystem/renderattrs.h:93 */
		void TextureAttr_t(TextureAttr_t* , HRenderTexture, int32);
		/* ../public/rendersystem/renderattrs.h:94 */
		void TextureAttr_t(TextureAttr_t* , const TextureAttrForStorage_t& );
		HRenderTexture texture; /* 0 8 */
		int32 nSpecificMipLevelToBind; /* 8 4 */
		/* ../public/rendersystem/renderattrs.h:103 */
		TextureAttr_t& operator=(TextureAttr_t* , const TextureAttrForStorage_t& );
		void TextureAttr_t(TextureAttr_t* , const TextureAttr_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/rendersystem/renderattrs.h:709 */
	struct ConstantBufferAttr_t {
		/* ../public/rendersystem/renderattrs.h:711 */
		void ConstantBufferAttr_t(ConstantBufferAttr_t* );
		/* ../public/rendersystem/renderattrs.h:712 */
		void ConstantBufferAttr_t(ConstantBufferAttr_t* , ConstantBufferHandle_t, uint32);
		/* ../public/rendersystem/renderattrs.h:713 */
		void ConstantBufferAttr_t(ConstantBufferAttr_t* , const ConstantBufferAttr_t& );
		ConstantBufferHandle_t hBuffer; /* 0 8 */
		uint32 nView; /* 8 4 */
		/* ../public/rendersystem/renderattrs.h:722 */
		ConstantBufferAttr_t& operator=(ConstantBufferAttr_t* , const ConstantBufferAttr_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/rendersystem/renderattrs.h:766 */
	struct DescriptorSetAttr_t {
		/* ../public/rendersystem/renderattrs.h:768 */
		void DescriptorSetAttr_t(DescriptorSetAttr_t* );
		/* ../public/rendersystem/renderattrs.h:769 */
		void DescriptorSetAttr_t(DescriptorSetAttr_t* , RenderDescriptorSetHandle_t, int32, int32, int32, int32);
		/* ../public/rendersystem/renderattrs.h:777 */
		void DescriptorSetAttr_t(DescriptorSetAttr_t* , const DescriptorSetAttr_t& );
		RenderDescriptorSetHandle_t hDescriptorSet; /* 0 8 */
		int32 nCbufferOffsets[4]; /* 8 16 */
		/* ../public/rendersystem/renderattrs.h:793 */
		DescriptorSetAttr_t& operator=(DescriptorSetAttr_t* , const DescriptorSetAttr_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/rendersystem/renderattrs.h:67 */
	typedef struct CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8> SamplerAttrList_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/rendersystem/renderattrs.h:69 */
	const SamplerAttrList_t& SamplerAttributes(const CRenderAttributes* );
	/* ../public/rendersystem/renderattrs.h:70 */
	SamplerAttrList_t& SamplerAttributes(CRenderAttributes* );
	/* ../public/rendersystem/renderattrs.h:106 */
	typedef struct CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8> TextureAttrList_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/rendersystem/renderattrs.h:109 */
	const TextureAttrList_t& TextureAttributes(const CRenderAttributes* );
	/* ../public/rendersystem/renderattrs.h:110 */
	TextureAttrList_t& TextureAttributes(CRenderAttributes* );
	/* ../public/rendersystem/renderattrs.h:113 */
	bool IsEmpty(const CRenderAttributes* );
	/* ../public/rendersystem/renderattrs.h:126 */
	void Clear(CRenderAttributes* , bool, bool);
	/* ../public/rendersystem/renderattrs.h:146 */
	void SetFloatValue(CRenderAttributes* , CUtlStringToken, float);
	/* ../public/rendersystem/renderattrs.h:151 */
	float GetFloatValue(const CRenderAttributes* , CUtlStringToken, float);
	/* ../public/rendersystem/renderattrs.h:156 */
	QAngle GetQAngleValue(const CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:163 */
	bool GetFloatValue(const CRenderAttributes* , float* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:178 */
	void DeleteFloatValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:183 */
	float CopyVectorFloatValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , float);
	/* ../public/rendersystem/renderattrs.h:193 */
	void SetVector2DValue(CRenderAttributes* , CUtlStringToken, Vector2D);
	/* ../public/rendersystem/renderattrs.h:198 */
	Vector2D GetVector2DValue(const CRenderAttributes* , CUtlStringToken, Vector2D);
	/* ../public/rendersystem/renderattrs.h:204 */
	bool GetVector2DValue(const CRenderAttributes* , Vector2D* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:219 */
	void DeleteVector2DValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:224 */
	Vector2D CopyVector2DValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , Vector2D);
	/* ../public/rendersystem/renderattrs.h:234 */
	void SetVectorValue(CRenderAttributes* , CUtlStringToken, Vector);
	/* ../public/rendersystem/renderattrs.h:239 */
	Vector GetVectorValue(const CRenderAttributes* , CUtlStringToken, Vector);
	/* ../public/rendersystem/renderattrs.h:245 */
	bool GetVectorValue(const CRenderAttributes* , Vector* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:260 */
	void DeleteVectorValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:265 */
	Vector CopyVectorValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , Vector);
	/* ../public/rendersystem/renderattrs.h:275 */
	void SetVector4DValue(CRenderAttributes* , CUtlStringToken, Vector4D);
	/* ../public/rendersystem/renderattrs.h:280 */
	Vector4D GetVector4DValue(const CRenderAttributes* , CUtlStringToken, Vector4D);
	/* ../public/rendersystem/renderattrs.h:286 */
	bool GetVector4DValue(const CRenderAttributes* , Vector4D* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:291 */
	void DeleteVector4DValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:296 */
	Vector4D CopyVector4DValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , Vector4D);
	/* ../public/rendersystem/renderattrs.h:311 */
	void SetVMatrixValue(CRenderAttributes* , CUtlStringToken, VMatrix);
	/* ../public/rendersystem/renderattrs.h:316 */
	VMatrix GetVMatrixValue(const CRenderAttributes* , CUtlStringToken, VMatrix);
	/* ../public/rendersystem/renderattrs.h:322 */
	bool GetVMatrixValue(const CRenderAttributes* , VMatrix* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:327 */
	void DeleteVMatrixValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:332 */
	VMatrix CopyVMatrixValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , VMatrix);
	/* ../public/rendersystem/renderattrs.h:347 */
	void SetPtrValue(CRenderAttributes* , CUtlStringToken, void* );
	/* ../public/rendersystem/renderattrs.h:352 */
	void* GetPtrValue(const CRenderAttributes* , CUtlStringToken, void* );
	/* ../public/rendersystem/renderattrs.h:358 */
	bool GetPtrValue(const CRenderAttributes* , void** , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:363 */
	void DeletePtrValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:368 */
	void* CopyPtrValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , void* );
	/* ../public/rendersystem/renderattrs.h:383 */
	void SetBufferValue(CRenderAttributes* , CUtlStringToken, IndexBufferHandle_t);
	/* ../public/rendersystem/renderattrs.h:391 */
	void SetBufferValue(CRenderAttributes* , CUtlStringToken, VertexBufferHandle_t);
	/* ../public/rendersystem/renderattrs.h:396 */
	void SetBufferValue(CRenderAttributes* , CUtlStringToken, RenderBufferHandle_t);
	/* ../public/rendersystem/renderattrs.h:404 */
	void SetStringValue(CRenderAttributes* , CUtlStringToken, const char* );
	/* ../public/rendersystem/renderattrs.h:410 */
	bool GetStringValue(const CRenderAttributes* , CUtlString* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:415 */
	void DeleteStringValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:425 */
	void SetIntVector4DValue(CRenderAttributes* , CUtlStringToken, int, int, int, int);
	/* ../public/rendersystem/renderattrs.h:430 */
	IntVector4D GetIntVector4DValue(const CRenderAttributes* , CUtlStringToken, IntVector4D);
	/* ../public/rendersystem/renderattrs.h:435 */
	bool GetIntVector4DValue(const CRenderAttributes* , IntVector4D* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:450 */
	void SetIntValue(CRenderAttributes* , CUtlStringToken, int);
	/* ../public/rendersystem/renderattrs.h:459 */
	int GetIntValue(const CRenderAttributes* , CUtlStringToken, int);
	/* ../public/rendersystem/renderattrs.h:469 */
	bool GetIntValue(const CRenderAttributes* , int* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:485 */
	void DeleteIntValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:494 */
	int CopyIntValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , int);
	/* ../public/rendersystem/renderattrs.h:510 */
	void SetComboValue(CRenderAttributes* , CUtlStringToken, uint8);
	/* ../public/rendersystem/renderattrs.h:518 */
	uint8 GetComboValue(const CRenderAttributes* , CUtlStringToken, uint8);
	/* ../public/rendersystem/renderattrs.h:529 */
	bool GetComboValue(const CRenderAttributes* , uint8* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:546 */
	uint8 CopyComboValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , uint8);
	/* ../public/rendersystem/renderattrs.h:553 */
	void DeleteComboValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:569 */
	void SetBoolValue(CRenderAttributes* , CUtlStringToken, bool);
	/* ../public/rendersystem/renderattrs.h:574 */
	bool GetBoolValue(const CRenderAttributes* , CUtlStringToken, bool);
	/* ../public/rendersystem/renderattrs.h:579 */
	bool GetBoolValue(const CRenderAttributes* , bool* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:590 */
	void DeleteBoolValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:598 */
	void SetSamplerValue(CRenderAttributes* , CUtlStringToken, CSamplerStateDesc);
	/* ../public/rendersystem/renderattrs.h:603 */
	CSamplerStateDescBase GetSamplerValue(const CRenderAttributes* , CUtlStringToken, CSamplerStateDesc);
	/* ../public/rendersystem/renderattrs.h:609 */
	bool GetSamplerValueToBind(const CRenderAttributes* , SamplerAttr_t& , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:617 */
	void SetTextureValue(CRenderAttributes* , CUtlStringToken, HRenderTexture, int32);
	/* ../public/rendersystem/renderattrs.h:622 */
	HRenderTexture GetTextureValue(const CRenderAttributes* , CUtlStringToken, HRenderTexture);
	/* ../public/rendersystem/renderattrs.h:629 */
	HRenderTexture GetFirstTexture(const CRenderAttributes* );
	/* ../public/rendersystem/renderattrs.h:646 */
	bool GetTextureValue(const CRenderAttributes* , HRenderTexture* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:660 */
	bool GetTextureValueAndMipLevelToBind(const CRenderAttributes* , TextureAttr_t& , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:665 */
	const TextureAttrForStorage_t* GetTextureValueAndMipLevelToBind(const CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:671 */
	bool GetTextureValueAndMipLevelToBind(const CRenderAttributes* , HRenderTexture* , int* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:689 */
	void DeleteTextureValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:694 */
	HRenderTexture CopyTextureValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , HRenderTexture);
	/* ../public/rendersystem/renderattrs.h:730 */
	void SetConstantBufferValue(CRenderAttributes* , CUtlStringToken, ConstantBufferHandle_t, uint32);
	/* ../public/rendersystem/renderattrs.h:735 */
	ConstantBufferAttr_t GetConstantBufferValue(const CRenderAttributes* , CUtlStringToken, ConstantBufferHandle_t, uint32);
	/* ../public/rendersystem/renderattrs.h:741 */
	bool GetConstantBufferValue(const CRenderAttributes* , ConstantBufferAttr_t* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:746 */
	void DeleteConstantBufferValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:751 */
	ConstantBufferAttr_t CopyConstantBufferValue(CRenderAttributes* , CUtlStringToken, CRenderAttributes& , ConstantBufferHandle_t, uint32);
	/* ../public/rendersystem/renderattrs.h:804 */
	void SetDescriptorSetValue(CRenderAttributes* , CUtlStringToken, RenderDescriptorSetHandle_t, int32, int32, int32, int32);
	/* ../public/rendersystem/renderattrs.h:810 */
	DescriptorSetAttr_t GetDescriptorSetValue(const CRenderAttributes* , CUtlStringToken, DescriptorSetAttr_t);
	/* ../public/rendersystem/renderattrs.h:816 */
	bool GetDescriptorSetValue(const CRenderAttributes* , DescriptorSetAttr_t* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:821 */
	void DeleteDescriptorSetValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:834 */
	void MoveToAnother(CRenderAttributes* , CRenderAttributes& );
	/* ../public/rendersystem/renderattrs.h:848 */
	void MergeTo(const CRenderAttributes* , CRenderAttributes& );
	/* ../public/rendersystem/renderattrs.h:861 */
	void SetParent(CRenderAttributes* , const CRenderAttributes* );
	/* ../public/rendersystem/renderattrs.h:890 */
	const CRenderAttributes* GetParent(const CRenderAttributes* );
	/* ../public/rendersystem/renderattrs.h:898 */
	void CRenderAttributes(CRenderAttributes* );
	/* ../public/rendersystem/renderattrs.h:902 */
	void ~CRenderAttributes(CRenderAttributes* );
private:
	/* ../public/rendersystem/renderattrs.h:912 */
	void SetAttr(CRenderAttributes* , CUtlStringToken, CSamplerStateDesc);
	/* ../public/rendersystem/renderattrs.h:913 */
	void SetAttr(CRenderAttributes* , CUtlStringToken, HRenderTexture);
	/* ../public/rendersystem/renderattrs.h:914 */
	void SetAttr(CRenderAttributes* , CUtlStringToken, HRenderTextureStrong);
	/* ../public/rendersystem/renderattrs.h:915 */
	void SetAttr(CRenderAttributes* , CUtlStringToken, float);
	/* ../public/rendersystem/renderattrs.h:916 */
	void SetAttr(CRenderAttributes* , CUtlStringToken, const Vector& );
	/* ../public/rendersystem/renderattrs.h:917 */
	void SetAttr(CRenderAttributes* , CUtlStringToken, const VMatrix& );
	/* ../public/rendersystem/renderattrs.h:918 */
	void SetAttr(CRenderAttributes* , CUtlStringToken, void* );
	/* ../public/rendersystem/renderattrs.h:919 */
	void SetAttr(CRenderAttributes* , CUtlStringToken, bool);
	CUtlAttributeList<Vector4D, 8, Vector4D, 4> m_vec4Attrs; /* 0 176 */
	CUtlAttributeList<VMatrix, 1, VMatrix, 2> m_matrix4x4Attrs; /* 176 96 */
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4> m_intAttrs; /* 272 176 */
	TextureAttrList_t m_textureAttrs; /* 448 176 */
	SamplerAttrList_t m_samplerAttrs; /* 624 208 */
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4> m_constantBufferAttrs; /* 832 96 */
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4> m_descriptorSetAttrs; /* 928 128 */
	CUtlAttributeList<void*, 4, void*, 4> m_ptrAttrs; /* 1056 64 */
	CUtlAttributeList<CUtlString, 2, CUtlString, 2> m_stringAttrs; /* 1120 48 */
	const class CRenderAttributes * m_pParent; /* 1168 8 */
	/* ../public/rendersystem/renderattrs.h:938 */
	void MergeToPtr(const CRenderAttributes* , CRenderAttributes* );
	const SamplerAttrList_t  & SamplerAttributes(const class CRenderAttributes  *); /* linkage=_ZNK17CRenderAttributes17SamplerAttributesEv */
	SamplerAttrList_t & SamplerAttributes(class CRenderAttributes *); /* linkage=_ZN17CRenderAttributes17SamplerAttributesEv */
	const TextureAttrList_t  & TextureAttributes(const class CRenderAttributes  *); /* linkage=_ZNK17CRenderAttributes17TextureAttributesEv */
	TextureAttrList_t & TextureAttributes(class CRenderAttributes *); /* linkage=_ZN17CRenderAttributes17TextureAttributesEv */
	/* <40287e2> ../public/rendersystem/renderattrs.h:113 */
	bool IsEmpty(const class CRenderAttributes  *); /* linkage=_ZNK17CRenderAttributes7IsEmptyEv */
	void Clear(class CRenderAttributes *, bool, bool); /* linkage=_ZN17CRenderAttributes5ClearEbb */
	void SetFloatValue(class CRenderAttributes *, class CUtlStringToken, float); /* linkage=_ZN17CRenderAttributes13SetFloatValueE15CUtlStringTokenf */
	float GetFloatValue(const class CRenderAttributes  *, class CUtlStringToken, float); /* linkage=_ZNK17CRenderAttributes13GetFloatValueE15CUtlStringTokenf */
	class QAngle GetQAngleValue(const class CRenderAttributes  *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes14GetQAngleValueE15CUtlStringToken */
	bool GetFloatValue(const class CRenderAttributes  *, float *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes13GetFloatValueEPf15CUtlStringToken */
	void DeleteFloatValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes16DeleteFloatValueE15CUtlStringToken */
	float CopyVectorFloatValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, float); /* linkage=_ZN17CRenderAttributes20CopyVectorFloatValueE15CUtlStringTokenRKS_f */
	void SetVector2DValue(class CRenderAttributes *, class CUtlStringToken, class Vector2D); /* linkage=_ZN17CRenderAttributes16SetVector2DValueE15CUtlStringToken8Vector2D */
	class Vector2D GetVector2DValue(const class CRenderAttributes  *, class CUtlStringToken, class Vector2D); /* linkage=_ZNK17CRenderAttributes16GetVector2DValueE15CUtlStringToken8Vector2D */
	bool GetVector2DValue(const class CRenderAttributes  *, class Vector2D *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes16GetVector2DValueEP8Vector2D15CUtlStringToken */
	void DeleteVector2DValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes19DeleteVector2DValueE15CUtlStringToken */
	class Vector2D CopyVector2DValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, class Vector2D); /* linkage=_ZN17CRenderAttributes17CopyVector2DValueE15CUtlStringTokenRKS_8Vector2D */
	void SetVectorValue(class CRenderAttributes *, class CUtlStringToken, class Vector); /* linkage=_ZN17CRenderAttributes14SetVectorValueE15CUtlStringToken6Vector */
	class Vector GetVectorValue(const class CRenderAttributes  *, class CUtlStringToken, class Vector); /* linkage=_ZNK17CRenderAttributes14GetVectorValueE15CUtlStringToken6Vector */
	bool GetVectorValue(const class CRenderAttributes  *, class Vector *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes14GetVectorValueEP6Vector15CUtlStringToken */
	void DeleteVectorValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes17DeleteVectorValueE15CUtlStringToken */
	class Vector CopyVectorValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, class Vector); /* linkage=_ZN17CRenderAttributes15CopyVectorValueE15CUtlStringTokenRKS_6Vector */
	void SetVector4DValue(class CRenderAttributes *, class CUtlStringToken, class Vector4D); /* linkage=_ZN17CRenderAttributes16SetVector4DValueE15CUtlStringToken8Vector4D */
	class Vector4D GetVector4DValue(const class CRenderAttributes  *, class CUtlStringToken, class Vector4D); /* linkage=_ZNK17CRenderAttributes16GetVector4DValueE15CUtlStringToken8Vector4D */
	bool GetVector4DValue(const class CRenderAttributes  *, class Vector4D *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes16GetVector4DValueEP8Vector4D15CUtlStringToken */
	void DeleteVector4DValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes19DeleteVector4DValueE15CUtlStringToken */
	class Vector4D CopyVector4DValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, class Vector4D); /* linkage=_ZN17CRenderAttributes17CopyVector4DValueE15CUtlStringTokenRKS_8Vector4D */
	void SetVMatrixValue(class CRenderAttributes *, class CUtlStringToken, class VMatrix); /* linkage=_ZN17CRenderAttributes15SetVMatrixValueE15CUtlStringToken7VMatrix */
	class VMatrix GetVMatrixValue(const class CRenderAttributes  *, class CUtlStringToken, class VMatrix); /* linkage=_ZNK17CRenderAttributes15GetVMatrixValueE15CUtlStringToken7VMatrix */
	bool GetVMatrixValue(const class CRenderAttributes  *, class VMatrix *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes15GetVMatrixValueEP7VMatrix15CUtlStringToken */
	void DeleteVMatrixValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes18DeleteVMatrixValueE15CUtlStringToken */
	class VMatrix CopyVMatrixValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, class VMatrix); /* linkage=_ZN17CRenderAttributes16CopyVMatrixValueE15CUtlStringTokenRKS_7VMatrix */
	void SetPtrValue(class CRenderAttributes *, class CUtlStringToken, void *); /* linkage=_ZN17CRenderAttributes11SetPtrValueE15CUtlStringTokenPv */
	void * GetPtrValue(const class CRenderAttributes  *, class CUtlStringToken, void *); /* linkage=_ZNK17CRenderAttributes11GetPtrValueE15CUtlStringTokenPv */
	bool GetPtrValue(const class CRenderAttributes  *, void * *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes11GetPtrValueEPPv15CUtlStringToken */
	void DeletePtrValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes14DeletePtrValueE15CUtlStringToken */
	void * CopyPtrValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, void *); /* linkage=_ZN17CRenderAttributes12CopyPtrValueE15CUtlStringTokenRKS_Pv */
	void SetBufferValue(class CRenderAttributes *, class CUtlStringToken, IndexBufferHandle_t); /* linkage=_ZN17CRenderAttributes14SetBufferValueE15CUtlStringTokenP21IndexBufferHandle_t__ */
	void SetBufferValue(class CRenderAttributes *, class CUtlStringToken, VertexBufferHandle_t); /* linkage=_ZN17CRenderAttributes14SetBufferValueE15CUtlStringTokenP22VertexBufferHandle_t__ */
	void SetBufferValue(class CRenderAttributes *, class CUtlStringToken, RenderBufferHandle_t); /* linkage=_ZN17CRenderAttributes14SetBufferValueE15CUtlStringTokenP22RenderBufferHandle_t__ */
	void SetStringValue(class CRenderAttributes *, class CUtlStringToken, const char  *); /* linkage=_ZN17CRenderAttributes14SetStringValueE15CUtlStringTokenPKc */
	bool GetStringValue(const class CRenderAttributes  *, class CUtlString *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes14GetStringValueEP10CUtlString15CUtlStringToken */
	void DeleteStringValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes17DeleteStringValueE15CUtlStringToken */
	void SetIntVector4DValue(class CRenderAttributes *, class CUtlStringToken, int, int, int, int); /* linkage=_ZN17CRenderAttributes19SetIntVector4DValueE15CUtlStringTokeniiii */
	class IntVector4D GetIntVector4DValue(const class CRenderAttributes  *, class CUtlStringToken, class IntVector4D); /* linkage=_ZNK17CRenderAttributes19GetIntVector4DValueE15CUtlStringToken11IntVector4D */
	bool GetIntVector4DValue(const class CRenderAttributes  *, class IntVector4D *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes19GetIntVector4DValueEP11IntVector4D15CUtlStringToken */
	void SetIntValue(class CRenderAttributes *, class CUtlStringToken, int); /* linkage=_ZN17CRenderAttributes11SetIntValueE15CUtlStringTokeni */
	int GetIntValue(const class CRenderAttributes  *, class CUtlStringToken, int); /* linkage=_ZNK17CRenderAttributes11GetIntValueE15CUtlStringTokeni */
	bool GetIntValue(const class CRenderAttributes  *, int *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes11GetIntValueEPi15CUtlStringToken */
	void DeleteIntValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes14DeleteIntValueE15CUtlStringToken */
	int CopyIntValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, int); /* linkage=_ZN17CRenderAttributes12CopyIntValueE15CUtlStringTokenRKS_i */
	void SetComboValue(class CRenderAttributes *, class CUtlStringToken, uint8); /* linkage=_ZN17CRenderAttributes13SetComboValueE15CUtlStringTokenh */
	uint8 GetComboValue(const class CRenderAttributes  *, class CUtlStringToken, uint8); /* linkage=_ZNK17CRenderAttributes13GetComboValueE15CUtlStringTokenh */
	bool GetComboValue(const class CRenderAttributes  *, uint8 *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes13GetComboValueEPh15CUtlStringToken */
	uint8 CopyComboValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, uint8); /* linkage=_ZN17CRenderAttributes14CopyComboValueE15CUtlStringTokenRKS_h */
	void DeleteComboValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes16DeleteComboValueE15CUtlStringToken */
	void SetBoolValue(class CRenderAttributes *, class CUtlStringToken, bool); /* linkage=_ZN17CRenderAttributes12SetBoolValueE15CUtlStringTokenb */
	bool GetBoolValue(const class CRenderAttributes  *, class CUtlStringToken, bool); /* linkage=_ZNK17CRenderAttributes12GetBoolValueE15CUtlStringTokenb */
	bool GetBoolValue(const class CRenderAttributes  *, bool *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes12GetBoolValueEPb15CUtlStringToken */
	void DeleteBoolValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes15DeleteBoolValueE15CUtlStringToken */
	void SetSamplerValue(class CRenderAttributes *, class CUtlStringToken, class CSamplerStateDesc); /* linkage=_ZN17CRenderAttributes15SetSamplerValueE15CUtlStringToken17CSamplerStateDesc */
	class CSamplerStateDescBase GetSamplerValue(const class CRenderAttributes  *, class CUtlStringToken, class CSamplerStateDesc); /* linkage=_ZNK17CRenderAttributes15GetSamplerValueE15CUtlStringToken17CSamplerStateDesc */
	bool GetSamplerValueToBind(const class CRenderAttributes  *, class SamplerAttr_t &, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes21GetSamplerValueToBindERNS_13SamplerAttr_tE15CUtlStringToken */
	void SetTextureValue(class CRenderAttributes *, class CUtlStringToken, HRenderTexture, int32); /* linkage=_ZN17CRenderAttributes15SetTextureValueE15CUtlStringToken11CWeakHandleI31InfoForResourceTypeCTextureBaseEi */
	HRenderTexture GetTextureValue(const class CRenderAttributes  *, class CUtlStringToken, HRenderTexture); /* linkage=_ZNK17CRenderAttributes15GetTextureValueE15CUtlStringToken11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	HRenderTexture GetFirstTexture(const class CRenderAttributes  *); /* linkage=_ZNK17CRenderAttributes15GetFirstTextureEv */
	bool GetTextureValue(const class CRenderAttributes  *, HRenderTexture *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes15GetTextureValueEP11CWeakHandleI31InfoForResourceTypeCTextureBaseE15CUtlStringToken */
	bool GetTextureValueAndMipLevelToBind(const class CRenderAttributes  *, class TextureAttr_t &, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes32GetTextureValueAndMipLevelToBindERNS_13TextureAttr_tE15CUtlStringToken */
	const class TextureAttrForStorage_t  * GetTextureValueAndMipLevelToBind(const class CRenderAttributes  *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes32GetTextureValueAndMipLevelToBindE15CUtlStringToken */
	bool GetTextureValueAndMipLevelToBind(const class CRenderAttributes  *, HRenderTexture *, int *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes32GetTextureValueAndMipLevelToBindEP11CWeakHandleI31InfoForResourceTypeCTextureBaseEPi15CUtlStringToken */
	void DeleteTextureValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes18DeleteTextureValueE15CUtlStringToken */
	HRenderTexture CopyTextureValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, HRenderTexture); /* linkage=_ZN17CRenderAttributes16CopyTextureValueE15CUtlStringTokenRKS_11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	void SetConstantBufferValue(class CRenderAttributes *, class CUtlStringToken, ConstantBufferHandle_t, uint32); /* linkage=_ZN17CRenderAttributes22SetConstantBufferValueE15CUtlStringTokenP24ConstantBufferHandle_t__j */
	class ConstantBufferAttr_t GetConstantBufferValue(const class CRenderAttributes  *, class CUtlStringToken, ConstantBufferHandle_t, uint32); /* linkage=_ZNK17CRenderAttributes22GetConstantBufferValueE15CUtlStringTokenP24ConstantBufferHandle_t__j */
	bool GetConstantBufferValue(const class CRenderAttributes  *, class ConstantBufferAttr_t *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes22GetConstantBufferValueEPNS_20ConstantBufferAttr_tE15CUtlStringToken */
	void DeleteConstantBufferValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes25DeleteConstantBufferValueE15CUtlStringToken */
	class ConstantBufferAttr_t CopyConstantBufferValue(class CRenderAttributes *, class CUtlStringToken, class CRenderAttributes &, ConstantBufferHandle_t, uint32); /* linkage=_ZN17CRenderAttributes23CopyConstantBufferValueE15CUtlStringTokenRS_P24ConstantBufferHandle_t__j */
	void SetDescriptorSetValue(class CRenderAttributes *, class CUtlStringToken, RenderDescriptorSetHandle_t, int32, int32, int32, int32); /* linkage=_ZN17CRenderAttributes21SetDescriptorSetValueE15CUtlStringTokenP29RenderDescriptorSetHandle_t__iiii */
	class DescriptorSetAttr_t GetDescriptorSetValue(const class CRenderAttributes  *, class CUtlStringToken, class DescriptorSetAttr_t); /* linkage=_ZNK17CRenderAttributes21GetDescriptorSetValueE15CUtlStringTokenNS_19DescriptorSetAttr_tE */
	bool GetDescriptorSetValue(const class CRenderAttributes  *, class DescriptorSetAttr_t *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes21GetDescriptorSetValueEPNS_19DescriptorSetAttr_tE15CUtlStringToken */
	void DeleteDescriptorSetValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes24DeleteDescriptorSetValueE15CUtlStringToken */
	void MoveToAnother(class CRenderAttributes *, class CRenderAttributes &); /* linkage=_ZN17CRenderAttributes13MoveToAnotherERS_ */
	void MergeTo(const class CRenderAttributes  *, class CRenderAttributes &); /* linkage=_ZNK17CRenderAttributes7MergeToERS_ */
	void SetParent(class CRenderAttributes *, const class CRenderAttributes  *); /* linkage=_ZN17CRenderAttributes9SetParentEPKS_ */
	const class CRenderAttributes  * GetParent(const class CRenderAttributes  *); /* linkage=_ZNK17CRenderAttributes9GetParentEv */
	void CRenderAttributes(class CRenderAttributes *); /* linkage=_ZN17CRenderAttributesC4Ev */
	void ~CRenderAttributes(class CRenderAttributes *); /* linkage=_ZN17CRenderAttributesD4Ev */
	void SetAttr(class CRenderAttributes *, class CUtlStringToken, class CSamplerStateDesc); /* linkage=_ZN17CRenderAttributes7SetAttrE15CUtlStringToken17CSamplerStateDesc */
	void SetAttr(class CRenderAttributes *, class CUtlStringToken, HRenderTexture); /* linkage=_ZN17CRenderAttributes7SetAttrE15CUtlStringToken11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	void SetAttr(class CRenderAttributes *, class CUtlStringToken, HRenderTextureStrong); /* linkage=_ZN17CRenderAttributes7SetAttrE15CUtlStringToken13CStrongHandleI31InfoForResourceTypeCTextureBaseE */
	void SetAttr(class CRenderAttributes *, class CUtlStringToken, float); /* linkage=_ZN17CRenderAttributes7SetAttrE15CUtlStringTokenf */
	void SetAttr(class CRenderAttributes *, class CUtlStringToken, const class Vector  &); /* linkage=_ZN17CRenderAttributes7SetAttrE15CUtlStringTokenRK6Vector */
	void SetAttr(class CRenderAttributes *, class CUtlStringToken, const class VMatrix  &); /* linkage=_ZN17CRenderAttributes7SetAttrE15CUtlStringTokenRK7VMatrix */
	void SetAttr(class CRenderAttributes *, class CUtlStringToken, void *); /* linkage=_ZN17CRenderAttributes7SetAttrE15CUtlStringTokenPv */
	void SetAttr(class CRenderAttributes *, class CUtlStringToken, bool); /* linkage=_ZN17CRenderAttributes7SetAttrE15CUtlStringTokenb */
	void MergeToPtr(const class CRenderAttributes  *, class CRenderAttributes *); /* linkage=_ZNK17CRenderAttributes10MergeToPtrEPS_ */
};

// <058C9DFD> ../../public/rendersystem/renderattrs.h:20
// member functions: 216
// member variables: 10
// class size: 1,184
class CRenderAttributes {
	/* ../../public/rendersystem/renderattrs.h:26 */
	struct SamplerAttrForStorage_t {
		CSamplerStateDesc samplerDesc; /* 0 20 */
		/* ../../public/rendersystem/renderattrs.h:30 */
		void SamplerAttrForStorage_t(SamplerAttrForStorage_t* );
		/* ../../public/rendersystem/renderattrs.h:33 */
		void SamplerAttrForStorage_t(SamplerAttrForStorage_t* , const CSamplerStateDesc& );
		/* ../../public/rendersystem/renderattrs.h:37 */
		void SamplerAttrForStorage_t(SamplerAttrForStorage_t* , const SamplerAttr_t& );
		/* ../../public/rendersystem/renderattrs.h:44 */
		SamplerAttrForStorage_t& operator=(SamplerAttrForStorage_t* , const SamplerAttr_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../../public/rendersystem/renderattrs.h:47 */
	struct SamplerAttr_t {
		CSamplerStateDesc samplerDesc; /* 0 20 */
		/* ../../public/rendersystem/renderattrs.h:50 */
		void SamplerAttr_t(SamplerAttr_t* );
		/* ../../public/rendersystem/renderattrs.h:53 */
		void SamplerAttr_t(SamplerAttr_t* , const CSamplerStateDesc& );
		/* ../../public/rendersystem/renderattrs.h:57 */
		void SamplerAttr_t(SamplerAttr_t* , const SamplerAttrForStorage_t& );
		/* ../../public/rendersystem/renderattrs.h:64 */
		SamplerAttr_t& operator=(SamplerAttr_t* , const SamplerAttrForStorage_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../../public/rendersystem/renderattrs.h:74 */
	struct TextureAttrForStorage_t {
		/* ../../public/rendersystem/renderattrs.h:76 */
		void TextureAttrForStorage_t(TextureAttrForStorage_t* );
		/* ../../public/rendersystem/renderattrs.h:77 */
		void TextureAttrForStorage_t(TextureAttrForStorage_t* , HRenderTexture, int32);
		/* ../../public/rendersystem/renderattrs.h:78 */
		void TextureAttrForStorage_t(TextureAttrForStorage_t* , const TextureAttr_t& );
		HRenderTexture texture; /* 0 8 */
		int32 nSpecificMipLevelToBind; /* 8 4 */
		/* ../../public/rendersystem/renderattrs.h:82 */
		TextureAttrForStorage_t& operator=(TextureAttrForStorage_t* , const TextureAttr_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../../public/rendersystem/renderattrs.h:90 */
	struct TextureAttr_t {
		/* ../../public/rendersystem/renderattrs.h:92 */
		void TextureAttr_t(TextureAttr_t* );
		/* ../../public/rendersystem/renderattrs.h:93 */
		void TextureAttr_t(TextureAttr_t* , HRenderTexture, int32);
		/* ../../public/rendersystem/renderattrs.h:94 */
		void TextureAttr_t(TextureAttr_t* , const TextureAttrForStorage_t& );
		HRenderTexture texture; /* 0 8 */
		int32 nSpecificMipLevelToBind; /* 8 4 */
		/* ../../public/rendersystem/renderattrs.h:103 */
		TextureAttr_t& operator=(TextureAttr_t* , const TextureAttrForStorage_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../../public/rendersystem/renderattrs.h:709 */
	struct ConstantBufferAttr_t {
		/* ../../public/rendersystem/renderattrs.h:711 */
		void ConstantBufferAttr_t(ConstantBufferAttr_t* );
		/* ../../public/rendersystem/renderattrs.h:712 */
		void ConstantBufferAttr_t(ConstantBufferAttr_t* , ConstantBufferHandle_t, uint32);
		/* ../../public/rendersystem/renderattrs.h:713 */
		void ConstantBufferAttr_t(ConstantBufferAttr_t* , const ConstantBufferAttr_t& );
		ConstantBufferHandle_t hBuffer; /* 0 8 */
		uint32 nView; /* 8 4 */
		/* ../../public/rendersystem/renderattrs.h:722 */
		ConstantBufferAttr_t& operator=(ConstantBufferAttr_t* , const ConstantBufferAttr_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../../public/rendersystem/renderattrs.h:766 */
	struct DescriptorSetAttr_t {
		/* ../../public/rendersystem/renderattrs.h:768 */
		void DescriptorSetAttr_t(DescriptorSetAttr_t* );
		/* ../../public/rendersystem/renderattrs.h:769 */
		void DescriptorSetAttr_t(DescriptorSetAttr_t* , RenderDescriptorSetHandle_t, int32, int32, int32, int32);
		/* ../../public/rendersystem/renderattrs.h:777 */
		void DescriptorSetAttr_t(DescriptorSetAttr_t* , const DescriptorSetAttr_t& );
		RenderDescriptorSetHandle_t hDescriptorSet; /* 0 8 */
		int32 nCbufferOffsets[4]; /* 8 16 */
		/* ../../public/rendersystem/renderattrs.h:793 */
		DescriptorSetAttr_t& operator=(DescriptorSetAttr_t* , const DescriptorSetAttr_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../../public/rendersystem/renderattrs.h:67 */
	typedef struct CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8> SamplerAttrList_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../../public/rendersystem/renderattrs.h:69 */
	const SamplerAttrList_t& SamplerAttributes(const CRenderAttributes* );
	/* ../../public/rendersystem/renderattrs.h:70 */
	SamplerAttrList_t& SamplerAttributes(CRenderAttributes* );
	/* ../../public/rendersystem/renderattrs.h:106 */
	typedef struct CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8> TextureAttrList_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../../public/rendersystem/renderattrs.h:109 */
	const TextureAttrList_t& TextureAttributes(const CRenderAttributes* );
	/* ../../public/rendersystem/renderattrs.h:110 */
	TextureAttrList_t& TextureAttributes(CRenderAttributes* );
	/* ../../public/rendersystem/renderattrs.h:113 */
	bool IsEmpty(const CRenderAttributes* );
	/* ../../public/rendersystem/renderattrs.h:126 */
	void Clear(CRenderAttributes* , bool, bool);
	/* ../../public/rendersystem/renderattrs.h:146 */
	void SetFloatValue(CRenderAttributes* , CUtlStringToken, float);
	/* ../../public/rendersystem/renderattrs.h:151 */
	float GetFloatValue(const CRenderAttributes* , CUtlStringToken, float);
	/* ../../public/rendersystem/renderattrs.h:156 */
	QAngle GetQAngleValue(const CRenderAttributes* , CUtlStringToken);
	/* ../../public/rendersystem/renderattrs.h:163 */
	bool GetFloatValue(const CRenderAttributes* , float* , CUtlStringToken);
	/* ../../public/rendersystem/renderattrs.h:178 */
	void DeleteFloatValue(CRenderAttributes* , CUtlStringToken);
	/* ../../public/rendersystem/renderattrs.h:183 */
	float CopyVectorFloatValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , float);
	/* ../../public/rendersystem/renderattrs.h:193 */
	void SetVector2DValue(CRenderAttributes* , CUtlStringToken, Vector2D);
	/* ../../public/rendersystem/renderattrs.h:198 */
	Vector2D GetVector2DValue(const CRenderAttributes* , CUtlStringToken, Vector2D);
	/* ../../public/rendersystem/renderattrs.h:204 */
	bool GetVector2DValue(const CRenderAttributes* , Vector2D* , CUtlStringToken);
	/* ../../public/rendersystem/renderattrs.h:219 */
	void DeleteVector2DValue(CRenderAttributes* , CUtlStringToken);
	/* ../../public/rendersystem/renderattrs.h:224 */
	Vector2D CopyVector2DValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , Vector2D);
	/* ../../public/rendersystem/renderattrs.h:234 */
	void SetVectorValue(CRenderAttributes* , CUtlStringToken, Vector);
	/* ../../public/rendersystem/renderattrs.h:239 */
	Vector GetVectorValue(const CRenderAttributes* , CUtlStringToken, Vector);
	/* ../../public/rendersystem/renderattrs.h:245 */
	bool GetVectorValue(const CRenderAttributes* , Vector* , CUtlStringToken);
	/* ../../public/rendersystem/renderattrs.h:260 */
	void DeleteVectorValue(CRenderAttributes* , CUtlStringToken);
	/* ../../public/rendersystem/renderattrs.h:265 */
	Vector CopyVectorValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , Vector);
	/* ../../public/rendersystem/renderattrs.h:275 */
	void SetVector4DValue(CRenderAttributes* , CUtlStringToken, Vector4D);
	/* ../../public/rendersystem/renderattrs.h:280 */
	Vector4D GetVector4DValue(const CRenderAttributes* , CUtlStringToken, Vector4D);
	/* ../../public/rendersystem/renderattrs.h:286 */
	bool GetVector4DValue(const CRenderAttributes* , Vector4D* , CUtlStringToken);
	/* ../../public/rendersystem/renderattrs.h:291 */
	void DeleteVector4DValue(CRenderAttributes* , CUtlStringToken);
	/* ../../public/rendersystem/renderattrs.h:296 */
	Vector4D CopyVector4DValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , Vector4D);
	/* ../../public/rendersystem/renderattrs.h:311 */
	void SetVMatrixValue(CRenderAttributes* , CUtlStringToken, VMatrix);
	/* ../../public/rendersystem/renderattrs.h:316 */
	VMatrix GetVMatrixValue(const CRenderAttributes* , CUtlStringToken, VMatrix);
	/* ../../public/rendersystem/renderattrs.h:322 */
	bool GetVMatrixValue(const CRenderAttributes* , VMatrix* , CUtlStringToken);
	/* ../../public/rendersystem/renderattrs.h:327 */
	void DeleteVMatrixValue(CRenderAttributes* , CUtlStringToken);
	/* ../../public/rendersystem/renderattrs.h:332 */
	VMatrix CopyVMatrixValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , VMatrix);
	/* ../../public/rendersystem/renderattrs.h:347 */
	void SetPtrValue(CRenderAttributes* , CUtlStringToken, void* );
	/* ../../public/rendersystem/renderattrs.h:352 */
	void* GetPtrValue(const CRenderAttributes* , CUtlStringToken, void* );
	/* ../../public/rendersystem/renderattrs.h:358 */
	bool GetPtrValue(const CRenderAttributes* , void** , CUtlStringToken);
	/* ../../public/rendersystem/renderattrs.h:363 */
	void DeletePtrValue(CRenderAttributes* , CUtlStringToken);
	/* ../../public/rendersystem/renderattrs.h:368 */
	void* CopyPtrValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , void* );
	/* ../../public/rendersystem/renderattrs.h:383 */
	void SetBufferValue(CRenderAttributes* , CUtlStringToken, IndexBufferHandle_t);
	/* ../../public/rendersystem/renderattrs.h:391 */
	void SetBufferValue(CRenderAttributes* , CUtlStringToken, VertexBufferHandle_t);
	/* ../../public/rendersystem/renderattrs.h:396 */
	void SetBufferValue(CRenderAttributes* , CUtlStringToken, RenderBufferHandle_t);
	/* ../../public/rendersystem/renderattrs.h:404 */
	void SetStringValue(CRenderAttributes* , CUtlStringToken, const char* );
	/* ../../public/rendersystem/renderattrs.h:410 */
	bool GetStringValue(const CRenderAttributes* , CUtlString* , CUtlStringToken);
	/* ../../public/rendersystem/renderattrs.h:415 */
	void DeleteStringValue(CRenderAttributes* , CUtlStringToken);
	/* ../../public/rendersystem/renderattrs.h:425 */
	void SetIntVector4DValue(CRenderAttributes* , CUtlStringToken, int, int, int, int);
	/* ../../public/rendersystem/renderattrs.h:430 */
	IntVector4D GetIntVector4DValue(const CRenderAttributes* , CUtlStringToken, IntVector4D);
	/* ../../public/rendersystem/renderattrs.h:435 */
	bool GetIntVector4DValue(const CRenderAttributes* , IntVector4D* , CUtlStringToken);
	/* ../../public/rendersystem/renderattrs.h:450 */
	void SetIntValue(CRenderAttributes* , CUtlStringToken, int);
	/* ../../public/rendersystem/renderattrs.h:459 */
	int GetIntValue(const CRenderAttributes* , CUtlStringToken, int);
	/* ../../public/rendersystem/renderattrs.h:469 */
	bool GetIntValue(const CRenderAttributes* , int* , CUtlStringToken);
	/* ../../public/rendersystem/renderattrs.h:485 */
	void DeleteIntValue(CRenderAttributes* , CUtlStringToken);
	/* ../../public/rendersystem/renderattrs.h:494 */
	int CopyIntValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , int);
	/* ../../public/rendersystem/renderattrs.h:510 */
	void SetComboValue(CRenderAttributes* , CUtlStringToken, uint8);
	/* ../../public/rendersystem/renderattrs.h:518 */
	uint8 GetComboValue(const CRenderAttributes* , CUtlStringToken, uint8);
	/* ../../public/rendersystem/renderattrs.h:529 */
	bool GetComboValue(const CRenderAttributes* , uint8* , CUtlStringToken);
	/* ../../public/rendersystem/renderattrs.h:546 */
	uint8 CopyComboValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , uint8);
	/* ../../public/rendersystem/renderattrs.h:553 */
	void DeleteComboValue(CRenderAttributes* , CUtlStringToken);
	/* ../../public/rendersystem/renderattrs.h:569 */
	void SetBoolValue(CRenderAttributes* , CUtlStringToken, bool);
	/* ../../public/rendersystem/renderattrs.h:574 */
	bool GetBoolValue(const CRenderAttributes* , CUtlStringToken, bool);
	/* ../../public/rendersystem/renderattrs.h:579 */
	bool GetBoolValue(const CRenderAttributes* , bool* , CUtlStringToken);
	/* ../../public/rendersystem/renderattrs.h:590 */
	void DeleteBoolValue(CRenderAttributes* , CUtlStringToken);
	/* ../../public/rendersystem/renderattrs.h:598 */
	void SetSamplerValue(CRenderAttributes* , CUtlStringToken, CSamplerStateDesc);
	/* ../../public/rendersystem/renderattrs.h:603 */
	CSamplerStateDescBase GetSamplerValue(const CRenderAttributes* , CUtlStringToken, CSamplerStateDesc);
	/* ../../public/rendersystem/renderattrs.h:609 */
	bool GetSamplerValueToBind(const CRenderAttributes* , SamplerAttr_t& , CUtlStringToken);
	/* ../../public/rendersystem/renderattrs.h:617 */
	void SetTextureValue(CRenderAttributes* , CUtlStringToken, HRenderTexture, int32);
	/* ../../public/rendersystem/renderattrs.h:622 */
	HRenderTexture GetTextureValue(const CRenderAttributes* , CUtlStringToken, HRenderTexture);
	/* ../../public/rendersystem/renderattrs.h:629 */
	HRenderTexture GetFirstTexture(const CRenderAttributes* );
	/* ../../public/rendersystem/renderattrs.h:646 */
	bool GetTextureValue(const CRenderAttributes* , HRenderTexture* , CUtlStringToken);
	/* ../../public/rendersystem/renderattrs.h:660 */
	bool GetTextureValueAndMipLevelToBind(const CRenderAttributes* , TextureAttr_t& , CUtlStringToken);
	/* ../../public/rendersystem/renderattrs.h:665 */
	const TextureAttrForStorage_t* GetTextureValueAndMipLevelToBind(const CRenderAttributes* , CUtlStringToken);
	/* ../../public/rendersystem/renderattrs.h:671 */
	bool GetTextureValueAndMipLevelToBind(const CRenderAttributes* , HRenderTexture* , int* , CUtlStringToken);
	/* ../../public/rendersystem/renderattrs.h:689 */
	void DeleteTextureValue(CRenderAttributes* , CUtlStringToken);
	/* ../../public/rendersystem/renderattrs.h:694 */
	HRenderTexture CopyTextureValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , HRenderTexture);
	/* ../../public/rendersystem/renderattrs.h:730 */
	void SetConstantBufferValue(CRenderAttributes* , CUtlStringToken, ConstantBufferHandle_t, uint32);
	/* ../../public/rendersystem/renderattrs.h:735 */
	ConstantBufferAttr_t GetConstantBufferValue(const CRenderAttributes* , CUtlStringToken, ConstantBufferHandle_t, uint32);
	/* ../../public/rendersystem/renderattrs.h:741 */
	bool GetConstantBufferValue(const CRenderAttributes* , ConstantBufferAttr_t* , CUtlStringToken);
	/* ../../public/rendersystem/renderattrs.h:746 */
	void DeleteConstantBufferValue(CRenderAttributes* , CUtlStringToken);
	/* ../../public/rendersystem/renderattrs.h:751 */
	ConstantBufferAttr_t CopyConstantBufferValue(CRenderAttributes* , CUtlStringToken, CRenderAttributes& , ConstantBufferHandle_t, uint32);
	/* ../../public/rendersystem/renderattrs.h:804 */
	void SetDescriptorSetValue(CRenderAttributes* , CUtlStringToken, RenderDescriptorSetHandle_t, int32, int32, int32, int32);
	/* ../../public/rendersystem/renderattrs.h:810 */
	DescriptorSetAttr_t GetDescriptorSetValue(const CRenderAttributes* , CUtlStringToken, DescriptorSetAttr_t);
	/* ../../public/rendersystem/renderattrs.h:816 */
	bool GetDescriptorSetValue(const CRenderAttributes* , DescriptorSetAttr_t* , CUtlStringToken);
	/* ../../public/rendersystem/renderattrs.h:821 */
	void DeleteDescriptorSetValue(CRenderAttributes* , CUtlStringToken);
	/* ../../public/rendersystem/renderattrs.h:834 */
	void MoveToAnother(CRenderAttributes* , CRenderAttributes& );
	/* ../../public/rendersystem/renderattrs.h:848 */
	void MergeTo(const CRenderAttributes* , CRenderAttributes& );
	/* ../../public/rendersystem/renderattrs.h:861 */
	void SetParent(CRenderAttributes* , const CRenderAttributes* );
	/* ../../public/rendersystem/renderattrs.h:890 */
	const CRenderAttributes* GetParent(const CRenderAttributes* );
	/* ../../public/rendersystem/renderattrs.h:898 */
	void CRenderAttributes(CRenderAttributes* );
	/* ../../public/rendersystem/renderattrs.h:902 */
	void ~CRenderAttributes(CRenderAttributes* );
private:
	/* ../../public/rendersystem/renderattrs.h:912 */
	void SetAttr(CRenderAttributes* , CUtlStringToken, CSamplerStateDesc);
	/* ../../public/rendersystem/renderattrs.h:913 */
	void SetAttr(CRenderAttributes* , CUtlStringToken, HRenderTexture);
	/* ../../public/rendersystem/renderattrs.h:914 */
	void SetAttr(CRenderAttributes* , CUtlStringToken, HRenderTextureStrong);
	/* ../../public/rendersystem/renderattrs.h:915 */
	void SetAttr(CRenderAttributes* , CUtlStringToken, float);
	/* ../../public/rendersystem/renderattrs.h:916 */
	void SetAttr(CRenderAttributes* , CUtlStringToken, const Vector& );
	/* ../../public/rendersystem/renderattrs.h:917 */
	void SetAttr(CRenderAttributes* , CUtlStringToken, const VMatrix& );
	/* ../../public/rendersystem/renderattrs.h:918 */
	void SetAttr(CRenderAttributes* , CUtlStringToken, void* );
	/* ../../public/rendersystem/renderattrs.h:919 */
	void SetAttr(CRenderAttributes* , CUtlStringToken, bool);
	CUtlAttributeList<Vector4D, 8, Vector4D, 4> m_vec4Attrs; /* 0 176 */
	CUtlAttributeList<VMatrix, 1, VMatrix, 2> m_matrix4x4Attrs; /* 176 96 */
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4> m_intAttrs; /* 272 176 */
	TextureAttrList_t m_textureAttrs; /* 448 176 */
	SamplerAttrList_t m_samplerAttrs; /* 624 208 */
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4> m_constantBufferAttrs; /* 832 96 */
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4> m_descriptorSetAttrs; /* 928 128 */
	CUtlAttributeList<void*, 4, void*, 4> m_ptrAttrs; /* 1056 64 */
	CUtlAttributeList<CUtlString, 2, CUtlString, 2> m_stringAttrs; /* 1120 48 */
	const class CRenderAttributes * m_pParent; /* 1168 8 */
	/* ../../public/rendersystem/renderattrs.h:938 */
	void MergeToPtr(const CRenderAttributes* , CRenderAttributes* );
	const SamplerAttrList_t  & SamplerAttributes(const class CRenderAttributes  *); /* linkage=_ZNK17CRenderAttributes17SamplerAttributesEv */
	SamplerAttrList_t & SamplerAttributes(class CRenderAttributes *); /* linkage=_ZN17CRenderAttributes17SamplerAttributesEv */
	const TextureAttrList_t  & TextureAttributes(const class CRenderAttributes  *); /* linkage=_ZNK17CRenderAttributes17TextureAttributesEv */
	TextureAttrList_t & TextureAttributes(class CRenderAttributes *); /* linkage=_ZN17CRenderAttributes17TextureAttributesEv */
	/* <40287e2> ../public/rendersystem/renderattrs.h:113 */
	bool IsEmpty(const class CRenderAttributes  *); /* linkage=_ZNK17CRenderAttributes7IsEmptyEv */
	void Clear(class CRenderAttributes *, bool, bool); /* linkage=_ZN17CRenderAttributes5ClearEbb */
	void SetFloatValue(class CRenderAttributes *, class CUtlStringToken, float); /* linkage=_ZN17CRenderAttributes13SetFloatValueE15CUtlStringTokenf */
	float GetFloatValue(const class CRenderAttributes  *, class CUtlStringToken, float); /* linkage=_ZNK17CRenderAttributes13GetFloatValueE15CUtlStringTokenf */
	class QAngle GetQAngleValue(const class CRenderAttributes  *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes14GetQAngleValueE15CUtlStringToken */
	bool GetFloatValue(const class CRenderAttributes  *, float *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes13GetFloatValueEPf15CUtlStringToken */
	void DeleteFloatValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes16DeleteFloatValueE15CUtlStringToken */
	float CopyVectorFloatValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, float); /* linkage=_ZN17CRenderAttributes20CopyVectorFloatValueE15CUtlStringTokenRKS_f */
	void SetVector2DValue(class CRenderAttributes *, class CUtlStringToken, class Vector2D); /* linkage=_ZN17CRenderAttributes16SetVector2DValueE15CUtlStringToken8Vector2D */
	class Vector2D GetVector2DValue(const class CRenderAttributes  *, class CUtlStringToken, class Vector2D); /* linkage=_ZNK17CRenderAttributes16GetVector2DValueE15CUtlStringToken8Vector2D */
	bool GetVector2DValue(const class CRenderAttributes  *, class Vector2D *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes16GetVector2DValueEP8Vector2D15CUtlStringToken */
	void DeleteVector2DValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes19DeleteVector2DValueE15CUtlStringToken */
	class Vector2D CopyVector2DValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, class Vector2D); /* linkage=_ZN17CRenderAttributes17CopyVector2DValueE15CUtlStringTokenRKS_8Vector2D */
	void SetVectorValue(class CRenderAttributes *, class CUtlStringToken, class Vector); /* linkage=_ZN17CRenderAttributes14SetVectorValueE15CUtlStringToken6Vector */
	class Vector GetVectorValue(const class CRenderAttributes  *, class CUtlStringToken, class Vector); /* linkage=_ZNK17CRenderAttributes14GetVectorValueE15CUtlStringToken6Vector */
	bool GetVectorValue(const class CRenderAttributes  *, class Vector *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes14GetVectorValueEP6Vector15CUtlStringToken */
	void DeleteVectorValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes17DeleteVectorValueE15CUtlStringToken */
	class Vector CopyVectorValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, class Vector); /* linkage=_ZN17CRenderAttributes15CopyVectorValueE15CUtlStringTokenRKS_6Vector */
	void SetVector4DValue(class CRenderAttributes *, class CUtlStringToken, class Vector4D); /* linkage=_ZN17CRenderAttributes16SetVector4DValueE15CUtlStringToken8Vector4D */
	class Vector4D GetVector4DValue(const class CRenderAttributes  *, class CUtlStringToken, class Vector4D); /* linkage=_ZNK17CRenderAttributes16GetVector4DValueE15CUtlStringToken8Vector4D */
	bool GetVector4DValue(const class CRenderAttributes  *, class Vector4D *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes16GetVector4DValueEP8Vector4D15CUtlStringToken */
	void DeleteVector4DValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes19DeleteVector4DValueE15CUtlStringToken */
	class Vector4D CopyVector4DValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, class Vector4D); /* linkage=_ZN17CRenderAttributes17CopyVector4DValueE15CUtlStringTokenRKS_8Vector4D */
	void SetVMatrixValue(class CRenderAttributes *, class CUtlStringToken, class VMatrix); /* linkage=_ZN17CRenderAttributes15SetVMatrixValueE15CUtlStringToken7VMatrix */
	class VMatrix GetVMatrixValue(const class CRenderAttributes  *, class CUtlStringToken, class VMatrix); /* linkage=_ZNK17CRenderAttributes15GetVMatrixValueE15CUtlStringToken7VMatrix */
	bool GetVMatrixValue(const class CRenderAttributes  *, class VMatrix *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes15GetVMatrixValueEP7VMatrix15CUtlStringToken */
	void DeleteVMatrixValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes18DeleteVMatrixValueE15CUtlStringToken */
	class VMatrix CopyVMatrixValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, class VMatrix); /* linkage=_ZN17CRenderAttributes16CopyVMatrixValueE15CUtlStringTokenRKS_7VMatrix */
	void SetPtrValue(class CRenderAttributes *, class CUtlStringToken, void *); /* linkage=_ZN17CRenderAttributes11SetPtrValueE15CUtlStringTokenPv */
	void * GetPtrValue(const class CRenderAttributes  *, class CUtlStringToken, void *); /* linkage=_ZNK17CRenderAttributes11GetPtrValueE15CUtlStringTokenPv */
	bool GetPtrValue(const class CRenderAttributes  *, void * *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes11GetPtrValueEPPv15CUtlStringToken */
	void DeletePtrValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes14DeletePtrValueE15CUtlStringToken */
	void * CopyPtrValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, void *); /* linkage=_ZN17CRenderAttributes12CopyPtrValueE15CUtlStringTokenRKS_Pv */
	void SetBufferValue(class CRenderAttributes *, class CUtlStringToken, IndexBufferHandle_t); /* linkage=_ZN17CRenderAttributes14SetBufferValueE15CUtlStringTokenP21IndexBufferHandle_t__ */
	void SetBufferValue(class CRenderAttributes *, class CUtlStringToken, VertexBufferHandle_t); /* linkage=_ZN17CRenderAttributes14SetBufferValueE15CUtlStringTokenP22VertexBufferHandle_t__ */
	void SetBufferValue(class CRenderAttributes *, class CUtlStringToken, RenderBufferHandle_t); /* linkage=_ZN17CRenderAttributes14SetBufferValueE15CUtlStringTokenP22RenderBufferHandle_t__ */
	void SetStringValue(class CRenderAttributes *, class CUtlStringToken, const char  *); /* linkage=_ZN17CRenderAttributes14SetStringValueE15CUtlStringTokenPKc */
	bool GetStringValue(const class CRenderAttributes  *, class CUtlString *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes14GetStringValueEP10CUtlString15CUtlStringToken */
	void DeleteStringValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes17DeleteStringValueE15CUtlStringToken */
	void SetIntVector4DValue(class CRenderAttributes *, class CUtlStringToken, int, int, int, int); /* linkage=_ZN17CRenderAttributes19SetIntVector4DValueE15CUtlStringTokeniiii */
	class IntVector4D GetIntVector4DValue(const class CRenderAttributes  *, class CUtlStringToken, class IntVector4D); /* linkage=_ZNK17CRenderAttributes19GetIntVector4DValueE15CUtlStringToken11IntVector4D */
	bool GetIntVector4DValue(const class CRenderAttributes  *, class IntVector4D *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes19GetIntVector4DValueEP11IntVector4D15CUtlStringToken */
	void SetIntValue(class CRenderAttributes *, class CUtlStringToken, int); /* linkage=_ZN17CRenderAttributes11SetIntValueE15CUtlStringTokeni */
	int GetIntValue(const class CRenderAttributes  *, class CUtlStringToken, int); /* linkage=_ZNK17CRenderAttributes11GetIntValueE15CUtlStringTokeni */
	bool GetIntValue(const class CRenderAttributes  *, int *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes11GetIntValueEPi15CUtlStringToken */
	void DeleteIntValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes14DeleteIntValueE15CUtlStringToken */
	int CopyIntValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, int); /* linkage=_ZN17CRenderAttributes12CopyIntValueE15CUtlStringTokenRKS_i */
	void SetComboValue(class CRenderAttributes *, class CUtlStringToken, uint8); /* linkage=_ZN17CRenderAttributes13SetComboValueE15CUtlStringTokenh */
	uint8 GetComboValue(const class CRenderAttributes  *, class CUtlStringToken, uint8); /* linkage=_ZNK17CRenderAttributes13GetComboValueE15CUtlStringTokenh */
	bool GetComboValue(const class CRenderAttributes  *, uint8 *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes13GetComboValueEPh15CUtlStringToken */
	uint8 CopyComboValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, uint8); /* linkage=_ZN17CRenderAttributes14CopyComboValueE15CUtlStringTokenRKS_h */
	void DeleteComboValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes16DeleteComboValueE15CUtlStringToken */
	void SetBoolValue(class CRenderAttributes *, class CUtlStringToken, bool); /* linkage=_ZN17CRenderAttributes12SetBoolValueE15CUtlStringTokenb */
	bool GetBoolValue(const class CRenderAttributes  *, class CUtlStringToken, bool); /* linkage=_ZNK17CRenderAttributes12GetBoolValueE15CUtlStringTokenb */
	bool GetBoolValue(const class CRenderAttributes  *, bool *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes12GetBoolValueEPb15CUtlStringToken */
	void DeleteBoolValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes15DeleteBoolValueE15CUtlStringToken */
	void SetSamplerValue(class CRenderAttributes *, class CUtlStringToken, class CSamplerStateDesc); /* linkage=_ZN17CRenderAttributes15SetSamplerValueE15CUtlStringToken17CSamplerStateDesc */
	class CSamplerStateDescBase GetSamplerValue(const class CRenderAttributes  *, class CUtlStringToken, class CSamplerStateDesc); /* linkage=_ZNK17CRenderAttributes15GetSamplerValueE15CUtlStringToken17CSamplerStateDesc */
	bool GetSamplerValueToBind(const class CRenderAttributes  *, class SamplerAttr_t &, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes21GetSamplerValueToBindERNS_13SamplerAttr_tE15CUtlStringToken */
	void SetTextureValue(class CRenderAttributes *, class CUtlStringToken, HRenderTexture, int32); /* linkage=_ZN17CRenderAttributes15SetTextureValueE15CUtlStringToken11CWeakHandleI31InfoForResourceTypeCTextureBaseEi */
	HRenderTexture GetTextureValue(const class CRenderAttributes  *, class CUtlStringToken, HRenderTexture); /* linkage=_ZNK17CRenderAttributes15GetTextureValueE15CUtlStringToken11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	HRenderTexture GetFirstTexture(const class CRenderAttributes  *); /* linkage=_ZNK17CRenderAttributes15GetFirstTextureEv */
	bool GetTextureValue(const class CRenderAttributes  *, HRenderTexture *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes15GetTextureValueEP11CWeakHandleI31InfoForResourceTypeCTextureBaseE15CUtlStringToken */
	bool GetTextureValueAndMipLevelToBind(const class CRenderAttributes  *, class TextureAttr_t &, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes32GetTextureValueAndMipLevelToBindERNS_13TextureAttr_tE15CUtlStringToken */
	const class TextureAttrForStorage_t  * GetTextureValueAndMipLevelToBind(const class CRenderAttributes  *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes32GetTextureValueAndMipLevelToBindE15CUtlStringToken */
	bool GetTextureValueAndMipLevelToBind(const class CRenderAttributes  *, HRenderTexture *, int *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes32GetTextureValueAndMipLevelToBindEP11CWeakHandleI31InfoForResourceTypeCTextureBaseEPi15CUtlStringToken */
	void DeleteTextureValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes18DeleteTextureValueE15CUtlStringToken */
	HRenderTexture CopyTextureValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, HRenderTexture); /* linkage=_ZN17CRenderAttributes16CopyTextureValueE15CUtlStringTokenRKS_11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	void SetConstantBufferValue(class CRenderAttributes *, class CUtlStringToken, ConstantBufferHandle_t, uint32); /* linkage=_ZN17CRenderAttributes22SetConstantBufferValueE15CUtlStringTokenP24ConstantBufferHandle_t__j */
	class ConstantBufferAttr_t GetConstantBufferValue(const class CRenderAttributes  *, class CUtlStringToken, ConstantBufferHandle_t, uint32); /* linkage=_ZNK17CRenderAttributes22GetConstantBufferValueE15CUtlStringTokenP24ConstantBufferHandle_t__j */
	bool GetConstantBufferValue(const class CRenderAttributes  *, class ConstantBufferAttr_t *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes22GetConstantBufferValueEPNS_20ConstantBufferAttr_tE15CUtlStringToken */
	void DeleteConstantBufferValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes25DeleteConstantBufferValueE15CUtlStringToken */
	class ConstantBufferAttr_t CopyConstantBufferValue(class CRenderAttributes *, class CUtlStringToken, class CRenderAttributes &, ConstantBufferHandle_t, uint32); /* linkage=_ZN17CRenderAttributes23CopyConstantBufferValueE15CUtlStringTokenRS_P24ConstantBufferHandle_t__j */
	void SetDescriptorSetValue(class CRenderAttributes *, class CUtlStringToken, RenderDescriptorSetHandle_t, int32, int32, int32, int32); /* linkage=_ZN17CRenderAttributes21SetDescriptorSetValueE15CUtlStringTokenP29RenderDescriptorSetHandle_t__iiii */
	class DescriptorSetAttr_t GetDescriptorSetValue(const class CRenderAttributes  *, class CUtlStringToken, class DescriptorSetAttr_t); /* linkage=_ZNK17CRenderAttributes21GetDescriptorSetValueE15CUtlStringTokenNS_19DescriptorSetAttr_tE */
	bool GetDescriptorSetValue(const class CRenderAttributes  *, class DescriptorSetAttr_t *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes21GetDescriptorSetValueEPNS_19DescriptorSetAttr_tE15CUtlStringToken */
	void DeleteDescriptorSetValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes24DeleteDescriptorSetValueE15CUtlStringToken */
	void MoveToAnother(class CRenderAttributes *, class CRenderAttributes &); /* linkage=_ZN17CRenderAttributes13MoveToAnotherERS_ */
	void MergeTo(const class CRenderAttributes  *, class CRenderAttributes &); /* linkage=_ZNK17CRenderAttributes7MergeToERS_ */
	void SetParent(class CRenderAttributes *, const class CRenderAttributes  *); /* linkage=_ZN17CRenderAttributes9SetParentEPKS_ */
	const class CRenderAttributes  * GetParent(const class CRenderAttributes  *); /* linkage=_ZNK17CRenderAttributes9GetParentEv */
	void CRenderAttributes(class CRenderAttributes *); /* linkage=_ZN17CRenderAttributesC4Ev */
	void ~CRenderAttributes(class CRenderAttributes *); /* linkage=_ZN17CRenderAttributesD4Ev */
	void SetAttr(class CRenderAttributes *, class CUtlStringToken, class CSamplerStateDesc); /* linkage=_ZN17CRenderAttributes7SetAttrE15CUtlStringToken17CSamplerStateDesc */
	void SetAttr(class CRenderAttributes *, class CUtlStringToken, HRenderTexture); /* linkage=_ZN17CRenderAttributes7SetAttrE15CUtlStringToken11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	void SetAttr(class CRenderAttributes *, class CUtlStringToken, HRenderTextureStrong); /* linkage=_ZN17CRenderAttributes7SetAttrE15CUtlStringToken13CStrongHandleI31InfoForResourceTypeCTextureBaseE */
	void SetAttr(class CRenderAttributes *, class CUtlStringToken, float); /* linkage=_ZN17CRenderAttributes7SetAttrE15CUtlStringTokenf */
	void SetAttr(class CRenderAttributes *, class CUtlStringToken, const class Vector  &); /* linkage=_ZN17CRenderAttributes7SetAttrE15CUtlStringTokenRK6Vector */
	void SetAttr(class CRenderAttributes *, class CUtlStringToken, const class VMatrix  &); /* linkage=_ZN17CRenderAttributes7SetAttrE15CUtlStringTokenRK7VMatrix */
	void SetAttr(class CRenderAttributes *, class CUtlStringToken, void *); /* linkage=_ZN17CRenderAttributes7SetAttrE15CUtlStringTokenPv */
	void SetAttr(class CRenderAttributes *, class CUtlStringToken, bool); /* linkage=_ZN17CRenderAttributes7SetAttrE15CUtlStringTokenb */
	void MergeToPtr(const class CRenderAttributes  *, class CRenderAttributes *); /* linkage=_ZNK17CRenderAttributes10MergeToPtrEPS_ */
};

// <001260FF> ../public/rendersystem/renderattrs.h:20
// member functions: 218
// member variables: 10
// class size: 1,184
class CRenderAttributes {
	/* ../public/rendersystem/renderattrs.h:26 */
	struct SamplerAttrForStorage_t {
		CSamplerStateDesc samplerDesc; /* 0 20 */
		/* ../public/rendersystem/renderattrs.h:30 */
		void SamplerAttrForStorage_t(SamplerAttrForStorage_t* );
		/* ../public/rendersystem/renderattrs.h:33 */
		void SamplerAttrForStorage_t(SamplerAttrForStorage_t* , const CSamplerStateDesc& );
		/* ../public/rendersystem/renderattrs.h:37 */
		void SamplerAttrForStorage_t(SamplerAttrForStorage_t* , const SamplerAttr_t& );
		/* ../public/rendersystem/renderattrs.h:44 */
		SamplerAttrForStorage_t& operator=(SamplerAttrForStorage_t* , const SamplerAttr_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/rendersystem/renderattrs.h:47 */
	struct SamplerAttr_t {
		CSamplerStateDesc samplerDesc; /* 0 20 */
		/* ../public/rendersystem/renderattrs.h:50 */
		void SamplerAttr_t(SamplerAttr_t* );
		/* ../public/rendersystem/renderattrs.h:53 */
		void SamplerAttr_t(SamplerAttr_t* , const CSamplerStateDesc& );
		/* ../public/rendersystem/renderattrs.h:57 */
		void SamplerAttr_t(SamplerAttr_t* , const SamplerAttrForStorage_t& );
		/* ../public/rendersystem/renderattrs.h:64 */
		SamplerAttr_t& operator=(SamplerAttr_t* , const SamplerAttrForStorage_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/rendersystem/renderattrs.h:74 */
	struct TextureAttrForStorage_t {
		/* ../public/rendersystem/renderattrs.h:76 */
		void TextureAttrForStorage_t(TextureAttrForStorage_t* );
		/* ../public/rendersystem/renderattrs.h:77 */
		void TextureAttrForStorage_t(TextureAttrForStorage_t* , HRenderTexture, int32);
		/* ../public/rendersystem/renderattrs.h:78 */
		void TextureAttrForStorage_t(TextureAttrForStorage_t* , const TextureAttr_t& );
		HRenderTexture texture; /* 0 8 */
		int32 nSpecificMipLevelToBind; /* 8 4 */
		/* ../public/rendersystem/renderattrs.h:82 */
		TextureAttrForStorage_t& operator=(TextureAttrForStorage_t* , const TextureAttr_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/rendersystem/renderattrs.h:90 */
	struct TextureAttr_t {
		/* ../public/rendersystem/renderattrs.h:92 */
		void TextureAttr_t(TextureAttr_t* );
		/* ../public/rendersystem/renderattrs.h:93 */
		void TextureAttr_t(TextureAttr_t* , HRenderTexture, int32);
		/* ../public/rendersystem/renderattrs.h:94 */
		void TextureAttr_t(TextureAttr_t* , const TextureAttrForStorage_t& );
		HRenderTexture texture; /* 0 8 */
		int32 nSpecificMipLevelToBind; /* 8 4 */
		/* ../public/rendersystem/renderattrs.h:103 */
		TextureAttr_t& operator=(TextureAttr_t* , const TextureAttrForStorage_t& );
		void TextureAttr_t(TextureAttr_t* , const TextureAttr_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/rendersystem/renderattrs.h:709 */
	struct ConstantBufferAttr_t {
		/* ../public/rendersystem/renderattrs.h:711 */
		void ConstantBufferAttr_t(ConstantBufferAttr_t* );
		/* ../public/rendersystem/renderattrs.h:712 */
		void ConstantBufferAttr_t(ConstantBufferAttr_t* , ConstantBufferHandle_t, uint32);
		/* ../public/rendersystem/renderattrs.h:713 */
		void ConstantBufferAttr_t(ConstantBufferAttr_t* , const ConstantBufferAttr_t& );
		ConstantBufferHandle_t hBuffer; /* 0 8 */
		uint32 nView; /* 8 4 */
		/* ../public/rendersystem/renderattrs.h:722 */
		ConstantBufferAttr_t& operator=(ConstantBufferAttr_t* , const ConstantBufferAttr_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/rendersystem/renderattrs.h:766 */
	struct DescriptorSetAttr_t {
		/* ../public/rendersystem/renderattrs.h:768 */
		void DescriptorSetAttr_t(DescriptorSetAttr_t* );
		/* ../public/rendersystem/renderattrs.h:769 */
		void DescriptorSetAttr_t(DescriptorSetAttr_t* , RenderDescriptorSetHandle_t, int32, int32, int32, int32);
		/* ../public/rendersystem/renderattrs.h:777 */
		void DescriptorSetAttr_t(DescriptorSetAttr_t* , const DescriptorSetAttr_t& );
		RenderDescriptorSetHandle_t hDescriptorSet; /* 0 8 */
		int32 nCbufferOffsets[4]; /* 8 16 */
		/* ../public/rendersystem/renderattrs.h:793 */
		DescriptorSetAttr_t& operator=(DescriptorSetAttr_t* , const DescriptorSetAttr_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/rendersystem/renderattrs.h:67 */
	typedef struct CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8> SamplerAttrList_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/rendersystem/renderattrs.h:69 */
	const SamplerAttrList_t& SamplerAttributes(const CRenderAttributes* );
	/* ../public/rendersystem/renderattrs.h:70 */
	SamplerAttrList_t& SamplerAttributes(CRenderAttributes* );
	/* ../public/rendersystem/renderattrs.h:106 */
	typedef struct CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8> TextureAttrList_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/rendersystem/renderattrs.h:109 */
	const TextureAttrList_t& TextureAttributes(const CRenderAttributes* );
	/* ../public/rendersystem/renderattrs.h:110 */
	TextureAttrList_t& TextureAttributes(CRenderAttributes* );
	/* ../public/rendersystem/renderattrs.h:113 */
	bool IsEmpty(const CRenderAttributes* );
	/* ../public/rendersystem/renderattrs.h:126 */
	void Clear(CRenderAttributes* , bool, bool);
	/* ../public/rendersystem/renderattrs.h:146 */
	void SetFloatValue(CRenderAttributes* , CUtlStringToken, float);
	/* ../public/rendersystem/renderattrs.h:151 */
	float GetFloatValue(const CRenderAttributes* , CUtlStringToken, float);
	/* ../public/rendersystem/renderattrs.h:156 */
	QAngle GetQAngleValue(const CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:163 */
	bool GetFloatValue(const CRenderAttributes* , float* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:178 */
	void DeleteFloatValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:183 */
	float CopyVectorFloatValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , float);
	/* ../public/rendersystem/renderattrs.h:193 */
	void SetVector2DValue(CRenderAttributes* , CUtlStringToken, Vector2D);
	/* ../public/rendersystem/renderattrs.h:198 */
	Vector2D GetVector2DValue(const CRenderAttributes* , CUtlStringToken, Vector2D);
	/* ../public/rendersystem/renderattrs.h:204 */
	bool GetVector2DValue(const CRenderAttributes* , Vector2D* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:219 */
	void DeleteVector2DValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:224 */
	Vector2D CopyVector2DValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , Vector2D);
	/* ../public/rendersystem/renderattrs.h:234 */
	void SetVectorValue(CRenderAttributes* , CUtlStringToken, Vector);
	/* ../public/rendersystem/renderattrs.h:239 */
	Vector GetVectorValue(const CRenderAttributes* , CUtlStringToken, Vector);
	/* ../public/rendersystem/renderattrs.h:245 */
	bool GetVectorValue(const CRenderAttributes* , Vector* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:260 */
	void DeleteVectorValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:265 */
	Vector CopyVectorValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , Vector);
	/* ../public/rendersystem/renderattrs.h:275 */
	void SetVector4DValue(CRenderAttributes* , CUtlStringToken, Vector4D);
	/* ../public/rendersystem/renderattrs.h:280 */
	Vector4D GetVector4DValue(const CRenderAttributes* , CUtlStringToken, Vector4D);
	/* ../public/rendersystem/renderattrs.h:286 */
	bool GetVector4DValue(const CRenderAttributes* , Vector4D* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:291 */
	void DeleteVector4DValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:296 */
	Vector4D CopyVector4DValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , Vector4D);
	/* ../public/rendersystem/renderattrs.h:311 */
	void SetVMatrixValue(CRenderAttributes* , CUtlStringToken, VMatrix);
	/* ../public/rendersystem/renderattrs.h:316 */
	VMatrix GetVMatrixValue(const CRenderAttributes* , CUtlStringToken, VMatrix);
	/* ../public/rendersystem/renderattrs.h:322 */
	bool GetVMatrixValue(const CRenderAttributes* , VMatrix* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:327 */
	void DeleteVMatrixValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:332 */
	VMatrix CopyVMatrixValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , VMatrix);
	/* ../public/rendersystem/renderattrs.h:347 */
	void SetPtrValue(CRenderAttributes* , CUtlStringToken, void* );
	/* ../public/rendersystem/renderattrs.h:352 */
	void* GetPtrValue(const CRenderAttributes* , CUtlStringToken, void* );
	/* ../public/rendersystem/renderattrs.h:358 */
	bool GetPtrValue(const CRenderAttributes* , void** , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:363 */
	void DeletePtrValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:368 */
	void* CopyPtrValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , void* );
	/* ../public/rendersystem/renderattrs.h:383 */
	void SetBufferValue(CRenderAttributes* , CUtlStringToken, IndexBufferHandle_t);
	/* ../public/rendersystem/renderattrs.h:391 */
	void SetBufferValue(CRenderAttributes* , CUtlStringToken, VertexBufferHandle_t);
	/* ../public/rendersystem/renderattrs.h:396 */
	void SetBufferValue(CRenderAttributes* , CUtlStringToken, RenderBufferHandle_t);
	/* ../public/rendersystem/renderattrs.h:404 */
	void SetStringValue(CRenderAttributes* , CUtlStringToken, const char* );
	/* ../public/rendersystem/renderattrs.h:410 */
	bool GetStringValue(const CRenderAttributes* , CUtlString* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:415 */
	void DeleteStringValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:425 */
	void SetIntVector4DValue(CRenderAttributes* , CUtlStringToken, int, int, int, int);
	/* ../public/rendersystem/renderattrs.h:430 */
	IntVector4D GetIntVector4DValue(const CRenderAttributes* , CUtlStringToken, IntVector4D);
	/* ../public/rendersystem/renderattrs.h:435 */
	bool GetIntVector4DValue(const CRenderAttributes* , IntVector4D* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:450 */
	void SetIntValue(CRenderAttributes* , CUtlStringToken, int);
	/* ../public/rendersystem/renderattrs.h:459 */
	int GetIntValue(const CRenderAttributes* , CUtlStringToken, int);
	/* ../public/rendersystem/renderattrs.h:469 */
	bool GetIntValue(const CRenderAttributes* , int* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:485 */
	void DeleteIntValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:494 */
	int CopyIntValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , int);
	/* ../public/rendersystem/renderattrs.h:510 */
	void SetComboValue(CRenderAttributes* , CUtlStringToken, uint8);
	/* ../public/rendersystem/renderattrs.h:518 */
	uint8 GetComboValue(const CRenderAttributes* , CUtlStringToken, uint8);
	/* ../public/rendersystem/renderattrs.h:529 */
	bool GetComboValue(const CRenderAttributes* , uint8* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:546 */
	uint8 CopyComboValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , uint8);
	/* ../public/rendersystem/renderattrs.h:553 */
	void DeleteComboValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:569 */
	void SetBoolValue(CRenderAttributes* , CUtlStringToken, bool);
	/* ../public/rendersystem/renderattrs.h:574 */
	bool GetBoolValue(const CRenderAttributes* , CUtlStringToken, bool);
	/* ../public/rendersystem/renderattrs.h:579 */
	bool GetBoolValue(const CRenderAttributes* , bool* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:590 */
	void DeleteBoolValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:598 */
	void SetSamplerValue(CRenderAttributes* , CUtlStringToken, CSamplerStateDesc);
	/* ../public/rendersystem/renderattrs.h:603 */
	CSamplerStateDescBase GetSamplerValue(const CRenderAttributes* , CUtlStringToken, CSamplerStateDesc);
	/* ../public/rendersystem/renderattrs.h:609 */
	bool GetSamplerValueToBind(const CRenderAttributes* , SamplerAttr_t& , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:617 */
	void SetTextureValue(CRenderAttributes* , CUtlStringToken, HRenderTexture, int32);
	/* ../public/rendersystem/renderattrs.h:622 */
	HRenderTexture GetTextureValue(const CRenderAttributes* , CUtlStringToken, HRenderTexture);
	/* ../public/rendersystem/renderattrs.h:629 */
	HRenderTexture GetFirstTexture(const CRenderAttributes* );
	/* ../public/rendersystem/renderattrs.h:646 */
	bool GetTextureValue(const CRenderAttributes* , HRenderTexture* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:660 */
	bool GetTextureValueAndMipLevelToBind(const CRenderAttributes* , TextureAttr_t& , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:665 */
	const TextureAttrForStorage_t* GetTextureValueAndMipLevelToBind(const CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:671 */
	bool GetTextureValueAndMipLevelToBind(const CRenderAttributes* , HRenderTexture* , int* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:689 */
	void DeleteTextureValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:694 */
	HRenderTexture CopyTextureValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , HRenderTexture);
	/* ../public/rendersystem/renderattrs.h:730 */
	void SetConstantBufferValue(CRenderAttributes* , CUtlStringToken, ConstantBufferHandle_t, uint32);
	/* ../public/rendersystem/renderattrs.h:735 */
	ConstantBufferAttr_t GetConstantBufferValue(const CRenderAttributes* , CUtlStringToken, ConstantBufferHandle_t, uint32);
	/* ../public/rendersystem/renderattrs.h:741 */
	bool GetConstantBufferValue(const CRenderAttributes* , ConstantBufferAttr_t* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:746 */
	void DeleteConstantBufferValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:751 */
	ConstantBufferAttr_t CopyConstantBufferValue(CRenderAttributes* , CUtlStringToken, CRenderAttributes& , ConstantBufferHandle_t, uint32);
	/* ../public/rendersystem/renderattrs.h:804 */
	void SetDescriptorSetValue(CRenderAttributes* , CUtlStringToken, RenderDescriptorSetHandle_t, int32, int32, int32, int32);
	/* ../public/rendersystem/renderattrs.h:810 */
	DescriptorSetAttr_t GetDescriptorSetValue(const CRenderAttributes* , CUtlStringToken, DescriptorSetAttr_t);
	/* ../public/rendersystem/renderattrs.h:816 */
	bool GetDescriptorSetValue(const CRenderAttributes* , DescriptorSetAttr_t* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:821 */
	void DeleteDescriptorSetValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:834 */
	void MoveToAnother(CRenderAttributes* , CRenderAttributes& );
	/* ../public/rendersystem/renderattrs.h:848 */
	void MergeTo(const CRenderAttributes* , CRenderAttributes& );
	/* ../public/rendersystem/renderattrs.h:861 */
	void SetParent(CRenderAttributes* , const CRenderAttributes* );
	/* ../public/rendersystem/renderattrs.h:890 */
	const CRenderAttributes* GetParent(const CRenderAttributes* );
	/* ../public/rendersystem/renderattrs.h:898 */
	void CRenderAttributes(CRenderAttributes* );
	/* ../public/rendersystem/renderattrs.h:902 */
	void ~CRenderAttributes(CRenderAttributes* );
private:
	/* ../public/rendersystem/renderattrs.h:912 */
	void SetAttr(CRenderAttributes* , CUtlStringToken, CSamplerStateDesc);
	/* ../public/rendersystem/renderattrs.h:913 */
	void SetAttr(CRenderAttributes* , CUtlStringToken, HRenderTexture);
	/* ../public/rendersystem/renderattrs.h:914 */
	void SetAttr(CRenderAttributes* , CUtlStringToken, HRenderTextureStrong);
	/* ../public/rendersystem/renderattrs.h:915 */
	void SetAttr(CRenderAttributes* , CUtlStringToken, float);
	/* ../public/rendersystem/renderattrs.h:916 */
	void SetAttr(CRenderAttributes* , CUtlStringToken, const Vector& );
	/* ../public/rendersystem/renderattrs.h:917 */
	void SetAttr(CRenderAttributes* , CUtlStringToken, const VMatrix& );
	/* ../public/rendersystem/renderattrs.h:918 */
	void SetAttr(CRenderAttributes* , CUtlStringToken, void* );
	/* ../public/rendersystem/renderattrs.h:919 */
	void SetAttr(CRenderAttributes* , CUtlStringToken, bool);
	CUtlAttributeList<Vector4D, 8, Vector4D, 4> m_vec4Attrs; /* 0 176 */
	CUtlAttributeList<VMatrix, 1, VMatrix, 2> m_matrix4x4Attrs; /* 176 96 */
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4> m_intAttrs; /* 272 176 */
	TextureAttrList_t m_textureAttrs; /* 448 176 */
	SamplerAttrList_t m_samplerAttrs; /* 624 208 */
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4> m_constantBufferAttrs; /* 832 96 */
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4> m_descriptorSetAttrs; /* 928 128 */
	CUtlAttributeList<void*, 4, void*, 4> m_ptrAttrs; /* 1056 64 */
	CUtlAttributeList<CUtlString, 2, CUtlString, 2> m_stringAttrs; /* 1120 48 */
	const class CRenderAttributes * m_pParent; /* 1168 8 */
	/* ../public/rendersystem/renderattrs.h:938 */
	void MergeToPtr(const CRenderAttributes* , CRenderAttributes* );
	/* ../public/rendersystem/renderattrs.h:701 */
	void VisitTextureValues<CMaterial2::GetAllTextureAttributes(CUtlVector<IMaterial2::TextureAttributeValue_t>&) const::<lambda(uint32, const CRenderAttributes::TextureAttr_t&)> >(const CRenderAttributes* , );
	const SamplerAttrList_t  & SamplerAttributes(const class CRenderAttributes  *); /* linkage=_ZNK17CRenderAttributes17SamplerAttributesEv */
	SamplerAttrList_t & SamplerAttributes(class CRenderAttributes *); /* linkage=_ZN17CRenderAttributes17SamplerAttributesEv */
	const TextureAttrList_t  & TextureAttributes(const class CRenderAttributes  *); /* linkage=_ZNK17CRenderAttributes17TextureAttributesEv */
	TextureAttrList_t & TextureAttributes(class CRenderAttributes *); /* linkage=_ZN17CRenderAttributes17TextureAttributesEv */
	/* <40287e2> ../public/rendersystem/renderattrs.h:113 */
	bool IsEmpty(const class CRenderAttributes  *); /* linkage=_ZNK17CRenderAttributes7IsEmptyEv */
	void Clear(class CRenderAttributes *, bool, bool); /* linkage=_ZN17CRenderAttributes5ClearEbb */
	void SetFloatValue(class CRenderAttributes *, class CUtlStringToken, float); /* linkage=_ZN17CRenderAttributes13SetFloatValueE15CUtlStringTokenf */
	float GetFloatValue(const class CRenderAttributes  *, class CUtlStringToken, float); /* linkage=_ZNK17CRenderAttributes13GetFloatValueE15CUtlStringTokenf */
	class QAngle GetQAngleValue(const class CRenderAttributes  *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes14GetQAngleValueE15CUtlStringToken */
	bool GetFloatValue(const class CRenderAttributes  *, float *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes13GetFloatValueEPf15CUtlStringToken */
	void DeleteFloatValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes16DeleteFloatValueE15CUtlStringToken */
	float CopyVectorFloatValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, float); /* linkage=_ZN17CRenderAttributes20CopyVectorFloatValueE15CUtlStringTokenRKS_f */
	void SetVector2DValue(class CRenderAttributes *, class CUtlStringToken, class Vector2D); /* linkage=_ZN17CRenderAttributes16SetVector2DValueE15CUtlStringToken8Vector2D */
	class Vector2D GetVector2DValue(const class CRenderAttributes  *, class CUtlStringToken, class Vector2D); /* linkage=_ZNK17CRenderAttributes16GetVector2DValueE15CUtlStringToken8Vector2D */
	bool GetVector2DValue(const class CRenderAttributes  *, class Vector2D *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes16GetVector2DValueEP8Vector2D15CUtlStringToken */
	void DeleteVector2DValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes19DeleteVector2DValueE15CUtlStringToken */
	class Vector2D CopyVector2DValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, class Vector2D); /* linkage=_ZN17CRenderAttributes17CopyVector2DValueE15CUtlStringTokenRKS_8Vector2D */
	void SetVectorValue(class CRenderAttributes *, class CUtlStringToken, class Vector); /* linkage=_ZN17CRenderAttributes14SetVectorValueE15CUtlStringToken6Vector */
	class Vector GetVectorValue(const class CRenderAttributes  *, class CUtlStringToken, class Vector); /* linkage=_ZNK17CRenderAttributes14GetVectorValueE15CUtlStringToken6Vector */
	bool GetVectorValue(const class CRenderAttributes  *, class Vector *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes14GetVectorValueEP6Vector15CUtlStringToken */
	void DeleteVectorValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes17DeleteVectorValueE15CUtlStringToken */
	class Vector CopyVectorValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, class Vector); /* linkage=_ZN17CRenderAttributes15CopyVectorValueE15CUtlStringTokenRKS_6Vector */
	void SetVector4DValue(class CRenderAttributes *, class CUtlStringToken, class Vector4D); /* linkage=_ZN17CRenderAttributes16SetVector4DValueE15CUtlStringToken8Vector4D */
	class Vector4D GetVector4DValue(const class CRenderAttributes  *, class CUtlStringToken, class Vector4D); /* linkage=_ZNK17CRenderAttributes16GetVector4DValueE15CUtlStringToken8Vector4D */
	bool GetVector4DValue(const class CRenderAttributes  *, class Vector4D *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes16GetVector4DValueEP8Vector4D15CUtlStringToken */
	void DeleteVector4DValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes19DeleteVector4DValueE15CUtlStringToken */
	class Vector4D CopyVector4DValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, class Vector4D); /* linkage=_ZN17CRenderAttributes17CopyVector4DValueE15CUtlStringTokenRKS_8Vector4D */
	void SetVMatrixValue(class CRenderAttributes *, class CUtlStringToken, class VMatrix); /* linkage=_ZN17CRenderAttributes15SetVMatrixValueE15CUtlStringToken7VMatrix */
	class VMatrix GetVMatrixValue(const class CRenderAttributes  *, class CUtlStringToken, class VMatrix); /* linkage=_ZNK17CRenderAttributes15GetVMatrixValueE15CUtlStringToken7VMatrix */
	bool GetVMatrixValue(const class CRenderAttributes  *, class VMatrix *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes15GetVMatrixValueEP7VMatrix15CUtlStringToken */
	void DeleteVMatrixValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes18DeleteVMatrixValueE15CUtlStringToken */
	class VMatrix CopyVMatrixValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, class VMatrix); /* linkage=_ZN17CRenderAttributes16CopyVMatrixValueE15CUtlStringTokenRKS_7VMatrix */
	void SetPtrValue(class CRenderAttributes *, class CUtlStringToken, void *); /* linkage=_ZN17CRenderAttributes11SetPtrValueE15CUtlStringTokenPv */
	void * GetPtrValue(const class CRenderAttributes  *, class CUtlStringToken, void *); /* linkage=_ZNK17CRenderAttributes11GetPtrValueE15CUtlStringTokenPv */
	bool GetPtrValue(const class CRenderAttributes  *, void * *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes11GetPtrValueEPPv15CUtlStringToken */
	void DeletePtrValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes14DeletePtrValueE15CUtlStringToken */
	void * CopyPtrValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, void *); /* linkage=_ZN17CRenderAttributes12CopyPtrValueE15CUtlStringTokenRKS_Pv */
	void SetBufferValue(class CRenderAttributes *, class CUtlStringToken, IndexBufferHandle_t); /* linkage=_ZN17CRenderAttributes14SetBufferValueE15CUtlStringTokenP21IndexBufferHandle_t__ */
	void SetBufferValue(class CRenderAttributes *, class CUtlStringToken, VertexBufferHandle_t); /* linkage=_ZN17CRenderAttributes14SetBufferValueE15CUtlStringTokenP22VertexBufferHandle_t__ */
	void SetBufferValue(class CRenderAttributes *, class CUtlStringToken, RenderBufferHandle_t); /* linkage=_ZN17CRenderAttributes14SetBufferValueE15CUtlStringTokenP22RenderBufferHandle_t__ */
	void SetStringValue(class CRenderAttributes *, class CUtlStringToken, const char  *); /* linkage=_ZN17CRenderAttributes14SetStringValueE15CUtlStringTokenPKc */
	bool GetStringValue(const class CRenderAttributes  *, class CUtlString *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes14GetStringValueEP10CUtlString15CUtlStringToken */
	void DeleteStringValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes17DeleteStringValueE15CUtlStringToken */
	void SetIntVector4DValue(class CRenderAttributes *, class CUtlStringToken, int, int, int, int); /* linkage=_ZN17CRenderAttributes19SetIntVector4DValueE15CUtlStringTokeniiii */
	class IntVector4D GetIntVector4DValue(const class CRenderAttributes  *, class CUtlStringToken, class IntVector4D); /* linkage=_ZNK17CRenderAttributes19GetIntVector4DValueE15CUtlStringToken11IntVector4D */
	bool GetIntVector4DValue(const class CRenderAttributes  *, class IntVector4D *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes19GetIntVector4DValueEP11IntVector4D15CUtlStringToken */
	void SetIntValue(class CRenderAttributes *, class CUtlStringToken, int); /* linkage=_ZN17CRenderAttributes11SetIntValueE15CUtlStringTokeni */
	int GetIntValue(const class CRenderAttributes  *, class CUtlStringToken, int); /* linkage=_ZNK17CRenderAttributes11GetIntValueE15CUtlStringTokeni */
	bool GetIntValue(const class CRenderAttributes  *, int *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes11GetIntValueEPi15CUtlStringToken */
	void DeleteIntValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes14DeleteIntValueE15CUtlStringToken */
	int CopyIntValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, int); /* linkage=_ZN17CRenderAttributes12CopyIntValueE15CUtlStringTokenRKS_i */
	void SetComboValue(class CRenderAttributes *, class CUtlStringToken, uint8); /* linkage=_ZN17CRenderAttributes13SetComboValueE15CUtlStringTokenh */
	uint8 GetComboValue(const class CRenderAttributes  *, class CUtlStringToken, uint8); /* linkage=_ZNK17CRenderAttributes13GetComboValueE15CUtlStringTokenh */
	bool GetComboValue(const class CRenderAttributes  *, uint8 *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes13GetComboValueEPh15CUtlStringToken */
	uint8 CopyComboValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, uint8); /* linkage=_ZN17CRenderAttributes14CopyComboValueE15CUtlStringTokenRKS_h */
	void DeleteComboValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes16DeleteComboValueE15CUtlStringToken */
	void SetBoolValue(class CRenderAttributes *, class CUtlStringToken, bool); /* linkage=_ZN17CRenderAttributes12SetBoolValueE15CUtlStringTokenb */
	bool GetBoolValue(const class CRenderAttributes  *, class CUtlStringToken, bool); /* linkage=_ZNK17CRenderAttributes12GetBoolValueE15CUtlStringTokenb */
	bool GetBoolValue(const class CRenderAttributes  *, bool *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes12GetBoolValueEPb15CUtlStringToken */
	void DeleteBoolValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes15DeleteBoolValueE15CUtlStringToken */
	void SetSamplerValue(class CRenderAttributes *, class CUtlStringToken, class CSamplerStateDesc); /* linkage=_ZN17CRenderAttributes15SetSamplerValueE15CUtlStringToken17CSamplerStateDesc */
	class CSamplerStateDescBase GetSamplerValue(const class CRenderAttributes  *, class CUtlStringToken, class CSamplerStateDesc); /* linkage=_ZNK17CRenderAttributes15GetSamplerValueE15CUtlStringToken17CSamplerStateDesc */
	bool GetSamplerValueToBind(const class CRenderAttributes  *, class SamplerAttr_t &, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes21GetSamplerValueToBindERNS_13SamplerAttr_tE15CUtlStringToken */
	void SetTextureValue(class CRenderAttributes *, class CUtlStringToken, HRenderTexture, int32); /* linkage=_ZN17CRenderAttributes15SetTextureValueE15CUtlStringToken11CWeakHandleI31InfoForResourceTypeCTextureBaseEi */
	HRenderTexture GetTextureValue(const class CRenderAttributes  *, class CUtlStringToken, HRenderTexture); /* linkage=_ZNK17CRenderAttributes15GetTextureValueE15CUtlStringToken11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	HRenderTexture GetFirstTexture(const class CRenderAttributes  *); /* linkage=_ZNK17CRenderAttributes15GetFirstTextureEv */
	bool GetTextureValue(const class CRenderAttributes  *, HRenderTexture *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes15GetTextureValueEP11CWeakHandleI31InfoForResourceTypeCTextureBaseE15CUtlStringToken */
	bool GetTextureValueAndMipLevelToBind(const class CRenderAttributes  *, class TextureAttr_t &, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes32GetTextureValueAndMipLevelToBindERNS_13TextureAttr_tE15CUtlStringToken */
	const class TextureAttrForStorage_t  * GetTextureValueAndMipLevelToBind(const class CRenderAttributes  *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes32GetTextureValueAndMipLevelToBindE15CUtlStringToken */
	bool GetTextureValueAndMipLevelToBind(const class CRenderAttributes  *, HRenderTexture *, int *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes32GetTextureValueAndMipLevelToBindEP11CWeakHandleI31InfoForResourceTypeCTextureBaseEPi15CUtlStringToken */
	void DeleteTextureValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes18DeleteTextureValueE15CUtlStringToken */
	HRenderTexture CopyTextureValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, HRenderTexture); /* linkage=_ZN17CRenderAttributes16CopyTextureValueE15CUtlStringTokenRKS_11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	void SetConstantBufferValue(class CRenderAttributes *, class CUtlStringToken, ConstantBufferHandle_t, uint32); /* linkage=_ZN17CRenderAttributes22SetConstantBufferValueE15CUtlStringTokenP24ConstantBufferHandle_t__j */
	class ConstantBufferAttr_t GetConstantBufferValue(const class CRenderAttributes  *, class CUtlStringToken, ConstantBufferHandle_t, uint32); /* linkage=_ZNK17CRenderAttributes22GetConstantBufferValueE15CUtlStringTokenP24ConstantBufferHandle_t__j */
	bool GetConstantBufferValue(const class CRenderAttributes  *, class ConstantBufferAttr_t *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes22GetConstantBufferValueEPNS_20ConstantBufferAttr_tE15CUtlStringToken */
	void DeleteConstantBufferValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes25DeleteConstantBufferValueE15CUtlStringToken */
	class ConstantBufferAttr_t CopyConstantBufferValue(class CRenderAttributes *, class CUtlStringToken, class CRenderAttributes &, ConstantBufferHandle_t, uint32); /* linkage=_ZN17CRenderAttributes23CopyConstantBufferValueE15CUtlStringTokenRS_P24ConstantBufferHandle_t__j */
	void SetDescriptorSetValue(class CRenderAttributes *, class CUtlStringToken, RenderDescriptorSetHandle_t, int32, int32, int32, int32); /* linkage=_ZN17CRenderAttributes21SetDescriptorSetValueE15CUtlStringTokenP29RenderDescriptorSetHandle_t__iiii */
	class DescriptorSetAttr_t GetDescriptorSetValue(const class CRenderAttributes  *, class CUtlStringToken, class DescriptorSetAttr_t); /* linkage=_ZNK17CRenderAttributes21GetDescriptorSetValueE15CUtlStringTokenNS_19DescriptorSetAttr_tE */
	bool GetDescriptorSetValue(const class CRenderAttributes  *, class DescriptorSetAttr_t *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes21GetDescriptorSetValueEPNS_19DescriptorSetAttr_tE15CUtlStringToken */
	void DeleteDescriptorSetValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes24DeleteDescriptorSetValueE15CUtlStringToken */
	void MoveToAnother(class CRenderAttributes *, class CRenderAttributes &); /* linkage=_ZN17CRenderAttributes13MoveToAnotherERS_ */
	void MergeTo(const class CRenderAttributes  *, class CRenderAttributes &); /* linkage=_ZNK17CRenderAttributes7MergeToERS_ */
	void SetParent(class CRenderAttributes *, const class CRenderAttributes  *); /* linkage=_ZN17CRenderAttributes9SetParentEPKS_ */
	const class CRenderAttributes  * GetParent(const class CRenderAttributes  *); /* linkage=_ZNK17CRenderAttributes9GetParentEv */
	void CRenderAttributes(class CRenderAttributes *); /* linkage=_ZN17CRenderAttributesC4Ev */
	void ~CRenderAttributes(class CRenderAttributes *); /* linkage=_ZN17CRenderAttributesD4Ev */
	void SetAttr(class CRenderAttributes *, class CUtlStringToken, class CSamplerStateDesc); /* linkage=_ZN17CRenderAttributes7SetAttrE15CUtlStringToken17CSamplerStateDesc */
	void SetAttr(class CRenderAttributes *, class CUtlStringToken, HRenderTexture); /* linkage=_ZN17CRenderAttributes7SetAttrE15CUtlStringToken11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	void SetAttr(class CRenderAttributes *, class CUtlStringToken, HRenderTextureStrong); /* linkage=_ZN17CRenderAttributes7SetAttrE15CUtlStringToken13CStrongHandleI31InfoForResourceTypeCTextureBaseE */
	void SetAttr(class CRenderAttributes *, class CUtlStringToken, float); /* linkage=_ZN17CRenderAttributes7SetAttrE15CUtlStringTokenf */
	void SetAttr(class CRenderAttributes *, class CUtlStringToken, const class Vector  &); /* linkage=_ZN17CRenderAttributes7SetAttrE15CUtlStringTokenRK6Vector */
	void SetAttr(class CRenderAttributes *, class CUtlStringToken, const class VMatrix  &); /* linkage=_ZN17CRenderAttributes7SetAttrE15CUtlStringTokenRK7VMatrix */
	void SetAttr(class CRenderAttributes *, class CUtlStringToken, void *); /* linkage=_ZN17CRenderAttributes7SetAttrE15CUtlStringTokenPv */
	void SetAttr(class CRenderAttributes *, class CUtlStringToken, bool); /* linkage=_ZN17CRenderAttributes7SetAttrE15CUtlStringTokenb */
	void MergeToPtr(const class CRenderAttributes  *, class CRenderAttributes *); /* linkage=_ZNK17CRenderAttributes10MergeToPtrEPS_ */
};

// <003D0534> ../public/rendersystem/renderattrs.h:20
// member functions: 218
// member variables: 10
// class size: 1,184
class CRenderAttributes {
	/* ../public/rendersystem/renderattrs.h:26 */
	struct SamplerAttrForStorage_t {
		CSamplerStateDesc samplerDesc; /* 0 20 */
		/* ../public/rendersystem/renderattrs.h:30 */
		void SamplerAttrForStorage_t(SamplerAttrForStorage_t* );
		/* ../public/rendersystem/renderattrs.h:33 */
		void SamplerAttrForStorage_t(SamplerAttrForStorage_t* , const CSamplerStateDesc& );
		/* ../public/rendersystem/renderattrs.h:37 */
		void SamplerAttrForStorage_t(SamplerAttrForStorage_t* , const SamplerAttr_t& );
		/* ../public/rendersystem/renderattrs.h:44 */
		SamplerAttrForStorage_t& operator=(SamplerAttrForStorage_t* , const SamplerAttr_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/rendersystem/renderattrs.h:47 */
	struct SamplerAttr_t {
		CSamplerStateDesc samplerDesc; /* 0 20 */
		/* ../public/rendersystem/renderattrs.h:50 */
		void SamplerAttr_t(SamplerAttr_t* );
		/* ../public/rendersystem/renderattrs.h:53 */
		void SamplerAttr_t(SamplerAttr_t* , const CSamplerStateDesc& );
		/* ../public/rendersystem/renderattrs.h:57 */
		void SamplerAttr_t(SamplerAttr_t* , const SamplerAttrForStorage_t& );
		/* ../public/rendersystem/renderattrs.h:64 */
		SamplerAttr_t& operator=(SamplerAttr_t* , const SamplerAttrForStorage_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/rendersystem/renderattrs.h:74 */
	struct TextureAttrForStorage_t {
		/* ../public/rendersystem/renderattrs.h:76 */
		void TextureAttrForStorage_t(TextureAttrForStorage_t* );
		/* ../public/rendersystem/renderattrs.h:77 */
		void TextureAttrForStorage_t(TextureAttrForStorage_t* , HRenderTexture, int32);
		/* ../public/rendersystem/renderattrs.h:78 */
		void TextureAttrForStorage_t(TextureAttrForStorage_t* , const TextureAttr_t& );
		HRenderTexture texture; /* 0 8 */
		int32 nSpecificMipLevelToBind; /* 8 4 */
		/* ../public/rendersystem/renderattrs.h:82 */
		TextureAttrForStorage_t& operator=(TextureAttrForStorage_t* , const TextureAttr_t& );
		TextureAttrForStorage_t& operator=(TextureAttrForStorage_t* , const TextureAttrForStorage_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/rendersystem/renderattrs.h:90 */
	struct TextureAttr_t {
		/* ../public/rendersystem/renderattrs.h:92 */
		void TextureAttr_t(TextureAttr_t* );
		/* ../public/rendersystem/renderattrs.h:93 */
		void TextureAttr_t(TextureAttr_t* , HRenderTexture, int32);
		/* ../public/rendersystem/renderattrs.h:94 */
		void TextureAttr_t(TextureAttr_t* , const TextureAttrForStorage_t& );
		HRenderTexture texture; /* 0 8 */
		int32 nSpecificMipLevelToBind; /* 8 4 */
		/* ../public/rendersystem/renderattrs.h:103 */
		TextureAttr_t& operator=(TextureAttr_t* , const TextureAttrForStorage_t& );
		void TextureAttr_t(TextureAttr_t* , const TextureAttr_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/rendersystem/renderattrs.h:709 */
	struct ConstantBufferAttr_t {
		/* ../public/rendersystem/renderattrs.h:711 */
		void ConstantBufferAttr_t(ConstantBufferAttr_t* );
		/* ../public/rendersystem/renderattrs.h:712 */
		void ConstantBufferAttr_t(ConstantBufferAttr_t* , ConstantBufferHandle_t, uint32);
		/* ../public/rendersystem/renderattrs.h:713 */
		void ConstantBufferAttr_t(ConstantBufferAttr_t* , const ConstantBufferAttr_t& );
		ConstantBufferHandle_t hBuffer; /* 0 8 */
		uint32 nView; /* 8 4 */
		/* ../public/rendersystem/renderattrs.h:722 */
		ConstantBufferAttr_t& operator=(ConstantBufferAttr_t* , const ConstantBufferAttr_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/rendersystem/renderattrs.h:766 */
	struct DescriptorSetAttr_t {
		/* ../public/rendersystem/renderattrs.h:768 */
		void DescriptorSetAttr_t(DescriptorSetAttr_t* );
		/* ../public/rendersystem/renderattrs.h:769 */
		void DescriptorSetAttr_t(DescriptorSetAttr_t* , RenderDescriptorSetHandle_t, int32, int32, int32, int32);
		/* ../public/rendersystem/renderattrs.h:777 */
		void DescriptorSetAttr_t(DescriptorSetAttr_t* , const DescriptorSetAttr_t& );
		RenderDescriptorSetHandle_t hDescriptorSet; /* 0 8 */
		int32 nCbufferOffsets[4]; /* 8 16 */
		/* ../public/rendersystem/renderattrs.h:793 */
		DescriptorSetAttr_t& operator=(DescriptorSetAttr_t* , const DescriptorSetAttr_t& );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/rendersystem/renderattrs.h:67 */
	typedef struct CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8> SamplerAttrList_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/rendersystem/renderattrs.h:69 */
	const SamplerAttrList_t& SamplerAttributes(const CRenderAttributes* );
	/* ../public/rendersystem/renderattrs.h:70 */
	SamplerAttrList_t& SamplerAttributes(CRenderAttributes* );
	/* ../public/rendersystem/renderattrs.h:106 */
	typedef struct CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8> TextureAttrList_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/rendersystem/renderattrs.h:109 */
	const TextureAttrList_t& TextureAttributes(const CRenderAttributes* );
	/* ../public/rendersystem/renderattrs.h:110 */
	TextureAttrList_t& TextureAttributes(CRenderAttributes* );
	/* ../public/rendersystem/renderattrs.h:113 */
	bool IsEmpty(const CRenderAttributes* );
	/* ../public/rendersystem/renderattrs.h:126 */
	void Clear(CRenderAttributes* , bool, bool);
	/* ../public/rendersystem/renderattrs.h:146 */
	void SetFloatValue(CRenderAttributes* , CUtlStringToken, float);
	/* ../public/rendersystem/renderattrs.h:151 */
	float GetFloatValue(const CRenderAttributes* , CUtlStringToken, float);
	/* ../public/rendersystem/renderattrs.h:156 */
	QAngle GetQAngleValue(const CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:163 */
	bool GetFloatValue(const CRenderAttributes* , float* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:178 */
	void DeleteFloatValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:183 */
	float CopyVectorFloatValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , float);
	/* ../public/rendersystem/renderattrs.h:193 */
	void SetVector2DValue(CRenderAttributes* , CUtlStringToken, Vector2D);
	/* ../public/rendersystem/renderattrs.h:198 */
	Vector2D GetVector2DValue(const CRenderAttributes* , CUtlStringToken, Vector2D);
	/* ../public/rendersystem/renderattrs.h:204 */
	bool GetVector2DValue(const CRenderAttributes* , Vector2D* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:219 */
	void DeleteVector2DValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:224 */
	Vector2D CopyVector2DValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , Vector2D);
	/* ../public/rendersystem/renderattrs.h:234 */
	void SetVectorValue(CRenderAttributes* , CUtlStringToken, Vector);
	/* ../public/rendersystem/renderattrs.h:239 */
	Vector GetVectorValue(const CRenderAttributes* , CUtlStringToken, Vector);
	/* ../public/rendersystem/renderattrs.h:245 */
	bool GetVectorValue(const CRenderAttributes* , Vector* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:260 */
	void DeleteVectorValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:265 */
	Vector CopyVectorValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , Vector);
	/* ../public/rendersystem/renderattrs.h:275 */
	void SetVector4DValue(CRenderAttributes* , CUtlStringToken, Vector4D);
	/* ../public/rendersystem/renderattrs.h:280 */
	Vector4D GetVector4DValue(const CRenderAttributes* , CUtlStringToken, Vector4D);
	/* ../public/rendersystem/renderattrs.h:286 */
	bool GetVector4DValue(const CRenderAttributes* , Vector4D* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:291 */
	void DeleteVector4DValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:296 */
	Vector4D CopyVector4DValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , Vector4D);
	/* ../public/rendersystem/renderattrs.h:311 */
	void SetVMatrixValue(CRenderAttributes* , CUtlStringToken, VMatrix);
	/* ../public/rendersystem/renderattrs.h:316 */
	VMatrix GetVMatrixValue(const CRenderAttributes* , CUtlStringToken, VMatrix);
	/* ../public/rendersystem/renderattrs.h:322 */
	bool GetVMatrixValue(const CRenderAttributes* , VMatrix* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:327 */
	void DeleteVMatrixValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:332 */
	VMatrix CopyVMatrixValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , VMatrix);
	/* ../public/rendersystem/renderattrs.h:347 */
	void SetPtrValue(CRenderAttributes* , CUtlStringToken, void* );
	/* ../public/rendersystem/renderattrs.h:352 */
	void* GetPtrValue(const CRenderAttributes* , CUtlStringToken, void* );
	/* ../public/rendersystem/renderattrs.h:358 */
	bool GetPtrValue(const CRenderAttributes* , void** , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:363 */
	void DeletePtrValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:368 */
	void* CopyPtrValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , void* );
	/* ../public/rendersystem/renderattrs.h:383 */
	void SetBufferValue(CRenderAttributes* , CUtlStringToken, IndexBufferHandle_t);
	/* ../public/rendersystem/renderattrs.h:391 */
	void SetBufferValue(CRenderAttributes* , CUtlStringToken, VertexBufferHandle_t);
	/* ../public/rendersystem/renderattrs.h:396 */
	void SetBufferValue(CRenderAttributes* , CUtlStringToken, RenderBufferHandle_t);
	/* ../public/rendersystem/renderattrs.h:404 */
	void SetStringValue(CRenderAttributes* , CUtlStringToken, const char* );
	/* ../public/rendersystem/renderattrs.h:410 */
	bool GetStringValue(const CRenderAttributes* , CUtlString* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:415 */
	void DeleteStringValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:425 */
	void SetIntVector4DValue(CRenderAttributes* , CUtlStringToken, int, int, int, int);
	/* ../public/rendersystem/renderattrs.h:430 */
	IntVector4D GetIntVector4DValue(const CRenderAttributes* , CUtlStringToken, IntVector4D);
	/* ../public/rendersystem/renderattrs.h:435 */
	bool GetIntVector4DValue(const CRenderAttributes* , IntVector4D* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:450 */
	void SetIntValue(CRenderAttributes* , CUtlStringToken, int);
	/* ../public/rendersystem/renderattrs.h:459 */
	int GetIntValue(const CRenderAttributes* , CUtlStringToken, int);
	/* ../public/rendersystem/renderattrs.h:469 */
	bool GetIntValue(const CRenderAttributes* , int* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:485 */
	void DeleteIntValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:494 */
	int CopyIntValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , int);
	/* ../public/rendersystem/renderattrs.h:510 */
	void SetComboValue(CRenderAttributes* , CUtlStringToken, uint8);
	/* ../public/rendersystem/renderattrs.h:518 */
	uint8 GetComboValue(const CRenderAttributes* , CUtlStringToken, uint8);
	/* ../public/rendersystem/renderattrs.h:529 */
	bool GetComboValue(const CRenderAttributes* , uint8* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:546 */
	uint8 CopyComboValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , uint8);
	/* ../public/rendersystem/renderattrs.h:553 */
	void DeleteComboValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:569 */
	void SetBoolValue(CRenderAttributes* , CUtlStringToken, bool);
	/* ../public/rendersystem/renderattrs.h:574 */
	bool GetBoolValue(const CRenderAttributes* , CUtlStringToken, bool);
	/* ../public/rendersystem/renderattrs.h:579 */
	bool GetBoolValue(const CRenderAttributes* , bool* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:590 */
	void DeleteBoolValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:598 */
	void SetSamplerValue(CRenderAttributes* , CUtlStringToken, CSamplerStateDesc);
	/* ../public/rendersystem/renderattrs.h:603 */
	CSamplerStateDescBase GetSamplerValue(const CRenderAttributes* , CUtlStringToken, CSamplerStateDesc);
	/* ../public/rendersystem/renderattrs.h:609 */
	bool GetSamplerValueToBind(const CRenderAttributes* , SamplerAttr_t& , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:617 */
	void SetTextureValue(CRenderAttributes* , CUtlStringToken, HRenderTexture, int32);
	/* ../public/rendersystem/renderattrs.h:622 */
	HRenderTexture GetTextureValue(const CRenderAttributes* , CUtlStringToken, HRenderTexture);
	/* ../public/rendersystem/renderattrs.h:629 */
	HRenderTexture GetFirstTexture(const CRenderAttributes* );
	/* ../public/rendersystem/renderattrs.h:646 */
	bool GetTextureValue(const CRenderAttributes* , HRenderTexture* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:660 */
	bool GetTextureValueAndMipLevelToBind(const CRenderAttributes* , TextureAttr_t& , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:665 */
	const TextureAttrForStorage_t* GetTextureValueAndMipLevelToBind(const CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:671 */
	bool GetTextureValueAndMipLevelToBind(const CRenderAttributes* , HRenderTexture* , int* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:689 */
	void DeleteTextureValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:694 */
	HRenderTexture CopyTextureValue(CRenderAttributes* , CUtlStringToken, const CRenderAttributes& , HRenderTexture);
	/* ../public/rendersystem/renderattrs.h:730 */
	void SetConstantBufferValue(CRenderAttributes* , CUtlStringToken, ConstantBufferHandle_t, uint32);
	/* ../public/rendersystem/renderattrs.h:735 */
	ConstantBufferAttr_t GetConstantBufferValue(const CRenderAttributes* , CUtlStringToken, ConstantBufferHandle_t, uint32);
	/* ../public/rendersystem/renderattrs.h:741 */
	bool GetConstantBufferValue(const CRenderAttributes* , ConstantBufferAttr_t* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:746 */
	void DeleteConstantBufferValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:751 */
	ConstantBufferAttr_t CopyConstantBufferValue(CRenderAttributes* , CUtlStringToken, CRenderAttributes& , ConstantBufferHandle_t, uint32);
	/* ../public/rendersystem/renderattrs.h:804 */
	void SetDescriptorSetValue(CRenderAttributes* , CUtlStringToken, RenderDescriptorSetHandle_t, int32, int32, int32, int32);
	/* ../public/rendersystem/renderattrs.h:810 */
	DescriptorSetAttr_t GetDescriptorSetValue(const CRenderAttributes* , CUtlStringToken, DescriptorSetAttr_t);
	/* ../public/rendersystem/renderattrs.h:816 */
	bool GetDescriptorSetValue(const CRenderAttributes* , DescriptorSetAttr_t* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:821 */
	void DeleteDescriptorSetValue(CRenderAttributes* , CUtlStringToken);
	/* ../public/rendersystem/renderattrs.h:834 */
	void MoveToAnother(CRenderAttributes* , CRenderAttributes& );
	/* ../public/rendersystem/renderattrs.h:848 */
	void MergeTo(const CRenderAttributes* , CRenderAttributes& );
	/* ../public/rendersystem/renderattrs.h:861 */
	void SetParent(CRenderAttributes* , const CRenderAttributes* );
	/* ../public/rendersystem/renderattrs.h:890 */
	const CRenderAttributes* GetParent(const CRenderAttributes* );
	/* ../public/rendersystem/renderattrs.h:898 */
	void CRenderAttributes(CRenderAttributes* );
	/* ../public/rendersystem/renderattrs.h:902 */
	void ~CRenderAttributes(CRenderAttributes* );
private:
	/* ../public/rendersystem/renderattrs.h:912 */
	void SetAttr(CRenderAttributes* , CUtlStringToken, CSamplerStateDesc);
	/* ../public/rendersystem/renderattrs.h:913 */
	void SetAttr(CRenderAttributes* , CUtlStringToken, HRenderTexture);
	/* ../public/rendersystem/renderattrs.h:914 */
	void SetAttr(CRenderAttributes* , CUtlStringToken, HRenderTextureStrong);
	/* ../public/rendersystem/renderattrs.h:915 */
	void SetAttr(CRenderAttributes* , CUtlStringToken, float);
	/* ../public/rendersystem/renderattrs.h:916 */
	void SetAttr(CRenderAttributes* , CUtlStringToken, const Vector& );
	/* ../public/rendersystem/renderattrs.h:917 */
	void SetAttr(CRenderAttributes* , CUtlStringToken, const VMatrix& );
	/* ../public/rendersystem/renderattrs.h:918 */
	void SetAttr(CRenderAttributes* , CUtlStringToken, void* );
	/* ../public/rendersystem/renderattrs.h:919 */
	void SetAttr(CRenderAttributes* , CUtlStringToken, bool);
	CUtlAttributeList<Vector4D, 8, Vector4D, 4> m_vec4Attrs; /* 0 176 */
	CUtlAttributeList<VMatrix, 1, VMatrix, 2> m_matrix4x4Attrs; /* 176 96 */
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4> m_intAttrs; /* 272 176 */
	TextureAttrList_t m_textureAttrs; /* 448 176 */
	SamplerAttrList_t m_samplerAttrs; /* 624 208 */
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4> m_constantBufferAttrs; /* 832 96 */
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4> m_descriptorSetAttrs; /* 928 128 */
	CUtlAttributeList<void*, 4, void*, 4> m_ptrAttrs; /* 1056 64 */
	CUtlAttributeList<CUtlString, 2, CUtlString, 2> m_stringAttrs; /* 1120 48 */
	const class CRenderAttributes * m_pParent; /* 1168 8 */
	/* ../public/rendersystem/renderattrs.h:938 */
	void MergeToPtr(const CRenderAttributes* , CRenderAttributes* );
	const SamplerAttrList_t  & SamplerAttributes(const class CRenderAttributes  *); /* linkage=_ZNK17CRenderAttributes17SamplerAttributesEv */
	SamplerAttrList_t & SamplerAttributes(class CRenderAttributes *); /* linkage=_ZN17CRenderAttributes17SamplerAttributesEv */
	const TextureAttrList_t  & TextureAttributes(const class CRenderAttributes  *); /* linkage=_ZNK17CRenderAttributes17TextureAttributesEv */
	TextureAttrList_t & TextureAttributes(class CRenderAttributes *); /* linkage=_ZN17CRenderAttributes17TextureAttributesEv */
	/* <40287e2> ../public/rendersystem/renderattrs.h:113 */
	bool IsEmpty(const class CRenderAttributes  *); /* linkage=_ZNK17CRenderAttributes7IsEmptyEv */
	void Clear(class CRenderAttributes *, bool, bool); /* linkage=_ZN17CRenderAttributes5ClearEbb */
	void SetFloatValue(class CRenderAttributes *, class CUtlStringToken, float); /* linkage=_ZN17CRenderAttributes13SetFloatValueE15CUtlStringTokenf */
	float GetFloatValue(const class CRenderAttributes  *, class CUtlStringToken, float); /* linkage=_ZNK17CRenderAttributes13GetFloatValueE15CUtlStringTokenf */
	class QAngle GetQAngleValue(const class CRenderAttributes  *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes14GetQAngleValueE15CUtlStringToken */
	bool GetFloatValue(const class CRenderAttributes  *, float *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes13GetFloatValueEPf15CUtlStringToken */
	void DeleteFloatValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes16DeleteFloatValueE15CUtlStringToken */
	float CopyVectorFloatValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, float); /* linkage=_ZN17CRenderAttributes20CopyVectorFloatValueE15CUtlStringTokenRKS_f */
	void SetVector2DValue(class CRenderAttributes *, class CUtlStringToken, class Vector2D); /* linkage=_ZN17CRenderAttributes16SetVector2DValueE15CUtlStringToken8Vector2D */
	class Vector2D GetVector2DValue(const class CRenderAttributes  *, class CUtlStringToken, class Vector2D); /* linkage=_ZNK17CRenderAttributes16GetVector2DValueE15CUtlStringToken8Vector2D */
	bool GetVector2DValue(const class CRenderAttributes  *, class Vector2D *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes16GetVector2DValueEP8Vector2D15CUtlStringToken */
	void DeleteVector2DValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes19DeleteVector2DValueE15CUtlStringToken */
	class Vector2D CopyVector2DValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, class Vector2D); /* linkage=_ZN17CRenderAttributes17CopyVector2DValueE15CUtlStringTokenRKS_8Vector2D */
	void SetVectorValue(class CRenderAttributes *, class CUtlStringToken, class Vector); /* linkage=_ZN17CRenderAttributes14SetVectorValueE15CUtlStringToken6Vector */
	class Vector GetVectorValue(const class CRenderAttributes  *, class CUtlStringToken, class Vector); /* linkage=_ZNK17CRenderAttributes14GetVectorValueE15CUtlStringToken6Vector */
	bool GetVectorValue(const class CRenderAttributes  *, class Vector *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes14GetVectorValueEP6Vector15CUtlStringToken */
	void DeleteVectorValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes17DeleteVectorValueE15CUtlStringToken */
	class Vector CopyVectorValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, class Vector); /* linkage=_ZN17CRenderAttributes15CopyVectorValueE15CUtlStringTokenRKS_6Vector */
	void SetVector4DValue(class CRenderAttributes *, class CUtlStringToken, class Vector4D); /* linkage=_ZN17CRenderAttributes16SetVector4DValueE15CUtlStringToken8Vector4D */
	class Vector4D GetVector4DValue(const class CRenderAttributes  *, class CUtlStringToken, class Vector4D); /* linkage=_ZNK17CRenderAttributes16GetVector4DValueE15CUtlStringToken8Vector4D */
	bool GetVector4DValue(const class CRenderAttributes  *, class Vector4D *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes16GetVector4DValueEP8Vector4D15CUtlStringToken */
	void DeleteVector4DValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes19DeleteVector4DValueE15CUtlStringToken */
	class Vector4D CopyVector4DValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, class Vector4D); /* linkage=_ZN17CRenderAttributes17CopyVector4DValueE15CUtlStringTokenRKS_8Vector4D */
	void SetVMatrixValue(class CRenderAttributes *, class CUtlStringToken, class VMatrix); /* linkage=_ZN17CRenderAttributes15SetVMatrixValueE15CUtlStringToken7VMatrix */
	class VMatrix GetVMatrixValue(const class CRenderAttributes  *, class CUtlStringToken, class VMatrix); /* linkage=_ZNK17CRenderAttributes15GetVMatrixValueE15CUtlStringToken7VMatrix */
	bool GetVMatrixValue(const class CRenderAttributes  *, class VMatrix *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes15GetVMatrixValueEP7VMatrix15CUtlStringToken */
	void DeleteVMatrixValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes18DeleteVMatrixValueE15CUtlStringToken */
	class VMatrix CopyVMatrixValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, class VMatrix); /* linkage=_ZN17CRenderAttributes16CopyVMatrixValueE15CUtlStringTokenRKS_7VMatrix */
	void SetPtrValue(class CRenderAttributes *, class CUtlStringToken, void *); /* linkage=_ZN17CRenderAttributes11SetPtrValueE15CUtlStringTokenPv */
	void * GetPtrValue(const class CRenderAttributes  *, class CUtlStringToken, void *); /* linkage=_ZNK17CRenderAttributes11GetPtrValueE15CUtlStringTokenPv */
	bool GetPtrValue(const class CRenderAttributes  *, void * *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes11GetPtrValueEPPv15CUtlStringToken */
	void DeletePtrValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes14DeletePtrValueE15CUtlStringToken */
	void * CopyPtrValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, void *); /* linkage=_ZN17CRenderAttributes12CopyPtrValueE15CUtlStringTokenRKS_Pv */
	void SetBufferValue(class CRenderAttributes *, class CUtlStringToken, IndexBufferHandle_t); /* linkage=_ZN17CRenderAttributes14SetBufferValueE15CUtlStringTokenP21IndexBufferHandle_t__ */
	void SetBufferValue(class CRenderAttributes *, class CUtlStringToken, VertexBufferHandle_t); /* linkage=_ZN17CRenderAttributes14SetBufferValueE15CUtlStringTokenP22VertexBufferHandle_t__ */
	void SetBufferValue(class CRenderAttributes *, class CUtlStringToken, RenderBufferHandle_t); /* linkage=_ZN17CRenderAttributes14SetBufferValueE15CUtlStringTokenP22RenderBufferHandle_t__ */
	void SetStringValue(class CRenderAttributes *, class CUtlStringToken, const char  *); /* linkage=_ZN17CRenderAttributes14SetStringValueE15CUtlStringTokenPKc */
	bool GetStringValue(const class CRenderAttributes  *, class CUtlString *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes14GetStringValueEP10CUtlString15CUtlStringToken */
	void DeleteStringValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes17DeleteStringValueE15CUtlStringToken */
	void SetIntVector4DValue(class CRenderAttributes *, class CUtlStringToken, int, int, int, int); /* linkage=_ZN17CRenderAttributes19SetIntVector4DValueE15CUtlStringTokeniiii */
	class IntVector4D GetIntVector4DValue(const class CRenderAttributes  *, class CUtlStringToken, class IntVector4D); /* linkage=_ZNK17CRenderAttributes19GetIntVector4DValueE15CUtlStringToken11IntVector4D */
	bool GetIntVector4DValue(const class CRenderAttributes  *, class IntVector4D *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes19GetIntVector4DValueEP11IntVector4D15CUtlStringToken */
	void SetIntValue(class CRenderAttributes *, class CUtlStringToken, int); /* linkage=_ZN17CRenderAttributes11SetIntValueE15CUtlStringTokeni */
	int GetIntValue(const class CRenderAttributes  *, class CUtlStringToken, int); /* linkage=_ZNK17CRenderAttributes11GetIntValueE15CUtlStringTokeni */
	bool GetIntValue(const class CRenderAttributes  *, int *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes11GetIntValueEPi15CUtlStringToken */
	void DeleteIntValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes14DeleteIntValueE15CUtlStringToken */
	int CopyIntValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, int); /* linkage=_ZN17CRenderAttributes12CopyIntValueE15CUtlStringTokenRKS_i */
	void SetComboValue(class CRenderAttributes *, class CUtlStringToken, uint8); /* linkage=_ZN17CRenderAttributes13SetComboValueE15CUtlStringTokenh */
	uint8 GetComboValue(const class CRenderAttributes  *, class CUtlStringToken, uint8); /* linkage=_ZNK17CRenderAttributes13GetComboValueE15CUtlStringTokenh */
	bool GetComboValue(const class CRenderAttributes  *, uint8 *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes13GetComboValueEPh15CUtlStringToken */
	uint8 CopyComboValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, uint8); /* linkage=_ZN17CRenderAttributes14CopyComboValueE15CUtlStringTokenRKS_h */
	void DeleteComboValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes16DeleteComboValueE15CUtlStringToken */
	void SetBoolValue(class CRenderAttributes *, class CUtlStringToken, bool); /* linkage=_ZN17CRenderAttributes12SetBoolValueE15CUtlStringTokenb */
	bool GetBoolValue(const class CRenderAttributes  *, class CUtlStringToken, bool); /* linkage=_ZNK17CRenderAttributes12GetBoolValueE15CUtlStringTokenb */
	bool GetBoolValue(const class CRenderAttributes  *, bool *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes12GetBoolValueEPb15CUtlStringToken */
	void DeleteBoolValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes15DeleteBoolValueE15CUtlStringToken */
	void SetSamplerValue(class CRenderAttributes *, class CUtlStringToken, class CSamplerStateDesc); /* linkage=_ZN17CRenderAttributes15SetSamplerValueE15CUtlStringToken17CSamplerStateDesc */
	class CSamplerStateDescBase GetSamplerValue(const class CRenderAttributes  *, class CUtlStringToken, class CSamplerStateDesc); /* linkage=_ZNK17CRenderAttributes15GetSamplerValueE15CUtlStringToken17CSamplerStateDesc */
	bool GetSamplerValueToBind(const class CRenderAttributes  *, class SamplerAttr_t &, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes21GetSamplerValueToBindERNS_13SamplerAttr_tE15CUtlStringToken */
	void SetTextureValue(class CRenderAttributes *, class CUtlStringToken, HRenderTexture, int32); /* linkage=_ZN17CRenderAttributes15SetTextureValueE15CUtlStringToken11CWeakHandleI31InfoForResourceTypeCTextureBaseEi */
	HRenderTexture GetTextureValue(const class CRenderAttributes  *, class CUtlStringToken, HRenderTexture); /* linkage=_ZNK17CRenderAttributes15GetTextureValueE15CUtlStringToken11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	HRenderTexture GetFirstTexture(const class CRenderAttributes  *); /* linkage=_ZNK17CRenderAttributes15GetFirstTextureEv */
	bool GetTextureValue(const class CRenderAttributes  *, HRenderTexture *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes15GetTextureValueEP11CWeakHandleI31InfoForResourceTypeCTextureBaseE15CUtlStringToken */
	bool GetTextureValueAndMipLevelToBind(const class CRenderAttributes  *, class TextureAttr_t &, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes32GetTextureValueAndMipLevelToBindERNS_13TextureAttr_tE15CUtlStringToken */
	const class TextureAttrForStorage_t  * GetTextureValueAndMipLevelToBind(const class CRenderAttributes  *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes32GetTextureValueAndMipLevelToBindE15CUtlStringToken */
	bool GetTextureValueAndMipLevelToBind(const class CRenderAttributes  *, HRenderTexture *, int *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes32GetTextureValueAndMipLevelToBindEP11CWeakHandleI31InfoForResourceTypeCTextureBaseEPi15CUtlStringToken */
	void DeleteTextureValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes18DeleteTextureValueE15CUtlStringToken */
	HRenderTexture CopyTextureValue(class CRenderAttributes *, class CUtlStringToken, const class CRenderAttributes  &, HRenderTexture); /* linkage=_ZN17CRenderAttributes16CopyTextureValueE15CUtlStringTokenRKS_11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	void SetConstantBufferValue(class CRenderAttributes *, class CUtlStringToken, ConstantBufferHandle_t, uint32); /* linkage=_ZN17CRenderAttributes22SetConstantBufferValueE15CUtlStringTokenP24ConstantBufferHandle_t__j */
	class ConstantBufferAttr_t GetConstantBufferValue(const class CRenderAttributes  *, class CUtlStringToken, ConstantBufferHandle_t, uint32); /* linkage=_ZNK17CRenderAttributes22GetConstantBufferValueE15CUtlStringTokenP24ConstantBufferHandle_t__j */
	bool GetConstantBufferValue(const class CRenderAttributes  *, class ConstantBufferAttr_t *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes22GetConstantBufferValueEPNS_20ConstantBufferAttr_tE15CUtlStringToken */
	void DeleteConstantBufferValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes25DeleteConstantBufferValueE15CUtlStringToken */
	class ConstantBufferAttr_t CopyConstantBufferValue(class CRenderAttributes *, class CUtlStringToken, class CRenderAttributes &, ConstantBufferHandle_t, uint32); /* linkage=_ZN17CRenderAttributes23CopyConstantBufferValueE15CUtlStringTokenRS_P24ConstantBufferHandle_t__j */
	void SetDescriptorSetValue(class CRenderAttributes *, class CUtlStringToken, RenderDescriptorSetHandle_t, int32, int32, int32, int32); /* linkage=_ZN17CRenderAttributes21SetDescriptorSetValueE15CUtlStringTokenP29RenderDescriptorSetHandle_t__iiii */
	class DescriptorSetAttr_t GetDescriptorSetValue(const class CRenderAttributes  *, class CUtlStringToken, class DescriptorSetAttr_t); /* linkage=_ZNK17CRenderAttributes21GetDescriptorSetValueE15CUtlStringTokenNS_19DescriptorSetAttr_tE */
	bool GetDescriptorSetValue(const class CRenderAttributes  *, class DescriptorSetAttr_t *, class CUtlStringToken); /* linkage=_ZNK17CRenderAttributes21GetDescriptorSetValueEPNS_19DescriptorSetAttr_tE15CUtlStringToken */
	void DeleteDescriptorSetValue(class CRenderAttributes *, class CUtlStringToken); /* linkage=_ZN17CRenderAttributes24DeleteDescriptorSetValueE15CUtlStringToken */
	void MoveToAnother(class CRenderAttributes *, class CRenderAttributes &); /* linkage=_ZN17CRenderAttributes13MoveToAnotherERS_ */
	void MergeTo(const class CRenderAttributes  *, class CRenderAttributes &); /* linkage=_ZNK17CRenderAttributes7MergeToERS_ */
	void SetParent(class CRenderAttributes *, const class CRenderAttributes  *); /* linkage=_ZN17CRenderAttributes9SetParentEPKS_ */
	const class CRenderAttributes  * GetParent(const class CRenderAttributes  *); /* linkage=_ZNK17CRenderAttributes9GetParentEv */
	void CRenderAttributes(class CRenderAttributes *); /* linkage=_ZN17CRenderAttributesC4Ev */
	void ~CRenderAttributes(class CRenderAttributes *); /* linkage=_ZN17CRenderAttributesD4Ev */
	void SetAttr(class CRenderAttributes *, class CUtlStringToken, class CSamplerStateDesc); /* linkage=_ZN17CRenderAttributes7SetAttrE15CUtlStringToken17CSamplerStateDesc */
	void SetAttr(class CRenderAttributes *, class CUtlStringToken, HRenderTexture); /* linkage=_ZN17CRenderAttributes7SetAttrE15CUtlStringToken11CWeakHandleI31InfoForResourceTypeCTextureBaseE */
	void SetAttr(class CRenderAttributes *, class CUtlStringToken, HRenderTextureStrong); /* linkage=_ZN17CRenderAttributes7SetAttrE15CUtlStringToken13CStrongHandleI31InfoForResourceTypeCTextureBaseE */
	void SetAttr(class CRenderAttributes *, class CUtlStringToken, float); /* linkage=_ZN17CRenderAttributes7SetAttrE15CUtlStringTokenf */
	void SetAttr(class CRenderAttributes *, class CUtlStringToken, const class Vector  &); /* linkage=_ZN17CRenderAttributes7SetAttrE15CUtlStringTokenRK6Vector */
	void SetAttr(class CRenderAttributes *, class CUtlStringToken, const class VMatrix  &); /* linkage=_ZN17CRenderAttributes7SetAttrE15CUtlStringTokenRK7VMatrix */
	void SetAttr(class CRenderAttributes *, class CUtlStringToken, void *); /* linkage=_ZN17CRenderAttributes7SetAttrE15CUtlStringTokenPv */
	void SetAttr(class CRenderAttributes *, class CUtlStringToken, bool); /* linkage=_ZN17CRenderAttributes7SetAttrE15CUtlStringTokenb */
	void MergeToPtr(const class CRenderAttributes  *, class CRenderAttributes *); /* linkage=_ZNK17CRenderAttributes10MergeToPtrEPS_ */
};

// <04024F3B> ../public/rendersystem/renderattrs.h:30
void SamplerAttrForStorage_t::SamplerAttrForStorage_t()
{
} /* size: 0 */

// <04024F22> ../public/rendersystem/renderattrs.h:30
inline void SamplerAttrForStorage_t::SamplerAttrForStorage_t()
{
} /* size: 0 */

// <0027DF7C> ../public/rendersystem/renderattrs.h:50
void SamplerAttr_t::SamplerAttr_t()
{
} /* size: 0 */

// <0027DF63> ../public/rendersystem/renderattrs.h:50
inline void SamplerAttr_t::SamplerAttr_t()
{
} /* size: 0 */

// <01350D83> ../public/rendersystem/renderattrs.h:53
void SamplerAttr_t::SamplerAttr_t(const CSamplerStateDesc& inSamplerDesc)
{
} /* size: 0 */

// <01350D5E> ../public/rendersystem/renderattrs.h:53
inline void SamplerAttr_t::SamplerAttr_t(const CSamplerStateDesc& inSamplerDesc)
{
} /* size: 0 */

// <00445414> ../public/rendersystem/renderattrs.h:74
inline void TextureAttrForStorage_t::operator=(const TextureAttrForStorage_t &)
{
} /* size: 0 */

// <04024F0B> ../public/rendersystem/renderattrs.h:76
void TextureAttrForStorage_t::TextureAttrForStorage_t()
{
} /* size: 0 */

// <04024EF2> ../public/rendersystem/renderattrs.h:76
inline void TextureAttrForStorage_t::TextureAttrForStorage_t()
{
} /* size: 0 */

// <04024D24> ../public/rendersystem/renderattrs.h:90
void TextureAttr_t::TextureAttr_t(const TextureAttr_t &)
{
} /* size: 0 */

// <04024D03> ../public/rendersystem/renderattrs.h:90
inline void TextureAttr_t::TextureAttr_t(const TextureAttr_t &)
{
} /* size: 0 */

// <03AE6B73> ../public/rendersystem/renderattrs.h:90
void TextureAttr_t::TextureAttr_t(TextureAttr_t &)
{
} /* size: 0 */

// <03AE6B52> ../public/rendersystem/renderattrs.h:90
inline void TextureAttr_t::TextureAttr_t(TextureAttr_t &)
{
} /* size: 0 */

// <06A75C84> ../public/rendersystem/renderattrs.h:93
void TextureAttr_t::TextureAttr_t(HRenderTexture hT, int32 nMip)
{
} /* size: 0 */

// <06A75C54> ../public/rendersystem/renderattrs.h:93
inline void TextureAttr_t::TextureAttr_t(HRenderTexture hT, int32 nMip)
{
} /* size: 0 */

// <03754D3C> ../public/rendersystem/renderattrs.h:110
inline void CRenderAttributes::TextureAttributes()
{
} /* size: 0 */

// <040287E2> ../public/rendersystem/renderattrs.h:113
// variables: 80
// function calls: 153
void CRenderAttributes::IsEmpty()
{
	{
		int i; // 200
		{
			int nTestResult; // 202
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 202
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 202
		}
	}
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::IsEmpty(); // 522
	{
		const OverflowChunk_t& p; // 524
		const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 12822
		CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 12832
		CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 12842
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 524
		CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 524
		{
			int i; // 200
			{
				int nTestResult; // 202
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 202
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 202
			}
		}
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::IsEmpty(); // 526
		CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 524
	}
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::IsEmpty(); // 115
	{
		int i; // 200
		{
			int nTestResult; // 202
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 202
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 202
		}
	}
	CUtlAttributeListChunk<VMatrix, 1, VMatrix>::IsEmpty(); // 522
	{
		const OverflowChunk_t& p; // 524
		const CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>& __for_range; // 12754
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t> __for_begin; // 12764
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t> __for_end; // 12774
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::begin(); // 524
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::end(); // 524
		{
			int i; // 200
			{
				int nTestResult; // 202
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 202
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 202
			}
		}
		CUtlAttributeListChunk<VMatrix, 2, VMatrix>::IsEmpty(); // 526
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::operator++(); // 524
	}
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::IsEmpty(); // 116
	{
		int i; // 200
		{
			int nTestResult; // 202
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 202
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 202
		}
	}
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::IsEmpty(); // 522
	{
		const OverflowChunk_t& p; // 524
		const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 12686
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 12696
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 12706
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 524
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 524
		{
			int i; // 200
			{
				int nTestResult; // 202
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 202
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 202
			}
		}
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::IsEmpty(); // 526
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 524
	}
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::IsEmpty(); // 117
	{
		int i; // 200
		{
			int nTestResult; // 202
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 202
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 202
		}
	}
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::IsEmpty(); // 522
	{
		const OverflowChunk_t& p; // 524
		const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 12618
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 12628
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 12638
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
						const OverflowChunk_t* pNode);  // 1160
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 524
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
						const OverflowChunk_t* pNode);  // 1165
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 524
		{
			int i; // 200
			{
				int nTestResult; // 202
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 202
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 202
			}
		}
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::IsEmpty(); // 526
		operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 524
	}
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::IsEmpty(); // 118
	{
		int i; // 200
		{
			int nTestResult; // 202
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 202
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 202
		}
	}
	IsEmpty(const CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t> this); // 522
	{
		const OverflowChunk_t& p; // 524
		const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t,& __for_range; // 12550
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_begin; // 12560
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_end; // 12570
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBu this); // 1160
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Co this,
						const OverflowChunk_t* pNode);  // 1160
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBu this); // 524
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Co this,
						const OverflowChunk_t* pNode);  // 1165
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBu this); // 524
		{
			int i; // 200
			{
				int nTestResult; // 202
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 202
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 202
			}
		}
		IsEmpty(const CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t> this); // 526
		operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Co this); // 524
	}
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::IsEmpty(); // 119
	{
		int i; // 200
		{
			int nTestResult; // 202
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 202
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 202
		}
	}
	CUtlAttributeListChunk<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t>::IsEmpty(); // 522
	{
		const OverflowChunk_t& p; // 524
		const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>& __for_range; // 12482
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::OverflowChunk_t> __for_begin; // 12492
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::OverflowChunk_t> __for_end; // 12502
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorS this); // 1160
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Des this,
						const OverflowChunk_t* pNode);  // 1160
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorS this); // 524
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Des this,
						const OverflowChunk_t* pNode);  // 1165
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorS this); // 524
		{
			int i; // 200
			{
				int nTestResult; // 202
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 202
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 202
			}
		}
		CUtlAttributeListChunk<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t>::IsEmpty(); // 526
		operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Des this); // 524
	}
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::IsEmpty(); // 120
	{
		int i; // 200
		{
			int nTestResult; // 202
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 202
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 202
		}
	}
	CUtlAttributeListChunk<void::IsEmpty(); // 522
	{
		const OverflowChunk_t& p; // 524
		const CUtlIntrusiveList<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t>& __for_range; // 12414
		CUtlIntrusiveListIterator<const CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_begin; // 12424
		CUtlIntrusiveListIterator<const CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_end; // 12434
		CUtlIntrusiveList<CUtlAttributeList<void::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<void::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<void::begin(); // 524
		CUtlIntrusiveListIterator<const CUtlAttributeList<void::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<void::end(); // 524
		{
			int i; // 200
			{
				int nTestResult; // 202
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 202
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 202
			}
		}
		CUtlAttributeListChunk<void::IsEmpty(); // 526
		CUtlIntrusiveListIterator<const CUtlAttributeList<void::operator++(); // 524
	}
	CUtlAttributeList<void::IsEmpty(); // 121
	{
		int i; // 200
		{
			int nTestResult; // 202
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 202
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 202
		}
	}
	CUtlAttributeListChunk<CUtlString, 2, CUtlString>::IsEmpty(); // 522
	{
		const OverflowChunk_t& p; // 524
		const CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>& __for_range; // 12346
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t> __for_begin; // 12356
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t> __for_end; // 12366
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::begin(); // 524
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::end(); // 524
		{
			int i; // 200
			{
				int nTestResult; // 202
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 202
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 202
			}
		}
		CUtlAttributeListChunk<CUtlString, 2, CUtlString>::IsEmpty(); // 526
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::operator++(); // 524
	}
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::IsEmpty(); // 122
	CRenderAttributes::IsEmpty(); // 113
} /* size: 738, inline expansions: 17 (1113 bytes) */

// <04024E88> ../public/rendersystem/renderattrs.h:113
inline void CRenderAttributes::IsEmpty()
{
} /* size: 0 */

// <03EAEEED> ../public/rendersystem/renderattrs.h:113
// variables: 80
// function calls: 153
void CRenderAttributes::IsEmpty()
{
	{
		int i; // 200
		{
			int nTestResult; // 202
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 202
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 202
		}
	}
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::IsEmpty(); // 522
	{
		const OverflowChunk_t& p; // 524
		const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 26364
		CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 26374
		CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 26384
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 524
		CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 524
		{
			int i; // 200
			{
				int nTestResult; // 202
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 202
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 202
			}
		}
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::IsEmpty(); // 526
		CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 524
	}
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::IsEmpty(); // 115
	{
		int i; // 200
		{
			int nTestResult; // 202
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 202
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 202
		}
	}
	CUtlAttributeListChunk<VMatrix, 1, VMatrix>::IsEmpty(); // 522
	{
		const OverflowChunk_t& p; // 524
		const CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>& __for_range; // 26296
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t> __for_begin; // 26306
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t> __for_end; // 26316
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::begin(); // 524
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::end(); // 524
		{
			int i; // 200
			{
				int nTestResult; // 202
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 202
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 202
			}
		}
		CUtlAttributeListChunk<VMatrix, 2, VMatrix>::IsEmpty(); // 526
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::operator++(); // 524
	}
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::IsEmpty(); // 116
	{
		int i; // 200
		{
			int nTestResult; // 202
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 202
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 202
		}
	}
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::IsEmpty(); // 522
	{
		const OverflowChunk_t& p; // 524
		const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 26228
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 26238
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 26248
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 524
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 524
		{
			int i; // 200
			{
				int nTestResult; // 202
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 202
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 202
			}
		}
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::IsEmpty(); // 526
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 524
	}
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::IsEmpty(); // 117
	{
		int i; // 200
		{
			int nTestResult; // 202
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 202
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 202
		}
	}
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::IsEmpty(); // 522
	{
		const OverflowChunk_t& p; // 524
		const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 26160
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 26170
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 26180
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
						const OverflowChunk_t* pNode);  // 1160
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 524
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
						const OverflowChunk_t* pNode);  // 1165
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 524
		{
			int i; // 200
			{
				int nTestResult; // 202
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 202
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 202
			}
		}
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::IsEmpty(); // 526
		operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 524
	}
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::IsEmpty(); // 118
	{
		int i; // 200
		{
			int nTestResult; // 202
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 202
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 202
		}
	}
	IsEmpty(const CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t> this); // 522
	{
		const OverflowChunk_t& p; // 524
		const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t,& __for_range; // 26092
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_begin; // 26102
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_end; // 26112
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBu this); // 1160
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Co this,
						const OverflowChunk_t* pNode);  // 1160
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBu this); // 524
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Co this,
						const OverflowChunk_t* pNode);  // 1165
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBu this); // 524
		{
			int i; // 200
			{
				int nTestResult; // 202
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 202
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 202
			}
		}
		IsEmpty(const CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t> this); // 526
		operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Co this); // 524
	}
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::IsEmpty(); // 119
	{
		int i; // 200
		{
			int nTestResult; // 202
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 202
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 202
		}
	}
	CUtlAttributeListChunk<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t>::IsEmpty(); // 522
	{
		const OverflowChunk_t& p; // 524
		const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>& __for_range; // 26024
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::OverflowChunk_t> __for_begin; // 26034
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::OverflowChunk_t> __for_end; // 26044
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorS this); // 1160
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Des this,
						const OverflowChunk_t* pNode);  // 1160
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorS this); // 524
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Des this,
						const OverflowChunk_t* pNode);  // 1165
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorS this); // 524
		{
			int i; // 200
			{
				int nTestResult; // 202
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 202
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 202
			}
		}
		CUtlAttributeListChunk<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t>::IsEmpty(); // 526
		operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Des this); // 524
	}
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::IsEmpty(); // 120
	{
		int i; // 200
		{
			int nTestResult; // 202
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 202
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 202
		}
	}
	CUtlAttributeListChunk<void::IsEmpty(); // 522
	{
		const OverflowChunk_t& p; // 524
		const CUtlIntrusiveList<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t>& __for_range; // 25956
		CUtlIntrusiveListIterator<const CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_begin; // 25966
		CUtlIntrusiveListIterator<const CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_end; // 25976
		CUtlIntrusiveList<CUtlAttributeList<void::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<void::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<void::begin(); // 524
		CUtlIntrusiveListIterator<const CUtlAttributeList<void::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<void::end(); // 524
		{
			int i; // 200
			{
				int nTestResult; // 202
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 202
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 202
			}
		}
		CUtlAttributeListChunk<void::IsEmpty(); // 526
		CUtlIntrusiveListIterator<const CUtlAttributeList<void::operator++(); // 524
	}
	CUtlAttributeList<void::IsEmpty(); // 121
	{
		int i; // 200
		{
			int nTestResult; // 202
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 202
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 202
		}
	}
	CUtlAttributeListChunk<CUtlString, 2, CUtlString>::IsEmpty(); // 522
	{
		const OverflowChunk_t& p; // 524
		const CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>& __for_range; // 25888
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t> __for_begin; // 25898
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t> __for_end; // 25908
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::begin(); // 524
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::end(); // 524
		{
			int i; // 200
			{
				int nTestResult; // 202
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 202
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 202
			}
		}
		CUtlAttributeListChunk<CUtlString, 2, CUtlString>::IsEmpty(); // 526
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::operator++(); // 524
	}
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::IsEmpty(); // 122
	CRenderAttributes::IsEmpty(); // 113
} /* size: 738, inline expansions: 17 (1113 bytes) */

// <02F3A6CB> ../public/rendersystem/renderattrs.h:113
// variables: 80
// function calls: 153
void CRenderAttributes::IsEmpty()
{
	{
		int i; // 200
		{
			int nTestResult; // 202
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 202
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 202
		}
	}
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::IsEmpty(); // 522
	{
		const OverflowChunk_t& p; // 524
		const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 51947
		CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 51957
		CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 51967
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 524
		CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 524
		{
			int i; // 200
			{
				int nTestResult; // 202
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 202
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 202
			}
		}
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::IsEmpty(); // 526
		CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 524
	}
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::IsEmpty(); // 115
	{
		int i; // 200
		{
			int nTestResult; // 202
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 202
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 202
		}
	}
	CUtlAttributeListChunk<VMatrix, 1, VMatrix>::IsEmpty(); // 522
	{
		const OverflowChunk_t& p; // 524
		const CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>& __for_range; // 51879
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t> __for_begin; // 51889
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t> __for_end; // 51899
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::begin(); // 524
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::end(); // 524
		{
			int i; // 200
			{
				int nTestResult; // 202
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 202
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 202
			}
		}
		CUtlAttributeListChunk<VMatrix, 2, VMatrix>::IsEmpty(); // 526
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::operator++(); // 524
	}
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::IsEmpty(); // 116
	{
		int i; // 200
		{
			int nTestResult; // 202
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 202
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 202
		}
	}
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::IsEmpty(); // 522
	{
		const OverflowChunk_t& p; // 524
		const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 51811
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 51821
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 51831
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 524
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 524
		{
			int i; // 200
			{
				int nTestResult; // 202
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 202
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 202
			}
		}
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::IsEmpty(); // 526
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 524
	}
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::IsEmpty(); // 117
	{
		int i; // 200
		{
			int nTestResult; // 202
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 202
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 202
		}
	}
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::IsEmpty(); // 522
	{
		const OverflowChunk_t& p; // 524
		const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 51743
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 51753
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 51763
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
						const OverflowChunk_t* pNode);  // 1160
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 524
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
						const OverflowChunk_t* pNode);  // 1165
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 524
		{
			int i; // 200
			{
				int nTestResult; // 202
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 202
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 202
			}
		}
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::IsEmpty(); // 526
		operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 524
	}
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::IsEmpty(); // 118
	{
		int i; // 200
		{
			int nTestResult; // 202
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 202
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 202
		}
	}
	IsEmpty(const CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t> this); // 522
	{
		const OverflowChunk_t& p; // 524
		const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t,& __for_range; // 51675
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_begin; // 51685
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_end; // 51695
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBu this); // 1160
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Co this,
						const OverflowChunk_t* pNode);  // 1160
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBu this); // 524
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Co this,
						const OverflowChunk_t* pNode);  // 1165
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBu this); // 524
		{
			int i; // 200
			{
				int nTestResult; // 202
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 202
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 202
			}
		}
		IsEmpty(const CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t> this); // 526
		operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Co this); // 524
	}
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::IsEmpty(); // 119
	{
		int i; // 200
		{
			int nTestResult; // 202
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 202
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 202
		}
	}
	CUtlAttributeListChunk<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t>::IsEmpty(); // 522
	{
		const OverflowChunk_t& p; // 524
		const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>& __for_range; // 51607
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::OverflowChunk_t> __for_begin; // 51617
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::OverflowChunk_t> __for_end; // 51627
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorS this); // 1160
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Des this,
						const OverflowChunk_t* pNode);  // 1160
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorS this); // 524
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Des this,
						const OverflowChunk_t* pNode);  // 1165
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorS this); // 524
		{
			int i; // 200
			{
				int nTestResult; // 202
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 202
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 202
			}
		}
		CUtlAttributeListChunk<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t>::IsEmpty(); // 526
		operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Des this); // 524
	}
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::IsEmpty(); // 120
	{
		int i; // 200
		{
			int nTestResult; // 202
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 202
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 202
		}
	}
	CUtlAttributeListChunk<void::IsEmpty(); // 522
	{
		const OverflowChunk_t& p; // 524
		const CUtlIntrusiveList<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t>& __for_range; // 51539
		CUtlIntrusiveListIterator<const CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_begin; // 51549
		CUtlIntrusiveListIterator<const CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_end; // 51559
		CUtlIntrusiveList<CUtlAttributeList<void::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<void::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<void::begin(); // 524
		CUtlIntrusiveListIterator<const CUtlAttributeList<void::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<void::end(); // 524
		{
			int i; // 200
			{
				int nTestResult; // 202
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 202
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 202
			}
		}
		CUtlAttributeListChunk<void::IsEmpty(); // 526
		CUtlIntrusiveListIterator<const CUtlAttributeList<void::operator++(); // 524
	}
	CUtlAttributeList<void::IsEmpty(); // 121
	{
		int i; // 200
		{
			int nTestResult; // 202
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 202
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 202
		}
	}
	CUtlAttributeListChunk<CUtlString, 2, CUtlString>::IsEmpty(); // 522
	{
		const OverflowChunk_t& p; // 524
		const CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>& __for_range; // 51471
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t> __for_begin; // 51481
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t> __for_end; // 51491
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::begin(); // 524
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::end(); // 524
		{
			int i; // 200
			{
				int nTestResult; // 202
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 202
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 202
			}
		}
		CUtlAttributeListChunk<CUtlString, 2, CUtlString>::IsEmpty(); // 526
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::operator++(); // 524
	}
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::IsEmpty(); // 122
	CRenderAttributes::IsEmpty(); // 113
} /* size: 738, inline expansions: 17 (1113 bytes) */

// <01363668> ../public/rendersystem/renderattrs.h:113
// variables: 80
// function calls: 153
void CRenderAttributes::IsEmpty()
{
	{
		int i; // 200
		{
			int nTestResult; // 202
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 202
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 202
		}
	}
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::IsEmpty(); // 522
	{
		const OverflowChunk_t& p; // 524
		const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 39907
		CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 39917
		CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 39927
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 524
		CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 524
		{
			int i; // 200
			{
				int nTestResult; // 202
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 202
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 202
			}
		}
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::IsEmpty(); // 526
		CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 524
	}
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::IsEmpty(); // 115
	{
		int i; // 200
		{
			int nTestResult; // 202
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 202
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 202
		}
	}
	CUtlAttributeListChunk<VMatrix, 1, VMatrix>::IsEmpty(); // 522
	{
		const OverflowChunk_t& p; // 524
		const CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>& __for_range; // 39839
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t> __for_begin; // 39849
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t> __for_end; // 39859
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::begin(); // 524
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::end(); // 524
		{
			int i; // 200
			{
				int nTestResult; // 202
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 202
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 202
			}
		}
		CUtlAttributeListChunk<VMatrix, 2, VMatrix>::IsEmpty(); // 526
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::operator++(); // 524
	}
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::IsEmpty(); // 116
	{
		int i; // 200
		{
			int nTestResult; // 202
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 202
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 202
		}
	}
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::IsEmpty(); // 522
	{
		const OverflowChunk_t& p; // 524
		const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 39771
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 39781
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 39791
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 524
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 524
		{
			int i; // 200
			{
				int nTestResult; // 202
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 202
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 202
			}
		}
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::IsEmpty(); // 526
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 524
	}
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::IsEmpty(); // 117
	{
		int i; // 200
		{
			int nTestResult; // 202
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 202
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 202
		}
	}
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::IsEmpty(); // 522
	{
		const OverflowChunk_t& p; // 524
		const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 39703
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 39713
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 39723
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
						const OverflowChunk_t* pNode);  // 1160
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 524
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
						const OverflowChunk_t* pNode);  // 1165
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 524
		{
			int i; // 200
			{
				int nTestResult; // 202
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 202
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 202
			}
		}
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::IsEmpty(); // 526
		operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 524
	}
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::IsEmpty(); // 118
	{
		int i; // 200
		{
			int nTestResult; // 202
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 202
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 202
		}
	}
	IsEmpty(const CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t> this); // 522
	{
		const OverflowChunk_t& p; // 524
		const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t,& __for_range; // 39635
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_begin; // 39645
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_end; // 39655
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBu this); // 1160
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Co this,
						const OverflowChunk_t* pNode);  // 1160
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBu this); // 524
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Co this,
						const OverflowChunk_t* pNode);  // 1165
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBu this); // 524
		{
			int i; // 200
			{
				int nTestResult; // 202
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 202
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 202
			}
		}
		IsEmpty(const CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t> this); // 526
		operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Co this); // 524
	}
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::IsEmpty(); // 119
	{
		int i; // 200
		{
			int nTestResult; // 202
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 202
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 202
		}
	}
	CUtlAttributeListChunk<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t>::IsEmpty(); // 522
	{
		const OverflowChunk_t& p; // 524
		const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>& __for_range; // 39567
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::OverflowChunk_t> __for_begin; // 39577
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::OverflowChunk_t> __for_end; // 39587
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorS this); // 1160
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Des this,
						const OverflowChunk_t* pNode);  // 1160
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorS this); // 524
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Des this,
						const OverflowChunk_t* pNode);  // 1165
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorS this); // 524
		{
			int i; // 200
			{
				int nTestResult; // 202
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 202
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 202
			}
		}
		CUtlAttributeListChunk<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t>::IsEmpty(); // 526
		operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Des this); // 524
	}
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::IsEmpty(); // 120
	{
		int i; // 200
		{
			int nTestResult; // 202
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 202
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 202
		}
	}
	CUtlAttributeListChunk<void::IsEmpty(); // 522
	{
		const OverflowChunk_t& p; // 524
		const CUtlIntrusiveList<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t>& __for_range; // 39499
		CUtlIntrusiveListIterator<const CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_begin; // 39509
		CUtlIntrusiveListIterator<const CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_end; // 39519
		CUtlIntrusiveList<CUtlAttributeList<void::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<void::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<void::begin(); // 524
		CUtlIntrusiveListIterator<const CUtlAttributeList<void::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<void::end(); // 524
		{
			int i; // 200
			{
				int nTestResult; // 202
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 202
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 202
			}
		}
		CUtlAttributeListChunk<void::IsEmpty(); // 526
		CUtlIntrusiveListIterator<const CUtlAttributeList<void::operator++(); // 524
	}
	CUtlAttributeList<void::IsEmpty(); // 121
	{
		int i; // 200
		{
			int nTestResult; // 202
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 202
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 202
		}
	}
	CUtlAttributeListChunk<CUtlString, 2, CUtlString>::IsEmpty(); // 522
	{
		const OverflowChunk_t& p; // 524
		const CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>& __for_range; // 39431
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t> __for_begin; // 39441
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t> __for_end; // 39451
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::begin(); // 524
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::end(); // 524
		{
			int i; // 200
			{
				int nTestResult; // 202
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 202
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 202
			}
		}
		CUtlAttributeListChunk<CUtlString, 2, CUtlString>::IsEmpty(); // 526
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::operator++(); // 524
	}
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::IsEmpty(); // 122
	CRenderAttributes::IsEmpty(); // 113
} /* size: 738, inline expansions: 17 (1113 bytes) */

// <04024E57> ../public/rendersystem/renderattrs.h:126
inline void CRenderAttributes::Clear(bool bFreeHashMemory, bool bResetParent)
{
} /* size: 0 */

// <03F431B7> ../public/rendersystem/renderattrs.h:126
// variables: 44
// function calls: 165
void CRenderAttributes::Clear(bool bFreeHashMemory, bool bResetParent)
{
	{
		OverflowChunk_t* tmp; // 1018
	}
	CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Purge(); // 400
	{
		OverflowChunk_t& p; // 404
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 3519
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 3529
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 3539
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 404
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 404
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::Clear(); // 406
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 404
	}
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 45
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 46
	SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::Clear(); // 409
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::Clear(
		bool bFreeHashMemory);  // 128
	{
		OverflowChunk_t& p; // 404
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>& __for_range; // 3438
		CUtlIntrusiveListIterator<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t> __for_begin; // 3448
		CUtlIntrusiveListIterator<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t> __for_end; // 3458
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::Head(); // 1151
		CUtlIntrusiveListIterator<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::begin(); // 404
		CUtlIntrusiveListIterator<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::end(); // 404
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
		CUtlAttributeListChunk<VMatrix, 2, VMatrix>::Clear(); // 406
		CUtlIntrusiveListIterator<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::operator++(); // 404
	}
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<VMatrix, 1, VMatrix>::Clear(); // 409
	{
		OverflowChunk_t* tmp; // 1018
	}
	CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::Purge(); // 400
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::Clear(
		bool bFreeHashMemory);  // 129
	{
		OverflowChunk_t& p; // 404
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 3357
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 3367
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 3377
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1151
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 404
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 404
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::Clear(); // 406
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 404
	}
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 45
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 46
	SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::Clear(); // 409
	{
		OverflowChunk_t* tmp; // 1018
	}
	CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Purge(); // 400
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::Clear(
		bool bFreeHashMemory);  // 130
	{
		OverflowChunk_t& p; // 404
		CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t>& __for_range; // 3276
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 3286
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 3296
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1151
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForS this,
						OverflowChunk_t* pNode);  // 1151
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this); // 404
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForS this,
						OverflowChunk_t* pNode);  // 1156
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this); // 404
		{
			int i; // 77
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 947
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 947
			ReleaseValueFromAttribute<CRenderAttributes::TextureAttrForStorage_t>(TextureAttrForStorage_t* pT); // 81
		}
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::ReleaseValues(); // 88
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 45
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 46
		SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 89
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::Clear(); // 406
		operator++(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForS this); // 404
	}
	{
		int i; // 77
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 947
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 947
		ReleaseValueFromAttribute<CRenderAttributes::TextureAttrForStorage_t>(TextureAttrForStorage_t* pT); // 81
	}
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::ReleaseValues(); // 88
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 45
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 46
	SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::Clear(); // 409
	{
		OverflowChunk_t* tmp; // 1018
	}
	Purge(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this); // 400
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::Clear(
		bool bFreeHashMemory);  // 131
	{
		OverflowChunk_t* tmp; // 1018
	}
	Purge(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAt this); // 400
	{
		OverflowChunk_t& p; // 404
		CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t>& __for_range; // 3195
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_begin; // 3205
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_end; // 3215
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Constant this,
						OverflowChunk_t* pNode);  // 1151
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAt this); // 404
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Constant this,
						OverflowChunk_t* pNode);  // 1156
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAt this); // 404
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
		CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::Clear(); // 406
		operator++(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Constant this); // 404
	}
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::Clear(); // 409
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::Clear(
		bool bFreeHashMemory);  // 132
	{
		OverflowChunk_t& p; // 404
		CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::OverflowChunk_t>& __for_range; // 3114
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::OverflowChunk_t> __for_begin; // 3124
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::OverflowChunk_t> __for_end; // 3134
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorS this); // 1151
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Descripto this,
						OverflowChunk_t* pNode);  // 1151
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr this); // 404
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Descripto this,
						OverflowChunk_t* pNode);  // 1156
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr this); // 404
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
		CUtlAttributeListChunk<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t>::Clear(); // 406
		operator++(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Descripto this); // 404
	}
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t>::Clear(); // 409
	{
		OverflowChunk_t* tmp; // 1018
	}
	Purge(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr this); // 400
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::Clear(
		bool bFreeHashMemory);  // 133
	{
		OverflowChunk_t& p; // 404
		CUtlIntrusiveList<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t>& __for_range; // 3033
		CUtlIntrusiveListIterator<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_begin; // 3043
		CUtlIntrusiveListIterator<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_end; // 3053
		CUtlIntrusiveList<CUtlAttributeList<void::Head(); // 1151
		CUtlIntrusiveListIterator<CUtlAttributeList<void::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<void::begin(); // 404
		CUtlIntrusiveListIterator<CUtlAttributeList<void::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<void::end(); // 404
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
		CUtlAttributeListChunk<void::Clear(); // 406
		CUtlIntrusiveListIterator<CUtlAttributeList<void::operator++(); // 404
	}
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<void::Clear(); // 409
	{
		OverflowChunk_t* tmp; // 1018
	}
	CUtlIntrusiveList<CUtlAttributeList<void::Purge(); // 400
	CUtlAttributeList<void::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<void::Clear(
		bool bFreeHashMemory);  // 134
	{
		OverflowChunk_t& p; // 404
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>& __for_range; // 2952
		CUtlIntrusiveListIterator<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t> __for_begin; // 2962
		CUtlIntrusiveListIterator<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t> __for_end; // 2972
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::Head(); // 1151
		CUtlIntrusiveListIterator<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::begin(); // 404
		CUtlIntrusiveListIterator<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::end(); // 404
		{
			int i; // 77
			CUtlString::Clear(); // 962
			ReleaseValueFromAttribute<CUtlString>(CUtlString* pS); // 81
		}
		CUtlAttributeListChunk<CUtlString, 2, CUtlString>::ReleaseValues(); // 88
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
		CUtlAttributeListChunk<CUtlString, 2, CUtlString>::Clear(); // 406
		CUtlIntrusiveListIterator<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::operator++(); // 404
	}
	{
		OverflowChunk_t* tmp; // 1018
		CUtlString::~CUtlString(); // 68
		CUtlAttributeListChunk<CUtlString, 2, CUtlString>::~CUtlAttributeListChunk(); // 254
		OverflowChunk_t::~OverflowChunk_t(); // 1019
	}
	CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::Purge(); // 400
	{
		int i; // 77
		CUtlString::Clear(); // 962
		ReleaseValueFromAttribute<CUtlString>(CUtlString* pS); // 81
	}
	CUtlAttributeListChunk<CUtlString, 2, CUtlString>::ReleaseValues(); // 88
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<CUtlString, 2, CUtlString>::Clear(); // 409
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::Clear(
		bool bFreeHashMemory);  // 135
} /* size: 1304, inline expansions: 64 (3686 bytes) */

// <03EA9948> ../public/rendersystem/renderattrs.h:126
// variables: 44
// function calls: 165
void CRenderAttributes::Clear(bool bFreeHashMemory, bool bResetParent)
{
	{
		OverflowChunk_t* tmp; // 1018
	}
	CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Purge(); // 400
	{
		OverflowChunk_t& p; // 404
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 7881
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 7891
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 7901
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 404
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 404
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::Clear(); // 406
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 404
	}
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 45
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 46
	SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::Clear(); // 409
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::Clear(
		bool bFreeHashMemory);  // 128
	{
		OverflowChunk_t& p; // 404
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>& __for_range; // 7800
		CUtlIntrusiveListIterator<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t> __for_begin; // 7810
		CUtlIntrusiveListIterator<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t> __for_end; // 7820
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::Head(); // 1151
		CUtlIntrusiveListIterator<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::begin(); // 404
		CUtlIntrusiveListIterator<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::end(); // 404
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
		CUtlAttributeListChunk<VMatrix, 2, VMatrix>::Clear(); // 406
		CUtlIntrusiveListIterator<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::operator++(); // 404
	}
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<VMatrix, 1, VMatrix>::Clear(); // 409
	{
		OverflowChunk_t* tmp; // 1018
	}
	CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::Purge(); // 400
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::Clear(
		bool bFreeHashMemory);  // 129
	{
		OverflowChunk_t& p; // 404
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 7719
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 7729
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 7739
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1151
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 404
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 404
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::Clear(); // 406
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 404
	}
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 45
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 46
	SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::Clear(); // 409
	{
		OverflowChunk_t* tmp; // 1018
	}
	CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Purge(); // 400
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::Clear(
		bool bFreeHashMemory);  // 130
	{
		OverflowChunk_t& p; // 404
		CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t>& __for_range; // 7638
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 7648
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 7658
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1151
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForS this,
						OverflowChunk_t* pNode);  // 1151
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this); // 404
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForS this,
						OverflowChunk_t* pNode);  // 1156
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this); // 404
		{
			int i; // 77
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 947
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 947
			ReleaseValueFromAttribute<CRenderAttributes::TextureAttrForStorage_t>(TextureAttrForStorage_t* pT); // 81
		}
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::ReleaseValues(); // 88
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 45
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 46
		SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 89
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::Clear(); // 406
		operator++(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForS this); // 404
	}
	{
		int i; // 77
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 947
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 947
		ReleaseValueFromAttribute<CRenderAttributes::TextureAttrForStorage_t>(TextureAttrForStorage_t* pT); // 81
	}
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::ReleaseValues(); // 88
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 45
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 46
	SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::Clear(); // 409
	{
		OverflowChunk_t* tmp; // 1018
	}
	Purge(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this); // 400
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::Clear(
		bool bFreeHashMemory);  // 131
	{
		OverflowChunk_t* tmp; // 1018
	}
	Purge(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAt this); // 400
	{
		OverflowChunk_t& p; // 404
		CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t>& __for_range; // 7557
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_begin; // 7567
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_end; // 7577
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Constant this,
						OverflowChunk_t* pNode);  // 1151
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAt this); // 404
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Constant this,
						OverflowChunk_t* pNode);  // 1156
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAt this); // 404
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
		CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::Clear(); // 406
		operator++(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Constant this); // 404
	}
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::Clear(); // 409
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::Clear(
		bool bFreeHashMemory);  // 132
	{
		OverflowChunk_t& p; // 404
		CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::OverflowChunk_t>& __for_range; // 7476
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::OverflowChunk_t> __for_begin; // 7486
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::OverflowChunk_t> __for_end; // 7496
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorS this); // 1151
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Descripto this,
						OverflowChunk_t* pNode);  // 1151
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr this); // 404
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Descripto this,
						OverflowChunk_t* pNode);  // 1156
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr this); // 404
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
		CUtlAttributeListChunk<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t>::Clear(); // 406
		operator++(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Descripto this); // 404
	}
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t>::Clear(); // 409
	{
		OverflowChunk_t* tmp; // 1018
	}
	Purge(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr this); // 400
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::Clear(
		bool bFreeHashMemory);  // 133
	{
		OverflowChunk_t& p; // 404
		CUtlIntrusiveList<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t>& __for_range; // 7395
		CUtlIntrusiveListIterator<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_begin; // 7405
		CUtlIntrusiveListIterator<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_end; // 7415
		CUtlIntrusiveList<CUtlAttributeList<void::Head(); // 1151
		CUtlIntrusiveListIterator<CUtlAttributeList<void::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<void::begin(); // 404
		CUtlIntrusiveListIterator<CUtlAttributeList<void::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<void::end(); // 404
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
		CUtlAttributeListChunk<void::Clear(); // 406
		CUtlIntrusiveListIterator<CUtlAttributeList<void::operator++(); // 404
	}
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<void::Clear(); // 409
	{
		OverflowChunk_t* tmp; // 1018
	}
	CUtlIntrusiveList<CUtlAttributeList<void::Purge(); // 400
	CUtlAttributeList<void::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<void::Clear(
		bool bFreeHashMemory);  // 134
	{
		OverflowChunk_t& p; // 404
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>& __for_range; // 7314
		CUtlIntrusiveListIterator<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t> __for_begin; // 7324
		CUtlIntrusiveListIterator<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t> __for_end; // 7334
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::Head(); // 1151
		CUtlIntrusiveListIterator<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::begin(); // 404
		CUtlIntrusiveListIterator<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::end(); // 404
		{
			int i; // 77
			CUtlString::Clear(); // 962
			ReleaseValueFromAttribute<CUtlString>(CUtlString* pS); // 81
		}
		CUtlAttributeListChunk<CUtlString, 2, CUtlString>::ReleaseValues(); // 88
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
		CUtlAttributeListChunk<CUtlString, 2, CUtlString>::Clear(); // 406
		CUtlIntrusiveListIterator<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::operator++(); // 404
	}
	{
		OverflowChunk_t* tmp; // 1018
		CUtlString::~CUtlString(); // 68
		CUtlAttributeListChunk<CUtlString, 2, CUtlString>::~CUtlAttributeListChunk(); // 254
		OverflowChunk_t::~OverflowChunk_t(); // 1019
	}
	CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::Purge(); // 400
	{
		int i; // 77
		CUtlString::Clear(); // 962
		ReleaseValueFromAttribute<CUtlString>(CUtlString* pS); // 81
	}
	CUtlAttributeListChunk<CUtlString, 2, CUtlString>::ReleaseValues(); // 88
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<CUtlString, 2, CUtlString>::Clear(); // 409
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::Clear(
		bool bFreeHashMemory);  // 135
} /* size: 1304, inline expansions: 64 (3686 bytes) */

// <01DCC04D> ../public/rendersystem/renderattrs.h:126
// variables: 44
// function calls: 165
void CRenderAttributes::Clear(bool bFreeHashMemory, bool bResetParent)
{
	{
		OverflowChunk_t* tmp; // 1018
	}
	CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Purge(); // 400
	{
		OverflowChunk_t& p; // 404
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 56565
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 56575
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 56585
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 404
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 404
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::Clear(); // 406
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 404
	}
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 45
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 46
	SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::Clear(); // 409
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::Clear(
		bool bFreeHashMemory);  // 128
	{
		OverflowChunk_t& p; // 404
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>& __for_range; // 56484
		CUtlIntrusiveListIterator<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t> __for_begin; // 56494
		CUtlIntrusiveListIterator<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t> __for_end; // 56504
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::Head(); // 1151
		CUtlIntrusiveListIterator<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::begin(); // 404
		CUtlIntrusiveListIterator<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::end(); // 404
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
		CUtlAttributeListChunk<VMatrix, 2, VMatrix>::Clear(); // 406
		CUtlIntrusiveListIterator<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::operator++(); // 404
	}
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<VMatrix, 1, VMatrix>::Clear(); // 409
	{
		OverflowChunk_t* tmp; // 1018
	}
	CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::Purge(); // 400
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::Clear(
		bool bFreeHashMemory);  // 129
	{
		OverflowChunk_t& p; // 404
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 56403
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 56413
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 56423
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1151
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 404
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 404
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::Clear(); // 406
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 404
	}
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 45
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 46
	SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::Clear(); // 409
	{
		OverflowChunk_t* tmp; // 1018
	}
	CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Purge(); // 400
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::Clear(
		bool bFreeHashMemory);  // 130
	{
		OverflowChunk_t& p; // 404
		CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t>& __for_range; // 56322
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 56332
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 56342
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1151
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForS this,
						OverflowChunk_t* pNode);  // 1151
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this); // 404
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForS this,
						OverflowChunk_t* pNode);  // 1156
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this); // 404
		{
			int i; // 77
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 947
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 947
			ReleaseValueFromAttribute<CRenderAttributes::TextureAttrForStorage_t>(TextureAttrForStorage_t* pT); // 81
		}
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::ReleaseValues(); // 88
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 45
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 46
		SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 89
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::Clear(); // 406
		operator++(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForS this); // 404
	}
	{
		int i; // 77
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 947
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 947
		ReleaseValueFromAttribute<CRenderAttributes::TextureAttrForStorage_t>(TextureAttrForStorage_t* pT); // 81
	}
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::ReleaseValues(); // 88
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 45
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 46
	SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::Clear(); // 409
	{
		OverflowChunk_t* tmp; // 1018
	}
	Purge(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this); // 400
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::Clear(
		bool bFreeHashMemory);  // 131
	{
		OverflowChunk_t* tmp; // 1018
	}
	Purge(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAt this); // 400
	{
		OverflowChunk_t& p; // 404
		CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t>& __for_range; // 56241
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_begin; // 56251
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_end; // 56261
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Constant this,
						OverflowChunk_t* pNode);  // 1151
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAt this); // 404
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Constant this,
						OverflowChunk_t* pNode);  // 1156
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAt this); // 404
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
		CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::Clear(); // 406
		operator++(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Constant this); // 404
	}
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::Clear(); // 409
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::Clear(
		bool bFreeHashMemory);  // 132
	{
		OverflowChunk_t& p; // 404
		CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::OverflowChunk_t>& __for_range; // 56160
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::OverflowChunk_t> __for_begin; // 56170
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::OverflowChunk_t> __for_end; // 56180
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorS this); // 1151
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Descripto this,
						OverflowChunk_t* pNode);  // 1151
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr this); // 404
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Descripto this,
						OverflowChunk_t* pNode);  // 1156
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr this); // 404
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
		CUtlAttributeListChunk<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t>::Clear(); // 406
		operator++(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Descripto this); // 404
	}
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t>::Clear(); // 409
	{
		OverflowChunk_t* tmp; // 1018
	}
	Purge(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr this); // 400
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::Clear(
		bool bFreeHashMemory);  // 133
	{
		OverflowChunk_t& p; // 404
		CUtlIntrusiveList<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t>& __for_range; // 56079
		CUtlIntrusiveListIterator<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_begin; // 56089
		CUtlIntrusiveListIterator<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_end; // 56099
		CUtlIntrusiveList<CUtlAttributeList<void::Head(); // 1151
		CUtlIntrusiveListIterator<CUtlAttributeList<void::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<void::begin(); // 404
		CUtlIntrusiveListIterator<CUtlAttributeList<void::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<void::end(); // 404
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
		CUtlAttributeListChunk<void::Clear(); // 406
		CUtlIntrusiveListIterator<CUtlAttributeList<void::operator++(); // 404
	}
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<void::Clear(); // 409
	{
		OverflowChunk_t* tmp; // 1018
	}
	CUtlIntrusiveList<CUtlAttributeList<void::Purge(); // 400
	CUtlAttributeList<void::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<void::Clear(
		bool bFreeHashMemory);  // 134
	{
		OverflowChunk_t& p; // 404
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>& __for_range; // 55998
		CUtlIntrusiveListIterator<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t> __for_begin; // 56008
		CUtlIntrusiveListIterator<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t> __for_end; // 56018
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::Head(); // 1151
		CUtlIntrusiveListIterator<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::begin(); // 404
		CUtlIntrusiveListIterator<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::end(); // 404
		{
			int i; // 77
			CUtlString::Clear(); // 962
			ReleaseValueFromAttribute<CUtlString>(CUtlString* pS); // 81
		}
		CUtlAttributeListChunk<CUtlString, 2, CUtlString>::ReleaseValues(); // 88
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
		CUtlAttributeListChunk<CUtlString, 2, CUtlString>::Clear(); // 406
		CUtlIntrusiveListIterator<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::operator++(); // 404
	}
	{
		OverflowChunk_t* tmp; // 1018
		CUtlString::~CUtlString(); // 68
		CUtlAttributeListChunk<CUtlString, 2, CUtlString>::~CUtlAttributeListChunk(); // 254
		OverflowChunk_t::~OverflowChunk_t(); // 1019
	}
	CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::Purge(); // 400
	{
		int i; // 77
		CUtlString::Clear(); // 962
		ReleaseValueFromAttribute<CUtlString>(CUtlString* pS); // 81
	}
	CUtlAttributeListChunk<CUtlString, 2, CUtlString>::ReleaseValues(); // 88
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<CUtlString, 2, CUtlString>::Clear(); // 409
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::Clear(
		bool bFreeHashMemory);  // 135
} /* size: 1304, inline expansions: 64 (3686 bytes) */

// <0134ED87> ../public/rendersystem/renderattrs.h:126
// variables: 44
// function calls: 165
void CRenderAttributes::Clear(bool bFreeHashMemory, bool bResetParent)
{
	{
		OverflowChunk_t* tmp; // 1018
	}
	CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Purge(); // 400
	{
		OverflowChunk_t& p; // 404
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 982
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 992
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 1002
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 404
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 404
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::Clear(); // 406
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 404
	}
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 45
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 46
	SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::Clear(); // 409
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::Clear(
		bool bFreeHashMemory);  // 128
	{
		OverflowChunk_t& p; // 404
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>& __for_range; // 901
		CUtlIntrusiveListIterator<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t> __for_begin; // 911
		CUtlIntrusiveListIterator<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t> __for_end; // 921
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::Head(); // 1151
		CUtlIntrusiveListIterator<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::begin(); // 404
		CUtlIntrusiveListIterator<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::end(); // 404
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
		CUtlAttributeListChunk<VMatrix, 2, VMatrix>::Clear(); // 406
		CUtlIntrusiveListIterator<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::operator++(); // 404
	}
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<VMatrix, 1, VMatrix>::Clear(); // 409
	{
		OverflowChunk_t* tmp; // 1018
	}
	CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::Purge(); // 400
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::Clear(
		bool bFreeHashMemory);  // 129
	{
		OverflowChunk_t& p; // 404
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 820
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 830
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 840
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1151
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 404
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 404
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::Clear(); // 406
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 404
	}
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 45
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 46
	SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::Clear(); // 409
	{
		OverflowChunk_t* tmp; // 1018
	}
	CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Purge(); // 400
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::Clear(
		bool bFreeHashMemory);  // 130
	{
		OverflowChunk_t& p; // 404
		CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t>& __for_range; // 739
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 749
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 759
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1151
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForS this,
						OverflowChunk_t* pNode);  // 1151
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this); // 404
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForS this,
						OverflowChunk_t* pNode);  // 1156
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this); // 404
		{
			int i; // 77
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 947
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 947
			ReleaseValueFromAttribute<CRenderAttributes::TextureAttrForStorage_t>(TextureAttrForStorage_t* pT); // 81
		}
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::ReleaseValues(); // 88
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 45
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 46
		SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 89
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::Clear(); // 406
		operator++(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForS this); // 404
	}
	{
		int i; // 77
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 947
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 947
		ReleaseValueFromAttribute<CRenderAttributes::TextureAttrForStorage_t>(TextureAttrForStorage_t* pT); // 81
	}
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::ReleaseValues(); // 88
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 45
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 46
	SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::Clear(); // 409
	{
		OverflowChunk_t* tmp; // 1018
	}
	Purge(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this); // 400
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::Clear(
		bool bFreeHashMemory);  // 131
	{
		OverflowChunk_t* tmp; // 1018
	}
	Purge(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAt this); // 400
	{
		OverflowChunk_t& p; // 404
		CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t>& __for_range; // 658
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_begin; // 668
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_end; // 678
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Constant this,
						OverflowChunk_t* pNode);  // 1151
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAt this); // 404
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Constant this,
						OverflowChunk_t* pNode);  // 1156
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAt this); // 404
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
		CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::Clear(); // 406
		operator++(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Constant this); // 404
	}
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::Clear(); // 409
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::Clear(
		bool bFreeHashMemory);  // 132
	{
		OverflowChunk_t& p; // 404
		CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::OverflowChunk_t>& __for_range; // 577
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::OverflowChunk_t> __for_begin; // 587
		CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::OverflowChunk_t> __for_end; // 597
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorS this); // 1151
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Descripto this,
						OverflowChunk_t* pNode);  // 1151
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr this); // 404
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Descripto this,
						OverflowChunk_t* pNode);  // 1156
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr this); // 404
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
		CUtlAttributeListChunk<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t>::Clear(); // 406
		operator++(const CUtlIntrusiveListIterator<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Descripto this); // 404
	}
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t>::Clear(); // 409
	{
		OverflowChunk_t* tmp; // 1018
	}
	Purge(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr this); // 400
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::Clear(
		bool bFreeHashMemory);  // 133
	{
		OverflowChunk_t& p; // 404
		CUtlIntrusiveList<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t>& __for_range; // 496
		CUtlIntrusiveListIterator<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_begin; // 506
		CUtlIntrusiveListIterator<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_end; // 516
		CUtlIntrusiveList<CUtlAttributeList<void::Head(); // 1151
		CUtlIntrusiveListIterator<CUtlAttributeList<void::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<void::begin(); // 404
		CUtlIntrusiveListIterator<CUtlAttributeList<void::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<void::end(); // 404
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
		CUtlAttributeListChunk<void::Clear(); // 406
		CUtlIntrusiveListIterator<CUtlAttributeList<void::operator++(); // 404
	}
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<void::Clear(); // 409
	{
		OverflowChunk_t* tmp; // 1018
	}
	CUtlIntrusiveList<CUtlAttributeList<void::Purge(); // 400
	CUtlAttributeList<void::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<void::Clear(
		bool bFreeHashMemory);  // 134
	{
		OverflowChunk_t& p; // 404
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>& __for_range; // 415
		CUtlIntrusiveListIterator<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t> __for_begin; // 425
		CUtlIntrusiveListIterator<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t> __for_end; // 435
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::Head(); // 1151
		CUtlIntrusiveListIterator<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::begin(); // 404
		CUtlIntrusiveListIterator<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::end(); // 404
		{
			int i; // 77
			CUtlString::Clear(); // 962
			ReleaseValueFromAttribute<CUtlString>(CUtlString* pS); // 81
		}
		CUtlAttributeListChunk<CUtlString, 2, CUtlString>::ReleaseValues(); // 88
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
		CUtlAttributeListChunk<CUtlString, 2, CUtlString>::Clear(); // 406
		CUtlIntrusiveListIterator<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::operator++(); // 404
	}
	{
		OverflowChunk_t* tmp; // 1018
		CUtlString::~CUtlString(); // 68
		CUtlAttributeListChunk<CUtlString, 2, CUtlString>::~CUtlAttributeListChunk(); // 254
		OverflowChunk_t::~OverflowChunk_t(); // 1019
	}
	CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::Purge(); // 400
	{
		int i; // 77
		CUtlString::Clear(); // 962
		ReleaseValueFromAttribute<CUtlString>(CUtlString* pS); // 81
	}
	CUtlAttributeListChunk<CUtlString, 2, CUtlString>::ReleaseValues(); // 88
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<CUtlString, 2, CUtlString>::Clear(); // 409
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::Clear(
		bool bFreeHashMemory);  // 135
} /* size: 1304, inline expansions: 64 (3686 bytes) */

// <03A5971B> ../public/rendersystem/renderattrs.h:146
// variables: 26
// function calls: 63
void CRenderAttributes::SetFloatValue(CUtlStringToken nTokenID, float flValue)
{
	{
		int i; // 212
		{
			int nTestResult; // 217
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 217
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 217
			{
				const int  nIndex; // 220
			}
		}
	}
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
			i32x4 i4KMatch);  // 311
	{
		const OverflowChunk_t& p; // 279
		const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 25751
		CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 25761
		CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 25771
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 279
		CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 279
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 281
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
					int nIdx);  // 284
		CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 279
	}
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			const Vector4D ** pValueOut);  // 270
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetValuePtrFromIndex(
				int nIdx);  // 314
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			Vector4D** pValueOut);  // 356
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 356
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
			uint32 nKey,
			Vector4D** pValueOut);  // 547
	Vector4D::operator=(
			const Vector4D& vOther);  // 566
	{
		int i; // 212
		{
			int nTestResult; // 217
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 217
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 217
			{
				const int  nIndex; // 220
			}
		}
	}
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
			i32x4 i4KMatch);  // 330
	{
		OverflowChunk_t& p; // 337
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 25644
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 25654
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 25664
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 337
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 337
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 339
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetKeyPtrFromIndex(
					int nIdx);  // 342
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
					int nIdx);  // 343
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 337
	}
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				Vector4D** pValueOut);  // 328
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetKeyPtrFromIndex(
				int nIdx);  // 333
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetValuePtrFromIndex(
				int nIdx);  // 334
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				Vector4D** pValueOut);  // 556
	{
		OverflowChunk_t* pNew; // 559
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::CUtlAttributeListChunk(); // 254
		OverflowChunk_t::OverflowChunk_t(); // 559
		AddToHead<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t, CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>(OverflowChunk_t *& head,
																OverflowChunk_t* node);  // 960
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::AddToHead(
				OverflowChunk_t* node);  // 560
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
					int nIdx);  // 563
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetKeyPtrFromIndex(
					int nIdx);  // 562
	}
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetValue(
		uint32 nKey,
		Vector4D nValue);  // 571
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 571
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		Vector4D nValue);  // 148
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 148
} /* size: 458, inline expansions: 16 (1672 bytes) */

// <0393CDEC> ../public/rendersystem/renderattrs.h:146
// variables: 26
// function calls: 63
void CRenderAttributes::SetFloatValue(CUtlStringToken nTokenID, float flValue)
{
	{
		int i; // 212
		{
			int nTestResult; // 217
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 217
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 217
			{
				const int  nIndex; // 220
			}
		}
	}
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
			i32x4 i4KMatch);  // 311
	{
		OverflowChunk_t& p; // 317
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 8504
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 8514
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 8524
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1151
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 317
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 317
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 319
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
					int nIdx);  // 322
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 317
	}
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			Vector4D** pValueOut);  // 309
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetValuePtrFromIndex(
				int nIdx);  // 314
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			Vector4D** pValueOut);  // 356
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 356
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
			uint32 nKey,
			Vector4D** pValueOut);  // 547
	Vector4D::operator=(
			const Vector4D& vOther);  // 566
	{
		int i; // 212
		{
			int nTestResult; // 217
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 217
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 217
			{
				const int  nIndex; // 220
			}
		}
	}
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
			i32x4 i4KMatch);  // 330
	{
		OverflowChunk_t& p; // 337
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 18234
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 18244
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 18254
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 337
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 337
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 339
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetKeyPtrFromIndex(
					int nIdx);  // 342
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
					int nIdx);  // 343
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 337
	}
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				Vector4D** pValueOut);  // 328
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetKeyPtrFromIndex(
				int nIdx);  // 333
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetValuePtrFromIndex(
				int nIdx);  // 334
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				Vector4D** pValueOut);  // 556
	{
		OverflowChunk_t* pNew; // 559
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::CUtlAttributeListChunk(); // 254
		OverflowChunk_t::OverflowChunk_t(); // 559
		AddToHead<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t, CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>(OverflowChunk_t *& head,
																OverflowChunk_t* node);  // 960
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::AddToHead(
				OverflowChunk_t* node);  // 560
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
					int nIdx);  // 563
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetKeyPtrFromIndex(
					int nIdx);  // 562
	}
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetValue(
		uint32 nKey,
		Vector4D nValue);  // 571
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 571
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		Vector4D nValue);  // 148
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 148
} /* size: 458, inline expansions: 16 (1672 bytes) */

// <037ED69B> ../public/rendersystem/renderattrs.h:146
// variables: 26
// function calls: 63
void CRenderAttributes::SetFloatValue(CUtlStringToken nTokenID, float flValue)
{
	{
		int i; // 212
		{
			int nTestResult; // 217
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 217
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 217
			{
				const int  nIndex; // 220
			}
		}
	}
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
			i32x4 i4KMatch);  // 311
	{
		OverflowChunk_t& p; // 317
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 26674
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 26684
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 26694
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1151
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 317
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 317
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 319
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
					int nIdx);  // 322
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 317
	}
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			Vector4D** pValueOut);  // 309
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetValuePtrFromIndex(
				int nIdx);  // 314
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			Vector4D** pValueOut);  // 356
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 356
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
			uint32 nKey,
			Vector4D** pValueOut);  // 547
	Vector4D::operator=(
			const Vector4D& vOther);  // 566
	{
		int i; // 212
		{
			int nTestResult; // 217
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 217
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 217
			{
				const int  nIndex; // 220
			}
		}
	}
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
			i32x4 i4KMatch);  // 330
	{
		OverflowChunk_t& p; // 337
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 35278
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 35288
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 35298
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 337
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 337
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 339
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetKeyPtrFromIndex(
					int nIdx);  // 342
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
					int nIdx);  // 343
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 337
	}
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				Vector4D** pValueOut);  // 328
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetKeyPtrFromIndex(
				int nIdx);  // 333
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetValuePtrFromIndex(
				int nIdx);  // 334
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				Vector4D** pValueOut);  // 556
	{
		OverflowChunk_t* pNew; // 559
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::CUtlAttributeListChunk(); // 254
		OverflowChunk_t::OverflowChunk_t(); // 559
		AddToHead<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t, CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>(OverflowChunk_t *& head,
																OverflowChunk_t* node);  // 960
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::AddToHead(
				OverflowChunk_t* node);  // 560
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
					int nIdx);  // 563
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetKeyPtrFromIndex(
					int nIdx);  // 562
	}
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetValue(
		uint32 nKey,
		Vector4D nValue);  // 571
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 571
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		Vector4D nValue);  // 148
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 148
} /* size: 458, inline expansions: 16 (1672 bytes) */

// <033CF403> ../public/rendersystem/renderattrs.h:146
// variables: 26
// function calls: 63
void CRenderAttributes::SetFloatValue(CUtlStringToken nTokenID, float flValue)
{
	{
		int i; // 212
		{
			int nTestResult; // 217
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 217
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 217
			{
				const int  nIndex; // 220
			}
		}
	}
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
			i32x4 i4KMatch);  // 311
	{
		OverflowChunk_t& p; // 317
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 15721
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 15731
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 15741
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1151
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 317
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 317
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 319
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
					int nIdx);  // 322
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 317
	}
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			Vector4D** pValueOut);  // 309
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetValuePtrFromIndex(
				int nIdx);  // 314
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			Vector4D** pValueOut);  // 356
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 356
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexOfMatch(
			uint32 nKey,
			Vector4D** pValueOut);  // 547
	Vector4D::operator=(
			const Vector4D& vOther);  // 566
	{
		int i; // 212
		{
			int nTestResult; // 217
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 217
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 217
			{
				const int  nIndex; // 220
			}
		}
	}
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::FindIndexOfMatch(
			i32x4 i4KMatch);  // 330
	{
		OverflowChunk_t& p; // 337
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 32424
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 32434
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 32444
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 337
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 337
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 339
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetKeyPtrFromIndex(
					int nIdx);  // 342
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
					int nIdx);  // 343
		CUtlIntrusiveListIterator<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 337
	}
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				Vector4D** pValueOut);  // 328
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetKeyPtrFromIndex(
				int nIdx);  // 333
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::GetValuePtrFromIndex(
				int nIdx);  // 334
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				Vector4D** pValueOut);  // 556
	{
		OverflowChunk_t* pNew; // 559
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::CUtlAttributeListChunk(); // 254
		OverflowChunk_t::OverflowChunk_t(); // 559
		AddToHead<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t, CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>(OverflowChunk_t *& head,
																OverflowChunk_t* node);  // 960
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::AddToHead(
				OverflowChunk_t* node);  // 560
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
					int nIdx);  // 563
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetKeyPtrFromIndex(
					int nIdx);  // 562
	}
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetValue(
		uint32 nKey,
		Vector4D nValue);  // 571
	Vector4D::Vector4D(
		const Vector4D& vOther);  // 571
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		Vector4D nValue);  // 148
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 148
} /* size: 458, inline expansions: 16 (1672 bytes) */

// <0318031E> ../public/rendersystem/renderattrs.h:146
inline void CRenderAttributes::SetFloatValue(CUtlStringToken nTokenID, float flValue)
{
} /* size: 0 */

// <02F2898E> ../public/rendersystem/renderattrs.h:151
inline void CRenderAttributes::GetFloatValue(CUtlStringToken nTokenID, float flDefaultValue)
{
} /* size: 0 */

// <001A0B95> ../public/rendersystem/renderattrs.h:163
// variable: 1
inline void CRenderAttributes::GetFloatValue(float* pOutputValue, CUtlStringToken nTokenID)
{
	Vector4D tmp; // 166
} /* size: 0, variables: 1 */

// <0134ED00> ../public/rendersystem/renderattrs.h:178
inline void CRenderAttributes::DeleteFloatValue(CUtlStringToken nToken)
{
} /* size: 0 */

// <033CF3D2> ../public/rendersystem/renderattrs.h:193
inline void CRenderAttributes::SetVector2DValue(CUtlStringToken nTokenID, Vector2D vValue)
{
} /* size: 0 */

// <0134EC9E> ../public/rendersystem/renderattrs.h:198
inline void CRenderAttributes::GetVector2DValue(CUtlStringToken nTokenID, Vector2D vDefaultValue)
{
} /* size: 0 */

// <001A0B58> ../public/rendersystem/renderattrs.h:204
// variable: 1
inline void CRenderAttributes::GetVector2DValue(Vector2D* pOutputValue, CUtlStringToken nTokenID)
{
	Vector4D tmp; // 207
} /* size: 0, variables: 1 */

// <0134EC79> ../public/rendersystem/renderattrs.h:219
inline void CRenderAttributes::DeleteVector2DValue(CUtlStringToken nToken)
{
} /* size: 0 */

// <0393CDBB> ../public/rendersystem/renderattrs.h:234
inline void CRenderAttributes::SetVectorValue(CUtlStringToken nTokenID, Vector vValue)
{
} /* size: 0 */

// <03A596EA> ../public/rendersystem/renderattrs.h:239
inline void CRenderAttributes::GetVectorValue(CUtlStringToken nTokenID, Vector vDefaultValue)
{
} /* size: 0 */

// <027DD589> ../public/rendersystem/renderattrs.h:245
// variable: 1
inline void CRenderAttributes::GetVectorValue(Vector* pOutputValue, CUtlStringToken nTokenID)
{
	Vector4D tmp; // 248
} /* size: 0, variables: 1 */

// <0134EBF1> ../public/rendersystem/renderattrs.h:260
inline void CRenderAttributes::DeleteVectorValue(CUtlStringToken nToken)
{
} /* size: 0 */

// <033CF39F> ../public/rendersystem/renderattrs.h:275
inline void CRenderAttributes::SetVector4DValue(CUtlStringToken nTokenID, Vector4D vValue)
{
} /* size: 0 */

// <02F28928> ../public/rendersystem/renderattrs.h:280
inline void CRenderAttributes::GetVector4DValue(CUtlStringToken nTokenID, Vector4D vDefaultValue)
{
} /* size: 0 */

// <06A75C21> ../public/rendersystem/renderattrs.h:286
inline void CRenderAttributes::GetVector4DValue(Vector4D* pOutputValue, CUtlStringToken nTokenID)
{
} /* size: 0 */

// <0134EB65> ../public/rendersystem/renderattrs.h:291
inline void CRenderAttributes::DeleteVector4DValue(CUtlStringToken nToken)
{
} /* size: 0 */

// <027DD4D6> ../public/rendersystem/renderattrs.h:296
// variable: 1
inline void CRenderAttributes::CopyVector4DValue(CUtlStringToken nTokenID, const CRenderAttributes& other, Vector4D vDefaultValue)
{
	Vector4D vValue; // 298
} /* size: 0, variables: 1 */

// <027DD4A3> ../public/rendersystem/renderattrs.h:311
inline void CRenderAttributes::SetVMatrixValue(CUtlStringToken nTokenID, VMatrix vValue)
{
} /* size: 0 */

// <027DD470> ../public/rendersystem/renderattrs.h:316
inline void CRenderAttributes::GetVMatrixValue(CUtlStringToken nTokenID, VMatrix vDefaultValue)
{
} /* size: 0 */

// <0030C66E> ../public/rendersystem/renderattrs.h:322
inline void CRenderAttributes::GetVMatrixValue(VMatrix* pOutputValue, CUtlStringToken nTokenID)
{
} /* size: 0 */

// <0134EAD9> ../public/rendersystem/renderattrs.h:327
inline void CRenderAttributes::DeleteVMatrixValue(CUtlStringToken nToken)
{
} /* size: 0 */

// <02F288F5> ../public/rendersystem/renderattrs.h:347
inline void CRenderAttributes::SetPtrValue(CUtlStringToken nTokenID, void* pValue)
{
} /* size: 0 */

// <02F288BD> ../public/rendersystem/renderattrs.h:352
inline void* CRenderAttributes::GetPtrValue(CUtlStringToken nTokenID, void* pDefaultValue)
{
} /* size: 0 */

// <027DD3D2> ../public/rendersystem/renderattrs.h:358
inline void CRenderAttributes::GetPtrValue(void** ppOutputValue, CUtlStringToken nTokenID)
{
} /* size: 0 */

// <0134EA80> ../public/rendersystem/renderattrs.h:363
inline void CRenderAttributes::DeletePtrValue(CUtlStringToken nToken)
{
} /* size: 0 */

// <027DD380> ../public/rendersystem/renderattrs.h:368
// variable: 1
inline void* CRenderAttributes::CopyPtrValue(CUtlStringToken nTokenID, const CRenderAttributes& other, void* pDefaultValue)
{
	void* pValue; // 370
} /* size: 0, variables: 1 */

// <02F2888A> ../public/rendersystem/renderattrs.h:391
inline void CRenderAttributes::SetBufferValue(CUtlStringToken nTokenID, VertexBufferHandle_t hVertexBuffer)
{
} /* size: 0 */

// <02F28857> ../public/rendersystem/renderattrs.h:396
inline void CRenderAttributes::SetBufferValue(CUtlStringToken nTokenID, RenderBufferHandle_t hRenderBuffer)
{
} /* size: 0 */

// <0134EA1A> ../public/rendersystem/renderattrs.h:404
inline void CRenderAttributes::SetStringValue(CUtlStringToken nTokenID, const char* str)
{
} /* size: 0 */

// <001A0A4F> ../public/rendersystem/renderattrs.h:410
inline void CRenderAttributes::GetStringValue(CUtlString* pOutputValue, CUtlStringToken nTokenID)
{
} /* size: 0 */

// <0134E9F4> ../public/rendersystem/renderattrs.h:415
inline void CRenderAttributes::DeleteStringValue(CUtlStringToken nToken)
{
} /* size: 0 */

// <0134E9A2> ../public/rendersystem/renderattrs.h:425
inline void CRenderAttributes::SetIntVector4DValue(CUtlStringToken nTokenID, int x, int y, int z, int w)
{
} /* size: 0 */

// <0030C63B> ../public/rendersystem/renderattrs.h:430
inline void CRenderAttributes::GetIntVector4DValue(CUtlStringToken nTokenID, IntVector4D vDefaultValue)
{
} /* size: 0 */

// <0030C5FD> ../public/rendersystem/renderattrs.h:435
// variable: 1
inline void CRenderAttributes::GetIntVector4DValue(IntVector4D* pOutputValue, CUtlStringToken nTokenID)
{
	IntVector4D v; // 437
} /* size: 0, variables: 1 */

// <03AF6D2F> ../public/rendersystem/renderattrs.h:450
inline void CRenderAttributes::SetIntValue(CUtlStringToken nTokenID, int nValue)
{
} /* size: 0 */

// <04024E24> ../public/rendersystem/renderattrs.h:459
inline void CRenderAttributes::GetIntValue(CUtlStringToken nTokenID, int nDefaultValue)
{
} /* size: 0 */

// <06A75BE3> ../public/rendersystem/renderattrs.h:469
// variable: 1
inline void CRenderAttributes::GetIntValue(int* pOutputValue, CUtlStringToken nTokenID)
{
	IntVector4D v; // 475
} /* size: 0, variables: 1 */

// <0134E916> ../public/rendersystem/renderattrs.h:485
inline void CRenderAttributes::DeleteIntValue(CUtlStringToken nToken)
{
} /* size: 0 */

// <0646A9C3> ../public/rendersystem/renderattrs.h:510
// variables: 26
// function calls: 60
void CRenderAttributes::SetComboValue(CUtlStringToken nTokenID, uint8 nValue)
{
	{
		int i; // 212
		{
			int nTestResult; // 217
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 217
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 217
			{
				const int  nIndex; // 220
			}
		}
	}
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
			i32x4 i4KMatch);  // 311
	{
		OverflowChunk_t& p; // 317
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 37255
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 37265
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 37275
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1151
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 317
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 317
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 319
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetValuePtrFromIndex(
					int nIdx);  // 322
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 317
	}
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			IntVector4D** pValueOut);  // 309
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::GetValuePtrFromIndex(
				int nIdx);  // 314
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			IntVector4D** pValueOut);  // 356
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 356
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
			uint32 nKey,
			IntVector4D** pValueOut);  // 547
	{
		int i; // 212
		{
			int nTestResult; // 217
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 217
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 217
			{
				const int  nIndex; // 220
			}
		}
	}
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
			i32x4 i4KMatch);  // 330
	{
		OverflowChunk_t& p; // 337
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 57778
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 57788
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 57798
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 337
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 337
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 339
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetKeyPtrFromIndex(
					int nIdx);  // 342
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetValuePtrFromIndex(
					int nIdx);  // 343
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 337
	}
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				IntVector4D** pValueOut);  // 328
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::GetKeyPtrFromIndex(
				int nIdx);  // 333
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::GetValuePtrFromIndex(
				int nIdx);  // 334
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				IntVector4D** pValueOut);  // 556
	{
		OverflowChunk_t* pNew; // 559
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::CUtlAttributeListChunk(); // 254
		OverflowChunk_t::OverflowChunk_t(); // 559
		AddToHead<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t, CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>(OverflowChunk_t *& head,
																OverflowChunk_t* node);  // 960
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::AddToHead(
				OverflowChunk_t* node);  // 560
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetKeyPtrFromIndex(
					int nIdx);  // 562
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetValuePtrFromIndex(
					int nIdx);  // 563
	}
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		uint32 nKey,
		IntVector4D nValue);  // 571
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		IntVector4D nValue);  // 515
} /* size: 501, inline expansions: 13 (1833 bytes) */

// <04024DB3> ../public/rendersystem/renderattrs.h:510
inline void CRenderAttributes::SetComboValue(CUtlStringToken nTokenID, uint8 nValue)
{
} /* size: 0 */

// <03F422F4> ../public/rendersystem/renderattrs.h:510
// variables: 26
// function calls: 60
void CRenderAttributes::SetComboValue(CUtlStringToken nTokenID, uint8 nValue)
{
	{
		int i; // 212
		{
			int nTestResult; // 217
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 217
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 217
			{
				const int  nIndex; // 220
			}
		}
	}
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
			i32x4 i4KMatch);  // 311
	{
		OverflowChunk_t& p; // 317
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 61349
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 61359
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 61369
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1151
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 317
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 317
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 319
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetValuePtrFromIndex(
					int nIdx);  // 322
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 317
	}
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			IntVector4D** pValueOut);  // 309
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::GetValuePtrFromIndex(
				int nIdx);  // 314
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			IntVector4D** pValueOut);  // 356
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 356
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
			uint32 nKey,
			IntVector4D** pValueOut);  // 547
	{
		int i; // 212
		{
			int nTestResult; // 217
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 217
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 217
			{
				const int  nIndex; // 220
			}
		}
	}
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
			i32x4 i4KMatch);  // 330
	{
		OverflowChunk_t& p; // 337
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 2601
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 2611
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 2621
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 337
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 337
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 339
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetKeyPtrFromIndex(
					int nIdx);  // 342
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetValuePtrFromIndex(
					int nIdx);  // 343
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 337
	}
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				IntVector4D** pValueOut);  // 328
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::GetKeyPtrFromIndex(
				int nIdx);  // 333
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::GetValuePtrFromIndex(
				int nIdx);  // 334
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				IntVector4D** pValueOut);  // 556
	{
		OverflowChunk_t* pNew; // 559
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::CUtlAttributeListChunk(); // 254
		OverflowChunk_t::OverflowChunk_t(); // 559
		AddToHead<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t, CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>(OverflowChunk_t *& head,
																OverflowChunk_t* node);  // 960
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::AddToHead(
				OverflowChunk_t* node);  // 560
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetKeyPtrFromIndex(
					int nIdx);  // 562
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetValuePtrFromIndex(
					int nIdx);  // 563
	}
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		uint32 nKey,
		IntVector4D nValue);  // 571
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		IntVector4D nValue);  // 515
} /* size: 501, inline expansions: 13 (1833 bytes) */

// <03A58828> ../public/rendersystem/renderattrs.h:510
// variables: 26
// function calls: 60
void CRenderAttributes::SetComboValue(CUtlStringToken nTokenID, uint8 nValue)
{
	{
		int i; // 212
		{
			int nTestResult; // 217
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 217
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 217
			{
				const int  nIndex; // 220
			}
		}
	}
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
			i32x4 i4KMatch);  // 311
	{
		OverflowChunk_t& p; // 317
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 18273
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 18283
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 18293
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1151
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 317
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 317
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 319
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetValuePtrFromIndex(
					int nIdx);  // 322
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 317
	}
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			IntVector4D** pValueOut);  // 309
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::GetValuePtrFromIndex(
				int nIdx);  // 314
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			IntVector4D** pValueOut);  // 356
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 356
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
			uint32 nKey,
			IntVector4D** pValueOut);  // 547
	{
		int i; // 212
		{
			int nTestResult; // 217
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 217
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 217
			{
				const int  nIndex; // 220
			}
		}
	}
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
			i32x4 i4KMatch);  // 330
	{
		OverflowChunk_t& p; // 337
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 25254
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 25264
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 25274
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 337
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 337
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 339
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetKeyPtrFromIndex(
					int nIdx);  // 342
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetValuePtrFromIndex(
					int nIdx);  // 343
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 337
	}
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				IntVector4D** pValueOut);  // 328
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::GetKeyPtrFromIndex(
				int nIdx);  // 333
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::GetValuePtrFromIndex(
				int nIdx);  // 334
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				IntVector4D** pValueOut);  // 556
	{
		OverflowChunk_t* pNew; // 559
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::CUtlAttributeListChunk(); // 254
		OverflowChunk_t::OverflowChunk_t(); // 559
		AddToHead<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t, CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>(OverflowChunk_t *& head,
																OverflowChunk_t* node);  // 960
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::AddToHead(
				OverflowChunk_t* node);  // 560
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetKeyPtrFromIndex(
					int nIdx);  // 562
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetValuePtrFromIndex(
					int nIdx);  // 563
	}
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		uint32 nKey,
		IntVector4D nValue);  // 571
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		IntVector4D nValue);  // 515
} /* size: 501, inline expansions: 13 (1833 bytes) */

// <0393BEF9> ../public/rendersystem/renderattrs.h:510
// variables: 26
// function calls: 60
void CRenderAttributes::SetComboValue(CUtlStringToken nTokenID, uint8 nValue)
{
	{
		int i; // 212
		{
			int nTestResult; // 217
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 217
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 217
			{
				const int  nIndex; // 220
			}
		}
	}
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
			i32x4 i4KMatch);  // 311
	{
		const OverflowChunk_t& p; // 279
		const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 17735
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 17745
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 17755
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 279
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 279
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 281
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetValuePtrFromIndex(
					int nIdx);  // 284
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 279
	}
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			const IntVector4D ** pValueOut);  // 270
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::GetValuePtrFromIndex(
				int nIdx);  // 314
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			IntVector4D** pValueOut);  // 356
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 356
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
			uint32 nKey,
			IntVector4D** pValueOut);  // 547
	{
		int i; // 212
		{
			int nTestResult; // 217
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 217
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 217
			{
				const int  nIndex; // 220
			}
		}
	}
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
			i32x4 i4KMatch);  // 330
	{
		OverflowChunk_t& p; // 337
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 17628
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 17638
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 17648
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 337
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 337
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 339
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetKeyPtrFromIndex(
					int nIdx);  // 342
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetValuePtrFromIndex(
					int nIdx);  // 343
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 337
	}
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				IntVector4D** pValueOut);  // 328
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::GetKeyPtrFromIndex(
				int nIdx);  // 333
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::GetValuePtrFromIndex(
				int nIdx);  // 334
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				IntVector4D** pValueOut);  // 556
	{
		OverflowChunk_t* pNew; // 559
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::CUtlAttributeListChunk(); // 254
		OverflowChunk_t::OverflowChunk_t(); // 559
		AddToHead<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t, CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>(OverflowChunk_t *& head,
																OverflowChunk_t* node);  // 960
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::AddToHead(
				OverflowChunk_t* node);  // 560
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetKeyPtrFromIndex(
					int nIdx);  // 562
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetValuePtrFromIndex(
					int nIdx);  // 563
	}
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		uint32 nKey,
		IntVector4D nValue);  // 571
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		IntVector4D nValue);  // 515
} /* size: 501, inline expansions: 13 (1833 bytes) */

// <037EC7A7> ../public/rendersystem/renderattrs.h:510
// variables: 26
// function calls: 60
void CRenderAttributes::SetComboValue(CUtlStringToken nTokenID, uint8 nValue)
{
	{
		int i; // 212
		{
			int nTestResult; // 217
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 217
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 217
			{
				const int  nIndex; // 220
			}
		}
	}
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
			i32x4 i4KMatch);  // 311
	{
		OverflowChunk_t& p; // 317
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 26509
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 26519
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 26529
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1151
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 317
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 317
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 319
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetValuePtrFromIndex(
					int nIdx);  // 322
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 317
	}
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			IntVector4D** pValueOut);  // 309
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::GetValuePtrFromIndex(
				int nIdx);  // 314
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			IntVector4D** pValueOut);  // 356
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 356
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
			uint32 nKey,
			IntVector4D** pValueOut);  // 547
	{
		int i; // 212
		{
			int nTestResult; // 217
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 217
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 217
			{
				const int  nIndex; // 220
			}
		}
	}
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
			i32x4 i4KMatch);  // 330
	{
		OverflowChunk_t& p; // 337
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 34888
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 34898
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 34908
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 337
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 337
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 339
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetKeyPtrFromIndex(
					int nIdx);  // 342
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetValuePtrFromIndex(
					int nIdx);  // 343
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 337
	}
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				IntVector4D** pValueOut);  // 328
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::GetKeyPtrFromIndex(
				int nIdx);  // 333
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::GetValuePtrFromIndex(
				int nIdx);  // 334
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				IntVector4D** pValueOut);  // 556
	{
		OverflowChunk_t* pNew; // 559
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::CUtlAttributeListChunk(); // 254
		OverflowChunk_t::OverflowChunk_t(); // 559
		AddToHead<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t, CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>(OverflowChunk_t *& head,
																OverflowChunk_t* node);  // 960
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::AddToHead(
				OverflowChunk_t* node);  // 560
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetKeyPtrFromIndex(
					int nIdx);  // 562
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetValuePtrFromIndex(
					int nIdx);  // 563
	}
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		uint32 nKey,
		IntVector4D nValue);  // 571
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		IntVector4D nValue);  // 515
} /* size: 501, inline expansions: 13 (1833 bytes) */

// <0317F45C> ../public/rendersystem/renderattrs.h:510
// variables: 26
// function calls: 60
void CRenderAttributes::SetComboValue(CUtlStringToken nTokenID, uint8 nValue)
{
	{
		int i; // 212
		{
			int nTestResult; // 217
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 217
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 217
			{
				const int  nIndex; // 220
			}
		}
	}
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
			i32x4 i4KMatch);  // 311
	{
		OverflowChunk_t& p; // 317
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 25309
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 25319
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 25329
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1151
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 317
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 317
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 319
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetValuePtrFromIndex(
					int nIdx);  // 322
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 317
	}
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			IntVector4D** pValueOut);  // 309
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::GetValuePtrFromIndex(
				int nIdx);  // 314
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			IntVector4D** pValueOut);  // 356
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 356
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
			uint32 nKey,
			IntVector4D** pValueOut);  // 547
	{
		int i; // 212
		{
			int nTestResult; // 217
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 217
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 217
			{
				const int  nIndex; // 220
			}
		}
	}
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
			i32x4 i4KMatch);  // 330
	{
		OverflowChunk_t& p; // 337
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 62632
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 62642
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 62652
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 337
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 337
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 339
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetKeyPtrFromIndex(
					int nIdx);  // 342
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetValuePtrFromIndex(
					int nIdx);  // 343
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 337
	}
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				IntVector4D** pValueOut);  // 328
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::GetKeyPtrFromIndex(
				int nIdx);  // 333
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::GetValuePtrFromIndex(
				int nIdx);  // 334
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				IntVector4D** pValueOut);  // 556
	{
		OverflowChunk_t* pNew; // 559
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::CUtlAttributeListChunk(); // 254
		OverflowChunk_t::OverflowChunk_t(); // 559
		AddToHead<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t, CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>(OverflowChunk_t *& head,
																OverflowChunk_t* node);  // 960
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::AddToHead(
				OverflowChunk_t* node);  // 560
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetKeyPtrFromIndex(
					int nIdx);  // 562
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetValuePtrFromIndex(
					int nIdx);  // 563
	}
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		uint32 nKey,
		IntVector4D nValue);  // 571
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		IntVector4D nValue);  // 515
} /* size: 501, inline expansions: 13 (1833 bytes) */

// <0202F9F5> ../public/rendersystem/renderattrs.h:510
// variables: 26
// function calls: 60
void CRenderAttributes::SetComboValue(CUtlStringToken nTokenID, uint8 nValue)
{
	{
		int i; // 212
		{
			int nTestResult; // 217
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 217
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 217
			{
				const int  nIndex; // 220
			}
		}
	}
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
			i32x4 i4KMatch);  // 311
	{
		OverflowChunk_t& p; // 317
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 17394
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 17404
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 17414
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1151
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 317
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 317
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 319
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetValuePtrFromIndex(
					int nIdx);  // 322
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 317
	}
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			IntVector4D** pValueOut);  // 309
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::GetValuePtrFromIndex(
				int nIdx);  // 314
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			IntVector4D** pValueOut);  // 356
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 356
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
			uint32 nKey,
			IntVector4D** pValueOut);  // 547
	{
		int i; // 212
		{
			int nTestResult; // 217
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 217
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 217
			{
				const int  nIndex; // 220
			}
		}
	}
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
			i32x4 i4KMatch);  // 330
	{
		OverflowChunk_t& p; // 337
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 23230
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 23240
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 23250
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 337
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 337
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 339
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetKeyPtrFromIndex(
					int nIdx);  // 342
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetValuePtrFromIndex(
					int nIdx);  // 343
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 337
	}
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				IntVector4D** pValueOut);  // 328
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::GetKeyPtrFromIndex(
				int nIdx);  // 333
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::GetValuePtrFromIndex(
				int nIdx);  // 334
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				IntVector4D** pValueOut);  // 556
	{
		OverflowChunk_t* pNew; // 559
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::CUtlAttributeListChunk(); // 254
		OverflowChunk_t::OverflowChunk_t(); // 559
		AddToHead<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t, CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>(OverflowChunk_t *& head,
																OverflowChunk_t* node);  // 960
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::AddToHead(
				OverflowChunk_t* node);  // 560
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetKeyPtrFromIndex(
					int nIdx);  // 562
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetValuePtrFromIndex(
					int nIdx);  // 563
	}
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		uint32 nKey,
		IntVector4D nValue);  // 571
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		IntVector4D nValue);  // 515
} /* size: 501, inline expansions: 13 (1833 bytes) */

// <0308F4D8> ../public/rendersystem/renderattrs.h:510
// variables: 26
// function calls: 60
void CRenderAttributes::SetComboValue(CUtlStringToken nTokenID, uint8 nValue)
{
	{
		int i; // 212
		{
			int nTestResult; // 217
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 217
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 217
			{
				const int  nIndex; // 220
			}
		}
	}
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
			i32x4 i4KMatch);  // 311
	{
		OverflowChunk_t& p; // 317
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 43921
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 43931
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 43941
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1151
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 317
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 317
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 319
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetValuePtrFromIndex(
					int nIdx);  // 322
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 317
	}
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			IntVector4D** pValueOut);  // 309
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::GetValuePtrFromIndex(
				int nIdx);  // 314
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
			i32x4 n4Key,
			IntVector4D** pValueOut);  // 356
	{
		__m128i retVal; // 1105
		_mm_set_epi32(int __q3,
				int __q2,
				int __q1,
				int __q0);  // 648
		_mm_set1_epi32(int __A); // 1106
	}
	ReplicateIX4<>(int nValue); // 356
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
			uint32 nKey,
			IntVector4D** pValueOut);  // 547
	{
		int i; // 212
		{
			int nTestResult; // 217
			{
				fltx4 retVal; // 1880
				_mm_cmpeq_epi32(__m128i __A,
						__m128i __B);  // 1881
				_mm_castsi128_ps(__m128i __A); // 1881
			}
			CmpEqSIMD<>(const i32x4& a,
					const i32x4& b);  // 217
			_mm_movemask_ps(__m128 __A); // 1805
			TestSignSIMD<>(const fltx4& a); // 217
			{
				const int  nIndex; // 220
			}
		}
	}
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::FindIndexOfMatch(
			i32x4 i4KMatch);  // 330
	{
		OverflowChunk_t& p; // 337
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 64444
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 64454
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 64464
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1151
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 337
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						OverflowChunk_t* pNode);  // 1156
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 337
		{
			int i; // 212
			{
				int nTestResult; // 217
				{
					fltx4 retVal; // 1880
					_mm_cmpeq_epi32(__m128i __A,
							__m128i __B);  // 1881
					_mm_castsi128_ps(__m128i __A); // 1881
				}
				CmpEqSIMD<>(const i32x4& a,
						const i32x4& b);  // 217
				_mm_movemask_ps(__m128 __A); // 1805
				TestSignSIMD<>(const fltx4& a); // 217
				{
					const int  nIndex; // 220
				}
			}
		}
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::FindIndexOfMatch(
				i32x4 i4KMatch);  // 339
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetKeyPtrFromIndex(
					int nIdx);  // 342
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetValuePtrFromIndex(
					int nIdx);  // 343
		CUtlIntrusiveListIterator<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 337
	}
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				IntVector4D** pValueOut);  // 328
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::GetKeyPtrFromIndex(
				int nIdx);  // 333
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::GetValuePtrFromIndex(
				int nIdx);  // 334
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexAndKeyOfMatch(
				i32x4 n4Key,
				uint32** pKeyOut,
				IntVector4D** pValueOut);  // 556
	{
		OverflowChunk_t* pNew; // 559
		_mm_store_ps(float* __P,
				__m128 __A);  // 2680
		StoreAlignedIntSIMD<>(i32x4& pSIMD,
					const fltx4& a);  // 39
		SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::CUtlAttributeListChunk(); // 254
		OverflowChunk_t::OverflowChunk_t(); // 559
		AddToHead<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t, CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>(OverflowChunk_t *& head,
																OverflowChunk_t* node);  // 960
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::AddToHead(
				OverflowChunk_t* node);  // 560
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetKeyPtrFromIndex(
					int nIdx);  // 562
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::GetValuePtrFromIndex(
					int nIdx);  // 563
	}
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		uint32 nKey,
		IntVector4D nValue);  // 571
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::SetValue(
		const CUtlStringToken& nTok,
		IntVector4D nValue);  // 515
} /* size: 0, inline expansions: 13 (0 bytes) */

// <027DD2A7> ../public/rendersystem/renderattrs.h:518
// variable: 1
inline void CRenderAttributes::GetComboValue(CUtlStringToken nTokenID, uint8 nDefaultValue)
{
	int nValue; // 523
} /* size: 0, variables: 1 */

// <0030C501> ../public/rendersystem/renderattrs.h:529
// variables: 2
inline void CRenderAttributes::GetComboValue(uint8* pOutputValue, CUtlStringToken nTokenID)
{
	int nValue; // 534
	IntVector4D v; // 535
} /* size: 0, variables: 2 */

// <027DD25A> ../public/rendersystem/renderattrs.h:546
// variable: 1
inline void CRenderAttributes::CopyComboValue(CUtlStringToken nTokenID, const CRenderAttributes& other, uint8 nDefault)
{
	uint8 nValue; // 548
} /* size: 0, variables: 1 */

// <02F2875A> ../public/rendersystem/renderattrs.h:553
inline void CRenderAttributes::DeleteComboValue(CUtlStringToken nToken)
{
} /* size: 0 */

// <04024D80> ../public/rendersystem/renderattrs.h:569
inline void CRenderAttributes::SetBoolValue(CUtlStringToken nTokenID, bool bValue)
{
} /* size: 0 */

// <0393BEC6> ../public/rendersystem/renderattrs.h:574
inline void CRenderAttributes::GetBoolValue(CUtlStringToken nTokenID, bool bDefaultValue)
{
} /* size: 0 */

// <027DD1A7> ../public/rendersystem/renderattrs.h:579
// variables: 2
inline void CRenderAttributes::GetBoolValue(bool* pOutputValue, CUtlStringToken nTokenID)
{
	IntVector4D nOutputValue; // 581
	bool bFound; // 582
} /* size: 0, variables: 2 */

// <02F28701> ../public/rendersystem/renderattrs.h:590
inline void CRenderAttributes::DeleteBoolValue(CUtlStringToken nToken)
{
} /* size: 0 */

// <0134E7BE> ../public/rendersystem/renderattrs.h:598
inline void CRenderAttributes::SetSamplerValue(CUtlStringToken nTokenID, CSamplerStateDesc sampler)
{
} /* size: 0 */

// <0027DE6E> ../public/rendersystem/renderattrs.h:609
inline void CRenderAttributes::GetSamplerValueToBind(SamplerAttr_t& out, CUtlStringToken nTokenID)
{
} /* size: 0 */

// <04024D40> ../public/rendersystem/renderattrs.h:617
inline void CRenderAttributes::SetTextureValue(CUtlStringToken nTokenID, HRenderTexture txtr, int32 nSingleMipLevelToBind)
{
} /* size: 0 */

// <03AF6C3F> ../public/rendersystem/renderattrs.h:622
// variable: 1
inline void CRenderAttributes::GetTextureValue(CUtlStringToken nTokenID, HRenderTexture defaultTxtr)
{
	TextureAttr_t defaultTxtrAttr; // 624
} /* size: 0, variables: 1 */

// <001A07B6> ../public/rendersystem/renderattrs.h:629
// variables: 2
inline void CRenderAttributes::GetFirstTexture()
{
	HRenderTexture hRet; // 631
	bool bFirst; // 632
} /* size: 0, variables: 2 */

// <06A75BA3> ../public/rendersystem/renderattrs.h:646
// variable: 1
inline void CRenderAttributes::GetTextureValue(HRenderTexture* pOutputValue, CUtlStringToken nTokenID)
{
	TextureAttr_t tmp; // 648
} /* size: 0, variables: 1 */

// <0030C434> ../public/rendersystem/renderattrs.h:671
// variable: 1
inline void CRenderAttributes::GetTextureValueAndMipLevelToBind(HRenderTexture* pOutputValue, int* pnMipToBind, CUtlStringToken nTokenID)
{
	TextureAttr_t tmp; // 673
} /* size: 0, variables: 1 */

// <01953381> ../public/rendersystem/renderattrs.h:689
inline void CRenderAttributes::DeleteTextureValue(CUtlStringToken nToken)
{
} /* size: 0 */

// <027DD09D> ../public/rendersystem/renderattrs.h:694
// variable: 1
inline void CRenderAttributes::CopyTextureValue(CUtlStringToken nTokenID, const CRenderAttributes& other, HRenderTexture hDefault)
{
	HRenderTexture hRenderTexture; // 696
} /* size: 0, variables: 1 */

// <00169A77> ../public/rendersystem/renderattrs.h:701
inline void CRenderAttributes::VisitTextureValues<CMaterial2::GetAllTextureAttributes(f)
{
} /* size: 0 */

// <04024CEC> ../public/rendersystem/renderattrs.h:711
void ConstantBufferAttr_t::ConstantBufferAttr_t()
{
} /* size: 0 */

// <04024CD3> ../public/rendersystem/renderattrs.h:711
inline void ConstantBufferAttr_t::ConstantBufferAttr_t()
{
} /* size: 0 */

// <04024CB2> ../public/rendersystem/renderattrs.h:712
void ConstantBufferAttr_t::ConstantBufferAttr_t(ConstantBufferHandle_t hBuf, uint32 nV)
{
} /* size: 0 */

// <04024C80> ../public/rendersystem/renderattrs.h:712
inline void ConstantBufferAttr_t::ConstantBufferAttr_t(ConstantBufferHandle_t hBuf, uint32 nV)
{
} /* size: 0 */

// <04024C64> ../public/rendersystem/renderattrs.h:713
void ConstantBufferAttr_t::ConstantBufferAttr_t(const ConstantBufferAttr_t& other)
{
} /* size: 0 */

// <04024C3E> ../public/rendersystem/renderattrs.h:713
inline void ConstantBufferAttr_t::ConstantBufferAttr_t(const ConstantBufferAttr_t& other)
{
} /* size: 0 */

// <04024C18> ../public/rendersystem/renderattrs.h:722
inline void ConstantBufferAttr_t::operator=(const ConstantBufferAttr_t& other)
{
} /* size: 0 */

// <04024BD9> ../public/rendersystem/renderattrs.h:730
inline void CRenderAttributes::SetConstantBufferValue(CUtlStringToken nTokenID, ConstantBufferHandle_t cb, uint32 nView)
{
} /* size: 0 */

// <0030C309> ../public/rendersystem/renderattrs.h:735
inline void CRenderAttributes::GetConstantBufferValue(CUtlStringToken nTokenID, ConstantBufferHandle_t defaultCb, uint32 defaultView)
{
} /* size: 0 */

// <0030C2D6> ../public/rendersystem/renderattrs.h:741
inline void CRenderAttributes::GetConstantBufferValue(ConstantBufferAttr_t* pOutputValue, CUtlStringToken nTokenID)
{
} /* size: 0 */

// <04024BC2> ../public/rendersystem/renderattrs.h:768
void DescriptorSetAttr_t::DescriptorSetAttr_t()
{
} /* size: 0 */

// <04024BA9> ../public/rendersystem/renderattrs.h:768
inline void DescriptorSetAttr_t::DescriptorSetAttr_t()
{
} /* size: 0 */

// <036AE436> ../public/rendersystem/renderattrs.h:769
void DescriptorSetAttr_t::DescriptorSetAttr_t(RenderDescriptorSetHandle_t hDescSet, int32 nCbufferOffset0, int32 nCbufferOffset1, int32 nCbufferOffset2, int32 nCbufferOffset3)
{
} /* size: 0 */

// <036AE3DC> ../public/rendersystem/renderattrs.h:769
inline void DescriptorSetAttr_t::DescriptorSetAttr_t(RenderDescriptorSetHandle_t hDescSet, int32 nCbufferOffset0, int32 nCbufferOffset1, int32 nCbufferOffset2, int32 nCbufferOffset3)
{
} /* size: 0 */

// <04024B8D> ../public/rendersystem/renderattrs.h:777
void DescriptorSetAttr_t::DescriptorSetAttr_t(const DescriptorSetAttr_t& other)
{
} /* size: 0 */

// <04024B67> ../public/rendersystem/renderattrs.h:777
inline void DescriptorSetAttr_t::DescriptorSetAttr_t(const DescriptorSetAttr_t& other)
{
} /* size: 0 */

// <04024B41> ../public/rendersystem/renderattrs.h:793
inline void DescriptorSetAttr_t::operator=(const DescriptorSetAttr_t& other)
{
} /* size: 0 */

// <036AE30D> ../public/rendersystem/renderattrs.h:804
inline void CRenderAttributes::SetDescriptorSetValue(CUtlStringToken nTokenID, RenderDescriptorSetHandle_t hDescSet, int32 nCbufferOffset0, int32 nCbufferOffset1, int32 nCbufferOffset2, int32 nCbufferOffset3)
{
} /* size: 0 */

// <0027DD0F> ../public/rendersystem/renderattrs.h:816
inline void CRenderAttributes::GetDescriptorSetValue(DescriptorSetAttr_t* pOutputValue, CUtlStringToken nTokenID)
{
} /* size: 0 */

// <0049CBBE> ../public/rendersystem/renderattrs.h:834
// variables: 11
// function calls: 119
void CRenderAttributes::MoveToAnother(CRenderAttributes& attrList)
{
	Vector4D::operator=(
			const Vector4D& vOther);  // 68
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::operator=(
			const CUtlAttributeListChunk<Vector4D, 8, Vector4D>  &);  // 363
	{
		OverflowChunk_t* tmp; // 1018
	}
	CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Purge(); // 364
	CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::MoveTo(
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& dest);  // 365
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 45
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 46
	SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::Clear(); // 409
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::Clear(
		bool bFreeHashMemory);  // 366
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::MoveToAnother(
			ThisType_t& dest);  // 836
	CUtlAttributeListChunk<VMatrix, 1, VMatrix>::operator=(
			const CUtlAttributeListChunk<VMatrix, 1, VMatrix>  &);  // 363
	{
		OverflowChunk_t* tmp; // 1018
	}
	CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::Purge(); // 364
	CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::MoveTo(
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>& dest);  // 365
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<VMatrix, 1, VMatrix>::Clear(); // 409
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::Clear(
		bool bFreeHashMemory);  // 366
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::MoveToAnother(
			ThisType_t& dest);  // 837
	{
		OverflowChunk_t* tmp; // 1018
	}
	CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Purge(); // 364
	CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::MoveTo(
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& dest);  // 365
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 45
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 46
	SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::Clear(); // 409
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::Clear(
		bool bFreeHashMemory);  // 366
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::MoveToAnother(
			ThisType_t& dest);  // 838
	{
		OverflowChunk_t* tmp; // 1018
	}
	Purge(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t this); // 364
	MoveTo(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t this,
		CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>:: dest);  // 365
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 45
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 46
	SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t>::Clear(); // 409
	CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::Clear(
		bool bFreeHashMemory);  // 366
	CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::MoveToAnother(
			ThisType_t& dest);  // 839
	CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
		const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
	CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 74
	TextureAttrForStorage_t::operator=(
			const TextureAttrForStorage_t  &);  // 68
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::operator=(
			const CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>  &);  // 363
	{
		OverflowChunk_t* tmp; // 1018
	}
	Purge(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this); // 364
	MoveTo(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this,
		CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>:: dest);  // 365
	{
		int i; // 77
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 947
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 947
		ReleaseValueFromAttribute<CRenderAttributes::TextureAttrForStorage_t>(TextureAttrForStorage_t* pT); // 81
	}
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::ReleaseValues(); // 88
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 45
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 46
	SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::Clear(); // 409
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::Clear(
		bool bFreeHashMemory);  // 366
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::MoveToAnother(
			ThisType_t& dest);  // 840
	ConstantBufferAttr_t::operator=(
			const ConstantBufferAttr_t& other);  // 68
	CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::operator=(
			const CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>  &);  // 363
	{
		OverflowChunk_t* tmp; // 1018
	}
	Purge(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAt this); // 364
	MoveTo(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAt this,
		CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t,  dest);  // 365
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::Clear(); // 409
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::Clear(
		bool bFreeHashMemory);  // 366
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::MoveToAnother(
			ThisType_t& dest);  // 841
	DescriptorSetAttr_t::operator=(
			const DescriptorSetAttr_t& other);  // 68
	CUtlAttributeListChunk<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t>::operator=(
			const CUtlAttributeListChunk<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t>  &);  // 363
	{
		OverflowChunk_t* tmp; // 1018
	}
	Purge(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr this); // 364
	MoveTo(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr this,
		CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4> dest);  // 365
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t>::Clear(); // 409
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::Clear(
		bool bFreeHashMemory);  // 366
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::MoveToAnother(
			ThisType_t& dest);  // 842
	{
		OverflowChunk_t* tmp; // 1018
	}
	CUtlIntrusiveList<CUtlAttributeList<void::Purge(); // 364
	CUtlIntrusiveList<CUtlAttributeList<void::MoveTo(
		CUtlIntrusiveList<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t>& dest);  // 365
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<void::Clear(); // 409
	CUtlAttributeList<void::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<void::Clear(
		bool bFreeHashMemory);  // 366
	CUtlAttributeList<void::MoveToAnother(
			ThisType_t& dest);  // 843
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 68
	CUtlAttributeListChunk<CUtlString, 2, CUtlString>::operator=(
			const CUtlAttributeListChunk<CUtlString, 2, CUtlString>  &);  // 363
	{
		OverflowChunk_t* tmp; // 1018
		CUtlString::~CUtlString(); // 68
		CUtlAttributeListChunk<CUtlString, 2, CUtlString>::~CUtlAttributeListChunk(); // 254
		OverflowChunk_t::~OverflowChunk_t(); // 1019
	}
	CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::Purge(); // 364
	CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::MoveTo(
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>& dest);  // 365
	{
		int i; // 77
		CUtlString::Clear(); // 962
		ReleaseValueFromAttribute<CUtlString>(CUtlString* pS); // 81
	}
	CUtlAttributeListChunk<CUtlString, 2, CUtlString>::ReleaseValues(); // 88
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<CUtlString, 2, CUtlString>::Clear(); // 409
	CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::Purge(); // 400
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::Clear(
		bool bFreeHashMemory);  // 366
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::MoveToAnother(
			ThisType_t& dest);  // 844
} /* size: 1688, inline expansions: 108 (4540 bytes) */

// <040224A6> ../public/rendersystem/renderattrs.h:848
// variables: 78
// function calls: 156
void CRenderAttributes::MergeTo(CRenderAttributes& attrList)
{
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::MergeTo(
		ThisType_t& dest);  // 850
	{
		int i; // 95
		operator()(const class* __closure,
				int nKey,
				VMatrix nValue); // 99
	}
	CUtlAttributeListChunk<VMatrix, 1, VMatrix>::VisitAllAttributes<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::MergeTo(
																 f);  // 432
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>& __for_range; // 42155
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t> __for_begin; // 42165
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t> __for_end; // 42175
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::begin(); // 433
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::end(); // 433
		{
			int i; // 95
			operator()(const class* __closure,
					int nKey,
					VMatrix nValue); // 99
		}
		CUtlAttributeListChunk<VMatrix, 2, VMatrix>::VisitAllAttributes<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::MergeTo(
																 f);  // 435
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::operator++(); // 433
	}
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::VisitAllAttributes<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::MergeTo(
																 f);  // 451
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::MergeTo(
		ThisType_t& dest);  // 851
	{
		int i; // 95
		operator()(const class* __closure,
				int nKey,
				IntVector4D nValue); // 99
	}
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::VisitAllAttributes<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::MergeTo(
																 f);  // 432
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 42061
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 42071
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 42081
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 433
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 433
		{
			int i; // 95
			operator()(const class* __closure,
					int nKey,
					IntVector4D nValue); // 99
		}
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::VisitAllAttributes<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::MergeTo(
																 f);  // 435
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 433
	}
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::VisitAllAttributes<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::MergeTo(
																 f);  // 451
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::MergeTo(
		ThisType_t& dest);  // 852
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::& __for_range; // 41967
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 41977
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 41987
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForSto this); // 1160
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAt this,
						const OverflowChunk_t* pNode);  // 1160
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForSto this); // 433
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAt this,
						const OverflowChunk_t* pNode);  // 1165
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForSto this); // 433
		operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAt this); // 433
	}
	CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::VisitAllAttributes<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::MergeTo(
																 f);  // 451
	CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::MergeTo(
		ThisType_t& dest);  // 853
	{
		int i; // 95
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>::ResourceHandleTyped_t(); // 993
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			ResourceHandleTyped_t hResource);  // 266
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				ResourceHandleTyped_t hResource);  // 993
		TextureAttr_t::TextureAttr_t(
				const TextureAttrForStorage_t& other);  // 99
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 90
		TextureAttr_t::TextureAttr_t(
				const TextureAttr_t  &);  // 453
		operator()(const class* __closure,
				int nKey,
				TextureAttr_t nValue); // 99
	}
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::VisitAllAttributes<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::MergeTo(
																 f);  // 432
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 41873
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 41883
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 41893
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
						const OverflowChunk_t* pNode);  // 1160
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 433
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
						const OverflowChunk_t* pNode);  // 1165
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 433
		{
			int i; // 95
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 90
			TextureAttr_t::TextureAttr_t(
					const TextureAttr_t  &);  // 453
			operator()(const class* __closure,
					int nKey,
					TextureAttr_t nValue); // 99
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>::ResourceHandleTyped_t(); // 993
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				ResourceHandleTyped_t hResource);  // 266
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					ResourceHandleTyped_t hResource);  // 993
			TextureAttr_t::TextureAttr_t(
					const TextureAttrForStorage_t& other);  // 99
		}
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::VisitAllAttributes<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::MergeTo(
																 f);  // 435
		operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 433
	}
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::VisitAllAttributes<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::MergeTo(
																 f);  // 451
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::MergeTo(
		ThisType_t& dest);  // 854
	{
		int i; // 95
		ConstantBufferAttr_t::ConstantBufferAttr_t(
					const ConstantBufferAttr_t& other);  // 99
		ConstantBufferAttr_t::ConstantBufferAttr_t(
					const ConstantBufferAttr_t& other);  // 453
		operator()(const class* __closure,
				int nKey,
				ConstantBufferAttr_t nValue); // 99
	}
	VisitAllAttributes<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::MergeTo(ThisType_t&) const::<lambda(int, CRenderAttributes::ConstantBufferAttr_t)> >(const CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>   this,
																 f); // 432
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t,& __for_range; // 41779
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_begin; // 41789
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_end; // 41799
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBu this); // 1160
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Co this,
						const OverflowChunk_t* pNode);  // 1160
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBu this); // 433
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Co this,
						const OverflowChunk_t* pNode);  // 1165
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBu this); // 433
		{
			int i; // 95
			ConstantBufferAttr_t::ConstantBufferAttr_t(
						const ConstantBufferAttr_t& other);  // 453
			operator()(const class* __closure,
					int nKey,
					ConstantBufferAttr_t nValue); // 99
			ConstantBufferAttr_t::ConstantBufferAttr_t(
						const ConstantBufferAttr_t& other);  // 99
		}
		VisitAllAttributes<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::MergeTo(ThisType_t&) const::<lambda(int, CRenderAttributes::ConstantBufferAttr_t)> >(const CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>   this,
																 f); // 435
		operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Co this); // 433
	}
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::VisitAllAttributes<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::MergeTo(
																 f);  // 451
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::MergeTo(
		ThisType_t& dest);  // 855
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>& __for_range; // 41685
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::OverflowChunk_t> __for_begin; // 41695
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::OverflowChunk_t> __for_end; // 41705
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorS this); // 1160
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Des this,
						const OverflowChunk_t* pNode);  // 1160
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorS this); // 433
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Des this,
						const OverflowChunk_t* pNode);  // 1165
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorS this); // 433
		operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Des this); // 433
	}
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::VisitAllAttributes<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::MergeTo(
																 f);  // 451
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::MergeTo(
		ThisType_t& dest);  // 856
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t>& __for_range; // 41591
		CUtlIntrusiveListIterator<const CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_begin; // 41601
		CUtlIntrusiveListIterator<const CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_end; // 41611
		CUtlIntrusiveList<CUtlAttributeList<void::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<void::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<void::begin(); // 433
		CUtlIntrusiveListIterator<const CUtlAttributeList<void::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<void::end(); // 433
		{
			int i; // 95
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<void::FindIndexOfMatch(
					i32x4 i4KMatch);  // 311
			CUtlAttributeListChunk<void::GetValuePtrFromIndex(
						int nIdx);  // 314
			{
				OverflowChunk_t& p; // 317
				CUtlIntrusiveList<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t>& __for_range; // 11952
				CUtlIntrusiveListIterator<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_begin; // 11962
				CUtlIntrusiveListIterator<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_end; // 11972
				CUtlIntrusiveList<CUtlAttributeList<void::Head(); // 1151
				CUtlIntrusiveListIterator<CUtlAttributeList<void::CUtlIntrusiveListIterator(
								OverflowChunk_t* pNode);  // 1151
				CUtlIntrusiveList<CUtlAttributeList<void::begin(); // 317
				CUtlIntrusiveListIterator<CUtlAttributeList<void::CUtlIntrusiveListIterator(
								OverflowChunk_t* pNode);  // 1156
				CUtlIntrusiveList<CUtlAttributeList<void::end(); // 317
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<void::FindIndexOfMatch(
						i32x4 i4KMatch);  // 319
				CUtlAttributeListChunk<void::GetValuePtrFromIndex(
							int nIdx);  // 322
				CUtlIntrusiveListIterator<CUtlAttributeList<void::operator++(); // 317
			}
			CUtlAttributeList<void::FindIndexOfMatch(
					i32x4 n4Key,
					void*** pValueOut);  // 309
			CUtlAttributeList<void::FindIndexOfMatch(
					i32x4 n4Key,
					void*** pValueOut);  // 356
			{
				__m128i retVal; // 1105
				_mm_set_epi32(int __q3,
						int __q2,
						int __q1,
						int __q0);  // 648
				_mm_set1_epi32(int __A); // 1106
			}
			ReplicateIX4<>(int nValue); // 356
			CUtlAttributeList<void::FindIndexOfMatch(
					uint32 nKey,
					void*** pValueOut);  // 547
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<void::FindIndexOfMatch(
					i32x4 i4KMatch);  // 330
			CUtlAttributeListChunk<void::GetKeyPtrFromIndex(
						int nIdx);  // 333
			CUtlAttributeListChunk<void::GetValuePtrFromIndex(
						int nIdx);  // 334
			{
				OverflowChunk_t& p; // 337
				CUtlIntrusiveList<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t>& __for_range; // 59877
				CUtlIntrusiveListIterator<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_begin; // 59887
				CUtlIntrusiveListIterator<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_end; // 59897
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<void::FindIndexOfMatch(
						i32x4 i4KMatch);  // 339
				CUtlAttributeListChunk<void::GetKeyPtrFromIndex(
							int nIdx);  // 342
				CUtlAttributeListChunk<void::GetValuePtrFromIndex(
							int nIdx);  // 343
				CUtlIntrusiveListIterator<CUtlAttributeList<void::operator++(); // 337
			}
			CUtlAttributeList<void::FindIndexAndKeyOfMatch(
						i32x4 n4Key,
						uint32** pKeyOut,
						void*** pValueOut);  // 328
			CUtlAttributeList<void::FindIndexAndKeyOfMatch(
						i32x4 n4Key,
						uint32** pKeyOut,
						void*** pValueOut);  // 556
			{
				OverflowChunk_t* pNew; // 559
				_mm_store_ps(float* __P,
						__m128 __A);  // 2680
				StoreAlignedIntSIMD<>(i32x4& pSIMD,
							const fltx4& a);  // 39
				SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
				CUtlAttributeListChunk<void::CUtlAttributeListChunk(); // 254
				OverflowChunk_t::OverflowChunk_t(); // 559
				AddToHead<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t, CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t>(OverflowChunk_t *& head,
																OverflowChunk_t* node);  // 960
				CUtlIntrusiveList<CUtlAttributeList<void::AddToHead(
						OverflowChunk_t* node);  // 560
				CUtlAttributeListChunk<void::GetValuePtrFromIndex(
							int nIdx);  // 563
				CUtlAttributeListChunk<void::GetKeyPtrFromIndex(
							int nIdx);  // 562
			}
			CUtlAttributeList<void::SetValue(
				uint32 nKey,
				void* nValue);  // 453
			operator()(const class* __closure,
					int nKey,
					void* nValue); // 99
		}
		CUtlAttributeListChunk<void::VisitAllAttributes<CUtlAttributeList<void*, 4, void*, 4>::MergeTo(
																 f);  // 435
		CUtlIntrusiveListIterator<const CUtlAttributeList<void::operator++(); // 433
	}
	CUtlAttributeList<void::VisitAllAttributes<CUtlAttributeList<void*, 4, void*, 4>::MergeTo(
															 f);  // 451
	CUtlAttributeList<void::MergeTo(
		ThisType_t& dest);  // 857
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>& __for_range; // 41497
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t> __for_begin; // 41507
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t> __for_end; // 41517
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::begin(); // 433
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::end(); // 433
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::operator++(); // 433
	}
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::VisitAllAttributes<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::MergeTo(
																 f);  // 451
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::MergeTo(
		ThisType_t& dest);  // 858
} /* size: 0, inline expansions: 21 (0 bytes) */

// <03EA7258> ../public/rendersystem/renderattrs.h:848
// variables: 72
// function calls: 148
void CRenderAttributes::MergeTo(CRenderAttributes& attrList)
{
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::MergeTo(
		ThisType_t& dest);  // 850
	{
		int i; // 95
		operator()(const class* __closure,
				int nKey,
				VMatrix nValue); // 99
	}
	CUtlAttributeListChunk<VMatrix, 1, VMatrix>::VisitAllAttributes<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::MergeTo(
																 f);  // 432
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>& __for_range; // 54257
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t> __for_begin; // 54267
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t> __for_end; // 54277
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::begin(); // 433
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::end(); // 433
		{
			int i; // 95
			operator()(const class* __closure,
					int nKey,
					VMatrix nValue); // 99
		}
		CUtlAttributeListChunk<VMatrix, 2, VMatrix>::VisitAllAttributes<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::MergeTo(
																 f);  // 435
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::operator++(); // 433
	}
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::VisitAllAttributes<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::MergeTo(
																 f);  // 451
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::MergeTo(
		ThisType_t& dest);  // 851
	{
		int i; // 95
		operator()(const class* __closure,
				int nKey,
				IntVector4D nValue); // 99
	}
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::VisitAllAttributes<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::MergeTo(
																 f);  // 432
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 54163
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 54173
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 54183
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 433
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 433
		{
			int i; // 95
			operator()(const class* __closure,
					int nKey,
					IntVector4D nValue); // 99
		}
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::VisitAllAttributes<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::MergeTo(
																 f);  // 435
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 433
	}
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::VisitAllAttributes<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::MergeTo(
																 f);  // 451
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::MergeTo(
		ThisType_t& dest);  // 852
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::& __for_range; // 54069
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 54079
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 54089
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForSto this); // 1160
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAt this,
						const OverflowChunk_t* pNode);  // 1160
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForSto this); // 433
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAt this,
						const OverflowChunk_t* pNode);  // 1165
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForSto this); // 433
		operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAt this); // 433
	}
	CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::VisitAllAttributes<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::MergeTo(
																 f);  // 451
	CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::MergeTo(
		ThisType_t& dest);  // 853
	{
		int i; // 95
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>::ResourceHandleTyped_t(); // 993
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			ResourceHandleTyped_t hResource);  // 266
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				ResourceHandleTyped_t hResource);  // 993
		TextureAttr_t::TextureAttr_t(
				const TextureAttrForStorage_t& other);  // 99
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 90
		TextureAttr_t::TextureAttr_t(
				const TextureAttr_t  &);  // 453
		operator()(const class* __closure,
				int nKey,
				TextureAttr_t nValue); // 99
	}
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::VisitAllAttributes<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::MergeTo(
																 f);  // 432
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 53975
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 53985
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 53995
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
						const OverflowChunk_t* pNode);  // 1160
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 433
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
						const OverflowChunk_t* pNode);  // 1165
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 433
		{
			int i; // 95
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 90
			TextureAttr_t::TextureAttr_t(
					const TextureAttr_t  &);  // 453
			operator()(const class* __closure,
					int nKey,
					TextureAttr_t nValue); // 99
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>::ResourceHandleTyped_t(); // 993
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				ResourceHandleTyped_t hResource);  // 266
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					ResourceHandleTyped_t hResource);  // 993
			TextureAttr_t::TextureAttr_t(
					const TextureAttrForStorage_t& other);  // 99
		}
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::VisitAllAttributes<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::MergeTo(
																 f);  // 435
		operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 433
	}
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::VisitAllAttributes<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::MergeTo(
																 f);  // 451
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::MergeTo(
		ThisType_t& dest);  // 854
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t,& __for_range; // 53881
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_begin; // 53891
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_end; // 53901
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBu this); // 1160
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Co this,
						const OverflowChunk_t* pNode);  // 1160
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBu this); // 433
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Co this,
						const OverflowChunk_t* pNode);  // 1165
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBu this); // 433
		operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Co this); // 433
	}
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::VisitAllAttributes<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::MergeTo(
																 f);  // 451
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::MergeTo(
		ThisType_t& dest);  // 855
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>& __for_range; // 53787
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::OverflowChunk_t> __for_begin; // 53797
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::OverflowChunk_t> __for_end; // 53807
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorS this); // 1160
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Des this,
						const OverflowChunk_t* pNode);  // 1160
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorS this); // 433
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Des this,
						const OverflowChunk_t* pNode);  // 1165
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorS this); // 433
		operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Des this); // 433
	}
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::VisitAllAttributes<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::MergeTo(
																 f);  // 451
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::MergeTo(
		ThisType_t& dest);  // 856
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t>& __for_range; // 53693
		CUtlIntrusiveListIterator<const CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_begin; // 53703
		CUtlIntrusiveListIterator<const CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_end; // 53713
		CUtlIntrusiveList<CUtlAttributeList<void::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<void::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<void::begin(); // 433
		CUtlIntrusiveListIterator<const CUtlAttributeList<void::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<void::end(); // 433
		{
			int i; // 95
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<void::FindIndexOfMatch(
					i32x4 i4KMatch);  // 311
			CUtlAttributeListChunk<void::GetValuePtrFromIndex(
						int nIdx);  // 314
			{
				OverflowChunk_t& p; // 317
				CUtlIntrusiveList<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t>& __for_range; // 11868
				CUtlIntrusiveListIterator<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_begin; // 11878
				CUtlIntrusiveListIterator<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_end; // 11888
				CUtlIntrusiveList<CUtlAttributeList<void::Head(); // 1151
				CUtlIntrusiveListIterator<CUtlAttributeList<void::CUtlIntrusiveListIterator(
								OverflowChunk_t* pNode);  // 1151
				CUtlIntrusiveList<CUtlAttributeList<void::begin(); // 317
				CUtlIntrusiveListIterator<CUtlAttributeList<void::CUtlIntrusiveListIterator(
								OverflowChunk_t* pNode);  // 1156
				CUtlIntrusiveList<CUtlAttributeList<void::end(); // 317
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<void::FindIndexOfMatch(
						i32x4 i4KMatch);  // 319
				CUtlAttributeListChunk<void::GetValuePtrFromIndex(
							int nIdx);  // 322
				CUtlIntrusiveListIterator<CUtlAttributeList<void::operator++(); // 317
			}
			CUtlAttributeList<void::FindIndexOfMatch(
					i32x4 n4Key,
					void*** pValueOut);  // 309
			CUtlAttributeList<void::FindIndexOfMatch(
					i32x4 n4Key,
					void*** pValueOut);  // 356
			{
				__m128i retVal; // 1105
				_mm_set_epi32(int __q3,
						int __q2,
						int __q1,
						int __q0);  // 648
				_mm_set1_epi32(int __A); // 1106
			}
			ReplicateIX4<>(int nValue); // 356
			CUtlAttributeList<void::FindIndexOfMatch(
					uint32 nKey,
					void*** pValueOut);  // 547
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<void::FindIndexOfMatch(
					i32x4 i4KMatch);  // 330
			CUtlAttributeListChunk<void::GetKeyPtrFromIndex(
						int nIdx);  // 333
			CUtlAttributeListChunk<void::GetValuePtrFromIndex(
						int nIdx);  // 334
			{
				OverflowChunk_t& p; // 337
				CUtlIntrusiveList<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t>& __for_range; // 3058
				CUtlIntrusiveListIterator<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_begin; // 3068
				CUtlIntrusiveListIterator<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_end; // 3078
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<void::FindIndexOfMatch(
						i32x4 i4KMatch);  // 339
				CUtlAttributeListChunk<void::GetKeyPtrFromIndex(
							int nIdx);  // 342
				CUtlAttributeListChunk<void::GetValuePtrFromIndex(
							int nIdx);  // 343
				CUtlIntrusiveListIterator<CUtlAttributeList<void::operator++(); // 337
			}
			CUtlAttributeList<void::FindIndexAndKeyOfMatch(
						i32x4 n4Key,
						uint32** pKeyOut,
						void*** pValueOut);  // 328
			CUtlAttributeList<void::FindIndexAndKeyOfMatch(
						i32x4 n4Key,
						uint32** pKeyOut,
						void*** pValueOut);  // 556
			{
				OverflowChunk_t* pNew; // 559
				_mm_store_ps(float* __P,
						__m128 __A);  // 2680
				StoreAlignedIntSIMD<>(i32x4& pSIMD,
							const fltx4& a);  // 39
				SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
				CUtlAttributeListChunk<void::CUtlAttributeListChunk(); // 254
				OverflowChunk_t::OverflowChunk_t(); // 559
				AddToHead<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t, CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t>(OverflowChunk_t *& head,
																OverflowChunk_t* node);  // 960
				CUtlIntrusiveList<CUtlAttributeList<void::AddToHead(
						OverflowChunk_t* node);  // 560
				CUtlAttributeListChunk<void::GetValuePtrFromIndex(
							int nIdx);  // 563
				CUtlAttributeListChunk<void::GetKeyPtrFromIndex(
							int nIdx);  // 562
			}
			CUtlAttributeList<void::SetValue(
				uint32 nKey,
				void* nValue);  // 453
			operator()(const class* __closure,
					int nKey,
					void* nValue); // 99
		}
		CUtlAttributeListChunk<void::VisitAllAttributes<CUtlAttributeList<void*, 4, void*, 4>::MergeTo(
																 f);  // 435
		CUtlIntrusiveListIterator<const CUtlAttributeList<void::operator++(); // 433
	}
	CUtlAttributeList<void::VisitAllAttributes<CUtlAttributeList<void*, 4, void*, 4>::MergeTo(
															 f);  // 451
	CUtlAttributeList<void::MergeTo(
		ThisType_t& dest);  // 857
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>& __for_range; // 53599
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t> __for_begin; // 53609
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t> __for_end; // 53619
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::begin(); // 433
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::end(); // 433
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::operator++(); // 433
	}
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::VisitAllAttributes<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::MergeTo(
																 f);  // 451
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::MergeTo(
		ThisType_t& dest);  // 858
} /* size: 0, inline expansions: 20 (0 bytes) */

// <02F26453> ../public/rendersystem/renderattrs.h:848
// variables: 66
// function calls: 126
void CRenderAttributes::MergeTo(CRenderAttributes& attrList)
{
	{
		int i; // 95
		Vector4D::Vector4D(
			const Vector4D& vOther);  // 99
		Vector4D::Vector4D(
			const Vector4D& vOther);  // 453
		operator()(const class* __closure,
				int nKey,
				Vector4D nValue); // 99
	}
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::VisitAllAttributes<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::MergeTo(
																 f);  // 432
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 25941
		CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 25951
		CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 25961
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 433
		CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 433
		{
			int i; // 95
			Vector4D::Vector4D(
				const Vector4D& vOther);  // 453
			operator()(const class* __closure,
					int nKey,
					Vector4D nValue); // 99
			Vector4D::Vector4D(
				const Vector4D& vOther);  // 99
		}
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::VisitAllAttributes<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::MergeTo(
																 f);  // 435
		CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 433
	}
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::VisitAllAttributes<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::MergeTo(
																 f);  // 451
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::MergeTo(
		ThisType_t& dest);  // 850
	{
		int i; // 95
		operator()(const class* __closure,
				int nKey,
				VMatrix nValue); // 99
	}
	CUtlAttributeListChunk<VMatrix, 1, VMatrix>::VisitAllAttributes<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::MergeTo(
																 f);  // 432
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>& __for_range; // 25847
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t> __for_begin; // 25857
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t> __for_end; // 25867
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::begin(); // 433
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::end(); // 433
		{
			int i; // 95
			operator()(const class* __closure,
					int nKey,
					VMatrix nValue); // 99
		}
		CUtlAttributeListChunk<VMatrix, 2, VMatrix>::VisitAllAttributes<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::MergeTo(
																 f);  // 435
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::operator++(); // 433
	}
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::VisitAllAttributes<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::MergeTo(
																 f);  // 451
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::MergeTo(
		ThisType_t& dest);  // 851
	{
		int i; // 95
		operator()(const class* __closure,
				int nKey,
				IntVector4D nValue); // 99
	}
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::VisitAllAttributes<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::MergeTo(
																 f);  // 432
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 25753
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 25763
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 25773
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 433
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 433
		{
			int i; // 95
			operator()(const class* __closure,
					int nKey,
					IntVector4D nValue); // 99
		}
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::VisitAllAttributes<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::MergeTo(
																 f);  // 435
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 433
	}
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::VisitAllAttributes<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::MergeTo(
																 f);  // 451
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::MergeTo(
		ThisType_t& dest);  // 852
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::& __for_range; // 25659
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 25669
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 25679
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForSto this); // 1160
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAt this,
						const OverflowChunk_t* pNode);  // 1160
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForSto this); // 433
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAt this,
						const OverflowChunk_t* pNode);  // 1165
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForSto this); // 433
		operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAt this); // 433
	}
	CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::VisitAllAttributes<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::MergeTo(
																 f);  // 451
	CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::MergeTo(
		ThisType_t& dest);  // 853
	{
		int i; // 95
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>::ResourceHandleTyped_t(); // 993
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			ResourceHandleTyped_t hResource);  // 266
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				ResourceHandleTyped_t hResource);  // 993
		TextureAttr_t::TextureAttr_t(
				const TextureAttrForStorage_t& other);  // 99
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 90
		TextureAttr_t::TextureAttr_t(
				const TextureAttr_t  &);  // 453
		operator()(const class* __closure,
				int nKey,
				TextureAttr_t nValue); // 99
	}
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::VisitAllAttributes<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::MergeTo(
																 f);  // 432
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 25565
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 25575
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 25585
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
						const OverflowChunk_t* pNode);  // 1160
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 433
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
						const OverflowChunk_t* pNode);  // 1165
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 433
		{
			int i; // 95
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 90
			TextureAttr_t::TextureAttr_t(
					const TextureAttr_t  &);  // 453
			operator()(const class* __closure,
					int nKey,
					TextureAttr_t nValue); // 99
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>::ResourceHandleTyped_t(); // 993
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				ResourceHandleTyped_t hResource);  // 266
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					ResourceHandleTyped_t hResource);  // 993
			TextureAttr_t::TextureAttr_t(
					const TextureAttrForStorage_t& other);  // 99
		}
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::VisitAllAttributes<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::MergeTo(
																 f);  // 435
		operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 433
	}
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::VisitAllAttributes<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::MergeTo(
																 f);  // 451
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::MergeTo(
		ThisType_t& dest);  // 854
	{
		int i; // 95
		ConstantBufferAttr_t::ConstantBufferAttr_t(
					const ConstantBufferAttr_t& other);  // 99
		ConstantBufferAttr_t::ConstantBufferAttr_t(
					const ConstantBufferAttr_t& other);  // 453
		operator()(const class* __closure,
				int nKey,
				ConstantBufferAttr_t nValue); // 99
	}
	VisitAllAttributes<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::MergeTo(ThisType_t&) const::<lambda(int, CRenderAttributes::ConstantBufferAttr_t)> >(const CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>   this,
																 f); // 432
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t,& __for_range; // 25471
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_begin; // 25481
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_end; // 25491
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBu this); // 1160
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Co this,
						const OverflowChunk_t* pNode);  // 1160
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBu this); // 433
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Co this,
						const OverflowChunk_t* pNode);  // 1165
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBu this); // 433
		{
			int i; // 95
			ConstantBufferAttr_t::ConstantBufferAttr_t(
						const ConstantBufferAttr_t& other);  // 453
			operator()(const class* __closure,
					int nKey,
					ConstantBufferAttr_t nValue); // 99
			ConstantBufferAttr_t::ConstantBufferAttr_t(
						const ConstantBufferAttr_t& other);  // 99
		}
		VisitAllAttributes<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::MergeTo(ThisType_t&) const::<lambda(int, CRenderAttributes::ConstantBufferAttr_t)> >(const CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>   this,
																 f); // 435
		operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Co this); // 433
	}
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::VisitAllAttributes<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::MergeTo(
																 f);  // 451
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::MergeTo(
		ThisType_t& dest);  // 855
	{
		int i; // 95
		DescriptorSetAttr_t::DescriptorSetAttr_t(
					const DescriptorSetAttr_t& other);  // 99
		DescriptorSetAttr_t::DescriptorSetAttr_t(
					const DescriptorSetAttr_t& other);  // 453
		operator()(const class* __closure,
				int nKey,
				DescriptorSetAttr_t nValue); // 99
	}
	CUtlAttributeListChunk<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t>::VisitAllAttributes<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::MergeTo(
																 f);  // 432
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>& __for_range; // 25377
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::OverflowChunk_t> __for_begin; // 25387
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::OverflowChunk_t> __for_end; // 25397
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorS this); // 1160
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Des this,
						const OverflowChunk_t* pNode);  // 1160
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorS this); // 433
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Des this,
						const OverflowChunk_t* pNode);  // 1165
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorS this); // 433
		{
			int i; // 95
			DescriptorSetAttr_t::DescriptorSetAttr_t(
						const DescriptorSetAttr_t& other);  // 453
			operator()(const class* __closure,
					int nKey,
					DescriptorSetAttr_t nValue); // 99
			DescriptorSetAttr_t::DescriptorSetAttr_t(
						const DescriptorSetAttr_t& other);  // 99
		}
		CUtlAttributeListChunk<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t>::VisitAllAttributes<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::MergeTo(
																 f);  // 435
		operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Des this); // 433
	}
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::VisitAllAttributes<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::MergeTo(
																 f);  // 451
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::MergeTo(
		ThisType_t& dest);  // 856
	{
		int i; // 95
		operator()(const class* __closure,
				int nKey,
				void* nValue); // 99
	}
	CUtlAttributeListChunk<void::VisitAllAttributes<CUtlAttributeList<void*, 4, void*, 4>::MergeTo(
															 f);  // 432
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t>& __for_range; // 25283
		CUtlIntrusiveListIterator<const CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_begin; // 25293
		CUtlIntrusiveListIterator<const CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_end; // 25303
		CUtlIntrusiveList<CUtlAttributeList<void::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<void::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<void::begin(); // 433
		CUtlIntrusiveListIterator<const CUtlAttributeList<void::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<void::end(); // 433
		{
			int i; // 95
			operator()(const class* __closure,
					int nKey,
					void* nValue); // 99
		}
		CUtlAttributeListChunk<void::VisitAllAttributes<CUtlAttributeList<void*, 4, void*, 4>::MergeTo(
																 f);  // 435
		CUtlIntrusiveListIterator<const CUtlAttributeList<void::operator++(); // 433
	}
	CUtlAttributeList<void::VisitAllAttributes<CUtlAttributeList<void*, 4, void*, 4>::MergeTo(
															 f);  // 451
	CUtlAttributeList<void::MergeTo(
		ThisType_t& dest);  // 857
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>& __for_range; // 25189
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t> __for_begin; // 25199
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t> __for_end; // 25209
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::begin(); // 433
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::end(); // 433
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::operator++(); // 433
	}
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::VisitAllAttributes<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::MergeTo(
																 f);  // 451
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::MergeTo(
		ThisType_t& dest);  // 858
} /* size: 0, inline expansions: 25 (0 bytes) */

// <027DB154> ../public/rendersystem/renderattrs.h:848
// variables: 62
// function calls: 118
void CRenderAttributes::MergeTo(CRenderAttributes& attrList)
{
	{
		int i; // 95
		Vector4D::Vector4D(
			const Vector4D& vOther);  // 99
		Vector4D::Vector4D(
			const Vector4D& vOther);  // 453
		operator()(const class* __closure,
				int nKey,
				Vector4D nValue); // 99
	}
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::VisitAllAttributes<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::MergeTo(
																 f);  // 432
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 17470
		CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 17480
		CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 17490
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 433
		CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 433
		{
			int i; // 95
			Vector4D::Vector4D(
				const Vector4D& vOther);  // 453
			operator()(const class* __closure,
					int nKey,
					Vector4D nValue); // 99
			Vector4D::Vector4D(
				const Vector4D& vOther);  // 99
		}
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::VisitAllAttributes<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::MergeTo(
																 f);  // 435
		CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 433
	}
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::VisitAllAttributes<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::MergeTo(
																 f);  // 451
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::MergeTo(
		ThisType_t& dest);  // 850
	{
		int i; // 95
		operator()(const class* __closure,
				int nKey,
				VMatrix nValue); // 99
	}
	CUtlAttributeListChunk<VMatrix, 1, VMatrix>::VisitAllAttributes<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::MergeTo(
																 f);  // 432
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>& __for_range; // 17376
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t> __for_begin; // 17386
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t> __for_end; // 17396
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::begin(); // 433
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::end(); // 433
		{
			int i; // 95
			operator()(const class* __closure,
					int nKey,
					VMatrix nValue); // 99
		}
		CUtlAttributeListChunk<VMatrix, 2, VMatrix>::VisitAllAttributes<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::MergeTo(
																 f);  // 435
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::operator++(); // 433
	}
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::VisitAllAttributes<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::MergeTo(
																 f);  // 451
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::MergeTo(
		ThisType_t& dest);  // 851
	{
		int i; // 95
		operator()(const class* __closure,
				int nKey,
				IntVector4D nValue); // 99
	}
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::VisitAllAttributes<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::MergeTo(
																 f);  // 432
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 17282
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 17292
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 17302
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 433
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 433
		{
			int i; // 95
			operator()(const class* __closure,
					int nKey,
					IntVector4D nValue); // 99
		}
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::VisitAllAttributes<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::MergeTo(
																 f);  // 435
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 433
	}
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::VisitAllAttributes<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::MergeTo(
																 f);  // 451
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::MergeTo(
		ThisType_t& dest);  // 852
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::& __for_range; // 17188
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 17198
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 17208
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForSto this); // 1160
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAt this,
						const OverflowChunk_t* pNode);  // 1160
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForSto this); // 433
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAt this,
						const OverflowChunk_t* pNode);  // 1165
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForSto this); // 433
		operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAt this); // 433
	}
	CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::VisitAllAttributes<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::MergeTo(
																 f);  // 451
	CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::MergeTo(
		ThisType_t& dest);  // 853
	{
		int i; // 95
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>::ResourceHandleTyped_t(); // 993
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			ResourceHandleTyped_t hResource);  // 266
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				ResourceHandleTyped_t hResource);  // 993
		TextureAttr_t::TextureAttr_t(
				const TextureAttrForStorage_t& other);  // 99
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 90
		TextureAttr_t::TextureAttr_t(
				const TextureAttr_t  &);  // 453
		operator()(const class* __closure,
				int nKey,
				TextureAttr_t nValue); // 99
	}
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::VisitAllAttributes<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::MergeTo(
																 f);  // 432
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 17094
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 17104
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 17114
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
						const OverflowChunk_t* pNode);  // 1160
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 433
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
						const OverflowChunk_t* pNode);  // 1165
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 433
		{
			int i; // 95
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 90
			TextureAttr_t::TextureAttr_t(
					const TextureAttr_t  &);  // 453
			operator()(const class* __closure,
					int nKey,
					TextureAttr_t nValue); // 99
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>::ResourceHandleTyped_t(); // 993
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				ResourceHandleTyped_t hResource);  // 266
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					ResourceHandleTyped_t hResource);  // 993
			TextureAttr_t::TextureAttr_t(
					const TextureAttrForStorage_t& other);  // 99
		}
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::VisitAllAttributes<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::MergeTo(
																 f);  // 435
		operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 433
	}
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::VisitAllAttributes<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::MergeTo(
																 f);  // 451
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::MergeTo(
		ThisType_t& dest);  // 854
	{
		int i; // 95
		ConstantBufferAttr_t::ConstantBufferAttr_t(
					const ConstantBufferAttr_t& other);  // 99
		ConstantBufferAttr_t::ConstantBufferAttr_t(
					const ConstantBufferAttr_t& other);  // 453
		operator()(const class* __closure,
				int nKey,
				ConstantBufferAttr_t nValue); // 99
	}
	VisitAllAttributes<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::MergeTo(ThisType_t&) const::<lambda(int, CRenderAttributes::ConstantBufferAttr_t)> >(const CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>   this,
																 f); // 432
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t,& __for_range; // 17000
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_begin; // 17010
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_end; // 17020
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBu this); // 1160
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Co this,
						const OverflowChunk_t* pNode);  // 1160
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBu this); // 433
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Co this,
						const OverflowChunk_t* pNode);  // 1165
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBu this); // 433
		{
			int i; // 95
			ConstantBufferAttr_t::ConstantBufferAttr_t(
						const ConstantBufferAttr_t& other);  // 453
			operator()(const class* __closure,
					int nKey,
					ConstantBufferAttr_t nValue); // 99
			ConstantBufferAttr_t::ConstantBufferAttr_t(
						const ConstantBufferAttr_t& other);  // 99
		}
		VisitAllAttributes<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::MergeTo(ThisType_t&) const::<lambda(int, CRenderAttributes::ConstantBufferAttr_t)> >(const CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>   this,
																 f); // 435
		operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Co this); // 433
	}
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::VisitAllAttributes<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::MergeTo(
																 f);  // 451
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::MergeTo(
		ThisType_t& dest);  // 855
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>& __for_range; // 16906
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::OverflowChunk_t> __for_begin; // 16916
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::OverflowChunk_t> __for_end; // 16926
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorS this); // 1160
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Des this,
						const OverflowChunk_t* pNode);  // 1160
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorS this); // 433
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Des this,
						const OverflowChunk_t* pNode);  // 1165
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorS this); // 433
		operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Des this); // 433
	}
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::VisitAllAttributes<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::MergeTo(
																 f);  // 451
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::MergeTo(
		ThisType_t& dest);  // 856
	{
		int i; // 95
		operator()(const class* __closure,
				int nKey,
				void* nValue); // 99
	}
	CUtlAttributeListChunk<void::VisitAllAttributes<CUtlAttributeList<void*, 4, void*, 4>::MergeTo(
															 f);  // 432
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t>& __for_range; // 16812
		CUtlIntrusiveListIterator<const CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_begin; // 16822
		CUtlIntrusiveListIterator<const CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_end; // 16832
		CUtlIntrusiveList<CUtlAttributeList<void::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<void::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<void::begin(); // 433
		CUtlIntrusiveListIterator<const CUtlAttributeList<void::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<void::end(); // 433
		{
			int i; // 95
			operator()(const class* __closure,
					int nKey,
					void* nValue); // 99
		}
		CUtlAttributeListChunk<void::VisitAllAttributes<CUtlAttributeList<void*, 4, void*, 4>::MergeTo(
																 f);  // 435
		CUtlIntrusiveListIterator<const CUtlAttributeList<void::operator++(); // 433
	}
	CUtlAttributeList<void::VisitAllAttributes<CUtlAttributeList<void*, 4, void*, 4>::MergeTo(
															 f);  // 451
	CUtlAttributeList<void::MergeTo(
		ThisType_t& dest);  // 857
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>& __for_range; // 16718
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t> __for_begin; // 16728
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t> __for_end; // 16738
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::begin(); // 433
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::end(); // 433
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::operator++(); // 433
	}
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::VisitAllAttributes<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::MergeTo(
																 f);  // 451
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::MergeTo(
		ThisType_t& dest);  // 858
} /* size: 0, inline expansions: 24 (0 bytes) */

// <01DCA50E> ../public/rendersystem/renderattrs.h:848
// variables: 52
// function calls: 92
void CRenderAttributes::MergeTo(CRenderAttributes& attrList)
{
	{
		int i; // 95
		Vector4D::Vector4D(
			const Vector4D& vOther);  // 99
		Vector4D::Vector4D(
			const Vector4D& vOther);  // 453
		operator()(const class* __closure,
				int nKey,
				Vector4D nValue); // 99
	}
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::VisitAllAttributes<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::MergeTo(
																 f);  // 432
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 38005
		CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 38015
		CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 38025
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 433
		CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 433
		{
			int i; // 95
			Vector4D::Vector4D(
				const Vector4D& vOther);  // 453
			operator()(const class* __closure,
					int nKey,
					Vector4D nValue); // 99
			Vector4D::Vector4D(
				const Vector4D& vOther);  // 99
		}
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::VisitAllAttributes<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::MergeTo(
																 f);  // 435
		CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 433
	}
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::VisitAllAttributes<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::MergeTo(
																 f);  // 451
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::MergeTo(
		ThisType_t& dest);  // 850
	{
		int i; // 95
		operator()(const class* __closure,
				int nKey,
				VMatrix nValue); // 99
	}
	CUtlAttributeListChunk<VMatrix, 1, VMatrix>::VisitAllAttributes<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::MergeTo(
																 f);  // 432
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>& __for_range; // 37911
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t> __for_begin; // 37921
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t> __for_end; // 37931
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::begin(); // 433
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::end(); // 433
		{
			int i; // 95
			operator()(const class* __closure,
					int nKey,
					VMatrix nValue); // 99
		}
		CUtlAttributeListChunk<VMatrix, 2, VMatrix>::VisitAllAttributes<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::MergeTo(
																 f);  // 435
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::operator++(); // 433
	}
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::VisitAllAttributes<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::MergeTo(
																 f);  // 451
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::MergeTo(
		ThisType_t& dest);  // 851
	{
		int i; // 95
		operator()(const class* __closure,
				int nKey,
				IntVector4D nValue); // 99
	}
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::VisitAllAttributes<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::MergeTo(
																 f);  // 432
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 37817
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 37827
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 37837
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 433
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 433
		{
			int i; // 95
			operator()(const class* __closure,
					int nKey,
					IntVector4D nValue); // 99
		}
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::VisitAllAttributes<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::MergeTo(
																 f);  // 435
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 433
	}
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::VisitAllAttributes<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::MergeTo(
																 f);  // 451
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::MergeTo(
		ThisType_t& dest);  // 852
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::& __for_range; // 37723
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 37733
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 37743
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForSto this); // 1160
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAt this,
						const OverflowChunk_t* pNode);  // 1160
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForSto this); // 433
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAt this,
						const OverflowChunk_t* pNode);  // 1165
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForSto this); // 433
		operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAt this); // 433
	}
	CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::VisitAllAttributes<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::MergeTo(
																 f);  // 451
	CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::MergeTo(
		ThisType_t& dest);  // 853
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 37629
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 37639
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 37649
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
						const OverflowChunk_t* pNode);  // 1160
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 433
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
						const OverflowChunk_t* pNode);  // 1165
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 433
		operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 433
	}
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::VisitAllAttributes<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::MergeTo(
																 f);  // 451
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::MergeTo(
		ThisType_t& dest);  // 854
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t,& __for_range; // 37535
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_begin; // 37545
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_end; // 37555
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBu this); // 1160
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Co this,
						const OverflowChunk_t* pNode);  // 1160
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBu this); // 433
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Co this,
						const OverflowChunk_t* pNode);  // 1165
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBu this); // 433
		operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Co this); // 433
	}
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::VisitAllAttributes<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::MergeTo(
																 f);  // 451
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::MergeTo(
		ThisType_t& dest);  // 855
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>& __for_range; // 37441
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::OverflowChunk_t> __for_begin; // 37451
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::OverflowChunk_t> __for_end; // 37461
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorS this); // 1160
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Des this,
						const OverflowChunk_t* pNode);  // 1160
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorS this); // 433
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Des this,
						const OverflowChunk_t* pNode);  // 1165
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorS this); // 433
		operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Des this); // 433
	}
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::VisitAllAttributes<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::MergeTo(
																 f);  // 451
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::MergeTo(
		ThisType_t& dest);  // 856
	{
		int i; // 95
		operator()(const class* __closure,
				int nKey,
				void* nValue); // 99
	}
	CUtlAttributeListChunk<void::VisitAllAttributes<CUtlAttributeList<void*, 4, void*, 4>::MergeTo(
															 f);  // 432
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t>& __for_range; // 37347
		CUtlIntrusiveListIterator<const CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_begin; // 37357
		CUtlIntrusiveListIterator<const CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_end; // 37367
		CUtlIntrusiveList<CUtlAttributeList<void::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<void::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<void::begin(); // 433
		CUtlIntrusiveListIterator<const CUtlAttributeList<void::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<void::end(); // 433
		{
			int i; // 95
			operator()(const class* __closure,
					int nKey,
					void* nValue); // 99
		}
		CUtlAttributeListChunk<void::VisitAllAttributes<CUtlAttributeList<void*, 4, void*, 4>::MergeTo(
																 f);  // 435
		CUtlIntrusiveListIterator<const CUtlAttributeList<void::operator++(); // 433
	}
	CUtlAttributeList<void::VisitAllAttributes<CUtlAttributeList<void*, 4, void*, 4>::MergeTo(
															 f);  // 451
	CUtlAttributeList<void::MergeTo(
		ThisType_t& dest);  // 857
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>& __for_range; // 37253
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t> __for_begin; // 37263
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t> __for_end; // 37273
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::begin(); // 433
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::end(); // 433
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::operator++(); // 433
	}
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::VisitAllAttributes<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::MergeTo(
																 f);  // 451
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::MergeTo(
		ThisType_t& dest);  // 858
} /* size: 0, inline expansions: 22 (0 bytes) */

// <0134C465> ../public/rendersystem/renderattrs.h:848
// variables: 64
// function calls: 132
void CRenderAttributes::MergeTo(CRenderAttributes& attrList)
{
	{
		int i; // 95
		Vector4D::Vector4D(
			const Vector4D& vOther);  // 99
		Vector4D::Vector4D(
			const Vector4D& vOther);  // 453
		operator()(const class* __closure,
				int nKey,
				Vector4D nValue); // 99
	}
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::VisitAllAttributes<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::MergeTo(
																 f);  // 432
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 40132
		CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 40142
		CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 40152
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 433
		CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 433
		{
			int i; // 95
			Vector4D::Vector4D(
				const Vector4D& vOther);  // 453
			operator()(const class* __closure,
					int nKey,
					Vector4D nValue); // 99
			Vector4D::Vector4D(
				const Vector4D& vOther);  // 99
		}
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::VisitAllAttributes<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::MergeTo(
																 f);  // 435
		CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 433
	}
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::VisitAllAttributes<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::MergeTo(
																 f);  // 451
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::MergeTo(
		ThisType_t& dest);  // 850
	{
		int i; // 95
		operator()(const class* __closure,
				int nKey,
				VMatrix nValue); // 99
	}
	CUtlAttributeListChunk<VMatrix, 1, VMatrix>::VisitAllAttributes<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::MergeTo(
																 f);  // 432
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>& __for_range; // 40038
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t> __for_begin; // 40048
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t> __for_end; // 40058
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::begin(); // 433
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::end(); // 433
		{
			int i; // 95
			operator()(const class* __closure,
					int nKey,
					VMatrix nValue); // 99
		}
		CUtlAttributeListChunk<VMatrix, 2, VMatrix>::VisitAllAttributes<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::MergeTo(
																 f);  // 435
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::operator++(); // 433
	}
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::VisitAllAttributes<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::MergeTo(
																 f);  // 451
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::MergeTo(
		ThisType_t& dest);  // 851
	{
		int i; // 95
		operator()(const class* __closure,
				int nKey,
				IntVector4D nValue); // 99
	}
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::VisitAllAttributes<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::MergeTo(
																 f);  // 432
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 39944
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 39954
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 39964
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 433
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 433
		{
			int i; // 95
			operator()(const class* __closure,
					int nKey,
					IntVector4D nValue); // 99
		}
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::VisitAllAttributes<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::MergeTo(
																 f);  // 435
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 433
	}
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::VisitAllAttributes<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::MergeTo(
																 f);  // 451
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::MergeTo(
		ThisType_t& dest);  // 852
	{
		int i; // 95
		SamplerAttr_t::SamplerAttr_t(
				const SamplerAttrForStorage_t& other);  // 99
		operator()(const class* __closure,
				int nKey,
				SamplerAttr_t nValue); // 99
	}
	CUtlAttributeListChunk<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t>::VisitAllAttributes<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::MergeTo(
																 f);  // 432
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::& __for_range; // 39850
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 39860
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 39870
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForSto this); // 1160
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAt this,
						const OverflowChunk_t* pNode);  // 1160
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForSto this); // 433
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAt this,
						const OverflowChunk_t* pNode);  // 1165
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForSto this); // 433
		{
			int i; // 95
			SamplerAttr_t::SamplerAttr_t(
					const SamplerAttrForStorage_t& other);  // 99
			operator()(const class* __closure,
					int nKey,
					SamplerAttr_t nValue); // 99
		}
		CUtlAttributeListChunk<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t>::VisitAllAttributes<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::MergeTo(
																 f);  // 435
		operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAt this); // 433
	}
	CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::VisitAllAttributes<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::MergeTo(
																 f);  // 451
	CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::MergeTo(
		ThisType_t& dest);  // 853
	{
		int i; // 95
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>::ResourceHandleTyped_t(); // 993
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			ResourceHandleTyped_t hResource);  // 266
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				ResourceHandleTyped_t hResource);  // 993
		TextureAttr_t::TextureAttr_t(
				const TextureAttrForStorage_t& other);  // 99
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 90
		TextureAttr_t::TextureAttr_t(
				const TextureAttr_t  &);  // 453
		operator()(const class* __closure,
				int nKey,
				TextureAttr_t nValue); // 99
	}
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::VisitAllAttributes<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::MergeTo(
																 f);  // 432
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 39756
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 39766
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 39776
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
						const OverflowChunk_t* pNode);  // 1160
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 433
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
						const OverflowChunk_t* pNode);  // 1165
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 433
		{
			int i; // 95
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 90
			TextureAttr_t::TextureAttr_t(
					const TextureAttr_t  &);  // 453
			operator()(const class* __closure,
					int nKey,
					TextureAttr_t nValue); // 99
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>::ResourceHandleTyped_t(); // 993
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				ResourceHandleTyped_t hResource);  // 266
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					ResourceHandleTyped_t hResource);  // 993
			TextureAttr_t::TextureAttr_t(
					const TextureAttrForStorage_t& other);  // 99
		}
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::VisitAllAttributes<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::MergeTo(
																 f);  // 435
		operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 433
	}
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::VisitAllAttributes<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::MergeTo(
																 f);  // 451
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::MergeTo(
		ThisType_t& dest);  // 854
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t,& __for_range; // 39662
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_begin; // 39672
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_end; // 39682
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBu this); // 1160
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Co this,
						const OverflowChunk_t* pNode);  // 1160
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBu this); // 433
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Co this,
						const OverflowChunk_t* pNode);  // 1165
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBu this); // 433
		operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Co this); // 433
	}
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::VisitAllAttributes<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::MergeTo(
																 f);  // 451
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::MergeTo(
		ThisType_t& dest);  // 855
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>& __for_range; // 39568
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::OverflowChunk_t> __for_begin; // 39578
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::OverflowChunk_t> __for_end; // 39588
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorS this); // 1160
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Des this,
						const OverflowChunk_t* pNode);  // 1160
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorS this); // 433
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Des this,
						const OverflowChunk_t* pNode);  // 1165
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorS this); // 433
		operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Des this); // 433
	}
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::VisitAllAttributes<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::MergeTo(
																 f);  // 451
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::MergeTo(
		ThisType_t& dest);  // 856
	{
		int i; // 95
		operator()(const class* __closure,
				int nKey,
				void* nValue); // 99
	}
	CUtlAttributeListChunk<void::VisitAllAttributes<CUtlAttributeList<void*, 4, void*, 4>::MergeTo(
															 f);  // 432
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t>& __for_range; // 39474
		CUtlIntrusiveListIterator<const CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_begin; // 39484
		CUtlIntrusiveListIterator<const CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_end; // 39494
		CUtlIntrusiveList<CUtlAttributeList<void::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<void::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<void::begin(); // 433
		CUtlIntrusiveListIterator<const CUtlAttributeList<void::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<void::end(); // 433
		{
			int i; // 95
			operator()(const class* __closure,
					int nKey,
					void* nValue); // 99
		}
		CUtlAttributeListChunk<void::VisitAllAttributes<CUtlAttributeList<void*, 4, void*, 4>::MergeTo(
																 f);  // 435
		CUtlIntrusiveListIterator<const CUtlAttributeList<void::operator++(); // 433
	}
	CUtlAttributeList<void::VisitAllAttributes<CUtlAttributeList<void*, 4, void*, 4>::MergeTo(
															 f);  // 451
	CUtlAttributeList<void::MergeTo(
		ThisType_t& dest);  // 857
	{
		int i; // 95
		CUtlString::Get(); // 354
		CUtlString::CUtlString(
				const CUtlString& string);  // 99
		CUtlString::Get(); // 354
		CUtlString::CUtlString(
				const CUtlString& string);  // 453
		CUtlString::~CUtlString(); // 453
		operator()(const class* __closure,
				int nKey,
				CUtlString nValue); // 99
		CUtlString::~CUtlString(); // 99
	}
	CUtlAttributeListChunk<CUtlString, 2, CUtlString>::VisitAllAttributes<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::MergeTo(
																 f);  // 432
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>& __for_range; // 39380
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t> __for_begin; // 39390
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t> __for_end; // 39400
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::begin(); // 433
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::end(); // 433
		{
			int i; // 95
			CUtlString::Get(); // 354
			CUtlString::CUtlString(
					const CUtlString& string);  // 99
			CUtlString::Get(); // 354
			CUtlString::CUtlString(
					const CUtlString& string);  // 453
			CUtlString::~CUtlString(); // 453
			operator()(const class* __closure,
					int nKey,
					CUtlString nValue); // 99
			CUtlString::~CUtlString(); // 99
		}
		CUtlAttributeListChunk<CUtlString, 2, CUtlString>::VisitAllAttributes<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::MergeTo(
																 f);  // 435
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::operator++(); // 433
	}
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::VisitAllAttributes<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::MergeTo(
																 f);  // 451
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::MergeTo(
		ThisType_t& dest);  // 858
} /* size: 2306, inline expansions: 25 (4791 bytes) */

// <0049A6E8> ../public/rendersystem/renderattrs.h:848
// variables: 72
// function calls: 148
void CRenderAttributes::MergeTo(CRenderAttributes& attrList)
{
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::MergeTo(
		ThisType_t& dest);  // 850
	{
		int i; // 95
		operator()(const class* __closure,
				int nKey,
				VMatrix nValue); // 99
	}
	CUtlAttributeListChunk<VMatrix, 1, VMatrix>::VisitAllAttributes<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::MergeTo(
																 f);  // 432
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>& __for_range; // 65207
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t> __for_begin; // 65217
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t> __for_end; // 65227
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::begin(); // 433
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::end(); // 433
		{
			int i; // 95
			operator()(const class* __closure,
					int nKey,
					VMatrix nValue); // 99
		}
		CUtlAttributeListChunk<VMatrix, 2, VMatrix>::VisitAllAttributes<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::MergeTo(
																 f);  // 435
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::operator++(); // 433
	}
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::VisitAllAttributes<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::MergeTo(
																 f);  // 451
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::MergeTo(
		ThisType_t& dest);  // 851
	{
		int i; // 95
		operator()(const class* __closure,
				int nKey,
				IntVector4D nValue); // 99
	}
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::VisitAllAttributes<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::MergeTo(
																 f);  // 432
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 65113
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 65123
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 65133
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 433
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 433
		{
			int i; // 95
			operator()(const class* __closure,
					int nKey,
					IntVector4D nValue); // 99
		}
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::VisitAllAttributes<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::MergeTo(
																 f);  // 435
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 433
	}
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::VisitAllAttributes<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::MergeTo(
																 f);  // 451
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::MergeTo(
		ThisType_t& dest);  // 852
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::& __for_range; // 65019
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 65029
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 65039
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForSto this); // 1160
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAt this,
						const OverflowChunk_t* pNode);  // 1160
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForSto this); // 433
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAt this,
						const OverflowChunk_t* pNode);  // 1165
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForSto this); // 433
		operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAt this); // 433
	}
	CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::VisitAllAttributes<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::MergeTo(
																 f);  // 451
	CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::MergeTo(
		ThisType_t& dest);  // 853
	{
		int i; // 95
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>::ResourceHandleTyped_t(); // 993
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			ResourceHandleTyped_t hResource);  // 266
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				ResourceHandleTyped_t hResource);  // 993
		TextureAttr_t::TextureAttr_t(
				const TextureAttrForStorage_t& other);  // 99
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 90
		TextureAttr_t::TextureAttr_t(
				const TextureAttr_t  &);  // 453
		operator()(const class* __closure,
				int nKey,
				TextureAttr_t nValue); // 99
	}
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::VisitAllAttributes<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::MergeTo(
																 f);  // 432
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 64925
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 64935
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 64945
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
						const OverflowChunk_t* pNode);  // 1160
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 433
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
						const OverflowChunk_t* pNode);  // 1165
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 433
		{
			int i; // 95
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 90
			TextureAttr_t::TextureAttr_t(
					const TextureAttr_t  &);  // 453
			operator()(const class* __closure,
					int nKey,
					TextureAttr_t nValue); // 99
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>::ResourceHandleTyped_t(); // 993
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				ResourceHandleTyped_t hResource);  // 266
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					ResourceHandleTyped_t hResource);  // 993
			TextureAttr_t::TextureAttr_t(
					const TextureAttrForStorage_t& other);  // 99
		}
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::VisitAllAttributes<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::MergeTo(
																 f);  // 435
		operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 433
	}
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::VisitAllAttributes<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::MergeTo(
																 f);  // 451
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::MergeTo(
		ThisType_t& dest);  // 854
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t,& __for_range; // 64831
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_begin; // 64841
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_end; // 64851
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBu this); // 1160
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Co this,
						const OverflowChunk_t* pNode);  // 1160
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBu this); // 433
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Co this,
						const OverflowChunk_t* pNode);  // 1165
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBu this); // 433
		operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Co this); // 433
	}
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::VisitAllAttributes<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::MergeTo(
																 f);  // 451
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::MergeTo(
		ThisType_t& dest);  // 855
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>& __for_range; // 64737
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::OverflowChunk_t> __for_begin; // 64747
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::OverflowChunk_t> __for_end; // 64757
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorS this); // 1160
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Des this,
						const OverflowChunk_t* pNode);  // 1160
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorS this); // 433
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Des this,
						const OverflowChunk_t* pNode);  // 1165
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorS this); // 433
		operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Des this); // 433
	}
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::VisitAllAttributes<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::MergeTo(
																 f);  // 451
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::MergeTo(
		ThisType_t& dest);  // 856
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t>& __for_range; // 64643
		CUtlIntrusiveListIterator<const CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_begin; // 64653
		CUtlIntrusiveListIterator<const CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_end; // 64663
		CUtlIntrusiveList<CUtlAttributeList<void::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<void::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<void::begin(); // 433
		CUtlIntrusiveListIterator<const CUtlAttributeList<void::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<void::end(); // 433
		{
			int i; // 95
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<void::FindIndexOfMatch(
					i32x4 i4KMatch);  // 311
			CUtlAttributeListChunk<void::GetValuePtrFromIndex(
						int nIdx);  // 314
			{
				OverflowChunk_t& p; // 317
				CUtlIntrusiveList<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t>& __for_range; // 21434
				CUtlIntrusiveListIterator<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_begin; // 21444
				CUtlIntrusiveListIterator<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_end; // 21454
				CUtlIntrusiveList<CUtlAttributeList<void::Head(); // 1151
				CUtlIntrusiveListIterator<CUtlAttributeList<void::CUtlIntrusiveListIterator(
								OverflowChunk_t* pNode);  // 1151
				CUtlIntrusiveList<CUtlAttributeList<void::begin(); // 317
				CUtlIntrusiveListIterator<CUtlAttributeList<void::CUtlIntrusiveListIterator(
								OverflowChunk_t* pNode);  // 1156
				CUtlIntrusiveList<CUtlAttributeList<void::end(); // 317
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<void::FindIndexOfMatch(
						i32x4 i4KMatch);  // 319
				CUtlAttributeListChunk<void::GetValuePtrFromIndex(
							int nIdx);  // 322
				CUtlIntrusiveListIterator<CUtlAttributeList<void::operator++(); // 317
			}
			CUtlAttributeList<void::FindIndexOfMatch(
					i32x4 n4Key,
					void*** pValueOut);  // 309
			CUtlAttributeList<void::FindIndexOfMatch(
					i32x4 n4Key,
					void*** pValueOut);  // 356
			{
				__m128i retVal; // 1105
				_mm_set_epi32(int __q3,
						int __q2,
						int __q1,
						int __q0);  // 648
				_mm_set1_epi32(int __A); // 1106
			}
			ReplicateIX4<>(int nValue); // 356
			CUtlAttributeList<void::FindIndexOfMatch(
					uint32 nKey,
					void*** pValueOut);  // 547
			{
				int i; // 212
				{
					int nTestResult; // 217
					{
						fltx4 retVal; // 1880
						_mm_cmpeq_epi32(__m128i __A,
								__m128i __B);  // 1881
						_mm_castsi128_ps(__m128i __A); // 1881
					}
					CmpEqSIMD<>(const i32x4& a,
							const i32x4& b);  // 217
					_mm_movemask_ps(__m128 __A); // 1805
					TestSignSIMD<>(const fltx4& a); // 217
					{
						const int  nIndex; // 220
					}
				}
			}
			CUtlAttributeListChunk<void::FindIndexOfMatch(
					i32x4 i4KMatch);  // 330
			CUtlAttributeListChunk<void::GetKeyPtrFromIndex(
						int nIdx);  // 333
			CUtlAttributeListChunk<void::GetValuePtrFromIndex(
						int nIdx);  // 334
			{
				OverflowChunk_t& p; // 337
				CUtlIntrusiveList<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t>& __for_range; // 14138
				CUtlIntrusiveListIterator<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_begin; // 14148
				CUtlIntrusiveListIterator<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_end; // 14158
				{
					int i; // 212
					{
						int nTestResult; // 217
						{
							fltx4 retVal; // 1880
							_mm_cmpeq_epi32(__m128i __A,
									__m128i __B);  // 1881
							_mm_castsi128_ps(__m128i __A); // 1881
						}
						CmpEqSIMD<>(const i32x4& a,
								const i32x4& b);  // 217
						_mm_movemask_ps(__m128 __A); // 1805
						TestSignSIMD<>(const fltx4& a); // 217
						{
							const int  nIndex; // 220
						}
					}
				}
				CUtlAttributeListChunk<void::FindIndexOfMatch(
						i32x4 i4KMatch);  // 339
				CUtlAttributeListChunk<void::GetKeyPtrFromIndex(
							int nIdx);  // 342
				CUtlAttributeListChunk<void::GetValuePtrFromIndex(
							int nIdx);  // 343
				CUtlIntrusiveListIterator<CUtlAttributeList<void::operator++(); // 337
			}
			CUtlAttributeList<void::FindIndexAndKeyOfMatch(
						i32x4 n4Key,
						uint32** pKeyOut,
						void*** pValueOut);  // 328
			CUtlAttributeList<void::FindIndexAndKeyOfMatch(
						i32x4 n4Key,
						uint32** pKeyOut,
						void*** pValueOut);  // 556
			{
				OverflowChunk_t* pNew; // 559
				_mm_store_ps(float* __P,
						__m128 __A);  // 2680
				StoreAlignedIntSIMD<>(i32x4& pSIMD,
							const fltx4& a);  // 39
				SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
				CUtlAttributeListChunk<void::CUtlAttributeListChunk(); // 254
				OverflowChunk_t::OverflowChunk_t(); // 559
				AddToHead<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t, CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t>(OverflowChunk_t *& head,
																OverflowChunk_t* node);  // 960
				CUtlIntrusiveList<CUtlAttributeList<void::AddToHead(
						OverflowChunk_t* node);  // 560
				CUtlAttributeListChunk<void::GetValuePtrFromIndex(
							int nIdx);  // 563
				CUtlAttributeListChunk<void::GetKeyPtrFromIndex(
							int nIdx);  // 562
			}
			CUtlAttributeList<void::SetValue(
				uint32 nKey,
				void* nValue);  // 453
			operator()(const class* __closure,
					int nKey,
					void* nValue); // 99
		}
		CUtlAttributeListChunk<void::VisitAllAttributes<CUtlAttributeList<void*, 4, void*, 4>::MergeTo(
																 f);  // 435
		CUtlIntrusiveListIterator<const CUtlAttributeList<void::operator++(); // 433
	}
	CUtlAttributeList<void::VisitAllAttributes<CUtlAttributeList<void*, 4, void*, 4>::MergeTo(
															 f);  // 451
	CUtlAttributeList<void::MergeTo(
		ThisType_t& dest);  // 857
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>& __for_range; // 64549
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t> __for_begin; // 64559
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t> __for_end; // 64569
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::begin(); // 433
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::end(); // 433
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::operator++(); // 433
	}
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::VisitAllAttributes<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::MergeTo(
																 f);  // 451
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::MergeTo(
		ThisType_t& dest);  // 858
} /* size: 0, inline expansions: 20 (0 bytes) */

// <0019E78E> ../public/rendersystem/renderattrs.h:848
// variables: 56
// function calls: 122
void CRenderAttributes::MergeTo(CRenderAttributes& attrList)
{
	{
		int i; // 95
		Vector4D::Vector4D(
			const Vector4D& vOther);  // 99
		Vector4D::Vector4D(
			const Vector4D& vOther);  // 453
		operator()(const class* __closure,
				int nKey,
				Vector4D nValue); // 99
	}
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::VisitAllAttributes<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::MergeTo(
																 f);  // 432
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>& __for_range; // 21152
		CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_begin; // 21162
		CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t> __for_end; // 21172
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::begin(); // 433
		CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::end(); // 433
		{
			int i; // 95
			Vector4D::Vector4D(
				const Vector4D& vOther);  // 453
			operator()(const class* __closure,
					int nKey,
					Vector4D nValue); // 99
			Vector4D::Vector4D(
				const Vector4D& vOther);  // 99
		}
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::VisitAllAttributes<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::MergeTo(
																 f);  // 435
		CUtlIntrusiveListIterator<const CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::operator++(); // 433
	}
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::VisitAllAttributes<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::MergeTo(
																 f);  // 451
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::MergeTo(
		ThisType_t& dest);  // 850
	{
		int i; // 95
		operator()(const class* __closure,
				int nKey,
				VMatrix nValue); // 99
	}
	CUtlAttributeListChunk<VMatrix, 1, VMatrix>::VisitAllAttributes<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::MergeTo(
																 f);  // 432
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>& __for_range; // 21058
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t> __for_begin; // 21068
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t> __for_end; // 21078
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::begin(); // 433
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::end(); // 433
		{
			int i; // 95
			operator()(const class* __closure,
					int nKey,
					VMatrix nValue); // 99
		}
		CUtlAttributeListChunk<VMatrix, 2, VMatrix>::VisitAllAttributes<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::MergeTo(
																 f);  // 435
		CUtlIntrusiveListIterator<const CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::operator++(); // 433
	}
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::VisitAllAttributes<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::MergeTo(
																 f);  // 451
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::MergeTo(
		ThisType_t& dest);  // 851
	{
		int i; // 95
		operator()(const class* __closure,
				int nKey,
				IntVector4D nValue); // 99
	}
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::VisitAllAttributes<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::MergeTo(
																 f);  // 432
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>& __for_range; // 20964
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_begin; // 20974
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t> __for_end; // 20984
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::begin(); // 433
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::end(); // 433
		{
			int i; // 95
			operator()(const class* __closure,
					int nKey,
					IntVector4D nValue); // 99
		}
		CUtlAttributeListChunk<IntVector4D, 4, IntVector4D>::VisitAllAttributes<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::MergeTo(
																 f);  // 435
		CUtlIntrusiveListIterator<const CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::operator++(); // 433
	}
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::VisitAllAttributes<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::MergeTo(
																 f);  // 451
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::MergeTo(
		ThisType_t& dest);  // 852
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::& __for_range; // 20870
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 20880
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 20890
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForSto this); // 1160
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAt this,
						const OverflowChunk_t* pNode);  // 1160
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForSto this); // 433
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAt this,
						const OverflowChunk_t* pNode);  // 1165
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForSto this); // 433
		operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAt this); // 433
	}
	CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::VisitAllAttributes<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::MergeTo(
																 f);  // 451
	CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::MergeTo(
		ThisType_t& dest);  // 853
	{
		int i; // 95
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>::ResourceHandleTyped_t(); // 993
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			ResourceHandleTyped_t hResource);  // 266
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				ResourceHandleTyped_t hResource);  // 993
		TextureAttr_t::TextureAttr_t(
				const TextureAttrForStorage_t& other);  // 99
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 90
		TextureAttr_t::TextureAttr_t(
				const TextureAttr_t  &);  // 453
		operator()(const class* __closure,
				int nKey,
				TextureAttr_t nValue); // 99
	}
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::VisitAllAttributes<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::MergeTo(
																 f);  // 432
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::& __for_range; // 20782
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_begin; // 20792
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::OverflowChunk_t> __for_end; // 20802
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 1160
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
						const OverflowChunk_t* pNode);  // 1160
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 433
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this,
						const OverflowChunk_t* pNode);  // 1165
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForSto this); // 433
		{
			int i; // 95
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 90
			TextureAttr_t::TextureAttr_t(
					const TextureAttr_t  &);  // 453
			operator()(const class* __closure,
					int nKey,
					TextureAttr_t nValue); // 99
			CWeakHandle<InfoForResourceTypeCTextureBase>::operator CWeakHandle<InfoForResourceTypeCTextureBase>::ResourceHandleTyped_t(); // 993
			CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
				ResourceHandleTyped_t hResource);  // 266
			CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
					ResourceHandleTyped_t hResource);  // 993
			TextureAttr_t::TextureAttr_t(
					const TextureAttrForStorage_t& other);  // 99
		}
		CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::VisitAllAttributes<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::MergeTo(
																 f);  // 435
		operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAt this); // 433
	}
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::VisitAllAttributes<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::MergeTo(
																 f);  // 451
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::MergeTo(
		ThisType_t& dest);  // 854
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t,& __for_range; // 20688
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_begin; // 20698
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::OverflowChunk_t> __for_end; // 20708
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBu this); // 1160
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Co this,
						const OverflowChunk_t* pNode);  // 1160
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBu this); // 433
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Co this,
						const OverflowChunk_t* pNode);  // 1165
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBu this); // 433
		operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::Co this); // 433
	}
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::VisitAllAttributes<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::MergeTo(
																 f);  // 451
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::MergeTo(
		ThisType_t& dest);  // 855
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>& __for_range; // 20594
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::OverflowChunk_t> __for_begin; // 20604
		CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::OverflowChunk_t> __for_end; // 20614
		Head(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorS this); // 1160
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Des this,
						const OverflowChunk_t* pNode);  // 1160
		begin(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorS this); // 433
		CUtlIntrusiveListIterator(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Des this,
						const OverflowChunk_t* pNode);  // 1165
		end(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorS this); // 433
		operator++(const CUtlIntrusiveListIterator<const CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::Des this); // 433
	}
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::VisitAllAttributes<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::MergeTo(
																 f);  // 451
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::MergeTo(
		ThisType_t& dest);  // 856
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t>& __for_range; // 20500
		CUtlIntrusiveListIterator<const CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_begin; // 20510
		CUtlIntrusiveListIterator<const CUtlAttributeList<void*, 4, void*, 4>::OverflowChunk_t> __for_end; // 20520
		CUtlIntrusiveList<CUtlAttributeList<void::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<void::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<void::begin(); // 433
		CUtlIntrusiveListIterator<const CUtlAttributeList<void::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<void::end(); // 433
		CUtlIntrusiveListIterator<const CUtlAttributeList<void::operator++(); // 433
	}
	CUtlAttributeList<void::VisitAllAttributes<CUtlAttributeList<void*, 4, void*, 4>::MergeTo(
															 f);  // 451
	CUtlAttributeList<void::MergeTo(
		ThisType_t& dest);  // 857
	{
		int i; // 95
		CUtlString::Get(); // 354
		CUtlString::CUtlString(
				const CUtlString& string);  // 99
		CUtlString::Get(); // 354
		CUtlString::CUtlString(
				const CUtlString& string);  // 453
		CUtlString::~CUtlString(); // 453
		operator()(const class* __closure,
				int nKey,
				CUtlString nValue); // 99
		CUtlString::~CUtlString(); // 99
	}
	CUtlAttributeListChunk<CUtlString, 2, CUtlString>::VisitAllAttributes<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::MergeTo(
																 f);  // 432
	{
		const OverflowChunk_t& p; // 433
		const CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>& __for_range; // 20406
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t> __for_begin; // 20416
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t> __for_end; // 20426
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::Head(); // 1160
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1160
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::begin(); // 433
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveListIterator(
						const OverflowChunk_t* pNode);  // 1165
		CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::end(); // 433
		{
			int i; // 95
			CUtlString::Get(); // 354
			CUtlString::CUtlString(
					const CUtlString& string);  // 99
			CUtlString::Get(); // 354
			CUtlString::CUtlString(
					const CUtlString& string);  // 453
			CUtlString::~CUtlString(); // 453
			operator()(const class* __closure,
					int nKey,
					CUtlString nValue); // 99
			CUtlString::~CUtlString(); // 99
		}
		CUtlAttributeListChunk<CUtlString, 2, CUtlString>::VisitAllAttributes<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::MergeTo(
																 f);  // 435
		CUtlIntrusiveListIterator<const CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::operator++(); // 433
	}
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::VisitAllAttributes<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::MergeTo(
																 f);  // 451
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::MergeTo(
		ThisType_t& dest);  // 858
} /* size: 1819, inline expansions: 23 (3681 bytes) */

// <04022480> ../public/rendersystem/renderattrs.h:861
inline void CRenderAttributes::SetParent(const CRenderAttributes* pParent)
{
} /* size: 0 */

// <04022467> ../public/rendersystem/renderattrs.h:890
inline void CRenderAttributes::GetParent()
{
} /* size: 0 */

// <04022252> ../public/rendersystem/renderattrs.h:898
void CRenderAttributes::CRenderAttributes()
{
} /* size: 0 */

// <04022239> ../public/rendersystem/renderattrs.h:898
inline void CRenderAttributes::CRenderAttributes()
{
} /* size: 0 */

// <03F40DB5> ../public/rendersystem/renderattrs.h:898
// variables: 4
// function calls: 88
void CRenderAttributes::CRenderAttributes()
{
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 45
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 46
	SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveList(); // 248
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::CUtlAttributeList(); // 898
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<VMatrix, 1, VMatrix>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::CUtlIntrusiveList(); // 248
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::CUtlAttributeList(); // 898
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 45
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 46
	SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveList(); // 248
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::CUtlAttributeList(); // 898
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 76
	TextureAttrForStorage_t::TextureAttrForStorage_t(); // 117
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 45
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 46
	SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this); // 248
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::CUtlAttributeList(); // 898
	{
		uint32* pThis; // 978
		const uint32* pDefault; // 979
		CSamplerStateDescBase::CSamplerStateDescBase(); // 927
		{
			float32 flZeros; // 936
			float32 flOnes; // 937
			CSamplerStateDescBase::SetFilterMode(
					RsFilter_t filter);  // 928
			CSamplerStateDescBase::SetTextureAddressModeU(
						RsTextureAddressMode_t addressMode);  // 929
			CSamplerStateDescBase::SetTextureAddressModeV(
						RsTextureAddressMode_t addressMode);  // 930
			CSamplerStateDescBase::SetTextureAddressModeW(
						RsTextureAddressMode_t addressMode);  // 931
			Min<unsigned int>(const unsigned int& val1,
						const unsigned int& val2);  // 800
			CSamplerStateDescBase::SetMaxAnisotropy(
					uint32 nMaxAniso);  // 933
			CSamplerStateDescBase::SetMipLodBias(
					float32 flBias);  // 932
			CSamplerStateDescBase::SetBorderColor(
					const float32* pBorderColor);  // 938
			CSamplerStateDescBase::SetComparisonFunc(
						RsComparison_t compFunc);  // 934
			CSamplerStateDescBase::SetMinMaxLod(
					uint32 nMinLod,
					uint32 nMaxLod);  // 935
			CSamplerStateDescBase::SetGlobalMipBiasOverrideAllowed(
							bool bAllow);  // 939
		}
		CSamplerStateDesc::CSamplerStateDesc(
					RsFilter_t filter,
					RsTextureAddressMode_t addressU,
					RsTextureAddressMode_t addressV,
					RsTextureAddressMode_t addressW,
					float32 flMipLodBias,
					uint32 nMaxAniso,
					RsComparison_t comparisonFunc,
					uint32 nMinLod,
					uint32 nMaxLod,
					bool bWhiteBorder,
					bool bAllowGlobalMipBiasOverride);  // 970
		DefaultSamplerStateDesc(void); // 959
		DefaultSamplerStateDesc(void); // 979
	}
	CSamplerStateDescBase::CSamplerStateDescBase(); // 975
	CSamplerStateDesc::CSamplerStateDesc(); // 31
	SamplerAttrForStorage_t::SamplerAttrForStorage_t(); // 117
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 45
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 46
	SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t this); // 248
	CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::CUtlAttributeList(); // 898
	ConstantBufferAttr_t::ConstantBufferAttr_t(); // 117
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAt this); // 248
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::CUtlAttributeList(); // 898
	DescriptorSetAttr_t::DescriptorSetAttr_t(); // 117
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr this); // 248
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::CUtlAttributeList(); // 898
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<void::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList<CUtlAttributeList<void::CUtlIntrusiveList(); // 248
	CUtlAttributeList<void::CUtlAttributeList(); // 898
	CUtlString::CUtlString(); // 117
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<CUtlString, 2, CUtlString>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveList(); // 248
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::CUtlAttributeList(); // 898
} /* size: 640, inline expansions: 73 (2029 bytes) */

// <0049987D> ../public/rendersystem/renderattrs.h:898
// function calls: 64
void CRenderAttributes::CRenderAttributes()
{
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 45
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 46
	SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<Vector4D, 8, Vector4D>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::CUtlIntrusiveList(); // 248
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::CUtlAttributeList(); // 898
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<VMatrix, 1, VMatrix>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::CUtlIntrusiveList(); // 248
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::CUtlAttributeList(); // 898
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 45
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 46
	SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<IntVector4D, 8, IntVector4D>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::CUtlIntrusiveList(); // 248
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::CUtlAttributeList(); // 898
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCTextureBase>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 76
	TextureAttrForStorage_t::TextureAttrForStorage_t(); // 117
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 45
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 46
	SetFixedKeysToZero<2>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this); // 248
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::CUtlAttributeList(); // 898
	CUtlIntrusiveList(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t this); // 248
	CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::CUtlAttributeList(); // 898
	ConstantBufferAttr_t::ConstantBufferAttr_t(); // 117
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAt this); // 248
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::CUtlAttributeList(); // 898
	DescriptorSetAttr_t::DescriptorSetAttr_t(); // 117
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr this); // 248
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::CUtlAttributeList(); // 898
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<void::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList<CUtlAttributeList<void::CUtlIntrusiveList(); // 248
	CUtlAttributeList<void::CUtlAttributeList(); // 898
	CUtlString::CUtlString(); // 117
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 118
	CUtlAttributeListChunk<CUtlString, 2, CUtlString>::CUtlAttributeListChunk(); // 248
	CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::CUtlIntrusiveList(); // 248
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::CUtlAttributeList(); // 898
} /* size: 372, inline expansions: 64 (958 bytes) */

// <06E2A1D8> ../../public/rendersystem/renderattrs.h:902
void CRenderAttributes::~CRenderAttributes()
{
} /* size: 0 */

// <06E2A1BF> ../../public/rendersystem/renderattrs.h:902
inline void CRenderAttributes::~CRenderAttributes()
{
} /* size: 0 */

// <04021486> ../public/rendersystem/renderattrs.h:902
// variables: 11
// function calls: 56
void CRenderAttributes::~CRenderAttributes()
{
	{
		OverflowChunk_t* tmp; // 1018
		CUtlString::~CUtlString(); // 68
		CUtlAttributeListChunk<CUtlString, 2, CUtlString>::~CUtlAttributeListChunk(); // 254
		OverflowChunk_t::~OverflowChunk_t(); // 1019
	}
	CUtlIntrusiveList<CUtlAttributeList<CUtlString, 2, CUtlString, 2>::OverflowChunk_t>::Purge(); // 400
	{
		int i; // 77
		CUtlString::Clear(); // 962
		ReleaseValueFromAttribute<CUtlString>(CUtlString* pS); // 81
	}
	CUtlAttributeListChunk<CUtlString, 2, CUtlString>::ReleaseValues(); // 88
	_mm_store_ps(float* __P,
			__m128 __A);  // 2680
	StoreAlignedIntSIMD<>(i32x4& pSIMD,
				const fltx4& a);  // 39
	SetFixedKeysToZero<1>(i32x4* pFixedKeys); // 89
	CUtlAttributeListChunk<CUtlString, 2, CUtlString>::Clear(); // 409
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::Clear(
		bool bFreeHashMemory);  // 371
	CUtlString::~CUtlString(); // 68
	CUtlAttributeListChunk<CUtlString, 2, CUtlString>::~CUtlAttributeListChunk(); // 372
	CUtlAttributeList<CUtlString, 2, CUtlString, 2>::~CUtlAttributeList(); // 904
	{
		OverflowChunk_t* tmp; // 1018
	}
	CUtlIntrusiveList<CUtlAttributeList<void::Purge(); // 400
	CUtlAttributeList<void::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<void::Clear(
		bool bFreeHashMemory);  // 371
	CUtlAttributeList<void::~CUtlAttributeList(); // 904
	{
		OverflowChunk_t* tmp; // 1018
	}
	Purge(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr this); // 400
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::Clear(
		bool bFreeHashMemory);  // 371
	CUtlAttributeList<CRenderAttributes::DescriptorSetAttr_t, 4, CRenderAttributes::DescriptorSetAttr_t, 4>::~CUtlAttributeList(); // 904
	{
		OverflowChunk_t* tmp; // 1018
	}
	Purge(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAt this); // 400
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::Clear(
		bool bFreeHashMemory);  // 371
	CUtlAttributeList<CRenderAttributes::ConstantBufferAttr_t, 4, CRenderAttributes::ConstantBufferAttr_t, 4>::~CUtlAttributeList(); // 904
	{
		OverflowChunk_t* tmp; // 1018
	}
	Purge(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t this); // 400
	CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::Clear(
		bool bFreeHashMemory);  // 371
	CUtlAttributeList<CRenderAttributes::SamplerAttr_t, 8, CRenderAttributes::SamplerAttrForStorage_t, 8>::~CUtlAttributeList(); // 904
	{
		OverflowChunk_t* tmp; // 1018
	}
	Purge(const CUtlIntrusiveList<CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t this); // 400
	{
		int i; // 77
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
		FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
		StaticInvalidHandle(void); // 947
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 331
		CWeakHandle<InfoForResourceTypeCTextureBase>::operator=(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 947
		ReleaseValueFromAttribute<CRenderAttributes::TextureAttrForStorage_t>(TextureAttrForStorage_t* pT); // 81
	}
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::ReleaseValues(); // 88
	CUtlAttributeListChunk<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t>::Clear(); // 409
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::Clear(
		bool bFreeHashMemory);  // 371
	CUtlAttributeList<CRenderAttributes::TextureAttr_t, 8, CRenderAttributes::TextureAttrForStorage_t, 8>::~CUtlAttributeList(); // 904
	{
		OverflowChunk_t* tmp; // 1018
	}
	CUtlIntrusiveList<CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::OverflowChunk_t>::Purge(); // 400
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::Clear(
		bool bFreeHashMemory);  // 371
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::~CUtlAttributeList(); // 904
	{
		OverflowChunk_t* tmp; // 1018
	}
	CUtlIntrusiveList<CUtlAttributeList<VMatrix, 1, VMatrix, 2>::OverflowChunk_t>::Purge(); // 400
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::Clear(
		bool bFreeHashMemory);  // 371
	CUtlAttributeList<VMatrix, 1, VMatrix, 2>::~CUtlAttributeList(); // 904
	{
		OverflowChunk_t* tmp; // 1018
	}
	CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::Purge(); // 400
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::ClearButLeaveParentPointerAlone(
					bool bFreeHashMemory);  // 425
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::Clear(
		bool bFreeHashMemory);  // 371
	CUtlAttributeList<Vector4D, 8, Vector4D, 4>::~CUtlAttributeList(); // 904
} /* size: 709, inline expansions: 45 (2764 bytes) */

// <0134B445> ../public/rendersystem/renderattrs.h:938
inline void CRenderAttributes::MergeToPtr(CRenderAttributes* attrList)
{
} /* size: 0 */

// <0015C42A> ../public/rendersystem/renderattrs.h:945
inline void ReleaseValueFromAttribute<CRenderAttributes::TextureAttrForStorage_t>(TextureAttrForStorage_t* pT)
{
} /* size: 0 */

// <0015C403> ../public/rendersystem/renderattrs.h:960
inline void ReleaseValueFromAttribute<CUtlString>(CUtlString* pS)
{
} /* size: 0 */

// <04021403> ../public/rendersystem/renderattrs.h:970
void SamplerAttr_t::SamplerAttr_t(const SamplerAttrForStorage_t& other)
{
} /* size: 0 */

// <040213DA> ../public/rendersystem/renderattrs.h:970
inline void SamplerAttr_t::SamplerAttr_t(const SamplerAttrForStorage_t& other)
{
} /* size: 0 */

// <040213B1> ../public/rendersystem/renderattrs.h:975
inline void SamplerAttrForStorage_t::operator=(const SamplerAttr_t& other)
{
} /* size: 0 */

// <04021395> ../public/rendersystem/renderattrs.h:992
void TextureAttr_t::TextureAttr_t(const TextureAttrForStorage_t& other)
{
} /* size: 0 */

// <0402136C> ../public/rendersystem/renderattrs.h:992
inline void TextureAttr_t::TextureAttr_t(const TextureAttrForStorage_t& other)
{
} /* size: 0 */

// <06A75B7A> ../public/rendersystem/renderattrs.h:1006
inline void TextureAttr_t::operator=(const TextureAttrForStorage_t& other)
{
} /* size: 0 */

