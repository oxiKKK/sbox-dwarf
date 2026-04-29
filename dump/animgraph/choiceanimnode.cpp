
//
// animgraph/choiceanimnode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 30
//

// <01078373> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceanimnode.cpp:12
void IChoiceAnimNode::GetTypeInfo()
{
} /* size: 0 */

// <010781E0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceanimnode.cpp:12
// function calls: 3
void* IChoiceAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<IChoiceAnimNode>::CastTo(
		IChoiceAnimNode* derived,
		ClassID baseTypeInfo);  // 12
} /* size: 0, inline expansions: 3 (0 bytes) */

// <0107804D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceanimnode.cpp:12
// function calls: 3
const void* IChoiceAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<IChoiceAnimNode>::CastTo(
		const IChoiceAnimNode* derived,
		ClassID baseTypeInfo);  // 12
} /* size: 0, inline expansions: 3 (0 bytes) */

// <010954AA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceanimnode.cpp:14
void MyTypeInfo(void)
{
} /* size: 0 */

// <010905DA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceanimnode.cpp:14
void CChoiceAnimNode::GetTypeInfo()
{
} /* size: 12 */

// <01077E36> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceanimnode.cpp:14
// function calls: 3
void* CChoiceAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CChoiceAnimNode>::CastTo(
		CChoiceAnimNode* derived,
		ClassID baseTypeInfo);  // 14
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01077CA3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceanimnode.cpp:14
// function calls: 3
const void* CChoiceAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CChoiceAnimNode>::CastTo(
		const CChoiceAnimNode* derived,
		ClassID baseTypeInfo);  // 14
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01077B61> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceanimnode.cpp:25
// function calls: 4
void CChoiceNodeChild::CChoiceNodeChild()
{
	AnimNodeID::AnimNodeID(); // 22
	AnimOutputID::AnimOutputID(); // 22
	CNodeConnection::CNodeConnection(); // 25
	CUtlString::CUtlString(); // 25
} /* size: 31, inline expansions: 4 (22 bytes) */

// <01077B45> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceanimnode.cpp:25
void CChoiceNodeChild::CChoiceNodeChild()
{
} /* size: 0 */

// <010778A6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceanimnode.cpp:32
// variable: 1
// function calls: 10
void GetItemName(void* pClassInstance, CUtlString* pOutElementName)
{
	CChoiceNodeChild* pChoiceChild; // 34
	CUtlString::Get(); // 99
	CUtlString::String(); // 35
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 83
	CFmtStrN<256>::operator char const*(); // 35
	CUtlString::operator=(
			const char* src);  // 35
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 35
} /* size: 178, variables: 1, inline expansions: 10 (212 bytes) */

// <01077539> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceanimnode.cpp:40
// function calls: 16
void CChoiceAnimNode::CChoiceAnimNode()
{
	CUtlString::CUtlString(
			const char* pString);  // 19
	CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 19
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::CSmartPtr(); // 19
	Object::Object(); // 30
	IAnimNode::IAnimNode(); // 19
	Vector2D::Vector2D(
		const Vector2D& vOther);  // 19
	AnimNodeID::AnimNodeID(); // 19
	CUtlString::CUtlString(); // 19
	CAnimNodeBase::CAnimNodeBase(); // 42
	CUtlVectorBase<CChoiceNodeChild, CUtlMemory<CChoiceNodeChild, int> >::ResetDbgInfo(); // 530
	CUtlMemory<CChoiceNodeChild, int>::ValidateGrowSize(); // 475
	CUtlMemory<CChoiceNodeChild, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CChoiceNodeChild, CUtlMemory<CChoiceNodeChild, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CChoiceNodeChild, CUtlMemory<CChoiceNodeChild, int> >::CUtlVector(); // 42
	IChoiceAnimNode::IChoiceAnimNode(); // 42
} /* size: 247, inline expansions: 16 (283 bytes) */

// <01077520> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceanimnode.cpp:40
void CChoiceAnimNode::CChoiceAnimNode()
{
} /* size: 0 */

// <010774C2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceanimnode.cpp:48
// function call: 1
void CChoiceAnimNode::GetChildCount()
{
	CUtlVectorBase<CChoiceNodeChild, CUtlMemory<CChoiceNodeChild, int> >::Count(); // 50
} /* size: 8, inline expansions: 1 (0 bytes) */

// <010772DE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceanimnode.cpp:54
// variables: 3
// function calls: 5
void CChoiceAnimNode::GetChild(int childIndex)
{
	const char   __FUNCTION__; // 19832
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 56
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 57
	}
	CUtlVectorBase<CChoiceNodeChild, CUtlMemory<CChoiceNodeChild, int> >::Count(); // 57
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator->(); // 58
	CUtlMemory<CChoiceNodeChild, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CChoiceNodeChild, CUtlMemory<CChoiceNodeChild, int> >::operator[](
			int i);  // 58
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 58
} /* size: 0, variables: 1, inline expansions: 5 (32 bytes) */

// <0107713B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceanimnode.cpp:62
// variables: 3
// function calls: 4
void CChoiceAnimNode::GetChildID(int childIndex)
{
	const char   __FUNCTION__; // 19886
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 64
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 65
	}
	CUtlVectorBase<CChoiceNodeChild, CUtlMemory<CChoiceNodeChild, int> >::Count(); // 65
	CUtlMemory<CChoiceNodeChild, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CChoiceNodeChild, CUtlMemory<CChoiceNodeChild, int> >::operator[](
			int i);  // 66
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 66
} /* size: 0, variables: 1, inline expansions: 4 (22 bytes) */

// <01076F84> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceanimnode.cpp:70
// variables: 3
// function calls: 4
void CChoiceAnimNode::SetChildID(int childIndex, AnimNodeID id)
{
	const char   __FUNCTION__; // 19886
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 72
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 73
	}
	CUtlVectorBase<CChoiceNodeChild, CUtlMemory<CChoiceNodeChild, int> >::Count(); // 73
	CUtlMemory<CChoiceNodeChild, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CChoiceNodeChild, CUtlMemory<CChoiceNodeChild, int> >::operator[](
			int i);  // 74
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 74
} /* size: 0, variables: 1, inline expansions: 4 (22 bytes) */

// <01076DFE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceanimnode.cpp:78
// variables: 3
// function calls: 3
void CChoiceAnimNode::GetChildName(int childIndex)
{
	const char   __FUNCTION__; // 19940
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 81
	}
	CUtlVectorBase<CChoiceNodeChild, CUtlMemory<CChoiceNodeChild, int> >::Count(); // 81
	CUtlMemory<CChoiceNodeChild, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CChoiceNodeChild, CUtlMemory<CChoiceNodeChild, int> >::operator[](
			int i);  // 82
} /* size: 0, variables: 1, inline expansions: 3 (22 bytes) */

// <01076C5B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceanimnode.cpp:86
// variables: 3
// function calls: 4
void CChoiceAnimNode::GetChildOutputID(int index)
{
	const char   __FUNCTION__; // 20043
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 88
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 89
	}
	CUtlVectorBase<CChoiceNodeChild, CUtlMemory<CChoiceNodeChild, int> >::Count(); // 89
	CUtlMemory<CChoiceNodeChild, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CChoiceNodeChild, CUtlMemory<CChoiceNodeChild, int> >::operator[](
			int i);  // 90
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 90
} /* size: 0, variables: 1, inline expansions: 4 (23 bytes) */

// <01076A4A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceanimnode.cpp:94
// variables: 3
// function calls: 6
void CChoiceAnimNode::SetInputConnection(int index, CNodeConnection connection)
{
	const char   __FUNCTION__; // 20097
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 97
	}
	CUtlVectorBase<CChoiceNodeChild, CUtlMemory<CChoiceNodeChild, int> >::Count(); // 97
	CUtlMemory<CChoiceNodeChild, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CChoiceNodeChild, CUtlMemory<CChoiceNodeChild, int> >::operator[](
			int i);  // 98
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 22
	AnimOutputID::operator=(
			const AnimOutputID& rhs);  // 22
	CNodeConnection::operator=(
			const CNodeConnection  &);  // 98
} /* size: 0, variables: 1, inline expansions: 6 (46 bytes) */

// <01076233> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceanimnode.cpp:102
// variables: 7
// function calls: 28
void CChoiceAnimNode::CreateUpdateNode(CAnimGraphInitContext& initContext)
{
	const uint32  childCount; // 104
	CPackedHandle<CChoiceUpdateNode> hNodeHandle; // 106
	CChoiceUpdateNode* pNode; // 108
	float sumWeights; // 117
	bool bAnyMissingChildren; // 123
	{
		uint32 i; // 118
		CUtlMemory<CChoiceNodeChild, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CChoiceNodeChild, CUtlMemory<CChoiceNodeChild, int> >::operator[](
				int i);  // 120
	}
	{
		uint32 i; // 124
		CRelativeOffset<float>::Get(); // 90
		{
		}
		CRelativeArray<float>::operator[](
				int index);  // 128
		CUtlMemory<CChoiceNodeChild, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CChoiceNodeChild, CUtlMemory<CChoiceNodeChild, int> >::operator[](
				int i);  // 128
		CRelativeOffset<float>::IsValid(); // 30
		CRelativeOffset<float>::Get(); // 90
		{
		}
		CRelativeArray<float>::operator[](
				int index);  // 132
		CUtlMemory<CChoiceNodeChild, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CChoiceNodeChild, CUtlMemory<CChoiceNodeChild, int> >::operator[](
				int i);  // 135
		AnimNodeID::IsValid(); // 135
		AnimOutputID::AnimOutputID(
				const AnimOutputID& rhs);  // 137
		AnimNodeID::AnimNodeID(
				const AnimNodeID& rhs);  // 137
		{
		}
		CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::IsValid(); // 30
		CRelativeOffset<CRelativeOffset<const CAnimUpdateNodeBase> >::Get(); // 90
		CRelativeArray<CRelativeOffset<const CAnimUpdateNodeBase> >::operator[](
				int index);  // 137
		CRelativeOffset<const CAnimUpdateNodeBase>::SetOffset(
				const CAnimUpdateNodeBase* targetPtr);  // 20
		CRelativeOffset<const CAnimUpdateNodeBase>::operator=(
				const CAnimUpdateNodeBase* targetPtr);  // 137
		CUtlMemory<CChoiceNodeChild, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CChoiceNodeChild, CUtlMemory<CChoiceNodeChild, int> >::operator[](
				int i);  // 144
		{
		}
		CRelativeOffset<float>::IsValid(); // 30
		CRelativeOffset<float>::Get(); // 90
		CRelativeArray<float>::operator[](
				int index);  // 144
	}
	CUtlVectorBase<CChoiceNodeChild, CUtlMemory<CChoiceNodeChild, int> >::Count(); // 104
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CChoiceUpdateNode>::CPackedHandle(); // 106
	CPackedDataT<false>::AddItem<CChoiceUpdateNode, CAnimGraphInitContext&, unsigned int const&>(
										CPackedHandle<CChoiceUpdateNode>* handleOut);  // 108
} /* size: 0, variables: 5, inline expansions: 4 (37 bytes) */

// <01075CE0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceanimnode.cpp:156
// variable: 1
// function calls: 23
void CChoiceAnimNode::AddChild()
{
	CChoiceNodeChild newChild; // 158
	CUtlString::operator=(
			const char* src);  // 159
	AnimNodeID::AnimNodeID(); // 22
	AnimOutputID::AnimOutputID(); // 22
	CNodeConnection::CNodeConnection(); // 25
	CUtlString::CUtlString(); // 25
	CChoiceNodeChild::CChoiceNodeChild(); // 158
	CUtlMemory<CChoiceNodeChild, int>::NumAllocated(); // 1196
	CUtlMemory<CChoiceNodeChild, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CChoiceNodeChild, CUtlMemory<CChoiceNodeChild, int> >::Element(
		int i);  // 1201
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 22
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 22
	CNodeConnection::CNodeConnection(
			const CNodeConnection  &);  // 14
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 14
	CChoiceNodeChild::CChoiceNodeChild(
			const CChoiceNodeChild  &);  // 1520
	CopyConstruct<CChoiceNodeChild>(CChoiceNodeChild* pMemory,
					const CChoiceNodeChild& src);  // 1201
	CUtlMemory<CChoiceNodeChild, int>::Base(); // 112
	CUtlVectorBase<CChoiceNodeChild, CUtlMemory<CChoiceNodeChild, int> >::Base(); // 368
	CUtlVectorBase<CChoiceNodeChild, CUtlMemory<CChoiceNodeChild, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CChoiceNodeChild, CUtlMemory<CChoiceNodeChild, int> >::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<CChoiceNodeChild, CUtlMemory<CChoiceNodeChild, int> >::AddToTail(
			const CChoiceNodeChild& src);  // 161
	CUtlString::~CUtlString(); // 14
	CChoiceNodeChild::~CChoiceNodeChild(); // 162
} /* size: 251, variables: 1, inline expansions: 23 (479 bytes) */

// <010959EA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceanimnode.cpp:165
// function call: 1
void CChoiceAnimNode::RemoveChild(int childIndex)
{
	{
	}
	CUtlVectorBase<CChoiceNodeChild, CUtlMemory<CChoiceNodeChild, int> >::Count(); // 168
	{
	}
} /* size: 0, inline expansions: 1 (0 bytes) */

// <01075C45> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceanimnode.cpp:165
// variables: 3
void CChoiceAnimNode::RemoveChild(int childIndex)
{
	const char   __FUNCTION__; // 19913
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 167
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 168
	}
} /* size: 0, variables: 1 */

// <0107594C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceanimnode.cpp:173
// variables: 3
// function calls: 10
void CChoiceAnimNode::SetChild(int childIndex, IAnimNode* node)
{
	const char   __FUNCTION__; // 19832
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 175
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 176
	}
	CUtlVectorBase<CChoiceNodeChild, CUtlMemory<CChoiceNodeChild, int> >::Count(); // 176
	CUtlMemory<CChoiceNodeChild, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CChoiceNodeChild, CUtlMemory<CChoiceNodeChild, int> >::operator[](
			int i);  // 179
	CUtlMemory<CChoiceNodeChild, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CChoiceNodeChild, CUtlMemory<CChoiceNodeChild, int> >::operator[](
			int i);  // 183
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 157
	CAnimNodeBase::GetNodeID(); // 179
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 179
	AnimNodeID::AnimNodeID(); // 183
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 183
} /* size: 0, variables: 1, inline expansions: 10 (51 bytes) */

// <010756C8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceanimnode.cpp:188
// variables: 3
// function calls: 7
void CChoiceAnimNode::SetChildName(int childIndex, const CUtlString& name)
{
	const char   __FUNCTION__; // 19940
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 190
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 191
	}
	CUtlVectorBase<CChoiceNodeChild, CUtlMemory<CChoiceNodeChild, int> >::Count(); // 191
	CUtlMemory<CChoiceNodeChild, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CChoiceNodeChild, CUtlMemory<CChoiceNodeChild, int> >::operator[](
			int i);  // 192
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 192
} /* size: 0, variables: 1, inline expansions: 7 (128 bytes) */

// <01090C17> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceanimnode.cpp:196
// function calls: 3
void CChoiceAnimNode::GetChildWeight(int childIndex)
{
	{
	}
	CUtlVectorBase<CChoiceNodeChild, CUtlMemory<CChoiceNodeChild, int> >::Count(); // 199
	{
	}
	CUtlMemory<CChoiceNodeChild, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CChoiceNodeChild, CUtlMemory<CChoiceNodeChild, int> >::operator[](
			int i);  // 200
} /* size: 0, inline expansions: 3 (6 bytes) */

// <0107562D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceanimnode.cpp:196
// variables: 3
void CChoiceAnimNode::GetChildWeight(int childIndex)
{
	const char   __FUNCTION__; // 19989
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 198
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 199
	}
} /* size: 0, variables: 1 */

// <01090D0C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceanimnode.cpp:204
// function calls: 3
void CChoiceAnimNode::SetChildWeight(int childIndex, float weight)
{
	{
	}
	CUtlVectorBase<CChoiceNodeChild, CUtlMemory<CChoiceNodeChild, int> >::Count(); // 207
	{
	}
	CUtlMemory<CChoiceNodeChild, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CChoiceNodeChild, CUtlMemory<CChoiceNodeChild, int> >::operator[](
			int i);  // 208
} /* size: 0, inline expansions: 3 (6 bytes) */

// <01075586> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceanimnode.cpp:204
// variables: 3
void CChoiceAnimNode::SetChildWeight(int childIndex, float weight)
{
	const char   __FUNCTION__; // 19989
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 206
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 207
	}
} /* size: 0, variables: 1 */

// <01074D63> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choiceanimnode.cpp:212
// variable: 1
// function calls: 33
void CChoiceAnimNode::MoveChildToIndex(int oldIndex, int newIndex)
{
	CChoiceNodeChild child; // 214
	CUtlMemory<CChoiceNodeChild, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CChoiceNodeChild, CUtlMemory<CChoiceNodeChild, int> >::operator[](
			int i);  // 214
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 14
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 22
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 22
	CNodeConnection::CNodeConnection(
			const CNodeConnection  &);  // 14
	CChoiceNodeChild::CChoiceNodeChild(
			const CChoiceNodeChild  &);  // 214
	CUtlMemory<CChoiceNodeChild, int>::NumAllocated(); // 782
	CUtlMemory<CChoiceNodeChild, int>::Base(); // 112
	CUtlVectorBase<CChoiceNodeChild, CUtlMemory<CChoiceNodeChild, int> >::Base(); // 368
	CUtlVectorBase<CChoiceNodeChild, CUtlMemory<CChoiceNodeChild, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CChoiceNodeChild, CUtlMemory<CChoiceNodeChild, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<CChoiceNodeChild, CUtlMemory<CChoiceNodeChild, int> >::GrowVector(
			int num);  // 1223
	CUtlMemory<CChoiceNodeChild, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CChoiceNodeChild, CUtlMemory<CChoiceNodeChild, int> >::Element(
		int i);  // 1097
	CUtlMemory<CChoiceNodeChild, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CChoiceNodeChild, CUtlMemory<CChoiceNodeChild, int> >::Element(
		int i);  // 1097
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1097
	CUtlVectorBase<CChoiceNodeChild, CUtlMemory<CChoiceNodeChild, int> >::ShiftElementsRight(
				int elem,
				int num);  // 1224
	CUtlMemory<CChoiceNodeChild, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CChoiceNodeChild, CUtlMemory<CChoiceNodeChild, int> >::Element(
		int i);  // 1225
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 22
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 22
	CNodeConnection::CNodeConnection(
			const CNodeConnection  &);  // 14
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 14
	CChoiceNodeChild::CChoiceNodeChild(
			const CChoiceNodeChild  &);  // 1520
	CopyConstruct<CChoiceNodeChild>(CChoiceNodeChild* pMemory,
					const CChoiceNodeChild& src);  // 1225
	CUtlVectorBase<CChoiceNodeChild, CUtlMemory<CChoiceNodeChild, int> >::InsertBefore(
			int elem,
			const CChoiceNodeChild& src);  // 216
	CUtlString::~CUtlString(); // 14
	CChoiceNodeChild::~CChoiceNodeChild(); // 217
} /* size: 358, variables: 1, inline expansions: 33 (818 bytes) */

