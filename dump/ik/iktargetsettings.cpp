
//
// ik/iktargetsettings.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 8
//

// <034C5853> ik/iktargetsettings.cpp:8
// variables: 4
// function calls: 75
void IKTargetSettings_t::KV3TransferLoad(CKV3TransferLoadContext* pContext)
{
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 106
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			uint& nNextValueHint,
			const KeyValues3* pDefaultValue);  // 289
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 289
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 534
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<long long int>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<long long int>(); // 694
	KeyValues3::GetValueAsNumeric<long long int>(); // 189
	KeyValues3::GetValueInt64(); // 543
	{
		size_t i; // 460
	}
	Pairs(void); // 459
	KV3Transfer_EnumeratorValueFromName<IKTargetSource>(const char* pEnumeratorName,
								IKTargetSource* pOutValue);  // 536
	LoadValue<IKTargetSource>(CKV3TransferLoadContext* pContext,
					const KeyValues3* pLoadFromValue,
					IKTargetSource& value,
					type *);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<IKTargetSource>(
					IKTargetSource& destValue,
					const KeyValues3* pLoadFromMember);  // 292
	CKV3TransferLoadContext::LoadValueFromMember<IKTargetSource>(
						CKV3MemberName memberNameAndHash,
						IKTargetSource& destValue,
						uint& nNextMemberHint);  // 282
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 282
	CKV3TransferLoadContext::LoadValueFromMember<IKTargetSource>(
						CKV3MemberName memberNameAndHash,
						IKTargetSource& destValue);  // 10
	CKV3MemberName::CKV3MemberName<15>(
				const char& str);  // 10
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 106
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			uint& nNextValueHint,
			const KeyValues3* pDefaultValue);  // 289
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 289
	CUtlStack<const KeyValues3::Count(); // 413
	CKV3TransferLoadContext::LoadClassInstance<IKBoneNameAndIndex_t>(
						IKBoneNameAndIndex_t* pClassInstance,
						const KeyValues3* pNestedValue);  // 495
	LoadValue<IKBoneNameAndIndex_t>(CKV3TransferLoadContext* pContext,
					const KeyValues3* pLoadFromValue,
					IKBoneNameAndIndex_t& value,
					type *);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<IKBoneNameAndIndex_t>(
						IKBoneNameAndIndex_t& destValue,
						const KeyValues3* pLoadFromMember);  // 292
	{
		KeyValues3 nullValue; // 300
		CUtlStack<const KeyValues3::Count(); // 413
		CKV3TransferLoadContext::LoadClassInstance<IKBoneNameAndIndex_t>(
							IKBoneNameAndIndex_t* pClassInstance,
							const KeyValues3* pNestedValue);  // 495
		LoadValue<IKBoneNameAndIndex_t>(CKV3TransferLoadContext* pContext,
						const KeyValues3* pLoadFromValue,
						IKBoneNameAndIndex_t& value,
						type *);  // 1548
		CKV3TransferLoadContext::LoadValueDirect<IKBoneNameAndIndex_t>(
							IKBoneNameAndIndex_t& destValue,
							const KeyValues3* pLoadFromMember);  // 301
	}
	CKV3TransferLoadContext::LoadValueFromMember<IKBoneNameAndIndex_t>(
							CKV3MemberName memberNameAndHash,
							IKBoneNameAndIndex_t& destValue,
							uint& nNextMemberHint);  // 287
	CKV3TransferLoadContext::LoadValueFromMember<IKBoneNameAndIndex_t>(
							CKV3MemberName memberNameAndHash,
							IKBoneNameAndIndex_t& destValue,
							uint& nNextMemberHint);  // 282
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 282
	CKV3TransferLoadContext::LoadValueFromMember<IKBoneNameAndIndex_t>(
							CKV3MemberName memberNameAndHash,
							IKBoneNameAndIndex_t& destValue);  // 11
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 11
	CKV3MemberName::CKV3MemberName<33>(
				const char& str);  // 12
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 106
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			uint& nNextValueHint,
			const KeyValues3* pDefaultValue);  // 289
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 289
	CUtlStack<const KeyValues3::Count(); // 413
	CKV3TransferLoadContext::LoadClassInstance<AnimParamID>(
					AnimParamID* pClassInstance,
					const KeyValues3* pNestedValue);  // 495
	LoadValue<AnimParamID>(CKV3TransferLoadContext* pContext,
				const KeyValues3* pLoadFromValue,
				AnimParamID& value,
				type *);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<AnimParamID>(
					AnimParamID& destValue,
					const KeyValues3* pLoadFromMember);  // 292
	{
		KeyValues3 nullValue; // 300
		CUtlStack<const KeyValues3::Count(); // 413
		CKV3TransferLoadContext::LoadClassInstance<AnimParamID>(
						AnimParamID* pClassInstance,
						const KeyValues3* pNestedValue);  // 495
		LoadValue<AnimParamID>(CKV3TransferLoadContext* pContext,
					const KeyValues3* pLoadFromValue,
					AnimParamID& value,
					type *);  // 1548
		CKV3TransferLoadContext::LoadValueDirect<AnimParamID>(
						AnimParamID& destValue,
						const KeyValues3* pLoadFromMember);  // 301
	}
	CKV3TransferLoadContext::LoadValueFromMember<AnimParamID>(
					CKV3MemberName memberNameAndHash,
					AnimParamID& destValue,
					uint& nNextMemberHint);  // 287
	CKV3TransferLoadContext::LoadValueFromMember<AnimParamID>(
					CKV3MemberName memberNameAndHash,
					AnimParamID& destValue,
					uint& nNextMemberHint);  // 282
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 282
	CKV3TransferLoadContext::LoadValueFromMember<AnimParamID>(
					CKV3MemberName memberNameAndHash,
					AnimParamID& destValue);  // 12
	CKV3MemberName::CKV3MemberName<20>(
				const char& str);  // 13
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 106
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			uint& nNextValueHint,
			const KeyValues3* pDefaultValue);  // 289
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 289
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 534
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<long long int>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<long long int>(); // 694
	KeyValues3::GetValueAsNumeric<long long int>(); // 189
	KeyValues3::GetValueInt64(); // 543
	{
		size_t i; // 460
	}
	Pairs(void); // 459
	KV3Transfer_EnumeratorValueFromName<IKTargetCoordinateSystem>(const char* pEnumeratorName,
									IKTargetCoordinateSystem* pOutValue);  // 536
	LoadValue<IKTargetCoordinateSystem>(CKV3TransferLoadContext* pContext,
						const KeyValues3* pLoadFromValue,
						IKTargetCoordinateSystem& value,
						type *);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<IKTargetCoordinateSystem>(
							IKTargetCoordinateSystem& destValue,
							const KeyValues3* pLoadFromMember);  // 292
	CKV3TransferLoadContext::LoadValueFromMember<IKTargetCoordinateSystem>(
							CKV3MemberName memberNameAndHash,
							IKTargetCoordinateSystem& destValue,
							uint& nNextMemberHint);  // 282
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 282
	CKV3TransferLoadContext::LoadValueFromMember<IKTargetCoordinateSystem>(
							CKV3MemberName memberNameAndHash,
							IKTargetCoordinateSystem& destValue);  // 13
} /* size: 0, inline expansions: 67 (5653 bytes) */

// <034C4319> ik/iktargetsettings.cpp:16
// variables: 2
// function calls: 71
void IKTargetSettings_t::KV3TransferSave(CKV3TransferSaveContext* pContext)
{
	CKV3MemberName::CKV3MemberName<15>(
				const char& str);  // 18
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 151
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 151
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 158
	CKV3TransferSaveContext::CreateTargetMember(
				CKV3MemberName memberNameAndHash);  // 149
	CKV3TransferSaveContext::CreateTargetMember(
				CKV3MemberName memberNameAndHash);  // 164
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 164
	Pairs(void); // 441
	{
		size_t i; // 442
	}
	{
	}
	KV3Transfer_EnumeratorNameFromValue<IKTargetSource>(IKTargetSource nValue); // 439
	KV3Transfer_EnumeratorNameFromValue<IKTargetSource>(IKTargetSource nValue); // 511
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 526
	SaveValue<IKTargetSource>(CKV3TransferSaveContext* pContext,
					KeyValues3* pSaveToValue,
					const IKTargetSource& value,
					type *);  // 509
	SaveValue<IKTargetSource>(CKV3TransferSaveContext* pContext,
					KeyValues3* pSaveToValue,
					const IKTargetSource& value,
					type *);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<IKTargetSource>(
					const IKTargetSource& sourceValue,
					KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<IKTargetSource>(
						CKV3MemberName memberNameAndHash,
						const IKTargetSource& sourceValue);  // 18
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 19
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 164
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 151
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 151
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 158
	CKV3TransferSaveContext::CreateTargetMember(
				CKV3MemberName memberNameAndHash);  // 149
	CKV3TransferSaveContext::CreateTargetMember(
				CKV3MemberName memberNameAndHash);  // 164
	CUtlStack<KeyValues3::Count(); // 199
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 213
	CKV3TransferSaveContext::SaveClassPointer<const IKBoneNameAndIndex_t>(
							const IKBoneNameAndIndex_t* const& pClassInstance,
							KeyValues3* pSaveToValue);  // 172
	CKV3TransferSaveContext::SaveClassPointer<const IKBoneNameAndIndex_t>(
							const IKBoneNameAndIndex_t* const& pClassInstance,
							KeyValues3* pSaveToValue);  // 488
	SaveValue<IKBoneNameAndIndex_t>(CKV3TransferSaveContext* pContext,
					KeyValues3* pSaveToValue,
					const IKBoneNameAndIndex_t& value,
					type *);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<IKBoneNameAndIndex_t>(
						const IKBoneNameAndIndex_t& sourceValue,
						KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<IKBoneNameAndIndex_t>(
						CKV3MemberName memberNameAndHash,
						const IKBoneNameAndIndex_t& sourceValue);  // 19
	CKV3MemberName::CKV3MemberName<33>(
				const char& str);  // 20
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 164
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 151
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 151
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 158
	CKV3TransferSaveContext::CreateTargetMember(
				CKV3MemberName memberNameAndHash);  // 149
	CKV3TransferSaveContext::CreateTargetMember(
				CKV3MemberName memberNameAndHash);  // 164
	CUtlStack<KeyValues3::Count(); // 199
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 213
	CKV3TransferSaveContext::SaveClassPointer<const IKBoneNameAndIndex_t>(
							const IKBoneNameAndIndex_t* const& pClassInstance,
							KeyValues3* pSaveToValue);  // 172
	CKV3TransferSaveContext::SaveClassPointer<const AnimParamID>(
						const AnimParamID* const& pClassInstance,
						KeyValues3* pSaveToValue);  // 488
	SaveValue<AnimParamID>(CKV3TransferSaveContext* pContext,
				KeyValues3* pSaveToValue,
				const AnimParamID& value,
				type *);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<AnimParamID>(
					const AnimParamID& sourceValue,
					KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<AnimParamID>(
					CKV3MemberName memberNameAndHash,
					const AnimParamID& sourceValue);  // 20
	CKV3MemberName::CKV3MemberName<20>(
				const char& str);  // 21
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 151
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 151
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 158
	CKV3TransferSaveContext::CreateTargetMember(
				CKV3MemberName memberNameAndHash);  // 149
	CKV3TransferSaveContext::CreateTargetMember(
				CKV3MemberName memberNameAndHash);  // 164
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 164
	Pairs(void); // 441
	{
		size_t i; // 442
	}
	{
	}
	KV3Transfer_EnumeratorNameFromValue<IKTargetCoordinateSystem>(IKTargetCoordinateSystem nValue); // 439
	KV3Transfer_EnumeratorNameFromValue<IKTargetCoordinateSystem>(IKTargetCoordinateSystem nValue); // 511
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 209
	KeyValues3::SetValueInt(
			int value);  // 526
	SaveValue<IKTargetCoordinateSystem>(CKV3TransferSaveContext* pContext,
						KeyValues3* pSaveToValue,
						const IKTargetCoordinateSystem& value,
						type *);  // 509
	SaveValue<IKTargetCoordinateSystem>(CKV3TransferSaveContext* pContext,
						KeyValues3* pSaveToValue,
						const IKTargetCoordinateSystem& value,
						type *);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<IKTargetCoordinateSystem>(
							const IKTargetCoordinateSystem& sourceValue,
							KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<IKTargetCoordinateSystem>(
							CKV3MemberName memberNameAndHash,
							const IKTargetCoordinateSystem& sourceValue);  // 21
} /* size: 0, inline expansions: 71 (5073 bytes) */

// <034C4136> ik/iktargetsettings.cpp:24
// variable: 1
// function calls: 3
CTransform GetTargetBone(const CModel* pModel, const IPoseAccessor* pPoseAccessor, const IKTargetSettings_t* pTargetSettings)
{
	int nBoneIndex; // 26
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 34
	}
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 31
} /* size: 0, variables: 1, inline expansions: 2 (36 bytes) */

// <034C392E> ik/iktargetsettings.cpp:42
// variables: 2
// function calls: 39
void IKTargetSettings_t::GetTarget(const CModel* pModel, const IPoseAccessor* pPose, const CTransform* pxWsDefaultTarget)
{
	const char   __FUNCTION__; // 23574
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 47
	}
	{
		_mm_cvtss_f32(__m128 __A); // 1496
		GetXSIMD<>(fltx4 a); // 74
		VectorAligned::x(); // 158
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 158
		_mm_cvtss_f32(__m128 __A); // 1515
		GetYSIMD<>(fltx4 a); // 75
		VectorAligned::y(); // 158
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 158
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		VectorAligned::z(); // 158
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 158
		VectorAligned::IsValid(); // 44
		_mm_cvtss_f32(__m128 __A); // 1496
		GetXSIMD<>(fltx4 a); // 74
		QuaternionAligned::x(); // 198
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 198
		_mm_cvtss_f32(__m128 __A); // 1515
		GetYSIMD<>(fltx4 a); // 75
		QuaternionAligned::y(); // 198
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 198
		_mm_cvtss_f32(__m128 __A); // 1534
		GetZSIMD<>(fltx4 a); // 76
		QuaternionAligned::z(); // 198
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 198
		_mm_cvtss_f32(__m128 __A); // 1553
		GetWSIMD<>(fltx4 a); // 77
		QuaternionAligned::w(); // 198
		FloatBits(const vec_t& f); // 112
		IsFinite(const vec_t& f); // 198
		QuaternionAligned::IsValid(); // 44
		CTransform::IsValid(); // 51
		_DebuggerBreakInlineExpressionWrapper(void); // 51
	}
} /* size: 0, variables: 1 */

// <034C3815> ik/iktargetsettings.cpp:61
// variables: 2
// function call: 1
void IKTargetSettings_t::Initialize(const CModel* pModel, const CSpaceAgnosticBoneAccessor& boneAccessor)
{
	const char   __FUNCTION__; // 23601
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 66
	}
	AnimParamID::IsValid(); // 70
} /* size: 0, variables: 1, inline expansions: 1 (7 bytes) */

// <034C37E4> ik/iktargetsettings.cpp:76
void OnTargetSourceChanged(void* pPropertyDomain)
{
} /* size: 10 */

// <034C379E> ik/iktargetsettings.cpp:81
// variable: 1
void VisibleIfUsesAnimgraphParameter(void* pThis)
{
	const IKTargetSettings_t* pTyped; // 83
} /* size: 15, variables: 1 */

// <034C3758> ik/iktargetsettings.cpp:93
// variable: 1
void VisibleIfUsesBone(void* pThis)
{
	const IKTargetSettings_t* pTyped; // 95
} /* size: 16, variables: 1 */

