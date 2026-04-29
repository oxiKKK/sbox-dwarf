
//
// modellib/lookatchain.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 24
//

// <04D9D017> modellib/lookatchain.cpp:11
void CLookAtChainItem::GetBoneName()
{
} /* size: 0 */

// <04D9CEDA> modellib/lookatchain.cpp:17
// function calls: 4
void CLookAtChainItem::SetBoneName(const CUtlString& boneName)
{
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 19
} /* size: 0, inline expansions: 4 (0 bytes) */

// <04D9CE69> modellib/lookatchain.cpp:29
void CLookAtChainItem::SetWeight(float flWeight)
{
} /* size: 0 */

// <04D9C701> modellib/lookatchain.cpp:35
// function calls: 28
void CLookAtChainItem::KV3TransferSave(CKV3TransferSaveContext* pContext)
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
					const CUtlString& sourceValue);  // 37
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<5>(
				const char& str);  // 37
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 38
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
				const float& sourceValue);  // 38
} /* size: 0, inline expansions: 28 (0 bytes) */

// <04D9BC44> modellib/lookatchain.cpp:42
// variables: 2
// function calls: 40
void CLookAtChainItem::KV3TransferLoad(CKV3TransferLoadContext* pContext)
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
					CUtlString& destValue);  // 44
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<5>(
				const char& str);  // 44
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 45
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
					float& destValue);  // 45
} /* size: 0, inline expansions: 29 (0 bytes) */

// <04D9BAF7> modellib/lookatchain.cpp:51
// function calls: 6
void CLookAtChain::CLookAtChain()
{
	CUtlMemory<CLookAtChainItem, int>::ValidateGrowSize(); // 475
	CUtlMemory<CLookAtChainItem, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >::CUtlVector(); // 51
	CUtlString::CUtlString(); // 51
} /* size: 0, inline expansions: 6 (0 bytes) */

// <04D9BADB> modellib/lookatchain.cpp:51
void CLookAtChain::CLookAtChain()
{
} /* size: 0 */

// <04D9B5A8> modellib/lookatchain.cpp:57
// function calls: 25
void CLookAtChain::CLookAtChain(const CLookAtChain& rhs)
{
	CUtlMemory<CLookAtChainItem, int>::ValidateGrowSize(); // 475
	CUtlMemory<CLookAtChainItem, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 434
	CUtlVectorBase<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >::Count(); // 573
	CUtlMemory<CLookAtChainItem, int>::Base(); // 112
	CUtlVectorBase<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >::Base(); // 102
	CUtlVectorBase<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >::begin(); // 574
	CUtlMemory<CLookAtChainItem, int>::Base(); // 113
	CUtlVectorBase<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >::Base(); // 105
	CUtlVectorBase<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >::Count(); // 105
	CUtlVectorBase<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >::end(); // 574
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 16
	CLookAtChainItem::operator=(
			const CLookAtChainItem  &);  // 209
	UtlTraitsCopyRange<CLookAtChainItem>(const CLookAtChainItem* pFrom,
						const CLookAtChainItem* pFromEnd,
						CLookAtChainItem* pTo);  // 200
	UtlTraitsCopyRange<CLookAtChainItem>(const CLookAtChainItem* pFrom,
						const CLookAtChainItem* pFromEnd,
						CLookAtChainItem* pTo);  // 574
	CUtlVectorBase<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >::operator=(
			const CUtlVectorBase<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >& other);  // 565
	CUtlVectorBase<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >::operator=(
			const CUtlVectorBase<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >& other);  // 452
	CUtlVector<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >::operator=(
			const CUtlVector<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >& src);  // 434
	CUtlVector<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >::CUtlVector(
			const CUtlVector<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >& src);  // 59
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 58
} /* size: 0, inline expansions: 25 (0 bytes) */

// <04D9B580> modellib/lookatchain.cpp:57
void CLookAtChain::CLookAtChain(const CLookAtChain& rhs)
{
} /* size: 0 */

// <04D9B165> modellib/lookatchain.cpp:65
// function calls: 17
void CLookAtChain::CLookAtChain(CLookAtChain& rhs)
{
	CUtlMemory<CLookAtChainItem, int>::ValidateGrowSize(); // 475
	CUtlMemory<CLookAtChainItem, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 437
	CUtlMemory<CLookAtChainItem, int>::IsExternallyAllocated(); // 535
	{
	}
	V_swap_through_temp<unsigned int>(unsigned int& x,
						unsigned int& y);  // 536
	V_swap_through_temp<CLookAtChainItem*>(CLookAtChainItem *& x,
						CLookAtChainItem *& y);  // 537
	V_swap_through_temp<int>(int& x,
				int& y);  // 538
	CUtlMemory<CLookAtChainItem, int>::Swap(
		CUtlMemory<CLookAtChainItem, int>& mem);  // 1351
	swap<int>(int& __a,
			int& __b);  // 19
	V_swap<int>(int& x,
			int& y);  // 1352
	swap<CLookAtChainItem*>(CLookAtChainItem *& __a,
				CLookAtChainItem *& __b);  // 19
	V_swap<CLookAtChainItem*>(CLookAtChainItem *& x,
					CLookAtChainItem *& y);  // 1354
	CUtlVectorBase<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >::Swap(
		CUtlVectorBase<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >& vec);  // 437
	CUtlVector<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >::CUtlVector(
			CUtlVector<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >& src);  // 67
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 66
} /* size: 0, inline expansions: 17 (0 bytes) */

// <04D9B13D> modellib/lookatchain.cpp:65
void CLookAtChain::CLookAtChain(CLookAtChain& rhs)
{
} /* size: 0 */

// <04D9B10C> modellib/lookatchain.cpp:73
void CLookAtChain::GetName()
{
} /* size: 0 */

// <04D9AFCB> modellib/lookatchain.cpp:79
// function calls: 4
void CLookAtChain::SetName(const CUtlString& name)
{
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 81
} /* size: 0, inline expansions: 4 (0 bytes) */

// <04D9AB1E> modellib/lookatchain.cpp:85
// function calls: 22
void CLookAtChain::operator=(const CLookAtChain& rhs)
{
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 87
	CUtlVectorBase<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >::Count(); // 573
	CUtlMemory<CLookAtChainItem, int>::Base(); // 112
	CUtlVectorBase<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >::Base(); // 102
	CUtlVectorBase<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >::begin(); // 574
	CUtlMemory<CLookAtChainItem, int>::Base(); // 113
	CUtlVectorBase<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >::Base(); // 105
	CUtlVectorBase<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >::Count(); // 105
	CUtlVectorBase<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >::end(); // 574
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 16
	CLookAtChainItem::operator=(
			const CLookAtChainItem  &);  // 209
	UtlTraitsCopyRange<CLookAtChainItem>(const CLookAtChainItem* pFrom,
						const CLookAtChainItem* pFromEnd,
						CLookAtChainItem* pTo);  // 200
	UtlTraitsCopyRange<CLookAtChainItem>(const CLookAtChainItem* pFrom,
						const CLookAtChainItem* pFromEnd,
						CLookAtChainItem* pTo);  // 574
	CUtlVectorBase<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >::operator=(
			const CUtlVectorBase<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >& other);  // 565
	CUtlVectorBase<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >::operator=(
			const CUtlVectorBase<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >& other);  // 452
	CUtlVector<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >::operator=(
			const CUtlVector<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >& src);  // 88
} /* size: 0, inline expansions: 22 (0 bytes) */

// <04D9A73B> modellib/lookatchain.cpp:93
// function calls: 16
void CLookAtChain::operator=(CLookAtChain& rhs)
{
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 95
	CUtlMemory<CLookAtChainItem, int>::IsExternallyAllocated(); // 535
	CUtlMemory<CLookAtChainItem, int>::IsExternallyAllocated(); // 535
	{
	}
	V_swap_through_temp<unsigned int>(unsigned int& x,
						unsigned int& y);  // 536
	V_swap_through_temp<CLookAtChainItem*>(CLookAtChainItem *& x,
						CLookAtChainItem *& y);  // 537
	V_swap_through_temp<int>(int& x,
				int& y);  // 538
	CUtlMemory<CLookAtChainItem, int>::Swap(
		CUtlMemory<CLookAtChainItem, int>& mem);  // 1351
	swap<int>(int& __a,
			int& __b);  // 19
	V_swap<int>(int& x,
			int& y);  // 1352
	swap<CLookAtChainItem*>(CLookAtChainItem *& __a,
				CLookAtChainItem *& __b);  // 19
	V_swap<CLookAtChainItem*>(CLookAtChainItem *& x,
					CLookAtChainItem *& y);  // 1354
	CUtlVectorBase<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >::Swap(
		CUtlVectorBase<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >& vec);  // 440
	CUtlVector<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >::operator=(
			CUtlVector<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >& src);  // 96
} /* size: 0, inline expansions: 16 (0 bytes) */

// <04D9D83B> modellib/lookatchain.cpp:101
// function calls: 2
void CLookAtChain::operator[](int index)
{
	CUtlMemory<CLookAtChainItem, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >::operator[](
			int i);  // 103
} /* size: 0, inline expansions: 2 (0 bytes) */

// <04D9A713> modellib/lookatchain.cpp:101
void CLookAtChain::operator[](int index)
{
} /* size: 0 */

// <04D9A68B> modellib/lookatchain.cpp:113
// function call: 1
void CLookAtChain::GetBoneCount()
{
	CUtlVectorBase<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >::Count(); // 115
} /* size: 0, inline expansions: 1 (0 bytes) */

// <04D9A462> modellib/lookatchain.cpp:119
// function calls: 11
void CLookAtChain::AddBone()
{
	CUtlMemory<CLookAtChainItem, int>::NumAllocated(); // 1143
	CUtlMemory<CLookAtChainItem, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >::Element(
		int i);  // 1148
	CUtlString::CUtlString(); // 23
	CLookAtChainItem::CLookAtChainItem(); // 1479
	Construct<CLookAtChainItem>(CLookAtChainItem* pMemory); // 1148
	CUtlMemory<CLookAtChainItem, int>::Base(); // 112
	CUtlVectorBase<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >::Base(); // 368
	CUtlVectorBase<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >::AddToTail(); // 121
} /* size: 0, inline expansions: 11 (0 bytes) */

// <04D9A141> modellib/lookatchain.cpp:125
// function calls: 13
void CLookAtChain::RemoveBone(int index)
{
	CUtlMemory<CLookAtChainItem, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >::Element(
		int i);  // 1607
	CUtlString::~CUtlString(); // 16
	CLookAtChainItem::~CLookAtChainItem(); // 1526
	Destruct<CLookAtChainItem>(CLookAtChainItem* pMemory); // 1607
	CUtlMemory<CLookAtChainItem, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >::Element(
		int i);  // 1114
	CUtlMemory<CLookAtChainItem, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >::Remove(
		int elem);  // 127
} /* size: 0, inline expansions: 13 (0 bytes) */

// <04D9948F> modellib/lookatchain.cpp:131
// variables: 4
// function calls: 50
void CLookAtChain::KV3TransferSave(CKV3TransferSaveContext* pContext)
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
					const CUtlString& sourceValue);  // 133
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<5>(
				const char& str);  // 133
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<6>(
				const char& str);  // 134
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
	CUtlVectorBase<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >::Count(); // 830
	AlignValue<unsigned int>(unsigned int val,
				uintp alignment);  // 225
	CKV3TransferSaveContext::NotePooledAllocation(
				uint nBytes);  // 830
	NotePooledAllocation(CKV3TransferSaveContext* pSaveContext,
				const Array_t& arr);  // 604
	{
		KeyValues3* pArrayElement; // 680
		CKV3ArrayIteratorView<false>& __for_range; // 3862
		iterator __for_begin; // 3872
		iterator __for_end; // 3882
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
		{
		}
		iterator::operator*(); // 680
		SaveValue<CLookAtChainItem>(CKV3TransferSaveContext* pContext,
						KeyValues3* pSaveToValue,
						const CLookAtChainItem& value,
						type *);  // 1539
		CKV3TransferSaveContext::SaveValueDirect<CLookAtChainItem>(
							const CLookAtChainItem& sourceValue,
							KeyValues3* pSaveToMember);  // 682
	}
	SaveBlittableArrayElements<CLookAtChainItem>(CKV3TransferSaveContext* pContext,
							KeyValues3* pSaveToValue,
							int nCount,
							const CLookAtChainItem* pValues);  // 606
	CUtlVectorBase<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >::Count(); // 812
	GetCount(const Array_t& arr); // 605
	CUtlMemory<CLookAtChainItem, int>::Base(); // 113
	CUtlVectorBase<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >::Base(); // 842
	GetBase(const Array_t& arr); // 606
	SaveValue<CUtlVector<CLookAtChainItem> >(CKV3TransferSaveContext* pContext,
						KeyValues3* pSaveToValue,
						const CUtlVector<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >& value,
						type *);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<CUtlVector<CLookAtChainItem> >(
							const CUtlVector<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >& sourceValue,
							KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<CUtlVector<CLookAtChainItem> >(
							CKV3MemberName memberNameAndHash,
							const CUtlVector<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >& sourceValue);  // 134
} /* size: 0, inline expansions: 35 (0 bytes) */

// <0214F913> modellib/lookatchain.cpp:131
// variables: 4
// function calls: 50
void CLookAtChain::KV3TransferSave(CKV3TransferSaveContext* pContext)
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
					const CUtlString& sourceValue);  // 133
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<5>(
				const char& str);  // 133
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<6>(
				const char& str);  // 134
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
	CUtlVectorBase<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >::Count(); // 830
	AlignValue<unsigned int>(unsigned int val,
				uintp alignment);  // 225
	CKV3TransferSaveContext::NotePooledAllocation(
				uint nBytes);  // 830
	NotePooledAllocation(CKV3TransferSaveContext* pSaveContext,
				const Array_t& arr);  // 604
	{
		KeyValues3* pArrayElement; // 680
		CKV3ArrayIteratorView<false>& __for_range; // 17039
		iterator __for_begin; // 17049
		iterator __for_end; // 17059
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
		{
		}
		iterator::operator*(); // 680
		SaveValue<CLookAtChainItem>(CKV3TransferSaveContext* pContext,
						KeyValues3* pSaveToValue,
						const CLookAtChainItem& value,
						type *);  // 1539
		CKV3TransferSaveContext::SaveValueDirect<CLookAtChainItem>(
							const CLookAtChainItem& sourceValue,
							KeyValues3* pSaveToMember);  // 682
	}
	SaveBlittableArrayElements<CLookAtChainItem>(CKV3TransferSaveContext* pContext,
							KeyValues3* pSaveToValue,
							int nCount,
							const CLookAtChainItem* pValues);  // 606
	CUtlVectorBase<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >::Count(); // 812
	GetCount(const Array_t& arr); // 605
	CUtlMemory<CLookAtChainItem, int>::Base(); // 113
	CUtlVectorBase<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >::Base(); // 842
	GetBase(const Array_t& arr); // 606
	SaveValue<CUtlVector<CLookAtChainItem> >(CKV3TransferSaveContext* pContext,
						KeyValues3* pSaveToValue,
						const CUtlVector<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >& value,
						type *);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<CUtlVector<CLookAtChainItem> >(
							const CUtlVector<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >& sourceValue,
							KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<CUtlVector<CLookAtChainItem> >(
							CKV3MemberName memberNameAndHash,
							const CUtlVector<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >& sourceValue);  // 134
} /* size: 0, inline expansions: 35 (0 bytes) */

// <00CBC0D0> modellib/lookatchain.cpp:131
// variables: 4
// function calls: 50
void CLookAtChain::KV3TransferSave(CKV3TransferSaveContext* pContext)
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
					const CUtlString& sourceValue);  // 133
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<5>(
				const char& str);  // 133
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<6>(
				const char& str);  // 134
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
	CUtlVectorBase<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >::Count(); // 830
	AlignValue<unsigned int>(unsigned int val,
				uintp alignment);  // 225
	CKV3TransferSaveContext::NotePooledAllocation(
				uint nBytes);  // 830
	NotePooledAllocation(CKV3TransferSaveContext* pSaveContext,
				const Array_t& arr);  // 604
	{
		KeyValues3* pArrayElement; // 680
		CKV3ArrayIteratorView<false>& __for_range; // 18364
		iterator __for_begin; // 18374
		iterator __for_end; // 18384
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
		{
		}
		iterator::operator*(); // 680
		SaveValue<CLookAtChainItem>(CKV3TransferSaveContext* pContext,
						KeyValues3* pSaveToValue,
						const CLookAtChainItem& value,
						type *);  // 1539
		CKV3TransferSaveContext::SaveValueDirect<CLookAtChainItem>(
							const CLookAtChainItem& sourceValue,
							KeyValues3* pSaveToMember);  // 682
	}
	SaveBlittableArrayElements<CLookAtChainItem>(CKV3TransferSaveContext* pContext,
							KeyValues3* pSaveToValue,
							int nCount,
							const CLookAtChainItem* pValues);  // 606
	CUtlVectorBase<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >::Count(); // 812
	GetCount(const Array_t& arr); // 605
	CUtlMemory<CLookAtChainItem, int>::Base(); // 113
	CUtlVectorBase<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >::Base(); // 842
	GetBase(const Array_t& arr); // 606
	SaveValue<CUtlVector<CLookAtChainItem> >(CKV3TransferSaveContext* pContext,
						KeyValues3* pSaveToValue,
						const CUtlVector<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >& value,
						type *);  // 1539
	CKV3TransferSaveContext::SaveValueDirect<CUtlVector<CLookAtChainItem> >(
							const CUtlVector<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >& sourceValue,
							KeyValues3* pSaveToMember);  // 165
	CKV3TransferSaveContext::SaveValueToMember<CUtlVector<CLookAtChainItem> >(
							CKV3MemberName memberNameAndHash,
							const CUtlVector<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >& sourceValue);  // 134
} /* size: 0, inline expansions: 35 (0 bytes) */

// <04D98CDF> modellib/lookatchain.cpp:138
// variables: 2
// function calls: 24
void CLookAtChain::KV3TransferLoad(CKV3TransferLoadContext* pContext)
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
					CUtlString& destValue);  // 140
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<5>(
				const char& str);  // 140
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<6>(
				const char& str);  // 141
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 106
	KeyValues3::FindMember(
			CKV3MemberName memberName,
			uint& nNextValueHint,
			const KeyValues3* pDefaultValue);  // 289
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 289
	CKV3TransferLoadContext::LoadValueDirect<CUtlVector<CLookAtChainItem> >(
							CUtlVector<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >& destValue,
							const KeyValues3* pLoadFromMember);  // 292
	{
		KeyValues3 nullValue; // 300
		CKV3TransferLoadContext::LoadValueDirect<CUtlVector<CLookAtChainItem> >(
								CUtlVector<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >& destValue,
								const KeyValues3* pLoadFromMember);  // 301
	}
	CKV3TransferLoadContext::LoadValueFromMember<CUtlVector<CLookAtChainItem> >(
								CKV3MemberName memberNameAndHash,
								CUtlVector<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >& destValue,
								uint& nNextMemberHint);  // 287
	CKV3TransferLoadContext::LoadValueFromMember<CUtlVector<CLookAtChainItem> >(
								CKV3MemberName memberNameAndHash,
								CUtlVector<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >& destValue,
								uint& nNextMemberHint);  // 282
	CKV3MemberName::CKV3MemberName(
			const CKV3MemberName& rhs);  // 282
	CKV3TransferLoadContext::LoadValueFromMember<CUtlVector<CLookAtChainItem> >(
								CKV3MemberName memberNameAndHash,
								CUtlVector<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> >& destValue);  // 141
} /* size: 0, inline expansions: 21 (0 bytes) */

