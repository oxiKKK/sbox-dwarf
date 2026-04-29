
//
// animgraph/blendanimnode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 33
//

// <0107D590> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:13
void IBlendAnimNode::GetTypeInfo()
{
} /* size: 0 */

// <0107D3FD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:13
// function calls: 3
void* IBlendAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<IBlendAnimNode>::CastTo(
		IBlendAnimNode* derived,
		ClassID baseTypeInfo);  // 13
} /* size: 0, inline expansions: 3 (0 bytes) */

// <0107D26A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:13
// function calls: 3
const void* IBlendAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<IBlendAnimNode>::CastTo(
		const IBlendAnimNode* derived,
		ClassID baseTypeInfo);  // 13
} /* size: 0, inline expansions: 3 (0 bytes) */

// <01095450> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:15
void MyTypeInfo(void)
{
} /* size: 0 */

// <0109049E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:15
void CBlendAnimNode::GetTypeInfo()
{
} /* size: 12 */

// <0107D053> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:15
// function calls: 3
void* CBlendAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CBlendAnimNode>::CastTo(
		CBlendAnimNode* derived,
		ClassID baseTypeInfo);  // 15
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0107CEC0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:15
// function calls: 3
const void* CBlendAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CBlendAnimNode>::CastTo(
		const CBlendAnimNode* derived,
		ClassID baseTypeInfo);  // 15
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0107CE12> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:25
int Compare(const CBlendNodeChild* lhs, const CBlendNodeChild* rhs)
{
} /* size: 0 */

// <0107CD29> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:40
// function calls: 4
void CBlendNodeChild::CBlendNodeChild()
{
	AnimNodeID::AnimNodeID(); // 22
	AnimOutputID::AnimOutputID(); // 22
	CNodeConnection::CNodeConnection(); // 40
	CUtlString::CUtlString(); // 40
} /* size: 27, inline expansions: 4 (22 bytes) */

// <0107CD0D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:40
void CBlendNodeChild::CBlendNodeChild()
{
} /* size: 0 */

// <0107CA6E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:47
// variable: 1
// function calls: 10
void GetItemName(void* pClassInstance, CUtlString* pOutElementName)
{
	CBlendNodeChild* pBlendChild; // 49
	CUtlString::Get(); // 99
	CUtlString::String(); // 50
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 771
	CBufferString::Get(); // 83
	CFmtStrN<256>::operator char const*(); // 50
	CUtlString::operator=(
			const char* src);  // 50
	CBufferString::~CBufferString(); // 587
	CBufferStringN<256>::~CBufferStringN(); // 41
	CFmtStrN<256>::~CFmtStrN(); // 50
} /* size: 178, variables: 1, inline expansions: 10 (212 bytes) */

// <0107C6D1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:56
// function calls: 17
void CBlendAnimNode::CBlendAnimNode()
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
	CAnimNodeBase::CAnimNodeBase(); // 57
	CUtlMemory<CBlendNodeChild, int>::ValidateGrowSize(); // 475
	CUtlMemory<CBlendNodeChild, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CBlendNodeChild, CUtlMemory<CBlendNodeChild, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CBlendNodeChild, CUtlMemory<CBlendNodeChild, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CBlendNodeChild, CUtlMemory<CBlendNodeChild, int> >::CUtlVector(); // 57
	IBlendAnimNode::IBlendAnimNode(); // 57
	AnimParamID::AnimParamID(); // 57
} /* size: 222, inline expansions: 17 (322 bytes) */

// <0107C6B8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:56
void CBlendAnimNode::CBlendAnimNode()
{
} /* size: 0 */

// <0107C65A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:63
// function call: 1
void CBlendAnimNode::GetChildCount()
{
	CUtlVectorBase<CBlendNodeChild, CUtlMemory<CBlendNodeChild, int> >::Count(); // 65
} /* size: 8, inline expansions: 1 (0 bytes) */

// <0107C476> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:69
// variables: 3
// function calls: 5
void CBlendAnimNode::GetChild(int childIndex)
{
	const char   __FUNCTION__; // 19832
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 71
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 72
	}
	CUtlVectorBase<CBlendNodeChild, CUtlMemory<CBlendNodeChild, int> >::Count(); // 72
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator->(); // 73
	CUtlMemory<CBlendNodeChild, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CBlendNodeChild, CUtlMemory<CBlendNodeChild, int> >::operator[](
			int i);  // 73
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 73
} /* size: 0, variables: 1, inline expansions: 5 (32 bytes) */

// <0107C2D3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:77
// variables: 3
// function calls: 4
void CBlendAnimNode::GetChildID(int childIndex)
{
	const char   __FUNCTION__; // 19886
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 79
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
	CUtlVectorBase<CBlendNodeChild, CUtlMemory<CBlendNodeChild, int> >::Count(); // 80
	CUtlMemory<CBlendNodeChild, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CBlendNodeChild, CUtlMemory<CBlendNodeChild, int> >::operator[](
			int i);  // 81
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 81
} /* size: 0, variables: 1, inline expansions: 4 (22 bytes) */

// <0107C11C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:85
// variables: 3
// function calls: 4
void CBlendAnimNode::SetChildID(int childIndex, AnimNodeID id)
{
	const char   __FUNCTION__; // 19886
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 88
	}
	CUtlVectorBase<CBlendNodeChild, CUtlMemory<CBlendNodeChild, int> >::Count(); // 88
	CUtlMemory<CBlendNodeChild, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CBlendNodeChild, CUtlMemory<CBlendNodeChild, int> >::operator[](
			int i);  // 89
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 89
} /* size: 0, variables: 1, inline expansions: 4 (22 bytes) */

// <0107BE9A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:93
// variables: 5
// function calls: 5
void CBlendAnimNode::GetChildName(int childIndex)
{
	const char   __FUNCTION__; // 19940
	const CUtlString& name; // 97
	const CUtlString  sDefaultString; // 104
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 95
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 96
	}
	CUtlVectorBase<CBlendNodeChild, CUtlMemory<CBlendNodeChild, int> >::Count(); // 96
	CUtlMemory<CBlendNodeChild, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CBlendNodeChild, CUtlMemory<CBlendNodeChild, int> >::operator[](
			int i);  // 97
	CUtlString::IsEmpty(); // 99
	CUtlString::CUtlString(
			const char* pString);  // 104
} /* size: 0, variables: 3, inline expansions: 5 (67 bytes) */

// <0107BCF7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:109
// variables: 3
// function calls: 4
void CBlendAnimNode::GetChildOutputID(int index)
{
	const char   __FUNCTION__; // 20043
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 111
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 112
	}
	CUtlVectorBase<CBlendNodeChild, CUtlMemory<CBlendNodeChild, int> >::Count(); // 112
	CUtlMemory<CBlendNodeChild, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CBlendNodeChild, CUtlMemory<CBlendNodeChild, int> >::operator[](
			int i);  // 113
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 113
} /* size: 0, variables: 1, inline expansions: 4 (23 bytes) */

// <0107BAE6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:117
// variables: 3
// function calls: 6
void CBlendAnimNode::SetInputConnection(int index, CNodeConnection connection)
{
	const char   __FUNCTION__; // 20097
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 119
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 120
	}
	CUtlVectorBase<CBlendNodeChild, CUtlMemory<CBlendNodeChild, int> >::Count(); // 120
	CUtlMemory<CBlendNodeChild, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CBlendNodeChild, CUtlMemory<CBlendNodeChild, int> >::operator[](
			int i);  // 121
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 22
	AnimOutputID::operator=(
			const AnimOutputID& rhs);  // 22
	CNodeConnection::operator=(
			const CNodeConnection  &);  // 121
} /* size: 0, variables: 1, inline expansions: 6 (46 bytes) */

// <0107BAB8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:125
void CBlendAnimNode::GetParamCount()
{
} /* size: 14 */

// <0107BA45> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:131
// function call: 1
void CBlendAnimNode::GetParamID(int index)
{
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 133
} /* size: 13, inline expansions: 1 (5 bytes) */

// <0107A934> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:137
// variables: 30
// function calls: 56
void CBlendAnimNode::CreateUpdateNode(CAnimGraphInitContext& initContext)
{
	const uint32  childCount; // 139
	const char   __FUNCTION__; // 20043
	CPackedHandle<CBlendUpdateNode> hNodeHandle; // 142
	CBlendUpdateNode* pNode; // 144
	CAnimParamHandle hParam; // 146
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 140
	}
	{
		CUtlVector<CBlendAnimNode::CreateUpdateNode(CAnimGraphInitContext&) const::OrderValuePair, CUtlMemory<CBlendAnimNode::CreateUpdateNode(CAnimGraphInitContext&) const::OrderValuePair, int> > sortedOrder; // 169
		{
			uint32 i; // 172
			CUtlMemory<CBlendAnimNode::CreateUpdateNode(CAnimGraphInitContext&) const::OrderValuePair, int>::operator[](
					int i); // 588
			operator[](const CUtlVectorBase<CBlendAnimNode::CreateUpdateNode(CAnimGraphInitContext&) const::OrderValuePair, CUtlMemory<CBlendAni this,
					int i); // 174
			CUtlMemory<CBlendNodeChild, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CBlendNodeChild, CUtlMemory<CBlendNodeChild, int> >::operator[](
					int i);  // 175
		}
		{
			{
				int i; // 949
				{
					int j; // 951
					CUtlMemory<CBlendAnimNode::CreateUpdateNode(CAnimGraphInitContext&) const::OrderValuePair, int>::operator[](
							int i); // 602
					Element(const CUtlVectorBase<CBlendAnimNode::CreateUpdateNode(CAnimGraphInitContext&) const::OrderValuePair, CUtlMemory<CBlendAni this,
						int i); // 953
					CUtlMemory<CBlendAnimNode::CreateUpdateNode(CAnimGraphInitContext&) const::OrderValuePair, int>::operator[](
							int i); // 602
					Element(const CUtlVectorBase<CBlendAnimNode::CreateUpdateNode(CAnimGraphInitContext&) const::OrderValuePair, CUtlMemory<CBlendAni this,
						int i); // 953
					operator()(const class* __closure,
							const OrderValuePair* lhs,
							const OrderValuePair* rhs); // 189
					_FUN(const OrderValuePair  *,
						const OrderValuePair  *);  // 953
					swap<CBlendAnimNode::CreateUpdateNode(CAnimGraphInitContext&) const::OrderValuePair>(OrderValuePair& __a,
																OrderValuePair& __b); // 19
					V_swap<CBlendAnimNode::CreateUpdateNode(CAnimGraphInitContext&) const::OrderValuePair>(OrderValuePair& x,
																OrderValuePair& y); // 955
				}
			}
			Sort(const CUtlVectorBase<CBlendAnimNode::CreateUpdateNode(CAnimGraphInitContext&) const::OrderValuePair, CUtlMemory<CBlendAni this,
				int (*pfnCompare)(const OrderValuePair *, const OrderValuePair *)); // 180
		}
		{
			uint32 i; // 192
			{
				const CNodeConnection& inputConnection; // 196
				AnimOutputID::AnimOutputID(
						const AnimOutputID& rhs);  // 200
				AnimNodeID::AnimNodeID(
						const AnimNodeID& rhs);  // 200
				CUtlMemory<CBlendAnimNode::CreateUpdateNode(CAnimGraphInitContext&) const::OrderValuePair, int>::operator[](
						int i); // 588
				operator[](const CUtlVectorBase<CBlendAnimNode::CreateUpdateNode(CAnimGraphInitContext&) const::OrderValuePair, CUtlMemory<CBlendAni this,
						int i); // 207
				CUtlMemory<CBlendNodeChild, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CBlendNodeChild, CUtlMemory<CBlendNodeChild, int> >::operator[](
						int i);  // 194
				CUtlMemory<CBlendNodeChild, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CBlendNodeChild, CUtlMemory<CBlendNodeChild, int> >::operator[](
						int i);  // 196
				AnimNodeID::IsValid(); // 198
			}
		}
		CUtlMemory<CBlendAnimNode::CreateUpdateNode(CAnimGraphInitContext&) const::OrderValuePair, int>::ValidateGrowSize() const::OrderValuePair, int>* this); // 475
		CUtlMemory<CBlendAnimNode::CreateUpdateNode(CAnimGraphInitContext&) const::OrderValuePair, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount); // 527
		ResetDbgInfo(const CUtlVectorBase<CBlendAnimNode::CreateUpdateNode(CAnimGraphInitContext&) const::OrderValuePair, CUtlMemory<CBlendAni this); // 530
		CUtlVectorBase(const CUtlVectorBase<CBlendAnimNode::CreateUpdateNode(CAnimGraphInitContext&) const::OrderValuePair, CUtlMemory<CBlendAni this,
				int growSize,
				int initCapacity); // 418
		CUtlVector(const CUtlVector<CBlendAnimNode::CreateUpdateNode(CAnimGraphInitContext&) const::OrderValuePair, CUtlMemory<CBlendAnimNod this); // 169
		CUtlMemory<CBlendAnimNode::CreateUpdateNode(CAnimGraphInitContext&) const::OrderValuePair, int>::Grow(
			int num); // 806
		GrowMemory(const CUtlVectorBase<CBlendAnimNode::CreateUpdateNode(CAnimGraphInitContext&) const::OrderValuePair, CUtlMemory<CBlendAni this,
				int num); // 784
		GrowVector(const CUtlVectorBase<CBlendAnimNode::CreateUpdateNode(CAnimGraphInitContext&) const::OrderValuePair, CUtlMemory<CBlendAni this,
				int num); // 1445
		InsertMultipleBefore(const CUtlVectorBase<CBlendAnimNode::CreateUpdateNode(CAnimGraphInitContext&) const::OrderValuePair, CUtlMemory<CBlendAni this,
					int elem,
					int num); // 1294
		AddMultipleToTail(const CUtlVectorBase<CBlendAnimNode::CreateUpdateNode(CAnimGraphInitContext&) const::OrderValuePair, CUtlMemory<CBlendAni this,
					int num); // 1319
		SetCount(const CUtlVectorBase<CBlendAnimNode::CreateUpdateNode(CAnimGraphInitContext&) const::OrderValuePair, CUtlMemory<CBlendAni this,
			int count); // 170
		CUtlMemory<CBlendAnimNode::CreateUpdateNode(CAnimGraphInitContext&) const::OrderValuePair, int>::Purge() const::OrderValuePair, int>* this); // 903
		CUtlMemory<CBlendAnimNode::CreateUpdateNode(CAnimGraphInitContext&) const::OrderValuePair, int>::Purge() const::OrderValuePair, int>* this); // 1799
		Purge(const CUtlVectorBase<CBlendAnimNode::CreateUpdateNode(CAnimGraphInitContext&) const::OrderValuePair, CUtlMemory<CBlendAni this); // 560
		ValidateAlignment<CBlendAnimNode::CreateUpdateNode(CAnimGraphInitContext&) const::OrderValuePair>(void); // 508
		CUtlMemory<CBlendAnimNode::CreateUpdateNode(CAnimGraphInitContext&) const::OrderValuePair, int>::Purge() const::OrderValuePair, int>* this); // 510
		CUtlMemory<CBlendAnimNode::CreateUpdateNode(CAnimGraphInitContext&) const::OrderValuePair, int>::~CUtlMemory() const::OrderValuePair, int>* this); // 562
		~CUtlVectorBase(const CUtlVectorBase<CBlendAnimNode::CreateUpdateNode(CAnimGraphInitContext&) const::OrderValuePair, CUtlMemory<CBlendAni this); // 410
		~CUtlVector(const CUtlVector<CBlendAnimNode::CreateUpdateNode(CAnimGraphInitContext&) const::OrderValuePair, CUtlMemory<CBlendAnimNod this); // 209
	}
	CUtlVectorBase<CBlendNodeChild, CUtlMemory<CBlendNodeChild, int> >::Count(); // 139
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CBlendUpdateNode>::CPackedHandle(); // 142
	CPackedDataT<false>::AddItem<CBlendUpdateNode, CAnimGraphInitContext&, unsigned int const&>(
										CPackedHandle<CBlendUpdateNode>* handleOut);  // 144
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 146
	CAnimParamHandle::IsValid(); // 147
	CAnimParamHandle::operator=(
			const CAnimParamHandle& rhs);  // 82
	CBlendUpdateNode::SetParameterIndex(
				const CAnimParamHandle& index);  // 152
	CBlendUpdateNode::SetBlendSource(
			AnimValueSource src);  // 153
	CBlendUpdateNode::SetLockOnReset(
			bool bResetLock);  // 154
	CBlendUpdateNode::SetBlendKeyType(
			BlendKeyType type);  // 157
	CBlendUpdateNode::SetLoop(
		bool bLoop);  // 158
	CBlendUpdateNode::SetLockWhenWaning(
				bool bLock);  // 159
} /* size: 0, variables: 5, inline expansions: 13 (143 bytes) */

// <0107A2DC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:215
// variable: 1
// function calls: 27
void CBlendAnimNode::AddChild()
{
	CBlendNodeChild newChild; // 217
	CUtlString::operator=(
			const char* src);  // 218
	AnimNodeID::AnimNodeID(); // 22
	AnimOutputID::AnimOutputID(); // 22
	CNodeConnection::CNodeConnection(); // 40
	CUtlString::CUtlString(); // 40
	CBlendNodeChild::CBlendNodeChild(); // 217
	CUtlMemory<CBlendNodeChild, int>::NumAllocated(); // 1196
	CUtlMemory<CBlendNodeChild, int>::Base(); // 112
	CUtlVectorBase<CBlendNodeChild, CUtlMemory<CBlendNodeChild, int> >::Base(); // 368
	CUtlVectorBase<CBlendNodeChild, CUtlMemory<CBlendNodeChild, int> >::ResetDbgInfo(); // 824
	CUtlMemory<CBlendNodeChild, int>::IsGrowable(); // 823
	CUtlMemory<CBlendNodeChild, int>::IsExternallyAllocated(); // 859
	CUtlMemory<CBlendNodeChild, int>::IsExternallyAllocated(); // 861
	CUtlMemory<CBlendNodeChild, int>::Grow(
		int num);  // 806
	CUtlVectorBase<CBlendNodeChild, CUtlMemory<CBlendNodeChild, int> >::GrowMemory(
			int num);  // 1198
	CUtlMemory<CBlendNodeChild, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CBlendNodeChild, CUtlMemory<CBlendNodeChild, int> >::Element(
		int i);  // 1201
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 22
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 22
	CNodeConnection::CNodeConnection(
			const CNodeConnection  &);  // 15
	CUtlString::Get(); // 354
	CUtlString::CUtlString(
			const CUtlString& string);  // 15
	CBlendNodeChild::CBlendNodeChild(
			const CBlendNodeChild  &);  // 1520
	CopyConstruct<CBlendNodeChild>(CBlendNodeChild* pMemory,
					const CBlendNodeChild& src);  // 1201
	CUtlVectorBase<CBlendNodeChild, CUtlMemory<CBlendNodeChild, int> >::AddToTail(
			const CBlendNodeChild& src);  // 220
	CUtlString::~CUtlString(); // 15
	CBlendNodeChild::~CBlendNodeChild(); // 221
} /* size: 448, variables: 1, inline expansions: 27 (1107 bytes) */

// <01079EE3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:224
// variables: 3
// function calls: 14
void CBlendAnimNode::RemoveChild(int childIndex)
{
	const char   __FUNCTION__; // 19913
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 226
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 227
	}
	CUtlVectorBase<CBlendNodeChild, CUtlMemory<CBlendNodeChild, int> >::Count(); // 227
	CUtlMemory<CBlendNodeChild, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CBlendNodeChild, CUtlMemory<CBlendNodeChild, int> >::Element(
		int i);  // 1607
	CUtlString::~CUtlString(); // 15
	CBlendNodeChild::~CBlendNodeChild(); // 1526
	Destruct<CBlendNodeChild>(CBlendNodeChild* pMemory); // 1607
	CUtlMemory<CBlendNodeChild, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CBlendNodeChild, CUtlMemory<CBlendNodeChild, int> >::Element(
		int i);  // 1114
	CUtlMemory<CBlendNodeChild, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CBlendNodeChild, CUtlMemory<CBlendNodeChild, int> >::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<CBlendNodeChild, CUtlMemory<CBlendNodeChild, int> >::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<CBlendNodeChild, CUtlMemory<CBlendNodeChild, int> >::Remove(
		int elem);  // 228
} /* size: 0, variables: 1, inline expansions: 14 (268 bytes) */

// <01079BEA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:232
// variables: 3
// function calls: 10
void CBlendAnimNode::SetChild(int childIndex, IAnimNode* node)
{
	const char   __FUNCTION__; // 19832
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 234
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 235
	}
	CUtlVectorBase<CBlendNodeChild, CUtlMemory<CBlendNodeChild, int> >::Count(); // 235
	CUtlMemory<CBlendNodeChild, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CBlendNodeChild, CUtlMemory<CBlendNodeChild, int> >::operator[](
			int i);  // 238
	CUtlMemory<CBlendNodeChild, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CBlendNodeChild, CUtlMemory<CBlendNodeChild, int> >::operator[](
			int i);  // 242
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 157
	CAnimNodeBase::GetNodeID(); // 238
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 238
	AnimNodeID::AnimNodeID(); // 242
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 242
} /* size: 0, variables: 1, inline expansions: 10 (51 bytes) */

// <01079966> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:247
// variables: 3
// function calls: 7
void CBlendAnimNode::SetChildName(int childIndex, const CUtlString& name)
{
	const char   __FUNCTION__; // 19940
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 249
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 250
	}
	CUtlVectorBase<CBlendNodeChild, CUtlMemory<CBlendNodeChild, int> >::Count(); // 250
	CUtlMemory<CBlendNodeChild, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CBlendNodeChild, CUtlMemory<CBlendNodeChild, int> >::operator[](
			int i);  // 251
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 251
} /* size: 0, variables: 1, inline expansions: 7 (128 bytes) */

// <01090A1C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:255
// function calls: 3
void CBlendAnimNode::GetChildBlendValue(int childIndex)
{
	{
	}
	CUtlVectorBase<CBlendNodeChild, CUtlMemory<CBlendNodeChild, int> >::Count(); // 258
	{
	}
	CUtlMemory<CBlendNodeChild, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CBlendNodeChild, CUtlMemory<CBlendNodeChild, int> >::operator[](
			int i);  // 259
} /* size: 0, inline expansions: 3 (6 bytes) */

// <010798C7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:255
// variables: 3
void CBlendAnimNode::GetChildBlendValue(int childIndex)
{
	const char   __FUNCTION__; // 20097
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 257
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 258
	}
} /* size: 0, variables: 1 */

// <01090B13> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:263
// function calls: 3
void CBlendAnimNode::SetChildBlendValue(int childIndex, float blendValue)
{
	{
	}
	CUtlVectorBase<CBlendNodeChild, CUtlMemory<CBlendNodeChild, int> >::Count(); // 266
	{
	}
	CUtlMemory<CBlendNodeChild, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CBlendNodeChild, CUtlMemory<CBlendNodeChild, int> >::operator[](
			int i);  // 267
} /* size: 0, inline expansions: 3 (6 bytes) */

// <0107981A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:263
// variables: 3
void CBlendAnimNode::SetChildBlendValue(int childIndex, float blendValue)
{
	const char   __FUNCTION__; // 20097
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 265
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 266
	}
} /* size: 0, variables: 1 */

// <01079802> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:271
void BlendSourceChangedCallback(void* pThis)
{
} /* size: 0 */

// <010797BE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blendanimnode.cpp:277
// variable: 1
void VisibleIfSourceIsParam(void* pThis)
{
	CBlendAnimNode* pThisPtr; // 279
} /* size: 16, variables: 1 */

