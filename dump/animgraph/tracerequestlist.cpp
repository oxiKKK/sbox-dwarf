
//
// animgraph/tracerequestlist.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 7
//

// <00F61CF1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tracerequestlist.cpp:8
// variables: 9
// function calls: 42
void CTraceRequestList::CTraceRequestList(CSaveablePackedData& packedData, int nRequestCount)
{
	CRelativeOffset<CTraceRequest>::CRelativeOffset(); // 84
	CRelativeArray<CTraceRequest>::CRelativeArray(); // 8
	{
		uint32 i; // 160
		VectorAligned::InitZero(); // 41
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
				const Vector& src);  // 37
		VectorAligned::InitZero(); // 45
		Vector::Vector(); // 1443
		VectorSubtract(const Vector& a,
				const Vector& b,
				Vector& c);  // 1444
		Vector::operator-(
				const Vector& v);  // 37
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
		VectorAligned::LengthSqr(); // 39
		Ray_t::Init(
			const Vector& start,
			const Vector& end,
			float flRadius);  // 26
		VectorAligned::VectorAligned(); // 25
		VectorAligned::VectorAligned(); // 25
		VectorAligned::VectorAligned(); // 25
		VectorAligned::VectorAligned(); // 25
		Ray_t::Ray_t(
			const Vector& start,
			const Vector& end,
			float flRadius);  // 13
		CTraceResult::CTraceResult(); // 13
		CTraceRequest::CTraceRequest(); // 162
	}
	CPackedDataT<true>::AddArray<CTraceRequest>(
				uint32 count,
				CPackedHandle<CTraceRequest>* handleOut);  // 12
	CRelativeOffset<CTraceRequest>::SetOffset(
			const CTraceRequest* targetPtr);  // 20
	CRelativeOffset<CTraceRequest>::operator=(
			const CTraceRequest* targetPtr);  // 115
	CRelativeArray<CTraceRequest>::SetArray(
		const CTraceRequest* targetArray,
		int32 count);  // 12
	CTraceRequestList::CTraceRequestList(
				CSaveablePackedData& packedData,
				int nRequestCount);  // 8
} /* size: 322, inline expansions: 7 (612 bytes) */

// <00F61CBD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tracerequestlist.cpp:8
void CTraceRequestList::CTraceRequestList(CSaveablePackedData& packedData, int nRequestCount)
{
} /* size: 0 */

// <00F61C5A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tracerequestlist.cpp:17
// function call: 1
void CTraceRequestList::Count()
{
	CRelativeArray<CTraceRequest>::Count(); // 19
} /* size: 8, inline expansions: 1 (0 bytes) */

// <00F61ADF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tracerequestlist.cpp:23
// variables: 2
// function calls: 4
void CTraceRequestList::GetRequest(TraceRequestID requestID)
{
	const char   __FUNCTION__; // 37597
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 25
	}
	TraceRequestID::IsValid(); // 25
	{
	}
	CRelativeOffset<CTraceRequest>::IsValid(); // 30
	CRelativeOffset<CTraceRequest>::Get(); // 90
	CRelativeArray<CTraceRequest>::operator[](
			int index);  // 26
} /* size: 0, variables: 1, inline expansions: 4 (126 bytes) */

// <00F619CE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tracerequestlist.cpp:30
// function calls: 3
void CTraceRequestList::GetRequest(int index)
{
	{
	}
	CRelativeOffset<CTraceRequest>::IsValid(); // 30
	CRelativeOffset<CTraceRequest>::Get(); // 90
	CRelativeArray<CTraceRequest>::operator[](
			int index);  // 32
} /* size: 0, inline expansions: 3 (122 bytes) */

// <00F61853> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tracerequestlist.cpp:36
// variables: 2
// function calls: 4
void CTraceRequestList::GetRequest(TraceRequestID requestID)
{
	const char   __FUNCTION__; // 37597
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 38
	}
	TraceRequestID::IsValid(); // 38
	{
	}
	CRelativeOffset<CTraceRequest>::IsValid(); // 35
	CRelativeOffset<CTraceRequest>::Get(); // 97
	CRelativeArray<CTraceRequest>::operator[](
			int index);  // 39
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <00F61742> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/tracerequestlist.cpp:43
// function calls: 3
void CTraceRequestList::GetRequest(int index)
{
	{
	}
	CRelativeOffset<CTraceRequest>::IsValid(); // 35
	CRelativeOffset<CTraceRequest>::Get(); // 97
	CRelativeArray<CTraceRequest>::operator[](
			int index);  // 45
} /* size: 0, inline expansions: 3 (0 bytes) */

