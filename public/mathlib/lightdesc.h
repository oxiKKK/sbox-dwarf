
//
// public/mathlib/lightdesc.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//
//	functions: 19
//	classes: 2
//	structs: 6
//

// <058F8CEC> ../../public/mathlib/lightdesc.h:34
inline void Get(ISchemaSystemTypeScope* pTypeScope)
{
} /* size: 0 */

// <058A8979> ../../public/mathlib/lightdesc.h:34
// member functions: 2
// class size: 1
class CSchemaTypeOf<LightType_t> {
	/* ../../public/mathlib/lightdesc.h:34 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
	/* ../../public/mathlib/lightdesc.h:34 */
	const char* GetEnumName(void);
};

// <058A89E1> ../../public/mathlib/lightdesc.h:54
// member functions: 2
// class size: 1
class CSchemaTypeOf<LightSourceShape_t> {
	/* ../../public/mathlib/lightdesc.h:54 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
	/* ../../public/mathlib/lightdesc.h:54 */
	const char* GetEnumName(void);
};

// <06E289D5> ../../public/mathlib/lightdesc.h:76
void LightDesc_t::~LightDesc_t()
{
} /* size: 0 */

// <06E289B9> ../../public/mathlib/lightdesc.h:76
inline void LightDesc_t::~LightDesc_t()
{
} /* size: 0 */

// <0630F3CA> ../public/mathlib/lightdesc.h:76
void LightDesc_t::LightDesc_t(const LightDesc_t &)
{
} /* size: 0 */

// <0630F3A8> ../public/mathlib/lightdesc.h:76
inline void LightDesc_t::LightDesc_t(const LightDesc_t &)
{
} /* size: 0 */

// <000A7AF2> ../public/mathlib/lightdesc.h:76
// member functions: 37
// member variables: 47
// static member variables: 2
// struct size: 240
struct LightDesc_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/mathlib/lightdesc.h:78 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/mathlib/lightdesc.h:78 */
	LightDesc_t* Schema_MarkHelperFn(void);
	/* ../public/mathlib/lightdesc.h:78 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/mathlib/lightdesc.h:78 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/mathlib/lightdesc.h:78 */
	void Schema_CompileTimeVerificationFunction(LightDesc_t* );
	/* ../public/mathlib/lightdesc.h:78 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/mathlib/lightdesc.h:78 */
	const char* Schema_StaticClassname(void);
	/* ../public/mathlib/lightdesc.h:78 */
	const CSchemaClassInfo* Schema_DynamicBinding(const LightDesc_t* );
	static struct datamap_t m_DataMap; /* 0 0 */
	/* ../public/mathlib/lightdesc.h:81 */
	datamap_t* GetBaseMap(void);
	LightType_t m_Type; /* 0 4 */
	Vector m_Color; /* 4 12 */
	Vector m_BounceColor; /* 16 12 */
	float m_Range; /* 28 4 */
	float m_Falloff; /* 32 4 */
	float m_Attenuation0; /* 36 4 */
	float m_Attenuation1; /* 40 4 */
	float m_Attenuation2; /* 44 4 */
	float m_Theta; /* 48 4 */
	float m_Phi; /* 52 4 */
	HRenderTextureStrongCopyable m_lightCookie; /* 56 8 */
	int m_nLightGroupCount; /* 64 4 */
	CUtlStringToken m_lightGroups[1]; /* 68 4 */
	bool m_bCastShadows; /* 72 1 */
	int m_nShadowWidth; /* 76 4 */
	int m_nShadowHeight; /* 80 4 */
	int m_nShadowCascadeCount; /* 84 4 */
	float m_flShadowCascadeSplitRatio; /* 88 4 */
	float m_flCascadeDistanceScale; /* 92 4 */
	bool m_bUsesIndexedBakedLighting; /* 96 1 */
	int m_nBakeLightIndex; /* 100 4 */
	float m_flBakeLightIndexScale; /* 104 4 */
	int m_nFogLightingMode; /* 108 4 */
	bool m_bRenderDiffuse; /* 112 1 */
	bool m_bRenderSpecular; /* 113 1 */
	bool m_bRenderTransmissive; /* 114 1 */
	int m_nPriority; /* 116 4 */
	LightSourceShape_t m_Shape; /* 120 4 */
	float m_flLightSourceDim0; /* 124 4 */
	float m_flLightSourceDim1; /* 128 4 */
	float m_flLightSourceSize0; /* 132 4 */
	float m_flLightSourceSize1; /* 136 4 */
	float m_flPrecomputedMaxRange; /* 140 4 */
	float m_flFogContributionStength; /* 144 4 */
	float m_flNearClipPlane; /* 148 4 */
	Vector m_Position; /* 152 12 */
	Vector m_Direction; /* 164 12 */
	Vector m_vecUp; /* 176 12 */
	float m_ThetaDot; /* 188 4 */
	float m_PhiDot; /* 192 4 */
	float m_TanPhi; /* 196 4 */
	float m_OneOverThetaDotMinusPhiDot; /* 200 4 */
	float m_Truncation; /* 204 4 */
	uint m_Flags; /* 208 4 */
	int32 m_nEnvProbeId; /* 212 4 */
	Vector m_vMinBounds; /* 216 12 */
	Vector m_vMaxBounds; /* 228 12 */
	/* ../public/mathlib/lightdesc.h:149 */
	void RecalculateDerivedValues(LightDesc_t* , float);
	/* ../public/mathlib/lightdesc.h:150 */
	void RecalculateOneOverThetaDotMinusPhiDot(LightDesc_t* );
	/* ../public/mathlib/lightdesc.h:152 */
	void LightDesc_t(LightDesc_t* );
	/* ../public/mathlib/lightdesc.h:160 */
	void LightDesc_t(LightDesc_t* , const Vector& , const Vector& );
	/* ../public/mathlib/lightdesc.h:166 */
	LightDesc_t& operator=(LightDesc_t* , const LightDesc_t& );
	/* ../public/mathlib/lightdesc.h:220 */
	void Clear(LightDesc_t* );
	/* ../public/mathlib/lightdesc.h:274 */
	void LightDesc_t(LightDesc_t* , const Vector& , const Vector& , const Vector& , float, float);
	/* ../public/mathlib/lightdesc.h:280 */
	void InitPoint(LightDesc_t* , const Vector& , const Vector& );
	/* ../public/mathlib/lightdesc.h:281 */
	void InitDirectional(LightDesc_t* , const Vector& , const Vector& );
	/* ../public/mathlib/lightdesc.h:282 */
	void InitSpot(LightDesc_t* , const Vector& , const Vector& , const Vector& , float, float);
	/* ../public/mathlib/lightdesc.h:284 */
	void InitEnvironmentProbe(LightDesc_t* , const Vector& , float);
	/* ../public/mathlib/lightdesc.h:287 */
	void ComputeLightAtPoints(const LightDesc_t* , const FourVectors& , const FourVectors* , FourVectors& , ComputeLightAtPointsFlags_t);
	/* ../public/mathlib/lightdesc.h:291 */
	Vector ComputeLightDirection(const LightDesc_t* , const Vector& );
	/* ../public/mathlib/lightdesc.h:294 */
	void SetupOldStyleAttenuation(LightDesc_t* , float, float, float);
	/* ../public/mathlib/lightdesc.h:296 */
	void SetupNewStyleAttenuation(LightDesc_t* , float, float);
	/* ../public/mathlib/lightdesc.h:301 */
	bool IsDirectionWithinLightCone(const LightDesc_t* , const Vector& );
	/* ../public/mathlib/lightdesc.h:303 */
	float OneOverThetaDotMinusPhiDot(const LightDesc_t* );
	/* ../public/mathlib/lightdesc.h:308 */
	float DistanceAtWhichBrightnessIsLessThan(const LightDesc_t* , float);
	/* ../public/mathlib/lightdesc.h:310 */
	void SetPointLightSourceShape(LightDesc_t* );
	/* ../public/mathlib/lightdesc.h:311 */
	void SetSphereLightSourceShape(LightDesc_t* , float);
	/* ../public/mathlib/lightdesc.h:312 */
	void SetSphereLightSourceShapeForDirectionalLight(LightDesc_t* , float);
	/* ../public/mathlib/lightdesc.h:315 */
	Vector EstimateEnergy(const LightDesc_t* , bool, float);
	/* ../public/mathlib/lightdesc.h:318 */
	bool GenerateRay(const LightDesc_t* , Vector& , Vector& , float, float, const Vector& , float);
	/* ../public/mathlib/lightdesc.h:321 */
	Vector2D GenerateRaySeed(const LightDesc_t* , const Vector& , const Vector& , float);
	/* ../public/mathlib/lightdesc.h:324 */
	float GenerateRayPdf(const LightDesc_t* , const Vector& , const Vector& , const Vector& , float);
	/* ../public/mathlib/lightdesc.h:327 */
	Vector ShadowRayEndpoint(const LightDesc_t* , const Vector& , float, float);
	/* ../public/mathlib/lightdesc.h:329 */
	bool IlluminatesLightGroup(const LightDesc_t* , const CUtlStringToken& );
	void ~LightDesc_t(LightDesc_t* );
};

// <04CFD9C7> ../public/mathlib/lightdesc.h:76
// member functions: 36
// member variables: 47
// static member variables: 2
// struct size: 240
struct LightDesc_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/mathlib/lightdesc.h:78 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/mathlib/lightdesc.h:78 */
	LightDesc_t* Schema_MarkHelperFn(void);
	/* ../public/mathlib/lightdesc.h:78 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/mathlib/lightdesc.h:78 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/mathlib/lightdesc.h:78 */
	void Schema_CompileTimeVerificationFunction(LightDesc_t* );
	/* ../public/mathlib/lightdesc.h:78 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/mathlib/lightdesc.h:78 */
	const char* Schema_StaticClassname(void);
	/* ../public/mathlib/lightdesc.h:78 */
	const CSchemaClassInfo* Schema_DynamicBinding(const LightDesc_t* );
	static struct datamap_t m_DataMap; /* 0 0 */
	/* ../public/mathlib/lightdesc.h:81 */
	datamap_t* GetBaseMap(void);
	LightType_t m_Type; /* 0 4 */
	Vector m_Color; /* 4 12 */
	Vector m_BounceColor; /* 16 12 */
	float m_Range; /* 28 4 */
	float m_Falloff; /* 32 4 */
	float m_Attenuation0; /* 36 4 */
	float m_Attenuation1; /* 40 4 */
	float m_Attenuation2; /* 44 4 */
	float m_Theta; /* 48 4 */
	float m_Phi; /* 52 4 */
	HRenderTextureStrongCopyable m_lightCookie; /* 56 8 */
	int m_nLightGroupCount; /* 64 4 */
	CUtlStringToken m_lightGroups[1]; /* 68 4 */
	bool m_bCastShadows; /* 72 1 */
	int m_nShadowWidth; /* 76 4 */
	int m_nShadowHeight; /* 80 4 */
	int m_nShadowCascadeCount; /* 84 4 */
	float m_flShadowCascadeSplitRatio; /* 88 4 */
	float m_flCascadeDistanceScale; /* 92 4 */
	bool m_bUsesIndexedBakedLighting; /* 96 1 */
	int m_nBakeLightIndex; /* 100 4 */
	float m_flBakeLightIndexScale; /* 104 4 */
	int m_nFogLightingMode; /* 108 4 */
	bool m_bRenderDiffuse; /* 112 1 */
	bool m_bRenderSpecular; /* 113 1 */
	bool m_bRenderTransmissive; /* 114 1 */
	int m_nPriority; /* 116 4 */
	LightSourceShape_t m_Shape; /* 120 4 */
	float m_flLightSourceDim0; /* 124 4 */
	float m_flLightSourceDim1; /* 128 4 */
	float m_flLightSourceSize0; /* 132 4 */
	float m_flLightSourceSize1; /* 136 4 */
	float m_flPrecomputedMaxRange; /* 140 4 */
	float m_flFogContributionStength; /* 144 4 */
	float m_flNearClipPlane; /* 148 4 */
	Vector m_Position; /* 152 12 */
	Vector m_Direction; /* 164 12 */
	Vector m_vecUp; /* 176 12 */
	float m_ThetaDot; /* 188 4 */
	float m_PhiDot; /* 192 4 */
	float m_TanPhi; /* 196 4 */
	float m_OneOverThetaDotMinusPhiDot; /* 200 4 */
	float m_Truncation; /* 204 4 */
	uint m_Flags; /* 208 4 */
	int32 m_nEnvProbeId; /* 212 4 */
	Vector m_vMinBounds; /* 216 12 */
	Vector m_vMaxBounds; /* 228 12 */
	/* ../public/mathlib/lightdesc.h:149 */
	void RecalculateDerivedValues(LightDesc_t* , float);
	/* ../public/mathlib/lightdesc.h:150 */
	void RecalculateOneOverThetaDotMinusPhiDot(LightDesc_t* );
	/* ../public/mathlib/lightdesc.h:152 */
	void LightDesc_t(LightDesc_t* );
	/* ../public/mathlib/lightdesc.h:160 */
	void LightDesc_t(LightDesc_t* , const Vector& , const Vector& );
	/* ../public/mathlib/lightdesc.h:166 */
	LightDesc_t& operator=(LightDesc_t* , const LightDesc_t& );
	/* ../public/mathlib/lightdesc.h:220 */
	void Clear(LightDesc_t* );
	/* ../public/mathlib/lightdesc.h:274 */
	void LightDesc_t(LightDesc_t* , const Vector& , const Vector& , const Vector& , float, float);
	/* ../public/mathlib/lightdesc.h:280 */
	void InitPoint(LightDesc_t* , const Vector& , const Vector& );
	/* ../public/mathlib/lightdesc.h:281 */
	void InitDirectional(LightDesc_t* , const Vector& , const Vector& );
	/* ../public/mathlib/lightdesc.h:282 */
	void InitSpot(LightDesc_t* , const Vector& , const Vector& , const Vector& , float, float);
	/* ../public/mathlib/lightdesc.h:284 */
	void InitEnvironmentProbe(LightDesc_t* , const Vector& , float);
	/* ../public/mathlib/lightdesc.h:287 */
	void ComputeLightAtPoints(const LightDesc_t* , const FourVectors& , const FourVectors* , FourVectors& , ComputeLightAtPointsFlags_t);
	/* ../public/mathlib/lightdesc.h:291 */
	Vector ComputeLightDirection(const LightDesc_t* , const Vector& );
	/* ../public/mathlib/lightdesc.h:294 */
	void SetupOldStyleAttenuation(LightDesc_t* , float, float, float);
	/* ../public/mathlib/lightdesc.h:296 */
	void SetupNewStyleAttenuation(LightDesc_t* , float, float);
	/* ../public/mathlib/lightdesc.h:301 */
	bool IsDirectionWithinLightCone(const LightDesc_t* , const Vector& );
	/* ../public/mathlib/lightdesc.h:303 */
	float OneOverThetaDotMinusPhiDot(const LightDesc_t* );
	/* ../public/mathlib/lightdesc.h:308 */
	float DistanceAtWhichBrightnessIsLessThan(const LightDesc_t* , float);
	/* ../public/mathlib/lightdesc.h:310 */
	void SetPointLightSourceShape(LightDesc_t* );
	/* ../public/mathlib/lightdesc.h:311 */
	void SetSphereLightSourceShape(LightDesc_t* , float);
	/* ../public/mathlib/lightdesc.h:312 */
	void SetSphereLightSourceShapeForDirectionalLight(LightDesc_t* , float);
	/* ../public/mathlib/lightdesc.h:315 */
	Vector EstimateEnergy(const LightDesc_t* , bool, float);
	/* ../public/mathlib/lightdesc.h:318 */
	bool GenerateRay(const LightDesc_t* , Vector& , Vector& , float, float, const Vector& , float);
	/* ../public/mathlib/lightdesc.h:321 */
	Vector2D GenerateRaySeed(const LightDesc_t* , const Vector& , const Vector& , float);
	/* ../public/mathlib/lightdesc.h:324 */
	float GenerateRayPdf(const LightDesc_t* , const Vector& , const Vector& , const Vector& , float);
	/* ../public/mathlib/lightdesc.h:327 */
	Vector ShadowRayEndpoint(const LightDesc_t* , const Vector& , float, float);
	/* ../public/mathlib/lightdesc.h:329 */
	bool IlluminatesLightGroup(const LightDesc_t* , const CUtlStringToken& );
};

// <0583C49A> ../../public/mathlib/lightdesc.h:76
// member functions: 36
// member variables: 47
// static member variables: 2
// struct size: 240
struct LightDesc_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../../public/mathlib/lightdesc.h:78 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../../public/mathlib/lightdesc.h:78 */
	LightDesc_t* Schema_MarkHelperFn(void);
	/* ../../public/mathlib/lightdesc.h:78 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../../public/mathlib/lightdesc.h:78 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../../public/mathlib/lightdesc.h:78 */
	void Schema_CompileTimeVerificationFunction(LightDesc_t* );
	/* ../../public/mathlib/lightdesc.h:78 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../../public/mathlib/lightdesc.h:78 */
	const char* Schema_StaticClassname(void);
	/* ../../public/mathlib/lightdesc.h:78 */
	const CSchemaClassInfo* Schema_DynamicBinding(const LightDesc_t* );
	static struct datamap_t m_DataMap; /* 0 0 */
	/* ../../public/mathlib/lightdesc.h:81 */
	datamap_t* GetBaseMap(void);
	LightType_t m_Type; /* 0 4 */
	Vector m_Color; /* 4 12 */
	Vector m_BounceColor; /* 16 12 */
	float m_Range; /* 28 4 */
	float m_Falloff; /* 32 4 */
	float m_Attenuation0; /* 36 4 */
	float m_Attenuation1; /* 40 4 */
	float m_Attenuation2; /* 44 4 */
	float m_Theta; /* 48 4 */
	float m_Phi; /* 52 4 */
	HRenderTextureStrongCopyable m_lightCookie; /* 56 8 */
	int m_nLightGroupCount; /* 64 4 */
	CUtlStringToken m_lightGroups[1]; /* 68 4 */
	bool m_bCastShadows; /* 72 1 */
	int m_nShadowWidth; /* 76 4 */
	int m_nShadowHeight; /* 80 4 */
	int m_nShadowCascadeCount; /* 84 4 */
	float m_flShadowCascadeSplitRatio; /* 88 4 */
	float m_flCascadeDistanceScale; /* 92 4 */
	bool m_bUsesIndexedBakedLighting; /* 96 1 */
	int m_nBakeLightIndex; /* 100 4 */
	float m_flBakeLightIndexScale; /* 104 4 */
	int m_nFogLightingMode; /* 108 4 */
	bool m_bRenderDiffuse; /* 112 1 */
	bool m_bRenderSpecular; /* 113 1 */
	bool m_bRenderTransmissive; /* 114 1 */
	int m_nPriority; /* 116 4 */
	LightSourceShape_t m_Shape; /* 120 4 */
	float m_flLightSourceDim0; /* 124 4 */
	float m_flLightSourceDim1; /* 128 4 */
	float m_flLightSourceSize0; /* 132 4 */
	float m_flLightSourceSize1; /* 136 4 */
	float m_flPrecomputedMaxRange; /* 140 4 */
	float m_flFogContributionStength; /* 144 4 */
	float m_flNearClipPlane; /* 148 4 */
	Vector m_Position; /* 152 12 */
	Vector m_Direction; /* 164 12 */
	Vector m_vecUp; /* 176 12 */
	float m_ThetaDot; /* 188 4 */
	float m_PhiDot; /* 192 4 */
	float m_TanPhi; /* 196 4 */
	float m_OneOverThetaDotMinusPhiDot; /* 200 4 */
	float m_Truncation; /* 204 4 */
	uint m_Flags; /* 208 4 */
	int32 m_nEnvProbeId; /* 212 4 */
	Vector m_vMinBounds; /* 216 12 */
	Vector m_vMaxBounds; /* 228 12 */
	/* ../../public/mathlib/lightdesc.h:149 */
	void RecalculateDerivedValues(LightDesc_t* , float);
	/* ../../public/mathlib/lightdesc.h:150 */
	void RecalculateOneOverThetaDotMinusPhiDot(LightDesc_t* );
	/* ../../public/mathlib/lightdesc.h:152 */
	void LightDesc_t(LightDesc_t* );
	/* ../../public/mathlib/lightdesc.h:160 */
	void LightDesc_t(LightDesc_t* , const Vector& , const Vector& );
	/* ../../public/mathlib/lightdesc.h:166 */
	LightDesc_t& operator=(LightDesc_t* , const LightDesc_t& );
	/* ../../public/mathlib/lightdesc.h:220 */
	void Clear(LightDesc_t* );
	/* ../../public/mathlib/lightdesc.h:274 */
	void LightDesc_t(LightDesc_t* , const Vector& , const Vector& , const Vector& , float, float);
	/* ../../public/mathlib/lightdesc.h:280 */
	void InitPoint(LightDesc_t* , const Vector& , const Vector& );
	/* ../../public/mathlib/lightdesc.h:281 */
	void InitDirectional(LightDesc_t* , const Vector& , const Vector& );
	/* ../../public/mathlib/lightdesc.h:282 */
	void InitSpot(LightDesc_t* , const Vector& , const Vector& , const Vector& , float, float);
	/* ../../public/mathlib/lightdesc.h:284 */
	void InitEnvironmentProbe(LightDesc_t* , const Vector& , float);
	/* ../../public/mathlib/lightdesc.h:287 */
	void ComputeLightAtPoints(const LightDesc_t* , const FourVectors& , const FourVectors* , FourVectors& , ComputeLightAtPointsFlags_t);
	/* ../../public/mathlib/lightdesc.h:291 */
	Vector ComputeLightDirection(const LightDesc_t* , const Vector& );
	/* ../../public/mathlib/lightdesc.h:294 */
	void SetupOldStyleAttenuation(LightDesc_t* , float, float, float);
	/* ../../public/mathlib/lightdesc.h:296 */
	void SetupNewStyleAttenuation(LightDesc_t* , float, float);
	/* ../../public/mathlib/lightdesc.h:301 */
	bool IsDirectionWithinLightCone(const LightDesc_t* , const Vector& );
	/* ../../public/mathlib/lightdesc.h:303 */
	float OneOverThetaDotMinusPhiDot(const LightDesc_t* );
	/* ../../public/mathlib/lightdesc.h:308 */
	float DistanceAtWhichBrightnessIsLessThan(const LightDesc_t* , float);
	/* ../../public/mathlib/lightdesc.h:310 */
	void SetPointLightSourceShape(LightDesc_t* );
	/* ../../public/mathlib/lightdesc.h:311 */
	void SetSphereLightSourceShape(LightDesc_t* , float);
	/* ../../public/mathlib/lightdesc.h:312 */
	void SetSphereLightSourceShapeForDirectionalLight(LightDesc_t* , float);
	/* ../../public/mathlib/lightdesc.h:315 */
	Vector EstimateEnergy(const LightDesc_t* , bool, float);
	/* ../../public/mathlib/lightdesc.h:318 */
	bool GenerateRay(const LightDesc_t* , Vector& , Vector& , float, float, const Vector& , float);
	/* ../../public/mathlib/lightdesc.h:321 */
	Vector2D GenerateRaySeed(const LightDesc_t* , const Vector& , const Vector& , float);
	/* ../../public/mathlib/lightdesc.h:324 */
	float GenerateRayPdf(const LightDesc_t* , const Vector& , const Vector& , const Vector& , float);
	/* ../../public/mathlib/lightdesc.h:327 */
	Vector ShadowRayEndpoint(const LightDesc_t* , const Vector& , float, float);
	/* ../../public/mathlib/lightdesc.h:329 */
	bool IlluminatesLightGroup(const LightDesc_t* , const CUtlStringToken& );
};

// <058A8A89> ../../public/mathlib/lightdesc.h:76
// member functions: 37
// member variables: 47
// static member variables: 2
// struct size: 240
struct LightDesc_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../../public/mathlib/lightdesc.h:78 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../../public/mathlib/lightdesc.h:78 */
	LightDesc_t* Schema_MarkHelperFn(void);
	/* ../../public/mathlib/lightdesc.h:78 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../../public/mathlib/lightdesc.h:78 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../../public/mathlib/lightdesc.h:78 */
	void Schema_CompileTimeVerificationFunction(LightDesc_t* );
	/* ../../public/mathlib/lightdesc.h:78 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../../public/mathlib/lightdesc.h:78 */
	const char* Schema_StaticClassname(void);
	/* ../../public/mathlib/lightdesc.h:78 */
	const CSchemaClassInfo* Schema_DynamicBinding(const LightDesc_t* );
	static struct datamap_t m_DataMap; /* 0 0 */
	/* ../../public/mathlib/lightdesc.h:81 */
	datamap_t* GetBaseMap(void);
	LightType_t m_Type; /* 0 4 */
	Vector m_Color; /* 4 12 */
	Vector m_BounceColor; /* 16 12 */
	float m_Range; /* 28 4 */
	float m_Falloff; /* 32 4 */
	float m_Attenuation0; /* 36 4 */
	float m_Attenuation1; /* 40 4 */
	float m_Attenuation2; /* 44 4 */
	float m_Theta; /* 48 4 */
	float m_Phi; /* 52 4 */
	HRenderTextureStrongCopyable m_lightCookie; /* 56 8 */
	int m_nLightGroupCount; /* 64 4 */
	CUtlStringToken m_lightGroups[1]; /* 68 4 */
	bool m_bCastShadows; /* 72 1 */
	int m_nShadowWidth; /* 76 4 */
	int m_nShadowHeight; /* 80 4 */
	int m_nShadowCascadeCount; /* 84 4 */
	float m_flShadowCascadeSplitRatio; /* 88 4 */
	float m_flCascadeDistanceScale; /* 92 4 */
	bool m_bUsesIndexedBakedLighting; /* 96 1 */
	int m_nBakeLightIndex; /* 100 4 */
	float m_flBakeLightIndexScale; /* 104 4 */
	int m_nFogLightingMode; /* 108 4 */
	bool m_bRenderDiffuse; /* 112 1 */
	bool m_bRenderSpecular; /* 113 1 */
	bool m_bRenderTransmissive; /* 114 1 */
	int m_nPriority; /* 116 4 */
	LightSourceShape_t m_Shape; /* 120 4 */
	float m_flLightSourceDim0; /* 124 4 */
	float m_flLightSourceDim1; /* 128 4 */
	float m_flLightSourceSize0; /* 132 4 */
	float m_flLightSourceSize1; /* 136 4 */
	float m_flPrecomputedMaxRange; /* 140 4 */
	float m_flFogContributionStength; /* 144 4 */
	float m_flNearClipPlane; /* 148 4 */
	Vector m_Position; /* 152 12 */
	Vector m_Direction; /* 164 12 */
	Vector m_vecUp; /* 176 12 */
	float m_ThetaDot; /* 188 4 */
	float m_PhiDot; /* 192 4 */
	float m_TanPhi; /* 196 4 */
	float m_OneOverThetaDotMinusPhiDot; /* 200 4 */
	float m_Truncation; /* 204 4 */
	uint m_Flags; /* 208 4 */
	int32 m_nEnvProbeId; /* 212 4 */
	Vector m_vMinBounds; /* 216 12 */
	Vector m_vMaxBounds; /* 228 12 */
	/* ../../public/mathlib/lightdesc.h:149 */
	void RecalculateDerivedValues(LightDesc_t* , float);
	/* ../../public/mathlib/lightdesc.h:150 */
	void RecalculateOneOverThetaDotMinusPhiDot(LightDesc_t* );
	/* ../../public/mathlib/lightdesc.h:152 */
	void LightDesc_t(LightDesc_t* );
	/* ../../public/mathlib/lightdesc.h:160 */
	void LightDesc_t(LightDesc_t* , const Vector& , const Vector& );
	/* ../../public/mathlib/lightdesc.h:166 */
	LightDesc_t& operator=(LightDesc_t* , const LightDesc_t& );
	/* ../../public/mathlib/lightdesc.h:220 */
	void Clear(LightDesc_t* );
	/* ../../public/mathlib/lightdesc.h:274 */
	void LightDesc_t(LightDesc_t* , const Vector& , const Vector& , const Vector& , float, float);
	/* ../../public/mathlib/lightdesc.h:280 */
	void InitPoint(LightDesc_t* , const Vector& , const Vector& );
	/* ../../public/mathlib/lightdesc.h:281 */
	void InitDirectional(LightDesc_t* , const Vector& , const Vector& );
	/* ../../public/mathlib/lightdesc.h:282 */
	void InitSpot(LightDesc_t* , const Vector& , const Vector& , const Vector& , float, float);
	/* ../../public/mathlib/lightdesc.h:284 */
	void InitEnvironmentProbe(LightDesc_t* , const Vector& , float);
	/* ../../public/mathlib/lightdesc.h:287 */
	void ComputeLightAtPoints(const LightDesc_t* , const FourVectors& , const FourVectors* , FourVectors& , ComputeLightAtPointsFlags_t);
	/* ../../public/mathlib/lightdesc.h:291 */
	Vector ComputeLightDirection(const LightDesc_t* , const Vector& );
	/* ../../public/mathlib/lightdesc.h:294 */
	void SetupOldStyleAttenuation(LightDesc_t* , float, float, float);
	/* ../../public/mathlib/lightdesc.h:296 */
	void SetupNewStyleAttenuation(LightDesc_t* , float, float);
	/* ../../public/mathlib/lightdesc.h:301 */
	bool IsDirectionWithinLightCone(const LightDesc_t* , const Vector& );
	/* ../../public/mathlib/lightdesc.h:303 */
	float OneOverThetaDotMinusPhiDot(const LightDesc_t* );
	/* ../../public/mathlib/lightdesc.h:308 */
	float DistanceAtWhichBrightnessIsLessThan(const LightDesc_t* , float);
	/* ../../public/mathlib/lightdesc.h:310 */
	void SetPointLightSourceShape(LightDesc_t* );
	/* ../../public/mathlib/lightdesc.h:311 */
	void SetSphereLightSourceShape(LightDesc_t* , float);
	/* ../../public/mathlib/lightdesc.h:312 */
	void SetSphereLightSourceShapeForDirectionalLight(LightDesc_t* , float);
	/* ../../public/mathlib/lightdesc.h:315 */
	Vector EstimateEnergy(const LightDesc_t* , bool, float);
	/* ../../public/mathlib/lightdesc.h:318 */
	bool GenerateRay(const LightDesc_t* , Vector& , Vector& , float, float, const Vector& , float);
	/* ../../public/mathlib/lightdesc.h:321 */
	Vector2D GenerateRaySeed(const LightDesc_t* , const Vector& , const Vector& , float);
	/* ../../public/mathlib/lightdesc.h:324 */
	float GenerateRayPdf(const LightDesc_t* , const Vector& , const Vector& , const Vector& , float);
	/* ../../public/mathlib/lightdesc.h:327 */
	Vector ShadowRayEndpoint(const LightDesc_t* , const Vector& , float, float);
	/* ../../public/mathlib/lightdesc.h:329 */
	bool IlluminatesLightGroup(const LightDesc_t* , const CUtlStringToken& );
	void ~LightDesc_t(LightDesc_t* );
};

// <0590A396> ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/lightdesc.h:76
// member functions: 37
// member variables: 47
// static member variables: 2
// struct size: 240
struct LightDesc_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/lightdesc.h:78 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/lightdesc.h:78 */
	LightDesc_t* Schema_MarkHelperFn(void);
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/lightdesc.h:78 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/lightdesc.h:78 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/lightdesc.h:78 */
	void Schema_CompileTimeVerificationFunction(LightDesc_t* );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/lightdesc.h:78 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/lightdesc.h:78 */
	const char* Schema_StaticClassname(void);
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/lightdesc.h:78 */
	const CSchemaClassInfo* Schema_DynamicBinding(const LightDesc_t* );
	static struct datamap_t m_DataMap; /* 0 0 */
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/lightdesc.h:81 */
	datamap_t* GetBaseMap(void);
	LightType_t m_Type; /* 0 4 */
	Vector m_Color; /* 4 12 */
	Vector m_BounceColor; /* 16 12 */
	float m_Range; /* 28 4 */
	float m_Falloff; /* 32 4 */
	float m_Attenuation0; /* 36 4 */
	float m_Attenuation1; /* 40 4 */
	float m_Attenuation2; /* 44 4 */
	float m_Theta; /* 48 4 */
	float m_Phi; /* 52 4 */
	HRenderTextureStrongCopyable m_lightCookie; /* 56 8 */
	int m_nLightGroupCount; /* 64 4 */
	CUtlStringToken m_lightGroups[1]; /* 68 4 */
	bool m_bCastShadows; /* 72 1 */
	int m_nShadowWidth; /* 76 4 */
	int m_nShadowHeight; /* 80 4 */
	int m_nShadowCascadeCount; /* 84 4 */
	float m_flShadowCascadeSplitRatio; /* 88 4 */
	float m_flCascadeDistanceScale; /* 92 4 */
	bool m_bUsesIndexedBakedLighting; /* 96 1 */
	int m_nBakeLightIndex; /* 100 4 */
	float m_flBakeLightIndexScale; /* 104 4 */
	int m_nFogLightingMode; /* 108 4 */
	bool m_bRenderDiffuse; /* 112 1 */
	bool m_bRenderSpecular; /* 113 1 */
	bool m_bRenderTransmissive; /* 114 1 */
	int m_nPriority; /* 116 4 */
	LightSourceShape_t m_Shape; /* 120 4 */
	float m_flLightSourceDim0; /* 124 4 */
	float m_flLightSourceDim1; /* 128 4 */
	float m_flLightSourceSize0; /* 132 4 */
	float m_flLightSourceSize1; /* 136 4 */
	float m_flPrecomputedMaxRange; /* 140 4 */
	float m_flFogContributionStength; /* 144 4 */
	float m_flNearClipPlane; /* 148 4 */
	Vector m_Position; /* 152 12 */
	Vector m_Direction; /* 164 12 */
	Vector m_vecUp; /* 176 12 */
	float m_ThetaDot; /* 188 4 */
	float m_PhiDot; /* 192 4 */
	float m_TanPhi; /* 196 4 */
	float m_OneOverThetaDotMinusPhiDot; /* 200 4 */
	float m_Truncation; /* 204 4 */
	uint m_Flags; /* 208 4 */
	int32 m_nEnvProbeId; /* 212 4 */
	Vector m_vMinBounds; /* 216 12 */
	Vector m_vMaxBounds; /* 228 12 */
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/lightdesc.h:149 */
	void RecalculateDerivedValues(LightDesc_t* , float);
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/lightdesc.h:150 */
	void RecalculateOneOverThetaDotMinusPhiDot(LightDesc_t* );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/lightdesc.h:152 */
	void LightDesc_t(LightDesc_t* );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/lightdesc.h:160 */
	void LightDesc_t(LightDesc_t* , const Vector& , const Vector& );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/lightdesc.h:166 */
	LightDesc_t& operator=(LightDesc_t* , const LightDesc_t& );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/lightdesc.h:220 */
	void Clear(LightDesc_t* );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/lightdesc.h:274 */
	void LightDesc_t(LightDesc_t* , const Vector& , const Vector& , const Vector& , float, float);
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/lightdesc.h:280 */
	void InitPoint(LightDesc_t* , const Vector& , const Vector& );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/lightdesc.h:281 */
	void InitDirectional(LightDesc_t* , const Vector& , const Vector& );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/lightdesc.h:282 */
	void InitSpot(LightDesc_t* , const Vector& , const Vector& , const Vector& , float, float);
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/lightdesc.h:284 */
	void InitEnvironmentProbe(LightDesc_t* , const Vector& , float);
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/lightdesc.h:287 */
	void ComputeLightAtPoints(const LightDesc_t* , const FourVectors& , const FourVectors* , FourVectors& , ComputeLightAtPointsFlags_t);
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/lightdesc.h:291 */
	Vector ComputeLightDirection(const LightDesc_t* , const Vector& );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/lightdesc.h:294 */
	void SetupOldStyleAttenuation(LightDesc_t* , float, float, float);
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/lightdesc.h:296 */
	void SetupNewStyleAttenuation(LightDesc_t* , float, float);
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/lightdesc.h:301 */
	bool IsDirectionWithinLightCone(const LightDesc_t* , const Vector& );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/lightdesc.h:303 */
	float OneOverThetaDotMinusPhiDot(const LightDesc_t* );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/lightdesc.h:308 */
	float DistanceAtWhichBrightnessIsLessThan(const LightDesc_t* , float);
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/lightdesc.h:310 */
	void SetPointLightSourceShape(LightDesc_t* );
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/lightdesc.h:311 */
	void SetSphereLightSourceShape(LightDesc_t* , float);
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/lightdesc.h:312 */
	void SetSphereLightSourceShapeForDirectionalLight(LightDesc_t* , float);
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/lightdesc.h:315 */
	Vector EstimateEnergy(const LightDesc_t* , bool, float);
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/lightdesc.h:318 */
	bool GenerateRay(const LightDesc_t* , Vector& , Vector& , float, float, const Vector& , float);
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/lightdesc.h:321 */
	Vector2D GenerateRaySeed(const LightDesc_t* , const Vector& , const Vector& , float);
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/lightdesc.h:324 */
	float GenerateRayPdf(const LightDesc_t* , const Vector& , const Vector& , const Vector& , float);
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/lightdesc.h:327 */
	Vector ShadowRayEndpoint(const LightDesc_t* , const Vector& , float, float);
	/* ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/lightdesc.h:329 */
	bool IlluminatesLightGroup(const LightDesc_t* , const CUtlStringToken& );
	void ~LightDesc_t(LightDesc_t* );
};

// <06221F63> ../public/mathlib/lightdesc.h:76
// member functions: 38
// member variables: 47
// static member variables: 2
// struct size: 240
struct LightDesc_t {
private:
	static class CSchemaClassInfo * s_pSchemaBindingForLocalModule; /* 0 0 */
	/* ../public/mathlib/lightdesc.h:78 */
	const CSchemaClassInfo* GetPrimaryBinding(void);
	/* ../public/mathlib/lightdesc.h:78 */
	LightDesc_t* Schema_MarkHelperFn(void);
	/* ../public/mathlib/lightdesc.h:78 */
	void* Schema_ClassOps(SchemaGenClassOp_t, void* , void* );
	/* ../public/mathlib/lightdesc.h:78 */
	void Schema_VerifyBindingIsRegistered(void);
	/* ../public/mathlib/lightdesc.h:78 */
	void Schema_CompileTimeVerificationFunction(LightDesc_t* );
	/* ../public/mathlib/lightdesc.h:78 */
	const CSchemaClassInfo* Schema_StaticBinding(void);
	/* ../public/mathlib/lightdesc.h:78 */
	const char* Schema_StaticClassname(void);
	/* ../public/mathlib/lightdesc.h:78 */
	const CSchemaClassInfo* Schema_DynamicBinding(const LightDesc_t* );
	static struct datamap_t m_DataMap; /* 0 0 */
	/* ../public/mathlib/lightdesc.h:81 */
	datamap_t* GetBaseMap(void);
	LightType_t m_Type; /* 0 4 */
	Vector m_Color; /* 4 12 */
	Vector m_BounceColor; /* 16 12 */
	float m_Range; /* 28 4 */
	float m_Falloff; /* 32 4 */
	float m_Attenuation0; /* 36 4 */
	float m_Attenuation1; /* 40 4 */
	float m_Attenuation2; /* 44 4 */
	float m_Theta; /* 48 4 */
	float m_Phi; /* 52 4 */
	HRenderTextureStrongCopyable m_lightCookie; /* 56 8 */
	int m_nLightGroupCount; /* 64 4 */
	CUtlStringToken m_lightGroups[1]; /* 68 4 */
	bool m_bCastShadows; /* 72 1 */
	int m_nShadowWidth; /* 76 4 */
	int m_nShadowHeight; /* 80 4 */
	int m_nShadowCascadeCount; /* 84 4 */
	float m_flShadowCascadeSplitRatio; /* 88 4 */
	float m_flCascadeDistanceScale; /* 92 4 */
	bool m_bUsesIndexedBakedLighting; /* 96 1 */
	int m_nBakeLightIndex; /* 100 4 */
	float m_flBakeLightIndexScale; /* 104 4 */
	int m_nFogLightingMode; /* 108 4 */
	bool m_bRenderDiffuse; /* 112 1 */
	bool m_bRenderSpecular; /* 113 1 */
	bool m_bRenderTransmissive; /* 114 1 */
	int m_nPriority; /* 116 4 */
	LightSourceShape_t m_Shape; /* 120 4 */
	float m_flLightSourceDim0; /* 124 4 */
	float m_flLightSourceDim1; /* 128 4 */
	float m_flLightSourceSize0; /* 132 4 */
	float m_flLightSourceSize1; /* 136 4 */
	float m_flPrecomputedMaxRange; /* 140 4 */
	float m_flFogContributionStength; /* 144 4 */
	float m_flNearClipPlane; /* 148 4 */
	Vector m_Position; /* 152 12 */
	Vector m_Direction; /* 164 12 */
	Vector m_vecUp; /* 176 12 */
	float m_ThetaDot; /* 188 4 */
	float m_PhiDot; /* 192 4 */
	float m_TanPhi; /* 196 4 */
	float m_OneOverThetaDotMinusPhiDot; /* 200 4 */
	float m_Truncation; /* 204 4 */
	uint m_Flags; /* 208 4 */
	int32 m_nEnvProbeId; /* 212 4 */
	Vector m_vMinBounds; /* 216 12 */
	Vector m_vMaxBounds; /* 228 12 */
	/* ../public/mathlib/lightdesc.h:149 */
	void RecalculateDerivedValues(LightDesc_t* , float);
	/* ../public/mathlib/lightdesc.h:150 */
	void RecalculateOneOverThetaDotMinusPhiDot(LightDesc_t* );
	/* ../public/mathlib/lightdesc.h:152 */
	void LightDesc_t(LightDesc_t* );
	/* ../public/mathlib/lightdesc.h:160 */
	void LightDesc_t(LightDesc_t* , const Vector& , const Vector& );
	/* ../public/mathlib/lightdesc.h:166 */
	LightDesc_t& operator=(LightDesc_t* , const LightDesc_t& );
	/* ../public/mathlib/lightdesc.h:220 */
	void Clear(LightDesc_t* );
	/* ../public/mathlib/lightdesc.h:274 */
	void LightDesc_t(LightDesc_t* , const Vector& , const Vector& , const Vector& , float, float);
	/* ../public/mathlib/lightdesc.h:280 */
	void InitPoint(LightDesc_t* , const Vector& , const Vector& );
	/* ../public/mathlib/lightdesc.h:281 */
	void InitDirectional(LightDesc_t* , const Vector& , const Vector& );
	/* ../public/mathlib/lightdesc.h:282 */
	void InitSpot(LightDesc_t* , const Vector& , const Vector& , const Vector& , float, float);
	/* ../public/mathlib/lightdesc.h:284 */
	void InitEnvironmentProbe(LightDesc_t* , const Vector& , float);
	/* ../public/mathlib/lightdesc.h:287 */
	void ComputeLightAtPoints(const LightDesc_t* , const FourVectors& , const FourVectors* , FourVectors& , ComputeLightAtPointsFlags_t);
	/* ../public/mathlib/lightdesc.h:291 */
	Vector ComputeLightDirection(const LightDesc_t* , const Vector& );
	/* ../public/mathlib/lightdesc.h:294 */
	void SetupOldStyleAttenuation(LightDesc_t* , float, float, float);
	/* ../public/mathlib/lightdesc.h:296 */
	void SetupNewStyleAttenuation(LightDesc_t* , float, float);
	/* ../public/mathlib/lightdesc.h:301 */
	bool IsDirectionWithinLightCone(const LightDesc_t* , const Vector& );
	/* ../public/mathlib/lightdesc.h:303 */
	float OneOverThetaDotMinusPhiDot(const LightDesc_t* );
	/* ../public/mathlib/lightdesc.h:308 */
	float DistanceAtWhichBrightnessIsLessThan(const LightDesc_t* , float);
	/* ../public/mathlib/lightdesc.h:310 */
	void SetPointLightSourceShape(LightDesc_t* );
	/* ../public/mathlib/lightdesc.h:311 */
	void SetSphereLightSourceShape(LightDesc_t* , float);
	/* ../public/mathlib/lightdesc.h:312 */
	void SetSphereLightSourceShapeForDirectionalLight(LightDesc_t* , float);
	/* ../public/mathlib/lightdesc.h:315 */
	Vector EstimateEnergy(const LightDesc_t* , bool, float);
	/* ../public/mathlib/lightdesc.h:318 */
	bool GenerateRay(const LightDesc_t* , Vector& , Vector& , float, float, const Vector& , float);
	/* ../public/mathlib/lightdesc.h:321 */
	Vector2D GenerateRaySeed(const LightDesc_t* , const Vector& , const Vector& , float);
	/* ../public/mathlib/lightdesc.h:324 */
	float GenerateRayPdf(const LightDesc_t* , const Vector& , const Vector& , const Vector& , float);
	/* ../public/mathlib/lightdesc.h:327 */
	Vector ShadowRayEndpoint(const LightDesc_t* , const Vector& , float, float);
	/* ../public/mathlib/lightdesc.h:329 */
	bool IlluminatesLightGroup(const LightDesc_t* , const CUtlStringToken& );
	void LightDesc_t(LightDesc_t* , const LightDesc_t& );
	void ~LightDesc_t(LightDesc_t* );
};

// <0590C020> ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/lightdesc.h:78
inline void GetPrimaryBinding(void)
{
} /* size: 0 */

// <0590C01A> ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/lightdesc.h:78
inline void Schema_StaticClassname(void)
{
} /* size: 0 */

// <0590C001> ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/lightdesc.h:78
inline void LightDesc_t::Schema_DynamicBinding()
{
} /* size: 0 */

// <0590BFB7> ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/lightdesc.h:152
void LightDesc_t::LightDesc_t()
{
} /* size: 0 */

// <0590BF9E> ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/lightdesc.h:152
inline void LightDesc_t::LightDesc_t()
{
} /* size: 0 */

// <06352B30> ../public/mathlib/lightdesc.h:160
void LightDesc_t::LightDesc_t(const Vector& pos, const Vector& color)
{
} /* size: 0 */

// <06352AFF> ../public/mathlib/lightdesc.h:160
inline void LightDesc_t::LightDesc_t(const Vector& pos, const Vector& color)
{
} /* size: 0 */

// <0590BF79> ../../_generated_code/mathlib_extended/linuxsteamrt64/release/../../../../public/mathlib/lightdesc.h:166
inline void LightDesc_t::operator=(const LightDesc_t& other)
{
} /* size: 0 */

// <030765C0> ../public/mathlib/lightdesc.h:166
// function calls: 13
void LightDesc_t::operator=(const LightDesc_t& other)
{
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 570
	CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
		ResourceHandleTyped_t hResource);  // 659
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(
			ResourceHandleTyped_t hResource);  // 244
	CStrongHandle<InfoForResourceTypeCTextureBase>::operator CStrongHandle<InfoForResourceTypeCTextureBase>::ResourceHandleTyped_t(); // 244
	CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::operator=(
			const CStrongHandleCopyable<InfoForResourceTypeCTextureBase>& src);  // 178
	Vector::operator=(
			const Vector& vOther);  // 169
	Vector::operator=(
			const Vector& vOther);  // 170
	Vector::operator=(
			const Vector& vOther);  // 202
	Vector::operator=(
			const Vector& vOther);  // 203
	Vector::operator=(
			const Vector& vOther);  // 204
	Vector::operator=(
			const Vector& vOther);  // 214
	Vector::operator=(
			const Vector& vOther);  // 215
} /* size: 918, inline expansions: 13 (607 bytes) */

// <06352AE6> ../public/mathlib/lightdesc.h:220
inline void LightDesc_t::Clear()
{
} /* size: 0 */

// <06352AB0> ../public/mathlib/lightdesc.h:336
inline void LightDesc_t::InitPoint(const Vector& pos, const Vector& color)
{
} /* size: 0 */

// <013512FD> ../public/mathlib/lightdesc.h:353
inline void LightDesc_t::InitDirectional(const Vector& dir, const Vector& color)
{
} /* size: 0 */

// <013512A0> ../public/mathlib/lightdesc.h:371
inline void LightDesc_t::InitSpot(const Vector& pos, const Vector& color, const Vector& point_at, float inner_cone_boundary, float outer_cone_boundary)
{
} /* size: 0 */

// <030749E2> ../public/mathlib/lightdesc.h:394
inline void LightDesc_t::InitEnvironmentProbe(const Vector& pos, float flInfluenceRadius)
{
} /* size: 0 */

