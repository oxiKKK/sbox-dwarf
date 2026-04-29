
//
// public/modellib/jointindexbuilder.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 9
//	struct: 1
//

// <064C6982> ../public/modellib/jointindexbuilder.h:21
void CJointIndexData::CJointIndexData(CJointIndexData &)
{
} /* size: 0 */

// <064C6961> ../public/modellib/jointindexbuilder.h:21
inline void CJointIndexData::CJointIndexData(CJointIndexData &)
{
} /* size: 0 */

// <064C694A> ../public/modellib/jointindexbuilder.h:21
void CJointIndexData::~CJointIndexData()
{
} /* size: 0 */

// <064C692E> ../public/modellib/jointindexbuilder.h:21
inline void CJointIndexData::~CJointIndexData()
{
} /* size: 0 */

// <064C690D> ../public/modellib/jointindexbuilder.h:21
inline void CJointIndexData::operator=(CJointIndexData &)
{
} /* size: 0 */

// <064BE11A> ../public/modellib/jointindexbuilder.h:21
// member functions: 7
// member variables: 3
// struct size: 16
struct CJointIndexData {
	int m_nIndex; /* 0 4 */
	CUtlStringToken m_hash; /* 4 4 */
	CUtlString m_String; /* 8 8 */
	/* ../public/modellib/jointindexbuilder.h:27 */
	void CJointIndexData(CJointIndexData* );
	/* ../public/modellib/jointindexbuilder.h:28 */
	void CJointIndexData(CJointIndexData* , int, const char* );
	/* ../public/modellib/jointindexbuilder.h:35 */
	int CompareHash(const CJointIndexData* , const CJointIndexData* );
	/* ../public/modellib/jointindexbuilder.h:41 */
	int CompareString(const CJointIndexData* , const CJointIndexData* );
	CJointIndexData& operator=(CJointIndexData* , CJointIndexData& );
	void ~CJointIndexData(CJointIndexData* );
	void CJointIndexData(CJointIndexData* , CJointIndexData& );
};

// <064DED4E> ../public/modellib/jointindexbuilder.h:27
void CJointIndexData::CJointIndexData()
{
} /* size: 0 */

// <064DED35> ../public/modellib/jointindexbuilder.h:27
inline void CJointIndexData::CJointIndexData()
{
} /* size: 0 */

// <064DECF8> ../public/modellib/jointindexbuilder.h:35
void CompareHash(const CJointIndexData* pLeft, const CJointIndexData* pRight)
{
} /* size: 20 */

// <064DEC06> ../public/modellib/jointindexbuilder.h:41
// variables: 2
// function calls: 2
void CompareString(const CJointIndexData* pLeft, const CJointIndexData* pRight)
{
	const char* pStrLeft; // 43
	const char* pStrRight; // 44
	CUtlString::IsEmpty(); // 43
	CUtlString::IsEmpty(); // 44
} /* size: 92, variables: 2, inline expansions: 2 (27 bytes) */

