
//
// schemasystem/schemamismatchreport.cpp
//
//	referenced by: libschemasystem.so
//
//	functions: 4
//

// <00011483> schemasystem/schemamismatchreport.cpp:27
// variable: 1
// function calls: 5
void CSchemaSystem::MismatchToString(const DetectedSchemaMismatch_t& mismatch)
{
	CUtlString result; // 29
	CUtlString::CUtlString(); // 29
	CUtlString::Get(); // 30
	CUtlString::Get(); // 30
	CUtlString::Get(); // 30
	CUtlString::Get(); // 30
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <000111C6> schemasystem/schemamismatchreport.cpp:27
// variable: 1
void CSchemaSystem::MismatchToString(const DetectedSchemaMismatch_t& mismatch)
{
	CUtlString result; // 29
} /* size: 0, variables: 1 */

// <000110E0> schemasystem/schemamismatchreport.cpp:41
// variable: 1
// function call: 1
void CSchemaSystem::DoMismatchDialog()
{
	const char   __FUNCTION__; // 28062
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 53
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <000106C5> schemasystem/schemamismatchreport.cpp:60
// variables: 7
// function calls: 33
void CSchemaSystem::VerifySchemaBindingConsistency(bool bIsConsoleModeApp)
{
	bool s_bDisableConsistencyCheck; // 62
	int nMismatchCount; // 64
	CUtlString firstError; // 70
	const char   __FUNCTION__; // 28083
	{
		int i; // 71
		{
			DetectedSchemaMismatch_t& mismatch; // 73
			CUtlString::Get(); // 30
			CUtlString::CUtlString(); // 29
			CUtlString::Get(); // 30
			CUtlString::Get(); // 30
			CUtlString::Get(); // 30
			CSchemaSystem::MismatchToString(
					const DetectedSchemaMismatch_t& mismatch);  // 74
			CUtlMemory<CSchemaSystem::DetectedSchemaMismatch_t, int>::operator[](
					int i);  // 588
			operator[](const CUtlVectorBase<CSchemaSystem::DetectedSchemaMismatch_t, CUtlMemory<CSchemaSystem::DetectedSchemaMismatch_t, int> >  this,
					int i);  // 73
			CUtlString::Get(); // 74
			CUtlString::~CUtlString(); // 74
		}
	}
	Count(const CUtlVectorBase<CSchemaSystem::DetectedSchemaMismatch_t, CUtlMemory<CSchemaSystem::DetectedSchemaMismatch_t, i this); // 64
	CUtlString::CUtlString(); // 70
	{
		int i; // 1721
		CUtlMemory<CSchemaSystem::DetectedSchemaMismatch_t, int>::operator[](
				int i);  // 602
		Element(const CUtlVectorBase<CSchemaSystem::DetectedSchemaMismatch_t, CUtlMemory<CSchemaSystem::DetectedSchemaMismatch_t, int> >  this,
			int i);  // 1723
		CUtlString::~CUtlString(); // 159
		CUtlString::~CUtlString(); // 159
		CUtlString::~CUtlString(); // 159
		CUtlString::~CUtlString(); // 159
		DetectedSchemaMismatch_t::~DetectedSchemaMismatch_t(); // 1526
		Destruct<CSchemaSystem::DetectedSchemaMismatch_t>(DetectedSchemaMismatch_t* pMemory); // 1723
	}
	RemoveAll(const CUtlVectorBase<CSchemaSystem::DetectedSchemaMismatch_t, CUtlMemory<CSchemaSystem::DetectedSchemaMismatch_t, int> > this); // 111
	CUtlString::~CUtlString(); // 113
	CUtlMemory<CSchemaSystem::DetectedSchemaMismatch_t, int>::operator[](
			int i);  // 616
	Head(const CUtlVectorBase<CSchemaSystem::DetectedSchemaMismatch_t, CUtlMemory<CSchemaSystem::DetectedSchemaMismatch_t, int> > this); // 105
	CUtlString::CUtlString(); // 29
	CUtlString::Get(); // 30
	CUtlString::Get(); // 30
	CUtlString::Get(); // 30
	CUtlString::Get(); // 30
	CSchemaSystem::MismatchToString(
			const DetectedSchemaMismatch_t& mismatch);  // 105
	CUtlString::Get(); // 105
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 105
	CUtlString::~CUtlString(); // 105
} /* size: 1129, variables: 4, inline expansions: 15 (403 bytes) */

