
//
// animgraph/animparamidmap.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 7
//

// <00F73343> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparamidmap.cpp:8
// variables: 9
// function calls: 96
void CAnimParamIdMap::CAnimParamIdMap(const CAnimParameterList& paramList)
{
	{
		{
			int i; // 10
			{
				CAnimParameterBaseConstPtr pParam; // 12
				const AnimParamType_t  paramType; // 14
				CAnimParamHandle paramHandle; // 20
				{
				}
			}
		}
	}
	{
		CUtlMemory<CUtlHashtableEntry<AnimParamID, int>, int>::ValidateGrowSize(); // 475
		CUtlMemory<CUtlHashtableEntry<AnimParamID, int>, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 178
		Init(const CUtlHashtable<AnimParamID, int, DefaultHashFunctor<AnimParamID>, DefaultEqualFunctor<AnimParamID>, undefined_t, CUt this); // 178
		CUtlHashtable(const CUtlHashtable<AnimParamID, int, DefaultHashFunctor<AnimParamID>, DefaultEqualFunctor<AnimParamID>, undefined_t, CUt this,
				int minimumSize);  // 8
		CMutableRefCountBase<true, CRefMT>::CMutableRefCountBase(); // 339
		CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::CMutableRefCounted(); // 8
		CUtlMemory<CUtlHashtableEntry<CUtlString, int>, int>::ValidateGrowSize(); // 475
		CUtlMemory<CUtlHashtableEntry<CUtlString, int>, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 178
		Init(const CUtlHashtable<CUtlString, int, DefaultHashFunctor<CUtlString>, DefaultEqualFunctor<CUtlString>, undefined_t, CUtlMe this); // 178
		CUtlHashtable(const CUtlHashtable<CUtlString, int, DefaultHashFunctor<CUtlString>, DefaultEqualFunctor<CUtlString>, undefined_t, CUtlMe this,
				int minimumSize);  // 8
		CUtlMemory<CAnimParamHandle, int>::ValidateGrowSize(); // 475
		CUtlMemory<CAnimParamHandle, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<CAnimParamHandle, CUtlMemory<CAnimParamHandle, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<CAnimParamHandle, CUtlMemory<CAnimParamHandle, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<CAnimParamHandle, CUtlMemory<CAnimParamHandle, int> >::CUtlVector(); // 8
		CUtlMemory<int, int>::ValidateGrowSize(); // 475
		CUtlMemory<int, int>::CUtlMemory(
				int nGrowSize,
				int nInitAllocationCount);  // 527
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
		CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
				int growSize,
				int initCapacity);  // 418
		CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 8
		{
			int i; // 10
			Count(const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRe this); // 21
			CAnimParameterList::Count(); // 10
			{
				CAnimParameterBaseConstPtr pParam; // 12
				const AnimParamType_t  paramType; // 14
				CAnimParamHandle paramHandle; // 20
				CSmartPtr<CAnimParameterBase, CRefCountAccessor>::Get(); // 413
				ThreadInterlockedIncrement(volatile int32* p); // 158
				Increment(int* p); // 290
				CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
				CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
				AddRef<CAnimParameterBase>(CAnimParameterBase* pObj); // 386
				CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::operator=<CAnimParameterBase>(
								CAnimParameterBase* pObj);  // 413
				CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::operator=<CAnimParameterBase>(
								const CSmartPtr<CAnimParameterBase, CRefCountAccessor>& other);  // 354
				CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::CSmartPtr<CAnimParameterBase>(
								const CSmartPtr<CAnimParameterBase, CRefCountAccessor>& other);  // 118
				CUtlMemory<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, int>::operator[](
						int i);  // 595
				operator[](const CUtlVectorBase<CSmartPtr<CAnimParameterBase, CRefCountAccessor>, CUtlMemory<CSmartPtr<CAnimParameterBase, CRe this,
						int i);  // 118
				CAnimParameterList::GetParameterInternal(
							int index);  // 12
				CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::operator->(); // 14
				CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 18
				{
				}
				CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 20
				CAnimParamHandle::CAnimParamHandle(
						AnimParamType_t type,
						uint8 idx);  // 20
				CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::operator->(); // 22
				AnimParamID::AnimParamID(
						const AnimParamID& rhs);  // 249
				Mix32HashFunctor::operator(
						uint32 n);  // 71
				DefaultHashFunctor<AnimParamID>::operator(
						AnimParamID s);  // 249
				CUtlMemory<CUtlHashtableEntry<AnimParamID, int>, int>::operator[](
						int i);  // 720
				AnimParamID::AnimParamID(
						const AnimParamID& rhs);  // 64
				CUtlKeyValuePair<AnimParamID, int>::CUtlKeyValuePair<AnimParamID, int>(
									const AnimParamID& k,
									const int& v);  // 1514
				Construct<CUtlKeyValuePair<AnimParamID, int>, const AnimParamID&, int&>(CUtlKeyValuePair<AnimParamID, int>* pMemory); // 720
				DoInsert<const AnimParamID&>(const CUtlHashtable<AnimParamID, int, DefaultHashFunctor<AnimParamID>, DefaultEqualFunctor<AnimParamID>, undefined_t, CUt this,
								const AnimParamID& k,
								Arg_t v,
								unsigned int h,
								bool* pDidInsert);  // 714
				DoInsert<const AnimParamID&>(const CUtlHashtable<AnimParamID, int, DefaultHashFunctor<AnimParamID>, DefaultEqualFunctor<AnimParamID>, undefined_t, CUt this,
								const AnimParamID& k,
								Arg_t v,
								unsigned int h,
								bool* pDidInsert);  // 249
				Insert(const CUtlHashtable<AnimParamID, int, DefaultHashFunctor<AnimParamID>, DefaultEqualFunctor<AnimParamID>, undefined_t, CUt this,
					KeyArg_t k,
					ValueArg_t v,
					bool* pDidInsert);  // 22
				CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::operator->(); // 23
				CUtlString::Get(); // 441
				CUtlString::operator char const*(); // 249
				{
					uint32 c; // 354
				}
				StringHashFunctor::operator(
						const char* s);  // 249
				CUtlMemory<CUtlHashtableEntry<CUtlString, int>, int>::operator[](
						int i);  // 720
				CUtlString::Get(); // 354
				CUtlString::CUtlString(
						const CUtlString& string);  // 64
				CUtlKeyValuePair<CUtlString, int>::CUtlKeyValuePair<CUtlString, int>(
									const CUtlString& k,
									const int& v);  // 1514
				Construct<CUtlKeyValuePair<CUtlString, int>, const CUtlString&, int&>(CUtlKeyValuePair<CUtlString, int>* pMemory); // 720
				DoInsert<const CUtlString&>(const CUtlHashtable<CUtlString, int, DefaultHashFunctor<CUtlString>, DefaultEqualFunctor<CUtlString>, undefined_t, CUtlMe this,
								const CUtlString& k,
								Arg_t v,
								unsigned int h,
								bool* pDidInsert);  // 714
				DoInsert<const CUtlString&>(const CUtlHashtable<CUtlString, int, DefaultHashFunctor<CUtlString>, DefaultEqualFunctor<CUtlString>, undefined_t, CUtlMe this,
								const CUtlString& k,
								Arg_t v,
								unsigned int h,
								bool* pDidInsert);  // 249
				Insert(const CUtlHashtable<CUtlString, int, DefaultHashFunctor<CUtlString>, DefaultEqualFunctor<CUtlString>, undefined_t, CUtlMe this,
					KeyArg_t k,
					ValueArg_t v,
					bool* pDidInsert);  // 23
				CUtlMemory<CAnimParamHandle, int>::NumAllocated(); // 1196
				CUtlMemory<CAnimParamHandle, int>::Base(); // 112
				CUtlVectorBase<CAnimParamHandle, CUtlMemory<CAnimParamHandle, int> >::Base(); // 368
				CUtlVectorBase<CAnimParamHandle, CUtlMemory<CAnimParamHandle, int> >::ResetDbgInfo(); // 824
				CUtlMemory<CAnimParamHandle, int>::IsGrowable(); // 823
				CUtlMemory<CAnimParamHandle, int>::IsExternallyAllocated(); // 859
				CUtlMemory<CAnimParamHandle, int>::IsExternallyAllocated(); // 861
				CUtlMemory<CAnimParamHandle, int>::Grow(
					int num);  // 806
				CUtlVectorBase<CAnimParamHandle, CUtlMemory<CAnimParamHandle, int> >::GrowMemory(
						int num);  // 1198
				CUtlMemory<CAnimParamHandle, int>::operator[](
						int i);  // 602
				CUtlVectorBase<CAnimParamHandle, CUtlMemory<CAnimParamHandle, int> >::Element(
					int i);  // 1201
				CAnimParamHandle::operator=(
						const CAnimParamHandle& rhs);  // 18
				CAnimParamHandle::CAnimParamHandle(
						const CAnimParamHandle& rhs);  // 1520
				CopyConstruct<CAnimParamHandle>(CAnimParamHandle* pMemory,
								const CAnimParamHandle& src);  // 1201
				CUtlVectorBase<CAnimParamHandle, CUtlMemory<CAnimParamHandle, int> >::AddToTail(
						const CAnimParamHandle& src);  // 25
				CUtlMemory<int, int>::NumAllocated(); // 1196
				CopyConstruct<int>(int* pMemory,
							const int& src);  // 1201
				CUtlMemory<int, int>::operator[](
						int i);  // 602
				CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
					int i);  // 1201
				CUtlMemory<int, int>::IsGrowable(); // 823
				CUtlMemory<int, int>::IsExternallyAllocated(); // 859
				CUtlMemory<int, int>::IsExternallyAllocated(); // 861
				CUtlMemory<int, int>::Grow(
					int num);  // 806
				CUtlMemory<int, int>::Base(); // 112
				CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
				CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
						const int& src);  // 26
				ThreadInterlockedDecrement(volatile int32* p); // 159
				Decrement(int* p); // 295
				CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
				CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
				CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
				Release<const CAnimParameterBase>(const CAnimParameterBase* pObj); // 344
				CSmartPtr<const CAnimParameterBase, CRefCountAccessor>::~CSmartPtr(); // 27
			}
		}
	}
} /* size: 0 */

// <00F732C9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparamidmap.cpp:8
// variables: 6
void CAnimParamIdMap::CAnimParamIdMap(const CAnimParameterList& paramList)
{
	const char   __FUNCTION__; // 37727
	{
		int i; // 10
		{
			CAnimParameterBaseConstPtr pParam; // 12
			const AnimParamType_t  paramType; // 14
			CAnimParamHandle paramHandle; // 20
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 18
			}
		}
	}
} /* size: 0, variables: 1 */

// <00F7309E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparamidmap.cpp:31
// variable: 1
// function calls: 8
void CAnimParamIdMap::GetParamIndex(AnimParamID paramID)
{
	UtlHashHandle_t handle; // 33
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 218
	Mix32HashFunctor::operator(
			uint32 n);  // 71
	DefaultHashFunctor<AnimParamID>::operator(
			AnimParamID s);  // 218
	Find(const CUtlHashtable<AnimParamID, int, DefaultHashFunctor<AnimParamID>, DefaultEqualFunctor<AnimParamID>, undefined_ this,
		KeyArg_t k);  // 33
	CUtlMemory<CUtlHashtableEntry<AnimParamID, int>, int>::Count(); // 204
	CUtlMemory<CUtlHashtableEntry<AnimParamID, int>, int>::operator[](
			int i);  // 204
	CUtlHashtableEntry<AnimParamID, int>::IsValid(); // 204
	IsValidHandle(const CUtlHashtable<AnimParamID, int, DefaultHashFunctor<AnimParamID>, DefaultEqualFunctor<AnimParamID>, undefined_ this,
			handle_t idx);  // 34
} /* size: 136, variables: 1, inline expansions: 8 (247 bytes) */

// <00F72E9A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparamidmap.cpp:43
// variables: 2
// function calls: 8
void CAnimParamIdMap::GetParamIndex(const CUtlString& paramName)
{
	UtlHashHandle_t handle; // 45
	CUtlString::Get(); // 441
	CUtlString::operator char const*(); // 218
	{
		uint32 c; // 354
	}
	StringHashFunctor::operator(
			const char* s);  // 218
	Find(const CUtlHashtable<CUtlString, int, DefaultHashFunctor<CUtlString>, DefaultEqualFunctor<CUtlString>, undefined_t,  this,
		KeyArg_t k);  // 45
	CUtlMemory<CUtlHashtableEntry<CUtlString, int>, int>::Count(); // 204
	CUtlMemory<CUtlHashtableEntry<CUtlString, int>, int>::operator[](
			int i);  // 204
	CUtlHashtableEntry<CUtlString, int>::IsValid(); // 204
	IsValidHandle(const CUtlHashtable<CUtlString, int, DefaultHashFunctor<CUtlString>, DefaultEqualFunctor<CUtlString>, undefined_t,  this,
			handle_t idx);  // 46
} /* size: 141, variables: 1, inline expansions: 8 (193 bytes) */

// <00F9F44A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparamidmap.cpp:55
// function calls: 6
void CAnimParamIdMap::GetParamHandle(int index)
{
	CUtlVectorBase<CAnimParamHandle, CUtlMemory<CAnimParamHandle, int> >::Count(); // 57
	CUtlMemory<CAnimParamHandle, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimParamHandle, CUtlMemory<CAnimParamHandle, int> >::operator[](
			int i);  // 59
	CAnimParamHandle::operator=(
			const CAnimParamHandle& rhs);  // 18
	CAnimParamHandle::CAnimParamHandle(
			const CAnimParamHandle& rhs);  // 59
	CAnimParamHandle::CAnimParamHandle(); // 62
} /* size: 41, inline expansions: 6 (38 bytes) */

// <00F72E75> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparamidmap.cpp:55
void CAnimParamIdMap::GetParamHandle(int index)
{
} /* size: 0 */

// <00F72C83> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animparamidmap.cpp:66
// variable: 1
// function calls: 7
void CAnimParamIdMap::GetParamHandle(AnimParamID paramID)
{
	int index; // 68
	AnimParamID::AnimParamID(
			const AnimParamID& rhs);  // 68
	CUtlVectorBase<CAnimParamHandle, CUtlMemory<CAnimParamHandle, int> >::Count(); // 69
	CAnimParamHandle::CAnimParamHandle(); // 74
	CUtlMemory<CAnimParamHandle, int>::operator[](
			int i);  // 595
	CUtlVectorBase<CAnimParamHandle, CUtlMemory<CAnimParamHandle, int> >::operator[](
			int i);  // 71
	CAnimParamHandle::operator=(
			const CAnimParamHandle& rhs);  // 18
	CAnimParamHandle::CAnimParamHandle(
			const CAnimParamHandle& rhs);  // 71
} /* size: 125, variables: 1, inline expansions: 7 (43 bytes) */

