
//
// ik/ikcontrolrigcontext_base.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 44
//

// <00148AB7> ik/ikcontrolrigcontext_base.cpp:20
bool VerifyInModifiablePhase(InterpolatedVarPhase_t currentPhase, const char* pMessage)
{
} /* size: 0 */

// <00148613> ik/ikcontrolrigcontext_base.cpp:33
// function calls: 16
void CIKControlRigContext_Base::CIKControlRigContext_Base(const CIKControlRigDescription_Base* pDescription)
{
	IIKControlRigContext::IIKControlRigContext(); // 34
	{
	}
	AlignedByteArrayExplicit_t<16, CIKChainContext, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<16, CIKChainContext>::AlignedByteArray_t(); // 228
	CUtlMemory<CIKChainContext, int>::CUtlMemory(
			CIKChainContext* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CIKChainContext, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CIKChainContext, int>::CUtlMemoryFixedGrowable_Base(
					CIKChainContext* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<16, CIKChainContext, 8>::Base(); // 231
	CUtlMemoryFixedGrowable<CIKChainContext, 16, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	CUtlVectorBase<CIKChainContext, CUtlMemoryFixedGrowable<CIKChainContext, 16, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CIKChainContext, CUtlMemoryFixedGrowable<CIKChainContext, 16, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CIKChainContext, 16>::CUtlVectorFixedGrowable(
				int growSize);  // 34
	CUtlMemory<CTraceRequest::ValidateGrowSize(); // 475
	CUtlMemory<CTraceRequest::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CTraceRequest::ResetDbgInfo(); // 530
	CUtlVectorBase<CTraceRequest::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CTraceRequest::CUtlVector(); // 34
} /* size: 152, inline expansions: 16 (331 bytes) */

// <001485EE> ik/ikcontrolrigcontext_base.cpp:33
void CIKControlRigContext_Base::CIKControlRigContext_Base(const CIKControlRigDescription_Base* pDescription)
{
} /* size: 0 */

// <00148036> ik/ikcontrolrigcontext_base.cpp:38
// variable: 1
// function calls: 27
void CIKControlRigContext_Base::~CIKControlRigContext_Base()
{
	{
		int i; // 1807
		CUtlMemory<CTraceRequest::operator[](
				int i);  // 602
		CUtlVectorBase<CTraceRequest::Element(
			int i);  // 1809
	}
	CUtlVectorBase<CTraceRequest::RemoveAll(); // 1798
	CUtlMemory<CTraceRequest::IsExternallyAllocated(); // 905
	CUtlMemory<CTraceRequest::Purge(); // 903
	CUtlMemory<CTraceRequest::Purge(); // 1799
	CUtlVectorBase<CTraceRequest::Purge(); // 1811
	CUtlVectorBase<CTraceRequest::PurgeAndDeleteElements(); // 40
	CUtlVectorBase<CTraceRequest::Purge(); // 560
	CUtlVectorBase<CTraceRequest::~CUtlVectorBase(); // 410
	CUtlVector<CTraceRequest::~CUtlVector(); // 41
	AlignedByteArrayExplicit_t<16, CIKChainContext, 8>::Base(); // 237
	CUtlMemory<CIKChainContext, int>::IsExternallyAllocated(); // 577
	CUtlMemory<CIKChainContext, int>::ConvertToExternalMemory(
				CIKChainContext* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 207
	CUtlMemoryFixedGrowable_Base<CIKChainContext, int>::Purge_FixedGrowable(
				CIKChainContext* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 203
	CUtlMemoryFixedGrowable_Base<CIKChainContext, int>::Purge_FixedGrowable(
				CIKChainContext* pFixedMemory,
				int nFixedElements,
				int nPurgeToCount);  // 237
	CUtlMemoryFixedGrowable<CIKChainContext, 16, int>::Purge(
		int numElements);  // 1799
	CUtlVectorBase<CIKChainContext, CUtlMemoryFixedGrowable<CIKChainContext, 16, int> >::ResetDbgInfo(); // 1800
	CUtlVectorBase<CIKChainContext, CUtlMemoryFixedGrowable<CIKChainContext, 16, int> >::Purge(); // 560
	ValidateAlignment<CIKChainContext>(void); // 508
	CUtlMemory<CIKChainContext, int>::Purge(); // 903
	CUtlMemory<CIKChainContext, int>::Purge(); // 510
	CUtlMemory<CIKChainContext, int>::~CUtlMemory(); // 191
	CUtlMemoryFixedGrowable_Base<CIKChainContext, int>::~CUtlMemoryFixedGrowable_Base(); // 223
	CUtlMemoryFixedGrowable<CIKChainContext, 16, int>::~CUtlMemoryFixedGrowable(); // 562
	CUtlVectorBase<CIKChainContext, CUtlMemoryFixedGrowable<CIKChainContext, 16, int> >::~CUtlVectorBase(); // 478
	CUtlVectorFixedGrowable<CIKChainContext, 16>::~CUtlVectorFixedGrowable(); // 41
} /* size: 230, inline expansions: 25 (750 bytes) */

// <00147FCF> ik/ikcontrolrigcontext_base.cpp:38
void CIKControlRigContext_Base::~CIKControlRigContext_Base()
{
} /* size: 36 */

// <0014FDBB> ik/ikcontrolrigcontext_base.cpp:43
void CIKControlRigContext_Base::GetTiltBoneIndex()
{
} /* size: 17 */

// <0015155E> ik/ikcontrolrigcontext_base.cpp:48
// function calls: 3
void CIKControlRigContext_Base::SetTiltNormalGoal(CIKInterpolationState& interpolationState, InterpolatedVarPhase_t ivPhase, const Vector& vGoal)
{
	_DebuggerBreakInlineExpressionWrapper(void); // 23
	VerifyInModifiablePhase(InterpolatedVarPhase_t currentPhase,
				const char* pMessage);  // 50
	Vector::operator=(
			const Vector& vOther);  // 51
} /* size: 0, inline expansions: 3 (0 bytes) */

// <00147F60> ik/ikcontrolrigcontext_base.cpp:48
void CIKControlRigContext_Base::SetTiltNormalGoal(CIKInterpolationState& interpolationState, InterpolatedVarPhase_t ivPhase, const Vector& vGoal)
{
} /* size: 0 */

// <001470D9> ik/ikcontrolrigcontext_base.cpp:54
// variables: 11
// function calls: 60
void CIKControlRigContext_Base::Init(CIKInterpolationState& interpolationState, InterpolatedVarPhase_t ivPhase, HModel& hModel)
{
	int nNumChains; // 58
	{
		int nIkChainIndex; // 66
		{
			const CIKChainDescription* pIKChain; // 68
			CUtlLeanVectorImpl<CUtlLeanVectorBase<CIKChainDescription::Count(); // 28
			CUtlLeanVectorBase<CIKChainDescription::Base(); // 452
			CUtlLeanVectorImpl<CUtlLeanVectorBase<CIKChainDescription::Element(
				int i);  // 442
			CUtlLeanVectorImpl<CUtlLeanVectorBase<CIKChainDescription::operator[](
					int i);  // 33
			CIKControlRigDescription_Base::GetChain(
				int nChainIndex);  // 68
			CUtlMemory<CIKChainContext, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CIKChainContext, CUtlMemoryFixedGrowable<CIKChainContext, 16, int> >::operator[](
					int i);  // 69
			CUtlMemory<CIKChainInterpolationState, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::operator[](
					int i);  // 69
			CWeakHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 69
			VectorSubtract(const Vector& a,
					const Vector& b,
					Vector& c);  // 1444
			Vector::Vector(); // 1443
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
			VectorAligned::LengthSqr(); // 39
			VectorAligned::InitZero(); // 41
			VectorAligned::InitZero(); // 45
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
			CTraceRequest::CTraceRequest(); // 71
			CUtlMemory<CTraceRequest::operator[](
					int i);  // 588
			CUtlVectorBase<CTraceRequest::operator[](
					int i);  // 71
			CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 68
		}
	}
	CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 58
	CUtlLeanVectorImpl<CUtlLeanVectorBase<CIKChainDescription::Count(); // 24
	CIKControlRigDescription_Base::GetNumChains(); // 58
	CUtlMemory<CIKChainInterpolationState, int>::ValidateGrowSize(); // 475
	CUtlMemory<CIKChainInterpolationState, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::CUtlVector(); // 63
	CIKControlRigDescription_Base::GetInitialMasterBlendAmount(); // 77
	_DebuggerBreakInlineExpressionWrapper(void); // 23
	VerifyInModifiablePhase(InterpolatedVarPhase_t currentPhase,
				const char* pMessage);  // 409
	CIKControlRigContext_Base::SetMasterBlendAmount(
				CIKInterpolationState& interpolationState,
				InterpolatedVarPhase_t ivPhase,
				float flBlendAmount);  // 77
} /* size: 0, variables: 1, inline expansions: 12 (281 bytes) */

// <00146E55> ik/ikcontrolrigcontext_base.cpp:83
// variable: 1
// function calls: 8
void CIKControlRigContext_Base::Teardown(CIKInterpolationState& interpolationState, InterpolatedVarPhase_t ivPhase)
{
	{
		int nIkChainIndex; // 85
		CUtlVectorBase<CIKChainContext, CUtlMemoryFixedGrowable<CIKChainContext, 16, int> >::Count(); // 85
		CUtlMemory<CTraceRequest::operator[](
				int i);  // 588
		CUtlVectorBase<CTraceRequest::operator[](
				int i);  // 87
		CUtlMemory<CTraceRequest::operator[](
				int i);  // 588
		CUtlVectorBase<CTraceRequest::operator[](
				int i);  // 88
	}
	_DebuggerBreakInlineExpressionWrapper(void); // 23
	VerifyInModifiablePhase(InterpolatedVarPhase_t currentPhase,
				const char* pMessage);  // 409
	CIKControlRigContext_Base::SetMasterBlendAmount(
				CIKInterpolationState& interpolationState,
				InterpolatedVarPhase_t ivPhase,
				float flBlendAmount);  // 91
} /* size: 0, inline expansions: 3 (155 bytes) */

// <00146D4E> ik/ikcontrolrigcontext_base.cpp:95
// variables: 2
// function call: 1
void CIKControlRigContext_Base::SetChainBlendAmount(CIKInterpolationState& interpolationState, InterpolatedVarPhase_t ivPhase, const CUtlSymbolLarge& chainName, float flBlendAmount)
{
	const CIKChainContext* pChainContext; // 97
	CIKChainInterpolationState* pInterpolationState; // 98
	CUtlSymbolLarge::CUtlSymbolLarge(
			const CUtlSymbolLarge& sym);  // 100
} /* size: 92, variables: 2, inline expansions: 1 (20 bytes) */

// <0014FDEA> ik/ikcontrolrigcontext_base.cpp:108
// function call: 1
void CIKControlRigContext_Base::GetMasterBlendAmount(const CIKInterpolationState& interpolationState)
{
	ConVar::GetFloat(); // 110
} /* size: 38, inline expansions: 1 (12 bytes) */

// <00146D29> ik/ikcontrolrigcontext_base.cpp:108
void CIKControlRigContext_Base::GetMasterBlendAmount(const CIKInterpolationState& interpolationState)
{
} /* size: 0 */

// <00146BE0> ik/ikcontrolrigcontext_base.cpp:118
// function calls: 4
void CIKControlRigContext_Base::RestoreMasterBlendAmountToDefault(CIKInterpolationState& interpolationState, InterpolatedVarPhase_t ivPhase)
{
	CIKControlRigDescription_Base::GetInitialMasterBlendAmount(); // 120
	_DebuggerBreakInlineExpressionWrapper(void); // 23
	VerifyInModifiablePhase(InterpolatedVarPhase_t currentPhase,
				const char* pMessage);  // 409
	CIKControlRigContext_Base::SetMasterBlendAmount(
				CIKInterpolationState& interpolationState,
				InterpolatedVarPhase_t ivPhase,
				float flBlendAmount);  // 120
} /* size: 0, inline expansions: 4 (202 bytes) */

// <00151663> ik/ikcontrolrigcontext_base.cpp:123
// variables: 2
// function calls: 15
void CIKControlRigContext_Base::GetChainContextAndInterpolationState(CIKInterpolationState& interpolationState, InterpolatedVarPhase_t currentPhase, CUtlSymbolLarge chainName, const CIKChainContext *& pIKChainContext, CIKChainInterpolationState *& pIKChainInterpolationState)
{
	int nIndex; // 132
	_DebuggerBreakInlineExpressionWrapper(void); // 23
	VerifyInModifiablePhase(InterpolatedVarPhase_t currentPhase,
				const char* pMessage);  // 127
	{
		int nChainIndex; // 166
		CUtlVectorBase<CIKChainContext, CUtlMemoryFixedGrowable<CIKChainContext, 16, int> >::Count(); // 166
		CUtlMemory<CIKChainContext, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CIKChainContext, CUtlMemoryFixedGrowable<CIKChainContext, 16, int> >::operator[](
				int i);  // 168
		CUtlSymbolLarge::operator==(
				const CUtlSymbolLarge& src);  // 168
	}
	CIKControlRigContext_Base::GetChainIndex(
			const CUtlSymbolLarge& chainName);  // 132
	VerifyInModifiablePhase(InterpolatedVarPhase_t currentPhase,
				const char* pMessage);  // 140
	CUtlMemory<CIKChainContext, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CIKChainContext, CUtlMemoryFixedGrowable<CIKChainContext, 16, int> >::operator[](
			int i);  // 147
	CUtlMemory<CIKChainInterpolationState, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::operator[](
			int i);  // 148
	CIKControlRigContext_Base::GetChainContextAndInterpolationState(
						CIKInterpolationState& interpolationState,
						InterpolatedVarPhase_t currentPhase,
						int nChainIndex,
						const CIKChainContext  *& pIKChainContext,
						CIKChainInterpolationState *& pIKChainInterpolationState);  // 136
	CIKControlRigContext_Base::GetChainContextAndInterpolationState(
						CIKInterpolationState& interpolationState,
						InterpolatedVarPhase_t currentPhase,
						int nChainIndex,
						const CIKChainContext  *& pIKChainContext,
						CIKChainInterpolationState *& pIKChainInterpolationState);  // 133
	CIKControlRigContext_Base::GetChainContextAndInterpolationState(
						CIKInterpolationState& interpolationState,
						InterpolatedVarPhase_t currentPhase,
						CUtlSymbolLarge chainName,
						const CIKChainContext  *& pIKChainContext,
						CIKChainInterpolationState *& pIKChainInterpolationState);  // 123
} /* size: 0, variables: 1, inline expansions: 11 (316 bytes) */

// <00146B7F> ik/ikcontrolrigcontext_base.cpp:123
// variable: 1
void CIKControlRigContext_Base::GetChainContextAndInterpolationState(CIKInterpolationState& interpolationState, InterpolatedVarPhase_t currentPhase, CUtlSymbolLarge chainName, const CIKChainContext *& pIKChainContext, CIKChainInterpolationState *& pIKChainInterpolationState)
{
	int nIndex; // 132
} /* size: 0, variables: 1 */

// <00151A7D> ik/ikcontrolrigcontext_base.cpp:136
// function calls: 7
void CIKControlRigContext_Base::GetChainContextAndInterpolationState(CIKInterpolationState& interpolationState, InterpolatedVarPhase_t currentPhase, int nChainIndex, const CIKChainContext *& pIKChainContext, CIKChainInterpolationState *& pIKChainInterpolationState)
{
	_DebuggerBreakInlineExpressionWrapper(void); // 23
	VerifyInModifiablePhase(InterpolatedVarPhase_t currentPhase,
				const char* pMessage);  // 140
	CUtlMemory<CIKChainContext, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CIKChainContext, CUtlMemoryFixedGrowable<CIKChainContext, 16, int> >::operator[](
			int i);  // 147
	CUtlMemory<CIKChainInterpolationState, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::operator[](
			int i);  // 148
	CIKControlRigContext_Base::GetChainContextAndInterpolationState(
						CIKInterpolationState& interpolationState,
						InterpolatedVarPhase_t currentPhase,
						int nChainIndex,
						const CIKChainContext  *& pIKChainContext,
						CIKChainInterpolationState *& pIKChainInterpolationState);  // 136
} /* size: 0, inline expansions: 7 (0 bytes) */

// <00146B2A> ik/ikcontrolrigcontext_base.cpp:136
void CIKControlRigContext_Base::GetChainContextAndInterpolationState(CIKInterpolationState& interpolationState, InterpolatedVarPhase_t currentPhase, int nChainIndex, const CIKChainContext *& pIKChainContext, CIKChainInterpolationState *& pIKChainInterpolationState)
{
} /* size: 0 */

// <00151C9A> ik/ikcontrolrigcontext_base.cpp:152
// function calls: 5
void CIKControlRigContext_Base::GetChainContextAndInterpolationState(const CIKInterpolationState& interpolationState, int nChainIndex, const CIKChainContext *& pIKChainContext, const CIKChainInterpolationState *& pIKChainInterpolationState)
{
	CUtlMemory<CIKChainContext, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CIKChainContext, CUtlMemoryFixedGrowable<CIKChainContext, 16, int> >::operator[](
			int i);  // 147
	CUtlMemory<CIKChainInterpolationState, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::operator[](
			int i);  // 148
	CIKControlRigContext_Base::GetChainContextAndInterpolationState(
						CIKInterpolationState& interpolationState,
						InterpolatedVarPhase_t currentPhase,
						int nChainIndex,
						const CIKChainContext  *& pIKChainContext,
						CIKChainInterpolationState *& pIKChainInterpolationState);  // 136
} /* size: 0, inline expansions: 5 (0 bytes) */

// <00146AE1> ik/ikcontrolrigcontext_base.cpp:152
void CIKControlRigContext_Base::GetChainContextAndInterpolationState(const CIKInterpolationState& interpolationState, int nChainIndex, const CIKChainContext *& pIKChainContext, const CIKChainInterpolationState *& pIKChainInterpolationState)
{
} /* size: 0 */

// <00151E18> ik/ikcontrolrigcontext_base.cpp:164
// variable: 1
// function calls: 4
void CIKControlRigContext_Base::GetChainIndex(const CUtlSymbolLarge& chainName)
{
	{
		int nChainIndex; // 166
		CUtlVectorBase<CIKChainContext, CUtlMemoryFixedGrowable<CIKChainContext, 16, int> >::Count(); // 166
		CUtlSymbolLarge::operator==(
				const CUtlSymbolLarge& src);  // 168
		CUtlMemory<CIKChainContext, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CIKChainContext, CUtlMemoryFixedGrowable<CIKChainContext, 16, int> >::operator[](
				int i);  // 168
	}
} /* size: 0 */

// <00146AAE> ik/ikcontrolrigcontext_base.cpp:164
// variable: 1
void CIKControlRigContext_Base::GetChainIndex(const CUtlSymbolLarge& chainName)
{
	{
		int nChainIndex; // 166
	}
} /* size: 0 */

// <001469A7> ik/ikcontrolrigcontext_base.cpp:176
// variables: 2
// function call: 1
void CIKControlRigContext_Base::SetIKLockRotationAlpha(CIKInterpolationState& interpolationState, InterpolatedVarPhase_t ivPhase, const CUtlSymbolLarge& ikChainName, float flAlpha)
{
	const CIKChainContext* pChainContext; // 178
	CIKChainInterpolationState* pInterpolationState; // 179
	CUtlSymbolLarge::CUtlSymbolLarge(
			const CUtlSymbolLarge& sym);  // 181
} /* size: 101, variables: 2, inline expansions: 1 (20 bytes) */

// <001466E1> ik/ikcontrolrigcontext_base.cpp:192
// variables: 3
// function calls: 9
void CIKControlRigContext_Base::Invalidate(CIKInterpolationState& interpolationState, InterpolatedVarPhase_t ivPhase)
{
	{
		int n; // 196
		{
			const CIKChainContext* pChainContext; // 198
			CIKChainInterpolationState* pInterpolationState; // 199
			_DebuggerBreakInlineExpressionWrapper(void); // 23
			VerifyInModifiablePhase(InterpolatedVarPhase_t currentPhase,
						const char* pMessage);  // 140
			CUtlMemory<CIKChainContext, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CIKChainContext, CUtlMemoryFixedGrowable<CIKChainContext, 16, int> >::operator[](
					int i);  // 147
			CUtlMemory<CIKChainInterpolationState, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::operator[](
					int i);  // 148
			CIKControlRigContext_Base::GetChainContextAndInterpolationState(
								CIKInterpolationState& interpolationState,
								InterpolatedVarPhase_t currentPhase,
								int nChainIndex,
								const CIKChainContext  *& pIKChainContext,
								CIKChainInterpolationState *& pIKChainInterpolationState);  // 136
			CIKControlRigContext_Base::GetChainContextAndInterpolationState(
								CIKInterpolationState& interpolationState,
								InterpolatedVarPhase_t currentPhase,
								int nChainIndex,
								const CIKChainContext  *& pIKChainContext,
								CIKChainInterpolationState *& pIKChainInterpolationState);  // 201
		}
		CUtlVectorBase<CIKChainContext, CUtlMemoryFixedGrowable<CIKChainContext, 16, int> >::Count(); // 196
	}
} /* size: 0 */

// <00146660> ik/ikcontrolrigcontext_base.cpp:210
void CIKControlRigContext_Base::OnTeleported(CIKInterpolationState& interpolationState, InterpolatedVarPhase_t ivPhase)
{
} /* size: 34 */

// <001464D1> ik/ikcontrolrigcontext_base.cpp:215
// variables: 4
// function calls: 6
void CIKControlRigContext_Base::AreAnyChainsEnabled()
{
	{
		const CIKChainContext& ikChainContext; // 218
		const CUtlVectorFixedGrowable<CIKChainContext, 16>& __for_range; // 52587
		const_iterator __for_begin; // 44771
		const_iterator __for_end; // 44771
		CUtlMemory<CIKChainContext, int>::Base(); // 113
		CUtlVectorBase<CIKChainContext, CUtlMemoryFixedGrowable<CIKChainContext, 16, int> >::Base(); // 103
		CUtlVectorBase<CIKChainContext, CUtlMemoryFixedGrowable<CIKChainContext, 16, int> >::begin(); // 218
		CUtlVectorBase<CIKChainContext, CUtlMemoryFixedGrowable<CIKChainContext, 16, int> >::Count(); // 105
		CUtlVectorBase<CIKChainContext, CUtlMemoryFixedGrowable<CIKChainContext, 16, int> >::end(); // 218
		CIKChainContext::GetIsEnabled(); // 220
	}
} /* size: 56 */

// <0014FEE2> ik/ikcontrolrigcontext_base.cpp:229
// function calls: 6
void CIKControlRigContext_Base::IsChainEnabled(int nChainIndex)
{
	CUtlVectorBase<CIKChainContext, CUtlMemoryFixedGrowable<CIKChainContext, 16, int> >::Count(); // 231
	{
	}
	CUtlVectorBase<CIKChainContext, CUtlMemoryFixedGrowable<CIKChainContext, 16, int> >::Count(); // 233
	CUtlMemory<CIKChainContext, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CIKChainContext, CUtlMemoryFixedGrowable<CIKChainContext, 16, int> >::operator[](
			int i);  // 235
	CIKChainContext::GetIsEnabled(); // 235
	CIKControlRigContext_Base::IsChainEnabled(
			int nChainIndex);  // 229
} /* size: 0, inline expansions: 6 (45 bytes) */

// <00146460> ik/ikcontrolrigcontext_base.cpp:229
// variables: 2
void CIKControlRigContext_Base::IsChainEnabled(int nChainIndex)
{
	const char   __FUNCTION__; // 43409
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 231
	}
} /* size: 0, variables: 1 */

// <0015028A> ik/ikcontrolrigcontext_base.cpp:241
// function calls: 8
void CIKControlRigContext_Base::SetChainEnabled(InterpolatedVarPhase_t ivPhase, int nChainIndex, bool bEnabled)
{
	_DebuggerBreakInlineExpressionWrapper(void); // 23
	VerifyInModifiablePhase(InterpolatedVarPhase_t currentPhase,
				const char* pMessage);  // 243
	CUtlVectorBase<CIKChainContext, CUtlMemoryFixedGrowable<CIKChainContext, 16, int> >::Count(); // 244
	{
	}
	CUtlVectorBase<CIKChainContext, CUtlMemoryFixedGrowable<CIKChainContext, 16, int> >::Count(); // 248
	CUtlMemory<CIKChainContext, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CIKChainContext, CUtlMemoryFixedGrowable<CIKChainContext, 16, int> >::operator[](
			int i);  // 250
	CIKChainContext::SetIsEnabled(
			bool bValue);  // 250
	CIKControlRigContext_Base::SetChainEnabled(
			InterpolatedVarPhase_t ivPhase,
			int nChainIndex,
			bool bEnabled);  // 241
} /* size: 0, inline expansions: 8 (150 bytes) */

// <001463D7> ik/ikcontrolrigcontext_base.cpp:241
// variables: 2
void CIKControlRigContext_Base::SetChainEnabled(InterpolatedVarPhase_t ivPhase, int nChainIndex, bool bEnabled)
{
	const char   __FUNCTION__; // 43436
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 244
	}
} /* size: 0, variables: 1 */

// <00146372> ik/ikcontrolrigcontext_base.cpp:254
// function call: 1
void CIKControlRigContext_Base::GetAbsOriginDropHeight()
{
	CIKControlRigDescription_Base::GetAbsOriginDropHeight(); // 256
} /* size: 42, inline expansions: 1 (5 bytes) */

// <001460FA> ik/ikcontrolrigcontext_base.cpp:259
// function calls: 6
void CIKControlRigContext_Base::Update(CIKInterpolationState& interpolationState, const CIKUpdateInputState& inputState, CIKUpdateOutputState& outputState)
{
	ConVar::GetFloat(); // 110
	CIKControlRigContext_Base::GetMasterBlendAmount(
				const CIKInterpolationState& interpolationState);  // 262
	CIKControlRigContext_Base::UpdateRigPreSolve(
				CIKInterpolationState& interpolationState,
				const CIKUpdateInputState& inputState,
				CSpaceAgnosticBoneAccessor& boneAccessor);  // 265
	Max<float>(const float& val1,
			const float& val2);  // 403
	CIKControlRigContext_Base::UpdateRigPostSolve(
				CIKInterpolationState& interpolationState,
				const CIKUpdateInputState& inputState,
				const CIKUpdateOutputState& outputState);  // 395
	CIKControlRigContext_Base::UpdateRigPostSolve(
				CIKInterpolationState& interpolationState,
				const CIKUpdateInputState& inputState,
				const CIKUpdateOutputState& outputState);  // 269
} /* size: 224, inline expansions: 6 (211 bytes) */

// <00151F4A> ik/ikcontrolrigcontext_base.cpp:273
void CIKControlRigContext_Base::UpdateRigPreSolve(CIKInterpolationState& interpolationState, const CIKUpdateInputState& inputState, CSpaceAgnosticBoneAccessor& boneAccessor)
{
} /* size: 0 */

// <001504A7> ik/ikcontrolrigcontext_base.cpp:273
// variables: 5
// function calls: 50
void CIKControlRigContext_Base::UpdateRigPreSolve(CIKInterpolationState& interpolationState, const CIKUpdateInputState& inputState, CSpaceAgnosticBoneAccessor& boneAccessor)
{
	{
		const float  flRawDeltaTime; // 290
		const float  flDeltaTime; // 291
		Vector vWsTiltNormalGoal; // 294
		CUtlVector<CTraceResult*, CUtlMemory<CTraceResult*, int> > allTraceResults; // 295
		{
		}
		CUtlVectorBase<CTraceResult::ResetDbgInfo(); // 530
		CUtlMemory<CTraceResult::ValidateGrowSize(); // 475
		CUtlMemory<CTraceResult::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CTraceResult::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CTraceResult::CUtlVector(); // 295
		CUtlVectorBase<CTraceRequest::Count(); // 296
		CUtlMemory<CTraceResult::IsExternallyAllocated(); // 888
		CUtlMemory<CTraceResult::EnsureCapacity(
				int num);  // 1006
		CUtlVectorBase<CTraceResult::ResetDbgInfo(); // 1024
		CUtlVectorBase<CTraceResult::EnsureCapacity(
				int num);  // 296
		{
			int n; // 297
			CUtlVectorBase<CTraceRequest::Count(); // 297
			CUtlMemory<CTraceResult::Base(); // 112
			CUtlVectorBase<CTraceResult::Base(); // 368
			CUtlVectorBase<CTraceResult::ResetDbgInfo(); // 824
			CUtlMemory<CTraceResult::IsGrowable(); // 823
			CUtlMemory<CTraceResult::IsExternallyAllocated(); // 859
			CUtlMemory<CTraceResult::IsExternallyAllocated(); // 861
			CUtlMemory<CTraceResult::Grow(
				int num);  // 806
			CUtlVectorBase<CTraceResult::GrowMemory(
					int num);  // 1249
			CUtlMemory<CTraceResult::operator[](
					int i);  // 602
			CUtlVectorBase<CTraceResult::Element(
				int i);  // 1252
			Construct<CTraceResult*, CTraceResult*>(CTraceResult** pMemory); // 1252
			CUtlMemory<CTraceResult::NumAllocated(); // 1247
			CUtlVectorBase<CTraceResult::AddToTail(
					CTraceResult *& src);  // 299
			CUtlMemory<CTraceRequest::operator[](
					int i);  // 595
			CUtlVectorBase<CTraceRequest::operator[](
					int i);  // 299
			CTraceRequest::GetLastTraceResult(); // 299
		}
		CSpaceAgnosticBoneAccessor::GetModelToWorld(); // 301
		VectorAligned::VectorAligned(
				fltx4 rhs);  // 71
		CTransform::GetOrigin(); // 301
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 40
		Vector::Vector(
			vec_t X,
			vec_t Y,
			vec_t Z);  // 40
		VectorAligned::operator Vector(); // 301
		_DebuggerBreakInlineExpressionWrapper(void); // 23
		VerifyInModifiablePhase(InterpolatedVarPhase_t currentPhase,
					const char* pMessage);  // 50
		Vector::operator=(
				const Vector& vOther);  // 51
		CIKControlRigContext_Base::SetTiltNormalGoal(
					CIKInterpolationState& interpolationState,
					InterpolatedVarPhase_t ivPhase,
					const Vector& vGoal);  // 302
		CIKControlRigDescription_Base::GetDefaultTiltSpringStrength(); // 305
		CUtlVectorBase<CTraceResult::RemoveAll(); // 1798
		CUtlMemory<CTraceResult::IsExternallyAllocated(); // 905
		CUtlMemory<CTraceResult::Purge(); // 903
		CUtlMemory<CTraceResult::Purge(); // 1799
		CUtlVectorBase<CTraceResult::Purge(); // 560
		ValidateAlignment<CTraceResult*>(void); // 508
		CUtlMemory<CTraceResult::Purge(); // 510
		CUtlMemory<CTraceResult::~CUtlMemory(); // 562
		CUtlVectorBase<CTraceResult::~CUtlVectorBase(); // 410
		CUtlVector<CTraceResult::~CUtlVector(); // 306
	}
} /* size: 0 */

// <00145FF5> ik/ikcontrolrigcontext_base.cpp:273
// variables: 6
void CIKControlRigContext_Base::UpdateRigPreSolve(CIKInterpolationState& interpolationState, const CIKUpdateInputState& inputState, CSpaceAgnosticBoneAccessor& boneAccessor)
{
	{
		const float  flRawDeltaTime; // 290
		const float  flDeltaTime; // 291
		Vector vWsTiltNormalGoal; // 294
		CUtlVector<CTraceResult*, CUtlMemory<CTraceResult*, int> > allTraceResults; // 295
		{
			const int  nMaxFrameCountDelta; // 280
		}
		{
			int n; // 297
		}
	}
} /* size: 0 */

// <001454EE> ik/ikcontrolrigcontext_base.cpp:309
// variables: 10
// function calls: 37
void CIKControlRigContext_Base::UpdateChainsAndSolve(CIKInterpolationState& interpolationState, const CIKUpdateInputState& inputState, CIKUpdateOutputState& outputState)
{
	const int  nTiltBone; // 312
	IAnimationDebugRenderer* pDebugRenderer; // 320
	const Quaternion  qWsTiltDeltaFromUp; // 322
	const float  flRawDeltaTime; // 324
	const float  flDeltaTime; // 325
	{
		int nIkChainIndex; // 334
		{
			const CIKChainContext* pChainContext; // 336
			CIKChainInterpolationState* pChainInterpolationStateMutable; // 337
			const CIKChainInterpolationState* pChainInterpolationStateConst; // 338
			CTransform xWsEndEffectorTarget; // 373
			_DebuggerBreakInlineExpressionWrapper(void); // 23
			VerifyInModifiablePhase(InterpolatedVarPhase_t currentPhase,
						const char* pMessage);  // 140
			CUtlMemory<CIKChainContext, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CIKChainContext, CUtlMemoryFixedGrowable<CIKChainContext, 16, int> >::operator[](
					int i);  // 147
			CUtlMemory<CIKChainInterpolationState, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::operator[](
					int i);  // 148
			CIKControlRigContext_Base::GetChainContextAndInterpolationState(
								CIKInterpolationState& interpolationState,
								InterpolatedVarPhase_t currentPhase,
								int nChainIndex,
								const CIKChainContext  *& pIKChainContext,
								CIKChainInterpolationState *& pIKChainInterpolationState);  // 136
			CIKControlRigContext_Base::GetChainContextAndInterpolationState(
								CIKInterpolationState& interpolationState,
								InterpolatedVarPhase_t currentPhase,
								int nChainIndex,
								const CIKChainContext  *& pIKChainContext,
								CIKChainInterpolationState *& pIKChainInterpolationState);  // 343
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 75
			CIKUpdateInputState::AreChainsBonesReadable(
						int nIKChainIndex);  // 345
			CIKChainContext::GetIsEnabled(); // 345
			CUtlMemory<CTraceRequest::operator[](
					int i);  // 595
			CUtlVectorBase<CTraceRequest::operator[](
					int i);  // 359
			CIKControlRigContext_Base::GetTiltNormal(
					const CIKInterpolationState& interpolationState);  // 351
			CUtlMemory<CTraceRequest::operator[](
					int i);  // 595
			CUtlVectorBase<CTraceRequest::operator[](
					int i);  // 377
			ConVar::GetInt(); // 351
			ConVar::GetBool(); // 381
			CUtlMemory<CIKChainContext, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CIKChainContext, CUtlMemoryFixedGrowable<CIKChainContext, 16, int> >::operator[](
					int i);  // 147
			CUtlMemory<CIKChainInterpolationState, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CIKChainInterpolationState, CUtlMemory<CIKChainInterpolationState, int> >::operator[](
					int i);  // 148
			CIKControlRigContext_Base::GetChainContextAndInterpolationState(
								CIKInterpolationState& interpolationState,
								InterpolatedVarPhase_t currentPhase,
								int nChainIndex,
								const CIKChainContext  *& pIKChainContext,
								CIKChainInterpolationState *& pIKChainInterpolationState);  // 136
			CIKControlRigContext_Base::GetChainContextAndInterpolationState(
								const CIKInterpolationState& interpolationState,
								int nChainIndex,
								const CIKChainContext  *& pIKChainContext,
								const CIKChainInterpolationState  *& pIKChainInterpolationState);  // 365
			BitVec_IsBitSet(const uint32* pBase,
					int nBitNum);  // 75
			CIKUpdateInputState::AreChainsBonesReadable(
						int nIKChainIndex);  // 367
			CIKChainContext::GetIsEnabled(); // 367
			CUtlMemory<CTraceRequest::operator[](
					int i);  // 595
			CUtlVectorBase<CTraceRequest::operator[](
					int i);  // 390
		}
		CUtlVectorBase<CIKChainContext, CUtlMemoryFixedGrowable<CIKChainContext, 16, int> >::Count(); // 334
	}
	CIKControlRigContext_Base::GetTiltBoneIndex(); // 312
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 315
	CIKControlRigContext_Base::GetTiltBoneIndex(); // 322
	CIKControlRigContext_Base::GetTiltNormalGoal(
				const CIKInterpolationState& interpolationState);  // 322
	ConVar::GetInt(); // 351
	ConVar::GetBool(); // 328
} /* size: 0, variables: 5, inline expansions: 7 (73 bytes) */

// <00151FCC> ik/ikcontrolrigcontext_base.cpp:395
// function calls: 2
void CIKControlRigContext_Base::UpdateRigPostSolve(CIKInterpolationState& interpolationState, const CIKUpdateInputState& inputState, const CIKUpdateOutputState& outputState)
{
	Max<float>(const float& val1,
			const float& val2);  // 403
	CIKControlRigContext_Base::UpdateRigPostSolve(
				CIKInterpolationState& interpolationState,
				const CIKUpdateInputState& inputState,
				const CIKUpdateOutputState& outputState);  // 395
} /* size: 0, inline expansions: 2 (0 bytes) */

// <001454AE> ik/ikcontrolrigcontext_base.cpp:395
void CIKControlRigContext_Base::UpdateRigPostSolve(CIKInterpolationState& interpolationState, const CIKUpdateInputState& inputState, const CIKUpdateOutputState& outputState)
{
} /* size: 0 */

// <00150066> ik/ikcontrolrigcontext_base.cpp:407
// function calls: 2
void CIKControlRigContext_Base::SetMasterBlendAmount(CIKInterpolationState& interpolationState, InterpolatedVarPhase_t ivPhase, float flBlendAmount)
{
	_DebuggerBreakInlineExpressionWrapper(void); // 23
	VerifyInModifiablePhase(InterpolatedVarPhase_t currentPhase,
				const char* pMessage);  // 409
} /* size: 0, inline expansions: 2 (89 bytes) */

// <0014546E> ik/ikcontrolrigcontext_base.cpp:407
void CIKControlRigContext_Base::SetMasterBlendAmount(CIKInterpolationState& interpolationState, InterpolatedVarPhase_t ivPhase, float flBlendAmount)
{
} /* size: 0 */

// <0015012B> ik/ikcontrolrigcontext_base.cpp:413
// function calls: 4
void CIKControlRigContext_Base::SetFreezeTiltNormal(CIKInterpolationState& interpolationState, InterpolatedVarPhase_t ivPhase, bool bFreeze)
{
	_DebuggerBreakInlineExpressionWrapper(void); // 23
	VerifyInModifiablePhase(InterpolatedVarPhase_t currentPhase,
				const char* pMessage);  // 415
	Vector::operator=(
			const Vector& vOther);  // 422
	CIKControlRigContext_Base::SetFreezeTiltNormal(
				CIKInterpolationState& interpolationState,
				InterpolatedVarPhase_t ivPhase,
				bool bFreeze);  // 413
} /* size: 0, inline expansions: 4 (121 bytes) */

// <0014542E> ik/ikcontrolrigcontext_base.cpp:413
void CIKControlRigContext_Base::SetFreezeTiltNormal(CIKInterpolationState& interpolationState, InterpolatedVarPhase_t ivPhase, bool bFreeze)
{
} /* size: 0 */

// <001520CF> ik/ikcontrolrigcontext_base.cpp:427
void CIKControlRigContext_Base::GetTiltNormal(const CIKInterpolationState& interpolationState)
{
} /* size: 0 */

// <0014FE3E> ik/ikcontrolrigcontext_base.cpp:439
void CIKControlRigContext_Base::OnPostIKSolved(CIKInterpolationState& interpolationState, const CIKUpdateInputState& inputState, const CIKUpdateOutputState& outputState, const CUtlVector<CTraceRequest*, CUtlMemory<CTraceRequest*, int> >& traceHelpers)
{
} /* size: 5 */

