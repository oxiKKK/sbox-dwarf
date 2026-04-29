
//
// modellib/animation.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 67
//	class: 1
//

// <04D79608> modellib/animation.cpp:28
int ExtractBbox(const CModel* pModel, HSequence hSequence, Vector& mins, Vector& maxs)
{
} /* size: 0 */

// <04D795B4> modellib/animation.cpp:41
// variables: 4
void SetEventIndexForSequence(const ISequence* pSeqDesc)
{
	{
		int index; // 51
		{
			const AnimEvent_t* pevent; // 53
			const char* pEventName; // 58
			AnimEventIndex_t iEventIndex; // 59
		}
	}
} /* size: 0 */

// <00C9C16A> modellib/animation.cpp:76
const AnimEvent_t* GetEventIndexForSequence(const ISequence* pSeqDesc)
{
} /* size: 0 */

// <04D79389> modellib/animation.cpp:91
// variables: 3
// function calls: 2
void SetActivityForSequence(const CModel* pModel, HSequence hSequence)
{
	Activity iActivity; // 93
	const char* pszActivityName; // 94
	const ISequence* pSeqDesc; // 95
	{
	}
	ActivityList_IndexForName(const char* pszActivityName); // 102
	{
	}
	ActivityList_RegisterPrivateActivity(const char* pszActivityName); // 106
} /* size: 0, variables: 3, inline expansions: 2 (150 bytes) */

// <04D7927E> modellib/animation.cpp:121
// variable: 1
// function call: 1
void IndexModelSequences(const CModel* pModel)
{
	{
		HSequence hSequence; // 126
		HSequence::operator==(
				const HSequence& other);  // 126
	}
} /* size: 0 */

// <04D790E5> modellib/animation.cpp:136
// function calls: 4
HSequence SelectWeightedSequence(const CModel* pModel, Activity activity, HSequence hCurSequence)
{
	HSequence::operator==(
			const HSequence& other);  // 141
	HSequence::operator==(
			const HSequence& other);  // 147
	CModel::InitActivityToSequence(); // 428
	CModel::GetActivityToSequenceMapping(); // 152
} /* size: 169, inline expansions: 4 (49 bytes) */

// <04D78E6C> modellib/animation.cpp:156
// variables: 5
// function calls: 4
HSequence SelectWeightedSequenceFromModifiers(const CModel* pModel, Activity activity, const CUtlSymbol* pActivityModifiers, int iModifierCount)
{
	const char   __FUNCTION__; // 54104
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 158
	}
	{
		const Activity  seqActivity; // 168
		const ISequence* pSeqDesc; // 175
		const int  nSeqModifierCount; // 176
	}
	HSequence::operator==(
			const HSequence& other);  // 160
	HSequence::operator==(
			const HSequence& other);  // 164
	CModel::InitActivityToSequence(); // 428
	CModel::GetActivityToSequenceMapping(); // 185
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <0212F2F0> modellib/animation.cpp:156
// variables: 5
// function calls: 4
HSequence SelectWeightedSequenceFromModifiers(const CModel* pModel, Activity activity, const CUtlSymbol* pActivityModifiers, int iModifierCount)
{
	const char   __FUNCTION__; // 1745
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 158
	}
	{
		const Activity  seqActivity; // 168
		const ISequence* pSeqDesc; // 175
		const int  nSeqModifierCount; // 176
	}
	HSequence::operator==(
			const HSequence& other);  // 160
	HSequence::operator==(
			const HSequence& other);  // 164
	CModel::InitActivityToSequence(); // 428
	CModel::GetActivityToSequenceMapping(); // 185
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <00C9BAAD> modellib/animation.cpp:156
// variables: 5
// function calls: 4
HSequence SelectWeightedSequenceFromModifiers(const CModel* pModel, Activity activity, const CUtlSymbol* pActivityModifiers, int iModifierCount)
{
	const char   __FUNCTION__; // 3070
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 158
	}
	{
		const Activity  seqActivity; // 168
		const ISequence* pSeqDesc; // 175
		const int  nSeqModifierCount; // 176
	}
	HSequence::operator==(
			const HSequence& other);  // 160
	HSequence::operator==(
			const HSequence& other);  // 164
	CModel::InitActivityToSequence(); // 428
	CModel::GetActivityToSequenceMapping(); // 185
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <04D78BBE> modellib/animation.cpp:188
// variables: 5
// function calls: 5
bool IsSequenceValidForActivityAndModifiers(const CModel* pModel, HSequence hSequence, Activity activity, const CUtlSymbol* pActivityModifiers, int iModifierCount)
{
	const char   __FUNCTION__; // 54180
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 190
	}
	{
		const Activity  seqActivity; // 200
		const ISequence* pSeqDesc; // 207
		const int  nSeqModifierCount; // 208
		HSequence::operator==(
				const HSequence& other);  // 213
	}
	HSequence::operator==(
			const HSequence& other);  // 192
	HSequence::operator==(
			const HSequence& other);  // 196
	CModel::InitActivityToSequence(); // 428
	CModel::GetActivityToSequenceMapping(); // 217
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <0212F042> modellib/animation.cpp:188
// variables: 5
// function calls: 5
bool IsSequenceValidForActivityAndModifiers(const CModel* pModel, HSequence hSequence, Activity activity, const CUtlSymbol* pActivityModifiers, int iModifierCount)
{
	const char   __FUNCTION__; // 1821
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 190
	}
	{
		const Activity  seqActivity; // 200
		const ISequence* pSeqDesc; // 207
		const int  nSeqModifierCount; // 208
		HSequence::operator==(
				const HSequence& other);  // 213
	}
	HSequence::operator==(
			const HSequence& other);  // 192
	HSequence::operator==(
			const HSequence& other);  // 196
	CModel::InitActivityToSequence(); // 428
	CModel::GetActivityToSequenceMapping(); // 217
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <00C9B7FF> modellib/animation.cpp:188
// variables: 5
// function calls: 5
bool IsSequenceValidForActivityAndModifiers(const CModel* pModel, HSequence hSequence, Activity activity, const CUtlSymbol* pActivityModifiers, int iModifierCount)
{
	const char   __FUNCTION__; // 3146
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 190
	}
	{
		const Activity  seqActivity; // 200
		const ISequence* pSeqDesc; // 207
		const int  nSeqModifierCount; // 208
		HSequence::operator==(
				const HSequence& other);  // 213
	}
	HSequence::operator==(
			const HSequence& other);  // 192
	HSequence::operator==(
			const HSequence& other);  // 196
	CModel::InitActivityToSequence(); // 428
	CModel::GetActivityToSequenceMapping(); // 217
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <04D76C61> modellib/animation.cpp:226
// variables: 28
// function calls: 95
void CActivityToSequenceMapping::Initialize()
{
	const char   __FUNCTION__; // 53519
	bool bFoundOne; // 245
	int sequenceCount; // 287
	int topActivity; // 288
	SequenceTuple* tupleList; // 303
	unsigned int allocsize; // 314
	int* seqsPerAct; // 316
	unsigned int chkSequenceCount; // 352
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 234
	}
	{
		HSequence hSequence; // 248
		{
			const ISequence* pSeqDesc; // 250
			{
				HashValueType entry; // 263
				UtlHashHandle_t handle; // 264
				{
					HashValueType* toUpdate; // 268
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 271
					}
					CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::operator[](
							int i);  // 602
					Element(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int this,
						int i);  // 383
					Element(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivity this,
						UtlHashHandle_t handle);  // 268
				}
				HashInt(const int key); // 80
				HashFuncs::operator(
						const HashValueType& item);  // 239
				{
					int bucketCount; // 249
					Count(const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this); // 249
				}
				operator[](const CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashV this,
						int i);  // 595
				operator[](const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this,
						int i);  // 254
				Count(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTyp this); // 255
				CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::operator[](
						int i);  // 609
				Element(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTyp this,
					int i);  // 258
				HashFuncs::operator(
						const HashValueType& lhs,
						const HashValueType& rhs);  // 258
				DoFind(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
					const HashValueType& src,
					unsigned int* pBucket,
					int* pIndex);  // 278
				{
				}
				{
				}
				BuildHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
						int ndxBucket,
						int ndxKeyData);  // 280
				Find(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
					const HashValueType& src);  // 264
				HashValueType::HashValueType(
						int _actIdx,
						int _stIdx,
						int _ct,
						int _tW);  // 263
				GetBucketIndex(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
						UtlHashHandle_t handle);  // 155
				GetKeyDataIndex(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
						UtlHashHandle_t handle);  // 156
				Count(const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this); // 162
				operator[](const CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashV this,
						int i);  // 595
				operator[](const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this,
						int i);  // 164
				Count(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTyp this); // 164
				IsValidHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
						UtlHashHandle_t handle);  // 265
				HashInt(const int key); // 80
				HashFuncs::operator(
						const HashValueType& item);  // 239
				{
					int bucketCount; // 249
					Count(const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this); // 249
				}
				operator[](const CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashV this,
						int i);  // 595
				operator[](const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this,
						int i);  // 254
				Count(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTyp this); // 255
				CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::operator[](
						int i);  // 609
				Element(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTyp this,
					int i);  // 258
				HashFuncs::operator(
						const HashValueType& lhs,
						const HashValueType& rhs);  // 258
				DoFind(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
					const HashValueType& src,
					unsigned int* pBucket,
					int* pIndex);  // 294
				{
				}
				{
				}
				BuildHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
						int ndxBucket,
						int ndxKeyData);  // 296
				CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::NumAllocated(); // 1196
				CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::operator[](
						int i);  // 602
				Element(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int this,
					int i);  // 1201
				CopyConstruct<CActivityToSequenceMapping::HashValueType>(HashValueType* pMemory,
											const HashValueType& src);  // 1201
				CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::Base(); // 112
				Base(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int this); // 368
				ResetDbgInfo(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int this); // 824
				GrowMemory(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int this,
						int num);  // 1198
				AddToTail(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int this,
						const HashValueType& src);  // 299
				{
				}
				{
				}
				BuildHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
						int ndxBucket,
						int ndxKeyData);  // 301
				Insert(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivity this,
					const HashValueType& src);  // 276
			}
		}
		HSequence::operator==(
				const HSequence& other);  // 248
	}
	{
		UtlHashHandle_t handle; // 289
		{
			HashValueType& element; // 293
			CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int this,
				int i);  // 406
			operator[](const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivity this,
					UtlHashHandle_t handle);  // 293
		}
		Count(const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this); // 437
		operator[](const CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashV this,
				int i);  // 595
		operator[](const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this,
				int i);  // 440
		Count(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTyp this); // 440
		{
		}
		BuildHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
				int ndxBucket,
				int ndxKeyData);  // 441
		GetNextHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
				UtlHashHandle_t handle);  // 426
		GetFirstHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this); // 289
		GetBucketIndex(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
				UtlHashHandle_t handle);  // 155
		GetKeyDataIndex(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
				UtlHashHandle_t handle);  // 156
		Count(const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this); // 162
		operator[](const CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashV this,
				int i);  // 595
		operator[](const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this,
				int i);  // 164
		Count(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTyp this); // 164
		IsValidHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
				UtlHashHandle_t handle);  // 290
		GetBucketIndex(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
				UtlHashHandle_t handle);  // 434
		Count(const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this); // 437
		GetKeyDataIndex(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
				UtlHashHandle_t handle);  // 435
		operator[](const CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashV this,
				int i);  // 595
		operator[](const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this,
				int i);  // 440
		Count(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTyp this); // 440
		{
		}
		BuildHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
				int ndxBucket,
				int ndxKeyData);  // 441
		GetNextHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
				UtlHashHandle_t handle);  // 291
	}
	{
		HSequence hSequence; // 321
		{
			const ISequence* pSeqDesc; // 323
			int nActivity; // 324
			{
				const HashValueType& element; // 327
				int tupleOffset; // 331
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 332
				}
				HashValueType::HashValueType(
						int _actIdx,
						int _stIdx,
						int _ct,
						int _tW);  // 327
				HashInt(const int key); // 80
				HashFuncs::operator(
						const HashValueType& item);  // 239
				{
					int bucketCount; // 249
					Count(const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this); // 249
				}
				operator[](const CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashV this,
						int i);  // 595
				operator[](const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this,
						int i);  // 254
				Count(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTyp this); // 255
				CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::operator[](
						int i);  // 609
				Element(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTyp this,
					int i);  // 258
				HashFuncs::operator(
						const HashValueType& lhs,
						const HashValueType& rhs);  // 258
				DoFind(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
					const HashValueType& src,
					unsigned int* pBucket,
					int* pIndex);  // 278
				{
				}
				{
				}
				BuildHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
						int ndxBucket,
						int ndxKeyData);  // 280
				Find(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
					const HashValueType& src);  // 327
				GetBucketIndex(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
						UtlHashHandle_t handle);  // 403
				operator[](const CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTy this,
						int i);  // 588
				operator[](const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashVal this,
						int i);  // 406
				CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::operator[](
						int i);  // 602
				Element(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int this,
					int i);  // 406
				operator[](const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivity this,
						UtlHashHandle_t handle);  // 327
			}
		}
		HSequence::operator==(
				const HSequence& other);  // 321
	}
	{
		int j; // 353
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 357
	}
	HSequence::operator==(
			const HSequence& other);  // 240
	HSequence::HSequence(); // 26
	SequenceTuple::SequenceTuple(); // 303
	memset(void* __dest,
		int __ch,
		size_t __len);  // 317
} /* size: 0, variables: 8, inline expansions: 4 (25 bytes) */

// <0212D0E5> modellib/animation.cpp:226
// variables: 28
// function calls: 95
void CActivityToSequenceMapping::Initialize()
{
	const char   __FUNCTION__; // 1160
	bool bFoundOne; // 245
	int sequenceCount; // 287
	int topActivity; // 288
	SequenceTuple* tupleList; // 303
	unsigned int allocsize; // 314
	int* seqsPerAct; // 316
	unsigned int chkSequenceCount; // 352
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 234
	}
	{
		HSequence hSequence; // 248
		{
			const ISequence* pSeqDesc; // 250
			{
				HashValueType entry; // 263
				UtlHashHandle_t handle; // 264
				{
					HashValueType* toUpdate; // 268
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 271
					}
					CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::operator[](
							int i);  // 602
					Element(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int this,
						int i);  // 383
					Element(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivity this,
						UtlHashHandle_t handle);  // 268
				}
				HashInt(const int key); // 80
				HashFuncs::operator(
						const HashValueType& item);  // 239
				{
					int bucketCount; // 249
					Count(const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this); // 249
				}
				operator[](const CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashV this,
						int i);  // 595
				operator[](const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this,
						int i);  // 254
				Count(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTyp this); // 255
				CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::operator[](
						int i);  // 609
				Element(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTyp this,
					int i);  // 258
				HashFuncs::operator(
						const HashValueType& lhs,
						const HashValueType& rhs);  // 258
				DoFind(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
					const HashValueType& src,
					unsigned int* pBucket,
					int* pIndex);  // 278
				{
				}
				{
				}
				BuildHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
						int ndxBucket,
						int ndxKeyData);  // 280
				Find(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
					const HashValueType& src);  // 264
				HashValueType::HashValueType(
						int _actIdx,
						int _stIdx,
						int _ct,
						int _tW);  // 263
				GetBucketIndex(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
						UtlHashHandle_t handle);  // 155
				GetKeyDataIndex(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
						UtlHashHandle_t handle);  // 156
				Count(const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this); // 162
				operator[](const CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashV this,
						int i);  // 595
				operator[](const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this,
						int i);  // 164
				Count(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTyp this); // 164
				IsValidHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
						UtlHashHandle_t handle);  // 265
				HashInt(const int key); // 80
				HashFuncs::operator(
						const HashValueType& item);  // 239
				{
					int bucketCount; // 249
					Count(const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this); // 249
				}
				operator[](const CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashV this,
						int i);  // 595
				operator[](const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this,
						int i);  // 254
				Count(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTyp this); // 255
				CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::operator[](
						int i);  // 609
				Element(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTyp this,
					int i);  // 258
				HashFuncs::operator(
						const HashValueType& lhs,
						const HashValueType& rhs);  // 258
				DoFind(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
					const HashValueType& src,
					unsigned int* pBucket,
					int* pIndex);  // 294
				{
				}
				{
				}
				BuildHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
						int ndxBucket,
						int ndxKeyData);  // 296
				CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::NumAllocated(); // 1196
				CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::operator[](
						int i);  // 602
				Element(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int this,
					int i);  // 1201
				CopyConstruct<CActivityToSequenceMapping::HashValueType>(HashValueType* pMemory,
											const HashValueType& src);  // 1201
				CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::Base(); // 112
				Base(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int this); // 368
				ResetDbgInfo(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int this); // 824
				GrowMemory(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int this,
						int num);  // 1198
				AddToTail(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int this,
						const HashValueType& src);  // 299
				{
				}
				{
				}
				BuildHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
						int ndxBucket,
						int ndxKeyData);  // 301
				Insert(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivity this,
					const HashValueType& src);  // 276
			}
		}
		HSequence::operator==(
				const HSequence& other);  // 248
	}
	{
		UtlHashHandle_t handle; // 289
		{
			HashValueType& element; // 293
			CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int this,
				int i);  // 406
			operator[](const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivity this,
					UtlHashHandle_t handle);  // 293
		}
		Count(const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this); // 437
		operator[](const CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashV this,
				int i);  // 595
		operator[](const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this,
				int i);  // 440
		Count(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTyp this); // 440
		{
		}
		BuildHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
				int ndxBucket,
				int ndxKeyData);  // 441
		GetNextHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
				UtlHashHandle_t handle);  // 426
		GetFirstHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this); // 289
		GetBucketIndex(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
				UtlHashHandle_t handle);  // 155
		GetKeyDataIndex(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
				UtlHashHandle_t handle);  // 156
		Count(const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this); // 162
		operator[](const CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashV this,
				int i);  // 595
		operator[](const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this,
				int i);  // 164
		Count(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTyp this); // 164
		IsValidHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
				UtlHashHandle_t handle);  // 290
		GetBucketIndex(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
				UtlHashHandle_t handle);  // 434
		Count(const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this); // 437
		GetKeyDataIndex(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
				UtlHashHandle_t handle);  // 435
		operator[](const CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashV this,
				int i);  // 595
		operator[](const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this,
				int i);  // 440
		Count(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTyp this); // 440
		{
		}
		BuildHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
				int ndxBucket,
				int ndxKeyData);  // 441
		GetNextHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
				UtlHashHandle_t handle);  // 291
	}
	{
		HSequence hSequence; // 321
		{
			const ISequence* pSeqDesc; // 323
			int nActivity; // 324
			{
				const HashValueType& element; // 327
				int tupleOffset; // 331
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 332
				}
				HashValueType::HashValueType(
						int _actIdx,
						int _stIdx,
						int _ct,
						int _tW);  // 327
				HashInt(const int key); // 80
				HashFuncs::operator(
						const HashValueType& item);  // 239
				{
					int bucketCount; // 249
					Count(const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this); // 249
				}
				operator[](const CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashV this,
						int i);  // 595
				operator[](const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this,
						int i);  // 254
				Count(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTyp this); // 255
				CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::operator[](
						int i);  // 609
				Element(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTyp this,
					int i);  // 258
				HashFuncs::operator(
						const HashValueType& lhs,
						const HashValueType& rhs);  // 258
				DoFind(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
					const HashValueType& src,
					unsigned int* pBucket,
					int* pIndex);  // 278
				{
				}
				{
				}
				BuildHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
						int ndxBucket,
						int ndxKeyData);  // 280
				Find(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
					const HashValueType& src);  // 327
				GetBucketIndex(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
						UtlHashHandle_t handle);  // 403
				operator[](const CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTy this,
						int i);  // 588
				operator[](const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashVal this,
						int i);  // 406
				CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::operator[](
						int i);  // 602
				Element(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int this,
					int i);  // 406
				operator[](const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivity this,
						UtlHashHandle_t handle);  // 327
			}
		}
		HSequence::operator==(
				const HSequence& other);  // 321
	}
	{
		int j; // 353
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 357
	}
	HSequence::operator==(
			const HSequence& other);  // 240
	HSequence::HSequence(); // 26
	SequenceTuple::SequenceTuple(); // 303
	memset(void* __dest,
		int __ch,
		size_t __len);  // 317
} /* size: 0, variables: 8, inline expansions: 4 (0 bytes) */

// <00C998A2> modellib/animation.cpp:226
// variables: 28
// function calls: 95
void CActivityToSequenceMapping::Initialize()
{
	const char   __FUNCTION__; // 2485
	bool bFoundOne; // 245
	int sequenceCount; // 287
	int topActivity; // 288
	SequenceTuple* tupleList; // 303
	unsigned int allocsize; // 314
	int* seqsPerAct; // 316
	unsigned int chkSequenceCount; // 352
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 234
	}
	{
		HSequence hSequence; // 248
		{
			const ISequence* pSeqDesc; // 250
			{
				HashValueType entry; // 263
				UtlHashHandle_t handle; // 264
				{
					HashValueType* toUpdate; // 268
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 271
					}
					CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::operator[](
							int i);  // 602
					Element(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int this,
						int i);  // 383
					Element(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivity this,
						UtlHashHandle_t handle);  // 268
				}
				HashInt(const int key); // 80
				HashFuncs::operator(
						const HashValueType& item);  // 239
				{
					int bucketCount; // 249
					Count(const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this); // 249
				}
				operator[](const CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashV this,
						int i);  // 595
				operator[](const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this,
						int i);  // 254
				Count(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTyp this); // 255
				CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::operator[](
						int i);  // 609
				Element(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTyp this,
					int i);  // 258
				HashFuncs::operator(
						const HashValueType& lhs,
						const HashValueType& rhs);  // 258
				DoFind(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
					const HashValueType& src,
					unsigned int* pBucket,
					int* pIndex);  // 278
				{
				}
				{
				}
				BuildHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
						int ndxBucket,
						int ndxKeyData);  // 280
				Find(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
					const HashValueType& src);  // 264
				HashValueType::HashValueType(
						int _actIdx,
						int _stIdx,
						int _ct,
						int _tW);  // 263
				GetBucketIndex(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
						UtlHashHandle_t handle);  // 155
				GetKeyDataIndex(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
						UtlHashHandle_t handle);  // 156
				Count(const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this); // 162
				operator[](const CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashV this,
						int i);  // 595
				operator[](const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this,
						int i);  // 164
				Count(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTyp this); // 164
				IsValidHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
						UtlHashHandle_t handle);  // 265
				HashInt(const int key); // 80
				HashFuncs::operator(
						const HashValueType& item);  // 239
				{
					int bucketCount; // 249
					Count(const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this); // 249
				}
				operator[](const CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashV this,
						int i);  // 595
				operator[](const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this,
						int i);  // 254
				Count(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTyp this); // 255
				CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::operator[](
						int i);  // 609
				Element(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTyp this,
					int i);  // 258
				HashFuncs::operator(
						const HashValueType& lhs,
						const HashValueType& rhs);  // 258
				DoFind(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
					const HashValueType& src,
					unsigned int* pBucket,
					int* pIndex);  // 294
				{
				}
				{
				}
				BuildHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
						int ndxBucket,
						int ndxKeyData);  // 296
				CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::NumAllocated(); // 1196
				CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::operator[](
						int i);  // 602
				Element(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int this,
					int i);  // 1201
				CopyConstruct<CActivityToSequenceMapping::HashValueType>(HashValueType* pMemory,
											const HashValueType& src);  // 1201
				CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::Base(); // 112
				Base(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int this); // 368
				ResetDbgInfo(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int this); // 824
				GrowMemory(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int this,
						int num);  // 1198
				AddToTail(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int this,
						const HashValueType& src);  // 299
				{
				}
				{
				}
				BuildHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
						int ndxBucket,
						int ndxKeyData);  // 301
				Insert(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivity this,
					const HashValueType& src);  // 276
			}
		}
		HSequence::operator==(
				const HSequence& other);  // 248
	}
	{
		UtlHashHandle_t handle; // 289
		{
			HashValueType& element; // 293
			CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int this,
				int i);  // 406
			operator[](const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivity this,
					UtlHashHandle_t handle);  // 293
		}
		Count(const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this); // 437
		operator[](const CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashV this,
				int i);  // 595
		operator[](const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this,
				int i);  // 440
		Count(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTyp this); // 440
		{
		}
		BuildHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
				int ndxBucket,
				int ndxKeyData);  // 441
		GetNextHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
				UtlHashHandle_t handle);  // 426
		GetFirstHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this); // 289
		GetBucketIndex(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
				UtlHashHandle_t handle);  // 155
		GetKeyDataIndex(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
				UtlHashHandle_t handle);  // 156
		Count(const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this); // 162
		operator[](const CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashV this,
				int i);  // 595
		operator[](const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this,
				int i);  // 164
		Count(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTyp this); // 164
		IsValidHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
				UtlHashHandle_t handle);  // 290
		GetBucketIndex(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
				UtlHashHandle_t handle);  // 434
		Count(const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this); // 437
		GetKeyDataIndex(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
				UtlHashHandle_t handle);  // 435
		operator[](const CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashV this,
				int i);  // 595
		operator[](const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this,
				int i);  // 440
		Count(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTyp this); // 440
		{
		}
		BuildHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
				int ndxBucket,
				int ndxKeyData);  // 441
		GetNextHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
				UtlHashHandle_t handle);  // 291
	}
	{
		HSequence hSequence; // 321
		{
			const ISequence* pSeqDesc; // 323
			int nActivity; // 324
			{
				const HashValueType& element; // 327
				int tupleOffset; // 331
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 332
				}
				HashValueType::HashValueType(
						int _actIdx,
						int _stIdx,
						int _ct,
						int _tW);  // 327
				HashInt(const int key); // 80
				HashFuncs::operator(
						const HashValueType& item);  // 239
				{
					int bucketCount; // 249
					Count(const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this); // 249
				}
				operator[](const CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashV this,
						int i);  // 595
				operator[](const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this,
						int i);  // 254
				Count(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTyp this); // 255
				CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::operator[](
						int i);  // 609
				Element(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTyp this,
					int i);  // 258
				HashFuncs::operator(
						const HashValueType& lhs,
						const HashValueType& rhs);  // 258
				DoFind(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
					const HashValueType& src,
					unsigned int* pBucket,
					int* pIndex);  // 278
				{
				}
				{
				}
				BuildHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
						int ndxBucket,
						int ndxKeyData);  // 280
				Find(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
					const HashValueType& src);  // 327
				GetBucketIndex(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
						UtlHashHandle_t handle);  // 403
				operator[](const CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTy this,
						int i);  // 588
				operator[](const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashVal this,
						int i);  // 406
				CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::operator[](
						int i);  // 602
				Element(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int this,
					int i);  // 406
				operator[](const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivity this,
						UtlHashHandle_t handle);  // 327
			}
		}
		HSequence::operator==(
				const HSequence& other);  // 321
	}
	{
		int j; // 353
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 357
	}
	HSequence::operator==(
			const HSequence& other);  // 240
	HSequence::HSequence(); // 26
	SequenceTuple::SequenceTuple(); // 303
	memset(void* __dest,
		int __ch,
		size_t __len);  // 317
} /* size: 0, variables: 8, inline expansions: 4 (0 bytes) */

// <04D7651C> modellib/animation.cpp:365
// variables: 5
// function calls: 23
void CActivityToSequenceMapping::GetSequences(Activity forActivity, int* outSequenceCount, int* outTotalWeight)
{
	HashValueType entry; // 369
	UtlHashHandle_t handle; // 370
	{
		const HashValueType& element; // 374
		const SequenceTuple* retval; // 375
		CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int this,
			int i);  // 406
		operator[](const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivity this,
				UtlHashHandle_t handle);  // 374
	}
	HashInt(const int key); // 80
	HashFuncs::operator(
			const HashValueType& item);  // 239
	{
		int bucketCount; // 249
		Count(const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this); // 249
	}
	operator[](const CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashV this,
			int i);  // 595
	operator[](const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this,
			int i);  // 254
	Count(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTyp this); // 255
	CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::operator[](
			int i);  // 609
	Element(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTyp this,
		int i);  // 258
	HashFuncs::operator(
			const HashValueType& lhs,
			const HashValueType& rhs);  // 258
	DoFind(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
		const HashValueType& src,
		unsigned int* pBucket,
		int* pIndex);  // 278
	{
	}
	{
	}
	BuildHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
			int ndxBucket,
			int ndxKeyData);  // 280
	Find(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
		const HashValueType& src);  // 370
	HashValueType::HashValueType(
			int _actIdx,
			int _stIdx,
			int _ct,
			int _tW);  // 369
	GetBucketIndex(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
			UtlHashHandle_t handle);  // 155
	GetKeyDataIndex(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
			UtlHashHandle_t handle);  // 156
	Count(const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this); // 162
	operator[](const CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashV this,
			int i);  // 595
	operator[](const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this,
			int i);  // 164
	Count(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTyp this); // 164
	IsValidHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
			UtlHashHandle_t handle);  // 372
} /* size: 0, variables: 2, inline expansions: 19 (0 bytes) */

// <04D75E25> modellib/animation.cpp:389
// variables: 3
// function calls: 23
void CActivityToSequenceMapping::NumSequencesForActivity(Activity forActivity)
{
	HashValueType entry; // 397
	UtlHashHandle_t handle; // 398
	HashValueType::HashValueType(
			int _actIdx,
			int _stIdx,
			int _ct,
			int _tW);  // 397
	HashInt(const int key); // 80
	HashFuncs::operator(
			const HashValueType& item);  // 239
	{
		int bucketCount; // 249
		Count(const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this); // 249
	}
	operator[](const CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashV this,
			int i);  // 595
	operator[](const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this,
			int i);  // 254
	Count(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTyp this); // 255
	CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::operator[](
			int i);  // 609
	Element(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTyp this,
		int i);  // 258
	HashFuncs::operator(
			const HashValueType& lhs,
			const HashValueType& rhs);  // 258
	DoFind(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
		const HashValueType& src,
		unsigned int* pBucket,
		int* pIndex);  // 278
	{
	}
	{
	}
	BuildHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
			int ndxBucket,
			int ndxKeyData);  // 280
	Find(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
		const HashValueType& src);  // 398
	GetBucketIndex(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
			UtlHashHandle_t handle);  // 155
	GetKeyDataIndex(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
			UtlHashHandle_t handle);  // 156
	Count(const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this); // 162
	operator[](const CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashV this,
			int i);  // 595
	operator[](const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this,
			int i);  // 164
	Count(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTyp this); // 164
	IsValidHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
			UtlHashHandle_t handle);  // 399
	CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int this,
		int i);  // 406
	operator[](const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivity this,
			UtlHashHandle_t handle);  // 401
} /* size: 0, variables: 2, inline expansions: 22 (0 bytes) */

// <04D755B2> modellib/animation.cpp:409
// variables: 4
// function calls: 31
void CActivityToSequenceMapping::GetActivitiesForSequence(HSequence hSequence, CUtlVector<int, CUtlMemory<int, int> >* pVecActivities)
{
	{
		UtlHashHandle_t h; // 411
		{
			const HashValueType& element; // 413
			const SequenceTuple* pSequenceTuple; // 414
			{
				int i; // 415
				HSequence::operator==(
						const HSequence& other);  // 417
				CUtlMemory<int, int>::NumAllocated(); // 1196
				CUtlMemory<int, int>::operator[](
						int i);  // 602
				CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
					int i);  // 1201
				CopyConstruct<int>(int* pMemory,
							const int& src);  // 1201
				CUtlMemory<int, int>::Base(); // 112
				CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
				CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
				CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
						int num);  // 1198
				CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
						const int& src);  // 419
			}
			GetBucketIndex(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
					UtlHashHandle_t handle);  // 403
			operator[](const CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTy this,
					int i);  // 588
			operator[](const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashVal this,
					int i);  // 406
			CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int this,
				int i);  // 406
			operator[](const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivity this,
					UtlHashHandle_t handle);  // 413
		}
		Count(const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this); // 437
		operator[](const CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashV this,
				int i);  // 595
		operator[](const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this,
				int i);  // 440
		Count(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTyp this); // 440
		{
		}
		BuildHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
				int ndxBucket,
				int ndxKeyData);  // 441
		GetNextHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
				UtlHashHandle_t handle);  // 426
		GetFirstHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this); // 411
		Count(const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this); // 437
		GetBucketIndex(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
				UtlHashHandle_t handle);  // 434
		GetKeyDataIndex(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
				UtlHashHandle_t handle);  // 435
		operator[](const CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashV this,
				int i);  // 595
		operator[](const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this,
				int i);  // 440
		Count(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTyp this); // 440
		{
		}
		BuildHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
				int ndxBucket,
				int ndxKeyData);  // 441
		GetNextHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
				UtlHashHandle_t handle);  // 411
	}
} /* size: 0 */

// <04D7D9A7> modellib/animation.cpp:426
// function call: 1
void CModel::GetActivityToSequenceMapping()
{
	CModel::InitActivityToSequence(); // 428
} /* size: 0, inline expansions: 1 (0 bytes) */

// <04D75599> modellib/animation.cpp:426
void CModel::GetActivityToSequenceMapping()
{
} /* size: 0 */

// <04D7D968> modellib/animation.cpp:432
void CModel::InitActivityToSequence()
{
} /* size: 0 */

// <04D7D211> modellib/animation.cpp:432
// variables: 2
// function calls: 31
void CModel::InitActivityToSequence()
{
	{
		int ndxBucket; // 116
		RemoveMultipleFromTail(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int this,
					int num);  // 1323
		CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::NumAllocated(); // 782
		CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::Base(); // 112
		Base(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int this); // 368
		ResetDbgInfo(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int this); // 824
		GrowMemory(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int this,
				int num);  // 784
		GrowVector(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int this,
				int num);  // 1445
		{
			int i; // 1451
			CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::operator[](
					int i);  // 602
			Element(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int this,
				int i);  // 1453
			{
				{
				}
			}
			HashValueType::HashValueType(); // 1479
			Construct<CActivityToSequenceMapping::HashValueType>(HashValueType* pMemory); // 1453
		}
		InsertMultipleBefore(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int this,
					int elem,
					int num);  // 1437
		InsertMultipleBefore(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int this,
					int elem,
					int num);  // 1294
		AddMultipleToTail(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int this,
					int num);  // 1319
		SetCount(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int this,
			int count);  // 118
		operator[](const CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTy this,
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashVal this,
				int i);  // 119
		CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::SetGrowSize(
				int nSize);  // 318
		SetGrowSize(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int this,
				int size);  // 119
		operator[](const CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTy this,
				int i);  // 588
		operator[](const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashVal this,
				int i);  // 118
	}
	IsPowerOfTwo(int value); // 124
	ValidateGrowSize(const CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTy this); // 475
	CUtlMemory(const CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTy this,
			int nGrowSize,
			int nInitAllocationCount);  // 527
	ResetDbgInfo(const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashVal this); // 530
	CUtlVectorBase(const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashVal this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector(const CUtlVector<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTy this); // 112
	CUtlHash(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivity this,
		int bucketCount,
		int growCount,
		int initCount,
		CompareFunc_t compareFunc,
		KeyFunc_t keyFunc);  // 91
	HashFuncs::HashFuncs(
			int);  // 46
	HashFuncs::HashFuncs(
			int);  // 46
	CActivityToSequenceMapping::CActivityToSequenceMapping(
					const CModel* pstudiohdr);  // 436
} /* size: 0, inline expansions: 10 (585 bytes) */

// <04D75423> modellib/animation.cpp:441
// variables: 4
// function call: 1
void CActivityToSequenceMapping::GetSequenceVariantForActivity(HSequence hSequence, Activity activity)
{
	int iSequenceCount; // 443
	int iSequenceWeight; // 444
	const SequenceTuple* pSequenceTuple; // 445
	{
		int i; // 449
		HSequence::operator==(
				const HSequence& other);  // 451
	}
} /* size: 0, variables: 3 */

// <04D7531E> modellib/animation.cpp:463
// variables: 3
// function call: 1
void CActivityToSequenceMapping::GetSequenceByVariantForActivity(int iSequenceVariantIndex, Activity activity)
{
	int iSequenceCount; // 465
	int iSequenceWeight; // 466
	const SequenceTuple* pSequenceTuple; // 467
	Clamp<int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 472
} /* size: 0, variables: 3, inline expansions: 1 (0 bytes) */

// <04D749AA> modellib/animation.cpp:483
// variables: 11
// function calls: 26
void CActivityToSequenceMapping::SelectWeightedSequence(Activity activity, HSequence hCurSequence)
{
	const char   __FUNCTION__; // 53808
	HashValueType dummy; // 514
	UtlHashHandle_t handle; // 515
	const HashValueType* actData; // 520
	int weighttotal; // 522
	int randomValue; // 525
	SequenceTuple* sequenceInfo; // 553
	const SequenceTuple* stopHere; // 555
	{
		const ISequence* pSeqDesc; // 488
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 496
	}
	HSequence::operator==(
			const HSequence& other);  // 485
	HSequence::operator==(
			const HSequence& other);  // 494
	HashValueType::HashValueType(
			int _actIdx,
			int _stIdx,
			int _ct,
			int _tW);  // 514
	HashInt(const int key); // 80
	HashFuncs::operator(
			const HashValueType& item);  // 239
	{
		int bucketCount; // 249
		Count(const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this); // 249
	}
	operator[](const CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashV this,
			int i);  // 595
	operator[](const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this,
			int i);  // 254
	Count(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTyp this); // 255
	CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::operator[](
			int i);  // 609
	Element(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTyp this,
		int i);  // 258
	HashFuncs::operator(
			const HashValueType& lhs,
			const HashValueType& rhs);  // 258
	DoFind(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
		const HashValueType& src,
		unsigned int* pBucket,
		int* pIndex);  // 278
	{
	}
	{
	}
	BuildHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
			int ndxBucket,
			int ndxKeyData);  // 280
	Find(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
		const HashValueType& src);  // 515
	GetBucketIndex(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
			UtlHashHandle_t handle);  // 155
	GetKeyDataIndex(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
			UtlHashHandle_t handle);  // 156
	Count(const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this); // 162
	operator[](const CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashV this,
			int i);  // 595
	operator[](const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this,
			int i);  // 164
	Count(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTyp this); // 164
	IsValidHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
			UtlHashHandle_t handle);  // 516
	CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int this,
		int i);  // 406
	operator[](const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivity this,
			UtlHashHandle_t handle);  // 520
	{
	}
	ActivityList_NameForIndex(Activity iActivity); // 528
} /* size: 0, variables: 8, inline expansions: 25 (851 bytes) */

// <0212AE2E> modellib/animation.cpp:483
// variables: 11
// function calls: 26
void CActivityToSequenceMapping::SelectWeightedSequence(Activity activity, HSequence hCurSequence)
{
	const char   __FUNCTION__; // 1449
	HashValueType dummy; // 514
	UtlHashHandle_t handle; // 515
	const HashValueType* actData; // 520
	int weighttotal; // 522
	int randomValue; // 525
	SequenceTuple* sequenceInfo; // 553
	const SequenceTuple* stopHere; // 555
	{
		const ISequence* pSeqDesc; // 488
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 496
	}
	HSequence::operator==(
			const HSequence& other);  // 485
	HSequence::operator==(
			const HSequence& other);  // 494
	HashValueType::HashValueType(
			int _actIdx,
			int _stIdx,
			int _ct,
			int _tW);  // 514
	HashInt(const int key); // 80
	HashFuncs::operator(
			const HashValueType& item);  // 239
	{
		int bucketCount; // 249
		Count(const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this); // 249
	}
	operator[](const CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashV this,
			int i);  // 595
	operator[](const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this,
			int i);  // 254
	Count(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTyp this); // 255
	CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::operator[](
			int i);  // 609
	Element(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTyp this,
		int i);  // 258
	HashFuncs::operator(
			const HashValueType& lhs,
			const HashValueType& rhs);  // 258
	DoFind(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
		const HashValueType& src,
		unsigned int* pBucket,
		int* pIndex);  // 278
	{
	}
	{
	}
	BuildHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
			int ndxBucket,
			int ndxKeyData);  // 280
	Find(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
		const HashValueType& src);  // 515
	GetBucketIndex(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
			UtlHashHandle_t handle);  // 155
	GetKeyDataIndex(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
			UtlHashHandle_t handle);  // 156
	Count(const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this); // 162
	operator[](const CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashV this,
			int i);  // 595
	operator[](const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this,
			int i);  // 164
	Count(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTyp this); // 164
	IsValidHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
			UtlHashHandle_t handle);  // 516
	CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int this,
		int i);  // 406
	operator[](const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivity this,
			UtlHashHandle_t handle);  // 520
	{
	}
	ActivityList_NameForIndex(Activity iActivity); // 528
} /* size: 0, variables: 8, inline expansions: 25 (0 bytes) */

// <00C975EB> modellib/animation.cpp:483
// variables: 11
// function calls: 26
void CActivityToSequenceMapping::SelectWeightedSequence(Activity activity, HSequence hCurSequence)
{
	const char   __FUNCTION__; // 2774
	HashValueType dummy; // 514
	UtlHashHandle_t handle; // 515
	const HashValueType* actData; // 520
	int weighttotal; // 522
	int randomValue; // 525
	SequenceTuple* sequenceInfo; // 553
	const SequenceTuple* stopHere; // 555
	{
		const ISequence* pSeqDesc; // 488
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 496
	}
	HSequence::operator==(
			const HSequence& other);  // 485
	HSequence::operator==(
			const HSequence& other);  // 494
	HashValueType::HashValueType(
			int _actIdx,
			int _stIdx,
			int _ct,
			int _tW);  // 514
	HashInt(const int key); // 80
	HashFuncs::operator(
			const HashValueType& item);  // 239
	{
		int bucketCount; // 249
		Count(const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this); // 249
	}
	operator[](const CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashV this,
			int i);  // 595
	operator[](const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this,
			int i);  // 254
	Count(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTyp this); // 255
	CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::operator[](
			int i);  // 609
	Element(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTyp this,
		int i);  // 258
	HashFuncs::operator(
			const HashValueType& lhs,
			const HashValueType& rhs);  // 258
	DoFind(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
		const HashValueType& src,
		unsigned int* pBucket,
		int* pIndex);  // 278
	{
	}
	{
	}
	BuildHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
			int ndxBucket,
			int ndxKeyData);  // 280
	Find(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
		const HashValueType& src);  // 515
	GetBucketIndex(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
			UtlHashHandle_t handle);  // 155
	GetKeyDataIndex(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
			UtlHashHandle_t handle);  // 156
	Count(const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this); // 162
	operator[](const CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashV this,
			int i);  // 595
	operator[](const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this,
			int i);  // 164
	Count(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTyp this); // 164
	IsValidHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
			UtlHashHandle_t handle);  // 516
	CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int this,
		int i);  // 406
	operator[](const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivity this,
			UtlHashHandle_t handle);  // 520
	{
	}
	ActivityList_NameForIndex(Activity iActivity); // 528
} /* size: 0, variables: 8, inline expansions: 25 (0 bytes) */

// <04D6F58C> modellib/animation.cpp:571
void CActivityModifierWeight::CActivityModifierWeight()
{
} /* size: 0 */

// <04D6F56F> modellib/animation.cpp:571
inline void CActivityModifierWeight::CActivityModifierWeight()
{
} /* size: 0 */

// <04D68118> modellib/animation.cpp:571
// member functions: 2
// member variables: 2
// class size: 8
class CActivityModifierWeight {
	CUtlSymbol m_symbol; /* 0 2 */
	int m_iWeight; /* 4 4 */
	void CActivityModifierWeight(CActivityModifierWeight* );
	void CActivityModifierWeight(class CActivityModifierWeight *); /* linkage=_ZN23CActivityModifierWeightC4Ev */
};

// <04D7491B> modellib/animation.cpp:583
// variable: 1
CUtlSymbol LookupActivityModifier(const char* pModifierName)
{
	CUtlSymbol sym; // 585
} /* size: 0, variables: 1 */

// <04D7488C> modellib/animation.cpp:589
// variable: 1
CUtlSymbol FindOrAddActivityModifier(const char* pModifierName)
{
	CUtlSymbol sym; // 591
} /* size: 0, variables: 1 */

// <04D747E3> modellib/animation.cpp:595
// function call: 1
const char* GetActivityModifierName(CUtlSymbol modifier)
{
	CUtlSymbol::CUtlSymbol(
			const CUtlSymbol& sym);  // 597
} /* size: 0, inline expansions: 1 (0 bytes) */

// <04D7424F> modellib/animation.cpp:600
// variables: 4
// function calls: 18
void CalculateActivityModifierWeights(void)
{
	bool s_bHasAttemptedToLoadFile; // 602
	KeyValues kvWeights; // 607
	KeyValues* pkvWeight; // 616
	{
		CActivityModifierWeight* element; // 620
		CUtlMemory<CActivityModifierWeight, int>::Base(); // 112
		CUtlVectorBase<CActivityModifierWeight, CUtlMemory<CActivityModifierWeight, int> >::Base(); // 368
		CUtlVectorBase<CActivityModifierWeight, CUtlMemory<CActivityModifierWeight, int> >::ResetDbgInfo(); // 824
		CUtlMemory<CActivityModifierWeight, int>::IsGrowable(); // 823
		CUtlMemory<CActivityModifierWeight, int>::IsExternallyAllocated(); // 859
		CUtlMemory<CActivityModifierWeight, int>::IsExternallyAllocated(); // 861
		CUtlMemory<CActivityModifierWeight, int>::Grow(
			int num);  // 806
		CUtlVectorBase<CActivityModifierWeight, CUtlMemory<CActivityModifierWeight, int> >::GrowMemory(
				int num);  // 1145
		CUtlMemory<CActivityModifierWeight, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CActivityModifierWeight, CUtlMemory<CActivityModifierWeight, int> >::Element(
			int i);  // 1148
		CUtlSymbol::CUtlSymbol(); // 571
		CActivityModifierWeight::CActivityModifierWeight(); // 1479
		Construct<CActivityModifierWeight>(CActivityModifierWeight* pMemory); // 1148
		CUtlMemory<CActivityModifierWeight, int>::NumAllocated(); // 1143
		CUtlVectorBase<CActivityModifierWeight, CUtlMemory<CActivityModifierWeight, int> >::AddToTail(); // 620
		CUtlMemory<CActivityModifierWeight, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CActivityModifierWeight, CUtlMemory<CActivityModifierWeight, int> >::Element(
			int i);  // 620
		CUtlSymbol::operator=(
				const CUtlSymbol& src);  // 622
	}
} /* size: 0, variables: 3 */

// <04D740C1> modellib/animation.cpp:632
// variables: 2
// function calls: 4
int FindActivityModifierWeight(const char* pModifierName)
{
	CUtlSymbol symbol; // 637
	{
		int i; // 638
		CUtlVectorBase<CActivityModifierWeight, CUtlMemory<CActivityModifierWeight, int> >::Count(); // 638
		CUtlSymbol::operator==(
				const CUtlSymbol& src);  // 640
		CUtlMemory<CActivityModifierWeight, int>::operator[](
				int i);  // 588
		CUtlVectorBase<CActivityModifierWeight, CUtlMemory<CActivityModifierWeight, int> >::operator[](
				int i);  // 640
	}
} /* size: 0, variables: 1 */

// <04D73577> modellib/animation.cpp:647
// variables: 15
// function calls: 34
void CActivityToSequenceMapping::BuildTopScoringSequencesForActivityAndModifiers(Activity activity, CUtlSymbolTable* pTable, const CUtlSymbol* pActivityModifiers, int iModifierCount, CUtlVector<int, CUtlMemory<int, int> >& topScoring, float& weighttotal)
{
	HashValueType dummy; // 667
	UtlHashHandle_t handle; // 668
	const HashValueType* actData; // 672
	int top_score; // 675
	{
		int i; // 676
		{
			SequenceTuple* sequenceInfo; // 678
			const ISequence* pSeqDesc; // 680
			int num_modifiers; // 683
			int score; // 685
			int iMatched; // 693
			{
				int m; // 696
				{
					int k; // 698
					{
						const char* pActivityname; // 701
						const char* pModifiername; // 702
						CUtlSymbol::CUtlSymbol(
								const CUtlSymbol& sym);  // 702
					}
				}
			}
			CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 726
			CUtlMemory<int, int>::NumAllocated(); // 1196
			CUtlMemory<int, int>::operator[](
					int i);  // 602
			CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
				int i);  // 1201
			CopyConstruct<int>(int* pMemory,
						const int& src);  // 1201
			CUtlMemory<int, int>::Base(); // 112
			CUtlVectorBase<int, CUtlMemory<int, int> >::Base(); // 368
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<int, CUtlMemory<int, int> >::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<int, CUtlMemory<int, int> >::AddToTail(
					const int& src);  // 733
		}
	}
	HashValueType::HashValueType(
			int _actIdx,
			int _stIdx,
			int _ct,
			int _tW);  // 667
	HashInt(const int key); // 80
	HashFuncs::operator(
			const HashValueType& item);  // 239
	{
		int bucketCount; // 249
		Count(const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this); // 249
	}
	operator[](const CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashV this,
			int i);  // 595
	operator[](const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this,
			int i);  // 254
	Count(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTyp this); // 255
	CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::operator[](
			int i);  // 609
	Element(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTyp this,
		int i);  // 258
	HashFuncs::operator(
			const HashValueType& lhs,
			const HashValueType& rhs);  // 258
	DoFind(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
		const HashValueType& src,
		unsigned int* pBucket,
		int* pIndex);  // 278
	{
	}
	{
	}
	BuildHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
			int ndxBucket,
			int ndxKeyData);  // 280
	Find(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
		const HashValueType& src);  // 668
	GetBucketIndex(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
			UtlHashHandle_t handle);  // 155
	GetKeyDataIndex(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
			UtlHashHandle_t handle);  // 156
	Count(const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this); // 162
	operator[](const CUtlMemory<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashV this,
			int i);  // 595
	operator[](const CUtlVectorBase<CUtlVector<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::H this,
			int i);  // 164
	Count(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueTyp this); // 164
	IsValidHandle(const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CAc this,
			UtlHashHandle_t handle);  // 669
	CUtlMemory<CActivityToSequenceMapping::HashValueType, int>::operator[](
			int i);  // 602
	Element(const CUtlVectorBase<CActivityToSequenceMapping::HashValueType, CUtlMemory<CActivityToSequenceMapping::HashValueType, int this,
		int i);  // 406
	operator[](const CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivity this,
			UtlHashHandle_t handle);  // 672
} /* size: 0, variables: 4, inline expansions: 22 (0 bytes) */

// <04D731A8> modellib/animation.cpp:741
// variables: 7
// function calls: 13
void CActivityToSequenceMapping::SelectWeightedSequenceFromModifiers(Activity activity, CUtlSymbolTable* pTable, const CUtlSymbol* pActivityModifiers, int iModifierCount)
{
	CUtlVector<int, CUtlMemory<int, int> > topScoring; // 743
	float weighttotal; // 744
	const HashValueType* actData; // 745
	int randomValue; // 752
	int actindex; // 766
	SequenceTuple* sequenceInfo; // 768
	const SequenceTuple* stopHere; // 769
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 743
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 781
} /* size: 0, variables: 7, inline expansions: 13 (0 bytes) */

// <04D72D8A> modellib/animation.cpp:783
// variables: 6
// function calls: 14
void CActivityToSequenceMapping::IsSequenceValidForActivityAndModifiers(HSequence hSequence, Activity activity, CUtlSymbolTable* pTable, const CUtlSymbol* pActivityModifiers, int iModifierCount)
{
	CUtlVector<int, CUtlMemory<int, int> > topScoring; // 785
	float weighttotal; // 786
	const HashValueType* actData; // 787
	int nCount; // 789
	{
		int i; // 790
		{
			const SequenceTuple* sequenceInfo; // 792
			HSequence::operator==(
					const HSequence& other);  // 793
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
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 785
	CUtlMemory<int, int>::Purge(); // 903
	CUtlMemory<int, int>::Purge(); // 1799
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 797
} /* size: 0, variables: 4, inline expansions: 13 (0 bytes) */

// <04D72C20> modellib/animation.cpp:799
// variables: 5
// function call: 1
HSequence SelectHeaviestSequence(const CModel* pModel, Activity activity)
{
	int maxweight; // 804
	HSequence hResult; // 805
	int weight; // 806
	{
		HSequence hSequence; // 807
		{
			Activity curActivity; // 809
		}
		HSequence::operator==(
				const HSequence& other);  // 807
	}
} /* size: 0, variables: 3 */

// <04D72B56> modellib/animation.cpp:823
// function call: 1
void GetEyePosition(const CModel* pstudiohdr, Vector& vecEyePosition)
{
	Vector::operator=(
			const Vector& vOther);  // 831
} /* size: 0, inline expansions: 1 (0 bytes) */

// <04D72B05> modellib/animation.cpp:840
// variables: 2
Activity LookupActivity(const CModel* pModel, const char* label)
{
	{
		HSequence hSequence; // 847
		{
			const ISequence* pSeqDesc; // 849
		}
	}
} /* size: 0 */

// <02128E39> modellib/animation.cpp:872
// variables: 2
// function calls: 2
HSequence LookupSequence(const CModel* pModel, const char* label)
{
	HSequence hSequence; // 880
	Activity nActivity; // 887
	HSequence::operator==(
			const HSequence& other);  // 881
	LookupActivity(const CModel* pModel,
			const char* label);  // 887
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <04D7282C> modellib/animation.cpp:896
// variable: 1
// function calls: 2
void GetSequenceLinearMotion(const CModel* pModel, HSequence hSequence, const float* poseParameter, Vector* pVec)
{
	QAngle vecAngles; // 905
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 898
	QAngle::QAngle(); // 905
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <04D7270D> modellib/animation.cpp:909
// function call: 1
float GetSequenceLinearMotionAndDuration(const CModel* pModel, HSequence hSequence, const float* poseParameter, Vector* pVec)
{
	Vector::Init(
		vec_t ix,
		vec_t iy,
		vec_t iz);  // 911
} /* size: 0, inline expansions: 1 (0 bytes) */

// <02128B09> modellib/animation.cpp:923
const char* GetSequenceName(const CModel* pModel, HSequence hSequence)
{
} /* size: 0 */

// <04D72645> modellib/animation.cpp:933
// variable: 1
const char* GetSequenceActivityName(const CModel* pModel, HSequence hSequence)
{
	const ISequence* pSeqDesc; // 944
} /* size: 0, variables: 1 */

// <04D725A8> modellib/animation.cpp:948
// variable: 1
int GetAnimationEventCount(const CModel* pModel, HSequence hSequence)
{
	const ISequence* pSeqDesc; // 953
} /* size: 0, variables: 1 */

// <04D72315> modellib/animation.cpp:962
// variables: 17
int GetAnimationEvents(const AnimEventDetectionQuery_t& query, int nEventCount, animevent_t* pEvents)
{
	const CModel* pModel; // 968
	const char   __FUNCTION__; // 53715
	const ISequence* pSeqDesc; // 976
	bool bWatch; // 981
	float flStartAnimTime; // 995
	int nFoundEventCount; // 998
	const AnimEvent_t* pAnimEvents; // 1000
	bool bIsSequenceLooping; // 1001
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 974
	}
	{
		int iEvt; // 1003
		{
			const AnimEvent_t* pAnimEvent; // 1005
			bool bFireAnimEvent; // 1006
			float flUnnormalizedFinalCycle; // 1008
			float flEventCycle; // 1009
			{
				bool bAnimEventIsOnLastFrame; // 1013
			}
			{
				animevent_t& animEvent; // 1059
				float t; // 1061
			}
		}
	}
} /* size: 0, variables: 8 */

// <02128799> modellib/animation.cpp:962
// variables: 17
int GetAnimationEvents(const AnimEventDetectionQuery_t& query, int nEventCount, animevent_t* pEvents)
{
	const CModel* pModel; // 968
	const char   __FUNCTION__; // 1356
	const ISequence* pSeqDesc; // 976
	bool bWatch; // 981
	float flStartAnimTime; // 995
	int nFoundEventCount; // 998
	const AnimEvent_t* pAnimEvents; // 1000
	bool bIsSequenceLooping; // 1001
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 974
	}
	{
		int iEvt; // 1003
		{
			const AnimEvent_t* pAnimEvent; // 1005
			bool bFireAnimEvent; // 1006
			float flUnnormalizedFinalCycle; // 1008
			float flEventCycle; // 1009
			{
				bool bAnimEventIsOnLastFrame; // 1013
			}
			{
				animevent_t& animEvent; // 1059
				float t; // 1061
			}
		}
	}
} /* size: 0, variables: 8 */

// <00C94F56> modellib/animation.cpp:962
// variables: 17
int GetAnimationEvents(const AnimEventDetectionQuery_t& query, int nEventCount, animevent_t* pEvents)
{
	const CModel* pModel; // 968
	const char   __FUNCTION__; // 2681
	const ISequence* pSeqDesc; // 976
	bool bWatch; // 981
	float flStartAnimTime; // 995
	int nFoundEventCount; // 998
	const AnimEvent_t* pAnimEvents; // 1000
	bool bIsSequenceLooping; // 1001
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 974
	}
	{
		int iEvt; // 1003
		{
			const AnimEvent_t* pAnimEvent; // 1005
			bool bFireAnimEvent; // 1006
			float flUnnormalizedFinalCycle; // 1008
			float flEventCycle; // 1009
			{
				bool bAnimEventIsOnLastFrame; // 1013
			}
			{
				animevent_t& animEvent; // 1059
				float t; // 1061
			}
		}
	}
} /* size: 0, variables: 8 */

// <04D72145> modellib/animation.cpp:1080
// variable: 1
// function calls: 6
HAnimationGraph GetAnimationGraph(const CModel* pModel)
{
	HAnimationGraph hGraph; // 1082
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::CWeakHandle(); // 226
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::InitUntypedUnchecked(
				ResourceHandle_t hUntypedResource);  // 227
	FromUntypedHandleUnchecked(ResourceHandle_t hResource); // 172
	StaticInvalidHandle(void); // 1082
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::Init(
		const CWeakHandle<InfoForResourceTypeIAnimationGraph>& src);  // 331
	CWeakHandle<InfoForResourceTypeIAnimationGraph>::operator=(
			const CWeakHandle<InfoForResourceTypeIAnimationGraph>& src);  // 1086
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <04D71DBB> modellib/animation.cpp:1092
// variables: 8
// function call: 1
HSequence FindTransitionSequence(const CModel* pModel, HSequence hCurrentSequence, HSequence hGoalSequence, int* piDir)
{
	const char   __FUNCTION__; // 53808
	int nCurrentSequenceEntryNode; // 1108
	int nGoalSequenceEntryNode; // 1109
	int nNextNode; // 1116
	int iInternNode; // 1138
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1103
	}
	{
		HSequence hSequence; // 1148
		{
			const ISequence* pSeqDesc; // 1150
		}
		HSequence::operator==(
				const HSequence& other);  // 1148
	}
} /* size: 0, variables: 5 */

// <0212823F> modellib/animation.cpp:1092
// variables: 8
// function call: 1
HSequence FindTransitionSequence(const CModel* pModel, HSequence hCurrentSequence, HSequence hGoalSequence, int* piDir)
{
	const char   __FUNCTION__; // 1449
	int nCurrentSequenceEntryNode; // 1108
	int nGoalSequenceEntryNode; // 1109
	int nNextNode; // 1116
	int iInternNode; // 1138
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1103
	}
	{
		HSequence hSequence; // 1148
		{
			const ISequence* pSeqDesc; // 1150
		}
		HSequence::operator==(
				const HSequence& other);  // 1148
	}
} /* size: 0, variables: 5 */

// <00C949FC> modellib/animation.cpp:1092
// variables: 8
// function call: 1
HSequence FindTransitionSequence(const CModel* pModel, HSequence hCurrentSequence, HSequence hGoalSequence, int* piDir)
{
	const char   __FUNCTION__; // 2774
	int nCurrentSequenceEntryNode; // 1108
	int nGoalSequenceEntryNode; // 1109
	int nNextNode; // 1116
	int iInternNode; // 1138
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1103
	}
	{
		HSequence hSequence; // 1148
		{
			const ISequence* pSeqDesc; // 1150
		}
		HSequence::operator==(
				const HSequence& other);  // 1148
	}
} /* size: 0, variables: 5 */

// <04D719D3> modellib/animation.cpp:1174
// variables: 6
// function call: 1
bool GotoSequence(const CModel* pModel, HSequence hCurrentSequence, float flCurrentCycle, float flCurrentRate, HSequence hGoalSequence, HSequence& hNextSequence, float& flNextCycle, int& iNextDir)
{
	const char   __FUNCTION__; // 53573
	int iEndNode; // 1198
	int iInternNode; // 1229
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1185
	}
	{
		HSequence hSequence; // 1242
		{
			const ISequence* pSeqDesc; // 1244
		}
		HSequence::operator==(
				const HSequence& other);  // 1242
	}
} /* size: 0, variables: 3 */

// <02127E57> modellib/animation.cpp:1174
// variables: 6
// function call: 1
bool GotoSequence(const CModel* pModel, HSequence hCurrentSequence, float flCurrentCycle, float flCurrentRate, HSequence hGoalSequence, HSequence& hNextSequence, float& flNextCycle, int& iNextDir)
{
	const char   __FUNCTION__; // 1214
	int iEndNode; // 1198
	int iInternNode; // 1229
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1185
	}
	{
		HSequence hSequence; // 1242
		{
			const ISequence* pSeqDesc; // 1244
		}
		HSequence::operator==(
				const HSequence& other);  // 1242
	}
} /* size: 0, variables: 3 */

// <00C94614> modellib/animation.cpp:1174
// variables: 6
// function call: 1
bool GotoSequence(const CModel* pModel, HSequence hCurrentSequence, float flCurrentCycle, float flCurrentRate, HSequence hGoalSequence, HSequence& hNextSequence, float& flNextCycle, int& iNextDir)
{
	const char   __FUNCTION__; // 2539
	int iEndNode; // 1198
	int iInternNode; // 1229
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1185
	}
	{
		HSequence hSequence; // 1242
		{
			const ISequence* pSeqDesc; // 1244
		}
		HSequence::operator==(
				const HSequence& other);  // 1242
	}
} /* size: 0, variables: 3 */

// <04D718B2> modellib/animation.cpp:1272
// variables: 2
void SetBodygroup(const CModel* pModel, MeshGroupMask_t& mask, int iGroup, int iValue)
{
	MeshGroupMask_t nGroupMask; // 1283
	MeshGroupMask_t nModelMask; // 1284
} /* size: 0, variables: 2 */

// <04D7180B> modellib/animation.cpp:1294
int GetBodygroup(const CModel* pModel, MeshGroupMask_t mask, int iGroup)
{
} /* size: 0 */

// <04D71780> modellib/animation.cpp:1305
const char* GetBodygroupName(const CModel* pModel, int iGroup)
{
} /* size: 0 */

// <04D715F6> modellib/animation.cpp:1316
// variable: 1
// function calls: 3
void GetBodygroupPartName(const CModel* pModel, int iGroup, int iPart, CBufferString* pResourceName)
{
	int nModels; // 1326
	CBufferString::WriteBuffer(); // 1390
	CBufferString::WriteBuffer(); // 1101
	CBufferString::RemoveAll(); // 1318
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <02127A07> modellib/animation.cpp:1333
int FindBodygroupByName(const CModel* pModel, const char* name)
{
} /* size: 0 */

// <04D714F8> modellib/animation.cpp:1341
int GetBodygroupCount(const CModel* pModel, int iGroup)
{
} /* size: 0 */

// <04D714A1> modellib/animation.cpp:1352
int GetNumBodyGroups(const CModel* pModel)
{
} /* size: 0 */

// <04D71388> modellib/animation.cpp:1360
// variable: 1
Activity GetSequenceActivity(const CModel* pModel, HSequence hSequence, int* pweight)
{
	const ISequence* pSeqDesc; // 1369
} /* size: 173, variables: 1 */

// <04D71310> modellib/animation.cpp:1389
int FindHitboxSetByName(const CModel* pModel, const char* pName)
{
} /* size: 0 */

// <04D7124F> modellib/animation.cpp:1403
// variable: 1
// function call: 1
const char* GetHitboxSetName(const CModel* pModel, int nSetNumber)
{
	const CHitBoxSet* pSet; // 1408
	CUtlString::Get(); // 1412
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <04D711F3> modellib/animation.cpp:1420
int GetHitboxSetCount(const CModel* pModel)
{
} /* size: 0 */

