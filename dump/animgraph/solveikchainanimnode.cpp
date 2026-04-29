
//
// animgraph/solveikchainanimnode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 44
//

// <01292CBA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:15
void ISolveIKChainSettings::GetTypeInfo()
{
} /* size: 0 */

// <01292B27> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:15
// function calls: 3
void* ISolveIKChainSettings::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<ISolveIKChainSettings>::CastTo(
		ISolveIKChainSettings* derived,
		ClassID baseTypeInfo);  // 15
} /* size: 0, inline expansions: 3 (0 bytes) */

// <01292994> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:15
// function calls: 3
const void* ISolveIKChainSettings::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<ISolveIKChainSettings>::CastTo(
		const ISolveIKChainSettings* derived,
		ClassID baseTypeInfo);  // 15
} /* size: 0, inline expansions: 3 (0 bytes) */

// <012928FB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:16
void ISolveIKChainAnimNode::GetTypeInfo()
{
} /* size: 0 */

// <01292768> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:16
// function calls: 3
void* ISolveIKChainAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<ISolveIKChainAnimNode>::CastTo(
		ISolveIKChainAnimNode* derived,
		ClassID baseTypeInfo);  // 16
} /* size: 0, inline expansions: 3 (0 bytes) */

// <012925D5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:16
// function calls: 3
const void* ISolveIKChainAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<ISolveIKChainAnimNode>::CastTo(
		const ISolveIKChainAnimNode* derived,
		ClassID baseTypeInfo);  // 16
} /* size: 0, inline expansions: 3 (0 bytes) */

// <0129BD32> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:18
void CSolveIKChainAnimNodeChainData::GetTypeInfo()
{
} /* size: 12 */

// <012923A9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:18
// function calls: 3
void* CSolveIKChainAnimNodeChainData::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CSolveIKChainAnimNodeChainData>::CastTo(
		CSolveIKChainAnimNodeChainData* derived,
		ClassID baseTypeInfo);  // 18
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01292215> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:18
// function calls: 3
const void* CSolveIKChainAnimNodeChainData::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CSolveIKChainAnimNodeChainData>::CastTo(
		const CSolveIKChainAnimNodeChainData* derived,
		ClassID baseTypeInfo);  // 18
} /* size: 0, inline expansions: 3 (295 bytes) */

// <0129F1BF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:21
void MyTypeInfo(void)
{
} /* size: 0 */

// <0129BD5C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:21
void CSolveIKChainAnimNode::GetTypeInfo()
{
} /* size: 12 */

// <01291FFD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:21
// function calls: 3
void* CSolveIKChainAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 80
	CClassInfo::GetID(); // 80
	{
	}
	CClassInfoT<CSolveIKChainAnimNode>::CastTo(
		CSolveIKChainAnimNode* derived,
		ClassID baseTypeInfo);  // 21
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01291E69> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:21
// function calls: 3
const void* CSolveIKChainAnimNode::CastToBase(ClassID typeID)
{
	MyTypeID(void); // 87
	CClassInfo::GetID(); // 87
	{
	}
	CClassInfoT<CSolveIKChainAnimNode>::CastTo(
		const CSolveIKChainAnimNode* derived,
		ClassID baseTypeInfo);  // 21
} /* size: 0, inline expansions: 3 (295 bytes) */

// <01291CB3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:35
// variable: 1
// function calls: 4
void GetItemName(void* pClassInstance, CUtlString* pOutElementName)
{
	const CSolveIKChainAnimNodeChainData* pInstance; // 37
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 39
} /* size: 86, variables: 1, inline expansions: 4 (106 bytes) */

// <01291C9C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:43
void OnTargetSettingSourceChanged(void* pThis)
{
} /* size: 0 */

// <01291C85> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:48
void OnSolverSettingSourceChanged(void* pThis)
{
} /* size: 0 */

// <01291C57> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:54
void CSolveIKChainAnimNodeChainData::GetChainName()
{
} /* size: 9 */

// <0129D9E9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:60
// function calls: 4
void CSolveIKChainAnimNodeChainData::SetChainName(const CUtlString& chainName)
{
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 62
} /* size: 86, inline expansions: 4 (106 bytes) */

// <01291C32> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:60
void CSolveIKChainAnimNodeChainData::SetChainName(const CUtlString& chainName)
{
} /* size: 0 */

// <01291C04> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:66
void CSolveIKChainAnimNodeChainData::GetSolverSource()
{
} /* size: 8 */

// <01291BC7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:72
void CSolveIKChainAnimNodeChainData::SetSolverSource(SolveIKChainAnimNodeSettingSource src)
{
} /* size: 8 */

// <01291B99> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:78
void CSolveIKChainAnimNodeChainData::GetSolverSettings()
{
} /* size: 9 */

// <01291B53> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:90
void CSolveIKChainAnimNodeChainData::GetTargetSource()
{
} /* size: 8 */

// <01291B16> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:96
void CSolveIKChainAnimNodeChainData::SetTargetSource(SolveIKChainAnimNodeSettingSource src)
{
} /* size: 8 */

// <01291AE8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:102
void CSolveIKChainAnimNodeChainData::GetTargetSettings()
{
} /* size: 9 */

// <01290E07> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:121
// variables: 15
// function calls: 44
void CSolveIKChainAnimNode::CreateUpdateNode(CAnimGraphInitContext& initContext)
{
	CPackedHandle<CSolveIKChainUpdateNode> hNodeHandle; // 123
	const CIKData_t* pIKData; // 125
	int nNumChains; // 126
	const CAnimContainer* pAnimContainer; // 128
	CSolveIKChainUpdateNode* pNode; // 135
	const CAnimUpdateNodeBase* childUpdateNode; // 137
	SolveIKChainPoseOpFixedSettings_t& poseOpFixedSettings; // 143
	SolveIKChainUpdateNodeFixedSettings_t& updateNodeFixedSettings; // 144
	{
		int nAnimNodeIKChainIndex; // 148
		{
			const CSolveIKChainAnimNodeChainData& ikChainData; // 150
			{
				int nModelIKChainIndex; // 152
				{
					const CIKChainData_t* pModelIKChainData; // 154
					{
						ChainToSolveData_t* pChainsToSolveData; // 158
						{
							ChainToSolveData_t& chainToSolveDatum; // 191
							{
							}
							CRelativeOffset<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>::IsValid(); // 30
							CRelativeOffset<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>::Get(); // 90
							CRelativeArray<SolveIKChainUpdateNodeFixedSettings_t::ChainToSolveData_t>::operator[](
									int index);  // 191
							AnimParamID::AnimParamID(
									const AnimParamID& rhs);  // 193
							CAnimParamHandle::operator=(
									const CAnimParamHandle& rhs);  // 193
							CAnimParamHandle::IsValid(); // 194
						}
						CRelativeOffset<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>::IsValid(); // 30
						CRelativeOffset<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>::Get(); // 90
						{
						}
						CRelativeArray<SolveIKChainPoseOpFixedSettings_t::ChainToSolveData_t>::operator[](
								int index);  // 158
						V_strlen(const char* str); // 393
						CUtlString::Length(); // 161
						CUtlString::Get(); // 161
						CUtlString::operator=(
								const CUtlString& src);  // 9
						IKBoneNameAndIndex_t::operator=(
								const IKBoneNameAndIndex_t  &);  // 42
						AnimParamID::operator=(
								const AnimParamID& rhs);  // 42
						IKTargetSettings_t::operator=(
								const IKTargetSettings_t  &);  // 177
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
								const Vector& src);  // 185
						V_strlen(const char* str); // 393
						CUtlString::Length(); // 161
						CUtlString::Get(); // 161
						CUtlString::operator=(
								const CUtlString& src);  // 9
						IKBoneNameAndIndex_t::operator=(
								const IKBoneNameAndIndex_t  &);  // 42
						AnimParamID::operator=(
								const AnimParamID& rhs);  // 42
						IKTargetSettings_t::operator=(
								const IKTargetSettings_t  &);  // 180
					}
					CUtlMemory<CIKChainData_t, int>::operator[](
							int i);  // 595
					CUtlVectorBase<CIKChainData_t, CUtlMemory<CIKChainData_t, int> >::operator[](
							int i);  // 154
				}
				CUtlVectorBase<CIKChainData_t, CUtlMemory<CIKChainData_t, int> >::Count(); // 152
			}
			CUtlMemory<CSolveIKChainAnimNodeChainData, int>::operator[](
					int i);  // 595
			CUtlVectorBase<CSolveIKChainAnimNodeChainData, CUtlMemory<CSolveIKChainAnimNodeChainData, int> >::operator[](
					int i);  // 150
		}
		CUtlVectorBase<CSolveIKChainAnimNodeChainData, CUtlMemory<CSolveIKChainAnimNodeChainData, int> >::Count(); // 148
	}
	CAnimContainer::GetIKData(); // 131
	CUtlVectorBase<CIKChainData_t, CUtlMemory<CIKChainData_t, int> >::Count(); // 132
	CUtlVectorBase<CSolveIKChainAnimNodeChainData, CUtlMemory<CSolveIKChainAnimNodeChainData, int> >::Count(); // 132
	CPackedDataT<false>::AddItem<CSolveIKChainUpdateNode, CAnimGraphInitContext&, int&>(
									CPackedHandle<CSolveIKChainUpdateNode>* handleOut);  // 135
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 137
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 137
	CRelativeOffset<const CAnimUpdateNodeBase>::SetOffset(
			const CAnimUpdateNodeBase* targetPtr);  // 20
	CRelativeOffset<const CAnimUpdateNodeBase>::operator=(
			const CAnimUpdateNodeBase* targetPtr);  // 140
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<SolveIKChainPoseOpFixedSettings_t>(
							const CPackedHandle<SolveIKChainPoseOpFixedSettings_t>& handle);  // 143
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<SolveIKChainUpdateNodeFixedSettings_t>(
								const CPackedHandle<SolveIKChainUpdateNodeFixedSettings_t>& handle);  // 144
} /* size: 0, variables: 8, inline expansions: 12 (135 bytes) */

// <01290BA3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:208
// function calls: 9
void CSolveIKChainAnimNode::CSolveIKChainAnimNode()
{
	ISolveIKChainAnimNode::ISolveIKChainAnimNode(); // 209
	AnimNodeID::AnimNodeID(); // 22
	AnimOutputID::AnimOutputID(); // 22
	CNodeConnection::CNodeConnection(); // 209
	CUtlMemory<CSolveIKChainAnimNodeChainData, int>::ValidateGrowSize(); // 475
	CUtlMemory<CSolveIKChainAnimNodeChainData, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CSolveIKChainAnimNodeChainData, CUtlMemory<CSolveIKChainAnimNodeChainData, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CSolveIKChainAnimNodeChainData, CUtlMemory<CSolveIKChainAnimNodeChainData, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CSolveIKChainAnimNodeChainData, CUtlMemory<CSolveIKChainAnimNodeChainData, int> >::CUtlVector(); // 209
} /* size: 114, inline expansions: 9 (96 bytes) */

// <01290B8A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:208
void CSolveIKChainAnimNode::CSolveIKChainAnimNode()
{
} /* size: 0 */

// <01290B72> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:214
void CSolveIKChainAnimNode::GetChildCount()
{
} /* size: 0 */

// <01290A83> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:219
// function calls: 2
void CSolveIKChainAnimNode::GetChild(int childIndex)
{
	CSmartPtr<CAnimGraphContext, CRefCountAccessor>::operator->(); // 221
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 221
} /* size: 78, inline expansions: 2 (9 bytes) */

// <01290A10> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:224
// function call: 1
void CSolveIKChainAnimNode::GetChildID(int childIndex)
{
	AnimNodeID::AnimNodeID(
			const AnimNodeID& rhs);  // 226
} /* size: 13, inline expansions: 1 (5 bytes) */

// <01290986> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:229
// function call: 1
void CSolveIKChainAnimNode::SetChildID(int childIndex, AnimNodeID nodeID)
{
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 231
} /* size: 10, inline expansions: 1 (5 bytes) */

// <0129C8E9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:234
// function calls: 2
void CSolveIKChainAnimNode::GetChildName(int childIndex)
{
	CUtlString::CUtlString(
			const char* pString);  // 236
	CSolveIKChainAnimNode::GetChildName(
			int childIndex);  // 234
} /* size: 146, inline expansions: 2 (99 bytes) */

// <0129094A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:234
// variable: 1
void CSolveIKChainAnimNode::GetChildName(int childIndex)
{
	CUtlString sChildName; // 236
} /* size: 0, variables: 1 */

// <0129BD86> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:240
// function call: 1
void CSolveIKChainAnimNode::GetChainCount()
{
	CUtlVectorBase<CSolveIKChainAnimNodeChainData, CUtlMemory<CSolveIKChainAnimNodeChainData, int> >::Count(); // 242
} /* size: 8, inline expansions: 1 (0 bytes) */

// <01290931> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:240
void CSolveIKChainAnimNode::GetChainCount()
{
} /* size: 0 */

// <012908BE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:246
// function call: 1
void CSolveIKChainAnimNode::GetChildOutputID(int index)
{
	AnimOutputID::AnimOutputID(
			const AnimOutputID& rhs);  // 248
} /* size: 13, inline expansions: 1 (5 bytes) */

// <012907B6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:252
// function calls: 3
void CSolveIKChainAnimNode::SetInputConnection(int index, CNodeConnection connection)
{
	AnimNodeID::operator=(
			const AnimNodeID& rhs);  // 22
	AnimOutputID::operator=(
			const AnimOutputID& rhs);  // 22
	CNodeConnection::operator=(
			const CNodeConnection  &);  // 254
} /* size: 16, inline expansions: 3 (22 bytes) */

// <012A02A0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:258
// variable: 1
// function calls: 19
void CSolveIKChainAnimNode::AddChain()
{
	int nNewIndex; // 260
	CUtlMemory<CSolveIKChainAnimNodeChainData, int>::NumAllocated(); // 1143
	CUtlMemory<CSolveIKChainAnimNodeChainData, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CSolveIKChainAnimNodeChainData, CUtlMemory<CSolveIKChainAnimNodeChainData, int> >::Element(
		int i);  // 1148
	ISolveIKChainSettings::ISolveIKChainSettings(); // 29
	CUtlString::CUtlString(); // 29
	AnimParamID::AnimParamID(); // 42
	CUtlString::CUtlString(); // 26
	IKBoneNameAndIndex_t::IKBoneNameAndIndex_t(); // 42
	IKTargetSettings_t::IKTargetSettings_t(); // 29
	IKSolverSettings_t::IKSolverSettings_t(); // 29
	CSolveIKChainAnimNodeChainData::CSolveIKChainAnimNodeChainData(); // 1479
	Construct<CSolveIKChainAnimNodeChainData>(CSolveIKChainAnimNodeChainData* pMemory); // 1148
	CUtlMemory<CSolveIKChainAnimNodeChainData, int>::Base(); // 112
	CUtlVectorBase<CSolveIKChainAnimNodeChainData, CUtlMemory<CSolveIKChainAnimNodeChainData, int> >::Base(); // 368
	CUtlVectorBase<CSolveIKChainAnimNodeChainData, CUtlMemory<CSolveIKChainAnimNodeChainData, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CSolveIKChainAnimNodeChainData, CUtlMemory<CSolveIKChainAnimNodeChainData, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CSolveIKChainAnimNodeChainData, CUtlMemory<CSolveIKChainAnimNodeChainData, int> >::AddToTail(); // 260
	CUtlMemory<CSolveIKChainAnimNodeChainData, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CSolveIKChainAnimNodeChainData, CUtlMemory<CSolveIKChainAnimNodeChainData, int> >::operator[](
			int i);  // 261
} /* size: 213, variables: 1, inline expansions: 19 (576 bytes) */

// <01290790> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:258
// variable: 1
void CSolveIKChainAnimNode::AddChain()
{
	int nNewIndex; // 260
} /* size: 0, variables: 1 */

// <012902DB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:265
// variables: 2
// function calls: 24
void CSolveIKChainAnimNode::AddChain(const CUtlString& chainName)
{
	int nNewIndex; // 267
	ISolveIKChainSettings* pChainSettings; // 269
	CUtlMemory<CSolveIKChainAnimNodeChainData, int>::NumAllocated(); // 1143
	CUtlMemory<CSolveIKChainAnimNodeChainData, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CSolveIKChainAnimNodeChainData, CUtlMemory<CSolveIKChainAnimNodeChainData, int> >::Element(
		int i);  // 1148
	ISolveIKChainSettings::ISolveIKChainSettings(); // 29
	CUtlString::CUtlString(); // 29
	IKSolverSettings_t::IKSolverSettings_t(); // 29
	AnimParamID::AnimParamID(); // 42
	CUtlString::CUtlString(); // 26
	IKBoneNameAndIndex_t::IKBoneNameAndIndex_t(); // 42
	IKTargetSettings_t::IKTargetSettings_t(); // 29
	CSolveIKChainAnimNodeChainData::CSolveIKChainAnimNodeChainData(); // 1479
	Construct<CSolveIKChainAnimNodeChainData>(CSolveIKChainAnimNodeChainData* pMemory); // 1148
	CUtlMemory<CSolveIKChainAnimNodeChainData, int>::Base(); // 112
	CUtlVectorBase<CSolveIKChainAnimNodeChainData, CUtlMemory<CSolveIKChainAnimNodeChainData, int> >::Base(); // 368
	CUtlVectorBase<CSolveIKChainAnimNodeChainData, CUtlMemory<CSolveIKChainAnimNodeChainData, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<CSolveIKChainAnimNodeChainData, CUtlMemory<CSolveIKChainAnimNodeChainData, int> >::GrowMemory(
			int num);  // 1145
	CUtlVectorBase<CSolveIKChainAnimNodeChainData, CUtlMemory<CSolveIKChainAnimNodeChainData, int> >::AddToTail(); // 267
	CUtlMemory<CSolveIKChainAnimNodeChainData, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CSolveIKChainAnimNodeChainData, CUtlMemory<CSolveIKChainAnimNodeChainData, int> >::operator[](
			int i);  // 269
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 62
	CSolveIKChainAnimNodeChainData::SetChainName(
			const CUtlString& chainName);  // 270
} /* size: 324, variables: 2, inline expansions: 24 (759 bytes) */

// <0128FF56> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:276
// function calls: 16
void CSolveIKChainAnimNode::RemoveChain(int index)
{
	CUtlString::~CUtlString(); // 9
	IKBoneNameAndIndex_t::~IKBoneNameAndIndex_t(); // 42
	IKTargetSettings_t::~IKTargetSettings_t(); // 12
	CUtlString::~CUtlString(); // 12
	CSolveIKChainAnimNodeChainData::~CSolveIKChainAnimNodeChainData(); // 1526
	Destruct<CSolveIKChainAnimNodeChainData>(CSolveIKChainAnimNodeChainData* pMemory); // 1607
	CUtlMemory<CSolveIKChainAnimNodeChainData, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CSolveIKChainAnimNodeChainData, CUtlMemory<CSolveIKChainAnimNodeChainData, int> >::Element(
		int i);  // 1607
	CUtlMemory<CSolveIKChainAnimNodeChainData, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CSolveIKChainAnimNodeChainData, CUtlMemory<CSolveIKChainAnimNodeChainData, int> >::Element(
		int i);  // 1114
	CUtlMemory<CSolveIKChainAnimNodeChainData, int>::operator[](
			int i);  // 602
	CUtlVectorBase<CSolveIKChainAnimNodeChainData, CUtlMemory<CSolveIKChainAnimNodeChainData, int> >::Element(
		int i);  // 1114
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 115
	V_memmove(void* dest,
			const void* src,
			size_t count);  // 1114
	CUtlVectorBase<CSolveIKChainAnimNodeChainData, CUtlMemory<CSolveIKChainAnimNodeChainData, int> >::ShiftElementsLeft(
				int elem,
				int num);  // 1608
	CUtlVectorBase<CSolveIKChainAnimNodeChainData, CUtlMemory<CSolveIKChainAnimNodeChainData, int> >::Remove(
		int elem);  // 278
} /* size: 144, inline expansions: 16 (354 bytes) */

// <0129BDE0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:282
// function calls: 2
void CSolveIKChainAnimNode::GetChain(int index)
{
	CUtlMemory<CSolveIKChainAnimNodeChainData, int>::operator[](
			int i);  // 588
	CUtlVectorBase<CSolveIKChainAnimNodeChainData, CUtlMemory<CSolveIKChainAnimNodeChainData, int> >::operator[](
			int i);  // 284
} /* size: 16, inline expansions: 2 (22 bytes) */

// <0128FF30> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/solveikchainanimnode.cpp:282
void CSolveIKChainAnimNode::GetChain(int index)
{
} /* size: 0 */

