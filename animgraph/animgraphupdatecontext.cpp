
//
// animgraph/animgraphupdatecontext.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 73
//

// <015BC9D6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:22
void GetBaseMap(void)
{
} /* size: 0 */

// <015BC918> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:22
// variables: 2
datamap_t* DataMapInit<CAnimGraphUpdateContextBuilder>(CAnimGraphUpdateContextBuilder *)
{
	const char* pDataMapInit_className; // 22
	typedescription_t dataDesc; // 22
} /* size: 104, variables: 2 */

// <015BBDC0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:27
// function calls: 50
void CAnimGraphUpdateContext::CAnimGraphUpdateContext(const CAnimGraphInstanceContextPtr& pGraphContext, CFootMotionManager* pFootMotionMgr, IAnimGraphTraceProvider* pTraceProvider)
{
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 34
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimGraphInstanceContext>(CAnimGraphInstanceContext* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimGraphInstanceContext>(CAnimGraphInstanceContext* pObj); // 370
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator=(
			CAnimGraphInstanceContext* pObj);  // 406
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator=(
			const CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>& other);  // 328
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::CSmartPtr(
			const CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>& other);  // 31
	CSmartPtr<CPoseRecipe, CRefCountAccessor>::CSmartPtr(); // 34
	CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 472
	CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 106
	CUtlStack<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int> >::ResetDbgInfo(); // 108
	CUtlStack<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int> >::CUtlStack(
			int growSize,
			int initSize);  // 34
	CUtlMemory<CUtlHashtableEntry<const CAnimUpdateNodeBase::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<const CAnimUpdateNodeBase::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	CUtlHashtable<const CAnimUpdateNodeBase::Init(); // 178
	CUtlHashtable<const CAnimUpdateNodeBase::CUtlHashtable(
			int minimumSize);  // 34
	CUtlMemory<CUtlHashtableEntry<const CAnimUpdateNodeBase::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<const CAnimUpdateNodeBase::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	CUtlHashtable<const CAnimUpdateNodeBase::Init(); // 178
	CUtlHashtable<const CAnimUpdateNodeBase::CUtlHashtable(
			int minimumSize);  // 34
	CUtlMemory<AnimGraphOperation_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<AnimGraphOperation_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<AnimGraphOperation_t, CUtlMemory<AnimGraphOperation_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<AnimGraphOperation_t, CUtlMemory<AnimGraphOperation_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<AnimGraphOperation_t, CUtlMemory<AnimGraphOperation_t, int> >::CUtlVector(); // 34
	CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int this); // 530
	CUtlVectorBase(const CUtlVectorBase<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int> > this); // 34
	CUtlMemory<animevent_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<animevent_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<animevent_t, CUtlMemory<animevent_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<animevent_t, CUtlMemory<animevent_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<animevent_t, CUtlMemory<animevent_t, int> >::CUtlVector(); // 34
	CUtlMemory<CAnimGraphUpdateContext::AnimTagWithStatus, int>::ValidateGrowSize(); // 475
	CUtlMemory<CAnimGraphUpdateContext::AnimTagWithStatus, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CAnimGraphUpdateContext::AnimTagWithStatus, CUtlMemory<CAnimGraphUpdateContext::AnimTagWithStatus, i this); // 530
	CUtlVectorBase(const CUtlVectorBase<CAnimGraphUpdateContext::AnimTagWithStatus, CUtlMemory<CAnimGraphUpdateContext::AnimTagWithStatus, i this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CAnimGraphUpdateContext::AnimTagWithStatus, CUtlMemory<CAnimGraphUpdateContext::AnimTagWithStatus, int> this); // 34
} /* size: 461, inline expansions: 50 (1001 bytes) */

// <015BBD83> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:27
void CAnimGraphUpdateContext::CAnimGraphUpdateContext(const CAnimGraphInstanceContextPtr& pGraphContext, CFootMotionManager* pFootMotionMgr, IAnimGraphTraceProvider* pTraceProvider)
{
} /* size: 0 */

// <015D345D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:40
// function call: 1
void CAnimGraphUpdateContext::GetFixedData()
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 42
} /* size: 13, inline expansions: 1 (0 bytes) */

// <015BBD6A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:40
void CAnimGraphUpdateContext::GetFixedData()
{
} /* size: 0 */

// <015BBD51> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:46
void CAnimGraphUpdateContext::GetInstanceData()
{
} /* size: 0 */

// <015D34CF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:51
// function call: 1
void CAnimGraphUpdateContext::GetInstanceData()
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 53
} /* size: 0, inline expansions: 1 (0 bytes) */

// <015BBC0E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:57
// function calls: 4
void CAnimGraphUpdateContext::GetUpdateID()
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<PerTickSettings_t>(
					const CPackedHandle<PerTickSettings_t>& handle);  // 98
	CAnimGraphInstanceData::GetUpdateID(); // 59
} /* size: 80, inline expansions: 4 (40 bytes) */

// <015BB962> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:63
// variable: 1
// function calls: 11
void CAnimGraphUpdateContext::GetTimeStep()
{
	float flAdvance; // 65
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 103
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<PerTickSettings_t>(
					const CPackedHandle<PerTickSettings_t>& handle);  // 110
	CAnimGraphInstanceData::GetAnimTime(); // 103
	CAnimGraphUpdateContext::GetAnimTime(); // 65
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 109
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<PerTickSettings_t>(
					const CPackedHandle<PerTickSettings_t>& handle);  // 122
	CAnimGraphInstanceData::GetPrevAnimTime(); // 109
	CAnimGraphUpdateContext::GetPrevAnimTime(); // 65
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 66
} /* size: 171, variables: 1, inline expansions: 11 (191 bytes) */

// <015BB934> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:71
void CAnimGraphUpdateContext::GetCurrentWeight()
{
} /* size: 0 */

// <015BB906> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:77
void CAnimGraphUpdateContext::GetPlaybackSpeed()
{
} /* size: 13 */

// <015BB8D8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:83
void CAnimGraphUpdateContext::IsWaning()
{
} /* size: 12 */

// <015D59BD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:89
// function calls: 3
void CAnimGraphUpdateContext::GetParam(const CAnimParamHandle& handle)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 253
	CPackedDataBase::GetItem<CAnimUpdateParameterList>(
						const CPackedHandle<CAnimUpdateParameterList>& handle);  // 74
	CAnimGraphInstanceData::GetParameter(
			const CAnimParamHandle& handle);  // 91
} /* size: 105, inline expansions: 3 (55 bytes) */

// <015BB8B3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:89
void CAnimGraphUpdateContext::GetParam(const CAnimParamHandle& handle)
{
} /* size: 0 */

// <015BB72E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:95
// function calls: 4
void CAnimGraphUpdateContext::SetParam(const CAnimParamHandle& handle, const CAnimVariant& value)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 97
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 246
	CPackedDataBase::GetItem<CAnimUpdateParameterList>(
						const CPackedHandle<CAnimUpdateParameterList>& handle);  // 80
	CAnimGraphInstanceData::SetParameter(
			const CAnimParamHandle& handle,
			const CAnimVariant& value);  // 97
} /* size: 104, inline expansions: 4 (74 bytes) */

// <015D3541> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:101
// function calls: 4
void CAnimGraphUpdateContext::GetAnimTime()
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 103
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<PerTickSettings_t>(
					const CPackedHandle<PerTickSettings_t>& handle);  // 110
	CAnimGraphInstanceData::GetAnimTime(); // 103
} /* size: 82, inline expansions: 4 (40 bytes) */

// <015BB715> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:101
void CAnimGraphUpdateContext::GetAnimTime()
{
} /* size: 0 */

// <015D3666> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:107
// function calls: 4
void CAnimGraphUpdateContext::GetPrevAnimTime()
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 109
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<PerTickSettings_t>(
					const CPackedHandle<PerTickSettings_t>& handle);  // 122
	CAnimGraphInstanceData::GetPrevAnimTime(); // 109
} /* size: 82, inline expansions: 4 (40 bytes) */

// <015BB6FC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:107
void CAnimGraphUpdateContext::GetPrevAnimTime()
{
} /* size: 0 */

// <015BB5D2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:113
// function calls: 4
void CAnimGraphUpdateContext::IsEditor()
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 115
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<PerTickSettings_t>(
					const CPackedHandle<PerTickSettings_t>& handle);  // 172
	CAnimGraphInstanceData::IsEditor(); // 115
} /* size: 0, inline expansions: 4 (0 bytes) */

// <015BB344> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:119
// function calls: 10
void CAnimGraphUpdateContext::GetTagStatus(int index)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 123
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CAnimUpdateTagList>(
					const CPackedHandle<CAnimUpdateTagList>& handle);  // 86
	CAnimGraphInstanceData::GetTagList(); // 123
	CRelativeArray<TagStatus>::Count(); // 39
	CRelativeOffset<TagStatus>::IsValid(); // 35
	CRelativeOffset<TagStatus>::Get(); // 97
	CRelativeArray<TagStatus>::operator[](
			int index);  // 41
	CAnimUpdateTagList::GetTagPrevStatus(
			int index);  // 37
	CAnimUpdateTagList::GetTagPrevStatus(
			int index);  // 123
} /* size: 162, inline expansions: 10 (171 bytes) */

// <015BB112> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:127
// function calls: 8
void CAnimGraphUpdateContext::GetTagStatusImmediate(int index)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 129
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CAnimUpdateTagList>(
					const CPackedHandle<CAnimUpdateTagList>& handle);  // 86
	CAnimGraphInstanceData::GetTagList(); // 129
	{
	}
	CRelativeOffset<TagStatus>::IsValid(); // 35
	CRelativeOffset<TagStatus>::Get(); // 97
	CRelativeArray<TagStatus>::operator[](
			int index);  // 33
	CAnimUpdateTagList::GetTagStatus(
			int index);  // 129
} /* size: 0, inline expansions: 8 (262 bytes) */

// <015D378B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:133
// function calls: 4
void CAnimGraphUpdateContext::GetLocalToWorldTransform()
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 135
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<PerTickSettings_t>(
					const CPackedHandle<PerTickSettings_t>& handle);  // 195
	CAnimGraphInstanceData::GetPreviousLocalToWorldTransform(); // 135
} /* size: 81, inline expansions: 4 (44 bytes) */

// <015BB0F9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:133
void CAnimGraphUpdateContext::GetLocalToWorldTransform()
{
} /* size: 0 */

// <015BA85B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:139
// variables: 8
// function calls: 33
void CAnimGraphUpdateContext::GetValue(AnimValueSource valueSource, const CAnimParamHandle& paramIndex)
{
	float paramValue; // 141
	const CAnimMovementUpdater* pMoveUpdater; // 144
	const char   __FUNCTION__; // 35220
	{
		float flMoveDist; // 161
		float flLastTimeStep; // 162
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 161
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 267
		CPackedDataBase::operator[]<PerTickSettings_t>(
						const CPackedHandle<PerTickSettings_t>& handle);  // 207
		CAnimGraphInstanceData::GetRootMotion(); // 161
		_mm_load_ss(const float* __P); // 21
		_mm_sqrt_ss(__m128 __A); // 21
		_mm_cvtss_f32(__m128 __A); // 21
		FastSqrt(float x); // 1249
		VectorLength(const Vector& v); // 1256
		Vector::Length(); // 161
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 162
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 267
		CPackedDataBase::operator[]<PerTickSettings_t>(
						const CPackedHandle<PerTickSettings_t>& handle);  // 134
		CAnimGraphInstanceData::GetLastTimeStep(); // 162
	}
	{
		float flTurnAmount; // 172
		float flLastTimeStep; // 173
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 172
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 267
		CPackedDataBase::operator[]<PerTickSettings_t>(
						const CPackedHandle<PerTickSettings_t>& handle);  // 207
		CAnimGraphInstanceData::GetRootMotion(); // 172
		CRotation::operator float(); // 172
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 173
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 267
		CPackedDataBase::operator[]<PerTickSettings_t>(
						const CPackedHandle<PerTickSettings_t>& handle);  // 134
		CAnimGraphInstanceData::GetLastTimeStep(); // 173
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 218
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 144
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<CAnimMovementUpdater>(
					const CPackedHandle<CAnimMovementUpdater>& handle);  // 147
	CAnimGraphFixedData::GetMovementUpdater(); // 144
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 91
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 253
	CPackedDataBase::GetItem<CAnimUpdateParameterList>(
						const CPackedHandle<CAnimUpdateParameterList>& handle);  // 74
	CAnimGraphInstanceData::GetParameter(
			const CAnimParamHandle& handle);  // 91
	CAnimGraphUpdateContext::GetParam(
		const CAnimParamHandle& handle);  // 155
	CAnimVariant::GetValue<float>(
			float& value);  // 155
} /* size: 0, variables: 3, inline expansions: 10 (150 bytes) */

// <015B8FA4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:226
// variables: 41
// function calls: 103
void CAnimGraphUpdateContext::GetVectorValue(AnimVectorSource valueSource, const CAnimParamHandle& paramIndex)
{
	Vector targetVector; // 228
	const CAnimMovementUpdater* pMoveUpdater; // 231
	const char   __FUNCTION__; // 35382
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 249
	}
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 228
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 231
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<CAnimMovementUpdater>(
					const CPackedHandle<CAnimMovementUpdater>& handle);  // 147
	CAnimGraphFixedData::GetMovementUpdater(); // 231
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 244
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<PerTickSettings_t>(
					const CPackedHandle<PerTickSettings_t>& handle);  // 207
	CAnimGraphInstanceData::GetRootMotion(); // 244
	Vector::operator=(
			const Vector& vOther);  // 244
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 135
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<PerTickSettings_t>(
					const CPackedHandle<PerTickSettings_t>& handle);  // 195
	CAnimGraphInstanceData::GetPreviousLocalToWorldTransform(); // 135
	CAnimGraphUpdateContext::GetLocalToWorldTransform(); // 245
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
			const VectorAligned& v);  // 448
	CTransform::RotateVectorByInverse(
				const VectorAligned& v0);  // 87
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
			float p3);  // 146
	VectorAligned::Init(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 31
	VectorAligned::VectorAligned(
			const Vector& rhs);  // 87
	_mm_cvtss_f32(__m128 __A); // 1534
	GetZSIMD<>(fltx4 a); // 76
	VectorAligned::z(); // 42
	Vector::Vector(
		vec_t X,
		vec_t Y,
		vec_t Z);  // 42
	VectorAligned::AsVector(); // 87
	CTransform::RotateVectorByInverse(
				const Vector& v0);  // 245
	Vector::operator=(
			const Vector& vOther);  // 245
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 91
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 253
	CPackedDataBase::GetItem<CAnimUpdateParameterList>(
						const CPackedHandle<CAnimUpdateParameterList>& handle);  // 74
	CAnimGraphInstanceData::GetParameter(
			const CAnimParamHandle& handle);  // 91
	CAnimGraphUpdateContext::GetParam(
		const CAnimParamHandle& handle);  // 240
	Vector::operator=(
			const Vector& vOther);  // 221
	CAnimVariant::GetValue<Vector>(
			Vector& value);  // 215
	CAnimVariant::GetValue<Vector>(
			Vector& value);  // 240
} /* size: 0, variables: 3, inline expansions: 62 (1262 bytes) */

// <015D38B0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:257
// function calls: 2
void CAnimGraphUpdateContext::GetModel()
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 259
	CWeakHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 259
} /* size: 75, inline expansions: 2 (12 bytes) */

// <015B8F8B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:257
void CAnimGraphUpdateContext::GetModel()
{
} /* size: 0 */

// <015B8E5F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:263
// function calls: 4
void CAnimGraphUpdateContext::HasAwakenFromDormant()
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 265
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<PerTickSettings_t>(
					const CPackedHandle<PerTickSettings_t>& handle);  // 148
	CAnimGraphInstanceData::HasAwakenFromDormant(); // 265
} /* size: 0, inline expansions: 4 (0 bytes) */

// <015B8D33> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:268
// function calls: 4
void CAnimGraphUpdateContext::HasTeleported()
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 270
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<PerTickSettings_t>(
					const CPackedHandle<PerTickSettings_t>& handle);  // 160
	CAnimGraphInstanceData::HasTeleported(); // 270
} /* size: 81, inline expansions: 4 (40 bytes) */

// <015B8AA6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:273
// function calls: 10
void CAnimGraphUpdateContext::GetPath()
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 275
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<CAnimMovementUpdater>(
					const CPackedHandle<CAnimMovementUpdater>& handle);  // 147
	CAnimGraphFixedData::GetMovementUpdater(); // 275
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CAnimPath>(
				const CPackedHandle<CAnimPath>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CAnimPath>(
				const CPackedHandle<CAnimPath>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CAnimPath>(
				const CPackedHandle<CAnimPath>& handle);  // 470
	CAnimMovementUpdater::GetPath(
		CAnimGraphUpdateContext& context);  // 275
} /* size: 125, inline expansions: 10 (149 bytes) */

// <015B8A8D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:278
void CAnimGraphUpdateContext::GetPath()
{
} /* size: 0 */

// <015B8800> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:283
// function calls: 10
void CAnimGraphUpdateContext::HasGoalChanged()
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 285
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<CAnimMovementUpdater>(
					const CPackedHandle<CAnimMovementUpdater>& handle);  // 147
	CAnimGraphFixedData::GetMovementUpdater(); // 285
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 494
	CAnimMovementUpdater::HasGoalChanged(
			const CAnimGraphUpdateContext& context);  // 285
} /* size: 129, inline expansions: 10 (149 bytes) */

// <015B8443> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:288
// variable: 1
// function calls: 11
void CAnimGraphUpdateContext::PushChildUpdate(const CAnimUpdateNodeBase* node, float fWeight, float fSpeed, EIsWaning eIsWaning, EShouldBlockTags eShouldBlockTags)
{
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 290
	}
	{
		{
			NodeUpdateDesc_t nodeUpdateDesc; // 297
			CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int>::NumAllocated(); // 1196
			CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int this,
				int i);  // 1201
			CopyConstruct<CAnimGraphUpdateContext::NodeUpdateDesc_t>(NodeUpdateDesc_t* pMemory,
										const NodeUpdateDesc_t& src);  // 1201
			CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int>::Base(); // 112
			Base(const CUtlVectorBase<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int this); // 368
			ResetDbgInfo(const CUtlVectorBase<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int this); // 824
			GrowMemory(const CUtlVectorBase<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int this,
					int num);  // 1198
			AddToTail(const CUtlVectorBase<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int this,
					const NodeUpdateDesc_t& src);  // 304
		}
		_DebuggerBreakInlineExpressionWrapper(void); // 295
	}
} /* size: 0 */

// <015B83E4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:309
// function call: 1
void CAnimGraphUpdateContext::GetPoseRecipe()
{
	CSmartPtr<CPoseRecipe, CRefCountAccessor>::operator*(); // 311
} /* size: 9, inline expansions: 1 (0 bytes) */

// <015B825A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:315
// function calls: 6
void CAnimGraphUpdateContext::AddReferenceToPose(PoseHandle hPose)
{
	CSmartPtr<CPoseRecipe, CRefCountAccessor>::operator->(); // 317
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::Count(); // 35
	CUtlMemory<CPoseRecipe::PoseOpDesc, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::operator[](
			int i);  // 37
	CPoseRecipe::AddReference(
			PoseHandle hPose);  // 33
	CPoseRecipe::AddReference(
			PoseHandle hPose);  // 317
} /* size: 40, inline expansions: 6 (75 bytes) */

// <015B822C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:321
void CAnimGraphUpdateContext::SetBlockWaningTags()
{
} /* size: 0 */

// <015D5E6D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:328
// function calls: 5
void CAnimGraphUpdateContext::PushTagActive(int tagIndex, float flStartTime)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 332
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CAnimUpdateTagList>(
					const CPackedHandle<CAnimUpdateTagList>& handle);  // 86
	CAnimGraphInstanceData::GetTagList(); // 332
	CAnimGraphUpdateContext::PushTagActive(
			int tagIndex,
			float flStartTime);  // 328
} /* size: 137, inline expansions: 5 (107 bytes) */

// <015B81F9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:328
void CAnimGraphUpdateContext::PushTagActive(int tagIndex, float flStartTime)
{
} /* size: 0 */

// <015D6009> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:337
// function calls: 5
void CAnimGraphUpdateContext::PushTagFired(int tagIndex, float flStartTime)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 341
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CAnimUpdateTagList>(
					const CPackedHandle<CAnimUpdateTagList>& handle);  // 86
	CAnimGraphInstanceData::GetTagList(); // 341
	CAnimGraphUpdateContext::PushTagFired(
			int tagIndex,
			float flStartTime);  // 337
} /* size: 137, inline expansions: 5 (107 bytes) */

// <015B81C6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:337
void CAnimGraphUpdateContext::PushTagFired(int tagIndex, float flStartTime)
{
} /* size: 0 */

// <015B77C5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:346
// variables: 25
// function calls: 28
void CAnimGraphUpdateContext::AddAnimEvents(HSequence hSequence, float flCycle, float flPrevCycle, float flPlaybackDirection, bool bLoop)
{
	const char   __FUNCTION__; // 35355
	const CModel* pModel; // 359
	const ISequence* pSeqDesc; // 363
	const AnimEvent_t* pAnimEvents; // 367
	int wrapCount; // 369
	float flUnClampedCycle; // 370
	float minCycle; // 391
	float maxCycle; // 392
	int increment; // 393
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 348
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 349
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 350
	}
	{
		int wrapIndex; // 395
		{
			float clampedMinCycle; // 397
			float clampedMaxCycle; // 398
			{
				int iEvt; // 400
				{
					const AnimEvent_t* pAnimEvent; // 402
					bool bFireAnimEvent; // 403
					float flEventCycle; // 404
					bool bAnimEventIsOnLastFrame; // 406
					{
						animevent_t animEvent; // 419
						float flStartTime; // 421
						float flEndTime; // 422
						float flUnclampedEventCycle; // 424
						float t; // 426
						CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 109
						PackedHandleID::PackedHandleID(
								const PackedHandleID& rhs);  // 267
						CPackedDataBase::operator[]<PerTickSettings_t>(
										const CPackedHandle<PerTickSettings_t>& handle);  // 122
						CAnimGraphInstanceData::GetPrevAnimTime(); // 109
						CAnimGraphUpdateContext::GetPrevAnimTime(); // 421
						CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 103
						PackedHandleID::PackedHandleID(
								const PackedHandleID& rhs);  // 267
						CPackedDataBase::operator[]<PerTickSettings_t>(
										const CPackedHandle<PerTickSettings_t>& handle);  // 110
						CAnimGraphInstanceData::GetAnimTime(); // 103
						CAnimGraphUpdateContext::GetAnimTime(); // 422
						CUtlMemory<animevent_t, int>::NumAllocated(); // 1196
						CUtlMemory<animevent_t, int>::Base(); // 112
						CUtlVectorBase<animevent_t, CUtlMemory<animevent_t, int> >::Base(); // 368
						CUtlVectorBase<animevent_t, CUtlMemory<animevent_t, int> >::ResetDbgInfo(); // 824
						CUtlMemory<animevent_t, int>::IsGrowable(); // 823
						CUtlMemory<animevent_t, int>::IsExternallyAllocated(); // 859
						CUtlMemory<animevent_t, int>::IsExternallyAllocated(); // 861
						CUtlMemory<animevent_t, int>::Grow(
							int num);  // 806
						CUtlVectorBase<animevent_t, CUtlMemory<animevent_t, int> >::GrowMemory(
								int num);  // 1198
						CUtlMemory<animevent_t, int>::operator[](
								int i);  // 602
						CUtlVectorBase<animevent_t, CUtlMemory<animevent_t, int> >::Element(
							int i);  // 1201
						CopyConstruct<animevent_t>(animevent_t* pMemory,
										const animevent_t& src);  // 1201
						CUtlVectorBase<animevent_t, CUtlMemory<animevent_t, int> >::AddToTail(
								const animevent_t& src);  // 438
					}
				}
			}
			clamp<float, float>(const float& val,
						const float& minVal,
						const float& maxVal);  // 397
			clamp<float, float>(const float& val,
						const float& minVal,
						const float& maxVal);  // 398
		}
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 259
	CWeakHandle<InfoForResourceTypeCModel>::operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(); // 259
	CAnimGraphUpdateContext::GetModel(); // 359
} /* size: 0, variables: 9, inline expansions: 3 (59 bytes) */

// <015B6E6F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:449
// variables: 18
// function calls: 29
void CAnimGraphUpdateContext::AddAnimTags(const CRelativeArray<TagSpan_t>& tags, float flUnClampedCycle, float flPrevCycle, int wrapCount, bool bLoop)
{
	const int  tagCount; // 451
	float minCycle; // 453
	float maxCycle; // 454
	int increment; // 455
	const float  flPrevAnimTime; // 457
	const float  flCurrentAnimTime; // 458
	{
		int wrapIndex; // 460
		{
			float clampedMinCycle; // 462
			float clampedMaxCycle; // 463
			{
				int i; // 465
				{
					const TagSpan_t& currentTag; // 467
					{
						float flTimeAlpha; // 470
						float flTagTime; // 488
						{
							const float  startCycleUnclamped; // 473
							const float  endCycleUnclamped; // 474
							bool bStarted; // 476
							bool bEnded; // 477
							float flEventCycle; // 479
						}
						Lerp<float>(float flPercent,
								const float& A,
								const float& B);  // 488
						CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 332
						PackedHandleID::PackedHandleID(
								const PackedHandleID& rhs);  // 260
						CPackedDataBase::operator[]<CAnimUpdateTagList>(
										const CPackedHandle<CAnimUpdateTagList>& handle);  // 86
						CAnimGraphInstanceData::GetTagList(); // 332
						CAnimGraphUpdateContext::PushTagActive(
								int tagIndex,
								float flStartTime);  // 328
						CAnimGraphUpdateContext::PushTagActive(
								int tagIndex,
								float flStartTime);  // 500
						CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 341
						PackedHandleID::PackedHandleID(
								const PackedHandleID& rhs);  // 260
						CPackedDataBase::operator[]<CAnimUpdateTagList>(
										const CPackedHandle<CAnimUpdateTagList>& handle);  // 86
						CAnimGraphInstanceData::GetTagList(); // 341
						CAnimGraphUpdateContext::PushTagFired(
								int tagIndex,
								float flStartTime);  // 337
						CAnimGraphUpdateContext::PushTagFired(
								int tagIndex,
								float flStartTime);  // 496
					}
					{
					}
					CRelativeOffset<TagSpan_t>::IsValid(); // 35
					CRelativeOffset<TagSpan_t>::Get(); // 97
					CRelativeArray<TagSpan_t>::operator[](
							int index);  // 467
				}
			}
			clamp<float, float>(const float& val,
						const float& minVal,
						const float& maxVal);  // 462
			clamp<float, float>(const float& val,
						const float& minVal,
						const float& maxVal);  // 463
		}
	}
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<PerTickSettings_t>(
					const CPackedHandle<PerTickSettings_t>& handle);  // 122
	CAnimGraphInstanceData::GetPrevAnimTime(); // 109
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 109
	CAnimGraphUpdateContext::GetPrevAnimTime(); // 457
	CRelativeArray<TagSpan_t>::Count(); // 451
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 103
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<PerTickSettings_t>(
					const CPackedHandle<PerTickSettings_t>& handle);  // 110
	CAnimGraphInstanceData::GetAnimTime(); // 103
	CAnimGraphUpdateContext::GetAnimTime(); // 458
} /* size: 0, variables: 6, inline expansions: 11 (281 bytes) */

// <015B6A8A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:511
// variable: 1
// function calls: 15
void CAnimGraphUpdateContext::MarkSequenceActive(HSequence hSequence, float fCycle, float fPrevCycle)
{
	AnimGraphOperation_t newOp; // 513
	HSequence::HSequence(); // 30
	AnimGraphOperation_t::AnimGraphOperation_t(); // 513
	CUtlMemory<AnimGraphOperation_t, int>::NumAllocated(); // 1196
	CUtlMemory<AnimGraphOperation_t, int>::Base(); // 112
	CUtlVectorBase<AnimGraphOperation_t, CUtlMemory<AnimGraphOperation_t, int> >::Base(); // 368
	CUtlVectorBase<AnimGraphOperation_t, CUtlMemory<AnimGraphOperation_t, int> >::ResetDbgInfo(); // 824
	CUtlMemory<AnimGraphOperation_t, int>::IsGrowable(); // 823
	CUtlMemory<AnimGraphOperation_t, int>::IsExternallyAllocated(); // 859
	CUtlMemory<AnimGraphOperation_t, int>::IsExternallyAllocated(); // 861
	CUtlMemory<AnimGraphOperation_t, int>::Grow(
		int num);  // 806
	CUtlVectorBase<AnimGraphOperation_t, CUtlMemory<AnimGraphOperation_t, int> >::GrowMemory(
			int num);  // 1198
	CUtlMemory<AnimGraphOperation_t, int>::operator[](
			int i);  // 602
	CUtlVectorBase<AnimGraphOperation_t, CUtlMemory<AnimGraphOperation_t, int> >::Element(
		int i);  // 1201
	CopyConstruct<AnimGraphOperation_t>(AnimGraphOperation_t* pMemory,
						const AnimGraphOperation_t& src);  // 1201
	CUtlVectorBase<AnimGraphOperation_t, CUtlMemory<AnimGraphOperation_t, int> >::AddToTail(
			const AnimGraphOperation_t& src);  // 519
} /* size: 379, variables: 1, inline expansions: 15 (1030 bytes) */

// <015B6A5C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:523
void CAnimGraphUpdateContext::SetSequenceFinished()
{
} /* size: 12 */

// <015B666F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:529
// function calls: 12
void CAnimGraphUpdateContext::CacheRootMotionForNode(const CAnimUpdateNodeBase* pNode, const CRootMotion& movement)
{
	Mix32HashFunctor::operator(
			uint32 n);  // 139
	PointerHashFunctor::operator(
			const void* s);  // 249
	CUtlMemory<CUtlHashtableEntry<const CAnimUpdateNodeBase::operator[](
			int i);  // 720
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 11
	CRootMotion::CRootMotion(
			const CRootMotion  &);  // 64
	CUtlKeyValuePair<const CAnimUpdateNodeBase::CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion>(
									const CAnimUpdateNodeBase* const& k,
									const CRootMotion& v);  // 1514
	Construct<CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion>, const CAnimUpdateNodeBase*&, const CRootMotion&>(CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion>* pMemory); // 720
	CUtlHashtable<const CAnimUpdateNodeBase::DoInsert<const CAnimUpdateNodeBase*>(
						const CAnimUpdateNodeBase* k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 714
	CUtlHashtable<const CAnimUpdateNodeBase::DoInsert<const CAnimUpdateNodeBase*>(
						const CAnimUpdateNodeBase* k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 249
	CUtlHashtable<const CAnimUpdateNodeBase::Insert(
		KeyArg_t k,
		ValueArg_t v,
		bool* pDidInsert);  // 531
} /* size: 0, inline expansions: 12 (1032 bytes) */

// <015B6128> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:535
// variable: 1
// function calls: 17
void CAnimGraphUpdateContext::RetrieveRootMotionForNode(const CAnimUpdateNodeBase* pNode, CRootMotion& movement)
{
	UtlHashHandle_t handle; // 537
	Mix32HashFunctor::operator(
			uint32 n);  // 139
	PointerHashFunctor::operator(
			const void* s);  // 218
	CUtlHashtable<const CAnimUpdateNodeBase::Find(
		KeyArg_t k);  // 537
	CUtlMemory<CUtlHashtableEntry<const CAnimUpdateNodeBase::Count(); // 204
	CUtlMemory<CUtlHashtableEntry<const CAnimUpdateNodeBase::operator[](
			int i);  // 204
	CUtlHashtableEntry<const CAnimUpdateNodeBase::IsValid(); // 204
	CUtlHashtable<const CAnimUpdateNodeBase::IsValidHandle(
			handle_t idx);  // 538
	Vector::operator=(
			const Vector& vOther);  // 17
	{
	}
	CRotation::operator=(
			const CRotation& rot);  // 17
	CMotionTransform::operator=(
			const CMotionTransform  &);  // 11
	Vector::operator=(
			const Vector& vOther);  // 11
	CRootMotion::operator=(
			const CRootMotion  &);  // 540
	Vector::operator=(
			const Vector& vOther);  // 17
	{
	}
	CRotation::operator=(
			const CRotation& rot);  // 17
	CMotionTransform::operator=(
			const CMotionTransform  &);  // 11
	Vector::operator=(
			const Vector& vOther);  // 11
	CRootMotion::operator=(
			const CRootMotion  &);  // 545
} /* size: 0, variables: 1, inline expansions: 17 (950 bytes) */

// <015B5DFC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:551
// function calls: 9
void CAnimGraphUpdateContext::CacheFootMotionForNode(const CAnimUpdateNodeBase* pNode, const CStrideStatus& strideStatus)
{
	Mix32HashFunctor::operator(
			uint32 n);  // 139
	PointerHashFunctor::operator(
			const void* s);  // 249
	CUtlMemory<CUtlHashtableEntry<const CAnimUpdateNodeBase::operator[](
			int i);  // 720
	CStrideStatus::CStrideStatus(
			const CStrideStatus& rhs);  // 64
	CUtlKeyValuePair<const CAnimUpdateNodeBase::CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus>(
									const CAnimUpdateNodeBase* const& k,
									const CStrideStatus& v);  // 1514
	Construct<CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus>, const CAnimUpdateNodeBase*&, const CStrideStatus&>(CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus>* pMemory); // 720
	CUtlHashtable<const CAnimUpdateNodeBase::DoInsert<const CAnimUpdateNodeBase*>(
						const CAnimUpdateNodeBase* k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 714
	CUtlHashtable<const CAnimUpdateNodeBase::DoInsert<const CAnimUpdateNodeBase*>(
						const CAnimUpdateNodeBase* k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 249
	CUtlHashtable<const CAnimUpdateNodeBase::Insert(
		KeyArg_t k,
		ValueArg_t v,
		bool* pDidInsert);  // 553
} /* size: 253, inline expansions: 9 (705 bytes) */

// <015B5AA1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:557
// variable: 1
// function calls: 9
void CAnimGraphUpdateContext::RetrieveFootMotionForNode(const CAnimUpdateNodeBase* pNode, CStrideStatus& strideStatus)
{
	UtlHashHandle_t handle; // 559
	Mix32HashFunctor::operator(
			uint32 n);  // 139
	PointerHashFunctor::operator(
			const void* s);  // 218
	CUtlHashtable<const CAnimUpdateNodeBase::Find(
		KeyArg_t k);  // 559
	CUtlMemory<CUtlHashtableEntry<const CAnimUpdateNodeBase::Count(); // 204
	CUtlMemory<CUtlHashtableEntry<const CAnimUpdateNodeBase::operator[](
			int i);  // 204
	CUtlHashtableEntry<const CAnimUpdateNodeBase::IsValid(); // 204
	CUtlHashtable<const CAnimUpdateNodeBase::IsValidHandle(
			handle_t idx);  // 560
	CUtlKeyValuePair<const CAnimUpdateNodeBase::GetValue(); // 294
	CUtlHashtable<const CAnimUpdateNodeBase::Element(
		handle_t idx);  // 562
} /* size: 159, variables: 1, inline expansions: 9 (277 bytes) */

// <015B5A73> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:572
void CAnimGraphUpdateContext::GetVRProxy()
{
} /* size: 0 */

// <015B57E6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:578
// function calls: 10
void CAnimGraphUpdateContext::GetFacingMode()
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 580
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<CAnimMovementUpdater>(
					const CPackedHandle<CAnimMovementUpdater>& handle);  // 147
	CAnimGraphFixedData::GetMovementUpdater(); // 580
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 534
	CAnimMovementUpdater::GetFacingMode(
			const CAnimGraphUpdateContext& context);  // 580
} /* size: 128, inline expansions: 10 (149 bytes) */

// <015B553F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:584
// function calls: 10
void CAnimGraphUpdateContext::SetFacingMode(FacingMode eMode)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 586
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<CAnimMovementUpdater>(
					const CPackedHandle<CAnimMovementUpdater>& handle);  // 147
	CAnimGraphFixedData::GetMovementUpdater(); // 586
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 542
	CAnimMovementUpdater::SetFacingMode(
			CAnimGraphUpdateContext& context,
			FacingMode facingMode);  // 586
} /* size: 133, inline expansions: 10 (150 bytes) */

// <015B52B2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:590
// function calls: 10
void CAnimGraphUpdateContext::IsOnGround()
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 592
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<CAnimMovementUpdater>(
					const CPackedHandle<CAnimMovementUpdater>& handle);  // 147
	CAnimGraphFixedData::GetMovementUpdater(); // 592
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<MovementData>(
				const CPackedHandle<MovementData>& handle);  // 550
	CAnimMovementUpdater::IsOnGround(
			const CAnimGraphUpdateContext& context);  // 592
} /* size: 129, inline expansions: 10 (149 bytes) */

// <015D396F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:596
// function calls: 4
void CAnimGraphUpdateContext::GetTraceRequestList()
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 598
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CTraceRequestList>(
					const CPackedHandle<CTraceRequestList>& handle);  // 225
	CAnimGraphInstanceData::GetTraceRequestList(); // 598
} /* size: 0, inline expansions: 4 (0 bytes) */

// <015B5299> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:596
void CAnimGraphUpdateContext::GetTraceRequestList()
{
} /* size: 0 */

// <015B5252> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:608
void CAnimGraphUpdateContext::GetTraceProvider()
{
} /* size: 9 */

// <015B5224> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:614
void CAnimGraphUpdateContext::GetFootMotionManager()
{
} /* size: 9 */

// <015B42DB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:621
void CAnimGraphUpdateContextBuilder::CAnimGraphUpdateContextBuilder(const CAnimGraphInstanceContextPtr& pGraphContext, CFootMotionManager* pFootMotionMgr, IAnimGraphTraceProvider* pTraceProvider)
{
} /* size: 37 */

// <015B40EE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:631
// function calls: 5
void CAnimGraphUpdateContextBuilder::Reset()
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 643
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CAnimUpdateTagList>(
					const CPackedHandle<CAnimUpdateTagList>& handle);  // 86
	CAnimGraphInstanceData::GetTagList(); // 643
	CUtlVectorBase<AnimGraphOperation_t, CUtlMemory<AnimGraphOperation_t, int> >::RemoveAll(); // 645
} /* size: 151, inline expansions: 5 (47 bytes) */

// <015B3E3D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:652
// function calls: 9
void CAnimGraphUpdateContextBuilder::SetAnimTime(float flPrevAnimTime, float flNextAnimTime)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 654
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 655
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<PerTickSettings_t>(
					const CPackedHandle<PerTickSettings_t>& handle);  // 116
	CAnimGraphInstanceData::SetAnimTime(
			float flTime);  // 655
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 656
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<PerTickSettings_t>(
					const CPackedHandle<PerTickSettings_t>& handle);  // 128
	CAnimGraphInstanceData::SetPrevAnimTime(
			float flTime);  // 656
} /* size: 165, inline expansions: 9 (100 bytes) */

// <015B3B89> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:660
// function calls: 13
void CAnimGraphUpdateContextBuilder::SetPoseRecipe(const CPoseRecipePtr& pPoseRecipe)
{
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CPoseRecipe>(CPoseRecipe* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CPoseRecipe>(CPoseRecipe* pObj); // 370
	CSmartPtr<CPoseRecipe, CRefCountAccessor>::operator=(
			CPoseRecipe* pObj);  // 406
	CSmartPtr<CPoseRecipe, CRefCountAccessor>::operator=(
			const CSmartPtr<CPoseRecipe, CRefCountAccessor>& other);  // 662
} /* size: 97, inline expansions: 13 (287 bytes) */

// <015B34A6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:666
// variables: 7
// function calls: 24
void CAnimGraphUpdateContextBuilder::RunGraphUpdate(const CAnimTagManagerInstance* pTagMgr, bool bSkipUpdate)
{
	const int  nUpdateID; // 669
	CAnimGraphUpdateContext& context; // 681
	{
		int i; // 675
		Count(const CUtlVectorBase<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_ this); // 675
		CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int this,
				int i);  // 677
	}
	{
		NodeUpdateDesc_t& nodeUpdateDesc; // 687
		const CAnimUpdateNodeBase* currentNode; // 689
		NodeInfo_t& nodeInfo; // 696
		{
			int i; // 718
			Count(const CUtlVectorBase<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_ this); // 718
			CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int this,
					int i);  // 720
		}
		CUtlStack<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int> >::Pop(); // 741
		RemoveAll(const CUtlVectorBase<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int this); // 722
		CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int>::operator[](
				int i);  // 155
		CUtlStack<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int> >::Element(
			int i);  // 190
		CUtlStack<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int> >::Top(); // 687
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 668
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<PerTickSettings_t>(
					const CPackedHandle<PerTickSettings_t>& handle);  // 104
	CAnimGraphInstanceData::IncrementUpdateID(); // 668
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 669
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<PerTickSettings_t>(
					const CPackedHandle<PerTickSettings_t>& handle);  // 98
	CAnimGraphInstanceData::GetUpdateID(); // 669
	CSmartPtr<CPoseRecipe, CRefCountAccessor>::operator->(); // 672
	CUtlVectorBase<CPoseRecipe::PoseOpDesc, CUtlMemory<CPoseRecipe::PoseOpDesc, int> >::RemoveAll(); // 65
	CPoseRecipe::Reset(); // 672
	RemoveAll(const CUtlVectorBase<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int this); // 679
	Count(const CUtlStack<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, in this); // 684
} /* size: 687, variables: 2, inline expansions: 13 (145 bytes) */

// <015B3478> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:749
void CAnimGraphUpdateContextBuilder::GetActiveSequences()
{
} /* size: 9 */

// <015B25CB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:755
// variables: 18
// function calls: 60
void CAnimGraphUpdateContextBuilder::DispatchTagEvents(const CAnimTagManagerInstance* pTagMgr)
{
	{
		AnimTagWithStatus& tagWithStatus; // 764
		CUtlVector<CAnimGraphUpdateContext::AnimTagWithStatus, CUtlMemory<CAnimGraphUpdateContext::AnimTagWithStatus, int> >& __for_range; // 39811
		iterator __for_begin; // 33320
		iterator __for_end; // 33320
		CUtlMemory<CAnimGraphUpdateContext::AnimTagWithStatus, int>::Base(); // 112
		Base(const CUtlVectorBase<CAnimGraphUpdateContext::AnimTagWithStatus, CUtlMemory<CAnimGraphUpdateContext::AnimTagWithStatus, i this); // 102
		begin(const CUtlVectorBase<CAnimGraphUpdateContext::AnimTagWithStatus, CUtlMemory<CAnimGraphUpdateContext::AnimTagWithStatus, i this); // 764
		Count(const CUtlVectorBase<CAnimGraphUpdateContext::AnimTagWithStatus, CUtlMemory<CAnimGraphUpdateContext::AnimTagWithSta this); // 104
		end(const CUtlVectorBase<CAnimGraphUpdateContext::AnimTagWithStatus, CUtlMemory<CAnimGraphUpdateContext::AnimTagWithStatus, i this); // 764
	}
	CUtlMemory<CAnimGraphUpdateContext::AnimTagWithStatus, int>::Base(); // 112
	Base(const CUtlVectorBase<CAnimGraphUpdateContext::AnimTagWithStatus, CUtlMemory<CAnimGraphUpdateContext::AnimTagWithStatus, i this); // 973
	Count(const CUtlVectorBase<CAnimGraphUpdateContext::AnimTagWithStatus, CUtlMemory<CAnimGraphUpdateContext::AnimTagWithSta this); // 973
	__countl_zero<long unsigned int>(long unsigned int __x); // 388
	__bit_width<long unsigned int>(long unsigned int __x); // 1555
	__lg<long int>(long int __n); // 1907
	{
		AnimTagWithStatus* __i; // 1776
		{
			value_type __val; // 1781
			{
				ptrdiff_t __n; // 700
				__distance<CAnimGraphUpdateContext::AnimTagWithStatus*>(AnimTagWithStatus* __first,
											AnimTagWithStatus* __last,
											random_access_iterator_tag);  // 153
				distance<CAnimGraphUpdateContext::AnimTagWithStatus*>(AnimTagWithStatus* __first,
											AnimTagWithStatus* __last);  // 700
				__advance<CAnimGraphUpdateContext::AnimTagWithStatus*, long int>(AnimTagWithStatus *& __i,
												long int __n,
												random_access_iterator_tag);  // 186
				__advance<CAnimGraphUpdateContext::AnimTagWithStatus*, long int>(AnimTagWithStatus *& __i,
												long int __n,
												random_access_iterator_tag);  // 226
				advance<CAnimGraphUpdateContext::AnimTagWithStatus*, long int>(AnimTagWithStatus *& __i,
												long int __n);  // 701
				__assign_one<true, CAnimGraphUpdateContext::AnimTagWithStatus*, CAnimGraphUpdateContext::AnimTagWithStatus*>(AnimTagWithStatus *& __out,
																AnimTagWithStatus *& __in);  // 709
			}
			__copy_move_backward_a2<true, CAnimGraphUpdateContext::AnimTagWithStatus*, CAnimGraphUpdateContext::AnimTagWithStatus*>(AnimTagWithStatus* __first,
																AnimTagWithStatus* __last,
																AnimTagWithStatus* __result);  // 753
			__copy_move_backward_a1<true, CAnimGraphUpdateContext::AnimTagWithStatus*, CAnimGraphUpdateContext::AnimTagWithStatus*>(AnimTagWithStatus* __first,
																AnimTagWithStatus* __last,
																AnimTagWithStatus* __result);  // 783
			__copy_move_backward_a<true, CAnimGraphUpdateContext::AnimTagWithStatus*, CAnimGraphUpdateContext::AnimTagWithStatus*>(AnimTagWithStatus* __first,
																AnimTagWithStatus* __last,
																AnimTagWithStatus* __result);  // 882
			move_backward<CAnimGraphUpdateContext::AnimTagWithStatus*, CAnimGraphUpdateContext::AnimTagWithStatus*>(AnimTagWithStatus* __first,
																AnimTagWithStatus* __last,
																AnimTagWithStatus* __result);  // 1782
		}
		operator()(const class* __closure,
				const AnimTagWithStatus& lhs,
				const AnimTagWithStatus& rhs); // 158
		_Iter_comp_iter<CAnimGraphUpdateContextBuilder::DispatchTagEvents(const CAnimTagManagerInstance::operator(
															AnimTagWithStatus* __it1,
															AnimTagWithStatus* __it2);  // 1778
		operator()(const class* __closure,
				const AnimTagWithStatus& lhs,
				const AnimTagWithStatus& rhs); // 240
		_Val_comp_iter<CAnimGraphUpdateContextBuilder::DispatchTagEvents(const CAnimTagManagerInstance::operator(
															AnimTagWithStatus& __val,
															AnimTagWithStatus* __it);  // 1758
		__unguarded_linear_insert<CAnimGraphUpdateContext::AnimTagWithStatus*, __gnu_cxx::__ops::_Val_comp_iter<CAnimGraphUpdateContextBuilder::DispatchTagEvents(const CAnimTagManagerInstance*)::<lambda(const CAnimGraphUpdateContext::AnimTagWithStatus&, const CAnimGraphUpdateContext::AnimTagWithStatus&)> > >(AnimTagWithStatus* __last,
																_Val_comp_iter<CAnimGraphUpdateContextBuilder::DispatchTagEvents(const CAnimTagManagerInstance*)::<lambda(const CAnimGrap __comp); // 1786
	}
	__insertion_sort<CAnimGraphUpdateContext::AnimTagWithStatus*, __gnu_cxx::__ops::_Iter_comp_iter<CAnimGraphUpdateContextBuilder::DispatchTagEvents(const CAnimTagManagerInstance*)::<lambda(const CAnimGraphUpdateContext::AnimTagWithStatus&, const CAnimGraphUpdateContext::AnimTagWithStatus&)> > >(AnimTagWithStatus* __first,
																AnimTagWithStatus* __last,
																_Iter_comp_iter<CAnimGraphUpdateContextBuilder::DispatchTagEvents(const CAnimTagManagerInstance*)::<lambda(const CAnimGra __comp); // 1818
	{
		AnimTagWithStatus* __i; // 1798
		operator()(const class* __closure,
				const AnimTagWithStatus& lhs,
				const AnimTagWithStatus& rhs); // 240
		_Val_comp_iter<CAnimGraphUpdateContextBuilder::DispatchTagEvents(const CAnimTagManagerInstance::operator(
															AnimTagWithStatus& __val,
															AnimTagWithStatus* __it);  // 1758
		__unguarded_linear_insert<CAnimGraphUpdateContext::AnimTagWithStatus*, __gnu_cxx::__ops::_Val_comp_iter<CAnimGraphUpdateContextBuilder::DispatchTagEvents(const CAnimTagManagerInstance*)::<lambda(const CAnimGraphUpdateContext::AnimTagWithStatus&, const CAnimGraphUpdateContext::AnimTagWithStatus&)> > >(AnimTagWithStatus* __last,
																_Val_comp_iter<CAnimGraphUpdateContextBuilder::DispatchTagEvents(const CAnimTagManagerInstance*)::<lambda(const CAnimGrap __comp); // 1799
	}
	__unguarded_insertion_sort<CAnimGraphUpdateContext::AnimTagWithStatus*, __gnu_cxx::__ops::_Iter_comp_iter<CAnimGraphUpdateContextBuilder::DispatchTagEvents(const CAnimTagManagerInstance*)::<lambda(const CAnimGraphUpdateContext::AnimTagWithStatus&, const CAnimGraphUpdateContext::AnimTagWithStatus&)> > >(AnimTagWithStatus* __first,
																AnimTagWithStatus* __last,
																_Iter_comp_iter<CAnimGraphUpdateContextBuilder::DispatchTagEvents(const CAnimTagManagerInstance*)::<lambda(const CAnimGra __comp); // 1819
	{
		AnimTagWithStatus* __i; // 1776
		{
			value_type __val; // 1781
			{
				ptrdiff_t __n; // 700
				__distance<CAnimGraphUpdateContext::AnimTagWithStatus*>(AnimTagWithStatus* __first,
											AnimTagWithStatus* __last,
											random_access_iterator_tag);  // 153
				distance<CAnimGraphUpdateContext::AnimTagWithStatus*>(AnimTagWithStatus* __first,
											AnimTagWithStatus* __last);  // 700
				__advance<CAnimGraphUpdateContext::AnimTagWithStatus*, long int>(AnimTagWithStatus *& __i,
												long int __n,
												random_access_iterator_tag);  // 186
				__advance<CAnimGraphUpdateContext::AnimTagWithStatus*, long int>(AnimTagWithStatus *& __i,
												long int __n,
												random_access_iterator_tag);  // 226
				advance<CAnimGraphUpdateContext::AnimTagWithStatus*, long int>(AnimTagWithStatus *& __i,
												long int __n);  // 701
				__assign_one<true, CAnimGraphUpdateContext::AnimTagWithStatus*, CAnimGraphUpdateContext::AnimTagWithStatus*>(AnimTagWithStatus *& __out,
																AnimTagWithStatus *& __in);  // 709
			}
			__copy_move_backward_a2<true, CAnimGraphUpdateContext::AnimTagWithStatus*, CAnimGraphUpdateContext::AnimTagWithStatus*>(AnimTagWithStatus* __first,
																AnimTagWithStatus* __last,
																AnimTagWithStatus* __result);  // 753
			__copy_move_backward_a1<true, CAnimGraphUpdateContext::AnimTagWithStatus*, CAnimGraphUpdateContext::AnimTagWithStatus*>(AnimTagWithStatus* __first,
																AnimTagWithStatus* __last,
																AnimTagWithStatus* __result);  // 783
			__copy_move_backward_a<true, CAnimGraphUpdateContext::AnimTagWithStatus*, CAnimGraphUpdateContext::AnimTagWithStatus*>(AnimTagWithStatus* __first,
																AnimTagWithStatus* __last,
																AnimTagWithStatus* __result);  // 882
			move_backward<CAnimGraphUpdateContext::AnimTagWithStatus*, CAnimGraphUpdateContext::AnimTagWithStatus*>(AnimTagWithStatus* __first,
																AnimTagWithStatus* __last,
																AnimTagWithStatus* __result);  // 1782
		}
		operator()(const class* __closure,
				const AnimTagWithStatus& lhs,
				const AnimTagWithStatus& rhs); // 158
		_Iter_comp_iter<CAnimGraphUpdateContextBuilder::DispatchTagEvents(const CAnimTagManagerInstance::operator(
															AnimTagWithStatus* __it1,
															AnimTagWithStatus* __it2);  // 1778
		operator()(const class* __closure,
				const AnimTagWithStatus& lhs,
				const AnimTagWithStatus& rhs); // 240
		_Val_comp_iter<CAnimGraphUpdateContextBuilder::DispatchTagEvents(const CAnimTagManagerInstance::operator(
															AnimTagWithStatus& __val,
															AnimTagWithStatus* __it);  // 1758
		__unguarded_linear_insert<CAnimGraphUpdateContext::AnimTagWithStatus*, __gnu_cxx::__ops::_Val_comp_iter<CAnimGraphUpdateContextBuilder::DispatchTagEvents(const CAnimTagManagerInstance*)::<lambda(const CAnimGraphUpdateContext::AnimTagWithStatus&, const CAnimGraphUpdateContext::AnimTagWithStatus&)> > >(AnimTagWithStatus* __last,
																_Val_comp_iter<CAnimGraphUpdateContextBuilder::DispatchTagEvents(const CAnimTagManagerInstance*)::<lambda(const CAnimGrap __comp); // 1786
	}
	__insertion_sort<CAnimGraphUpdateContext::AnimTagWithStatus*, __gnu_cxx::__ops::_Iter_comp_iter<CAnimGraphUpdateContextBuilder::DispatchTagEvents(const CAnimTagManagerInstance*)::<lambda(const CAnimGraphUpdateContext::AnimTagWithStatus&, const CAnimGraphUpdateContext::AnimTagWithStatus&)> > >(AnimTagWithStatus* __first,
																AnimTagWithStatus* __last,
																_Iter_comp_iter<CAnimGraphUpdateContextBuilder::DispatchTagEvents(const CAnimTagManagerInstance*)::<lambda(const CAnimGra __comp); // 1823
	__final_insertion_sort<CAnimGraphUpdateContext::AnimTagWithStatus*, __gnu_cxx::__ops::_Iter_comp_iter<CAnimGraphUpdateContextBuilder::DispatchTagEvents(const CAnimTagManagerInstance*)::<lambda(const CAnimGraphUpdateContext::AnimTagWithStatus&, const CAnimGraphUpdateContext::AnimTagWithStatus&)> > >(AnimTagWithStatus* __first,
																AnimTagWithStatus* __last,
																_Iter_comp_iter<CAnimGraphUpdateContextBuilder::DispatchTagEvents(const CAnimTagManagerInstance*)::<lambda(const CAnimGra __comp); // 1909
	__sort<CAnimGraphUpdateContext::AnimTagWithStatus*, __gnu_cxx::__ops::_Iter_comp_iter<CAnimGraphUpdateContextBuilder::DispatchTagEvents(const CAnimTagManagerInstance*)::<lambda(const CAnimGraphUpdateContext::AnimTagWithStatus&, const CAnimGraphUpdateContext::AnimTagWithStatus&)> > >(AnimTagWithStatus* __first,
																AnimTagWithStatus* __last,
																_Iter_comp_iter<CAnimGraphUpdateContextBuilder::DispatchTagEvents(const CAnimTagManagerInstance*)::<lambda(const CAnimGra __comp); // 4874
	sort<CAnimGraphUpdateContext::AnimTagWithStatus*, CAnimGraphUpdateContextBuilder::DispatchTagEvents(const CAnimTagManagerInstance*)::<lambda(const CAnimGraphUpdateContext::AnimTagWithStatus&, const CAnimGraphUpdateContext::AnimTagWithStatus&)> >(AnimTagWithStatus* __first,
																AnimTagWithStatus* __last,
																 __comp); // 973
	SortPredicate<CAnimGraphUpdateContextBuilder::DispatchTagEvents(const CAnimTagManagerInstance*)::<lambda(const CAnimGraphUpdateContext::AnimTagWithStatus&, const CAnimGraphUpdateContext::AnimTagWithStatus&)> >(const CUtlVectorBase<CAnimGraphUpdateContext::AnimTagWithStatus, CUtlMemory<CAnimGraphUpdateContext::AnimTagWithStatus, i this,
																class& predicate); // 758
	RemoveAll(const CUtlVectorBase<CAnimGraphUpdateContext::AnimTagWithStatus, CUtlMemory<CAnimGraphUpdateContext::AnimTagWithStatus, i this); // 769
} /* size: 813, inline expansions: 14 (3308 bytes) */

// <015B185A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:772
// variables: 6
// function calls: 60
void CAnimGraphUpdateContext::CaptureTagStatus(const CAnimTagManagerInstance* pTagMgr)
{
	CAnimUpdateTagList* pTagList; // 774
	int tagCount; // 776
	float flCaptureTime; // 778
	{
		int i; // 780
		{
			TagStatus oldStatus; // 782
			TagStatus newStatus; // 783
			CRelativeOffset<TagStatus>::IsValid(); // 35
			CRelativeOffset<TagStatus>::Get(); // 97
			CRelativeArray<TagStatus>::operator[](
					int index);  // 41
			CAnimUpdateTagList::GetTagPrevStatus(
					int index);  // 37
			CRelativeArray<TagStatus>::Count(); // 39
			CAnimUpdateTagList::GetTagPrevStatus(
					int index);  // 782
			{
			}
			CRelativeOffset<TagStatus>::IsValid(); // 35
			CRelativeOffset<TagStatus>::Get(); // 97
			CRelativeArray<TagStatus>::operator[](
					int index);  // 33
			CAnimUpdateTagList::GetTagStatus(
					int index);  // 783
			AnimTagStatusContext::AnimTagStatusContext(
						const AnimTagStatus& status,
						float flAnimTime);  // 212
			AnimTagWithStatus::AnimTagWithStatus(
						int nTagIndex,
						const AnimTagStatus& status,
						float flCaptureTime,
						float flAnimTagStartTime);  // 798
			CUtlMemory<CAnimGraphUpdateContext::AnimTagWithStatus, int>::NumAllocated(); // 1247
			CUtlMemory<CAnimGraphUpdateContext::AnimTagWithStatus, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CAnimGraphUpdateContext::AnimTagWithStatus, CUtlMemory<CAnimGraphUpdateContext::AnimTagWithStatus, i this,
				int i);  // 1252
			Construct<CAnimGraphUpdateContext::AnimTagWithStatus, CAnimGraphUpdateContext::AnimTagWithStatus>(AnimTagWithStatus* pMemory); // 1252
			CUtlMemory<CAnimGraphUpdateContext::AnimTagWithStatus, int>::Base(); // 112
			Base(const CUtlVectorBase<CAnimGraphUpdateContext::AnimTagWithStatus, CUtlMemory<CAnimGraphUpdateContext::AnimTagWithStatus, i this); // 368
			ResetDbgInfo(const CUtlVectorBase<CAnimGraphUpdateContext::AnimTagWithStatus, CUtlMemory<CAnimGraphUpdateContext::AnimTagWithStatus, i this); // 824
			GrowMemory(const CUtlVectorBase<CAnimGraphUpdateContext::AnimTagWithStatus, CUtlMemory<CAnimGraphUpdateContext::AnimTagWithStatus, i this,
					int num);  // 1249
			AddToTail(const CUtlVectorBase<CAnimGraphUpdateContext::AnimTagWithStatus, CUtlMemory<CAnimGraphUpdateContext::AnimTagWithStatus, i this,
					AnimTagWithStatus& src);  // 798
			CUtlMemory<CAnimGraphUpdateContext::AnimTagWithStatus, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CAnimGraphUpdateContext::AnimTagWithStatus, CUtlMemory<CAnimGraphUpdateContext::AnimTagWithStatus, i this,
				int i);  // 1252
			CUtlMemory<CAnimGraphUpdateContext::AnimTagWithStatus, int>::NumAllocated(); // 1247
			AddToTail(const CUtlVectorBase<CAnimGraphUpdateContext::AnimTagWithStatus, CUtlMemory<CAnimGraphUpdateContext::AnimTagWithStatus, i this,
					AnimTagWithStatus& src);  // 794
			AnimTagStatusContext::AnimTagStatusContext(
						const AnimTagStatus& status,
						float flAnimTime);  // 212
			AnimTagWithStatus::AnimTagWithStatus(
						int nTagIndex,
						const AnimTagStatus& status,
						float flCaptureTime,
						float flAnimTagStartTime);  // 811
			CUtlMemory<CAnimGraphUpdateContext::AnimTagWithStatus, int>::NumAllocated(); // 1247
			CUtlMemory<CAnimGraphUpdateContext::AnimTagWithStatus, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CAnimGraphUpdateContext::AnimTagWithStatus, CUtlMemory<CAnimGraphUpdateContext::AnimTagWithStatus, i this,
				int i);  // 1252
			Construct<CAnimGraphUpdateContext::AnimTagWithStatus, CAnimGraphUpdateContext::AnimTagWithStatus>(AnimTagWithStatus* pMemory); // 1252
			CUtlMemory<CAnimGraphUpdateContext::AnimTagWithStatus, int>::Base(); // 112
			Base(const CUtlVectorBase<CAnimGraphUpdateContext::AnimTagWithStatus, CUtlMemory<CAnimGraphUpdateContext::AnimTagWithStatus, i this); // 368
			ResetDbgInfo(const CUtlVectorBase<CAnimGraphUpdateContext::AnimTagWithStatus, CUtlMemory<CAnimGraphUpdateContext::AnimTagWithStatus, i this); // 824
			GrowMemory(const CUtlVectorBase<CAnimGraphUpdateContext::AnimTagWithStatus, CUtlMemory<CAnimGraphUpdateContext::AnimTagWithStatus, i this,
					int num);  // 1249
			AddToTail(const CUtlVectorBase<CAnimGraphUpdateContext::AnimTagWithStatus, CUtlMemory<CAnimGraphUpdateContext::AnimTagWithStatus, i this,
					AnimTagWithStatus& src);  // 811
			AnimTagStatusContext::AnimTagStatusContext(
						const AnimTagStatus& status,
						float flAnimTime);  // 212
			AnimTagWithStatus::AnimTagWithStatus(
						int nTagIndex,
						const AnimTagStatus& status,
						float flCaptureTime,
						float flAnimTagStartTime);  // 794
			CUtlMemory<CAnimGraphUpdateContext::AnimTagWithStatus, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CAnimGraphUpdateContext::AnimTagWithStatus, CUtlMemory<CAnimGraphUpdateContext::AnimTagWithStatus, i this,
				int i);  // 1252
			Construct<CAnimGraphUpdateContext::AnimTagWithStatus, CAnimGraphUpdateContext::AnimTagWithStatus>(AnimTagWithStatus* pMemory); // 1252
			CUtlMemory<CAnimGraphUpdateContext::AnimTagWithStatus, int>::NumAllocated(); // 1247
			CUtlMemory<CAnimGraphUpdateContext::AnimTagWithStatus, int>::Base(); // 112
			Base(const CUtlVectorBase<CAnimGraphUpdateContext::AnimTagWithStatus, CUtlMemory<CAnimGraphUpdateContext::AnimTagWithStatus, i this); // 368
			ResetDbgInfo(const CUtlVectorBase<CAnimGraphUpdateContext::AnimTagWithStatus, CUtlMemory<CAnimGraphUpdateContext::AnimTagWithStatus, i this); // 824
			GrowMemory(const CUtlVectorBase<CAnimGraphUpdateContext::AnimTagWithStatus, CUtlMemory<CAnimGraphUpdateContext::AnimTagWithStatus, i this,
					int num);  // 1249
			AddToTail(const CUtlVectorBase<CAnimGraphUpdateContext::AnimTagWithStatus, CUtlMemory<CAnimGraphUpdateContext::AnimTagWithStatus, i this,
					AnimTagWithStatus& src);  // 805
			AnimTagStatusContext::AnimTagStatusContext(
						const AnimTagStatus& status,
						float flAnimTime);  // 212
			AnimTagWithStatus::AnimTagWithStatus(
						int nTagIndex,
						const AnimTagStatus& status,
						float flCaptureTime,
						float flAnimTagStartTime);  // 805
		}
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 774
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CAnimUpdateTagList>(
					const CPackedHandle<CAnimUpdateTagList>& handle);  // 86
	CAnimGraphInstanceData::GetTagList(); // 774
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 103
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 267
	CPackedDataBase::operator[]<PerTickSettings_t>(
					const CPackedHandle<PerTickSettings_t>& handle);  // 110
	CAnimGraphInstanceData::GetAnimTime(); // 103
	CAnimGraphUpdateContext::GetAnimTime(); // 778
	CRelativeArray<TagStatus>::Count(); // 27
	CAnimUpdateTagList::GetTagCount(); // 776
} /* size: 0, variables: 3, inline expansions: 11 (136 bytes) */

// <015B182C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:819
void CAnimGraphUpdateContextBuilder::GetPendingAnimEvents()
{
} /* size: 12 */

// <015B17CD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:825
// function call: 1
void CAnimGraphUpdateContextBuilder::ClearPendingAnimEvents()
{
	CUtlVectorBase<animevent_t, CUtlMemory<animevent_t, int> >::RemoveAll(); // 827
} /* size: 15, inline expansions: 1 (10 bytes) */

// <015B10FF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:831
// variables: 4
// function calls: 28
void CAnimGraphUpdateContextBuilder::ClearStaleAnimEventsAndTags()
{
	int nNumToRemove; // 842
	{
		int i; // 834
		CUtlVectorBase<animevent_t, CUtlMemory<animevent_t, int> >::Count(); // 834
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 103
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 267
		CPackedDataBase::operator[]<PerTickSettings_t>(
						const CPackedHandle<PerTickSettings_t>& handle);  // 110
		CAnimGraphInstanceData::GetAnimTime(); // 103
		CAnimGraphUpdateContext::GetAnimTime(); // 836
		CUtlMemory<animevent_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<animevent_t, CUtlMemory<animevent_t, int> >::operator[](
				int i);  // 836
		Destruct<animevent_t>(animevent_t* pMemory); // 1575
		{
			const bool  bNotLast; // 1578
			CUtlMemory<animevent_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<animevent_t, CUtlMemory<animevent_t, int> >::Element(
				int i);  // 1584
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 91
			V_memcpy(void* dest,
				const void* src,
				size_t count);  // 1584
		}
		CUtlVectorBase<animevent_t, CUtlMemory<animevent_t, int> >::FastRemove(
				int elem);  // 838
	}
	{
		int i; // 843
		Count(const CUtlVectorBase<CAnimGraphUpdateContext::AnimTagWithStatus, CUtlMemory<CAnimGraphUpdateContext::AnimTagWithSta this); // 843
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 103
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 267
		CPackedDataBase::operator[]<PerTickSettings_t>(
						const CPackedHandle<PerTickSettings_t>& handle);  // 110
		CAnimGraphInstanceData::GetAnimTime(); // 103
		CAnimGraphUpdateContext::GetAnimTime(); // 845
		CUtlMemory<CAnimGraphUpdateContext::AnimTagWithStatus, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CAnimGraphUpdateContext::AnimTagWithStatus, CUtlMemory<CAnimGraphUpdateContext::AnimTagWithStatus, i this,
				int i);  // 845
	}
	CUtlMemory<CAnimGraphUpdateContext::AnimTagWithStatus, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CAnimGraphUpdateContext::AnimTagWithStatus, CUtlMemory<CAnimGraphUpdateContext::AnimTagWithStatus, i this,
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	ShiftElementsLeft(const CUtlVectorBase<CAnimGraphUpdateContext::AnimTagWithStatus, CUtlMemory<CAnimGraphUpdateContext::AnimTagWithStatus, i this,
				int elem,
				int num);  // 1687
	RemoveMultipleFromHead(const CUtlVectorBase<CAnimGraphUpdateContext::AnimTagWithStatus, CUtlMemory<CAnimGraphUpdateContext::AnimTagWithStatus, i this,
				int num);  // 854
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <015B10D1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:858
void CAnimGraphUpdateContextBuilder::IsSequenceFinished()
{
} /* size: 12 */

// <015B1093> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:864
void CAnimGraphUpdateContextBuilder::SetVRProxy(const IAnimVRProxy* pVRProxy)
{
} /* size: 9 */

// <015B101E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:870
void CAnimGraphUpdateContextBuilder::Save(ISave* pSave)
{
} /* size: 0 */

// <015B0FA9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animgraphupdatecontext.cpp:876
void CAnimGraphUpdateContextBuilder::Restore(IRestore* pRestore)
{
} /* size: 0 */

