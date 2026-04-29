
//
// schemalib/schemaiterator.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//
//	functions: 118
//

// <04972EB8> schemalib/schemaiterator.cpp:10
// function calls: 12
void CSchemaInheritanceIterator::CSchemaInheritanceIterator()
{
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::CUtlMemory(
			ClassToTraverse_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CSchemaInheritanceIterator::ClassToTraverse_t, int>::CUtlMemoryFixedGrowable_Base(
					ClassToTraverse_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	{
	}
	AlignedByteArrayExplicit_t<8, CSchemaInheritanceIterator::ClassToTraverse_t, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<8, CSchemaInheritanceIterator::ClassToTraverse_t>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<8, CSchemaInheritanceIterator::ClassToTraverse_t, 8>::Base(); // 231
	CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::ClassToTraverse_t, 8, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	ResetDbgInfo(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 530
	CUtlVectorBase(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this,
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CSchemaInheritanceIterator::ClassToTraverse_t, 8>::CUtlVectorFixedGrowable(
				int growSize);  // 10
	RemoveAll(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 57
	CSchemaInheritanceIterator::Invalidate(); // 12
} /* size: 0, inline expansions: 12 (0 bytes) */

// <04972E9C> schemalib/schemaiterator.cpp:10
void CSchemaInheritanceIterator::CSchemaInheritanceIterator()
{
} /* size: 0 */

// <04972ABD> schemalib/schemaiterator.cpp:18
// function calls: 15
void CSchemaInheritanceIterator::CSchemaInheritanceIterator(ClassIntrospectionHandle_t classInfo, SchemaBaseClassTraversal_t nBaseTraversal)
{
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::CUtlMemory(
			ClassToTraverse_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CSchemaInheritanceIterator::ClassToTraverse_t, int>::CUtlMemoryFixedGrowable_Base(
					ClassToTraverse_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	{
	}
	AlignedByteArrayExplicit_t<8, CSchemaInheritanceIterator::ClassToTraverse_t, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<8, CSchemaInheritanceIterator::ClassToTraverse_t>::AlignedByteArray_t(); // 228
	AlignedByteArrayExplicit_t<8, CSchemaInheritanceIterator::ClassToTraverse_t, 8>::Base(); // 231
	CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::ClassToTraverse_t, 8, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	ResetDbgInfo(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 530
	CUtlVectorBase(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this,
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CSchemaInheritanceIterator::ClassToTraverse_t, 8>::CUtlVectorFixedGrowable(
				int growSize);  // 18
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 79
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this,
			int i);  // 81
	CSchemaInheritanceIterator::Advance(); // 41
	CSchemaInheritanceIterator::Init(
		ClassIntrospectionHandle_t classInfo,
		SchemaBaseClassTraversal_t nBaseTraversal,
		ClassIntrospectionHandle_t classToSkip);  // 20
} /* size: 0, inline expansions: 15 (0 bytes) */

// <04972A89> schemalib/schemaiterator.cpp:18
void CSchemaInheritanceIterator::CSchemaInheritanceIterator(ClassIntrospectionHandle_t classInfo, SchemaBaseClassTraversal_t nBaseTraversal)
{
} /* size: 0 */

// <049726A2> schemalib/schemaiterator.cpp:26
// function calls: 15
void CSchemaInheritanceIterator::CSchemaInheritanceIterator(ClassIntrospectionHandle_t classInfo, SchemaBaseClassTraversal_t nBaseTraversal, ClassIntrospectionHandle_t classToSkip)
{
	{
	}
	AlignedByteArrayExplicit_t<8, CSchemaInheritanceIterator::ClassToTraverse_t, 8>::AlignedByteArrayExplicit_t(); // 1597
	AlignedByteArray_t<8, CSchemaInheritanceIterator::ClassToTraverse_t>::AlignedByteArray_t(); // 228
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::CUtlMemory(
			ClassToTraverse_t* pMemory,
			int numElements,
			bool bGrowable,
			uint32 nGrowable_GrowSize);  // 197
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::EnsureCapacity(
			int num);  // 199
	CUtlMemoryFixedGrowable_Base<CSchemaInheritanceIterator::ClassToTraverse_t, int>::CUtlMemoryFixedGrowable_Base(
					ClassToTraverse_t* pFixedMemory,
					int nFixedElements,
					int nGrowSize,
					int nInitAllocationCount);  // 228
	AlignedByteArrayExplicit_t<8, CSchemaInheritanceIterator::ClassToTraverse_t, 8>::Base(); // 231
	CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::ClassToTraverse_t, 8, int>::CUtlMemoryFixedGrowable(
				int nGrowSize,
				int nInitSize);  // 527
	ResetDbgInfo(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 530
	CUtlVectorBase(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this,
			int growSize,
			int initCapacity);  // 484
	CUtlVectorFixedGrowable<CSchemaInheritanceIterator::ClassToTraverse_t, 8>::CUtlVectorFixedGrowable(
				int growSize);  // 26
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 79
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this,
			int i);  // 81
	CSchemaInheritanceIterator::Advance(); // 41
	CSchemaInheritanceIterator::Init(
		ClassIntrospectionHandle_t classInfo,
		SchemaBaseClassTraversal_t nBaseTraversal,
		ClassIntrospectionHandle_t classToSkip);  // 28
} /* size: 0, inline expansions: 15 (0 bytes) */

// <04972662> schemalib/schemaiterator.cpp:26
void CSchemaInheritanceIterator::CSchemaInheritanceIterator(ClassIntrospectionHandle_t classInfo, SchemaBaseClassTraversal_t nBaseTraversal, ClassIntrospectionHandle_t classToSkip)
{
} /* size: 0 */

// <0497443B> schemalib/schemaiterator.cpp:33
// variables: 3
// function calls: 15
void CSchemaInheritanceIterator::Init(ClassIntrospectionHandle_t classInfo, SchemaBaseClassTraversal_t nBaseTraversal, ClassIntrospectionHandle_t classToSkip)
{
	{
		ClassToTraverse_t& traverse; // 118
		CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::NumAllocated(); // 1143
		CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 368
		ResetDbgInfo(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 824
		GrowMemory(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this,
				int num);  // 1145
		AddToTail(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 118
		CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this,
				int i);  // 118
	}
	RemoveAll(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 111
	{
		bool bIncludedNonPrimary; // 127
		bool bInMemoryOrder; // 128
	}
	CSchemaInheritanceIterator::PopulateTraversal(
				ClassIntrospectionHandle_t traverseClass,
				SchemaBaseClassTraversal_t nBaseTraversal,
				ClassIntrospectionHandle_t classToSkip);  // 109
	CSchemaInheritanceIterator::PopulateTraversal(
				ClassIntrospectionHandle_t traverseClass,
				SchemaBaseClassTraversal_t nBaseTraversal,
				ClassIntrospectionHandle_t classToSkip);  // 38
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 79
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this,
			int i);  // 81
	CSchemaInheritanceIterator::Advance(); // 41
} /* size: 0, inline expansions: 7 (0 bytes) */

// <04972622> schemalib/schemaiterator.cpp:33
void CSchemaInheritanceIterator::Init(ClassIntrospectionHandle_t classInfo, SchemaBaseClassTraversal_t nBaseTraversal, ClassIntrospectionHandle_t classToSkip)
{
} /* size: 0 */

// <0497356D> schemalib/schemaiterator.cpp:46
// function calls: 4
void CSchemaInheritanceIterator::Reset()
{
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 79
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this,
			int i);  // 81
	CSchemaInheritanceIterator::Advance(); // 49
} /* size: 0, inline expansions: 4 (0 bytes) */

// <04972606> schemalib/schemaiterator.cpp:46
void CSchemaInheritanceIterator::Reset()
{
} /* size: 0 */

// <04973671> schemalib/schemaiterator.cpp:55
// function call: 1
void CSchemaInheritanceIterator::Invalidate()
{
	RemoveAll(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 57
} /* size: 0, inline expansions: 1 (0 bytes) */

// <049725EA> schemalib/schemaiterator.cpp:55
void CSchemaInheritanceIterator::Invalidate()
{
} /* size: 0 */

// <049736BD> schemalib/schemaiterator.cpp:67
// function call: 1
void CSchemaInheritanceIterator::IsValid()
{
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
} /* size: 0, inline expansions: 1 (0 bytes) */

// <049725CE> schemalib/schemaiterator.cpp:67
void CSchemaInheritanceIterator::IsValid()
{
} /* size: 0 */

// <04973715> schemalib/schemaiterator.cpp:75
// function calls: 3
void CSchemaInheritanceIterator::Advance()
{
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 79
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this,
			int i);  // 81
} /* size: 0, inline expansions: 3 (0 bytes) */

// <049725B2> schemalib/schemaiterator.cpp:75
void CSchemaInheritanceIterator::Advance()
{
} /* size: 0 */

// <049737EA> schemalib/schemaiterator.cpp:93
void CSchemaInheritanceIterator::GetClass()
{
} /* size: 0 */

// <04973813> schemalib/schemaiterator.cpp:101
void CSchemaInheritanceIterator::GetClassOffset()
{
} /* size: 0 */

// <04973F0C> schemalib/schemaiterator.cpp:109
// variables: 3
// function calls: 10
void CSchemaInheritanceIterator::PopulateTraversal(ClassIntrospectionHandle_t traverseClass, SchemaBaseClassTraversal_t nBaseTraversal, ClassIntrospectionHandle_t classToSkip)
{
	RemoveAll(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 111
	{
		ClassToTraverse_t& traverse; // 118
		CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::NumAllocated(); // 1143
		CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::Base(); // 112
		Base(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 368
		ResetDbgInfo(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 824
		GrowMemory(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this,
				int num);  // 1145
		AddToTail(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 118
		CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this,
				int i);  // 118
	}
	{
		bool bIncludedNonPrimary; // 127
		bool bInMemoryOrder; // 128
	}
	CSchemaInheritanceIterator::PopulateTraversal(
				ClassIntrospectionHandle_t traverseClass,
				SchemaBaseClassTraversal_t nBaseTraversal,
				ClassIntrospectionHandle_t classToSkip);  // 109
} /* size: 0, inline expansions: 2 (0 bytes) */

// <0497250D> schemalib/schemaiterator.cpp:109
// variables: 3
void CSchemaInheritanceIterator::PopulateTraversal(ClassIntrospectionHandle_t traverseClass, SchemaBaseClassTraversal_t nBaseTraversal, ClassIntrospectionHandle_t classToSkip)
{
	{
		ClassToTraverse_t& traverse; // 118
	}
	{
		bool bIncludedNonPrimary; // 127
		bool bInMemoryOrder; // 128
	}
} /* size: 0 */

// <04971EE0> schemalib/schemaiterator.cpp:136
// variables: 9
// function calls: 22
void CSchemaInheritanceIterator::PopulateTraversal_R(ClassIntrospectionHandle_t traverseClass, ClassIntrospectionHandle_t classToSkip, uint32 nTraversalOffset, bool bIncludedNonPrimary, bool bInMemoryOrder)
{
	int nBases; // 142
	const char   __FUNCTION__; // 48420
	int nThisClassIndex; // 150
	int* pBaseIndexes; // 156
	int nWriteIndex; // 157
	ClassToTraverse_t& traverse; // 180
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 146
	}
	{
		int i; // 158
		CSchemaClassInfo::GetBaseClassInfo(
				int nIndex);  // 105
		CSchemaBaseClassInfo::GetOffset(); // 105
		CSchemaClassInfo::GetBaseClassOffset(
					int nIndex);  // 160
		CSchemaBaseClassInfo::GetClass(); // 104
		CSchemaClassInfo::GetBaseClass(
				int nIndex);  // 160
	}
	{
		int i; // 175
		CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this,
				int i);  // 177
	}
	CSchemaClassInfo::GetBaseClassCount(); // 142
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this,
			int i);  // 180
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::NumAllocated(); // 1143
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 368
	ResetDbgInfo(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 824
	GrowMemory(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this,
			int num);  // 1145
	AddToTail(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 171
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::NumAllocated(); // 1143
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 368
	ResetDbgInfo(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 824
	GrowMemory(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this,
			int num);  // 1145
	AddToTail(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 153
} /* size: 0, variables: 6, inline expansions: 15 (0 bytes) */

// <031915F0> schemalib/schemaiterator.cpp:136
// variables: 9
// function calls: 22
void CSchemaInheritanceIterator::PopulateTraversal_R(ClassIntrospectionHandle_t traverseClass, ClassIntrospectionHandle_t classToSkip, uint32 nTraversalOffset, bool bIncludedNonPrimary, bool bInMemoryOrder)
{
	int nBases; // 142
	const char   __FUNCTION__; // 33577
	int nThisClassIndex; // 150
	int* pBaseIndexes; // 156
	int nWriteIndex; // 157
	ClassToTraverse_t& traverse; // 180
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 146
	}
	{
		int i; // 158
		CSchemaClassInfo::GetBaseClassInfo(
				int nIndex);  // 105
		CSchemaBaseClassInfo::GetOffset(); // 105
		CSchemaClassInfo::GetBaseClassOffset(
					int nIndex);  // 160
		CSchemaBaseClassInfo::GetClass(); // 104
		CSchemaClassInfo::GetBaseClass(
				int nIndex);  // 160
	}
	{
		int i; // 175
		CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this,
				int i);  // 177
	}
	CSchemaClassInfo::GetBaseClassCount(); // 142
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this,
			int i);  // 180
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::NumAllocated(); // 1143
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 368
	ResetDbgInfo(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 824
	GrowMemory(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this,
			int num);  // 1145
	AddToTail(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 171
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::NumAllocated(); // 1143
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 368
	ResetDbgInfo(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 824
	GrowMemory(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this,
			int num);  // 1145
	AddToTail(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 153
} /* size: 0, variables: 6, inline expansions: 15 (0 bytes) */

// <014FBC31> schemalib/schemaiterator.cpp:136
// variables: 9
// function calls: 22
void CSchemaInheritanceIterator::PopulateTraversal_R(ClassIntrospectionHandle_t traverseClass, ClassIntrospectionHandle_t classToSkip, uint32 nTraversalOffset, bool bIncludedNonPrimary, bool bInMemoryOrder)
{
	int nBases; // 142
	const char   __FUNCTION__; // 16680
	int nThisClassIndex; // 150
	int* pBaseIndexes; // 156
	int nWriteIndex; // 157
	ClassToTraverse_t& traverse; // 180
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 146
	}
	{
		int i; // 158
		CSchemaClassInfo::GetBaseClassInfo(
				int nIndex);  // 105
		CSchemaBaseClassInfo::GetOffset(); // 105
		CSchemaClassInfo::GetBaseClassOffset(
					int nIndex);  // 160
		CSchemaBaseClassInfo::GetClass(); // 104
		CSchemaClassInfo::GetBaseClass(
				int nIndex);  // 160
	}
	{
		int i; // 175
		CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this,
				int i);  // 177
	}
	CSchemaClassInfo::GetBaseClassCount(); // 142
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this,
			int i);  // 180
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::NumAllocated(); // 1143
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 368
	ResetDbgInfo(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 824
	GrowMemory(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this,
			int num);  // 1145
	AddToTail(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 171
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::NumAllocated(); // 1143
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 368
	ResetDbgInfo(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 824
	GrowMemory(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this,
			int num);  // 1145
	AddToTail(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 153
} /* size: 0, variables: 6, inline expansions: 15 (0 bytes) */

// <0062DDBE> schemalib/schemaiterator.cpp:136
// variables: 9
// function calls: 22
void CSchemaInheritanceIterator::PopulateTraversal_R(ClassIntrospectionHandle_t traverseClass, ClassIntrospectionHandle_t classToSkip, uint32 nTraversalOffset, bool bIncludedNonPrimary, bool bInMemoryOrder)
{
	int nBases; // 142
	const char   __FUNCTION__; // 29927
	int nThisClassIndex; // 150
	int* pBaseIndexes; // 156
	int nWriteIndex; // 157
	ClassToTraverse_t& traverse; // 180
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 146
	}
	{
		int i; // 158
		CSchemaClassInfo::GetBaseClassInfo(
				int nIndex);  // 105
		CSchemaBaseClassInfo::GetOffset(); // 105
		CSchemaClassInfo::GetBaseClassOffset(
					int nIndex);  // 160
		CSchemaBaseClassInfo::GetClass(); // 104
		CSchemaClassInfo::GetBaseClass(
				int nIndex);  // 160
	}
	{
		int i; // 175
		CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this,
				int i);  // 177
	}
	CSchemaClassInfo::GetBaseClassCount(); // 142
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this,
			int i);  // 180
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::NumAllocated(); // 1143
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 368
	ResetDbgInfo(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 824
	GrowMemory(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this,
			int num);  // 1145
	AddToTail(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 171
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::NumAllocated(); // 1143
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 368
	ResetDbgInfo(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 824
	GrowMemory(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this,
			int num);  // 1145
	AddToTail(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 153
} /* size: 0, variables: 6, inline expansions: 15 (370 bytes) */

// <019F70AC> schemalib/schemaiterator.cpp:136
// variables: 9
// function calls: 22
void CSchemaInheritanceIterator::PopulateTraversal_R(ClassIntrospectionHandle_t traverseClass, ClassIntrospectionHandle_t classToSkip, uint32 nTraversalOffset, bool bIncludedNonPrimary, bool bInMemoryOrder)
{
	int nBases; // 142
	const char   __FUNCTION__; // 6997
	int nThisClassIndex; // 150
	int* pBaseIndexes; // 156
	int nWriteIndex; // 157
	ClassToTraverse_t& traverse; // 180
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 146
	}
	{
		int i; // 158
		CSchemaClassInfo::GetBaseClassInfo(
				int nIndex);  // 105
		CSchemaBaseClassInfo::GetOffset(); // 105
		CSchemaClassInfo::GetBaseClassOffset(
					int nIndex);  // 160
		CSchemaBaseClassInfo::GetClass(); // 104
		CSchemaClassInfo::GetBaseClass(
				int nIndex);  // 160
	}
	{
		int i; // 175
		CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this,
				int i);  // 177
	}
	CSchemaClassInfo::GetBaseClassCount(); // 142
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this,
			int i);  // 180
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::NumAllocated(); // 1143
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 368
	ResetDbgInfo(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 824
	GrowMemory(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this,
			int num);  // 1145
	AddToTail(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 171
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::NumAllocated(); // 1143
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 368
	ResetDbgInfo(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 824
	GrowMemory(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this,
			int num);  // 1145
	AddToTail(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 153
} /* size: 0, variables: 6, inline expansions: 15 (0 bytes) */

// <00941CBF> schemalib/schemaiterator.cpp:136
// variables: 9
// function calls: 22
void CSchemaInheritanceIterator::PopulateTraversal_R(ClassIntrospectionHandle_t traverseClass, ClassIntrospectionHandle_t classToSkip, uint32 nTraversalOffset, bool bIncludedNonPrimary, bool bInMemoryOrder)
{
	int nBases; // 142
	const char   __FUNCTION__; // 11491
	int nThisClassIndex; // 150
	int* pBaseIndexes; // 156
	int nWriteIndex; // 157
	ClassToTraverse_t& traverse; // 180
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 146
	}
	{
		int i; // 158
		CSchemaClassInfo::GetBaseClassInfo(
				int nIndex);  // 105
		CSchemaBaseClassInfo::GetOffset(); // 105
		CSchemaClassInfo::GetBaseClassOffset(
					int nIndex);  // 160
		CSchemaBaseClassInfo::GetClass(); // 104
		CSchemaClassInfo::GetBaseClass(
				int nIndex);  // 160
	}
	{
		int i; // 175
		CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::operator[](
				int i);  // 588
		operator[](const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this,
				int i);  // 177
	}
	CSchemaClassInfo::GetBaseClassCount(); // 142
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this,
			int i);  // 180
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::NumAllocated(); // 1143
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 368
	ResetDbgInfo(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 824
	GrowMemory(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this,
			int num);  // 1145
	AddToTail(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 171
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::NumAllocated(); // 1143
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::Base(); // 112
	Base(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 368
	ResetDbgInfo(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 824
	GrowMemory(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this,
			int num);  // 1145
	AddToTail(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 153
} /* size: 0, variables: 6, inline expansions: 15 (0 bytes) */

// <04971A78> schemalib/schemaiterator.cpp:191
// variables: 2
// function calls: 19
void CSchemaInheritanceIterator::BuildDerivedClassList(CUtlVectorFixedGrowable<const CSchemaClassInfo*, 32>& classHandles)
{
	int nDerivedClass; // 198
	{
		ClassIntrospectionHandle_t pDerivedClass; // 201
		CUtlMemory<const CSchemaClassInfo::Base(); // 112
		CUtlVectorBase<const CSchemaClassInfo::Base(); // 368
		CUtlVectorBase<const CSchemaClassInfo::ResetDbgInfo(); // 824
		CUtlMemory<const CSchemaClassInfo::IsGrowable(); // 823
		CUtlMemory<const CSchemaClassInfo::IsExternallyAllocated(); // 859
		CUtlMemory<const CSchemaClassInfo::IsExternallyAllocated(); // 861
		CUtlMemory<const CSchemaClassInfo::Grow(
			int num);  // 806
		CUtlVectorBase<const CSchemaClassInfo::GrowMemory(
				int num);  // 1198
		CUtlMemory<const CSchemaClassInfo::operator[](
				int i);  // 602
		CUtlVectorBase<const CSchemaClassInfo::Element(
			int i);  // 1201
		CopyConstruct<const CSchemaClassInfo*>(const CSchemaClassInfo ** pMemory,
							const CSchemaClassInfo* const& src);  // 1201
		CUtlMemory<const CSchemaClassInfo::NumAllocated(); // 1196
		CUtlVectorBase<const CSchemaClassInfo::AddToTail(
				const CSchemaClassInfo* const& src);  // 202
		CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this,
				int i);  // 203
		CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::operator[](
				int i);  // 595
		operator[](const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this,
				int i);  // 201
	}
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::operator[](
			int i);  // 595
	operator[](const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this,
			int i);  // 198
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <04971A01> schemalib/schemaiterator.cpp:210
// function call: 1
void CSchemaFieldIterator::CSchemaFieldIterator()
{
	CSchemaFieldIterator::Invalidate(); // 212
} /* size: 0, inline expansions: 1 (0 bytes) */

// <049719E5> schemalib/schemaiterator.cpp:210
void CSchemaFieldIterator::CSchemaFieldIterator()
{
} /* size: 0 */

// <04971759> schemalib/schemaiterator.cpp:218
// function calls: 9
void CSchemaFieldIterator::CSchemaFieldIterator(ClassIntrospectionHandle_t classInfo, SchemaBaseClassTraversal_t nBaseTraversal)
{
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 79
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this,
			int i);  // 81
	CSchemaInheritanceIterator::Advance(); // 41
	CSchemaInheritanceIterator::Init(
		ClassIntrospectionHandle_t classInfo,
		SchemaBaseClassTraversal_t nBaseTraversal,
		ClassIntrospectionHandle_t classToSkip);  // 254
	CSchemaInheritanceIterator::Advance(); // 49
	CSchemaInheritanceIterator::Reset(); // 290
	CSchemaFieldIterator::Reset(); // 259
	CSchemaFieldIterator::Init(
		ClassIntrospectionHandle_t classInfo,
		SchemaBaseClassTraversal_t nBaseTraversal,
		ClassIntrospectionHandle_t classToSkip);  // 220
} /* size: 0, inline expansions: 9 (0 bytes) */

// <04971725> schemalib/schemaiterator.cpp:218
void CSchemaFieldIterator::CSchemaFieldIterator(ClassIntrospectionHandle_t classInfo, SchemaBaseClassTraversal_t nBaseTraversal)
{
} /* size: 0 */

// <04971485> schemalib/schemaiterator.cpp:226
// function calls: 9
void CSchemaFieldIterator::CSchemaFieldIterator(ClassIntrospectionHandle_t classInfo, SchemaBaseClassTraversal_t nBaseTraversal, ClassIntrospectionHandle_t classToSkip)
{
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 79
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this,
			int i);  // 81
	CSchemaInheritanceIterator::Advance(); // 41
	CSchemaInheritanceIterator::Init(
		ClassIntrospectionHandle_t classInfo,
		SchemaBaseClassTraversal_t nBaseTraversal,
		ClassIntrospectionHandle_t classToSkip);  // 254
	CSchemaInheritanceIterator::Advance(); // 49
	CSchemaInheritanceIterator::Reset(); // 290
	CSchemaFieldIterator::Reset(); // 259
	CSchemaFieldIterator::Init(
		ClassIntrospectionHandle_t classInfo,
		SchemaBaseClassTraversal_t nBaseTraversal,
		ClassIntrospectionHandle_t classToSkip);  // 228
} /* size: 0, inline expansions: 9 (0 bytes) */

// <04971445> schemalib/schemaiterator.cpp:226
void CSchemaFieldIterator::CSchemaFieldIterator(ClassIntrospectionHandle_t classInfo, SchemaBaseClassTraversal_t nBaseTraversal, ClassIntrospectionHandle_t classToSkip)
{
} /* size: 0 */

// <04971361> schemalib/schemaiterator.cpp:235
// function calls: 3
void CSchemaFieldIterator::CSchemaFieldIterator(FieldIntrospectionHandle_t handle)
{
	RemoveAll(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 57
	CSchemaInheritanceIterator::Invalidate(); // 267
	CSchemaFieldIterator::InitForSingleField(
				FieldIntrospectionHandle_t handle);  // 237
} /* size: 0, inline expansions: 3 (0 bytes) */

// <04971339> schemalib/schemaiterator.cpp:235
void CSchemaFieldIterator::CSchemaFieldIterator(FieldIntrospectionHandle_t handle)
{
} /* size: 0 */

// <0497383C> schemalib/schemaiterator.cpp:243
void CSchemaFieldIterator::Invalidate()
{
} /* size: 0 */

// <049741FC> schemalib/schemaiterator.cpp:252
// function calls: 8
void CSchemaFieldIterator::Init(ClassIntrospectionHandle_t classInfo, SchemaBaseClassTraversal_t nBaseTraversal, ClassIntrospectionHandle_t classToSkip)
{
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 79
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this,
			int i);  // 81
	CSchemaInheritanceIterator::Advance(); // 41
	CSchemaInheritanceIterator::Init(
		ClassIntrospectionHandle_t classInfo,
		SchemaBaseClassTraversal_t nBaseTraversal,
		ClassIntrospectionHandle_t classToSkip);  // 254
	CSchemaInheritanceIterator::Advance(); // 49
	CSchemaInheritanceIterator::Reset(); // 290
	CSchemaFieldIterator::Reset(); // 259
} /* size: 0, inline expansions: 8 (0 bytes) */

// <049712DD> schemalib/schemaiterator.cpp:252
void CSchemaFieldIterator::Init(ClassIntrospectionHandle_t classInfo, SchemaBaseClassTraversal_t nBaseTraversal, ClassIntrospectionHandle_t classToSkip)
{
} /* size: 0 */

// <04973865> schemalib/schemaiterator.cpp:265
// function calls: 2
void CSchemaFieldIterator::InitForSingleField(FieldIntrospectionHandle_t handle)
{
	RemoveAll(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this); // 57
	CSchemaInheritanceIterator::Invalidate(); // 267
} /* size: 0, inline expansions: 2 (0 bytes) */

// <049712B3> schemalib/schemaiterator.cpp:265
void CSchemaFieldIterator::InitForSingleField(FieldIntrospectionHandle_t handle)
{
} /* size: 0 */

// <049738E8> schemalib/schemaiterator.cpp:275
// function calls: 2
void CSchemaFieldIterator::IsSingleFieldRestricted()
{
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
} /* size: 0, inline expansions: 2 (0 bytes) */

// <04971296> schemalib/schemaiterator.cpp:275
void CSchemaFieldIterator::IsSingleFieldRestricted()
{
} /* size: 0 */

// <04973B7A> schemalib/schemaiterator.cpp:283
// function calls: 11
void CSchemaFieldIterator::Reset()
{
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 285
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 79
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this,
			int i);  // 81
	CSchemaInheritanceIterator::Advance(); // 49
	CSchemaInheritanceIterator::Reset(); // 290
	{
	}
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 286
} /* size: 0, inline expansions: 11 (0 bytes) */

// <04971225> schemalib/schemaiterator.cpp:283
// variables: 2
void CSchemaFieldIterator::Reset()
{
	const char   __FUNCTION__; // 43693
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 285
	}
} /* size: 0, variables: 1 */

// <03190935> schemalib/schemaiterator.cpp:283
// variables: 2
void CSchemaFieldIterator::Reset()
{
	const char   __FUNCTION__; // 28850
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 285
	}
} /* size: 0, variables: 1 */

// <014FAF76> schemalib/schemaiterator.cpp:283
// variables: 2
void CSchemaFieldIterator::Reset()
{
	const char   __FUNCTION__; // 11953
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 285
	}
} /* size: 0, variables: 1 */

// <0062D103> schemalib/schemaiterator.cpp:283
// variables: 2
void CSchemaFieldIterator::Reset()
{
	const char   __FUNCTION__; // 25200
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 285
	}
} /* size: 0, variables: 1 */

// <019F63F1> schemalib/schemaiterator.cpp:283
// variables: 2
void CSchemaFieldIterator::Reset()
{
	const char   __FUNCTION__; // 2270
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 285
	}
} /* size: 0, variables: 1 */

// <00941004> schemalib/schemaiterator.cpp:283
// variables: 2
void CSchemaFieldIterator::Reset()
{
	const char   __FUNCTION__; // 6764
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 285
	}
} /* size: 0, variables: 1 */

// <04973964> schemalib/schemaiterator.cpp:296
// function calls: 10
void CSchemaFieldIterator::AdvanceUntilCurrentClassHasMembers()
{
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 299
	CSchemaInheritanceIterator::GetClass(); // 299
	CSchemaClassInfo::GetFieldCount(); // 299
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this,
			int i);  // 81
	CSchemaInheritanceIterator::Advance(); // 301
	CSchemaInheritanceIterator::GetClass(); // 308
	CSchemaClassInfo::GetField(
		int nIndex);  // 308
	CSchemaFieldIterator::AdvanceUntilCurrentClassHasMembers(); // 296
} /* size: 0, inline expansions: 10 (0 bytes) */

// <04971208> schemalib/schemaiterator.cpp:296
void CSchemaFieldIterator::AdvanceUntilCurrentClassHasMembers()
{
} /* size: 0 */

// <04970F58> schemalib/schemaiterator.cpp:319
// variables: 2
// function calls: 10
void CSchemaFieldIterator::FindField(const char* pFieldName)
{
	const char   __FUNCTION__; // 42863
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 321
	}
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 321
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 327
	CSchemaClassField::GetName(); // 329
	V_strcmp(const char* s1,
		const char* s2);  // 329
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 322
} /* size: 0, variables: 1, inline expansions: 10 (0 bytes) */

// <03190668> schemalib/schemaiterator.cpp:319
// variables: 2
// function calls: 10
void CSchemaFieldIterator::FindField(const char* pFieldName)
{
	const char   __FUNCTION__; // 28020
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 321
	}
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 321
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 327
	CSchemaClassField::GetName(); // 329
	V_strcmp(const char* s1,
		const char* s2);  // 329
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 322
} /* size: 0, variables: 1, inline expansions: 10 (0 bytes) */

// <014FACA9> schemalib/schemaiterator.cpp:319
// variables: 2
// function calls: 10
void CSchemaFieldIterator::FindField(const char* pFieldName)
{
	const char   __FUNCTION__; // 11123
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 321
	}
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 321
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 327
	CSchemaClassField::GetName(); // 329
	V_strcmp(const char* s1,
		const char* s2);  // 329
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 322
} /* size: 0, variables: 1, inline expansions: 10 (0 bytes) */

// <0062CE36> schemalib/schemaiterator.cpp:319
// variables: 2
// function calls: 10
void CSchemaFieldIterator::FindField(const char* pFieldName)
{
	const char   __FUNCTION__; // 24370
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 321
	}
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 321
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 327
	CSchemaClassField::GetName(); // 329
	V_strcmp(const char* s1,
		const char* s2);  // 329
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 322
} /* size: 0, variables: 1, inline expansions: 10 (0 bytes) */

// <019F6124> schemalib/schemaiterator.cpp:319
// variables: 2
// function calls: 10
void CSchemaFieldIterator::FindField(const char* pFieldName)
{
	const char   __FUNCTION__; // 1440
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 321
	}
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 321
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 327
	CSchemaClassField::GetName(); // 329
	V_strcmp(const char* s1,
		const char* s2);  // 329
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 322
} /* size: 0, variables: 1, inline expansions: 10 (0 bytes) */

// <00940D37> schemalib/schemaiterator.cpp:319
// variables: 2
// function calls: 10
void CSchemaFieldIterator::FindField(const char* pFieldName)
{
	const char   __FUNCTION__; // 5934
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 321
	}
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 321
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 327
	CSchemaClassField::GetName(); // 329
	V_strcmp(const char* s1,
		const char* s2);  // 329
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 322
} /* size: 0, variables: 1, inline expansions: 10 (0 bytes) */

// <00D225F2> schemalib/schemaiterator.cpp:319
// variables: 2
// function calls: 10
void CSchemaFieldIterator::FindField(const char* pFieldName)
{
	const char   __FUNCTION__; // 26094
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 321
	}
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 321
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 327
	CSchemaClassField::GetName(); // 329
	V_strcmp(const char* s1,
		const char* s2);  // 329
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 322
} /* size: 0, variables: 1, inline expansions: 10 (0 bytes) */

// <04970D1C> schemalib/schemaiterator.cpp:339
// variables: 2
// function calls: 8
void CSchemaFieldIterator::FindField(FieldIntrospectionHandle_t handle)
{
	const char   __FUNCTION__; // 42863
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 341
	}
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 341
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 347
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 342
} /* size: 0, variables: 1, inline expansions: 8 (0 bytes) */

// <0319042C> schemalib/schemaiterator.cpp:339
// variables: 2
// function calls: 8
void CSchemaFieldIterator::FindField(FieldIntrospectionHandle_t handle)
{
	const char   __FUNCTION__; // 28020
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 341
	}
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 341
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 347
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 342
} /* size: 0, variables: 1, inline expansions: 8 (0 bytes) */

// <014FAA6D> schemalib/schemaiterator.cpp:339
// variables: 2
// function calls: 8
void CSchemaFieldIterator::FindField(FieldIntrospectionHandle_t handle)
{
	const char   __FUNCTION__; // 11123
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 341
	}
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 341
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 347
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 342
} /* size: 0, variables: 1, inline expansions: 8 (0 bytes) */

// <0062CBFA> schemalib/schemaiterator.cpp:339
// variables: 2
// function calls: 8
void CSchemaFieldIterator::FindField(FieldIntrospectionHandle_t handle)
{
	const char   __FUNCTION__; // 24370
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 341
	}
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 341
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 347
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 342
} /* size: 0, variables: 1, inline expansions: 8 (0 bytes) */

// <019F5EE8> schemalib/schemaiterator.cpp:339
// variables: 2
// function calls: 8
void CSchemaFieldIterator::FindField(FieldIntrospectionHandle_t handle)
{
	const char   __FUNCTION__; // 1440
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 341
	}
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 341
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 347
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 342
} /* size: 0, variables: 1, inline expansions: 8 (0 bytes) */

// <00940AFB> schemalib/schemaiterator.cpp:339
// variables: 2
// function calls: 8
void CSchemaFieldIterator::FindField(FieldIntrospectionHandle_t handle)
{
	const char   __FUNCTION__; // 5934
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 341
	}
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 341
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 347
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 342
} /* size: 0, variables: 1, inline expansions: 8 (0 bytes) */

// <00D223B6> schemalib/schemaiterator.cpp:339
// variables: 2
// function calls: 8
void CSchemaFieldIterator::FindField(FieldIntrospectionHandle_t handle)
{
	const char   __FUNCTION__; // 26094
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 341
	}
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 341
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 347
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 342
} /* size: 0, variables: 1, inline expansions: 8 (0 bytes) */

// <049709E7> schemalib/schemaiterator.cpp:358
// variables: 2
// function calls: 14
void CSchemaFieldIterator::Advance()
{
	const char   __FUNCTION__; // 42291
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 360
	}
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 360
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 361
	CSchemaInheritanceIterator::GetClass(); // 369
	CSchemaClassInfo::GetFieldCount(); // 369
	CSchemaClassInfo::GetField(
		int nIndex);  // 371
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 364
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this,
			int i);  // 81
	CSchemaInheritanceIterator::Advance(); // 375
} /* size: 0, variables: 1, inline expansions: 14 (0 bytes) */

// <031900F7> schemalib/schemaiterator.cpp:358
// variables: 2
// function calls: 14
void CSchemaFieldIterator::Advance()
{
	const char   __FUNCTION__; // 27448
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 360
	}
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 360
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 361
	CSchemaInheritanceIterator::GetClass(); // 369
	CSchemaClassInfo::GetFieldCount(); // 369
	CSchemaClassInfo::GetField(
		int nIndex);  // 371
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 364
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this,
			int i);  // 81
	CSchemaInheritanceIterator::Advance(); // 375
} /* size: 0, variables: 1, inline expansions: 14 (0 bytes) */

// <014FA738> schemalib/schemaiterator.cpp:358
// variables: 2
// function calls: 14
void CSchemaFieldIterator::Advance()
{
	const char   __FUNCTION__; // 10551
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 360
	}
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 360
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 361
	CSchemaInheritanceIterator::GetClass(); // 369
	CSchemaClassInfo::GetFieldCount(); // 369
	CSchemaClassInfo::GetField(
		int nIndex);  // 371
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 364
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this,
			int i);  // 81
	CSchemaInheritanceIterator::Advance(); // 375
} /* size: 0, variables: 1, inline expansions: 14 (0 bytes) */

// <0062C8C5> schemalib/schemaiterator.cpp:358
// variables: 2
// function calls: 14
void CSchemaFieldIterator::Advance()
{
	const char   __FUNCTION__; // 23798
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 360
	}
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 360
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 361
	CSchemaInheritanceIterator::GetClass(); // 369
	CSchemaClassInfo::GetFieldCount(); // 369
	CSchemaClassInfo::GetField(
		int nIndex);  // 371
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 364
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this,
			int i);  // 81
	CSchemaInheritanceIterator::Advance(); // 375
} /* size: 0, variables: 1, inline expansions: 14 (252 bytes) */

// <019F5BB3> schemalib/schemaiterator.cpp:358
// variables: 2
// function calls: 14
void CSchemaFieldIterator::Advance()
{
	const char   __FUNCTION__; // 868
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 360
	}
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 360
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 361
	CSchemaInheritanceIterator::GetClass(); // 369
	CSchemaClassInfo::GetFieldCount(); // 369
	CSchemaClassInfo::GetField(
		int nIndex);  // 371
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 364
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this,
			int i);  // 81
	CSchemaInheritanceIterator::Advance(); // 375
} /* size: 0, variables: 1, inline expansions: 14 (0 bytes) */

// <009407C6> schemalib/schemaiterator.cpp:358
// variables: 2
// function calls: 14
void CSchemaFieldIterator::Advance()
{
	const char   __FUNCTION__; // 5362
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 360
	}
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 360
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 361
	CSchemaInheritanceIterator::GetClass(); // 369
	CSchemaClassInfo::GetFieldCount(); // 369
	CSchemaClassInfo::GetField(
		int nIndex);  // 371
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 364
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this,
			int i);  // 81
	CSchemaInheritanceIterator::Advance(); // 375
} /* size: 0, variables: 1, inline expansions: 14 (0 bytes) */

// <00D22081> schemalib/schemaiterator.cpp:358
// variables: 2
// function calls: 14
void CSchemaFieldIterator::Advance()
{
	const char   __FUNCTION__; // 25522
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 360
	}
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 360
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 361
	CSchemaInheritanceIterator::GetClass(); // 369
	CSchemaClassInfo::GetFieldCount(); // 369
	CSchemaClassInfo::GetField(
		int nIndex);  // 371
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 364
	CUtlMemory<CSchemaInheritanceIterator::ClassToTraverse_t, int>::operator[](
			int i);  // 588
	operator[](const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceIterator::C this,
			int i);  // 81
	CSchemaInheritanceIterator::Advance(); // 375
} /* size: 0, variables: 1, inline expansions: 14 (0 bytes) */

// <04973DD0> schemalib/schemaiterator.cpp:383
// function call: 1
void CSchemaFieldIterator::IsValid()
{
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
} /* size: 0, inline expansions: 1 (0 bytes) */

// <049709CA> schemalib/schemaiterator.cpp:383
void CSchemaFieldIterator::IsValid()
{
} /* size: 0 */

// <049707F3> schemalib/schemaiterator.cpp:393
// variables: 2
// function calls: 7
void* CSchemaFieldIterator::PointerFromClass(void* pClass)
{
	const char   __FUNCTION__; // 40970
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 395
	}
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 395
	CSchemaInheritanceIterator::GetClassOffset(); // 414
	CSchemaClassField::GetSingleInheritanceOffsetFromClass(); // 414
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 413
	{
	}
	CSchemaFieldIterator::GetFieldMemoryOffset(); // 396
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <0318FF03> schemalib/schemaiterator.cpp:393
// variables: 2
// function calls: 7
void* CSchemaFieldIterator::PointerFromClass(void* pClass)
{
	const char   __FUNCTION__; // 26127
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 395
	}
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 395
	CSchemaInheritanceIterator::GetClassOffset(); // 414
	CSchemaClassField::GetSingleInheritanceOffsetFromClass(); // 414
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 413
	{
	}
	CSchemaFieldIterator::GetFieldMemoryOffset(); // 396
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <014FA544> schemalib/schemaiterator.cpp:393
// variables: 2
// function calls: 7
void* CSchemaFieldIterator::PointerFromClass(void* pClass)
{
	const char   __FUNCTION__; // 9230
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 395
	}
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 395
	CSchemaInheritanceIterator::GetClassOffset(); // 414
	CSchemaClassField::GetSingleInheritanceOffsetFromClass(); // 414
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 413
	{
	}
	CSchemaFieldIterator::GetFieldMemoryOffset(); // 396
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <0062C6D1> schemalib/schemaiterator.cpp:393
// variables: 2
// function calls: 7
void* CSchemaFieldIterator::PointerFromClass(void* pClass)
{
	const char   __FUNCTION__; // 22477
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 395
	}
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 395
	CSchemaInheritanceIterator::GetClassOffset(); // 414
	CSchemaClassField::GetSingleInheritanceOffsetFromClass(); // 414
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 413
	{
	}
	CSchemaFieldIterator::GetFieldMemoryOffset(); // 396
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <009405D2> schemalib/schemaiterator.cpp:393
// variables: 2
// function calls: 7
void* CSchemaFieldIterator::PointerFromClass(void* pClass)
{
	const char   __FUNCTION__; // 4041
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 395
	}
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 395
	CSchemaInheritanceIterator::GetClassOffset(); // 414
	CSchemaClassField::GetSingleInheritanceOffsetFromClass(); // 414
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 413
	{
	}
	CSchemaFieldIterator::GetFieldMemoryOffset(); // 396
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <00D21E8D> schemalib/schemaiterator.cpp:393
// variables: 2
// function calls: 7
void* CSchemaFieldIterator::PointerFromClass(void* pClass)
{
	const char   __FUNCTION__; // 24201
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 395
	}
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 395
	CSchemaInheritanceIterator::GetClassOffset(); // 414
	CSchemaClassField::GetSingleInheritanceOffsetFromClass(); // 414
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 413
	{
	}
	CSchemaFieldIterator::GetFieldMemoryOffset(); // 396
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <04970607> schemalib/schemaiterator.cpp:402
// variables: 2
// function calls: 7
const void* CSchemaFieldIterator::PointerFromClass(const void* pClass)
{
	const char   __FUNCTION__; // 40970
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 404
	}
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 404
	CSchemaInheritanceIterator::GetClassOffset(); // 414
	CSchemaClassField::GetSingleInheritanceOffsetFromClass(); // 414
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 413
	{
	}
	CSchemaFieldIterator::GetFieldMemoryOffset(); // 405
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <0318FD17> schemalib/schemaiterator.cpp:402
// variables: 2
// function calls: 7
const void* CSchemaFieldIterator::PointerFromClass(const void* pClass)
{
	const char   __FUNCTION__; // 26127
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 404
	}
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 404
	CSchemaInheritanceIterator::GetClassOffset(); // 414
	CSchemaClassField::GetSingleInheritanceOffsetFromClass(); // 414
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 413
	{
	}
	CSchemaFieldIterator::GetFieldMemoryOffset(); // 405
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <014FA358> schemalib/schemaiterator.cpp:402
// variables: 2
// function calls: 7
const void* CSchemaFieldIterator::PointerFromClass(const void* pClass)
{
	const char   __FUNCTION__; // 9230
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 404
	}
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 404
	CSchemaInheritanceIterator::GetClassOffset(); // 414
	CSchemaClassField::GetSingleInheritanceOffsetFromClass(); // 414
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 413
	{
	}
	CSchemaFieldIterator::GetFieldMemoryOffset(); // 405
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <0062C4E5> schemalib/schemaiterator.cpp:402
// variables: 2
// function calls: 7
const void* CSchemaFieldIterator::PointerFromClass(const void* pClass)
{
	const char   __FUNCTION__; // 22477
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 404
	}
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 404
	CSchemaInheritanceIterator::GetClassOffset(); // 414
	CSchemaClassField::GetSingleInheritanceOffsetFromClass(); // 414
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 413
	{
	}
	CSchemaFieldIterator::GetFieldMemoryOffset(); // 405
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <009403E6> schemalib/schemaiterator.cpp:402
// variables: 2
// function calls: 7
const void* CSchemaFieldIterator::PointerFromClass(const void* pClass)
{
	const char   __FUNCTION__; // 4041
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 404
	}
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 404
	CSchemaInheritanceIterator::GetClassOffset(); // 414
	CSchemaClassField::GetSingleInheritanceOffsetFromClass(); // 414
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 413
	{
	}
	CSchemaFieldIterator::GetFieldMemoryOffset(); // 405
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <00D21CA1> schemalib/schemaiterator.cpp:402
// variables: 2
// function calls: 7
const void* CSchemaFieldIterator::PointerFromClass(const void* pClass)
{
	const char   __FUNCTION__; // 24201
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 404
	}
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 404
	CSchemaInheritanceIterator::GetClassOffset(); // 414
	CSchemaClassField::GetSingleInheritanceOffsetFromClass(); // 414
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 413
	{
	}
	CSchemaFieldIterator::GetFieldMemoryOffset(); // 405
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <04973E29> schemalib/schemaiterator.cpp:411
// function calls: 4
void CSchemaFieldIterator::GetFieldMemoryOffset()
{
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 413
	CSchemaInheritanceIterator::GetClassOffset(); // 414
	CSchemaClassField::GetSingleInheritanceOffsetFromClass(); // 414
	{
	}
} /* size: 0, inline expansions: 4 (0 bytes) */

// <04970596> schemalib/schemaiterator.cpp:411
// variables: 2
void CSchemaFieldIterator::GetFieldMemoryOffset()
{
	const char   __FUNCTION__; // 40478
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 413
	}
} /* size: 0, variables: 1 */

// <0318FCA6> schemalib/schemaiterator.cpp:411
// variables: 2
void CSchemaFieldIterator::GetFieldMemoryOffset()
{
	const char   __FUNCTION__; // 25635
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 413
	}
} /* size: 0, variables: 1 */

// <014FA2E7> schemalib/schemaiterator.cpp:411
// variables: 2
void CSchemaFieldIterator::GetFieldMemoryOffset()
{
	const char   __FUNCTION__; // 8738
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 413
	}
} /* size: 0, variables: 1 */

// <0062C474> schemalib/schemaiterator.cpp:411
// variables: 2
void CSchemaFieldIterator::GetFieldMemoryOffset()
{
	const char   __FUNCTION__; // 21985
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 413
	}
} /* size: 0, variables: 1 */

// <00940375> schemalib/schemaiterator.cpp:411
// variables: 2
void CSchemaFieldIterator::GetFieldMemoryOffset()
{
	const char   __FUNCTION__; // 3549
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 413
	}
} /* size: 0, variables: 1 */

// <04970485> schemalib/schemaiterator.cpp:420
// variables: 2
// function calls: 3
void CSchemaFieldIterator::GetFieldName()
{
	const char   __FUNCTION__; // 40365
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 422
	}
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 422
	CSchemaClassField::GetName(); // 423
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <0318FB95> schemalib/schemaiterator.cpp:420
// variables: 2
// function calls: 3
void CSchemaFieldIterator::GetFieldName()
{
	const char   __FUNCTION__; // 25522
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 422
	}
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 422
	CSchemaClassField::GetName(); // 423
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <014FA1D6> schemalib/schemaiterator.cpp:420
// variables: 2
// function calls: 3
void CSchemaFieldIterator::GetFieldName()
{
	const char   __FUNCTION__; // 8625
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 422
	}
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 422
	CSchemaClassField::GetName(); // 423
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <0062C363> schemalib/schemaiterator.cpp:420
// variables: 2
// function calls: 3
void CSchemaFieldIterator::GetFieldName()
{
	const char   __FUNCTION__; // 21872
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 422
	}
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 422
	CSchemaClassField::GetName(); // 423
} /* size: 0, variables: 1, inline expansions: 3 (32 bytes) */

// <019F5651> schemalib/schemaiterator.cpp:420
// variables: 2
// function calls: 3
void CSchemaFieldIterator::GetFieldName()
{
	const char   __FUNCTION__; // 64478
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 422
	}
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 422
	CSchemaClassField::GetName(); // 423
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <00940264> schemalib/schemaiterator.cpp:420
// variables: 2
// function calls: 3
void CSchemaFieldIterator::GetFieldName()
{
	const char   __FUNCTION__; // 3436
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 422
	}
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 422
	CSchemaClassField::GetName(); // 423
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <00D21B1F> schemalib/schemaiterator.cpp:420
// variables: 2
// function calls: 3
void CSchemaFieldIterator::GetFieldName()
{
	const char   __FUNCTION__; // 23596
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 422
	}
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 422
	CSchemaClassField::GetName(); // 423
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <049700BA> schemalib/schemaiterator.cpp:440
// variables: 3
// function calls: 13
void CSchemaFieldIterator::GetFullyQualifiedFieldName()
{
	const char   __FUNCTION__; // 40092
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 443
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 444
	}
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 443
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 444
	CSchemaClassField::GetName(); // 445
	CSchemaInheritanceIterator::GetClass(); // 445
	CSchemaClassInfo::GetName(); // 445
	CUtlString::CUtlString(
			const char* pString);  // 445
	CUtlString::~CUtlString(); // 445
	CUtlString::~CUtlString(); // 445
} /* size: 0, variables: 1, inline expansions: 13 (0 bytes) */

// <0318F7CA> schemalib/schemaiterator.cpp:440
// variables: 3
// function calls: 13
void CSchemaFieldIterator::GetFullyQualifiedFieldName()
{
	const char   __FUNCTION__; // 25249
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 443
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 444
	}
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 443
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 444
	CSchemaClassField::GetName(); // 445
	CSchemaInheritanceIterator::GetClass(); // 445
	CSchemaClassInfo::GetName(); // 445
	CUtlString::CUtlString(
			const char* pString);  // 445
	CUtlString::~CUtlString(); // 445
	CUtlString::~CUtlString(); // 445
} /* size: 0, variables: 1, inline expansions: 13 (0 bytes) */

// <014F9E0B> schemalib/schemaiterator.cpp:440
// variables: 3
// function calls: 13
void CSchemaFieldIterator::GetFullyQualifiedFieldName()
{
	const char   __FUNCTION__; // 8352
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 443
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 444
	}
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 443
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 444
	CSchemaClassField::GetName(); // 445
	CSchemaInheritanceIterator::GetClass(); // 445
	CSchemaClassInfo::GetName(); // 445
	CUtlString::CUtlString(
			const char* pString);  // 445
	CUtlString::~CUtlString(); // 445
	CUtlString::~CUtlString(); // 445
} /* size: 0, variables: 1, inline expansions: 13 (0 bytes) */

// <0062BF98> schemalib/schemaiterator.cpp:440
// variables: 3
// function calls: 13
void CSchemaFieldIterator::GetFullyQualifiedFieldName()
{
	const char   __FUNCTION__; // 21599
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 443
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 444
	}
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 443
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 444
	CSchemaClassField::GetName(); // 445
	CSchemaInheritanceIterator::GetClass(); // 445
	CSchemaClassInfo::GetName(); // 445
	CUtlString::CUtlString(
			const char* pString);  // 445
	CUtlString::~CUtlString(); // 445
	CUtlString::~CUtlString(); // 445
} /* size: 0, variables: 1, inline expansions: 13 (209 bytes) */

// <019F5286> schemalib/schemaiterator.cpp:440
// variables: 3
// function calls: 13
void CSchemaFieldIterator::GetFullyQualifiedFieldName()
{
	const char   __FUNCTION__; // 64205
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 443
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 444
	}
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 443
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 444
	CSchemaClassField::GetName(); // 445
	CSchemaInheritanceIterator::GetClass(); // 445
	CSchemaClassInfo::GetName(); // 445
	CUtlString::CUtlString(
			const char* pString);  // 445
	CUtlString::~CUtlString(); // 445
	CUtlString::~CUtlString(); // 445
} /* size: 0, variables: 1, inline expansions: 13 (0 bytes) */

// <0093FE99> schemalib/schemaiterator.cpp:440
// variables: 3
// function calls: 13
void CSchemaFieldIterator::GetFullyQualifiedFieldName()
{
	const char   __FUNCTION__; // 3163
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 443
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 444
	}
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 443
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 444
	CSchemaClassField::GetName(); // 445
	CSchemaInheritanceIterator::GetClass(); // 445
	CSchemaClassInfo::GetName(); // 445
	CUtlString::CUtlString(
			const char* pString);  // 445
	CUtlString::~CUtlString(); // 445
	CUtlString::~CUtlString(); // 445
} /* size: 0, variables: 1, inline expansions: 13 (0 bytes) */

// <00D21754> schemalib/schemaiterator.cpp:440
// variables: 3
// function calls: 13
void CSchemaFieldIterator::GetFullyQualifiedFieldName()
{
	const char   __FUNCTION__; // 23323
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 443
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 444
	}
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 443
	Count(const CUtlVectorBase<CSchemaInheritanceIterator::ClassToTraverse_t, CUtlMemoryFixedGrowable<CSchemaInheritanceItera this); // 69
	CSchemaInheritanceIterator::IsValid(); // 277
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 444
	CSchemaClassField::GetName(); // 445
	CSchemaInheritanceIterator::GetClass(); // 445
	CSchemaClassInfo::GetName(); // 445
	CUtlString::CUtlString(
			const char* pString);  // 445
	CUtlString::~CUtlString(); // 445
	CUtlString::~CUtlString(); // 445
} /* size: 0, variables: 1, inline expansions: 13 (0 bytes) */

// <0496FFDD> schemalib/schemaiterator.cpp:451
// variables: 2
// function calls: 2
void CSchemaFieldIterator::GetRawFieldHandle()
{
	const char   __FUNCTION__; // 39121
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 453
	}
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 453
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <0318F6ED> schemalib/schemaiterator.cpp:451
// variables: 2
// function calls: 2
void CSchemaFieldIterator::GetRawFieldHandle()
{
	const char   __FUNCTION__; // 24278
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 453
	}
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 453
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <014F9D2E> schemalib/schemaiterator.cpp:451
// variables: 2
// function calls: 2
void CSchemaFieldIterator::GetRawFieldHandle()
{
	const char   __FUNCTION__; // 7381
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 453
	}
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 453
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <0062BEBB> schemalib/schemaiterator.cpp:451
// variables: 2
// function calls: 2
void CSchemaFieldIterator::GetRawFieldHandle()
{
	const char   __FUNCTION__; // 20628
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 453
	}
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 453
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <0093FDBC> schemalib/schemaiterator.cpp:451
// variables: 2
// function calls: 2
void CSchemaFieldIterator::GetRawFieldHandle()
{
	const char   __FUNCTION__; // 2192
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 453
	}
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 453
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <00D21677> schemalib/schemaiterator.cpp:451
// variables: 2
// function calls: 2
void CSchemaFieldIterator::GetRawFieldHandle()
{
	const char   __FUNCTION__; // 22352
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 453
	}
	CSchemaFieldIterator::IsSingleFieldRestricted(); // 385
	CSchemaFieldIterator::IsValid(); // 453
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <0496FF79> schemalib/schemaiterator.cpp:460
// function call: 1
void CSchemaFieldIterator::GetType()
{
	CSchemaClassField::GetType(); // 465
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0496FF5C> schemalib/schemaiterator.cpp:471
void CSchemaFieldIterator::CurrentClass()
{
} /* size: 0 */

// <0496FF28> schemalib/schemaiterator.cpp:479
void CSchemaFieldIterator::CurrentFieldIndex()
{
} /* size: 0 */

// <0496FE4C> schemalib/schemaiterator.cpp:487
// function calls: 2
void* CSchemaFieldIterator::GetMetaPtr(const char* pMetaTagName)
{
	CSchemaMetadataSet::CSchemaMetadataSet(
				uint16 nNumEntries,
				const SchemaMetadataEntryData_t* pEntries);  // 39
	CSchemaClassField::GetMetadata(); // 489
} /* size: 0, inline expansions: 2 (0 bytes) */

// <0496F988> schemalib/schemaiterator.cpp:493
// variables: 2
// function calls: 19
void CSchemaFieldIterator::GetAllMetaPtrsInternal(const char* pMetaTagName, CUtlVector<void*, CUtlMemory<void*, int> >& metaValues)
{
	CSchemaMetadataSet::CSchemaMetadataSet(
				uint16 nNumEntries,
				const SchemaMetadataEntryData_t* pEntries);  // 39
	CSchemaClassField::GetMetadata(); // 495
	{
		int i; // 33
		{
			const CSchemaMetadataEntry* pEntry; // 35
			CSchemaMetadataEntry::GetName(); // 36
			V_strcmp(const char* s1,
				const char* s2);  // 36
			CSchemaMetadataEntry::GetData(); // 38
			CUtlMemory<void::NumAllocated(); // 1247
			CUtlMemory<void::Base(); // 112
			CUtlVectorBase<void::Base(); // 368
			CUtlVectorBase<void::ResetDbgInfo(); // 824
			CUtlMemory<void::IsGrowable(); // 823
			CUtlMemory<void::IsExternallyAllocated(); // 859
			CUtlMemory<void::IsExternallyAllocated(); // 861
			CUtlMemory<void::Grow(
				int num);  // 806
			CUtlVectorBase<void::GrowMemory(
					int num);  // 1249
			CUtlMemory<void::operator[](
					int i);  // 602
			CUtlVectorBase<void::Element(
				int i);  // 1252
			Construct<void*, void*>(void** pMemory); // 1252
			CUtlVectorBase<void::AddToTail(
					void *& src);  // 38
		}
	}
	CSchemaMetadataSet::GetAllPtrs<void*>(
				const char* pTagName,
				CUtlVector<void*, CUtlMemory<void*, int> >& metaValues);  // 495
} /* size: 0, inline expansions: 3 (0 bytes) */

// <0496F8B0> schemalib/schemaiterator.cpp:500
// function calls: 2
void CSchemaFieldIterator::IsMetaPresent(const char* pMetaTagName)
{
	CSchemaMetadataSet::CSchemaMetadataSet(
				uint16 nNumEntries,
				const SchemaMetadataEntryData_t* pEntries);  // 39
	CSchemaClassField::GetMetadata(); // 502
} /* size: 0, inline expansions: 2 (0 bytes) */

