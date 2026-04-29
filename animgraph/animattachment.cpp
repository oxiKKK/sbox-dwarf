
//
// animgraph/animattachment.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 5
//

// <0199AADC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animattachment.cpp:15
CTransform GetModelSpaceTransform(const CAnimPose& pose, int nIndex)
{
} /* size: 0 */

// <01997D1C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animattachment.cpp:21
// variables: 57
// function calls: 110
CTransform CalcPosition<const IPoseAccessor*>(const IPoseAccessor* const& pose, const QuaternionAligned* m_influenceRotations, const VectorAligned* m_influenceOffsets, const int32* m_influenceIndices, const float* m_influenceWeights, const uint8& m_numInfluences)
{
	float tmpWeights; // 38
	CTransform blendedTransform; // 57
	{
		int i; // 39
	}
	{
		int i; // 44
		{
			float scale; // 48
			{
				int j; // 49
			}
		}
	}
	{
		int i; // 59
		{
			float flWeight; // 61
			CTransform parentTransform; // 69
			int nParentTransform; // 71
			CTransform offsetTransform; // 83
			GetModelSpaceTransform(const IPoseAccessor* pPose,
						int nIndex);  // 79
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					CTransform &);  // 79
			CTransform::operator*(
					const CTransform& rhs);  // 86
			QuaternionAligned::w(); // 41
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 41
			QuaternionAligned::operator Quaternion(); // 83
			VectorAligned::z(); // 40
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 83
			VectorAligned::VectorAligned(); // 33
			QuaternionAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z,
				vec_t W);  // 30
			QuaternionAligned::QuaternionAligned(
						const Quaternion& rhs);  // 33
			CTransform::SetPositionAndScale(
						const Vector& v0,
						float flScale);  // 33
			CTransform::CTransform(
					const Vector& v,
					const Quaternion& q,
					float flScale);  // 83
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					CTransform &);  // 86
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 464
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 465
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
					const fltx4& b);  // 466
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
					const fltx4& b);  // 467
			{
				fltx4 retVal; // 1981
				_mm_cmpgt_ps(__m128 __A,
						__m128 __B);  // 1982
			}
			CmpGtSIMD<>(const fltx4& a,
					const fltx4& b);  // 468
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 1797
			NegSIMD<>(const fltx4& a); // 469
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
					const fltx4& b);  // 469
			QuaternionAlignSIMD<>(const fltx4& p,
						const fltx4& q);  // 527
			{
				fltx4 retVal; // 1134
				_mm_set1_ps(float __F); // 1135
			}
			ReplicateX4<>(float flValue); // 505
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 505
			{
				fltx4 retVal; // 1134
				_mm_set1_ps(float __F); // 1135
			}
			ReplicateX4<>(float flValue); // 505
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 505
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 505
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
					const fltx4& b);  // 486
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 487
			{
				fltx4 fl4Q; // 509
				fltx4 fl4PScale; // 514
				fltx4 fl4QScale; // 515
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 516
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 516
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 516
			}
			QuaternionSlerpNoAlignSIMD<>(const fltx4& p,
							const fltx4& q,
							float t);  // 479
			QuaternionSlerpNoAlignSIMD<>(const fltx4& p,
							const fltx4& q,
							float t);  // 528
			QuaternionSlerpSIMD<>(const fltx4& p,
						const fltx4& q,
						float t);  // 545
			QuaternionAligned::QuaternionAligned(
						fltx4 vec);  // 545
			QuaternionSlerp(const QuaternionAligned& qFrom,
					const QuaternionAligned& qTo,
					float t);  // 194
			VectorAligned::VectorAligned(); // 31
			QuaternionAligned::QuaternionAligned(); // 31
			CTransform::CTransform(); // 191
			{
				fltx4 retVal; // 1134
				_mm_set1_ps(float __F); // 1135
			}
			ReplicateX4<>(float flValue); // 196
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 186
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 186
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 186
			LerpFl4(const fltx4& percent,
				const fltx4& a,
				const fltx4& b);  // 196
			Slerp(const CTransform& p,
				const CTransform& q,
				float t);  // 89
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					CTransform &);  // 89
			GetModelSpaceTransform(const IPoseAccessor* pPose,
						int nIndex);  // 74
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					CTransform &);  // 74
		}
	}
	GetModelSpaceTransform(const IPoseAccessor* pPose,
				int nIndex);  // 33
} /* size: 1205, variables: 2, inline expansions: 1 (13 bytes) */

// <01995FED> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animattachment.cpp:21
// variables: 57
// function calls: 110
CTransform CalcPosition<CAnimPose>(const CAnimPose& pose, const QuaternionAligned* m_influenceRotations, const VectorAligned* m_influenceOffsets, const int32* m_influenceIndices, const float* m_influenceWeights, const uint8& m_numInfluences)
{
	float tmpWeights; // 38
	CTransform blendedTransform; // 57
	{
		int i; // 39
	}
	{
		int i; // 44
		{
			float scale; // 48
			{
				int j; // 49
			}
		}
	}
	{
		int i; // 59
		{
			float flWeight; // 61
			CTransform parentTransform; // 69
			int nParentTransform; // 71
			CTransform offsetTransform; // 83
			CTransform::operator*(
					const CTransform& rhs);  // 86
			QuaternionAligned::w(); // 41
			Quaternion::Quaternion(
					vec_t ix,
					vec_t iy,
					vec_t iz,
					vec_t iw);  // 41
			QuaternionAligned::operator Quaternion(); // 83
			VectorAligned::z(); // 40
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 40
			VectorAligned::operator Vector(); // 83
			VectorAligned::VectorAligned(); // 33
			QuaternionAligned::Init(
				vec_t X,
				vec_t Y,
				vec_t Z,
				vec_t W);  // 30
			QuaternionAligned::QuaternionAligned(
						const Quaternion& rhs);  // 33
			CTransform::SetPositionAndScale(
						const Vector& v0,
						float flScale);  // 33
			CTransform::CTransform(
					const Vector& v,
					const Quaternion& q,
					float flScale);  // 83
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					CTransform &);  // 86
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 464
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 465
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
					const fltx4& b);  // 466
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
					const fltx4& b);  // 467
			{
				fltx4 retVal; // 1981
				_mm_cmpgt_ps(__m128 __A,
						__m128 __B);  // 1982
			}
			CmpGtSIMD<>(const fltx4& a,
					const fltx4& b);  // 468
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 1797
			NegSIMD<>(const fltx4& a); // 469
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
					const fltx4& b);  // 469
			QuaternionAlignSIMD<>(const fltx4& p,
						const fltx4& q);  // 527
			{
				fltx4 retVal; // 1134
				_mm_set1_ps(float __F); // 1135
			}
			ReplicateX4<>(float flValue); // 505
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 505
			{
				fltx4 retVal; // 1134
				_mm_set1_ps(float __F); // 1135
			}
			ReplicateX4<>(float flValue); // 505
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 505
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 505
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
					const fltx4& b);  // 486
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 487
			{
				fltx4 fl4Q; // 509
				fltx4 fl4PScale; // 514
				fltx4 fl4QScale; // 515
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 516
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 516
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 516
			}
			QuaternionSlerpNoAlignSIMD<>(const fltx4& p,
							const fltx4& q,
							float t);  // 479
			QuaternionSlerpNoAlignSIMD<>(const fltx4& p,
							const fltx4& q,
							float t);  // 528
			QuaternionSlerpSIMD<>(const fltx4& p,
						const fltx4& q,
						float t);  // 545
			QuaternionAligned::QuaternionAligned(
						fltx4 vec);  // 545
			QuaternionSlerp(const QuaternionAligned& qFrom,
					const QuaternionAligned& qTo,
					float t);  // 194
			VectorAligned::VectorAligned(); // 31
			QuaternionAligned::QuaternionAligned(); // 31
			CTransform::CTransform(); // 191
			{
				fltx4 retVal; // 1134
				_mm_set1_ps(float __F); // 1135
			}
			ReplicateX4<>(float flValue); // 196
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 186
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 186
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 186
			LerpFl4(const fltx4& percent,
				const fltx4& a,
				const fltx4& b);  // 196
			Slerp(const CTransform& p,
				const CTransform& q,
				float t);  // 89
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					CTransform &);  // 89
			GetModelSpaceTransform(const CAnimPose& pose,
						int nIndex);  // 79
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					CTransform &);  // 79
			GetModelSpaceTransform(const CAnimPose& pose,
						int nIndex);  // 74
			VectorAligned::operator=(
					const VectorAligned& src);  // 26
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 26
			CTransform::operator=(
					CTransform &);  // 74
		}
	}
	GetModelSpaceTransform(const CAnimPose& pose,
				int nIndex);  // 33
} /* size: 1329, variables: 2, inline expansions: 1 (85 bytes) */

// <0199AA42> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animattachment.cpp:97
void CAnimAttachment::CalcPosition(const IPoseAccessor* pPose)
{
} /* size: 91 */

// <0199A9A7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animattachment.cpp:102
void CAnimAttachment::CalcPosition(const CAnimPose& pose)
{
} /* size: 89 */

