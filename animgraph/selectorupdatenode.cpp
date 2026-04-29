
//
// animgraph/selectorupdatenode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 34
//

// <01956BA0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:13
void GetBaseMap(void)
{
} /* size: 0 */

// <019569CF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:13
// variables: 2
// function calls: 5
datamap_t* DataMapInit<SelectorInstanceData_t>(SelectorInstanceData_t *)
{
	const char* pDataMapInit_className; // 13
	typedescription_t dataDesc; // 13
	ISaveRestoreOps::ISaveRestoreOps(); // 408
	CDefSaveRestoreOps::CDefSaveRestoreOps(); // 18
	CRelativeOffsetArrayDataOps<CRelativeArray<float>, 1>::CRelativeOffsetArrayDataOps(); // 106
	GetDataOps<CRelativeArray<float> >(CRelativeArray<float> *); // 104
	GetDataOps<CRelativeArray<float> >(CRelativeArray<float> *); // 14
} /* size: 196, variables: 2, inline expansions: 5 (113 bytes) */

// <01956691> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:24
// variables: 3
// function calls: 9
void SelectorInstanceData_t::SelectorInstanceData_t(int nChildCount, CSaveablePackedData& instanceData)
{
	{
		int i; // 28
	}
	{
		uint32 i; // 160
	}
	CPackedDataT<true>::AddArray<float>(
			uint32 count,
			CPackedHandle<float>* handleOut);  // 26
	{
	}
	CRelativeOffset<float>::SetOffset(
			const float* targetPtr);  // 20
	CRelativeOffset<float>::operator=(
			const float* targetPtr);  // 115
	CRelativeArray<float>::SetArray(
		const float* targetArray,
		int32 count);  // 26
	{
		int i; // 28
		CRelativeOffset<float>::IsValid(); // 30
		CRelativeOffset<float>::Get(); // 90
		{
		}
		CRelativeArray<float>::operator[](
				int index);  // 30
	}
	CRelativeOffset<float>::CRelativeOffset(); // 84
	CRelativeArray<float>::CRelativeArray(); // 24
} /* size: 0, inline expansions: 6 (239 bytes) */

// <01956651> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:24
// variable: 1
void SelectorInstanceData_t::SelectorInstanceData_t(int nChildCount, CSaveablePackedData& instanceData)
{
	{
		int i; // 28
	}
} /* size: 0 */

// <01955CA1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:35
// variables: 6
// function calls: 30
void CSelectorUpdateNode::CSelectorUpdateNode(CAnimGraphInitContext& initContext, int nChildCount, CAnimParamHandle hParameter, const CBlendCurve& blendCurve, float flBlendTime, SelectorTagBehavior_t tagBehavior, bool bResetOnChange, bool bSyncCyclesOnChange, int nIntMinValue, int nIntMaxValue)
{
	{
		{
		}
		{
			int i; // 65
		}
		{
			int i; // 72
		}
	}
	{
		Vector2D::Vector2D(
			const Vector2D& vOther);  // 22
		Vector2D::Vector2D(
			const Vector2D& vOther);  // 22
		CBlendCurve::CBlendCurve(
				const CBlendCurve  &);  // 47
		PackedHandleID::PackedHandleID(); // 22
		CPackedHandle<SelectorInstanceData_t>::CPackedHandle(); // 54
		CRelativeOffset<const CAnimUpdateNodeBase::CRelativeOffset(); // 84
		CRelativeArray<const CAnimUpdateNodeBase::CRelativeArray(); // 54
		CRelativeOffset<signed char>::CRelativeOffset(); // 84
		CRelativeArray<signed char>::CRelativeArray(); // 54
		CAnimParamHandle::operator=(
				const CAnimParamHandle& rhs);  // 18
		CAnimParamHandle::CAnimParamHandle(
				const CAnimParamHandle& rhs);  // 49
		CAnimParamHandle::GetType(); // 57
		{
		}
		PackedHandleID::operator=(
				uint32 id);  // 144
		CPackedDataT<true>::AddItem<SelectorInstanceData_t, int&, CPackedDataT<true>&>(
										CPackedHandle<SelectorInstanceData_t>* handleOut);  // 60
		{
			uint32 i; // 160
		}
		CPackedDataT<false>::AddArray<const CAnimUpdateNodeBase*>(
							uint32 count,
							CPackedHandle<const CAnimUpdateNodeBase*>* handleOut);  // 63
		{
		}
		CRelativeOffset<const CAnimUpdateNodeBase::SetOffset(
				const CAnimUpdateNodeBase* const* targetPtr);  // 20
		CRelativeOffset<const CAnimUpdateNodeBase::operator=(
				const CAnimUpdateNodeBase* const* targetPtr);  // 115
		CRelativeArray<const CAnimUpdateNodeBase::SetArray(
			const CAnimUpdateNodeBase* const* targetArray,
			int32 count);  // 63
		{
			int i; // 65
			CRelativeArray<const CAnimUpdateNodeBase::Count(); // 65
			CRelativeOffset<const CAnimUpdateNodeBase::IsValid(); // 30
			CRelativeOffset<const CAnimUpdateNodeBase::Get(); // 90
			CRelativeArray<const CAnimUpdateNodeBase::operator[](
					int index);  // 67
		}
		{
			uint32 i; // 160
		}
		CPackedDataT<false>::AddArray<signed char>(
					uint32 count,
					CPackedHandle<signed char>* handleOut);  // 71
		{
		}
		CRelativeOffset<signed char>::SetOffset(
				const signed char* targetPtr);  // 20
		CRelativeOffset<signed char>::operator=(
				const signed char* targetPtr);  // 115
		CRelativeArray<signed char>::SetArray(
			const signed char* targetArray,
			int32 count);  // 71
		{
			int i; // 72
			CRelativeArray<signed char>::Count(); // 72
			CRelativeOffset<signed char>::IsValid(); // 30
			CRelativeOffset<signed char>::Get(); // 90
			CRelativeArray<signed char>::operator[](
					int index);  // 74
		}
	}
} /* size: 0 */

// <01955BCB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:35
// variables: 4
void CSelectorUpdateNode::CSelectorUpdateNode(CAnimGraphInitContext& initContext, int nChildCount, CAnimParamHandle hParameter, const CBlendCurve& blendCurve, float flBlendTime, SelectorTagBehavior_t tagBehavior, bool bResetOnChange, bool bSyncCyclesOnChange, int nIntMinValue, int nIntMaxValue)
{
	const char   __FUNCTION__; // 54760
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 57
	}
	{
		int i; // 65
	}
	{
		int i; // 72
	}
} /* size: 0, variables: 1 */

// <01955B6D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:79
// function call: 1
void CSelectorUpdateNode::GetChildCount()
{
	CRelativeArray<const CAnimUpdateNodeBase::Count(); // 81
} /* size: 8, inline expansions: 1 (0 bytes) */

// <019762AD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:85
// function calls: 5
void CSelectorUpdateNode::GetChild(int index)
{
	CRelativeArray<const CAnimUpdateNodeBase::Count(); // 87
	CRelativeOffset<const CAnimUpdateNodeBase::IsValid(); // 35
	CRelativeOffset<const CAnimUpdateNodeBase::Get(); // 97
	CRelativeArray<const CAnimUpdateNodeBase::operator[](
			int index);  // 89
	CSelectorUpdateNode::GetChild(
		int index);  // 85
} /* size: 49, inline expansions: 5 (79 bytes) */

// <01955B48> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:85
void CSelectorUpdateNode::GetChild(int index)
{
} /* size: 0 */

// <01955782> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:98
// function calls: 14
void CSelectorUpdateNode::IsChildActive(CAnimGraphUpdateContext& context, int index)
{
	CRelativeArray<const CAnimUpdateNodeBase::Count(); // 100
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<SelectorInstanceData_t>(
						const CPackedHandle<SelectorInstanceData_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<SelectorInstanceData_t>(
						const CPackedHandle<SelectorInstanceData_t>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<SelectorInstanceData_t>(
						const CPackedHandle<SelectorInstanceData_t>& handle);  // 102
	{
	}
	CRelativeOffset<float>::IsValid(); // 30
	CRelativeOffset<float>::Get(); // 90
	CRelativeArray<float>::operator[](
			int index);  // 102
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<SelectorInstanceData_t>(
						const CPackedHandle<SelectorInstanceData_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<SelectorInstanceData_t>(
						const CPackedHandle<SelectorInstanceData_t>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<SelectorInstanceData_t>(
						const CPackedHandle<SelectorInstanceData_t>& handle);  // 103
} /* size: 0, inline expansions: 14 (272 bytes) */

// <0197589B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:112
// function calls: 7
void CSelectorUpdateNode::IsChildWaning(CAnimGraphUpdateContext& context, int index)
{
	CRelativeArray<const CAnimUpdateNodeBase::Count(); // 114
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<SelectorInstanceData_t>(
						const CPackedHandle<SelectorInstanceData_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<SelectorInstanceData_t>(
						const CPackedHandle<SelectorInstanceData_t>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<SelectorInstanceData_t>(
						const CPackedHandle<SelectorInstanceData_t>& handle);  // 116
	CSelectorUpdateNode::IsChildWaning(
			CAnimGraphUpdateContext& context,
			int index);  // 112
} /* size: 119, inline expansions: 7 (141 bytes) */

// <01955751> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:112
void CSelectorUpdateNode::IsChildWaning(CAnimGraphUpdateContext& context, int index)
{
} /* size: 0 */

// <01954F08> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:124
// variables: 4
// function calls: 25
void CSelectorUpdateNode::Update(CAnimGraphUpdateContext& context)
{
	const int  nCurrentIndex; // 132
	{
		const CAnimUpdateNodeBase* pChildNode; // 144
		{
			float flRemainingTime; // 147
			{
			}
			CRelativeArray<signed char>::operator[](
					int index);  // 150
		}
		CRelativeArray<const CAnimUpdateNodeBase::Count(); // 87
		CRelativeOffset<const CAnimUpdateNodeBase::IsValid(); // 35
		CRelativeOffset<const CAnimUpdateNodeBase::Get(); // 97
		CRelativeArray<const CAnimUpdateNodeBase::operator[](
				int index);  // 89
		CSelectorUpdateNode::GetChild(
			int index);  // 85
		CSelectorUpdateNode::GetChild(
			int index);  // 144
	}
	{
		const CAnimUpdateNodeBase* pChildNode; // 160
		CRelativeArray<const CAnimUpdateNodeBase::Count(); // 87
		CRelativeOffset<const CAnimUpdateNodeBase::IsValid(); // 35
		CRelativeOffset<const CAnimUpdateNodeBase::Get(); // 97
		CRelativeArray<const CAnimUpdateNodeBase::operator[](
				int index);  // 89
		CSelectorUpdateNode::GetChild(
			int index);  // 85
		CSelectorUpdateNode::GetChild(
			int index);  // 160
		{
		}
		CRelativeArray<signed char>::operator[](
				int index);  // 163
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<SelectorInstanceData_t>(
						const CPackedHandle<SelectorInstanceData_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<SelectorInstanceData_t>(
						const CPackedHandle<SelectorInstanceData_t>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<SelectorInstanceData_t>(
						const CPackedHandle<SelectorInstanceData_t>& handle);  // 132
	{
	}
	CRelativeOffset<signed char>::IsValid(); // 35
	CRelativeOffset<signed char>::Get(); // 97
	CRelativeArray<signed char>::operator[](
			int index);  // 136
	{
	}
	CRelativeOffset<signed char>::IsValid(); // 35
	CRelativeOffset<signed char>::Get(); // 97
	CRelativeArray<signed char>::operator[](
			int index);  // 172
} /* size: 0, variables: 1, inline expansions: 11 (311 bytes) */

// <019545BB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:180
// variables: 3
// function calls: 35
void CSelectorUpdateNode::EnqueueChildren(CAnimGraphUpdateContext& context)
{
	const int  nCurrentIndex; // 182
	{
		const CRelativeArray<float>& weights; // 186
		{
			int32 i; // 194
			CRelativeArray<float>::Count(); // 194
			CRelativeOffset<float>::IsValid(); // 35
			CRelativeOffset<float>::Get(); // 97
			CRelativeArray<float>::operator[](
					int index);  // 196
			{
			}
			CRelativeOffset<const CAnimUpdateNodeBase::IsValid(); // 35
			CRelativeOffset<const CAnimUpdateNodeBase::Get(); // 97
			CRelativeArray<const CAnimUpdateNodeBase::operator[](
					int index);  // 196
			{
			}
			CRelativeOffset<float>::IsValid(); // 35
			CRelativeOffset<float>::Get(); // 97
			CRelativeArray<float>::operator[](
					int index);  // 198
			{
			}
			CRelativeOffset<const CAnimUpdateNodeBase::IsValid(); // 35
			CRelativeOffset<const CAnimUpdateNodeBase::Get(); // 97
			CRelativeArray<const CAnimUpdateNodeBase::operator[](
					int index);  // 198
		}
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<SelectorInstanceData_t>(
							const CPackedHandle<SelectorInstanceData_t>& handle);  // 77
		CAnimGraphInstanceData::operator[]<SelectorInstanceData_t>(
							const CPackedHandle<SelectorInstanceData_t>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<SelectorInstanceData_t>(
							const CPackedHandle<SelectorInstanceData_t>& handle);  // 186
		{
		}
		CRelativeOffset<const CAnimUpdateNodeBase::IsValid(); // 35
		CRelativeOffset<const CAnimUpdateNodeBase::Get(); // 97
		CRelativeArray<const CAnimUpdateNodeBase::operator[](
				int index);  // 189
		{
		}
		CRelativeOffset<float>::IsValid(); // 35
		CRelativeOffset<float>::Get(); // 97
		CRelativeArray<float>::operator[](
				int index);  // 191
		{
		}
		CRelativeOffset<const CAnimUpdateNodeBase::IsValid(); // 35
		CRelativeOffset<const CAnimUpdateNodeBase::Get(); // 97
		CRelativeArray<const CAnimUpdateNodeBase::operator[](
				int index);  // 191
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<SelectorInstanceData_t>(
						const CPackedHandle<SelectorInstanceData_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<SelectorInstanceData_t>(
						const CPackedHandle<SelectorInstanceData_t>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<SelectorInstanceData_t>(
						const CPackedHandle<SelectorInstanceData_t>& handle);  // 182
	CRelativeArray<const CAnimUpdateNodeBase::IsValidIndex(
			int index);  // 105
	_DebuggerBreakInlineExpressionWrapper(void); // 105
	CRelativeArray<const CAnimUpdateNodeBase::VerifyValidIndex(
			int index);  // 183
} /* size: 0, variables: 1, inline expansions: 8 (141 bytes) */

// <01953E28> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:205
// variables: 8
// function calls: 26
void CSelectorUpdateNode::CreatePoseOp(CAnimGraphUpdateContext& context)
{
	SelectorInstanceData_t* pInstData; // 207
	const int  nCurrentIndex; // 210
	{
		const CRelativeArray<float>& weights; // 214
		PoseHandle poseHandles; // 216
		float poseWeights; // 217
		int poseCount; // 219
		{
			int32 i; // 220
			CRelativeArray<float>::Count(); // 220
			CRelativeOffset<float>::IsValid(); // 35
			CRelativeOffset<float>::Get(); // 97
			CRelativeArray<float>::operator[](
					int index);  // 222
			CRelativeOffset<float>::IsValid(); // 35
			CRelativeOffset<float>::Get(); // 97
			CRelativeArray<float>::operator[](
					int index);  // 225
			{
			}
			CRelativeOffset<const CAnimUpdateNodeBase::IsValid(); // 35
			CRelativeOffset<const CAnimUpdateNodeBase::Get(); // 97
			CRelativeArray<const CAnimUpdateNodeBase::operator[](
					int index);  // 227
			{
			}
			CRelativeOffset<const CAnimUpdateNodeBase::IsValid(); // 35
			CRelativeOffset<const CAnimUpdateNodeBase::Get(); // 97
			CRelativeArray<const CAnimUpdateNodeBase::operator[](
					int index);  // 229
		}
		{
			int i; // 239
		}
		{
		}
		CRelativeOffset<const CAnimUpdateNodeBase::IsValid(); // 35
		CRelativeOffset<const CAnimUpdateNodeBase::Get(); // 97
		CRelativeArray<const CAnimUpdateNodeBase::operator[](
				int index);  // 255
		{
		}
		CRelativeOffset<const CAnimUpdateNodeBase::IsValid(); // 35
		CRelativeOffset<const CAnimUpdateNodeBase::Get(); // 97
		CRelativeArray<const CAnimUpdateNodeBase::operator[](
				int index);  // 257
	}
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<SelectorInstanceData_t>(
						const CPackedHandle<SelectorInstanceData_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<SelectorInstanceData_t>(
						const CPackedHandle<SelectorInstanceData_t>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<SelectorInstanceData_t>(
						const CPackedHandle<SelectorInstanceData_t>& handle);  // 207
	CRelativeArray<const CAnimUpdateNodeBase::IsValidIndex(
			int index);  // 105
	_DebuggerBreakInlineExpressionWrapper(void); // 105
	CRelativeArray<const CAnimUpdateNodeBase::VerifyValidIndex(
			int index);  // 212
} /* size: 0, variables: 2, inline expansions: 7 (164 bytes) */

// <01953C00> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:264
// variables: 3
// function calls: 5
void CSelectorUpdateNode::GetPoseHandle(const CAnimGraphUpdateContext& context)
{
	const char   __FUNCTION__; // 54608
	PoseHandle hPose; // 268
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 266
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<SelectorInstanceData_t>(
						const CPackedHandle<SelectorInstanceData_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<SelectorInstanceData_t>(
						const CPackedHandle<SelectorInstanceData_t>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<SelectorInstanceData_t>(
						const CPackedHandle<SelectorInstanceData_t>& handle);  // 268
} /* size: 0, variables: 2, inline expansions: 5 (76 bytes) */

// <01953B5C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:274
// variables: 2
void CSelectorUpdateNode::GetCycle(CAnimGraphUpdateContext& context)
{
	float cycle; // 276
	const CAnimUpdateNodeBase* childNode; // 278
} /* size: 54, variables: 2 */

// <01953AB8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:288
// variables: 2
void CSelectorUpdateNode::GetDuration(CAnimGraphUpdateContext& context)
{
	float duration; // 290
	const CAnimUpdateNodeBase* childNode; // 292
} /* size: 54, variables: 2 */

// <0195393F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:302
// variable: 1
// function calls: 3
void CSelectorUpdateNode::GetTotalMovement(CAnimGraphUpdateContext& context)
{
	const CAnimUpdateNodeBase* childNode; // 304
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 311
} /* size: 0, variables: 1, inline expansions: 3 (149 bytes) */

// <019537A8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:316
// variable: 1
// function calls: 3
void CSelectorUpdateNode::GetRemainingMovement(CAnimGraphUpdateContext& context, float flCycle)
{
	const CAnimUpdateNodeBase* childNode; // 318
	{
	}
	{
	}
	CRotation::CRotation(
			const CRotation& rot);  // 22
	CRotation::CRotation(
			const CRotation& rot);  // 17
	CMotionTransform::CMotionTransform(
			const CMotionTransform  &);  // 325
} /* size: 0, variables: 1, inline expansions: 3 (149 bytes) */

// <01952DAB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:330
// variables: 3
// function calls: 34
void CSelectorUpdateNode::Reset(CAnimGraphUpdateContext& context, float flCycle)
{
	{
		CRelativeArray<float>& weights; // 344
		const CAnimUpdateNodeBase* childNode; // 350
		{
			int32 i; // 345
			CRelativeArray<float>::Count(); // 345
			CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
			PackedHandleID::PackedHandleID(
					const PackedHandleID& rhs);  // 260
			CPackedDataBase::operator[]<SelectorInstanceData_t>(
								const CPackedHandle<SelectorInstanceData_t>& handle);  // 77
			CAnimGraphInstanceData::operator[]<SelectorInstanceData_t>(
								const CPackedHandle<SelectorInstanceData_t>& handle);  // 59
			CAnimGraphUpdateContext::operator[]<SelectorInstanceData_t>(
								const CPackedHandle<SelectorInstanceData_t>& handle);  // 347
			{
			}
			CRelativeOffset<float>::IsValid(); // 30
			CRelativeOffset<float>::Get(); // 90
			CRelativeArray<float>::operator[](
					int index);  // 347
		}
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<SelectorInstanceData_t>(
							const CPackedHandle<SelectorInstanceData_t>& handle);  // 77
		CAnimGraphInstanceData::operator[]<SelectorInstanceData_t>(
							const CPackedHandle<SelectorInstanceData_t>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<SelectorInstanceData_t>(
							const CPackedHandle<SelectorInstanceData_t>& handle);  // 339
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<SelectorInstanceData_t>(
							const CPackedHandle<SelectorInstanceData_t>& handle);  // 77
		CAnimGraphInstanceData::operator[]<SelectorInstanceData_t>(
							const CPackedHandle<SelectorInstanceData_t>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<SelectorInstanceData_t>(
							const CPackedHandle<SelectorInstanceData_t>& handle);  // 340
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<SelectorInstanceData_t>(
							const CPackedHandle<SelectorInstanceData_t>& handle);  // 77
		CAnimGraphInstanceData::operator[]<SelectorInstanceData_t>(
							const CPackedHandle<SelectorInstanceData_t>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<SelectorInstanceData_t>(
							const CPackedHandle<SelectorInstanceData_t>& handle);  // 341
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<SelectorInstanceData_t>(
							const CPackedHandle<SelectorInstanceData_t>& handle);  // 77
		CAnimGraphInstanceData::operator[]<SelectorInstanceData_t>(
							const CPackedHandle<SelectorInstanceData_t>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<SelectorInstanceData_t>(
							const CPackedHandle<SelectorInstanceData_t>& handle);  // 342
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<SelectorInstanceData_t>(
							const CPackedHandle<SelectorInstanceData_t>& handle);  // 77
		CAnimGraphInstanceData::operator[]<SelectorInstanceData_t>(
							const CPackedHandle<SelectorInstanceData_t>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<SelectorInstanceData_t>(
							const CPackedHandle<SelectorInstanceData_t>& handle);  // 344
	}
} /* size: 0 */

// <01952D1A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:359
// variable: 1
void CSelectorUpdateNode::IsFinished(CAnimGraphUpdateContext& context)
{
	const CAnimUpdateNodeBase* childNode; // 361
} /* size: 52, variables: 1 */

// <01952C89> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:371
// variable: 1
void CSelectorUpdateNode::GetTimeTillFinished(CAnimGraphUpdateContext& context)
{
	const CAnimUpdateNodeBase* childNode; // 373
} /* size: 58, variables: 1 */

// <01952AAC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:383
// variable: 1
// function calls: 5
void CSelectorUpdateNode::OnSave(const CAnimGraphUpdateContext& context, ISave* pSave)
{
	const SelectorInstanceData_t* pInstData; // 385
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<SelectorInstanceData_t>(
						const CPackedHandle<SelectorInstanceData_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<SelectorInstanceData_t>(
						const CPackedHandle<SelectorInstanceData_t>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<SelectorInstanceData_t>(
						const CPackedHandle<SelectorInstanceData_t>& handle);  // 385
} /* size: 131, variables: 1, inline expansions: 5 (76 bytes) */

// <019528CF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:390
// variable: 1
// function calls: 5
void CSelectorUpdateNode::OnRestore(CAnimGraphUpdateContext& context, IRestore* pRestore)
{
	SelectorInstanceData_t* pInstData; // 392
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<SelectorInstanceData_t>(
						const CPackedHandle<SelectorInstanceData_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<SelectorInstanceData_t>(
						const CPackedHandle<SelectorInstanceData_t>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<SelectorInstanceData_t>(
						const CPackedHandle<SelectorInstanceData_t>& handle);  // 392
} /* size: 131, variables: 1, inline expansions: 5 (76 bytes) */

// <01951F03> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:397
// variables: 5
// function calls: 35
void CSelectorUpdateNode::CalculateRootMotion(CAnimGraphUpdateContext& context)
{
	CRootMotion motion; // 399
	const int32  nCurrentStateIndex; // 401
	{
		const CRelativeArray<float>& weights; // 404
		{
			int32 i; // 405
			{
				CRootMotion childMotion; // 409
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
						const CRootMotion  &);  // 409
				{
				}
				CRelativeOffset<const CAnimUpdateNodeBase::IsValid(); // 35
				CRelativeOffset<const CAnimUpdateNodeBase::Get(); // 97
				CRelativeArray<const CAnimUpdateNodeBase::operator[](
						int index);  // 411
				{
				}
				CRelativeOffset<const CAnimUpdateNodeBase::IsValid(); // 35
				CRelativeOffset<const CAnimUpdateNodeBase::Get(); // 97
				CRelativeArray<const CAnimUpdateNodeBase::operator[](
						int index);  // 413
				Vector::operator=(
						const Vector& vOther);  // 17
				{
				}
				CRotation::operator=(
						const CRotation& rot);  // 17
				CMotionTransform::operator=(
						CMotionTransform &);  // 11
				CRootMotion::operator=(
						CRootMotion &);  // 413
				{
				}
				CRelativeOffset<float>::IsValid(); // 35
				CRelativeOffset<float>::Get(); // 97
				CRelativeArray<float>::operator[](
						int index);  // 416
			}
			CRelativeArray<float>::Count(); // 405
			CRelativeOffset<float>::IsValid(); // 35
			CRelativeOffset<float>::Get(); // 97
			CRelativeArray<float>::operator[](
					int index);  // 407
		}
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<SelectorInstanceData_t>(
							const CPackedHandle<SelectorInstanceData_t>& handle);  // 77
		CAnimGraphInstanceData::operator[]<SelectorInstanceData_t>(
							const CPackedHandle<SelectorInstanceData_t>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<SelectorInstanceData_t>(
							const CPackedHandle<SelectorInstanceData_t>& handle);  // 404
	}
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
			const CRootMotion  &);  // 399
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<SelectorInstanceData_t>(
						const CPackedHandle<SelectorInstanceData_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<SelectorInstanceData_t>(
						const CPackedHandle<SelectorInstanceData_t>& handle);  // 59
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	CAnimGraphUpdateContext::operator[]<SelectorInstanceData_t>(
						const CPackedHandle<SelectorInstanceData_t>& handle);  // 401
} /* size: 0, variables: 2, inline expansions: 9 (375 bytes) */

// <0195116A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:425
// variables: 6
// function calls: 44
void CSelectorUpdateNode::CalculateFootMotion(CAnimGraphUpdateContext& context, const CMotionTransform& newLocalToWorld, CStrideStatus& footPoseInfo)
{
	const int32  nCurrentStateIndex; // 429
	{
		CStrideStatus childFootPoseInfo; // 432
		const CRelativeArray<float>& weights; // 434
		int nActiveCount; // 436
		{
			int32 i; // 438
			{
				int iFoot; // 450
				{
				}
				CRelativeOffset<float>::IsValid(); // 35
				CRelativeOffset<float>::Get(); // 97
				CRelativeArray<float>::operator[](
						int index);  // 452
				Vector::operator=(
						const Vector& vOther);  // 17
				{
				}
				CRotation::operator=(
						const CRotation& rot);  // 17
				CMotionTransform::operator=(
						CMotionTransform &);  // 12
				{
				}
				CRotation::operator=(
						const CRotation& rot);  // 17
				Vector::operator=(
						const Vector& vOther);  // 17
				CMotionTransform::operator=(
						CMotionTransform &);  // 12
				{
				}
				CRotation::operator=(
						const CRotation& rot);  // 17
				Vector::operator=(
						const Vector& vOther);  // 17
				CMotionTransform::operator=(
						CMotionTransform &);  // 12
				Vector::operator=(
						const Vector& vOther);  // 188
				CFootTrajectory::operator=(
						CFootTrajectory &);  // 12
				Vector::operator=(
						const Vector& vOther);  // 188
				CFootTrajectory::operator=(
						CFootTrajectory &);  // 12
				Vector::operator=(
						const Vector& vOther);  // 12
				Vector::operator=(
						const Vector& vOther);  // 12
				Vector::operator=(
						const Vector& vOther);  // 12
				Vector::operator=(
						const Vector& vOther);  // 12
				CFootMotionStatus::operator=(
						CFootMotionStatus &);  // 452
			}
			CRelativeArray<float>::Count(); // 438
			CRelativeOffset<float>::IsValid(); // 35
			CRelativeOffset<float>::Get(); // 97
			CRelativeArray<float>::operator[](
					int index);  // 440
			{
			}
			CRelativeOffset<const CAnimUpdateNodeBase::IsValid(); // 35
			CRelativeOffset<const CAnimUpdateNodeBase::Get(); // 97
			CRelativeArray<const CAnimUpdateNodeBase::operator[](
					int index);  // 440
			{
			}
			CRelativeOffset<const CAnimUpdateNodeBase::IsValid(); // 35
			CRelativeOffset<const CAnimUpdateNodeBase::Get(); // 97
			CRelativeArray<const CAnimUpdateNodeBase::operator[](
					int index);  // 444
			{
			}
			CRelativeOffset<const CAnimUpdateNodeBase::IsValid(); // 35
			CRelativeOffset<const CAnimUpdateNodeBase::Get(); // 97
			CRelativeArray<const CAnimUpdateNodeBase::operator[](
					int index);  // 448
		}
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<SelectorInstanceData_t>(
							const CPackedHandle<SelectorInstanceData_t>& handle);  // 77
		CAnimGraphInstanceData::operator[]<SelectorInstanceData_t>(
							const CPackedHandle<SelectorInstanceData_t>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<SelectorInstanceData_t>(
							const CPackedHandle<SelectorInstanceData_t>& handle);  // 434
	}
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<SelectorInstanceData_t>(
						const CPackedHandle<SelectorInstanceData_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<SelectorInstanceData_t>(
						const CPackedHandle<SelectorInstanceData_t>& handle);  // 59
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	CAnimGraphUpdateContext::operator[]<SelectorInstanceData_t>(
						const CPackedHandle<SelectorInstanceData_t>& handle);  // 429
} /* size: 0, variables: 1, inline expansions: 5 (123 bytes) */

// <01950D82> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:463
// variables: 5
// function calls: 11
void CSelectorUpdateNode::UpdateCurrentIndex(CAnimGraphUpdateContext& context)
{
	SelectorInstanceData_t* pInstData; // 465
	int newIndex; // 467
	{
		const CAnimUpdateNodeBase* childNode; // 474
		{
			float flResetTime; // 477
			{
				const CAnimUpdateNodeBase* pPrevChildNode; // 480
				CRelativeArray<const CAnimUpdateNodeBase::Count(); // 87
				CRelativeOffset<const CAnimUpdateNodeBase::IsValid(); // 35
				CRelativeOffset<const CAnimUpdateNodeBase::Get(); // 97
				CRelativeArray<const CAnimUpdateNodeBase::operator[](
						int index);  // 89
				CSelectorUpdateNode::GetChild(
					int index);  // 85
				CSelectorUpdateNode::GetChild(
					int index);  // 480
			}
		}
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<SelectorInstanceData_t>(
						const CPackedHandle<SelectorInstanceData_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<SelectorInstanceData_t>(
						const CPackedHandle<SelectorInstanceData_t>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<SelectorInstanceData_t>(
						const CPackedHandle<SelectorInstanceData_t>& handle);  // 465
} /* size: 365, variables: 2, inline expansions: 5 (85 bytes) */

// <01950077> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:493
// variables: 20
// function calls: 49
void CSelectorUpdateNode::UpdateBlendWeights(CAnimGraphUpdateContext& context)
{
	SelectorInstanceData_t* pInstData; // 495
	const int  currentStateIndex; // 497
	CRelativeArray<float>& weights; // 499
	float sumWeights; // 501
	{
		int wrapCount; // 508
		float unClampedCycle; // 509
		const float  blendStartTime; // 510
		const float  elapsedTime; // 511
		float cycle; // 513
		{
			int32 i; // 517
			CRelativeArray<float>::Count(); // 517
			CRelativeOffset<float>::IsValid(); // 30
			CRelativeOffset<float>::Get(); // 90
			CRelativeArray<float>::operator[](
					int index);  // 521
		}
		{
			int32 i; // 536
			CRelativeOffset<float>::IsValid(); // 30
			CRelativeOffset<float>::Get(); // 90
			CRelativeArray<float>::operator[](
					int index);  // 538
			CRelativeArray<float>::Count(); // 536
		}
		{
			float mainStateWeight; // 545
			float weightScale; // 553
			{
				int32 i; // 556
				CRelativeArray<float>::Count(); // 556
				CRelativeOffset<float>::IsValid(); // 30
				CRelativeOffset<float>::Get(); // 90
				CRelativeArray<float>::operator[](
						int index);  // 560
			}
			{
				int i; // 101
				{
					float t2; // 103
					float t3; // 104
					float invT; // 106
					float invT2; // 107
					Vector2DMultiply(const Vector2D& a,
							vec_t b,
							Vector2D& c);  // 702
					Vector2D::Vector2D(); // 701
					Vector2D::operator*(
							float fl);  // 729
					operator*(float fl,
							const Vector2D& v);  // 111
					Vector2DMultiply(const Vector2D& a,
							vec_t b,
							Vector2D& c);  // 702
					Vector2D::Vector2D(); // 701
					Vector2D::operator*(
							float fl);  // 729
					operator*(float fl,
							const Vector2D& v);  // 110
					Vector2D::Vector2D(); // 701
					Vector2D::operator*(
							float fl);  // 729
					operator*(float fl,
							const Vector2D& v);  // 112
					Vector2D::Vector2D(); // 687
					Vector2DAdd(const Vector2D& a,
							const Vector2D& b,
							Vector2D& c);  // 688
					Vector2D::operator+(
							const Vector2D& v);  // 111
					Vector2D::Vector2D(); // 687
					Vector2DAdd(const Vector2D& a,
							const Vector2D& b,
							Vector2D& c);  // 688
					Vector2D::operator+(
							const Vector2D& v);  // 112
					CloseEnough(float a,
							float b,
							float epsilon);  // 114
				}
			}
			CBlendCurve::Evaluate(
				float t);  // 545
			{
			}
			CRelativeOffset<float>::IsValid(); // 30
			CRelativeOffset<float>::Get(); // 90
			CRelativeArray<float>::operator[](
					int index);  // 548
		}
		{
		}
		CRelativeOffset<float>::IsValid(); // 30
		CRelativeOffset<float>::Get(); // 90
		CRelativeArray<float>::operator[](
				int index);  // 541
	}
	{
		int32 i; // 567
		CRelativeArray<float>::Count(); // 567
		CRelativeOffset<float>::IsValid(); // 30
		CRelativeOffset<float>::Get(); // 90
		CRelativeArray<float>::operator[](
				int index);  // 569
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<SelectorInstanceData_t>(
						const CPackedHandle<SelectorInstanceData_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<SelectorInstanceData_t>(
						const CPackedHandle<SelectorInstanceData_t>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<SelectorInstanceData_t>(
						const CPackedHandle<SelectorInstanceData_t>& handle);  // 495
	{
	}
	CRelativeOffset<float>::IsValid(); // 30
	CRelativeOffset<float>::Get(); // 90
	CRelativeArray<float>::operator[](
			int index);  // 572
} /* size: 0, variables: 4, inline expansions: 8 (165 bytes) */

// <0194FD96> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:587
// variable: 1
// function calls: 11
void CSelectorUpdateNode::GetCurrentChild(CAnimGraphUpdateContext& context)
{
	int currentStateIndex; // 589
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<SelectorInstanceData_t>(
						const CPackedHandle<SelectorInstanceData_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<SelectorInstanceData_t>(
						const CPackedHandle<SelectorInstanceData_t>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<SelectorInstanceData_t>(
						const CPackedHandle<SelectorInstanceData_t>& handle);  // 589
	CRelativeArray<const CAnimUpdateNodeBase::IsValidIndex(
			int index);  // 105
	_DebuggerBreakInlineExpressionWrapper(void); // 105
	CRelativeArray<const CAnimUpdateNodeBase::VerifyValidIndex(
			int index);  // 590
	CRelativeOffset<const CAnimUpdateNodeBase::IsValid(); // 35
	CRelativeOffset<const CAnimUpdateNodeBase::Get(); // 97
	CRelativeArray<const CAnimUpdateNodeBase::operator[](
			int index);  // 592
} /* size: 0, variables: 1, inline expansions: 11 (175 bytes) */

// <0194FC75> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:599
// variable: 1
// function calls: 3
void CSelectorUpdateNode::CalculateCurrentIndex(CAnimGraphUpdateContext& context)
{
	CAnimVariant paramValue; // 601
	CAnimVariant::GetType(); // 603
	Clamp<int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 613
	CAnimVariant::GetValue<CAnimEnum>(); // 609
} /* size: 132, variables: 1, inline expansions: 3 (21 bytes) */

// <0194FB39> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:620
// function calls: 3
void CSelectorUpdateNode::SetChild(int index, const CAnimUpdateNodeBase* pChildNode)
{
	{
	}
	CRelativeOffset<const CAnimUpdateNodeBase::IsValid(); // 30
	CRelativeOffset<const CAnimUpdateNodeBase::Get(); // 90
	CRelativeArray<const CAnimUpdateNodeBase::operator[](
			int index);  // 622
} /* size: 0, inline expansions: 3 (136 bytes) */

// <0194F9FD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:626
// function calls: 3
void CSelectorUpdateNode::SetTag(int index, int8 nTagIndex)
{
	{
	}
	CRelativeOffset<signed char>::IsValid(); // 30
	CRelativeOffset<signed char>::Get(); // 90
	CRelativeArray<signed char>::operator[](
			int index);  // 628
} /* size: 0, inline expansions: 3 (136 bytes) */

// <0194F834> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/selectorupdatenode.cpp:632
// variables: 2
// function calls: 5
void CSelectorUpdateNode::OnSelectionChanged(CAnimGraphUpdateContext& context, int newChoice)
{
	SelectorInstanceData_t* pInstData; // 634
	int lastChoice; // 636
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<SelectorInstanceData_t>(
						const CPackedHandle<SelectorInstanceData_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<SelectorInstanceData_t>(
						const CPackedHandle<SelectorInstanceData_t>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<SelectorInstanceData_t>(
						const CPackedHandle<SelectorInstanceData_t>& handle);  // 634
} /* size: 0, variables: 2, inline expansions: 5 (0 bytes) */

