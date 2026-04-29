
//
// ik/ikcontrolrigdescription_base.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 11
//	struct: 1
//

// <000F81BB> ik/ikcontrolrigdescription_base.cpp:28
void CIKControlRigDescription_Base::CreateControlRigContext()
{
} /* size: 51 */

// <000F5CB1> ik/ikcontrolrigdescription_base.cpp:33
// variables: 14
// function calls: 118
void CIKControlRigDescription_Base::AddBonesInvolvedInIK(CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry additionalDependentBones)
{
	{
		const CIKChainDescription* pChain; // 40
		const CUtlLeanVector<CIKChainDescription*, short int>& __for_range; // 19465
		const_iterator __for_begin; // 17429
		const_iterator __for_end; // 17429
		CIKControlRigDescription_Base::GetChainVector(); // 40
		CUtlLeanVectorBase<CIKChainDescription::Base(); // 416
		CUtlLeanVectorImpl<CUtlLeanVectorBase<CIKChainDescription::begin(); // 40
		CUtlLeanVectorImpl<CUtlLeanVectorBase<CIKChainDescription::Count(); // 418
		CUtlLeanVectorImpl<CUtlLeanVectorBase<CIKChainDescription::end(); // 40
		{
			int nJointIndex; // 56
			CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 56
			{
				const CIKChainJointData_t& ikJoint; // 58
				CUtlMemory<CIKChainJointData_t, int>::operator[](
						int i);  // 595
				CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::operator[](
						int i);  // 58
				CIKChainJointData_t::GetBoneIndex(); // 60
				Mix32HashFunctor::operator(
						uint32 n);  // 240
				CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::Base(); // 650
				IdealIndex(uint32_if32BitStorage h,
						uint32 m);  // 653
				CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::Count(); // 651
				CUtlHashtableEntry<int, empty_t>::IdealIndex(
						uint32 slotmask);  // 656
				CUtlHashtableEntry<int, empty_t>::IdealIndex(
						uint32 slotmask);  // 667
				DoLookup<int>(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHa this,
						int x,
						unsigned int h,
						handle_t* pPreviousInChain);  // 697
				CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::operator[](
						int i);  // 706
				CUtlKeyValuePair<int, empty_t>::CUtlKeyValuePair<int>(
							const int& k);  // 1514
				Construct<CUtlKeyValuePair<int, empty_t>, int&>(CUtlKeyValuePair<int, empty_t>* pMemory); // 706
				DoInsert<int>(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtabl this,
						int k,
						unsigned int h,
						bool* pDidInsert);  // 695
				DoInsert<int>(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtabl this,
						int k,
						unsigned int h,
						bool* pDidInsert);  // 240
				Insert(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtabl this,
					KeyArg_t k);  // 144
				AddBoneIfValid(int nBoneIndex,
						CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry bonesInvolvedInIK);  // 60
				{
					int nBone; // 63
					const CUtlLeanVector<int, short int>& __for_range; // 17087
					const_iterator __for_begin; // 17097
					const_iterator __for_end; // 17107
					CUtlLeanVectorBase<int, short int>::Base(); // 416
					CUtlLeanVectorImpl<CUtlLeanVectorBase<int, short int>, int, short int>::begin(); // 63
					CUtlLeanVectorImpl<CUtlLeanVectorBase<int, short int>, int, short int>::Count(); // 418
					CUtlLeanVectorImpl<CUtlLeanVectorBase<int, short int>, int, short int>::end(); // 63
					Mix32HashFunctor::operator(
							uint32 n);  // 240
					CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::Base(); // 650
					IdealIndex(uint32_if32BitStorage h,
							uint32 m);  // 653
					CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::Count(); // 651
					CUtlHashtableEntry<int, empty_t>::IdealIndex(
							uint32 slotmask);  // 656
					CUtlHashtableEntry<int, empty_t>::IdealIndex(
							uint32 slotmask);  // 667
					DoLookup<int>(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHa this,
							int x,
							unsigned int h,
							handle_t* pPreviousInChain);  // 697
					CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::operator[](
							int i);  // 706
					CUtlKeyValuePair<int, empty_t>::CUtlKeyValuePair<int>(
								const int& k);  // 1514
					Construct<CUtlKeyValuePair<int, empty_t>, int&>(CUtlKeyValuePair<int, empty_t>* pMemory); // 706
					DoInsert<int>(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtabl this,
							int k,
							unsigned int h,
							bool* pDidInsert);  // 695
					DoInsert<int>(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtabl this,
							int k,
							unsigned int h,
							bool* pDidInsert);  // 240
					Insert(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtabl this,
						KeyArg_t k);  // 144
					AddBoneIfValid(int nBoneIndex,
							CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry bonesInvolvedInIK);  // 65
				}
			}
		}
		Mix32HashFunctor::operator(
				uint32 n);  // 240
		CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::Base(); // 650
		IdealIndex(uint32_if32BitStorage h,
				uint32 m);  // 653
		CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::Count(); // 651
		CUtlHashtableEntry<int, empty_t>::IdealIndex(
				uint32 slotmask);  // 656
		CUtlHashtableEntry<int, empty_t>::IdealIndex(
				uint32 slotmask);  // 667
		DoLookup<int>(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHa this,
				int x,
				unsigned int h,
				handle_t* pPreviousInChain);  // 697
		CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::operator[](
				int i);  // 706
		CUtlKeyValuePair<int, empty_t>::CUtlKeyValuePair<int>(
					const int& k);  // 1514
		Construct<CUtlKeyValuePair<int, empty_t>, int&>(CUtlKeyValuePair<int, empty_t>* pMemory); // 706
		DoInsert<int>(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtabl this,
				int k,
				unsigned int h,
				bool* pDidInsert);  // 695
		DoInsert<int>(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtabl this,
				int k,
				unsigned int h,
				bool* pDidInsert);  // 240
		Insert(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtabl this,
			KeyArg_t k);  // 144
		AddBoneIfValid(int nBoneIndex,
				CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry bonesInvolvedInIK);  // 69
		CIKChainDescription::GetLockBoneInfluenceDriverIndex(); // 70
		Mix32HashFunctor::operator(
				uint32 n);  // 240
		CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::Base(); // 650
		IdealIndex(uint32_if32BitStorage h,
				uint32 m);  // 653
		CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::Count(); // 651
		CUtlHashtableEntry<int, empty_t>::IdealIndex(
				uint32 slotmask);  // 656
		CUtlHashtableEntry<int, empty_t>::IdealIndex(
				uint32 slotmask);  // 667
		DoLookup<int>(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHa this,
				int x,
				unsigned int h,
				handle_t* pPreviousInChain);  // 697
		CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::operator[](
				int i);  // 706
		CUtlKeyValuePair<int, empty_t>::CUtlKeyValuePair<int>(
					const int& k);  // 1514
		Construct<CUtlKeyValuePair<int, empty_t>, int&>(CUtlKeyValuePair<int, empty_t>* pMemory); // 706
		DoInsert<int>(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtabl this,
				int k,
				unsigned int h,
				bool* pDidInsert);  // 695
		DoInsert<int>(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtabl this,
				int k,
				unsigned int h,
				bool* pDidInsert);  // 240
		Insert(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtabl this,
			KeyArg_t k);  // 144
		AddBoneIfValid(int nBoneIndex,
				CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry bonesInvolvedInIK);  // 70
		CIKChainDescription::GetReverseFootLockBoneIndex(); // 71
		Mix32HashFunctor::operator(
				uint32 n);  // 240
		CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::Base(); // 650
		IdealIndex(uint32_if32BitStorage h,
				uint32 m);  // 653
		CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::Count(); // 651
		CUtlHashtableEntry<int, empty_t>::IdealIndex(
				uint32 slotmask);  // 656
		CUtlHashtableEntry<int, empty_t>::IdealIndex(
				uint32 slotmask);  // 667
		DoLookup<int>(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHa this,
				int x,
				unsigned int h,
				handle_t* pPreviousInChain);  // 697
		CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::operator[](
				int i);  // 706
		CUtlKeyValuePair<int, empty_t>::CUtlKeyValuePair<int>(
					const int& k);  // 1514
		Construct<CUtlKeyValuePair<int, empty_t>, int&>(CUtlKeyValuePair<int, empty_t>* pMemory); // 706
		DoInsert<int>(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtabl this,
				int k,
				unsigned int h,
				bool* pDidInsert);  // 695
		DoInsert<int>(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtabl this,
				int k,
				unsigned int h,
				bool* pDidInsert);  // 240
		Insert(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtabl this,
			KeyArg_t k);  // 144
		AddBoneIfValid(int nBoneIndex,
				CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry bonesInvolvedInIK);  // 71
		CIKChainJointData_t::GetBoneIndex(); // 72
		Mix32HashFunctor::operator(
				uint32 n);  // 240
		CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::Base(); // 650
		IdealIndex(uint32_if32BitStorage h,
				uint32 m);  // 653
		CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::Count(); // 651
		CUtlHashtableEntry<int, empty_t>::IdealIndex(
				uint32 slotmask);  // 656
		CUtlHashtableEntry<int, empty_t>::IdealIndex(
				uint32 slotmask);  // 667
		DoLookup<int>(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHa this,
				int x,
				unsigned int h,
				handle_t* pPreviousInChain);  // 697
		CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::operator[](
				int i);  // 706
		CUtlKeyValuePair<int, empty_t>::CUtlKeyValuePair<int>(
					const int& k);  // 1514
		Construct<CUtlKeyValuePair<int, empty_t>, int&>(CUtlKeyValuePair<int, empty_t>* pMemory); // 706
		DoInsert<int>(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtabl this,
				int k,
				unsigned int h,
				bool* pDidInsert);  // 695
		DoInsert<int>(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtabl this,
				int k,
				unsigned int h,
				bool* pDidInsert);  // 240
		Insert(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtabl this,
			KeyArg_t k);  // 144
		AddBoneIfValid(int nBoneIndex,
				CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry bonesInvolvedInIK);  // 72
		{
			const IIKRuleDescription* pRuleDescription; // 75
			const CUtlLeanVector<const IIKRuleDescription*, short int>& __for_range; // 17133
			const_iterator __for_begin; // 17143
			const_iterator __for_end; // 17153
			CUtlLeanVectorBase<const IIKRuleDescription::Base(); // 416
			CUtlLeanVectorImpl<CUtlLeanVectorBase<const IIKRuleDescription::begin(); // 75
			CUtlLeanVectorImpl<CUtlLeanVectorBase<const IIKRuleDescription::Count(); // 418
			CUtlLeanVectorImpl<CUtlLeanVectorBase<const IIKRuleDescription::end(); // 75
		}
		CIKChainDescription::AddBonesInvolvedInIK(
					CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtableEntry bonesInvolvedInIK);  // 42
	}
	Mix32HashFunctor::operator(
			uint32 n);  // 240
	CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::Base(); // 650
	IdealIndex(uint32_if32BitStorage h,
			uint32 m);  // 653
	CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::Count(); // 651
	CUtlHashtableEntry<int, empty_t>::IdealIndex(
			uint32 slotmask);  // 656
	CUtlHashtableEntry<int, empty_t>::IdealIndex(
			uint32 slotmask);  // 667
	DoLookup<int>(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHa this,
			int x,
			unsigned int h,
			handle_t* pPreviousInChain);  // 697
	CUtlMemory<CUtlHashtableEntry<int, empty_t>, int>::operator[](
			int i);  // 706
	CUtlKeyValuePair<int, empty_t>::CUtlKeyValuePair<int>(
				const int& k);  // 1514
	Construct<CUtlKeyValuePair<int, empty_t>, int&>(CUtlKeyValuePair<int, empty_t>* pMemory); // 706
	DoInsert<int>(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtabl this,
			int k,
			unsigned int h,
			bool* pDidInsert);  // 695
	DoInsert<int>(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtabl this,
			int k,
			unsigned int h,
			bool* pDidInsert);  // 240
	Insert(const CUtlHashtable<int, empty_t, DefaultHashFunctor<int>, DefaultEqualFunctor<int>, undefined_t, CUtlMemory<CUtlHashtabl this,
		KeyArg_t k);  // 37
} /* size: 2237, inline expansions: 13 (797 bytes) */

// <000F5BF5> ik/ikcontrolrigdescription_base.cpp:46
// function calls: 3
void CIKControlRigDescription_Base::GetTiltBoneIndex()
{
	ConVarRef::CheckAccess(); // 129
	ConVarRef::GetInt(); // 48
	ConVarRef::GetBool(); // 48
} /* size: 63, inline expansions: 3 (50 bytes) */

// <000F02BF> ik/ikcontrolrigdescription_base.cpp:66
void JointTreeNode::~JointTreeNode()
{
} /* size: 0 */

// <000F02A3> ik/ikcontrolrigdescription_base.cpp:66
inline void JointTreeNode::~JointTreeNode()
{
} /* size: 0 */

// <000E16BD> ik/ikcontrolrigdescription_base.cpp:66
// member functions: 2
// member variables: 2
// struct size: 24
struct JointTreeNode {
	/* ik/ikcontrolrigdescription_base.cpp:68 */
	void JointTreeNode(JointTreeNode* , int);
	int m_nBoneIndex; /* 0 4 */
	CUtlLeanVector<JointTreeNode*, short int> m_Children; /* 8 16 */
	void ~JointTreeNode(JointTreeNode* );
};

// <000F5B71> ik/ikcontrolrigdescription_base.cpp:68
void JointTreeNode::JointTreeNode(int nBoneIndex)
{
} /* size: 0 */

// <000F5B4C> ik/ikcontrolrigdescription_base.cpp:68
inline void JointTreeNode::JointTreeNode(int nBoneIndex)
{
} /* size: 0 */

// <000F36E5> ik/ikcontrolrigdescription_base.cpp:79
// variables: 24
// function calls: 140
void SetChildJointData(CIKChainDescription& ikChain, const CModel* pModel)
{
	CUtlMap<int, JointTreeNode*, short unsigned int, bool (*)(int const&, int const&)> nodeMap; // 82
	JointTreeNode* pRoot; // 83
	{
		{
			int nBoneIndex; // 90
			{
				CUtlVector<int, CUtlMemory<int, int> > ancestorsNeedingAdding; // 92
				{
					int nCurrentBoneIndex; // 95
					CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
							int num);  // 1198
					CUtlMemory<int, int>::operator[](
							int i);  // 602
					CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
						int i);  // 1201
					CopyConstruct<int>(int* pMemory,
								const int& src);  // 1201
					CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
							const int& src);  // 102
					CUtlRBTree<CUtlMap<int, JointTreeNode::FindAltKeyType<int>(
								const int& search);  // 243
					CUtlMap<int, JointTreeNode::Find(
						const KeyType_t& key);  // 234
					CUtlMap<int, JointTreeNode::HasKey(
						const KeyType_t& key);  // 97
				}
				{
					int nParentIndex; // 106
					{
						int nParentBoneIndex; // 108
						int nParentParent; // 109
						JointTreeNode* pParent; // 110
						JointTreeNode* pNewNode; // 112
						CUtlRBTree<CUtlMap<int, JointTreeNode::FindAltKeyType<int>(
									const int& search);  // 243
						CUtlMap<int, JointTreeNode::Find(
							const KeyType_t& key);  // 319
						CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, JointTreeNode::IsIdxValid(
								short unsigned int i);  // 661
						CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, JointTreeNode::operator[](
								short unsigned int i);  // 611
						CUtlRBTree<CUtlMap<int, JointTreeNode::LeftChild(
								short unsigned int i);  // 667
						CUtlRBTree<CUtlMap<int, JointTreeNode::IsValidIndex(
								short unsigned int i);  // 659
						CUtlRBTree<CUtlMap<int, JointTreeNode::IsValidIndex(
								short unsigned int i);  // 190
						CUtlMap<int, JointTreeNode::IsValidIndex(
								IndexType_t i);  // 320
						{
						}
						CUtlMap<int, JointTreeNode::FindElement(
								const KeyType_t& key);  // 110
						CUtlLeanVectorBase<JointTreeNode::EnsureCapacity(
								int nCapacity,
								bool bConservative);  // 71
						CUtlLeanVectorBase<JointTreeNode::CUtlLeanVectorBase(); // 411
						CUtlLeanVectorImpl<CUtlLeanVectorBase<JointTreeNode::CUtlLeanVectorImpl(); // 832
						CUtlLeanVector<JointTreeNode::CUtlLeanVector(); // 69
						JointTreeNode::JointTreeNode(
								int nBoneIndex);  // 112
						LeafCodeInfo_t::LeafCodeInfo_t(
								const char* szFile,
								int nLine,
								const char* szFunction);  // 313
						CUtlLeanVectorBase<JointTreeNode::EnsureCapacity(
								int nCapacity,
								bool bConservative);  // 629
						CUtlLeanVectorBase<JointTreeNode::Base(); // 279
						CUtlLeanVectorBase<JointTreeNode::Base(); // 630
						CUtlLeanVectorImpl<CUtlLeanVectorBase<JointTreeNode::AddToTailGetPtr(); // 638
						CUtlLeanVectorImpl<CUtlLeanVectorBase<JointTreeNode::AddToTail(
								JointTreeNode* const& src);  // 113
						Node_t::Node_t(
							const KeyType_t& k,
							const ElemType_t& e);  // 207
						CUtlMap<int, JointTreeNode::Insert(
							const KeyType_t& key,
							const ElemType_t& insert,
							ERBTreeInsertBehavior eInsertBehavior);  // 114
					}
				}
				CUtlMemory<int, int>::ValidateGrowSize(); // 475
				CUtlMemory<int, int>::CUtlMemory(
						int nGrowSize,
						int nInitAllocationCount);  // 527
				CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
				CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
						int growSize,
						int initCapacity);  // 418
				CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 92
				CUtlMemory<int, int>::Purge(); // 903
				CUtlMemory<int, int>::Purge(); // 1799
				CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
				ValidateAlignment<int>(void); // 508
				CUtlMemory<int, int>::Purge(); // 510
				CUtlMemory<int, int>::~CUtlMemory(); // 562
				CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
				CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 116
			}
		}
		Node_t::Node_t(
			const KeyType_t& k,
			const ElemType_t& e);  // 207
		CUtlMap<int, JointTreeNode::Insert(
			const KeyType_t& key,
			const ElemType_t& insert,
			ERBTreeInsertBehavior eInsertBehavior);  // 88
		CKeyLess::CKeyLess(
			LessFunc_t lessFunc);  // 201
		CUtlRBTree<CUtlMap<int, JointTreeNode::SetLessFunc(
				const LessFunc_t& func);  // 201
		CUtlMap<int, JointTreeNode::SetLessFunc(
				LessFunc_t func);  // 86
	}
	{
		const CIKChainJointData_t& ikJoint; // 119
		const CUtlVector<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >& __for_range; // 61732
		const_iterator __for_begin; // 58322
		const_iterator __for_end; // 58322
		{
			JointTreeNode* pJointTreeNode; // 122
			CUtlVector<JointTreeNode*, CUtlMemory<JointTreeNode*, int> > toVisit; // 124
			{
				int i; // 126
				CUtlLeanVectorImpl<CUtlLeanVectorBase<JointTreeNode::Count(); // 126
				CUtlLeanVectorBase<JointTreeNode::Base(); // 279
				CUtlLeanVectorBase<JointTreeNode::Base(); // 447
				CUtlLeanVectorImpl<CUtlLeanVectorBase<JointTreeNode::Element(
					int i);  // 438
				CUtlLeanVectorImpl<CUtlLeanVectorBase<JointTreeNode::operator[](
						int i);  // 128
			}
			{
				JointTreeNode* pNode; // 133
				bool bNeedsAdding; // 137
				{
					const CIKChainJointData_t& otherIkJoint; // 138
					const CUtlVector<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >& __for_range; // 61732
					const_iterator __for_begin; // 58322
					const_iterator __for_end; // 58322
					CIKChainDescription::GetJointVector(); // 138
					CUtlMemory<CIKChainJointData_t, int>::Base(); // 113
					CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Base(); // 103
					CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::begin(); // 138
					CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 105
					CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::end(); // 138
					CIKChainJointData_t::GetBoneIndex(); // 140
					CIKChainJointData_t::GetBoneIndex(); // 140
				}
				{
					int i; // 155
					CUtlLeanVectorImpl<CUtlLeanVectorBase<JointTreeNode::Count(); // 155
					CopyConstruct<JointTreeNode*>(JointTreeNode** pMemory,
									JointTreeNode* const& src);  // 1201
					CUtlMemory<JointTreeNode::operator[](
							int i);  // 602
					CUtlVectorBase<JointTreeNode::Element(
						int i);  // 1201
					CUtlVectorBase<JointTreeNode::ResetDbgInfo(); // 824
					CUtlVectorBase<JointTreeNode::GrowMemory(
							int num);  // 1198
					CUtlVectorBase<JointTreeNode::AddToTail(
							JointTreeNode* const& src);  // 157
					CUtlLeanVectorBase<JointTreeNode::Base(); // 279
					CUtlLeanVectorBase<JointTreeNode::Base(); // 447
					CUtlLeanVectorImpl<CUtlLeanVectorBase<JointTreeNode::Element(
						int i);  // 438
					CUtlLeanVectorImpl<CUtlLeanVectorBase<JointTreeNode::operator[](
							int i);  // 157
				}
				CUtlMemory<JointTreeNode::operator[](
						int i);  // 602
				CUtlVectorBase<JointTreeNode::Element(
					int i);  // 1114
				memmove(void* __dest,
					const void* __src,
					size_t __len);  // 115
				V_memmove(void* dest,
						const void* src,
						size_t count);  // 1114
				CUtlVectorBase<JointTreeNode::ShiftElementsLeft(
							int elem,
							int num);  // 1608
				CUtlVectorBase<JointTreeNode::Remove(
					int elem);  // 134
				{
					int* _pCrash; // 313
				}
				LeafCodeInfo_t::LeafCodeInfo_t(
						const char* szFile,
						int nLine,
						const char* szFunction);  // 313
				CUtlLeanVectorBase<int, short int>::EnsureCapacity(
						int nCapacity,
						bool bConservative);  // 629
				CUtlLeanVectorBase<int, short int>::Base(); // 279
				CUtlLeanVectorBase<int, short int>::Base(); // 630
				CUtlLeanVectorImpl<CUtlLeanVectorBase<int, short int>, int, short int>::AddToTailGetPtr(); // 638
				CUtlLeanVectorImpl<CUtlLeanVectorBase<int, short int>, int, short int>::AddToTail(
						const int& src);  // 152
				CUtlLeanVectorImpl<CUtlLeanVectorBase<JointTreeNode::Count(); // 154
				CUtlMemory<JointTreeNode::IsGrowable(); // 881
				CUtlMemory<JointTreeNode::EnsureCapacity(
						int num);  // 1006
				CUtlVectorBase<JointTreeNode::ResetDbgInfo(); // 1024
				CUtlVectorBase<JointTreeNode::EnsureCapacity(
						int num);  // 154
			}
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, JointTreeNode::IsIdxValid(
					short unsigned int i);  // 661
			CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, JointTreeNode::operator[](
					short unsigned int i);  // 611
			CUtlRBTree<CUtlMap<int, JointTreeNode::LeftChild(
					short unsigned int i);  // 667
			CUtlRBTree<CUtlMap<int, JointTreeNode::IsValidIndex(
					short unsigned int i);  // 659
			CUtlRBTree<CUtlMap<int, JointTreeNode::IsValidIndex(
					short unsigned int i);  // 190
			CUtlMap<int, JointTreeNode::IsValidIndex(
					IndexType_t i);  // 320
			{
			}
			CUtlRBTree<CUtlMap<int, JointTreeNode::FindAltKeyType<int>(
						const int& search);  // 243
			CUtlMap<int, JointTreeNode::Find(
				const KeyType_t& key);  // 319
			CUtlMap<int, JointTreeNode::FindElement(
					const KeyType_t& key);  // 122
			CIKChainJointData_t::GetBoneIndex(); // 122
			CUtlMemory<JointTreeNode::ValidateGrowSize(); // 475
			CUtlMemory<JointTreeNode::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<JointTreeNode::ResetDbgInfo(); // 530
			CUtlVectorBase<JointTreeNode::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<JointTreeNode::CUtlVector(); // 124
			CUtlLeanVectorImpl<CUtlLeanVectorBase<JointTreeNode::Count(); // 125
			CUtlVectorBase<JointTreeNode::GrowMemory(
					int num);  // 784
			CUtlVectorBase<JointTreeNode::GrowVector(
					int num);  // 1445
			CUtlVectorBase<JointTreeNode::InsertMultipleBefore(
						int elem,
						int num);  // 1437
			CUtlVectorBase<JointTreeNode::InsertMultipleBefore(
						int elem,
						int num);  // 1294
			CUtlVectorBase<JointTreeNode::AddMultipleToTail(
						int num);  // 125
			CUtlMemory<JointTreeNode::Purge(); // 903
			CUtlMemory<JointTreeNode::Purge(); // 1799
			CUtlVectorBase<JointTreeNode::Purge(); // 560
			ValidateAlignment<JointTreeNode*>(void); // 508
			CUtlMemory<JointTreeNode::Purge(); // 510
			CUtlMemory<JointTreeNode::~CUtlMemory(); // 562
			CUtlVectorBase<JointTreeNode::~CUtlVectorBase(); // 410
			CUtlVector<JointTreeNode::~CUtlVector(); // 160
		}
		CIKChainDescription::GetJointVector(); // 119
		CUtlMemory<CIKChainJointData_t, int>::Base(); // 113
		CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Base(); // 103
		CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::begin(); // 119
		CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::Count(); // 105
		CUtlVectorBase<CIKChainJointData_t, CUtlMemory<CIKChainJointData_t, int> >::end(); // 119
	}
	CUtlRBTree<CUtlMap<int, JointTreeNode::ResetDbgInfo(); // 491
	CUtlRBTree<CUtlMap<int, JointTreeNode::CUtlRBTree(
			int growSize,
			int initSize,
			const LessFunc_t& lessfunc);  // 63
	CUtlMap<int, JointTreeNode::CUtlMap(
		int growSize,
		int initSize,
		LessFunc_t lessfunc);  // 82
	CUtlLeanVectorBase<JointTreeNode::EnsureCapacity(
			int nCapacity,
			bool bConservative);  // 71
	CUtlLeanVectorBase<JointTreeNode::CUtlLeanVectorBase(); // 411
	CUtlLeanVectorImpl<CUtlLeanVectorBase<JointTreeNode::CUtlLeanVectorImpl(); // 832
	CUtlLeanVector<JointTreeNode::CUtlLeanVector(); // 69
	JointTreeNode::JointTreeNode(
			int nBoneIndex);  // 83
	CUtlMap<int, JointTreeNode::PurgeAndDeleteElements()(int const&, int const&)>* this); // 162
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, JointTreeNode::Purge(); // 903
	CUtlMemory<UtlRBTreeNode_t<CUtlMap<int, JointTreeNode::Purge(); // 1287
	CUtlRBTree<CUtlMap<int, JointTreeNode::Purge(); // 509
	CUtlRBTree<CUtlMap<int, JointTreeNode::~CUtlRBTree(); // 47
	CUtlMap<int, JointTreeNode::~CUtlMap()(int const&, int const&)>* this); // 163
} /* size: 0, variables: 2, inline expansions: 14 (514 bytes) */

// <000F2B94> ik/ikcontrolrigdescription_base.cpp:166
// variables: 19
// function calls: 31
bool CreateIKChainFromCompiledData(const CIKChainOldData_t& originalChainData, const CModel* pModel, CIKChainDescription* pChainDescription)
{
	CIKChainOldData_t& oldChainData; // 170
	const char   __FUNCTION__; // 31777
	{
		const CIKChainData_t& chainData; // 174
		const CUtlVector<CIKChainData_t, CUtlMemory<CIKChainData_t, int> >& __for_range; // 28635
		const_iterator __for_begin; // 25225
		const_iterator __for_end; // 25225
		CUtlMemory<CIKChainData_t, int>::Base(); // 113
		CUtlVectorBase<CIKChainData_t, CUtlMemory<CIKChainData_t, int> >::Base(); // 103
		CUtlVectorBase<CIKChainData_t, CUtlMemory<CIKChainData_t, int> >::begin(); // 174
		CUtlVectorBase<CIKChainData_t, CUtlMemory<CIKChainData_t, int> >::Count(); // 105
		CUtlVectorBase<CIKChainData_t, CUtlMemory<CIKChainData_t, int> >::end(); // 174
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 185
	}
	{
		const IIKRuleData* pRuleData; // 190
		CUtlVector<IIKRuleData*, CUtlMemory<IIKRuleData*, int> >& __for_range; // 40432
		iterator __for_begin; // 36749
		iterator __for_end; // 36749
		{
			IIKRuleDescription* pRuleDescription; // 192
			{
				CIKRuleDescription_Ground* pGroundRuleDescription; // 198
				V_strlen(const char* str); // 393
				CUtlString::Length(); // 161
				CUtlString::Get(); // 161
				CUtlString::operator=(
						const CUtlString& src);  // 9
				IKBoneNameAndIndex_t::operator=(
						const IKBoneNameAndIndex_t  &);  // 6
				CIKRuleData_Ground::operator=(
						const CIKRuleData_Ground  &);  // 23
				CIKRuleDescription_Ground::Set(
					const CIKRuleData_Ground& data);  // 199
			}
			{
				CIKRuleDescription_Ground_VirtualPlanes* pGround_VirtualPlanesRuleDescription; // 205
				V_strlen(const char* str); // 393
				CUtlString::Length(); // 161
				CUtlString::Get(); // 161
				CUtlString::operator=(
						const CUtlString& src);  // 9
				IKBoneNameAndIndex_t::operator=(
						const IKBoneNameAndIndex_t  &);  // 6
				CIKRuleData_Ground_VirtualPlanes::operator=(
						const CIKRuleData_Ground_VirtualPlanes  &);  // 27
				CIKRuleDescription_Ground_VirtualPlanes::Set(
					const CIKRuleData_Ground_VirtualPlanes& data);  // 206
			}
			{
				CIKRuleDescription_FollowAnimation* pFollowAnimationRuleDescription; // 212
			}
			{
				CIKRuleDescription_Debug* pDebugRuleDescription; // 219
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 226
			}
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 231
			}
			{
				int* _pCrash; // 313
			}
			LeafCodeInfo_t::LeafCodeInfo_t(
					const char* szFile,
					int nLine,
					const char* szFunction);  // 313
			CUtlLeanVectorBase<const IIKRuleDescription::EnsureCapacity(
					int nCapacity,
					bool bConservative);  // 629
			CUtlLeanVectorBase<const IIKRuleDescription::Base(); // 279
			CUtlLeanVectorBase<const IIKRuleDescription::Base(); // 630
			CUtlLeanVectorImpl<CUtlLeanVectorBase<const IIKRuleDescription::AddToTailGetPtr(); // 638
			CUtlLeanVectorImpl<CUtlLeanVectorBase<const IIKRuleDescription::AddToTail(
					const IIKRuleDescription* const& src);  // 89
			CIKChainDescription::AddRule(
				const IIKRuleDescription* pRule);  // 235
		}
		CUtlMemory<IIKRuleData::Base(); // 112
		CUtlVectorBase<IIKRuleData::Base(); // 102
		CUtlVectorBase<IIKRuleData::begin(); // 190
		CUtlVectorBase<IIKRuleData::Count(); // 104
		CUtlVectorBase<IIKRuleData::end(); // 190
	}
} /* size: 0, variables: 2 */

// <000F21DF> ik/ikcontrolrigdescription_base.cpp:248
// variables: 6
// function calls: 38
void CIKControlRigDescription_Base::Initialize(const CIKControlRigData_t& data, const CModel* pModel)
{
	{
		const CIKChainOldData_t& oldChainData; // 253
		CUtlVector<CIKChainOldData_t, CUtlMemory<CIKChainOldData_t, int> >& __for_range; // 37496
		iterator __for_begin; // 13023
		iterator __for_end; // 13023
		{
			CIKChainDescription* pChainDescription; // 255
			{
				int* _pCrash; // 313
			}
			LeafCodeInfo_t::LeafCodeInfo_t(
					const char* szFile,
					int nLine,
					const char* szFunction);  // 313
			CUtlLeanVectorBase<CIKChainDescription::EnsureCapacity(
					int nCapacity,
					bool bConservative);  // 629
			CUtlLeanVectorBase<CIKChainDescription::Base(); // 279
			CUtlLeanVectorBase<CIKChainDescription::Base(); // 630
			CUtlLeanVectorImpl<CUtlLeanVectorBase<CIKChainDescription::AddToTailGetPtr(); // 638
			CUtlLeanVectorImpl<CUtlLeanVectorBase<CIKChainDescription::AddToTail(
					CIKChainDescription* const& src);  // 257
		}
		CUtlMemory<CIKChainOldData_t, int>::Base(); // 112
		CUtlVectorBase<CIKChainOldData_t, CUtlMemory<CIKChainOldData_t, int> >::Base(); // 102
		CUtlVectorBase<CIKChainOldData_t, CUtlMemory<CIKChainOldData_t, int> >::begin(); // 253
		CUtlVectorBase<CIKChainOldData_t, CUtlMemory<CIKChainOldData_t, int> >::Count(); // 104
		CUtlVectorBase<CIKChainOldData_t, CUtlMemory<CIKChainOldData_t, int> >::end(); // 253
	}
	CUtlVectorBase<CIKChainOldData_t, CUtlMemory<CIKChainOldData_t, int> >::Count(); // 573
	CUtlMemory<CIKChainOldData_t, int>::Base(); // 112
	CUtlVectorBase<CIKChainOldData_t, CUtlMemory<CIKChainOldData_t, int> >::Base(); // 102
	CUtlVectorBase<CIKChainOldData_t, CUtlMemory<CIKChainOldData_t, int> >::begin(); // 574
	CUtlMemory<CIKChainOldData_t, int>::Base(); // 113
	CUtlVectorBase<CIKChainOldData_t, CUtlMemory<CIKChainOldData_t, int> >::Base(); // 105
	CUtlVectorBase<CIKChainOldData_t, CUtlMemory<CIKChainOldData_t, int> >::Count(); // 105
	CUtlVectorBase<CIKChainOldData_t, CUtlMemory<CIKChainOldData_t, int> >::end(); // 574
	UtlTraitsCopyRange<CIKChainOldData_t>(const CIKChainOldData_t* pFrom,
						const CIKChainOldData_t* pFromEnd,
						CIKChainOldData_t* pTo);  // 200
	UtlTraitsCopyRange<CIKChainOldData_t>(const CIKChainOldData_t* pFrom,
						const CIKChainOldData_t* pFromEnd,
						CIKChainOldData_t* pTo);  // 574
	CUtlVectorBase<CIKChainOldData_t, CUtlMemory<CIKChainOldData_t, int> >::operator=(
			const CUtlVectorBase<CIKChainOldData_t, CUtlMemory<CIKChainOldData_t, int> >& other);  // 565
	CUtlVectorBase<CIKChainOldData_t, CUtlMemory<CIKChainOldData_t, int> >::operator=(
			const CUtlVectorBase<CIKChainOldData_t, CUtlMemory<CIKChainOldData_t, int> >& other);  // 452
	CUtlVector<CIKChainOldData_t, CUtlMemory<CIKChainOldData_t, int> >::operator=(
			const CUtlVector<CIKChainOldData_t, CUtlMemory<CIKChainOldData_t, int> >& src);  // 23
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 9
	IKBoneNameAndIndex_t::operator=(
			const IKBoneNameAndIndex_t  &);  // 23
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 23
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 23
	CIKControlRigData_t::operator=(
			const CIKControlRigData_t  &);  // 250
} /* size: 801, inline expansions: 27 (983 bytes) */

// <000F21B0> ik/ikcontrolrigdescription_base.cpp:263
void CIKControlRigDescription_Base::GetMasterBlendAnimgraphParameterName()
{
} /* size: 9 */

