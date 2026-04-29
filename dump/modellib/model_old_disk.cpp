
//
// modellib/model_old_disk.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 13
//

// <04E48C19> modellib/model_old_disk.cpp:32
// variable: 1
void model_dump_convert_info(const CCommandContext& ctx, const CCommand& args)
{
	double flMSPer; // 34
} /* size: 63, variables: 1 */

// <04E4807E> modellib/model_old_disk.cpp:68
// variables: 8
// function calls: 43
void CModelSkeleton::InitFromOldData(const ModelSkeletonData_t* pPermData)
{
	int nBones; // 70
	const char   __FUNCTION__; // 39686
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 71
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 72
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 73
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 74
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 75
	}
	{
		int iBone; // 85
		CUtlString::Get(); // 87
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 87
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 87
		CUtlString::operator=(
				const char* src);  // 87
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 595
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
				int i);  // 88
		CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
				int i);  // 88
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 70
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 71
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 72
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 73
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 74
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Count(); // 75
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 77
	CUtlMemory<short int, int>::Base(); // 113
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Base(); // 77
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 78
	CUtlMemory<float, int>::Base(); // 113
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 78
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 79
	CUtlMemory<Vector, int>::Base(); // 113
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 79
	CUtlMemory<Vector, int>::Base(); // 112
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 102
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::begin(); // 1344
	Vector::operator=(
			const Vector& vOther);  // 209
	UtlTraitsCopyRange<Vector>(const Vector* pFrom,
					const Vector* pFromEnd,
					Vector* pTo);  // 200
	UtlTraitsCopyRange<Vector>(const Vector* pFrom,
					const Vector* pFromEnd,
					Vector* pTo);  // 1344
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CopyArray(
			const Vector* pArray,
			int size);  // 79
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Count(); // 80
	CUtlMemory<Quaternion, int>::Base(); // 113
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Base(); // 80
	CUtlMemory<Quaternion, int>::Base(); // 112
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Base(); // 102
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::begin(); // 1344
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<short int>(const short int* pFrom,
					const short int* pFromEnd,
					short int* pTo);  // 173
	UtlTraitsCopyRange<Quaternion>(const Quaternion* pFrom,
					const Quaternion* pFromEnd,
					Quaternion* pTo);  // 1344
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::CopyArray(
			const Quaternion* pArray,
			int size);  // 80
} /* size: 0, variables: 2, inline expansions: 33 (0 bytes) */

// <021FE502> modellib/model_old_disk.cpp:68
// variables: 8
// function calls: 43
void CModelSkeleton::InitFromOldData(const ModelSkeletonData_t* pPermData)
{
	int nBones; // 70
	const char   __FUNCTION__; // 52863
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 71
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 72
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 73
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 74
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 75
	}
	{
		int iBone; // 85
		CUtlString::Get(); // 87
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 87
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 87
		CUtlString::operator=(
				const char* src);  // 87
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 595
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
				int i);  // 88
		CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
				int i);  // 88
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 70
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 71
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 72
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 73
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 74
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Count(); // 75
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 77
	CUtlMemory<short int, int>::Base(); // 113
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Base(); // 77
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 78
	CUtlMemory<float, int>::Base(); // 113
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 78
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 79
	CUtlMemory<Vector, int>::Base(); // 113
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 79
	CUtlMemory<Vector, int>::Base(); // 112
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 102
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::begin(); // 1344
	Vector::operator=(
			const Vector& vOther);  // 209
	UtlTraitsCopyRange<Vector>(const Vector* pFrom,
					const Vector* pFromEnd,
					Vector* pTo);  // 200
	UtlTraitsCopyRange<Vector>(const Vector* pFrom,
					const Vector* pFromEnd,
					Vector* pTo);  // 1344
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CopyArray(
			const Vector* pArray,
			int size);  // 79
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Count(); // 80
	CUtlMemory<Quaternion, int>::Base(); // 113
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Base(); // 80
	CUtlMemory<Quaternion, int>::Base(); // 112
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Base(); // 102
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::begin(); // 1344
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<short int>(const short int* pFrom,
					const short int* pFromEnd,
					short int* pTo);  // 173
	UtlTraitsCopyRange<Quaternion>(const Quaternion* pFrom,
					const Quaternion* pFromEnd,
					Quaternion* pTo);  // 1344
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::CopyArray(
			const Quaternion* pArray,
			int size);  // 80
} /* size: 0, variables: 2, inline expansions: 33 (0 bytes) */

// <00D6ACBF> modellib/model_old_disk.cpp:68
// variables: 8
// function calls: 43
void CModelSkeleton::InitFromOldData(const ModelSkeletonData_t* pPermData)
{
	int nBones; // 70
	const char   __FUNCTION__; // 54188
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 71
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 72
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 73
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 74
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 75
	}
	{
		int iBone; // 85
		CUtlString::Get(); // 87
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 87
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 87
		CUtlString::operator=(
				const char* src);  // 87
		CUtlMemory<unsigned int, int>::operator[](
				int i);  // 595
		CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::operator[](
				int i);  // 88
		CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
				int i);  // 88
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 70
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 71
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 72
	CUtlVectorBase<unsigned int, CUtlMemory<unsigned int, int> >::Count(); // 73
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 74
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Count(); // 75
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 77
	CUtlMemory<short int, int>::Base(); // 113
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Base(); // 77
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 78
	CUtlMemory<float, int>::Base(); // 113
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 78
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 79
	CUtlMemory<Vector, int>::Base(); // 113
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 79
	CUtlMemory<Vector, int>::Base(); // 112
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 102
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::begin(); // 1344
	Vector::operator=(
			const Vector& vOther);  // 209
	UtlTraitsCopyRange<Vector>(const Vector* pFrom,
					const Vector* pFromEnd,
					Vector* pTo);  // 200
	UtlTraitsCopyRange<Vector>(const Vector* pFrom,
					const Vector* pFromEnd,
					Vector* pTo);  // 1344
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::CopyArray(
			const Vector* pArray,
			int size);  // 79
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Count(); // 80
	CUtlMemory<Quaternion, int>::Base(); // 113
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Base(); // 80
	CUtlMemory<Quaternion, int>::Base(); // 112
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Base(); // 102
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::begin(); // 1344
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<short int>(const short int* pFrom,
					const short int* pFromEnd,
					short int* pTo);  // 173
	UtlTraitsCopyRange<Quaternion>(const Quaternion* pFrom,
					const Quaternion* pFromEnd,
					Quaternion* pTo);  // 1344
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::CopyArray(
			const Quaternion* pArray,
			int size);  // 80
} /* size: 0, variables: 2, inline expansions: 33 (435 bytes) */

// <04E474EE> modellib/model_old_disk.cpp:97
// variables: 11
// function calls: 36
void CModelSkeleton::Finalize()
{
	int nBones; // 99
	bool bHasLodFlags; // 122
	const char   __FUNCTION__; // 39522
	{
		int i; // 102
	}
	{
		int b; // 123
		{
			uint32 nBoneHash; // 125
			uint16 nBoneIndex; // 126
			bool bDidInsert; // 128
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 131
			}
			{
				int i; // 134
				CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
						int i);  // 136
				operator<<(BoneFlags_t a,
						int b);  // 136
				operator&(BoneFlags_t a,
						BoneFlags_t b);  // 136
			}
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 125
			CUtlStringToken::CUtlStringToken(); // 121
			{
			}
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 119
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 125
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
					int i);  // 125
			CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Base(); // 650
			CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Count(); // 651
			IdealIndex(uint32_if32BitStorage h,
					uint32 m);  // 653
			CUtlHashtableEntry<unsigned int, short unsigned int>::IdealIndex(
					uint32 slotmask);  // 656
			CUtlHashtableEntry<unsigned int, short unsigned int>::IdealIndex(
					uint32 slotmask);  // 667
			DoLookup<unsigned int>(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
						unsigned int x,
						unsigned int h,
						handle_t* pPreviousInChain);  // 716
			CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::operator[](
					int i);  // 720
			CUtlKeyValuePair<unsigned int, short unsigned int>::CUtlKeyValuePair<unsigned int, short unsigned int>(
										const unsigned int& k,
										const short unsigned int& v);  // 1514
			Construct<CUtlKeyValuePair<unsigned int, short unsigned int>, unsigned int&, short unsigned int&>(CUtlKeyValuePair<unsigned int, short unsigned int>* pMemory); // 720
			DoInsert<unsigned int>(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this,
						unsigned int k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 714
			DoInsert<unsigned int>(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this,
						unsigned int k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 249
			Insert(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this,
				KeyArg_t k,
				ValueArg_t v,
				bool* pDidInsert);  // 129
			CUtlMemory<CUtlHashtableEntry<short unsigned int, unsigned int>, int>::Base(); // 650
			CUtlMemory<CUtlHashtableEntry<short unsigned int, unsigned int>, int>::Count(); // 651
			IdealIndex(uint32_if32BitStorage h,
					uint32 m);  // 653
			CUtlHashtableEntry<short unsigned int, unsigned int>::IdealIndex(
					uint32 slotmask);  // 656
			CUtlHashtableEntry<short unsigned int, unsigned int>::IdealIndex(
					uint32 slotmask);  // 667
			DoLookup<short unsigned int>(const CUtlHashtable<short unsigned int, unsigned int, IdentityHashFunctor, DefaultEqualFunctor<short unsigned int>, this,
							short unsigned int x,
							unsigned int h,
							handle_t* pPreviousInChain);  // 716
			CUtlMemory<CUtlHashtableEntry<short unsigned int, unsigned int>, int>::operator[](
					int i);  // 720
			CUtlKeyValuePair<short unsigned int, unsigned int>::CUtlKeyValuePair<short unsigned int, unsigned int>(
										const short unsigned int& k,
										const unsigned int& v);  // 1514
			Construct<CUtlKeyValuePair<short unsigned int, unsigned int>, short unsigned int&, unsigned int&>(CUtlKeyValuePair<short unsigned int, unsigned int>* pMemory); // 720
			DoInsert<short unsigned int>(const CUtlHashtable<short unsigned int, unsigned int, IdentityHashFunctor, DefaultEqualFunctor<short unsigned int>, undef this,
							short unsigned int k,
							Arg_t v,
							unsigned int h,
							bool* pDidInsert);  // 714
			DoInsert<short unsigned int>(const CUtlHashtable<short unsigned int, unsigned int, IdentityHashFunctor, DefaultEqualFunctor<short unsigned int>, undef this,
							short unsigned int k,
							Arg_t v,
							unsigned int h,
							bool* pDidInsert);  // 249
			Insert(const CUtlHashtable<short unsigned int, unsigned int, IdentityHashFunctor, DefaultEqualFunctor<short unsigned int>, undef this,
				KeyArg_t k,
				ValueArg_t v,
				bool* pDidInsert);  // 130
		}
	}
	{
		int i; // 147
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 99
} /* size: 0, variables: 3, inline expansions: 1 (0 bytes) */

// <021FD972> modellib/model_old_disk.cpp:97
// variables: 11
// function calls: 36
void CModelSkeleton::Finalize()
{
	int nBones; // 99
	bool bHasLodFlags; // 122
	const char   __FUNCTION__; // 52699
	{
		int i; // 102
	}
	{
		int b; // 123
		{
			uint32 nBoneHash; // 125
			uint16 nBoneIndex; // 126
			bool bDidInsert; // 128
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 131
			}
			{
				int i; // 134
				CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
						int i);  // 136
				operator<<(BoneFlags_t a,
						int b);  // 136
				operator&(BoneFlags_t a,
						BoneFlags_t b);  // 136
			}
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 125
			CUtlStringToken::CUtlStringToken(); // 121
			{
			}
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 119
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 125
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
					int i);  // 125
			CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Base(); // 650
			CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Count(); // 651
			IdealIndex(uint32_if32BitStorage h,
					uint32 m);  // 653
			CUtlHashtableEntry<unsigned int, short unsigned int>::IdealIndex(
					uint32 slotmask);  // 656
			CUtlHashtableEntry<unsigned int, short unsigned int>::IdealIndex(
					uint32 slotmask);  // 667
			DoLookup<unsigned int>(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
						unsigned int x,
						unsigned int h,
						handle_t* pPreviousInChain);  // 716
			CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::operator[](
					int i);  // 720
			CUtlKeyValuePair<unsigned int, short unsigned int>::CUtlKeyValuePair<unsigned int, short unsigned int>(
										const unsigned int& k,
										const short unsigned int& v);  // 1514
			Construct<CUtlKeyValuePair<unsigned int, short unsigned int>, unsigned int&, short unsigned int&>(CUtlKeyValuePair<unsigned int, short unsigned int>* pMemory); // 720
			DoInsert<unsigned int>(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this,
						unsigned int k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 714
			DoInsert<unsigned int>(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this,
						unsigned int k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 249
			Insert(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this,
				KeyArg_t k,
				ValueArg_t v,
				bool* pDidInsert);  // 129
			CUtlMemory<CUtlHashtableEntry<short unsigned int, unsigned int>, int>::Base(); // 650
			CUtlMemory<CUtlHashtableEntry<short unsigned int, unsigned int>, int>::Count(); // 651
			IdealIndex(uint32_if32BitStorage h,
					uint32 m);  // 653
			CUtlHashtableEntry<short unsigned int, unsigned int>::IdealIndex(
					uint32 slotmask);  // 656
			CUtlHashtableEntry<short unsigned int, unsigned int>::IdealIndex(
					uint32 slotmask);  // 667
			DoLookup<short unsigned int>(const CUtlHashtable<short unsigned int, unsigned int, IdentityHashFunctor, DefaultEqualFunctor<short unsigned int>, this,
							short unsigned int x,
							unsigned int h,
							handle_t* pPreviousInChain);  // 716
			CUtlMemory<CUtlHashtableEntry<short unsigned int, unsigned int>, int>::operator[](
					int i);  // 720
			CUtlKeyValuePair<short unsigned int, unsigned int>::CUtlKeyValuePair<short unsigned int, unsigned int>(
										const short unsigned int& k,
										const unsigned int& v);  // 1514
			Construct<CUtlKeyValuePair<short unsigned int, unsigned int>, short unsigned int&, unsigned int&>(CUtlKeyValuePair<short unsigned int, unsigned int>* pMemory); // 720
			DoInsert<short unsigned int>(const CUtlHashtable<short unsigned int, unsigned int, IdentityHashFunctor, DefaultEqualFunctor<short unsigned int>, undef this,
							short unsigned int k,
							Arg_t v,
							unsigned int h,
							bool* pDidInsert);  // 714
			DoInsert<short unsigned int>(const CUtlHashtable<short unsigned int, unsigned int, IdentityHashFunctor, DefaultEqualFunctor<short unsigned int>, undef this,
							short unsigned int k,
							Arg_t v,
							unsigned int h,
							bool* pDidInsert);  // 249
			Insert(const CUtlHashtable<short unsigned int, unsigned int, IdentityHashFunctor, DefaultEqualFunctor<short unsigned int>, undef this,
				KeyArg_t k,
				ValueArg_t v,
				bool* pDidInsert);  // 130
		}
	}
	{
		int i; // 147
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 99
} /* size: 0, variables: 3, inline expansions: 1 (0 bytes) */

// <00D6A12F> modellib/model_old_disk.cpp:97
// variables: 11
// function calls: 36
void CModelSkeleton::Finalize()
{
	int nBones; // 99
	bool bHasLodFlags; // 122
	const char   __FUNCTION__; // 54024
	{
		int i; // 102
	}
	{
		int b; // 123
		{
			uint32 nBoneHash; // 125
			uint16 nBoneIndex; // 126
			bool bDidInsert; // 128
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 131
			}
			{
				int i; // 134
				CUtlMemory<CModelSkeleton::BoneFlags_t, int>::operator[](
						int i);  // 588
				CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator[](
						int i);  // 136
				operator<<(BoneFlags_t a,
						int b);  // 136
				operator&(BoneFlags_t a,
						BoneFlags_t b);  // 136
			}
			CUtlString::Get(); // 441
			CUtlString::operator char const*(); // 125
			CUtlStringToken::CUtlStringToken(); // 121
			{
			}
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 119
			MakeStringToken(const char* pString,
					bool bWriteToDatabase);  // 125
			CUtlMemory<CUtlString, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
					int i);  // 125
			CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Base(); // 650
			CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Count(); // 651
			IdealIndex(uint32_if32BitStorage h,
					uint32 m);  // 653
			CUtlHashtableEntry<unsigned int, short unsigned int>::IdealIndex(
					uint32 slotmask);  // 656
			CUtlHashtableEntry<unsigned int, short unsigned int>::IdealIndex(
					uint32 slotmask);  // 667
			DoLookup<unsigned int>(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undef this,
						unsigned int x,
						unsigned int h,
						handle_t* pPreviousInChain);  // 716
			CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::operator[](
					int i);  // 720
			CUtlKeyValuePair<unsigned int, short unsigned int>::CUtlKeyValuePair<unsigned int, short unsigned int>(
										const unsigned int& k,
										const short unsigned int& v);  // 1514
			Construct<CUtlKeyValuePair<unsigned int, short unsigned int>, unsigned int&, short unsigned int&>(CUtlKeyValuePair<unsigned int, short unsigned int>* pMemory); // 720
			DoInsert<unsigned int>(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this,
						unsigned int k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 714
			DoInsert<unsigned int>(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this,
						unsigned int k,
						Arg_t v,
						unsigned int h,
						bool* pDidInsert);  // 249
			Insert(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this,
				KeyArg_t k,
				ValueArg_t v,
				bool* pDidInsert);  // 129
			CUtlMemory<CUtlHashtableEntry<short unsigned int, unsigned int>, int>::Base(); // 650
			CUtlMemory<CUtlHashtableEntry<short unsigned int, unsigned int>, int>::Count(); // 651
			IdealIndex(uint32_if32BitStorage h,
					uint32 m);  // 653
			CUtlHashtableEntry<short unsigned int, unsigned int>::IdealIndex(
					uint32 slotmask);  // 656
			CUtlHashtableEntry<short unsigned int, unsigned int>::IdealIndex(
					uint32 slotmask);  // 667
			DoLookup<short unsigned int>(const CUtlHashtable<short unsigned int, unsigned int, IdentityHashFunctor, DefaultEqualFunctor<short unsigned int>, this,
							short unsigned int x,
							unsigned int h,
							handle_t* pPreviousInChain);  // 716
			CUtlMemory<CUtlHashtableEntry<short unsigned int, unsigned int>, int>::operator[](
					int i);  // 720
			CUtlKeyValuePair<short unsigned int, unsigned int>::CUtlKeyValuePair<short unsigned int, unsigned int>(
										const short unsigned int& k,
										const unsigned int& v);  // 1514
			Construct<CUtlKeyValuePair<short unsigned int, unsigned int>, short unsigned int&, unsigned int&>(CUtlKeyValuePair<short unsigned int, unsigned int>* pMemory); // 720
			DoInsert<short unsigned int>(const CUtlHashtable<short unsigned int, unsigned int, IdentityHashFunctor, DefaultEqualFunctor<short unsigned int>, undef this,
							short unsigned int k,
							Arg_t v,
							unsigned int h,
							bool* pDidInsert);  // 714
			DoInsert<short unsigned int>(const CUtlHashtable<short unsigned int, unsigned int, IdentityHashFunctor, DefaultEqualFunctor<short unsigned int>, undef this,
							short unsigned int k,
							Arg_t v,
							unsigned int h,
							bool* pDidInsert);  // 249
			Insert(const CUtlHashtable<short unsigned int, unsigned int, IdentityHashFunctor, DefaultEqualFunctor<short unsigned int>, undef this,
				KeyArg_t k,
				ValueArg_t v,
				bool* pDidInsert);  // 130
		}
	}
	{
		int i; // 147
	}
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 99
} /* size: 0, variables: 3, inline expansions: 1 (7 bytes) */

// <04E4728D> modellib/model_old_disk.cpp:158
// variables: 2
// function calls: 4
void ModelKV3FromString(const char* pKVText, KeyValues3* pOutModelKV3)
{
	int nKVLen; // 160
	{
		KV1ToKV3Translation_t OLD_MODEL_KEYVALUES_TRANSLATIONS; // 172
	}
	V_strlen(const char* str); // 160
	KeyValues3::Internal_PrepareForInternalType(
					KeyValues3InternalType_t newType);  // 950
	KeyValues3::Internal_PrepareForType(
				KeyValues3Type_t newType);  // 250
	KeyValues3::SetToNull(); // 164
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <04E4703C> modellib/model_old_disk.cpp:188
// function calls: 8
void CModel::PreInitFromV0Data(const PermModelData_t* pOldModel)
{
	CUtlString::Get(); // 191
	CUtlString::operator=(
			const char* src);  // 191
	Vector::operator=(
			const Vector& vOther);  // 195
	Vector::operator=(
			const Vector& vOther);  // 196
	Vector::operator=(
			const Vector& vOther);  // 197
	Vector::operator=(
			const Vector& vOther);  // 198
	Vector::operator=(
			const Vector& vOther);  // 200
	CUtlString::Get(); // 204
} /* size: 0, inline expansions: 8 (0 bytes) */

// <04E444DF> modellib/model_old_disk.cpp:210
// variables: 31
// function calls: 169
void CModel::InitFromV0Data(CConvertOldDiskCtx& convertCtx, const PermModelData_t* pOldModel)
{
	CFastTimer timer; // 212
	const char   __FUNCTION__; // 39659
	int nMeshes; // 219
	int nAnimGroups; // 253
	int nMeshGroups; // 279
	int nMaterialGroups; // 287
	int nNumFlex; // 315
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 216
	}
	{
		int iMesh; // 221
		{
			HRenderMesh_Internal hMesh; // 223
			CRenderMesh* pRenderMesh; // 224
			CWeakHandle<InfoForResourceTypeCRenderMesh>::GetData(); // 227
			CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int this,
					int i);  // 233
			ThreadInterlockedIncrement(volatile int32* p); // 158
			Increment(int* p); // 199
			CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 329
			CRefCounted<CRefCountServiceBase<true, CRefMT> >::AddRef(); // 21
			AddRef<CRenderMesh>(CRenderMesh* pObj); // 366
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 204
			CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
			CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
			CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
			Release<CRenderMesh>(CRenderMesh* pObj); // 370
			CSmartPtr<CRenderMesh, CRefCountAccessor>::operator=(
					CRenderMesh* pObj);  // 233
			CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMesh>, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCRenderMesh>, CUtlMemory<CStrongHandle<InfoForResourceTypeCRe this,
					int i);  // 223
			CWeakHandle<InfoForResourceTypeCRenderMesh>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
			CStrongHandle<InfoForResourceTypeCRenderMesh>::GetHandle(); // 223
			CWeakHandle<InfoForResourceTypeCRenderMesh>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 225
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 242
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 250
	}
	{
		int iAnimGroup; // 255
		{
			HAnimationGroup_Internal hAnimGroup; // 257
			CAnimationGroup* pAnimGroupV0; // 264
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 184
			ResourceGetName(ResourceHandle_t hResource,
					CResourceName* pTarget);  // 488
			CWeakHandle<InfoForResourceTypeCAnimationGroup>::GetResourceName(
					CResourceName* pOutName);  // 206
			CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCAnimationGroup>(
										const CWeakHandle<InfoForResourceTypeCAnimationGroup>& resourceHandle);  // 267
			CUtlMemory<CAnimationGroupResource::operator[](
					int i);  // 588
			CUtlVectorBase<CAnimationGroupResource::operator[](
					int i);  // 271
			CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTyp this,
					int i);  // 257
			CWeakHandle<InfoForResourceTypeCAnimationGroup>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
			CStrongHandle<InfoForResourceTypeCAnimationGroup>::GetHandle(); // 257
			CWeakHandle<InfoForResourceTypeCAnimationGroup>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 258
			CWeakHandle<InfoForResourceTypeCAnimationGroup>::GetData(); // 264
			Mix32HashFunctor::operator(
					uint32 n);  // 139
			PointerHashFunctor::operator(
					const void* s);  // 218
			CUtlHashtable<const ResourceBindingBase_t::Find(
				KeyArg_t k);  // 235
			CUtlHashtable<const ResourceBindingBase_t::HasElement(
					KeyArg_t k);  // 31
			CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::operator[](
					int i);  // 706
			CUtlKeyValuePair<const ResourceBindingBase_t::CUtlKeyValuePair<const ResourceBindingBase_t*>(
									const ResourceBindingBase_t* const& k);  // 1514
			Construct<CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t>, const ResourceBindingBase_t*&>(CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t>* pMemory); // 706
			CUtlHashtable<const ResourceBindingBase_t::DoInsert<const ResourceBindingBase_t*>(
								const ResourceBindingBase_t* k,
								unsigned int h,
								bool* pDidInsert);  // 695
			CUtlHashtable<const ResourceBindingBase_t::DoInsert<const ResourceBindingBase_t*>(
								const ResourceBindingBase_t* k,
								unsigned int h,
								bool* pDidInsert);  // 240
			CUtlHashtable<const ResourceBindingBase_t::Insert(
				KeyArg_t k);  // 36
			CConvertOldDiskCtx::RegisterNewSubresource(
						ResourceHandle_t hResource);  // 265
			CResourceName::Get(); // 267
			CUtlMemory<CAnimationGroupResource::operator[](
					int i);  // 588
			CUtlVectorBase<CAnimationGroupResource::operator[](
					int i);  // 267
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 267
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 276
	}
	{
		int iMeshGroup; // 281
		CUtlString::Get(); // 283
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 283
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 283
		CUtlString::operator=(
				const char* src);  // 283
	}
	{
		int iMaterialGroup; // 289
		{
			CModelMaterialGroup& newGroup; // 291
			const MaterialGroup_t& oldGroup; // 292
			int nNumMats; // 296
			{
				int iMat; // 298
				CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::operator[](
						int i);  // 595
				operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMat this,
						int i);  // 300
				CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
				CStrongHandle<InfoForResourceTypeIMaterial2>::GetHandle(); // 300
				CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2 this,
						int i);  // 300
				ThreadInterlockedIncrement(volatile int32* p); // 576
				CInterlockedIntT<int, 4>::operator++(); // 570
				CStrongHandle<InfoForResourceTypeIMaterial2>::Init(
					ResourceHandleTyped_t hResource);  // 673
				CStrongHandle<InfoForResourceTypeIMaterial2>::operator=(
						const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 300
			}
			CUtlString::Get(); // 294
			CUtlMemory<CModelMaterialGroup, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >::operator[](
					int i);  // 291
			CUtlMemory<MaterialGroup_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<MaterialGroup_t, CUtlMemory<MaterialGroup_t, int> >::operator[](
					int i);  // 292
			CUtlString::operator=(
					const char* src);  // 294
			Count(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMat this); // 296
		}
	}
	{
		int iFlex; // 318
		{
			CBoneFlexDriver& newDriver; // 320
			const ModelBoneFlexDriver_t& oldDriver; // 321
			int nNumControls; // 326
			{
				int iControl; // 328
				{
					CBoneFlexDriverControl& newControl; // 330
					const ModelBoneFlexDriverControl_t& oldControl; // 331
					CUtlMemory<CBoneFlexDriverControl, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CBoneFlexDriverControl, CUtlMemory<CBoneFlexDriverControl, int> >::operator[](
							int i);  // 330
					CUtlMemory<ModelBoneFlexDriverControl_t, int>::operator[](
							int i);  // 595
					CUtlVectorBase<ModelBoneFlexDriverControl_t, CUtlMemory<ModelBoneFlexDriverControl_t, int> >::operator[](
							int i);  // 331
					CUtlString::Get(); // 334
					CUtlString::operator=(
							const char* src);  // 334
					CUtlStringToken::SetHashCode(
							uint32 nCode);  // 335
				}
			}
			CUtlString::Get(); // 323
			CUtlMemory<CBoneFlexDriver, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CBoneFlexDriver, CUtlMemory<CBoneFlexDriver, int> >::operator[](
					int i);  // 320
			CUtlMemory<ModelBoneFlexDriver_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<ModelBoneFlexDriver_t, CUtlMemory<ModelBoneFlexDriver_t, int> >::operator[](
					int i);  // 321
			CUtlString::operator=(
					const char* src);  // 323
			CUtlStringToken::SetHashCode(
					uint32 nCode);  // 324
			CUtlVectorBase<ModelBoneFlexDriverControl_t, CUtlMemory<ModelBoneFlexDriverControl_t, int> >::Count(); // 326
		}
	}
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_350; // 350
		ThreadInterlockedAssignIf64(volatile int64* pDest,
						int64 value,
						int64 comparand);  // 800
		CThreadFastMutex::TryLockInline(
				const char* pFileName,
				int nLineNumber,
				const ThreadId_t  threadId);  // 837
		ThreadPause(void); // 839
		CThreadFastMutex::Lock(
			const char* pFileName,
			int nLineNumber,
			unsigned int nSpinSleepTime);  // 943
		Lock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
				const CThreadFastMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 350
		CCycleCount::GetSeconds(); // 352
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 353
	}
	CCycleCount::Init(
		uint64 cycles);  // 238
	CCycleCount::CCycleCount(); // 63
	CFastTimer::CFastTimer(); // 212
	PLAT_CPU_TIME(void); // 263
	CCycleCount::Sample(); // 335
	CFastTimer::Start(); // 213
	CUtlVectorBase<PermModelExtPart_t, CUtlMemory<PermModelExtPart_t, int> >::Count(); // 216
	Count(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCRenderMesh>, CUtlMemory<CStrongHandle<InfoForResourceTypeCRe this); // 219
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::Count(); // 237
	CUtlMemory<long long unsigned int, int>::Base(); // 113
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::Base(); // 237
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 238
	CUtlMemory<unsigned char, int>::Base(); // 113
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 238
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 239
	CUtlMemory<float, int>::Base(); // 113
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 239
	Count(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, CUtlMemory<CStrongHandle<InfoForResource this); // 242
	Count(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, CUtlMemory<CStrongHandle<InfoForResource this); // 244
	CUtlMemory<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, CUtlMemory<CStrongHandle<InfoForResource this,
			int i);  // 244
	CStrongHandle<InfoForResourceTypeCPhysAggregateData>::HasIdentity(); // 244
	CWeakHandle<InfoForResourceTypeCPhysAggregateData>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCPhysAggregateData>::GetHandle(); // 246
	CWeakHandle<InfoForResourceTypeCPhysAggregateData>::GetData(); // 246
	CPhysAggregateDataHandle::Clear(); // 205
	CPhysAggregateDataHandle::Set(
		CPhysAggregateData* pData);  // 246
	Count(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, CUtlMemory<CStrongHandle<InfoForResource this); // 250
	Count(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTyp this); // 253
	Count(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCSequenceGroupData>, CUtlMemory<CStrongHandle<InfoForResource this); // 276
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 279
	CUtlVectorBase<MaterialGroup_t, CUtlMemory<MaterialGroup_t, int> >::Count(); // 287
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 311
	CUtlMemory<short int, int>::Base(); // 113
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Base(); // 311
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 312
	CUtlMemory<short unsigned int, int>::Base(); // 113
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Base(); // 312
	CUtlVectorBase<ModelBoneFlexDriver_t, CUtlMemory<ModelBoneFlexDriver_t, int> >::Count(); // 315
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 573
	CUtlMemory<CUtlString, int>::Base(); // 112
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 102
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::begin(); // 574
	CUtlMemory<CUtlString, int>::Base(); // 113
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 105
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 105
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::end(); // 574
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 209
	UtlTraitsCopyRange<CUtlString>(const CUtlString* pFrom,
					const CUtlString* pFromEnd,
					CUtlString* pTo);  // 200
	UtlTraitsCopyRange<CUtlString>(const CUtlString* pFrom,
					const CUtlString* pFromEnd,
					CUtlString* pTo);  // 574
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >& other);  // 565
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >& other);  // 452
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& src);  // 344
	CCycleCount::Init(
		uint64 cycles);  // 238
	CCycleCount::CCycleCount(); // 344
	PLAT_CPU_TIME(void); // 263
	CCycleCount::Sample(); // 345
	CFastTimer::End(); // 347
} /* size: 0, variables: 7, inline expansions: 62 (0 bytes) */

// <021FA963> modellib/model_old_disk.cpp:210
// variables: 31
// function calls: 169
void CModel::InitFromV0Data(CConvertOldDiskCtx& convertCtx, const PermModelData_t* pOldModel)
{
	CFastTimer timer; // 212
	const char   __FUNCTION__; // 52836
	int nMeshes; // 219
	int nAnimGroups; // 253
	int nMeshGroups; // 279
	int nMaterialGroups; // 287
	int nNumFlex; // 315
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 216
	}
	{
		int iMesh; // 221
		{
			HRenderMesh_Internal hMesh; // 223
			CRenderMesh* pRenderMesh; // 224
			CWeakHandle<InfoForResourceTypeCRenderMesh>::GetData(); // 227
			CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int this,
					int i);  // 233
			ThreadInterlockedIncrement(volatile int32* p); // 158
			Increment(int* p); // 199
			CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 329
			CRefCounted<CRefCountServiceBase<true, CRefMT> >::AddRef(); // 21
			AddRef<CRenderMesh>(CRenderMesh* pObj); // 366
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 204
			CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
			CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
			CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
			Release<CRenderMesh>(CRenderMesh* pObj); // 370
			CSmartPtr<CRenderMesh, CRefCountAccessor>::operator=(
					CRenderMesh* pObj);  // 233
			CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMesh>, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCRenderMesh>, CUtlMemory<CStrongHandle<InfoForResourceTypeCRe this,
					int i);  // 223
			CWeakHandle<InfoForResourceTypeCRenderMesh>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
			CStrongHandle<InfoForResourceTypeCRenderMesh>::GetHandle(); // 223
			CWeakHandle<InfoForResourceTypeCRenderMesh>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 225
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 242
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 250
	}
	{
		int iAnimGroup; // 255
		{
			HAnimationGroup_Internal hAnimGroup; // 257
			CAnimationGroup* pAnimGroupV0; // 264
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 184
			ResourceGetName(ResourceHandle_t hResource,
					CResourceName* pTarget);  // 488
			CWeakHandle<InfoForResourceTypeCAnimationGroup>::GetResourceName(
					CResourceName* pOutName);  // 206
			CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCAnimationGroup>(
										const CWeakHandle<InfoForResourceTypeCAnimationGroup>& resourceHandle);  // 267
			CUtlMemory<CAnimationGroupResource::operator[](
					int i);  // 588
			CUtlVectorBase<CAnimationGroupResource::operator[](
					int i);  // 271
			CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTyp this,
					int i);  // 257
			CWeakHandle<InfoForResourceTypeCAnimationGroup>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
			CStrongHandle<InfoForResourceTypeCAnimationGroup>::GetHandle(); // 257
			CWeakHandle<InfoForResourceTypeCAnimationGroup>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 258
			CWeakHandle<InfoForResourceTypeCAnimationGroup>::GetData(); // 264
			Mix32HashFunctor::operator(
					uint32 n);  // 139
			PointerHashFunctor::operator(
					const void* s);  // 218
			CUtlHashtable<const ResourceBindingBase_t::Find(
				KeyArg_t k);  // 235
			CUtlHashtable<const ResourceBindingBase_t::HasElement(
					KeyArg_t k);  // 31
			CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::operator[](
					int i);  // 706
			CUtlKeyValuePair<const ResourceBindingBase_t::CUtlKeyValuePair<const ResourceBindingBase_t*>(
									const ResourceBindingBase_t* const& k);  // 1514
			Construct<CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t>, const ResourceBindingBase_t*&>(CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t>* pMemory); // 706
			CUtlHashtable<const ResourceBindingBase_t::DoInsert<const ResourceBindingBase_t*>(
								const ResourceBindingBase_t* k,
								unsigned int h,
								bool* pDidInsert);  // 695
			CUtlHashtable<const ResourceBindingBase_t::DoInsert<const ResourceBindingBase_t*>(
								const ResourceBindingBase_t* k,
								unsigned int h,
								bool* pDidInsert);  // 240
			CUtlHashtable<const ResourceBindingBase_t::Insert(
				KeyArg_t k);  // 36
			CConvertOldDiskCtx::RegisterNewSubresource(
						ResourceHandle_t hResource);  // 265
			CResourceName::Get(); // 267
			CUtlMemory<CAnimationGroupResource::operator[](
					int i);  // 588
			CUtlVectorBase<CAnimationGroupResource::operator[](
					int i);  // 267
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 267
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 276
	}
	{
		int iMeshGroup; // 281
		CUtlString::Get(); // 283
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 283
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 283
		CUtlString::operator=(
				const char* src);  // 283
	}
	{
		int iMaterialGroup; // 289
		{
			CModelMaterialGroup& newGroup; // 291
			const MaterialGroup_t& oldGroup; // 292
			int nNumMats; // 296
			{
				int iMat; // 298
				CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::operator[](
						int i);  // 595
				operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMat this,
						int i);  // 300
				CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
				CStrongHandle<InfoForResourceTypeIMaterial2>::GetHandle(); // 300
				CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2 this,
						int i);  // 300
				ThreadInterlockedIncrement(volatile int32* p); // 576
				CInterlockedIntT<int, 4>::operator++(); // 570
				CStrongHandle<InfoForResourceTypeIMaterial2>::Init(
					ResourceHandleTyped_t hResource);  // 673
				CStrongHandle<InfoForResourceTypeIMaterial2>::operator=(
						const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 300
			}
			CUtlString::Get(); // 294
			CUtlMemory<CModelMaterialGroup, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >::operator[](
					int i);  // 291
			CUtlMemory<MaterialGroup_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<MaterialGroup_t, CUtlMemory<MaterialGroup_t, int> >::operator[](
					int i);  // 292
			CUtlString::operator=(
					const char* src);  // 294
			Count(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMat this); // 296
		}
	}
	{
		int iFlex; // 318
		{
			CBoneFlexDriver& newDriver; // 320
			const ModelBoneFlexDriver_t& oldDriver; // 321
			int nNumControls; // 326
			{
				int iControl; // 328
				{
					CBoneFlexDriverControl& newControl; // 330
					const ModelBoneFlexDriverControl_t& oldControl; // 331
					CUtlMemory<CBoneFlexDriverControl, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CBoneFlexDriverControl, CUtlMemory<CBoneFlexDriverControl, int> >::operator[](
							int i);  // 330
					CUtlMemory<ModelBoneFlexDriverControl_t, int>::operator[](
							int i);  // 595
					CUtlVectorBase<ModelBoneFlexDriverControl_t, CUtlMemory<ModelBoneFlexDriverControl_t, int> >::operator[](
							int i);  // 331
					CUtlString::Get(); // 334
					CUtlString::operator=(
							const char* src);  // 334
					CUtlStringToken::SetHashCode(
							uint32 nCode);  // 335
				}
			}
			CUtlString::Get(); // 323
			CUtlMemory<CBoneFlexDriver, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CBoneFlexDriver, CUtlMemory<CBoneFlexDriver, int> >::operator[](
					int i);  // 320
			CUtlMemory<ModelBoneFlexDriver_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<ModelBoneFlexDriver_t, CUtlMemory<ModelBoneFlexDriver_t, int> >::operator[](
					int i);  // 321
			CUtlString::operator=(
					const char* src);  // 323
			CUtlStringToken::SetHashCode(
					uint32 nCode);  // 324
			CUtlVectorBase<ModelBoneFlexDriverControl_t, CUtlMemory<ModelBoneFlexDriverControl_t, int> >::Count(); // 326
		}
	}
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_350; // 350
		ThreadInterlockedAssignIf64(volatile int64* pDest,
						int64 value,
						int64 comparand);  // 800
		CThreadFastMutex::TryLockInline(
				const char* pFileName,
				int nLineNumber,
				const ThreadId_t  threadId);  // 837
		ThreadPause(void); // 839
		CThreadFastMutex::Lock(
			const char* pFileName,
			int nLineNumber,
			unsigned int nSpinSleepTime);  // 943
		Lock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
				const CThreadFastMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 350
		CCycleCount::GetSeconds(); // 352
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 353
	}
	CCycleCount::Init(
		uint64 cycles);  // 238
	CCycleCount::CCycleCount(); // 63
	CFastTimer::CFastTimer(); // 212
	PLAT_CPU_TIME(void); // 263
	CCycleCount::Sample(); // 335
	CFastTimer::Start(); // 213
	CUtlVectorBase<PermModelExtPart_t, CUtlMemory<PermModelExtPart_t, int> >::Count(); // 216
	Count(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCRenderMesh>, CUtlMemory<CStrongHandle<InfoForResourceTypeCRe this); // 219
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::Count(); // 237
	CUtlMemory<long long unsigned int, int>::Base(); // 113
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::Base(); // 237
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 238
	CUtlMemory<unsigned char, int>::Base(); // 113
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 238
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 239
	CUtlMemory<float, int>::Base(); // 113
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 239
	Count(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, CUtlMemory<CStrongHandle<InfoForResource this); // 242
	Count(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, CUtlMemory<CStrongHandle<InfoForResource this); // 244
	CUtlMemory<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, CUtlMemory<CStrongHandle<InfoForResource this,
			int i);  // 244
	CStrongHandle<InfoForResourceTypeCPhysAggregateData>::HasIdentity(); // 244
	CWeakHandle<InfoForResourceTypeCPhysAggregateData>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCPhysAggregateData>::GetHandle(); // 246
	CWeakHandle<InfoForResourceTypeCPhysAggregateData>::GetData(); // 246
	CPhysAggregateDataHandle::Clear(); // 205
	CPhysAggregateDataHandle::Set(
		CPhysAggregateData* pData);  // 246
	Count(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, CUtlMemory<CStrongHandle<InfoForResource this); // 250
	Count(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTyp this); // 253
	Count(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCSequenceGroupData>, CUtlMemory<CStrongHandle<InfoForResource this); // 276
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 279
	CUtlVectorBase<MaterialGroup_t, CUtlMemory<MaterialGroup_t, int> >::Count(); // 287
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 311
	CUtlMemory<short int, int>::Base(); // 113
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Base(); // 311
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 312
	CUtlMemory<short unsigned int, int>::Base(); // 113
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Base(); // 312
	CUtlVectorBase<ModelBoneFlexDriver_t, CUtlMemory<ModelBoneFlexDriver_t, int> >::Count(); // 315
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 573
	CUtlMemory<CUtlString, int>::Base(); // 112
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 102
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::begin(); // 574
	CUtlMemory<CUtlString, int>::Base(); // 113
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 105
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 105
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::end(); // 574
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 209
	UtlTraitsCopyRange<CUtlString>(const CUtlString* pFrom,
					const CUtlString* pFromEnd,
					CUtlString* pTo);  // 200
	UtlTraitsCopyRange<CUtlString>(const CUtlString* pFrom,
					const CUtlString* pFromEnd,
					CUtlString* pTo);  // 574
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >& other);  // 565
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >& other);  // 452
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& src);  // 344
	CCycleCount::Init(
		uint64 cycles);  // 238
	CCycleCount::CCycleCount(); // 344
	PLAT_CPU_TIME(void); // 263
	CCycleCount::Sample(); // 345
	CFastTimer::End(); // 347
} /* size: 0, variables: 7, inline expansions: 62 (0 bytes) */

// <00D67120> modellib/model_old_disk.cpp:210
// variables: 31
// function calls: 169
void CModel::InitFromV0Data(CConvertOldDiskCtx& convertCtx, const PermModelData_t* pOldModel)
{
	CFastTimer timer; // 212
	const char   __FUNCTION__; // 54161
	int nMeshes; // 219
	int nAnimGroups; // 253
	int nMeshGroups; // 279
	int nMaterialGroups; // 287
	int nNumFlex; // 315
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 216
	}
	{
		int iMesh; // 221
		{
			HRenderMesh_Internal hMesh; // 223
			CRenderMesh* pRenderMesh; // 224
			CWeakHandle<InfoForResourceTypeCRenderMesh>::GetData(); // 227
			CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int this,
					int i);  // 233
			ThreadInterlockedIncrement(volatile int32* p); // 158
			Increment(int* p); // 199
			CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 329
			CRefCounted<CRefCountServiceBase<true, CRefMT> >::AddRef(); // 21
			AddRef<CRenderMesh>(CRenderMesh* pObj); // 366
			ThreadInterlockedDecrement(volatile int32* p); // 159
			Decrement(int* p); // 204
			CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
			CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
			CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
			Release<CRenderMesh>(CRenderMesh* pObj); // 370
			CSmartPtr<CRenderMesh, CRefCountAccessor>::operator=(
					CRenderMesh* pObj);  // 233
			CUtlMemory<CStrongHandle<InfoForResourceTypeCRenderMesh>, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCRenderMesh>, CUtlMemory<CStrongHandle<InfoForResourceTypeCRe this,
					int i);  // 223
			CWeakHandle<InfoForResourceTypeCRenderMesh>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
			CStrongHandle<InfoForResourceTypeCRenderMesh>::GetHandle(); // 223
			CWeakHandle<InfoForResourceTypeCRenderMesh>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 225
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 242
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 250
	}
	{
		int iAnimGroup; // 255
		{
			HAnimationGroup_Internal hAnimGroup; // 257
			CAnimationGroup* pAnimGroupV0; // 264
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 184
			ResourceGetName(ResourceHandle_t hResource,
					CResourceName* pTarget);  // 488
			CWeakHandle<InfoForResourceTypeCAnimationGroup>::GetResourceName(
					CResourceName* pOutName);  // 206
			CResourceNameGetter::CResourceNameGetter<InfoForResourceTypeCAnimationGroup>(
										const CWeakHandle<InfoForResourceTypeCAnimationGroup>& resourceHandle);  // 267
			CUtlMemory<CAnimationGroupResource::operator[](
					int i);  // 588
			CUtlVectorBase<CAnimationGroupResource::operator[](
					int i);  // 271
			CUtlMemory<CStrongHandle<InfoForResourceTypeCAnimationGroup>, int>::operator[](
					int i);  // 595
			operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTyp this,
					int i);  // 257
			CWeakHandle<InfoForResourceTypeCAnimationGroup>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
			CStrongHandle<InfoForResourceTypeCAnimationGroup>::GetHandle(); // 257
			CWeakHandle<InfoForResourceTypeCAnimationGroup>::CWeakHandle(); // 226
			FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
			StaticInvalidHandle(void); // 258
			CWeakHandle<InfoForResourceTypeCAnimationGroup>::GetData(); // 264
			Mix32HashFunctor::operator(
					uint32 n);  // 139
			PointerHashFunctor::operator(
					const void* s);  // 218
			CUtlHashtable<const ResourceBindingBase_t::Find(
				KeyArg_t k);  // 235
			CUtlHashtable<const ResourceBindingBase_t::HasElement(
					KeyArg_t k);  // 31
			CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t::operator[](
					int i);  // 706
			CUtlKeyValuePair<const ResourceBindingBase_t::CUtlKeyValuePair<const ResourceBindingBase_t*>(
									const ResourceBindingBase_t* const& k);  // 1514
			Construct<CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t>, const ResourceBindingBase_t*&>(CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t>* pMemory); // 706
			CUtlHashtable<const ResourceBindingBase_t::DoInsert<const ResourceBindingBase_t*>(
								const ResourceBindingBase_t* k,
								unsigned int h,
								bool* pDidInsert);  // 695
			CUtlHashtable<const ResourceBindingBase_t::DoInsert<const ResourceBindingBase_t*>(
								const ResourceBindingBase_t* k,
								unsigned int h,
								bool* pDidInsert);  // 240
			CUtlHashtable<const ResourceBindingBase_t::Insert(
				KeyArg_t k);  // 36
			CConvertOldDiskCtx::RegisterNewSubresource(
						ResourceHandle_t hResource);  // 265
			CResourceName::Get(); // 267
			CUtlMemory<CAnimationGroupResource::operator[](
					int i);  // 588
			CUtlVectorBase<CAnimationGroupResource::operator[](
					int i);  // 267
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 267
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 276
	}
	{
		int iMeshGroup; // 281
		CUtlString::Get(); // 283
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 595
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 283
		CUtlMemory<CUtlString, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator[](
				int i);  // 283
		CUtlString::operator=(
				const char* src);  // 283
	}
	{
		int iMaterialGroup; // 289
		{
			CModelMaterialGroup& newGroup; // 291
			const MaterialGroup_t& oldGroup; // 292
			int nNumMats; // 296
			{
				int iMat; // 298
				CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::operator[](
						int i);  // 595
				operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMat this,
						int i);  // 300
				CWeakHandle<InfoForResourceTypeIMaterial2>::CWeakHandle(); // 226
				FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
				CStrongHandle<InfoForResourceTypeIMaterial2>::GetHandle(); // 300
				CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::operator[](
						int i);  // 588
				operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2 this,
						int i);  // 300
				ThreadInterlockedIncrement(volatile int32* p); // 576
				CInterlockedIntT<int, 4>::operator++(); // 570
				CStrongHandle<InfoForResourceTypeIMaterial2>::Init(
					ResourceHandleTyped_t hResource);  // 673
				CStrongHandle<InfoForResourceTypeIMaterial2>::operator=(
						const CWeakHandle<InfoForResourceTypeIMaterial2>& src);  // 300
			}
			CUtlString::Get(); // 294
			CUtlMemory<CModelMaterialGroup, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >::operator[](
					int i);  // 291
			CUtlMemory<MaterialGroup_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<MaterialGroup_t, CUtlMemory<MaterialGroup_t, int> >::operator[](
					int i);  // 292
			CUtlString::operator=(
					const char* src);  // 294
			Count(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMat this); // 296
		}
	}
	{
		int iFlex; // 318
		{
			CBoneFlexDriver& newDriver; // 320
			const ModelBoneFlexDriver_t& oldDriver; // 321
			int nNumControls; // 326
			{
				int iControl; // 328
				{
					CBoneFlexDriverControl& newControl; // 330
					const ModelBoneFlexDriverControl_t& oldControl; // 331
					CUtlMemory<CBoneFlexDriverControl, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CBoneFlexDriverControl, CUtlMemory<CBoneFlexDriverControl, int> >::operator[](
							int i);  // 330
					CUtlMemory<ModelBoneFlexDriverControl_t, int>::operator[](
							int i);  // 595
					CUtlVectorBase<ModelBoneFlexDriverControl_t, CUtlMemory<ModelBoneFlexDriverControl_t, int> >::operator[](
							int i);  // 331
					CUtlString::Get(); // 334
					CUtlString::operator=(
							const char* src);  // 334
					CUtlStringToken::SetHashCode(
							uint32 nCode);  // 335
				}
			}
			CUtlString::Get(); // 323
			CUtlMemory<CBoneFlexDriver, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CBoneFlexDriver, CUtlMemory<CBoneFlexDriver, int> >::operator[](
					int i);  // 320
			CUtlMemory<ModelBoneFlexDriver_t, int>::operator[](
					int i);  // 595
			CUtlVectorBase<ModelBoneFlexDriver_t, CUtlMemory<ModelBoneFlexDriver_t, int> >::operator[](
					int i);  // 321
			CUtlString::operator=(
					const char* src);  // 323
			CUtlStringToken::SetHashCode(
					uint32 nCode);  // 324
			CUtlVectorBase<ModelBoneFlexDriverControl_t, CUtlMemory<ModelBoneFlexDriverControl_t, int> >::Count(); // 326
		}
	}
	{
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> > generated_id_350; // 350
		ThreadInterlockedAssignIf64(volatile int64* pDest,
						int64 value,
						int64 comparand);  // 800
		CThreadFastMutex::TryLockInline(
				const char* pFileName,
				int nLineNumber,
				const ThreadId_t  threadId);  // 837
		ThreadPause(void); // 839
		CThreadFastMutex::Lock(
			const char* pFileName,
			int nLineNumber,
			unsigned int nSpinSleepTime);  // 943
		Lock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::CAutoLockT(
				const CThreadFastMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 350
		CCycleCount::GetSeconds(); // 352
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 874
		CThreadFastMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadFastMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadFastMutex, CAutoLockMutexTrait<CThreadFastMutex> >::~CAutoLockT(); // 353
	}
	CCycleCount::Init(
		uint64 cycles);  // 238
	CCycleCount::CCycleCount(); // 63
	CFastTimer::CFastTimer(); // 212
	PLAT_CPU_TIME(void); // 263
	CCycleCount::Sample(); // 335
	CFastTimer::Start(); // 213
	CUtlVectorBase<PermModelExtPart_t, CUtlMemory<PermModelExtPart_t, int> >::Count(); // 216
	Count(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCRenderMesh>, CUtlMemory<CStrongHandle<InfoForResourceTypeCRe this); // 219
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::Count(); // 237
	CUtlMemory<long long unsigned int, int>::Base(); // 113
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::Base(); // 237
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 238
	CUtlMemory<unsigned char, int>::Base(); // 113
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 238
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 239
	CUtlMemory<float, int>::Base(); // 113
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 239
	Count(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, CUtlMemory<CStrongHandle<InfoForResource this); // 242
	Count(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, CUtlMemory<CStrongHandle<InfoForResource this); // 244
	CUtlMemory<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, CUtlMemory<CStrongHandle<InfoForResource this,
			int i);  // 244
	CStrongHandle<InfoForResourceTypeCPhysAggregateData>::HasIdentity(); // 244
	CWeakHandle<InfoForResourceTypeCPhysAggregateData>::CWeakHandle(); // 226
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 712
	CStrongHandle<InfoForResourceTypeCPhysAggregateData>::GetHandle(); // 246
	CWeakHandle<InfoForResourceTypeCPhysAggregateData>::GetData(); // 246
	CPhysAggregateDataHandle::Clear(); // 205
	CPhysAggregateDataHandle::Set(
		CPhysAggregateData* pData);  // 246
	Count(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCPhysAggregateData>, CUtlMemory<CStrongHandle<InfoForResource this); // 250
	Count(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCAnimationGroup>, CUtlMemory<CStrongHandle<InfoForResourceTyp this); // 253
	Count(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeCSequenceGroupData>, CUtlMemory<CStrongHandle<InfoForResource this); // 276
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 279
	CUtlVectorBase<MaterialGroup_t, CUtlMemory<MaterialGroup_t, int> >::Count(); // 287
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 311
	CUtlMemory<short int, int>::Base(); // 113
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Base(); // 311
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 312
	CUtlMemory<short unsigned int, int>::Base(); // 113
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Base(); // 312
	CUtlVectorBase<ModelBoneFlexDriver_t, CUtlMemory<ModelBoneFlexDriver_t, int> >::Count(); // 315
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 573
	CUtlMemory<CUtlString, int>::Base(); // 112
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 102
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::begin(); // 574
	CUtlMemory<CUtlString, int>::Base(); // 113
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 105
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 105
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::end(); // 574
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 209
	UtlTraitsCopyRange<CUtlString>(const CUtlString* pFrom,
					const CUtlString* pFromEnd,
					CUtlString* pTo);  // 200
	UtlTraitsCopyRange<CUtlString>(const CUtlString* pFrom,
					const CUtlString* pFromEnd,
					CUtlString* pTo);  // 574
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >& other);  // 565
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >& other);  // 452
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& src);  // 344
	CCycleCount::Init(
		uint64 cycles);  // 238
	CCycleCount::CCycleCount(); // 344
	PLAT_CPU_TIME(void); // 263
	CCycleCount::Sample(); // 345
	CFastTimer::End(); // 347
} /* size: 0, variables: 7, inline expansions: 62 (1031 bytes) */

// <04E409AA> modellib/model_old_disk.cpp:359
// variables: 7
// function calls: 278
void CModel::InitFromModel(HModel hModel)
{
	{
		int i; // 377
		CUtlMemory<CAnimationGroupResource::Base(); // 112
		CUtlVectorBase<CAnimationGroupResource::Base(); // 368
		CUtlVectorBase<CAnimationGroupResource::ResetDbgInfo(); // 824
		CUtlVectorBase<CAnimationGroupResource::GrowMemory(
				int num);  // 1249
		CUtlMemory<CAnimationGroupResource::operator[](
				int i);  // 602
		CUtlVectorBase<CAnimationGroupResource::Element(
			int i);  // 1252
		Construct<CAnimationGroupResource*, CAnimationGroupResource*>(CAnimationGroupResource** pMemory); // 1252
		CUtlMemory<CAnimationGroupResource::NumAllocated(); // 1247
		CUtlVectorBase<CAnimationGroupResource::AddToTail(
				CAnimationGroupResource *& src);  // 379
		CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 377
		CUtlVectorBase<CAnimationGroupResource::Count(); // 377
		CUtlMemory<CAnimationGroupResource::operator[](
				int i);  // 595
		CUtlVectorBase<CAnimationGroupResource::operator[](
				int i);  // 379
	}
	CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 361
	CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 362
	Vector::operator=(
			const Vector& vOther);  // 362
	CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 363
	Vector::operator=(
			const Vector& vOther);  // 363
	CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 364
	Vector::operator=(
			const Vector& vOther);  // 364
	CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 365
	Vector::operator=(
			const Vector& vOther);  // 365
	CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 366
	CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 367
	Vector::operator=(
			const Vector& vOther);  // 367
	CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 368
	CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 370
	CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 372
	Count(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this); // 372
	CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::Base(); // 113
	Base(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor this); // 372
	CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int>::Base(); // 112
	Base(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int this); // 102
	begin(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int this); // 1344
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 199
	CRefCountServiceBase<true, CRefMT>::DoAddRef(); // 329
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CRenderMesh>(CRenderMesh* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 204
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 202
	CRefCountServiceBase<true, CRefMT>::DoRelease(); // 330
	CRefCounted<CRefCountServiceBase<true, CRefMT> >::Release(); // 27
	Release<CRenderMesh>(CRenderMesh* pObj); // 370
	CSmartPtr<CRenderMesh, CRefCountAccessor>::operator=(
			CRenderMesh* pObj);  // 406
	CSmartPtr<CRenderMesh, CRefCountAccessor>::operator=(
			const CSmartPtr<CRenderMesh, CRefCountAccessor>& other);  // 209
	UtlTraitsCopyRange<CSmartPtr<CRenderMesh> >(const CSmartPtr<CRenderMesh, CRefCountAccessor>* pFrom,
							const CSmartPtr<CRenderMesh, CRefCountAccessor>* pFromEnd,
							CSmartPtr<CRenderMesh, CRefCountAccessor>* pTo);  // 200
	UtlTraitsCopyRange<CSmartPtr<CRenderMesh> >(const CSmartPtr<CRenderMesh, CRefCountAccessor>* pFrom,
							const CSmartPtr<CRenderMesh, CRefCountAccessor>* pFromEnd,
							CSmartPtr<CRenderMesh, CRefCountAccessor>* pTo);  // 1344
	CopyArray(const CUtlVectorBase<CSmartPtr<CRenderMesh, CRefCountAccessor>, CUtlMemory<CSmartPtr<CRenderMesh, CRefCountAccessor>, int this,
			const CSmartPtr<CRenderMesh, CRefCountAccessor>* pArray,
			int size);  // 372
	CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 373
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::Count(); // 373
	CUtlMemory<long long unsigned int, int>::Base(); // 113
	CUtlVectorBase<long long unsigned int, CUtlMemory<long long unsigned int, int> >::Base(); // 373
	CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 374
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Count(); // 374
	CUtlMemory<unsigned char, int>::Base(); // 113
	CUtlVectorBase<unsigned char, CUtlMemory<unsigned char, int> >::Base(); // 374
	CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 375
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 375
	CUtlMemory<float, int>::Base(); // 113
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 375
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 382
	CUtlMemory<CUtlString, int>::Base(); // 113
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 382
	CUtlMemory<CUtlString, int>::Base(); // 112
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 102
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::begin(); // 1344
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 209
	UtlTraitsCopyRange<CUtlString>(const CUtlString* pFrom,
					const CUtlString* pFromEnd,
					CUtlString* pTo);  // 200
	UtlTraitsCopyRange<CUtlString>(const CUtlString* pFrom,
					const CUtlString* pFromEnd,
					CUtlString* pTo);  // 1344
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::CopyArray(
			const CUtlString* pArray,
			int size);  // 382
	CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 383
	CUtlVectorBase<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >::Count(); // 383
	CUtlMemory<CModelMaterialGroup, int>::Base(); // 113
	CUtlVectorBase<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >::Base(); // 383
	CUtlMemory<CModelMaterialGroup, int>::Base(); // 112
	CUtlVectorBase<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >::Base(); // 102
	CUtlVectorBase<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >::begin(); // 1344
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 245
	Count(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMat this); // 573
	CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::Base(); // 112
	Base(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2 this); // 102
	begin(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2 this); // 574
	CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, int>::Base(); // 113
	Base(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMat this); // 105
	Count(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMat this); // 105
	end(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMat this); // 574
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 604
	CStrongHandle<InfoForResourceTypeIMaterial2>::Init(
		const CStrongHandle<InfoForResourceTypeIMaterial2>& src);  // 666
	CStrongHandle<InfoForResourceTypeIMaterial2>::operator=(
			const CStrongHandle<InfoForResourceTypeIMaterial2>& src);  // 209
	UtlTraitsCopyRange<CStrongHandle<InfoForResourceTypeIMaterial2> >(const CStrongHandle<InfoForResourceTypeIMaterial2>* pFrom,
										const CStrongHandle<InfoForResourceTypeIMaterial2>* pFromEnd,
										CStrongHandle<InfoForResourceTypeIMaterial2>* pTo);  // 200
	UtlTraitsCopyRange<CStrongHandle<InfoForResourceTypeIMaterial2> >(const CStrongHandle<InfoForResourceTypeIMaterial2>* pFrom,
										const CStrongHandle<InfoForResourceTypeIMaterial2>* pFromEnd,
										CStrongHandle<InfoForResourceTypeIMaterial2>* pTo);  // 574
	operator=(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2 this,
			const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2 other);  // 565
	operator=(const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2 this,
			const CUtlVectorBase<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2 other);  // 452
	operator=(const CUtlVector<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, i this,
			const CUtlVector<CStrongHandle<InfoForResourceTypeIMaterial2>, CUtlMemory<CStrongHandle<InfoForResourceTypeIMaterial2>, i src);  // 245
	CModelMaterialGroup::operator=(
			const CModelMaterialGroup  &);  // 209
	UtlTraitsCopyRange<CModelMaterialGroup>(const CModelMaterialGroup* pFrom,
						const CModelMaterialGroup* pFromEnd,
						CModelMaterialGroup* pTo);  // 200
	UtlTraitsCopyRange<CModelMaterialGroup>(const CModelMaterialGroup* pFrom,
						const CModelMaterialGroup* pFromEnd,
						CModelMaterialGroup* pTo);  // 1344
	CUtlVectorBase<CModelMaterialGroup, CUtlMemory<CModelMaterialGroup, int> >::CopyArray(
			const CModelMaterialGroup* pArray,
			int size);  // 383
	CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 384
	CUtlVectorBase<CBoneFlexDriver, CUtlMemory<CBoneFlexDriver, int> >::Count(); // 384
	CUtlMemory<CBoneFlexDriver, int>::Base(); // 113
	CUtlVectorBase<CBoneFlexDriver, CUtlMemory<CBoneFlexDriver, int> >::Base(); // 384
	CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 386
	CPhysAggregateDataHandle::Get(); // 143
	CPhysAggregateDataHandle::Clear(); // 205
	CPhysAggregateDataHandle::Set(
		CPhysAggregateData* pData);  // 143
	CPhysAggregateDataHandle::operator=(
			const CPhysAggregateDataHandle& rhs);  // 386
	CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 388
	CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 389
	{
		const entry_t* srcTable; // 817
		CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Purge(); // 903
		CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Purge(); // 284
		Purge(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this); // 809
		CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Base(); // 817
		{
			int i; // 818
			CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::Count(); // 818
			CUtlHashtableEntry<unsigned int, short unsigned int>::IsValid(); // 820
			{
				int newIdx; // 825
				CUtlMemory<CUtlHashtableEntry<unsigned int, short unsigned int>, int>::operator[](
						int i);  // 826
				Construct<CUtlKeyValuePair<unsigned int, short unsigned int>, const CUtlKeyValuePair<unsigned int, short unsigned int>&>(CUtlKeyValuePair<unsigned int, short unsigned int>* pMemory); // 826
			}
		}
		Reserve(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this,
			int expected);  // 287
		Reserve(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this,
			int expected);  // 810
	}
	operator=(const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t this,
			const CUtlHashtable<unsigned int, short unsigned int, IdentityHashFunctor, DefaultEqualFunctor<unsigned int>, undefined_t src);  // 127
	BoneDict_t::operator=(
			const BoneDict_t  &);  // 50
	{
		const entry_t* srcTable; // 817
		CUtlMemory<CUtlHashtableEntry<short unsigned int, unsigned int>, int>::IsExternallyAllocated(); // 905
		CUtlMemory<CUtlHashtableEntry<short unsigned int, unsigned int>, int>::Purge(); // 903
		CUtlMemory<CUtlHashtableEntry<short unsigned int, unsigned int>, int>::Purge(); // 284
		Purge(const CUtlHashtable<short unsigned int, unsigned int, IdentityHashFunctor, DefaultEqualFunctor<short unsigned int>, undef this); // 809
		CUtlMemory<CUtlHashtableEntry<short unsigned int, unsigned int>, int>::Base(); // 817
		{
			int i; // 818
			CUtlMemory<CUtlHashtableEntry<short unsigned int, unsigned int>, int>::Count(); // 818
			CUtlHashtableEntry<short unsigned int, unsigned int>::IsValid(); // 820
			{
				int newIdx; // 825
				CUtlMemory<CUtlHashtableEntry<short unsigned int, unsigned int>, int>::operator[](
						int i);  // 826
				Construct<CUtlKeyValuePair<short unsigned int, unsigned int>, const CUtlKeyValuePair<short unsigned int, unsigned int>&>(CUtlKeyValuePair<short unsigned int, unsigned int>* pMemory); // 826
			}
		}
		Reserve(const CUtlHashtable<short unsigned int, unsigned int, IdentityHashFunctor, DefaultEqualFunctor<short unsigned int>, undef this,
			int expected);  // 287
		Reserve(const CUtlHashtable<short unsigned int, unsigned int, IdentityHashFunctor, DefaultEqualFunctor<short unsigned int>, undef this,
			int expected);  // 810
	}
	operator=(const CUtlHashtable<short unsigned int, unsigned int, IdentityHashFunctor, DefaultEqualFunctor<short unsigned int>, undef this,
			const CUtlHashtable<short unsigned int, unsigned int, IdentityHashFunctor, DefaultEqualFunctor<short unsigned int>, undef src);  // 135
	BoneDictInverted_t::operator=(
			const BoneDictInverted_t  &);  // 50
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 573
	CUtlMemory<CUtlString, int>::Base(); // 112
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 102
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::begin(); // 574
	CUtlMemory<CUtlString, int>::Base(); // 113
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 105
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 105
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::end(); // 574
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 209
	UtlTraitsCopyRange<CUtlString>(const CUtlString* pFrom,
					const CUtlString* pFromEnd,
					CUtlString* pTo);  // 200
	UtlTraitsCopyRange<CUtlString>(const CUtlString* pFrom,
					const CUtlString* pFromEnd,
					CUtlString* pTo);  // 574
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >& other);  // 565
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >& other);  // 452
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& src);  // 50
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 573
	CUtlMemory<short int, int>::Base(); // 112
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Base(); // 102
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::begin(); // 574
	CUtlMemory<short int, int>::Base(); // 113
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Base(); // 105
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 105
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<short int>(const short int* pFrom,
					const short int* pFromEnd,
					short int* pTo);  // 173
	UtlTraitsCopyRange<short int>(const short int* pFrom,
					const short int* pFromEnd,
					short int* pTo);  // 574
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator=(
			const CUtlVectorBase<short int, CUtlMemory<short int, int> >& other);  // 565
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::operator=(
			const CUtlVectorBase<short int, CUtlMemory<short int, int> >& other);  // 452
	CUtlVector<short int, CUtlMemory<short int, int> >::operator=(
			const CUtlVector<short int, CUtlMemory<short int, int> >& src);  // 50
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 573
	CUtlMemory<float, int>::Base(); // 112
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 102
	CUtlVectorBase<float, CUtlMemory<float, int> >::begin(); // 574
	CUtlMemory<float, int>::Base(); // 113
	CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 105
	CUtlVectorBase<float, CUtlMemory<float, int> >::Count(); // 105
	CUtlVectorBase<float, CUtlMemory<float, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<short int>(const short int* pFrom,
					const short int* pFromEnd,
					short int* pTo);  // 173
	UtlTraitsCopyRange<float>(const float* pFrom,
					const float* pFromEnd,
					float* pTo);  // 574
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator=(
			const CUtlVectorBase<float, CUtlMemory<float, int> >& other);  // 565
	CUtlVectorBase<float, CUtlMemory<float, int> >::operator=(
			const CUtlVectorBase<float, CUtlMemory<float, int> >& other);  // 452
	CUtlVector<float, CUtlMemory<float, int> >::operator=(
			const CUtlVector<float, CUtlMemory<float, int> >& src);  // 50
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::Count(); // 573
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::Base(); // 112
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::Base(); // 102
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::begin(); // 574
	CUtlMemory<CModelSkeleton::BoneFlags_t, int>::Base(); // 113
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::Base(); // 105
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::Count(); // 105
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<short int>(const short int* pFrom,
					const short int* pFromEnd,
					short int* pTo);  // 173
	UtlTraitsCopyRange<CModelSkeleton::BoneFlags_t>(const BoneFlags_t* pFrom,
							const BoneFlags_t* pFromEnd,
							BoneFlags_t* pTo);  // 574
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator=(
			const CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >& other);  // 565
	CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator=(
			const CUtlVectorBase<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >& other);  // 452
	CUtlVector<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >::operator=(
			const CUtlVector<CModelSkeleton::BoneFlags_t, CUtlMemory<CModelSkeleton::BoneFlags_t, int> >& src);  // 50
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 573
	CUtlMemory<Vector, int>::Base(); // 112
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 102
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::begin(); // 574
	CUtlMemory<Vector, int>::Base(); // 113
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 105
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Count(); // 105
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::end(); // 574
	Vector::operator=(
			const Vector& vOther);  // 209
	UtlTraitsCopyRange<Vector>(const Vector* pFrom,
					const Vector* pFromEnd,
					Vector* pTo);  // 200
	UtlTraitsCopyRange<Vector>(const Vector* pFrom,
					const Vector* pFromEnd,
					Vector* pTo);  // 574
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator=(
			const CUtlVectorBase<Vector, CUtlMemory<Vector, int> >& other);  // 565
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::operator=(
			const CUtlVectorBase<Vector, CUtlMemory<Vector, int> >& other);  // 452
	CUtlVector<Vector, CUtlMemory<Vector, int> >::operator=(
			const CUtlVector<Vector, CUtlMemory<Vector, int> >& src);  // 50
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Count(); // 573
	CUtlMemory<Quaternion, int>::Base(); // 112
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Base(); // 102
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::begin(); // 574
	CUtlMemory<Quaternion, int>::Base(); // 113
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Base(); // 105
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::Count(); // 105
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::end(); // 574
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 85
	V_memcpy(void* dest,
		const void* src,
		ptrdiff_t count);  // 180
	UtlTraitsCopyRange<short int>(const short int* pFrom,
					const short int* pFromEnd,
					short int* pTo);  // 173
	UtlTraitsCopyRange<Quaternion>(const Quaternion* pFrom,
					const Quaternion* pFromEnd,
					Quaternion* pTo);  // 574
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::operator=(
			const CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >& other);  // 565
	CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >::operator=(
			const CUtlVectorBase<Quaternion, CUtlMemory<Quaternion, int> >& other);  // 452
	CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >::operator=(
			const CUtlVector<Quaternion, CUtlMemory<Quaternion, int> >& src);  // 50
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 573
	CUtlMemory<CTransform, int>::Base(); // 112
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Base(); // 102
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::begin(); // 574
	CUtlMemory<CTransform, int>::Base(); // 113
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Base(); // 105
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::Count(); // 105
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::end(); // 574
	VectorAligned::operator=(
			const VectorAligned& src);  // 26
	QuaternionAligned::operator=(
			const QuaternionAligned& vOther);  // 26
	CTransform::operator=(
			const CTransform  &);  // 209
	UtlTraitsCopyRange<CTransform>(const CTransform* pFrom,
					const CTransform* pFromEnd,
					CTransform* pTo);  // 200
	UtlTraitsCopyRange<CTransform>(const CTransform* pFrom,
					const CTransform* pFromEnd,
					CTransform* pTo);  // 574
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator=(
			const CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >& other);  // 565
	CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >::operator=(
			const CUtlVectorBase<CTransform, CUtlMemory<CTransform, int> >& other);  // 452
	CUtlVector<CTransform, CUtlMemory<CTransform, int> >::operator=(
			const CUtlVector<CTransform, CUtlMemory<CTransform, int> >& src);  // 50
	CModelSkeleton::operator=(
			const CModelSkeleton  &);  // 389
	CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 391
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Count(); // 391
	CUtlMemory<short int, int>::Base(); // 113
	CUtlVectorBase<short int, CUtlMemory<short int, int> >::Base(); // 391
	CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 392
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Count(); // 392
	CUtlMemory<short unsigned int, int>::Base(); // 113
	CUtlVectorBase<short unsigned int, CUtlMemory<short unsigned int, int> >::Base(); // 392
	CWeakHandle<InfoForResourceTypeCModel>::operator->(); // 394
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 573
	CUtlMemory<CUtlString, int>::Base(); // 112
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 102
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::begin(); // 574
	CUtlMemory<CUtlString, int>::Base(); // 113
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Base(); // 105
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::Count(); // 105
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::end(); // 574
	V_strlen(const char* str); // 393
	CUtlString::Length(); // 161
	CUtlString::Get(); // 161
	CUtlString::operator=(
			const CUtlString& src);  // 209
	UtlTraitsCopyRange<CUtlString>(const CUtlString* pFrom,
					const CUtlString* pFromEnd,
					CUtlString* pTo);  // 200
	UtlTraitsCopyRange<CUtlString>(const CUtlString* pFrom,
					const CUtlString* pFromEnd,
					CUtlString* pTo);  // 574
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >& other);  // 565
	CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVectorBase<CUtlString, CUtlMemory<CUtlString, int> >& other);  // 452
	CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >::operator=(
			const CUtlVector<CUtlString, CUtlMemory<CUtlString, int> >& src);  // 394
} /* size: 0, inline expansions: 243 (0 bytes) */

