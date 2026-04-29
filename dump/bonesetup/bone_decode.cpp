
//
// bonesetup/bone_decode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 18
//

// <025C1246> bonesetup/bone_decode.cpp:69
// variables: 89
// function calls: 357
void CBoneSetup::CalcLocalHierarchyAnimation(CAnimationResult& animResult, int nAnimation, int iFrame, float flNextFrameWeight, int nRequestIndex, CThreadLocalAnimationDecodeCache* pDecodeCache)
{
	const CAnimContainer* pAnimContainer; // 71
	const CAnimDesc* pAnimDesc; // 75
	const int  nElementRequestIndex; // 80
	const int  nBoneCount; // 82
	CAnimationResult frame1Result; // 85
	CUtlMemoryFixedGrowable<CTransform, 128, int> pFrame1Transforms; // 88
	CUtlMemoryFixedGrowable<matrix3x4a_t, 128, int> frame1BoneToWorld; // 92
	CBoneBitList frame1BoneComputed; // 94
	CAnimationResult frame2Result; // 97
	CUtlMemoryFixedGrowable<CTransform, 128, int> pFrame2Transforms; // 100
	CUtlMemoryFixedGrowable<matrix3x4a_t, 128, int> frame2BoneToWorld; // 104
	CBoneBitList frame2BoneComputed; // 106
	CUtlMemoryFixedGrowable<CTransform, 128, int> pTargetTransforms; // 112
	CUtlMemoryFixedGrowable<matrix3x4a_t, 128, int> targetBoneToWorld; // 116
	CBoneBitList targetBoneComputed; // 118
	{
		const CAnimLocalHierarchy& localHierarchy; // 120
		const CUtlVector<CAnimLocalHierarchy, CUtlMemory<CAnimLocalHierarchy, int> >& __for_range; // 11724
		const_iterator __for_begin; // 8314
		const_iterator __for_end; // 8314
		{
			const int  nBone; // 123
			const int  nPosIndex; // 127
			const int  nRotIndex; // 128
			const int  nMaxFrame; // 139
			float weight; // 140
			const int  iNewParent; // 165
			matrix3x4a_t newParentFrame1WorldToBone; // 167
			matrix3x4a_t newParentFrame2WorldToBone; // 168
			matrix3x4a_t newParentOffsetFrame1; // 186
			matrix3x4a_t newParentOffsetFrame2; // 187
			CTransform newParentOffsetFrame1t; // 191
			CTransform newParentOffsetFrame2t; // 192
			CTransform newParentInterpOffset; // 197
			matrix3x4a_t localNewParentInterpOffsetoff; // 201
			matrix3x4a_t newParentInterpWorldLocation; // 204
			matrix3x4a_t worldLocation; // 215
			const int  nOldParentBone; // 226
			{
				_DebuggerBreakInlineExpressionWrapper(void); // 131
			}
			{
				float index; // 143
			}
			{
				matrix3x4a_t parentWorldToBone; // 231
				matrix3x4a_t targetOffset; // 234
				CUtlMemory<matrix3x4a_t, int>::operator[](
						int i);  // 232
				CUtlMemory<matrix3x4a_t, int>::Base(); // 229
				CUtlMemory<CTransform, int>::Base(); // 229
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
						const matrix3x4_t& src);  // 229
				matrix3x4_t::matrix3x4_t(); // 303
				matrix3x4a_t::matrix3x4a_t(); // 231
				matrix3x4_t::matrix3x4_t(); // 303
				matrix3x4a_t::matrix3x4a_t(); // 234
				VectorAligned::VectorAligned(); // 31
				QuaternionAligned::QuaternionAligned(); // 31
				CTransform::CTransform(); // 529
				matrix3x4_t::ToCTransform(); // 237
			}
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
			QuaternionSlerpNoAlignSIMD<>(const fltx4& p,
							const fltx4& q,
							float t);  // 528
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
			QuaternionSlerpSIMD<>(const fltx4& p,
						const fltx4& q,
						float t);  // 535
			QuaternionAligned::operator=(
					fltx4 vOther);  // 535
			QuaternionSlerp(const QuaternionAligned& p,
					const QuaternionAligned& q,
					float t,
					QuaternionAligned& qt);  // 198
			matrix3x4_t::matrix3x4_t(); // 303
			matrix3x4a_t::matrix3x4a_t(); // 215
			matrix3x4_t::ToCTransform(); // 241
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 123
			CUtlMemory<ChannelElementMap_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
					int i);  // 127
			CUtlMemory<ChannelElementMap_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<ChannelElementMap_t, CUtlMemory<ChannelElementMap_t, int> >::operator[](
					int i);  // 128
			CUtlMemory<matrix3x4a_t, int>::Base(); // 135
			CUtlMemory<CTransform, int>::Base(); // 135
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
					const matrix3x4_t& src);  // 135
			CUtlMemory<matrix3x4a_t, int>::Base(); // 136
			CUtlMemory<CTransform, int>::Base(); // 136
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
					const matrix3x4_t& src);  // 136
			CAnimDesc::MaxFrame(); // 139
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 165
			matrix3x4_t::matrix3x4_t(); // 303
			matrix3x4a_t::matrix3x4a_t(); // 167
			matrix3x4_t::matrix3x4_t(); // 303
			matrix3x4a_t::matrix3x4a_t(); // 168
			CUtlMemory<matrix3x4a_t, int>::Base(); // 173
			CUtlMemory<CTransform, int>::Base(); // 173
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
					const matrix3x4_t& src);  // 173
			CUtlMemory<matrix3x4a_t, int>::Base(); // 174
			CUtlMemory<CTransform, int>::Base(); // 174
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
					const matrix3x4_t& src);  // 174
			CUtlMemory<matrix3x4a_t, int>::operator[](
					int i);  // 176
			CUtlMemory<matrix3x4a_t, int>::operator[](
					int i);  // 177
			matrix3x4_t::matrix3x4_t(); // 303
			matrix3x4a_t::matrix3x4a_t(); // 186
			matrix3x4_t::matrix3x4_t(); // 303
			matrix3x4a_t::matrix3x4a_t(); // 187
			CUtlMemory<matrix3x4a_t, int>::operator[](
					int i);  // 188
			CUtlMemory<matrix3x4a_t, int>::operator[](
					int i);  // 189
			matrix3x4_t::matrix3x4_t(); // 753
			Vector::LargestComponentValue(); // 755
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
						float flScale);  // 310
			CTransform::InitFromMatrix(
					const matrix3x4_t& xform);  // 194
			VectorAligned::VectorAligned(); // 31
			QuaternionAligned::QuaternionAligned(); // 31
			CTransform::CTransform(); // 191
			VectorAligned::VectorAligned(); // 31
			QuaternionAligned::QuaternionAligned(); // 31
			CTransform::CTransform(); // 192
			matrix3x4_t::matrix3x4_t(); // 753
			Vector::LargestComponentValue(); // 755
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
						float flScale);  // 310
			CTransform::InitFromMatrix(
					const matrix3x4_t& xform);  // 195
			VectorAligned::VectorAligned(); // 31
			QuaternionAligned::QuaternionAligned(); // 31
			CTransform::CTransform(); // 197
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
				const fltx4& b);  // 199
			{
				fltx4 retVal; // 1134
				_mm_set1_ps(float __F); // 1135
			}
			ReplicateX4<>(float flValue); // 199
			VectorAligned::operator=(
					fltx4 src);  // 199
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
			CTransform::ToMatrix(); // 202
			matrix3x4_t::matrix3x4_t(); // 303
			matrix3x4a_t::matrix3x4a_t(); // 201
			matrix3x4_t::Base(); // 291
			matrix3x4_t::Base(); // 291
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 291
			matrix3x4a_t::operator=(
					const matrix3x4_t& src);  // 202
			matrix3x4_t::matrix3x4_t(); // 303
			matrix3x4a_t::matrix3x4a_t(); // 204
			CUtlMemory<matrix3x4a_t, int>::Base(); // 211
			CUtlMemory<CTransform, int>::Base(); // 211
			matrix3x4_t::Base(); // 291
			matrix3x4_t::Base(); // 291
			matrix3x4a_t::operator=(
					const matrix3x4_t& src);  // 290
			matrix3x4_t::matrix3x4_t(); // 290
			matrix3x4a_t::matrix3x4a_t(
					const matrix3x4_t& src);  // 211
			CUtlMemory<matrix3x4a_t, int>::operator[](
					int i);  // 212
			matrix3x4_t::Base(); // 291
			matrix3x4_t::Base(); // 291
			matrix3x4a_t::operator=(
					const matrix3x4_t& src);  // 181
			matrix3x4_t::Base(); // 291
			matrix3x4_t::Base(); // 291
			matrix3x4a_t::operator=(
					const matrix3x4_t& src);  // 182
		}
		CUtlMemory<CAnimLocalHierarchy, int>::Base(); // 113
		CUtlVectorBase<CAnimLocalHierarchy, CUtlMemory<CAnimLocalHierarchy, int> >::Base(); // 103
		CUtlVectorBase<CAnimLocalHierarchy, CUtlMemory<CAnimLocalHierarchy, int> >::begin(); // 120
		CUtlVectorBase<CAnimLocalHierarchy, CUtlMemory<CAnimLocalHierarchy, int> >::Count(); // 105
		CUtlVectorBase<CAnimLocalHierarchy, CUtlMemory<CAnimLocalHierarchy, int> >::end(); // 120
	}
	CUtlVectorBase<ElementRequestPattern_t, CUtlMemory<ElementRequestPattern_t, int> >::Count(); // 80
	Max<int>(const int& val1,
		const int& val2);  // 80
	CUtlMemory<CTransform, int>::CUtlMemory(
			CTransform* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CTransform, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CTransform, int>::CUtlMemoryFixedGrowable_Base(
					CTransform* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<128, CTransform, 16>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<128, CTransform>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<128, CTransform, 16>::Base(); // 231
	CUtlMemoryFixedGrowable<CTransform, 128, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 88
	CUtlMemory<CTransform, int>::Base(); // 90
	CUtlMemory<matrix3x4a_t, int>::CUtlMemory(
			matrix3x4a_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<matrix3x4a_t, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<matrix3x4a_t, int>::CUtlMemoryFixedGrowable_Base(
					matrix3x4a_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<128, matrix3x4a_t, 16>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<128, matrix3x4a_t>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<128, matrix3x4a_t, 16>::Base(); // 231
	CUtlMemoryFixedGrowable<matrix3x4a_t, 128, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 92
	CalcNumIntsForBits(int numBits); // 1292
	CVarBitVecBase<short unsigned int, 1024>::AllocInts(
			int numInts);  // 1294
	CVarBitVecBase<short unsigned int, 1024>::CVarBitVecBase(
			int numBits);  // 1419
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1970
	CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::ClearAll(); // 1427
	CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::CBitVecT(
		int numBits);  // 1215
	CVarBitVecT<short unsigned int, 1024>::CVarBitVecT(
			int numBits);  // 134
	CBoneBitList::CBoneBitList(
			int nMaxBones);  // 94
	CUtlMemory<CTransform, int>::CUtlMemory(
			CTransform* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CTransform, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CTransform, int>::CUtlMemoryFixedGrowable_Base(
					CTransform* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<128, CTransform, 16>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<128, CTransform>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<128, CTransform, 16>::Base(); // 231
	CUtlMemoryFixedGrowable<CTransform, 128, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 100
	CUtlMemory<CTransform, int>::Base(); // 102
	CUtlMemory<matrix3x4a_t, int>::CUtlMemory(
			matrix3x4a_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<matrix3x4a_t, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<matrix3x4a_t, int>::CUtlMemoryFixedGrowable_Base(
					matrix3x4a_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<128, matrix3x4a_t, 16>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<128, matrix3x4a_t>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<128, matrix3x4a_t, 16>::Base(); // 231
	CUtlMemoryFixedGrowable<matrix3x4a_t, 128, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 104
	CalcNumIntsForBits(int numBits); // 1292
	CVarBitVecBase<short unsigned int, 1024>::AllocInts(
			int numInts);  // 1294
	CVarBitVecBase<short unsigned int, 1024>::CVarBitVecBase(
			int numBits);  // 1419
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1970
	CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::ClearAll(); // 1427
	CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::CBitVecT(
		int numBits);  // 1215
	CVarBitVecT<short unsigned int, 1024>::CVarBitVecT(
			int numBits);  // 134
	CBoneBitList::CBoneBitList(
			int nMaxBones);  // 106
	CUtlMemory<CTransform, int>::CUtlMemory(
			CTransform* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CTransform, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CTransform, int>::CUtlMemoryFixedGrowable_Base(
					CTransform* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<128, CTransform, 16>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<128, CTransform>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<128, CTransform, 16>::Base(); // 231
	CUtlMemoryFixedGrowable<CTransform, 128, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 112
	CUtlMemory<CTransform, int>::Base(); // 114
	CUtlMemory<matrix3x4a_t, int>::CUtlMemory(
			matrix3x4a_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<matrix3x4a_t, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<matrix3x4a_t, int>::CUtlMemoryFixedGrowable_Base(
					matrix3x4a_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<128, matrix3x4a_t, 16>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<128, matrix3x4a_t>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<128, matrix3x4a_t, 16>::Base(); // 231
	CUtlMemoryFixedGrowable<matrix3x4a_t, 128, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 116
	CalcNumIntsForBits(int numBits); // 1292
	CVarBitVecBase<short unsigned int, 1024>::AllocInts(
			int numInts);  // 1294
	CVarBitVecBase<short unsigned int, 1024>::CVarBitVecBase(
			int numBits);  // 1419
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 1970
	CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::ClearAll(); // 1427
	CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::CBitVecT(
		int numBits);  // 1215
	CVarBitVecT<short unsigned int, 1024>::CVarBitVecT(
			int numBits);  // 134
	CBoneBitList::CBoneBitList(
			int nMaxBones);  // 118
	CVarBitVecBase<short unsigned int, 1024>::FreeInts(); // 1342
	CVarBitVecBase<short unsigned int, 1024>::~CVarBitVecBase(); // 914
	CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::~CBitVecT(); // 1207
	CVarBitVecT<short unsigned int, 1024>::~CVarBitVecT(); // 130
	CBoneBitList::~CBoneBitList(); // 244
	ValidateAlignment<matrix3x4a_t>(void); // 508
	CUtlMemory<matrix3x4a_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<matrix3x4a_t, int>::Purge(); // 903
	CUtlMemory<matrix3x4a_t, int>::Purge(); // 510
	CUtlMemory<matrix3x4a_t, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<matrix3x4a_t, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<matrix3x4a_t, 128, int>::~CUtlMemoryFixedGrowable(); // 244
	ValidateAlignment<CTransform>(void); // 508
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CTransform, int>::Purge(); // 903
	CUtlMemory<CTransform, int>::Purge(); // 510
	CUtlMemory<CTransform, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CTransform, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CTransform, 128, int>::~CUtlMemoryFixedGrowable(); // 244
	CVarBitVecBase<short unsigned int, 1024>::FreeInts(); // 1342
	CVarBitVecBase<short unsigned int, 1024>::~CVarBitVecBase(); // 914
	CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::~CBitVecT(); // 1207
	CVarBitVecT<short unsigned int, 1024>::~CVarBitVecT(); // 130
	CBoneBitList::~CBoneBitList(); // 244
	ValidateAlignment<matrix3x4a_t>(void); // 508
	CUtlMemory<matrix3x4a_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<matrix3x4a_t, int>::Purge(); // 903
	CUtlMemory<matrix3x4a_t, int>::Purge(); // 510
	CUtlMemory<matrix3x4a_t, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<matrix3x4a_t, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<matrix3x4a_t, 128, int>::~CUtlMemoryFixedGrowable(); // 244
	ValidateAlignment<CTransform>(void); // 508
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CTransform, int>::Purge(); // 903
	CUtlMemory<CTransform, int>::Purge(); // 510
	CUtlMemory<CTransform, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CTransform, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CTransform, 128, int>::~CUtlMemoryFixedGrowable(); // 244
	CVarBitVecBase<short unsigned int, 1024>::FreeInts(); // 1342
	CVarBitVecBase<short unsigned int, 1024>::~CVarBitVecBase(); // 914
	CBitVecT<CVarBitVecBase<short unsigned int, 1024> >::~CBitVecT(); // 1207
	CVarBitVecT<short unsigned int, 1024>::~CVarBitVecT(); // 130
	CBoneBitList::~CBoneBitList(); // 244
	ValidateAlignment<matrix3x4a_t>(void); // 508
	CUtlMemory<matrix3x4a_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<matrix3x4a_t, int>::Purge(); // 903
	CUtlMemory<matrix3x4a_t, int>::Purge(); // 510
	CUtlMemory<matrix3x4a_t, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<matrix3x4a_t, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<matrix3x4a_t, 128, int>::~CUtlMemoryFixedGrowable(); // 244
	ValidateAlignment<CTransform>(void); // 508
	CUtlMemory<CTransform, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CTransform, int>::Purge(); // 903
	CUtlMemory<CTransform, int>::Purge(); // 510
	CUtlMemory<CTransform, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CTransform, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CTransform, 128, int>::~CUtlMemoryFixedGrowable(); // 244
} /* size: 0, variables: 15, inline expansions: 131 (2156 bytes) */

// <025C109C> bonesetup/bone_decode.cpp:250
// variables: 4
// function calls: 2
void CBoneSetup::CalcSubframeAnimation(CAnimationResult& animResult, const CInternalOperation* pOperation, int nAnimation, CThreadLocalAnimationDecodeCache* pDecodeCache)
{
	const CAnimDesc* pAnimDesc; // 252
	int iFrame; // 254
	float s; // 255
	float fFrame; // 257
	CAnimDesc::MaxFrame(); // 257
	CUtlVectorBase<CAnimLocalHierarchy, CUtlMemory<CAnimLocalHierarchy, int> >::Count(); // 262
} /* size: 178, variables: 4, inline expansions: 2 (6 bytes) */

// <025E0D5A> bonesetup/bone_decode.cpp:273
void CAnimationResource::InitDecompressors()
{
} /* size: 0 */

// <025E03CC> bonesetup/bone_decode.cpp:273
// variables: 3
// function calls: 12
void CAnimationResource::InitDecompressors()
{
	{
		const ICompressorService ** pDecoders; // 283
		CSmartPtr<CAnimData, CRefCountAccessor>::operator->(); // 283
		CUtlVectorBase<CAnimDecoder, CUtlMemory<CAnimDecoder, int> >::Count(); // 283
		{
			int j; // 284
			CSmartPtr<CAnimData, CRefCountAccessor>::operator->(); // 284
			CUtlVectorBase<CAnimDecoder, CUtlMemory<CAnimDecoder, int> >::Count(); // 284
			CUtlMemory<CAnimDecoder, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAnimDecoder, CUtlMemory<CAnimDecoder, int> >::operator[](
					int i);  // 286
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 771
			CBufferString::Get(); // 286
			{
				CAnimCompressorRegistry* pRegistry; // 108
			}
			FindCompressor(const char* szName); // 286
		}
		ThreadInterlockedAssignIf64(volatile int64* pDest,
						int64 value,
						int64 comparand);  // 459
		InterlockedAssignIf<const ICompressorService**>(const ICompressorService *** p,
								const ICompressorService ** const& value,
								const ICompressorService ** const& comparand);  // 291
	}
} /* size: 279 */

// <025C1063> bonesetup/bone_decode.cpp:273
// variables: 2
void CAnimationResource::InitDecompressors()
{
	{
		const ICompressorService ** pDecoders; // 283
		{
			int j; // 284
		}
	}
} /* size: 0 */

// <025C0D4C> bonesetup/bone_decode.cpp:298
// variables: 4
// function calls: 9
void WriteAnimCompressors(CAnimData* pAnim)
{
	int nCount; // 300
	int i; // 307
	{
		CAnimCompressorRegistry* pRegistry; // 301
	}
	{
		CAnimCompressorRegistry* pRegistry; // 308
		CUtlMemory<CAnimDecoder, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CAnimDecoder, CUtlMemory<CAnimDecoder, int> >::operator[](
				int i);  // 310
		CBufferString::WriteBuffer(); // 1390
		CBufferString::WriteBuffer(); // 1101
		CBufferString::RemoveAll(); // 901
		CBufferString::Set(
			const char* pString,
			int nChars,
			bool bExact);  // 1114
		CBufferString::operator=(
				const char* pSrc);  // 310
		CUtlMemory<CAnimDecoder, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CAnimDecoder, CUtlMemory<CAnimDecoder, int> >::operator[](
				int i);  // 311
	}
} /* size: 196, variables: 2 */

// <025BF952> bonesetup/bone_decode.cpp:315
// variables: 28
// function calls: 61
void CBoneSetup::CalcSubframeAnimation(CAnimationResult& animResult, int nAnimation, int iFrame, float flNextFrameWeight, int nRequestIndex, CThreadLocalAnimationDecodeCache* pDecodeCache)
{
	const CAnimContainer* pAnimContainer; // 317
	const CAnimDesc* pAnimDesc; // 318
	const CAnimDecodeSwizzle* pSwizzle; // 319
	const CAnimationResource* pAnimResource; // 320
	const CAnimData* pAnimResourceData; // 321
	uint32 localRequestMask; // 350
	int iLocalFrame; // 366
	const CAnimFrameBlockAnim* pFrameBlock; // 367
	DecodeOperation_t decodeOp; // 377
	const char   __FUNCTION__; // 20993
	{
		CAnimationResult animResult2; // 334
	}
	{
		int i; // 389
		{
			int nSegment; // 391
			const CAnimFrameSegment* pSegment; // 393
			int nChannel; // 400
			void* pResult; // 405
			int nResultBufSize; // 406
			const DecodeContainer_t* pContainer; // 429
			const ICompressorService* pDecompressor; // 430
			int iDecodeFrame1; // 449
			int iDecodeFrame2; // 450
			uint8 data1; // 467
			uint8 data2; // 468
			const uint8* pFrameData1; // 469
			const uint8* pFrameData2; // 470
			uint32 cacheKey1; // 471
			uint32 cacheKey2; // 472
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 409
			}
			CAnimationResource::GetDecompressor(
					int nLocalChannel);  // 430
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 516
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 391
			CUtlMemory<CAnimFrameSegment, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimFrameSegment, CUtlMemory<CAnimFrameSegment, int> >::operator[](
					int i);  // 393
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 400
			CUtlMemory<unsigned char, int>::Base(); // 102
			CUtlBinaryBlock::Get(); // 262
			CAnimFrameSegment::pContainer(); // 429
			CUtlVectorBase<CAnimDecoder, CUtlMemory<CAnimDecoder, int> >::Count(); // 431
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 520
			CBufferString::Get(); // 428
			CAnimData::GetName(); // 433
			CUtlMemory<CAnimDecoder, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimDecoder, CUtlMemory<CAnimDecoder, int> >::operator[](
					int i);  // 441
			CBufferString::Get(); // 441
			CBufferString::Get(); // 428
			CAnimData::GetName(); // 441
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 389
	}
	CUtlMemory<AnimInstanceMap_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::operator[](
			int i);  // 497
	CUtlMemory<const CAnimationGroupResource::operator[](
			int i);  // 595
	CUtlVectorBase<const CAnimationGroupResource::operator[](
			int i);  // 498
	CSmartPtr<CAnimationGroup, CRefCountAccessor>::operator->(); // 239
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this,
			int i);  // 239
	__uniq_ptr_impl<CAnimationResource, std::default_delete<CAnimationResource> >::_M_ptr(); // 472
	unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >::get(); // 239
	CAnimationGroupResource::pLocalHAnim(
			int nLocalHAnim);  // 498
	CSmartPtr<CAnimData, CRefCountAccessor>::Get(); // 464
	{
	}
	CSmartPtr<CAnimData, CRefCountAccessor>::Get(); // 465
	CAnimationResource::GetData(); // 499
	CUtlMemory<CAnimDesc, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimDesc, CUtlMemory<CAnimDesc, int> >::operator[](
			int i);  // 499
	CAnimContainer::GetAnimdesc(
			int nAnimation);  // 318
	CUtlMemory<AnimInstanceMap_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::operator[](
			int i);  // 490
	CUtlMemory<const CAnimationGroupResource::operator[](
			int i);  // 595
	CUtlVectorBase<const CAnimationGroupResource::operator[](
			int i);  // 491
	CSmartPtr<CAnimationGroup, CRefCountAccessor>::operator->(); // 239
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this,
			int i);  // 239
	__uniq_ptr_impl<CAnimationResource, std::default_delete<CAnimationResource> >::_M_ptr(); // 472
	unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >::get(); // 239
	CAnimationGroupResource::pLocalHAnim(
			int nLocalHAnim);  // 491
	CAnimContainer::GetAnimResource(
			int nAnimation);  // 320
	CSmartPtr<CAnimData, CRefCountAccessor>::Get(); // 464
	{
	}
	CSmartPtr<CAnimData, CRefCountAccessor>::Get(); // 465
	CAnimationResource::GetData(); // 321
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 350
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 353
	CAnimDesc::MaxFrame(); // 359
	CAnimationResource::IsInited(); // 371
	CAnimationResource::InitDecompressors(); // 373
} /* size: 0, variables: 10, inline expansions: 36 (695 bytes) */

// <025BEA0E> bonesetup/bone_decode.cpp:534
// variables: 21
// function calls: 57
void CBoneSetup::CalcFrameAnimation(CAnimationResult& animResult, int nAnimation, int iFrame, int nRequestIndex)
{
	const CAnimContainer* pAnimContainer; // 536
	const CAnimDesc* pAnimDesc; // 537
	const CAnimDecodeSwizzle* pSwizzle; // 538
	const CAnimationResource* pAnimResource; // 539
	const CAnimData* pAnimResourceData; // 540
	uint32 localRequestMask; // 543
	int iLocalFrame; // 556
	const CAnimFrameBlockAnim* pFrameBlock; // 557
	DecodeOperation_t decodeOp; // 567
	const char   __FUNCTION__; // 20922
	{
		int i; // 579
		{
			int nSegment; // 581
			const CAnimFrameSegment* pSegment; // 583
			int nChannel; // 590
			void* pResult; // 595
			int nResultBufSize; // 596
			const DecodeContainer_t* pContainer; // 619
			const ICompressorService* pDecompressor; // 620
			int iDecodeFrame1; // 631
			uint8 data1; // 643
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 599
			}
			CUtlMemory<unsigned char, int>::Base(); // 102
			CUtlBinaryBlock::Get(); // 262
			CAnimFrameSegment::pContainer(); // 619
			CAnimationResource::GetDecompressor(
					int nLocalChannel);  // 620
			CBufferString::ReadBuffer(); // 1374
			CBufferString::ReadBuffer(); // 781
			CBufferString::operator char const*(); // 646
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 581
			CUtlMemory<CAnimFrameSegment, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimFrameSegment, CUtlMemory<CAnimFrameSegment, int> >::operator[](
					int i);  // 583
			CUtlMemory<int, int>::operator[](
					int i);  // 595
			CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
					int i);  // 590
			CUtlMemory<CAnimDecoder, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CAnimDecoder, CUtlMemory<CAnimDecoder, int> >::operator[](
					int i);  // 623
			CBufferString::Get(); // 623
			CBufferString::Get(); // 428
			CAnimData::GetName(); // 623
		}
		CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 579
	}
	CUtlMemory<AnimInstanceMap_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::operator[](
			int i);  // 497
	CUtlMemory<const CAnimationGroupResource::operator[](
			int i);  // 595
	CUtlVectorBase<const CAnimationGroupResource::operator[](
			int i);  // 498
	CSmartPtr<CAnimationGroup, CRefCountAccessor>::operator->(); // 239
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this,
			int i);  // 239
	__uniq_ptr_impl<CAnimationResource, std::default_delete<CAnimationResource> >::_M_ptr(); // 472
	unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >::get(); // 239
	CAnimationGroupResource::pLocalHAnim(
			int nLocalHAnim);  // 498
	CSmartPtr<CAnimData, CRefCountAccessor>::Get(); // 464
	{
	}
	CSmartPtr<CAnimData, CRefCountAccessor>::Get(); // 465
	CAnimationResource::GetData(); // 499
	CUtlMemory<CAnimDesc, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimDesc, CUtlMemory<CAnimDesc, int> >::operator[](
			int i);  // 499
	CAnimContainer::GetAnimdesc(
			int nAnimation);  // 537
	CUtlMemory<AnimInstanceMap_t, int>::operator[](
			int i);  // 595
	CUtlVectorBase<AnimInstanceMap_t, CUtlMemory<AnimInstanceMap_t, int> >::operator[](
			int i);  // 490
	CUtlMemory<const CAnimationGroupResource::operator[](
			int i);  // 595
	CUtlVectorBase<const CAnimationGroupResource::operator[](
			int i);  // 491
	CSmartPtr<CAnimationGroup, CRefCountAccessor>::operator->(); // 239
	CUtlMemory<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<std::unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >, CUtlMemory<std::uniqu this,
			int i);  // 239
	__uniq_ptr_impl<CAnimationResource, std::default_delete<CAnimationResource> >::_M_ptr(); // 472
	unique_ptr<CAnimationResource, std::default_delete<CAnimationResource> >::get(); // 239
	CAnimationGroupResource::pLocalHAnim(
			int nLocalHAnim);  // 491
	CAnimContainer::GetAnimResource(
			int nAnimation);  // 539
	CSmartPtr<CAnimData, CRefCountAccessor>::Get(); // 464
	{
	}
	CSmartPtr<CAnimData, CRefCountAccessor>::Get(); // 465
	CAnimationResource::GetData(); // 540
	CUtlMemory<unsigned int, int>::operator[](
			int i);  // 595
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
			int i);  // 543
	CAnimDesc::MaxFrame(); // 550
	CUtlMemory<CAnimFrameBlockAnim, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimFrameBlockAnim, CUtlMemory<CAnimFrameBlockAnim, int> >::operator[](
			int i);  // 676
	CAnimEncodedFrames::pAnim(
		int* piFrame);  // 557
	CAnimationResource::IsInited(); // 561
	CAnimationResource::InitDecompressors(); // 563
} /* size: 0, variables: 10, inline expansions: 38 (831 bytes) */

// <025E0D98> bonesetup/bone_decode.cpp:658
// variable: 1
// function calls: 2
void CAnimEncodedFrames::pAnim(int* piFrame)
{
	int block; // 660
	CUtlMemory<CAnimFrameBlockAnim, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimFrameBlockAnim, CUtlMemory<CAnimFrameBlockAnim, int> >::operator[](
			int i);  // 676
} /* size: 92, variables: 1, inline expansions: 2 (48 bytes) */

// <025BE9D7> bonesetup/bone_decode.cpp:658
// variable: 1
void CAnimEncodedFrames::pAnim(int* piFrame)
{
	int block; // 660
} /* size: 0, variables: 1 */

// <025BE9A5> bonesetup/bone_decode.cpp:691
// variables: 3
void EvictOldest(void)
{
	const unsigned int  oldestIndex; // 693
	const uint32  oldestKey; // 697
	const UtlHashHandle_t  globalHandle; // 698
} /* size: 0, variables: 3 */

// <025E1447> bonesetup/bone_decode.cpp:716
// function calls: 8
void TouchLRU(IndexType_t node)
{
	CUtlMemory<UtlLinkedListElem_t<unsigned int, unsigned int>, unsigned int>::IsIdxValid(
			unsigned int i);  // 588
	CUtlMemory<UtlLinkedListElem_t<unsigned int, unsigned int>, unsigned int>::IsIdxAfter(
			unsigned int i,
			const Iterator_t& it);  // 591
	CUtlMemory<UtlLinkedListElem_t<unsigned int, unsigned int>, unsigned int>::operator[](
			unsigned int i);  // 594
	IsValidIndex(const CUtlLinkedList<unsigned int, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<unsigned int,  this,
			unsigned int i);  // 583
	IsValidIndex(const CUtlLinkedList<unsigned int, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<unsigned int,  this,
			unsigned int i);  // 718
	Tail(const CUtlLinkedList<unsigned int, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<unsigned int, this); // 721
	LinkToTail(const CUtlLinkedList<unsigned int, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<unsigned int, unsign this,
			unsigned int elem);  // 725
	TouchLRU(IndexType_t node); // 716
} /* size: 111, inline expansions: 8 (169 bytes) */

// <025BE98D> bonesetup/bone_decode.cpp:716
void TouchLRU(IndexType_t node)
{
} /* size: 0 */

// <025BE826> bonesetup/bone_decode.cpp:729
// variables: 2
// function calls: 3
void ComposeKey(const CAnimationResource* pAnim, const CAnimFrameSegment* pSegment, int iFrame)
{
	const int  localIndex; // 734
	const int  maxIndex; // 735
	CSmartPtr<CAnimData, CRefCountAccessor>::Get(); // 464
	{
	}
	CSmartPtr<CAnimData, CRefCountAccessor>::Get(); // 465
	CAnimationResource::GetData(); // 735
} /* size: 0, variables: 2, inline expansions: 3 (52 bytes) */

// <025BE5D9> bonesetup/bone_decode.cpp:742
// variables: 2
// function calls: 4
void CThreadLocalAnimationDecodeCache::Get(uint32 nKey)
{
	UtlHashHandle_t handle; // 747
	{
		CAnimationDecodeCacheEntry_t& entry; // 750
		CUtlMemory<CUtlHashtableEntry<unsigned int, CAnimationDecodeCacheEntry_t>, int>::operator[](
				int i);  // 297
		operator[](const CUtlHashtable<unsigned int, CAnimationDecodeCacheEntry_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<uns this,
				handle_t idx);  // 750
	}
	Mix32HashFunctor::operator(
			uint32 n);  // 218
	Find(const CUtlHashtable<unsigned int, CAnimationDecodeCacheEntry_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunct this,
		KeyArg_t k);  // 747
} /* size: 139, variables: 1, inline expansions: 2 (150 bytes) */

// <025E0E36> bonesetup/bone_decode.cpp:757
// variable: 1
// function calls: 18
void CThreadLocalAnimationDecodeCache::Commit(uint32 nKey, const uint8* pData)
{
	CAnimationDecodeCacheEntry_t entry; // 762
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 764
	InvalidIndex(void); // 15
	CAnimationDecodeCacheEntry_t::CAnimationDecodeCacheEntry_t(); // 762
	CUtlMemory<CAnimationDecodeCacheEntry_t, int>::NumAllocated(); // 1196
	CUtlMemory<CAnimationDecodeCacheEntry_t, int>::Base(); // 112
	CUtlVectorBase<CAnimationDecodeCacheEntry_t, CUtlMemoryFixedGrowable<CAnimationDecodeCacheEntry_t, 256, int> >::Base(); // 368
	CUtlVectorBase<CAnimationDecodeCacheEntry_t, CUtlMemoryFixedGrowable<CAnimationDecodeCacheEntry_t, 256, int> >::ResetDbgInfo(); // 824
	CUtlMemory<CAnimationDecodeCacheEntry_t, int>::IsGrowable(); // 823
	CUtlMemory<CAnimationDecodeCacheEntry_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CAnimationDecodeCacheEntry_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CAnimationDecodeCacheEntry_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<CAnimationDecodeCacheEntry_t, CUtlMemoryFixedGrowable<CAnimationDecodeCacheEntry_t, 256, int> >::GrowMemory(
			int num);  // 1198
	CopyConstruct<CAnimationDecodeCacheEntry_t>(CAnimationDecodeCacheEntry_t* pMemory,
							const CAnimationDecodeCacheEntry_t& src);  // 1201
	CUtlMemory<CAnimationDecodeCacheEntry_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CAnimationDecodeCacheEntry_t, CUtlMemoryFixedGrowable<CAnimationDecodeCacheEntry_t, 256, int> >::Element(
		int i);  // 1201
	CUtlVectorBase<CAnimationDecodeCacheEntry_t, CUtlMemoryFixedGrowable<CAnimationDecodeCacheEntry_t, 256, int> >::AddToTail(
			const CAnimationDecodeCacheEntry_t& src);  // 765
	CThreadLocalAnimationDecodeCache::Commit(
		uint32 nKey,
		const uint8* pData);  // 757
} /* size: 625, variables: 1, inline expansions: 18 (1933 bytes) */

// <025BE561> bonesetup/bone_decode.cpp:757
// variable: 1
void CThreadLocalAnimationDecodeCache::Commit(uint32 nKey, const uint8* pData)
{
	CAnimationDecodeCacheEntry_t entry; // 762
} /* size: 0, variables: 1 */

// <025BCD00> bonesetup/bone_decode.cpp:769
// variables: 10
// function calls: 87
void CommitToGlobalCache(CThreadLocalAnimationDecodeCache* threadLocalCache)
{
	CUtlVectorFixedGrowable<CAnimationDecodeCacheEntry_t, 256>& new_entries; // 774
	{
		int i; // 782
		{
			CAnimationDecodeCacheEntry_t& localEntry; // 784
			UtlHashHandle_t globalHandle; // 788
			bool didInsert; // 816
			CAnimationDecodeCacheEntry_t& globalEntry; // 818
			{
				CAnimationDecodeCacheEntry_t& globalEntry; // 791
				CUtlMemory<CUtlHashtableEntry<unsigned int, CAnimationDecodeCacheEntry_t>, int>::operator[](
						int i);  // 297
				operator[](const CUtlHashtable<unsigned int, CAnimationDecodeCacheEntry_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<uns this,
						handle_t idx);  // 791
				CUtlMemory<UtlLinkedListElem_t<unsigned int, unsigned int>, unsigned int>::IsIdxValid(
						unsigned int i);  // 588
				CUtlMemory<UtlLinkedListElem_t<unsigned int, unsigned int>, unsigned int>::IsIdxAfter(
						unsigned int i,
						const Iterator_t& it);  // 591
				CUtlMemory<UtlLinkedListElem_t<unsigned int, unsigned int>, unsigned int>::operator[](
						unsigned int i);  // 594
				IsValidIndex(const CUtlLinkedList<unsigned int, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<unsigned int,  this,
						unsigned int i);  // 583
				IsValidIndex(const CUtlLinkedList<unsigned int, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<unsigned int,  this,
						unsigned int i);  // 792
				CUtlMemory<UtlLinkedListElem_t<unsigned int, unsigned int>, unsigned int>::operator[](
						unsigned int i);  // 482
				Element(const CUtlLinkedList<unsigned int, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<unsigned int, unsign this,
					unsigned int i);  // 825
				CopyConstruct<unsigned int>(unsigned int* pMemory,
								const unsigned int& src);  // 825
				InsertBefore(const CUtlLinkedList<unsigned int, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<unsigned int, unsign this,
						unsigned int before,
						const unsigned int& src);  // 856
				AddToTail(const CUtlLinkedList<unsigned int, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<unsigned int, unsign this,
						const unsigned int& src);  // 798
			}
			CUtlMemory<CUtlHashtableEntry<unsigned int, CAnimationDecodeCacheEntry_t>, int>::Count(); // 747
			CUtlMemory<CUtlHashtableEntry<unsigned int, CAnimationDecodeCacheEntry_t>, int>::operator[](
					int i);  // 756
			CUtlHashtableEntry<unsigned int, CAnimationDecodeCacheEntry_t>::MarkInvalid(); // 760
			CUtlHashtableEntry<unsigned int, CAnimationDecodeCacheEntry_t>::IdealIndex(
					uint32 slotmask);  // 757
			CUtlMemory<CUtlHashtableEntry<unsigned int, CAnimationDecodeCacheEntry_t>, int>::operator[](
					int i);  // 761
			{
				unsigned int chainid; // 776
				unsigned int nextIdx; // 777
				CUtlMemory<CUtlHashtableEntry<unsigned int, CAnimationDecodeCacheEntry_t>, int>::operator[](
						int i);  // 781
				CUtlHashtableEntry<unsigned int, CAnimationDecodeCacheEntry_t>::IdealIndex(
						uint32 slotmask);  // 781
				CUtlMemory<CUtlHashtableEntry<unsigned int, CAnimationDecodeCacheEntry_t>, int>::operator[](
						int i);  // 789
				CUtlMemory<CUtlHashtableEntry<unsigned int, CAnimationDecodeCacheEntry_t>, int>::operator[](
						int i);  // 790
				CUtlMemory<CUtlHashtableEntry<unsigned int, CAnimationDecodeCacheEntry_t>, int>::operator[](
						int i);  // 790
				{
					int i; // 121
				}
				CUtlHashtableEntry<unsigned int, CAnimationDecodeCacheEntry_t>::MoveDataFrom(
						CUtlHashtableEntry<unsigned int, CAnimationDecodeCacheEntry_t>& src);  // 790
				CUtlMemory<CUtlHashtableEntry<unsigned int, CAnimationDecodeCacheEntry_t>, int>::operator[](
						int i);  // 791
				CUtlHashtableEntry<unsigned int, CAnimationDecodeCacheEntry_t>::MarkInvalid(); // 791
			}
			CUtlMemory<CUtlHashtableEntry<unsigned int, CAnimationDecodeCacheEntry_t>, int>::operator[](
					int i);  // 769
			DoRemove<unsigned int>(const CUtlHashtable<unsigned int, CAnimationDecodeCacheEntry_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<uns this,
						unsigned int x,
						unsigned int h);  // 875
			CUtlMemory<CUtlHashtableEntry<unsigned int, CAnimationDecodeCacheEntry_t>, int>::operator[](
					int i);  // 875
			RemoveByHandle(const CUtlHashtable<unsigned int, CAnimationDecodeCacheEntry_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<uns this,
					UtlHashHandle_t idx);  // 701
			CUtlMemory<UtlLinkedListElem_t<unsigned int, unsigned int>, unsigned int>::IsIdxAfter(
					unsigned int i,
					const Iterator_t& it);  // 591
			CUtlMemory<UtlLinkedListElem_t<unsigned int, unsigned int>, unsigned int>::operator[](
					unsigned int i);  // 594
			IsValidIndex(const CUtlLinkedList<unsigned int, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<unsigned int,  this,
					unsigned int i);  // 583
			CUtlMemory<UtlLinkedListElem_t<unsigned int, unsigned int>, unsigned int>::IsIdxValid(
					unsigned int i);  // 588
			IsValidIndex(const CUtlLinkedList<unsigned int, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<unsigned int,  this,
					unsigned int i);  // 749
			CUtlMemory<UtlLinkedListElem_t<unsigned int, unsigned int>, unsigned int>::operator[](
					unsigned int i);  // 367
			InternalElement(const CUtlLinkedList<unsigned int, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<unsigned int, unsign this,
					unsigned int i);  // 752
			Destruct<unsigned int>(unsigned int* pMemory); // 753
			{
			}
			Free(const CUtlLinkedList<unsigned int, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<unsigned int, unsign this,
				unsigned int elem);  // 907
			Remove(const CUtlLinkedList<unsigned int, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<unsigned int, unsign this,
				unsigned int elem);  // 712
			Head(const CUtlLinkedList<unsigned int, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<unsigned int, this); // 693
			CUtlMemory<UtlLinkedListElem_t<unsigned int, unsigned int>, unsigned int>::operator[](
					unsigned int i);  // 482
			Element(const CUtlLinkedList<unsigned int, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<unsigned int, unsign this,
				unsigned int i);  // 697
			Mix32HashFunctor::operator(
					uint32 n);  // 218
			Find(const CUtlHashtable<unsigned int, CAnimationDecodeCacheEntry_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunct this,
				KeyArg_t k);  // 698
			EvictOldest(void); // 809
			CUtlMemory<CAnimationDecodeCacheEntry_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CAnimationDecodeCacheEntry_t, CUtlMemoryFixedGrowable<CAnimationDecodeCacheEntry_t, 256, int> >::operator[](
					int i);  // 784
			Mix32HashFunctor::operator(
					uint32 n);  // 218
			Find(const CUtlHashtable<unsigned int, CAnimationDecodeCacheEntry_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunct this,
				KeyArg_t k);  // 788
			Mix32HashFunctor::operator(
					uint32 n);  // 249
			CUtlMemory<CUtlHashtableEntry<unsigned int, CAnimationDecodeCacheEntry_t>, int>::operator[](
					int i);  // 720
			CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t>::CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t>(
											const unsigned int& k,
											const CAnimationDecodeCacheEntry_t& v);  // 1514
			Construct<CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t>, unsigned int&, const CAnimationDecodeCacheEntry_t&>(CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t>* pMemory); // 720
			DoInsert<unsigned int>(const CUtlHashtable<unsigned int, CAnimationDecodeCacheEntry_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<uns this,
						unsigned int k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 714
			DoInsert<unsigned int>(const CUtlHashtable<unsigned int, CAnimationDecodeCacheEntry_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<uns this,
						unsigned int k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 249
			Insert(const CUtlHashtable<unsigned int, CAnimationDecodeCacheEntry_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<uns this,
				KeyArg_t k,
				ValueArg_t v,
				bool* pDidInsert);  // 817
			CUtlMemory<CUtlHashtableEntry<unsigned int, CAnimationDecodeCacheEntry_t>, int>::operator[](
					int i);  // 297
			operator[](const CUtlHashtable<unsigned int, CAnimationDecodeCacheEntry_t, DefaultHashFunctor<unsigned int>, DefaultEqualFunctor<uns this,
					handle_t idx);  // 818
			CUtlMemory<UtlLinkedListElem_t<unsigned int, unsigned int>, unsigned int>::IsIdxValid(
					unsigned int i);  // 588
			CUtlMemory<UtlLinkedListElem_t<unsigned int, unsigned int>, unsigned int>::IsIdxAfter(
					unsigned int i,
					const Iterator_t& it);  // 591
			CUtlMemory<UtlLinkedListElem_t<unsigned int, unsigned int>, unsigned int>::operator[](
					unsigned int i);  // 594
			IsValidIndex(const CUtlLinkedList<unsigned int, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<unsigned int,  this,
					unsigned int i);  // 583
			IsValidIndex(const CUtlLinkedList<unsigned int, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<unsigned int,  this,
					unsigned int i);  // 821
			CUtlMemory<UtlLinkedListElem_t<unsigned int, unsigned int>, unsigned int>::operator[](
					unsigned int i);  // 482
			Element(const CUtlLinkedList<unsigned int, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<unsigned int, unsign this,
				unsigned int i);  // 825
			CopyConstruct<unsigned int>(unsigned int* pMemory,
							const unsigned int& src);  // 825
			InsertBefore(const CUtlLinkedList<unsigned int, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<unsigned int, unsign this,
					unsigned int before,
					const unsigned int& src);  // 856
			AddToTail(const CUtlLinkedList<unsigned int, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<unsigned int, unsign this,
					const unsigned int& src);  // 827
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 75
			V_memcpy(void* dest,
				const void* src,
				int count);  // 832
			CUtlMemory<UtlLinkedListElem_t<unsigned int, unsigned int>, unsigned int>::operator[](
					unsigned int i);  // 482
			Element(const CUtlLinkedList<unsigned int, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<unsigned int, unsign this,
				unsigned int i);  // 825
			CopyConstruct<unsigned int>(unsigned int* pMemory,
							const unsigned int& src);  // 825
			InsertBefore(const CUtlLinkedList<unsigned int, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<unsigned int, unsign this,
					unsigned int before,
					const unsigned int& src);  // 856
			AddToTail(const CUtlLinkedList<unsigned int, unsigned int, false, unsigned int, CUtlMemory<UtlLinkedListElem_t<unsigned int, unsign this,
					const unsigned int& src);  // 833
		}
		Count(const CUtlVectorBase<CAnimationDecodeCacheEntry_t, CUtlMemoryFixedGrowable<CAnimationDecodeCacheEntry_t, 256, int> this); // 782
	}
	Count(const CUtlVectorBase<CAnimationDecodeCacheEntry_t, CUtlMemoryFixedGrowable<CAnimationDecodeCacheEntry_t, 256, int> this); // 135
	IsEmpty(const CUtlVectorBase<CAnimationDecodeCacheEntry_t, CUtlMemoryFixedGrowable<CAnimationDecodeCacheEntry_t, 256, int> this); // 775
	CUtlVectorBase<CAnimationDecodeCacheEntry_t, CUtlMemoryFixedGrowable<CAnimationDecodeCacheEntry_t, 256, int> >::RemoveAll(); // 837
	AlignedByteArrayExplicit_t<256, CAnimationDecodeCacheEntry_t, 16>::Base(); // 237
	CUtlMemory<CAnimationDecodeCacheEntry_t, int>::IsExternallyAllocated(); // 577
	CUtlMemory<CAnimationDecodeCacheEntry_t, int>::ConvertToExternalMemory(
				CAnimationDecodeCacheEntry_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CAnimationDecodeCacheEntry_t, int>::Purge_FixedGrowable(
				CAnimationDecodeCacheEntry_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CAnimationDecodeCacheEntry_t, int>::Purge_FixedGrowable(
				CAnimationDecodeCacheEntry_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<CAnimationDecodeCacheEntry_t, 256, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<CAnimationDecodeCacheEntry_t, CUtlMemoryFixedGrowable<CAnimationDecodeCacheEntry_t, 256, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<CAnimationDecodeCacheEntry_t, CUtlMemoryFixedGrowable<CAnimationDecodeCacheEntry_t, 256, int> >::Purge(); // 778
} /* size: 0, variables: 1, inline expansions: 11 (505 bytes) */

