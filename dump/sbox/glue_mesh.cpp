
//
// sbox/glue_mesh.cpp
//
//	referenced by: libengine2.so
//
//	functions: 31
//

// <01872CA4> sbox/glue_mesh.cpp:14
// variables: 6
// function calls: 14
void CreateRenderMesh(HMaterial material, int nPrimType, const char* pName)
{
	HRenderMesh_InternalStrong hRenderMesh; // 16
	CRenderMesh* pRenderMesh; // 18
	{
		CSceneObjectData* pSceneObject; // 22
		CMaterialDrawDescriptor* pDrawCall; // 23
		Vector vMinBounds; // 27
		Vector vMaxBounds; // 28
		CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
			const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
		CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
				const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 25
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 27
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 28
	}
	CWeakHandle<InfoForResourceTypeCRenderMesh>::GetBinding(); // 476
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 570
	CStrongHandle<InfoForResourceTypeCRenderMesh>::Init(
		ResourceHandleTyped_t hResource);  // 476
	CStrongHandle<InfoForResourceTypeCRenderMesh>::CStrongHandle(
			const CWeakHandle<InfoForResourceTypeCRenderMesh>& src);  // 16
	CWeakHandle<InfoForResourceTypeCRenderMesh>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCRenderMesh>::GetHandle(); // 18
	CInterlockedIntT<int, 4>::operator int(); // 288
	ResourceHandleToNonConstData<InfoForResourceTypeCRenderMesh>(const CWeakHandle<InfoForResourceTypeCRenderMesh>& hResource); // 18
} /* size: 357, variables: 2, inline expansions: 10 (165 bytes) */

// <0186AF61> sbox/glue_mesh.cpp:35
// variables: 60
// function calls: 543
void CreateModel(CAnimationGroupBuilder* pAnim, CPhysBodyDescArray* pBodies, CBuilderMaterialGroupArray* pMaterialGroups, float mass, CUtlStringToken surfaceProp, float* lodSwitchDistance, HRenderMesh_InternalStrong** meshes, int numMeshes, int* lodMasks, MeshGroupMask_t* meshGroupMasks, SboxMeshGroupDesc_t* meshGroups, int numMeshGroups, Vector* ArrayOfvertices, int numVertices, uint32* ArrayOfindices, int numIndices, uint8* ArrayOfMaterials, int* ArrayOfSurfaces, int numSurfaces, SboxSphereDesc_t* spheres, int numSpheres, SboxCapsuleDesc_t* capsules, int numCapsules, SboxBoxDesc_t* boxes, int numBoxes, SboxHullDesc_t* hulls, int numHulls, SboxMeshDesc_t* meshShapes, int numMeshShapes, SboxBoneDesc_t* bones, int numBones, const char* boneNames, int startTraceVertex, int startTraceIndex, int numTraceVertices, int numTraceIndices, MeshGroupMask_t defaultMeshGroupMask)
{
	CModelBuilder modelBuilder; // 61
	CPhysBodyDesc physBodyDesc; // 103
	HModelStrong model; // 247
	{
		int i; // 68
		CUtlMemory<float, int>::operator[](
				int i);  // 588
		CUtlVectorBase<float, CUtlMemory<float, int> >::operator[](
				int i);  // 70
	}
	{
		int i; // 75
		{
			const SboxMeshGroupDesc_t& meshGroup; // 77
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 78
			CUtlString::CUtlString(
					const char* pString,
					int length);  // 78
			CUtlString::~CUtlString(); // 78
		}
	}
	{
		int i; // 82
		{
			CRenderMesh* pRenderMesh; // 84
			CInterlockedIntT<int, 4>::operator int(); // 288
			ResourceHandleToNonConstData<InfoForResourceTypeCRenderMesh>(const CWeakHandle<InfoForResourceTypeCRenderMesh>& hResource); // 84
			CWeakHandle<InfoForResourceTypeCRenderMesh>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
			CStrongHandle<InfoForResourceTypeCRenderMesh>::GetHandle(); // 84
		}
	}
	{
		int i; // 92
		{
			CBuilderMaterialGroup* pMaterialGroup; // 94
			{
				int j; // 96
				CUtlMemory<CBuilderMaterialGroup, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::operator[](
						int i);  // 96
				Count(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMat this); // 96
				CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2 this,
						int i);  // 98
				CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
				CWeakHandle<InfoForResourceTypeIMaterial2>::InitUntypedUnchecked(
							ResourceHandle_t hUntypedResource);  // 227
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
				CStrongHandle<InfoForResourceTypeIMaterial2>::GetHandle(); // 98
			}
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 95
			CUtlMemory<CBuilderMaterialGroup, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::operator[](
					int i);  // 95
		}
		CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::Count(); // 92
	}
	{
		RnCollisionAttr_t rAttributes; // 106
		{
			int i; // 108
			RnSphere_t::RnSphere_t(
					const Vector& vCenter,
					float flRadius);  // 110
		}
		{
			int i; // 113
			Vector::operator=(
					const Vector& vOther);  // 132
			Vector::operator=(
					const Vector& vOther);  // 132
			RnCapsule_t::RnCapsule_t(
					const Vector& vCenter0,
					const Vector& vCenter1,
					float flRadius);  // 115
		}
		{
			int i; // 118
			{
				RnHull_t* pHull; // 120
				_mm_cvtss_f32(__m128 __A); // 1553
				GetWSIMD<>(fltx4 a); // 98
				VectorAligned::operator fltx4(); // 98
				CTransform::GetScale(); // 362
				{
					int i; // 325
					{
						int j; // 327
					}
				}
				matrix3x4_t::ScaleUpper3x3Matrix(
							float flScale);  // 365
				CTransform::ToMatrix(); // 123
				matrix3x4_t::matrix3x4_t(); // 290
				matrix3x4_t::Base(); // 291
				matrix3x4_t::Base(); // 291
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 291
				matrix3x4a_t::operator=(
						const matrix3x4_t& src);  // 290
				matrix3x4a_t::matrix3x4a_t(
						const matrix3x4_t& src);  // 123
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 120
				VectorAligned::operator=(
						fltx4 src);  // 111
				CTransform::SetPositionAndScale(
							const Vector& v0,
							float flScale);  // 33
				VectorAligned::VectorAligned(); // 33
				QuaternionAligned::Init(
					vec_t X,
					vec_t Y,
					vec_t Z,
					vec_t W);  // 30
				QuaternionAligned::QuaternionAligned(
							const Quaternion& rhs);  // 33
				CTransform::CTransform(
						const Vector& v,
						const Quaternion& q,
						float flScale);  // 151
				CTransformUnaligned::AsTransform(); // 123
			}
		}
		{
			int i; // 128
			{
				RnHull_t* pHull; // 130
				_mm_cvtss_f32(__m128 __A); // 1553
				GetWSIMD<>(fltx4 a); // 98
				VectorAligned::operator fltx4(); // 98
				CTransform::GetScale(); // 362
				{
					int i; // 325
					{
						int j; // 327
					}
				}
				matrix3x4_t::ScaleUpper3x3Matrix(
							float flScale);  // 365
				CTransform::ToMatrix(); // 133
				matrix3x4_t::matrix3x4_t(); // 290
				matrix3x4_t::Base(); // 291
				matrix3x4_t::Base(); // 291
				memcpy(void* __dest,
					const void* __src,
					size_t __len);  // 91
				V_memcpy(void* dest,
					const void* src,
					size_t count);  // 291
				matrix3x4a_t::operator=(
						const matrix3x4_t& src);  // 290
				matrix3x4a_t::matrix3x4a_t(
						const matrix3x4_t& src);  // 133
				VectorAligned::operator=(
						fltx4 src);  // 111
				CTransform::SetPositionAndScale(
							const Vector& v0,
							float flScale);  // 33
				VectorAligned::VectorAligned(); // 33
				QuaternionAligned::Init(
					vec_t X,
					vec_t Y,
					vec_t Z,
					vec_t W);  // 30
				QuaternionAligned::QuaternionAligned(
							const Quaternion& rhs);  // 33
				CTransform::CTransform(
						const Vector& v,
						const Quaternion& q,
						float flScale);  // 151
				CTransformUnaligned::AsTransform(); // 133
			}
		}
		{
			int i; // 138
			{
				int nStartMaterial; // 140
				uint8* pMaterials; // 141
				RnMesh_t* pMesh; // 142
			}
		}
		memset(void* __dest,
			int __ch,
			size_t __len);  // 165
		RnCollisionAttr_t::ComputeHash(); // 167
		RnCollisionAttr_t::RnCollisionAttr_t(); // 106
	}
	{
		int i; // 153
		{
			const SboxBoneDesc_t& boneDesc; // 155
			CUtlString boneName; // 157
			CUtlString parentBoneName; // 158
			{
				int j; // 169
				{
					CRenderMesh* pRenderMesh; // 171
					{
						CAttachment* pAttachment; // 175
						CUtlString::Get(); // 441
						CUtlString::operator char const*(); // 175
						CUtlString::Get(); // 441
						CUtlString::operator char const*(); // 176
					}
					{
						RenderSkeletonBone_t bone; // 180
						CUtlString::Get(); // 441
						CUtlString::operator char const*(); // 188
						CUtlString::CUtlString(); // 98
						CUtlString::CUtlString(); // 98
						SkeletonBoneBounds_t::SkeletonBoneBounds_t(); // 98
						RenderSkeletonBone_t::RenderSkeletonBone_t(); // 180
						_mm_cvtss_f32(__m128 __A); // 1553
						GetWSIMD<>(fltx4 a); // 98
						VectorAligned::operator fltx4(); // 98
						CTransform::GetScale(); // 362
						{
							int i; // 325
							{
								int j; // 327
							}
						}
						matrix3x4_t::ScaleUpper3x3Matrix(
									float flScale);  // 365
						CTransform::ToMatrix(); // 236
						TransformMatrix(const CTransform& in); // 181
						{
							fltx4 retVal; // 186
							_mm_set_ps(const float  __Z,
									const float  __Y,
									const float  __X,
									const float  __W);  // 187
						}
						Set4Floats<>(float p0,
								float p1,
								float p2,
								float p3);  // 111
						VectorAligned::operator=(
								fltx4 src);  // 111
						CTransform::SetPositionAndScale(
									const Vector& v0,
									float flScale);  // 33
						QuaternionAligned::Init(
							vec_t X,
							vec_t Y,
							vec_t Z,
							vec_t W);  // 30
						QuaternionAligned::QuaternionAligned(
									const Quaternion& rhs);  // 33
						VectorAligned::VectorAligned(); // 33
						CTransform::CTransform(
								const Vector& v,
								const Quaternion& q,
								float flScale);  // 181
						matrix3x4_t::matrix3x4_t(); // 1027
						MatrixInvert(const matrix3x4_t& in); // 181
						V_strlen(const char* str); // 393
						CUtlString::Length(); // 161
						CUtlString::Get(); // 161
						CUtlString::operator=(
								const CUtlString& src);  // 182
						V_strlen(const char* str); // 393
						CUtlString::Length(); // 161
						CUtlString::Get(); // 161
						CUtlString::operator=(
								const CUtlString& src);  // 183
						Vector::operator=(
								const Vector& vOther);  // 184
						CUtlString::Get(); // 441
						CUtlString::operator char const*(); // 188
						CUtlString::~CUtlString(); // 98
						CUtlString::~CUtlString(); // 98
						RenderSkeletonBone_t::~RenderSkeletonBone_t(); // 194
					}
					CWeakHandle<InfoForResourceTypeCRenderMesh>::CWeakHandle(); // 226
					FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
					CStrongHandle<InfoForResourceTypeCRenderMesh>::GetHandle(); // 171
					CInterlockedIntT<int, 4>::operator int(); // 288
					ResourceHandleToNonConstData<InfoForResourceTypeCRenderMesh>(const CWeakHandle<InfoForResourceTypeCRenderMesh>& hResource); // 171
				}
			}
			CUtlString::CUtlString(); // 157
			CUtlString::CUtlString(); // 158
			CUtlString::Get(); // 161
			V_strlen(const char* str); // 393
			CUtlString::Length(); // 161
			CUtlString::operator=(
					const CUtlString& src);  // 166
			CUtlString::~CUtlString(); // 196
			CUtlString::~CUtlString(); // 196
			CUtlString::CUtlString(
					const char* pString,
					int length);  // 166
			CUtlString::~CUtlString(); // 166
			CUtlString::CUtlString(
					const char* pString,
					int length);  // 163
			V_strlen(const char* str); // 393
			CUtlString::Length(); // 161
			CUtlString::Get(); // 161
			CUtlString::operator=(
					const CUtlString& src);  // 163
			CUtlString::~CUtlString(); // 163
		}
	}
	{
		CPhysAggregateDataHandle pAggData; // 200
		VPhysXAggregateData_t* pBackingData; // 201
		{
			int nJointCount; // 204
			{
				int nJoint; // 207
				CPhysAggregateDataHandle::Get(); // 138
				CPhysAggregateDataHandle::operator->(); // 209
				CUtlMemory<VPhysXJoint_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<VPhysXJoint_t, CUtlMemory<VPhysXJoint_t, int> >::operator[](
						int i);  // 209
				CUtlVectorUltraConservative<const VPhysXJoint_t::operator[](
						int i);  // 209
			}
			CUtlVectorBase<VPhysXJoint_t, CUtlMemory<VPhysXJoint_t, int> >::Count(); // 204
			CPhysAggregateDataHandle::Get(); // 138
			CPhysAggregateDataHandle::operator->(); // 206
			{
				int nCurCount; // 186
				CUtlVectorUltraConservative<const VPhysXJoint_t::Count(); // 159
				{
					size_t nNeeded; // 172
					size_t nHave; // 173
					GetSize(void* pMem); // 173
					Realloc(void* pMem,
						size_t nSize);  // 177
				}
				Alloc(size_t nSize); // 166
				CUtlVectorUltraConservative<const VPhysXJoint_t::EnsureCapacity(
						int num);  // 152
				CUtlVectorUltraConservative<const VPhysXJoint_t::EnsureCapacity(
						int num);  // 187
			}
			CUtlVectorUltraConservative<const VPhysXJoint_t::EnsureCount(
					int num);  // 182
			CUtlVectorUltraConservative<const VPhysXJoint_t::EnsureCount(
					int num);  // 206
		}
		CUtlMemory<CPhysBodyDesc, int>::Base(); // 112
		CUtlVectorBase<CPhysBodyDesc, CUtlMemory<CPhysBodyDesc, int> >::Base(); // 200
		CPhysAggregateDataHandle::Get(); // 138
		CPhysAggregateDataHandle::operator->(); // 201
		CUtlVectorBase<VPhysXJoint_t, CUtlMemory<VPhysXJoint_t, int> >::Count(); // 202
		CUtlMemory<VPhysXJoint_t, int>::Base(); // 112
		CUtlVectorBase<VPhysXJoint_t, CUtlMemory<VPhysXJoint_t, int> >::Base(); // 202
		CPhysAggregateDataHandle::Clear(); // 115
		CPhysAggregateDataHandle::~CPhysAggregateDataHandle(); // 214
	}
	{
		int i; // 220
		{
			const CPhysSurfaceProperties* pProp; // 222
			CUtlMemory<CUtlStringToken, int>::Base(); // 112
			CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Base(); // 368
			CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::ResetDbgInfo(); // 824
			CUtlMemory<CUtlStringToken, int>::IsGrowable(); // 823
			CUtlMemory<CUtlStringToken, int>::IsExternallyAllocated(); // 859
			CUtlMemory<CUtlStringToken, int>::IsExternallyAllocated(); // 861
			CUtlMemory<CUtlStringToken, int>::Grow(
				int num);  // 806
			CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::GrowMemory(
					int num);  // 1249
			CUtlMemory<CUtlStringToken, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Element(
				int i);  // 1252
			Construct<CUtlStringToken, CUtlStringToken>(CUtlStringToken* pMemory); // 1252
			CUtlMemory<CUtlStringToken, int>::NumAllocated(); // 1247
			CUtlVectorBase<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::AddToTail(
					CUtlStringToken& src);  // 223
			CUtlStringToken::CUtlStringToken(); // 67
			CPhysSurfaceProperties::GetNameHash(); // 223
		}
	}
	{
		int v; // 231
		CUtlMemory<Vector, int>::Base(); // 112
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 368
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
		CUtlMemory<Vector, int>::IsGrowable(); // 823
		CUtlMemory<Vector, int>::IsExternallyAllocated(); // 859
		CUtlMemory<Vector, int>::IsExternallyAllocated(); // 861
		CUtlMemory<Vector, int>::Grow(
			int num);  // 806
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
				int num);  // 1198
		CUtlMemory<Vector, int>::operator[](
				int i);  // 602
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
			int i);  // 1201
		CopyConstruct<Vector>(Vector* pMemory,
					const Vector& src);  // 1201
		CUtlMemory<Vector, int>::NumAllocated(); // 1196
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddToTail(
				const Vector& src);  // 233
	}
	{
		int v; // 236
		CUtlMemory<int, int>::Base(); // 112
		CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
				int num);  // 1249
		CUtlMemory<int, int>::operator[](
				int i);  // 602
		CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
			int i);  // 1252
		Construct<int, int>(int* pMemory); // 1252
		CUtlMemory<int, int>::NumAllocated(); // 1247
		CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
				int& src);  // 238
	}
	{
		const CModelSkeletonBuilder& skeleton; // 243
	}
	operator|(ModelFlags_t a,
			ModelFlags_t b);  // 241
	operator|=(ModelFlags_t& a,
			ModelFlags_t b);  // 65
	CUtlVectorBase<float, CUtlMemory<float, int> >::SetSize(
		int size);  // 67
	CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::Count(); // 90
	CUtlVectorBase<CPhysBodyDesc, CUtlMemory<CPhysBodyDesc, int> >::Count(); // 104
	CUtlVectorBase<CPhysBodyDesc, CUtlMemory<CPhysBodyDesc, int> >::Count(); // 198
	CUtlVectorBase<CPhysBodyDesc::SphereAndAttr_t, CUtlMemory<CPhysBodyDesc::SphereAndAttr_t, int> >::Count(); // 215
	CUtlVectorBase<CPhysBodyDesc::CapsuleAndAttr_t, CUtlMemory<CPhysBodyDesc::CapsuleAndAttr_t, int> >::Count(); // 216
	CUtlVectorBase<CPhysBodyDesc::HullAndAttr_t, CUtlMemory<CPhysBodyDesc::HullAndAttr_t, int> >::Count(); // 217
	CUtlVectorBase<CPhysBodyDesc::MeshAndAttr_t, CUtlMemory<CPhysBodyDesc::MeshAndAttr_t, int> >::Count(); // 218
	CWeakHandle<InfoForResourceTypeCModel>::GetBinding(); // 476
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 570
	CStrongHandle<InfoForResourceTypeCModel>::Init(
		ResourceHandleTyped_t hResource);  // 476
	CStrongHandle<InfoForResourceTypeCModel>::CStrongHandle(
			const CWeakHandle<InfoForResourceTypeCModel>& src);  // 247
	CWeakHandle<InfoForResourceTypeCModel>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeCModel>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 754
	CStrongHandle<InfoForResourceTypeCModel>::operator CWeakHandle<InfoForResourceTypeCModel>(); // 249
	CStrongHandle<InfoForResourceTypeCModel>::~CStrongHandle(); // 250
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll(); // 1798
	CUtlMemory<Vector, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 273
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 273
	CUtlVectorBase<CAnimationGroupResource::RemoveAll(); // 1798
	CUtlMemory<CAnimationGroupResource::IsExternallyAllocated(); // 905
	CUtlMemory<CAnimationGroupResource::Purge(); // 903
	CUtlMemory<CAnimationGroupResource::Purge(); // 1799
	CUtlVectorBase<CAnimationGroupResource::Purge(); // 560
	ValidateAlignment<CAnimationGroupResource*>(void); // 508
	CUtlMemory<CAnimationGroupResource::Purge(); // 510
	CUtlMemory<CAnimationGroupResource::~CUtlMemory(); // 562
	CUtlVectorBase<CAnimationGroupResource::~CUtlVectorBase(); // 410
	CUtlVector<CAnimationGroupResource::~CUtlVector(); // 273
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimationGroup>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(CStrongHandle<InfoForResourceTypeCAnimationGroup>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimatio this); // 273
	CPhysAggregateDataHandle::Clear(); // 115
	CPhysAggregateDataHandle::~CPhysAggregateDataHandle(); // 273
	CStrongHandle<InfoForResourceTypeCPhysAggregateData>::~CStrongHandle(); // 273
	CUtlMemory<BuilderModelBoneFlexDriver_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<BuilderModelBoneFlexDriver_t, int>::Purge(); // 903
	CUtlMemory<BuilderModelBoneFlexDriver_t, int>::Purge(); // 1799
	CUtlVectorBase<BuilderModelBoneFlexDriver_t, CUtlMemory<BuilderModelBoneFlexDriver_t, int> >::Purge(); // 560
	ValidateAlignment<BuilderModelBoneFlexDriver_t>(void); // 508
	CUtlMemory<BuilderModelBoneFlexDriver_t, int>::Purge(); // 510
	CUtlMemory<BuilderModelBoneFlexDriver_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<BuilderModelBoneFlexDriver_t, CUtlMemory<BuilderModelBoneFlexDriver_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<BuilderModelBoneFlexDriver_t, CUtlMemory<BuilderModelBoneFlexDriver_t, int> >::~CUtlVector(); // 273
	{
		int i; // 1721
		CUtlMemory<CUtlVector<short int, CUtlMemory<short int, int> >, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CUtlVector<short int, CUtlMemory<short int, int> >, CUtlMemory<CUtlVector<short int, CUtlMemory<shor this,
			int i);  // 1723
		CUtlVectorBase<short int, CUtlMemory<short int, int> >::RemoveAll(); // 1798
		CUtlMemory<short int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<short int, int>::Purge(); // 903
		CUtlMemory<short int, int>::Purge(); // 1799
		CUtlVectorBase<short int, CUtlMemory<short int, int> >::Purge(); // 560
		ValidateAlignment<short int>(void); // 508
		CUtlMemory<short int, int>::Purge(); // 510
		CUtlMemory<short int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<short int, CUtlMemory<short int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<short int, CUtlMemory<short int, int> >::~CUtlVector(); // 1526
		Destruct<CUtlVector<short int> >(CUtlVector<short int, CUtlMemory<short int, int> >* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CUtlVector<short int, CUtlMemory<short int, int> >, CUtlMemory<CUtlVector<short int, CUtlMemory<shor this); // 1798
	CUtlMemory<CUtlVector<short int, CUtlMemory<short int, int> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlVector<short int, CUtlMemory<short int, int> >, int>::Purge(); // 903
	CUtlMemory<CUtlVector<short int, CUtlMemory<short int, int> >, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CUtlVector<short int, CUtlMemory<short int, int> >, CUtlMemory<CUtlVector<short int, CUtlMemory<shor this); // 560
	ValidateAlignment<CUtlVector<short int> >(void); // 508
	CUtlMemory<CUtlVector<short int, CUtlMemory<short int, int> >, int>::Purge(); // 510
	CUtlMemory<CUtlVector<short int, CUtlMemory<short int, int> >, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CUtlVector<short int, CUtlMemory<short int, int> >, CUtlMemory<CUtlVector<short int, CUtlMemory<shor this); // 410
	~CUtlVector(const CUtlVector<CUtlVector<short int, CUtlMemory<short int, int> >, CUtlMemory<CUtlVector<short int, CUtlMemory<short in this); // 273
	CUtlVectorBase<const CFlexController::RemoveAll(); // 1798
	CUtlMemory<const CFlexController::IsExternallyAllocated(); // 905
	CUtlMemory<const CFlexController::Purge(); // 903
	CUtlMemory<const CFlexController::Purge(); // 1799
	CUtlVectorBase<const CFlexController::Purge(); // 560
	ValidateAlignment<const CFlexController*>(void); // 508
	CUtlMemory<const CFlexController::Purge(); // 510
	CUtlMemory<const CFlexController::~CUtlMemory(); // 562
	CUtlVectorBase<const CFlexController::~CUtlVectorBase(); // 410
	CUtlVector<const CFlexController::~CUtlVector(); // 273
	CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
	CUtlMemory<int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 15
	CUtlStringMap<int, CUtlSymbolTable>::~CUtlStringMap(); // 273
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::RemoveAll(); // 1798
	CUtlMemory<bool, int>::IsExternallyAllocated(); // 905
	CUtlMemory<bool, int>::Purge(); // 903
	CUtlMemory<bool, int>::Purge(); // 1799
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::Purge(); // 560
	ValidateAlignment<bool>(void); // 508
	CUtlMemory<bool, int>::Purge(); // 510
	CUtlMemory<bool, int>::~CUtlMemory(); // 562
	CUtlVectorBase<bool, CUtlMemory<bool, int> >::~CUtlVectorBase(); // 410
	CUtlVector<bool, CUtlMemory<bool, int> >::~CUtlVector(); // 79
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::RemoveAll(); // 1798
	CUtlMemory<Quaternion, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Quaternion, int>::Purge(); // 903
	CUtlMemory<Quaternion, int>::Purge(); // 1799
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Purge(); // 560
	ValidateAlignment<Quaternion>(void); // 508
	CUtlMemory<Quaternion, int>::Purge(); // 510
	CUtlMemory<Quaternion, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >::~CUtlVector(); // 79
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll(); // 1798
	CUtlMemory<Vector, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 79
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::Purge(); // 903
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::Purge(); // 1799
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::Purge(); // 560
	ValidateAlignment<CModelSkeleton::BoneFlags_t>(void); // 508
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::Purge(); // 510
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::~CUtlVector(); // 79
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 79
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::RemoveAll(); // 1798
	CUtlMemory<short int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<short int, int>::Purge(); // 903
	CUtlMemory<short int, int>::Purge(); // 1799
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Purge(); // 560
	ValidateAlignment<short int>(void); // 508
	CUtlMemory<short int, int>::Purge(); // 510
	CUtlMemory<short int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<short int, CUtlMemory<short int, int> >::~CUtlVector(); // 79
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 79
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	ValidateAlignment<CUtlString>(void); // 508
	CUtlMemory<CUtlString, int>::Purge(); // 510
	CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 79
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Count(); // 897
			CUtlHashtableEntry<unsigned int, short unsigned int>::IsValid(); // 899
			CUtlHashtableEntry<unsigned int, short unsigned int>::MarkInvalid(); // 901
			Destruct<CUtlKeyValuePair<unsigned int, short unsigned int> >(CUtlKeyValuePair<unsigned int, short unsigned int>* pMemory); // 902
		}
	}
	RemoveAll(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this); // 188
	ValidateAlignment<CUtlHashtableEntry<unsigned int, short unsigned int> >(void); // 508
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this); // 127
	BoneDict_t::~BoneDict_t(); // 79
	CModelSkeletonBuilder::~CModelSkeletonBuilder(); // 273
	{
		int i; // 1721
		CUtlMemory<CBuilderMaterialGroup, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::Element(
			int i);  // 1723
		{
			int i; // 1721
			CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2 this,
				int i);  // 1723
			CStrongHandle<InfoForResourceTypeIMaterial2>::~CStrongHandle(); // 1526
			Destruct<CStrongHandle<InfoForResourceTypeIMaterial2> >(CStrongHandle<InfoForResourceTypeIMaterial2>* pMemory); // 1723
		}
		RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2 this); // 1798
		CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::Purge(); // 903
		CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::Purge(); // 1799
		Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2 this); // 560
		ValidateAlignment<CStrongHandle<InfoForResourceTypeIMaterial2> >(void); // 508
		CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::Purge(); // 510
		CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::~CUtlMemory(); // 562
		~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2 this); // 410
		~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, i this); // 24
		CUtlString::~CUtlString(); // 24
		CBuilderMaterialGroup::~CBuilderMaterialGroup(); // 1526
		Destruct<CBuilderMaterialGroup>(CBuilderMaterialGroup* pMemory); // 1723
	}
	CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::RemoveAll(); // 1798
	CUtlMemory<CBuilderMaterialGroup, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CBuilderMaterialGroup, int>::Purge(); // 903
	CUtlMemory<CBuilderMaterialGroup, int>::Purge(); // 1799
	CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::Purge(); // 560
	ValidateAlignment<CBuilderMaterialGroup>(void); // 508
	CUtlMemory<CBuilderMaterialGroup, int>::Purge(); // 510
	CUtlMemory<CBuilderMaterialGroup, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CBuilderMaterialGroup, CUtlMemory<CBuilderMaterialGroup, int> >::~CUtlVector(); // 273
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	ValidateAlignment<CUtlString>(void); // 508
	CUtlMemory<CUtlString, int>::Purge(); // 510
	CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 273
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 273
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 1799
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 273
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<long long unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<long long unsigned int, int>::Purge(); // 903
	CUtlMemory<long long unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::Purge(); // 560
	ValidateAlignment<long long unsigned int>(void); // 508
	CUtlMemory<long long unsigned int, int>::Purge(); // 510
	CUtlMemory<long long unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<long long unsigned int, CUtlMemory<long long unsigned int, int> >::~CUtlVector(); // 273
	{
		int i; // 1721
		CUtlMemory<CModelBuilder::CompileTimeMesh_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CModelBuilder::CompileTimeMesh_t, CUtlMemory<CModelBuilder::CompileTimeMesh_t, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 365
		CStrongHandle<InfoForResourceTypeCRenderMesh>::~CStrongHandle(); // 365
		CompileTimeMesh_t::~CompileTimeMesh_t(); // 1526
		Destruct<CModelBuilder::CompileTimeMesh_t>(CompileTimeMesh_t* pMemory); // 1723
	}
	CUtlVectorBase<CModelBuilder::CompileTimeMesh_t, CUtlMemory<CModelBuilder::CompileTimeMesh_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CModelBuilder::CompileTimeMesh_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CModelBuilder::CompileTimeMesh_t, int>::Purge(); // 903
	CUtlMemory<CModelBuilder::CompileTimeMesh_t, int>::Purge(); // 1799
	CUtlVectorBase<CModelBuilder::CompileTimeMesh_t, CUtlMemory<CModelBuilder::CompileTimeMesh_t, int> >::Purge(); // 560
	ValidateAlignment<CModelBuilder::CompileTimeMesh_t>(void); // 508
	CUtlMemory<CModelBuilder::CompileTimeMesh_t, int>::Purge(); // 510
	CUtlMemory<CModelBuilder::CompileTimeMesh_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CModelBuilder::CompileTimeMesh_t, CUtlMemory<CModelBuilder::CompileTimeMesh_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CModelBuilder::CompileTimeMesh_t, CUtlMemory<CModelBuilder::CompileTimeMesh_t, int> >::~CUtlVector(); // 273
	{
		int i; // 1721
		CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int this,
			int i);  // 1723
		ThreadInterlockedDecrement(volatile int32* p); // 159
		Decrement(int* p); // 204
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
		CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
		CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
		Release<CRenderMesh>(CRenderMesh* pObj); // 344
		CSmartPtr<CRenderMesh, CRefCountAccessor>::~CSmartPtr(); // 1526
		Destruct<CSmartPtr<CRenderMesh> >(CSmartPtr<CRenderMesh, CRefCountAccessor>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int this); // 1798
	CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::Purge(); // 903
	CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int this); // 560
	ValidateAlignment<CSmartPtr<CRenderMesh> >(void); // 508
	CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::Purge(); // 510
	CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int this); // 410
	~CUtlVector(const CUtlVector<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int> > this); // 273
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	ValidateAlignment<CUtlString>(void); // 508
	CUtlMemory<CUtlString, int>::Purge(); // 510
	CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 273
	CUtlString::~CUtlString(); // 54
	CUtlString::~CUtlString(); // 54
	CBuilderModelInfo::~CBuilderModelInfo(); // 273
	CUtlString::~CUtlString(); // 273
	CModelBuilder::~CModelBuilder(); // 250
} /* size: 7927, variables: 3, inline expansions: 277 (10613 bytes) */

// <0186ACD3> sbox/glue_mesh.cpp:252
// variables: 3
// function calls: 8
void SetMeshMaterial(HRenderMesh_Internal renderMesh, HMaterial material)
{
	{
		CRenderMesh* pRenderMesh; // 254
		{
			CSceneObjectData* pSceneObject; // 256
			CMaterialDrawDescriptor* pDrawCall; // 257
			CUtlMemory<CSceneObjectData, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
					int i);  // 256
			CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::operator[](
					int i);  // 257
			CWeakHandle<InfoForResourceTypeIMaterial2>::Init(
				const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 273
			CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(
					const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 258
		}
		CInterlockedIntT<int, 4>::operator int(); // 288
		ResourceHandleToNonConstData<InfoForResourceTypeCRenderMesh>(const CWeakHandle<InfoForResourceTypeCRenderMesh>& hResource); // 254
	}
} /* size: 94 */

// <0186AAC9> sbox/glue_mesh.cpp:262
// variables: 3
// function calls: 6
void SetMeshPrimType(HRenderMesh_Internal renderMesh, int nPrimType)
{
	{
		CRenderMesh* pRenderMesh; // 264
		{
			CSceneObjectData* pSceneObject; // 266
			CMaterialDrawDescriptor* pDrawCall; // 267
			CUtlMemory<CSceneObjectData, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
					int i);  // 266
			CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::operator[](
					int i);  // 267
		}
		CInterlockedIntT<int, 4>::operator int(); // 288
		ResourceHandleToNonConstData<InfoForResourceTypeCRenderMesh>(const CWeakHandle<InfoForResourceTypeCRenderMesh>& hResource); // 264
	}
} /* size: 38 */

// <0186A8DB> sbox/glue_mesh.cpp:272
// variables: 3
// function calls: 6
void SetMeshIndexRange(HRenderMesh_Internal renderMesh, int32 startIndex, int32 indexCount)
{
	{
		CRenderMesh* pRenderMesh; // 274
		{
			CSceneObjectData* pSceneObject; // 276
			CMaterialDrawDescriptor* pDrawCall; // 277
			CUtlMemory<CSceneObjectData, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
					int i);  // 276
			CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::operator[](
					int i);  // 277
		}
		CInterlockedIntT<int, 4>::operator int(); // 288
		ResourceHandleToNonConstData<InfoForResourceTypeCRenderMesh>(const CWeakHandle<InfoForResourceTypeCRenderMesh>& hResource); // 274
	}
} /* size: 55 */

// <0186A6ED> sbox/glue_mesh.cpp:283
// variables: 3
// function calls: 6
void SetMeshVertexRange(HRenderMesh_Internal renderMesh, int32 startVertex, int32 vertexCount)
{
	{
		CRenderMesh* pRenderMesh; // 285
		{
			CSceneObjectData* pSceneObject; // 287
			CMaterialDrawDescriptor* pDrawCall; // 288
			CUtlMemory<CSceneObjectData, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
					int i);  // 287
			CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::operator[](
					int i);  // 288
		}
		CInterlockedIntT<int, 4>::operator int(); // 288
		ResourceHandleToNonConstData<InfoForResourceTypeCRenderMesh>(const CWeakHandle<InfoForResourceTypeCRenderMesh>& hResource); // 285
	}
} /* size: 55 */

// <0186A537> sbox/glue_mesh.cpp:294
// variables: 2
// function calls: 4
void SetMeshBounds(HRenderMesh_Internal renderMesh, const Vector& vMinBounds, const Vector& vMaxBounds)
{
	{
		CRenderMesh* pRenderMesh; // 296
		{
			CSceneObjectData* pSceneObject; // 298
			CUtlMemory<CSceneObjectData, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
					int i);  // 298
		}
		CInterlockedIntT<int, 4>::operator int(); // 288
		ResourceHandleToNonConstData<InfoForResourceTypeCRenderMesh>(const CWeakHandle<InfoForResourceTypeCRenderMesh>& hResource); // 296
	}
} /* size: 65 */

// <0186A32D> sbox/glue_mesh.cpp:304
// variables: 3
// function calls: 6
void SetMeshUvDensity(HRenderMesh_Internal renderMesh, float flDensity)
{
	{
		CRenderMesh* pRenderMesh; // 306
		{
			CSceneObjectData* pSceneObject; // 308
			CMaterialDrawDescriptor* pDrawCall; // 309
			CUtlMemory<CSceneObjectData, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
					int i);  // 308
			CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::operator[](
					int i);  // 309
		}
		CInterlockedIntT<int, 4>::operator int(); // 288
		ResourceHandleToNonConstData<InfoForResourceTypeCRenderMesh>(const CWeakHandle<InfoForResourceTypeCRenderMesh>& hResource); // 306
	}
} /* size: 41 */

// <01869C25> sbox/glue_mesh.cpp:314
// variables: 15
// function calls: 17
void SetMeshVertexBuffer(HRenderMesh_Internal renderMesh, VertexBufferHandle_t hVB, void* pData, int nDataSize)
{
	{
		CRenderMesh* pRenderMesh; // 316
		{
			CSceneObjectData* pSceneObject; // 318
			CMaterialDrawDescriptor* pDrawCall; // 319
			{
				CRenderContextPtr pRenderContext; // 328
				BufferDesc_t bufferDesc; // 329
				int nLayoutFieldCount; // 336
				const RenderInputLayoutField_t* pLayoutFields; // 337
				RenderInputLayout_t hLayout; // 338
				int nElementSizeInBytes; // 341
				int nBoneIdxOffset; // 342
				int nBoneIndexBits; // 343
				int nBoneWeightOffset; // 344
				int nNormalOffset; // 345
				int nTangentOffset; // 346
				{
					int j; // 347
				}
				CRenderContextPtr::CRenderContextPtr(
							IRenderDevice* pDevice);  // 328
				CUtlMemory<int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
						int i);  // 333
				CRenderContextPtr::operator->(); // 338
				CUtlMemory<int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
						int i);  // 334
				CUtlMemory<VertexBufferLayout_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<VertexBufferLayout_t, CUtlMemory<VertexBufferLayout_t, int> >::operator[](
						int i);  // 381
				CRenderContextPtr::Release(); // 845
				CRenderContextPtr::~CRenderContextPtr(); // 391
			}
			CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::operator[](
					int i);  // 319
			CUtlMemory<CSceneObjectData, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
					int i);  // 318
			CUtlVectorBase<CRenderBufferBinding, CUtlMemoryFixed<CRenderBufferBinding, 4> >::RemoveAll(); // 320
		}
		CInterlockedIntT<int, 4>::operator int(); // 288
		ResourceHandleToNonConstData<InfoForResourceTypeCRenderMesh>(const CWeakHandle<InfoForResourceTypeCRenderMesh>& hResource); // 316
	}
} /* size: 845 */

// <018699E3> sbox/glue_mesh.cpp:397
// variables: 3
// function calls: 6
void SetMeshIndexBuffer(HRenderMesh_Internal renderMesh, IndexBufferHandle_t hIB, void* pData, int nDataSize)
{
	{
		CRenderMesh* pRenderMesh; // 399
		{
			CSceneObjectData* pSceneObject; // 401
			CMaterialDrawDescriptor* pDrawCall; // 402
			CUtlMemory<CSceneObjectData, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
					int i);  // 401
			CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::operator[](
					int i);  // 402
		}
		CInterlockedIntT<int, 4>::operator int(); // 288
		ResourceHandleToNonConstData<InfoForResourceTypeCRenderMesh>(const CWeakHandle<InfoForResourceTypeCRenderMesh>& hResource); // 399
	}
} /* size: 129 */

// <0186943A> sbox/glue_mesh.cpp:415
// variables: 7
// function calls: 11
void CreateVertexBuffer(int nElementSizeInBytes, int nElementCount, const char* fieldNames, VertexField_t* pVertexFields, int nFields, void* pData, int nDataSize)
{
	BufferDesc_t bufferDesc; // 417
	VertexBufferHandle_t hVB; // 422
	RenderInputLayoutField_t pFields; // 424
	CRenderContextPtr pRenderContext; // 440
	LockDesc_t vbLock; // 441
	int nBufferDataSize; // 442
	{
		int a; // 427
		V_strncpy<int>(char* pDest,
				const char* pSrc,
				int maxLenInChars);  // 429
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 425
	CRenderContextPtr::CRenderContextPtr(
				IRenderDevice* pDevice);  // 440
	memset(void* __dest,
		int __ch,
		size_t __len);  // 51
	V_memset(void* dest,
		int fill,
		int count);  // 446
	CRenderContextPtr::Release(); // 845
	CRenderContextPtr::~CRenderContextPtr(); // 458
	Min<int>(const int& val1,
		const int& val2);  // 452
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 452
} /* size: 564, variables: 6, inline expansions: 10 (220 bytes) */

// <018690E7> sbox/glue_mesh.cpp:460
// variables: 5
// function calls: 7
void CreateVertexBuffer(int nElementCount, const VertexLayout* pLayout, void* pData)
{
	BufferDesc_t bufferDesc; // 462
	VertexBufferHandle_t hVB; // 467
	CRenderContextPtr pRenderContext; // 471
	LockDesc_t vbLock; // 472
	int nBufferDataSize; // 473
	CRenderContextPtr::CRenderContextPtr(
				IRenderDevice* pDevice);  // 471
	memset(void* __dest,
		int __ch,
		size_t __len);  // 51
	V_memset(void* dest,
		int fill,
		int count);  // 477
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 481
	CRenderContextPtr::Release(); // 845
	CRenderContextPtr::~CRenderContextPtr(); // 487
} /* size: 296, variables: 5, inline expansions: 7 (129 bytes) */

// <01868E01> sbox/glue_mesh.cpp:489
// variables: 4
// function calls: 5
void SetVertexBufferSize(VertexBufferHandle_t hVB, int nDataSize)
{
	CRenderContextPtr pRenderContext; // 494
	BufferDesc_t bufferDesc; // 496
	RenderInputLayout_t hLayout; // 498
	LockDesc_t vbLock; // 505
	CRenderContextPtr::CRenderContextPtr(
				IRenderDevice* pDevice);  // 494
	memset(void* __dest,
		int __ch,
		size_t __len);  // 51
	V_memset(void* dest,
		int fill,
		int count);  // 508
	CRenderContextPtr::Release(); // 845
	CRenderContextPtr::~CRenderContextPtr(); // 512
} /* size: 338, variables: 4, inline expansions: 5 (114 bytes) */

// <01868B52> sbox/glue_mesh.cpp:514
// variables: 3
// function calls: 5
void SetIndexBufferSize(IndexBufferHandle_t hIB, int nDataSize)
{
	BufferDesc_t bufferDesc; // 519
	CRenderContextPtr pRenderContext; // 527
	LockDesc_t ibLock; // 528
	CRenderContextPtr::CRenderContextPtr(
				IRenderDevice* pDevice);  // 527
	memset(void* __dest,
		int __ch,
		size_t __len);  // 51
	V_memset(void* dest,
		int fill,
		int count);  // 531
	CRenderContextPtr::Release(); // 845
	CRenderContextPtr::~CRenderContextPtr(); // 535
} /* size: 298, variables: 3, inline expansions: 5 (103 bytes) */

// <018689A7> sbox/glue_mesh.cpp:537
// variable: 1
// function calls: 4
void SetVertexBufferData(VertexBufferHandle_t hVB, void* pData, int nDataSize, int nDataOffset)
{
	CRenderContextPtr pRenderContext; // 539
	CRenderContextPtr::CRenderContextPtr(
				IRenderDevice* pDevice);  // 539
	CRenderContextPtr::operator->(); // 540
	CRenderContextPtr::Release(); // 845
	CRenderContextPtr::~CRenderContextPtr(); // 541
} /* size: 164, variables: 1, inline expansions: 4 (118 bytes) */

// <018687FC> sbox/glue_mesh.cpp:543
// variable: 1
// function calls: 4
void SetIndexBufferData(IndexBufferHandle_t hIB, void* pData, int nDataSize, int nDataOffset)
{
	CRenderContextPtr pRenderContext; // 545
	CRenderContextPtr::CRenderContextPtr(
				IRenderDevice* pDevice);  // 545
	CRenderContextPtr::operator->(); // 546
	CRenderContextPtr::Release(); // 845
	CRenderContextPtr::~CRenderContextPtr(); // 547
} /* size: 164, variables: 1, inline expansions: 4 (118 bytes) */

// <018685A5> sbox/glue_mesh.cpp:549
// variables: 2
// function calls: 5
void* LockVertexBuffer(VertexBufferHandle_t hVB, int nDataSize, int nDataOffset)
{
	CRenderContextPtr pRenderContext; // 551
	LockDesc_t lockDesc; // 552
	CRenderContextPtr::CRenderContextPtr(
				IRenderDevice* pDevice);  // 551
	memset(void* __dest,
		int __ch,
		size_t __len);  // 51
	V_memset(void* dest,
		int fill,
		int count);  // 564
	CRenderContextPtr::Release(); // 845
	CRenderContextPtr::~CRenderContextPtr(); // 567
} /* size: 218, variables: 2, inline expansions: 5 (103 bytes) */

// <018683DD> sbox/glue_mesh.cpp:569
// variables: 2
// function calls: 3
void UnlockVertexBuffer(VertexBufferHandle_t hVB, void* pData, int nDataSize, int nDataOffset)
{
	CRenderContextPtr pRenderContext; // 571
	LockDesc_t lockDesc; // 572
	CRenderContextPtr::CRenderContextPtr(
				IRenderDevice* pDevice);  // 571
	CRenderContextPtr::Release(); // 845
	CRenderContextPtr::~CRenderContextPtr(); // 583
} /* size: 202, variables: 2, inline expansions: 3 (84 bytes) */

// <01868186> sbox/glue_mesh.cpp:585
// variables: 2
// function calls: 5
void* LockIndexBuffer(IndexBufferHandle_t hIB, int nDataSize, int nDataOffset)
{
	CRenderContextPtr pRenderContext; // 587
	LockDesc_t lockDesc; // 588
	CRenderContextPtr::CRenderContextPtr(
				IRenderDevice* pDevice);  // 587
	memset(void* __dest,
		int __ch,
		size_t __len);  // 51
	V_memset(void* dest,
		int fill,
		int count);  // 600
	CRenderContextPtr::Release(); // 845
	CRenderContextPtr::~CRenderContextPtr(); // 603
} /* size: 218, variables: 2, inline expansions: 5 (103 bytes) */

// <01867FBE> sbox/glue_mesh.cpp:605
// variables: 2
// function calls: 3
void UnlockIndexBuffer(IndexBufferHandle_t hIB, void* pData, int nDataSize, int nDataOffset)
{
	CRenderContextPtr pRenderContext; // 607
	LockDesc_t lockDesc; // 608
	CRenderContextPtr::CRenderContextPtr(
				IRenderDevice* pDevice);  // 607
	CRenderContextPtr::Release(); // 845
	CRenderContextPtr::~CRenderContextPtr(); // 619
} /* size: 202, variables: 2, inline expansions: 3 (84 bytes) */

// <01867C06> sbox/glue_mesh.cpp:621
// variables: 5
// function calls: 8
void CreateIndexBuffer(int nElementCount, bool b32Bit, void* pData, int nDataSize)
{
	BufferDesc_t bufferDesc; // 623
	IndexBufferHandle_t hIB; // 628
	CRenderContextPtr pRenderContext; // 632
	LockDesc_t ibLock; // 633
	int nBufferDataSize; // 634
	CRenderContextPtr::CRenderContextPtr(
				IRenderDevice* pDevice);  // 632
	memset(void* __dest,
		int __ch,
		size_t __len);  // 51
	V_memset(void* dest,
		int fill,
		int count);  // 638
	CRenderContextPtr::Release(); // 845
	CRenderContextPtr::~CRenderContextPtr(); // 650
	Min<int>(const int& val1,
		const int& val2);  // 644
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 644
} /* size: 324, variables: 5, inline expansions: 8 (139 bytes) */

// <01867A02> sbox/glue_mesh.cpp:652
// variables: 8
// function calls: 3
void GetModelNumVertices(HModel model)
{
	int numVertices; // 654
	LODGroupMask_t lodGroupMask; // 655
	{
		int i; // 657
		{
			LODGroupMask_t lodMeshMask; // 659
			const CRenderMesh* pMesh; // 663
			{
				int v; // 667
				{
					VertexBufferHandle_t hVB; // 669
					BufferDesc_t bufferDesc; // 670
				}
			}
			CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 659
			CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 663
		}
		CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 657
	}
} /* size: 261, variables: 2 */

// <01867831> sbox/glue_mesh.cpp:680
// variables: 2
// function calls: 6
void GetModelIndexCount(HModel model, int drawCall)
{
	CRenderMesh* meshData; // 682
	CUtlVector<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >& drawCalls; // 685
	CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 682
	CUtlMemory<CSceneObjectData, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
			int i);  // 685
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Count(); // 686
	CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::operator[](
			int i);  // 688
} /* size: 76, variables: 2, inline expansions: 6 (19 bytes) */

// <01867660> sbox/glue_mesh.cpp:691
// variables: 2
// function calls: 6
void GetModelIndexStart(HModel model, int drawCall)
{
	CRenderMesh* meshData; // 693
	CUtlVector<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >& drawCalls; // 696
	CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 693
	CUtlMemory<CSceneObjectData, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
			int i);  // 696
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Count(); // 697
	CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::operator[](
			int i);  // 699
} /* size: 76, variables: 2, inline expansions: 6 (19 bytes) */

// <01867489> sbox/glue_mesh.cpp:702
// variables: 2
// function calls: 6
void GetModelBaseVertex(HModel model, int drawCall)
{
	CRenderMesh* meshData; // 704
	CUtlVector<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >& drawCalls; // 707
	CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 704
	CUtlMemory<CSceneObjectData, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CSceneObjectData, CUtlMemoryFixedGrowable<CSceneObjectData, 1, int> >::operator[](
			int i);  // 707
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::Count(); // 708
	CUtlMemory<CMaterialDrawDescriptor, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CMaterialDrawDescriptor, CUtlMemory<CMaterialDrawDescriptor, int> >::operator[](
			int i);  // 710
} /* size: 76, variables: 2, inline expansions: 6 (19 bytes) */

// <01867285> sbox/glue_mesh.cpp:713
// variables: 8
// function calls: 3
void GetModelNumIndices(HModel model)
{
	int numIndices; // 715
	LODGroupMask_t lodGroupMask; // 716
	{
		int i; // 718
		{
			LODGroupMask_t lodMeshMask; // 720
			const CRenderMesh* pMesh; // 724
			{
				int v; // 728
				{
					IndexBufferHandle_t hIB; // 730
					BufferDesc_t bufferDesc; // 731
				}
			}
			CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 720
			CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 724
		}
		CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 718
	}
} /* size: 261, variables: 2 */

// <01866BB6> sbox/glue_mesh.cpp:741
// variables: 18
// function calls: 20
void GetModelIndices(HModel model, uint32* indices, uint32 numIndices)
{
	LODGroupMask_t lodGroupMask; // 743
	int curIndex; // 744
	int startVertex; // 745
	CRenderContextPtr pRenderContext; // 747
	{
		int i; // 749
		{
			LODGroupMask_t lodMeshMask; // 751
			const CRenderMesh* pMesh; // 755
			{
				int v; // 759
				{
					IndexBufferHandle_t hIB; // 761
					BufferDesc_t bufferDesc; // 762
					int nBufferSizeInBytes; // 765
					CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > buffer; // 766
					VertexBufferHandle_t hVB; // 789
					BufferDesc_t vertexBufferDesc; // 790
					{
						const uint16_t* indexData; // 772
						{
							int vi; // 773
						}
					}
					{
						const uint32_t* indexData; // 781
						{
							int vi; // 782
						}
					}
					CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 530
					CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
					CUtlMemory<unsigned char, int>::CUtlMemory(
							int nGrowSize,
							int nInitAllocationCount);  // 527
					CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVectorBase(
							int growSize,
							int initCapacity);  // 418
					CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVector(); // 766
					CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::SetSize(
						int size);  // 767
					CUtlMemory<unsigned char, int>::Purge(); // 903
					CUtlMemory<unsigned char, int>::Purge(); // 1799
					CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
					ValidateAlignment<unsigned char>(void); // 508
					CUtlMemory<unsigned char, int>::Purge(); // 510
					CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
					CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
					CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 794
				}
			}
			CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 751
			CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 755
		}
		CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 749
	}
	CRenderContextPtr::CRenderContextPtr(
				IRenderDevice* pDevice);  // 747
	CRenderContextPtr::Release(); // 845
	CRenderContextPtr::~CRenderContextPtr(); // 796
} /* size: 894, variables: 4, inline expansions: 3 (135 bytes) */

// <0186514D> sbox/glue_mesh.cpp:798
// variables: 70
// function calls: 79
void GetModelVertices(HModel model, SboxVertex_t* vertices, uint32 numVertices)
{
	LODGroupMask_t lodGroupMask; // 800
	SboxVertex_t* pVertex; // 802
	CRenderContextPtr pRenderContext; // 804
	{
		int i; // 806
		{
			LODGroupMask_t lodMeshMask; // 808
			const CRenderMesh* pMesh; // 812
			{
				int v; // 816
				{
					VertexBufferHandle_t hVB; // 818
					BufferDesc_t bufferDesc; // 819
					int nBufferSizeInBytes; // 822
					CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > buffer; // 823
					uint8* pData; // 827
					int nFieldCount; // 829
					const RenderInputLayoutField_t* pFields; // 830
					RenderInputLayout_t hLayout; // 831
					int nPositionOffset; // 834
					int nNormalOffset; // 835
					int nNormalFormat; // 836
					int nTangentOffset; // 837
					int nTexcoordOffset; // 838
					int nTexcoordFormat; // 839
					int nTexcoord2Offset; // 840
					int nTexcoord2Format; // 841
					int nColorOffset; // 842
					int nColorFormat; // 843
					int nTexcoordSemanticIndex; // 844
					int nTexcoord2SemanticIndex; // 845
					{
						int f; // 847
						{
							const RenderInputLayoutField_t& field; // 849
							const char* pSemanticName; // 851
						}
					}
					{
						int vi; // 905
						{
							const uint8* pCurrentVertexData; // 907
							{
								CUnalignedPointer<const Vector> pRead; // 913
								_CUnalignedPointer_Base<const Vector>::_Initialize(
										const Vector* pOriginal);  // 145
								CUnalignedPointer<const Vector>::CUnalignedPointer(
											Pointer_t pOriginal);  // 913
								Vector::operator=(
										const Vector& vOther);  // 124
								_CUnalignedPointer_Base<const Vector>::CopyTo(
									_Unaligned_Container_Pointer pDest);  // 179
								CUnalignedPointer<const Vector>::CopyTo(
									V_remove_const* pDest);  // 914
							}
							{
								CUnalignedPointer<const Vector4D> pRead; // 919
								_CUnalignedPointer_Base<const Vector4D>::_Initialize(
										const Vector4D* pOriginal);  // 145
								CUnalignedPointer<const Vector4D>::CUnalignedPointer(
											Pointer_t pOriginal);  // 919
								Vector4D::operator=(
										const Vector4D& vOther);  // 124
								_CUnalignedPointer_Base<const Vector4D>::CopyTo(
									_Unaligned_Container_Pointer pDest);  // 179
								CUnalignedPointer<const Vector4D>::CopyTo(
									V_remove_const* pDest);  // 920
							}
							{
								uint32 nPackedNormalAndTangent; // 927
								UnpackNormal_UBYTE4(const unsigned int* pPackedNormal,
											float* pNormal,
											bool bIsTangent);  // 928
								UnpackNormal_UBYTE4(const unsigned int* pPackedNormal,
											float* pNormal,
											bool bIsTangent);  // 929
							}
							{
								CUnalignedPointer<const Vector> pRead; // 933
								_CUnalignedPointer_Base<const Vector>::_Initialize(
										const Vector* pOriginal);  // 145
								CUnalignedPointer<const Vector>::CUnalignedPointer(
											Pointer_t pOriginal);  // 933
								Vector::operator=(
										const Vector& vOther);  // 124
								_CUnalignedPointer_Base<const Vector>::CopyTo(
									_Unaligned_Container_Pointer pDest);  // 179
								CUnalignedPointer<const Vector>::CopyTo(
									V_remove_const* pDest);  // 934
							}
							{
								CUnalignedPointer<const Vector4D> pRead; // 946
								Vector4D color; // 947
								_CUnalignedPointer_Base<const Vector4D>::_Initialize(
										const Vector4D* pOriginal);  // 145
								CUnalignedPointer<const Vector4D>::CUnalignedPointer(
											Pointer_t pOriginal);  // 946
								Vector4D::Vector4D(); // 947
								Vector4D::operator=(
										const Vector4D& vOther);  // 124
								_CUnalignedPointer_Base<const Vector4D>::CopyTo(
									_Unaligned_Container_Pointer pDest);  // 179
								CUnalignedPointer<const Vector4D>::CopyTo(
									V_remove_const* pDest);  // 948
								clamp<double, int>(const double& val,
											const int& minVal,
											const int& maxVal);  // 132
								clamp<double, int>(const double& val,
											const int& minVal,
											const int& maxVal);  // 133
								clamp<double, int>(const double& val,
											const int& minVal,
											const int& maxVal);  // 134
								clamp<double, int>(const double& val,
											const int& minVal,
											const int& maxVal);  // 135
								VertexColor_t::VertexColor_t(
										const Vector4D& vecColor);  // 949
								VertexColor_t::AsUint32(); // 203
								VertexColor_t::operator=(
										const VertexColor_t& src);  // 949
							}
							{
								Vector2D uv; // 955
								{
									uint32 nPackedTexCoord; // 959
									IsInfinity(union float16bits in); // 631
									{
										const float  half_denorm; // 642
										float mantissa; // 643
										float sgn; // 644
									}
									{
										unsigned int mantissa; // 650
										unsigned int biased_exponent; // 651
										unsigned int sign; // 652
									}
									Convert16bitFloatTo32bits(short unsigned int input); // 960
									IsInfinity(union float16bits in); // 631
									{
										const float  half_denorm; // 642
										float mantissa; // 643
										float sgn; // 644
									}
									{
										unsigned int mantissa; // 650
										unsigned int biased_exponent; // 651
										unsigned int sign; // 652
									}
									Convert16bitFloatTo32bits(short unsigned int input); // 961
								}
								{
									uint32 nPackedTexCoord; // 965
								}
								{
									CUnalignedPointer<const Vector2D> pRead; // 971
									_CUnalignedPointer_Base<const Vector2D>::_Initialize(
											const Vector2D* pOriginal);  // 145
									CUnalignedPointer<const Vector2D>::CUnalignedPointer(
												Pointer_t pOriginal);  // 971
									Vector2D::operator=(
											const Vector2D& vOther);  // 124
									_CUnalignedPointer_Base<const Vector2D>::CopyTo(
										_Unaligned_Container_Pointer pDest);  // 179
									CUnalignedPointer<const Vector2D>::CopyTo(
										V_remove_const* pDest);  // 972
								}
								Vector2D::Vector2D(); // 955
								Vector4D::Vector4D(
									vec_t X,
									vec_t Y,
									vec_t Z,
									vec_t W);  // 975
								Vector4D::operator=(
										const Vector4D& vOther);  // 975
							}
							{
								Vector2D uv; // 980
								{
									uint32 nPackedTexCoord; // 984
									IsInfinity(union float16bits in); // 631
									{
										const float  half_denorm; // 642
										float mantissa; // 643
										float sgn; // 644
									}
									{
										unsigned int mantissa; // 650
										unsigned int biased_exponent; // 651
										unsigned int sign; // 652
									}
									Convert16bitFloatTo32bits(short unsigned int input); // 985
									IsInfinity(union float16bits in); // 631
									{
										const float  half_denorm; // 642
										float mantissa; // 643
										float sgn; // 644
									}
									{
										unsigned int mantissa; // 650
										unsigned int biased_exponent; // 651
										unsigned int sign; // 652
									}
									Convert16bitFloatTo32bits(short unsigned int input); // 986
								}
								{
									uint32 nPackedTexCoord; // 990
								}
								{
									CUnalignedPointer<const Vector2D> pRead; // 996
									_CUnalignedPointer_Base<const Vector2D>::_Initialize(
											const Vector2D* pOriginal);  // 145
									CUnalignedPointer<const Vector2D>::CUnalignedPointer(
												Pointer_t pOriginal);  // 996
									Vector2D::operator=(
											const Vector2D& vOther);  // 124
									_CUnalignedPointer_Base<const Vector2D>::CopyTo(
										_Unaligned_Container_Pointer pDest);  // 179
									CUnalignedPointer<const Vector2D>::CopyTo(
										V_remove_const* pDest);  // 997
								}
								Vector2D::Vector2D(); // 980
								Vector4D::Vector4D(
									vec_t X,
									vec_t Y,
									vec_t Z,
									vec_t W);  // 1000
								Vector4D::operator=(
										const Vector4D& vOther);  // 1000
							}
							VertexColor_t::AsUint32(); // 203
							VertexColor_t::operator=(
									const VertexColor_t& src);  // 942
							memset(void* __dest,
								int __ch,
								size_t __len);  // 51
							V_memset(void* dest,
								int fill,
								int count);  // 909
						}
					}
					CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 530
					CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
					CUtlMemory<unsigned char, int>::CUtlMemory(
							int nGrowSize,
							int nInitAllocationCount);  // 527
					CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVectorBase(
							int growSize,
							int initCapacity);  // 418
					CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVector(); // 823
					CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::SetSize(
						int size);  // 824
					IRenderDevice::ReadBuffer<unsigned char>(
									RenderBufferHandle_t hBuffer,
									int nOffset,
									unsigned char* pElements,
									int nCount);  // 825
					CUtlMemory<unsigned char, int>::Purge(); // 903
					CUtlMemory<unsigned char, int>::Purge(); // 1799
					CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
					ValidateAlignment<unsigned char>(void); // 508
					CUtlMemory<unsigned char, int>::Purge(); // 510
					CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
					CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
					CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 1005
				}
			}
			CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 808
			CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 812
		}
		CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 806
	}
	CRenderContextPtr::CRenderContextPtr(
				IRenderDevice* pDevice);  // 804
	CRenderContextPtr::Release(); // 845
	CRenderContextPtr::~CRenderContextPtr(); // 1007
} /* size: 3555, variables: 3, inline expansions: 3 (178 bytes) */

// <018630C9> sbox/glue_mesh.cpp:1009
// variables: 23
// function calls: 129
void SerializeMeshBuffers(HModel model, int nMesh)
{
	CRenderMesh* pMesh; // 1014
	CRenderContextPtr pRenderContext; // 1018
	CResourceStreamVM vbibStream; // 1020
	VBIBBlockHeader_t* pVBHeader; // 1021
	CUtlBuffer* pBuffer; // 1070
	{
		int i; // 1026
		{
			VertexBufferHandle_t hVB; // 1028
			BufferDesc_t bufferDesc; // 1029
			int nBufferSizeInBytes; // 1032
			CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > buffer; // 1033
			int nFieldCount; // 1037
			const RenderInputLayoutField_t* pFields; // 1038
			RenderInputLayout_t hLayout; // 1039
			RenderMeshBufferData_t& data; // 1042
			CResourceArray<RenderMeshInputLayoutField_t>::operator=(
					const CLockedResource<RenderMeshInputLayoutField_t>& lockedResource);  // 1045
			ResolveOffset(const int32* pOffset); // 310
			CResourceArrayBase::GetRawPtr(); // 421
			CResourceArray<RenderMeshInputLayoutField_t>::GetPtr(); // 1046
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 1046
			CUnlockedResource<unsigned char>::CUnlockedResource(
						CResourceStream* pStream,
						unsigned char* pData,
						uint nCount);  // 766
			CResourceStream::AllocateUnaligned<unsigned char>(
							uint nCount);  // 752
			CResourceStream::GetDataPtr(
					uint nOffset);  // 996
			CUnlockedResource<unsigned char>::GetPtr(); // 103
			CUnlockedResource<unsigned char>::operator unsigned char*(); // 752
			CLockedResource<unsigned char>::CLockedResource(
					unsigned char* pData,
					uint nCount);  // 759
			CResourceStream::Allocate<unsigned char>(
						uint nCount);  // 1047
			CResourceArray<unsigned char>::operator=(
					const CLockedResource<unsigned char>& lockedResource);  // 1047
			ResolveOffset(const int32* pOffset); // 310
			CResourceArrayBase::GetRawPtr(); // 421
			CResourceArray<unsigned char>::GetPtr(); // 1048
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 75
			V_memcpy(void* dest,
				const void* src,
				int count);  // 1048
			CUtlMemory<unsigned char, int>::Purge(); // 903
			CUtlMemory<unsigned char, int>::Purge(); // 1799
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
			ValidateAlignment<unsigned char>(void); // 508
			CUtlMemory<unsigned char, int>::Purge(); // 510
			CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
			CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 1049
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 530
			CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
			CUtlMemory<unsigned char, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVector(); // 1033
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::SetSize(
				int size);  // 1034
			IRenderDevice::ReadBuffer<unsigned char>(
							RenderBufferHandle_t hBuffer,
							int nOffset,
							unsigned char* pElements,
							int nCount);  // 1035
			ResolveOffset(const int32* pOffset); // 310
			CResourceArrayBase::GetRawPtr(); // 421
			CResourceArray<RenderMeshBufferData_t>::GetPtr(); // 385
			CResourceArray<RenderMeshBufferData_t>::operator[](
					int nIndex);  // 1042
			CUnlockedResource<RenderMeshInputLayoutField_t>::CUnlockedResource(
						CResourceStream* pStream,
						RenderMeshInputLayoutField_t* pData,
						uint nCount);  // 766
			CResourceStream::AllocateUnaligned<RenderMeshInputLayoutField_t>(
									uint nCount);  // 752
			CResourceStream::GetDataPtr(
					uint nOffset);  // 996
			CUnlockedResource<RenderMeshInputLayoutField_t>::GetPtr(); // 103
			CUnlockedResource<RenderMeshInputLayoutField_t>::operator RenderMeshInputLayoutField_t*(); // 752
			CLockedResource<RenderMeshInputLayoutField_t>::CLockedResource(
					RenderMeshInputLayoutField_t* pData,
					uint nCount);  // 759
			CResourceStream::Allocate<RenderMeshInputLayoutField_t>(
								uint nCount);  // 1045
		}
	}
	{
		int i; // 1051
		{
			IndexBufferHandle_t hIB; // 1053
			BufferDesc_t bufferDesc; // 1054
			int nBufferSizeInBytes; // 1057
			CUtlVector<unsigned char, CUtlMemory<unsigned char, int> > buffer; // 1058
			RenderMeshBufferData_t& data; // 1062
			ResolveOffset(const int32* pOffset); // 310
			CResourceArrayBase::GetRawPtr(); // 421
			CResourceArray<RenderMeshBufferData_t>::GetPtr(); // 385
			CResourceArray<RenderMeshBufferData_t>::operator[](
					int nIndex);  // 1062
			CResourceArray<unsigned char>::operator=(
					const CLockedResource<unsigned char>& lockedResource);  // 1066
			ResolveOffset(const int32* pOffset); // 310
			CResourceArrayBase::GetRawPtr(); // 421
			CResourceArray<unsigned char>::GetPtr(); // 1067
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 75
			V_memcpy(void* dest,
				const void* src,
				int count);  // 1067
			CUtlMemory<unsigned char, int>::Purge(); // 903
			CUtlMemory<unsigned char, int>::Purge(); // 1799
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
			ValidateAlignment<unsigned char>(void); // 508
			CUtlMemory<unsigned char, int>::Purge(); // 510
			CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
			CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 1068
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 530
			CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
			CUtlMemory<unsigned char, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVector(); // 1058
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::SetSize(
				int size);  // 1059
			CUnlockedResource<RenderMeshInputLayoutField_t>::CUnlockedResource(
						CResourceStream* pStream,
						RenderMeshInputLayoutField_t* pData,
						uint nCount);  // 766
			CResourceStream::AllocateUnaligned<RenderMeshInputLayoutField_t>(
									uint nCount);  // 752
			CLockedResource<RenderMeshInputLayoutField_t>::CLockedResource(
					RenderMeshInputLayoutField_t* pData,
					uint nCount);  // 759
			CResourceStream::Allocate<RenderMeshInputLayoutField_t>(
								uint nCount);  // 1063
			CResourceArray<RenderMeshInputLayoutField_t>::operator=(
					const CLockedResource<RenderMeshInputLayoutField_t>& lockedResource);  // 1063
			CUnlockedResource<unsigned char>::CUnlockedResource(
						CResourceStream* pStream,
						unsigned char* pData,
						uint nCount);  // 766
			CResourceStream::AllocateUnaligned<unsigned char>(
							uint nCount);  // 752
			CResourceStream::GetDataPtr(
					uint nOffset);  // 996
			CUnlockedResource<unsigned char>::GetPtr(); // 103
			CUnlockedResource<unsigned char>::operator unsigned char*(); // 752
			CLockedResource<unsigned char>::CLockedResource(
					unsigned char* pData,
					uint nCount);  // 759
			CResourceStream::Allocate<unsigned char>(
						uint nCount);  // 1066
		}
	}
	CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 1011
	CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 1014
	CRenderContextPtr::CRenderContextPtr(
				IRenderDevice* pDevice);  // 1018
	CUnlockedResource<VBIBBlockHeader_t>::CUnlockedResource(
				CResourceStream* pStream,
				VBIBBlockHeader_t* pData,
				uint nCount);  // 766
	CResourceStream::AllocateUnaligned<VBIBBlockHeader_t>(
						uint nCount);  // 752
	CResourceStream::GetDataPtr(
			uint nOffset);  // 996
	CUnlockedResource<VBIBBlockHeader_t>::GetPtr(); // 103
	CUnlockedResource<VBIBBlockHeader_t>::operator VBIBBlockHeader_t*(); // 752
	{
		uint i; // 754
		CResourceArrayBase::CResourceArrayBase(); // 370
		CResourceArray<RenderMeshBufferData_t>::CResourceArray(); // 762
		CResourceArrayBase::CResourceArrayBase(); // 370
		CResourceArray<RenderMeshBufferData_t>::CResourceArray(); // 762
		VBIBBlockHeader_t::VBIBBlockHeader_t(); // 1479
		Construct<VBIBBlockHeader_t>(VBIBBlockHeader_t* pMemory); // 756
	}
	CLockedResource<VBIBBlockHeader_t>::CLockedResource(
			VBIBBlockHeader_t* pData,
			uint nCount);  // 759
	CResourceStream::Allocate<VBIBBlockHeader_t>(
					uint nCount);  // 1021
	CUnlockedResource<RenderMeshBufferData_t>::CUnlockedResource(
				CResourceStream* pStream,
				RenderMeshBufferData_t* pData,
				uint nCount);  // 766
	CResourceStream::AllocateUnaligned<RenderMeshBufferData_t>(
							uint nCount);  // 752
	{
		uint i; // 754
		CResourceArrayBase::CResourceArrayBase(); // 370
		CResourceArray<RenderMeshInputLayoutField_t>::CResourceArray(); // 752
		CResourceArrayBase::CResourceArrayBase(); // 370
		CResourceArray<unsigned char>::CResourceArray(); // 752
		RenderMeshBufferData_t::RenderMeshBufferData_t(); // 1479
		Construct<RenderMeshBufferData_t>(RenderMeshBufferData_t* pMemory); // 756
	}
	CResourceStream::GetDataPtr(
			uint nOffset);  // 996
	CUnlockedResource<RenderMeshBufferData_t>::GetPtr(); // 103
	CUnlockedResource<RenderMeshBufferData_t>::operator RenderMeshBufferData_t*(); // 752
	CLockedResource<RenderMeshBufferData_t>::CLockedResource(
			RenderMeshBufferData_t* pData,
			uint nCount);  // 759
	CResourceStream::Allocate<RenderMeshBufferData_t>(
					uint nCount);  // 1023
	CResourceArray<RenderMeshBufferData_t>::operator=(
			const CLockedResource<RenderMeshBufferData_t>& lockedResource);  // 1023
	CUnlockedResource<RenderMeshBufferData_t>::CUnlockedResource(
				CResourceStream* pStream,
				RenderMeshBufferData_t* pData,
				uint nCount);  // 766
	CResourceStream::AllocateUnaligned<RenderMeshBufferData_t>(
							uint nCount);  // 752
	{
		uint i; // 754
		CResourceArrayBase::CResourceArrayBase(); // 370
		CResourceArray<RenderMeshInputLayoutField_t>::CResourceArray(); // 752
		CResourceArrayBase::CResourceArrayBase(); // 370
		CResourceArray<unsigned char>::CResourceArray(); // 752
		RenderMeshBufferData_t::RenderMeshBufferData_t(); // 1479
		Construct<RenderMeshBufferData_t>(RenderMeshBufferData_t* pMemory); // 756
	}
	CResourceStream::GetDataPtr(
			uint nOffset);  // 996
	CUnlockedResource<RenderMeshBufferData_t>::GetPtr(); // 103
	CUnlockedResource<RenderMeshBufferData_t>::operator RenderMeshBufferData_t*(); // 752
	CLockedResource<RenderMeshBufferData_t>::CLockedResource(
			RenderMeshBufferData_t* pData,
			uint nCount);  // 759
	CResourceStream::Allocate<RenderMeshBufferData_t>(
					uint nCount);  // 1024
	CResourceArray<RenderMeshBufferData_t>::operator=(
			const CLockedResource<RenderMeshBufferData_t>& lockedResource);  // 1024
	CResourceStream::Tell(); // 1071
	CResourceStream::GetDataPtr(
			uint nOffset);  // 1071
	CRenderContextPtr::Release(); // 845
	CRenderContextPtr::~CRenderContextPtr(); // 1074
} /* size: 0, variables: 5, inline expansions: 30 (850 bytes) */

// <01861B9B> sbox/glue_mesh.cpp:1076
// variables: 11
// function calls: 74
void SerializeMeshData(HModel model, int nMesh)
{
	CKeyValues3Context kv3Data; // 1078
	CKV3TransferSaveContext saveCtx; // 1079
	CKV3TransferInterface_ResourceSave resourceSaveInterface; // 1080
	const char   __FUNCTION__; // 48709
	CUtlBuffer* pBuffer; // 1101
	CUtlString errMsg; // 1102
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1085
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 89
		CKV3TransferContextBase::GetErrorMessage(); // 1085
	}
	{
		CKeyValues3Iterator it; // 1089
		{
			KeyValues3* kv; // 1091
			{
				KeyValues3* h; // 1095
				CKV3MemberName::CKV3MemberName<10>(
							const char& str);  // 1095
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 96
				KeyValues3::FindMember(
						CKV3MemberName memberName,
						KeyValues3* pDefaultValue);  // 1095
				KeyValues3::Internal_PrepareForInternalType(
								KeyValues3InternalType_t newType);  // 950
				KeyValues3::Internal_PrepareForType(
							KeyValues3Type_t newType);  // 227
				KeyValues3::SetValueUint64(
						uint64 value);  // 1097
			}
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 260
			KeyValues3::IsTable(); // 1092
		}
		RemoveAll(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 1798
		AlignedByteArrayExplicit_t<4, CKeyValues3Iterator::StackEntry_t, 8>::Base(); // 237
		CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::IsExternallyAllocated(); // 577
		CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::ConvertToExternalMemory(
					StackEntry_t* pMemory,
					int numElements,
					int nCopyElements,
					bool bSetGrowable,
					uint32 nGrowable_GrowSize);  // 207
		CUtlMemoryFixedGrowable_Base<CKeyValues3Iterator::StackEntry_t, int>::Purge_FixedGrowable(
					StackEntry_t* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 203
		CUtlMemoryFixedGrowable_Base<CKeyValues3Iterator::StackEntry_t, int>::Purge_FixedGrowable(
					StackEntry_t* pFixedMemory,
					int nFixedElements,
					int nPurgeToCount);  // 237
		CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int>::Purge(
			int numElements);  // 1799
		CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 368
		ResetDbgInfo(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 1800
		Purge(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 560
		ValidateAlignment<CKeyValues3Iterator::StackEntry_t>(void); // 508
		CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::Purge(); // 903
		CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::Purge(); // 510
		CUtlMemory<CKeyValues3Iterator::StackEntry_t, int>::~CUtlMemory(); // 191
		CUtlMemoryFixedGrowable_Base<CKeyValues3Iterator::StackEntry_t, int>::~CUtlMemoryFixedGrowable_Base(); // 223
		CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int>::~CUtlMemoryFixedGrowable(); // 562
		~CUtlVectorBase(const CUtlVectorBase<CKeyValues3Iterator::StackEntry_t, CUtlMemoryFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4, int this); // 478
		CUtlVectorFixedGrowable<CKeyValues3Iterator::StackEntry_t, 4>::~CUtlVectorFixedGrowable(); // 284
		CKeyValues3Iterator::~CKeyValues3Iterator(); // 1099
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1106
		CUtlString::Get(); // 1106
	}
	CKV3TransferContextBase::AddInterface<CKV3TransferInterface_ResourceSave>(
							CKV3TransferInterface_ResourceSave* pInterface);  // 1081
	CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 1082
	GetPrimaryBinding(void); // 605
	Schema_StaticBinding(void); // 56
	{
		CSchemaClassInfo::HasFlag1(
			SchemaClassFlags1_t nFlag);  // 173
		CSchemaClassInfo::IsAbstractBinding(); // 58
	}
	CSchemaClassInfo::GetName(); // 62
	V_strcpy_safe<256>(char& pDest,
				const char* pSrc);  // 62
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 58
	}
	KV3TransferSchema_ClassName<CRenderMesh>(const CRenderMesh* pObject,
						char& pOutPolymorphicClassName);  // 53
	KV3TransferSchema_ClassName<CRenderMesh>(const CRenderMesh* pObject,
						char& pOutPolymorphicClassName);  // 606
	KV3TransferPolymorphicClassname(const CRenderMesh* pObject,
					char& pOutPolymorphicClassName);  // 135
	GetPolymorphicClassName<CRenderMesh>(const CRenderMesh* pObject,
						char& pOutPolymorphicClassName,
						type *, ...);  // 185
	CUtlStack<KeyValues3::Count(); // 199
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 213
	CKV3TransferSaveContext::SaveClassPointer<CRenderMesh>(
					CRenderMesh* const& pClassInstance,
					KeyValues3* pSaveToValue);  // 172
	CKV3TransferSaveContext::SaveClassPointer<CRenderMesh>(
					CRenderMesh* const& pClassInstance,
					KeyValues3* pSaveToValue);  // 1082
	CUtlString::CUtlString(); // 1102
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 1105
	CUtlString::~CUtlString(); // 1111
	CUtlStack<KeyValues3::Clear(); // 324
	CUtlMemory<KeyValues3::IsExternallyAllocated(); // 905
	CUtlMemory<KeyValues3::Purge(); // 903
	CUtlMemory<KeyValues3::Purge(); // 325
	CUtlStack<KeyValues3::Purge(); // 114
	ValidateAlignment<KeyValues3*>(void); // 508
	CUtlMemory<KeyValues3::Purge(); // 510
	CUtlMemory<KeyValues3::~CUtlMemory(); // 115
	CUtlStack<KeyValues3::~CUtlStack(); // 142
	CBufferString::~CBufferString(); // 81
	CKV3TransferContextBase::~CKV3TransferContextBase(); // 142
	CKV3TransferSaveContext::~CKV3TransferSaveContext(); // 1111
} /* size: 0, variables: 6, inline expansions: 36 (1117 bytes) */

// <0185B676> sbox/glue_mesh.cpp:1113
// variables: 22
// function calls: 492
void SerializeModelData(HModel model)
{
	PermModelData_t data; // 1115
	CKeyValues3Context kv3Data; // 1128
	CKV3TransferSaveContext saveCtx; // 1129
	CKV3TransferInterface_ResourceSave resourceSaveInterface; // 1130
	const char   __FUNCTION__; // 48736
	CUtlBuffer* pBuffer; // 1139
	CUtlString errMsg; // 1140
	{
		int i; // 1118
		{
			const CUtlVector<float, CUtlMemory<float, int> >& switchDistances; // 1124
			CUtlMemory<unsigned char, int>::Base(); // 112
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 368
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::GrowMemory(
					int num);  // 1249
			CUtlMemory<unsigned char, int>::NumAllocated(); // 1247
			CUtlMemory<unsigned char, int>::operator[](
					int i);  // 602
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Element(
				int i);  // 1252
			Construct<unsigned char, unsigned char>(unsigned char* pMemory); // 1252
			CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::AddToTail(
					unsigned char& src);  // 1121
			CUtlMemory<long long unsigned int, int>::Base(); // 112
			CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::Base(); // 368
			CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::ResetDbgInfo(); // 824
			CUtlMemory<long long unsigned int, int>::IsGrowable(); // 823
			CUtlMemory<long long unsigned int, int>::IsExternallyAllocated(); // 859
			CUtlMemory<long long unsigned int, int>::IsExternallyAllocated(); // 861
			CUtlMemory<long long unsigned int, int>::Grow(
				int num);  // 806
			CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::GrowMemory(
					int num);  // 1249
			CUtlMemory<long long unsigned int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::Element(
				int i);  // 1252
			Construct<long long unsigned int, long long unsigned int>(long long unsigned int* pMemory); // 1252
			CUtlMemory<long long unsigned int, int>::NumAllocated(); // 1247
			CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::AddToTail(
					long long unsigned int& src);  // 1120
			CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 1121
			CWeakHandle<InfoForResourceTypeCRenderMesh>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 1122
			CWeakHandle<InfoForResourceTypeCRenderMesh>::GetBinding(); // 476
			CStrongHandle<InfoForResourceTypeCRenderMesh>::Init(
				ResourceHandleTyped_t hResource);  // 476
			CStrongHandle<InfoForResourceTypeCRenderMesh>::CStrongHandle(
					const CWeakHandle<InfoForResourceTypeCRenderMesh>& src);  // 1122
			CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMesh>, int>::NumAllocated(); // 1247
			CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMesh>, int>::Base(); // 112
			Base(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCRenderMesh>, CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMe this); // 368
			ResetDbgInfo(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCRenderMesh>, CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMe this); // 824
			CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMesh>, int>::IsGrowable(); // 823
			CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMesh>, int>::IsExternallyAllocated(); // 859
			CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMesh>, int>::IsExternallyAllocated(); // 861
			CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMesh>, int>::Grow(
				int num);  // 806
			GrowMemory(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCRenderMesh>, CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMe this,
					int num);  // 1249
			CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMesh>, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCRenderMesh>, CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMe this,
				int i);  // 1252
			CStrongHandle<InfoForResourceTypeCRenderMesh>::Shutdown(); // 685
			CStrongHandle<InfoForResourceTypeCRenderMesh>::Move(
				CStrongHandle<InfoForResourceTypeCRenderMesh>& moveSrc);  // 469
			CStrongHandle<InfoForResourceTypeCRenderMesh>::CStrongHandle(
					CStrongHandle<InfoForResourceTypeCRenderMesh>& moveSrc);  // 1514
			Construct<CStrongHandle<InfoForResourceTypeCRenderMesh>, CStrongHandle<InfoForResourceTypeCRenderMesh> >(CStrongHandle<InfoForResourceTypeCRenderMesh>* pMemory); // 1252
			AddToTail(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCRenderMesh>, CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMe this,
					CStrongHandle<InfoForResourceTypeCRenderMesh>& src);  // 1122
			CStrongHandle<InfoForResourceTypeCRenderMesh>::~CStrongHandle(); // 1122
			CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 1124
			CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 1125
			CUtlMemory<float, int>::Base(); // 112
			CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 102
			CUtlVectorBase<float, CUtlMemory<float, int> >::begin(); // 1344
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 85
			V_memcpy(void* dest,
				const void* src,
				ptrdiff_t count);  // 180
			UtlTraitsCopyRange<float>(const float* pFrom,
							const float* pFromEnd,
							float* pTo);  // 173
			UtlTraitsCopyRange<float>(const float* pFrom,
							const float* pFromEnd,
							float* pTo);  // 1344
			CUtlVectorBase<float, CUtlMemory<float, int> >::CopyArray(
					const float* pArray,
					int size);  // 1125
			CUtlMemory<float, int>::Base(); // 113
			CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 1125
			CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 1120
		}
		CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 1118
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1135
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 89
		CKV3TransferContextBase::GetErrorMessage(); // 1135
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1144
		CUtlString::Get(); // 1144
	}
	CUtlString::CUtlString(); // 81
	CUtlString::CUtlString(); // 81
	PermModelInfo_t::PermModelInfo_t(); // 201
	CUtlString::CUtlString(); // 201
	CUtlMemory<PermModelExtPart_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<PermModelExtPart_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<PermModelExtPart_t, CUtlMemory<PermModelExtPart_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<PermModelExtPart_t, CUtlMemory<PermModelExtPart_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<PermModelExtPart_t, CUtlMemory<PermModelExtPart_t, int> >::CUtlVector(); // 201
	CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMesh>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMesh>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCRenderMesh>, CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMe this); // 530
	CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCRenderMesh>, CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMe this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCRenderMesh>, CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMesh>, this); // 201
	CUtlMemory<long long unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<long long unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<long long unsigned int, CUtlMemory<long long unsigned int, int> >::CUtlVector(); // 201
	CUtlMemory<long long unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<long long unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<long long unsigned int, CUtlMemory<long long unsigned int, int> >::CUtlVector(); // 201
	CUtlMemory<unsigned char, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned char, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::CUtlVector(); // 201
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 201
	CUtlMemory<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCP this); // 530
	CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCP this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCPhysA this); // 201
	CUtlMemory<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCP this); // 530
	CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCP this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCPhysA this); // 201
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 530
	CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimatio this); // 201
	CUtlMemory<CStrongHandle<InfoForResourceTypeCSequenceGroupData>, int>::ValidateGrowSize(); // 475
	CUtlMemory<CStrongHandle<InfoForResourceTypeCSequenceGroupData>, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCSequenceGroupData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCS this); // 530
	CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCSequenceGroupData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCS this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCSequenceGroupData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCSeque this); // 201
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 201
	CUtlMemory<MaterialGroup_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<MaterialGroup_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<MaterialGroup_t, CUtlMemory<MaterialGroup_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<MaterialGroup_t, CUtlMemory<MaterialGroup_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<MaterialGroup_t, CUtlMemory<MaterialGroup_t, int> >::CUtlVector(); // 201
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 29
	CUtlMemory<short int, int>::ValidateGrowSize(); // 475
	CUtlMemory<short int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<short int, CUtlMemory<short int, int> >::CUtlVector(); // 29
	CUtlMemory<float, int>::ValidateGrowSize(); // 475
	CUtlMemory<float, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 29
	CUtlMemory<unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::CUtlVector(); // 29
	CUtlMemory<Vector, int>::ValidateGrowSize(); // 475
	CUtlMemory<Vector, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Vector, CUtlMemory<Vector, int> >::CUtlVector(); // 29
	CUtlMemory<Quaternion, int>::ValidateGrowSize(); // 475
	CUtlMemory<Quaternion, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >::CUtlVector(); // 29
	ModelSkeletonData_t::ModelSkeletonData_t(); // 201
	CUtlMemory<short int, int>::ValidateGrowSize(); // 475
	CUtlMemory<short int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<short int, CUtlMemory<short int, int> >::CUtlVector(); // 201
	CUtlMemory<short unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<short unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >::CUtlVector(); // 201
	CUtlMemory<ModelBoneFlexDriver_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<ModelBoneFlexDriver_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<ModelBoneFlexDriver_t, CUtlMemory<ModelBoneFlexDriver_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<ModelBoneFlexDriver_t, CUtlMemory<ModelBoneFlexDriver_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<ModelBoneFlexDriver_t, CUtlMemory<ModelBoneFlexDriver_t, int> >::CUtlVector(); // 201
	CUtlMemory<CUtlString, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlString, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::CUtlVector(); // 201
	PermModelData_t::PermModelData_t(); // 1115
	CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 1116
	CUtlString::operator=(
			const char* src);  // 1116
	CKV3TransferContextBase::AddInterface<CKV3TransferInterface_ResourceSave>(
							CKV3TransferInterface_ResourceSave* pInterface);  // 1131
	CUtlStack<KeyValues3::Count(); // 199
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 213
	CKV3TransferSaveContext::SaveClassPointer<CRenderMesh>(
					CRenderMesh* const& pClassInstance,
					KeyValues3* pSaveToValue);  // 172
	CKV3TransferSaveContext::SaveClassPointer<PermModelData_t>(
						PermModelData_t* const& pClassInstance,
						KeyValues3* pSaveToValue);  // 1132
	CUtlString::CUtlString(); // 1140
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 1143
	CUtlString::~CUtlString(); // 1149
	CUtlStack<KeyValues3::Clear(); // 324
	CUtlMemory<KeyValues3::IsExternallyAllocated(); // 905
	CUtlMemory<KeyValues3::Purge(); // 903
	CUtlMemory<KeyValues3::Purge(); // 325
	CUtlStack<KeyValues3::Purge(); // 114
	ValidateAlignment<KeyValues3*>(void); // 508
	CUtlMemory<KeyValues3::Purge(); // 510
	CUtlMemory<KeyValues3::~CUtlMemory(); // 115
	CUtlStack<KeyValues3::~CUtlStack(); // 142
	CBufferString::~CBufferString(); // 81
	CKV3TransferContextBase::~CKV3TransferContextBase(); // 142
	CKV3TransferSaveContext::~CKV3TransferSaveContext(); // 1149
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	ValidateAlignment<CUtlString>(void); // 508
	CUtlMemory<CUtlString, int>::Purge(); // 510
	CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 195
	CUtlMemory<ModelBoneFlexDriver_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<ModelBoneFlexDriver_t, int>::Purge(); // 903
	CUtlMemory<ModelBoneFlexDriver_t, int>::Purge(); // 1799
	CUtlVectorBase<ModelBoneFlexDriver_t, CUtlMemory<ModelBoneFlexDriver_t, int> >::Purge(); // 560
	ValidateAlignment<ModelBoneFlexDriver_t>(void); // 508
	CUtlMemory<ModelBoneFlexDriver_t, int>::Purge(); // 510
	CUtlMemory<ModelBoneFlexDriver_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<ModelBoneFlexDriver_t, CUtlMemory<ModelBoneFlexDriver_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<ModelBoneFlexDriver_t, CUtlMemory<ModelBoneFlexDriver_t, int> >::~CUtlVector(); // 195
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<short unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<short unsigned int, int>::Purge(); // 903
	CUtlMemory<short unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Purge(); // 560
	ValidateAlignment<short unsigned int>(void); // 508
	CUtlMemory<short unsigned int, int>::Purge(); // 510
	CUtlMemory<short unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >::~CUtlVector(); // 195
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::RemoveAll(); // 1798
	CUtlMemory<short int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<short int, int>::Purge(); // 903
	CUtlMemory<short int, int>::Purge(); // 1799
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Purge(); // 560
	ValidateAlignment<short int>(void); // 508
	CUtlMemory<short int, int>::Purge(); // 510
	CUtlMemory<short int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<short int, CUtlMemory<short int, int> >::~CUtlVector(); // 195
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::RemoveAll(); // 1798
	CUtlMemory<Quaternion, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Quaternion, int>::Purge(); // 903
	CUtlMemory<Quaternion, int>::Purge(); // 1799
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Purge(); // 560
	ValidateAlignment<Quaternion>(void); // 508
	CUtlMemory<Quaternion, int>::Purge(); // 510
	CUtlMemory<Quaternion, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >::~CUtlVector(); // 29
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::RemoveAll(); // 1798
	CUtlMemory<Vector, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Vector, int>::Purge(); // 903
	CUtlMemory<Vector, int>::Purge(); // 1799
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Purge(); // 560
	ValidateAlignment<Vector>(void); // 508
	CUtlMemory<Vector, int>::Purge(); // 510
	CUtlMemory<Vector, int>::~CUtlMemory(); // 562
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase(); // 410
	CUtlVector<Vector, CUtlMemory<Vector, int> >::~CUtlVector(); // 29
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned int, int>::Purge(); // 903
	CUtlMemory<unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Purge(); // 560
	ValidateAlignment<unsigned int>(void); // 508
	CUtlMemory<unsigned int, int>::Purge(); // 510
	CUtlMemory<unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> >::~CUtlVector(); // 29
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 29
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::RemoveAll(); // 1798
	CUtlMemory<short int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<short int, int>::Purge(); // 903
	CUtlMemory<short int, int>::Purge(); // 1799
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Purge(); // 560
	ValidateAlignment<short int>(void); // 508
	CUtlMemory<short int, int>::Purge(); // 510
	CUtlMemory<short int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<short int, CUtlMemory<short int, int> >::~CUtlVector(); // 29
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	ValidateAlignment<CUtlString>(void); // 508
	CUtlMemory<CUtlString, int>::Purge(); // 510
	CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 29
	ModelSkeletonData_t::~ModelSkeletonData_t(); // 195
	{
		int i; // 1721
		CUtlMemory<MaterialGroup_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<MaterialGroup_t, CUtlMemory<MaterialGroup_t, int> >::Element(
			int i);  // 1723
		{
			int i; // 1721
			CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2 this,
				int i);  // 1723
			CStrongHandle<InfoForResourceTypeIMaterial2>::~CStrongHandle(); // 1526
			Destruct<CStrongHandle<InfoForResourceTypeIMaterial2> >(CStrongHandle<InfoForResourceTypeIMaterial2>* pMemory); // 1723
		}
		RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2 this); // 1798
		CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::Purge(); // 903
		CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::Purge(); // 1799
		Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2 this); // 560
		ValidateAlignment<CStrongHandle<InfoForResourceTypeIMaterial2> >(void); // 508
		CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::Purge(); // 510
		CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::~CUtlMemory(); // 562
		~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2 this); // 410
		~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, i this); // 20
		CUtlString::~CUtlString(); // 20
		MaterialGroup_t::~MaterialGroup_t(); // 1526
		Destruct<MaterialGroup_t>(MaterialGroup_t* pMemory); // 1723
	}
	CUtlVectorBase<MaterialGroup_t, CUtlMemory<MaterialGroup_t, int> >::RemoveAll(); // 1798
	CUtlMemory<MaterialGroup_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<MaterialGroup_t, int>::Purge(); // 903
	CUtlMemory<MaterialGroup_t, int>::Purge(); // 1799
	CUtlVectorBase<MaterialGroup_t, CUtlMemory<MaterialGroup_t, int> >::Purge(); // 560
	ValidateAlignment<MaterialGroup_t>(void); // 508
	CUtlMemory<MaterialGroup_t, int>::Purge(); // 510
	CUtlMemory<MaterialGroup_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<MaterialGroup_t, CUtlMemory<MaterialGroup_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<MaterialGroup_t, CUtlMemory<MaterialGroup_t, int> >::~CUtlVector(); // 195
	{
		int i; // 1721
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 1526
		Destruct<CUtlString>(CUtlString* pMemory); // 1723
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::RemoveAll(); // 1798
	CUtlMemory<CUtlString, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlString, int>::Purge(); // 903
	CUtlMemory<CUtlString, int>::Purge(); // 1799
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Purge(); // 560
	ValidateAlignment<CUtlString>(void); // 508
	CUtlMemory<CUtlString, int>::Purge(); // 510
	CUtlMemory<CUtlString, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::~CUtlVector(); // 195
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCSequenceGroupData>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCSequenceGroupData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCS this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCSequenceGroupData>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCSequenceGroupData> >(CStrongHandle<InfoForResourceTypeCSequenceGroupData>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCSequenceGroupData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCS this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCSequenceGroupData>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCSequenceGroupData>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCSequenceGroupData>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCSequenceGroupData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCS this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCSequenceGroupData> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCSequenceGroupData>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCSequenceGroupData>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCSequenceGroupData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCS this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCSequenceGroupData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCSeque this); // 195
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCAnimationGroup>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(CStrongHandle<InfoForResourceTypeCAnimationGroup>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCAnimationGroup> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnim this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimatio this); // 195
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCP this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCPhysAggregateData>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCPhysAggregateData> >(CStrongHandle<InfoForResourceTypeCPhysAggregateData>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCP this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCP this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCPhysAggregateData> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCP this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCPhysA this); // 195
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCP this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCPhysAggregateData>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCPhysAggregateData> >(CStrongHandle<InfoForResourceTypeCPhysAggregateData>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCP this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCP this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCPhysAggregateData> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCP this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, CUtlMemory<CStrongHandle<InfoForResourceTypeCPhysA this); // 195
	CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveAll(); // 1798
	CUtlMemory<float, int>::IsExternallyAllocated(); // 905
	CUtlMemory<float, int>::Purge(); // 903
	CUtlMemory<float, int>::Purge(); // 1799
	CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
	ValidateAlignment<float>(void); // 508
	CUtlMemory<float, int>::Purge(); // 510
	CUtlMemory<float, int>::~CUtlMemory(); // 562
	CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
	CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 195
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::RemoveAll(); // 1798
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 1799
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Purge(); // 560
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 562
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVectorBase(); // 410
	CUtlVector<unsigned char, CUtlMemory<unsigned char, int> >::~CUtlVector(); // 195
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<long long unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<long long unsigned int, int>::Purge(); // 903
	CUtlMemory<long long unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::Purge(); // 560
	ValidateAlignment<long long unsigned int>(void); // 508
	CUtlMemory<long long unsigned int, int>::Purge(); // 510
	CUtlMemory<long long unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<long long unsigned int, CUtlMemory<long long unsigned int, int> >::~CUtlVector(); // 195
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::RemoveAll(); // 1798
	CUtlMemory<long long unsigned int, int>::IsExternallyAllocated(); // 905
	CUtlMemory<long long unsigned int, int>::Purge(); // 903
	CUtlMemory<long long unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::Purge(); // 560
	ValidateAlignment<long long unsigned int>(void); // 508
	CUtlMemory<long long unsigned int, int>::Purge(); // 510
	CUtlMemory<long long unsigned int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<long long unsigned int, CUtlMemory<long long unsigned int, int> >::~CUtlVector(); // 195
	{
		int i; // 1721
		CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMesh>, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCRenderMesh>, CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMe this,
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCRenderMesh>::~CStrongHandle(); // 1526
		Destruct<CStrongHandle<InfoForResourceTypeCRenderMesh> >(CStrongHandle<InfoForResourceTypeCRenderMesh>* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCRenderMesh>, CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMe this); // 1798
	CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMesh>, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMesh>, int>::Purge(); // 903
	CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMesh>, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCRenderMesh>, CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMe this); // 560
	ValidateAlignment<CStrongHandle<InfoForResourceTypeCRenderMesh> >(void); // 508
	CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMesh>, int>::Purge(); // 510
	CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMesh>, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCRenderMesh>, CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMe this); // 410
	~CUtlVector(const CUtlVector<CStrongHandle<InfoForResourceTypeCRenderMesh>, CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMesh>, this); // 195
	{
		int i; // 1721
		CUtlMemory<PermModelExtPart_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<PermModelExtPart_t, CUtlMemory<PermModelExtPart_t, int> >::Element(
			int i);  // 1723
		CStrongHandle<InfoForResourceTypeCModel>::~CStrongHandle(); // 137
		CUtlString::~CUtlString(); // 137
		PermModelExtPart_t::~PermModelExtPart_t(); // 1526
		Destruct<PermModelExtPart_t>(PermModelExtPart_t* pMemory); // 1723
	}
	CUtlVectorBase<PermModelExtPart_t, CUtlMemory<PermModelExtPart_t, int> >::RemoveAll(); // 1798
	CUtlMemory<PermModelExtPart_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<PermModelExtPart_t, int>::Purge(); // 903
	CUtlMemory<PermModelExtPart_t, int>::Purge(); // 1799
	CUtlVectorBase<PermModelExtPart_t, CUtlMemory<PermModelExtPart_t, int> >::Purge(); // 560
	ValidateAlignment<PermModelExtPart_t>(void); // 508
	CUtlMemory<PermModelExtPart_t, int>::Purge(); // 510
	CUtlMemory<PermModelExtPart_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<PermModelExtPart_t, CUtlMemory<PermModelExtPart_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<PermModelExtPart_t, CUtlMemory<PermModelExtPart_t, int> >::~CUtlVector(); // 195
	CUtlString::~CUtlString(); // 81
	CUtlString::~CUtlString(); // 81
	PermModelInfo_t::~PermModelInfo_t(); // 195
	CUtlString::~CUtlString(); // 195
	PermModelData_t::~PermModelData_t(); // 1149
} /* size: 0, variables: 7, inline expansions: 370 (14414 bytes) */

