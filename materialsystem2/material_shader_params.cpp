
//
// materialsystem2/material_shader_params.cpp
//
//	referenced by: libmaterialsystem2.so
//
//	functions: 20
//

// <0030E5AD> materialsystem2/material_shader_params.cpp:26
// function calls: 4
void MatShadingComplexityCallback(IConVar* pVar, const char* pOldValue, float flOldValue)
{
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 28
	CMaterialSystem2::ShaderStats(); // 28
	MatShadingComplexityCallback(IConVar* pVar,
					const char* pOldValue,
					float flOldValue);  // 26
} /* size: 126, inline expansions: 4 (97 bytes) */

// <0030BE2C> materialsystem2/material_shader_params.cpp:26
void MatShadingComplexityCallback(IConVar* pVar, const char* pOldValue, float flOldValue)
{
} /* size: 0 */

// <00308B05> materialsystem2/material_shader_params.cpp:170
// variables: 13
HRenderTexture GetVariableTextureValue(const CMaterialLayer* pLayer, const CVfxPerLayerProgramData* pPerLayerProgramData, const CRenderAttributes* pAttributes, const CRenderAttributes* pAttributes2, const CVfxVariableDescription* pVar, const CMaterialParam* pParam, RenderTextureDimension_t textureDimension, int* pSpecificMipLevelToBindOut)
{
	const char   __FUNCTION__; // 8645
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 183
	}
	{
		CVfxExpressionEvalContext ctx; // 195
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 208
	}
	{
		HRenderTexture result; // 212
		bool bToolsView; // 223
		{
			int __executeCount; // 230
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 235
		}
		{
			int* _pCrash; // 238
		}
	}
	{
		HRenderTexture result; // 244
		CVfxExpressionEvalContext ctx; // 245
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 258
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 263
	}
} /* size: 0, variables: 1 */

// <00308AE0> materialsystem2/material_shader_params.cpp:275
RenderTextureDimension_t GetRenderTextureDimensionFromVariableDescription(const CVfxVariableDescription& var)
{
} /* size: 0 */

// <00308952> materialsystem2/material_shader_params.cpp:375
// variables: 10
bool GetValueFromMaterialParam(void* pOutput, const CVfxVariableDescription* pVar, const CMaterialParam* pParam, int nNumElements, const CMaterialLayer* pLayer)
{
	const char   __FUNCTION__; // 8694
	float* flOutput; // 379
	int* nOutput; // 380
	bool* bOutput; // 381
	bool bFoundValue; // 383
	const float* pflValue; // 384
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 377
	}
	{
		int i; // 391
	}
	{
		int i; // 401
	}
	{
		int i; // 411
	}
} /* size: 0, variables: 6 */

// <00308842> materialsystem2/material_shader_params.cpp:435
// variables: 12
bool GetValueFromDynamicMaterialParam(void* pOutput, const CVfxVariableDescription* pVar, const CMaterialParam* pParam, int nNumElements, const CMaterialLayer* pLayer, CVfxExpressionEvalContext& ctx)
{
	const char   __FUNCTION__; // 8868
	float* flOutput; // 439
	int* nOutput; // 440
	bool* bOutput; // 441
	bool bFoundValue; // 443
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 437
	}
	{
		Vector4D tmpVec; // 455
		{
			int i; // 456
		}
	}
	{
		Vector4D tmpVec; // 473
		{
			int i; // 474
		}
	}
	{
		Vector4D tmpVec; // 491
		{
			int i; // 492
		}
	}
} /* size: 0, variables: 5 */

// <0030876C> materialsystem2/material_shader_params.cpp:517
// variables: 10
Vector4D CalculateShadingComplexity(const CVfxVariableDescription* pVar, const CMaterialLayer* pLayer, const CRenderAttributes* pAttributes, const CRenderAttributes* pAttributes2)
{
	{
		int nTotalInstructionCount; // 521
		int nTotalRegisterCount; // 522
		const char* pRenderModeStr; // 524
		CUtlStringToken renderModeToken; // 525
		CMaterialMode* pComplexityMode; // 526
		Vector4D vShadingComplexity; // 542
		{
			MaterialRenderablePass_t materialRenderablePasses; // 529
			{
				RenderShaderHandle_t hRenderShader; // 532
				RenderShaderStats_t stats; // 534
			}
		}
	}
	{
		Vector vOverdraw; // 559
	}
} /* size: 0 */

// <0030847C> materialsystem2/material_shader_params.cpp:569
// variables: 33
bool SetVariableValue(const CRenderAttributes* pAttributes, const CRenderAttributes* pAttributes2, IRenderContext* pRenderContext, const CVfxVariableDescription* pVar, const CMaterialParam* pParam, void* pOutput, const int nNumRegisterElements, const CMaterialLayer* pLayer, const CVfxPerLayerProgramData* pPerLayerProgramData, DynamicRenderState_t* pRs)
{
	VfxVariableSourceType_t sourceType; // 581
	int nSourceIndex; // 582
	float* flOutput; // 589
	int* nOutput; // 590
	bool* bOutput; // 591
	bool bFoundValue; // 593
	const char   __FUNCTION__; // 8476
	{
		int nNumElements; // 599
		{
			CVfxExpressionEvalContext ctx; // 610
		}
	}
	{
		int nNumElements; // 627
		{
			Vector4D vVec; // 637
			{
				int i; // 644
			}
		}
		{
			IntVector4D vVec; // 657
			{
				int i; // 664
			}
		}
		{
			int nValue; // 677
		}
		{
			VMatrix vMatrix; // 692
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 705
		}
	}
	{
		int nNumElements; // 730
		Vector4D vResult; // 731
		CVfxExpressionEvalContext ctx; // 732
		{
			int i; // 748
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 772
		}
	}
	{
		RenderViewport_t viewport; // 780
	}
	{
		RenderViewport_t viewport; // 793
	}
	{
		const CTextureDesc* pTexHeader; // 805
	}
	{
		const CTextureDesc* pTexHeader; // 824
	}
	{
		const CTextureDesc* pTexHeader; // 843
	}
	{
		Vector2D vSheetSequenceDataUVCoords; // 871
		HRenderTexture hSequenceDataTexture; // 872
		int nSequenceCount; // 873
		{
			const CTextureDesc* pTexHeader; // 877
		}
	}
	{
		Vector4D vShadingComplexity; // 892
	}
	{
		Vector4D vShaderIDColor; // 903
	}
} /* size: 0, variables: 7 */

// <0030E720> materialsystem2/material_shader_params.cpp:939
// variables: 2
// function calls: 23
bool GetRenderStateValue(const CRenderAttributes* pAttributes, const CRenderAttributes* pAttributes2, const CVfxVariableDescription* pVar, const CMaterialLayer* pLayer, const CVfxPerLayerProgramData* pPerLayerProgramData, float32* pVecValueOut, int32* pIntValueOut, DynamicRenderState_t* pRs, const CVfxProgramData* pProgramData)
{
	{
		Vector4D vResult; // 983
		CVfxExpressionEvalContext ctx; // 984
		memset(void* __dest,
			int __ch,
			size_t __len);  // 124
		CVfxExpressionEvalContext::CVfxExpressionEvalContext(); // 984
		CUtlMemory<CMaterialParam, int>::Base(); // 112
		CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Base(); // 592
		CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Count(); // 593
		CMaterialLayer::InitEvalContext(
				CVfxExpressionEvalContext& ctx);  // 985
		Vector4D::Vector4D(); // 983
		AlignedByteArrayExplicit_t<6, short int, 2>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<short int, 6, short int>::Base(); // 600
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<short int, 6, short int>, short int, short int>::Count(); // 601
		CMaterialLayer::InitEvalContextPerProgramData(
						CVfxExpressionEvalContext& ctx,
						const CVfxPerLayerProgramData* pPerLayerProgramData);  // 986
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 582
		CInterlockedIntT<int, 4>::operator++(
				int);  // 251
		RecordVfxEval(void); // 994
		Color::SetColor(
			int _r,
			int _g,
			int _b,
			int _a);  // 50
		Color::Color(
			int _r,
			int _g,
			int _b,
			int _a);  // 1019
		Color::SetColor(
			int _r,
			int _g,
			int _b,
			int _a);  // 50
		Color::Color(
			int _r,
			int _g,
			int _b,
			int _a);  // 1026
	}
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 1032
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 977
} /* size: 972, inline expansions: 4 (0 bytes) */

// <003083D7> materialsystem2/material_shader_params.cpp:939
// variables: 2
bool GetRenderStateValue(const CRenderAttributes* pAttributes, const CRenderAttributes* pAttributes2, const CVfxVariableDescription* pVar, const CMaterialLayer* pLayer, const CVfxProgramData* pProgramData, const CVfxPerLayerProgramData* pPerLayerProgramData, DynamicRenderState_t* pRs, float32* pVecValueOut, int32* pIntValueOut)
{
	{
		Vector4D vResult; // 983
		CVfxExpressionEvalContext ctx; // 984
	}
} /* size: 0 */

// <0030832E> materialsystem2/material_shader_params.cpp:1040
// variables: 4
void SetRenderStateValueFromVariable(const CRenderAttributes* pAttributes, const CRenderAttributes* pAttributes2, const CVfxVariableDescription* pVar, DynamicRenderState_t* pRs, const CMaterialLayer* pLayer, const CVfxProgramData* pProgramData, const CVfxPerLayerProgramData* pPerLayerProgramData)
{
	float32 flValue; // 1048
	int32 nValue; // 1049
	const char   __FUNCTION__; // 8841
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1104
	}
} /* size: 0, variables: 3 */

// <00308278> materialsystem2/material_shader_params.cpp:1110
// variables: 4
void SetSamplerStateValueFromVariable(const CRenderAttributes* pAttributes, const CRenderAttributes* pAttributes2, const CVfxVariableDescription* pVar, int nRegisterOffset, DynamicRenderState_t* pRs, const CMaterialLayer* pLayer, const CVfxProgramData* pProgramData, const CVfxPerLayerProgramData* pPerLayerProgramData)
{
	float32 flValue; // 1138
	int32 nValue; // 1139
	const char   __FUNCTION__; // 8868
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1191
	}
} /* size: 0, variables: 3 */

// <002FCA31> materialsystem2/material_shader_params.cpp:1312
// variables: 5
bool GetValueFromMaterialParamAsVector4D(Vector4D* pOutput, const CVfxVariableDescription* pVar, const CMaterialParam* pParam, const CMaterialLayer* pLayer)
{
	bool bFoundValue; // 1314
	const float* pflValue; // 1315
	{
		int i; // 1322
	}
	{
		int i; // 1332
	}
	{
		int i; // 1342
	}
} /* size: 0, variables: 2 */

// <002FC9A0> materialsystem2/material_shader_params.cpp:1365
// variables: 4
bool EvalConstVariable(const CVfxVariableDescription& var, int nVariableIdx, const CMaterialLayer* pLayer, const CVfxPerLayerProgramData* pPerLayerProgramData, Vector4D* pResultOut)
{
	{
		const CMaterialParam* pParam; // 1371
		const int  nParamIdx; // 1372
	}
	{
		CVfxExpressionEvalContext ctx; // 1395
		bool bExpressionIsConst; // 1398
	}
} /* size: 0 */

// <002FC546> materialsystem2/material_shader_params.cpp:1422
// variables: 22
void AddTextureVariableToCommandBuffer(CUtlBuffer* pCmdBuf, const CVfxVariableDescription* pVar, int nVariableIndex, int nRegisterOffset, int nDescriptorSet, CMaterialParam* pParam, int nParamIndex, const CMaterialLayer* pLayer, const CVfxProgramData* pProgramData, const CVfxPerLayerProgramData* pPerLayerProgramData, VfxProgram_t programType)
{
	RenderTextureDimension_t dim; // 1426
	bool bTextureHandleDeterminedAtRuntime; // 1427
	const bool  bIsInDynamicDescriptorSet; // 1428
	const char   __FUNCTION__; // 8895
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1432
	}
	{
		MatOpLoadTexFromDynParam_t op; // 1438
	}
	{
		MatOpLoadTexFromParam_t op; // 1445
	}
	{
		SpamKey_t sk; // 1452
		CUtlHashtable<SpamKey_t, empty_t, DefaultHashFunctor<SpamKey_t>, DefaultEqualFunctor<SpamKey_t>, undefined_t, CUtlMemory<CUtlHashtableEntry<SpamKey_t, empty_t>, int> > s_DontSpam; // 1454
	}
	{
		MatOpLoadTexFromAttr_t op; // 1465
	}
	{
		MatOpLoadBufferFromAttr_t op; // 1473
	}
	{
		MatOpLoadTexFromVfxExpr_t op; // 1481
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1480
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1483
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1491
	}
	{
		uint32 nTextureResScale; // 1496
		{
			const CVfxVariableDescription& uvScaleVar; // 1500
			Vector4D vResult; // 1501
			{
				const int  nNumElements; // 1506
				float flUvScale; // 1507
			}
		}
		{
			MatOpBindTexture_t op; // 1525
		}
	}
	{
		MatOpBindTextureBuffer_t op; // 1536
	}
} /* size: 0, variables: 4 */

// <002FC32E> materialsystem2/material_shader_params.cpp:1544
// variables: 12
void AddUAVVariableToCommandBuffer(CUtlBuffer* pCmdBuf, const CVfxVariableDescription* pVar, int nVariableIndex, int nRegisterOffset, int nDescriptorSet, CMaterialParam* pParam, int nParamIndex, const CMaterialLayer* pLayer, const CVfxProgramData* pProgramData, const CVfxPerLayerProgramData* pPerLayerProgramData, VfxProgram_t programType)
{
	RenderTextureDimension_t dim; // 1553
	const char   __FUNCTION__; // 8787
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1557
	}
	{
		MatOpLoadTexFromAttr_t op; // 1561
	}
	{
		MatOpLoadBufferFromAttr_t op; // 1568
	}
	{
		MatOpLoadTexFromVfxExpr_t op; // 1575
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1574
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1577
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1584
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1588
	}
	{
		MatOpBindUAVTex_t op; // 1593
	}
	{
		MatOpBindUAVBuffer_t op; // 1600
	}
} /* size: 0, variables: 2 */

// <0030EF1B> materialsystem2/material_shader_params.cpp:1607
// variables: 8
// function calls: 55
bool AddRenderStateValueLoadToCommandBuffer(CUtlBuffer* pCmdBuf, const CVfxVariableDescription* pVar, int nVariableIndex, const CMaterialLayer* pLayer, VfxProgram_t programType, float* pflLiteralValue, int32* pnLiteralValue)
{
	{
		CVfxExpressionEvalContext ctx; // 1640
		Vector4D vResult; // 1645
		bool bExpressionIsConst; // 1646
		memset(void* __dest,
			int __ch,
			size_t __len);  // 124
		CVfxExpressionEvalContext::CVfxExpressionEvalContext(); // 1640
		CUtlMemory<CMaterialParam, int>::Base(); // 112
		CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Base(); // 592
		CUtlVectorBase<CMaterialParam, CUtlMemory<CMaterialParam, int> >::Count(); // 593
		CMaterialLayer::InitEvalContext(
				CVfxExpressionEvalContext& ctx);  // 1641
		AlignedByteArrayExplicit_t<6, short int, 2>::Base(); // 74
		CUtlLeanVectorFixedGrowableBase<short int, 6, short int>::Base(); // 600
		CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<short int, 6, short int>, short int, short int>::Count(); // 601
		CMaterialLayer::InitEvalContextPerProgramData(
						CVfxExpressionEvalContext& ctx,
						const CVfxPerLayerProgramData* pPerLayerProgramData);  // 1642
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 582
		CInterlockedIntT<int, 4>::operator++(
				int);  // 251
		RecordVfxEval(void); // 1644
		Vector4D::Vector4D(); // 1645
		clamp<float, float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 1652
		{
			MatOpLoadVec4FromVfxExpr_t op; // 1676
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 175
			MatOpBase_t::MatOpBase_t(
					uint32 nOpCode,
					size_t nOpSize);  // 198
			MatOpHelper_t<49, MatOpLoadVec4FromVfxExpr_t>::MatOpHelper_t(); // 494
			MatOpLoadVec4FromVfxExpr_t::MatOpLoadVec4FromVfxExpr_t(); // 1676
			{
			}
			PutInCmdBuf<MatOpLoadVec4FromVfxExpr_t>(CUtlBuffer* pBuf,
								const MatOpLoadVec4FromVfxExpr_t& obj);  // 1682
		}
		{
			MatOpClampFloat_t op; // 1695
			V_memset(void* dest,
				int fill,
				size_t count);  // 175
			MatOpBase_t::MatOpBase_t(
					uint32 nOpCode,
					size_t nOpSize);  // 198
			MatOpHelper_t<50, MatOpClampFloat_t>::MatOpHelper_t(); // 502
			MatOpClampFloat_t::MatOpClampFloat_t(); // 1695
			PutInCmdBuf<MatOpClampFloat_t>(CUtlBuffer* pBuf,
							const MatOpClampFloat_t& obj);  // 1698
		}
		Color::SetColor(
			int _r,
			int _g,
			int _b,
			int _a);  // 50
		Color::Color(
			int _r,
			int _g,
			int _b,
			int _a);  // 1754
		{
			MatOpClampInt_t op; // 1720
			V_memset(void* dest,
				int fill,
				size_t count);  // 175
			MatOpBase_t::MatOpBase_t(
					uint32 nOpCode,
					size_t nOpSize);  // 198
			MatOpHelper_t<51, MatOpClampInt_t>::MatOpHelper_t(); // 508
			MatOpClampInt_t::MatOpClampInt_t(); // 1720
			PutInCmdBuf<MatOpClampInt_t>(CUtlBuffer* pBuf,
							const MatOpClampInt_t& obj);  // 1723
		}
		{
			MatOpClampShort_t op; // 1713
			V_memset(void* dest,
				int fill,
				size_t count);  // 175
			MatOpBase_t::MatOpBase_t(
					uint32 nOpCode,
					size_t nOpSize);  // 198
			MatOpHelper_t<52, MatOpClampShort_t>::MatOpHelper_t(); // 514
			MatOpClampShort_t::MatOpClampShort_t(); // 1713
			PutInCmdBuf<MatOpClampShort_t>(CUtlBuffer* pBuf,
							const MatOpClampShort_t& obj);  // 1716
		}
		{
			MatOpClampVec4_t op; // 1739
			V_memset(void* dest,
				int fill,
				size_t count);  // 175
			MatOpBase_t::MatOpBase_t(
					uint32 nOpCode,
					size_t nOpSize);  // 198
			MatOpHelper_t<53, MatOpClampVec4_t>::MatOpHelper_t(); // 520
			MatOpClampVec4_t::MatOpClampVec4_t(); // 1739
			PutInCmdBuf<MatOpClampVec4_t>(CUtlBuffer* pBuf,
							const MatOpClampVec4_t& obj);  // 1748
		}
		Color::SetColor(
			int _r,
			int _g,
			int _b,
			int _a);  // 50
		Color::Color(
			int _r,
			int _g,
			int _b,
			int _a);  // 1668
		clamp<float, float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 1661
		clamp<float, float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 1662
		clamp<float, float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 1663
		clamp<float, float>(const float& val,
					const float& minVal,
					const float& maxVal);  // 1664
		clamp<int, int>(const int& val,
				const int& minVal,
				const int& maxVal);  // 1657
	}
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 1762
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 1632
} /* size: 0, inline expansions: 4 (0 bytes) */

// <002FC0E1> materialsystem2/material_shader_params.cpp:1607
// variables: 10
bool AddRenderStateValueLoadToCommandBuffer(CUtlBuffer* pCmdBuf, const CVfxVariableDescription* pVar, int nVariableIndex, const CMaterialLayer* pLayer, VfxProgram_t programType, float* pflLiteralValue, int32* pnLiteralValue)
{
	const char   __FUNCTION__; // 9015
	{
		CVfxExpressionEvalContext ctx; // 1640
		Vector4D vResult; // 1645
		bool bExpressionIsConst; // 1646
		{
			MatOpLoadVec4FromVfxExpr_t op; // 1676
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1678
			}
		}
		{
			MatOpClampFloat_t op; // 1695
		}
		{
			MatOpClampShort_t op; // 1713
		}
		{
			MatOpClampInt_t op; // 1720
		}
		{
			MatOpClampVec4_t op; // 1739
		}
	}
} /* size: 0, variables: 1 */

// <002FB291> materialsystem2/material_shader_params.cpp:1768
// variables: 55
void AddRenderStateVariableToCommandBuffer(CUtlBuffer* pCmdBuf, const CVfxVariableDescription* pVar, int nVariableIndex, int nRegisterOffset, CMaterialParam* pParam, const CMaterialLayer* pLayer, VfxProgram_t programType, DynamicRenderState_t& dynRs)
{
	float flLiteralValue; // 1771
	int32 nLiteralValue; // 1772
	const char   __FUNCTION__; // 8988
	{
		MatOpLoadIntLiteral_t op; // 1795
		MatOpStoreRsStencilRef_t op2; // 1798
	}
	{
		MatOpLoadVec4Literal_t op; // 1805
		MatOpStoreRsStencilRef_t op2; // 1811
	}
	{
		MatOpLoadIntLiteral_t op; // 1818
		MatOpStoreRsSampleMask_t op2; // 1821
	}
	{
		MatOpLoadIntLiteral_t op; // 1828
		MatOpStoreRsAlphaTestEnable_t op2; // 1831
	}
	{
		MatOpLoadFloatLiteral_t op; // 1839
		MatOpStoreRsAlphaTestRef_t op2; // 1842
	}
	{
		MatOpLoadIntLiteral_t op; // 1850
		MatOpStoreRsAlphaTestFunc_t op2; // 1853
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1861
	}
	{
		MatOpStoreRsFillMode_t op; // 1891
	}
	{
		MatOpStoreRsCullMode_t op; // 1892
	}
	{
		MatOpStoreRsDepthBias_t op; // 1893
	}
	{
		MatOpStoreRsSSDepthBias_t op; // 1894
	}
	{
		MatOpStoreRsDepthBiasClamp_t op; // 1895
	}
	{
		MatOpStoreRsDepthClipEnable_t op; // 1896
	}
	{
		MatOpStoreRsMultiSampleEnable_t op; // 1897
	}
	{
		MatOpStoreRsSampleMask_t op; // 1898
	}
	{
		MatOpStoreRsSrgbWriteEnable_t op; // 1907
	}
	{
		MatOpStoreRsDepthEnable_t op; // 1908
	}
	{
		MatOpStoreRsDepthWriteEnable_t op; // 1909
	}
	{
		MatOpStoreRsDepthFunc_t op; // 1910
	}
	{
		MatOpStoreRsStencilEnable_t op; // 1911
	}
	{
		MatOpStoreRsStencilReadMask_t op; // 1912
	}
	{
		MatOpStoreRsStencilWriteMask_t op; // 1913
	}
	{
		MatOpStoreRsStencilFailOp_t op; // 1914
	}
	{
		MatOpStoreRsStencilDepthFailOp_t op; // 1915
	}
	{
		MatOpStoreRsStencilPassOp_t op; // 1916
	}
	{
		MatOpStoreRsStencilFunc_t op; // 1917
	}
	{
		MatOpStoreRsBackStencilFailOp_t op; // 1918
	}
	{
		MatOpStoreRsBackStencilDepthFailOp_t op; // 1919
	}
	{
		MatOpStoreRsBackStencilPassOp_t op; // 1920
	}
	{
		MatOpStoreRsBackStencilFunc_t op; // 1921
	}
	{
		MatOpStoreRsStencilRef_t op; // 1922
	}
	{
		MatOpStoreRsAlphaToCoverageEnable_t op; // 1923
	}
	{
		MatOpStoreRsAlphaTestEnable_t op; // 1924
	}
	{
		MatOpStoreRsAlphaTestRef_t op; // 1925
	}
	{
		MatOpStoreRsAlphaTestFunc_t op; // 1926
	}
	{
		MatOpStoreRsBlendEnable_t op; // 1927
	}
	{
		MatOpStoreRsSrcBlend_t op; // 1928
	}
	{
		MatOpStoreRsDestBlend_t op; // 1929
	}
	{
		MatOpStoreRsBlendOp_t op; // 1930
	}
	{
		MatOpStoreRsSrcBlendAlpha_t op; // 1931
	}
	{
		MatOpStoreRsDestBlendAlpha_t op; // 1932
	}
	{
		MatOpStoreRsBlendOpAlpha_t op; // 1933
	}
	{
		MatOpStoreRsColorWriteEnable_t op; // 1942
	}
	{
		MatOpStoreRsBlendFactor_t op; // 1943
	}
	{
		MatOpStoreRsIndependentBlendEnable_t op; // 1944
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1948
	}
} /* size: 0, variables: 3 */

// <002FADF2> materialsystem2/material_shader_params.cpp:1954
// variables: 17
void AddSamplerStateVariableToCommandBuffer(CUtlBuffer* pCmdBuf, const CVfxVariableDescription* pVar, int nVariableIndex, int nRegisterOffset, CMaterialParam* pParam, const CMaterialLayer* pLayer, VfxProgram_t programType, DynamicRenderState_t& dynRs)
{
	float flLiteralValue; // 1984
	int32 nLiteralValue; // 1985
	const char   __FUNCTION__; // 9015
	{
		MatOpLoadSamplerFromAttr_t op; // 1969
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2036
	}
	{
		MatOpStoreSsFilter_t op; // 2045
	}
	{
		MatOpStoreSsAddressU_t op; // 2046
	}
	{
		MatOpStoreSsAddressV_t op; // 2047
	}
	{
		MatOpStoreSsAddressW_t op; // 2048
	}
	{
		MatOpStoreSsBorderColor_t op; // 2049
	}
	{
		MatOpStoreSsMipLodBias_t op; // 2050
	}
	{
		MatOpStoreSsMaxLod_t op; // 2051
	}
	{
		MatOpStoreSsMaxAniso_t op; // 2052
	}
	{
		MatOpStoreSsFetch4_t op; // 2053
	}
	{
		MatOpStoreSsMinLod_t op; // 2054
	}
	{
		MatOpStoreSsCompFunc_t op; // 2055
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 2058
	}
} /* size: 0, variables: 3 */

