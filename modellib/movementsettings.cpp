
//
// modellib/movementsettings.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 42
//

// <04DC476B> modellib/movementsettings.cpp:12
void CMoveSpeed::GetName()
{
} /* size: 0 */

// <04DC3841> modellib/movementsettings.cpp:18
// function calls: 4
void CMoveSpeed::SetName(const CUtlString& name)
{
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 20
} /* size: 0, inline expansions: 4 (0 bytes) */

// <04DC4795> modellib/movementsettings.cpp:24
void CMoveSpeed::GetSpeed()
{
} /* size: 0 */

// <04DC37E6> modellib/movementsettings.cpp:30
void CMoveSpeed::SetSpeed(float flSpeed)
{
} /* size: 0 */

// <04DC3062> modellib/movementsettings.cpp:36
// function calls: 28
void CMoveSpeed::KV3TransferSave(CKV3TransferSaveContext* pContext)
{
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
	CUtlString::Get(); // 1043
	SaveValue<CUtlString>(CKV3TransferSaveContext* pContext,
				KeyValues3* pSaveToValue,
				const CUtlString& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<CUtlString>(
					const CUtlString& sourceValue,
					KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<CUtlString>(
					CKV3MemberName memberNameAndHash,
					const CUtlString& sourceValue);  // 38
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<5>(
				const char& str);  // 38
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<6>(
				const char& str);  // 39
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
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 221
	KeyValues3::SetValueFloat(
			float value);  // 776
	SaveValue<float>(CKV3TransferSaveContext* pContext,
			KeyValues3* pSaveToValue,
			const float& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<float>(
				const float& sourceValue,
				KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<float>(
				CKV3MemberName memberNameAndHash,
				const float& sourceValue);  // 39
} /* size: 0, inline expansions: 28 (0 bytes) */

// <04DC257D> modellib/movementsettings.cpp:43
// variables: 2
// function calls: 40
void CMoveSpeed::KV3TransferLoad(CKV3TransferLoadContext* pContext)
{
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 106
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			uint& nNextValueHint,
			const KeyValues3* pDefaultValue);  // 289
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 289
	LoadValue<CUtlString>(CKV3TransferLoadContext* pContext,
				const KeyValues3* pLoadFromValue,
				CUtlString& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<CUtlString>(
					CUtlString& destValue,
					const KeyValues3* pLoadFromMember);  // 292
	{
		KeyValues3 nullValue; // 300
		LoadValue<CUtlString>(CKV3TransferLoadContext* pContext,
					const KeyValues3* pLoadFromValue,
					CUtlString& value);  // 1548
		CKV3TransferLoadContext::LoadValueDirect<CUtlString>(
						CUtlString& destValue,
						const KeyValues3* pLoadFromMember);  // 301
	}
	CKV3TransferLoadContext::LoadValueFromMember<CUtlString>(
					CKV3MemberName memberNameAndHash,
					CUtlString& destValue,
					uint& nNextMemberHint);  // 287
	CKV3TransferLoadContext::LoadValueFromMember<CUtlString>(
					CKV3MemberName memberNameAndHash,
					CUtlString& destValue,
					uint& nNextMemberHint);  // 282
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 282
	CKV3TransferLoadContext::LoadValueFromMember<CUtlString>(
					CKV3MemberName memberNameAndHash,
					CUtlString& destValue);  // 45
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<5>(
				const char& str);  // 45
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<6>(
				const char& str);  // 46
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
	KeyValues3::GetType(); // 696
	KV3Helper_StringToNumber<float>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<float>(); // 694
	{
	}
	KeyValues3::GetValueAsNumeric<float>(); // 199
	KeyValues3::GetValueFloat(); // 776
	LoadValue<float>(CKV3TransferLoadContext* pContext,
			const KeyValues3* pLoadFromValue,
			float& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<float>(
				float& destValue,
				const KeyValues3* pLoadFromMember);  // 292
	{
		KeyValues3 nullValue; // 300
		KeyValues3::Internal_Type(); // 90
		KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
		KeyValues3::GetType(); // 696
		KV3Helper_StringToNumber<float>(const char* pString); // 715
		KeyValues3::GetValueAsNumeric<float>(); // 694
		{
		}
		KeyValues3::GetValueAsNumeric<float>(); // 199
		KeyValues3::GetValueFloat(); // 776
		LoadValue<float>(CKV3TransferLoadContext* pContext,
				const KeyValues3* pLoadFromValue,
				float& value);  // 1548
		CKV3TransferLoadContext::LoadValueDirect<float>(
					float& destValue,
					const KeyValues3* pLoadFromMember);  // 301
	}
	CKV3TransferLoadContext::LoadValueFromMember<float>(
					CKV3MemberName memberNameAndHash,
					float& destValue,
					uint& nNextMemberHint);  // 287
	CKV3TransferLoadContext::LoadValueFromMember<float>(
					CKV3MemberName memberNameAndHash,
					float& destValue,
					uint& nNextMemberHint);  // 282
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 282
	CKV3TransferLoadContext::LoadValueFromMember<float>(
					CKV3MemberName memberNameAndHash,
					float& destValue);  // 46
} /* size: 0, inline expansions: 29 (0 bytes) */

// <04DC2420> modellib/movementsettings.cpp:53
// function calls: 6
void CMovementSettings::CMovementSettings()
{
	CUtlString::CUtlString(); // 53
	CUtlMemory<CMoveSpeed, int>::ValidateGrowSize(); // 475
	CUtlMemory<CMoveSpeed, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::CUtlVector(); // 53
} /* size: 0, inline expansions: 6 (0 bytes) */

// <04DC2404> modellib/movementsettings.cpp:53
void CMovementSettings::CMovementSettings()
{
} /* size: 0 */

// <04DC1EB1> modellib/movementsettings.cpp:59
// function calls: 25
void CMovementSettings::CMovementSettings(const CMovementSettings& rhs)
{
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 60
	CUtlMemory<CMoveSpeed, int>::ValidateGrowSize(); // 475
	CUtlMemory<CMoveSpeed, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 434
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::Count(); // 573
	CUtlMemory<CMoveSpeed, int>::Base(); // 112
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::Base(); // 102
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::begin(); // 574
	CUtlMemory<CMoveSpeed, int>::Base(); // 113
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::Base(); // 105
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::Count(); // 105
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::end(); // 574
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 19
	CMoveSpeed::operator=(
			const CMoveSpeed  &);  // 209
	UtlTraitsCopyRange<CMoveSpeed>(const CMoveSpeed* pFrom,
					const CMoveSpeed* pFromEnd,
					CMoveSpeed* pTo);  // 200
	UtlTraitsCopyRange<CMoveSpeed>(const CMoveSpeed* pFrom,
					const CMoveSpeed* pFromEnd,
					CMoveSpeed* pTo);  // 574
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::operator=(
			const CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >& other);  // 565
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::operator=(
			const CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >& other);  // 452
	CUtlVector<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::operator=(
			const CUtlVector<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >& src);  // 434
	CUtlVector<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::CUtlVector(
			const CUtlVector<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >& src);  // 61
} /* size: 0, inline expansions: 25 (0 bytes) */

// <04DC1E89> modellib/movementsettings.cpp:59
void CMovementSettings::CMovementSettings(const CMovementSettings& rhs)
{
} /* size: 0 */

// <04DC1B88> modellib/movementsettings.cpp:75
// function calls: 12
void CMovementSettings::CMovementSettings(CMovementSettings& rhs)
{
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 76
	CUtlMemory<CMoveSpeed, int>::ValidateGrowSize(); // 475
	CUtlMemory<CMoveSpeed, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 437
	swap<int>(int& __a,
			int& __b);  // 19
	V_swap<int>(int& x,
			int& y);  // 1352
	swap<CMoveSpeed*>(CMoveSpeed *& __a,
				CMoveSpeed *& __b);  // 19
	V_swap<CMoveSpeed*>(CMoveSpeed *& x,
				CMoveSpeed *& y);  // 1354
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::Swap(
		CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >& vec);  // 437
	CUtlVector<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::CUtlVector(
			CUtlVector<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >& src);  // 77
} /* size: 0, inline expansions: 12 (0 bytes) */

// <04DC1B60> modellib/movementsettings.cpp:75
void CMovementSettings::CMovementSettings(CMovementSettings& rhs)
{
} /* size: 0 */

// <04DC1675> modellib/movementsettings.cpp:91
// function calls: 23
void CMovementSettings::operator=(const CMovementSettings& rhs)
{
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 93
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::Count(); // 573
	CUtlMemory<CMoveSpeed, int>::Base(); // 112
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::Base(); // 102
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::begin(); // 574
	CUtlMemory<CMoveSpeed, int>::Base(); // 113
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::Base(); // 105
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::Count(); // 105
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::end(); // 574
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 19
	CMoveSpeed::operator=(
			const CMoveSpeed  &);  // 209
	UtlTraitsCopyRange<CMoveSpeed>(const CMoveSpeed* pFrom,
					const CMoveSpeed* pFromEnd,
					CMoveSpeed* pTo);  // 200
	UtlTraitsCopyRange<CMoveSpeed>(const CMoveSpeed* pFrom,
					const CMoveSpeed* pFromEnd,
					CMoveSpeed* pTo);  // 574
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::operator=(
			const CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >& other);  // 565
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::operator=(
			const CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >& other);  // 452
	CUtlVector<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::operator=(
			const CUtlVector<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >& src);  // 94
	VectorAligned::operator=(
			const VectorAligned& src);  // 102
} /* size: 0, inline expansions: 23 (0 bytes) */

// <04DC13A7> modellib/movementsettings.cpp:108
// function calls: 11
void CMovementSettings::operator=(CMovementSettings& rhs)
{
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 110
	swap<int>(int& __a,
			int& __b);  // 19
	V_swap<int>(int& x,
			int& y);  // 1352
	swap<CMoveSpeed*>(CMoveSpeed *& __a,
				CMoveSpeed *& __b);  // 19
	V_swap<CMoveSpeed*>(CMoveSpeed *& x,
				CMoveSpeed *& y);  // 1354
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::Swap(
		CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >& vec);  // 440
	CUtlVector<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::operator=(
			CUtlVector<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >& src);  // 111
	VectorAligned::operator=(
			const VectorAligned& src);  // 119
} /* size: 0, inline expansions: 11 (0 bytes) */

// <04DC1376> modellib/movementsettings.cpp:124
void CMovementSettings::GetRunSpeed()
{
} /* size: 0 */

// <04DC1337> modellib/movementsettings.cpp:130
void CMovementSettings::SetRunSpeed(float flSpeed)
{
} /* size: 0 */

// <04DC1306> modellib/movementsettings.cpp:136
void CMovementSettings::GetWalkSpeed()
{
} /* size: 0 */

// <04DC12C7> modellib/movementsettings.cpp:142
void CMovementSettings::SetWalkSpeed(float flSpeed)
{
} /* size: 0 */

// <04DC1266> modellib/movementsettings.cpp:148
// function call: 1
void CMovementSettings::GetCustomSpeedCount()
{
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::Count(); // 150
} /* size: 0, inline expansions: 1 (0 bytes) */

// <04DC1032> modellib/movementsettings.cpp:154
// function calls: 11
void CMovementSettings::AddCustomSpeed()
{
	CUtlMemory<CMoveSpeed, int>::NumAllocated(); // 1143
	CUtlMemory<CMoveSpeed, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::Element(
		int i);  // 1148
	CUtlString::CUtlString(); // 24
	CMoveSpeed::CMoveSpeed(); // 1479
	Construct<CMoveSpeed>(CMoveSpeed* pMemory); // 1148
	CUtlMemory<CMoveSpeed, int>::Base(); // 112
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::Base(); // 368
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::AddToTail(); // 156
} /* size: 0, inline expansions: 11 (0 bytes) */

// <04DC0D04> modellib/movementsettings.cpp:160
// function calls: 13
void CMovementSettings::RemoveCustomSpeed(int index)
{
	CUtlMemory<CMoveSpeed, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::Element(
		int i);  // 1607
	CUtlString::~CUtlString(); // 19
	CMoveSpeed::~CMoveSpeed(); // 1526
	Destruct<CMoveSpeed>(CMoveSpeed* pMemory); // 1607
	CUtlMemory<CMoveSpeed, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::Element(
		int i);  // 1114
	CUtlMemory<CMoveSpeed, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::Remove(
		int elem);  // 162
} /* size: 0, inline expansions: 13 (0 bytes) */

// <04DC47BF> modellib/movementsettings.cpp:166
// function calls: 2
void CMovementSettings::GetCustomSpeed(int index)
{
	CUtlMemory<CMoveSpeed, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::operator[](
			int i);  // 168
} /* size: 0, inline expansions: 2 (0 bytes) */

// <04DC0CDC> modellib/movementsettings.cpp:166
void CMovementSettings::GetCustomSpeed(int index)
{
} /* size: 0 */

// <04DC0ADE> modellib/movementsettings.cpp:178
// variable: 1
// function calls: 7
void CMovementSettings::GetCustomSpeed(const char* name, float& flSpeedOut)
{
	{
		int i; // 180
		CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::Count(); // 180
		CUtlString::Get(); // 99
		CUtlString::String(); // 182
		CUtlMemory<CMoveSpeed, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::operator[](
				int i);  // 182
		V_strcmp(const char* s1,
			const char* s2);  // 182
		CMoveSpeed::GetSpeed(); // 184
	}
} /* size: 0 */

// <04DC0AAD> modellib/movementsettings.cpp:193
void CMovementSettings::UseSmoothPaths()
{
} /* size: 0 */

// <04DC0A6E> modellib/movementsettings.cpp:199
void CMovementSettings::SetUseSmoothPaths(bool bUseSmoothPaths)
{
} /* size: 0 */

// <04DC0A3D> modellib/movementsettings.cpp:205
void CMovementSettings::UseMotionDamping()
{
} /* size: 0 */

// <04DC09FE> modellib/movementsettings.cpp:211
void CMovementSettings::SetUseMotionDamping(bool bUseDamping)
{
} /* size: 0 */

// <04DC09CD> modellib/movementsettings.cpp:217
void CMovementSettings::GetMaxSpringTension()
{
} /* size: 0 */

// <04DC098E> modellib/movementsettings.cpp:223
void CMovementSettings::SetMaxSpringTension(float flMaxAccel)
{
} /* size: 0 */

// <04DC095D> modellib/movementsettings.cpp:229
void CMovementSettings::GetSpringConstant()
{
} /* size: 0 */

// <04DC091E> modellib/movementsettings.cpp:235
void CMovementSettings::SetSpringConstant(float flSpringConstant)
{
} /* size: 0 */

// <04DC08ED> modellib/movementsettings.cpp:241
void CMovementSettings::GetSharpStartAngle()
{
} /* size: 0 */

// <04DC08AE> modellib/movementsettings.cpp:247
void CMovementSettings::SetSharpStartAngle(float flSharpStartAngle)
{
} /* size: 0 */

// <04DC087D> modellib/movementsettings.cpp:253
void CMovementSettings::GetSlopeTraceScale()
{
} /* size: 0 */

// <04DC07FC> modellib/movementsettings.cpp:259
// function call: 1
void CMovementSettings::SetSlopeTraceScale(const VectorAligned& vValue)
{
	VectorAligned::operator=(
			const VectorAligned& src);  // 261
} /* size: 0, inline expansions: 1 (0 bytes) */

// <04DBDB3F> modellib/movementsettings.cpp:264
// variables: 4
// function calls: 166
void CMovementSettings::KV3TransferSave(CKV3TransferSaveContext* pContext)
{
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
	CUtlString::Get(); // 1043
	SaveValue<CUtlString>(CKV3TransferSaveContext* pContext,
				KeyValues3* pSaveToValue,
				const CUtlString& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<CUtlString>(
					const CUtlString& sourceValue,
					KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<CUtlString>(
					CKV3MemberName memberNameAndHash,
					const CUtlString& sourceValue);  // 266
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<5>(
				const char& str);  // 266
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 267
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
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::Count(); // 830
	AlignValue<unsigned int>(unsigned int val,
				uintp alignment);  // 225
	CKV3TransferSaveContext::NotePooledAllocation(
				uint nBytes);  // 830
	NotePooledAllocation(CKV3TransferSaveContext* pSaveContext,
				const Array_t& arr);  // 604
	{
		KeyValues3* pArrayElement; // 680
		CKV3ArrayIteratorView<false>& __for_range; // 10302
		iterator __for_begin; // 10312
		iterator __for_end; // 10322
		{
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 74
			KeyValues3::GetType(); // 74
		}
		{
		}
		CKV3ArrayIteratorView<false>::CKV3ArrayIteratorView(
					KV3Pointer_t pKV3);  // 67
		CKV3ArrayIteratorView<false>::CKV3ArrayIteratorView(
					KV3Pointer_t pKV3);  // 921
		KeyValues3::IterateArray(); // 680
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 396
		CKV3ArrayIteratorView<false>::begin(); // 680
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 401
		CKV3ArrayIteratorView<false>::end(); // 680
		iterator::operator!=(
				const iterator& rhs);  // 680
		CUtlStack<KeyValues3::Count(); // 199
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 250
		KeyValues3::SetToNull(); // 213
		CKV3TransferSaveContext::SaveClassPointer<const CMoveSpeed>(
							const CMoveSpeed* const& pClassInstance,
							KeyValues3* pSaveToValue);  // 172
		CKV3TransferSaveContext::SaveClassPointer<const CMoveSpeed>(
							const CMoveSpeed* const& pClassInstance,
							KeyValues3* pSaveToValue);  // 488
		SaveValue<CMoveSpeed>(CKV3TransferSaveContext* pContext,
					KeyValues3* pSaveToValue,
					const CMoveSpeed& value,
					type *);  // 1539
		CKV3TransferSaveContext::SaveValueDirect<CMoveSpeed>(
						const CMoveSpeed& sourceValue,
						KeyValues3* pSaveToMember);  // 682
		{
		}
		iterator::operator*(); // 680
	}
	SaveBlittableArrayElements<CMoveSpeed>(CKV3TransferSaveContext* pContext,
						KeyValues3* pSaveToValue,
						int nCount,
						const CMoveSpeed* pValues);  // 606
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::Count(); // 812
	GetCount(const Array_t& arr); // 605
	CUtlMemory<CMoveSpeed, int>::Base(); // 113
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::Base(); // 842
	GetBase(const Array_t& arr); // 606
	SaveValue<CUtlVector<CMoveSpeed> >(CKV3TransferSaveContext* pContext,
						KeyValues3* pSaveToValue,
						const CUtlVector<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >& value,
						type *);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<CUtlVector<CMoveSpeed> >(
						const CUtlVector<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >& sourceValue,
						KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<CUtlVector<CMoveSpeed> >(
							CKV3MemberName memberNameAndHash,
							const CUtlVector<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >& sourceValue);  // 267
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<9>(
				const char& str);  // 268
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
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 221
	KeyValues3::SetValueFloat(
			float value);  // 776
	SaveValue<float>(CKV3TransferSaveContext* pContext,
			KeyValues3* pSaveToValue,
			const float& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<float>(
				const float& sourceValue,
				KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<float>(
				CKV3MemberName memberNameAndHash,
				const float& sourceValue);  // 268
	CKV3MemberName::CKV3MemberName<10>(
				const char& str);  // 269
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
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 221
	KeyValues3::SetValueFloat(
			float value);  // 776
	SaveValue<float>(CKV3TransferSaveContext* pContext,
			KeyValues3* pSaveToValue,
			const float& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<float>(
				const float& sourceValue,
				KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<float>(
				CKV3MemberName memberNameAndHash,
				const float& sourceValue);  // 269
	CKV3MemberName::CKV3MemberName<17>(
				const char& str);  // 270
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
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 221
	KeyValues3::SetValueFloat(
			float value);  // 776
	SaveValue<float>(CKV3TransferSaveContext* pContext,
			KeyValues3* pSaveToValue,
			const float& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<float>(
				const float& sourceValue,
				KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<float>(
				CKV3MemberName memberNameAndHash,
				const float& sourceValue);  // 270
	CKV3MemberName::CKV3MemberName<15>(
				const char& str);  // 271
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
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 221
	KeyValues3::SetValueFloat(
			float value);  // 776
	SaveValue<float>(CKV3TransferSaveContext* pContext,
			KeyValues3* pSaveToValue,
			const float& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<float>(
				const float& sourceValue,
				KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<float>(
				CKV3MemberName memberNameAndHash,
				const float& sourceValue);  // 271
	CKV3MemberName::CKV3MemberName<15>(
				const char& str);  // 272
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
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 766
	SaveValue<bool>(CKV3TransferSaveContext* pContext,
			KeyValues3* pSaveToValue,
			const bool& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<bool>(
				const bool& sourceValue,
				KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<bool>(
				CKV3MemberName memberNameAndHash,
				const bool& sourceValue);  // 272
	CKV3MemberName::CKV3MemberName<17>(
				const char& str);  // 273
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
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 766
	SaveValue<bool>(CKV3TransferSaveContext* pContext,
			KeyValues3* pSaveToValue,
			const bool& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<bool>(
				const bool& sourceValue,
				KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<bool>(
				CKV3MemberName memberNameAndHash,
				const bool& sourceValue);  // 273
	CKV3MemberName::CKV3MemberName<16>(
				const char& str);  // 274
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
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 221
	KeyValues3::SetValueFloat(
			float value);  // 776
	SaveValue<float>(CKV3TransferSaveContext* pContext,
			KeyValues3* pSaveToValue,
			const float& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<float>(
				const float& sourceValue,
				KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<float>(
				CKV3MemberName memberNameAndHash,
				const float& sourceValue);  // 274
	CKV3MemberName::CKV3MemberName<14>(
				const char& str);  // 275
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
	SaveValue<VectorAligned>(CKV3TransferSaveContext* pContext,
				KeyValues3* pSaveToValue,
				const VectorAligned& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<VectorAligned>(
					const VectorAligned& sourceValue,
					KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<VectorAligned>(
					CKV3MemberName memberNameAndHash,
					const VectorAligned& sourceValue);  // 275
} /* size: 0, inline expansions: 145 (0 bytes) */

// <02173FC3> modellib/movementsettings.cpp:264
// variables: 4
// function calls: 166
void CMovementSettings::KV3TransferSave(CKV3TransferSaveContext* pContext)
{
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
	CUtlString::Get(); // 1043
	SaveValue<CUtlString>(CKV3TransferSaveContext* pContext,
				KeyValues3* pSaveToValue,
				const CUtlString& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<CUtlString>(
					const CUtlString& sourceValue,
					KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<CUtlString>(
					CKV3MemberName memberNameAndHash,
					const CUtlString& sourceValue);  // 266
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<5>(
				const char& str);  // 266
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 267
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
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::Count(); // 830
	AlignValue<unsigned int>(unsigned int val,
				uintp alignment);  // 225
	CKV3TransferSaveContext::NotePooledAllocation(
				uint nBytes);  // 830
	NotePooledAllocation(CKV3TransferSaveContext* pSaveContext,
				const Array_t& arr);  // 604
	{
		KeyValues3* pArrayElement; // 680
		CKV3ArrayIteratorView<false>& __for_range; // 23479
		iterator __for_begin; // 23489
		iterator __for_end; // 23499
		{
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 74
			KeyValues3::GetType(); // 74
		}
		{
		}
		CKV3ArrayIteratorView<false>::CKV3ArrayIteratorView(
					KV3Pointer_t pKV3);  // 67
		CKV3ArrayIteratorView<false>::CKV3ArrayIteratorView(
					KV3Pointer_t pKV3);  // 921
		KeyValues3::IterateArray(); // 680
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 396
		CKV3ArrayIteratorView<false>::begin(); // 680
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 401
		CKV3ArrayIteratorView<false>::end(); // 680
		iterator::operator!=(
				const iterator& rhs);  // 680
		CUtlStack<KeyValues3::Count(); // 199
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 250
		KeyValues3::SetToNull(); // 213
		CKV3TransferSaveContext::SaveClassPointer<const CMoveSpeed>(
							const CMoveSpeed* const& pClassInstance,
							KeyValues3* pSaveToValue);  // 172
		CKV3TransferSaveContext::SaveClassPointer<const CMoveSpeed>(
							const CMoveSpeed* const& pClassInstance,
							KeyValues3* pSaveToValue);  // 488
		SaveValue<CMoveSpeed>(CKV3TransferSaveContext* pContext,
					KeyValues3* pSaveToValue,
					const CMoveSpeed& value,
					type *);  // 1539
		CKV3TransferSaveContext::SaveValueDirect<CMoveSpeed>(
						const CMoveSpeed& sourceValue,
						KeyValues3* pSaveToMember);  // 682
		{
		}
		iterator::operator*(); // 680
	}
	SaveBlittableArrayElements<CMoveSpeed>(CKV3TransferSaveContext* pContext,
						KeyValues3* pSaveToValue,
						int nCount,
						const CMoveSpeed* pValues);  // 606
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::Count(); // 812
	GetCount(const Array_t& arr); // 605
	CUtlMemory<CMoveSpeed, int>::Base(); // 113
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::Base(); // 842
	GetBase(const Array_t& arr); // 606
	SaveValue<CUtlVector<CMoveSpeed> >(CKV3TransferSaveContext* pContext,
						KeyValues3* pSaveToValue,
						const CUtlVector<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >& value,
						type *);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<CUtlVector<CMoveSpeed> >(
						const CUtlVector<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >& sourceValue,
						KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<CUtlVector<CMoveSpeed> >(
							CKV3MemberName memberNameAndHash,
							const CUtlVector<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >& sourceValue);  // 267
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<9>(
				const char& str);  // 268
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
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 221
	KeyValues3::SetValueFloat(
			float value);  // 776
	SaveValue<float>(CKV3TransferSaveContext* pContext,
			KeyValues3* pSaveToValue,
			const float& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<float>(
				const float& sourceValue,
				KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<float>(
				CKV3MemberName memberNameAndHash,
				const float& sourceValue);  // 268
	CKV3MemberName::CKV3MemberName<10>(
				const char& str);  // 269
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
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 221
	KeyValues3::SetValueFloat(
			float value);  // 776
	SaveValue<float>(CKV3TransferSaveContext* pContext,
			KeyValues3* pSaveToValue,
			const float& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<float>(
				const float& sourceValue,
				KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<float>(
				CKV3MemberName memberNameAndHash,
				const float& sourceValue);  // 269
	CKV3MemberName::CKV3MemberName<17>(
				const char& str);  // 270
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
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 221
	KeyValues3::SetValueFloat(
			float value);  // 776
	SaveValue<float>(CKV3TransferSaveContext* pContext,
			KeyValues3* pSaveToValue,
			const float& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<float>(
				const float& sourceValue,
				KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<float>(
				CKV3MemberName memberNameAndHash,
				const float& sourceValue);  // 270
	CKV3MemberName::CKV3MemberName<15>(
				const char& str);  // 271
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
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 221
	KeyValues3::SetValueFloat(
			float value);  // 776
	SaveValue<float>(CKV3TransferSaveContext* pContext,
			KeyValues3* pSaveToValue,
			const float& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<float>(
				const float& sourceValue,
				KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<float>(
				CKV3MemberName memberNameAndHash,
				const float& sourceValue);  // 271
	CKV3MemberName::CKV3MemberName<15>(
				const char& str);  // 272
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
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 766
	SaveValue<bool>(CKV3TransferSaveContext* pContext,
			KeyValues3* pSaveToValue,
			const bool& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<bool>(
				const bool& sourceValue,
				KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<bool>(
				CKV3MemberName memberNameAndHash,
				const bool& sourceValue);  // 272
	CKV3MemberName::CKV3MemberName<17>(
				const char& str);  // 273
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
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 766
	SaveValue<bool>(CKV3TransferSaveContext* pContext,
			KeyValues3* pSaveToValue,
			const bool& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<bool>(
				const bool& sourceValue,
				KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<bool>(
				CKV3MemberName memberNameAndHash,
				const bool& sourceValue);  // 273
	CKV3MemberName::CKV3MemberName<16>(
				const char& str);  // 274
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
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 221
	KeyValues3::SetValueFloat(
			float value);  // 776
	SaveValue<float>(CKV3TransferSaveContext* pContext,
			KeyValues3* pSaveToValue,
			const float& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<float>(
				const float& sourceValue,
				KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<float>(
				CKV3MemberName memberNameAndHash,
				const float& sourceValue);  // 274
	CKV3MemberName::CKV3MemberName<14>(
				const char& str);  // 275
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
	SaveValue<VectorAligned>(CKV3TransferSaveContext* pContext,
				KeyValues3* pSaveToValue,
				const VectorAligned& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<VectorAligned>(
					const VectorAligned& sourceValue,
					KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<VectorAligned>(
					CKV3MemberName memberNameAndHash,
					const VectorAligned& sourceValue);  // 275
} /* size: 0, inline expansions: 145 (0 bytes) */

// <00CE0780> modellib/movementsettings.cpp:264
// variables: 4
// function calls: 166
void CMovementSettings::KV3TransferSave(CKV3TransferSaveContext* pContext)
{
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
	CUtlString::Get(); // 1043
	SaveValue<CUtlString>(CKV3TransferSaveContext* pContext,
				KeyValues3* pSaveToValue,
				const CUtlString& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<CUtlString>(
					const CUtlString& sourceValue,
					KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<CUtlString>(
					CKV3MemberName memberNameAndHash,
					const CUtlString& sourceValue);  // 266
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<5>(
				const char& str);  // 266
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 267
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
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::Count(); // 830
	AlignValue<unsigned int>(unsigned int val,
				uintp alignment);  // 225
	CKV3TransferSaveContext::NotePooledAllocation(
				uint nBytes);  // 830
	NotePooledAllocation(CKV3TransferSaveContext* pSaveContext,
				const Array_t& arr);  // 604
	{
		KeyValues3* pArrayElement; // 680
		CKV3ArrayIteratorView<false>& __for_range; // 24804
		iterator __for_begin; // 24814
		iterator __for_end; // 24824
		{
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 74
			KeyValues3::GetType(); // 74
		}
		{
		}
		CKV3ArrayIteratorView<false>::CKV3ArrayIteratorView(
					KV3Pointer_t pKV3);  // 67
		CKV3ArrayIteratorView<false>::CKV3ArrayIteratorView(
					KV3Pointer_t pKV3);  // 921
		KeyValues3::IterateArray(); // 680
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 396
		CKV3ArrayIteratorView<false>::begin(); // 680
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 401
		CKV3ArrayIteratorView<false>::end(); // 680
		iterator::operator!=(
				const iterator& rhs);  // 680
		CUtlStack<KeyValues3::Count(); // 199
		KeyValues3::Internal_PrepareForInternalType(
						KeyValues3InternalType_t newType);  // 950
		KeyValues3::Internal_PrepareForType(
					KeyValues3Type_t newType);  // 250
		KeyValues3::SetToNull(); // 213
		CKV3TransferSaveContext::SaveClassPointer<const CMoveSpeed>(
							const CMoveSpeed* const& pClassInstance,
							KeyValues3* pSaveToValue);  // 172
		CKV3TransferSaveContext::SaveClassPointer<const CMoveSpeed>(
							const CMoveSpeed* const& pClassInstance,
							KeyValues3* pSaveToValue);  // 488
		SaveValue<CMoveSpeed>(CKV3TransferSaveContext* pContext,
					KeyValues3* pSaveToValue,
					const CMoveSpeed& value,
					type *);  // 1539
		CKV3TransferSaveContext::SaveValueDirect<CMoveSpeed>(
						const CMoveSpeed& sourceValue,
						KeyValues3* pSaveToMember);  // 682
		{
		}
		iterator::operator*(); // 680
	}
	SaveBlittableArrayElements<CMoveSpeed>(CKV3TransferSaveContext* pContext,
						KeyValues3* pSaveToValue,
						int nCount,
						const CMoveSpeed* pValues);  // 606
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::Count(); // 812
	GetCount(const Array_t& arr); // 605
	CUtlMemory<CMoveSpeed, int>::Base(); // 113
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::Base(); // 842
	GetBase(const Array_t& arr); // 606
	SaveValue<CUtlVector<CMoveSpeed> >(CKV3TransferSaveContext* pContext,
						KeyValues3* pSaveToValue,
						const CUtlVector<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >& value,
						type *);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<CUtlVector<CMoveSpeed> >(
						const CUtlVector<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >& sourceValue,
						KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<CUtlVector<CMoveSpeed> >(
							CKV3MemberName memberNameAndHash,
							const CUtlVector<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >& sourceValue);  // 267
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<9>(
				const char& str);  // 268
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
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 221
	KeyValues3::SetValueFloat(
			float value);  // 776
	SaveValue<float>(CKV3TransferSaveContext* pContext,
			KeyValues3* pSaveToValue,
			const float& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<float>(
				const float& sourceValue,
				KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<float>(
				CKV3MemberName memberNameAndHash,
				const float& sourceValue);  // 268
	CKV3MemberName::CKV3MemberName<10>(
				const char& str);  // 269
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
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 221
	KeyValues3::SetValueFloat(
			float value);  // 776
	SaveValue<float>(CKV3TransferSaveContext* pContext,
			KeyValues3* pSaveToValue,
			const float& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<float>(
				const float& sourceValue,
				KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<float>(
				CKV3MemberName memberNameAndHash,
				const float& sourceValue);  // 269
	CKV3MemberName::CKV3MemberName<17>(
				const char& str);  // 270
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
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 221
	KeyValues3::SetValueFloat(
			float value);  // 776
	SaveValue<float>(CKV3TransferSaveContext* pContext,
			KeyValues3* pSaveToValue,
			const float& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<float>(
				const float& sourceValue,
				KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<float>(
				CKV3MemberName memberNameAndHash,
				const float& sourceValue);  // 270
	CKV3MemberName::CKV3MemberName<15>(
				const char& str);  // 271
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
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 221
	KeyValues3::SetValueFloat(
			float value);  // 776
	SaveValue<float>(CKV3TransferSaveContext* pContext,
			KeyValues3* pSaveToValue,
			const float& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<float>(
				const float& sourceValue,
				KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<float>(
				CKV3MemberName memberNameAndHash,
				const float& sourceValue);  // 271
	CKV3MemberName::CKV3MemberName<15>(
				const char& str);  // 272
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
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 766
	SaveValue<bool>(CKV3TransferSaveContext* pContext,
			KeyValues3* pSaveToValue,
			const bool& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<bool>(
				const bool& sourceValue,
				KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<bool>(
				CKV3MemberName memberNameAndHash,
				const bool& sourceValue);  // 272
	CKV3MemberName::CKV3MemberName<17>(
				const char& str);  // 273
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
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 215
	KeyValues3::SetValueBool(
			bool value);  // 766
	SaveValue<bool>(CKV3TransferSaveContext* pContext,
			KeyValues3* pSaveToValue,
			const bool& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<bool>(
				const bool& sourceValue,
				KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<bool>(
				CKV3MemberName memberNameAndHash,
				const bool& sourceValue);  // 273
	CKV3MemberName::CKV3MemberName<16>(
				const char& str);  // 274
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
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 221
	KeyValues3::SetValueFloat(
			float value);  // 776
	SaveValue<float>(CKV3TransferSaveContext* pContext,
			KeyValues3* pSaveToValue,
			const float& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<float>(
				const float& sourceValue,
				KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<float>(
				CKV3MemberName memberNameAndHash,
				const float& sourceValue);  // 274
	CKV3MemberName::CKV3MemberName<14>(
				const char& str);  // 275
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
	SaveValue<VectorAligned>(CKV3TransferSaveContext* pContext,
				KeyValues3* pSaveToValue,
				const VectorAligned& value);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<VectorAligned>(
					const VectorAligned& sourceValue,
					KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<VectorAligned>(
					CKV3MemberName memberNameAndHash,
					const VectorAligned& sourceValue);  // 275
} /* size: 0, inline expansions: 145 (0 bytes) */

// <04DBAD33> modellib/movementsettings.cpp:279
// variables: 4
// function calls: 184
void CMovementSettings::KV3TransferLoad(CKV3TransferLoadContext* pContext)
{
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 338
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 338
	CKV3TransferLoadContext::FindSourceMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 309
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 309
	LoadValue<CUtlString>(CKV3TransferLoadContext* pContext,
				const KeyValues3* pLoadFromValue,
				CUtlString& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<CUtlString>(
					CUtlString& destValue,
					const KeyValues3* pLoadFromMember);  // 316
	CKV3TransferLoadContext::LoadValueFromMemberIfPresent<CUtlString>(
						CKV3MemberName memberNameAndHash,
						CUtlString& destValue);  // 281
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<5>(
				const char& str);  // 281
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 282
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 309
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 338
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 338
	CKV3TransferLoadContext::FindSourceMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 309
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 255
	KeyValues3::IsArray(); // 612
	CKV3TransferLoadContext::AllocatePooledMemory(
				uint nElementSize,
				uint nElementCount);  // 820
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::Count(); // 823
	CUtlMemory<CMoveSpeed, int>::IsExternallyAllocated(); // 577
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 587
	CUtlMemory<CMoveSpeed, int>::ConvertToExternalMemory(
				CMoveSpeed* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 306
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::ConvertToExternalMemory(
				CMoveSpeed* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 823
	SetCount(CKV3TransferLoadContext* pLoadContext,
		Array_t& arr,
		int nCount);  // 613
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::Count(); // 812
	GetCount(const Array_t& arr); // 614
	CUtlMemory<CMoveSpeed, int>::Base(); // 112
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::Base(); // 838
	GetBase(Array_t& arr); // 618
	{
		const KeyValues3* pArrayElement; // 647
		CKV3ArrayIteratorView<true>& __for_range; // 10091
		iterator __for_begin; // 10101
		iterator __for_end; // 10111
		{
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 74
			KeyValues3::GetType(); // 74
		}
		{
		}
		CKV3ArrayIteratorView<true>::CKV3ArrayIteratorView(
					KV3Pointer_t pKV3);  // 67
		CKV3ArrayIteratorView<true>::CKV3ArrayIteratorView(
					KV3Pointer_t pKV3);  // 922
		KeyValues3::IterateArray(); // 647
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 396
		CKV3ArrayIteratorView<true>::begin(); // 647
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 401
		CKV3ArrayIteratorView<true>::end(); // 647
		iterator::operator!=(
				const iterator& rhs);  // 647
		{
		}
		iterator::operator*(); // 647
		CUtlStack<const KeyValues3::Count(); // 413
		CKV3TransferLoadContext::LoadClassInstance<CMoveSpeed>(
						CMoveSpeed* pClassInstance,
						const KeyValues3* pNestedValue);  // 495
		LoadValue<CMoveSpeed>(CKV3TransferLoadContext* pContext,
					const KeyValues3* pLoadFromValue,
					CMoveSpeed& value,
					type *);  // 1548
		CKV3TransferLoadContext::LoadValueDirect<CMoveSpeed>(
						CMoveSpeed& destValue,
						const KeyValues3* pLoadFromMember);  // 651
	}
	LoadBlittableArrayElements<CMoveSpeed>(CKV3TransferLoadContext* pContext,
						const KeyValues3* pLoadFromValue,
						int nCount,
						CMoveSpeed* pValues);  // 618
	LoadValue<CUtlVector<CMoveSpeed> >(CKV3TransferLoadContext* pContext,
						const KeyValues3* pLoadFromValue,
						CUtlVector<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >& value,
						type *);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<CUtlVector<CMoveSpeed> >(
						CUtlVector<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >& destValue,
						const KeyValues3* pLoadFromMember);  // 316
	CKV3TransferLoadContext::LoadValueFromMemberIfPresent<CUtlVector<CMoveSpeed> >(
								CKV3MemberName memberNameAndHash,
								CUtlVector<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >& destValue);  // 282
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<9>(
				const char& str);  // 283
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 309
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 338
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 338
	CKV3TransferLoadContext::FindSourceMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 309
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<float>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<float>(); // 694
	KeyValues3::GetValueAsNumeric<float>(); // 199
	KeyValues3::GetValueFloat(); // 776
	LoadValue<float>(CKV3TransferLoadContext* pContext,
			const KeyValues3* pLoadFromValue,
			float& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<float>(
				float& destValue,
				const KeyValues3* pLoadFromMember);  // 316
	CKV3TransferLoadContext::LoadValueFromMemberIfPresent<float>(
						CKV3MemberName memberNameAndHash,
						float& destValue);  // 283
	CKV3MemberName::CKV3MemberName<10>(
				const char& str);  // 284
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 338
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 338
	CKV3TransferLoadContext::FindSourceMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 309
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 309
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<float>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<float>(); // 694
	KeyValues3::GetValueAsNumeric<float>(); // 199
	KeyValues3::GetValueFloat(); // 776
	LoadValue<float>(CKV3TransferLoadContext* pContext,
			const KeyValues3* pLoadFromValue,
			float& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<float>(
				float& destValue,
				const KeyValues3* pLoadFromMember);  // 316
	CKV3TransferLoadContext::LoadValueFromMemberIfPresent<float>(
						CKV3MemberName memberNameAndHash,
						float& destValue);  // 284
	CKV3MemberName::CKV3MemberName<17>(
				const char& str);  // 285
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 338
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 338
	CKV3TransferLoadContext::FindSourceMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 309
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 309
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<float>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<float>(); // 694
	KeyValues3::GetValueAsNumeric<float>(); // 199
	KeyValues3::GetValueFloat(); // 776
	LoadValue<float>(CKV3TransferLoadContext* pContext,
			const KeyValues3* pLoadFromValue,
			float& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<float>(
				float& destValue,
				const KeyValues3* pLoadFromMember);  // 316
	CKV3TransferLoadContext::LoadValueFromMemberIfPresent<float>(
						CKV3MemberName memberNameAndHash,
						float& destValue);  // 285
	CKV3MemberName::CKV3MemberName<15>(
				const char& str);  // 286
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 338
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 338
	CKV3TransferLoadContext::FindSourceMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 309
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 309
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<float>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<float>(); // 694
	KeyValues3::GetValueAsNumeric<float>(); // 199
	KeyValues3::GetValueFloat(); // 776
	LoadValue<float>(CKV3TransferLoadContext* pContext,
			const KeyValues3* pLoadFromValue,
			float& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<float>(
				float& destValue,
				const KeyValues3* pLoadFromMember);  // 316
	CKV3TransferLoadContext::LoadValueFromMemberIfPresent<float>(
						CKV3MemberName memberNameAndHash,
						float& destValue);  // 286
	CKV3MemberName::CKV3MemberName<15>(
				const char& str);  // 287
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 309
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 338
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 338
	CKV3TransferLoadContext::FindSourceMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 309
	LoadValue<bool>(CKV3TransferLoadContext* pContext,
			const KeyValues3* pLoadFromValue,
			bool& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<bool>(
				bool& destValue,
				const KeyValues3* pLoadFromMember);  // 316
	CKV3TransferLoadContext::LoadValueFromMemberIfPresent<bool>(
						CKV3MemberName memberNameAndHash,
						bool& destValue);  // 287
	CKV3MemberName::CKV3MemberName<17>(
				const char& str);  // 288
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 309
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 338
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 338
	CKV3TransferLoadContext::FindSourceMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 309
	LoadValue<bool>(CKV3TransferLoadContext* pContext,
			const KeyValues3* pLoadFromValue,
			bool& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<bool>(
				bool& destValue,
				const KeyValues3* pLoadFromMember);  // 316
	CKV3TransferLoadContext::LoadValueFromMemberIfPresent<bool>(
						CKV3MemberName memberNameAndHash,
						bool& destValue);  // 288
	CKV3MemberName::CKV3MemberName<16>(
				const char& str);  // 289
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 338
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 338
	CKV3TransferLoadContext::FindSourceMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 309
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 309
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<float>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<float>(); // 694
	KeyValues3::GetValueAsNumeric<float>(); // 199
	KeyValues3::GetValueFloat(); // 776
	LoadValue<float>(CKV3TransferLoadContext* pContext,
			const KeyValues3* pLoadFromValue,
			float& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<float>(
				float& destValue,
				const KeyValues3* pLoadFromMember);  // 316
	CKV3TransferLoadContext::LoadValueFromMemberIfPresent<float>(
						CKV3MemberName memberNameAndHash,
						float& destValue);  // 289
	CKV3MemberName::CKV3MemberName<14>(
				const char& str);  // 290
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 309
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 338
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 338
	CKV3TransferLoadContext::FindSourceMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 309
	KeyValues3::GetValueFloatArray<3>(
				float* pOutValues);  // 1341
	LoadValue<VectorAligned>(CKV3TransferLoadContext* pContext,
				const KeyValues3* pLoadFromValue,
				VectorAligned& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<VectorAligned>(
					VectorAligned& destValue,
					const KeyValues3* pLoadFromMember);  // 316
	CKV3TransferLoadContext::LoadValueFromMemberIfPresent<VectorAligned>(
							CKV3MemberName memberNameAndHash,
							VectorAligned& destValue);  // 290
} /* size: 0, inline expansions: 167 (0 bytes) */

// <021711B7> modellib/movementsettings.cpp:279
// variables: 4
// function calls: 184
void CMovementSettings::KV3TransferLoad(CKV3TransferLoadContext* pContext)
{
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 338
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 338
	CKV3TransferLoadContext::FindSourceMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 309
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 309
	LoadValue<CUtlString>(CKV3TransferLoadContext* pContext,
				const KeyValues3* pLoadFromValue,
				CUtlString& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<CUtlString>(
					CUtlString& destValue,
					const KeyValues3* pLoadFromMember);  // 316
	CKV3TransferLoadContext::LoadValueFromMemberIfPresent<CUtlString>(
						CKV3MemberName memberNameAndHash,
						CUtlString& destValue);  // 281
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<5>(
				const char& str);  // 281
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 282
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 309
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 338
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 338
	CKV3TransferLoadContext::FindSourceMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 309
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 255
	KeyValues3::IsArray(); // 612
	CKV3TransferLoadContext::AllocatePooledMemory(
				uint nElementSize,
				uint nElementCount);  // 820
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::Count(); // 823
	CUtlMemory<CMoveSpeed, int>::IsExternallyAllocated(); // 577
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 587
	CUtlMemory<CMoveSpeed, int>::ConvertToExternalMemory(
				CMoveSpeed* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 306
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::ConvertToExternalMemory(
				CMoveSpeed* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 823
	SetCount(CKV3TransferLoadContext* pLoadContext,
		Array_t& arr,
		int nCount);  // 613
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::Count(); // 812
	GetCount(const Array_t& arr); // 614
	CUtlMemory<CMoveSpeed, int>::Base(); // 112
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::Base(); // 838
	GetBase(Array_t& arr); // 618
	{
		const KeyValues3* pArrayElement; // 647
		CKV3ArrayIteratorView<true>& __for_range; // 23268
		iterator __for_begin; // 23278
		iterator __for_end; // 23288
		{
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 74
			KeyValues3::GetType(); // 74
		}
		{
		}
		CKV3ArrayIteratorView<true>::CKV3ArrayIteratorView(
					KV3Pointer_t pKV3);  // 67
		CKV3ArrayIteratorView<true>::CKV3ArrayIteratorView(
					KV3Pointer_t pKV3);  // 922
		KeyValues3::IterateArray(); // 647
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 396
		CKV3ArrayIteratorView<true>::begin(); // 647
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 401
		CKV3ArrayIteratorView<true>::end(); // 647
		iterator::operator!=(
				const iterator& rhs);  // 647
		{
		}
		iterator::operator*(); // 647
		CUtlStack<const KeyValues3::Count(); // 413
		CKV3TransferLoadContext::LoadClassInstance<CMoveSpeed>(
						CMoveSpeed* pClassInstance,
						const KeyValues3* pNestedValue);  // 495
		LoadValue<CMoveSpeed>(CKV3TransferLoadContext* pContext,
					const KeyValues3* pLoadFromValue,
					CMoveSpeed& value,
					type *);  // 1548
		CKV3TransferLoadContext::LoadValueDirect<CMoveSpeed>(
						CMoveSpeed& destValue,
						const KeyValues3* pLoadFromMember);  // 651
	}
	LoadBlittableArrayElements<CMoveSpeed>(CKV3TransferLoadContext* pContext,
						const KeyValues3* pLoadFromValue,
						int nCount,
						CMoveSpeed* pValues);  // 618
	LoadValue<CUtlVector<CMoveSpeed> >(CKV3TransferLoadContext* pContext,
						const KeyValues3* pLoadFromValue,
						CUtlVector<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >& value,
						type *);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<CUtlVector<CMoveSpeed> >(
						CUtlVector<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >& destValue,
						const KeyValues3* pLoadFromMember);  // 316
	CKV3TransferLoadContext::LoadValueFromMemberIfPresent<CUtlVector<CMoveSpeed> >(
								CKV3MemberName memberNameAndHash,
								CUtlVector<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >& destValue);  // 282
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<9>(
				const char& str);  // 283
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 309
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 338
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 338
	CKV3TransferLoadContext::FindSourceMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 309
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<float>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<float>(); // 694
	KeyValues3::GetValueAsNumeric<float>(); // 199
	KeyValues3::GetValueFloat(); // 776
	LoadValue<float>(CKV3TransferLoadContext* pContext,
			const KeyValues3* pLoadFromValue,
			float& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<float>(
				float& destValue,
				const KeyValues3* pLoadFromMember);  // 316
	CKV3TransferLoadContext::LoadValueFromMemberIfPresent<float>(
						CKV3MemberName memberNameAndHash,
						float& destValue);  // 283
	CKV3MemberName::CKV3MemberName<10>(
				const char& str);  // 284
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 338
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 338
	CKV3TransferLoadContext::FindSourceMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 309
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 309
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<float>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<float>(); // 694
	KeyValues3::GetValueAsNumeric<float>(); // 199
	KeyValues3::GetValueFloat(); // 776
	LoadValue<float>(CKV3TransferLoadContext* pContext,
			const KeyValues3* pLoadFromValue,
			float& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<float>(
				float& destValue,
				const KeyValues3* pLoadFromMember);  // 316
	CKV3TransferLoadContext::LoadValueFromMemberIfPresent<float>(
						CKV3MemberName memberNameAndHash,
						float& destValue);  // 284
	CKV3MemberName::CKV3MemberName<17>(
				const char& str);  // 285
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 338
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 338
	CKV3TransferLoadContext::FindSourceMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 309
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 309
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<float>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<float>(); // 694
	KeyValues3::GetValueAsNumeric<float>(); // 199
	KeyValues3::GetValueFloat(); // 776
	LoadValue<float>(CKV3TransferLoadContext* pContext,
			const KeyValues3* pLoadFromValue,
			float& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<float>(
				float& destValue,
				const KeyValues3* pLoadFromMember);  // 316
	CKV3TransferLoadContext::LoadValueFromMemberIfPresent<float>(
						CKV3MemberName memberNameAndHash,
						float& destValue);  // 285
	CKV3MemberName::CKV3MemberName<15>(
				const char& str);  // 286
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 338
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 338
	CKV3TransferLoadContext::FindSourceMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 309
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 309
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<float>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<float>(); // 694
	KeyValues3::GetValueAsNumeric<float>(); // 199
	KeyValues3::GetValueFloat(); // 776
	LoadValue<float>(CKV3TransferLoadContext* pContext,
			const KeyValues3* pLoadFromValue,
			float& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<float>(
				float& destValue,
				const KeyValues3* pLoadFromMember);  // 316
	CKV3TransferLoadContext::LoadValueFromMemberIfPresent<float>(
						CKV3MemberName memberNameAndHash,
						float& destValue);  // 286
	CKV3MemberName::CKV3MemberName<15>(
				const char& str);  // 287
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 309
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 338
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 338
	CKV3TransferLoadContext::FindSourceMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 309
	LoadValue<bool>(CKV3TransferLoadContext* pContext,
			const KeyValues3* pLoadFromValue,
			bool& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<bool>(
				bool& destValue,
				const KeyValues3* pLoadFromMember);  // 316
	CKV3TransferLoadContext::LoadValueFromMemberIfPresent<bool>(
						CKV3MemberName memberNameAndHash,
						bool& destValue);  // 287
	CKV3MemberName::CKV3MemberName<17>(
				const char& str);  // 288
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 309
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 338
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 338
	CKV3TransferLoadContext::FindSourceMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 309
	LoadValue<bool>(CKV3TransferLoadContext* pContext,
			const KeyValues3* pLoadFromValue,
			bool& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<bool>(
				bool& destValue,
				const KeyValues3* pLoadFromMember);  // 316
	CKV3TransferLoadContext::LoadValueFromMemberIfPresent<bool>(
						CKV3MemberName memberNameAndHash,
						bool& destValue);  // 288
	CKV3MemberName::CKV3MemberName<16>(
				const char& str);  // 289
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 338
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 338
	CKV3TransferLoadContext::FindSourceMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 309
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 309
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<float>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<float>(); // 694
	KeyValues3::GetValueAsNumeric<float>(); // 199
	KeyValues3::GetValueFloat(); // 776
	LoadValue<float>(CKV3TransferLoadContext* pContext,
			const KeyValues3* pLoadFromValue,
			float& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<float>(
				float& destValue,
				const KeyValues3* pLoadFromMember);  // 316
	CKV3TransferLoadContext::LoadValueFromMemberIfPresent<float>(
						CKV3MemberName memberNameAndHash,
						float& destValue);  // 289
	CKV3MemberName::CKV3MemberName<14>(
				const char& str);  // 290
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 309
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 338
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 338
	CKV3TransferLoadContext::FindSourceMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 309
	KeyValues3::GetValueFloatArray<3>(
				float* pOutValues);  // 1341
	LoadValue<VectorAligned>(CKV3TransferLoadContext* pContext,
				const KeyValues3* pLoadFromValue,
				VectorAligned& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<VectorAligned>(
					VectorAligned& destValue,
					const KeyValues3* pLoadFromMember);  // 316
	CKV3TransferLoadContext::LoadValueFromMemberIfPresent<VectorAligned>(
							CKV3MemberName memberNameAndHash,
							VectorAligned& destValue);  // 290
} /* size: 0, inline expansions: 167 (11935 bytes) */

// <00CDD974> modellib/movementsettings.cpp:279
// variables: 4
// function calls: 184
void CMovementSettings::KV3TransferLoad(CKV3TransferLoadContext* pContext)
{
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 338
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 338
	CKV3TransferLoadContext::FindSourceMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 309
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 309
	LoadValue<CUtlString>(CKV3TransferLoadContext* pContext,
				const KeyValues3* pLoadFromValue,
				CUtlString& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<CUtlString>(
					CUtlString& destValue,
					const KeyValues3* pLoadFromMember);  // 316
	CKV3TransferLoadContext::LoadValueFromMemberIfPresent<CUtlString>(
						CKV3MemberName memberNameAndHash,
						CUtlString& destValue);  // 281
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<5>(
				const char& str);  // 281
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 282
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 309
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 338
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 338
	CKV3TransferLoadContext::FindSourceMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 309
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 255
	KeyValues3::IsArray(); // 612
	CKV3TransferLoadContext::AllocatePooledMemory(
				uint nElementSize,
				uint nElementCount);  // 820
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::Count(); // 823
	CUtlMemory<CMoveSpeed, int>::IsExternallyAllocated(); // 577
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 91
	V_memcpy(void* dest,
		const void* src,
		size_t count);  // 587
	CUtlMemory<CMoveSpeed, int>::ConvertToExternalMemory(
				CMoveSpeed* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 306
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::ConvertToExternalMemory(
				CMoveSpeed* pMemory,
				int numElements,
				int nCopyElements,
				bool bSetGrowable,
				uint32 nGrowable_GrowSize);  // 823
	SetCount(CKV3TransferLoadContext* pLoadContext,
		Array_t& arr,
		int nCount);  // 613
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::Count(); // 812
	GetCount(const Array_t& arr); // 614
	CUtlMemory<CMoveSpeed, int>::Base(); // 112
	CUtlVectorBase<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >::Base(); // 838
	GetBase(Array_t& arr); // 618
	{
		const KeyValues3* pArrayElement; // 647
		CKV3ArrayIteratorView<true>& __for_range; // 24593
		iterator __for_begin; // 24603
		iterator __for_end; // 24613
		{
			KeyValues3::Internal_Type(); // 90
			KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
			KeyValues3::GetType(); // 74
			KeyValues3::GetType(); // 74
		}
		{
		}
		CKV3ArrayIteratorView<true>::CKV3ArrayIteratorView(
					KV3Pointer_t pKV3);  // 67
		CKV3ArrayIteratorView<true>::CKV3ArrayIteratorView(
					KV3Pointer_t pKV3);  // 922
		KeyValues3::IterateArray(); // 647
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 396
		CKV3ArrayIteratorView<true>::begin(); // 647
		iterator::iterator(
			const KV3Pointer_t* pArrayElements,
			int nStartingIndex,
			int nArrayElementCount);  // 401
		CKV3ArrayIteratorView<true>::end(); // 647
		iterator::operator!=(
				const iterator& rhs);  // 647
		{
		}
		iterator::operator*(); // 647
		CUtlStack<const KeyValues3::Count(); // 413
		CKV3TransferLoadContext::LoadClassInstance<CMoveSpeed>(
						CMoveSpeed* pClassInstance,
						const KeyValues3* pNestedValue);  // 495
		LoadValue<CMoveSpeed>(CKV3TransferLoadContext* pContext,
					const KeyValues3* pLoadFromValue,
					CMoveSpeed& value,
					type *);  // 1548
		CKV3TransferLoadContext::LoadValueDirect<CMoveSpeed>(
						CMoveSpeed& destValue,
						const KeyValues3* pLoadFromMember);  // 651
	}
	LoadBlittableArrayElements<CMoveSpeed>(CKV3TransferLoadContext* pContext,
						const KeyValues3* pLoadFromValue,
						int nCount,
						CMoveSpeed* pValues);  // 618
	LoadValue<CUtlVector<CMoveSpeed> >(CKV3TransferLoadContext* pContext,
						const KeyValues3* pLoadFromValue,
						CUtlVector<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >& value,
						type *);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<CUtlVector<CMoveSpeed> >(
						CUtlVector<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >& destValue,
						const KeyValues3* pLoadFromMember);  // 316
	CKV3TransferLoadContext::LoadValueFromMemberIfPresent<CUtlVector<CMoveSpeed> >(
								CKV3MemberName memberNameAndHash,
								CUtlVector<CMoveSpeed, CUtlMemory<CMoveSpeed, int> >& destValue);  // 282
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<9>(
				const char& str);  // 283
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 309
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 338
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 338
	CKV3TransferLoadContext::FindSourceMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 309
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<float>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<float>(); // 694
	KeyValues3::GetValueAsNumeric<float>(); // 199
	KeyValues3::GetValueFloat(); // 776
	LoadValue<float>(CKV3TransferLoadContext* pContext,
			const KeyValues3* pLoadFromValue,
			float& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<float>(
				float& destValue,
				const KeyValues3* pLoadFromMember);  // 316
	CKV3TransferLoadContext::LoadValueFromMemberIfPresent<float>(
						CKV3MemberName memberNameAndHash,
						float& destValue);  // 283
	CKV3MemberName::CKV3MemberName<10>(
				const char& str);  // 284
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 338
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 338
	CKV3TransferLoadContext::FindSourceMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 309
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 309
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<float>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<float>(); // 694
	KeyValues3::GetValueAsNumeric<float>(); // 199
	KeyValues3::GetValueFloat(); // 776
	LoadValue<float>(CKV3TransferLoadContext* pContext,
			const KeyValues3* pLoadFromValue,
			float& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<float>(
				float& destValue,
				const KeyValues3* pLoadFromMember);  // 316
	CKV3TransferLoadContext::LoadValueFromMemberIfPresent<float>(
						CKV3MemberName memberNameAndHash,
						float& destValue);  // 284
	CKV3MemberName::CKV3MemberName<17>(
				const char& str);  // 285
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 338
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 338
	CKV3TransferLoadContext::FindSourceMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 309
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 309
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<float>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<float>(); // 694
	KeyValues3::GetValueAsNumeric<float>(); // 199
	KeyValues3::GetValueFloat(); // 776
	LoadValue<float>(CKV3TransferLoadContext* pContext,
			const KeyValues3* pLoadFromValue,
			float& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<float>(
				float& destValue,
				const KeyValues3* pLoadFromMember);  // 316
	CKV3TransferLoadContext::LoadValueFromMemberIfPresent<float>(
						CKV3MemberName memberNameAndHash,
						float& destValue);  // 285
	CKV3MemberName::CKV3MemberName<15>(
				const char& str);  // 286
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 338
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 338
	CKV3TransferLoadContext::FindSourceMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 309
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 309
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<float>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<float>(); // 694
	KeyValues3::GetValueAsNumeric<float>(); // 199
	KeyValues3::GetValueFloat(); // 776
	LoadValue<float>(CKV3TransferLoadContext* pContext,
			const KeyValues3* pLoadFromValue,
			float& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<float>(
				float& destValue,
				const KeyValues3* pLoadFromMember);  // 316
	CKV3TransferLoadContext::LoadValueFromMemberIfPresent<float>(
						CKV3MemberName memberNameAndHash,
						float& destValue);  // 286
	CKV3MemberName::CKV3MemberName<15>(
				const char& str);  // 287
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 309
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 338
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 338
	CKV3TransferLoadContext::FindSourceMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 309
	LoadValue<bool>(CKV3TransferLoadContext* pContext,
			const KeyValues3* pLoadFromValue,
			bool& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<bool>(
				bool& destValue,
				const KeyValues3* pLoadFromMember);  // 316
	CKV3TransferLoadContext::LoadValueFromMemberIfPresent<bool>(
						CKV3MemberName memberNameAndHash,
						bool& destValue);  // 287
	CKV3MemberName::CKV3MemberName<17>(
				const char& str);  // 288
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 309
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 338
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 338
	CKV3TransferLoadContext::FindSourceMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 309
	LoadValue<bool>(CKV3TransferLoadContext* pContext,
			const KeyValues3* pLoadFromValue,
			bool& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<bool>(
				bool& destValue,
				const KeyValues3* pLoadFromMember);  // 316
	CKV3TransferLoadContext::LoadValueFromMemberIfPresent<bool>(
						CKV3MemberName memberNameAndHash,
						bool& destValue);  // 288
	CKV3MemberName::CKV3MemberName<16>(
				const char& str);  // 289
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 338
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 338
	CKV3TransferLoadContext::FindSourceMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 309
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 309
	KeyValues3::Internal_Type(); // 90
	KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
	KeyValues3::GetType(); // 696
	{
	}
	KV3Helper_StringToNumber<float>(const char* pString); // 715
	KeyValues3::GetValueAsNumeric<float>(); // 694
	KeyValues3::GetValueAsNumeric<float>(); // 199
	KeyValues3::GetValueFloat(); // 776
	LoadValue<float>(CKV3TransferLoadContext* pContext,
			const KeyValues3* pLoadFromValue,
			float& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<float>(
				float& destValue,
				const KeyValues3* pLoadFromMember);  // 316
	CKV3TransferLoadContext::LoadValueFromMemberIfPresent<float>(
						CKV3MemberName memberNameAndHash,
						float& destValue);  // 289
	CKV3MemberName::CKV3MemberName<14>(
				const char& str);  // 290
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 309
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 96
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			KeyValues3* pDefaultValue);  // 101
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 101
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 338
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 338
	CKV3TransferLoadContext::FindSourceMember(
			CKV3MemberName memberName,
			const KeyValues3* pDefaultValue);  // 309
	KeyValues3::GetValueFloatArray<3>(
				float* pOutValues);  // 1341
	LoadValue<VectorAligned>(CKV3TransferLoadContext* pContext,
				const KeyValues3* pLoadFromValue,
				VectorAligned& value);  // 1548
	CKV3TransferLoadContext::LoadValueDirect<VectorAligned>(
					VectorAligned& destValue,
					const KeyValues3* pLoadFromMember);  // 316
	CKV3TransferLoadContext::LoadValueFromMemberIfPresent<VectorAligned>(
							CKV3MemberName memberNameAndHash,
							VectorAligned& destValue);  // 290
} /* size: 0, inline expansions: 167 (0 bytes) */

