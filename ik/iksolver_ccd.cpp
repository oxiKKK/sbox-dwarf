
//
// ik/iksolver_ccd.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//

// <01B4E2F9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/iksolver_ccd.cpp:25
void CIKSolver_CCD::CIKSolver_CCD(IPoseAccessor* pAnimPose, const VectorAligned& vTargetMS, const CIKChainData_t* pIkChain)
{
} /* size: 29 */

// <01B4E06F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/iksolver_ccd.cpp:36
// variables: 2
// function calls: 7
VectorAligned CalculateEndEffectorPositionMS(const CIKChainData_t* pIKChain, IPoseAccessor* pPoseAccessor)
{
	VectorAligned vEndEffectorPosMS; // 38
	const CAnimAttachment& attachment; // 40
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 52
	CUtlMemory<CIKChainJointData_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
			int i);  // 52
	CIKChainData_t::GetEndEffectorJoint(); // 48
	CIKChainJointData_t::GetBoneIndex(); // 48
	VectorAligned::operator=(
			const VectorAligned& src);  // 48
	VectorAligned::operator=(
			const VectorAligned& src);  // 44
} /* size: 138, variables: 2, inline expansions: 7 (28 bytes) */

// <01B43FC9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../ik/iksolver_ccd.cpp:54
// variables: 305
// function calls: 643
void CIKSolver_CCD::Run(int nMaxIterations, float flTolerance, IAnimationDebugRenderer* pDebugRenderer)
{
	int nJointCountToRotate; // 56
	const char   __FUNCTION__; // 12376
	VectorAligned vEndEffectorPosMS; // 67
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 65
	}
	{
		float flRadius; // 71
		{
			int nJoint; // 79
			{
				const CIKChainJointData_t& currentJoint; // 81
				const CTransform  xJointMS; // 83
				const VectorAligned  vJointPositionMS; // 84
				{
					const CIKChainJointData_t& nextJoint; // 89
					CUtlMemory<CIKChainJointData_t, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
							int i);  // 89
					CIKChainJointData_t::GetBoneIndex(); // 90
				}
				CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 87
				CUtlMemory<CIKChainJointData_t, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
						int i);  // 81
				CIKChainJointData_t::GetBoneIndex(); // 83
			}
			CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 79
		}
		CUtlString::CUtlString(
				const char* pString);  // 72
		CUtlString::~CUtlString(); // 72
		CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 74
	}
	{
		int nIteration; // 101
		{
			int nJoint; // 103
			{
				const CIKChainJointData_t& currentJoint; // 105
				BoneIndex_t nBoneIndex; // 107
				BoneIndex_t nParentBoneIndex; // 113
				const CTransform  boneOriginalXformMS; // 123
				VectorAligned vToEndEffector; // 125
				VectorAligned vToEndEffectorNorm; // 126
				VectorAligned vToTarget; // 128
				VectorAligned vToTargetNorm; // 129
				CTransform boneModifiedXformMS; // 131
				{
					_DebuggerBreakInlineExpressionWrapper(void); // 108
				}
				{
					QuaternionAligned qRot; // 134
					QuaternionAligned::QuaternionAligned(
								fltx4 vec);  // 301
					QuaternionAligned::operator*=(
							const QuaternionAligned& q);  // 302
					QuaternionAligned::operator*(
							const QuaternionAligned& q);  // 137
				}
				{
					const CTransform  parentBoneXformMS; // 141
					const CTransform  boneOriginalXformPS; // 143
					VectorAligned vJointAxis; // 147
					const bool  bHasHingeAxis; // 149
					const float  flAdjustmentInfluenceLerpAlpha; // 158
					float flGoalDist; // 301
					{
						const VectorAligned  vLocalHingeAxis; // 153
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
									const int  __mask);  // 3343
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
								const VectorAligned& v);  // 155
						VectorAligned::operator=(
								const VectorAligned& src);  // 155
					}
					{
						QuaternionAligned qRotAlign; // 162
						VectorAligned vTempAxisMS; // 173
						float flAngleRadians; // 174
						QuaternionAligned::QuaternionAligned(); // 162
						QuaternionAligned::operator=(
								const QuaternionAligned& vOther);  // 170
						VectorAligned::VectorAligned(); // 173
						_mm_cvtss_f32(__m128 __A); // 1553
						GetWSIMD<>(fltx4 a); // 77
						QuaternionAligned::w(); // 349
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
								const fltx4& b);  // 338
						{
							fltx4 retVal; // 2350
							_mm_sqrt_ps(__m128 __A); // 2351
						}
						SqrtSIMD<>(const fltx4& a); // 339
						{
							fltx4 retVal; // 1981
							_mm_cmpgt_ps(__m128 __A,
									__m128 __B);  // 1982
						}
						CmpGtSIMD<>(const fltx4& a,
								const fltx4& b);  // 341
						{
							fltx4 retVal; // 1662
							_mm_div_ps(__m128 __A,
									__m128 __B);  // 1663
						}
						DivSIMD<>(const fltx4& a,
								const fltx4& b);  // 343
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
								const fltx4& b);  // 343
						VectorAligned::NormalizeInPlaceSafe(
									const VectorAligned& vFallback);  // 352
						QuaternionAligned::GetAxisAngle(
								VectorAligned& axisOut,
								vec_t& angleRadiansOut);  // 175
						SinCos(float radians,
							float* sine,
							float* cosine);  // 361
						{
							fltx4 retVal; // 1134
							_mm_set1_ps(float __F); // 1135
						}
						ReplicateX4<>(float flValue); // 363
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 363
						{
							fltx4 retVal; // 1478
							_mm_move_ss(__m128 __A,
									__m128 __B);  // 1479
							_mm_move_ss(__m128 __A,
									__m128 __B);  // 1481
						}
						SetWSIMD<>(fltx4 a,
								float f);  // 364
						QuaternionAligned::SetAxisAngle(
								const VectorAligned& axis,
								vec_t angleRadians);  // 179
						QuaternionAligned::operator*=(
								const QuaternionAligned& q);  // 302
						QuaternionAligned::QuaternionAligned(
									fltx4 vec);  // 301
						QuaternionAligned::operator*(
								const QuaternionAligned& q);  // 182
						QuaternionAligned::operator=(
								const QuaternionAligned& vOther);  // 182
						{
							fltx4 v1_yzxx; // 3340
							fltx4 v2_zxyy; // 3342
							fltx4 v1_zxyy; // 3344
							fltx4 v2_yzxx; // 3346
							_mm_shuffle_ps(__m128 __A,
									__m128 __B,
									const int  __mask);  // 3347
							_mm_shuffle_ps(__m128 __A,
									__m128 __B,
									const int  __mask);  // 3343
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
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 311
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
								const VectorAligned& v);  // 185
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
								vec_t s);  // 186
						{
							fltx4 retVal; // 1593
							_mm_add_ps(__m128 __A,
									__m128 __B);  // 1594
						}
						AddSIMD<>(const fltx4& a,
								const fltx4& b);  // 250
						VectorAligned::VectorAligned(
								fltx4 rhs);  // 250
						VectorAligned::operator+(
								const VectorAligned& v);  // 187
						VectorAligned::operator=(
								const VectorAligned& src);  // 185
						VectorAligned::operator=(
								const VectorAligned& src);  // 187
						QuaternionAligned::operator=(
								const QuaternionAligned& vOther);  // 166
					}
					{
						VectorAligned v1; // 195
						VectorAligned v2; // 197
						VectorAligned vE; // 199
						VectorAligned vH; // 201
						VectorAligned v1Norm; // 208
						VectorAligned v2Norm; // 209
						const float  fla; // 210
						const float  flb; // 211
						const float  flVectorDp12; // 214
						float flVectorAngle12; // 216
						VectorAligned vVectorCross12; // 217
						const float  flLengthHSquared; // 229
						const float  flCosTheta; // 234
						const float  flTheta; // 236
						float flFixupAngle; // 239
						QuaternionAligned qRotExtend; // 243
						Clamp<float>(const float& val,
								const float& minVal,
								const float& maxVal);  // 221
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
								const VectorAligned& v);  // 195
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
						VectorAligned::Dot(
							const VectorAligned& v);  // 416
						DotProduct(const VectorAligned& lhs,
								const VectorAligned& rhs);  // 203
						VectorAligned::VectorAligned(
								fltx4 rhs);  // 256
						VectorAligned::operator-(
								const VectorAligned& v);  // 199
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
								const VectorAligned& v);  // 201
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
								vec_t s);  // 203
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 215
						VectorAligned::operator-=(
								const VectorAligned& v);  // 203
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 1694
						{
							fltx4 retVal; // 1295
							_mm_shuffle_ps(__m128 __A,
									__m128 __B,
									const int  __mask);  // 1296
						}
						SplatXSIMD<>(const fltx4& a); // 1695
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
						VectorAligned::Dot(
							const VectorAligned& v);  // 416
						DotProduct(const VectorAligned& lhs,
								const VectorAligned& rhs);  // 204
						{
							fltx4 retVal; // 1662
							_mm_div_ps(__m128 __A,
									__m128 __B);  // 1663
						}
						DivSIMD<>(const fltx4& a,
								const fltx4& b);  // 343
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
								const fltx4& b);  // 338
						{
							fltx4 retVal; // 2350
							_mm_sqrt_ps(__m128 __A); // 2351
						}
						SqrtSIMD<>(const fltx4& a); // 339
						{
							fltx4 retVal; // 1981
							_mm_cmpgt_ps(__m128 __A,
									__m128 __B);  // 1982
						}
						CmpGtSIMD<>(const fltx4& a,
								const fltx4& b);  // 341
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
								const fltx4& b);  // 343
						_mm_cvtss_f32(__m128 __A); // 1496
						GetXSIMD<>(fltx4 a); // 345
						VectorAligned::NormalizeInPlaceSafe(
									const VectorAligned& vFallback);  // 330
						VectorAligned::VectorAligned(
								fltx4 rhs);  // 330
						VectorAligned::NormalizeInPlace(); // 210
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
								vec_t s);  // 204
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 215
						VectorAligned::operator-=(
								const VectorAligned& v);  // 204
						VectorAligned::VectorAligned(
								fltx4 rhs);  // 268
						VectorAligned::operator*(
								vec_t s);  // 205
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
						VectorAligned::Dot(
							const VectorAligned& v);  // 416
						DotProduct(const VectorAligned& lhs,
								const VectorAligned& rhs);  // 206
						{
							fltx4 retVal; // 1662
							_mm_div_ps(__m128 __A,
									__m128 __B);  // 1663
						}
						DivSIMD<>(const fltx4& a,
								const fltx4& b);  // 343
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
								const fltx4& b);  // 338
						{
							fltx4 retVal; // 2350
							_mm_sqrt_ps(__m128 __A); // 2351
						}
						SqrtSIMD<>(const fltx4& a); // 339
						{
							fltx4 retVal; // 1981
							_mm_cmpgt_ps(__m128 __A,
									__m128 __B);  // 1982
						}
						CmpGtSIMD<>(const fltx4& a,
								const fltx4& b);  // 341
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
								const fltx4& b);  // 343
						_mm_cvtss_f32(__m128 __A); // 1496
						GetXSIMD<>(fltx4 a); // 345
						VectorAligned::NormalizeInPlaceSafe(
									const VectorAligned& vFallback);  // 330
						VectorAligned::VectorAligned(
								fltx4 rhs);  // 330
						VectorAligned::NormalizeInPlace(); // 211
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
								vec_t s);  // 206
						{
							fltx4 retVal; // 1616
							_mm_sub_ps(__m128 __A,
									__m128 __B);  // 1617
						}
						SubSIMD<>(const fltx4& a,
								const fltx4& b);  // 215
						VectorAligned::operator-=(
								const VectorAligned& v);  // 206
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
								const VectorAligned& rhs);  // 214
						VectorAligned::VectorAligned(); // 217
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
									const int  __mask);  // 3343
							_mm_shuffle_ps(__m128 __A,
									__m128 __B,
									const int  __mask);  // 3345
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
								const VectorAligned& rhs);  // 222
						VectorAligned::operator=(
								const VectorAligned& src);  // 222
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
								const fltx4& b);  // 323
						_mm_cvtss_f32(__m128 __A); // 1496
						GetXSIMD<>(fltx4 a); // 324
						VectorAligned::LengthSqr(); // 229
						Clamp<float>(const float& val,
								const float& minVal,
								const float& maxVal);  // 236
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
						VectorAligned::VectorAligned(
								fltx4 rhs);  // 351
						VectorAligned::Normalized(); // 243
						SinCos(float radians,
							float* sine,
							float* cosine);  // 361
						{
							fltx4 retVal; // 1134
							_mm_set1_ps(float __F); // 1135
						}
						ReplicateX4<>(float flValue); // 363
						{
							fltx4 retVal; // 1639
							_mm_mul_ps(__m128 __A,
									__m128 __B);  // 1640
						}
						MulSIMD<>(const fltx4& a,
								const fltx4& b);  // 363
						{
							fltx4 retVal; // 1478
							_mm_move_ss(__m128 __A,
									__m128 __B);  // 1479
							_mm_move_ss(__m128 __A,
									__m128 __B);  // 1481
						}
						SetWSIMD<>(fltx4 a,
								float f);  // 364
						QuaternionAligned::SetAxisAngle(
								const VectorAligned& axis,
								vec_t angleRadians);  // 31
						QuaternionAligned::QuaternionAligned(
									const VectorAligned& axis,
									vec_t angle);  // 243
						QuaternionAligned::QuaternionAligned(
									fltx4 vec);  // 301
						QuaternionAligned::operator*=(
								const QuaternionAligned& q);  // 302
						QuaternionAligned::operator*(
								const QuaternionAligned& q);  // 246
						QuaternionAligned::operator=(
								const QuaternionAligned& vOther);  // 246
						VectorAligned::operator=(
								const VectorAligned& src);  // 226
					}
					{
						const CIKChainJointData_t* pJoint; // 252
						const IIKJointConstraintData* pConstraint; // 255
						const CIKJointConstraintData_Hinge* pHingeConstraint; // 265
						{
							const IIKJointConstraintData* pData; // 257
							const CUtlVector<IIKJointConstraintData*, CUtlMemory<IIKJointConstraintData*, int> >& __for_range; // 6134
							const_iterator __for_begin; // 2724
							const_iterator __for_end; // 2724
							CUtlMemory<IIKJointConstraintData::Base(); // 113
							CUtlVectorBase<IIKJointConstraintData::Base(); // 103
							CUtlVectorBase<IIKJointConstraintData::begin(); // 257
							CUtlVectorBase<IIKJointConstraintData::Count(); // 105
							CUtlVectorBase<IIKJointConstraintData::end(); // 257
						}
						{
							const VectorAligned  vLocalForward; // 268
							const VectorAligned  vJointForward; // 269
							const VectorAligned  vNewForward; // 270
							float flFixupAngle; // 272
							const float  flAngle; // 273
							{
								QuaternionAligned qFixUpRot; // 285
								QuaternionAligned::QuaternionAligned(); // 285
								SinCos(float radians,
									float* sine,
									float* cosine);  // 361
								{
									fltx4 retVal; // 1134
									_mm_set1_ps(float __F); // 1135
								}
								ReplicateX4<>(float flValue); // 363
								VectorAligned::operator fltx4(); // 363
								{
									fltx4 retVal; // 1639
									_mm_mul_ps(__m128 __A,
											__m128 __B);  // 1640
								}
								MulSIMD<>(const fltx4& a,
										const fltx4& b);  // 363
								{
									fltx4 retVal; // 1478
									_mm_move_ss(__m128 __A,
											__m128 __B);  // 1479
									_mm_move_ss(__m128 __A,
											__m128 __B);  // 1481
								}
								SetWSIMD<>(fltx4 a,
										float f);  // 364
								QuaternionAligned::SetAxisAngle(
										const VectorAligned& axis,
										vec_t angleRadians);  // 286
								QuaternionAligned::QuaternionAligned(
											fltx4 vec);  // 301
								QuaternionAligned::operator*=(
										const QuaternionAligned& q);  // 302
								QuaternionAligned::operator*(
										const QuaternionAligned& q);  // 290
								QuaternionAligned::operator=(
										const QuaternionAligned& vOther);  // 290
							}
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
							VectorAligned::Normalized(); // 268
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
										const int  __mask);  // 3343
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
									const VectorAligned& v);  // 269
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
									const VectorAligned& v);  // 270
							CloseEnough(float a,
									float b,
									float epsilon);  // 283
						}
						CUtlMemory<CIKChainJointData_t, int>::operator[](
								int i);  // 595
						CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
								int i);  // 252
					}
					ConVar::GetInt(); // 351
					ConVar::GetBool(); // 250
					VectorAligned::operator=(
							const VectorAligned& src);  // 298
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
							const VectorAligned& v);  // 301
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
					VectorAligned::Length(); // 301
					CTransform::InverseTR(); // 143
					QuaternionAligned::operator fltx4(); // 471
					QuaternionAligned::operator fltx4(); // 471
					VectorAligned::operator fltx4(); // 471
					CTransform::operator*(
							const CTransform& rhs);  // 143
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
								const int  __mask);  // 3343
						_mm_shuffle_ps(__m128 __A,
								__m128 __B,
								const int  __mask);  // 3345
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
							const VectorAligned& rhs);  // 147
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
					VectorAligned::Normalized(); // 147
					Lerp<float>(float flPercent,
							const float& A,
							const float& B);  // 158
				}
				CUtlMemory<CIKChainJointData_t, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
						int i);  // 105
				CIKChainJointData_t::GetBoneIndex(); // 107
				CUtlMemory<CIKChainJointData_t, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
						int i);  // 116
				CIKChainJointData_t::GetBoneIndex(); // 116
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
						const VectorAligned& v);  // 125
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
				VectorAligned::Normalized(); // 126
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
						const VectorAligned& v);  // 128
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
				VectorAligned::Normalized(); // 129
				CIKChainJointData_t::GetBoneIndex(); // 120
			}
		}
	}
	CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 56
} /* size: 0, variables: 3, inline expansions: 1 (4 bytes) */

