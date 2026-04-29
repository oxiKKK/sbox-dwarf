
//
// scenesystem/scenelpvdebuggrid.cpp
//
//	referenced by: libengine2.so
//
//	functions: 12
//

// <03934942> ../scenesystem/scenelpvdebuggrid.cpp:31
// variables: 2
// function call: 1
ResourceManifestDesc_t* InitManifestDesc<LPVGridManifestGroup::CTemplateArg>(CTemplateArg& def)
{
	ResourceManifestDesc_t s_Manifest; // 31
	ManifestEntryGroupList_t s_pManifestEntries; // 31
	ResourceManifestEntry_t::ResourceManifestEntry_t(
				const char* pResourceName,
				bool bResourceNameIsManifestName,
				CStrongHandleVoid* pHandle);  // 33
} /* size: 162, variables: 2, inline expansions: 1 (42 bytes) */

// <0393483D> ../scenesystem/scenelpvdebuggrid.cpp:36
// variables: 2
// function call: 1
ResourceManifestDesc_t* InitManifestDesc<LPVGridManifest::CTemplateArg>(CTemplateArg& def)
{
	ResourceManifestDesc_t s_Manifest; // 36
	ManifestEntryGroupList_t s_pManifestEntries; // 36
	ResourceManifestEntry_t::ResourceManifestEntry_t(
				const char* pResourceName,
				bool bResourceNameIsManifestName,
				CStrongHandleVoid* pHandle);  // 38
} /* size: 170, variables: 2, inline expansions: 1 (50 bytes) */

// <039347CE> ../scenesystem/scenelpvdebuggrid.cpp:40
// variables: 3
void GenerateBoxVertices(const Vector& vOrigin, const QAngle& angles, const Vector& vMins, const Vector& vMaxs, Vector* pVerts)
{
	matrix3x4_t fRotateMatrix; // 42
	Vector vecPos; // 45
	{
		int i; // 46
	}
} /* size: 0, variables: 2 */

// <03934406> ../scenesystem/scenelpvdebuggrid.cpp:57
// function calls: 16
void CSceneLPVDebugGridObject::CSceneLPVDebugGridObject()
{
	IGenericInterface::IGenericInterface(); // 1428
	{
	}
	AlignedByteArrayExplicit_t<3, unsigned int, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<3, unsigned int>::AlignedByteArray_t(); // 228
	CUtlMemory<unsigned int, int>::CUtlMemory(
			unsigned int* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<unsigned int, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::CUtlMemoryFixedGrowable_Base(
					unsigned int* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<3, unsigned int, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<unsigned int, 3, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<unsigned int, 3>::CUtlVectorFixedGrowable(
				int growSize);  // 1428
	matrix3x4_t::matrix3x4_t(); // 303
	matrix3x4a_t::matrix3x4a_t(); // 1428
	CUtlStringToken::CUtlStringToken(); // 1428
	CManagedHandle::CManagedHandle(); // 1428
	CSceneObject::CSceneObject(); // 57
} /* size: 0, inline expansions: 16 (0 bytes) */

// <039343ED> ../scenesystem/scenelpvdebuggrid.cpp:57
void CSceneLPVDebugGridObject::CSceneLPVDebugGridObject()
{
} /* size: 0 */

// <03934018> ../scenesystem/scenelpvdebuggrid.cpp:66
// function calls: 19
void CSceneLPVDebugGridObject::~CSceneLPVDebugGridObject()
{
	CManagedHandle::~CManagedHandle(); // 1436
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 577
	CUtlMemory<unsigned int, int>::ConvertToExternalMemory(
				unsigned int* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::Purge_FixedGrowable(
				unsigned int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::Purge_FixedGrowable(
				unsigned int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<3, unsigned int, 4>::Base(); // 237
	CUtlMemoryFixedGrowable<unsigned int, 3, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<unsigned int, 3, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<unsigned int, 3>::~CUtlVectorFixedGrowable(); // 1436
	CSceneObject::~CSceneObject(); // 77
} /* size: 233, inline expansions: 19 (629 bytes) */

// <03933BCA> ../scenesystem/scenelpvdebuggrid.cpp:66
// function calls: 21
void CSceneLPVDebugGridObject::~CSceneLPVDebugGridObject()
{
	CManagedHandle::~CManagedHandle(); // 1436
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 577
	CUtlMemory<unsigned int, int>::ConvertToExternalMemory(
				unsigned int* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::Purge_FixedGrowable(
				unsigned int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::Purge_FixedGrowable(
				unsigned int* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<3, unsigned int, 4>::Base(); // 237
	CUtlMemoryFixedGrowable<unsigned int, 3, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<unsigned int, 3, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<unsigned int, 3>::~CUtlVectorFixedGrowable(); // 1436
	IGenericInterface::~IGenericInterface(); // 1436
	CSceneObject::~CSceneObject(); // 77
	CSceneLPVDebugGridObject::~CSceneLPVDebugGridObject(); // 77
} /* size: 241, inline expansions: 21 (876 bytes) */

// <03933BB1> ../scenesystem/scenelpvdebuggrid.cpp:66
void CSceneLPVDebugGridObject::~CSceneLPVDebugGridObject()
{
} /* size: 0 */

// <0394053D> ../scenesystem/scenelpvdebuggrid.cpp:79
// function calls: 3
void CSceneLPVDebugGridObject::NeedsVertexBuffer()
{
	ConVar::GetInt(); // 84
	ConVar::GetFloat(); // 87
	CSceneLPVDebugGridObject::NeedsVertexBuffer(); // 79
} /* size: 0, inline expansions: 3 (0 bytes) */

// <03933B98> ../scenesystem/scenelpvdebuggrid.cpp:79
void CSceneLPVDebugGridObject::NeedsVertexBuffer()
{
} /* size: 0 */

// <03933560> ../scenesystem/scenelpvdebuggrid.cpp:93
// variable: 1
// function calls: 25
void CSceneLPVDebugGridObjectDesc::Create()
{
	CSceneLPVDebugGridObject* pNew; // 95
	IGenericInterface::IGenericInterface(); // 1428
	{
	}
	AlignedByteArrayExplicit_t<3, unsigned int, 4>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<3, unsigned int>::AlignedByteArray_t(); // 228
	CUtlMemory<unsigned int, int>::CUtlMemory(
			unsigned int* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<unsigned int, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<unsigned int, int>::CUtlMemoryFixedGrowable_Base(
					unsigned int* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<3, unsigned int, 4>::Base(); // 231
	CUtlMemoryFixedGrowable<unsigned int, 3, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemoryFixedGrowable<unsigned int, 3, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<unsigned int, 3>::CUtlVectorFixedGrowable(
				int growSize);  // 1428
	matrix3x4_t::matrix3x4_t(); // 303
	matrix3x4a_t::matrix3x4a_t(); // 1428
	CUtlStringToken::CUtlStringToken(); // 1428
	CManagedHandle::CManagedHandle(); // 1428
	CSceneObject::CSceneObject(); // 57
	CSceneLPVDebugGridObject::CSceneLPVDebugGridObject(); // 95
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1940
	CSceneObject::SetFlags(
		ESceneObjectFlags nFlagsToOR);  // 97
	CSceneObject::SetBatchable(
			bool bIsBatchable);  // 98
	CSceneObject::MirrorFlags(); // 1901
	CSceneObject::SetRenderableFlagsAndMirrorIfChanged(
						ESceneObjectFlags flags);  // 1940
	CSceneObject::SetFlags(
		ESceneObjectFlags nFlagsToOR);  // 1966
	CSceneObject::SetLoaded(); // 100
} /* size: 378, variables: 1, inline expansions: 25 (893 bytes) */

// <0392C924> ../scenesystem/scenelpvdebuggrid.cpp:105
// variables: 90
// function calls: 436
void CSceneLPVDebugGridObjectDesc::DrawArray(IRenderContext* pCtx, CMeshDrawPrimitive_t* pRenderList, int nNumRenderablesToDraw, const ISceneView* pView, ISceneLayer* pLayer, SceneSystemPerFrameStats_t& perFrameStats)
{
	CSceneLPVDebugGridObject* pObj; // 107
	bool bUseBalls; // 124
	float flSampleSize; // 125
	const IMaterial2* pMaterial; // 127
	const IMaterialMode* pMode; // 132
	const CSceneView* pSceneView; // 138
	CLightBinner2* pLightBinner; // 139
	Vector vCameraOrigin; // 141
	LightProbeVolumeBinding_t closestBinding; // 142
	int* pIndex; // 147
	LightProbeVolumeData_t& lpvData; // 153
	Vector vLightProbeOrigin; // 154
	CRenderAttributes renderAttributes; // 287
	Color albedo; // 295
	{
		int nDebugTextureIndex; // 158
		Color debugColor; // 159
		matrix3x4_t::matrix3x4_t(); // 753
		Vector::LargestComponentValue(); // 755
		MatrixPosition(const matrix3x4_t& matrix,
				Vector& position);  // 757
		MatrixQuaternion(const matrix3x4_t& mat,
				Quaternion& q,
				Vector& o,
				float& flScale);  // 398
		Vector::Vector(); // 395
		Quaternion::Quaternion(); // 396
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::Vector(); // 1450
		Vector::operator*(
				float fl);  // 399
		VertexColor_t::VertexColor_t(
				uint8 ir,
				uint8 ig,
				uint8 ib,
				uint8 ia);  // 399
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 399
		ISceneViewDebugOverlays::BoxAngles(
				const matrix3x4_t& mBoxToWorld,
				const Vector& vLocalMins,
				const Vector& vLocalMaxs,
				int r,
				int g,
				int b,
				int a,
				bool bNoDepthTest,
				float64 flTimeToLive);  // 160
	}
	{
		CMemoryVertexData<VertexUVPosColorNormalAndTangent_t> triVB; // 175
		const CTextureDesc* pDesc; // 177
		Vector vVoxelSize; // 179
		const matrix3x4_t& xform; // 184
		Vector vMins; // 185
		Vector vMaxs; // 186
		Vector p; // 188
		Vector vecTangentsU; // 191
		Vector vecTangentsV; // 198
		Vector vecNormal; // 205
		Vector vecTangentU; // 206
		Vector vecTangentV; // 207
		BufferDesc_t vertexDesc; // 267
		CVertexData<VertexUVPosColorNormalAndTangent_t> vb; // 274
		{
			float z; // 209
			{
				float y; // 211
				{
					float x; // 213
					{
						Vector origin; // 215
						int i; // 217
						{
							const int* ppFaceIndices; // 218
							const int& __for_range; // 52056
							const int* __for_begin; // 52078
							const int* __for_end; // 52078
							{
								int j; // 232
								{
									int i0; // 234
									int i1; // 235
									int i2; // 236
									Vector::Vector(); // 1436
									VectorAdd(const Vector& a,
											const Vector& b,
											Vector& c);  // 1437
									Vector::operator+(
											const Vector& v);  // 238
									VertexUVPos_t::SetUV0(
										float flU,
										float flV);  // 239
									Vector::operator=(
											const Vector& vOther);  // 579
									VertexUVPosColorNormalAndTangent_t::Normal(
										const Vector& vecNormal);  // 240
									CUtlMemory<VertexUVPosColorNormalAndTangent_t, int>::operator[](
											int i);  // 602
									CUtlVectorBase<VertexUVPosColorNormalAndTangent_t, CUtlMemory<VertexUVPosColorNormalAndTangent_t, int> >::Element(
										int i);  // 1201
									Vector2D::Vector2D(
										const Vector2D& vOther);  // 257
									VertexUVPos_t::VertexUVPos_t(
											const VertexUVPos_t  &);  // 372
									VertexColor_t::AsUint32(); // 93
									VertexColor_t::AsUint32Ptr(); // 93
									VertexColor_t::VertexColor_t(
											const VertexColor_t& src);  // 372
									VertexColorUVPos_t::VertexColorUVPos_t(
												const VertexColorUVPos_t  &);  // 572
									Vector4D::Vector4D(
										const Vector4D& vOther);  // 572
									VertexUVPosColorNormalAndTangent_t::VertexUVPosColorNormalAndTangent_t(
														const VertexUVPosColorNormalAndTangent_t  &);  // 1520
									CopyConstruct<VertexUVPosColorNormalAndTangent_t>(VertexUVPosColorNormalAndTangent_t* pMemory,
																const VertexUVPosColorNormalAndTangent_t& src);  // 1201
									CUtlVectorBase<VertexUVPosColorNormalAndTangent_t, CUtlMemory<VertexUVPosColorNormalAndTangent_t, int> >::ResetDbgInfo(); // 824
									CUtlVectorBase<VertexUVPosColorNormalAndTangent_t, CUtlMemory<VertexUVPosColorNormalAndTangent_t, int> >::GrowMemory(
											int num);  // 1198
									CUtlVectorBase<VertexUVPosColorNormalAndTangent_t, CUtlMemory<VertexUVPosColorNormalAndTangent_t, int> >::AddToTail(
											const VertexUVPosColorNormalAndTangent_t& src);  // 33
									CMemoryVertexData<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 242
									Vector::Vector(
										vec_t X,
										vec_t Y,
										vec_t Z);  // 1508
									CrossProduct(const Vector& a,
											const Vector& b);  // 604
									Vector::operator=(
											const Vector& vOther);  // 603
									DotProduct(const Vector& a,
											const Vector& b);  // 604
									VertexUVPosColorNormalAndTangent_t::TangentBasis(
											Vector vecTangentU,
											Vector vecTangentV);  // 241
									Vector::Vector(); // 1436
									VectorAdd(const Vector& a,
											const Vector& b,
											Vector& c);  // 1437
									Vector::operator+(
											const Vector& v);  // 244
									VertexUVPos_t::SetUV0(
										float flU,
										float flV);  // 245
									Vector::operator=(
											const Vector& vOther);  // 579
									VertexUVPosColorNormalAndTangent_t::Normal(
										const Vector& vecNormal);  // 246
									CUtlMemory<VertexUVPosColorNormalAndTangent_t, int>::operator[](
											int i);  // 602
									CUtlVectorBase<VertexUVPosColorNormalAndTangent_t, CUtlMemory<VertexUVPosColorNormalAndTangent_t, int> >::Element(
										int i);  // 1201
									Vector2D::Vector2D(
										const Vector2D& vOther);  // 257
									VertexUVPos_t::VertexUVPos_t(
											const VertexUVPos_t  &);  // 372
									VertexColor_t::AsUint32(); // 93
									VertexColor_t::AsUint32Ptr(); // 93
									VertexColor_t::VertexColor_t(
											const VertexColor_t& src);  // 372
									VertexColorUVPos_t::VertexColorUVPos_t(
												const VertexColorUVPos_t  &);  // 572
									Vector4D::Vector4D(
										const Vector4D& vOther);  // 572
									VertexUVPosColorNormalAndTangent_t::VertexUVPosColorNormalAndTangent_t(
														const VertexUVPosColorNormalAndTangent_t  &);  // 1520
									CopyConstruct<VertexUVPosColorNormalAndTangent_t>(VertexUVPosColorNormalAndTangent_t* pMemory,
																const VertexUVPosColorNormalAndTangent_t& src);  // 1201
									CUtlVectorBase<VertexUVPosColorNormalAndTangent_t, CUtlMemory<VertexUVPosColorNormalAndTangent_t, int> >::ResetDbgInfo(); // 824
									CUtlVectorBase<VertexUVPosColorNormalAndTangent_t, CUtlMemory<VertexUVPosColorNormalAndTangent_t, int> >::GrowMemory(
											int num);  // 1198
									CUtlVectorBase<VertexUVPosColorNormalAndTangent_t, CUtlMemory<VertexUVPosColorNormalAndTangent_t, int> >::AddToTail(
											const VertexUVPosColorNormalAndTangent_t& src);  // 33
									CMemoryVertexData<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 248
									Vector::Vector(
										vec_t X,
										vec_t Y,
										vec_t Z);  // 1508
									CrossProduct(const Vector& a,
											const Vector& b);  // 604
									Vector::operator=(
											const Vector& vOther);  // 603
									DotProduct(const Vector& a,
											const Vector& b);  // 604
									VertexUVPosColorNormalAndTangent_t::TangentBasis(
											Vector vecTangentU,
											Vector vecTangentV);  // 247
									Vector::Vector(); // 1436
									VectorAdd(const Vector& a,
											const Vector& b,
											Vector& c);  // 1437
									Vector::operator+(
											const Vector& v);  // 250
									VertexUVPos_t::SetUV0(
										float flU,
										float flV);  // 251
									Vector::operator=(
											const Vector& vOther);  // 579
									VertexUVPosColorNormalAndTangent_t::Normal(
										const Vector& vecNormal);  // 252
									CUtlMemory<VertexUVPosColorNormalAndTangent_t, int>::operator[](
											int i);  // 602
									CUtlVectorBase<VertexUVPosColorNormalAndTangent_t, CUtlMemory<VertexUVPosColorNormalAndTangent_t, int> >::Element(
										int i);  // 1201
									Vector2D::Vector2D(
										const Vector2D& vOther);  // 257
									VertexUVPos_t::VertexUVPos_t(
											const VertexUVPos_t  &);  // 372
									VertexColor_t::AsUint32(); // 93
									VertexColor_t::AsUint32Ptr(); // 93
									VertexColor_t::VertexColor_t(
											const VertexColor_t& src);  // 372
									VertexColorUVPos_t::VertexColorUVPos_t(
												const VertexColorUVPos_t  &);  // 572
									Vector4D::Vector4D(
										const Vector4D& vOther);  // 572
									VertexUVPosColorNormalAndTangent_t::VertexUVPosColorNormalAndTangent_t(
														const VertexUVPosColorNormalAndTangent_t  &);  // 1520
									CopyConstruct<VertexUVPosColorNormalAndTangent_t>(VertexUVPosColorNormalAndTangent_t* pMemory,
																const VertexUVPosColorNormalAndTangent_t& src);  // 1201
									CUtlVectorBase<VertexUVPosColorNormalAndTangent_t, CUtlMemory<VertexUVPosColorNormalAndTangent_t, int> >::ResetDbgInfo(); // 824
									CUtlVectorBase<VertexUVPosColorNormalAndTangent_t, CUtlMemory<VertexUVPosColorNormalAndTangent_t, int> >::GrowMemory(
											int num);  // 1198
									CUtlVectorBase<VertexUVPosColorNormalAndTangent_t, CUtlMemory<VertexUVPosColorNormalAndTangent_t, int> >::AddToTail(
											const VertexUVPosColorNormalAndTangent_t& src);  // 33
									CMemoryVertexData<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 254
									Vector::Vector(
										vec_t X,
										vec_t Y,
										vec_t Z);  // 1508
									CrossProduct(const Vector& a,
											const Vector& b);  // 604
									Vector::operator=(
											const Vector& vOther);  // 603
									DotProduct(const Vector& a,
											const Vector& b);  // 604
									VertexUVPosColorNormalAndTangent_t::TangentBasis(
											Vector vecTangentU,
											Vector vecTangentV);  // 253
								}
							}
							Vector::Init(
								vec_t ix,
								vec_t iy,
								vec_t iz);  // 220
							Vector::operator=(
									const Vector& vOther);  // 223
							Vector::operator[](
									int i);  // 221
							VectorRotate(const Vector& in1,
									const matrix3x4_t& in2,
									Vector& out);  // 1315
							Vector::Vector(); // 1314
							VectorRotate(const Vector& in1,
									const matrix3x4_t& in2);  // 2742
							matrix3x4_t::RotateVector(
									const Vector& v0);  // 226
							Vector::operator=(
									const Vector& vOther);  // 224
							Vector::Normalized(); // 226
							Vector::operator=(
									const Vector& vOther);  // 226
							VectorRotate(const Vector& in1,
									const matrix3x4_t& in2,
									Vector& out);  // 1315
							Vector::Vector(); // 1314
							VectorRotate(const Vector& in1,
									const matrix3x4_t& in2);  // 2742
							matrix3x4_t::RotateVector(
									const Vector& v0);  // 227
							Vector::Normalized(); // 227
							Vector::operator=(
									const Vector& vOther);  // 227
							VectorRotate(const Vector& in1,
									const matrix3x4_t& in2,
									Vector& out);  // 1315
							Vector::Vector(); // 1314
							VectorRotate(const Vector& in1,
									const matrix3x4_t& in2);  // 2742
							matrix3x4_t::RotateVector(
									const Vector& v0);  // 228
							Vector::Normalized(); // 228
							Vector::operator=(
									const Vector& vOther);  // 228
						}
						Vector::Vector(
							vec_t X,
							vec_t Y,
							vec_t Z);  // 215
						VectorTransform(const Vector& in1,
								const matrix3x4_t& in2,
								Vector& out);  // 1307
						Vector::Vector(); // 1306
						VectorTransform(const Vector& in1,
								const matrix3x4_t& in2);  // 2707
						matrix3x4_t::TransformVector(
								const Vector& v0);  // 215
					}
				}
			}
		}
		{
			int i; // 278
			{
			}
			Vector::operator=(
					const Vector& vOther);  // 103
			VertexPos_t::operator=(
					const VertexPos_t  &);  // 257
			Vector2D::operator=(
					const Vector2D& vOther);  // 257
			VertexUVPos_t::operator=(
					const VertexUVPos_t  &);  // 372
			VertexColor_t::operator=(
					const VertexColor_t& src);  // 372
			VertexColorUVPos_t::operator=(
					const VertexColorUVPos_t  &);  // 572
			Vector::operator=(
					const Vector& vOther);  // 572
			Vector4D::operator=(
					const Vector4D& vOther);  // 572
			VertexUVPosColorNormalAndTangent_t::operator=(
					const VertexUVPosColorNormalAndTangent_t  &);  // 355
			{
			}
			CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 270
			CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::AdvanceVertex(); // 281
			Vector::operator=(
					const Vector& vOther);  // 103
			VertexPos_t::operator=(
					const VertexPos_t  &);  // 257
			Vector2D::operator=(
					const Vector2D& vOther);  // 257
			VertexUVPos_t::operator=(
					const VertexUVPos_t  &);  // 372
			VertexColor_t::AsUint32(); // 203
			VertexColor_t::operator=(
					const VertexColor_t& src);  // 372
			VertexColorUVPos_t::operator=(
					const VertexColorUVPos_t  &);  // 572
			Vector::operator=(
					const Vector& vOther);  // 572
			Vector4D::operator=(
					const Vector4D& vOther);  // 572
			VertexUVPosColorNormalAndTangent_t::operator=(
					const VertexUVPosColorNormalAndTangent_t  &);  // 280
		}
		CUtlMemory<VertexUVPosColorNormalAndTangent_t, int>::ValidateGrowSize(); // 475
		CUtlMemory<VertexUVPosColorNormalAndTangent_t, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<VertexUVPosColorNormalAndTangent_t, CUtlMemory<VertexUVPosColorNormalAndTangent_t, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<VertexUVPosColorNormalAndTangent_t, CUtlMemory<VertexUVPosColorNormalAndTangent_t, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<VertexUVPosColorNormalAndTangent_t, CUtlMemory<VertexUVPosColorNormalAndTangent_t, int> >::CUtlVector(); // 22
		Vector::Vector(); // 103
		VertexPos_t::VertexPos_t(); // 257
		Vector2D::Vector2D(); // 257
		VertexUVPos_t::VertexUVPos_t(); // 372
		VertexColor_t::VertexColor_t(); // 372
		VertexColorUVPos_t::VertexColorUVPos_t(); // 572
		Vector::Vector(); // 572
		Vector4D::Vector4D(); // 572
		VertexUVPosColorNormalAndTangent_t::VertexUVPosColorNormalAndTangent_t(); // 22
		CMemoryVertexData<VertexUVPosColorNormalAndTangent_t>::CMemoryVertexData(); // 175
		CWeakHandle<InfoForResourceTypeCTextureBase>::Init(
			const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 273
		CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeCTextureBase>& src);  // 177
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 179
		QAngle::QAngle(); // 2680
		matrix3x4_t::ToQAngle(); // 189
		{
			int i; // 46
			VectorRotate(const Vector& in1,
					const matrix3x4_t& in2,
					Vector& out);  // 52
			Vector::operator+=(
					const Vector& v);  // 53
		}
		matrix3x4_t::matrix3x4_t(); // 42
		Vector::Vector(); // 45
		GenerateBoxVertices(const Vector& vOrigin,
					const QAngle& angles,
					const Vector& vMins,
					const Vector& vMaxs,
					Vector* pVerts);  // 189
		Vector::Vector(); // 1450
		VectorMultiply(const Vector& a,
				vec_t b,
				Vector& c);  // 1451
		Vector::operator*(
				float fl);  // 185
		Vector::Vector(); // 1436
		VectorAdd(const Vector& a,
				const Vector& b,
				Vector& c);  // 1437
		Vector::operator+(
				const Vector& v);  // 185
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 189
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 189
		Vector::Vector(); // 205
		Vector::Vector(); // 206
		Vector::Vector(); // 207
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 180
		CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::ClearVertexFields(); // 495
		CVertexData<VertexUVPosColorNormalAndTangent_t>::Init(
			IRenderContext* pRenderContext,
			VertexBufferHandle_t hVertexBuffer);  // 436
		Vector::Vector(); // 103
		VertexPos_t::VertexPos_t(); // 257
		Vector2D::Vector2D(); // 257
		VertexUVPos_t::VertexUVPos_t(); // 372
		VertexColor_t::VertexColor_t(); // 372
		VertexColorUVPos_t::VertexColorUVPos_t(); // 572
		Vector::Vector(); // 572
		Vector4D::Vector4D(); // 572
		VertexUVPosColorNormalAndTangent_t::VertexUVPosColorNormalAndTangent_t(); // 165
		CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::ClearVertexFields(); // 171
		CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::CVertexDataBase(); // 433
		CVertexData<VertexUVPosColorNormalAndTangent_t>::CVertexData(
				IRenderContext* pRenderContext,
				VertexBufferHandle_t hVertexBuffer);  // 274
		{
			LockDesc_t desc; // 557
			bool bOk; // 558
		}
		{
		}
		{
		}
		CVertexData<VertexUVPosColorNormalAndTangent_t>::Lock(
			int nMaxVertexCount);  // 276
		{
			LockDesc_t desc; // 588
		}
		{
		}
		CVertexData<VertexUVPosColorNormalAndTangent_t>::Unlock(); // 284
		CVertexData<VertexUVPosColorNormalAndTangent_t>::Release(); // 502
		CVertexData<VertexUVPosColorNormalAndTangent_t>::Release(); // 461
		{
		}
		{
		}
		CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 194
		CVertexDataBase<VertexUVPosColorNormalAndTangent_t>::~CVertexDataBase(); // 462
		CVertexData<VertexUVPosColorNormalAndTangent_t>::~CVertexData(); // 285
		CUtlMemory<VertexUVPosColorNormalAndTangent_t, int>::Purge(); // 903
		CUtlMemory<VertexUVPosColorNormalAndTangent_t, int>::Purge(); // 1799
		CUtlVectorBase<VertexUVPosColorNormalAndTangent_t, CUtlMemory<VertexUVPosColorNormalAndTangent_t, int> >::Purge(); // 560
		ValidateAlignment<VertexUVPosColorNormalAndTangent_t>(void); // 508
		CUtlMemory<VertexUVPosColorNormalAndTangent_t, int>::Purge(); // 510
		CUtlMemory<VertexUVPosColorNormalAndTangent_t, int>::~CUtlMemory(); // 562
		CUtlVectorBase<VertexUVPosColorNormalAndTangent_t, CUtlMemory<VertexUVPosColorNormalAndTangent_t, int> >::~CUtlVectorBase(); // 410
		CUtlVector<VertexUVPosColorNormalAndTangent_t, CUtlMemory<VertexUVPosColorNormalAndTangent_t, int> >::~CUtlVector(); // 22
		CMemoryVertexData<VertexUVPosColorNormalAndTangent_t>::~CMemoryVertexData(); // 285
	}
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 109
	CSceneView::GetRenderAttributes(); // 121
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 121
	{
		int nIndex; // 381
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
				i32x4 i4KMatch);  // 272
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
					int nIdx);  // 275
		CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::FindIndexOfMatch(
				i32x4 n4Key,
				const IntVector4D ** pValueOut);  // 381
	}
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::GetValueOrDefault(
				uint32 k,
				IntVector4D nDefault);  // 393
	CUtlAttributeList<IntVector4D, 8, IntVector4D, 4>::GetValueOrDefault(
				CUtlStringToken nTok,
				IntVector4D nDefault);  // 576
	CRenderAttributes::GetBoolValue(
			CUtlStringToken nTokenID,
			bool bDefaultValue);  // 121
	ConVar::GetInt(); // 124
	ConVar::GetFloat(); // 125
	CStrongHandle<InfoForResourceTypeIMaterial2>::GetData(); // 127
	ISceneLayer::GetShaderMode(); // 132
	CSceneView::GetLightBinner2(); // 139
	Vector::operator=(
			const Vector& vOther);  // 28
	Vector::Vector(); // 27
	Vector::Vector(); // 27
	Vector::operator=(
			const Vector& vOther);  // 29
	AABB_t::AABB_t(
		const Vector& vMins,
		const Vector& vMaxs);  // 142
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 142
	Mix32HashFunctor::operator(
			uint32 n);  // 139
	PointerHashFunctor::operator(
			const void* s);  // 218
	CUtlMemory<CUtlHashtableEntry<CSceneLightProbeVolumeObject::Base(); // 650
	CUtlMemory<CUtlHashtableEntry<CSceneLightProbeVolumeObject::Count(); // 651
	IdealIndex(uint32_if32BitStorage h,
			uint32 m);  // 653
	CUtlHashtableEntry<CSceneLightProbeVolumeObject::IdealIndex(
			uint32 slotmask);  // 656
	CUtlHashtableEntry<CSceneLightProbeVolumeObject::IdealIndex(
			uint32 slotmask);  // 667
	CUtlHashtable<CSceneLightProbeVolumeObject::DoLookup<CSceneLightProbeVolumeObject*>(
						CSceneLightProbeVolumeObject* x,
						unsigned int h,
						handle_t* pPreviousInChain);  // 218
	CUtlHashtable<CSceneLightProbeVolumeObject::Find(
		KeyArg_t k);  // 227
	CUtlMemory<CUtlHashtableEntry<CSceneLightProbeVolumeObject::operator[](
			int i);  // 295
	CUtlHashtable<CSceneLightProbeVolumeObject::Element(
		handle_t idx);  // 227
	CUtlHashtable<CSceneLightProbeVolumeObject::FindGetPtr(
			KeyArg_t k);  // 147
	CUtlMemory<CLightBinner2::LightProbeVolumeData_t, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CLightBinner2::LightProbeVolumeData_t, CUtlMemory<CLightBinner2::LightProbeVolumeData_t, int> >::operator[](
			int i);  // 153
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 161
	matrix3x4_t::GetOrigin(); // 154
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 156
	ConVar::GetInt(); // 84
	ConVar::GetFloat(); // 87
	CSceneLPVDebugGridObject::NeedsVertexBuffer(); // 79
	CSceneLPVDebugGridObject::NeedsVertexBuffer(); // 163
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
	CRenderAttributes::CRenderAttributes(); // 287
	Color::SetColor(
		int _r,
		int _g,
		int _b,
		int _a);  // 50
	Color::Color(
		int _r,
		int _g,
		int _b,
		int _a);  // 514
	ConVar::GetColor(); // 295
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 297
	ConVar::GetFloat(); // 297
	ConVar::GetFloat(); // 298
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 298
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
		CUtlAttributeListChunk<Vector4D, 4, Vector4D>::GetValuePtrFromIndex(
					int nIdx);  // 563
		AddToHead<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t, CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>(OverflowChunk_t *& head,
																OverflowChunk_t* node);  // 960
		CUtlIntrusiveList<CUtlAttributeList<Vector4D, 8, Vector4D, 4>::OverflowChunk_t>::AddToHead(
				OverflowChunk_t* node);  // 560
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
		Vector4D nValue);  // 236
	Vector4D::Vector4D(
		vec_t X,
		vec_t Y,
		vec_t Z,
		vec_t W);  // 236
	CRenderAttributes::SetVectorValue(
			CUtlStringToken nTokenID,
			Vector vValue);  // 299
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 299
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 299
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 300
	CWeakHandle<InfoForResourceTypeCTextureBase>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 693
	IRenderContext::ResetMaterialStateHint(); // 312
} /* size: 0, variables: 14, inline expansions: 144 (6865 bytes) */

