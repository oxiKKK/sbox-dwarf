
//
// sbox/physics_trace.cpp
//
//	referenced by: libengine2.so
//
//	functions: 9
//

// <01768286> sbox/physics_trace.cpp:11
// variables: 22
// function calls: 121
void Request::GetRay()
{
	Ray_t ray; // 13
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 70
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
			const Vector& src);  // 70
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 1694
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
		fltx4 retVal; // 1333
		_mm_shuffle_ps(__m128 __A,
				__m128 __B,
				const int  __mask);  // 1334
	}
	SplatZSIMD<>(const fltx4& a); // 1695
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
	VectorAligned::LengthSqr(); // 72
	VectorSubtract(const Vector& a,
			const Vector& b,
			Vector& c);  // 1444
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 74
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
			const Vector& src);  // 74
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 229
	VectorAligned::operator*=(
			vec_t s);  // 75
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 79
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
			const Vector& src);  // 79
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
	VectorAligned::LengthSqr(); // 76
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 229
	VectorAligned::operator*=(
			vec_t s);  // 80
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
	VectorAligned::operator Vector(); // 81
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Vector(); // 1487
	Vector::Cross(
		const Vector& vOther);  // 2464
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2464
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Vector(); // 1487
	Vector::Cross(
		const Vector& vOther);  // 2464
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2464
	operator*(const Quaternion& q,
			const Vector& v);  // 81
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
			const Vector& src);  // 81
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 82
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 82
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
			const Vector& src);  // 82
	{
		fltx4 retVal; // 1639
		_mm_mul_ps(__m128 __A,
				__m128 __B);  // 1640
	}
	MulSIMD<>(const fltx4& a,
			const fltx4& b);  // 229
	VectorAligned::operator*=(
			vec_t s);  // 83
	Ray_t::Init(
		const Vector& start,
		const Vector& end,
		const Vector& mins,
		const Vector& maxs,
		const Quaternion& rot);  // 17
	VectorAligned::VectorAligned(); // 22
	VectorAligned::VectorAligned(); // 22
	VectorAligned::VectorAligned(); // 22
	VectorAligned::VectorAligned(); // 22
	Ray_t::Ray_t(); // 13
	VectorAligned::operator=(
			const Vector& src);  // 37
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
			const Vector& src);  // 46
	VectorAligned::InitZero(); // 41
	Vector::Vector(); // 1443
	Vector::operator-(
			const Vector& v);  // 37
	VectorAligned::InitZero(); // 45
	Ray_t::Init(
		const Vector& start,
		const Vector& end,
		float flRadius);  // 21
} /* size: 681, variables: 1, inline expansions: 100 (2147 bytes) */

// <0176824A> sbox/physics_trace.cpp:27
// variables: 3
void BuildTraceFilter(Request& request)
{
	RnQueryAttr_t filter; // 29
	uint16 nRemoveMask; // 31
	uint16 nObjectSetMask; // 32
} /* size: 0, variables: 3 */

// <01767707> sbox/physics_trace.cpp:53
// variables: 4
// function calls: 59
void TraceToResult(PhysicsTrace_t& t, const Ray_t& ray)
{
	Result r; // 55
	PhysicsTrace_t::DidHit(); // 57
	{
		fltx4 retVal; // 1593
		_mm_add_ps(__m128 __A,
				__m128 __B);  // 1594
	}
	AddSIMD<>(const fltx4& a,
			const fltx4& b);  // 250
	VectorAligned::operator fltx4(); // 250
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 250
	VectorAligned::operator+(
			const VectorAligned& v);  // 61
	Vector::Vector(); // 41
	Vector::Vector(); // 41
	Vector::Vector(); // 41
	Vector::Vector(); // 41
	Result::Result(); // 55
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
	VectorAligned::operator Vector(); // 62
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 61
	Vector::operator=(
			const Vector& vOther);  // 67
	Vector::operator=(
			const Vector& vOther);  // 68
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
			vec_t s);  // 427
	operator*(float fl,
			const VectorAligned& v);  // 73
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 73
	Vector::operator=(
			const Vector& vOther);  // 72
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 250
	VectorAligned::operator+(
			const VectorAligned& v);  // 72
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 72
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 73
	Vector::operator=(
			const Vector& vOther);  // 78
	CManagedHandle::GetValue(); // 83
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 86
	CManagedHandle::GetValue(); // 96
	Vector::operator=(
			const Vector& vOther);  // 57
	Result::Init(); // 59
	Vector::operator=(
			const Vector& vOther);  // 61
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 62
} /* size: 538, variables: 1, inline expansions: 56 (441 bytes) */

// <017652BF> sbox/physics_trace.cpp:106
// variables: 7
// function calls: 172
void TraceAll(Request request, CUtlVector<PhysicsTrace::Result, CUtlMemory<PhysicsTrace::Result, int> >* results)
{
	Ray_t ray; // 108
	RnQueryAttr_t attributes; // 109
	CTraceVector hits; // 110
	{
		PhysicsTrace_t& hit; // 139
		CUtlVectorFixedGrowable<PhysicsTrace_t, 128>& __for_range; // 3810
		iterator __for_begin; // 13721
		iterator __for_end; // 13721
		CUtlMemory<PhysicsTrace_t, int>::Base(); // 112
		CUtlVectorBase<PhysicsTrace_t, CUtlMemoryFixedGrowable<PhysicsTrace_t, 128, int> >::Base(); // 102
		CUtlVectorBase<PhysicsTrace_t, CUtlMemoryFixedGrowable<PhysicsTrace_t, 128, int> >::begin(); // 139
		CUtlVectorBase<PhysicsTrace_t, CUtlMemoryFixedGrowable<PhysicsTrace_t, 128, int> >::Count(); // 104
		CUtlVectorBase<PhysicsTrace_t, CUtlMemoryFixedGrowable<PhysicsTrace_t, 128, int> >::end(); // 139
		CUtlMemory<PhysicsTrace::Result, int>::Base(); // 112
		CUtlVectorBase<PhysicsTrace::Result, CUtlMemory<PhysicsTrace::Result, int> >::Base(); // 368
		CUtlVectorBase<PhysicsTrace::Result, CUtlMemory<PhysicsTrace::Result, int> >::ResetDbgInfo(); // 824
		CUtlMemory<PhysicsTrace::Result, int>::IsGrowable(); // 823
		CUtlMemory<PhysicsTrace::Result, int>::IsExternallyAllocated(); // 859
		CUtlMemory<PhysicsTrace::Result, int>::IsExternallyAllocated(); // 861
		CUtlMemory<PhysicsTrace::Result, int>::Grow(
			int num);  // 806
		CUtlVectorBase<PhysicsTrace::Result, CUtlMemory<PhysicsTrace::Result, int> >::GrowMemory(
				int num);  // 1249
		Construct<PhysicsTrace::Result, PhysicsTrace::Result>(Result* pMemory); // 1252
		CUtlMemory<PhysicsTrace::Result, int>::operator[](
				int i);  // 602
		CUtlVectorBase<PhysicsTrace::Result, CUtlMemory<PhysicsTrace::Result, int> >::Element(
			int i);  // 1252
		CUtlMemory<PhysicsTrace::Result, int>::NumAllocated(); // 1247
		CUtlVectorBase<PhysicsTrace::Result, CUtlMemory<PhysicsTrace::Result, int> >::AddToTail(
				Result& src);  // 141
	}
	RnQueryShapeAttr_t::RnQueryShapeAttr_t(); // 340
	RnQueryAttr_t::RnQueryAttr_t(); // 29
	RnQueryAttr_t::SetObjectSetMask(
			RnQueryObjectSet nObjectSetMask);  // 35
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 46
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 47
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 48
	BuildTraceFilter(Request& request); // 109
	CUtlMemory<PhysicsTrace_t, int>::CUtlMemory(
			PhysicsTrace_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<PhysicsTrace_t, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<PhysicsTrace_t, int>::CUtlMemoryFixedGrowable_Base(
					PhysicsTrace_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<128, PhysicsTrace_t, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<128, PhysicsTrace_t>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<128, PhysicsTrace_t, 8>::Base(); // 231
	CUtlMemoryFixedGrowable<PhysicsTrace_t, 128, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<PhysicsTrace_t, CUtlMemoryFixedGrowable<PhysicsTrace_t, 128, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<PhysicsTrace_t, CUtlMemoryFixedGrowable<PhysicsTrace_t, 128, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<PhysicsTrace_t, 128>::CUtlVectorFixedGrowable(
				int growSize);  // 110
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 114
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 114
	CUtlVectorBase<PhysicsTrace_t, CUtlMemoryFixedGrowable<PhysicsTrace_t, 128, int> >::Count(); // 137
	CUtlMemory<PhysicsTrace::Result, int>::IsGrowable(); // 881
	CUtlMemory<PhysicsTrace::Result, int>::IsExternallyAllocated(); // 888
	CUtlMemory<PhysicsTrace::Result, int>::EnsureCapacity(
			int num);  // 1006
	CUtlVectorBase<PhysicsTrace::Result, CUtlMemory<PhysicsTrace::Result, int> >::ResetDbgInfo(); // 1024
	CUtlVectorBase<PhysicsTrace::Result, CUtlMemory<PhysicsTrace::Result, int> >::EnsureCapacity(
			int num);  // 137
	CUtlMemory<PhysicsTrace_t, int>::IsExternallyAllocated(); // 577
	CUtlMemory<PhysicsTrace_t, int>::ConvertToExternalMemory(
				PhysicsTrace_t* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<PhysicsTrace_t, int>::Purge_FixedGrowable(
				PhysicsTrace_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<PhysicsTrace_t, int>::Purge_FixedGrowable(
				PhysicsTrace_t* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	AlignedByteArrayExplicit_t<128, PhysicsTrace_t, 8>::Base(); // 237
	CUtlMemoryFixedGrowable<PhysicsTrace_t, 128, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<PhysicsTrace_t, CUtlMemoryFixedGrowable<PhysicsTrace_t, 128, int> >::RemoveAll(); // 1798
	CUtlMemory<PhysicsTrace_t, int>::Base(); // 112
	CUtlVectorBase<PhysicsTrace_t, CUtlMemoryFixedGrowable<PhysicsTrace_t, 128, int> >::Base(); // 368
	CUtlVectorBase<PhysicsTrace_t, CUtlMemoryFixedGrowable<PhysicsTrace_t, 128, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<PhysicsTrace_t, CUtlMemoryFixedGrowable<PhysicsTrace_t, 128, int> >::Purge(); // 560
	ValidateAlignment<PhysicsTrace_t>(void); // 508
	CUtlMemory<PhysicsTrace_t, int>::Purge(); // 903
	CUtlMemory<PhysicsTrace_t, int>::Purge(); // 510
	CUtlMemory<PhysicsTrace_t, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<PhysicsTrace_t, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<PhysicsTrace_t, 128, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<PhysicsTrace_t, CUtlMemoryFixedGrowable<PhysicsTrace_t, 128, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<PhysicsTrace_t, 128>::~CUtlVectorFixedGrowable(); // 144
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 128
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 128
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 118
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Vector(); // 1487
	Vector::Cross(
		const Vector& vOther);  // 2464
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2464
	Vector::Vector(); // 1487
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Cross(
		const Vector& vOther);  // 2464
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2464
	operator*(const Quaternion& q,
			const Vector& v);  // 119
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 119
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 120
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	Vector::Vector(); // 1487
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Cross(
		const Vector& vOther);  // 2464
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2464
	Vector::Vector(); // 1487
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Cross(
		const Vector& vOther);  // 2464
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2464
	operator*(const Quaternion& q,
			const Vector& v);  // 118
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 118
	Vector::operator=(
			const Vector& vOther);  // 118
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 119
	Vector::operator=(
			const Vector& vOther);  // 119
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 124
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 124
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 132
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 132
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 132
} /* size: 2370, variables: 3, inline expansions: 154 (3254 bytes) */

// <01763982> sbox/physics_trace.cpp:146
// variables: 3
// function calls: 122
void Trace(Request request)
{
	Ray_t ray; // 148
	RnQueryAttr_t attributes; // 149
	PhysicsTrace_t result; // 150
	RnQueryShapeAttr_t::RnQueryShapeAttr_t(); // 340
	RnQueryAttr_t::RnQueryAttr_t(); // 29
	RnQueryAttr_t::SetObjectSetMask(
			RnQueryObjectSet nObjectSetMask);  // 35
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 46
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 47
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 48
	BuildTraceFilter(Request& request); // 149
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 154
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 37
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 38
	PhysicsTrace_t::PhysicsTrace_t(); // 150
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 154
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 168
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 168
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 158
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Vector(); // 1487
	Vector::Cross(
		const Vector& vOther);  // 2464
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2464
	Vector::Vector(); // 1487
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Cross(
		const Vector& vOther);  // 2464
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2464
	operator*(const Quaternion& q,
			const Vector& v);  // 159
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Vector(); // 1487
	Vector::Cross(
		const Vector& vOther);  // 2464
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2464
	Vector::Vector(); // 1487
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Cross(
		const Vector& vOther);  // 2464
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2464
	operator*(const Quaternion& q,
			const Vector& v);  // 158
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 158
	Vector::operator=(
			const Vector& vOther);  // 158
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 159
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 159
	Vector::operator=(
			const Vector& vOther);  // 159
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 160
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 164
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 164
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 172
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 172
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 172
} /* size: 1495, variables: 3, inline expansions: 122 (1677 bytes) */

// <01761410> sbox/physics_trace.cpp:178
// variables: 11
// function calls: 176
void TraceAgainstShape(Request request, const Vector* pPoints, int nPoints, float flRadius)
{
	Ray_t ray; // 180
	PhysicsTrace_t result; // 182
	{
		const int  nNumSegments; // 195
		Vector pCylinderPoints; // 196
		{
			int i; // 198
			{
				float flAngle; // 200
				Vector vOffset; // 201
				Vector vBottom; // 202
				Vector vTop; // 203
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::Vector(); // 1450
				Vector::operator*(
						float fl);  // 201
				VectorAdd(const Vector& a,
						const Vector& b,
						Vector& c);  // 1437
				Vector::Vector(); // 1436
				Vector::operator+(
						const Vector& v);  // 202
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 201
				VectorAdd(const Vector& a,
						const Vector& b,
						Vector& c);  // 1437
				Vector::Vector(); // 1436
				Vector::operator+(
						const Vector& v);  // 203
				CrossProduct(const Vector& a,
						const Vector& b,
						Vector& result);  // 1488
				Vector::Vector(); // 1487
				Vector::Cross(
					const Vector& vOther);  // 2464
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::Vector(); // 1450
				Vector::operator*(
						float fl);  // 1478
				operator*(float fl,
						const Vector& v);  // 2464
				VectorAdd(const Vector& a,
						const Vector& b,
						Vector& c);  // 1437
				Vector::Vector(); // 1436
				Vector::operator+(
						const Vector& v);  // 2464
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 1853
				Quaternion::v(); // 2464
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 1853
				Quaternion::v(); // 2464
				Vector::Vector(); // 1487
				CrossProduct(const Vector& a,
						const Vector& b,
						Vector& result);  // 1488
				Vector::Cross(
					const Vector& vOther);  // 2464
				Vector::Vector(); // 1450
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::operator*(
						float fl);  // 1478
				operator*(float fl,
						const Vector& v);  // 2464
				Vector::Vector(); // 1436
				VectorAdd(const Vector& a,
						const Vector& b,
						Vector& c);  // 1437
				Vector::operator+(
						const Vector& v);  // 2464
				operator*(const Quaternion& q,
						const Vector& v);  // 205
				CrossProduct(const Vector& a,
						const Vector& b,
						Vector& result);  // 1488
				Vector::Vector(); // 1487
				Vector::Cross(
					const Vector& vOther);  // 2464
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::Vector(); // 1450
				Vector::operator*(
						float fl);  // 1478
				operator*(float fl,
						const Vector& v);  // 2464
				VectorAdd(const Vector& a,
						const Vector& b,
						Vector& c);  // 1437
				Vector::Vector(); // 1436
				Vector::operator+(
						const Vector& v);  // 2464
				CrossProduct(const Vector& a,
						const Vector& b,
						Vector& result);  // 1488
				Vector::Vector(); // 1487
				Vector::Cross(
					const Vector& vOther);  // 2464
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 1853
				Quaternion::v(); // 2464
				Vector::Vector(
					vec_t X,
					vec_t Y,
					vec_t Z);  // 1853
				Quaternion::v(); // 2464
				Vector::Vector(); // 1450
				VectorMultiply(const Vector& a,
						vec_t b,
						Vector& c);  // 1451
				Vector::operator*(
						float fl);  // 1478
				operator*(float fl,
						const Vector& v);  // 2464
				Vector::Vector(); // 1436
				VectorAdd(const Vector& a,
						const Vector& b,
						Vector& c);  // 1437
				Vector::operator+(
						const Vector& v);  // 2464
				operator*(const Quaternion& q,
						const Vector& v);  // 204
				Vector::operator=(
						const Vector& vOther);  // 204
				Vector::operator=(
						const Vector& vOther);  // 205
			}
		}
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 208
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 208
	}
	{
		Vector v; // 216
		Vector pBoxPoints; // 217
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		_mm_cvtss_f32(__m128 __A); // 1496
		GetXSIMD<>(fltx4 a); // 74
		VectorAligned::x(); // 40
		_mm_cvtss_f32(__m128 __A); // 1515
		GetYSIMD<>(fltx4 a); // 75
		VectorAligned::y(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 216
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 223
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 223
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 223
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 223
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 223
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 223
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 223
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 223
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 225
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 225
	}
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 191
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 191
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 212
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 212
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Vector(); // 1487
	Vector::Cross(
		const Vector& vOther);  // 2464
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2464
	Vector::Vector(); // 1487
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Cross(
		const Vector& vOther);  // 2464
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2464
	operator*(const Quaternion& q,
			const Vector& v);  // 190
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Vector(); // 1487
	Vector::Cross(
		const Vector& vOther);  // 2464
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2464
	Vector::Vector(); // 1487
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Cross(
		const Vector& vOther);  // 2464
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2464
	operator*(const Quaternion& q,
			const Vector& v);  // 189
	Vector::operator=(
			const Vector& vOther);  // 189
	Vector::operator=(
			const Vector& vOther);  // 190
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 38
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 37
	PhysicsTrace_t::PhysicsTrace_t(); // 182
} /* size: 2166, variables: 2, inline expansions: 75 (1667 bytes) */

// <0176061A> sbox/physics_trace.cpp:231
// variables: 2
// function calls: 67
void TraceAgainstCapsule(Request request, RnCapsule_t capsule, CTransform tx)
{
	Vector position; // 233
	Quaternion rotation; // 234
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Vector(); // 1487
	Vector::Cross(
		const Vector& vOther);  // 2464
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2464
	Vector::Vector(); // 1487
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Cross(
		const Vector& vOther);  // 2464
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2464
	operator*(const Quaternion& q,
			const Vector& v);  // 236
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Vector(); // 1487
	Vector::Cross(
		const Vector& vOther);  // 2464
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2464
	Vector::Vector(); // 1487
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Cross(
		const Vector& vOther);  // 2464
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2464
	operator*(const Quaternion& q,
			const Vector& v);  // 237
	VectorAligned::operator fltx4(); // 71
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 233
	QuaternionAligned::w(); // 41
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 41
	QuaternionAligned::operator Quaternion(); // 350
	CTransform::ToQuaternion(); // 234
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 233
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 236
	Vector::operator=(
			const Vector& vOther);  // 236
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 237
	Vector::operator=(
			const Vector& vOther);  // 237
} /* size: 590, variables: 2, inline expansions: 67 (1444 bytes) */

// <0176034C> sbox/physics_trace.cpp:242
// variable: 1
// function calls: 11
void TraceAgainstSphere(Request request, RnSphere_t sphere, CTransform tx)
{
	Vector point; // 244
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 244
	VectorAligned::operator fltx4(); // 71
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 244
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 40
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 244
} /* size: 159, variables: 1, inline expansions: 11 (56 bytes) */

// <0175D98D> sbox/physics_trace.cpp:249
// variables: 5
// function calls: 192
void TraceAgainstBBox(Request request, AABB_t aabb, CTransform tx)
{
	Vector position; // 251
	Quaternion rotation; // 252
	const Vector& min; // 254
	const Vector& max; // 255
	Vector pPoints; // 257
	VectorAligned::operator fltx4(); // 71
	VectorAligned::VectorAligned(
			fltx4 rhs);  // 71
	CTransform::GetOrigin(); // 251
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 40
	VectorAligned::operator Vector(); // 251
	QuaternionAligned::w(); // 41
	Quaternion::Quaternion(
			vec_t ix,
			vec_t iy,
			vec_t iz,
			vec_t iw);  // 41
	QuaternionAligned::operator Quaternion(); // 350
	CTransform::ToQuaternion(); // 252
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Vector(); // 1487
	Vector::Cross(
		const Vector& vOther);  // 2464
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2464
	Vector::Vector(); // 1487
	CrossProduct(const Vector& a,
			const Vector& b,
			Vector& result);  // 1488
	Vector::Cross(
		const Vector& vOther);  // 2464
	Vector::Vector(); // 1450
	VectorMultiply(const Vector& a,
			vec_t b,
			Vector& c);  // 1451
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 2464
	operator*(const Quaternion& q,
			const Vector& v);  // 259
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 259
	Vector::Vector(); // 1436
	VectorAdd(const Vector& a,
			const Vector& b,
			Vector& c);  // 1437
	Vector::operator+(
			const Vector& v);  // 259
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 260
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	Vector::Vector(); // 1487
	Vector::Cross(
		const Vector& vOther);  // 2464
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2464
	Vector::Vector(); // 1487
	Vector::Cross(
		const Vector& vOther);  // 2464
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2464
	operator*(const Quaternion& q,
			const Vector& v);  // 260
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 260
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 261
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	Vector::Vector(); // 1487
	Vector::Cross(
		const Vector& vOther);  // 2464
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2464
	Vector::Vector(); // 1487
	Vector::Cross(
		const Vector& vOther);  // 2464
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2464
	operator*(const Quaternion& q,
			const Vector& v);  // 261
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 261
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 262
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	Vector::Vector(); // 1487
	Vector::Cross(
		const Vector& vOther);  // 2464
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2464
	Vector::Vector(); // 1487
	Vector::Cross(
		const Vector& vOther);  // 2464
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2464
	operator*(const Quaternion& q,
			const Vector& v);  // 262
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 262
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 263
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	Vector::Vector(); // 1487
	Vector::Cross(
		const Vector& vOther);  // 2464
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2464
	Vector::Vector(); // 1487
	Vector::Cross(
		const Vector& vOther);  // 2464
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2464
	operator*(const Quaternion& q,
			const Vector& v);  // 263
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 263
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 264
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	Vector::Vector(); // 1487
	Vector::Cross(
		const Vector& vOther);  // 2464
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2464
	Vector::Vector(); // 1487
	Vector::Cross(
		const Vector& vOther);  // 2464
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2464
	operator*(const Quaternion& q,
			const Vector& v);  // 264
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 264
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 265
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	Vector::Vector(); // 1487
	Vector::Cross(
		const Vector& vOther);  // 2464
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2464
	Vector::Vector(); // 1487
	Vector::Cross(
		const Vector& vOther);  // 2464
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2464
	operator*(const Quaternion& q,
			const Vector& v);  // 265
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 265
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 266
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 1853
	Quaternion::v(); // 2464
	Vector::Vector(); // 1487
	Vector::Cross(
		const Vector& vOther);  // 2464
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2464
	Vector::Vector(); // 1487
	Vector::Cross(
		const Vector& vOther);  // 2464
	Vector::Vector(); // 1450
	Vector::operator*(
			float fl);  // 1478
	operator*(float fl,
			const Vector& v);  // 2464
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 2464
	operator*(const Quaternion& q,
			const Vector& v);  // 266
	Vector::Vector(); // 1436
	Vector::operator+(
			const Vector& v);  // 266
} /* size: 1057, variables: 5, inline expansions: 192 (2132 bytes) */

