
//
// sbox/managedsceneobject.cpp
//
//	referenced by: libengine2.so
//
//	functions: 3
//

// <01AC4627> sbox/managedsceneobject.cpp:9
// variable: 1
// function calls: 12
void Create(ISceneWorld* pWorld)
{
	CManagedSceneObject* pNew; // 11
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1940
	CSceneObject::SetFlags(
		ESceneObjectFlags nFlagsToOR);  // 13
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1988
	CSceneObject::SetRenderingEnabled(
				bool bEnabled);  // 14
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1940
	CSceneObject::SetFlags(
		ESceneObjectFlags nFlagsToOR);  // 1966
	CSceneObject::SetLoaded(); // 16
	CSceneObject::SetBatchable(
			bool bIsBatchable);  // 15
	CSceneObject::SetBounds(
			const Vector& vecWorldMins,
			const Vector& vecWorldMaxes);  // 17
} /* size: 222, variables: 1, inline expansions: 12 (340 bytes) */

// <01AC3DF1> sbox/managedsceneobject.cpp:23
// variables: 10
// function calls: 23
void CManagedRendererDesc::DrawArray(IRenderContext* pCtx, CMeshDrawPrimitive_t* pRenderList, int nNumRenderablesToDraw, const ISceneView* pView, ISceneLayer* pLayer, SceneSystemPerFrameStats_t& stats)
{
	int nFirstTransformSlotIndex; // 29
	SceneSystemTransformEntry_t* pTransforms; // 30
	RenderMultisampleType_t msaaLevel; // 35
	CUtlStringToken mode; // 37
	{
		int i; // 39
		{
			CManagedSceneObject* obj; // 41
			{
				function<void()> func; // 45
				{
					_M_create<CManagedRendererDesc::DrawArray(IRenderContext*, CMeshDrawPrimitive_t*, int, const ISceneView*, ISceneLayer*, SceneSystemPerFrameStats_t&)::<lambda()> >(union _Any_data& __dest,
																class& __f,
																false_type); // 217
					_M_init_functor<CManagedRendererDesc::DrawArray(IRenderContext*, CMeshDrawPrimitive_t*, int, const ISceneView*, ISceneLayer*, SceneSystemPerFrameStats_t&)::<lambda()> >(union _Any_data& __functor,
																class& __f); // 451
					_M_not_empty_function<CManagedRendererDesc::DrawArray(IRenderContext*, CMeshDrawPrimitive_t*, int, const ISceneView*, ISceneLayer*, SceneSystemPerFrameStats_t&)::<lambda()> >(const &); // 449
				}
				_Function_base::_Function_base(); // 439
				function<void()>::function<CManagedRendererDesc::DrawArray(
																class& __f); // 54
				_Function_base::_Function_base(); // 389
				function<void()>::operator bool()>* this); // 391
				function<void()>::function(
					const function<void()>& __x); // 56
				_Function_base::~_Function_base(); // 336
				function<void()>::~function()>* this); // 56
				_Function_base::~_Function_base(); // 336
				function<void()>::~function()>* this); // 57
			}
			{
				ManagedRenderSetup_t setup; // 60
				CSceneObject::GetAlphaFade(); // 445
				Vector4D::Vector4D(
					vec_t X,
					vec_t Y,
					vec_t Z,
					vec_t W);  // 445
				CSceneObject::GetTintRGBA(); // 62
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 291
				matrix3x4_t::Base(); // 291
				matrix3x4_t::Base(); // 291
				matrix3x4a_t::operator=(
						const matrix3x4_t& src);  // 61
				ManagedRenderSetup_t::ManagedRenderSetup_t(
							IRenderContext* renderContext,
							ISceneView* sceneView,
							ISceneLayer* sceneLayer,
							ImageFormat colorFormat,
							RenderMultisampleType_t msaaLevel,
							SceneSystemPerFrameStats_t* stats);  // 60
			}
		}
	}
} /* size: 1155, variables: 4 */

// <01AC3B4B> sbox/managedsceneobject.cpp:72
// variables: 3
// function calls: 5
void CManagedRendererDesc::DrawDebug(IRenderContext* pCtx, const CMeshDrawPrimitive_t* pPrimitive, const ISceneView* pView, ISceneLayer* pLayer, int nDebugLevel)
{
	const CSceneObject* pObject; // 74
	Vector vMins; // 75
	Vector vMaxs; // 75
	CSceneObject::GetBounds(
			Vector& vecWorldMins,
			Vector& vecWorldMaxes);  // 76
	Vector::Vector(); // 75
	Vector::Vector(); // 75
	VertexColor_t::VertexColor_t(
			uint8 ir,
			uint8 ig,
			uint8 ib,
			uint8 ia);  // 77
	ISceneViewDebugOverlays::Box(
		const Vector& vWorldMins,
		const Vector& vWorldMaxs,
		const VertexColor_t& color,
		bool bNoDepthTest,
		float64 flTimeToLive);  // 77
} /* size: 163, variables: 3, inline expansions: 5 (80 bytes) */

