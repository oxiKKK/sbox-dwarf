
//
// public/vanimlib/ik/ikdata.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 4
//	structs: 2
//

// <00CBBB8F> ../public/vanimlib/ik/ikdata.h:9
void CIKData_t::CIKData_t()
{
} /* size: 0 */

// <00CBBB73> ../public/vanimlib/ik/ikdata.h:9
inline void CIKData_t::CIKData_t()
{
} /* size: 0 */

// <00CBBB5C> ../public/vanimlib/ik/ikdata.h:9
void CIKData_t::~CIKData_t()
{
} /* size: 0 */

// <00CBBB40> ../public/vanimlib/ik/ikdata.h:9
inline void CIKData_t::~CIKData_t()
{
} /* size: 0 */

// <000DF18C> ../public/vanimlib/ik/ikdata.h:9
// member functions: 3
// member variables: 2
// struct size: 128
struct CIKData_t {
	/* ../public/vanimlib/ik/ikdata.h:12 */
	void KV3TransferSave(const CIKData_t* , CKV3TransferSaveContext* );
	/* ../public/vanimlib/ik/ikdata.h:13 */
	void KV3TransferLoad(CIKData_t* , CKV3TransferLoadContext* );
	/* ../public/vanimlib/ik/ikdata.h:15 */
	bool Initialize(CIKData_t* , const CModel* , const CSpaceAgnosticBoneAccessor& );
	CUtlVector<CIKChainData_t, CUtlMemory<CIKChainData_t, int> > m_IKChains; /* 0 32 */
	CIKControlRigData_t m_ControlRigData; /* 32 96 */
};

// <00B74BEF> ../public/vanimlib/ik/ikdata.h:9
// member functions: 5
// member variables: 2
// struct size: 128
struct CIKData_t {
	/* ../public/vanimlib/ik/ikdata.h:12 */
	void KV3TransferSave(const CIKData_t* , CKV3TransferSaveContext* );
	/* ../public/vanimlib/ik/ikdata.h:13 */
	void KV3TransferLoad(CIKData_t* , CKV3TransferLoadContext* );
	/* ../public/vanimlib/ik/ikdata.h:15 */
	bool Initialize(CIKData_t* , const CModel* , const CSpaceAgnosticBoneAccessor& );
	CUtlVector<CIKChainData_t, CUtlMemory<CIKChainData_t, int> > m_IKChains; /* 0 32 */
	CIKControlRigData_t m_ControlRigData; /* 32 96 */
	void ~CIKData_t(CIKData_t* );
	void CIKData_t(CIKData_t* );
};

