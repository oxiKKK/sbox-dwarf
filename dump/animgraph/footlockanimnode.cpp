
//
// animgraph/footlockanimnode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 16
//

// <0109561D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.cpp:13
void MyTypeInfo(void)
{
} /* size: 0 */

// <010909A1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.cpp:13
void CFootLockAnimNode::GetTypeInfo()
{
} /* size: 12 */

// <0106A2D9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.cpp:13
// function calls: 3
void* CFootLockAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CFootLockAnimNode>::CastTo(
		CFootLockAnimNode* derived,
		ClassID baseTypeInfo);  // 13
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0106A146> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.cpp:13
// function calls: 3
const void* CFootLockAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CFootLockAnimNode>::CastTo(
		const CFootLockAnimNode* derived,
		ClassID baseTypeInfo);  // 13
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01069F8E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.cpp:24
// variable: 1
// function calls: 4
void GetItemName(void* pClassInstance, CUtlString* pOutElementName)
{
	CFootLockItem* pItem; // 26
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 27
} /* size: 86, variables: 1, inline expansions: 4 (107 bytes) */

// <01069BA5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.cpp:32
// function calls: 19
void CFootLockAnimNode::CFootLockAnimNode()
{
	CUtlString::CUtlString(
			const char* pString);  // 19
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 19
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::CSmartPtr(); // 19
	Object::Object(); // 30
	IAnimNode::IAnimNode(); // 19
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 19
	AnimNodeID::AnimNodeID(); // 19
	CUtlString::CUtlString(); // 19
	CAnimNodeBase::CAnimNodeBase(); // 33
	AnimNodeID::AnimNodeID(); // 22
	AnimOutputID::AnimOutputID(); // 22
	CNodeConnection::CNodeConnection(); // 33
	CUtlVectorBase<CFootLockItem, CUtlMemory<CFootLockItem, int> >::ResetDbgInfo(); // 530
	CUtlMemory<CFootLockItem, int>::ValidateGrowSize(); // 475
	CUtlMemory<CFootLockItem, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CFootLockItem, CUtlMemory<CFootLockItem, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CFootLockItem, CUtlMemory<CFootLockItem, int> >::CUtlVector(); // 33
	CUtlString::CUtlString(); // 33
} /* size: 449, inline expansions: 19 (279 bytes) */

// <01069B8C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.cpp:32
void CFootLockAnimNode::CFootLockAnimNode()
{
} /* size: 0 */

// <01069B74> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.cpp:37
void CFootLockAnimNode::GetChildCount()
{
} /* size: 0 */

// <01069B50> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.cpp:43
void CFootLockAnimNode::GetChild(int childIndex)
{
} /* size: 0 */

// <01069B2C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.cpp:49
void CFootLockAnimNode::GetChildID(int childIndex)
{
} /* size: 0 */

// <01069B03> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.cpp:55
void CFootLockAnimNode::SetChildID(int, AnimNodeID nodeID)
{
} /* size: 0 */

// <01093346> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.cpp:61
// function calls: 2
void CFootLockAnimNode::GetChildName(int)
{
	CUtlString::CUtlString(
			const char* pString);  // 63
	CFootLockAnimNode::GetChildName(
			int);  // 61
} /* size: 146, inline expansions: 2 (99 bytes) */

// <01069ACF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.cpp:61
// variable: 1
void CFootLockAnimNode::GetChildName(int)
{
	const CUtlString  sRootChildString; // 63
} /* size: 0, variables: 1 */

// <01069AAB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.cpp:68
void CFootLockAnimNode::GetChildOutputID(int index)
{
} /* size: 0 */

// <01069A7B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.cpp:74
void CFootLockAnimNode::SetInputConnection(int index, CNodeConnection connection)
{
} /* size: 0 */

// <01066F0C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/footlockanimnode.cpp:80
// variables: 58
// function calls: 166
void CFootLockAnimNode::CreateUpdateNode(CAnimGraphInitContext& initContext)
{
	CPackedHandle<CFootLockUpdateNode> hNodeHandle; // 82
	const int  nLockableFootCount; // 84
	CUtlVector<CFootDefinition, CUtlMemory<CFootDefinition, int> > footDefinitions; // 90
	CFootLockUpdateNode* pNode; // 92
	FootLockPoseOpFixedSettings& opFixedSettings; // 94
	CFootLockUpdateNodeInstanceData& nodeInstanceSettings; // 95
	const CAnimUpdateNodeBase* childUpdateNode; // 97
	{
		int i; // 137
		{
			const CFootLockItem& footInfo; // 139
			FootOpFixedInfo& fixedInfo; // 140
			{
				int iFoot; // 152
				{
					const CFootDefinition& footDefinition; // 156
					FootFixedSettings& footSettings; // 162
					{
						CTransform ankleTransform; // 173
						const VectorAligned  vToePositionMS; // 176
						VectorAligned::VectorAligned(); // 31
						QuaternionAligned::QuaternionAligned(); // 31
						CTransform::CTransform(); // 173
						VectorAligned::operator fltx4(); // 406
						{
							fltx4 v1_yzxx; // 3340
							fltx4 v2_zxyy; // 3342
							fltx4 v1_zxyy; // 3344
							fltx4 v2_yzxx; // 3346
							_mm_shuffle_ps(__m128 __A,
									__m128 __B,
									const int  __mask);  // 3343
							_mm_shuffle_ps(__m128 __A,
									__m128 __B,
									const int  __mask);  // 3347
							_mm_shuffle_ps(__m128 __A,
									__m128 __B,
									const int  __mask);  // 3341
							_mm_shuffle_ps(__m128 __A,
									__m128 __B,
									const int  __mask);  // 3345
							{
								fltx4 retVal; // 1639
								_mm_mul_ps(__m128 __A,
										__m128 __B);  // 1640
							}
							MulSIMD<>(const fltx4& a,
									const fltx4& b);  // 3348
							{
								fltx4 retVal; // 1639
								_mm_mul_ps(__m128 __A,
										__m128 __B);  // 1640
							}
							MulSIMD<>(const fltx4& a,
									const fltx4& b);  // 3348
							{
								fltx4 retVal; // 1616
								_mm_sub_ps(__m128 __A,
										__m128 __B);  // 1617
							}
							SubSIMD<>(const fltx4& a,
									const fltx4& b);  // 3348
						}
						CrossProduct3SIMD<>(const fltx4& v1,
									const fltx4& v2);  // 310
						{
							fltx4 retVal; // 1352
							_mm_shuffle_ps(__m128 __A,
									__m128 __B,
									const int  __mask);  // 1353
						}
						SplatWSIMD<>(const fltx4& a); // 313
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 311
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1684
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1684
						MaddSIMD<>(const fltx4& a,
								const fltx4& b,
								const fltx4& c);  // 313
						{
							fltx4 v1_yzxx; // 3340
							fltx4 v2_zxyy; // 3342
							fltx4 v1_zxyy; // 3344
							fltx4 v2_yzxx; // 3346
							_mm_shuffle_ps(__m128 __A,
									__m128 __B,
									const int  __mask);  // 3343
							_mm_shuffle_ps(__m128 __A,
									__m128 __B,
									const int  __mask);  // 3347
							{
								fltx4 retVal; // 1639
								_mm_mul_ps(__m128 __A,
										__m128 __B);  // 1640
							}
							MulSIMD<>(const fltx4& a,
									const fltx4& b);  // 3348
							{
								fltx4 retVal; // 1639
								_mm_mul_ps(__m128 __A,
										__m128 __B);  // 1640
							}
							MulSIMD<>(const fltx4& a,
									const fltx4& b);  // 3348
							{
								fltx4 retVal; // 1616
								_mm_sub_ps(__m128 __A,
										__m128 __B);  // 1617
							}
							SubSIMD<>(const fltx4& a,
									const fltx4& b);  // 3348
						}
						CrossProduct3SIMD<>(const fltx4& v1,
									const fltx4& v2);  // 315
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 316
						VectorAligned::VectorAligned(
								fltx4 rhs);  // 318
						QuaternionAligned::operator*(
								const VectorAligned& v);  // 408
						{
							fltx4 retVal; // 1352
							_mm_shuffle_ps(__m128 __A,
									__m128 __B,
									const int  __mask);  // 1353
						}
						SplatWSIMD<>(const fltx4& a); // 406
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 409
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 410
						VectorAligned::VectorAligned(
								fltx4 rhs);  // 411
						CTransform::TransformVector(
								const VectorAligned& v0);  // 176
						VectorAligned::operator=(
								const VectorAligned& src);  // 178
					}
					CUtlMemory<CFootDefinition, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CFootDefinition, CUtlMemory<CFootDefinition, int> >::operator[](
							int i);  // 156
					CUtlString::Get(); // 441
					CUtlString::operator char const*(); // 158
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
							float p3);  // 177
					VectorAligned::operator=(
							const Vector& src);  // 159
					{
					}
					CRelativeOffset<FootFixedSettings>::IsValid(); // 30
					CRelativeOffset<FootFixedSettings>::Get(); // 90
					CRelativeArray<FootFixedSettings>::operator[](
							int index);  // 162
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
							float p3);  // 177
					VectorAligned::operator=(
							const Vector& src);  // 160
					AnimTagID::AnimTagID(
							const AnimTagID& rhs);  // 168
					{
					}
					CRelativeOffset<FootInstanceSettings>::IsValid(); // 30
					CRelativeOffset<FootInstanceSettings>::Get(); // 90
					CRelativeArray<FootInstanceSettings>::operator[](
							int index);  // 181
				}
				CUtlVectorBase<CFootDefinition, CUtlMemory<CFootDefinition, int> >::Count(); // 152
				CUtlMemory<CFootDefinition, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CFootDefinition, CUtlMemory<CFootDefinition, int> >::operator[](
						int i);  // 154
			}
			{
				const CAnimContainer* pAnimContainer; // 194
				{
					const CIKData_t& ikData; // 197
					{
						int iChainIndex; // 199
						{
							const CIKChainData_t& ikChain; // 205
							{
								const CModelSkeleton& modelSkeleton; // 212
								float flLegLength; // 213
								{
									int iJoint; // 215
									{
										CTransform boneXform; // 217
										CTransform childXform; // 218
										VectorAligned vDelta; // 223
										VectorAligned::VectorAligned(); // 31
										QuaternionAligned::QuaternionAligned(); // 31
										CTransform::CTransform(); // 217
										VectorAligned::VectorAligned(); // 31
										QuaternionAligned::QuaternionAligned(); // 31
										CTransform::CTransform(); // 218
										CUtlMemory<CIKChainJointData_t, int>::operator[](
												int i);  // 595
										CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
												int i);  // 220
										CUtlMemory<CIKChainJointData_t, int>::operator[](
												int i);  // 595
										CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
												int i);  // 221
										VectorAligned::operator fltx4(); // 256
										{
											fltx4 retVal; // 1616
											_mm_sub_ps(__m128 __A,
													__m128 __B);  // 1617
										}
										SubSIMD<>(const fltx4& a,
												const fltx4& b);  // 256
										VectorAligned::VectorAligned(
												fltx4 rhs);  // 256
										VectorAligned::operator-(
												const VectorAligned& v);  // 223
										{
											fltx4 retVal; // 1639
											_mm_mul_ps(__m128 __A,
													__m128 __B);  // 1640
										}
										MulSIMD<>(const fltx4& a,
												const fltx4& b);  // 1694
										{
											fltx4 retVal; // 1333
											_mm_shuffle_ps(__m128 __A,
													__m128 __B,
													const int  __mask);  // 1334
										}
										SplatZSIMD<>(const fltx4& a); // 1695
										{
											fltx4 retVal; // 1314
											_mm_shuffle_ps(__m128 __A,
													__m128 __B,
													const int  __mask);  // 1315
										}
										SplatYSIMD<>(const fltx4& a); // 1695
										{
											fltx4 retVal; // 1295
											_mm_shuffle_ps(__m128 __A,
													__m128 __B,
													const int  __mask);  // 1296
										}
										SplatXSIMD<>(const fltx4& a); // 1695
										{
											fltx4 retVal; // 1593
											_mm_add_ps(__m128 __A,
													__m128 __B);  // 1594
										}
										AddSIMD<>(const fltx4& a,
												const fltx4& b);  // 1695
										{
											fltx4 retVal; // 1593
											_mm_add_ps(__m128 __A,
													__m128 __B);  // 1594
										}
										AddSIMD<>(const fltx4& a,
												const fltx4& b);  // 1695
										Dot3SIMD<>(const fltx4& a,
												const fltx4& b);  // 298
										{
											fltx4 retVal; // 2350
											_mm_sqrt_ps(__m128 __A); // 2351
										}
										SqrtSIMD<>(const fltx4& a); // 299
										_mm_cvtss_f32(__m128 __A); // 1496
										GetXSIMD<>(fltx4 a); // 300
										VectorAligned::Length(); // 224
									}
									CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 215
								}
								CUtlMemory<CIKChainJointData_t, int>::operator[](
										int i);  // 595
								CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
										int i);  // 209
							}
							CUtlMemory<CIKChainData_t, int>::operator[](
									int i);  // 595
							CUtlVectorBase<CIKChainData_t, CUtlMemory<CIKChainData_t, int> >::operator[](
									int i);  // 205
							CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 206
						}
						CUtlVectorBase<CIKChainData_t, CUtlMemory<CIKChainData_t, int> >::Count(); // 199
						CUtlMemory<CIKChainData_t, int>::operator[](
								int i);  // 595
						CUtlVectorBase<CIKChainData_t, CUtlMemory<CIKChainData_t, int> >::operator[](
								int i);  // 201
					}
				}
			}
			CUtlMemory<CFootLockItem, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CFootLockItem, CUtlMemory<CFootLockItem, int> >::operator[](
					int i);  // 139
			{
			}
			CRelativeOffset<FootOpFixedInfo>::IsValid(); // 30
			CRelativeOffset<FootOpFixedInfo>::Get(); // 90
			CRelativeArray<FootOpFixedInfo>::operator[](
					int index);  // 140
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 141
			GenericCriticallyDampedType<float>::SetSpringStrength(
						float flSpringStrength);  // 148
			GenericCriticallyDampedType<float>::SetSpringStrength(
						float flSpringStrength);  // 149
			CUtlString::IsEmpty(); // 192
			{
			}
			CRelativeOffset<FootFixedSettings>::IsValid(); // 30
			CRelativeOffset<FootFixedSettings>::Get(); // 90
			CRelativeArray<FootFixedSettings>::operator[](
					int index);  // 236
			CUtlString::Get(); // 99
			CUtlString::String(); // 238
			CAnimNodeBase::GetName(); // 238
			CUtlString::Get(); // 99
			CUtlString::String(); // 238
			CUtlString::Get(); // 99
			CUtlString::String(); // 145
			CAnimNodeBase::GetName(); // 145
			CUtlString::Get(); // 99
			CUtlString::String(); // 145
		}
	}
	CUtlVectorBase<CFootLockItem, CUtlMemory<CFootLockItem, int> >::Count(); // 84
	CAnimNodeBase::GetName(); // 87
	CUtlString::Get(); // 99
	CUtlString::String(); // 87
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<FootLockPoseOpFixedSettings>(
						const CPackedHandle<FootLockPoseOpFixedSettings>& handle);  // 94
	CPackedDataT<false>::AddItem<CFootLockUpdateNode, CAnimGraphInitContext&, int const&>(
									CPackedHandle<CFootLockUpdateNode>* handleOut);  // 92
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CFootLockUpdateNodeInstanceData>(
							const CPackedHandle<CFootLockUpdateNodeInstanceData>& handle);  // 95
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 97
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 97
	CRelativeOffset<const CAnimUpdateNodeBase>::SetOffset(
			const CAnimUpdateNodeBase* targetPtr);  // 20
	CRelativeOffset<const CAnimUpdateNodeBase>::operator=(
			const CAnimUpdateNodeBase* targetPtr);  // 100
	CAnimInputDamping::operator=(
			const CAnimInputDamping  &);  // 106
	CAnimInputDamping::operator=(
			const CAnimInputDamping  &);  // 107
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 121
	CAnimInputDamping::operator=(
			const CAnimInputDamping  &);  // 127
	{
		int i; // 1721
		CUtlMemory<CFootDefinition, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CFootDefinition, CUtlMemory<CFootDefinition, int> >::Element(
			int i);  // 1723
		CUtlString::~CUtlString(); // 14
		CUtlString::~CUtlString(); // 14
		CUtlString::~CUtlString(); // 14
		CFootDefinition::~CFootDefinition(); // 1526
		Destruct<CFootDefinition>(CFootDefinition* pMemory); // 1723
	}
	CUtlVectorBase<CFootDefinition, CUtlMemory<CFootDefinition, int> >::RemoveAll(); // 1798
	CUtlMemory<CFootDefinition, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CFootDefinition, int>::Purge(); // 903
	CUtlMemory<CFootDefinition, int>::Purge(); // 1799
	CUtlVectorBase<CFootDefinition, CUtlMemory<CFootDefinition, int> >::Purge(); // 560
	ValidateAlignment<CFootDefinition>(void); // 508
	CUtlMemory<CFootDefinition, int>::Purge(); // 510
	CUtlMemory<CFootDefinition, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CFootDefinition, CUtlMemory<CFootDefinition, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CFootDefinition, CUtlMemory<CFootDefinition, int> >::~CUtlVector(); // 243
} /* size: 0, variables: 7, inline expansions: 28 (1094 bytes) */

