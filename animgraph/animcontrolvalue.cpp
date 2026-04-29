
//
// animgraph/animcontrolvalue.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 2
//

// <00E47847> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animcontrolvalue.cpp:10
// variables: 19
// function calls: 111
float EvaluateControlValue(ControlValue valueEnum, CAnimGraphUpdateContext& context, const CStateMachineUpdateNode* pStateMachineNode, const CTransitionUpdateData& transition)
{
	float resultValue; // 12
	const char   __FUNCTION__; // 10521
	{
		int currentStateIndex; // 51
		{
			const CStateUpdateData& srcState; // 54
			{
				CMotionTransform totalMovement; // 57
				CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
				CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 57
				VectorLength(const Vector& v); // 1256
				Vector::Length(); // 44
				CMotionTransform::Length(); // 58
			}
			{
			}
			CRelativeOffset<CStateUpdateData>::IsValid(); // 35
			CRelativeOffset<CStateUpdateData>::Get(); // 97
			CRelativeArray<CStateUpdateData>::operator[](
					int index);  // 54
			CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 55
		}
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		CSmartPtr<CAnimGraphInstanceData, CRefCountAccessor>::operator*(); // 48
		CAnimGraphInstanceContext::GetInstanceData(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CStateMachineInstanceData>(
							const CPackedHandle<CStateMachineInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CStateMachineInstanceData>(
							const CPackedHandle<CStateMachineInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CStateMachineInstanceData>(
							const CPackedHandle<CStateMachineInstanceData>& handle);  // 51
	}
	{
		int currentStateIndex; // 66
		{
			const CStateUpdateData& srcState; // 69
			{
				CMotionTransform remainingMovement; // 72
				CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
				CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 72
				_mm_load_ss(const float* __P); // 21
				_mm_sqrt_ss(__m128 __A); // 21
				_mm_cvtss_f32(__m128 __A); // 21
				FastSqrt(float x); // 1249
				VectorLength(const Vector& v); // 1256
				Vector::Length(); // 44
				CMotionTransform::Length(); // 73
			}
			{
			}
			CRelativeOffset<CStateUpdateData>::IsValid(); // 35
			CRelativeOffset<CStateUpdateData>::Get(); // 97
			CRelativeArray<CStateUpdateData>::operator[](
					int index);  // 69
			CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 70
		}
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		CSmartPtr<CAnimGraphInstanceData, CRefCountAccessor>::operator*(); // 48
		CAnimGraphInstanceContext::GetInstanceData(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CStateMachineInstanceData>(
							const CPackedHandle<CStateMachineInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CStateMachineInstanceData>(
							const CPackedHandle<CStateMachineInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CStateMachineInstanceData>(
							const CPackedHandle<CStateMachineInstanceData>& handle);  // 66
	}
	{
		int destStateIndex; // 81
		{
			const CStateUpdateData& dstState; // 84
			{
				CMotionTransform totalMovement; // 87
				CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
				CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 87
				VectorLength(const Vector& v); // 1256
				Vector::Length(); // 44
				CMotionTransform::Length(); // 88
			}
			{
			}
			CRelativeOffset<CStateUpdateData>::IsValid(); // 35
			CRelativeOffset<CStateUpdateData>::Get(); // 97
			CRelativeArray<CStateUpdateData>::operator[](
					int index);  // 84
			CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 85
		}
	}
	{
		int destStateIndex; // 96
		{
			const CStateUpdateData& dstState; // 99
			{
				CMotionTransform remainingMovement; // 102
				CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
				CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 102
			}
			{
			}
			CRelativeOffset<CStateUpdateData>::IsValid(); // 35
			CRelativeOffset<CStateUpdateData>::Get(); // 97
			CRelativeArray<CStateUpdateData>::operator[](
					int index);  // 99
			CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 100
		}
	}
	{
		float moveHeading; // 111
		float facingHeading; // 112
		CAnimParamHandle::CAnimParamHandle(); // 111
		CAnimParamHandle::CAnimParamHandle(); // 112
	}
	{
		int currentStateIndex; // 119
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		CSmartPtr<CAnimGraphInstanceData, CRefCountAccessor>::operator*(); // 48
		CAnimGraphInstanceContext::GetInstanceData(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CStateMachineInstanceData>(
							const CPackedHandle<CStateMachineInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CStateMachineInstanceData>(
							const CPackedHandle<CStateMachineInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CStateMachineInstanceData>(
							const CPackedHandle<CStateMachineInstanceData>& handle);  // 119
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		CSmartPtr<CAnimGraphInstanceData, CRefCountAccessor>::operator*(); // 48
		CAnimGraphInstanceContext::GetInstanceData(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CStateMachineInstanceData>(
							const CPackedHandle<CStateMachineInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CStateMachineInstanceData>(
							const CPackedHandle<CStateMachineInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CStateMachineInstanceData>(
							const CPackedHandle<CStateMachineInstanceData>& handle);  // 122
		{
		}
		CRelativeOffset<float>::IsValid(); // 30
		CRelativeOffset<float>::Get(); // 90
		CRelativeArray<float>::operator[](
				int index);  // 122
	}
	{
		int destStateIndex; // 129
		CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
		CSmartPtr<CAnimGraphInstanceData, CRefCountAccessor>::operator*(); // 48
		CAnimGraphInstanceContext::GetInstanceData(); // 59
		PackedHandleID::PackedHandleID(
				const PackedHandleID& rhs);  // 260
		CPackedDataBase::operator[]<CStateMachineInstanceData>(
							const CPackedHandle<CStateMachineInstanceData>& handle);  // 77
		CAnimGraphInstanceData::operator[]<CStateMachineInstanceData>(
							const CPackedHandle<CStateMachineInstanceData>& handle);  // 59
		CAnimGraphUpdateContext::operator[]<CStateMachineInstanceData>(
							const CPackedHandle<CStateMachineInstanceData>& handle);  // 132
		{
		}
		CRelativeOffset<float>::IsValid(); // 30
		CRelativeOffset<float>::Get(); // 90
		CRelativeArray<float>::operator[](
				int index);  // 132
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 230
	}
	CAnimParamHandle::CAnimParamHandle(); // 222
	CAnimParamHandle::CAnimParamHandle(); // 218
	CAnimParamHandle::CAnimParamHandle(); // 214
	CAnimParamHandle::CAnimParamHandle(); // 210
	CAnimParamHandle::CAnimParamHandle(); // 206
	CAnimParamHandle::CAnimParamHandle(); // 202
	CAnimParamHandle::CAnimParamHandle(); // 198
	CAnimParamHandle::CAnimParamHandle(); // 194
	CAnimParamHandle::CAnimParamHandle(); // 190
	CAnimParamHandle::CAnimParamHandle(); // 186
	CAnimParamHandle::CAnimParamHandle(); // 182
	CAnimParamHandle::CAnimParamHandle(); // 178
	CAnimParamHandle::CAnimParamHandle(); // 174
	CAnimParamHandle::CAnimParamHandle(); // 170
	CAnimParamHandle::CAnimParamHandle(); // 162
	CAnimParamHandle::CAnimParamHandle(); // 158
	CAnimParamHandle::CAnimParamHandle(); // 166
	CAnimParamHandle::CAnimParamHandle(); // 154
	CAnimParamHandle::CAnimParamHandle(); // 150
	CAnimParamHandle::CAnimParamHandle(); // 146
	CAnimParamHandle::CAnimParamHandle(); // 142
	CAnimParamHandle::CAnimParamHandle(); // 138
	CAnimParamHandle::CAnimParamHandle(); // 42
	CAnimParamHandle::CAnimParamHandle(); // 37
	CAnimParamHandle::CAnimParamHandle(); // 33
	CAnimParamHandle::CAnimParamHandle(); // 29
	CAnimParamHandle::CAnimParamHandle(); // 25
	CAnimParamHandle::CAnimParamHandle(); // 21
	CAnimParamHandle::CAnimParamHandle(); // 17
	CAnimParamHandle::CAnimParamHandle(); // 226
	CAnimParamHandle::CAnimParamHandle(); // 46
} /* size: 0, variables: 2, inline expansions: 31 (291 bytes) */

// <00E475CF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animcontrolvalue.cpp:237
// variables: 3
// function calls: 9
const char* GetControlValueName(ControlValue valueEnum)
{
	EnumIntrospectionHandle_t hIntrospect; // 239
	const CSchemaEnumeratorInfo* pEnumerator; // 240
	const char* friendlyName; // 242
	SchemaTypeScope(void); // 145
	Schema_FindDeclaredEnum(const char* pName); // 239
	CSchemaMetadataSet::CSchemaMetadataSet(
				uint16 nNumEntries,
				const SchemaMetadataEntryData_t* pEntries);  // 16
	CSchemaEnumeratorInfo::GetMetadata(); // 88
	SchemaMetaGetPtr2(EnumeratorIntrospectionHandle_t enumeratorInfo,
				const char* pKey);  // 26
	TagName(void); // 26
	GetPtr(EnumeratorIntrospectionHandle_t pObj); // 26
	GetValue(EnumeratorIntrospectionHandle_t pObj,
		const char* defaultValue);  // 242
	CSchemaEnumeratorInfo::GetName(); // 249
} /* size: 0, variables: 3, inline expansions: 9 (198 bytes) */

