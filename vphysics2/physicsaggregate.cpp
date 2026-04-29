
//
// vphysics2/physicsaggregate.cpp
//
//	referenced by: libengine2.so
//
//	functions: 68
//

// <00D1B81E> vphysics2/physicsaggregate.cpp:16
// function calls: 13
void CPhysAggregateInstance::CPhysAggregateInstance(CPhysicsWorld* pWorld)
{
	IPhysAggregateInstance::IPhysAggregateInstance(); // 19
	CManagedHandle::CManagedHandle(); // 19
	CSmartPtr<const CPhysAggregateData, CRefCountAccessor>::CSmartPtr(); // 19
	CUtlMemory<IPhysicsBody::ValidateGrowSize(); // 475
	CUtlMemory<IPhysicsBody::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<IPhysicsBody::ResetDbgInfo(); // 530
	CUtlVectorBase<IPhysicsBody::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<IPhysicsBody::CUtlVector(); // 19
	CUtlMemory<IPhysicsJoint::ValidateGrowSize(); // 475
	CUtlMemory<IPhysicsJoint::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<IPhysicsJoint::ResetDbgInfo(); // 530
	CUtlVectorBase<IPhysicsJoint::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<IPhysicsJoint::CUtlVector(); // 19
} /* size: 200, inline expansions: 13 (178 bytes) */

// <00D1B7F9> vphysics2/physicsaggregate.cpp:16
void CPhysAggregateInstance::CPhysAggregateInstance(CPhysicsWorld* pWorld)
{
} /* size: 0 */

// <00D1AF31> vphysics2/physicsaggregate.cpp:24
// function calls: 36
void CPhysAggregateInstance::CPhysAggregateInstance(CPhysicsWorld* pWorld, const CPhysAggregateData* pAggregateData, const CTransform& tm, uint64 nGameHandle, VPhysicsMotionType_t nMotionType)
{
	AddRef<const CPhysAggregateData>(const CPhysAggregateData* pObj); // 366
	Release<const CPhysAggregateData>(const CPhysAggregateData* pObj); // 370
	CSmartPtr<const CPhysAggregateData, CRefCountAccessor>::operator=(
			const CPhysAggregateData* pObj);  // 319
	CSmartPtr<const CPhysAggregateData, CRefCountAccessor>::CSmartPtr(
			const CPhysAggregateData* pObj);  // 26
	IPhysAggregateInstance::IPhysAggregateInstance(); // 26
	CUtlMemory<IPhysicsBody::ValidateGrowSize(); // 475
	CUtlMemory<IPhysicsBody::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<IPhysicsBody::ResetDbgInfo(); // 530
	CUtlVectorBase<IPhysicsBody::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<IPhysicsBody::CUtlVector(); // 26
	CUtlMemory<IPhysicsJoint::ValidateGrowSize(); // 475
	CUtlMemory<IPhysicsJoint::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<IPhysicsJoint::ResetDbgInfo(); // 530
	CUtlVectorBase<IPhysicsJoint::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<IPhysicsJoint::CUtlVector(); // 26
	CManagedHandle::CManagedHandle(); // 26
	CSmartPtr<const CPhysAggregateData, CRefCountAccessor>::operator->(); // 28
	CUtlVectorBase<const VPhysXBodyPart_t::Count(); // 241
	CPhysAggregateData::GetPartCount(); // 28
	CUtlMemory<IPhysicsBody::Base(); // 112
	CUtlVectorBase<IPhysicsBody::Base(); // 368
	CUtlVectorBase<IPhysicsBody::ResetDbgInfo(); // 824
	CUtlVectorBase<IPhysicsBody::GrowMemory(
			int num);  // 784
	CUtlVectorBase<IPhysicsBody::GrowVector(
			int num);  // 1445
	CUtlVectorBase<IPhysicsBody::InsertMultipleBefore(
				int elem,
				int num);  // 1437
	CUtlVectorBase<IPhysicsBody::InsertMultipleBefore(
				int elem,
				int num);  // 1294
	CUtlVectorBase<IPhysicsBody::AddMultipleToTail(
				int num);  // 1319
	CUtlVectorBase<IPhysicsBody::SetCount(
		int count);  // 28
	_mm_cvtss_f32(__m128 __A); // 1553
	GetWSIMD<>(fltx4 a); // 83
	VectorAligned::w(); // 31
	CUtlVectorBase<IPhysicsBody::end(); // 29
	CUtlVectorBase<IPhysicsBody::begin(); // 29
	__fill_a1<IPhysicsBody**, std::nullptr_t>(IPhysicsBody** __first,
							IPhysicsBody** __last,
							const void& __value);  // 979
	__fill_a<IPhysicsBody**, std::nullptr_t>(IPhysicsBody** __first,
						IPhysicsBody** __last,
						const void& __value);  // 1011
	fill<IPhysicsBody**, std::nullptr_t>(IPhysicsBody** __first,
						IPhysicsBody** __last,
						const void& __value);  // 29
} /* size: 368, inline expansions: 36 (496 bytes) */

// <00D1AEDD> vphysics2/physicsaggregate.cpp:24
void CPhysAggregateInstance::CPhysAggregateInstance(CPhysicsWorld* pWorld, const CPhysAggregateData* pAggregateData, const CTransform& tm, uint64 nGameHandle, VPhysicsMotionType_t nMotionType)
{
} /* size: 0 */

// <00D1A9A9> vphysics2/physicsaggregate.cpp:41
// function calls: 25
void CPhysAggregateInstance::~CPhysAggregateInstance()
{
	Release<const CPhysAggregateData>(const CPhysAggregateData* pObj); // 370
	CSmartPtr<const CPhysAggregateData, CRefCountAccessor>::operator=(
			const CPhysAggregateData* pObj);  // 45
	CManagedHandle::~CManagedHandle(); // 46
	CUtlVectorBase<IPhysicsJoint::RemoveAll(); // 1798
	CUtlMemory<IPhysicsJoint::IsExternallyAllocated(); // 905
	CUtlMemory<IPhysicsJoint::Purge(); // 903
	CUtlMemory<IPhysicsJoint::Purge(); // 1799
	CUtlVectorBase<IPhysicsJoint::Purge(); // 560
	ValidateAlignment<IPhysicsJoint*>(void); // 508
	CUtlMemory<IPhysicsJoint::Purge(); // 510
	CUtlMemory<IPhysicsJoint::~CUtlMemory(); // 562
	CUtlVectorBase<IPhysicsJoint::~CUtlVectorBase(); // 410
	CUtlVector<IPhysicsJoint::~CUtlVector(); // 46
	CUtlVectorBase<IPhysicsBody::RemoveAll(); // 1798
	CUtlMemory<IPhysicsBody::IsExternallyAllocated(); // 905
	CUtlMemory<IPhysicsBody::Purge(); // 903
	CUtlMemory<IPhysicsBody::Purge(); // 1799
	CUtlVectorBase<IPhysicsBody::Purge(); // 560
	ValidateAlignment<IPhysicsBody*>(void); // 508
	CUtlMemory<IPhysicsBody::Purge(); // 510
	CUtlMemory<IPhysicsBody::~CUtlMemory(); // 562
	CUtlVectorBase<IPhysicsBody::~CUtlVectorBase(); // 410
	CUtlVector<IPhysicsBody::~CUtlVector(); // 46
	Release<const CPhysAggregateData>(const CPhysAggregateData* pObj); // 344
	CSmartPtr<const CPhysAggregateData, CRefCountAccessor>::~CSmartPtr(); // 46
} /* size: 149, inline expansions: 25 (325 bytes) */

// <00D1A942> vphysics2/physicsaggregate.cpp:41
void CPhysAggregateInstance::~CPhysAggregateInstance()
{
} /* size: 36 */

// <00D1A703> vphysics2/physicsaggregate.cpp:48
// variables: 2
// function calls: 8
void CPhysAggregateInstance::Clear()
{
	{
		int i; // 50
		CUtlVectorBase<IPhysicsJoint::Count(); // 50
		CUtlMemory<IPhysicsJoint::operator[](
				int i);  // 588
		CUtlVectorBase<IPhysicsJoint::operator[](
				int i);  // 52
	}
	{
		int i; // 55
		CUtlVectorBase<IPhysicsBody::Count(); // 55
		CUtlMemory<IPhysicsBody::operator[](
				int i);  // 588
		CUtlVectorBase<IPhysicsBody::operator[](
				int i);  // 57
	}
	CUtlVectorBase<IPhysicsJoint::RemoveAll(); // 60
	CUtlVectorBase<IPhysicsBody::RemoveAll(); // 61
} /* size: 130, inline expansions: 2 (14 bytes) */

// <00D1A611> vphysics2/physicsaggregate.cpp:64
// function calls: 4
void CPhysAggregateInstance::IsEmpty()
{
	CUtlVectorBase<IPhysicsBody::Count(); // 135
	CUtlVectorBase<IPhysicsBody::IsEmpty(); // 66
	CUtlVectorBase<IPhysicsJoint::Count(); // 135
	CUtlVectorBase<IPhysicsJoint::IsEmpty(); // 66
} /* size: 22, inline expansions: 4 (0 bytes) */

// <00D1A3E0> vphysics2/physicsaggregate.cpp:69
// variables: 4
// function calls: 5
void CPhysAggregateInstance::SetSurfaceProperties(CUtlStringToken surfaceProp)
{
	RnMaterial_t material; // 74
	bool bFound; // 75
	{
		int nBody; // 78
		{
			IPhysicsBody* pBody; // 80
			CUtlMemory<IPhysicsBody::operator[](
					int i);  // 588
			CUtlVectorBase<IPhysicsBody::operator[](
					int i);  // 80
		}
		CUtlVectorBase<IPhysicsBody::Count(); // 78
	}
	RnMaterial_t::RnMaterial_t(); // 74
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 71
} /* size: 200, variables: 2, inline expansions: 2 (33 bytes) */

// <00D1A067> vphysics2/physicsaggregate.cpp:89
// variables: 5
// function calls: 11
void CPhysAggregateInstance::GetMassCenter()
{
	float flTotalMass; // 91
	Vector vCenterMulMass; // 92
	{
		int i; // 94
		{
			IPhysicsBody* pBody; // 96
			{
				float flMass; // 99
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::Vector(); // 1450
				Vector::operator*(
						float fl);  // 1478
				operator*(float fl,
						const Vector& v);  // 101
				Vector::operator+=(
						const Vector& v);  // 101
			}
			CUtlMemory<IPhysicsBody::operator[](
					int i);  // 595
			CUtlVectorBase<IPhysicsBody::operator[](
					int i);  // 96
		}
		CUtlVectorBase<IPhysicsBody::Count(); // 94
	}
	Vector::Vector(); // 1464
	VectorDivide(const Vector& a,
			vec_t b,
			Vector& c);  // 1465
	Vector::operator/(
			float fl);  // 105
} /* size: 327, variables: 2, inline expansions: 3 (84 bytes) */

// <00D1A039> vphysics2/physicsaggregate.cpp:108
void CPhysAggregateInstance::GetWorld()
{
} /* size: 9 */

// <00D1E2F8> vphysics2/physicsaggregate.cpp:113
// variable: 1
uint SetBodyMotionType(IPhysicsBody* pBody, VPhysicsMotionType_t nMotionType, const VPhysXBodyPart_t* pBodyPart)
{
	uint nPartFlags; // 115
} /* size: 78, variables: 1 */

// <00D19FA7> vphysics2/physicsaggregate.cpp:144
// variables: 2
void GetPhysicsMaterial(RnMaterial_t& out, const CPhysAggregateData* pAggregateData, int nSurfacePropertyIndex)
{
	{
		const IPhysSurfacePropertyController* pSurfaceController; // 146
		{
			const CPhysSurfaceProperties* pSurfaceProperty; // 148
		}
	}
} /* size: 0 */

// <00D19DAD> vphysics2/physicsaggregate.cpp:153
// variables: 30
void SetBodyShapesAndFlags(IPhysicsBody* pBody, const VPhysXBodyPart_t* pBodyPart, const CPhysAggregateData* pAggregateData, VPhysicsMotionType_t nMotionType, float flScale)
{
	const VPhysics2ShapeDef_t& shapeDef; // 155
	float flMass; // 220
	{
		int nSphere; // 157
		{
			const RnSphere_t& sphere; // 159
			Vector vCenter; // 160
			float flRadius; // 161
			{
				IPhysicsShape* pShape; // 162
				{
					int nSurfacePropertyIndex; // 164
					RnMaterial_t material; // 165
				}
			}
		}
	}
	{
		int nCapsule; // 171
		{
			const RnCapsule_t& capsule; // 173
			Vector vCenter1; // 174
			Vector vCenter2; // 175
			float flRadius; // 176
			{
				IPhysicsShape* pShape; // 177
				{
					int nSurfacePropertyIndex; // 179
					RnMaterial_t material; // 180
				}
			}
		}
	}
	{
		int nHull; // 186
		{
			const RnHull_t* pHull; // 188
			{
				IPhysicsShape* pShape; // 189
				{
					int nSurfacePropertyIndex; // 191
					RnMaterial_t material; // 192
				}
			}
		}
	}
	{
		int nMesh; // 198
		{
			const RnMesh_t* pMesh; // 200
			{
				CPhysicsShape* pShape; // 201
				{
					int nSurfacePropertyIndex; // 203
					RnMaterial_t material; // 204
					{
						int nSurfaceCount; // 210
						{
							int nSurfaceIndex; // 211
							{
								const CPhysSurfaceProperties* pSurfaceProperty; // 213
							}
						}
					}
				}
			}
		}
	}
} /* size: 0, variables: 2 */

// <00D17CFF> vphysics2/physicsaggregate.cpp:250
// variables: 50
// function calls: 111
void CPhysAggregateInstance::BuildBodies(const CTransform& tm, VPhysicsMotionType_t nMotionType)
{
	int nBodyCount; // 252
	{
		int nBody; // 254
		{
			CTransform tx; // 259
			const char* pBoneName; // 260
			const VPhysXBodyPart_t* pBodyPart; // 275
			IPhysicsBody* pBody; // 277
			{
				matrix3x4_t tmStart; // 263
				matrix3x4_t tmBind; // 264
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
				TransformMatrix(const CTransform& in); // 263
				CSmartPtr<const CPhysAggregateData, CRefCountAccessor>::operator->(); // 264
				matrix3x4_t::matrix3x4_t(); // 977
				ConcatTransforms(const matrix3x4_t& in1,
						const matrix3x4_t& in2);  // 265
				CUtlMemory<matrix3x4_t, int>::operator[](
						int i);  // 257
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
						const matrix3x4_t& src);  // 257
				CPhysAggregateData::GetScaledBindPose(
							uint i,
							float flScale);  // 264
				matrix3x4_t::matrix3x4_t(); // 753
				MatrixPosition(const matrix3x4_t& matrix,
						Vector& position);  // 757
				MatrixQuaternion(const matrix3x4_t& mat,
						Quaternion& q,
						Vector& o,
						float& flScale);  // 308
				Quaternion::Quaternion(); // 305
				Vector::Vector(); // 306
				QuaternionAligned::operator=(
						const Quaternion& vOther);  // 309
				CTransform::InitFromMatrix(
						const matrix3x4_t& xform);  // 530
				VectorAligned::VectorAligned(); // 31
				QuaternionAligned::QuaternionAligned(); // 31
				CTransform::CTransform(); // 529
				matrix3x4_t::ToCTransform(); // 267
				CSmartPtr<const CPhysAggregateData, CRefCountAccessor>::operator->(); // 268
				CUtlVectorUltraConservative<char const::operator[](
						int i);  // 246
				CPhysAggregateData::GetBoneName(
						int nBoneIndex);  // 268
			}
			CUtlMemory<IPhysicsBody::operator[](
					int i);  // 588
			CUtlVectorBase<IPhysicsBody::operator[](
					int i);  // 256
			VectorAligned::VectorAligned(); // 31
			QuaternionAligned::QuaternionAligned(); // 31
			CTransform::CTransform(); // 259
			CSmartPtr<const CPhysAggregateData, CRefCountAccessor>::operator->(); // 261
			CUtlMemory<short unsigned int, int>::Count(); // 225
			CUtlMemory<unsigned int, int>::Count(); // 225
			CUtlMemory<matrix3x4_t, int>::Count(); // 225
			{
			}
			CUtlMemory<unsigned int, int>::Count(); // 227
			CPhysAggregateData::GetBoneCount(); // 261
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					const CTransform  &);  // 272
			_mm_cvtss_f32(__m128 __A); // 1534
			GetZSIMD<>(fltx4 a); // 76
			VectorAligned::z(); // 40
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 279
			CSmartPtr<const CPhysAggregateData, CRefCountAccessor>::operator->(); // 275
			CUtlMemoryConservative<const VPhysXBodyPart_t::Base(); // 366
			CUtlMemoryConservative<const VPhysXBodyPart_t::operator[](
					int i);  // 595
			CUtlVectorBase<const VPhysXBodyPart_t::operator[](
					int i);  // 275
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 41
			QuaternionAligned::operator Quaternion(); // 279
			CUtlMemory<IPhysicsBody::operator[](
					int i);  // 588
			CUtlVectorBase<IPhysicsBody::operator[](
					int i);  // 287
			{
				int nSphere; // 157
				CUtlVectorBase<RnSphereDesc_t, CUtlMemory<RnSphereDesc_t, int> >::Count(); // 157
				{
					const RnSphere_t& sphere; // 159
					Vector vCenter; // 160
					float flRadius; // 161
					CUtlMemory<RnSphereDesc_t, int>::operator[](
							int i);  // 595
					CUtlVectorBase<RnSphereDesc_t, CUtlMemory<RnSphereDesc_t, int> >::operator[](
							int i);  // 159
					{
						IPhysicsShape* pShape; // 162
						{
							int nSurfacePropertyIndex; // 164
							RnMaterial_t material; // 165
							CUtlMemory<RnSphereDesc_t, int>::operator[](
									int i);  // 595
							CUtlVectorBase<RnSphereDesc_t, CUtlMemory<RnSphereDesc_t, int> >::operator[](
									int i);  // 164
							{
								const IPhysSurfacePropertyController* pSurfaceController; // 146
							}
							{
								const IPhysSurfacePropertyController* pSurfaceController; // 146
								{
									const CPhysSurfaceProperties* pSurfaceProperty; // 148
								}
							}
							GetPhysicsMaterial(RnMaterial_t& out,
										const CPhysAggregateData* pAggregateData,
										int nSurfacePropertyIndex);  // 144
							GetPhysicsMaterial(RnMaterial_t& out,
										const CPhysAggregateData* pAggregateData,
										int nSurfacePropertyIndex);  // 166
							RnMaterial_t::RnMaterial_t(); // 165
						}
					}
					VectorMultiply(const Vector& a,
							vec_t b,
							Vector& c);  // 1451
					Vector::Vector(); // 1450
					Vector::operator*(
							float fl);  // 160
				}
			}
			{
				int nCapsule; // 171
				CUtlVectorBase<RnCapsuleDesc_t, CUtlMemory<RnCapsuleDesc_t, int> >::Count(); // 171
				{
					const RnCapsule_t& capsule; // 173
					Vector vCenter1; // 174
					Vector vCenter2; // 175
					float flRadius; // 176
					CUtlMemory<RnCapsuleDesc_t, int>::operator[](
							int i);  // 595
					CUtlVectorBase<RnCapsuleDesc_t, CUtlMemory<RnCapsuleDesc_t, int> >::operator[](
							int i);  // 173
					{
						IPhysicsShape* pShape; // 177
						{
							int nSurfacePropertyIndex; // 179
							RnMaterial_t material; // 180
							CUtlMemory<RnCapsuleDesc_t, int>::operator[](
									int i);  // 595
							CUtlVectorBase<RnCapsuleDesc_t, CUtlMemory<RnCapsuleDesc_t, int> >::operator[](
									int i);  // 179
							{
								const IPhysSurfacePropertyController* pSurfaceController; // 146
							}
							{
								const IPhysSurfacePropertyController* pSurfaceController; // 146
								{
									const CPhysSurfaceProperties* pSurfaceProperty; // 148
								}
							}
							GetPhysicsMaterial(RnMaterial_t& out,
										const CPhysAggregateData* pAggregateData,
										int nSurfacePropertyIndex);  // 144
							GetPhysicsMaterial(RnMaterial_t& out,
										const CPhysAggregateData* pAggregateData,
										int nSurfacePropertyIndex);  // 181
							RnMaterial_t::RnMaterial_t(); // 180
						}
					}
					VectorMultiply(const Vector& a,
							vec_t b,
							Vector& c);  // 1451
					Vector::Vector(); // 1450
					Vector::operator*(
							float fl);  // 174
					Vector::Vector(); // 1450
					VectorMultiply(const Vector& a,
							vec_t b,
							Vector& c);  // 1451
					Vector::operator*(
							float fl);  // 175
				}
			}
			{
				int nHull; // 186
				CUtlVectorBase<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >::Count(); // 186
				{
					const RnHull_t* pHull; // 188
					CUtlMemory<RnHullDesc_t, int>::operator[](
							int i);  // 595
					CUtlVectorBase<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >::operator[](
							int i);  // 188
					{
						IPhysicsShape* pShape; // 189
						{
							int nSurfacePropertyIndex; // 191
							RnMaterial_t material; // 192
							CUtlMemory<RnHullDesc_t, int>::operator[](
									int i);  // 595
							CUtlVectorBase<RnHullDesc_t, CUtlMemory<RnHullDesc_t, int> >::operator[](
									int i);  // 191
							RnMaterial_t::RnMaterial_t(); // 192
							{
								const IPhysSurfacePropertyController* pSurfaceController; // 146
							}
							{
								const IPhysSurfacePropertyController* pSurfaceController; // 146
								{
									const CPhysSurfaceProperties* pSurfaceProperty; // 148
								}
							}
							GetPhysicsMaterial(RnMaterial_t& out,
										const CPhysAggregateData* pAggregateData,
										int nSurfacePropertyIndex);  // 144
							GetPhysicsMaterial(RnMaterial_t& out,
										const CPhysAggregateData* pAggregateData,
										int nSurfacePropertyIndex);  // 193
						}
					}
				}
			}
			{
				int nMesh; // 198
				CUtlVectorBase<RnMeshDesc_t, CUtlMemory<RnMeshDesc_t, int> >::Count(); // 198
				{
					const RnMesh_t* pMesh; // 200
					CUtlMemory<RnMeshDesc_t, int>::operator[](
							int i);  // 595
					CUtlVectorBase<RnMeshDesc_t, CUtlMemory<RnMeshDesc_t, int> >::operator[](
							int i);  // 200
					{
						CPhysicsShape* pShape; // 201
						CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>::Count(); // 201
						Vector::Vector(
							vec_t X,
							vec_t Y,
							vec_t Z);  // 67
						Vector::Vector(
							vec_t xyz);  // 201
						{
							int nSurfacePropertyIndex; // 203
							RnMaterial_t material; // 204
							CUtlMemory<RnMeshDesc_t, int>::operator[](
									int i);  // 595
							CUtlVectorBase<RnMeshDesc_t, CUtlMemory<RnMeshDesc_t, int> >::operator[](
									int i);  // 203
							RnMaterial_t::RnMaterial_t(); // 204
							{
								const IPhysSurfacePropertyController* pSurfaceController; // 146
							}
							{
								const IPhysSurfacePropertyController* pSurfaceController; // 146
								{
									const CPhysSurfaceProperties* pSurfaceProperty; // 148
								}
							}
							GetPhysicsMaterial(RnMaterial_t& out,
										const CPhysAggregateData* pAggregateData,
										int nSurfacePropertyIndex);  // 144
							GetPhysicsMaterial(RnMaterial_t& out,
										const CPhysAggregateData* pAggregateData,
										int nSurfacePropertyIndex);  // 205
							CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 654
							RnMesh_t::GetMaterialCount(); // 208
							{
								int nSurfaceCount; // 210
								CUtlVectorUltraConservative<CUtlStringToken, CUtlVectorUltraConservativeAllocator>::Count(); // 210
								{
									int nSurfaceIndex; // 211
									{
										const CPhysSurfaceProperties* pSurfaceProperty; // 213
									}
								}
							}
						}
					}
				}
			}
			SetBodyShapesAndFlags(IPhysicsBody* pBody,
						const VPhysXBodyPart_t* pBodyPart,
						const CPhysAggregateData* pAggregateData,
						VPhysicsMotionType_t nMotionType,
						float flScale);  // 288
			CSmartPtr<const CPhysAggregateData, CRefCountAccessor>::Get(); // 288
		}
	}
	CUtlVectorBase<const VPhysXBodyPart_t::Count(); // 241
	CPhysAggregateData::GetPartCount(); // 252
} /* size: 0, variables: 1, inline expansions: 2 (42 bytes) */

// <00D17CA0> vphysics2/physicsaggregate.cpp:292
// function call: 1
void CPhysAggregateInstance::GetBodyCount()
{
	CUtlVectorBase<IPhysicsBody::Count(); // 294
} /* size: 8, inline expansions: 1 (0 bytes) */

// <00D17C53> vphysics2/physicsaggregate.cpp:297
void CPhysAggregateInstance::AddPart()
{
} /* size: 45 */

// <00D17A01> vphysics2/physicsaggregate.cpp:302
// variable: 1
// function calls: 9
void CPhysAggregateInstance::AddPart(IPhysicsBody* pBody)
{
	PartDesc_t desc; // 306
	PartDesc_t::PartDesc_t(); // 306
	CUtlMemory<IPhysicsBody::NumAllocated(); // 1143
	CUtlMemory<IPhysicsBody::Base(); // 112
	CUtlVectorBase<IPhysicsBody::Base(); // 368
	CUtlVectorBase<IPhysicsBody::ResetDbgInfo(); // 824
	CUtlVectorBase<IPhysicsBody::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<IPhysicsBody::AddToTail(); // 307
	CUtlMemory<IPhysicsBody::operator[](
			int i);  // 588
	CUtlVectorBase<IPhysicsBody::operator[](
			int i);  // 310
} /* size: 113, variables: 1, inline expansions: 9 (108 bytes) */

// <00D1E013> vphysics2/physicsaggregate.cpp:315
// function calls: 12
void CPhysAggregateInstance::RemoveBody(int nBody)
{
	CUtlVectorBase<IPhysicsBody::Count(); // 317
	CUtlMemory<IPhysicsBody::operator[](
			int i);  // 588
	CUtlVectorBase<IPhysicsBody::operator[](
			int i);  // 319
	CUtlMemory<IPhysicsBody::operator[](
			int i);  // 602
	CUtlVectorBase<IPhysicsBody::Element(
		int i);  // 1114
	CUtlMemory<IPhysicsBody::operator[](
			int i);  // 602
	CUtlVectorBase<IPhysicsBody::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<IPhysicsBody::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<IPhysicsBody::Remove(
		int elem);  // 320
	CPhysAggregateInstance::RemoveBody(
			int nBody);  // 315
} /* size: 136, inline expansions: 12 (241 bytes) */

// <00D179DB> vphysics2/physicsaggregate.cpp:315
void CPhysAggregateInstance::RemoveBody(int nBody)
{
} /* size: 0 */

// <00D177D4> vphysics2/physicsaggregate.cpp:324
// function calls: 9
void CPhysAggregateInstance::GetBodyName(int nIndex)
{
	CSmartPtr<const CPhysAggregateData, CRefCountAccessor>::operator->(); // 326
	CUtlMemory<short unsigned int, int>::Count(); // 225
	CUtlMemory<unsigned int, int>::Count(); // 225
	CUtlMemory<matrix3x4_t, int>::Count(); // 225
	{
	}
	CUtlMemory<unsigned int, int>::Count(); // 227
	CPhysAggregateData::GetBoneCount(); // 326
	CSmartPtr<const CPhysAggregateData, CRefCountAccessor>::operator->(); // 328
	CUtlVectorUltraConservative<char const::operator[](
			int i);  // 246
	CPhysAggregateData::GetBoneName(
			int nBoneIndex);  // 328
} /* size: 0, inline expansions: 9 (107 bytes) */

// <00D1EB30> vphysics2/physicsaggregate.cpp:336
// function calls: 9
void CPhysAggregateInstance::GetBodyNameHash(int nIndex)
{
	CSmartPtr<const CPhysAggregateData, CRefCountAccessor>::operator->(); // 338
	CUtlMemory<short unsigned int, int>::Count(); // 225
	CUtlMemory<unsigned int, int>::Count(); // 225
	CUtlMemory<matrix3x4_t, int>::Count(); // 225
	{
	}
	CUtlMemory<unsigned int, int>::Count(); // 227
	CPhysAggregateData::GetBoneCount(); // 338
	CSmartPtr<const CPhysAggregateData, CRefCountAccessor>::operator->(); // 340
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 128
	CPhysAggregateData::GetBoneHash(
			int i);  // 340
} /* size: 0, inline expansions: 9 (109 bytes) */

// <00D177AE> vphysics2/physicsaggregate.cpp:336
void CPhysAggregateInstance::GetBodyNameHash(int nIndex)
{
} /* size: 0 */

// <00D174B5> vphysics2/physicsaggregate.cpp:348
// variables: 2
// function calls: 13
void CPhysAggregateInstance::GetBodyByNameHash(uint32 nHash)
{
	int nBody; // 350
	{
		int nHashPart; // 361
		CSmartPtr<const CPhysAggregateData, CRefCountAccessor>::operator->(); // 361
		CUtlMemory<short unsigned int, int>::Base(); // 235
		CUtlMemory<unsigned int, int>::Count(); // 225
		CUtlMemory<short unsigned int, int>::Count(); // 225
		CUtlMemory<matrix3x4_t, int>::Count(); // 225
		{
		}
		CUtlMemory<unsigned int, int>::Count(); // 227
		CPhysAggregateData::GetBoneCount(); // 235
		CUtlMemory<unsigned int, int>::Base(); // 235
		CPhysAggregateData::FindBodyPartByHash(
					uint nHashKey);  // 361
	}
	CUtlVectorBase<IPhysicsBody::Count(); // 135
	CUtlVectorBase<IPhysicsBody::IsEmpty(); // 353
	CUtlMemory<IPhysicsBody::operator[](
			int i);  // 595
	CUtlVectorBase<IPhysicsBody::operator[](
			int i);  // 369
} /* size: 0, variables: 1, inline expansions: 4 (20 bytes) */

// <00D173C2> vphysics2/physicsaggregate.cpp:372
// variable: 1
// function calls: 3
void CPhysAggregateInstance::GetBodyIndex(IPhysicsBody* hBody)
{
	{
		int nBody; // 374
		CUtlVectorBase<IPhysicsBody::Count(); // 374
		CUtlMemory<IPhysicsBody::operator[](
				int i);  // 595
		CUtlVectorBase<IPhysicsBody::operator[](
				int i);  // 376
	}
} /* size: 54 */

// <00D17212> vphysics2/physicsaggregate.cpp:385
// variable: 1
// function calls: 3
void CPhysAggregateInstance::FindBodyByName(const char* pBodyName)
{
	const uint32  nameHash; // 387
	CUtlStringToken::CUtlStringToken(); // 121
	{
	}
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 119
	MakeStringToken(const char* pString,
			bool bWriteToDatabase);  // 387
} /* size: 0, variables: 1, inline expansions: 3 (196 bytes) */

// <00D1714F> vphysics2/physicsaggregate.cpp:391
// function calls: 2
void CPhysAggregateInstance::GetBodyTransform(int nBodyIndex)
{
	CUtlMemory<IPhysicsBody::operator[](
			int i);  // 595
	CUtlVectorBase<IPhysicsBody::operator[](
			int i);  // 393
} /* size: 78, inline expansions: 2 (6 bytes) */

// <00D16CE8> vphysics2/physicsaggregate.cpp:396
// variables: 5
// function calls: 17
void CPhysAggregateInstance::SetBodyTransform(CUtlStringToken nBodyNameHash, const CTransform& xform)
{
	int nBody; // 398
	const char   __FUNCTION__; // 111
	{
		int i; // 403
		{
			IPhysicsShape* pShape; // 405
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 406
			}
			CUtlMemory<IPhysicsBody::operator[](
					int i);  // 588
			CUtlVectorBase<IPhysicsBody::operator[](
					int i);  // 405
			RnCollisionAttr_t::GetCollisionFunctionMask(); // 406
		}
		CUtlMemory<IPhysicsBody::operator[](
				int i);  // 588
		CUtlVectorBase<IPhysicsBody::operator[](
				int i);  // 403
	}
	CSmartPtr<const CPhysAggregateData, CRefCountAccessor>::operator->(); // 398
	CUtlMemory<short unsigned int, int>::Base(); // 235
	CUtlMemory<unsigned int, int>::Count(); // 225
	CUtlMemory<short unsigned int, int>::Count(); // 225
	CUtlMemory<matrix3x4_t, int>::Count(); // 225
	{
	}
	CUtlMemory<unsigned int, int>::Count(); // 227
	CPhysAggregateData::GetBoneCount(); // 235
	CUtlMemory<unsigned int, int>::Base(); // 235
	CPhysAggregateData::FindBodyPartByHash(
				uint nHashKey);  // 398
	CUtlVectorBase<IPhysicsBody::Count(); // 399
	CUtlMemory<IPhysicsBody::operator[](
			int i);  // 588
	CUtlVectorBase<IPhysicsBody::operator[](
			int i);  // 401
} /* size: 0, variables: 2, inline expansions: 12 (214 bytes) */

// <00D1D925> vphysics2/physicsaggregate.cpp:411
// function calls: 11
void CPhysAggregateInstance::GetRootTransform(CTransform* pOut)
{
	CUtlVectorBase<IPhysicsBody::Count(); // 135
	CUtlVectorBase<IPhysicsBody::IsEmpty(); // 413
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			const CTransform  &);  // 415
	CUtlMemory<IPhysicsBody::operator[](
			int i);  // 595
	CUtlVectorBase<IPhysicsBody::operator[](
			int i);  // 419
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			CTransform &);  // 419
	CPhysAggregateInstance::GetRootTransform(
			CTransform* pOut);  // 411
} /* size: 130, inline expansions: 11 (123 bytes) */

// <00D16CC2> vphysics2/physicsaggregate.cpp:411
void CPhysAggregateInstance::GetRootTransform(CTransform* pOut)
{
} /* size: 0 */

// <00D16B41> vphysics2/physicsaggregate.cpp:423
// variables: 4
// function calls: 5
void CPhysAggregateInstance::SetCollisionAttributes(const RnCollisionAttr_t& bodyAttr)
{
	{
		IPhysicsBody* hBody; // 425
		CUtlVector<IPhysicsBody*, CUtlMemory<IPhysicsBody*, int> >& __for_range; // 44144
		iterator __for_begin; // 9269
		iterator __for_end; // 9269
		CUtlMemory<IPhysicsBody::Base(); // 112
		CUtlVectorBase<IPhysicsBody::Base(); // 102
		CUtlVectorBase<IPhysicsBody::begin(); // 425
		CUtlVectorBase<IPhysicsBody::Count(); // 104
		CUtlVectorBase<IPhysicsBody::end(); // 425
	}
} /* size: 75 */

// <00D16545> vphysics2/physicsaggregate.cpp:431
// variables: 7
// function calls: 21
void CPhysAggregateInstance::SetCollisionAttributesFromResource()
{
	int nBodyCount; // 433
	{
		int nBody; // 434
		{
			IPhysicsBody* pPartBody; // 436
			const VPhysXBodyPart_t* pPartData; // 437
			const CUtlVector<short unsigned int, CUtlMemory<short unsigned int, int> >& indices; // 438
			{
				int nBodyShape; // 445
				{
					uint nEntry; // 447
					CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>::Count(); // 454
					CSmartPtr<const CPhysAggregateData, CRefCountAccessor>::operator->(); // 450
					CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>::operator[](
							int i);  // 450
					CUtlMemory<short unsigned int, int>::operator[](
							int i);  // 595
					CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::operator[](
							int i);  // 447
					CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>::Count(); // 448
					CSmartPtr<const CPhysAggregateData, CRefCountAccessor>::operator->(); // 448
				}
				CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 445
			}
			CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>::Count(); // 458
			CUtlVectorUltraConservative<RnCollisionAttr_t, CUtlVectorUltraConservativeAllocator>::operator[](
					int i);  // 460
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 439
			CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 443
			CSmartPtr<const CPhysAggregateData, CRefCountAccessor>::operator->(); // 437
			CUtlMemory<IPhysicsBody::operator[](
					int i);  // 588
			CUtlVectorBase<IPhysicsBody::operator[](
					int i);  // 436
			CUtlMemoryConservative<const VPhysXBodyPart_t::Base(); // 366
			CUtlMemoryConservative<const VPhysXBodyPart_t::operator[](
					int i);  // 595
			CUtlVectorBase<const VPhysXBodyPart_t::operator[](
					int i);  // 437
		}
	}
	CSmartPtr<const CPhysAggregateData, CRefCountAccessor>::operator->(); // 433
	CUtlVectorBase<const VPhysXBodyPart_t::Count(); // 241
	CPhysAggregateData::GetPartCount(); // 433
} /* size: 375, variables: 1, inline expansions: 3 (12 bytes) */

// <00D163EE> vphysics2/physicsaggregate.cpp:465
// variables: 3
// function calls: 3
void CPhysAggregateInstance::GetTotalMass()
{
	float flTotalMass; // 467
	{
		int i; // 468
		{
			IPhysicsBody* pBody; // 470
			CUtlMemory<IPhysicsBody::operator[](
					int i);  // 595
			CUtlVectorBase<IPhysicsBody::operator[](
					int i);  // 470
		}
		CUtlVectorBase<IPhysicsBody::Count(); // 468
	}
} /* size: 135, variables: 1 */

// <00D1E388> vphysics2/physicsaggregate.cpp:479
// variables: 7
// function calls: 27
void CPhysAggregateInstance::SetTotalMass(float flTotalMass)
{
	CUtlVectorBase<IPhysicsBody::Count(); // 481
	CUtlMemory<IPhysicsBody::operator[](
			int i);  // 588
	CUtlVectorBase<IPhysicsBody::operator[](
			int i);  // 483
	{
		CUtlVector<float, CUtlMemory<float, int> > masses; // 487
		float flBuiltTotal; // 490
		CUtlMemory<float, int>::ValidateGrowSize(); // 475
		CUtlMemory<float, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<float, CUtlMemory<float, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<float, CUtlMemory<float, int> >::CUtlVector(); // 487
		CUtlMemory<float, int>::Grow(
			int num);  // 806
		CUtlVectorBase<float, CUtlMemory<float, int> >::GrowMemory(
				int num);  // 784
		CUtlVectorBase<float, CUtlMemory<float, int> >::GrowVector(
				int num);  // 1445
		CUtlVectorBase<float, CUtlMemory<float, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<float, CUtlMemory<float, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<float, CUtlMemory<float, int> >::AddMultipleToTail(
					int num);  // 1319
		CUtlVectorBase<float, CUtlMemory<float, int> >::SetCount(
			int count);  // 488
		{
			int i; // 492
			CUtlVectorBase<IPhysicsBody::Count(); // 492
			{
				IPhysicsBody* pBody; // 494
				CUtlMemory<IPhysicsBody::operator[](
						int i);  // 588
				CUtlVectorBase<IPhysicsBody::operator[](
						int i);  // 494
			}
		}
		{
			float flRatio; // 505
			{
				int i; // 506
				CUtlVectorBase<IPhysicsBody::Count(); // 506
				{
					IPhysicsBody* pBody; // 508
					CUtlMemory<IPhysicsBody::operator[](
							int i);  // 588
					CUtlVectorBase<IPhysicsBody::operator[](
							int i);  // 508
				}
			}
		}
		CUtlMemory<float, int>::Purge(); // 903
		CUtlMemory<float, int>::Purge(); // 1799
		CUtlVectorBase<float, CUtlMemory<float, int> >::Purge(); // 560
		CUtlVectorBase<float, CUtlMemory<float, int> >::~CUtlVectorBase(); // 410
		CUtlVector<float, CUtlMemory<float, int> >::~CUtlVector(); // 515
	}
	CPhysAggregateInstance::SetTotalMass(
			float flTotalMass);  // 479
} /* size: 392, inline expansions: 4 (297 bytes) */

// <00D1632B> vphysics2/physicsaggregate.cpp:479
// variables: 7
void CPhysAggregateInstance::SetTotalMass(float flTotalMass)
{
	{
		CUtlVector<float, CUtlMemory<float, int> > masses; // 487
		float flBuiltTotal; // 490
		{
			int i; // 492
			{
				IPhysicsBody* pBody; // 494
			}
		}
		{
			float flRatio; // 505
			{
				int i; // 506
				{
					IPhysicsBody* pBody; // 508
				}
			}
		}
	}
} /* size: 0 */

// <00D1624F> vphysics2/physicsaggregate.cpp:518
// function calls: 3
void CPhysAggregateInstance::GetBodyHandle(int nIndex)
{
	CUtlVectorBase<IPhysicsBody::Count(); // 520
	CUtlMemory<IPhysicsBody::operator[](
			int i);  // 588
	CUtlVectorBase<IPhysicsBody::operator[](
			int i);  // 520
} /* size: 23, inline expansions: 3 (6 bytes) */

// <00D16229> vphysics2/physicsaggregate.cpp:523
void CPhysAggregateInstance::GetBodyHandle(int nIndex)
{
} /* size: 0 */

// <00D1614D> vphysics2/physicsaggregate.cpp:528
// function calls: 3
void CPhysAggregateInstance::GetJointHandle(int nIndex)
{
	CUtlVectorBase<IPhysicsJoint::Count(); // 530
	CUtlMemory<IPhysicsJoint::operator[](
			int i);  // 588
	CUtlVectorBase<IPhysicsJoint::operator[](
			int i);  // 530
} /* size: 23, inline expansions: 3 (6 bytes) */

// <00D16127> vphysics2/physicsaggregate.cpp:533
void CPhysAggregateInstance::GetJointHandle(int nIndex)
{
} /* size: 0 */

// <00D160C8> vphysics2/physicsaggregate.cpp:538
// function call: 1
void CPhysAggregateInstance::GetJointCount()
{
	CUtlVectorBase<IPhysicsJoint::Count(); // 540
} /* size: 8, inline expansions: 1 (0 bytes) */

// <00D1D604> vphysics2/physicsaggregate.cpp:543
// variable: 1
// function calls: 4
void CPhysAggregateInstance::RemoveJoint(IPhysicsJoint* pJoint)
{
	{
		int i; // 548
		CUtlVectorBase<IPhysicsJoint::Count(); // 548
		CUtlMemory<IPhysicsJoint::operator[](
				int i);  // 588
		CUtlVectorBase<IPhysicsJoint::operator[](
				int i);  // 550
	}
	CPhysAggregateInstance::RemoveJoint(
			IPhysicsJoint* pJoint);  // 543
} /* size: 73, inline expansions: 1 (63 bytes) */

// <00D16095> vphysics2/physicsaggregate.cpp:543
// variable: 1
void CPhysAggregateInstance::RemoveJoint(IPhysicsJoint* pJoint)
{
	{
		int i; // 548
	}
} /* size: 0 */

// <00D15F78> vphysics2/physicsaggregate.cpp:560
// variable: 1
// function calls: 3
void CPhysAggregateInstance::SetLinearDamping(float flLinearDamping)
{
	{
		int i; // 562
		CUtlVectorBase<IPhysicsBody::Count(); // 562
		CUtlMemory<IPhysicsBody::operator[](
				int i);  // 588
		CUtlVectorBase<IPhysicsBody::operator[](
				int i);  // 564
	}
} /* size: 89 */

// <00D15E5B> vphysics2/physicsaggregate.cpp:568
// variable: 1
// function calls: 3
void CPhysAggregateInstance::SetAngularDamping(float flAngularDamping)
{
	{
		int i; // 570
		CUtlVectorBase<IPhysicsBody::Count(); // 570
		CUtlMemory<IPhysicsBody::operator[](
				int i);  // 588
		CUtlVectorBase<IPhysicsBody::operator[](
				int i);  // 572
	}
} /* size: 89 */

// <00D1592A> vphysics2/physicsaggregate.cpp:576
// variables: 6
// function calls: 16
Quaternion ConvertJointFrame(const Quaternion& q)
{
	Vector u; // 578
	Vector v; // 579
	Vector w; // 580
	matrix3x4a_t basis; // 582
	const char   __FUNCTION__; // 138
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 584
	}
	Vector::Vector(); // 608
	VectorRotate(const Vector& vIn1,
			const Quaternion& qIn2);  // 578
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 578
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 579
	Vector::Vector(); // 608
	VectorRotate(const Vector& vIn1,
			const Quaternion& qIn2);  // 579
	Vector::Vector(); // 608
	VectorRotate(const Vector& vIn1,
			const Quaternion& qIn2);  // 580
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 580
	matrix3x4_t::InitXYZ(
		const Vector& xAxis,
		const Vector& yAxis,
		const Vector& zAxis,
		const Vector& vecOrigin);  // 583
	matrix3x4_t::GetDeterminant(); // 584
	matrix3x4_t::matrix3x4_t(); // 303
	matrix3x4a_t::matrix3x4a_t(); // 582
	Quaternion::Quaternion(); // 837
	MatrixQuaternion(const matrix3x4_t& mat); // 2675
	matrix3x4_t::ToQuaternion(); // 586
} /* size: 0, variables: 5, inline expansions: 16 (438 bytes) */

// <00D15083> vphysics2/physicsaggregate.cpp:589
// variables: 14
// function calls: 32
void CPhysAggregateInstance::BuildConstraints()
{
	const char   __FUNCTION__; // 111
	{
		int i; // 592
		{
			const CPhysConstraintData& input; // 594
			IPhysicsBody* pBody1; // 601
			IPhysicsBody* pBody2; // 602
			PhysicsConicalJointDesc_t descriptor; // 604
			bool bEnableTwist; // 610
			float flMinTwist; // 611
			float flMaxTwist; // 612
			bool bEnableSwing; // 636
			float flMaxSwing1; // 637
			float flMaxSwing2; // 638
			IPhysicsJoint* pJoint; // 672
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 599
			}
			PhysicsJointDesc_t::PhysicsJointDesc_t(
						PhysicsJointType_t nType,
						IPhysicsBody* pBody1,
						IPhysicsBody* pBody2);  // 343
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 337
			PhysicsConicalJointDesc_t::PhysicsConicalJointDesc_t(
							IPhysicsBody* pBody1,
							IPhysicsBody* pBody2);  // 604
			CUtlVectorBase<IPhysicsBody::Count(); // 595
			CUtlMemory<IPhysicsBody::operator[](
					int i);  // 588
			CUtlVectorBase<IPhysicsBody::operator[](
					int i);  // 601
			CUtlMemory<IPhysicsBody::operator[](
					int i);  // 588
			CUtlVectorBase<IPhysicsBody::operator[](
					int i);  // 602
			Vector::operator=(
					const Vector& vOther);  // 606
			Vector::operator=(
					const Vector& vOther);  // 608
			RAD2DEG(float flRadians); // 624
			CUtlMemory<IPhysicsJoint::NumAllocated(); // 1196
			CUtlMemory<IPhysicsJoint::operator[](
					int i);  // 602
			CUtlVectorBase<IPhysicsJoint::Element(
				int i);  // 1201
			CopyConstruct<IPhysicsJoint*>(IPhysicsJoint** pMemory,
							IPhysicsJoint* const& src);  // 1201
			CUtlMemory<IPhysicsJoint::Base(); // 112
			CUtlVectorBase<IPhysicsJoint::Base(); // 368
			CUtlVectorBase<IPhysicsJoint::ResetDbgInfo(); // 824
			CUtlVectorBase<IPhysicsJoint::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<IPhysicsJoint::AddToTail(
					IPhysicsJoint* const& src);  // 673
			RAD2DEG(float flRadians); // 662
			RAD2DEG(float flRadians); // 649
			CUtlVectorBase<IPhysicsBody::Count(); // 601
		}
		CSmartPtr<const CPhysAggregateData, CRefCountAccessor>::operator->(); // 592
		CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>::Count(); // 592
	}
	CSmartPtr<const CPhysAggregateData, CRefCountAccessor>::operator->(); // 591
	CUtlVectorUltraConservative<CPhysConstraintData, CUtlVectorUltraConservativeAllocator>::Count(); // 591
	CUtlMemory<IPhysicsJoint::IsGrowable(); // 881
	CUtlMemory<IPhysicsJoint::IsExternallyAllocated(); // 888
	CUtlMemory<IPhysicsJoint::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<IPhysicsJoint::ResetDbgInfo(); // 1024
	CUtlVectorBase<IPhysicsJoint::EnsureCapacity(
			int num);  // 591
} /* size: 0, variables: 1, inline expansions: 7 (350 bytes) */

// <00D1ED2A> vphysics2/physicsaggregate.cpp:677
// function calls: 4
void CPhysAggregateInstance::ResolveInternalBodyIndex(uint16 nBody, bool bIsFixed)
{
	CPhysAggregateInstance::ResolveInternalBodyIndex(
				uint16 nBody,
				bool bIsFixed);  // 677
	CUtlVectorBase<IPhysicsBody::Count(); // 684
	CUtlMemory<IPhysicsBody::operator[](
			int i);  // 595
	CUtlVectorBase<IPhysicsBody::operator[](
			int i);  // 689
} /* size: 0, inline expansions: 4 (0 bytes) */

// <00D15050> vphysics2/physicsaggregate.cpp:677
void CPhysAggregateInstance::ResolveInternalBodyIndex(uint16 nBody, bool bIsFixed)
{
} /* size: 0 */

// <00D1253D> vphysics2/physicsaggregate.cpp:692
// variables: 43
// function calls: 170
void CPhysAggregateInstance::BuildJoints()
{
	int nJointCount; // 694
	const char   __FUNCTION__; // 65517
	{
		int nJoint; // 697
		{
			const VPhysXJoint_t* pJointData; // 699
			int nType; // 702
			IPhysicsBody* pBody1; // 704
			IPhysicsBody* pBody2; // 705
			CTransform localFrame1; // 716
			CTransform localFrame2; // 718
			CTransform worldFrame1; // 727
			bool bEnableCollision; // 729
			float flLinearStrength; // 730
			float flAngularStrength; // 731
			IPhysicsJoint* pJoint; // 732
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 700
			}
			{
				CTransform worldToRefLocal; // 723
				QuaternionAligned::operator fltx4(); // 258
				VectorAligned::operator fltx4(); // 258
				ConcatTransforms(const CTransform  in1,
						const CTransform  in2);  // 724
				QuaternionAligned::operator fltx4(); // 258
				VectorAligned::operator fltx4(); // 258
				QuaternionAligned::operator fltx4(); // 258
				VectorAligned::operator fltx4(); // 258
				ConcatTransforms(const CTransform  in1,
						const CTransform  in2);  // 724
				VectorAligned::operator=(
						const VectorAligned& src);  // 26
				QuaternionAligned::operator=(
						const QuaternionAligned& vOther);  // 26
				CTransform::operator=(
						CTransform &);  // 724
			}
			{
				PhysicsSphericalJointDesc_t descriptor; // 738
				PhysicsJointDesc_t::PhysicsJointDesc_t(
							PhysicsJointType_t nType,
							IPhysicsBody* pBody1,
							IPhysicsBody* pBody2);  // 137
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 136
				PhysicsSphericalJointDesc_t::PhysicsSphericalJointDesc_t(
								IPhysicsBody* pBody1,
								IPhysicsBody* pBody2);  // 738
				Vector::operator=(
						const Vector& vOther);  // 38
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 40
				VectorAligned::operator Vector(); // 38
				Quaternion::Quaternion(
						vec_t ix,
						vec_t iy,
						vec_t iz,
						vec_t iw);  // 41
				QuaternionAligned::operator Quaternion(); // 39
				PhysicsJointDesc_t::SetLocalFrame1(
						const CTransform& xform1);  // 739
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 40
				VectorAligned::operator Vector(); // 61
				Quaternion::Quaternion(
						vec_t ix,
						vec_t iy,
						vec_t iz,
						vec_t iw);  // 41
				QuaternionAligned::operator Quaternion(); // 62
				PhysicsJointDesc_t::SetLocalFrame2(
						const CTransform& xform2);  // 740
				Vector::Vector(); // 1450
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::operator*(
						float fl);  // 1478
				operator*(float fl,
						const Vector& v);  // 748
				Vector::operator=(
						const Vector& vOther);  // 748
				CUtlMemory<IPhysicsJoint::NumAllocated(); // 1196
				CUtlVectorBase<IPhysicsJoint::AddToTail(
						IPhysicsJoint* const& src);  // 753
			}
			{
				PhysicsRevoluteJointDesc_t descriptor; // 759
				{
					VPhysXRange_t range; // 768
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 769
					}
					RAD2DEG(float flRadians); // 772
				}
				{
					Vector vHingeAxis; // 778
					float flTargetVelocity; // 779
					Quaternion::Quaternion(
							vec_t ix,
							vec_t iy,
							vec_t iz,
							vec_t iw);  // 41
					QuaternionAligned::operator Quaternion(); // 778
					Vector::Vector(); // 608
					VectorRotate(const Vector& vIn1,
							const Quaternion& qIn2);  // 778
					Vector::Vector(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 778
					DotProduct(const Vector& a,
							const Vector& b);  // 779
				}
				PhysicsJointDesc_t::PhysicsJointDesc_t(
							PhysicsJointType_t nType,
							IPhysicsBody* pBody1,
							IPhysicsBody* pBody2);  // 181
				PhysicsRevoluteJointDesc_t::PhysicsRevoluteJointDesc_t(
								IPhysicsBody* pBody1,
								IPhysicsBody* pBody2);  // 759
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 40
				VectorAligned::operator Vector(); // 61
				Quaternion::Quaternion(
						vec_t ix,
						vec_t iy,
						vec_t iz,
						vec_t iw);  // 41
				QuaternionAligned::operator Quaternion(); // 62
				PhysicsJointDesc_t::SetLocalFrame2(
						const CTransform& xform2);  // 761
				Vector::operator=(
						const Vector& vOther);  // 38
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 40
				VectorAligned::operator Vector(); // 38
				Quaternion::Quaternion(
						vec_t ix,
						vec_t iy,
						vec_t iz,
						vec_t iw);  // 41
				QuaternionAligned::operator Quaternion(); // 39
				PhysicsJointDesc_t::SetLocalFrame1(
						const CTransform& xform1);  // 760
				CUtlMemory<IPhysicsJoint::NumAllocated(); // 1196
				CUtlVectorBase<IPhysicsJoint::AddToTail(
						IPhysicsJoint* const& src);  // 787
			}
			{
				PhysicsPrismaticJointDesc_t descriptor; // 793
				{
					VPhysXRange_t range; // 802
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 803
					}
				}
				{
					Vector vSliderAxis; // 812
					float flTargetVelocity; // 813
					Quaternion::Quaternion(
							vec_t ix,
							vec_t iy,
							vec_t iz,
							vec_t iw);  // 41
					QuaternionAligned::operator Quaternion(); // 812
					Vector::Vector(); // 608
					VectorRotate(const Vector& vIn1,
							const Quaternion& qIn2);  // 812
					Vector::Vector(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 812
					DotProduct(const Vector& a,
							const Vector& b);  // 813
				}
				PhysicsJointDesc_t::PhysicsJointDesc_t(
							PhysicsJointType_t nType,
							IPhysicsBody* pBody1,
							IPhysicsBody* pBody2);  // 263
				PhysicsPrismaticJointDesc_t::PhysicsPrismaticJointDesc_t(
								IPhysicsBody* pBody1,
								IPhysicsBody* pBody2);  // 793
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 40
				VectorAligned::operator Vector(); // 61
				Quaternion::Quaternion(
						vec_t ix,
						vec_t iy,
						vec_t iz,
						vec_t iw);  // 41
				QuaternionAligned::operator Quaternion(); // 62
				PhysicsJointDesc_t::SetLocalFrame2(
						const CTransform& xform2);  // 795
				Vector::operator=(
						const Vector& vOther);  // 38
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 40
				VectorAligned::operator Vector(); // 38
				Quaternion::Quaternion(
						vec_t ix,
						vec_t iy,
						vec_t iz,
						vec_t iw);  // 41
				QuaternionAligned::operator Quaternion(); // 39
				PhysicsJointDesc_t::SetLocalFrame1(
						const CTransform& xform1);  // 794
				CUtlMemory<IPhysicsJoint::NumAllocated(); // 1196
				CUtlVectorBase<IPhysicsJoint::AddToTail(
						IPhysicsJoint* const& src);  // 821
			}
			{
				PhysicsConicalJointDesc_t descriptor; // 828
				{
					VPhysXRange_t range; // 837
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 838
					}
					RAD2DEG(float flRadians); // 841
				}
				{
					VPhysXRange_t range; // 846
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 847
					}
					RAD2DEG(float flRadians); // 850
				}
				PhysicsJointDesc_t::PhysicsJointDesc_t(
							PhysicsJointType_t nType,
							IPhysicsBody* pBody1,
							IPhysicsBody* pBody2);  // 343
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 337
				PhysicsConicalJointDesc_t::PhysicsConicalJointDesc_t(
								IPhysicsBody* pBody1,
								IPhysicsBody* pBody2);  // 828
				Vector::operator=(
						const Vector& vOther);  // 38
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 40
				VectorAligned::operator Vector(); // 38
				Quaternion::Quaternion(
						vec_t ix,
						vec_t iy,
						vec_t iz,
						vec_t iw);  // 41
				QuaternionAligned::operator Quaternion(); // 39
				PhysicsJointDesc_t::SetLocalFrame1(
						const CTransform& xform1);  // 829
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 40
				VectorAligned::operator Vector(); // 61
				Quaternion::Quaternion(
						vec_t ix,
						vec_t iy,
						vec_t iz,
						vec_t iw);  // 41
				QuaternionAligned::operator Quaternion(); // 62
				PhysicsJointDesc_t::SetLocalFrame2(
						const CTransform& xform2);  // 830
				CUtlMemory<IPhysicsJoint::NumAllocated(); // 1196
				CUtlVectorBase<IPhysicsJoint::AddToTail(
						IPhysicsJoint* const& src);  // 862
				Vector::Vector(); // 1450
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::operator*(
						float fl);  // 1478
				operator*(float fl,
						const Vector& v);  // 857
				Vector::operator=(
						const Vector& vOther);  // 857
			}
			{
				PhysicsWeldJointDesc_t descriptor; // 868
				CUtlMemory<IPhysicsJoint::operator[](
						int i);  // 602
				CUtlVectorBase<IPhysicsJoint::Element(
					int i);  // 1201
				CopyConstruct<IPhysicsJoint*>(IPhysicsJoint** pMemory,
								IPhysicsJoint* const& src);  // 1201
				CUtlMemory<IPhysicsJoint::Base(); // 112
				CUtlVectorBase<IPhysicsJoint::Base(); // 368
				CUtlVectorBase<IPhysicsJoint::ResetDbgInfo(); // 824
				CUtlVectorBase<IPhysicsJoint::GrowMemory(
						int num);  // 1198
				CUtlMemory<IPhysicsJoint::NumAllocated(); // 1196
				CUtlVectorBase<IPhysicsJoint::AddToTail(
						IPhysicsJoint* const& src);  // 880
				PhysicsJointDesc_t::PhysicsJointDesc_t(
							PhysicsJointType_t nType,
							IPhysicsBody* pBody1,
							IPhysicsBody* pBody2);  // 413
				PhysicsWeldJointDesc_t::PhysicsWeldJointDesc_t(
							IPhysicsBody* pBody1,
							IPhysicsBody* pBody2);  // 868
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 40
				VectorAligned::operator Vector(); // 61
				Quaternion::Quaternion(
						vec_t ix,
						vec_t iy,
						vec_t iz,
						vec_t iw);  // 41
				QuaternionAligned::operator Quaternion(); // 62
				PhysicsJointDesc_t::SetLocalFrame2(
						const CTransform& xform2);  // 870
				Vector::operator=(
						const Vector& vOther);  // 38
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 40
				VectorAligned::operator Vector(); // 38
				Quaternion::Quaternion(
						vec_t ix,
						vec_t iy,
						vec_t iz,
						vec_t iw);  // 41
				QuaternionAligned::operator Quaternion(); // 39
				PhysicsJointDesc_t::SetLocalFrame1(
						const CTransform& xform1);  // 869
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 885
			}
			CSmartPtr<const CPhysAggregateData, CRefCountAccessor>::operator->(); // 699
			CUtlVectorUltraConservative<const VPhysXJoint_t::operator[](
					int i);  // 699
			CPhysAggregateInstance::ResolveInternalBodyIndex(
						uint16 nBody,
						bool bIsFixed);  // 677
			CUtlVectorBase<IPhysicsBody::Count(); // 684
			CUtlMemory<IPhysicsBody::operator[](
					int i);  // 595
			CUtlVectorBase<IPhysicsBody::operator[](
					int i);  // 689
			CPhysAggregateInstance::ResolveInternalBodyIndex(
						uint16 nBody,
						bool bIsFixed);  // 704
			CUtlVectorBase<IPhysicsBody::Count(); // 684
			CUtlMemory<IPhysicsBody::operator[](
					int i);  // 595
			CUtlVectorBase<IPhysicsBody::operator[](
					int i);  // 689
			CPhysAggregateInstance::ResolveInternalBodyIndex(
						uint16 nBody,
						bool bIsFixed);  // 705
			{
				fltx4 retVal; // 1134
				_mm_set1_ps(float __F); // 1135
			}
			ReplicateX4<>(float flValue); // 268
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 268
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 268
			VectorAligned::operator*(
					vec_t s);  // 717
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 268
			VectorAligned::VectorAligned(
					fltx4 rhs);  // 268
			VectorAligned::operator*(
					vec_t s);  // 719
			{
				fltx4 zzww; // 1414
				{
					fltx4 retVal; // 1276
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1277
				}
				ShuffleSIMD<250>(const fltx4& a,
						const fltx4& b);  // 665
				ShuffleSIMD<250>(const fltx4& a,
						const fltx4& b);  // 1414
				{
					fltx4 retVal; // 1276
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1277
				}
				ShuffleSIMD<148>(const fltx4& a,
						const fltx4& b);  // 665
				ShuffleSIMD<148>(const fltx4& a,
						const fltx4& b);  // 1415
			}
			SetWSIMD<>(const fltx4& a,
					const fltx4& w);  // 109
			VectorAligned::operator=(
					fltx4 src);  // 109
			CTransform::SetPosition(
					const VectorAligned& v0);  // 717
			{
				fltx4 zzww; // 1414
				{
					fltx4 retVal; // 1276
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1277
				}
				ShuffleSIMD<250>(const fltx4& a,
						const fltx4& b);  // 665
				ShuffleSIMD<250>(const fltx4& a,
						const fltx4& b);  // 1414
				{
					fltx4 retVal; // 1276
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 1277
				}
				ShuffleSIMD<148>(const fltx4& a,
						const fltx4& b);  // 665
				ShuffleSIMD<148>(const fltx4& a,
						const fltx4& b);  // 1415
			}
			SetWSIMD<>(const fltx4& a,
					const fltx4& w);  // 109
			CTransform::SetPosition(
					const VectorAligned& v0);  // 719
			QuaternionAligned::operator fltx4(); // 258
			VectorAligned::operator fltx4(); // 258
			ConcatTransforms(const CTransform  in1,
					const CTransform  in2);  // 727
		}
	}
	CUtlVectorUltraConservative<const VPhysXJoint_t::Count(); // 694
	CSmartPtr<const CPhysAggregateData, CRefCountAccessor>::operator->(); // 694
	CUtlMemory<IPhysicsJoint::IsGrowable(); // 881
	CUtlMemory<IPhysicsJoint::IsExternallyAllocated(); // 888
	CUtlMemory<IPhysicsJoint::EnsureCapacity(
			int num);  // 1006
	CUtlMemory<IPhysicsJoint::Base(); // 112
	CUtlVectorBase<IPhysicsJoint::Base(); // 368
	CUtlVectorBase<IPhysicsJoint::ResetDbgInfo(); // 1024
	CUtlVectorBase<IPhysicsJoint::EnsureCapacity(
			int num);  // 695
} /* size: 0, variables: 2, inline expansions: 9 (474 bytes) */

// <00D1D735> vphysics2/physicsaggregate.cpp:891
// variables: 3
// function calls: 7
void CPhysAggregateInstance::GetTransformStates()
{
	uint nBodyCount; // 893
	CUtlVectorBase<IPhysicsBody::Count(); // 893
	{
		bool bIsDynamic; // 896
		CUtlMemory<IPhysicsBody::operator[](
				int i);  // 588
		CUtlVectorBase<IPhysicsBody::operator[](
				int i);  // 896
		{
			int i; // 897
			CUtlVectorBase<IPhysicsBody::Count(); // 897
			CUtlMemory<IPhysicsBody::operator[](
					int i);  // 588
			CUtlVectorBase<IPhysicsBody::operator[](
					int i);  // 899
		}
	}
	CPhysAggregateInstance::GetTransformStates(); // 891
} /* size: 179, variables: 1, inline expansions: 2 (99 bytes) */

// <00D124FB> vphysics2/physicsaggregate.cpp:891
// variables: 3
void CPhysAggregateInstance::GetTransformStates()
{
	uint nBodyCount; // 893
	{
		bool bIsDynamic; // 896
		{
			int i; // 897
		}
	}
} /* size: 0, variables: 1 */

// <00D12407> vphysics2/physicsaggregate.cpp:913
// variable: 1
// function calls: 3
void CPhysAggregateInstance::EnableAutoSleeping()
{
	{
		int i; // 915
		CUtlVectorBase<IPhysicsBody::Count(); // 915
		CUtlMemory<IPhysicsBody::operator[](
				int i);  // 588
		CUtlVectorBase<IPhysicsBody::operator[](
				int i);  // 917
	}
} /* size: 73 */

// <00D12313> vphysics2/physicsaggregate.cpp:921
// variable: 1
// function calls: 3
void CPhysAggregateInstance::DisableAutoSleeping()
{
	{
		int i; // 923
		CUtlVectorBase<IPhysicsBody::Count(); // 923
		CUtlMemory<IPhysicsBody::operator[](
				int i);  // 588
		CUtlVectorBase<IPhysicsBody::operator[](
				int i);  // 925
	}
} /* size: 73 */

// <00D1221F> vphysics2/physicsaggregate.cpp:929
// variable: 1
// function calls: 3
void CPhysAggregateInstance::WakeUp()
{
	{
		int i; // 931
		CUtlVectorBase<IPhysicsBody::Count(); // 931
		CUtlMemory<IPhysicsBody::operator[](
				int i);  // 588
		CUtlVectorBase<IPhysicsBody::operator[](
				int i);  // 933
	}
} /* size: 73 */

// <00D1212B> vphysics2/physicsaggregate.cpp:937
// variable: 1
// function calls: 3
void CPhysAggregateInstance::PutToSleep()
{
	{
		int i; // 939
		CUtlVectorBase<IPhysicsBody::Count(); // 939
		CUtlMemory<IPhysicsBody::operator[](
				int i);  // 588
		CUtlVectorBase<IPhysicsBody::operator[](
				int i);  // 941
	}
} /* size: 73 */

// <00D12037> vphysics2/physicsaggregate.cpp:945
// variable: 1
// function calls: 3
void CPhysAggregateInstance::IsAsleep()
{
	{
		int i; // 947
		CUtlVectorBase<IPhysicsBody::Count(); // 947
		CUtlMemory<IPhysicsBody::operator[](
				int i);  // 595
		CUtlVectorBase<IPhysicsBody::operator[](
				int i);  // 949
	}
} /* size: 96 */

// <00D118DD> vphysics2/physicsaggregate.cpp:958
// variables: 10
// function calls: 26
void CPhysAggregateInstance::SetMotionType(VPhysicsMotionType_t nMotionType)
{
	uint nFlags; // 960
	const char   __FUNCTION__; // 35
	{
		int i; // 964
		CUtlVectorBase<IPhysicsJoint::Count(); // 964
		CUtlMemory<IPhysicsJoint::operator[](
				int i);  // 588
		CUtlVectorBase<IPhysicsJoint::operator[](
				int i);  // 966
	}
	{
		int i; // 970
		CUtlVectorBase<IPhysicsBody::Count(); // 970
		CUtlMemory<IPhysicsBody::operator[](
				int i);  // 588
		CUtlVectorBase<IPhysicsBody::operator[](
				int i);  // 972
	}
	{
		int i; // 978
		CUtlVectorBase<IPhysicsJoint::Count(); // 978
		CUtlMemory<IPhysicsJoint::operator[](
				int i);  // 588
		CUtlVectorBase<IPhysicsJoint::operator[](
				int i);  // 980
	}
	{
		int i; // 984
		CUtlVectorBase<IPhysicsBody::Count(); // 984
		CUtlMemory<IPhysicsBody::operator[](
				int i);  // 588
		CUtlVectorBase<IPhysicsBody::operator[](
				int i);  // 986
	}
	{
		int i; // 994
		{
			const VPhysXBodyPart_t* pBodyPart; // 996
			CSmartPtr<const CPhysAggregateData, CRefCountAccessor>::operator->(); // 996
			CUtlMemoryConservative<const VPhysXBodyPart_t::Base(); // 366
			CUtlMemoryConservative<const VPhysXBodyPart_t::operator[](
					int i);  // 595
			CUtlVectorBase<const VPhysXBodyPart_t::operator[](
					int i);  // 996
			CUtlMemory<IPhysicsBody::operator[](
					int i);  // 588
			CUtlVectorBase<IPhysicsBody::operator[](
					int i);  // 997
		}
		CUtlVectorBase<IPhysicsBody::Count(); // 994
	}
	{
		int i; // 1005
		CUtlVectorBase<IPhysicsBody::Count(); // 1005
		CUtlMemory<IPhysicsBody::operator[](
				int i);  // 588
		CUtlVectorBase<IPhysicsBody::operator[](
				int i);  // 1007
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1009
	}
	CUtlVectorBase<IPhysicsJoint::Count(); // 992
	CUtlVectorBase<IPhysicsBody::Count(); // 992
	CUtlVectorBase<IPhysicsJoint::RemoveAll(); // 982
	CUtlVectorBase<IPhysicsJoint::RemoveAll(); // 968
} /* size: 0, variables: 2, inline expansions: 4 (14 bytes) */

// <00D1175C> vphysics2/physicsaggregate.cpp:1015
// variables: 4
// function calls: 5
void CPhysAggregateInstance::SetVelocity(const Vector& vVel)
{
	{
		IPhysicsBody* hBody; // 1017
		CUtlVector<IPhysicsBody*, CUtlMemory<IPhysicsBody*, int> >& __for_range; // 44144
		iterator __for_begin; // 9269
		iterator __for_end; // 9269
		CUtlMemory<IPhysicsBody::Base(); // 112
		CUtlVectorBase<IPhysicsBody::Base(); // 102
		CUtlVectorBase<IPhysicsBody::begin(); // 1017
		CUtlVectorBase<IPhysicsBody::Count(); // 104
		CUtlVectorBase<IPhysicsBody::end(); // 1017
	}
} /* size: 75 */

// <00D115DB> vphysics2/physicsaggregate.cpp:1023
// variables: 4
// function calls: 5
void CPhysAggregateInstance::AddVelocity(const Vector& vVel)
{
	{
		IPhysicsBody* hBody; // 1025
		CUtlVector<IPhysicsBody*, CUtlMemory<IPhysicsBody*, int> >& __for_range; // 44144
		iterator __for_begin; // 9269
		iterator __for_end; // 9269
		CUtlMemory<IPhysicsBody::Base(); // 112
		CUtlVectorBase<IPhysicsBody::Base(); // 102
		CUtlVectorBase<IPhysicsBody::begin(); // 1025
		CUtlVectorBase<IPhysicsBody::Count(); // 104
		CUtlVectorBase<IPhysicsBody::end(); // 1025
	}
} /* size: 75 */

// <00D1145A> vphysics2/physicsaggregate.cpp:1031
// variables: 4
// function calls: 5
void CPhysAggregateInstance::SetAngularVelocity(const Vector& vAngVel)
{
	{
		IPhysicsBody* hBody; // 1033
		CUtlVector<IPhysicsBody*, CUtlMemory<IPhysicsBody*, int> >& __for_range; // 44144
		iterator __for_begin; // 9269
		iterator __for_end; // 9269
		CUtlMemory<IPhysicsBody::Base(); // 112
		CUtlVectorBase<IPhysicsBody::Base(); // 102
		CUtlVectorBase<IPhysicsBody::begin(); // 1033
		CUtlVectorBase<IPhysicsBody::Count(); // 104
		CUtlVectorBase<IPhysicsBody::end(); // 1033
	}
} /* size: 75 */

// <00D112D3> vphysics2/physicsaggregate.cpp:1039
// variables: 4
// function calls: 5
void CPhysAggregateInstance::AddAngularVelocity(const Vector& vAngVel)
{
	{
		IPhysicsBody* hBody; // 1041
		CUtlVector<IPhysicsBody*, CUtlMemory<IPhysicsBody*, int> >& __for_range; // 44144
		iterator __for_begin; // 9269
		iterator __for_end; // 9269
		CUtlMemory<IPhysicsBody::Base(); // 112
		CUtlVectorBase<IPhysicsBody::Base(); // 102
		CUtlVectorBase<IPhysicsBody::begin(); // 1041
		CUtlVectorBase<IPhysicsBody::Count(); // 104
		CUtlVectorBase<IPhysicsBody::end(); // 1041
	}
} /* size: 75 */

// <00D10D3C> vphysics2/physicsaggregate.cpp:1047
// variable: 1
// function calls: 23
void CPhysAggregateInstance::SetDebugName(const char* pName)
{
	{
		int i; // 1049
		CUtlVectorBase<IPhysicsBody::Count(); // 1049
		CUtlVectorBase<IPhysicsBody::Count(); // 1057
		CSmartPtr<const CPhysAggregateData, CRefCountAccessor>::operator->(); // 1051
		CUtlMemory<short unsigned int, int>::Count(); // 225
		CUtlMemory<unsigned int, int>::Count(); // 225
		CUtlMemory<matrix3x4_t, int>::Count(); // 225
		{
		}
		CUtlMemory<unsigned int, int>::Count(); // 227
		CPhysAggregateData::GetBoneCount(); // 1051
		CUtlMemory<IPhysicsBody::operator[](
				int i);  // 588
		CUtlVectorBase<IPhysicsBody::operator[](
				int i);  // 1053
		CSmartPtr<const CPhysAggregateData, CRefCountAccessor>::operator->(); // 1053
		CUtlVectorUltraConservative<char const::operator[](
				int i);  // 246
		CPhysAggregateData::GetBoneName(
				int nBoneIndex);  // 1053
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 83
		CFmtStrN<256>::operator char const*(); // 1053
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 771
		CBufferString::Get(); // 83
		CFmtStrN<256>::operator char const*(); // 1063
		CBufferString::~CBufferString(); // 587
		CBufferStringN<256>::~CBufferStringN(); // 41
		CFmtStrN<256>::~CFmtStrN(); // 1063
	}
} /* size: 0 */

// <00D1DC0F> vphysics2/physicsaggregate.cpp:1069
// variable: 1
// function calls: 10
void CPhysAggregateInstance::GetBbox(AABB_t* pBbox)
{
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 139
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 138
	AABB_t::MakeInvalid(); // 1074
	{
		int i; // 1076
		CUtlVectorBase<IPhysicsBody::Count(); // 1076
		CUtlMemory<IPhysicsBody::operator[](
				int i);  // 595
		CUtlVectorBase<IPhysicsBody::operator[](
				int i);  // 1078
		VectorMin(const Vector& a,
				const Vector& b,
				Vector& result);  // 99
		VectorMax(const Vector& a,
				const Vector& b,
				Vector& result);  // 100
		AABB_t::AddAABBToBounds(
				const AABB_t& other);  // 1078
	}
	CPhysAggregateInstance::GetBbox(
		AABB_t* pBbox);  // 1069
} /* size: 251, inline expansions: 4 (206 bytes) */

// <00D10D09> vphysics2/physicsaggregate.cpp:1069
// variable: 1
void CPhysAggregateInstance::GetBbox(AABB_t* pBbox)
{
	{
		int i; // 1076
	}
} /* size: 0 */

// <00D1DEFE> vphysics2/physicsaggregate.cpp:1082
// function calls: 4
void CPhysAggregateInstance::GetOrigin()
{
	CUtlVectorBase<IPhysicsBody::Count(); // 1084
	CUtlMemory<IPhysicsBody::operator[](
			int i);  // 595
	CUtlVectorBase<IPhysicsBody::operator[](
			int i);  // 1086
	CPhysAggregateInstance::GetOrigin(); // 1082
} /* size: 49, inline expansions: 4 (7 bytes) */

// <00D10CF0> vphysics2/physicsaggregate.cpp:1082
void CPhysAggregateInstance::GetOrigin()
{
} /* size: 0 */

// <00D10C91> vphysics2/physicsaggregate.cpp:1091
// function call: 1
void CPhysAggregateInstance::GetData()
{
	CSmartPtr<const CPhysAggregateData, CRefCountAccessor>::Get(); // 1093
} /* size: 9, inline expansions: 1 (0 bytes) */

// <00D10C63> vphysics2/physicsaggregate.cpp:1096
void CPhysAggregateInstance::GetManagedHandle()
{
} /* size: 9 */

