
//
// animgraph/cycleconditionupdater.cpp
//
//	referenced by: libanimationsystem.so
//
//	function: 1
//

// <015F97A2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/cycleconditionupdater.cpp:10
// variables: 4
// function calls: 28
void CCycleConditionUpdater::Evaluate(CAnimGraphUpdateContext& context, const CStateMachineUpdateNode* pStateMachineNode, const CTransitionUpdateData& transition)
{
	bool bResult; // 12
	const CStateUpdateData* pCurrentState; // 14
	{
		float cycleValue; // 18
		CAnimVariant comparisonValue; // 20
		CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
		CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 18
		CAnimVariant::SetValue<float>(
				const float& value);  // 159
		CAnimVariant::CAnimVariant<float>(
					const float& v);  // 20
		CAnimVariant::SetValue<float>(
				const float& value);  // 159
		CAnimVariant::CAnimVariant<float>(
					const float& v);  // 25
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 424
		CAnimVariant::SetValueUntyped(
				AnimParamType_t nType,
				const void* pData);  // 419
		CAnimVariant::SetValueUntyped(
				AnimParamType_t nType,
				const void* pData);  // 168
		CAnimVariant::operator=(
				const CAnimVariant& rhs);  // 25
		CAnimVariant::SetValue<float>(
				const float& value);  // 159
		CAnimVariant::CAnimVariant<float>(
					const float& v);  // 37
		CAnimVariant::GetValueUntyped(); // 168
		CAnimVariant::GetType(); // 168
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 424
		CAnimVariant::SetValueUntyped(
				AnimParamType_t nType,
				const void* pData);  // 419
		CAnimVariant::SetValueUntyped(
				AnimParamType_t nType,
				const void* pData);  // 168
		CAnimVariant::operator=(
				const CAnimVariant& rhs);  // 33
		CAnimVariant::SetValue<float>(
				const float& value);  // 159
		CAnimVariant::CAnimVariant<float>(
					const float& v);  // 29
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 424
		CAnimVariant::SetValueUntyped(
				AnimParamType_t nType,
				const void* pData);  // 419
		CAnimVariant::SetValueUntyped(
				AnimParamType_t nType,
				const void* pData);  // 168
		CAnimVariant::operator=(
				const CAnimVariant& rhs);  // 29
	}
	CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 16
} /* size: 335, variables: 2, inline expansions: 1 (3 bytes) */

