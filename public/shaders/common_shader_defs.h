
//
// public/shaders/common_shader_defs.h
//
//	referenced by: libengine2.so
//
//	functions: 4
//	structs: 2
//

// <034751C5> ../public/shaders/common_shader_defs.h:5
void PerViewConstantBuffer_t::PerViewConstantBuffer_t()
{
} /* size: 0 */

// <034751A9> ../public/shaders/common_shader_defs.h:5
inline void PerViewConstantBuffer_t::PerViewConstantBuffer_t()
{
} /* size: 0 */

// <02B5D296> ../public/shaders/common_shader_defs.h:5
// member variables: 55
// struct size: 1,088
struct PerViewConstantBuffer_t {
	VMatrix m_matWorldToProjection; /* 0 64 */
	VMatrix m_matProjectionToWorld; /* 64 64 */
	VMatrix m_matWorldToView; /* 128 64 */
	VMatrix m_matViewToProjection; /* 192 64 */
	Vector4D m_vInvProjRow3; /* 256 16 */
	Vector4D m_vClipPlane0; /* 272 16 */
	float m_flToneMapScalarLinear; /* 288 4 */
	float m_flLightMapScalar; /* 292 4 */
	float m_flEnvMapScalar; /* 296 4 */
	float m_flToneMapScalarGamma; /* 300 4 */
	Vector m_vCameraPositionWs; /* 304 12 */
	float m_flViewportMinZ; /* 316 4 */
	Vector m_vCameraDirWs; /* 320 12 */
	float m_flViewportMaxZ; /* 332 4 */
	Vector m_vCameraUpDirWs; /* 336 12 */
	float m_flTime; /* 348 4 */
	Vector m_vDepthPsToVsConversion; /* 352 12 */
	float m_flNearPlane; /* 364 4 */
	float m_flFarPlane; /* 368 4 */
	float m_flCameraFOV; /* 372 4 */
	Vector2D m_vInvViewportSize; /* 376 8 */
	Vector2D m_vViewportToGBufferRatio; /* 384 8 */
	Vector2D m_vMorphTextureAtlasSize; /* 392 8 */
	Vector4D m_vInvGBufferSize; /* 400 16 */
	Vector2D m_vViewportOffset; /* 416 8 */
	Vector2D m_vViewportSize; /* 424 8 */
	Vector2D m_vRenderTargetSize; /* 432 8 */
	float m_flFogBlendToBackground; /* 440 4 */
	float m_flHenyeyGreensteinCoeff; /* 444 4 */
	Vector m_vFogColor; /* 448 12 */
	float m_flNegFogStartOverFogRange; /* 460 4 */
	float m_flInvFogRange; /* 464 4 */
	float m_flFogMaxDensity; /* 468 4 */
	float m_flFogExponent; /* 472 4 */
	float m_flMod2xIdentity; /* 476 4 */
	Vector2D m_bRoughnessParams; /* 480 8 */
	int m_nMSAASampleCount; /* 488 4 */
	float m_flStereoCameraIndex; /* 492 4 */
	Vector m_vMiddleEyePositionWs; /* 496 12 */
	float m_flPad2; /* 508 4 */
	VMatrix m_matWorldToProjectionMultiview[2]; /* 512 128 */
	Vector4D m_vCameraPositionWsMultiview[2]; /* 640 32 */
	Vector4D m_vFrameBufferCopyInvSizeAndUvScale; /* 672 16 */
	Vector4D m_vCameraAngles; /* 688 16 */
	Vector4D m_vWorldToCameraOffset; /* 704 16 */
	Vector4D m_vWorldToCameraOffsetMultiview[2]; /* 720 32 */
	Vector4D m_vPerViewConstantExtraData0; /* 752 16 */
	Vector4D m_vPerViewConstantExtraData1; /* 768 16 */
	Vector4D m_vPerViewConstantExtraData2; /* 784 16 */
	Vector4D m_vPerViewConstantExtraData3; /* 800 16 */
	VMatrix m_matPrevProjectionToWorld; /* 816 64 */
	VMatrix m_matViewToScreen; /* 880 64 */
	VMatrix m_matProjectionToView; /* 944 64 */
	VMatrix m_matCurrFrameViewToPrevFrameProj; /* 1008 64 */
	float m_vRandomFloats[4]; /* 1072 16 */
};

// <02EDD341> ../public/shaders/common_shader_defs.h:86
void PerLayerConstantBuffer_t::PerLayerConstantBuffer_t()
{
} /* size: 0 */

// <02EDD325> ../public/shaders/common_shader_defs.h:86
inline void PerLayerConstantBuffer_t::PerLayerConstantBuffer_t()
{
} /* size: 0 */

// <02DCEB15> ../public/shaders/common_shader_defs.h:86
// member function: 1
// member variable: 1
// struct size: 16
struct PerLayerConstantBuffer_t {
	Vector4D m_vWireframeColor; /* 0 16 */
	void PerLayerConstantBuffer_t(PerLayerConstantBuffer_t* );
};

