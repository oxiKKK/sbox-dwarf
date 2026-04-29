
//
// mathlib/extended/voxelvis.cpp
//
//	referenced by: libengine2.so
//
//	functions: 27
//

// <0587D4D3> mathlib/extended/voxelvis.cpp:30
// variables: 9
inline bool IsRayIntersectingBox(fltx4 vStart, fltx4 vInvDelta, fltx4 fl4Mins, fltx4 fl4Maxs)
{
	fltx4 f4Origin; // 32
	fltx4 f4DeltaInv; // 32
	fltx4 fl4Time; // 33
	fltx4 t1; // 34
	fltx4 t2; // 35
	fltx4 f4TMin; // 36
	fltx4 f4TMax; // 36
	fltx4 f4MinT; // 37
	fltx4 f4MaxT; // 38
} /* size: 0, variables: 9 */

// <0587D499> mathlib/extended/voxelvis.cpp:44
// variables: 2
inline fltx4 FullReciprocalSaturateSIMD(fltx4 a)
{
	fltx4 zero_mask; // 47
	fltx4 a_safe; // 48
} /* size: 0, variables: 2 */

// <0587D38D> mathlib/extended/voxelvis.cpp:55
// variables: 7
void GrowRegionFromIndex(uint nIndex, uint64 nAllocated)
{
	uint64 nRegion; // 57
	{
		uint x; // 60
		{
			uint64 nNext; // 62
		}
	}
	{
		uint y; // 67
		{
			uint64 nNext; // 69
		}
	}
	{
		uint z; // 75
		{
			uint64 nNext; // 77
		}
	}
} /* size: 261, variables: 1 */

// <0587E04D> mathlib/extended/voxelvis.cpp:85
// variables: 3
void GrowRegion(uint64 nAllocated, uint64 nBaseAllocated)
{
	{
		int i; // 87
		{
			uint64 nBit; // 89
			{
				uint64 nRegion; // 92
			}
		}
	}
} /* size: 0 */

// <0587E0CB> mathlib/extended/voxelvis.cpp:99
// variables: 2
void GrowRegion(uint64 nAllocated)
{
	{
		int i; // 101
		{
			uint64 nBit; // 103
		}
	}
} /* size: 0 */

// <0587D023> mathlib/extended/voxelvis.cpp:112
// variables: 4
// function calls: 10
void BuildRegionListFromMask_Old(CUtlVector<long long unsigned int, CUtlMemory<long long unsigned int, int> >& regionList, uint64 nAvailable)
{
	uint64 nAllocated; // 114
	{
		uint64 nRegion; // 118
		{
			int i; // 101
			{
				uint64 nBit; // 103
			}
		}
		GrowRegion(uint64 nAllocated); // 118
		CUtlMemory<long long unsigned int, int>::NumAllocated(); // 1196
		CUtlMemory<long long unsigned int, int>::operator[](
				int i);  // 602
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::Element(
			int i);  // 1201
		CopyConstruct<long long unsigned int>(long long unsigned int* pMemory,
							const long long unsigned int& src);  // 1201
		CUtlMemory<long long unsigned int, int>::Base(); // 112
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::Base(); // 368
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::AddToTail(
				const long long unsigned int& src);  // 122
	}
} /* size: 0, variables: 1 */

// <0587CD16> mathlib/extended/voxelvis.cpp:127
// variables: 6
// function calls: 10
void BuildRegionListFromMask(CUtlVector<long long unsigned int, CUtlMemory<long long unsigned int, int> >& regionList, uint64 nAvailable)
{
	uint64 nAllocated; // 129
	uint64 nBaseAllocated; // 130
	{
		uint64 nRegion; // 134
		{
			int i; // 87
			{
				uint64 nBit; // 89
				{
					uint64 nRegion; // 92
				}
			}
		}
		GrowRegion(uint64 nAllocated,
				uint64 nBaseAllocated);  // 134
		CUtlMemory<long long unsigned int, int>::NumAllocated(); // 1196
		CUtlMemory<long long unsigned int, int>::operator[](
				int i);  // 602
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::Element(
			int i);  // 1201
		CopyConstruct<long long unsigned int>(long long unsigned int* pMemory,
							const long long unsigned int& src);  // 1201
		CUtlMemory<long long unsigned int, int>::Base(); // 112
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::Base(); // 368
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::AddToTail(
				const long long unsigned int& src);  // 138
	}
} /* size: 223, variables: 2 */

// <0587C5CA> mathlib/extended/voxelvis.cpp:143
// variables: 6
// function calls: 29
void BuildBoundsListFromMask(CUtlVector<AABB_t, CUtlMemory<AABB_t, int> >& boundsList, const AABB_t& boundsHierarchy, uint64 nAvailable)
{
	CUtlVector<long long unsigned int, CUtlMemory<long long unsigned int, int> > regionList; // 145
	{
		uint64 nRegMask; // 148
		CUtlVector<long long unsigned int, CUtlMemory<long long unsigned int, int> >& __for_range; // 25900
		iterator __for_begin; // 5490
		iterator __for_end; // 5490
		{
			AABB_t regBounds; // 150
			CUtlMemory<AABB_t, int>::Base(); // 112
			CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::Base(); // 368
			CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::ResetDbgInfo(); // 824
			CUtlMemory<AABB_t, int>::IsGrowable(); // 823
			CUtlMemory<AABB_t, int>::IsExternallyAllocated(); // 859
			CUtlMemory<AABB_t, int>::IsExternallyAllocated(); // 861
			CUtlMemory<AABB_t, int>::Grow(
				int num);  // 806
			CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::GrowMemory(
					int num);  // 1198
			CUtlMemory<AABB_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::Element(
				int i);  // 1201
			CopyConstruct<AABB_t>(AABB_t* pMemory,
						const AABB_t& src);  // 1201
			CUtlMemory<AABB_t, int>::NumAllocated(); // 1196
			CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::AddToTail(
					const AABB_t& src);  // 151
		}
		CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::end(); // 148
	}
	CUtlMemory<long long unsigned int, int>::ValidateGrowSize(); // 475
	CUtlMemory<long long unsigned int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<long long unsigned int, CUtlMemory<long long unsigned int, int> >::CUtlVector(); // 145
	CUtlMemory<AABB_t, int>::IsGrowable(); // 881
	CUtlMemory<AABB_t, int>::IsExternallyAllocated(); // 888
	CUtlMemory<AABB_t, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<AABB_t, CUtlMemory<AABB_t, int> >::EnsureCapacity(
			int num);  // 147
	CUtlMemory<long long unsigned int, int>::Purge(); // 903
	CUtlMemory<long long unsigned int, int>::Purge(); // 1799
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::Purge(); // 560
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<long long unsigned int, CUtlMemory<long long unsigned int, int> >::~CUtlVector(); // 153
} /* size: 0, variables: 1, inline expansions: 15 (0 bytes) */

// <0587E129> mathlib/extended/voxelvis.cpp:158
// variables: 4
// function calls: 9
void VoxelBoundsFromIndex(uint nIndex, float flVoxelSize)
{
	uint x; // 161
	uint y; // 162
	uint z; // 163
	AABB_t out; // 164
	Vector::Vector(); // 24
	Vector::Vector(); // 24
	AABB_t::AABB_t(); // 164
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 165
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 166
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 166
	Vector::operator=(
			const Vector& vOther);  // 166
} /* size: 0, variables: 4, inline expansions: 9 (0 bytes) */

// <0587C577> mathlib/extended/voxelvis.cpp:158
// variables: 4
void VoxelBoundsFromIndex(uint nIndex, float flVoxelSize)
{
	uint x; // 161
	uint y; // 162
	uint z; // 163
	AABB_t out; // 164
} /* size: 0, variables: 4 */

// <0587C08F> mathlib/extended/voxelvis.cpp:170
// variables: 4
// function calls: 21
void BoundsForVoxelMask(const AABB_t& boundsHierarchy, uint64 nMask)
{
	AABB_t out; // 172
	float flVoxelSize; // 174
	{
		int i; // 177
		{
			uint64 nVoxMask; // 179
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::Vector(); // 1436
			Vector::operator+(
					const Vector& v);  // 166
			Vector::Vector(); // 24
			Vector::Vector(); // 24
			AABB_t::AABB_t(); // 164
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 166
			VoxelBoundsFromIndex(uint nIndex,
						float flVoxelSize);  // 182
			VectorMin(const Vector& a,
					const Vector& b,
					Vector& result);  // 99
			VectorMax(const Vector& a,
					const Vector& b,
					Vector& result);  // 100
			AABB_t::AddAABBToBounds(
					const AABB_t& other);  // 182
		}
	}
	Vector::Vector(); // 24
	Vector::Vector(); // 24
	AABB_t::AABB_t(); // 172
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 220
	AABB_t::GetSize(); // 174
	Vector::operator+=(
			const Vector& v);  // 232
	Vector::operator+=(
			const Vector& v);  // 233
	AABB_t::Move(
		const Vector& vDelta);  // 185
} /* size: 379, variables: 2, inline expansions: 10 (159 bytes) */

// <0587E36F> mathlib/extended/voxelvis.cpp:189
// variables: 2
// function calls: 15
void VoxelBoundsFromIndex(const AABB_t& boundsHierarchy, uint nIndex)
{
	float flVoxelSize; // 191
	AABB_t out; // 192
	Vector::Vector(); // 1443
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::operator-(
			const Vector& v);  // 220
	AABB_t::GetSize(); // 191
	Vector::Vector(); // 24
	Vector::Vector(); // 24
	AABB_t::AABB_t(); // 164
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 166
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 166
	VoxelBoundsFromIndex(uint nIndex,
				float flVoxelSize);  // 192
	Vector::operator+=(
			const Vector& v);  // 232
	Vector::operator+=(
			const Vector& v);  // 233
	AABB_t::Move(
		const Vector& vDelta);  // 193
} /* size: 0, variables: 2, inline expansions: 15 (0 bytes) */

// <0587C054> mathlib/extended/voxelvis.cpp:189
// variables: 2
void VoxelBoundsFromIndex(const AABB_t& boundsHierarchy, uint nIndex)
{
	float flVoxelSize; // 191
	AABB_t out; // 192
} /* size: 0, variables: 2 */

// <0587BC1D> mathlib/extended/voxelvis.cpp:198
// variables: 3
// function calls: 17
void IntersectPointWithVoxelHierarchy_Scalar(const AABB_t& bounds, const Vector& vPoint)
{
	uint64 nMask; // 200
	{
		int i; // 201
		{
			AABB_t subVoxel; // 203
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 220
			AABB_t::GetSize(); // 191
			Vector::operator+=(
					const Vector& v);  // 232
			Vector::operator+=(
					const Vector& v);  // 233
			AABB_t::Move(
				const Vector& vDelta);  // 193
			Vector::Vector(); // 24
			Vector::Vector(); // 24
			AABB_t::AABB_t(); // 164
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 166
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 166
			VoxelBoundsFromIndex(uint nIndex,
						float flVoxelSize);  // 192
			VoxelBoundsFromIndex(const AABB_t& boundsHierarchy,
						uint nIndex);  // 203
			AABB_t::ContainsPoint(
					const Vector& vPnt);  // 204
		}
	}
} /* size: 0, variables: 1 */

// <0587A762> mathlib/extended/voxelvis.cpp:213
// variables: 31
// function calls: 92
void IntersectRayWithVoxelHierarchy_Base(fltx4 fl4Start, fltx4 fl4InvDelta, fltx4 fl4VoxelMins, fltx4 fl4VoxelMaxs)
{
	AABB_t voxelBounds; // 215
	uint64 nMask; // 217
	{
		int i; // 218
		{
			AABB_t subVoxel; // 220
			fltx4 fl4Mins; // 221
			fltx4 fl4Maxs; // 222
			bool bHit; // 223
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
					const fltx4& w);  // 37
			_mm_comigt_ss(__m128 __A,
					__m128 __B);  // 2015
			CmpGtFirstValueSIMD<>(const fltx4& a,
						const fltx4& b);  // 39
			{
				fltx4 retVal; // 2200
				_mm_min_ps(__m128 __A,
						__m128 __B);  // 2201
			}
			MinSIMD<>(const fltx4& a,
					const fltx4& b);  // 36
			{
				fltx4 retVal; // 2228
				_mm_max_ps(__m128 __A,
						__m128 __B);  // 2229
			}
			MaxSIMD<>(const fltx4& a,
					const fltx4& b);  // 36
			{
				fltx4 retVal; // 2228
				_mm_max_ps(__m128 __A,
						__m128 __B);  // 2229
			}
			MaxSIMD<>(const fltx4& a,
					const fltx4& b);  // 2325
			{
				fltx4 retVal; // 373
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 374
			}
			RotateLeft2<>(const fltx4& a); // 2326
			{
				fltx4 retVal; // 2228
				_mm_max_ps(__m128 __A,
						__m128 __B);  // 2229
			}
			MaxSIMD<>(const fltx4& a,
					const fltx4& b);  // 2327
			HMaxSIMD(fltx4 a); // 37
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
					const fltx4& w);  // 38
			{
				fltx4 retVal; // 2200
				_mm_min_ps(__m128 __A,
						__m128 __B);  // 2201
			}
			MinSIMD<>(const fltx4& a,
					const fltx4& b);  // 2335
			{
				fltx4 retVal; // 373
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 374
			}
			RotateLeft2<>(const fltx4& a); // 2336
			{
				fltx4 retVal; // 2200
				_mm_min_ps(__m128 __A,
						__m128 __B);  // 2201
			}
			MinSIMD<>(const fltx4& a,
					const fltx4& b);  // 2337
			HMinSIMD(fltx4 a); // 38
			IsRayIntersectingBox(fltx4 vStart,
						fltx4 vInvDelta,
						fltx4 fl4Mins,
						fltx4 fl4Maxs);  // 223
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 220
			AABB_t::GetSize(); // 191
			Vector::Vector(); // 24
			Vector::Vector(); // 24
			AABB_t::AABB_t(); // 164
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 166
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 166
			VoxelBoundsFromIndex(uint nIndex,
						float flVoxelSize);  // 192
			Vector::operator+=(
					const Vector& v);  // 232
			Vector::operator+=(
					const Vector& v);  // 233
			AABB_t::Move(
				const Vector& vDelta);  // 193
			VoxelBoundsFromIndex(const AABB_t& boundsHierarchy,
						uint nIndex);  // 220
			{
				fltx4 retVal; // 927
				_mm_move_ss(__m128 __A,
						__m128 __B);  // 928
				_mm_move_ss(__m128 __A,
						__m128 __B);  // 930
			}
			SetWToZeroSIMD<>(const fltx4& a); // 221
			{
				fltx4 x000; // 1010
				fltx4 y000; // 1011
				fltx4 z000; // 1012
				fltx4 x0y0; // 1013
				_mm_load_ss(const float* __P); // 1010
				_mm_load_ss(const float* __P); // 1011
				_mm_load_ss(const float* __P); // 1012
				_mm_movelh_ps(__m128 __A,
						__m128 __B);  // 1013
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1014
			}
			LoadUnaligned3SIMD<>(const void* pSIMD); // 221
			{
				fltx4 x000; // 1010
				fltx4 y000; // 1011
				fltx4 z000; // 1012
				fltx4 x0y0; // 1013
				_mm_load_ss(const float* __P); // 1011
				_mm_load_ss(const float* __P); // 1010
				_mm_load_ss(const float* __P); // 1012
				_mm_movelh_ps(__m128 __A,
						__m128 __B);  // 1013
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1014
			}
			LoadUnaligned3SIMD<>(const void* pSIMD); // 222
			{
				fltx4 retVal; // 927
				_mm_move_ss(__m128 __A,
						__m128 __B);  // 928
				_mm_move_ss(__m128 __A,
						__m128 __B);  // 930
			}
			SetWToZeroSIMD<>(const fltx4& a); // 222
		}
	}
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 215
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	VectorAligned::x(); // 42
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 42
	VectorAligned::AsVector(); // 215
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 215
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 42
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 75
	VectorAligned::y(); // 42
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	VectorAligned::x(); // 42
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 42
	VectorAligned::AsVector(); // 215
	Vector::Vector(); // 27
	Vector::Vector(); // 27
	Vector::operator=(
			const Vector& vOther);  // 28
	Vector::operator=(
			const Vector& vOther);  // 29
	AABB_t::AABB_t(
		const Vector& vMins,
		const Vector& vMaxs);  // 215
} /* size: 0, variables: 2, inline expansions: 23 (0 bytes) */

// <05879C9B> mathlib/extended/voxelvis.cpp:232
// variables: 29
// function calls: 45
void IntersectRayWithVoxelHierarchy_Scalar(const Vector& vRayStart, const Vector& vRayDelta, const AABB_t& voxelBounds)
{
	fltx4 fl4Start; // 234
	fltx4 fl4Delta; // 235
	fltx4 fl4InvDelta; // 236
	fltx4 fl4Mins; // 237
	fltx4 fl4Maxs; // 238
	{
		fltx4 x000; // 1010
		fltx4 y000; // 1011
		fltx4 z000; // 1012
		fltx4 x0y0; // 1013
		_mm_load_ss(const float* __P); // 1010
		_mm_load_ss(const float* __P); // 1011
		_mm_load_ss(const float* __P); // 1012
		_mm_movelh_ps(__m128 __A,
				__m128 __B);  // 1013
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1014
	}
	LoadUnaligned3SIMD<>(const void* pSIMD); // 234
	{
		fltx4 retVal; // 718
		_mm_and_ps(__m128 __A,
				__m128 __B);  // 719
	}
	AndSIMD<>(const fltx4& a,
			const fltx4& b);  // 48
	{
		fltx4 retVal; // 1851
		_mm_cmpeq_ps(__m128 __A,
				__m128 __B);  // 1852
	}
	CmpEqSIMD<>(const fltx4& a,
			const fltx4& b);  // 47
	{
		fltx4 retVal; // 875
		_mm_or_ps(__m128 __A,
				__m128 __B);  // 876
	}
	OrSIMD<>(const fltx4& a,
		const fltx4& b);  // 48
	{
		fltx4 retVal; // 1662
		_mm_div_ps(__m128 __A,
				__m128 __B);  // 1663
	}
	DivSIMD<>(const fltx4& a,
			const fltx4& b);  // 49
	FullReciprocalSaturateSIMD(fltx4 a); // 236
	{
		fltx4 retVal; // 927
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 928
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 930
	}
	SetWToZeroSIMD<>(const fltx4& a); // 234
	{
		fltx4 x000; // 1010
		fltx4 y000; // 1011
		fltx4 z000; // 1012
		fltx4 x0y0; // 1013
		_mm_load_ss(const float* __P); // 1010
		_mm_load_ss(const float* __P); // 1011
		_mm_load_ss(const float* __P); // 1012
		_mm_movelh_ps(__m128 __A,
				__m128 __B);  // 1013
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1014
	}
	LoadUnaligned3SIMD<>(const void* pSIMD); // 235
	{
		fltx4 retVal; // 927
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 928
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 930
	}
	SetWToZeroSIMD<>(const fltx4& a); // 235
	{
		fltx4 x000; // 1010
		fltx4 y000; // 1011
		fltx4 z000; // 1012
		fltx4 x0y0; // 1013
		_mm_load_ss(const float* __P); // 1011
		_mm_load_ss(const float* __P); // 1010
		_mm_load_ss(const float* __P); // 1012
		_mm_movelh_ps(__m128 __A,
				__m128 __B);  // 1013
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1014
	}
	LoadUnaligned3SIMD<>(const void* pSIMD); // 238
	{
		fltx4 x000; // 1010
		fltx4 y000; // 1011
		fltx4 z000; // 1012
		fltx4 x0y0; // 1013
		_mm_load_ss(const float* __P); // 1012
		_mm_load_ss(const float* __P); // 1011
		_mm_load_ss(const float* __P); // 1010
		_mm_movelh_ps(__m128 __A,
				__m128 __B);  // 1013
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1014
	}
	LoadUnaligned3SIMD<>(const void* pSIMD); // 237
	{
		fltx4 retVal; // 927
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 928
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 930
	}
	SetWToZeroSIMD<>(const fltx4& a); // 237
	{
		fltx4 retVal; // 927
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 928
		_mm_move_ss(__m128 __A,
				__m128 __B);  // 930
	}
	SetWToZeroSIMD<>(const fltx4& a); // 238
} /* size: 0, variables: 5, inline expansions: 13 (0 bytes) */

// <05879C78> mathlib/extended/voxelvis.cpp:242
inline void FirstOutXY(fltx4 vMaxsX, fltx4 vMaxsY)
{
} /* size: 0 */

// <05879C55> mathlib/extended/voxelvis.cpp:247
inline void LastInXY(fltx4 vMinsX, fltx4 vMinsY)
{
} /* size: 0 */

// <05879C00> mathlib/extended/voxelvis.cpp:252
// variables: 2
inline void IntersectSlice(fltx4 fl4FirstOut, fltx4 fl4LastIn, fltx4 vMinsZ, fltx4 vMaxsZ)
{
	fltx4 fl4Overlap; // 260
	uint64 nMask; // 262
} /* size: 0, variables: 2 */

// <0587537F> mathlib/extended/voxelvis.cpp:266
// variables: 140
// function calls: 282
void IntersectRayWithVoxelHierarchy(fltx4 fl4Start, fltx4 fl4InvDelta, fltx4 fl4VoxelMins, fltx4 fl4VoxelMaxs)
{
	float fl4VoxelSize; // 268
	fltx4 fl4Size; // 269
	fltx4 fl4BaseX; // 272
	fltx4 vBoxMinsX; // 273
	fltx4 vBoxMaxsX; // 274
	fltx4 vMinsX; // 275
	fltx4 vMaxsX; // 276
	fltx4 fl4BaseY; // 278
	fltx4 vBoxMinsY; // 279
	fltx4 vBoxMaxsY; // 280
	fltx4 vMinsY; // 281
	fltx4 vMaxsY; // 282
	fltx4 fl4BaseZ; // 284
	fltx4 vBoxMinsZ; // 285
	fltx4 vBoxMaxsZ; // 286
	fltx4 vMinsZ; // 287
	fltx4 vMaxsZ; // 288
	fltx4 fl4FirstOut0; // 290
	fltx4 fl4FirstOut1; // 291
	fltx4 fl4FirstOut2; // 292
	fltx4 fl4FirstOut3; // 293
	fltx4 fl4LastIn0; // 295
	fltx4 fl4LastIn1; // 296
	fltx4 fl4LastIn2; // 297
	fltx4 fl4LastIn3; // 298
	fltx4 zmin0; // 300
	fltx4 zmax0; // 301
	fltx4 zmin1; // 302
	fltx4 zmax1; // 303
	fltx4 zmin2; // 304
	fltx4 zmax2; // 305
	fltx4 zmin3; // 306
	fltx4 zmax3; // 307
	uint64 nMask; // 308
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 268
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 272
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 272
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 249
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 249
	LastInXY(fltx4 vMinsX,
		fltx4 vMinsY);  // 295
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 269
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 244
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 244
	FirstOutXY(fltx4 vMaxsX,
			fltx4 vMaxsY);  // 290
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 273
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 273
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 274
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 275
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 278
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 284
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 276
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 278
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 284
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 279
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 279
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 285
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 280
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 281
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 244
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 244
	FirstOutXY(fltx4 vMaxsX,
			fltx4 vMaxsY);  // 291
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 244
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 244
	FirstOutXY(fltx4 vMaxsX,
			fltx4 vMaxsY);  // 292
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 282
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 285
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 286
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 287
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 290
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 291
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 292
	{
		fltx4 retVal; // 1352
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1353
	}
	SplatWSIMD<>(const fltx4& a); // 293
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 244
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 244
	FirstOutXY(fltx4 vMaxsX,
			fltx4 vMaxsY);  // 293
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 249
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 249
	LastInXY(fltx4 vMinsX,
		fltx4 vMinsY);  // 296
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 295
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 296
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 288
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 249
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 249
	LastInXY(fltx4 vMinsX,
		fltx4 vMinsY);  // 297
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 304
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 297
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 300
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 302
	{
		fltx4 retVal; // 2095
		_mm_cmple_ps(__m128 __A,
				__m128 __B);  // 2096
	}
	CmpLeSIMD<>(const fltx4& a,
			const fltx4& b);  // 311
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 249
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 249
	LastInXY(fltx4 vMinsX,
		fltx4 vMinsY);  // 298
	{
		fltx4 retVal; // 1352
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1353
	}
	SplatWSIMD<>(const fltx4& a); // 298
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 303
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 305
	{
		fltx4 retVal; // 1352
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1353
	}
	SplatWSIMD<>(const fltx4& a); // 306
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 1842
	IsAnyNegative<>(const fltx4& a); // 311
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 301
	{
		fltx4 retVal; // 1352
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1353
	}
	SplatWSIMD<>(const fltx4& a); // 307
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 255
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 257
	{
		fltx4 retVal; // 2095
		_mm_cmple_ps(__m128 __A,
				__m128 __B);  // 2096
	}
	CmpLeSIMD<>(const fltx4& a,
			const fltx4& b);  // 260
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 262
	IntersectSlice(fltx4 fl4FirstOut,
			fltx4 fl4LastIn,
			fltx4 vMinsZ,
			fltx4 vMaxsZ);  // 313
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 257
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 255
	{
		fltx4 retVal; // 2095
		_mm_cmple_ps(__m128 __A,
				__m128 __B);  // 2096
	}
	CmpLeSIMD<>(const fltx4& a,
			const fltx4& b);  // 260
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 262
	IntersectSlice(fltx4 fl4FirstOut,
			fltx4 fl4LastIn,
			fltx4 vMinsZ,
			fltx4 vMaxsZ);  // 314
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 257
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 255
	{
		fltx4 retVal; // 2095
		_mm_cmple_ps(__m128 __A,
				__m128 __B);  // 2096
	}
	CmpLeSIMD<>(const fltx4& a,
			const fltx4& b);  // 260
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 262
	IntersectSlice(fltx4 fl4FirstOut,
			fltx4 fl4LastIn,
			fltx4 vMinsZ,
			fltx4 vMaxsZ);  // 315
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 257
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 255
	{
		fltx4 retVal; // 2095
		_mm_cmple_ps(__m128 __A,
				__m128 __B);  // 2096
	}
	CmpLeSIMD<>(const fltx4& a,
			const fltx4& b);  // 260
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 262
	IntersectSlice(fltx4 fl4FirstOut,
			fltx4 fl4LastIn,
			fltx4 vMinsZ,
			fltx4 vMaxsZ);  // 316
	{
		fltx4 retVal; // 2095
		_mm_cmple_ps(__m128 __A,
				__m128 __B);  // 2096
	}
	CmpLeSIMD<>(const fltx4& a,
			const fltx4& b);  // 319
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 1842
	IsAnyNegative<>(const fltx4& a); // 319
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 255
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 257
	{
		fltx4 retVal; // 2095
		_mm_cmple_ps(__m128 __A,
				__m128 __B);  // 2096
	}
	CmpLeSIMD<>(const fltx4& a,
			const fltx4& b);  // 260
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 262
	IntersectSlice(fltx4 fl4FirstOut,
			fltx4 fl4LastIn,
			fltx4 vMinsZ,
			fltx4 vMaxsZ);  // 321
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 255
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 257
	{
		fltx4 retVal; // 2095
		_mm_cmple_ps(__m128 __A,
				__m128 __B);  // 2096
	}
	CmpLeSIMD<>(const fltx4& a,
			const fltx4& b);  // 260
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 262
	IntersectSlice(fltx4 fl4FirstOut,
			fltx4 fl4LastIn,
			fltx4 vMinsZ,
			fltx4 vMaxsZ);  // 322
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 255
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 257
	{
		fltx4 retVal; // 2095
		_mm_cmple_ps(__m128 __A,
				__m128 __B);  // 2096
	}
	CmpLeSIMD<>(const fltx4& a,
			const fltx4& b);  // 260
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 262
	IntersectSlice(fltx4 fl4FirstOut,
			fltx4 fl4LastIn,
			fltx4 vMinsZ,
			fltx4 vMaxsZ);  // 323
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 257
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 255
	{
		fltx4 retVal; // 2095
		_mm_cmple_ps(__m128 __A,
				__m128 __B);  // 2096
	}
	CmpLeSIMD<>(const fltx4& a,
			const fltx4& b);  // 260
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 262
	IntersectSlice(fltx4 fl4FirstOut,
			fltx4 fl4LastIn,
			fltx4 vMinsZ,
			fltx4 vMaxsZ);  // 324
	{
		fltx4 retVal; // 2095
		_mm_cmple_ps(__m128 __A,
				__m128 __B);  // 2096
	}
	CmpLeSIMD<>(const fltx4& a,
			const fltx4& b);  // 327
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 1842
	IsAnyNegative<>(const fltx4& a); // 327
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 255
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 257
	{
		fltx4 retVal; // 2095
		_mm_cmple_ps(__m128 __A,
				__m128 __B);  // 2096
	}
	CmpLeSIMD<>(const fltx4& a,
			const fltx4& b);  // 260
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 262
	IntersectSlice(fltx4 fl4FirstOut,
			fltx4 fl4LastIn,
			fltx4 vMinsZ,
			fltx4 vMaxsZ);  // 329
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 255
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 257
	{
		fltx4 retVal; // 2095
		_mm_cmple_ps(__m128 __A,
				__m128 __B);  // 2096
	}
	CmpLeSIMD<>(const fltx4& a,
			const fltx4& b);  // 260
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 262
	IntersectSlice(fltx4 fl4FirstOut,
			fltx4 fl4LastIn,
			fltx4 vMinsZ,
			fltx4 vMaxsZ);  // 330
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 255
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 257
	{
		fltx4 retVal; // 2095
		_mm_cmple_ps(__m128 __A,
				__m128 __B);  // 2096
	}
	CmpLeSIMD<>(const fltx4& a,
			const fltx4& b);  // 260
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 262
	IntersectSlice(fltx4 fl4FirstOut,
			fltx4 fl4LastIn,
			fltx4 vMinsZ,
			fltx4 vMaxsZ);  // 331
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 257
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 255
	{
		fltx4 retVal; // 2095
		_mm_cmple_ps(__m128 __A,
				__m128 __B);  // 2096
	}
	CmpLeSIMD<>(const fltx4& a,
			const fltx4& b);  // 260
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 262
	IntersectSlice(fltx4 fl4FirstOut,
			fltx4 fl4LastIn,
			fltx4 vMinsZ,
			fltx4 vMaxsZ);  // 332
	{
		fltx4 retVal; // 2095
		_mm_cmple_ps(__m128 __A,
				__m128 __B);  // 2096
	}
	CmpLeSIMD<>(const fltx4& a,
			const fltx4& b);  // 335
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 1842
	IsAnyNegative<>(const fltx4& a); // 335
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 255
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 257
	{
		fltx4 retVal; // 2095
		_mm_cmple_ps(__m128 __A,
				__m128 __B);  // 2096
	}
	CmpLeSIMD<>(const fltx4& a,
			const fltx4& b);  // 260
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 262
	IntersectSlice(fltx4 fl4FirstOut,
			fltx4 fl4LastIn,
			fltx4 vMinsZ,
			fltx4 vMaxsZ);  // 337
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 257
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 255
	{
		fltx4 retVal; // 2095
		_mm_cmple_ps(__m128 __A,
				__m128 __B);  // 2096
	}
	CmpLeSIMD<>(const fltx4& a,
			const fltx4& b);  // 260
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 262
	IntersectSlice(fltx4 fl4FirstOut,
			fltx4 fl4LastIn,
			fltx4 vMinsZ,
			fltx4 vMaxsZ);  // 338
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 255
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 257
	{
		fltx4 retVal; // 2095
		_mm_cmple_ps(__m128 __A,
				__m128 __B);  // 2096
	}
	CmpLeSIMD<>(const fltx4& a,
			const fltx4& b);  // 260
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 262
	IntersectSlice(fltx4 fl4FirstOut,
			fltx4 fl4LastIn,
			fltx4 vMinsZ,
			fltx4 vMaxsZ);  // 340
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 255
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 257
	{
		fltx4 retVal; // 2095
		_mm_cmple_ps(__m128 __A,
				__m128 __B);  // 2096
	}
	CmpLeSIMD<>(const fltx4& a,
			const fltx4& b);  // 260
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 262
	IntersectSlice(fltx4 fl4FirstOut,
			fltx4 fl4LastIn,
			fltx4 vMinsZ,
			fltx4 vMaxsZ);  // 339
} /* size: 0, variables: 34, inline expansions: 176 (0 bytes) */

// <058752D8> mathlib/extended/voxelvis.cpp:352
// variables: 6
inline void Intersect4(fltx4 vMinsX, fltx4 vMaxsX, fltx4 vMinsY, fltx4 vMaxsY, fltx4 vMinsZ, fltx4 vMaxsZ)
{
	fltx4 vMinXY; // 355
	fltx4 vMaxXY; // 356
	fltx4 fl4FirstOut; // 357
	fltx4 fl4LastIn; // 360
	fltx4 fl4Overlap; // 363
	uint64 nMask; // 365
} /* size: 0, variables: 6 */

// <058701FB> mathlib/extended/voxelvis.cpp:371
// variables: 144
// function calls: 302
void IntersectRayWithVoxelHierarchy_Ref(fltx4 fl4Start, fltx4 fl4InvDelta, fltx4 fl4VoxelMins, fltx4 fl4VoxelMaxs)
{
	float fl4VoxelSize; // 373
	fltx4 fl4Size; // 374
	fltx4 fl4BaseX; // 377
	fltx4 vBoxMinsX; // 378
	fltx4 vBoxMaxsX; // 379
	fltx4 vMinsX; // 380
	fltx4 vMaxsX; // 381
	fltx4 fl4BaseY; // 383
	fltx4 vBoxMinsY; // 384
	fltx4 vBoxMaxsY; // 385
	fltx4 vMinsY; // 386
	fltx4 vMaxsY; // 387
	fltx4 fl4BaseZ; // 389
	fltx4 vBoxMinsZ; // 390
	fltx4 vBoxMaxsZ; // 391
	fltx4 vMinsZ; // 392
	fltx4 vMaxsZ; // 393
	uint64 nMask; // 396
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 373
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 377
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 377
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 384
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 374
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 357
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 356
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 355
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 360
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 357
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 360
	{
		fltx4 retVal; // 2095
		_mm_cmple_ps(__m128 __A,
				__m128 __B);  // 2096
	}
	CmpLeSIMD<>(const fltx4& a,
			const fltx4& b);  // 363
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 365
	Intersect4(fltx4 vMinsX,
			fltx4 vMaxsX,
			fltx4 vMinsY,
			fltx4 vMaxsY,
			fltx4 vMinsZ,
			fltx4 vMaxsZ);  // 397
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 378
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 378
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 390
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 379
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 380
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 383
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 389
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 381
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 383
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 389
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 355
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 360
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 356
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 357
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 357
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 360
	{
		fltx4 retVal; // 2095
		_mm_cmple_ps(__m128 __A,
				__m128 __B);  // 2096
	}
	CmpLeSIMD<>(const fltx4& a,
			const fltx4& b);  // 363
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 365
	Intersect4(fltx4 vMinsX,
			fltx4 vMaxsX,
			fltx4 vMinsY,
			fltx4 vMaxsY,
			fltx4 vMinsZ,
			fltx4 vMaxsZ);  // 398
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 384
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 385
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 386
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 387
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 390
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 391
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 392
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 393
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 397
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 397
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 397
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 397
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 356
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 355
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 357
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 360
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 357
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 360
	{
		fltx4 retVal; // 2095
		_mm_cmple_ps(__m128 __A,
				__m128 __B);  // 2096
	}
	CmpLeSIMD<>(const fltx4& a,
			const fltx4& b);  // 363
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 365
	Intersect4(fltx4 vMinsX,
			fltx4 vMaxsX,
			fltx4 vMinsY,
			fltx4 vMaxsY,
			fltx4 vMinsZ,
			fltx4 vMaxsZ);  // 399
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 398
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 398
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 399
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 399
	{
		fltx4 retVal; // 1352
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1353
	}
	SplatWSIMD<>(const fltx4& a); // 400
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 355
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 356
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 357
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 357
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 360
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 360
	{
		fltx4 retVal; // 2095
		_mm_cmple_ps(__m128 __A,
				__m128 __B);  // 2096
	}
	CmpLeSIMD<>(const fltx4& a,
			const fltx4& b);  // 363
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 365
	Intersect4(fltx4 vMinsX,
			fltx4 vMaxsX,
			fltx4 vMinsY,
			fltx4 vMaxsY,
			fltx4 vMinsZ,
			fltx4 vMaxsZ);  // 400
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 401
	{
		fltx4 retVal; // 1352
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1353
	}
	SplatWSIMD<>(const fltx4& a); // 400
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 360
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 360
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 357
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 357
	{
		fltx4 retVal; // 2095
		_mm_cmple_ps(__m128 __A,
				__m128 __B);  // 2096
	}
	CmpLeSIMD<>(const fltx4& a,
			const fltx4& b);  // 363
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 365
	Intersect4(fltx4 vMinsX,
			fltx4 vMaxsX,
			fltx4 vMinsY,
			fltx4 vMaxsY,
			fltx4 vMinsZ,
			fltx4 vMaxsZ);  // 401
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 357
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 360
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 357
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 360
	{
		fltx4 retVal; // 2095
		_mm_cmple_ps(__m128 __A,
				__m128 __B);  // 2096
	}
	CmpLeSIMD<>(const fltx4& a,
			const fltx4& b);  // 363
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 365
	Intersect4(fltx4 vMinsX,
			fltx4 vMaxsX,
			fltx4 vMinsY,
			fltx4 vMaxsY,
			fltx4 vMinsZ,
			fltx4 vMaxsZ);  // 403
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 401
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 357
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 360
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 357
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 360
	{
		fltx4 retVal; // 2095
		_mm_cmple_ps(__m128 __A,
				__m128 __B);  // 2096
	}
	CmpLeSIMD<>(const fltx4& a,
			const fltx4& b);  // 363
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 365
	Intersect4(fltx4 vMinsX,
			fltx4 vMaxsX,
			fltx4 vMinsY,
			fltx4 vMaxsY,
			fltx4 vMinsZ,
			fltx4 vMaxsZ);  // 402
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 357
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 360
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 357
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 360
	{
		fltx4 retVal; // 2095
		_mm_cmple_ps(__m128 __A,
				__m128 __B);  // 2096
	}
	CmpLeSIMD<>(const fltx4& a,
			const fltx4& b);  // 363
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 365
	Intersect4(fltx4 vMinsX,
			fltx4 vMaxsX,
			fltx4 vMinsY,
			fltx4 vMaxsY,
			fltx4 vMinsZ,
			fltx4 vMaxsZ);  // 404
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 405
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 357
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 360
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 357
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 360
	{
		fltx4 retVal; // 2095
		_mm_cmple_ps(__m128 __A,
				__m128 __B);  // 2096
	}
	CmpLeSIMD<>(const fltx4& a,
			const fltx4& b);  // 363
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 365
	Intersect4(fltx4 vMinsX,
			fltx4 vMaxsX,
			fltx4 vMinsY,
			fltx4 vMaxsY,
			fltx4 vMinsZ,
			fltx4 vMaxsZ);  // 405
	{
		fltx4 retVal; // 1352
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1353
	}
	SplatWSIMD<>(const fltx4& a); // 409
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 405
	{
		fltx4 retVal; // 1352
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1353
	}
	SplatWSIMD<>(const fltx4& a); // 409
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 357
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 360
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 357
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 360
	{
		fltx4 retVal; // 2095
		_mm_cmple_ps(__m128 __A,
				__m128 __B);  // 2096
	}
	CmpLeSIMD<>(const fltx4& a,
			const fltx4& b);  // 363
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 365
	Intersect4(fltx4 vMinsX,
			fltx4 vMaxsX,
			fltx4 vMinsY,
			fltx4 vMaxsY,
			fltx4 vMinsZ,
			fltx4 vMaxsZ);  // 406
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 357
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 360
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 357
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 360
	{
		fltx4 retVal; // 2095
		_mm_cmple_ps(__m128 __A,
				__m128 __B);  // 2096
	}
	CmpLeSIMD<>(const fltx4& a,
			const fltx4& b);  // 363
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 365
	Intersect4(fltx4 vMinsX,
			fltx4 vMaxsX,
			fltx4 vMinsY,
			fltx4 vMaxsY,
			fltx4 vMinsZ,
			fltx4 vMaxsZ);  // 407
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 357
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 360
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 357
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 360
	{
		fltx4 retVal; // 2095
		_mm_cmple_ps(__m128 __A,
				__m128 __B);  // 2096
	}
	CmpLeSIMD<>(const fltx4& a,
			const fltx4& b);  // 363
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 365
	Intersect4(fltx4 vMinsX,
			fltx4 vMaxsX,
			fltx4 vMinsY,
			fltx4 vMaxsY,
			fltx4 vMinsZ,
			fltx4 vMaxsZ);  // 408
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 357
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 360
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 357
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 360
	{
		fltx4 retVal; // 2095
		_mm_cmple_ps(__m128 __A,
				__m128 __B);  // 2096
	}
	CmpLeSIMD<>(const fltx4& a,
			const fltx4& b);  // 363
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 365
	Intersect4(fltx4 vMinsX,
			fltx4 vMaxsX,
			fltx4 vMinsY,
			fltx4 vMaxsY,
			fltx4 vMinsZ,
			fltx4 vMaxsZ);  // 409
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 357
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 360
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 357
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 360
	{
		fltx4 retVal; // 2095
		_mm_cmple_ps(__m128 __A,
				__m128 __B);  // 2096
	}
	CmpLeSIMD<>(const fltx4& a,
			const fltx4& b);  // 363
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 365
	Intersect4(fltx4 vMinsX,
			fltx4 vMaxsX,
			fltx4 vMinsY,
			fltx4 vMaxsY,
			fltx4 vMinsZ,
			fltx4 vMaxsZ);  // 410
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 357
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 360
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 357
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 360
	{
		fltx4 retVal; // 2095
		_mm_cmple_ps(__m128 __A,
				__m128 __B);  // 2096
	}
	CmpLeSIMD<>(const fltx4& a,
			const fltx4& b);  // 363
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 365
	Intersect4(fltx4 vMinsX,
			fltx4 vMaxsX,
			fltx4 vMinsY,
			fltx4 vMaxsY,
			fltx4 vMinsZ,
			fltx4 vMaxsZ);  // 411
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 357
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 360
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 357
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 360
	{
		fltx4 retVal; // 2095
		_mm_cmple_ps(__m128 __A,
				__m128 __B);  // 2096
	}
	CmpLeSIMD<>(const fltx4& a,
			const fltx4& b);  // 363
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 365
	Intersect4(fltx4 vMinsX,
			fltx4 vMaxsX,
			fltx4 vMinsY,
			fltx4 vMaxsY,
			fltx4 vMinsZ,
			fltx4 vMaxsZ);  // 412
} /* size: 0, variables: 18, inline expansions: 176 (0 bytes) */

// <058701CD> mathlib/extended/voxelvis.cpp:424
// variable: 1
inline void IsDisjoint2(fltx4 x, fltx4 y)
{
	uint64 nMask; // 426
} /* size: 0, variables: 1 */

// <0586F07D> mathlib/extended/voxelvis.cpp:440
// variables: 46
// function calls: 70
void IntersectBoxWithVoxelHierarchy(fltx4 fl4QueryMins, fltx4 fl4QueryMaxs, fltx4 fl4VoxelMins, fltx4 fl4VoxelMaxs)
{
	float fl4VoxelSize; // 442
	fltx4 fl4Size; // 443
	fltx4 vMinsX; // 445
	fltx4 vMaxsX; // 446
	fltx4 vMinsY; // 447
	fltx4 vMaxsY; // 448
	fltx4 vMinsZ; // 449
	fltx4 vMaxsZ; // 450
	fltx4 vDisjointX; // 452
	fltx4 vDisjointY; // 453
	fltx4 vDisjointZ; // 454
	uint64 zMask; // 456
	uint64 yMask0; // 458
	uint64 yMask1; // 459
	uint64 yMask2; // 460
	uint64 yMask3; // 461
	uint64 nLayerMask; // 463
	uint64 nXYMask; // 464
	uint64 nMask; // 465
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 442
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 445
	{
		fltx4 retVal; // 1134
		_mm_set1_ps(float __F); // 1135
	}
	ReplicateX4<>(float flValue); // 443
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 447
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 449
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 452
	{
		fltx4 retVal; // 2067
		_mm_cmplt_ps(__m128 __A,
				__m128 __B);  // 2068
	}
	CmpLtSIMD<>(const fltx4& a,
			const fltx4& b);  // 452
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 452
	{
		fltx4 retVal; // 2067
		_mm_cmplt_ps(__m128 __A,
				__m128 __B);  // 2068
	}
	CmpLtSIMD<>(const fltx4& a,
			const fltx4& b);  // 452
	{
		fltx4 retVal; // 875
		_mm_or_ps(__m128 __A,
				__m128 __B);  // 876
	}
	OrSIMD<>(const fltx4& a,
		const fltx4& b);  // 452
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 453
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 454
	{
		fltx4 retVal; // 2067
		_mm_cmplt_ps(__m128 __A,
				__m128 __B);  // 2068
	}
	CmpLtSIMD<>(const fltx4& a,
			const fltx4& b);  // 453
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 453
	{
		fltx4 retVal; // 2067
		_mm_cmplt_ps(__m128 __A,
				__m128 __B);  // 2068
	}
	CmpLtSIMD<>(const fltx4& a,
			const fltx4& b);  // 453
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 454
	{
		fltx4 retVal; // 875
		_mm_or_ps(__m128 __A,
				__m128 __B);  // 876
	}
	OrSIMD<>(const fltx4& a,
		const fltx4& b);  // 453
	{
		fltx4 retVal; // 2067
		_mm_cmplt_ps(__m128 __A,
				__m128 __B);  // 2068
	}
	CmpLtSIMD<>(const fltx4& a,
			const fltx4& b);  // 454
	{
		fltx4 retVal; // 2067
		_mm_cmplt_ps(__m128 __A,
				__m128 __B);  // 2068
	}
	CmpLtSIMD<>(const fltx4& a,
			const fltx4& b);  // 454
	{
		fltx4 retVal; // 875
		_mm_or_ps(__m128 __A,
				__m128 __B);  // 876
	}
	OrSIMD<>(const fltx4& a,
		const fltx4& b);  // 454
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 460
	{
		fltx4 retVal; // 1295
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1296
	}
	SplatXSIMD<>(const fltx4& a); // 458
	{
		fltx4 retVal; // 875
		_mm_or_ps(__m128 __A,
				__m128 __B);  // 876
	}
	OrSIMD<>(const fltx4& a,
		const fltx4& b);  // 426
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 426
	IsDisjoint2(fltx4 x,
			fltx4 y);  // 460
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 456
	{
		fltx4 retVal; // 875
		_mm_or_ps(__m128 __A,
				__m128 __B);  // 876
	}
	OrSIMD<>(const fltx4& a,
		const fltx4& b);  // 426
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 426
	IsDisjoint2(fltx4 x,
			fltx4 y);  // 458
	{
		fltx4 retVal; // 1314
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1315
	}
	SplatYSIMD<>(const fltx4& a); // 459
	{
		fltx4 retVal; // 875
		_mm_or_ps(__m128 __A,
				__m128 __B);  // 876
	}
	OrSIMD<>(const fltx4& a,
		const fltx4& b);  // 426
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 426
	IsDisjoint2(fltx4 x,
			fltx4 y);  // 459
	{
		fltx4 retVal; // 1352
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1353
	}
	SplatWSIMD<>(const fltx4& a); // 461
	{
		fltx4 retVal; // 875
		_mm_or_ps(__m128 __A,
				__m128 __B);  // 876
	}
	OrSIMD<>(const fltx4& a,
		const fltx4& b);  // 426
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 426
	IsDisjoint2(fltx4 x,
			fltx4 y);  // 461
} /* size: 270, variables: 19, inline expansions: 43 (158 bytes) */

// <0586E2EE> mathlib/extended/voxelvis.cpp:471
// variables: 5
// function calls: 70
void IntersectBoxWithVoxelHierarchy_Scalar(fltx4 fl4QueryMins, fltx4 fl4QueryMaxs, fltx4 fl4VoxelMins, fltx4 fl4VoxelMaxs)
{
	AABB_t queryBounds; // 473
	AABB_t voxelBounds; // 474
	uint64 nMask; // 475
	{
		int i; // 476
		{
			AABB_t childBounds; // 478
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
			Vector::operator-(
					const Vector& v);  // 220
			AABB_t::GetSize(); // 191
			Vector::Vector(); // 24
			Vector::Vector(); // 24
			AABB_t::AABB_t(); // 164
			Vector::Vector(
				vec_t X,
				vec_t Y,
				vec_t Z);  // 166
			Vector::Vector(); // 1436
			VectorAdd(const Vector& a,
					const Vector& b,
					Vector& c);  // 1437
			Vector::operator+(
					const Vector& v);  // 166
			VoxelBoundsFromIndex(uint nIndex,
						float flVoxelSize);  // 192
			Vector::operator+=(
					const Vector& v);  // 232
			Vector::operator+=(
					const Vector& v);  // 233
			AABB_t::Move(
				const Vector& vDelta);  // 193
			VoxelBoundsFromIndex(const AABB_t& boundsHierarchy,
						uint nIndex);  // 478
			AABB_t::Overlaps(
				const AABB_t& bBox);  // 163
			AABB_t::Overlaps(
				const AABB_t& bBox);  // 479
		}
	}
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 473
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 42
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 75
	VectorAligned::y(); // 42
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	VectorAligned::x(); // 42
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 42
	VectorAligned::AsVector(); // 473
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 473
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 42
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 75
	VectorAligned::y(); // 42
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	VectorAligned::x(); // 42
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 42
	VectorAligned::AsVector(); // 473
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	VectorAligned::x(); // 42
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 42
	VectorAligned::AsVector(); // 474
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 42
	_mm_cvtss_f32(__m128 __A); // 1515
	GetYSIMD<>(fltx4 a); // 75
	VectorAligned::y(); // 42
	_mm_cvtss_f32(__m128 __A); // 1496
	GetXSIMD<>(fltx4 a); // 74
	VectorAligned::x(); // 42
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 42
	VectorAligned::AsVector(); // 474
	Vector::Vector(); // 27
	Vector::Vector(); // 27
	Vector::operator=(
			const Vector& vOther);  // 28
	Vector::operator=(
			const Vector& vOther);  // 29
	AABB_t::AABB_t(
		const Vector& vMins,
		const Vector& vMaxs);  // 473
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 474
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 474
	Vector::Vector(); // 27
	Vector::Vector(); // 27
	Vector::operator=(
			const Vector& vOther);  // 28
	Vector::operator=(
			const Vector& vOther);  // 29
	AABB_t::AABB_t(
		const Vector& vMins,
		const Vector& vMaxs);  // 474
} /* size: 0, variables: 3, inline expansions: 52 (0 bytes) */

// <0586D143> mathlib/extended/voxelvis.cpp:491
// variables: 56
// function calls: 62
void IntersectRayWithVoxels(fltx4 fl4Start, fltx4 fl4InvDelta, fltx4 fl4Mins, fltx4 fl4Maxs)
{
	fltx4 vMins; // 493
	fltx4 vMaxs; // 494
	fltx4 vMidT; // 497
	fltx4 vBoxMinsX; // 500
	fltx4 vBoxMaxsX; // 502
	fltx4 vMinsX; // 504
	fltx4 vMaxsX; // 505
	fltx4 vBoxMinsY; // 507
	fltx4 vBoxMaxsY; // 509
	fltx4 vMinsY; // 512
	fltx4 vMaxsY; // 513
	fltx4 vBoxMinsZ; // 514
	fltx4 vBoxMidZ; // 515
	fltx4 vBoxMaxZ; // 516
	fltx4 vMinsZ0; // 518
	fltx4 vMaxsZ0; // 519
	fltx4 vMinsZ1; // 520
	fltx4 vMaxsZ1; // 521
	fltx4 vMinXY; // 525
	fltx4 vMaxXY; // 526
	fltx4 fl4FirstOut0; // 527
	fltx4 fl4FirstOut1; // 528
	fltx4 fl4LastIn0; // 530
	fltx4 fl4LastIn1; // 531
	fltx4 fl4Overlap0; // 534
	fltx4 fl4Overlap1; // 535
	uint32 nMask; // 537
	{
		fltx4 retVal; // 1616
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 1617
	}
	SubSIMD<>(const fltx4& a,
			const fltx4& b);  // 493
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 493
	{
		fltx4 retVal; // 1616
		_mm_sub_ps(__m128 __A,
				__m128 __B);  // 1617
	}
	SubSIMD<>(const fltx4& a,
			const fltx4& b);  // 494
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 497
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 494
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 497
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 514
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 527
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 504
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 505
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 512
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 515
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 516
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 520
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 513
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 518
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 526
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 525
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 519
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 521
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 527
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 528
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 530
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 531
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 530
	{
		fltx4 retVal; // 2200
		_mm_min_ps(__m128 __A,
				__m128 __B);  // 2201
	}
	MinSIMD<>(const fltx4& a,
			const fltx4& b);  // 528
	{
		fltx4 retVal; // 2228
		_mm_max_ps(__m128 __A,
				__m128 __B);  // 2229
	}
	MaxSIMD<>(const fltx4& a,
			const fltx4& b);  // 531
	{
		fltx4 retVal; // 2095
		_mm_cmple_ps(__m128 __A,
				__m128 __B);  // 2096
	}
	CmpLeSIMD<>(const fltx4& a,
			const fltx4& b);  // 534
	{
		fltx4 retVal; // 2095
		_mm_cmple_ps(__m128 __A,
				__m128 __B);  // 2096
	}
	CmpLeSIMD<>(const fltx4& a,
			const fltx4& b);  // 535
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 537
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 537
} /* size: 0, variables: 27, inline expansions: 33 (0 bytes) */

// <0586C7C4> mathlib/extended/voxelvis.cpp:541
// variables: 26
// function calls: 33
void IntersectBoxWithVoxels(fltx4 fl4QueryMins, fltx4 fl4QueryMaxs, fltx4 fl4VoxelMins, fltx4 fl4VoxelMaxs)
{
	fltx4 fl4Center; // 544
	fltx4 fl4BelowMins; // 546
	fltx4 fl4BelowMid; // 547
	fltx4 fl4AboveMid; // 548
	fltx4 fl4AboveMaxs; // 549
	fltx4 fl4LoInterval; // 552
	fltx4 fl4HiInterval; // 553
	fltx4 vMaskX; // 556
	fltx4 vMaskY; // 560
	fltx4 vMask0; // 566
	fltx4 vMask1; // 570
	uint32 nMask; // 573
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 544
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 544
	{
		fltx4 retVal; // 2067
		_mm_cmplt_ps(__m128 __A,
				__m128 __B);  // 2068
	}
	CmpLtSIMD<>(const fltx4& a,
			const fltx4& b);  // 546
	{
		fltx4 retVal; // 2067
		_mm_cmplt_ps(__m128 __A,
				__m128 __B);  // 2068
	}
	CmpLtSIMD<>(const fltx4& a,
			const fltx4& b);  // 549
	{
		fltx4 retVal; // 2067
		_mm_cmplt_ps(__m128 __A,
				__m128 __B);  // 2068
	}
	CmpLtSIMD<>(const fltx4& a,
			const fltx4& b);  // 547
	{
		fltx4 retVal; // 2067
		_mm_cmplt_ps(__m128 __A,
				__m128 __B);  // 2068
	}
	CmpLtSIMD<>(const fltx4& a,
			const fltx4& b);  // 548
	{
		fltx4 retVal; // 875
		_mm_or_ps(__m128 __A,
				__m128 __B);  // 876
	}
	OrSIMD<>(const fltx4& a,
		const fltx4& b);  // 552
	{
		fltx4 retVal; // 875
		_mm_or_ps(__m128 __A,
				__m128 __B);  // 876
	}
	OrSIMD<>(const fltx4& a,
		const fltx4& b);  // 553
	{
		fltx4 retVal; // 1276
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1277
	}
	ShuffleSIMD<85>(const fltx4& a,
			const fltx4& b);  // 665
	ShuffleSIMD<85>(const fltx4& a,
			const fltx4& b);  // 560
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 566
	{
		fltx4 retVal; // 875
		_mm_or_ps(__m128 __A,
				__m128 __B);  // 876
	}
	OrSIMD<>(const fltx4& a,
		const fltx4& b);  // 566
	{
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 570
	{
		fltx4 retVal; // 875
		_mm_or_ps(__m128 __A,
				__m128 __B);  // 876
	}
	OrSIMD<>(const fltx4& a,
		const fltx4& b);  // 566
	{
		fltx4 retVal; // 875
		_mm_or_ps(__m128 __A,
				__m128 __B);  // 876
	}
	OrSIMD<>(const fltx4& a,
		const fltx4& b);  // 570
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 573
	_mm_movemask_ps(__m128 __A); // 1805
	TestSignSIMD<>(const fltx4& a); // 573
} /* size: 0, variables: 12, inline expansions: 19 (0 bytes) */

