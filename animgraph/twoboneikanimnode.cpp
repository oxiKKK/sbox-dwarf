
//
// animgraph/twoboneikanimnode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 15
//

// <0129F4B5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.cpp:15
void MyTypeInfo(void)
{
} /* size: 0 */

// <0129C4B1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.cpp:15
void CTwoBoneIKAnimNode::GetTypeInfo()
{
} /* size: 12 */

// <0127B6B6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.cpp:15
// function calls: 3
void* CTwoBoneIKAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CTwoBoneIKAnimNode>::CastTo(
		CTwoBoneIKAnimNode* derived,
		ClassID baseTypeInfo);  // 15
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0127B522> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.cpp:15
// function calls: 3
const void* CTwoBoneIKAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CTwoBoneIKAnimNode>::CastTo(
		const CTwoBoneIKAnimNode* derived,
		ClassID baseTypeInfo);  // 15
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0127B2D4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.cpp:24
// function calls: 9
void CTwoBoneIKAnimNode::CTwoBoneIKAnimNode()
{
	AnimNodeID::AnimNodeID(); // 22
	AnimOutputID::AnimOutputID(); // 22
	CNodeConnection::CNodeConnection(); // 25
	CUtlString::CUtlString(); // 25
	CUtlString::CUtlString(); // 25
	CUtlString::CUtlString(); // 25
	CUtlString::CUtlString(); // 25
	AnimParamID::AnimParamID(); // 25
	AnimParamID::AnimParamID(); // 25
} /* size: 130, inline expansions: 9 (57 bytes) */

// <0127B2BB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.cpp:24
void CTwoBoneIKAnimNode::CTwoBoneIKAnimNode()
{
} /* size: 0 */

// <0127B2A3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.cpp:31
void CTwoBoneIKAnimNode::GetChildCount()
{
} /* size: 0 */

// <0127B27F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.cpp:37
void CTwoBoneIKAnimNode::GetChild(int childIndex)
{
} /* size: 0 */

// <0127B25B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.cpp:43
void CTwoBoneIKAnimNode::GetChildID(int childIndex)
{
} /* size: 0 */

// <0127B22B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.cpp:49
void CTwoBoneIKAnimNode::SetChildID(int childIndex, AnimNodeID nodeID)
{
} /* size: 0 */

// <0129CCA3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.cpp:55
// function calls: 2
void CTwoBoneIKAnimNode::GetChildName(int childIndex)
{
	CUtlString::CUtlString(
			const char* pString);  // 57
	CTwoBoneIKAnimNode::GetChildName(
			int childIndex);  // 55
} /* size: 146, inline expansions: 2 (99 bytes) */

// <0127B1EF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.cpp:55
// variable: 1
void CTwoBoneIKAnimNode::GetChildName(int childIndex)
{
	CUtlString sChildName; // 57
} /* size: 0, variables: 1 */

// <0127B1CB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.cpp:62
void CTwoBoneIKAnimNode::GetChildOutputID(int index)
{
} /* size: 0 */

// <0127B19B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.cpp:68
void CTwoBoneIKAnimNode::SetInputConnection(int index, CNodeConnection connection)
{
} /* size: 0 */

// <01275B55> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/twoboneikanimnode.cpp:74
// variables: 130
// function calls: 352
void CTwoBoneIKAnimNode::CreateUpdateNode(CAnimGraphInitContext& initContext)
{
	CPackedHandle<CTwoBoneIKUpdateNode> hNodeHandle; // 76
	CTwoBoneIKUpdateNode* pNode; // 78
	const CAnimUpdateNodeBase* childUpdateNode; // 80
	TwoBoneIKSettings_t& ikFixedSettings; // 86
	bool bHasValidIKChain; // 95
	CUtlVector<const CAttachment*, CUtlMemory<const CAttachment*, int> > attachments; // 165
	{
		const CAnimContainer* pAnimContainer; // 97
		{
			const CIKData_t& ikData; // 99
			{
				const CIKChainData_t& ikChain; // 101
				const CUtlVector<CIKChainData_t, CUtlMemory<CIKChainData_t, int> >& __for_range; // 39440
				const_iterator __for_begin; // 36030
				const_iterator __for_end; // 36030
				{
					const CModelSkeleton& modelSkeleton; // 116
					CTransform fixedBoneTransform; // 119
					CTransform midBoneTransform; // 120
					CTransform endBoneTransform; // 121
					VectorAligned vToFixed; // 123
					VectorAligned vToEnd; // 124
					VectorAligned vAxis; // 126
					float dp; // 129
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
							float flScale);  // 119
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
							float flScale);  // 120
					CTransform::operator*(
							const CTransform& rhs);  // 120
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
							float flScale);  // 121
					QuaternionAligned::operator fltx4(); // 471
					VectorAligned::operator fltx4(); // 471
					CTransform::operator*(
							const CTransform& rhs);  // 121
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
							const VectorAligned& v);  // 123
					VectorAligned::VectorAligned(
							fltx4 rhs);  // 351
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
							const fltx4& b);  // 359
					{
						fltx4 retVal; // 2350
						_mm_sqrt_ps(__m128 __A); // 2351
					}
					SqrtSIMD<>(const fltx4& a); // 360
					{
						fltx4 retVal; // 1981
						_mm_cmpgt_ps(__m128 __A,
								__m128 __B);  // 1982
					}
					CmpGtSIMD<>(const fltx4& a,
							const fltx4& b);  // 361
					{
						fltx4 retVal; // 1662
						_mm_div_ps(__m128 __A,
								__m128 __B);  // 1663
					}
					DivSIMD<>(const fltx4& a,
							const fltx4& b);  // 362
					{
						fltx4 retVal; // 826
						_mm_xor_ps(__m128 __A,
								__m128 __B);  // 827
					}
					XorSIMD<>(const fltx4& a,
							const fltx4& b);  // 1259
					{
						fltx4 retVal; // 718
						_mm_and_ps(__m128 __A,
								__m128 __B);  // 719
					}
					AndSIMD<>(const fltx4& a,
							const fltx4& b);  // 1259
					{
						fltx4 retVal; // 826
						_mm_xor_ps(__m128 __A,
								__m128 __B);  // 827
					}
					XorSIMD<>(const fltx4& a,
							const fltx4& b);  // 1259
					MaskedAssign<>(const fltx4& ReplacementMask,
							const fltx4& a,
							const fltx4& b);  // 362
					VectorAligned::VectorAligned(
							fltx4 rhs);  // 362
					VectorAligned::NormalizedSafe(
							const VectorAligned& v);  // 351
					VectorAligned::Normalized(); // 123
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
							const VectorAligned& v);  // 124
					VectorAligned::VectorAligned(
							fltx4 rhs);  // 351
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
							const fltx4& b);  // 359
					{
						fltx4 retVal; // 2350
						_mm_sqrt_ps(__m128 __A); // 2351
					}
					SqrtSIMD<>(const fltx4& a); // 360
					{
						fltx4 retVal; // 1981
						_mm_cmpgt_ps(__m128 __A,
								__m128 __B);  // 1982
					}
					CmpGtSIMD<>(const fltx4& a,
							const fltx4& b);  // 361
					{
						fltx4 retVal; // 1662
						_mm_div_ps(__m128 __A,
								__m128 __B);  // 1663
					}
					DivSIMD<>(const fltx4& a,
							const fltx4& b);  // 362
					{
						fltx4 retVal; // 826
						_mm_xor_ps(__m128 __A,
								__m128 __B);  // 827
					}
					XorSIMD<>(const fltx4& a,
							const fltx4& b);  // 1259
					{
						fltx4 retVal; // 718
						_mm_and_ps(__m128 __A,
								__m128 __B);  // 719
					}
					AndSIMD<>(const fltx4& a,
							const fltx4& b);  // 1259
					{
						fltx4 retVal; // 826
						_mm_xor_ps(__m128 __A,
								__m128 __B);  // 827
					}
					XorSIMD<>(const fltx4& a,
							const fltx4& b);  // 1259
					MaskedAssign<>(const fltx4& ReplacementMask,
							const fltx4& a,
							const fltx4& b);  // 362
					VectorAligned::VectorAligned(
							fltx4 rhs);  // 362
					VectorAligned::NormalizedSafe(
							const VectorAligned& v);  // 351
					VectorAligned::Normalized(); // 124
					{
						fltx4 v1_yzxx; // 3340
						fltx4 v2_zxyy; // 3342
						fltx4 v1_zxyy; // 3344
						fltx4 v2_yzxx; // 3346
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 3341
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 3345
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
								const fltx4& v2);  // 386
					VectorAligned::VectorAligned(
							fltx4 rhs);  // 386
					VectorAligned::Cross(
						const VectorAligned& v);  // 422
					CrossProduct(const VectorAligned& lhs,
							const VectorAligned& rhs);  // 133
					VectorAligned::VectorAligned(); // 126
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
							const fltx4& b);  // 379
					_mm_cvtss_f32(__m128 __A); // 1496
					GetXSIMD<>(fltx4 a); // 380
					VectorAligned::Dot(
						const VectorAligned& v);  // 416
					DotProduct(const VectorAligned& lhs,
							const VectorAligned& rhs);  // 129
					CloseEnough(float a,
							float b,
							float epsilon);  // 130
					CloseEnough(float a,
							float b,
							float epsilon);  // 130
					QuaternionAligned::operator fltx4(); // 408
					{
						fltx4 fl4Product; // 1725
						fltx4 fl4YXWZ; // 1727
						fltx4 fl4UUVV; // 1729
						fltx4 fl4VVUU; // 1731
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1725
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 1728
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1730
						{
							fltx4 retVal; // 373
							_mm_shuffle_ps(__m128 __A,
									__m128 __B,
									const int  __mask);  // 374
						}
						RotateLeft2<>(const fltx4& a); // 1732
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 1733
					}
					Dot4SIMD<>(const fltx4& a,
							const fltx4& b);  // 405
					{
						fltx4 retVal; // 2350
						_mm_sqrt_ps(__m128 __A); // 2351
					}
					SqrtSIMD<>(const fltx4& a); // 406
					{
						fltx4 retVal; // 1851
						_mm_cmpeq_ps(__m128 __A,
								__m128 __B);  // 1852
					}
					CmpEqSIMD<>(const fltx4& a,
							const fltx4& b);  // 407
					{
						fltx4 retVal; // 1662
						_mm_div_ps(__m128 __A,
								__m128 __B);  // 1663
					}
					DivSIMD<>(const fltx4& a,
							const fltx4& b);  // 408
					{
						fltx4 retVal; // 826
						_mm_xor_ps(__m128 __A,
								__m128 __B);  // 827
					}
					XorSIMD<>(const fltx4& a,
							const fltx4& b);  // 1259
					{
						fltx4 retVal; // 718
						_mm_and_ps(__m128 __A,
								__m128 __B);  // 719
					}
					AndSIMD<>(const fltx4& a,
							const fltx4& b);  // 1259
					{
						fltx4 retVal; // 826
						_mm_xor_ps(__m128 __A,
								__m128 __B);  // 827
					}
					XorSIMD<>(const fltx4& a,
							const fltx4& b);  // 1259
					MaskedAssign<>(const fltx4& ReplacementMask,
							const fltx4& a,
							const fltx4& b);  // 408
					QuaternionAligned::QuaternionAligned(
								fltx4 vec);  // 408
					QuaternionAligned::Normalized(); // 448
					{
						fltx4 retVal; // 1616
						_mm_sub_ps(__m128 __A,
								__m128 __B);  // 1617
					}
					SubSIMD<>(const fltx4& a,
							const fltx4& b);  // 1797
					NegSIMD<>(const fltx4& a); // 422
					{
						fltx4 retVal; // 1276
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 1277
					}
					ShuffleSIMD<27>(const fltx4& a,
							const fltx4& b);  // 665
					ShuffleSIMD<27, (ESIMDLevel)20>(const fltx4& a,
									const fltx4& b); // 2928
					ReverseSIMD<>(const fltx4& v); // 421
					QuaternionAligned::QuaternionAligned(
								fltx4 vec);  // 423
					QuaternionAligned::Conjugate(); // 448
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
								const int  __mask);  // 3341
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 3347
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
							const VectorAligned& v);  // 448
					CTransform::RotateVectorByInverse(
								const VectorAligned& v0);  // 151
					VectorAligned::VectorAligned(
							fltx4 rhs);  // 351
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
							const fltx4& b);  // 359
					{
						fltx4 retVal; // 2350
						_mm_sqrt_ps(__m128 __A); // 2351
					}
					SqrtSIMD<>(const fltx4& a); // 360
					{
						fltx4 retVal; // 1981
						_mm_cmpgt_ps(__m128 __A,
								__m128 __B);  // 1982
					}
					CmpGtSIMD<>(const fltx4& a,
							const fltx4& b);  // 361
					{
						fltx4 retVal; // 1662
						_mm_div_ps(__m128 __A,
								__m128 __B);  // 1663
					}
					DivSIMD<>(const fltx4& a,
							const fltx4& b);  // 362
					{
						fltx4 retVal; // 826
						_mm_xor_ps(__m128 __A,
								__m128 __B);  // 827
					}
					XorSIMD<>(const fltx4& a,
							const fltx4& b);  // 1259
					{
						fltx4 retVal; // 718
						_mm_and_ps(__m128 __A,
								__m128 __B);  // 719
					}
					AndSIMD<>(const fltx4& a,
							const fltx4& b);  // 1259
					{
						fltx4 retVal; // 826
						_mm_xor_ps(__m128 __A,
								__m128 __B);  // 827
					}
					XorSIMD<>(const fltx4& a,
							const fltx4& b);  // 1259
					MaskedAssign<>(const fltx4& ReplacementMask,
							const fltx4& a,
							const fltx4& b);  // 362
					VectorAligned::VectorAligned(
							fltx4 rhs);  // 362
					VectorAligned::NormalizedSafe(
							const VectorAligned& v);  // 351
					VectorAligned::Normalized(); // 133
					VectorAligned::operator=(
							const VectorAligned& src);  // 133
					VectorAligned::VectorAligned(
							fltx4 rhs);  // 351
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
							const fltx4& b);  // 359
					{
						fltx4 retVal; // 2350
						_mm_sqrt_ps(__m128 __A); // 2351
					}
					SqrtSIMD<>(const fltx4& a); // 360
					{
						fltx4 retVal; // 1981
						_mm_cmpgt_ps(__m128 __A,
								__m128 __B);  // 1982
					}
					CmpGtSIMD<>(const fltx4& a,
							const fltx4& b);  // 361
					{
						fltx4 retVal; // 1662
						_mm_div_ps(__m128 __A,
								__m128 __B);  // 1663
					}
					DivSIMD<>(const fltx4& a,
							const fltx4& b);  // 362
					{
						fltx4 retVal; // 826
						_mm_xor_ps(__m128 __A,
								__m128 __B);  // 827
					}
					XorSIMD<>(const fltx4& a,
							const fltx4& b);  // 1259
					{
						fltx4 retVal; // 718
						_mm_and_ps(__m128 __A,
								__m128 __B);  // 719
					}
					AndSIMD<>(const fltx4& a,
							const fltx4& b);  // 1259
					{
						fltx4 retVal; // 826
						_mm_xor_ps(__m128 __A,
								__m128 __B);  // 827
					}
					XorSIMD<>(const fltx4& a,
							const fltx4& b);  // 1259
					MaskedAssign<>(const fltx4& ReplacementMask,
							const fltx4& a,
							const fltx4& b);  // 362
					VectorAligned::VectorAligned(
							fltx4 rhs);  // 362
					VectorAligned::NormalizedSafe(
							const VectorAligned& v);  // 351
					VectorAligned::Normalized(); // 151
					VectorAligned::operator=(
							const VectorAligned& src);  // 151
					_mm_cvtss_f32(__m128 __A); // 1534
					GetZSIMD<>(fltx4 a); // 76
					VectorAligned::z(); // 40
					_mm_cvtss_f32(__m128 __A); // 1515
					GetYSIMD<>(fltx4 a); // 75
					VectorAligned::y(); // 40
					_mm_cvtss_f32(__m128 __A); // 1496
					GetXSIMD<>(fltx4 a); // 74
					VectorAligned::x(); // 40
					Vector::Vector(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 40
					VectorAligned::operator Vector(); // 138
					_mm_cvtss_f32(__m128 __A); // 1496
					GetXSIMD<>(fltx4 a); // 74
					VectorAligned::x(); // 40
					_mm_cvtss_f32(__m128 __A); // 1534
					GetZSIMD<>(fltx4 a); // 76
					VectorAligned::z(); // 40
					_mm_cvtss_f32(__m128 __A); // 1515
					GetYSIMD<>(fltx4 a); // 75
					VectorAligned::y(); // 40
					Vector::Vector(
						vec_t X,
						vec_t Y,
						vec_t Z);  // 40
					VectorAligned::operator Vector(); // 138
					CloseEnough(const Vector& a,
							const Vector& b,
							float epsilon);  // 138
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
								const fltx4& v2);  // 386
					VectorAligned::Cross(
						const VectorAligned& v);  // 422
					CrossProduct(const VectorAligned& lhs,
							const VectorAligned& rhs);  // 144
				}
				CUtlMemory<CIKChainData_t, int>::Base(); // 113
				CUtlVectorBase<CIKChainData_t, CUtlMemory<CIKChainData_t, int> >::Base(); // 103
				CUtlVectorBase<CIKChainData_t, CUtlMemory<CIKChainData_t, int> >::begin(); // 101
				CUtlVectorBase<CIKChainData_t, CUtlMemory<CIKChainData_t, int> >::Count(); // 105
				CUtlVectorBase<CIKChainData_t, CUtlMemory<CIKChainData_t, int> >::end(); // 101
				CUtlMemory<CIKChainJointData_t, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
						int i);  // 109
				CUtlMemory<CIKChainJointData_t, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
						int i);  // 111
				VectorAligned::operator=(
						const VectorAligned& src);  // 111
				CUtlMemory<CIKChainJointData_t, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
						int i);  // 105
				CIKChainJointData_t::GetBoneIndex(); // 105
				CUtlMemory<CIKChainJointData_t, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
						int i);  // 106
				CIKChainJointData_t::GetBoneIndex(); // 106
				CUtlMemory<CIKChainJointData_t, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
						int i);  // 107
				CIKChainJointData_t::GetBoneIndex(); // 107
				CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 103
			}
		}
	}
	{
		int i; // 169
		CUtlMemory<const CAttachment::operator[](
				int i);  // 588
		CUtlVectorBase<const CAttachment::operator[](
				int i);  // 171
		CUtlMemory<const CAttachment::operator[](
				int i);  // 588
		CUtlVectorBase<const CAttachment::operator[](
				int i);  // 173
		CUtlMemory<const CAttachment::operator[](
				int i);  // 588
		CUtlVectorBase<const CAttachment::operator[](
				int i);  // 176
		CUtlMemory<const CAttachment::operator[](
				int i);  // 588
		CUtlVectorBase<const CAttachment::operator[](
				int i);  // 178
		CUtlVectorBase<const CAttachment::Count(); // 169
	}
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CTwoBoneIKUpdateNode>::CPackedHandle(); // 76
	CPackedDataT<false>::AddItem<CTwoBoneIKUpdateNode, CAnimGraphInitContext&>(
								CPackedHandle<CTwoBoneIKUpdateNode>* handleOut);  // 78
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 80
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 80
	CRelativeOffset<const CAnimUpdateNodeBase>::SetOffset(
			const CAnimUpdateNodeBase* targetPtr);  // 20
	CRelativeOffset<const CAnimUpdateNodeBase>::operator=(
			const CAnimUpdateNodeBase* targetPtr);  // 83
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<TwoBoneIKSettings_t>(
					const CPackedHandle<TwoBoneIKSettings_t>& handle);  // 86
	CUtlString::Get(); // 99
	CUtlString::String(); // 89
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 90
	CAnimParamHandle::operator=(
			const CAnimParamHandle& rhs);  // 90
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 91
	CAnimParamHandle::operator=(
			const CAnimParamHandle& rhs);  // 91
	CUtlMemory<const CAttachment::ValidateGrowSize(); // 475
	CUtlMemory<const CAttachment::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<const CAttachment::ResetDbgInfo(); // 530
	CUtlVectorBase<const CAttachment::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<const CAttachment::CUtlVector(); // 165
	CUtlVectorBase<const CAttachment::Count(); // 167
	CUtlVectorBase<const CAttachment::RemoveAll(); // 1798
	CUtlMemory<const CAttachment::IsExternallyAllocated(); // 905
	CUtlMemory<const CAttachment::Purge(); // 903
	CUtlMemory<const CAttachment::Purge(); // 1799
	CUtlVectorBase<const CAttachment::Purge(); // 560
	ValidateAlignment<const CAttachment*>(void); // 508
	CUtlMemory<const CAttachment::Purge(); // 510
	CUtlMemory<const CAttachment::~CUtlMemory(); // 562
	CUtlVectorBase<const CAttachment::~CUtlVectorBase(); // 410
	CUtlVector<const CAttachment::~CUtlVector(); // 194
} /* size: 2229, variables: 6, inline expansions: 31 (417 bytes) */

