
//
// public/tier0/fastsweep.h
//
//	referenced by: libengine2.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 239
//	classes: 14
//	structs: 4
//

// <044B8115> ../public/tier0/fastsweep.h:36
void SweepDescriptor_t::SweepDescriptor_t()
{
} /* size: 0 */

// <044B80F9> ../public/tier0/fastsweep.h:36
inline void SweepDescriptor_t::SweepDescriptor_t()
{
} /* size: 0 */

// <0447E73E> ../public/tier0/fastsweep.h:36
// member function: 1
// member variable: 1
// struct size: 12
struct SweepDescriptor_t {
	IntVector3D m_vBlockIndex; /* 0 12 */
	void SweepDescriptor_t(SweepDescriptor_t* );
};

// <044B80D7> ../public/tier0/fastsweep.h:42
void QueuedSweepNode_t::QueuedSweepNode_t()
{
} /* size: 0 */

// <044B80BB> ../public/tier0/fastsweep.h:42
inline void QueuedSweepNode_t::QueuedSweepNode_t()
{
} /* size: 0 */

// <0447E773> ../public/tier0/fastsweep.h:42
// member functions: 10
// member variables: 5
// struct size: 100
struct QueuedSweepNode_t {
	uint8 m_nNumBlocks; /* 0 1 */
	uint8 m_nWhichSweep; /* 1 1 */
	uint8 m_nBlockFlags; /* 2 1 */
	uint8 m_nLimit; /* 3 1 */
	SweepDescriptor_t m_blocksToProcess[8]; /* 4 96 */
	/* ../public/tier0/fastsweep.h:50 */
	bool IsCompatibleWith(QueuedSweepNode_t* , const QueuedSweepNode_t& );
	/* ../public/tier0/fastsweep.h:57 */
	void Clear(QueuedSweepNode_t* );
	/* ../public/tier0/fastsweep.h:59 */
	uint8 SpaceRemaining(const QueuedSweepNode_t* );
	/* ../public/tier0/fastsweep.h:63 */
	uint8 Count(const QueuedSweepNode_t* );
	/* ../public/tier0/fastsweep.h:65 */
	bool IsFull(const QueuedSweepNode_t* );
	/* ../public/tier0/fastsweep.h:69 */
	bool IsEmpty(const QueuedSweepNode_t* );
	/* ../public/tier0/fastsweep.h:73 */
	void Dump(const QueuedSweepNode_t* , const char* );
	/* ../public/tier0/fastsweep.h:89 */
	bool QueueSweep(QueuedSweepNode_t* , const IntVector3D& , int, uint8);
	/* ../public/tier0/fastsweep.h:109 */
	void FillFrom(QueuedSweepNode_t* , QueuedSweepNode_t& );
	void QueuedSweepNode_t(QueuedSweepNode_t* );
};

// <044FF097> ../public/tier0/fastsweep.h:50
inline void QueuedSweepNode_t::IsCompatibleWith(const QueuedSweepNode_t& other)
{
} /* size: 0 */

// <044FF07E> ../public/tier0/fastsweep.h:57
inline void QueuedSweepNode_t::Clear()
{
} /* size: 0 */

// <044FF065> ../public/tier0/fastsweep.h:59
inline void QueuedSweepNode_t::SpaceRemaining()
{
} /* size: 0 */

// <044FF04C> ../public/tier0/fastsweep.h:63
inline void QueuedSweepNode_t::Count()
{
} /* size: 0 */

// <044FF033> ../public/tier0/fastsweep.h:65
inline void QueuedSweepNode_t::IsFull()
{
} /* size: 0 */

// <044FF01A> ../public/tier0/fastsweep.h:69
inline void QueuedSweepNode_t::IsEmpty()
{
} /* size: 0 */

// <044FEFDD> ../public/tier0/fastsweep.h:89
inline void QueuedSweepNode_t::QueueSweep(const IntVector3D& vBlockIndex, int nWhichSweep, uint8 nBlockFlags)
{
} /* size: 0 */

// <044FEF9D> ../public/tier0/fastsweep.h:109
// variables: 2
inline void QueuedSweepNode_t::FillFrom(QueuedSweepNode_t& other)
{
	{
		uint8 nNumBlocksToMove; // 118
		{
			int i; // 119
		}
	}
} /* size: 0 */

// <044DF37E> ../public/tier0/fastsweep.h:132
void JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls>::JoinedClasses_t()
{
} /* size: 0 */

// <044DF362> ../public/tier0/fastsweep.h:132
inline void JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls>::JoinedClasses_t()
{
} /* size: 0 */

// <044DF340> ../public/tier0/fastsweep.h:132
void JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls>::JoinedClasses_t()
{
} /* size: 0 */

// <044DF324> ../public/tier0/fastsweep.h:132
inline void JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls>::JoinedClasses_t()
{
} /* size: 0 */

// <044DEB11> ../public/tier0/fastsweep.h:132
void JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls>::JoinedClasses_t()
{
} /* size: 0 */

// <044DEAF5> ../public/tier0/fastsweep.h:132
inline void JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls>::JoinedClasses_t()
{
} /* size: 0 */

// <044DE4D8> ../public/tier0/fastsweep.h:132
void JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls>::JoinedClasses_t()
{
} /* size: 0 */

// <044DE4BC> ../public/tier0/fastsweep.h:132
inline void JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls>::JoinedClasses_t()
{
} /* size: 0 */

// <04487963> ../public/tier0/fastsweep.h:132
// member functions: 2
// member variables: 2
// class size: 32
class JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> : public CValveThreadingControls, public CEikonalExecuteControls {
public:
	/* class CValveThreadingControls <ancestor>; */ /* 0 0 */
	/* class CEikonalExecuteControls <ancestor>; */ /* 0 32 */
	void JoinedClasses_t(JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls>* );
	void JoinedClasses_t(class JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> *); /* linkage=_ZN15JoinedClasses_tI23CValveThreadingControls29CHeatTransferEquationControlsEC4Ev */
};

// <044879B1> ../public/tier0/fastsweep.h:132
// member function: 1
// member variables: 2
// class size: 32
class JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> : public CNonThreadedControls, public CEikonalExecuteControls {
public:
	/* class CNonThreadedControls <ancestor>; */ /* 0 0 */
	/* class CEikonalExecuteControls <ancestor>; */ /* 0 32 */
	void JoinedClasses_t(JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls>* );
};

// <04487B24> ../public/tier0/fastsweep.h:132
// member function: 1
// member variables: 2
// class size: 24
class JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> : public CNonThreadedControls, public CDistanceFieldReinitializationControls {
public:
	/* class CNonThreadedControls <ancestor>; */ /* 0 0 */
	/* class CDistanceFieldReinitializationControls <ancestor>; */ /* 0 24 */
	void JoinedClasses_t(JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls>* );
};

// <04487CDC> ../public/tier0/fastsweep.h:132
// member functions: 2
// member variables: 2
// class size: 40
class JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> : public CValveThreadingControls, public CHeatTransferEquationControls {
public:
	/* class CValveThreadingControls <ancestor>; */ /* 0 0 */
	/* class CHeatTransferEquationControls <ancestor>; */ /* 0 40 */
	void JoinedClasses_t(JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls>* );
	void JoinedClasses_t(class JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> *); /* linkage=_ZN15JoinedClasses_tI23CValveThreadingControls29CHeatTransferEquationControlsEC4Ev */
};

// <04487E64> ../public/tier0/fastsweep.h:132
// member variables: 2
// class size: 40
class JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> : public CNonThreadedControls, public CGutterFillingControls {
public:
	/* class CNonThreadedControls <ancestor>; */ /* 0 0 */
	/* class CGutterFillingControls <ancestor>; */ /* 0 40 */
};

// <0447EBC9> ../public/tier0/fastsweep.h:155
// member functions: 5
// member variables: 2
// struct size: 16
struct ArrayReference_t<IntVector3D> {
	IntVector3D * m_pBase; /* 0 8 */
	int m_nCount; /* 8 4 */
	/* ../public/tier0/fastsweep.h:160 */
	void ArrayReference_t(ArrayReference_t<IntVector3D>* , IntVector3D* , int);
	/* ../public/tier0/fastsweep.h:161 */
	bool operator bool(const ArrayReference_t<IntVector3D>* );
	/* ../public/tier0/fastsweep.h:162 */
	IntVector3D* begin(ArrayReference_t<IntVector3D>* );
	/* ../public/tier0/fastsweep.h:163 */
	IntVector3D* end(ArrayReference_t<IntVector3D>* );
	/* ../public/tier0/fastsweep.h:164 */
	IntVector3D& operator[](ArrayReference_t<IntVector3D>* , int);
};

// <044D961D> ../public/tier0/fastsweep.h:160
void ArrayReference_t<IntVector3D>::ArrayReference_t(IntVector3D* pBase, int nCount)
{
} /* size: 0 */

// <044D95EC> ../public/tier0/fastsweep.h:160
inline void ArrayReference_t<IntVector3D>::ArrayReference_t(IntVector3D* pBase, int nCount)
{
} /* size: 0 */

// <044A63C6> ../public/tier0/fastsweep.h:162
inline void ArrayReference_t<IntVector3D>::begin()
{
} /* size: 0 */

// <044A63AD> ../public/tier0/fastsweep.h:163
inline void ArrayReference_t<IntVector3D>::end()
{
} /* size: 0 */

// <0447E9AA> ../public/tier0/fastsweep.h:167
// member functions: 7
// class size: 1
class CExecuteControlsBase {
	/* ../public/tier0/fastsweep.h:170 */
	int GetNumSweeps(const IntAABB_t& );
	/* ../public/tier0/fastsweep.h:178 */
	IntVector3D GetBlockSize(IntAABB_t);
	/* ../public/tier0/fastsweep.h:187 */
	int ShouldDecompose(int, IntVector3D);
	/* ../public/tier0/fastsweep.h:192 */
	uint8 GetMaxBatchSize(void);
	/* ../public/tier0/fastsweep.h:194 */
	uint8 CalculateBlockFlags(const IntVector3D& , int, CFastSweepControllerBase* );
	/* ../public/tier0/fastsweep.h:197 */
	ArrayReference_t<IntVector3D> NeighborsAccessedDuringSweep(int);
	/* ../public/tier0/fastsweep.h:202 */
	bool DoesNeighborAffectSweep(int, IntVector3D);
};

// <044FEF86> ../public/tier0/fastsweep.h:170
inline void GetNumSweeps(const IntAABB_t& vBounds)
{
} /* size: 0 */

// <044FEF6F> ../public/tier0/fastsweep.h:178
inline void GetBlockSize(IntAABB_t vBounds)
{
} /* size: 0 */

// <044FEF4C> ../public/tier0/fastsweep.h:187
inline void ShouldDecompose(int nNumBlocksInDecomposition, IntVector3D vBlockSize)
{
} /* size: 0 */

// <044FEF45> ../public/tier0/fastsweep.h:192
inline void GetMaxBatchSize(void)
{
} /* size: 0 */

// <044FEF2E> ../public/tier0/fastsweep.h:197
inline void NeighborsAccessedDuringSweep(int nSweep)
{
} /* size: 0 */

// <044FEF0B> ../public/tier0/fastsweep.h:202
inline void DoesNeighborAffectSweep(int nSweep, IntVector3D vNeighborOffset)
{
} /* size: 0 */

// <0447ECC4> ../public/tier0/fastsweep.h:214
// member functions: 10
// static member variable: 1
// class size: 1
class CValveThreadingControls {
	/* ../public/tier0/fastsweep.h:220 */
	int Load(const AtomicInt32_t& );
	/* ../public/tier0/fastsweep.h:218 */
	typedef CInterlockedInt AtomicInt32_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/fastsweep.h:221 */
	uint64 Load(const AtomicUInt64_t& );
	/* ../public/tier0/fastsweep.h:217 */
	typedef CInterlockedUInt64 AtomicUInt64_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/fastsweep.h:223 */
	void Store(AtomicUInt64_t& , uint64);
	/* ../public/tier0/fastsweep.h:224 */
	void Store(AtomicInt32_t& , int);
	static int m_nMaxWorkers; /* 0 0 */
	/* ../public/tier0/fastsweep.h:228 */
	int MaxWorkers(void);
	/* ../public/tier0/fastsweep.h:230 */
	void SetMaxThreads(int);
	/* ../public/tier0/fastsweep.h:239 */
	uint64 AtomicAdd(CInterlockedUInt64& , uint64);
	/* ../public/tier0/fastsweep.h:244 */
	int AtomicAdd(AtomicInt32_t& , int);
	/* ../public/tier0/fastsweep.h:249 */
	uint64 AtomicSub(CInterlockedUInt64& , uint64);
	/* ../public/tier0/fastsweep.h:255 */
	int AtomicSub(AtomicInt32_t& , int);
};

// <044FEEEA> ../public/tier0/fastsweep.h:223
inline void Store(AtomicUInt64_t& i, uint64 val)
{
} /* size: 0 */

// <044FEEC9> ../public/tier0/fastsweep.h:224
inline void Store(AtomicInt32_t& i, int val)
{
} /* size: 0 */

// <044FEEC2> ../public/tier0/fastsweep.h:228
inline void MaxWorkers(void)
{
} /* size: 0 */

// <044FEEAB> ../public/tier0/fastsweep.h:230
inline void SetMaxThreads(int nNumWorkers)
{
} /* size: 0 */

// <044FEE7E> ../public/tier0/fastsweep.h:249
// variable: 1
inline void AtomicSub(CInterlockedUInt64& x, uint64 nIncrement)
{
	int64 nInc; // 251
} /* size: 0, variables: 1 */

// <044FEE5D> ../public/tier0/fastsweep.h:255
inline void AtomicSub(AtomicInt32_t& x, int nIncrement)
{
} /* size: 0 */

// <0447EE52> ../public/tier0/fastsweep.h:264
// member functions: 9
// class size: 1
class CNonThreadedControls {
	/* ../public/tier0/fastsweep.h:270 */
	int Load(const AtomicInt32_t& );
	/* ../public/tier0/fastsweep.h:268 */
	typedef int AtomicInt32_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/fastsweep.h:271 */
	uint64 Load(const AtomicUInt64_t& );
	/* ../public/tier0/fastsweep.h:267 */
	typedef uint64 AtomicUInt64_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/fastsweep.h:273 */
	void Store(AtomicUInt64_t& , uint64);
	/* ../public/tier0/fastsweep.h:274 */
	void Store(AtomicInt32_t& , int);
	/* ../public/tier0/fastsweep.h:276 */
	int MaxWorkers(void);
	/* ../public/tier0/fastsweep.h:284 */
	uint64 AtomicAdd(AtomicUInt64_t& , int);
	/* ../public/tier0/fastsweep.h:290 */
	int32 AtomicAdd(AtomicInt32_t& , int);
	/* ../public/tier0/fastsweep.h:296 */
	uint64 AtomicSub(AtomicUInt64_t& , uint64);
	/* ../public/tier0/fastsweep.h:302 */
	int32 AtomicSub(AtomicInt32_t& , int);
};

// <044FEDE0> ../public/tier0/fastsweep.h:296
// variable: 1
inline void AtomicSub(AtomicUInt64_t& x, uint64 nIncrement)
{
	uint64 nRet; // 298
} /* size: 0, variables: 1 */

// <044FEDB0> ../public/tier0/fastsweep.h:302
// variable: 1
inline void AtomicSub(AtomicInt32_t& x, int nIncrement)
{
	int nRet; // 304
} /* size: 0, variables: 1 */

// <044B9D63> ../public/tier0/fastsweep.h:375
void SweepGroup_t::SweepGroup_t()
{
} /* size: 0 */

// <044B9D46> ../public/tier0/fastsweep.h:375
inline void SweepGroup_t::SweepGroup_t()
{
} /* size: 0 */

// <0447EFAE> ../public/tier0/fastsweep.h:375
// member functions: 2
// member variables: 7
// struct size: 112
struct SweepGroup_t {
	SweepGroup_t * m_pNext; /* 0 8 */
	uint8 m_nNumBlocks; /* 8 1 */
	uint8 m_nBlockFlags; /* 9 1 */
	uint8 m_nSweepNumber; /* 10 1 */
	uint8 m_nNumDependentGroups; /* 11 1 */
	IntVector3D m_vBlockCoords[8]; /* 12 96 */
	int m_nDependentBlockListIndex; /* 108 4 */
	/* ../public/tier0/fastsweep.h:385 */
	void Check(const SweepGroup_t* );
	void SweepGroup_t(SweepGroup_t* );
};

// <044FED97> ../public/tier0/fastsweep.h:385
inline void SweepGroup_t::Check()
{
} /* size: 0 */

// <044BAACA> ../public/tier0/fastsweep.h:397
void CFastSweepControllerBase::CFastSweepControllerBase()
{
} /* size: 0 */

// <044BAAAD> ../public/tier0/fastsweep.h:397
inline void CFastSweepControllerBase::CFastSweepControllerBase()
{
} /* size: 0 */

// <0447EA8F> ../public/tier0/fastsweep.h:397
// member functions: 12
// member variables: 5
// class size: 56
class CFastSweepControllerBase {
	IntAABB_t m_inputBounds; /* 0 24 */
	int m_nNumSweeps; /* 24 4 */
	IntVector3D m_vNumberOfBlocks; /* 28 12 */
	IntVector3D m_vBlockSize; /* 40 12 */
	bool m_b2D; /* 52 1 */
	/* ../public/tier0/fastsweep.h:407 */
	int BlockIndex(CFastSweepControllerBase* , IntVector3D);
	/* ../public/tier0/fastsweep.h:412 */
	int NumBlocks(const CFastSweepControllerBase* );
	/* ../public/tier0/fastsweep.h:417 */
	IntAABB_t BlockBounds(CFastSweepControllerBase* , IntVector3D);
	/* ../public/tier0/fastsweep.h:428 */
	bool BlockExists(const CFastSweepControllerBase* , IntVector3D);
	/* ../public/tier0/fastsweep.h:439 */
	bool BlockIsOnBorder(const CFastSweepControllerBase* , IntVector3D);
	void CFastSweepControllerBase(CFastSweepControllerBase* );
	int BlockIndex(class CFastSweepControllerBase *, class IntVector3D); /* linkage=_ZN24CFastSweepControllerBase10BlockIndexE11IntVector3D */
	int NumBlocks(const class CFastSweepControllerBase  *); /* linkage=_ZNK24CFastSweepControllerBase9NumBlocksEv */
	class IntAABB_t BlockBounds(class CFastSweepControllerBase *, class IntVector3D); /* linkage=_ZN24CFastSweepControllerBase11BlockBoundsE11IntVector3D */
	bool BlockExists(const class CFastSweepControllerBase  *, class IntVector3D); /* linkage=_ZNK24CFastSweepControllerBase11BlockExistsE11IntVector3D */
	bool BlockIsOnBorder(const class CFastSweepControllerBase  *, class IntVector3D); /* linkage=_ZNK24CFastSweepControllerBase15BlockIsOnBorderE11IntVector3D */
	void CFastSweepControllerBase(class CFastSweepControllerBase *); /* linkage=_ZN24CFastSweepControllerBaseC4Ev */
};

// <044FED71> ../public/tier0/fastsweep.h:407
inline void CFastSweepControllerBase::BlockIndex(IntVector3D vBlockIndex)
{
} /* size: 0 */

// <044FED58> ../public/tier0/fastsweep.h:412
inline void CFastSweepControllerBase::NumBlocks()
{
} /* size: 0 */

// <044FED18> ../public/tier0/fastsweep.h:417
// variables: 2
inline void CFastSweepControllerBase::BlockBounds(IntVector3D vBlockIndex)
{
	IntAABB_t ret; // 419
	{
		int i; // 420
	}
} /* size: 0, variables: 1 */

// <044FECF2> ../public/tier0/fastsweep.h:428
inline void CFastSweepControllerBase::BlockExists(IntVector3D vBlockIndex)
{
} /* size: 0 */

// <044FECBF> ../public/tier0/fastsweep.h:439
// variable: 1
inline void CFastSweepControllerBase::BlockIsOnBorder(IntVector3D vBlockIndex)
{
	bool bOnBorder; // 441
} /* size: 0, variables: 1 */

// <044CAB3C> ../public/tier0/fastsweep.h:456
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::~FastSweepThreadedExecutionState()
{
} /* size: 0 */

// <044CAB1F> ../public/tier0/fastsweep.h:456
inline void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::~FastSweepThreadedExecutionState()
{
} /* size: 0 */

// <044C94AD> ../public/tier0/fastsweep.h:456
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::~FastSweepThreadedExecutionState()
{
} /* size: 0 */

// <044C9490> ../public/tier0/fastsweep.h:456
inline void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::~FastSweepThreadedExecutionState()
{
} /* size: 0 */

// <044C7DF0> ../public/tier0/fastsweep.h:456
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::~FastSweepThreadedExecutionState()
{
} /* size: 0 */

// <044C7DD3> ../public/tier0/fastsweep.h:456
inline void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::~FastSweepThreadedExecutionState()
{
} /* size: 0 */

// <044C6756> ../public/tier0/fastsweep.h:456
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::~FastSweepThreadedExecutionState()
{
} /* size: 0 */

// <044C6739> ../public/tier0/fastsweep.h:456
inline void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::~FastSweepThreadedExecutionState()
{
} /* size: 0 */

// <044C50CC> ../public/tier0/fastsweep.h:456
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::~FastSweepThreadedExecutionState()
{
} /* size: 0 */

// <044C50AF> ../public/tier0/fastsweep.h:456
inline void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::~FastSweepThreadedExecutionState()
{
} /* size: 0 */

// <04488B02> ../public/tier0/fastsweep.h:456
// member functions: 17
// member variables: 14
// class size: 384
class FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> > : public CFastSweepControllerBase {
public:
	/* class CFastSweepControllerBase <ancestor>; */ /* 0 56 */
	/* ../public/tier0/fastsweep.h:460 */
	typedef AtomicInt32_t AtomicInt32_t;
	AtomicInt32_t m_nNumJobsRemaining __attribute__((__aligned__(4))); /* 56 4 */
	AtomicInt32_t m_nNumWaitersOnEvent __attribute__((__aligned__(4))); /* 60 4 */
	JobEvent_t m_queueChangeEvent; /* 64 8 */
	JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> m_controls; /* 72 32 */
	CTSQueue<QueuedSweepNode_t, false> m_sweepQueue __attribute__((__aligned__(16))); /* 112 64 */
	CTSQueue<SweepGroup_t*, false> m_sweepGroupQueue __attribute__((__aligned__(16))); /* 176 64 */
	unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long unsigned int, 8> []> > m_pBlockStates; /* 240 8 */
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> > m_pGroups; /* 248 8 */
	unique_ptr<SweepGroup_t* [], std::default_delete<SweepGroup_t* []> > m_pSliceGroups; /* 256 8 */
	unique_ptr<unsigned int [], std::default_delete<unsigned int []> > m_nBlockGroup[8]; /* 264 64 */
	unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> > m_nNumOutstandingDependencies; /* 328 8 */
	int m_nNextFreeGroup; /* 336 4 */
	CUtlBlockVector<unsigned int, int> m_nDependenciesList; /* 344 32 */
	/* ../public/tier0/fastsweep.h:459 */
	typedef AtomicUInt64_t AtomicUInt64_t;
	/* ../public/tier0/fastsweep.h:482 */
	AtomicUInt64_t& BlockState(FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >* , int, int, int);
	/* ../public/tier0/fastsweep.h:487 */
	AtomicUInt64_t& BlockState(FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >* , IntVector3D);
	/* ../public/tier0/fastsweep.h:493 */
	void QueueSweep(FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >* , SweepGroup_t* );
	/* ../public/tier0/fastsweep.h:505 */
	void QueueSweep(FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >* , const QueuedSweepNode_t& );
	/* ../public/tier0/fastsweep.h:938 */
	void ProcessFinishedSweep(FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >* , IntVector3D, int, QueuedSweepNode_t& );
	/* ../public/tier0/fastsweep.h:1189 */
	void ProcessFinishedGroup(FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >* , SweepGroup_t* );
	/* ../public/tier0/fastsweep.h:519 */
	void ExecuteSweep(FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >* , IntVector3D, int);
	/* ../public/tier0/fastsweep.h:547 */
	void ExecuteSweepGroup(FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >* , SweepGroup_t* );
	/* ../public/tier0/fastsweep.h:618 */
	void FastSweepThreadedExecutionState(FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >* , const JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls>& , const IntAABB_t& );
	/* ../public/tier0/fastsweep.h:660 */
	void SetupAlgorithm1(FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >* );
	/* ../public/tier0/fastsweep.h:726 */
	void SetupAlgorithm2(FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >* );
	/* ../public/tier0/fastsweep.h:802 */
	void CalculateDependenciesForAlgorithm2(FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >* );
	/* ../public/tier0/fastsweep.h:1168 */
	void Run(FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >* );
	/* ../public/tier0/fastsweep.h:1216 */
	void RunAlgorithm2(FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >* );
	/* ../public/tier0/fastsweep.h:1033 */
	void RunThread(FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >* );
	/* ../public/tier0/fastsweep.h:1116 */
	void RunThread2(FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >* );
	void ~FastSweepThreadedExecutionState(FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >* );
} __attribute__((__aligned__(16)));

// <04489107> ../public/tier0/fastsweep.h:456
// member functions: 34
// member variables: 14
// class size: 384
class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> > : public CFastSweepControllerBase {
public:
	/* class CFastSweepControllerBase <ancestor>; */ /* 0 56 */
	/* ../public/tier0/fastsweep.h:460 */
	typedef AtomicInt32_t AtomicInt32_t;
	AtomicInt32_t m_nNumJobsRemaining; /* 56 4 */
	AtomicInt32_t m_nNumWaitersOnEvent; /* 60 4 */
	JobEvent_t m_queueChangeEvent; /* 64 8 */
	JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> m_controls; /* 72 32 */
	CTSQueue<QueuedSweepNode_t, false> m_sweepQueue __attribute__((__aligned__(16))); /* 112 64 */
	CTSQueue<SweepGroup_t*, false> m_sweepGroupQueue __attribute__((__aligned__(16))); /* 176 64 */
	unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> > m_pBlockStates; /* 240 8 */
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> > m_pGroups; /* 248 8 */
	unique_ptr<SweepGroup_t* [], std::default_delete<SweepGroup_t* []> > m_pSliceGroups; /* 256 8 */
	unique_ptr<unsigned int [], std::default_delete<unsigned int []> > m_nBlockGroup[8]; /* 264 64 */
	unique_ptr<int [], std::default_delete<int []> > m_nNumOutstandingDependencies; /* 328 8 */
	int m_nNextFreeGroup; /* 336 4 */
	CUtlBlockVector<unsigned int, int> m_nDependenciesList; /* 344 32 */
	/* ../public/tier0/fastsweep.h:459 */
	typedef AtomicUInt64_t AtomicUInt64_t;
	/* ../public/tier0/fastsweep.h:482 */
	AtomicUInt64_t& BlockState(FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >* , int, int, int);
	/* ../public/tier0/fastsweep.h:487 */
	AtomicUInt64_t& BlockState(FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >* , IntVector3D);
	/* ../public/tier0/fastsweep.h:493 */
	void QueueSweep(FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >* , SweepGroup_t* );
	/* ../public/tier0/fastsweep.h:505 */
	void QueueSweep(FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >* , const QueuedSweepNode_t& );
	/* ../public/tier0/fastsweep.h:938 */
	void ProcessFinishedSweep(FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >* , IntVector3D, int, QueuedSweepNode_t& );
	/* ../public/tier0/fastsweep.h:1189 */
	void ProcessFinishedGroup(FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >* , SweepGroup_t* );
	/* ../public/tier0/fastsweep.h:519 */
	void ExecuteSweep(FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >* , IntVector3D, int);
	/* ../public/tier0/fastsweep.h:547 */
	void ExecuteSweepGroup(FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >* , SweepGroup_t* );
	/* ../public/tier0/fastsweep.h:618 */
	void FastSweepThreadedExecutionState(FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >* , const JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls>& , const IntAABB_t& );
	/* ../public/tier0/fastsweep.h:660 */
	void SetupAlgorithm1(FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >* );
	/* ../public/tier0/fastsweep.h:726 */
	void SetupAlgorithm2(FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >* );
	/* ../public/tier0/fastsweep.h:802 */
	void CalculateDependenciesForAlgorithm2(FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >* );
	/* ../public/tier0/fastsweep.h:1168 */
	void Run(FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >* );
	/* ../public/tier0/fastsweep.h:1216 */
	void RunAlgorithm2(FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >* );
	/* ../public/tier0/fastsweep.h:1033 */
	void RunThread(FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >* );
	/* ../public/tier0/fastsweep.h:1116 */
	void RunThread2(FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >* );
	void ~FastSweepThreadedExecutionState(FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >* );
	AtomicUInt64_t & BlockState(class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > *, int, int, int); /* linkage=_ZN31FastSweepThreadedExecutionStateI15JoinedClasses_tI20CNonThreadedControls22CGutterFillingControlsEE10BlockStateEiii */
	AtomicUInt64_t & BlockState(class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > *, class IntVector3D); /* linkage=_ZN31FastSweepThreadedExecutionStateI15JoinedClasses_tI20CNonThreadedControls22CGutterFillingControlsEE10BlockStateE11IntVector3D */
	void QueueSweep(class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > *, class SweepGroup_t *); /* linkage=_ZN31FastSweepThreadedExecutionStateI15JoinedClasses_tI20CNonThreadedControls22CGutterFillingControlsEE10QueueSweepEP12SweepGroup_t */
	void QueueSweep(class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > *, const class QueuedSweepNode_t  &); /* linkage=_ZN31FastSweepThreadedExecutionStateI15JoinedClasses_tI20CNonThreadedControls22CGutterFillingControlsEE10QueueSweepERK17QueuedSweepNode_t */
	void ProcessFinishedSweep(class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > *, class IntVector3D, int, class QueuedSweepNode_t &); /* linkage=_ZN31FastSweepThreadedExecutionStateI15JoinedClasses_tI20CNonThreadedControls22CGutterFillingControlsEE20ProcessFinishedSweepE11IntVector3DiR17QueuedSweepNode_t */
	void ProcessFinishedGroup(class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > *, class SweepGroup_t *); /* linkage=_ZN31FastSweepThreadedExecutionStateI15JoinedClasses_tI20CNonThreadedControls22CGutterFillingControlsEE20ProcessFinishedGroupEP12SweepGroup_t */
	void ExecuteSweep(class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > *, class IntVector3D, int); /* linkage=_ZN31FastSweepThreadedExecutionStateI15JoinedClasses_tI20CNonThreadedControls22CGutterFillingControlsEE12ExecuteSweepE11IntVector3Di */
	void ExecuteSweepGroup(class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > *, class SweepGroup_t *); /* linkage=_ZN31FastSweepThreadedExecutionStateI15JoinedClasses_tI20CNonThreadedControls22CGutterFillingControlsEE17ExecuteSweepGroupEP12SweepGroup_t */
	void FastSweepThreadedExecutionState(class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > *, const class JoinedClasses_t<CNonThreadedControls, CGutterFillingControls>  &, const class IntAABB_t  &); /* linkage=_ZN31FastSweepThreadedExecutionStateI15JoinedClasses_tI20CNonThreadedControls22CGutterFillingControlsEEC4ERKS3_RK9IntAABB_t */
	void SetupAlgorithm1(class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > *); /* linkage=_ZN31FastSweepThreadedExecutionStateI15JoinedClasses_tI20CNonThreadedControls22CGutterFillingControlsEE15SetupAlgorithm1Ev */
	void SetupAlgorithm2(class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > *); /* linkage=_ZN31FastSweepThreadedExecutionStateI15JoinedClasses_tI20CNonThreadedControls22CGutterFillingControlsEE15SetupAlgorithm2Ev */
	void CalculateDependenciesForAlgorithm2(class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > *); /* linkage=_ZN31FastSweepThreadedExecutionStateI15JoinedClasses_tI20CNonThreadedControls22CGutterFillingControlsEE34CalculateDependenciesForAlgorithm2Ev */
	void Run(class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > *); /* linkage=_ZN31FastSweepThreadedExecutionStateI15JoinedClasses_tI20CNonThreadedControls22CGutterFillingControlsEE3RunEv */
	void RunAlgorithm2(class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > *); /* linkage=_ZN31FastSweepThreadedExecutionStateI15JoinedClasses_tI20CNonThreadedControls22CGutterFillingControlsEE13RunAlgorithm2Ev */
	void RunThread(class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > *); /* linkage=_ZN31FastSweepThreadedExecutionStateI15JoinedClasses_tI20CNonThreadedControls22CGutterFillingControlsEE9RunThreadEv */
	void RunThread2(class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > *); /* linkage=_ZN31FastSweepThreadedExecutionStateI15JoinedClasses_tI20CNonThreadedControls22CGutterFillingControlsEE10RunThread2Ev */
	void ~FastSweepThreadedExecutionState(class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > *); /* linkage=_ZN31FastSweepThreadedExecutionStateI15JoinedClasses_tI20CNonThreadedControls22CGutterFillingControlsEED4Ev */
} __attribute__((__aligned__(16)));

// <04489487> ../public/tier0/fastsweep.h:456
// member functions: 34
// member variables: 14
// class size: 368
class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> > : public CFastSweepControllerBase {
public:
	/* class CFastSweepControllerBase <ancestor>; */ /* 0 56 */
	/* ../public/tier0/fastsweep.h:460 */
	typedef AtomicInt32_t AtomicInt32_t;
	AtomicInt32_t m_nNumJobsRemaining; /* 56 4 */
	AtomicInt32_t m_nNumWaitersOnEvent; /* 60 4 */
	JobEvent_t m_queueChangeEvent; /* 64 8 */
	JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> m_controls; /* 72 24 */
	CTSQueue<QueuedSweepNode_t, false> m_sweepQueue __attribute__((__aligned__(16))); /* 96 64 */
	CTSQueue<SweepGroup_t*, false> m_sweepGroupQueue __attribute__((__aligned__(16))); /* 160 64 */
	unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> > m_pBlockStates; /* 224 8 */
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> > m_pGroups; /* 232 8 */
	unique_ptr<SweepGroup_t* [], std::default_delete<SweepGroup_t* []> > m_pSliceGroups; /* 240 8 */
	unique_ptr<unsigned int [], std::default_delete<unsigned int []> > m_nBlockGroup[8]; /* 248 64 */
	unique_ptr<int [], std::default_delete<int []> > m_nNumOutstandingDependencies; /* 312 8 */
	int m_nNextFreeGroup; /* 320 4 */
	CUtlBlockVector<unsigned int, int> m_nDependenciesList; /* 328 32 */
	/* ../public/tier0/fastsweep.h:459 */
	typedef AtomicUInt64_t AtomicUInt64_t;
	/* ../public/tier0/fastsweep.h:482 */
	AtomicUInt64_t& BlockState(FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >* , int, int, int);
	/* ../public/tier0/fastsweep.h:487 */
	AtomicUInt64_t& BlockState(FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >* , IntVector3D);
	/* ../public/tier0/fastsweep.h:493 */
	void QueueSweep(FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >* , SweepGroup_t* );
	/* ../public/tier0/fastsweep.h:505 */
	void QueueSweep(FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >* , const QueuedSweepNode_t& );
	/* ../public/tier0/fastsweep.h:938 */
	void ProcessFinishedSweep(FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >* , IntVector3D, int, QueuedSweepNode_t& );
	/* ../public/tier0/fastsweep.h:1189 */
	void ProcessFinishedGroup(FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >* , SweepGroup_t* );
	/* ../public/tier0/fastsweep.h:519 */
	void ExecuteSweep(FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >* , IntVector3D, int);
	/* ../public/tier0/fastsweep.h:547 */
	void ExecuteSweepGroup(FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >* , SweepGroup_t* );
	/* ../public/tier0/fastsweep.h:618 */
	void FastSweepThreadedExecutionState(FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >* , const JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls>& , const IntAABB_t& );
	/* ../public/tier0/fastsweep.h:660 */
	void SetupAlgorithm1(FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >* );
	/* ../public/tier0/fastsweep.h:726 */
	void SetupAlgorithm2(FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >* );
	/* ../public/tier0/fastsweep.h:802 */
	void CalculateDependenciesForAlgorithm2(FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >* );
	/* ../public/tier0/fastsweep.h:1168 */
	void Run(FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >* );
	/* ../public/tier0/fastsweep.h:1216 */
	void RunAlgorithm2(FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >* );
	/* ../public/tier0/fastsweep.h:1033 */
	void RunThread(FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >* );
	/* ../public/tier0/fastsweep.h:1116 */
	void RunThread2(FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >* );
	void ~FastSweepThreadedExecutionState(FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >* );
	AtomicUInt64_t & BlockState(class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > *, int, int, int); /* linkage=_ZN31FastSweepThreadedExecutionStateI15JoinedClasses_tI20CNonThreadedControls22CGutterFillingControlsEE10BlockStateEiii */
	AtomicUInt64_t & BlockState(class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > *, class IntVector3D); /* linkage=_ZN31FastSweepThreadedExecutionStateI15JoinedClasses_tI20CNonThreadedControls22CGutterFillingControlsEE10BlockStateE11IntVector3D */
	void QueueSweep(class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > *, class SweepGroup_t *); /* linkage=_ZN31FastSweepThreadedExecutionStateI15JoinedClasses_tI20CNonThreadedControls22CGutterFillingControlsEE10QueueSweepEP12SweepGroup_t */
	void QueueSweep(class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > *, const class QueuedSweepNode_t  &); /* linkage=_ZN31FastSweepThreadedExecutionStateI15JoinedClasses_tI20CNonThreadedControls22CGutterFillingControlsEE10QueueSweepERK17QueuedSweepNode_t */
	void ProcessFinishedSweep(class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > *, class IntVector3D, int, class QueuedSweepNode_t &); /* linkage=_ZN31FastSweepThreadedExecutionStateI15JoinedClasses_tI20CNonThreadedControls22CGutterFillingControlsEE20ProcessFinishedSweepE11IntVector3DiR17QueuedSweepNode_t */
	void ProcessFinishedGroup(class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > *, class SweepGroup_t *); /* linkage=_ZN31FastSweepThreadedExecutionStateI15JoinedClasses_tI20CNonThreadedControls22CGutterFillingControlsEE20ProcessFinishedGroupEP12SweepGroup_t */
	void ExecuteSweep(class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > *, class IntVector3D, int); /* linkage=_ZN31FastSweepThreadedExecutionStateI15JoinedClasses_tI20CNonThreadedControls22CGutterFillingControlsEE12ExecuteSweepE11IntVector3Di */
	void ExecuteSweepGroup(class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > *, class SweepGroup_t *); /* linkage=_ZN31FastSweepThreadedExecutionStateI15JoinedClasses_tI20CNonThreadedControls22CGutterFillingControlsEE17ExecuteSweepGroupEP12SweepGroup_t */
	void FastSweepThreadedExecutionState(class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > *, const class JoinedClasses_t<CNonThreadedControls, CGutterFillingControls>  &, const class IntAABB_t  &); /* linkage=_ZN31FastSweepThreadedExecutionStateI15JoinedClasses_tI20CNonThreadedControls22CGutterFillingControlsEEC4ERKS3_RK9IntAABB_t */
	void SetupAlgorithm1(class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > *); /* linkage=_ZN31FastSweepThreadedExecutionStateI15JoinedClasses_tI20CNonThreadedControls22CGutterFillingControlsEE15SetupAlgorithm1Ev */
	void SetupAlgorithm2(class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > *); /* linkage=_ZN31FastSweepThreadedExecutionStateI15JoinedClasses_tI20CNonThreadedControls22CGutterFillingControlsEE15SetupAlgorithm2Ev */
	void CalculateDependenciesForAlgorithm2(class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > *); /* linkage=_ZN31FastSweepThreadedExecutionStateI15JoinedClasses_tI20CNonThreadedControls22CGutterFillingControlsEE34CalculateDependenciesForAlgorithm2Ev */
	void Run(class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > *); /* linkage=_ZN31FastSweepThreadedExecutionStateI15JoinedClasses_tI20CNonThreadedControls22CGutterFillingControlsEE3RunEv */
	void RunAlgorithm2(class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > *); /* linkage=_ZN31FastSweepThreadedExecutionStateI15JoinedClasses_tI20CNonThreadedControls22CGutterFillingControlsEE13RunAlgorithm2Ev */
	void RunThread(class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > *); /* linkage=_ZN31FastSweepThreadedExecutionStateI15JoinedClasses_tI20CNonThreadedControls22CGutterFillingControlsEE9RunThreadEv */
	void RunThread2(class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > *); /* linkage=_ZN31FastSweepThreadedExecutionStateI15JoinedClasses_tI20CNonThreadedControls22CGutterFillingControlsEE10RunThread2Ev */
	void ~FastSweepThreadedExecutionState(class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > *); /* linkage=_ZN31FastSweepThreadedExecutionStateI15JoinedClasses_tI20CNonThreadedControls22CGutterFillingControlsEED4Ev */
} __attribute__((__aligned__(16)));

// <04489807> ../public/tier0/fastsweep.h:456
// member functions: 17
// member variables: 14
// class size: 384
class FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> > : public CFastSweepControllerBase {
public:
	/* class CFastSweepControllerBase <ancestor>; */ /* 0 56 */
	/* ../public/tier0/fastsweep.h:460 */
	typedef AtomicInt32_t AtomicInt32_t;
	AtomicInt32_t m_nNumJobsRemaining __attribute__((__aligned__(4))); /* 56 4 */
	AtomicInt32_t m_nNumWaitersOnEvent __attribute__((__aligned__(4))); /* 60 4 */
	JobEvent_t m_queueChangeEvent; /* 64 8 */
	JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> m_controls; /* 72 40 */
	CTSQueue<QueuedSweepNode_t, false> m_sweepQueue __attribute__((__aligned__(16))); /* 112 64 */
	CTSQueue<SweepGroup_t*, false> m_sweepGroupQueue __attribute__((__aligned__(16))); /* 176 64 */
	unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long unsigned int, 8> []> > m_pBlockStates; /* 240 8 */
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> > m_pGroups; /* 248 8 */
	unique_ptr<SweepGroup_t* [], std::default_delete<SweepGroup_t* []> > m_pSliceGroups; /* 256 8 */
	unique_ptr<unsigned int [], std::default_delete<unsigned int []> > m_nBlockGroup[8]; /* 264 64 */
	unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> > m_nNumOutstandingDependencies; /* 328 8 */
	int m_nNextFreeGroup; /* 336 4 */
	CUtlBlockVector<unsigned int, int> m_nDependenciesList; /* 344 32 */
	/* ../public/tier0/fastsweep.h:459 */
	typedef AtomicUInt64_t AtomicUInt64_t;
	/* ../public/tier0/fastsweep.h:482 */
	AtomicUInt64_t& BlockState(FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >* , int, int, int);
	/* ../public/tier0/fastsweep.h:487 */
	AtomicUInt64_t& BlockState(FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >* , IntVector3D);
	/* ../public/tier0/fastsweep.h:493 */
	void QueueSweep(FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >* , SweepGroup_t* );
	/* ../public/tier0/fastsweep.h:505 */
	void QueueSweep(FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >* , const QueuedSweepNode_t& );
	/* ../public/tier0/fastsweep.h:938 */
	void ProcessFinishedSweep(FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >* , IntVector3D, int, QueuedSweepNode_t& );
	/* ../public/tier0/fastsweep.h:1189 */
	void ProcessFinishedGroup(FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >* , SweepGroup_t* );
	/* ../public/tier0/fastsweep.h:519 */
	void ExecuteSweep(FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >* , IntVector3D, int);
	/* ../public/tier0/fastsweep.h:547 */
	void ExecuteSweepGroup(FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >* , SweepGroup_t* );
	/* ../public/tier0/fastsweep.h:618 */
	void FastSweepThreadedExecutionState(FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >* , const JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls>& , const IntAABB_t& );
	/* ../public/tier0/fastsweep.h:660 */
	void SetupAlgorithm1(FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >* );
	/* ../public/tier0/fastsweep.h:726 */
	void SetupAlgorithm2(FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >* );
	/* ../public/tier0/fastsweep.h:802 */
	void CalculateDependenciesForAlgorithm2(FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >* );
	/* ../public/tier0/fastsweep.h:1168 */
	void Run(FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >* );
	/* ../public/tier0/fastsweep.h:1216 */
	void RunAlgorithm2(FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >* );
	/* ../public/tier0/fastsweep.h:1033 */
	void RunThread(FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >* );
	/* ../public/tier0/fastsweep.h:1116 */
	void RunThread2(FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >* );
	void ~FastSweepThreadedExecutionState(FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >* );
} __attribute__((__aligned__(16)));

// <04489B8F> ../public/tier0/fastsweep.h:456
// member functions: 34
// member variables: 14
// class size: 384
class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > : public CFastSweepControllerBase {
public:
	/* class CFastSweepControllerBase <ancestor>; */ /* 0 56 */
	/* ../public/tier0/fastsweep.h:460 */
	typedef AtomicInt32_t AtomicInt32_t;
	AtomicInt32_t m_nNumJobsRemaining; /* 56 4 */
	AtomicInt32_t m_nNumWaitersOnEvent; /* 60 4 */
	JobEvent_t m_queueChangeEvent; /* 64 8 */
	JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> m_controls; /* 72 40 */
	CTSQueue<QueuedSweepNode_t, false> m_sweepQueue __attribute__((__aligned__(16))); /* 112 64 */
	CTSQueue<SweepGroup_t*, false> m_sweepGroupQueue __attribute__((__aligned__(16))); /* 176 64 */
	unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> > m_pBlockStates; /* 240 8 */
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> > m_pGroups; /* 248 8 */
	unique_ptr<SweepGroup_t* [], std::default_delete<SweepGroup_t* []> > m_pSliceGroups; /* 256 8 */
	unique_ptr<unsigned int [], std::default_delete<unsigned int []> > m_nBlockGroup[8]; /* 264 64 */
	unique_ptr<int [], std::default_delete<int []> > m_nNumOutstandingDependencies; /* 328 8 */
	int m_nNextFreeGroup; /* 336 4 */
	CUtlBlockVector<unsigned int, int> m_nDependenciesList; /* 344 32 */
	/* ../public/tier0/fastsweep.h:459 */
	typedef AtomicUInt64_t AtomicUInt64_t;
	/* ../public/tier0/fastsweep.h:482 */
	AtomicUInt64_t& BlockState(FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >* , int, int, int);
	/* ../public/tier0/fastsweep.h:487 */
	AtomicUInt64_t& BlockState(FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >* , IntVector3D);
	/* ../public/tier0/fastsweep.h:493 */
	void QueueSweep(FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >* , SweepGroup_t* );
	/* ../public/tier0/fastsweep.h:505 */
	void QueueSweep(FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >* , const QueuedSweepNode_t& );
	/* ../public/tier0/fastsweep.h:938 */
	void ProcessFinishedSweep(FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >* , IntVector3D, int, QueuedSweepNode_t& );
	/* ../public/tier0/fastsweep.h:1189 */
	void ProcessFinishedGroup(FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >* , SweepGroup_t* );
	/* ../public/tier0/fastsweep.h:519 */
	void ExecuteSweep(FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >* , IntVector3D, int);
	/* ../public/tier0/fastsweep.h:547 */
	void ExecuteSweepGroup(FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >* , SweepGroup_t* );
	/* ../public/tier0/fastsweep.h:618 */
	void FastSweepThreadedExecutionState(FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >* , const JoinedClasses_t<CNonThreadedControls, CGutterFillingControls>& , const IntAABB_t& );
	/* ../public/tier0/fastsweep.h:660 */
	void SetupAlgorithm1(FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >* );
	/* ../public/tier0/fastsweep.h:726 */
	void SetupAlgorithm2(FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >* );
	/* ../public/tier0/fastsweep.h:802 */
	void CalculateDependenciesForAlgorithm2(FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >* );
	/* ../public/tier0/fastsweep.h:1168 */
	void Run(FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >* );
	/* ../public/tier0/fastsweep.h:1216 */
	void RunAlgorithm2(FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >* );
	/* ../public/tier0/fastsweep.h:1033 */
	void RunThread(FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >* );
	/* ../public/tier0/fastsweep.h:1116 */
	void RunThread2(FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >* );
	void ~FastSweepThreadedExecutionState(FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >* );
	AtomicUInt64_t & BlockState(class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > *, int, int, int); /* linkage=_ZN31FastSweepThreadedExecutionStateI15JoinedClasses_tI20CNonThreadedControls22CGutterFillingControlsEE10BlockStateEiii */
	AtomicUInt64_t & BlockState(class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > *, class IntVector3D); /* linkage=_ZN31FastSweepThreadedExecutionStateI15JoinedClasses_tI20CNonThreadedControls22CGutterFillingControlsEE10BlockStateE11IntVector3D */
	void QueueSweep(class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > *, class SweepGroup_t *); /* linkage=_ZN31FastSweepThreadedExecutionStateI15JoinedClasses_tI20CNonThreadedControls22CGutterFillingControlsEE10QueueSweepEP12SweepGroup_t */
	void QueueSweep(class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > *, const class QueuedSweepNode_t  &); /* linkage=_ZN31FastSweepThreadedExecutionStateI15JoinedClasses_tI20CNonThreadedControls22CGutterFillingControlsEE10QueueSweepERK17QueuedSweepNode_t */
	void ProcessFinishedSweep(class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > *, class IntVector3D, int, class QueuedSweepNode_t &); /* linkage=_ZN31FastSweepThreadedExecutionStateI15JoinedClasses_tI20CNonThreadedControls22CGutterFillingControlsEE20ProcessFinishedSweepE11IntVector3DiR17QueuedSweepNode_t */
	void ProcessFinishedGroup(class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > *, class SweepGroup_t *); /* linkage=_ZN31FastSweepThreadedExecutionStateI15JoinedClasses_tI20CNonThreadedControls22CGutterFillingControlsEE20ProcessFinishedGroupEP12SweepGroup_t */
	void ExecuteSweep(class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > *, class IntVector3D, int); /* linkage=_ZN31FastSweepThreadedExecutionStateI15JoinedClasses_tI20CNonThreadedControls22CGutterFillingControlsEE12ExecuteSweepE11IntVector3Di */
	void ExecuteSweepGroup(class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > *, class SweepGroup_t *); /* linkage=_ZN31FastSweepThreadedExecutionStateI15JoinedClasses_tI20CNonThreadedControls22CGutterFillingControlsEE17ExecuteSweepGroupEP12SweepGroup_t */
	void FastSweepThreadedExecutionState(class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > *, const class JoinedClasses_t<CNonThreadedControls, CGutterFillingControls>  &, const class IntAABB_t  &); /* linkage=_ZN31FastSweepThreadedExecutionStateI15JoinedClasses_tI20CNonThreadedControls22CGutterFillingControlsEEC4ERKS3_RK9IntAABB_t */
	void SetupAlgorithm1(class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > *); /* linkage=_ZN31FastSweepThreadedExecutionStateI15JoinedClasses_tI20CNonThreadedControls22CGutterFillingControlsEE15SetupAlgorithm1Ev */
	void SetupAlgorithm2(class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > *); /* linkage=_ZN31FastSweepThreadedExecutionStateI15JoinedClasses_tI20CNonThreadedControls22CGutterFillingControlsEE15SetupAlgorithm2Ev */
	void CalculateDependenciesForAlgorithm2(class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > *); /* linkage=_ZN31FastSweepThreadedExecutionStateI15JoinedClasses_tI20CNonThreadedControls22CGutterFillingControlsEE34CalculateDependenciesForAlgorithm2Ev */
	void Run(class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > *); /* linkage=_ZN31FastSweepThreadedExecutionStateI15JoinedClasses_tI20CNonThreadedControls22CGutterFillingControlsEE3RunEv */
	void RunAlgorithm2(class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > *); /* linkage=_ZN31FastSweepThreadedExecutionStateI15JoinedClasses_tI20CNonThreadedControls22CGutterFillingControlsEE13RunAlgorithm2Ev */
	void RunThread(class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > *); /* linkage=_ZN31FastSweepThreadedExecutionStateI15JoinedClasses_tI20CNonThreadedControls22CGutterFillingControlsEE9RunThreadEv */
	void RunThread2(class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > *); /* linkage=_ZN31FastSweepThreadedExecutionStateI15JoinedClasses_tI20CNonThreadedControls22CGutterFillingControlsEE10RunThread2Ev */
	void ~FastSweepThreadedExecutionState(class FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> > *); /* linkage=_ZN31FastSweepThreadedExecutionStateI15JoinedClasses_tI20CNonThreadedControls22CGutterFillingControlsEED4Ev */
} __attribute__((__aligned__(16)));

// <044973E0> ../public/tier0/fastsweep.h:482
inline void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::BlockState(int nXBlock, int nYBlock, int nZBlock)
{
} /* size: 0 */

// <044954F5> ../public/tier0/fastsweep.h:482
inline void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::BlockState(int nXBlock, int nYBlock, int nZBlock)
{
} /* size: 0 */

// <04494371> ../public/tier0/fastsweep.h:482
inline void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::BlockState(int nXBlock, int nYBlock, int nZBlock)
{
} /* size: 0 */

// <04492C08> ../public/tier0/fastsweep.h:482
inline void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::BlockState(int nXBlock, int nYBlock, int nZBlock)
{
} /* size: 0 */

// <0449167D> ../public/tier0/fastsweep.h:482
inline void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::BlockState(int nXBlock, int nYBlock, int nZBlock)
{
} /* size: 0 */

// <044A6387> ../public/tier0/fastsweep.h:487
inline void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::BlockState(IntVector3D vBlockIndex)
{
} /* size: 0 */

// <044A360D> ../public/tier0/fastsweep.h:487
inline void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::BlockState(IntVector3D vBlockIndex)
{
} /* size: 0 */

// <044A0D5F> ../public/tier0/fastsweep.h:487
inline void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::BlockState(IntVector3D vBlockIndex)
{
} /* size: 0 */

// <0449DCC6> ../public/tier0/fastsweep.h:487
inline void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::BlockState(IntVector3D vBlockIndex)
{
} /* size: 0 */

// <0449A6E0> ../public/tier0/fastsweep.h:487
inline void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::BlockState(IntVector3D vBlockIndex)
{
} /* size: 0 */

// <044978C9> ../public/tier0/fastsweep.h:493
// variable: 1
inline void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::QueueSweep(SweepGroup_t* pGroup)
{
	bool bNotify; // 496
} /* size: 0, variables: 1 */

// <0449573F> ../public/tier0/fastsweep.h:493
// variable: 1
inline void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::QueueSweep(SweepGroup_t* pGroup)
{
	bool bNotify; // 496
} /* size: 0, variables: 1 */

// <04494549> ../public/tier0/fastsweep.h:493
// variable: 1
inline void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::QueueSweep(SweepGroup_t* pGroup)
{
	bool bNotify; // 496
} /* size: 0, variables: 1 */

// <0449304C> ../public/tier0/fastsweep.h:493
// variable: 1
inline void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::QueueSweep(SweepGroup_t* pGroup)
{
	bool bNotify; // 496
} /* size: 0, variables: 1 */

// <04491855> ../public/tier0/fastsweep.h:493
// variable: 1
inline void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::QueueSweep(SweepGroup_t* pGroup)
{
	bool bNotify; // 496
} /* size: 0, variables: 1 */

// <044A6354> ../public/tier0/fastsweep.h:505
// variable: 1
inline void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::QueueSweep(const QueuedSweepNode_t& node)
{
	bool bNotify; // 507
} /* size: 0, variables: 1 */

// <044A35DA> ../public/tier0/fastsweep.h:505
// variable: 1
inline void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::QueueSweep(const QueuedSweepNode_t& node)
{
	bool bNotify; // 507
} /* size: 0, variables: 1 */

// <044A0D2C> ../public/tier0/fastsweep.h:505
// variable: 1
inline void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::QueueSweep(const QueuedSweepNode_t& node)
{
	bool bNotify; // 507
} /* size: 0, variables: 1 */

// <0449DC93> ../public/tier0/fastsweep.h:505
// variable: 1
inline void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::QueueSweep(const QueuedSweepNode_t& node)
{
	bool bNotify; // 507
} /* size: 0, variables: 1 */

// <0449A6AD> ../public/tier0/fastsweep.h:505
// variable: 1
inline void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::QueueSweep(const QueuedSweepNode_t& node)
{
	bool bNotify; // 507
} /* size: 0, variables: 1 */

// <04496C01> ../public/tier0/fastsweep.h:519
// variables: 4
inline void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::ExecuteSweep(IntVector3D vBlockIndex, int nWhichSweep)
{
	IntAABB_t bounds; // 521
	IntVector3D vStart; // 522
	int nBoundaryMask; // 526
	{
		int nAxis; // 527
	}
} /* size: 0, variables: 3 */

// <0449548C> ../public/tier0/fastsweep.h:519
// variables: 4
inline void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::ExecuteSweep(IntVector3D vBlockIndex, int nWhichSweep)
{
	IntAABB_t bounds; // 521
	IntVector3D vStart; // 522
	int nBoundaryMask; // 526
	{
		int nAxis; // 527
	}
} /* size: 0, variables: 3 */

// <04493F8F> ../public/tier0/fastsweep.h:519
// variables: 5
// function calls: 13
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::ExecuteSweep(IntVector3D vBlockIndex, int nWhichSweep)
{
	IntAABB_t bounds; // 521
	IntVector3D vStart; // 522
	int nBoundaryMask; // 526
	{
		int nAxis; // 527
	}
	IntVector3D::IntVector3D(); // 301
	IntVector3D::IntVector3D(); // 301
	GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
	IntAABB_t::IntAABB_t(); // 419
	{
		int i; // 420
	}
	CFastSweepControllerBase::BlockBounds(
			IntVector3D vBlockIndex);  // 521
	IntVector3D::IntVector3D(); // 522
	IntAABB_t::Width(); // 457
	IntAABB_t::Depth(); // 457
	IntAABB_t::Height(); // 457
	IntVector3D::IntVector3D(
			int nX,
			int nY,
			int nZ);  // 457
	IntAABB_t::Size(); // 3574
	IntVector3D::IntVector3D(
			int nX,
			int nY,
			int nZ);  // 3574
	CDistanceFieldReinitializationControls::ExecuteOnBlock(
			IntVector3D vBlockIndex,
			int nWhichSweep,
			const IntAABB_t& vBounds,
			IntVector3D vStart,
			CFastSweepControllerBase* pController,
			int nBoundaryMask);  // 544
} /* size: 0, variables: 3, inline expansions: 13 (0 bytes) */

// <04492B9F> ../public/tier0/fastsweep.h:519
// variables: 4
inline void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::ExecuteSweep(IntVector3D vBlockIndex, int nWhichSweep)
{
	IntAABB_t bounds; // 521
	IntVector3D vStart; // 522
	int nBoundaryMask; // 526
	{
		int nAxis; // 527
	}
} /* size: 0, variables: 3 */

// <04491614> ../public/tier0/fastsweep.h:519
// variables: 4
inline void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::ExecuteSweep(IntVector3D vBlockIndex, int nWhichSweep)
{
	IntAABB_t bounds; // 521
	IntVector3D vStart; // 522
	int nBoundaryMask; // 526
	{
		int nAxis; // 527
	}
} /* size: 0, variables: 3 */

// <04512288> ../public/tier0/fastsweep.h:547
// variables: 6
// function calls: 15
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::ExecuteSweepGroup(SweepGroup_t* pWorkItem)
{
	{
		int nIndex; // 559
		int nWhichSweep; // 560
		{
			IntAABB_t bounds; // 563
			IntVector3D vStart; // 564
			IntAABB_t::Depth(); // 457
			IntAABB_t::Width(); // 457
			IntAABB_t::Height(); // 457
			IntVector3D::IntVector3D(
					int nX,
					int nY,
					int nZ);  // 457
			IntAABB_t::Size(); // 3574
			IntVector3D::IntVector3D(
					int nX,
					int nY,
					int nZ);  // 3574
			CDistanceFieldReinitializationControls::ExecuteOnBlock(
					IntVector3D vBlockIndex,
					int nWhichSweep,
					const IntAABB_t& vBounds,
					IntVector3D vStart,
					CFastSweepControllerBase* pController,
					int nBoundaryMask);  // 581
			IntVector3D::IntVector3D(); // 301
			IntVector3D::IntVector3D(); // 301
			GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
			IntAABB_t::IntAABB_t(); // 419
			{
				int i; // 420
			}
			CFastSweepControllerBase::BlockBounds(
					IntVector3D vBlockIndex);  // 563
			IntVector3D::IntVector3D(); // 564
			{
			}
			CDistanceFieldReinitializationControls::ExecuteOn4Blocks(
					IntVector3D vBlockIndex0,
					IntVector3D vBlockIndex1,
					IntVector3D vBlockIndex2,
					IntVector3D vBlockIndex3,
					int nWhichSweep,
					const IntAABB_t& vBounds,
					IntVector3D vStart,
					CFastSweepControllerBase* pController);  // 571
		}
	}
	{
		int i; // 551
	}
	FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::ExecuteSweepGroup(
				SweepGroup_t* pWorkItem);  // 547
} /* size: 0, inline expansions: 1 (0 bytes) */

// <04511ED4> ../public/tier0/fastsweep.h:547
// variables: 8
// function calls: 14
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::ExecuteSweepGroup(SweepGroup_t* pWorkItem)
{
	{
		int nIndex; // 559
		int nWhichSweep; // 560
		{
			IntAABB_t bounds; // 563
			IntVector3D vStart; // 564
			IntVector3D::IntVector3D(); // 301
			IntVector3D::IntVector3D(); // 301
			GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
			IntAABB_t::IntAABB_t(); // 419
			{
				int i; // 420
			}
			CFastSweepControllerBase::BlockBounds(
					IntVector3D vBlockIndex);  // 563
			IntVector3D::IntVector3D(); // 564
		}
	}
	{
		int i; // 551
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 419
		{
			int i; // 420
		}
		CFastSweepControllerBase::BlockBounds(
				IntVector3D vBlockIndex);  // 521
		IntVector3D::IntVector3D(); // 522
		{
			int nAxis; // 527
		}
		FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::ExecuteSweep(
				IntVector3D vBlockIndex,
				int nWhichSweep);  // 554
	}
	FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::ExecuteSweepGroup(
				SweepGroup_t* pWorkItem);  // 547
} /* size: 0, inline expansions: 1 (0 bytes) */

// <04511B20> ../public/tier0/fastsweep.h:547
// variables: 8
// function calls: 14
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::ExecuteSweepGroup(SweepGroup_t* pWorkItem)
{
	{
		int nIndex; // 559
		int nWhichSweep; // 560
		{
			IntAABB_t bounds; // 563
			IntVector3D vStart; // 564
			IntVector3D::IntVector3D(); // 301
			IntVector3D::IntVector3D(); // 301
			GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
			IntAABB_t::IntAABB_t(); // 419
			{
				int i; // 420
			}
			CFastSweepControllerBase::BlockBounds(
					IntVector3D vBlockIndex);  // 563
			IntVector3D::IntVector3D(); // 564
		}
	}
	{
		int i; // 551
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 419
		{
			int i; // 420
		}
		CFastSweepControllerBase::BlockBounds(
				IntVector3D vBlockIndex);  // 521
		IntVector3D::IntVector3D(); // 522
		{
			int nAxis; // 527
		}
		FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::ExecuteSweep(
				IntVector3D vBlockIndex,
				int nWhichSweep);  // 554
	}
	FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::ExecuteSweepGroup(
				SweepGroup_t* pWorkItem);  // 547
} /* size: 790, inline expansions: 1 (328 bytes) */

// <044977E6> ../public/tier0/fastsweep.h:547
// variables: 5
inline void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::ExecuteSweepGroup(SweepGroup_t* pWorkItem)
{
	{
		int i; // 551
	}
	{
		int nIndex; // 559
		int nWhichSweep; // 560
		{
			IntAABB_t bounds; // 563
			IntVector3D vStart; // 564
		}
	}
} /* size: 0 */

// <0449568F> ../public/tier0/fastsweep.h:547
// variables: 5
inline void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::ExecuteSweepGroup(SweepGroup_t* pWorkItem)
{
	{
		int i; // 551
	}
	{
		int nIndex; // 559
		int nWhichSweep; // 560
		{
			IntAABB_t bounds; // 563
			IntVector3D vStart; // 564
		}
	}
} /* size: 0 */

// <044944DA> ../public/tier0/fastsweep.h:547
// variables: 5
inline void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::ExecuteSweepGroup(SweepGroup_t* pWorkItem)
{
	{
		int i; // 551
	}
	{
		int nIndex; // 559
		int nWhichSweep; // 560
		{
			IntAABB_t bounds; // 563
			IntVector3D vStart; // 564
		}
	}
} /* size: 0 */

// <04492FDD> ../public/tier0/fastsweep.h:547
// variables: 5
inline void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::ExecuteSweepGroup(SweepGroup_t* pWorkItem)
{
	{
		int i; // 551
	}
	{
		int nIndex; // 559
		int nWhichSweep; // 560
		{
			IntAABB_t bounds; // 563
			IntVector3D vStart; // 564
		}
	}
} /* size: 0 */

// <044917E6> ../public/tier0/fastsweep.h:547
// variables: 5
inline void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::ExecuteSweepGroup(SweepGroup_t* pWorkItem)
{
	{
		int i; // 551
	}
	{
		int nIndex; // 559
		int nWhichSweep; // 560
		{
			IntAABB_t bounds; // 563
			IntVector3D vStart; // 564
		}
	}
} /* size: 0 */

// <044FEC7C> ../public/tier0/fastsweep.h:601
// variable: 1
inline void CalculateBlockFlags(const IntVector3D& vBlockIndex, int nWhichSweep, CFastSweepControllerBase* pSweeper)
{
	uint8 nRet; // 604
} /* size: 0, variables: 1 */

// <044BAA69> ../public/tier0/fastsweep.h:618
// variables: 2
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::FastSweepThreadedExecutionState(const JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls>& controls, const IntAABB_t& bounds)
{
	{
		{
			bool bDoAsOneBlock; // 644
			{
				int nSize; // 634
			}
			{
			}
		}
	}
} /* size: 0 */

// <044BA9F4> ../public/tier0/fastsweep.h:618
// variables: 4
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::FastSweepThreadedExecutionState(const JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls>& controls, const IntAABB_t& bounds)
{
	const char   __FUNCTION__; // 6844
	{
		bool bDoAsOneBlock; // 644
		{
			int nSize; // 634
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 654
		}
	}
} /* size: 0, variables: 1 */

// <044B68D5> ../public/tier0/fastsweep.h:618
// variables: 2
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::FastSweepThreadedExecutionState(const JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls>& controls, const IntAABB_t& bounds)
{
	{
		{
			bool bDoAsOneBlock; // 644
			{
				int nSize; // 634
			}
			{
			}
		}
	}
} /* size: 0 */

// <044B6860> ../public/tier0/fastsweep.h:618
// variables: 4
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::FastSweepThreadedExecutionState(const JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls>& controls, const IntAABB_t& bounds)
{
	const char   __FUNCTION__; // 6844
	{
		bool bDoAsOneBlock; // 644
		{
			int nSize; // 634
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 654
		}
	}
} /* size: 0, variables: 1 */

// <044B45BB> ../public/tier0/fastsweep.h:618
// variables: 2
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::FastSweepThreadedExecutionState(const JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls>& controls, const IntAABB_t& bounds)
{
	{
		{
			bool bDoAsOneBlock; // 644
			{
				int nSize; // 634
			}
			{
			}
		}
	}
} /* size: 0 */

// <044B4546> ../public/tier0/fastsweep.h:618
// variables: 4
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::FastSweepThreadedExecutionState(const JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls>& controls, const IntAABB_t& bounds)
{
	const char   __FUNCTION__; // 6844
	{
		bool bDoAsOneBlock; // 644
		{
			int nSize; // 634
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 654
		}
	}
} /* size: 0, variables: 1 */

// <044B2337> ../public/tier0/fastsweep.h:618
// variables: 2
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::FastSweepThreadedExecutionState(const JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls>& controls, const IntAABB_t& bounds)
{
	{
		{
			bool bDoAsOneBlock; // 644
			{
				int nSize; // 634
			}
			{
			}
		}
	}
} /* size: 0 */

// <044B22C2> ../public/tier0/fastsweep.h:618
// variables: 4
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::FastSweepThreadedExecutionState(const JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls>& controls, const IntAABB_t& bounds)
{
	const char   __FUNCTION__; // 6844
	{
		bool bDoAsOneBlock; // 644
		{
			int nSize; // 634
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 654
		}
	}
} /* size: 0, variables: 1 */

// <044AEEC2> ../public/tier0/fastsweep.h:618
// variables: 2
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::FastSweepThreadedExecutionState(const JoinedClasses_t<CNonThreadedControls, CGutterFillingControls>& controls, const IntAABB_t& bounds)
{
	{
		{
			bool bDoAsOneBlock; // 644
			{
				int nSize; // 634
			}
			{
			}
		}
	}
} /* size: 0 */

// <044AEE4D> ../public/tier0/fastsweep.h:618
// variables: 4
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::FastSweepThreadedExecutionState(const JoinedClasses_t<CNonThreadedControls, CGutterFillingControls>& controls, const IntAABB_t& bounds)
{
	const char   __FUNCTION__; // 6844
	{
		bool bDoAsOneBlock; // 644
		{
			int nSize; // 634
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 654
		}
	}
} /* size: 0, variables: 1 */

// <01B16106> ../public/tier0/fastsweep.h:618
// variables: 4
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::FastSweepThreadedExecutionState(const JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls>& controls, const IntAABB_t& bounds)
{
	const char   __FUNCTION__; // 47233
	{
		bool bDoAsOneBlock; // 644
		{
			int nSize; // 634
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 654
		}
	}
} /* size: 0, variables: 1 */

// <01B11F72> ../public/tier0/fastsweep.h:618
// variables: 4
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::FastSweepThreadedExecutionState(const JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls>& controls, const IntAABB_t& bounds)
{
	const char   __FUNCTION__; // 47233
	{
		bool bDoAsOneBlock; // 644
		{
			int nSize; // 634
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 654
		}
	}
} /* size: 0, variables: 1 */

// <01B0FC58> ../public/tier0/fastsweep.h:618
// variables: 4
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::FastSweepThreadedExecutionState(const JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls>& controls, const IntAABB_t& bounds)
{
	const char   __FUNCTION__; // 47233
	{
		bool bDoAsOneBlock; // 644
		{
			int nSize; // 634
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 654
		}
	}
} /* size: 0, variables: 1 */

// <01B0D9D4> ../public/tier0/fastsweep.h:618
// variables: 4
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::FastSweepThreadedExecutionState(const JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls>& controls, const IntAABB_t& bounds)
{
	const char   __FUNCTION__; // 47233
	{
		bool bDoAsOneBlock; // 644
		{
			int nSize; // 634
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 654
		}
	}
} /* size: 0, variables: 1 */

// <01B0A55F> ../public/tier0/fastsweep.h:618
// variables: 4
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::FastSweepThreadedExecutionState(const JoinedClasses_t<CNonThreadedControls, CGutterFillingControls>& controls, const IntAABB_t& bounds)
{
	const char   __FUNCTION__; // 47233
	{
		bool bDoAsOneBlock; // 644
		{
			int nSize; // 634
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 654
		}
	}
} /* size: 0, variables: 1 */

// <0099B969> ../public/tier0/fastsweep.h:618
// variables: 4
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::FastSweepThreadedExecutionState(const JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls>& controls, const IntAABB_t& bounds)
{
	const char   __FUNCTION__; // 39953
	{
		bool bDoAsOneBlock; // 644
		{
			int nSize; // 634
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 654
		}
	}
} /* size: 0, variables: 1 */

// <009977D5> ../public/tier0/fastsweep.h:618
// variables: 4
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::FastSweepThreadedExecutionState(const JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls>& controls, const IntAABB_t& bounds)
{
	const char   __FUNCTION__; // 39953
	{
		bool bDoAsOneBlock; // 644
		{
			int nSize; // 634
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 654
		}
	}
} /* size: 0, variables: 1 */

// <009954BB> ../public/tier0/fastsweep.h:618
// variables: 4
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::FastSweepThreadedExecutionState(const JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls>& controls, const IntAABB_t& bounds)
{
	const char   __FUNCTION__; // 39953
	{
		bool bDoAsOneBlock; // 644
		{
			int nSize; // 634
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 654
		}
	}
} /* size: 0, variables: 1 */

// <00993237> ../public/tier0/fastsweep.h:618
// variables: 4
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::FastSweepThreadedExecutionState(const JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls>& controls, const IntAABB_t& bounds)
{
	const char   __FUNCTION__; // 39953
	{
		bool bDoAsOneBlock; // 644
		{
			int nSize; // 634
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 654
		}
	}
} /* size: 0, variables: 1 */

// <0098FDC2> ../public/tier0/fastsweep.h:618
// variables: 4
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::FastSweepThreadedExecutionState(const JoinedClasses_t<CNonThreadedControls, CGutterFillingControls>& controls, const IntAABB_t& bounds)
{
	const char   __FUNCTION__; // 39953
	{
		bool bDoAsOneBlock; // 644
		{
			int nSize; // 634
		}
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 654
		}
	}
} /* size: 0, variables: 1 */

// <044B7224> ../public/tier0/fastsweep.h:660
// variables: 19
// function calls: 59
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::SetupAlgorithm1()
{
	{
		IntVector3D vBlockIndex; // 664
		IntAABB_CellRangeReference& __for_range; // 29357
		IntAABBIterator __for_begin; // 9767
		IntAABBIterator __for_end; // 9767
		{
			uint64 nDependencyCounts; // 666
			bool bCanStartSweep0; // 714
			{
				int nSweep; // 667
				{
					uint64 nNumDeps; // 670
					{
						IntVector3D vOfs; // 676
						ArrayReference_t<IntVector3D>& __for_range; // 44586
						IntVector3D* __for_begin; // 6100
						IntVector3D* __for_end; // 6100
						{
							IntVector3D vNeighborCoords; // 679
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 219
							IntVector3D::operator+(
									const IntVector3D& rhs);  // 679
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 680
						}
						ArrayReference_t<IntVector3D>::ArrayReference_t(
								IntVector3D* pBase,
								int nCount);  // 199
						NeighborsAccessedDuringSweep(int nSweep); // 676
					}
					{
						IntVector3D vOfs; // 694
						ArrayReference_t<IntVector3D>& __for_range; // 44586
						IntVector3D* __for_begin; // 6100
						IntVector3D* __for_end; // 6100
						{
							IntVector3D vNeighborCoords; // 697
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 224
							IntVector3D::operator-(
									const IntVector3D& rhs);  // 697
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 699
						}
						ArrayReference_t<IntVector3D>::ArrayReference_t(
								IntVector3D* pBase,
								int nCount);  // 199
						NeighborsAccessedDuringSweep(int nSweep); // 694
					}
				}
			}
			{
				QueuedSweepNode_t startBlock; // 717
				QueuedSweepNode_t::QueueSweep(
						const IntVector3D& vBlockIndex,
						int nWhichSweep,
						uint8 nBlockFlags);  // 719
				CalculateBlockFlags(const IntVector3D& vBlockIndex,
							int nWhichSweep,
							CFastSweepControllerBase* pSweeper);  // 719
				QueuedSweepNode_t::QueuedSweepNode_t(); // 717
				CInterlockedIntT<int, 4>::operator!=(
						int rhs);  // 507
				FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::QueueSweep(
						const QueuedSweepNode_t& node);  // 720
			}
			IntVector3D::IntVector3D(); // 507
			IntAABBIterator::operator*(); // 664
			_M_ptr(const __uniq_ptr_impl<CInterlockedIntT<long long unsigned int, 8>, std::default_delete<CInterlockedIntT<long long u this); // 742
			get(const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long uns this); // 735
			operator[](const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long uns this,
					size_t __i);  // 484
			FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::BlockState(
					int nXBlock,
					int nYBlock,
					int nZBlock);  // 489
			FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::BlockState(
					IntVector3D vBlockIndex);  // 713
			CInterlockedIntT<long long unsigned int, 8>::SetRaw(
				long long unsigned int newValue);  // 223
			Store(AtomicUInt64_t& i,
				uint64 val);  // 713
		}
		IntVector3D::IntVector3D(
				int nX,
				int nY,
				int nZ);  // 664
		IntAABB_t::Width(); // 453
		IntAABB_t::Height(); // 453
		IntAABB_t::Depth(); // 453
		IntAABB_t::NumberOfCells(); // 525
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 491
		IntAABBIterator::IntAABBIterator(
				const IntAABB_t& domain,
				int nStartingIndex);  // 525
		IntAABB_CellRangeReference::end(); // 664
		IntVector3D::IntVector3D(); // 304
		IntVector3D::IntVector3D(); // 304
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(
					const IntVector3D& mins,
					const IntVector3D& maxes);  // 430
		IntAABB_t::IntAABB_t(
				IntVector3D a,
				IntVector3D b);  // 664
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 470
		IntAABB_CellRangeReference::IntAABB_CellRangeReference(); // 530
		IntAABB_t::IndicesNonInclusive(); // 664
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 491
		IntAABBIterator::IntAABBIterator(
				const IntAABB_t& domain,
				int nStartingIndex);  // 520
		IntAABB_CellRangeReference::begin(); // 664
	}
	default_delete<CInterlockedIntT<long long unsigned int, 8> []>::operator(
								CInterlockedIntT<long long unsigned int, 8>* __ptr);  // 204
	reset(const __uniq_ptr_impl<CInterlockedIntT<long long unsigned int, 8>, std::default_delete<CInterlockedIntT<long long unsigne this,
		pointer __p);  // 790
	reset<CInterlockedIntT<long long unsigned int>*>(const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long unsigned  this,
							CInterlockedIntT<long long unsigned int, 8>* __p);  // 662
	CFastSweepControllerBase::NumBlocks(); // 723
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 224
	Store(AtomicInt32_t& i,
		int val);  // 723
	CInterlockedIntT<long long unsigned int, 8>::CInterlockedIntT(); // 662
} /* size: 0, inline expansions: 8 (0 bytes) */

// <044B46A6> ../public/tier0/fastsweep.h:660
// variables: 19
// function calls: 54
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::SetupAlgorithm1()
{
	{
		IntVector3D vBlockIndex; // 664
		IntAABB_CellRangeReference& __for_range; // 29357
		IntAABBIterator __for_begin; // 9767
		IntAABBIterator __for_end; // 9767
		{
			uint64 nDependencyCounts; // 666
			bool bCanStartSweep0; // 714
			{
				int nSweep; // 667
				{
					uint64 nNumDeps; // 670
					{
						IntVector3D vOfs; // 676
						ArrayReference_t<IntVector3D>& __for_range; // 44586
						IntVector3D* __for_begin; // 6100
						IntVector3D* __for_end; // 6100
						{
							IntVector3D vNeighborCoords; // 679
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 219
							IntVector3D::operator+(
									const IntVector3D& rhs);  // 679
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 680
						}
						ArrayReference_t<IntVector3D>::ArrayReference_t(
								IntVector3D* pBase,
								int nCount);  // 199
						NeighborsAccessedDuringSweep(int nSweep); // 676
					}
					{
						IntVector3D vOfs; // 694
						ArrayReference_t<IntVector3D>& __for_range; // 44586
						IntVector3D* __for_begin; // 6100
						IntVector3D* __for_end; // 6100
						{
							IntVector3D vNeighborCoords; // 697
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 224
							IntVector3D::operator-(
									const IntVector3D& rhs);  // 697
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 699
						}
						ArrayReference_t<IntVector3D>::ArrayReference_t(
								IntVector3D* pBase,
								int nCount);  // 199
						NeighborsAccessedDuringSweep(int nSweep); // 694
					}
				}
			}
			{
				QueuedSweepNode_t startBlock; // 717
				QueuedSweepNode_t::QueueSweep(
						const IntVector3D& vBlockIndex,
						int nWhichSweep,
						uint8 nBlockFlags);  // 719
				CalculateBlockFlags(const IntVector3D& vBlockIndex,
							int nWhichSweep,
							CFastSweepControllerBase* pSweeper);  // 719
				QueuedSweepNode_t::QueuedSweepNode_t(); // 717
				FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::QueueSweep(
						const QueuedSweepNode_t& node);  // 720
			}
			IntVector3D::IntVector3D(); // 507
			IntAABBIterator::operator*(); // 664
			__uniq_ptr_impl<long long unsigned int, std::default_delete<long long unsigned int []> >::_M_ptr(); // 742
			unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::get(); // 735
			unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::operator[](
					size_t __i);  // 484
			FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::BlockState(
					int nXBlock,
					int nYBlock,
					int nZBlock);  // 489
			FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::BlockState(
					IntVector3D vBlockIndex);  // 713
			Store(AtomicUInt64_t& i,
				uint64 val);  // 713
		}
		IntVector3D::IntVector3D(
				int nX,
				int nY,
				int nZ);  // 664
		IntAABB_t::Width(); // 453
		IntAABB_t::Height(); // 453
		IntAABB_t::Depth(); // 453
		IntAABB_t::NumberOfCells(); // 525
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 491
		IntAABBIterator::IntAABBIterator(
				const IntAABB_t& domain,
				int nStartingIndex);  // 525
		IntAABB_CellRangeReference::end(); // 664
		IntVector3D::IntVector3D(); // 304
		IntVector3D::IntVector3D(); // 304
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(
					const IntVector3D& mins,
					const IntVector3D& maxes);  // 430
		IntAABB_t::IntAABB_t(
				IntVector3D a,
				IntVector3D b);  // 664
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 470
		IntAABB_CellRangeReference::IntAABB_CellRangeReference(); // 530
		IntAABB_t::IndicesNonInclusive(); // 664
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 491
		IntAABBIterator::IntAABBIterator(
				const IntAABB_t& domain,
				int nStartingIndex);  // 520
		IntAABB_CellRangeReference::begin(); // 664
	}
	default_delete<long long unsigned int []>::operator(
						long long unsigned int* __ptr);  // 204
	__uniq_ptr_impl<long long unsigned int, std::default_delete<long long unsigned int []> >::reset(
		pointer __p);  // 790
	unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::reset<long long unsigned int*>(
					long long unsigned int* __p);  // 662
	CFastSweepControllerBase::NumBlocks(); // 723
	Store(AtomicInt32_t& i,
		int val);  // 723
} /* size: 0, inline expansions: 5 (0 bytes) */

// <044B2422> ../public/tier0/fastsweep.h:660
// variables: 19
// function calls: 54
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::SetupAlgorithm1()
{
	{
		IntVector3D vBlockIndex; // 664
		IntAABB_CellRangeReference& __for_range; // 29357
		IntAABBIterator __for_begin; // 9767
		IntAABBIterator __for_end; // 9767
		{
			uint64 nDependencyCounts; // 666
			bool bCanStartSweep0; // 714
			{
				int nSweep; // 667
				{
					uint64 nNumDeps; // 670
					{
						IntVector3D vOfs; // 676
						ArrayReference_t<IntVector3D>& __for_range; // 44586
						IntVector3D* __for_begin; // 6100
						IntVector3D* __for_end; // 6100
						{
							IntVector3D vNeighborCoords; // 679
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 219
							IntVector3D::operator+(
									const IntVector3D& rhs);  // 679
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 680
						}
						ArrayReference_t<IntVector3D>::ArrayReference_t(
								IntVector3D* pBase,
								int nCount);  // 199
						NeighborsAccessedDuringSweep(int nSweep); // 676
					}
					{
						IntVector3D vOfs; // 694
						ArrayReference_t<IntVector3D>& __for_range; // 44586
						IntVector3D* __for_begin; // 6100
						IntVector3D* __for_end; // 6100
						{
							IntVector3D vNeighborCoords; // 697
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 224
							IntVector3D::operator-(
									const IntVector3D& rhs);  // 697
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 699
						}
						ArrayReference_t<IntVector3D>::ArrayReference_t(
								IntVector3D* pBase,
								int nCount);  // 199
						NeighborsAccessedDuringSweep(int nSweep); // 694
					}
				}
			}
			{
				QueuedSweepNode_t startBlock; // 717
				QueuedSweepNode_t::QueueSweep(
						const IntVector3D& vBlockIndex,
						int nWhichSweep,
						uint8 nBlockFlags);  // 719
				CalculateBlockFlags(const IntVector3D& vBlockIndex,
							int nWhichSweep,
							CFastSweepControllerBase* pSweeper);  // 719
				QueuedSweepNode_t::QueuedSweepNode_t(); // 717
				FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::QueueSweep(
						const QueuedSweepNode_t& node);  // 720
			}
			IntVector3D::IntVector3D(); // 507
			IntAABBIterator::operator*(); // 664
			__uniq_ptr_impl<long long unsigned int, std::default_delete<long long unsigned int []> >::_M_ptr(); // 742
			unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::get(); // 735
			unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::operator[](
					size_t __i);  // 484
			FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::BlockState(
					int nXBlock,
					int nYBlock,
					int nZBlock);  // 489
			FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::BlockState(
					IntVector3D vBlockIndex);  // 713
			Store(AtomicUInt64_t& i,
				uint64 val);  // 713
		}
		IntVector3D::IntVector3D(
				int nX,
				int nY,
				int nZ);  // 664
		IntAABB_t::Width(); // 453
		IntAABB_t::Height(); // 453
		IntAABB_t::Depth(); // 453
		IntAABB_t::NumberOfCells(); // 525
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 491
		IntAABBIterator::IntAABBIterator(
				const IntAABB_t& domain,
				int nStartingIndex);  // 525
		IntAABB_CellRangeReference::end(); // 664
		IntVector3D::IntVector3D(); // 304
		IntVector3D::IntVector3D(); // 304
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(
					const IntVector3D& mins,
					const IntVector3D& maxes);  // 430
		IntAABB_t::IntAABB_t(
				IntVector3D a,
				IntVector3D b);  // 664
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 470
		IntAABB_CellRangeReference::IntAABB_CellRangeReference(); // 530
		IntAABB_t::IndicesNonInclusive(); // 664
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 491
		IntAABBIterator::IntAABBIterator(
				const IntAABB_t& domain,
				int nStartingIndex);  // 520
		IntAABB_CellRangeReference::begin(); // 664
	}
	default_delete<long long unsigned int []>::operator(
						long long unsigned int* __ptr);  // 204
	__uniq_ptr_impl<long long unsigned int, std::default_delete<long long unsigned int []> >::reset(
		pointer __p);  // 790
	unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::reset<long long unsigned int*>(
					long long unsigned int* __p);  // 662
	CFastSweepControllerBase::NumBlocks(); // 723
	Store(AtomicInt32_t& i,
		int val);  // 723
} /* size: 0, inline expansions: 5 (0 bytes) */

// <044AF811> ../public/tier0/fastsweep.h:660
// variables: 19
// function calls: 59
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::SetupAlgorithm1()
{
	{
		IntVector3D vBlockIndex; // 664
		IntAABB_CellRangeReference& __for_range; // 29357
		IntAABBIterator __for_begin; // 9767
		IntAABBIterator __for_end; // 9767
		{
			uint64 nDependencyCounts; // 666
			bool bCanStartSweep0; // 714
			{
				int nSweep; // 667
				{
					uint64 nNumDeps; // 670
					{
						IntVector3D vOfs; // 676
						ArrayReference_t<IntVector3D>& __for_range; // 44586
						IntVector3D* __for_begin; // 6100
						IntVector3D* __for_end; // 6100
						{
							IntVector3D vNeighborCoords; // 679
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 219
							IntVector3D::operator+(
									const IntVector3D& rhs);  // 679
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 680
						}
						ArrayReference_t<IntVector3D>::ArrayReference_t(
								IntVector3D* pBase,
								int nCount);  // 199
						NeighborsAccessedDuringSweep(int nSweep); // 676
					}
					{
						IntVector3D vOfs; // 694
						ArrayReference_t<IntVector3D>& __for_range; // 44586
						IntVector3D* __for_begin; // 6100
						IntVector3D* __for_end; // 6100
						{
							IntVector3D vNeighborCoords; // 697
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 224
							IntVector3D::operator-(
									const IntVector3D& rhs);  // 697
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 699
						}
						ArrayReference_t<IntVector3D>::ArrayReference_t(
								IntVector3D* pBase,
								int nCount);  // 199
						NeighborsAccessedDuringSweep(int nSweep); // 694
					}
				}
			}
			{
				QueuedSweepNode_t startBlock; // 717
				QueuedSweepNode_t::QueueSweep(
						const IntVector3D& vBlockIndex,
						int nWhichSweep,
						uint8 nBlockFlags);  // 719
				CalculateBlockFlags(const IntVector3D& vBlockIndex,
							int nWhichSweep,
							CFastSweepControllerBase* pSweeper);  // 719
				QueuedSweepNode_t::QueuedSweepNode_t(); // 717
				CInterlockedIntT<int, 4>::operator!=(
						int rhs);  // 507
				FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::QueueSweep(
						const QueuedSweepNode_t& node);  // 720
			}
			IntVector3D::IntVector3D(); // 507
			IntAABBIterator::operator*(); // 664
			_M_ptr(const __uniq_ptr_impl<CInterlockedIntT<long long unsigned int, 8>, std::default_delete<CInterlockedIntT<long long u this); // 742
			get(const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long uns this); // 735
			operator[](const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long uns this,
					size_t __i);  // 484
			FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::BlockState(
					int nXBlock,
					int nYBlock,
					int nZBlock);  // 489
			FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::BlockState(
					IntVector3D vBlockIndex);  // 713
			CInterlockedIntT<long long unsigned int, 8>::SetRaw(
				long long unsigned int newValue);  // 223
			Store(AtomicUInt64_t& i,
				uint64 val);  // 713
		}
		IntVector3D::IntVector3D(
				int nX,
				int nY,
				int nZ);  // 664
		IntAABB_t::Width(); // 453
		IntAABB_t::Height(); // 453
		IntAABB_t::Depth(); // 453
		IntAABB_t::NumberOfCells(); // 525
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 491
		IntAABBIterator::IntAABBIterator(
				const IntAABB_t& domain,
				int nStartingIndex);  // 525
		IntAABB_CellRangeReference::end(); // 664
		IntVector3D::IntVector3D(); // 304
		IntVector3D::IntVector3D(); // 304
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(
					const IntVector3D& mins,
					const IntVector3D& maxes);  // 430
		IntAABB_t::IntAABB_t(
				IntVector3D a,
				IntVector3D b);  // 664
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 470
		IntAABB_CellRangeReference::IntAABB_CellRangeReference(); // 530
		IntAABB_t::IndicesNonInclusive(); // 664
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 491
		IntAABBIterator::IntAABBIterator(
				const IntAABB_t& domain,
				int nStartingIndex);  // 520
		IntAABB_CellRangeReference::begin(); // 664
	}
	default_delete<CInterlockedIntT<long long unsigned int, 8> []>::operator(
								CInterlockedIntT<long long unsigned int, 8>* __ptr);  // 204
	reset(const __uniq_ptr_impl<CInterlockedIntT<long long unsigned int, 8>, std::default_delete<CInterlockedIntT<long long unsigne this,
		pointer __p);  // 790
	reset<CInterlockedIntT<long long unsigned int>*>(const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long unsigned  this,
							CInterlockedIntT<long long unsigned int, 8>* __p);  // 662
	CFastSweepControllerBase::NumBlocks(); // 723
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 224
	Store(AtomicInt32_t& i,
		int val);  // 723
	CInterlockedIntT<long long unsigned int, 8>::CInterlockedIntT(); // 662
} /* size: 0, inline expansions: 8 (0 bytes) */

// <044ACD23> ../public/tier0/fastsweep.h:660
// variables: 19
// function calls: 54
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::SetupAlgorithm1()
{
	{
		IntVector3D vBlockIndex; // 664
		IntAABB_CellRangeReference& __for_range; // 29357
		IntAABBIterator __for_begin; // 9767
		IntAABBIterator __for_end; // 9767
		{
			uint64 nDependencyCounts; // 666
			bool bCanStartSweep0; // 714
			{
				int nSweep; // 667
				{
					uint64 nNumDeps; // 670
					{
						IntVector3D vOfs; // 676
						ArrayReference_t<IntVector3D>& __for_range; // 44586
						IntVector3D* __for_begin; // 6100
						IntVector3D* __for_end; // 6100
						{
							IntVector3D vNeighborCoords; // 679
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 219
							IntVector3D::operator+(
									const IntVector3D& rhs);  // 679
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 680
						}
						ArrayReference_t<IntVector3D>::ArrayReference_t(
								IntVector3D* pBase,
								int nCount);  // 199
						NeighborsAccessedDuringSweep(int nSweep); // 676
					}
					{
						IntVector3D vOfs; // 694
						ArrayReference_t<IntVector3D>& __for_range; // 44586
						IntVector3D* __for_begin; // 6100
						IntVector3D* __for_end; // 6100
						{
							IntVector3D vNeighborCoords; // 697
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 224
							IntVector3D::operator-(
									const IntVector3D& rhs);  // 697
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 699
						}
						ArrayReference_t<IntVector3D>::ArrayReference_t(
								IntVector3D* pBase,
								int nCount);  // 199
						NeighborsAccessedDuringSweep(int nSweep); // 694
					}
				}
			}
			{
				QueuedSweepNode_t startBlock; // 717
				QueuedSweepNode_t::QueueSweep(
						const IntVector3D& vBlockIndex,
						int nWhichSweep,
						uint8 nBlockFlags);  // 719
				CalculateBlockFlags(const IntVector3D& vBlockIndex,
							int nWhichSweep,
							CFastSweepControllerBase* pSweeper);  // 719
				QueuedSweepNode_t::QueuedSweepNode_t(); // 717
				FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::QueueSweep(
						const QueuedSweepNode_t& node);  // 720
			}
			IntVector3D::IntVector3D(); // 507
			IntAABBIterator::operator*(); // 664
			__uniq_ptr_impl<long long unsigned int, std::default_delete<long long unsigned int []> >::_M_ptr(); // 742
			unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::get(); // 735
			unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::operator[](
					size_t __i);  // 484
			FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::BlockState(
					int nXBlock,
					int nYBlock,
					int nZBlock);  // 489
			FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::BlockState(
					IntVector3D vBlockIndex);  // 713
			Store(AtomicUInt64_t& i,
				uint64 val);  // 713
		}
		IntVector3D::IntVector3D(
				int nX,
				int nY,
				int nZ);  // 664
		IntAABB_t::Width(); // 453
		IntAABB_t::Height(); // 453
		IntAABB_t::Depth(); // 453
		IntAABB_t::NumberOfCells(); // 525
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 491
		IntAABBIterator::IntAABBIterator(
				const IntAABB_t& domain,
				int nStartingIndex);  // 525
		IntAABB_CellRangeReference::end(); // 664
		IntVector3D::IntVector3D(); // 304
		IntVector3D::IntVector3D(); // 304
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(
					const IntVector3D& mins,
					const IntVector3D& maxes);  // 430
		IntAABB_t::IntAABB_t(
				IntVector3D a,
				IntVector3D b);  // 664
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 470
		IntAABB_CellRangeReference::IntAABB_CellRangeReference(); // 530
		IntAABB_t::IndicesNonInclusive(); // 664
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 491
		IntAABBIterator::IntAABBIterator(
				const IntAABB_t& domain,
				int nStartingIndex);  // 520
		IntAABB_CellRangeReference::begin(); // 664
	}
	default_delete<long long unsigned int []>::operator(
						long long unsigned int* __ptr);  // 204
	__uniq_ptr_impl<long long unsigned int, std::default_delete<long long unsigned int []> >::reset(
		pointer __p);  // 790
	unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::reset<long long unsigned int*>(
					long long unsigned int* __p);  // 662
	CFastSweepControllerBase::NumBlocks(); // 723
	Store(AtomicInt32_t& i,
		int val);  // 723
} /* size: 0, inline expansions: 5 (0 bytes) */

// <01B12936> ../public/tier0/fastsweep.h:660
// variables: 19
// function calls: 59
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::SetupAlgorithm1()
{
	{
		IntVector3D vBlockIndex; // 664
		IntAABB_CellRangeReference& __for_range; // 4210
		IntAABBIterator __for_begin; // 50156
		IntAABBIterator __for_end; // 50156
		{
			uint64 nDependencyCounts; // 666
			bool bCanStartSweep0; // 714
			{
				int nSweep; // 667
				{
					uint64 nNumDeps; // 670
					{
						IntVector3D vOfs; // 676
						ArrayReference_t<IntVector3D>& __for_range; // 19439
						IntVector3D* __for_begin; // 46489
						IntVector3D* __for_end; // 46489
						{
							IntVector3D vNeighborCoords; // 679
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 219
							IntVector3D::operator+(
									const IntVector3D& rhs);  // 679
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 680
						}
						ArrayReference_t<IntVector3D>::ArrayReference_t(
								IntVector3D* pBase,
								int nCount);  // 199
						NeighborsAccessedDuringSweep(int nSweep); // 676
					}
					{
						IntVector3D vOfs; // 694
						ArrayReference_t<IntVector3D>& __for_range; // 19439
						IntVector3D* __for_begin; // 46489
						IntVector3D* __for_end; // 46489
						{
							IntVector3D vNeighborCoords; // 697
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 224
							IntVector3D::operator-(
									const IntVector3D& rhs);  // 697
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 699
						}
						ArrayReference_t<IntVector3D>::ArrayReference_t(
								IntVector3D* pBase,
								int nCount);  // 199
						NeighborsAccessedDuringSweep(int nSweep); // 694
					}
				}
			}
			{
				QueuedSweepNode_t startBlock; // 717
				QueuedSweepNode_t::QueueSweep(
						const IntVector3D& vBlockIndex,
						int nWhichSweep,
						uint8 nBlockFlags);  // 719
				CalculateBlockFlags(const IntVector3D& vBlockIndex,
							int nWhichSweep,
							CFastSweepControllerBase* pSweeper);  // 719
				QueuedSweepNode_t::QueuedSweepNode_t(); // 717
				CInterlockedIntT<int, 4>::operator!=(
						int rhs);  // 507
				FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::QueueSweep(
						const QueuedSweepNode_t& node);  // 720
			}
			IntVector3D::IntVector3D(); // 507
			IntAABBIterator::operator*(); // 664
			_M_ptr(const __uniq_ptr_impl<CInterlockedIntT<long long unsigned int, 8>, std::default_delete<CInterlockedIntT<long long u this); // 742
			get(const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long uns this); // 735
			operator[](const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long uns this,
					size_t __i);  // 484
			FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::BlockState(
					int nXBlock,
					int nYBlock,
					int nZBlock);  // 489
			FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::BlockState(
					IntVector3D vBlockIndex);  // 713
			CInterlockedIntT<long long unsigned int, 8>::SetRaw(
				long long unsigned int newValue);  // 223
			Store(AtomicUInt64_t& i,
				uint64 val);  // 713
		}
		IntVector3D::IntVector3D(
				int nX,
				int nY,
				int nZ);  // 664
		IntAABB_t::Width(); // 453
		IntAABB_t::Height(); // 453
		IntAABB_t::Depth(); // 453
		IntAABB_t::NumberOfCells(); // 525
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 491
		IntAABBIterator::IntAABBIterator(
				const IntAABB_t& domain,
				int nStartingIndex);  // 525
		IntAABB_CellRangeReference::end(); // 664
		IntVector3D::IntVector3D(); // 304
		IntVector3D::IntVector3D(); // 304
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(
					const IntVector3D& mins,
					const IntVector3D& maxes);  // 430
		IntAABB_t::IntAABB_t(
				IntVector3D a,
				IntVector3D b);  // 664
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 470
		IntAABB_CellRangeReference::IntAABB_CellRangeReference(); // 530
		IntAABB_t::IndicesNonInclusive(); // 664
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 491
		IntAABBIterator::IntAABBIterator(
				const IntAABB_t& domain,
				int nStartingIndex);  // 520
		IntAABB_CellRangeReference::begin(); // 664
	}
	default_delete<CInterlockedIntT<long long unsigned int, 8> []>::operator(
								CInterlockedIntT<long long unsigned int, 8>* __ptr);  // 204
	reset(const __uniq_ptr_impl<CInterlockedIntT<long long unsigned int, 8>, std::default_delete<CInterlockedIntT<long long unsigne this,
		pointer __p);  // 790
	reset<CInterlockedIntT<long long unsigned int>*>(const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long unsigned  this,
							CInterlockedIntT<long long unsigned int, 8>* __p);  // 662
	CFastSweepControllerBase::NumBlocks(); // 723
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 224
	Store(AtomicInt32_t& i,
		int val);  // 723
	CInterlockedIntT<long long unsigned int, 8>::CInterlockedIntT(); // 662
} /* size: 0, inline expansions: 8 (0 bytes) */

// <01B0FDB8> ../public/tier0/fastsweep.h:660
// variables: 19
// function calls: 54
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::SetupAlgorithm1()
{
	{
		IntVector3D vBlockIndex; // 664
		IntAABB_CellRangeReference& __for_range; // 4210
		IntAABBIterator __for_begin; // 50156
		IntAABBIterator __for_end; // 50156
		{
			uint64 nDependencyCounts; // 666
			bool bCanStartSweep0; // 714
			{
				int nSweep; // 667
				{
					uint64 nNumDeps; // 670
					{
						IntVector3D vOfs; // 676
						ArrayReference_t<IntVector3D>& __for_range; // 19439
						IntVector3D* __for_begin; // 46489
						IntVector3D* __for_end; // 46489
						{
							IntVector3D vNeighborCoords; // 679
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 219
							IntVector3D::operator+(
									const IntVector3D& rhs);  // 679
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 680
						}
						ArrayReference_t<IntVector3D>::ArrayReference_t(
								IntVector3D* pBase,
								int nCount);  // 199
						NeighborsAccessedDuringSweep(int nSweep); // 676
					}
					{
						IntVector3D vOfs; // 694
						ArrayReference_t<IntVector3D>& __for_range; // 19439
						IntVector3D* __for_begin; // 46489
						IntVector3D* __for_end; // 46489
						{
							IntVector3D vNeighborCoords; // 697
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 224
							IntVector3D::operator-(
									const IntVector3D& rhs);  // 697
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 699
						}
						ArrayReference_t<IntVector3D>::ArrayReference_t(
								IntVector3D* pBase,
								int nCount);  // 199
						NeighborsAccessedDuringSweep(int nSweep); // 694
					}
				}
			}
			{
				QueuedSweepNode_t startBlock; // 717
				QueuedSweepNode_t::QueueSweep(
						const IntVector3D& vBlockIndex,
						int nWhichSweep,
						uint8 nBlockFlags);  // 719
				CalculateBlockFlags(const IntVector3D& vBlockIndex,
							int nWhichSweep,
							CFastSweepControllerBase* pSweeper);  // 719
				QueuedSweepNode_t::QueuedSweepNode_t(); // 717
				FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::QueueSweep(
						const QueuedSweepNode_t& node);  // 720
			}
			IntVector3D::IntVector3D(); // 507
			IntAABBIterator::operator*(); // 664
			__uniq_ptr_impl<long long unsigned int, std::default_delete<long long unsigned int []> >::_M_ptr(); // 742
			unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::get(); // 735
			unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::operator[](
					size_t __i);  // 484
			FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::BlockState(
					int nXBlock,
					int nYBlock,
					int nZBlock);  // 489
			FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::BlockState(
					IntVector3D vBlockIndex);  // 713
			Store(AtomicUInt64_t& i,
				uint64 val);  // 713
		}
		IntVector3D::IntVector3D(
				int nX,
				int nY,
				int nZ);  // 664
		IntAABB_t::Width(); // 453
		IntAABB_t::Height(); // 453
		IntAABB_t::Depth(); // 453
		IntAABB_t::NumberOfCells(); // 525
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 491
		IntAABBIterator::IntAABBIterator(
				const IntAABB_t& domain,
				int nStartingIndex);  // 525
		IntAABB_CellRangeReference::end(); // 664
		IntVector3D::IntVector3D(); // 304
		IntVector3D::IntVector3D(); // 304
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(
					const IntVector3D& mins,
					const IntVector3D& maxes);  // 430
		IntAABB_t::IntAABB_t(
				IntVector3D a,
				IntVector3D b);  // 664
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 470
		IntAABB_CellRangeReference::IntAABB_CellRangeReference(); // 530
		IntAABB_t::IndicesNonInclusive(); // 664
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 491
		IntAABBIterator::IntAABBIterator(
				const IntAABB_t& domain,
				int nStartingIndex);  // 520
		IntAABB_CellRangeReference::begin(); // 664
	}
	default_delete<long long unsigned int []>::operator(
						long long unsigned int* __ptr);  // 204
	__uniq_ptr_impl<long long unsigned int, std::default_delete<long long unsigned int []> >::reset(
		pointer __p);  // 790
	unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::reset<long long unsigned int*>(
					long long unsigned int* __p);  // 662
	CFastSweepControllerBase::NumBlocks(); // 723
	Store(AtomicInt32_t& i,
		int val);  // 723
} /* size: 0, inline expansions: 5 (0 bytes) */

// <01B0DB34> ../public/tier0/fastsweep.h:660
// variables: 19
// function calls: 54
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::SetupAlgorithm1()
{
	{
		IntVector3D vBlockIndex; // 664
		IntAABB_CellRangeReference& __for_range; // 4210
		IntAABBIterator __for_begin; // 50156
		IntAABBIterator __for_end; // 50156
		{
			uint64 nDependencyCounts; // 666
			bool bCanStartSweep0; // 714
			{
				int nSweep; // 667
				{
					uint64 nNumDeps; // 670
					{
						IntVector3D vOfs; // 676
						ArrayReference_t<IntVector3D>& __for_range; // 19439
						IntVector3D* __for_begin; // 46489
						IntVector3D* __for_end; // 46489
						{
							IntVector3D vNeighborCoords; // 679
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 219
							IntVector3D::operator+(
									const IntVector3D& rhs);  // 679
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 680
						}
						ArrayReference_t<IntVector3D>::ArrayReference_t(
								IntVector3D* pBase,
								int nCount);  // 199
						NeighborsAccessedDuringSweep(int nSweep); // 676
					}
					{
						IntVector3D vOfs; // 694
						ArrayReference_t<IntVector3D>& __for_range; // 19439
						IntVector3D* __for_begin; // 46489
						IntVector3D* __for_end; // 46489
						{
							IntVector3D vNeighborCoords; // 697
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 224
							IntVector3D::operator-(
									const IntVector3D& rhs);  // 697
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 699
						}
						ArrayReference_t<IntVector3D>::ArrayReference_t(
								IntVector3D* pBase,
								int nCount);  // 199
						NeighborsAccessedDuringSweep(int nSweep); // 694
					}
				}
			}
			{
				QueuedSweepNode_t startBlock; // 717
				QueuedSweepNode_t::QueueSweep(
						const IntVector3D& vBlockIndex,
						int nWhichSweep,
						uint8 nBlockFlags);  // 719
				CalculateBlockFlags(const IntVector3D& vBlockIndex,
							int nWhichSweep,
							CFastSweepControllerBase* pSweeper);  // 719
				QueuedSweepNode_t::QueuedSweepNode_t(); // 717
				FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::QueueSweep(
						const QueuedSweepNode_t& node);  // 720
			}
			IntVector3D::IntVector3D(); // 507
			IntAABBIterator::operator*(); // 664
			__uniq_ptr_impl<long long unsigned int, std::default_delete<long long unsigned int []> >::_M_ptr(); // 742
			unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::get(); // 735
			unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::operator[](
					size_t __i);  // 484
			FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::BlockState(
					int nXBlock,
					int nYBlock,
					int nZBlock);  // 489
			FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::BlockState(
					IntVector3D vBlockIndex);  // 713
			Store(AtomicUInt64_t& i,
				uint64 val);  // 713
		}
		IntVector3D::IntVector3D(
				int nX,
				int nY,
				int nZ);  // 664
		IntAABB_t::Width(); // 453
		IntAABB_t::Height(); // 453
		IntAABB_t::Depth(); // 453
		IntAABB_t::NumberOfCells(); // 525
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 491
		IntAABBIterator::IntAABBIterator(
				const IntAABB_t& domain,
				int nStartingIndex);  // 525
		IntAABB_CellRangeReference::end(); // 664
		IntVector3D::IntVector3D(); // 304
		IntVector3D::IntVector3D(); // 304
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(
					const IntVector3D& mins,
					const IntVector3D& maxes);  // 430
		IntAABB_t::IntAABB_t(
				IntVector3D a,
				IntVector3D b);  // 664
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 470
		IntAABB_CellRangeReference::IntAABB_CellRangeReference(); // 530
		IntAABB_t::IndicesNonInclusive(); // 664
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 491
		IntAABBIterator::IntAABBIterator(
				const IntAABB_t& domain,
				int nStartingIndex);  // 520
		IntAABB_CellRangeReference::begin(); // 664
	}
	default_delete<long long unsigned int []>::operator(
						long long unsigned int* __ptr);  // 204
	__uniq_ptr_impl<long long unsigned int, std::default_delete<long long unsigned int []> >::reset(
		pointer __p);  // 790
	unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::reset<long long unsigned int*>(
					long long unsigned int* __p);  // 662
	CFastSweepControllerBase::NumBlocks(); // 723
	Store(AtomicInt32_t& i,
		int val);  // 723
} /* size: 0, inline expansions: 5 (0 bytes) */

// <01B0AF23> ../public/tier0/fastsweep.h:660
// variables: 19
// function calls: 59
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::SetupAlgorithm1()
{
	{
		IntVector3D vBlockIndex; // 664
		IntAABB_CellRangeReference& __for_range; // 4210
		IntAABBIterator __for_begin; // 50156
		IntAABBIterator __for_end; // 50156
		{
			uint64 nDependencyCounts; // 666
			bool bCanStartSweep0; // 714
			{
				int nSweep; // 667
				{
					uint64 nNumDeps; // 670
					{
						IntVector3D vOfs; // 676
						ArrayReference_t<IntVector3D>& __for_range; // 19439
						IntVector3D* __for_begin; // 46489
						IntVector3D* __for_end; // 46489
						{
							IntVector3D vNeighborCoords; // 679
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 219
							IntVector3D::operator+(
									const IntVector3D& rhs);  // 679
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 680
						}
						ArrayReference_t<IntVector3D>::ArrayReference_t(
								IntVector3D* pBase,
								int nCount);  // 199
						NeighborsAccessedDuringSweep(int nSweep); // 676
					}
					{
						IntVector3D vOfs; // 694
						ArrayReference_t<IntVector3D>& __for_range; // 19439
						IntVector3D* __for_begin; // 46489
						IntVector3D* __for_end; // 46489
						{
							IntVector3D vNeighborCoords; // 697
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 224
							IntVector3D::operator-(
									const IntVector3D& rhs);  // 697
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 699
						}
						ArrayReference_t<IntVector3D>::ArrayReference_t(
								IntVector3D* pBase,
								int nCount);  // 199
						NeighborsAccessedDuringSweep(int nSweep); // 694
					}
				}
			}
			{
				QueuedSweepNode_t startBlock; // 717
				QueuedSweepNode_t::QueueSweep(
						const IntVector3D& vBlockIndex,
						int nWhichSweep,
						uint8 nBlockFlags);  // 719
				CalculateBlockFlags(const IntVector3D& vBlockIndex,
							int nWhichSweep,
							CFastSweepControllerBase* pSweeper);  // 719
				QueuedSweepNode_t::QueuedSweepNode_t(); // 717
				CInterlockedIntT<int, 4>::operator!=(
						int rhs);  // 507
				FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::QueueSweep(
						const QueuedSweepNode_t& node);  // 720
			}
			IntVector3D::IntVector3D(); // 507
			IntAABBIterator::operator*(); // 664
			_M_ptr(const __uniq_ptr_impl<CInterlockedIntT<long long unsigned int, 8>, std::default_delete<CInterlockedIntT<long long u this); // 742
			get(const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long uns this); // 735
			operator[](const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long uns this,
					size_t __i);  // 484
			FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::BlockState(
					int nXBlock,
					int nYBlock,
					int nZBlock);  // 489
			FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::BlockState(
					IntVector3D vBlockIndex);  // 713
			CInterlockedIntT<long long unsigned int, 8>::SetRaw(
				long long unsigned int newValue);  // 223
			Store(AtomicUInt64_t& i,
				uint64 val);  // 713
		}
		IntVector3D::IntVector3D(
				int nX,
				int nY,
				int nZ);  // 664
		IntAABB_t::Width(); // 453
		IntAABB_t::Height(); // 453
		IntAABB_t::Depth(); // 453
		IntAABB_t::NumberOfCells(); // 525
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 491
		IntAABBIterator::IntAABBIterator(
				const IntAABB_t& domain,
				int nStartingIndex);  // 525
		IntAABB_CellRangeReference::end(); // 664
		IntVector3D::IntVector3D(); // 304
		IntVector3D::IntVector3D(); // 304
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(
					const IntVector3D& mins,
					const IntVector3D& maxes);  // 430
		IntAABB_t::IntAABB_t(
				IntVector3D a,
				IntVector3D b);  // 664
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 470
		IntAABB_CellRangeReference::IntAABB_CellRangeReference(); // 530
		IntAABB_t::IndicesNonInclusive(); // 664
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 491
		IntAABBIterator::IntAABBIterator(
				const IntAABB_t& domain,
				int nStartingIndex);  // 520
		IntAABB_CellRangeReference::begin(); // 664
	}
	default_delete<CInterlockedIntT<long long unsigned int, 8> []>::operator(
								CInterlockedIntT<long long unsigned int, 8>* __ptr);  // 204
	reset(const __uniq_ptr_impl<CInterlockedIntT<long long unsigned int, 8>, std::default_delete<CInterlockedIntT<long long unsigne this,
		pointer __p);  // 790
	reset<CInterlockedIntT<long long unsigned int>*>(const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long unsigned  this,
							CInterlockedIntT<long long unsigned int, 8>* __p);  // 662
	CFastSweepControllerBase::NumBlocks(); // 723
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 224
	Store(AtomicInt32_t& i,
		int val);  // 723
	CInterlockedIntT<long long unsigned int, 8>::CInterlockedIntT(); // 662
} /* size: 0, inline expansions: 8 (0 bytes) */

// <01B08435> ../public/tier0/fastsweep.h:660
// variables: 19
// function calls: 54
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::SetupAlgorithm1()
{
	{
		IntVector3D vBlockIndex; // 664
		IntAABB_CellRangeReference& __for_range; // 4210
		IntAABBIterator __for_begin; // 50156
		IntAABBIterator __for_end; // 50156
		{
			uint64 nDependencyCounts; // 666
			bool bCanStartSweep0; // 714
			{
				int nSweep; // 667
				{
					uint64 nNumDeps; // 670
					{
						IntVector3D vOfs; // 676
						ArrayReference_t<IntVector3D>& __for_range; // 19439
						IntVector3D* __for_begin; // 46489
						IntVector3D* __for_end; // 46489
						{
							IntVector3D vNeighborCoords; // 679
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 219
							IntVector3D::operator+(
									const IntVector3D& rhs);  // 679
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 680
						}
						ArrayReference_t<IntVector3D>::ArrayReference_t(
								IntVector3D* pBase,
								int nCount);  // 199
						NeighborsAccessedDuringSweep(int nSweep); // 676
					}
					{
						IntVector3D vOfs; // 694
						ArrayReference_t<IntVector3D>& __for_range; // 19439
						IntVector3D* __for_begin; // 46489
						IntVector3D* __for_end; // 46489
						{
							IntVector3D vNeighborCoords; // 697
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 224
							IntVector3D::operator-(
									const IntVector3D& rhs);  // 697
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 699
						}
						ArrayReference_t<IntVector3D>::ArrayReference_t(
								IntVector3D* pBase,
								int nCount);  // 199
						NeighborsAccessedDuringSweep(int nSweep); // 694
					}
				}
			}
			{
				QueuedSweepNode_t startBlock; // 717
				QueuedSweepNode_t::QueueSweep(
						const IntVector3D& vBlockIndex,
						int nWhichSweep,
						uint8 nBlockFlags);  // 719
				CalculateBlockFlags(const IntVector3D& vBlockIndex,
							int nWhichSweep,
							CFastSweepControllerBase* pSweeper);  // 719
				QueuedSweepNode_t::QueuedSweepNode_t(); // 717
				FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::QueueSweep(
						const QueuedSweepNode_t& node);  // 720
			}
			IntVector3D::IntVector3D(); // 507
			IntAABBIterator::operator*(); // 664
			__uniq_ptr_impl<long long unsigned int, std::default_delete<long long unsigned int []> >::_M_ptr(); // 742
			unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::get(); // 735
			unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::operator[](
					size_t __i);  // 484
			FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::BlockState(
					int nXBlock,
					int nYBlock,
					int nZBlock);  // 489
			FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::BlockState(
					IntVector3D vBlockIndex);  // 713
			Store(AtomicUInt64_t& i,
				uint64 val);  // 713
		}
		IntVector3D::IntVector3D(
				int nX,
				int nY,
				int nZ);  // 664
		IntAABB_t::Width(); // 453
		IntAABB_t::Height(); // 453
		IntAABB_t::Depth(); // 453
		IntAABB_t::NumberOfCells(); // 525
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 491
		IntAABBIterator::IntAABBIterator(
				const IntAABB_t& domain,
				int nStartingIndex);  // 525
		IntAABB_CellRangeReference::end(); // 664
		IntVector3D::IntVector3D(); // 304
		IntVector3D::IntVector3D(); // 304
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(
					const IntVector3D& mins,
					const IntVector3D& maxes);  // 430
		IntAABB_t::IntAABB_t(
				IntVector3D a,
				IntVector3D b);  // 664
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 470
		IntAABB_CellRangeReference::IntAABB_CellRangeReference(); // 530
		IntAABB_t::IndicesNonInclusive(); // 664
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 491
		IntAABBIterator::IntAABBIterator(
				const IntAABB_t& domain,
				int nStartingIndex);  // 520
		IntAABB_CellRangeReference::begin(); // 664
	}
	default_delete<long long unsigned int []>::operator(
						long long unsigned int* __ptr);  // 204
	__uniq_ptr_impl<long long unsigned int, std::default_delete<long long unsigned int []> >::reset(
		pointer __p);  // 790
	unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::reset<long long unsigned int*>(
					long long unsigned int* __p);  // 662
	CFastSweepControllerBase::NumBlocks(); // 723
	Store(AtomicInt32_t& i,
		int val);  // 723
} /* size: 0, inline expansions: 5 (0 bytes) */

// <00998199> ../public/tier0/fastsweep.h:660
// variables: 19
// function calls: 59
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::SetupAlgorithm1()
{
	{
		IntVector3D vBlockIndex; // 664
		IntAABB_CellRangeReference& __for_range; // 62466
		IntAABBIterator __for_begin; // 42876
		IntAABBIterator __for_end; // 42876
		{
			uint64 nDependencyCounts; // 666
			bool bCanStartSweep0; // 714
			{
				int nSweep; // 667
				{
					uint64 nNumDeps; // 670
					{
						IntVector3D vOfs; // 676
						ArrayReference_t<IntVector3D>& __for_range; // 12159
						IntVector3D* __for_begin; // 39209
						IntVector3D* __for_end; // 39209
						{
							IntVector3D vNeighborCoords; // 679
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 219
							IntVector3D::operator+(
									const IntVector3D& rhs);  // 679
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 680
						}
						ArrayReference_t<IntVector3D>::ArrayReference_t(
								IntVector3D* pBase,
								int nCount);  // 199
						NeighborsAccessedDuringSweep(int nSweep); // 676
					}
					{
						IntVector3D vOfs; // 694
						ArrayReference_t<IntVector3D>& __for_range; // 12159
						IntVector3D* __for_begin; // 39209
						IntVector3D* __for_end; // 39209
						{
							IntVector3D vNeighborCoords; // 697
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 224
							IntVector3D::operator-(
									const IntVector3D& rhs);  // 697
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 699
						}
						ArrayReference_t<IntVector3D>::ArrayReference_t(
								IntVector3D* pBase,
								int nCount);  // 199
						NeighborsAccessedDuringSweep(int nSweep); // 694
					}
				}
			}
			{
				QueuedSweepNode_t startBlock; // 717
				QueuedSweepNode_t::QueueSweep(
						const IntVector3D& vBlockIndex,
						int nWhichSweep,
						uint8 nBlockFlags);  // 719
				CalculateBlockFlags(const IntVector3D& vBlockIndex,
							int nWhichSweep,
							CFastSweepControllerBase* pSweeper);  // 719
				QueuedSweepNode_t::QueuedSweepNode_t(); // 717
				CInterlockedIntT<int, 4>::operator!=(
						int rhs);  // 507
				FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::QueueSweep(
						const QueuedSweepNode_t& node);  // 720
			}
			IntVector3D::IntVector3D(); // 507
			IntAABBIterator::operator*(); // 664
			_M_ptr(const __uniq_ptr_impl<CInterlockedIntT<long long unsigned int, 8>, std::default_delete<CInterlockedIntT<long long u this); // 742
			get(const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long uns this); // 735
			operator[](const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long uns this,
					size_t __i);  // 484
			FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::BlockState(
					int nXBlock,
					int nYBlock,
					int nZBlock);  // 489
			FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::BlockState(
					IntVector3D vBlockIndex);  // 713
			CInterlockedIntT<long long unsigned int, 8>::SetRaw(
				long long unsigned int newValue);  // 223
			Store(AtomicUInt64_t& i,
				uint64 val);  // 713
		}
		IntVector3D::IntVector3D(
				int nX,
				int nY,
				int nZ);  // 664
		IntAABB_t::Width(); // 453
		IntAABB_t::Height(); // 453
		IntAABB_t::Depth(); // 453
		IntAABB_t::NumberOfCells(); // 525
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 491
		IntAABBIterator::IntAABBIterator(
				const IntAABB_t& domain,
				int nStartingIndex);  // 525
		IntAABB_CellRangeReference::end(); // 664
		IntVector3D::IntVector3D(); // 304
		IntVector3D::IntVector3D(); // 304
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(
					const IntVector3D& mins,
					const IntVector3D& maxes);  // 430
		IntAABB_t::IntAABB_t(
				IntVector3D a,
				IntVector3D b);  // 664
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 470
		IntAABB_CellRangeReference::IntAABB_CellRangeReference(); // 530
		IntAABB_t::IndicesNonInclusive(); // 664
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 491
		IntAABBIterator::IntAABBIterator(
				const IntAABB_t& domain,
				int nStartingIndex);  // 520
		IntAABB_CellRangeReference::begin(); // 664
	}
	default_delete<CInterlockedIntT<long long unsigned int, 8> []>::operator(
								CInterlockedIntT<long long unsigned int, 8>* __ptr);  // 204
	reset(const __uniq_ptr_impl<CInterlockedIntT<long long unsigned int, 8>, std::default_delete<CInterlockedIntT<long long unsigne this,
		pointer __p);  // 790
	reset<CInterlockedIntT<long long unsigned int>*>(const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long unsigned  this,
							CInterlockedIntT<long long unsigned int, 8>* __p);  // 662
	CFastSweepControllerBase::NumBlocks(); // 723
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 224
	Store(AtomicInt32_t& i,
		int val);  // 723
	CInterlockedIntT<long long unsigned int, 8>::CInterlockedIntT(); // 662
} /* size: 0, inline expansions: 8 (0 bytes) */

// <0099561B> ../public/tier0/fastsweep.h:660
// variables: 19
// function calls: 54
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::SetupAlgorithm1()
{
	{
		IntVector3D vBlockIndex; // 664
		IntAABB_CellRangeReference& __for_range; // 62466
		IntAABBIterator __for_begin; // 42876
		IntAABBIterator __for_end; // 42876
		{
			uint64 nDependencyCounts; // 666
			bool bCanStartSweep0; // 714
			{
				int nSweep; // 667
				{
					uint64 nNumDeps; // 670
					{
						IntVector3D vOfs; // 676
						ArrayReference_t<IntVector3D>& __for_range; // 12159
						IntVector3D* __for_begin; // 39209
						IntVector3D* __for_end; // 39209
						{
							IntVector3D vNeighborCoords; // 679
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 219
							IntVector3D::operator+(
									const IntVector3D& rhs);  // 679
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 680
						}
						ArrayReference_t<IntVector3D>::ArrayReference_t(
								IntVector3D* pBase,
								int nCount);  // 199
						NeighborsAccessedDuringSweep(int nSweep); // 676
					}
					{
						IntVector3D vOfs; // 694
						ArrayReference_t<IntVector3D>& __for_range; // 12159
						IntVector3D* __for_begin; // 39209
						IntVector3D* __for_end; // 39209
						{
							IntVector3D vNeighborCoords; // 697
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 224
							IntVector3D::operator-(
									const IntVector3D& rhs);  // 697
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 699
						}
						ArrayReference_t<IntVector3D>::ArrayReference_t(
								IntVector3D* pBase,
								int nCount);  // 199
						NeighborsAccessedDuringSweep(int nSweep); // 694
					}
				}
			}
			{
				QueuedSweepNode_t startBlock; // 717
				QueuedSweepNode_t::QueueSweep(
						const IntVector3D& vBlockIndex,
						int nWhichSweep,
						uint8 nBlockFlags);  // 719
				CalculateBlockFlags(const IntVector3D& vBlockIndex,
							int nWhichSweep,
							CFastSweepControllerBase* pSweeper);  // 719
				QueuedSweepNode_t::QueuedSweepNode_t(); // 717
				FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::QueueSweep(
						const QueuedSweepNode_t& node);  // 720
			}
			IntVector3D::IntVector3D(); // 507
			IntAABBIterator::operator*(); // 664
			__uniq_ptr_impl<long long unsigned int, std::default_delete<long long unsigned int []> >::_M_ptr(); // 742
			unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::get(); // 735
			unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::operator[](
					size_t __i);  // 484
			FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::BlockState(
					int nXBlock,
					int nYBlock,
					int nZBlock);  // 489
			FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::BlockState(
					IntVector3D vBlockIndex);  // 713
			Store(AtomicUInt64_t& i,
				uint64 val);  // 713
		}
		IntVector3D::IntVector3D(
				int nX,
				int nY,
				int nZ);  // 664
		IntAABB_t::Width(); // 453
		IntAABB_t::Height(); // 453
		IntAABB_t::Depth(); // 453
		IntAABB_t::NumberOfCells(); // 525
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 491
		IntAABBIterator::IntAABBIterator(
				const IntAABB_t& domain,
				int nStartingIndex);  // 525
		IntAABB_CellRangeReference::end(); // 664
		IntVector3D::IntVector3D(); // 304
		IntVector3D::IntVector3D(); // 304
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(
					const IntVector3D& mins,
					const IntVector3D& maxes);  // 430
		IntAABB_t::IntAABB_t(
				IntVector3D a,
				IntVector3D b);  // 664
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 470
		IntAABB_CellRangeReference::IntAABB_CellRangeReference(); // 530
		IntAABB_t::IndicesNonInclusive(); // 664
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 491
		IntAABBIterator::IntAABBIterator(
				const IntAABB_t& domain,
				int nStartingIndex);  // 520
		IntAABB_CellRangeReference::begin(); // 664
	}
	default_delete<long long unsigned int []>::operator(
						long long unsigned int* __ptr);  // 204
	__uniq_ptr_impl<long long unsigned int, std::default_delete<long long unsigned int []> >::reset(
		pointer __p);  // 790
	unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::reset<long long unsigned int*>(
					long long unsigned int* __p);  // 662
	CFastSweepControllerBase::NumBlocks(); // 723
	Store(AtomicInt32_t& i,
		int val);  // 723
} /* size: 0, inline expansions: 5 (0 bytes) */

// <00993397> ../public/tier0/fastsweep.h:660
// variables: 19
// function calls: 54
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::SetupAlgorithm1()
{
	{
		IntVector3D vBlockIndex; // 664
		IntAABB_CellRangeReference& __for_range; // 62466
		IntAABBIterator __for_begin; // 42876
		IntAABBIterator __for_end; // 42876
		{
			uint64 nDependencyCounts; // 666
			bool bCanStartSweep0; // 714
			{
				int nSweep; // 667
				{
					uint64 nNumDeps; // 670
					{
						IntVector3D vOfs; // 676
						ArrayReference_t<IntVector3D>& __for_range; // 12159
						IntVector3D* __for_begin; // 39209
						IntVector3D* __for_end; // 39209
						{
							IntVector3D vNeighborCoords; // 679
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 219
							IntVector3D::operator+(
									const IntVector3D& rhs);  // 679
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 680
						}
						ArrayReference_t<IntVector3D>::ArrayReference_t(
								IntVector3D* pBase,
								int nCount);  // 199
						NeighborsAccessedDuringSweep(int nSweep); // 676
					}
					{
						IntVector3D vOfs; // 694
						ArrayReference_t<IntVector3D>& __for_range; // 12159
						IntVector3D* __for_begin; // 39209
						IntVector3D* __for_end; // 39209
						{
							IntVector3D vNeighborCoords; // 697
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 224
							IntVector3D::operator-(
									const IntVector3D& rhs);  // 697
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 699
						}
						ArrayReference_t<IntVector3D>::ArrayReference_t(
								IntVector3D* pBase,
								int nCount);  // 199
						NeighborsAccessedDuringSweep(int nSweep); // 694
					}
				}
			}
			{
				QueuedSweepNode_t startBlock; // 717
				QueuedSweepNode_t::QueueSweep(
						const IntVector3D& vBlockIndex,
						int nWhichSweep,
						uint8 nBlockFlags);  // 719
				CalculateBlockFlags(const IntVector3D& vBlockIndex,
							int nWhichSweep,
							CFastSweepControllerBase* pSweeper);  // 719
				QueuedSweepNode_t::QueuedSweepNode_t(); // 717
				FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::QueueSweep(
						const QueuedSweepNode_t& node);  // 720
			}
			IntVector3D::IntVector3D(); // 507
			IntAABBIterator::operator*(); // 664
			__uniq_ptr_impl<long long unsigned int, std::default_delete<long long unsigned int []> >::_M_ptr(); // 742
			unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::get(); // 735
			unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::operator[](
					size_t __i);  // 484
			FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::BlockState(
					int nXBlock,
					int nYBlock,
					int nZBlock);  // 489
			FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::BlockState(
					IntVector3D vBlockIndex);  // 713
			Store(AtomicUInt64_t& i,
				uint64 val);  // 713
		}
		IntVector3D::IntVector3D(
				int nX,
				int nY,
				int nZ);  // 664
		IntAABB_t::Width(); // 453
		IntAABB_t::Height(); // 453
		IntAABB_t::Depth(); // 453
		IntAABB_t::NumberOfCells(); // 525
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 491
		IntAABBIterator::IntAABBIterator(
				const IntAABB_t& domain,
				int nStartingIndex);  // 525
		IntAABB_CellRangeReference::end(); // 664
		IntVector3D::IntVector3D(); // 304
		IntVector3D::IntVector3D(); // 304
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(
					const IntVector3D& mins,
					const IntVector3D& maxes);  // 430
		IntAABB_t::IntAABB_t(
				IntVector3D a,
				IntVector3D b);  // 664
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 470
		IntAABB_CellRangeReference::IntAABB_CellRangeReference(); // 530
		IntAABB_t::IndicesNonInclusive(); // 664
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 491
		IntAABBIterator::IntAABBIterator(
				const IntAABB_t& domain,
				int nStartingIndex);  // 520
		IntAABB_CellRangeReference::begin(); // 664
	}
	default_delete<long long unsigned int []>::operator(
						long long unsigned int* __ptr);  // 204
	__uniq_ptr_impl<long long unsigned int, std::default_delete<long long unsigned int []> >::reset(
		pointer __p);  // 790
	unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::reset<long long unsigned int*>(
					long long unsigned int* __p);  // 662
	CFastSweepControllerBase::NumBlocks(); // 723
	Store(AtomicInt32_t& i,
		int val);  // 723
} /* size: 0, inline expansions: 5 (0 bytes) */

// <00990786> ../public/tier0/fastsweep.h:660
// variables: 19
// function calls: 59
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::SetupAlgorithm1()
{
	{
		IntVector3D vBlockIndex; // 664
		IntAABB_CellRangeReference& __for_range; // 62466
		IntAABBIterator __for_begin; // 42876
		IntAABBIterator __for_end; // 42876
		{
			uint64 nDependencyCounts; // 666
			bool bCanStartSweep0; // 714
			{
				int nSweep; // 667
				{
					uint64 nNumDeps; // 670
					{
						IntVector3D vOfs; // 676
						ArrayReference_t<IntVector3D>& __for_range; // 12159
						IntVector3D* __for_begin; // 39209
						IntVector3D* __for_end; // 39209
						{
							IntVector3D vNeighborCoords; // 679
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 219
							IntVector3D::operator+(
									const IntVector3D& rhs);  // 679
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 680
						}
						ArrayReference_t<IntVector3D>::ArrayReference_t(
								IntVector3D* pBase,
								int nCount);  // 199
						NeighborsAccessedDuringSweep(int nSweep); // 676
					}
					{
						IntVector3D vOfs; // 694
						ArrayReference_t<IntVector3D>& __for_range; // 12159
						IntVector3D* __for_begin; // 39209
						IntVector3D* __for_end; // 39209
						{
							IntVector3D vNeighborCoords; // 697
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 224
							IntVector3D::operator-(
									const IntVector3D& rhs);  // 697
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 699
						}
						ArrayReference_t<IntVector3D>::ArrayReference_t(
								IntVector3D* pBase,
								int nCount);  // 199
						NeighborsAccessedDuringSweep(int nSweep); // 694
					}
				}
			}
			{
				QueuedSweepNode_t startBlock; // 717
				QueuedSweepNode_t::QueueSweep(
						const IntVector3D& vBlockIndex,
						int nWhichSweep,
						uint8 nBlockFlags);  // 719
				CalculateBlockFlags(const IntVector3D& vBlockIndex,
							int nWhichSweep,
							CFastSweepControllerBase* pSweeper);  // 719
				QueuedSweepNode_t::QueuedSweepNode_t(); // 717
				CInterlockedIntT<int, 4>::operator!=(
						int rhs);  // 507
				FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::QueueSweep(
						const QueuedSweepNode_t& node);  // 720
			}
			IntVector3D::IntVector3D(); // 507
			IntAABBIterator::operator*(); // 664
			_M_ptr(const __uniq_ptr_impl<CInterlockedIntT<long long unsigned int, 8>, std::default_delete<CInterlockedIntT<long long u this); // 742
			get(const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long uns this); // 735
			operator[](const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long uns this,
					size_t __i);  // 484
			FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::BlockState(
					int nXBlock,
					int nYBlock,
					int nZBlock);  // 489
			FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::BlockState(
					IntVector3D vBlockIndex);  // 713
			CInterlockedIntT<long long unsigned int, 8>::SetRaw(
				long long unsigned int newValue);  // 223
			Store(AtomicUInt64_t& i,
				uint64 val);  // 713
		}
		IntVector3D::IntVector3D(
				int nX,
				int nY,
				int nZ);  // 664
		IntAABB_t::Width(); // 453
		IntAABB_t::Height(); // 453
		IntAABB_t::Depth(); // 453
		IntAABB_t::NumberOfCells(); // 525
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 491
		IntAABBIterator::IntAABBIterator(
				const IntAABB_t& domain,
				int nStartingIndex);  // 525
		IntAABB_CellRangeReference::end(); // 664
		IntVector3D::IntVector3D(); // 304
		IntVector3D::IntVector3D(); // 304
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(
					const IntVector3D& mins,
					const IntVector3D& maxes);  // 430
		IntAABB_t::IntAABB_t(
				IntVector3D a,
				IntVector3D b);  // 664
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 470
		IntAABB_CellRangeReference::IntAABB_CellRangeReference(); // 530
		IntAABB_t::IndicesNonInclusive(); // 664
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 491
		IntAABBIterator::IntAABBIterator(
				const IntAABB_t& domain,
				int nStartingIndex);  // 520
		IntAABB_CellRangeReference::begin(); // 664
	}
	default_delete<CInterlockedIntT<long long unsigned int, 8> []>::operator(
								CInterlockedIntT<long long unsigned int, 8>* __ptr);  // 204
	reset(const __uniq_ptr_impl<CInterlockedIntT<long long unsigned int, 8>, std::default_delete<CInterlockedIntT<long long unsigne this,
		pointer __p);  // 790
	reset<CInterlockedIntT<long long unsigned int>*>(const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long unsigned  this,
							CInterlockedIntT<long long unsigned int, 8>* __p);  // 662
	CFastSweepControllerBase::NumBlocks(); // 723
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 224
	Store(AtomicInt32_t& i,
		int val);  // 723
	CInterlockedIntT<long long unsigned int, 8>::CInterlockedIntT(); // 662
} /* size: 0, inline expansions: 8 (0 bytes) */

// <0098DC98> ../public/tier0/fastsweep.h:660
// variables: 19
// function calls: 54
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::SetupAlgorithm1()
{
	{
		IntVector3D vBlockIndex; // 664
		IntAABB_CellRangeReference& __for_range; // 62466
		IntAABBIterator __for_begin; // 42876
		IntAABBIterator __for_end; // 42876
		{
			uint64 nDependencyCounts; // 666
			bool bCanStartSweep0; // 714
			{
				int nSweep; // 667
				{
					uint64 nNumDeps; // 670
					{
						IntVector3D vOfs; // 676
						ArrayReference_t<IntVector3D>& __for_range; // 12159
						IntVector3D* __for_begin; // 39209
						IntVector3D* __for_end; // 39209
						{
							IntVector3D vNeighborCoords; // 679
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 219
							IntVector3D::operator+(
									const IntVector3D& rhs);  // 679
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 680
						}
						ArrayReference_t<IntVector3D>::ArrayReference_t(
								IntVector3D* pBase,
								int nCount);  // 199
						NeighborsAccessedDuringSweep(int nSweep); // 676
					}
					{
						IntVector3D vOfs; // 694
						ArrayReference_t<IntVector3D>& __for_range; // 12159
						IntVector3D* __for_begin; // 39209
						IntVector3D* __for_end; // 39209
						{
							IntVector3D vNeighborCoords; // 697
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 224
							IntVector3D::operator-(
									const IntVector3D& rhs);  // 697
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 699
						}
						ArrayReference_t<IntVector3D>::ArrayReference_t(
								IntVector3D* pBase,
								int nCount);  // 199
						NeighborsAccessedDuringSweep(int nSweep); // 694
					}
				}
			}
			{
				QueuedSweepNode_t startBlock; // 717
				QueuedSweepNode_t::QueueSweep(
						const IntVector3D& vBlockIndex,
						int nWhichSweep,
						uint8 nBlockFlags);  // 719
				CalculateBlockFlags(const IntVector3D& vBlockIndex,
							int nWhichSweep,
							CFastSweepControllerBase* pSweeper);  // 719
				QueuedSweepNode_t::QueuedSweepNode_t(); // 717
				FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::QueueSweep(
						const QueuedSweepNode_t& node);  // 720
			}
			IntVector3D::IntVector3D(); // 507
			IntAABBIterator::operator*(); // 664
			__uniq_ptr_impl<long long unsigned int, std::default_delete<long long unsigned int []> >::_M_ptr(); // 742
			unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::get(); // 735
			unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::operator[](
					size_t __i);  // 484
			FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::BlockState(
					int nXBlock,
					int nYBlock,
					int nZBlock);  // 489
			FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::BlockState(
					IntVector3D vBlockIndex);  // 713
			Store(AtomicUInt64_t& i,
				uint64 val);  // 713
		}
		IntVector3D::IntVector3D(
				int nX,
				int nY,
				int nZ);  // 664
		IntAABB_t::Width(); // 453
		IntAABB_t::Height(); // 453
		IntAABB_t::Depth(); // 453
		IntAABB_t::NumberOfCells(); // 525
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 491
		IntAABBIterator::IntAABBIterator(
				const IntAABB_t& domain,
				int nStartingIndex);  // 525
		IntAABB_CellRangeReference::end(); // 664
		IntVector3D::IntVector3D(); // 304
		IntVector3D::IntVector3D(); // 304
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(
					const IntVector3D& mins,
					const IntVector3D& maxes);  // 430
		IntAABB_t::IntAABB_t(
				IntVector3D a,
				IntVector3D b);  // 664
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 470
		IntAABB_CellRangeReference::IntAABB_CellRangeReference(); // 530
		IntAABB_t::IndicesNonInclusive(); // 664
		IntVector3D::IntVector3D(); // 301
		IntVector3D::IntVector3D(); // 301
		GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
		IntAABB_t::IntAABB_t(); // 491
		IntAABBIterator::IntAABBIterator(
				const IntAABB_t& domain,
				int nStartingIndex);  // 520
		IntAABB_CellRangeReference::begin(); // 664
	}
	default_delete<long long unsigned int []>::operator(
						long long unsigned int* __ptr);  // 204
	__uniq_ptr_impl<long long unsigned int, std::default_delete<long long unsigned int []> >::reset(
		pointer __p);  // 790
	unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::reset<long long unsigned int*>(
					long long unsigned int* __p);  // 662
	CFastSweepControllerBase::NumBlocks(); // 723
	Store(AtomicInt32_t& i,
		int val);  // 723
} /* size: 0, inline expansions: 5 (0 bytes) */

// <044B8A37> ../public/tier0/fastsweep.h:726
// variables: 20
// function calls: 75
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::SetupAlgorithm2()
{
	const char   __FUNCTION__; // 6655
	int nNumberOfSlices; // 729
	int nNumberOfBlocks; // 730
	int nNumberOfGroupsToAllocate; // 731
	{
		uint8 nSweep; // 741
		{
			IntVector3D vSweepOriginBlock; // 747
			{
				int c; // 748
			}
			{
				IntVector3D vBlockIndex; // 753
				IntAABB_CellRangeReference& __for_range; // 29357
				IntAABBIterator __for_begin; // 9767
				IntAABBIterator __for_end; // 9767
				{
					uint8 nBlockFlags; // 755
					IntVector3D vRelativeBlockIndex; // 756
					int nSliceNumber; // 757
					int nIndex; // 760
					SweepGroup_t* pNode; // 761
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 758
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 759
					}
					{
						SweepGroup_t* pNN; // 789
						__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
						unique_ptr<SweepGroup_t::get(); // 735
						unique_ptr<SweepGroup_t::operator[](
								size_t __i);  // 792
					}
					IntVector3D::IntVector3D(); // 507
					IntAABBIterator::operator*(); // 753
					CFastSweepControllerBase::BlockIsOnBorder(
							IntVector3D vBlockIndex);  // 755
					IntVector3D::IntVector3D(
							int nX,
							int nY,
							int nZ);  // 224
					IntVector3D::operator-(
							const IntVector3D& rhs);  // 756
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 761
					__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
							size_t __i);  // 769
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 771
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 772
					__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 777
					CFastSweepControllerBase::BlockIndex(
							IntVector3D vBlockIndex);  // 777
					__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
					unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 735
					unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::operator[](
							size_t __i);  // 777
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 784
				}
				IntVector3D::IntVector3D(
						int nX,
						int nY,
						int nZ);  // 753
				IntVector3D::IntVector3D(); // 304
				IntVector3D::IntVector3D(); // 304
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(
							const IntVector3D& mins,
							const IntVector3D& maxes);  // 430
				IntAABB_t::IntAABB_t(
						IntVector3D a,
						IntVector3D b);  // 753
				IntVector3D::IntVector3D(); // 301
				IntVector3D::IntVector3D(); // 301
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
				IntAABB_t::IntAABB_t(); // 470
				IntAABB_CellRangeReference::IntAABB_CellRangeReference(); // 530
				IntAABB_t::IndicesNonInclusive(); // 753
				IntVector3D::IntVector3D(); // 301
				IntVector3D::IntVector3D(); // 301
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
				IntAABB_t::IntAABB_t(); // 491
				IntAABBIterator::IntAABBIterator(
						const IntAABB_t& domain,
						int nStartingIndex);  // 520
				IntAABB_CellRangeReference::begin(); // 753
				IntAABB_t::Width(); // 453
				IntAABB_t::Height(); // 453
				IntAABB_t::Depth(); // 453
				IntAABB_t::NumberOfCells(); // 525
				IntVector3D::IntVector3D(); // 301
				IntVector3D::IntVector3D(); // 301
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
				IntAABB_t::IntAABB_t(); // 491
				IntAABBIterator::IntAABBIterator(
						const IntAABB_t& domain,
						int nStartingIndex);  // 525
				IntAABB_CellRangeReference::end(); // 753
			}
			default_delete<unsigned int []>::operator(
						unsigned int* __ptr);  // 204
			__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::reset(
				pointer __p);  // 790
			unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::reset<unsigned int*>(
						unsigned int* __p);  // 744
			__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
			unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 745
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 745
			IntVector3D::IntVector3D(); // 747
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 798
	}
	default_delete<SweepGroup_t []>::operator(
				SweepGroup_t* __ptr);  // 204
	__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::reset(
		pointer __p);  // 790
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::reset<SweepGroup_t*>(
				SweepGroup_t* __p);  // 734
	default_delete<SweepGroup_t::operator(
					SweepGroup_t** __ptr);  // 204
	__uniq_ptr_impl<SweepGroup_t::reset(
		pointer __p);  // 790
	unique_ptr<SweepGroup_t::reset<SweepGroup_t**>(
				SweepGroup_t** __p);  // 735
	__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
	unique_ptr<SweepGroup_t::get(); // 736
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 736
	SweepGroup_t::SweepGroup_t(); // 734
} /* size: 0, variables: 4, inline expansions: 11 (0 bytes) */

// <044B54BB> ../public/tier0/fastsweep.h:726
// variables: 20
// function calls: 75
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::SetupAlgorithm2()
{
	const char   __FUNCTION__; // 6655
	int nNumberOfSlices; // 729
	int nNumberOfBlocks; // 730
	int nNumberOfGroupsToAllocate; // 731
	{
		uint8 nSweep; // 741
		{
			IntVector3D vSweepOriginBlock; // 747
			{
				int c; // 748
			}
			{
				IntVector3D vBlockIndex; // 753
				IntAABB_CellRangeReference& __for_range; // 29357
				IntAABBIterator __for_begin; // 9767
				IntAABBIterator __for_end; // 9767
				{
					uint8 nBlockFlags; // 755
					IntVector3D vRelativeBlockIndex; // 756
					int nSliceNumber; // 757
					int nIndex; // 760
					SweepGroup_t* pNode; // 761
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 758
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 759
					}
					{
						SweepGroup_t* pNN; // 789
						__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
						unique_ptr<SweepGroup_t::get(); // 735
						unique_ptr<SweepGroup_t::operator[](
								size_t __i);  // 792
					}
					IntVector3D::IntVector3D(); // 507
					IntAABBIterator::operator*(); // 753
					CFastSweepControllerBase::BlockIsOnBorder(
							IntVector3D vBlockIndex);  // 755
					IntVector3D::IntVector3D(
							int nX,
							int nY,
							int nZ);  // 224
					IntVector3D::operator-(
							const IntVector3D& rhs);  // 756
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 761
					__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
							size_t __i);  // 769
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 771
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 772
					__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 777
					CFastSweepControllerBase::BlockIndex(
							IntVector3D vBlockIndex);  // 777
					__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
					unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 735
					unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::operator[](
							size_t __i);  // 777
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 784
				}
				IntVector3D::IntVector3D(
						int nX,
						int nY,
						int nZ);  // 753
				IntVector3D::IntVector3D(); // 304
				IntVector3D::IntVector3D(); // 304
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(
							const IntVector3D& mins,
							const IntVector3D& maxes);  // 430
				IntAABB_t::IntAABB_t(
						IntVector3D a,
						IntVector3D b);  // 753
				IntVector3D::IntVector3D(); // 301
				IntVector3D::IntVector3D(); // 301
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
				IntAABB_t::IntAABB_t(); // 470
				IntAABB_CellRangeReference::IntAABB_CellRangeReference(); // 530
				IntAABB_t::IndicesNonInclusive(); // 753
				IntVector3D::IntVector3D(); // 301
				IntVector3D::IntVector3D(); // 301
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
				IntAABB_t::IntAABB_t(); // 491
				IntAABBIterator::IntAABBIterator(
						const IntAABB_t& domain,
						int nStartingIndex);  // 520
				IntAABB_CellRangeReference::begin(); // 753
				IntAABB_t::Width(); // 453
				IntAABB_t::Height(); // 453
				IntAABB_t::Depth(); // 453
				IntAABB_t::NumberOfCells(); // 525
				IntVector3D::IntVector3D(); // 301
				IntVector3D::IntVector3D(); // 301
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
				IntAABB_t::IntAABB_t(); // 491
				IntAABBIterator::IntAABBIterator(
						const IntAABB_t& domain,
						int nStartingIndex);  // 525
				IntAABB_CellRangeReference::end(); // 753
			}
			default_delete<unsigned int []>::operator(
						unsigned int* __ptr);  // 204
			__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::reset(
				pointer __p);  // 790
			unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::reset<unsigned int*>(
						unsigned int* __p);  // 744
			__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
			unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 745
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 745
			IntVector3D::IntVector3D(); // 747
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 798
	}
	default_delete<SweepGroup_t []>::operator(
				SweepGroup_t* __ptr);  // 204
	__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::reset(
		pointer __p);  // 790
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::reset<SweepGroup_t*>(
				SweepGroup_t* __p);  // 734
	default_delete<SweepGroup_t::operator(
					SweepGroup_t** __ptr);  // 204
	__uniq_ptr_impl<SweepGroup_t::reset(
		pointer __p);  // 790
	unique_ptr<SweepGroup_t::reset<SweepGroup_t**>(
				SweepGroup_t** __p);  // 735
	__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
	unique_ptr<SweepGroup_t::get(); // 736
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 736
	SweepGroup_t::SweepGroup_t(); // 734
} /* size: 0, variables: 4, inline expansions: 11 (0 bytes) */

// <044B3237> ../public/tier0/fastsweep.h:726
// variables: 20
// function calls: 75
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::SetupAlgorithm2()
{
	const char   __FUNCTION__; // 6655
	int nNumberOfSlices; // 729
	int nNumberOfBlocks; // 730
	int nNumberOfGroupsToAllocate; // 731
	{
		uint8 nSweep; // 741
		{
			IntVector3D vSweepOriginBlock; // 747
			{
				int c; // 748
			}
			{
				IntVector3D vBlockIndex; // 753
				IntAABB_CellRangeReference& __for_range; // 29357
				IntAABBIterator __for_begin; // 9767
				IntAABBIterator __for_end; // 9767
				{
					uint8 nBlockFlags; // 755
					IntVector3D vRelativeBlockIndex; // 756
					int nSliceNumber; // 757
					int nIndex; // 760
					SweepGroup_t* pNode; // 761
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 758
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 759
					}
					{
						SweepGroup_t* pNN; // 789
						__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
						unique_ptr<SweepGroup_t::get(); // 735
						unique_ptr<SweepGroup_t::operator[](
								size_t __i);  // 792
					}
					IntVector3D::IntVector3D(); // 507
					IntAABBIterator::operator*(); // 753
					CFastSweepControllerBase::BlockIsOnBorder(
							IntVector3D vBlockIndex);  // 755
					IntVector3D::IntVector3D(
							int nX,
							int nY,
							int nZ);  // 224
					IntVector3D::operator-(
							const IntVector3D& rhs);  // 756
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 761
					__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
							size_t __i);  // 769
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 771
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 772
					__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 777
					CFastSweepControllerBase::BlockIndex(
							IntVector3D vBlockIndex);  // 777
					__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
					unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 735
					unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::operator[](
							size_t __i);  // 777
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 784
				}
				IntVector3D::IntVector3D(
						int nX,
						int nY,
						int nZ);  // 753
				IntVector3D::IntVector3D(); // 304
				IntVector3D::IntVector3D(); // 304
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(
							const IntVector3D& mins,
							const IntVector3D& maxes);  // 430
				IntAABB_t::IntAABB_t(
						IntVector3D a,
						IntVector3D b);  // 753
				IntVector3D::IntVector3D(); // 301
				IntVector3D::IntVector3D(); // 301
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
				IntAABB_t::IntAABB_t(); // 470
				IntAABB_CellRangeReference::IntAABB_CellRangeReference(); // 530
				IntAABB_t::IndicesNonInclusive(); // 753
				IntVector3D::IntVector3D(); // 301
				IntVector3D::IntVector3D(); // 301
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
				IntAABB_t::IntAABB_t(); // 491
				IntAABBIterator::IntAABBIterator(
						const IntAABB_t& domain,
						int nStartingIndex);  // 520
				IntAABB_CellRangeReference::begin(); // 753
				IntAABB_t::Width(); // 453
				IntAABB_t::Height(); // 453
				IntAABB_t::Depth(); // 453
				IntAABB_t::NumberOfCells(); // 525
				IntVector3D::IntVector3D(); // 301
				IntVector3D::IntVector3D(); // 301
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
				IntAABB_t::IntAABB_t(); // 491
				IntAABBIterator::IntAABBIterator(
						const IntAABB_t& domain,
						int nStartingIndex);  // 525
				IntAABB_CellRangeReference::end(); // 753
			}
			default_delete<unsigned int []>::operator(
						unsigned int* __ptr);  // 204
			__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::reset(
				pointer __p);  // 790
			unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::reset<unsigned int*>(
						unsigned int* __p);  // 744
			__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
			unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 745
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 745
			IntVector3D::IntVector3D(); // 747
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 798
	}
	default_delete<SweepGroup_t []>::operator(
				SweepGroup_t* __ptr);  // 204
	__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::reset(
		pointer __p);  // 790
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::reset<SweepGroup_t*>(
				SweepGroup_t* __p);  // 734
	default_delete<SweepGroup_t::operator(
					SweepGroup_t** __ptr);  // 204
	__uniq_ptr_impl<SweepGroup_t::reset(
		pointer __p);  // 790
	unique_ptr<SweepGroup_t::reset<SweepGroup_t**>(
				SweepGroup_t** __p);  // 735
	__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
	unique_ptr<SweepGroup_t::get(); // 736
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 736
	SweepGroup_t::SweepGroup_t(); // 734
} /* size: 0, variables: 4, inline expansions: 11 (0 bytes) */

// <044B0FB3> ../public/tier0/fastsweep.h:726
// variables: 20
// function calls: 75
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::SetupAlgorithm2()
{
	const char   __FUNCTION__; // 6655
	int nNumberOfSlices; // 729
	int nNumberOfBlocks; // 730
	int nNumberOfGroupsToAllocate; // 731
	{
		uint8 nSweep; // 741
		{
			IntVector3D vSweepOriginBlock; // 747
			{
				int c; // 748
			}
			{
				IntVector3D vBlockIndex; // 753
				IntAABB_CellRangeReference& __for_range; // 29357
				IntAABBIterator __for_begin; // 9767
				IntAABBIterator __for_end; // 9767
				{
					uint8 nBlockFlags; // 755
					IntVector3D vRelativeBlockIndex; // 756
					int nSliceNumber; // 757
					int nIndex; // 760
					SweepGroup_t* pNode; // 761
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 758
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 759
					}
					{
						SweepGroup_t* pNN; // 789
						__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
						unique_ptr<SweepGroup_t::get(); // 735
						unique_ptr<SweepGroup_t::operator[](
								size_t __i);  // 792
					}
					IntVector3D::IntVector3D(); // 507
					IntAABBIterator::operator*(); // 753
					CFastSweepControllerBase::BlockIsOnBorder(
							IntVector3D vBlockIndex);  // 755
					IntVector3D::IntVector3D(
							int nX,
							int nY,
							int nZ);  // 224
					IntVector3D::operator-(
							const IntVector3D& rhs);  // 756
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 761
					__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
							size_t __i);  // 769
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 771
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 772
					__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 777
					CFastSweepControllerBase::BlockIndex(
							IntVector3D vBlockIndex);  // 777
					__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
					unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 735
					unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::operator[](
							size_t __i);  // 777
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 784
				}
				IntVector3D::IntVector3D(
						int nX,
						int nY,
						int nZ);  // 753
				IntVector3D::IntVector3D(); // 304
				IntVector3D::IntVector3D(); // 304
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(
							const IntVector3D& mins,
							const IntVector3D& maxes);  // 430
				IntAABB_t::IntAABB_t(
						IntVector3D a,
						IntVector3D b);  // 753
				IntVector3D::IntVector3D(); // 301
				IntVector3D::IntVector3D(); // 301
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
				IntAABB_t::IntAABB_t(); // 470
				IntAABB_CellRangeReference::IntAABB_CellRangeReference(); // 530
				IntAABB_t::IndicesNonInclusive(); // 753
				IntVector3D::IntVector3D(); // 301
				IntVector3D::IntVector3D(); // 301
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
				IntAABB_t::IntAABB_t(); // 491
				IntAABBIterator::IntAABBIterator(
						const IntAABB_t& domain,
						int nStartingIndex);  // 520
				IntAABB_CellRangeReference::begin(); // 753
				IntAABB_t::Width(); // 453
				IntAABB_t::Height(); // 453
				IntAABB_t::Depth(); // 453
				IntAABB_t::NumberOfCells(); // 525
				IntVector3D::IntVector3D(); // 301
				IntVector3D::IntVector3D(); // 301
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
				IntAABB_t::IntAABB_t(); // 491
				IntAABBIterator::IntAABBIterator(
						const IntAABB_t& domain,
						int nStartingIndex);  // 525
				IntAABB_CellRangeReference::end(); // 753
			}
			default_delete<unsigned int []>::operator(
						unsigned int* __ptr);  // 204
			__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::reset(
				pointer __p);  // 790
			unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::reset<unsigned int*>(
						unsigned int* __p);  // 744
			__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
			unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 745
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 745
			IntVector3D::IntVector3D(); // 747
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 798
	}
	default_delete<SweepGroup_t []>::operator(
				SweepGroup_t* __ptr);  // 204
	__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::reset(
		pointer __p);  // 790
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::reset<SweepGroup_t*>(
				SweepGroup_t* __p);  // 734
	default_delete<SweepGroup_t::operator(
					SweepGroup_t** __ptr);  // 204
	__uniq_ptr_impl<SweepGroup_t::reset(
		pointer __p);  // 790
	unique_ptr<SweepGroup_t::reset<SweepGroup_t**>(
				SweepGroup_t** __p);  // 735
	__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
	unique_ptr<SweepGroup_t::get(); // 736
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 736
	SweepGroup_t::SweepGroup_t(); // 734
} /* size: 0, variables: 4, inline expansions: 11 (0 bytes) */

// <044ADB3E> ../public/tier0/fastsweep.h:726
// variables: 20
// function calls: 75
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::SetupAlgorithm2()
{
	const char   __FUNCTION__; // 6655
	int nNumberOfSlices; // 729
	int nNumberOfBlocks; // 730
	int nNumberOfGroupsToAllocate; // 731
	{
		uint8 nSweep; // 741
		{
			IntVector3D vSweepOriginBlock; // 747
			{
				int c; // 748
			}
			{
				IntVector3D vBlockIndex; // 753
				IntAABB_CellRangeReference& __for_range; // 29357
				IntAABBIterator __for_begin; // 9767
				IntAABBIterator __for_end; // 9767
				{
					uint8 nBlockFlags; // 755
					IntVector3D vRelativeBlockIndex; // 756
					int nSliceNumber; // 757
					int nIndex; // 760
					SweepGroup_t* pNode; // 761
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 758
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 759
					}
					{
						SweepGroup_t* pNN; // 789
						__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
						unique_ptr<SweepGroup_t::get(); // 735
						unique_ptr<SweepGroup_t::operator[](
								size_t __i);  // 792
					}
					IntVector3D::IntVector3D(); // 507
					IntAABBIterator::operator*(); // 753
					CFastSweepControllerBase::BlockIsOnBorder(
							IntVector3D vBlockIndex);  // 755
					IntVector3D::IntVector3D(
							int nX,
							int nY,
							int nZ);  // 224
					IntVector3D::operator-(
							const IntVector3D& rhs);  // 756
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 761
					__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
							size_t __i);  // 769
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 771
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 772
					__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 777
					CFastSweepControllerBase::BlockIndex(
							IntVector3D vBlockIndex);  // 777
					__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
					unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 735
					unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::operator[](
							size_t __i);  // 777
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 784
				}
				IntVector3D::IntVector3D(
						int nX,
						int nY,
						int nZ);  // 753
				IntVector3D::IntVector3D(); // 304
				IntVector3D::IntVector3D(); // 304
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(
							const IntVector3D& mins,
							const IntVector3D& maxes);  // 430
				IntAABB_t::IntAABB_t(
						IntVector3D a,
						IntVector3D b);  // 753
				IntVector3D::IntVector3D(); // 301
				IntVector3D::IntVector3D(); // 301
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
				IntAABB_t::IntAABB_t(); // 470
				IntAABB_CellRangeReference::IntAABB_CellRangeReference(); // 530
				IntAABB_t::IndicesNonInclusive(); // 753
				IntVector3D::IntVector3D(); // 301
				IntVector3D::IntVector3D(); // 301
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
				IntAABB_t::IntAABB_t(); // 491
				IntAABBIterator::IntAABBIterator(
						const IntAABB_t& domain,
						int nStartingIndex);  // 520
				IntAABB_CellRangeReference::begin(); // 753
				IntAABB_t::Width(); // 453
				IntAABB_t::Height(); // 453
				IntAABB_t::Depth(); // 453
				IntAABB_t::NumberOfCells(); // 525
				IntVector3D::IntVector3D(); // 301
				IntVector3D::IntVector3D(); // 301
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
				IntAABB_t::IntAABB_t(); // 491
				IntAABBIterator::IntAABBIterator(
						const IntAABB_t& domain,
						int nStartingIndex);  // 525
				IntAABB_CellRangeReference::end(); // 753
			}
			default_delete<unsigned int []>::operator(
						unsigned int* __ptr);  // 204
			__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::reset(
				pointer __p);  // 790
			unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::reset<unsigned int*>(
						unsigned int* __p);  // 744
			__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
			unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 745
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 745
			IntVector3D::IntVector3D(); // 747
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 798
	}
	default_delete<SweepGroup_t []>::operator(
				SweepGroup_t* __ptr);  // 204
	__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::reset(
		pointer __p);  // 790
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::reset<SweepGroup_t*>(
				SweepGroup_t* __p);  // 734
	default_delete<SweepGroup_t::operator(
					SweepGroup_t** __ptr);  // 204
	__uniq_ptr_impl<SweepGroup_t::reset(
		pointer __p);  // 790
	unique_ptr<SweepGroup_t::reset<SweepGroup_t**>(
				SweepGroup_t** __p);  // 735
	__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
	unique_ptr<SweepGroup_t::get(); // 736
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 736
	SweepGroup_t::SweepGroup_t(); // 734
} /* size: 0, variables: 4, inline expansions: 11 (0 bytes) */

// <01B14149> ../public/tier0/fastsweep.h:726
// variables: 20
// function calls: 75
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::SetupAlgorithm2()
{
	const char   __FUNCTION__; // 47044
	int nNumberOfSlices; // 729
	int nNumberOfBlocks; // 730
	int nNumberOfGroupsToAllocate; // 731
	{
		uint8 nSweep; // 741
		{
			IntVector3D vSweepOriginBlock; // 747
			{
				int c; // 748
			}
			{
				IntVector3D vBlockIndex; // 753
				IntAABB_CellRangeReference& __for_range; // 4210
				IntAABBIterator __for_begin; // 50156
				IntAABBIterator __for_end; // 50156
				{
					uint8 nBlockFlags; // 755
					IntVector3D vRelativeBlockIndex; // 756
					int nSliceNumber; // 757
					int nIndex; // 760
					SweepGroup_t* pNode; // 761
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 758
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 759
					}
					{
						SweepGroup_t* pNN; // 789
						__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
						unique_ptr<SweepGroup_t::get(); // 735
						unique_ptr<SweepGroup_t::operator[](
								size_t __i);  // 792
					}
					IntVector3D::IntVector3D(); // 507
					IntAABBIterator::operator*(); // 753
					CFastSweepControllerBase::BlockIsOnBorder(
							IntVector3D vBlockIndex);  // 755
					IntVector3D::IntVector3D(
							int nX,
							int nY,
							int nZ);  // 224
					IntVector3D::operator-(
							const IntVector3D& rhs);  // 756
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 761
					__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
							size_t __i);  // 769
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 771
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 772
					__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 777
					CFastSweepControllerBase::BlockIndex(
							IntVector3D vBlockIndex);  // 777
					__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
					unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 735
					unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::operator[](
							size_t __i);  // 777
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 784
				}
				IntVector3D::IntVector3D(
						int nX,
						int nY,
						int nZ);  // 753
				IntVector3D::IntVector3D(); // 304
				IntVector3D::IntVector3D(); // 304
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(
							const IntVector3D& mins,
							const IntVector3D& maxes);  // 430
				IntAABB_t::IntAABB_t(
						IntVector3D a,
						IntVector3D b);  // 753
				IntVector3D::IntVector3D(); // 301
				IntVector3D::IntVector3D(); // 301
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
				IntAABB_t::IntAABB_t(); // 470
				IntAABB_CellRangeReference::IntAABB_CellRangeReference(); // 530
				IntAABB_t::IndicesNonInclusive(); // 753
				IntVector3D::IntVector3D(); // 301
				IntVector3D::IntVector3D(); // 301
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
				IntAABB_t::IntAABB_t(); // 491
				IntAABBIterator::IntAABBIterator(
						const IntAABB_t& domain,
						int nStartingIndex);  // 520
				IntAABB_CellRangeReference::begin(); // 753
				IntAABB_t::Width(); // 453
				IntAABB_t::Height(); // 453
				IntAABB_t::Depth(); // 453
				IntAABB_t::NumberOfCells(); // 525
				IntVector3D::IntVector3D(); // 301
				IntVector3D::IntVector3D(); // 301
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
				IntAABB_t::IntAABB_t(); // 491
				IntAABBIterator::IntAABBIterator(
						const IntAABB_t& domain,
						int nStartingIndex);  // 525
				IntAABB_CellRangeReference::end(); // 753
			}
			default_delete<unsigned int []>::operator(
						unsigned int* __ptr);  // 204
			__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::reset(
				pointer __p);  // 790
			unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::reset<unsigned int*>(
						unsigned int* __p);  // 744
			__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
			unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 745
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 745
			IntVector3D::IntVector3D(); // 747
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 798
	}
	default_delete<SweepGroup_t []>::operator(
				SweepGroup_t* __ptr);  // 204
	__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::reset(
		pointer __p);  // 790
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::reset<SweepGroup_t*>(
				SweepGroup_t* __p);  // 734
	default_delete<SweepGroup_t::operator(
					SweepGroup_t** __ptr);  // 204
	__uniq_ptr_impl<SweepGroup_t::reset(
		pointer __p);  // 790
	unique_ptr<SweepGroup_t::reset<SweepGroup_t**>(
				SweepGroup_t** __p);  // 735
	__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
	unique_ptr<SweepGroup_t::get(); // 736
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 736
	SweepGroup_t::SweepGroup_t(); // 734
} /* size: 0, variables: 4, inline expansions: 11 (0 bytes) */

// <01B10BCD> ../public/tier0/fastsweep.h:726
// variables: 20
// function calls: 75
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::SetupAlgorithm2()
{
	const char   __FUNCTION__; // 47044
	int nNumberOfSlices; // 729
	int nNumberOfBlocks; // 730
	int nNumberOfGroupsToAllocate; // 731
	{
		uint8 nSweep; // 741
		{
			IntVector3D vSweepOriginBlock; // 747
			{
				int c; // 748
			}
			{
				IntVector3D vBlockIndex; // 753
				IntAABB_CellRangeReference& __for_range; // 4210
				IntAABBIterator __for_begin; // 50156
				IntAABBIterator __for_end; // 50156
				{
					uint8 nBlockFlags; // 755
					IntVector3D vRelativeBlockIndex; // 756
					int nSliceNumber; // 757
					int nIndex; // 760
					SweepGroup_t* pNode; // 761
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 758
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 759
					}
					{
						SweepGroup_t* pNN; // 789
						__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
						unique_ptr<SweepGroup_t::get(); // 735
						unique_ptr<SweepGroup_t::operator[](
								size_t __i);  // 792
					}
					IntVector3D::IntVector3D(); // 507
					IntAABBIterator::operator*(); // 753
					CFastSweepControllerBase::BlockIsOnBorder(
							IntVector3D vBlockIndex);  // 755
					IntVector3D::IntVector3D(
							int nX,
							int nY,
							int nZ);  // 224
					IntVector3D::operator-(
							const IntVector3D& rhs);  // 756
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 761
					__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
							size_t __i);  // 769
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 771
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 772
					__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 777
					CFastSweepControllerBase::BlockIndex(
							IntVector3D vBlockIndex);  // 777
					__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
					unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 735
					unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::operator[](
							size_t __i);  // 777
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 784
				}
				IntVector3D::IntVector3D(
						int nX,
						int nY,
						int nZ);  // 753
				IntVector3D::IntVector3D(); // 304
				IntVector3D::IntVector3D(); // 304
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(
							const IntVector3D& mins,
							const IntVector3D& maxes);  // 430
				IntAABB_t::IntAABB_t(
						IntVector3D a,
						IntVector3D b);  // 753
				IntVector3D::IntVector3D(); // 301
				IntVector3D::IntVector3D(); // 301
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
				IntAABB_t::IntAABB_t(); // 470
				IntAABB_CellRangeReference::IntAABB_CellRangeReference(); // 530
				IntAABB_t::IndicesNonInclusive(); // 753
				IntVector3D::IntVector3D(); // 301
				IntVector3D::IntVector3D(); // 301
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
				IntAABB_t::IntAABB_t(); // 491
				IntAABBIterator::IntAABBIterator(
						const IntAABB_t& domain,
						int nStartingIndex);  // 520
				IntAABB_CellRangeReference::begin(); // 753
				IntAABB_t::Width(); // 453
				IntAABB_t::Height(); // 453
				IntAABB_t::Depth(); // 453
				IntAABB_t::NumberOfCells(); // 525
				IntVector3D::IntVector3D(); // 301
				IntVector3D::IntVector3D(); // 301
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
				IntAABB_t::IntAABB_t(); // 491
				IntAABBIterator::IntAABBIterator(
						const IntAABB_t& domain,
						int nStartingIndex);  // 525
				IntAABB_CellRangeReference::end(); // 753
			}
			default_delete<unsigned int []>::operator(
						unsigned int* __ptr);  // 204
			__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::reset(
				pointer __p);  // 790
			unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::reset<unsigned int*>(
						unsigned int* __p);  // 744
			__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
			unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 745
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 745
			IntVector3D::IntVector3D(); // 747
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 798
	}
	default_delete<SweepGroup_t []>::operator(
				SweepGroup_t* __ptr);  // 204
	__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::reset(
		pointer __p);  // 790
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::reset<SweepGroup_t*>(
				SweepGroup_t* __p);  // 734
	default_delete<SweepGroup_t::operator(
					SweepGroup_t** __ptr);  // 204
	__uniq_ptr_impl<SweepGroup_t::reset(
		pointer __p);  // 790
	unique_ptr<SweepGroup_t::reset<SweepGroup_t**>(
				SweepGroup_t** __p);  // 735
	__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
	unique_ptr<SweepGroup_t::get(); // 736
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 736
	SweepGroup_t::SweepGroup_t(); // 734
} /* size: 0, variables: 4, inline expansions: 11 (0 bytes) */

// <01B0E949> ../public/tier0/fastsweep.h:726
// variables: 20
// function calls: 75
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::SetupAlgorithm2()
{
	const char   __FUNCTION__; // 47044
	int nNumberOfSlices; // 729
	int nNumberOfBlocks; // 730
	int nNumberOfGroupsToAllocate; // 731
	{
		uint8 nSweep; // 741
		{
			IntVector3D vSweepOriginBlock; // 747
			{
				int c; // 748
			}
			{
				IntVector3D vBlockIndex; // 753
				IntAABB_CellRangeReference& __for_range; // 4210
				IntAABBIterator __for_begin; // 50156
				IntAABBIterator __for_end; // 50156
				{
					uint8 nBlockFlags; // 755
					IntVector3D vRelativeBlockIndex; // 756
					int nSliceNumber; // 757
					int nIndex; // 760
					SweepGroup_t* pNode; // 761
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 758
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 759
					}
					{
						SweepGroup_t* pNN; // 789
						__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
						unique_ptr<SweepGroup_t::get(); // 735
						unique_ptr<SweepGroup_t::operator[](
								size_t __i);  // 792
					}
					IntVector3D::IntVector3D(); // 507
					IntAABBIterator::operator*(); // 753
					CFastSweepControllerBase::BlockIsOnBorder(
							IntVector3D vBlockIndex);  // 755
					IntVector3D::IntVector3D(
							int nX,
							int nY,
							int nZ);  // 224
					IntVector3D::operator-(
							const IntVector3D& rhs);  // 756
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 761
					__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
							size_t __i);  // 769
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 771
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 772
					__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 777
					CFastSweepControllerBase::BlockIndex(
							IntVector3D vBlockIndex);  // 777
					__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
					unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 735
					unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::operator[](
							size_t __i);  // 777
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 784
				}
				IntVector3D::IntVector3D(
						int nX,
						int nY,
						int nZ);  // 753
				IntVector3D::IntVector3D(); // 304
				IntVector3D::IntVector3D(); // 304
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(
							const IntVector3D& mins,
							const IntVector3D& maxes);  // 430
				IntAABB_t::IntAABB_t(
						IntVector3D a,
						IntVector3D b);  // 753
				IntVector3D::IntVector3D(); // 301
				IntVector3D::IntVector3D(); // 301
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
				IntAABB_t::IntAABB_t(); // 470
				IntAABB_CellRangeReference::IntAABB_CellRangeReference(); // 530
				IntAABB_t::IndicesNonInclusive(); // 753
				IntVector3D::IntVector3D(); // 301
				IntVector3D::IntVector3D(); // 301
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
				IntAABB_t::IntAABB_t(); // 491
				IntAABBIterator::IntAABBIterator(
						const IntAABB_t& domain,
						int nStartingIndex);  // 520
				IntAABB_CellRangeReference::begin(); // 753
				IntAABB_t::Width(); // 453
				IntAABB_t::Height(); // 453
				IntAABB_t::Depth(); // 453
				IntAABB_t::NumberOfCells(); // 525
				IntVector3D::IntVector3D(); // 301
				IntVector3D::IntVector3D(); // 301
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
				IntAABB_t::IntAABB_t(); // 491
				IntAABBIterator::IntAABBIterator(
						const IntAABB_t& domain,
						int nStartingIndex);  // 525
				IntAABB_CellRangeReference::end(); // 753
			}
			default_delete<unsigned int []>::operator(
						unsigned int* __ptr);  // 204
			__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::reset(
				pointer __p);  // 790
			unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::reset<unsigned int*>(
						unsigned int* __p);  // 744
			__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
			unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 745
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 745
			IntVector3D::IntVector3D(); // 747
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 798
	}
	default_delete<SweepGroup_t []>::operator(
				SweepGroup_t* __ptr);  // 204
	__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::reset(
		pointer __p);  // 790
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::reset<SweepGroup_t*>(
				SweepGroup_t* __p);  // 734
	default_delete<SweepGroup_t::operator(
					SweepGroup_t** __ptr);  // 204
	__uniq_ptr_impl<SweepGroup_t::reset(
		pointer __p);  // 790
	unique_ptr<SweepGroup_t::reset<SweepGroup_t**>(
				SweepGroup_t** __p);  // 735
	__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
	unique_ptr<SweepGroup_t::get(); // 736
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 736
	SweepGroup_t::SweepGroup_t(); // 734
} /* size: 0, variables: 4, inline expansions: 11 (0 bytes) */

// <01B0C6C5> ../public/tier0/fastsweep.h:726
// variables: 20
// function calls: 75
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::SetupAlgorithm2()
{
	const char   __FUNCTION__; // 47044
	int nNumberOfSlices; // 729
	int nNumberOfBlocks; // 730
	int nNumberOfGroupsToAllocate; // 731
	{
		uint8 nSweep; // 741
		{
			IntVector3D vSweepOriginBlock; // 747
			{
				int c; // 748
			}
			{
				IntVector3D vBlockIndex; // 753
				IntAABB_CellRangeReference& __for_range; // 4210
				IntAABBIterator __for_begin; // 50156
				IntAABBIterator __for_end; // 50156
				{
					uint8 nBlockFlags; // 755
					IntVector3D vRelativeBlockIndex; // 756
					int nSliceNumber; // 757
					int nIndex; // 760
					SweepGroup_t* pNode; // 761
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 758
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 759
					}
					{
						SweepGroup_t* pNN; // 789
						__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
						unique_ptr<SweepGroup_t::get(); // 735
						unique_ptr<SweepGroup_t::operator[](
								size_t __i);  // 792
					}
					IntVector3D::IntVector3D(); // 507
					IntAABBIterator::operator*(); // 753
					CFastSweepControllerBase::BlockIsOnBorder(
							IntVector3D vBlockIndex);  // 755
					IntVector3D::IntVector3D(
							int nX,
							int nY,
							int nZ);  // 224
					IntVector3D::operator-(
							const IntVector3D& rhs);  // 756
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 761
					__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
							size_t __i);  // 769
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 771
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 772
					__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 777
					CFastSweepControllerBase::BlockIndex(
							IntVector3D vBlockIndex);  // 777
					__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
					unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 735
					unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::operator[](
							size_t __i);  // 777
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 784
				}
				IntVector3D::IntVector3D(
						int nX,
						int nY,
						int nZ);  // 753
				IntVector3D::IntVector3D(); // 304
				IntVector3D::IntVector3D(); // 304
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(
							const IntVector3D& mins,
							const IntVector3D& maxes);  // 430
				IntAABB_t::IntAABB_t(
						IntVector3D a,
						IntVector3D b);  // 753
				IntVector3D::IntVector3D(); // 301
				IntVector3D::IntVector3D(); // 301
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
				IntAABB_t::IntAABB_t(); // 470
				IntAABB_CellRangeReference::IntAABB_CellRangeReference(); // 530
				IntAABB_t::IndicesNonInclusive(); // 753
				IntVector3D::IntVector3D(); // 301
				IntVector3D::IntVector3D(); // 301
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
				IntAABB_t::IntAABB_t(); // 491
				IntAABBIterator::IntAABBIterator(
						const IntAABB_t& domain,
						int nStartingIndex);  // 520
				IntAABB_CellRangeReference::begin(); // 753
				IntAABB_t::Width(); // 453
				IntAABB_t::Height(); // 453
				IntAABB_t::Depth(); // 453
				IntAABB_t::NumberOfCells(); // 525
				IntVector3D::IntVector3D(); // 301
				IntVector3D::IntVector3D(); // 301
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
				IntAABB_t::IntAABB_t(); // 491
				IntAABBIterator::IntAABBIterator(
						const IntAABB_t& domain,
						int nStartingIndex);  // 525
				IntAABB_CellRangeReference::end(); // 753
			}
			default_delete<unsigned int []>::operator(
						unsigned int* __ptr);  // 204
			__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::reset(
				pointer __p);  // 790
			unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::reset<unsigned int*>(
						unsigned int* __p);  // 744
			__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
			unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 745
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 745
			IntVector3D::IntVector3D(); // 747
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 798
	}
	default_delete<SweepGroup_t []>::operator(
				SweepGroup_t* __ptr);  // 204
	__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::reset(
		pointer __p);  // 790
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::reset<SweepGroup_t*>(
				SweepGroup_t* __p);  // 734
	default_delete<SweepGroup_t::operator(
					SweepGroup_t** __ptr);  // 204
	__uniq_ptr_impl<SweepGroup_t::reset(
		pointer __p);  // 790
	unique_ptr<SweepGroup_t::reset<SweepGroup_t**>(
				SweepGroup_t** __p);  // 735
	__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
	unique_ptr<SweepGroup_t::get(); // 736
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 736
	SweepGroup_t::SweepGroup_t(); // 734
} /* size: 0, variables: 4, inline expansions: 11 (0 bytes) */

// <01B09250> ../public/tier0/fastsweep.h:726
// variables: 20
// function calls: 75
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::SetupAlgorithm2()
{
	const char   __FUNCTION__; // 47044
	int nNumberOfSlices; // 729
	int nNumberOfBlocks; // 730
	int nNumberOfGroupsToAllocate; // 731
	{
		uint8 nSweep; // 741
		{
			IntVector3D vSweepOriginBlock; // 747
			{
				int c; // 748
			}
			{
				IntVector3D vBlockIndex; // 753
				IntAABB_CellRangeReference& __for_range; // 4210
				IntAABBIterator __for_begin; // 50156
				IntAABBIterator __for_end; // 50156
				{
					uint8 nBlockFlags; // 755
					IntVector3D vRelativeBlockIndex; // 756
					int nSliceNumber; // 757
					int nIndex; // 760
					SweepGroup_t* pNode; // 761
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 758
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 759
					}
					{
						SweepGroup_t* pNN; // 789
						__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
						unique_ptr<SweepGroup_t::get(); // 735
						unique_ptr<SweepGroup_t::operator[](
								size_t __i);  // 792
					}
					IntVector3D::IntVector3D(); // 507
					IntAABBIterator::operator*(); // 753
					CFastSweepControllerBase::BlockIsOnBorder(
							IntVector3D vBlockIndex);  // 755
					IntVector3D::IntVector3D(
							int nX,
							int nY,
							int nZ);  // 224
					IntVector3D::operator-(
							const IntVector3D& rhs);  // 756
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 761
					__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
							size_t __i);  // 769
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 771
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 772
					__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 777
					CFastSweepControllerBase::BlockIndex(
							IntVector3D vBlockIndex);  // 777
					__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
					unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 735
					unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::operator[](
							size_t __i);  // 777
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 784
				}
				IntVector3D::IntVector3D(
						int nX,
						int nY,
						int nZ);  // 753
				IntVector3D::IntVector3D(); // 304
				IntVector3D::IntVector3D(); // 304
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(
							const IntVector3D& mins,
							const IntVector3D& maxes);  // 430
				IntAABB_t::IntAABB_t(
						IntVector3D a,
						IntVector3D b);  // 753
				IntVector3D::IntVector3D(); // 301
				IntVector3D::IntVector3D(); // 301
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
				IntAABB_t::IntAABB_t(); // 470
				IntAABB_CellRangeReference::IntAABB_CellRangeReference(); // 530
				IntAABB_t::IndicesNonInclusive(); // 753
				IntVector3D::IntVector3D(); // 301
				IntVector3D::IntVector3D(); // 301
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
				IntAABB_t::IntAABB_t(); // 491
				IntAABBIterator::IntAABBIterator(
						const IntAABB_t& domain,
						int nStartingIndex);  // 520
				IntAABB_CellRangeReference::begin(); // 753
				IntAABB_t::Width(); // 453
				IntAABB_t::Height(); // 453
				IntAABB_t::Depth(); // 453
				IntAABB_t::NumberOfCells(); // 525
				IntVector3D::IntVector3D(); // 301
				IntVector3D::IntVector3D(); // 301
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
				IntAABB_t::IntAABB_t(); // 491
				IntAABBIterator::IntAABBIterator(
						const IntAABB_t& domain,
						int nStartingIndex);  // 525
				IntAABB_CellRangeReference::end(); // 753
			}
			default_delete<unsigned int []>::operator(
						unsigned int* __ptr);  // 204
			__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::reset(
				pointer __p);  // 790
			unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::reset<unsigned int*>(
						unsigned int* __p);  // 744
			__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
			unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 745
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 745
			IntVector3D::IntVector3D(); // 747
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 798
	}
	default_delete<SweepGroup_t []>::operator(
				SweepGroup_t* __ptr);  // 204
	__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::reset(
		pointer __p);  // 790
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::reset<SweepGroup_t*>(
				SweepGroup_t* __p);  // 734
	default_delete<SweepGroup_t::operator(
					SweepGroup_t** __ptr);  // 204
	__uniq_ptr_impl<SweepGroup_t::reset(
		pointer __p);  // 790
	unique_ptr<SweepGroup_t::reset<SweepGroup_t**>(
				SweepGroup_t** __p);  // 735
	__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
	unique_ptr<SweepGroup_t::get(); // 736
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 736
	SweepGroup_t::SweepGroup_t(); // 734
} /* size: 0, variables: 4, inline expansions: 11 (0 bytes) */

// <009999AC> ../public/tier0/fastsweep.h:726
// variables: 20
// function calls: 75
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::SetupAlgorithm2()
{
	const char   __FUNCTION__; // 39764
	int nNumberOfSlices; // 729
	int nNumberOfBlocks; // 730
	int nNumberOfGroupsToAllocate; // 731
	{
		uint8 nSweep; // 741
		{
			IntVector3D vSweepOriginBlock; // 747
			{
				int c; // 748
			}
			{
				IntVector3D vBlockIndex; // 753
				IntAABB_CellRangeReference& __for_range; // 62466
				IntAABBIterator __for_begin; // 42876
				IntAABBIterator __for_end; // 42876
				{
					uint8 nBlockFlags; // 755
					IntVector3D vRelativeBlockIndex; // 756
					int nSliceNumber; // 757
					int nIndex; // 760
					SweepGroup_t* pNode; // 761
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 758
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 759
					}
					{
						SweepGroup_t* pNN; // 789
						__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
						unique_ptr<SweepGroup_t::get(); // 735
						unique_ptr<SweepGroup_t::operator[](
								size_t __i);  // 792
					}
					IntVector3D::IntVector3D(); // 507
					IntAABBIterator::operator*(); // 753
					CFastSweepControllerBase::BlockIsOnBorder(
							IntVector3D vBlockIndex);  // 755
					IntVector3D::IntVector3D(
							int nX,
							int nY,
							int nZ);  // 224
					IntVector3D::operator-(
							const IntVector3D& rhs);  // 756
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 761
					__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
							size_t __i);  // 769
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 771
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 772
					__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 777
					CFastSweepControllerBase::BlockIndex(
							IntVector3D vBlockIndex);  // 777
					__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
					unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 735
					unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::operator[](
							size_t __i);  // 777
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 784
				}
				IntVector3D::IntVector3D(
						int nX,
						int nY,
						int nZ);  // 753
				IntVector3D::IntVector3D(); // 304
				IntVector3D::IntVector3D(); // 304
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(
							const IntVector3D& mins,
							const IntVector3D& maxes);  // 430
				IntAABB_t::IntAABB_t(
						IntVector3D a,
						IntVector3D b);  // 753
				IntVector3D::IntVector3D(); // 301
				IntVector3D::IntVector3D(); // 301
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
				IntAABB_t::IntAABB_t(); // 470
				IntAABB_CellRangeReference::IntAABB_CellRangeReference(); // 530
				IntAABB_t::IndicesNonInclusive(); // 753
				IntVector3D::IntVector3D(); // 301
				IntVector3D::IntVector3D(); // 301
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
				IntAABB_t::IntAABB_t(); // 491
				IntAABBIterator::IntAABBIterator(
						const IntAABB_t& domain,
						int nStartingIndex);  // 520
				IntAABB_CellRangeReference::begin(); // 753
				IntAABB_t::Width(); // 453
				IntAABB_t::Height(); // 453
				IntAABB_t::Depth(); // 453
				IntAABB_t::NumberOfCells(); // 525
				IntVector3D::IntVector3D(); // 301
				IntVector3D::IntVector3D(); // 301
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
				IntAABB_t::IntAABB_t(); // 491
				IntAABBIterator::IntAABBIterator(
						const IntAABB_t& domain,
						int nStartingIndex);  // 525
				IntAABB_CellRangeReference::end(); // 753
			}
			default_delete<unsigned int []>::operator(
						unsigned int* __ptr);  // 204
			__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::reset(
				pointer __p);  // 790
			unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::reset<unsigned int*>(
						unsigned int* __p);  // 744
			__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
			unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 745
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 745
			IntVector3D::IntVector3D(); // 747
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 798
	}
	default_delete<SweepGroup_t []>::operator(
				SweepGroup_t* __ptr);  // 204
	__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::reset(
		pointer __p);  // 790
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::reset<SweepGroup_t*>(
				SweepGroup_t* __p);  // 734
	default_delete<SweepGroup_t::operator(
					SweepGroup_t** __ptr);  // 204
	__uniq_ptr_impl<SweepGroup_t::reset(
		pointer __p);  // 790
	unique_ptr<SweepGroup_t::reset<SweepGroup_t**>(
				SweepGroup_t** __p);  // 735
	__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
	unique_ptr<SweepGroup_t::get(); // 736
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 736
	SweepGroup_t::SweepGroup_t(); // 734
} /* size: 0, variables: 4, inline expansions: 11 (0 bytes) */

// <00996430> ../public/tier0/fastsweep.h:726
// variables: 20
// function calls: 75
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::SetupAlgorithm2()
{
	const char   __FUNCTION__; // 39764
	int nNumberOfSlices; // 729
	int nNumberOfBlocks; // 730
	int nNumberOfGroupsToAllocate; // 731
	{
		uint8 nSweep; // 741
		{
			IntVector3D vSweepOriginBlock; // 747
			{
				int c; // 748
			}
			{
				IntVector3D vBlockIndex; // 753
				IntAABB_CellRangeReference& __for_range; // 62466
				IntAABBIterator __for_begin; // 42876
				IntAABBIterator __for_end; // 42876
				{
					uint8 nBlockFlags; // 755
					IntVector3D vRelativeBlockIndex; // 756
					int nSliceNumber; // 757
					int nIndex; // 760
					SweepGroup_t* pNode; // 761
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 758
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 759
					}
					{
						SweepGroup_t* pNN; // 789
						__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
						unique_ptr<SweepGroup_t::get(); // 735
						unique_ptr<SweepGroup_t::operator[](
								size_t __i);  // 792
					}
					IntVector3D::IntVector3D(); // 507
					IntAABBIterator::operator*(); // 753
					CFastSweepControllerBase::BlockIsOnBorder(
							IntVector3D vBlockIndex);  // 755
					IntVector3D::IntVector3D(
							int nX,
							int nY,
							int nZ);  // 224
					IntVector3D::operator-(
							const IntVector3D& rhs);  // 756
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 761
					__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
							size_t __i);  // 769
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 771
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 772
					__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 777
					CFastSweepControllerBase::BlockIndex(
							IntVector3D vBlockIndex);  // 777
					__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
					unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 735
					unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::operator[](
							size_t __i);  // 777
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 784
				}
				IntVector3D::IntVector3D(
						int nX,
						int nY,
						int nZ);  // 753
				IntVector3D::IntVector3D(); // 304
				IntVector3D::IntVector3D(); // 304
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(
							const IntVector3D& mins,
							const IntVector3D& maxes);  // 430
				IntAABB_t::IntAABB_t(
						IntVector3D a,
						IntVector3D b);  // 753
				IntVector3D::IntVector3D(); // 301
				IntVector3D::IntVector3D(); // 301
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
				IntAABB_t::IntAABB_t(); // 470
				IntAABB_CellRangeReference::IntAABB_CellRangeReference(); // 530
				IntAABB_t::IndicesNonInclusive(); // 753
				IntVector3D::IntVector3D(); // 301
				IntVector3D::IntVector3D(); // 301
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
				IntAABB_t::IntAABB_t(); // 491
				IntAABBIterator::IntAABBIterator(
						const IntAABB_t& domain,
						int nStartingIndex);  // 520
				IntAABB_CellRangeReference::begin(); // 753
				IntAABB_t::Width(); // 453
				IntAABB_t::Height(); // 453
				IntAABB_t::Depth(); // 453
				IntAABB_t::NumberOfCells(); // 525
				IntVector3D::IntVector3D(); // 301
				IntVector3D::IntVector3D(); // 301
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
				IntAABB_t::IntAABB_t(); // 491
				IntAABBIterator::IntAABBIterator(
						const IntAABB_t& domain,
						int nStartingIndex);  // 525
				IntAABB_CellRangeReference::end(); // 753
			}
			default_delete<unsigned int []>::operator(
						unsigned int* __ptr);  // 204
			__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::reset(
				pointer __p);  // 790
			unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::reset<unsigned int*>(
						unsigned int* __p);  // 744
			__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
			unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 745
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 745
			IntVector3D::IntVector3D(); // 747
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 798
	}
	default_delete<SweepGroup_t []>::operator(
				SweepGroup_t* __ptr);  // 204
	__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::reset(
		pointer __p);  // 790
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::reset<SweepGroup_t*>(
				SweepGroup_t* __p);  // 734
	default_delete<SweepGroup_t::operator(
					SweepGroup_t** __ptr);  // 204
	__uniq_ptr_impl<SweepGroup_t::reset(
		pointer __p);  // 790
	unique_ptr<SweepGroup_t::reset<SweepGroup_t**>(
				SweepGroup_t** __p);  // 735
	__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
	unique_ptr<SweepGroup_t::get(); // 736
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 736
	SweepGroup_t::SweepGroup_t(); // 734
} /* size: 0, variables: 4, inline expansions: 11 (0 bytes) */

// <009941AC> ../public/tier0/fastsweep.h:726
// variables: 20
// function calls: 75
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::SetupAlgorithm2()
{
	const char   __FUNCTION__; // 39764
	int nNumberOfSlices; // 729
	int nNumberOfBlocks; // 730
	int nNumberOfGroupsToAllocate; // 731
	{
		uint8 nSweep; // 741
		{
			IntVector3D vSweepOriginBlock; // 747
			{
				int c; // 748
			}
			{
				IntVector3D vBlockIndex; // 753
				IntAABB_CellRangeReference& __for_range; // 62466
				IntAABBIterator __for_begin; // 42876
				IntAABBIterator __for_end; // 42876
				{
					uint8 nBlockFlags; // 755
					IntVector3D vRelativeBlockIndex; // 756
					int nSliceNumber; // 757
					int nIndex; // 760
					SweepGroup_t* pNode; // 761
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 758
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 759
					}
					{
						SweepGroup_t* pNN; // 789
						__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
						unique_ptr<SweepGroup_t::get(); // 735
						unique_ptr<SweepGroup_t::operator[](
								size_t __i);  // 792
					}
					IntVector3D::IntVector3D(); // 507
					IntAABBIterator::operator*(); // 753
					CFastSweepControllerBase::BlockIsOnBorder(
							IntVector3D vBlockIndex);  // 755
					IntVector3D::IntVector3D(
							int nX,
							int nY,
							int nZ);  // 224
					IntVector3D::operator-(
							const IntVector3D& rhs);  // 756
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 761
					__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
							size_t __i);  // 769
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 771
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 772
					__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 777
					CFastSweepControllerBase::BlockIndex(
							IntVector3D vBlockIndex);  // 777
					__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
					unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 735
					unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::operator[](
							size_t __i);  // 777
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 784
				}
				IntVector3D::IntVector3D(
						int nX,
						int nY,
						int nZ);  // 753
				IntVector3D::IntVector3D(); // 304
				IntVector3D::IntVector3D(); // 304
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(
							const IntVector3D& mins,
							const IntVector3D& maxes);  // 430
				IntAABB_t::IntAABB_t(
						IntVector3D a,
						IntVector3D b);  // 753
				IntVector3D::IntVector3D(); // 301
				IntVector3D::IntVector3D(); // 301
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
				IntAABB_t::IntAABB_t(); // 470
				IntAABB_CellRangeReference::IntAABB_CellRangeReference(); // 530
				IntAABB_t::IndicesNonInclusive(); // 753
				IntVector3D::IntVector3D(); // 301
				IntVector3D::IntVector3D(); // 301
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
				IntAABB_t::IntAABB_t(); // 491
				IntAABBIterator::IntAABBIterator(
						const IntAABB_t& domain,
						int nStartingIndex);  // 520
				IntAABB_CellRangeReference::begin(); // 753
				IntAABB_t::Width(); // 453
				IntAABB_t::Height(); // 453
				IntAABB_t::Depth(); // 453
				IntAABB_t::NumberOfCells(); // 525
				IntVector3D::IntVector3D(); // 301
				IntVector3D::IntVector3D(); // 301
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
				IntAABB_t::IntAABB_t(); // 491
				IntAABBIterator::IntAABBIterator(
						const IntAABB_t& domain,
						int nStartingIndex);  // 525
				IntAABB_CellRangeReference::end(); // 753
			}
			default_delete<unsigned int []>::operator(
						unsigned int* __ptr);  // 204
			__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::reset(
				pointer __p);  // 790
			unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::reset<unsigned int*>(
						unsigned int* __p);  // 744
			__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
			unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 745
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 745
			IntVector3D::IntVector3D(); // 747
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 798
	}
	default_delete<SweepGroup_t []>::operator(
				SweepGroup_t* __ptr);  // 204
	__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::reset(
		pointer __p);  // 790
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::reset<SweepGroup_t*>(
				SweepGroup_t* __p);  // 734
	default_delete<SweepGroup_t::operator(
					SweepGroup_t** __ptr);  // 204
	__uniq_ptr_impl<SweepGroup_t::reset(
		pointer __p);  // 790
	unique_ptr<SweepGroup_t::reset<SweepGroup_t**>(
				SweepGroup_t** __p);  // 735
	__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
	unique_ptr<SweepGroup_t::get(); // 736
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 736
	SweepGroup_t::SweepGroup_t(); // 734
} /* size: 0, variables: 4, inline expansions: 11 (0 bytes) */

// <00991F28> ../public/tier0/fastsweep.h:726
// variables: 20
// function calls: 75
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::SetupAlgorithm2()
{
	const char   __FUNCTION__; // 39764
	int nNumberOfSlices; // 729
	int nNumberOfBlocks; // 730
	int nNumberOfGroupsToAllocate; // 731
	{
		uint8 nSweep; // 741
		{
			IntVector3D vSweepOriginBlock; // 747
			{
				int c; // 748
			}
			{
				IntVector3D vBlockIndex; // 753
				IntAABB_CellRangeReference& __for_range; // 62466
				IntAABBIterator __for_begin; // 42876
				IntAABBIterator __for_end; // 42876
				{
					uint8 nBlockFlags; // 755
					IntVector3D vRelativeBlockIndex; // 756
					int nSliceNumber; // 757
					int nIndex; // 760
					SweepGroup_t* pNode; // 761
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 758
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 759
					}
					{
						SweepGroup_t* pNN; // 789
						__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
						unique_ptr<SweepGroup_t::get(); // 735
						unique_ptr<SweepGroup_t::operator[](
								size_t __i);  // 792
					}
					IntVector3D::IntVector3D(); // 507
					IntAABBIterator::operator*(); // 753
					CFastSweepControllerBase::BlockIsOnBorder(
							IntVector3D vBlockIndex);  // 755
					IntVector3D::IntVector3D(
							int nX,
							int nY,
							int nZ);  // 224
					IntVector3D::operator-(
							const IntVector3D& rhs);  // 756
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 761
					__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
							size_t __i);  // 769
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 771
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 772
					__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 777
					CFastSweepControllerBase::BlockIndex(
							IntVector3D vBlockIndex);  // 777
					__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
					unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 735
					unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::operator[](
							size_t __i);  // 777
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 784
				}
				IntVector3D::IntVector3D(
						int nX,
						int nY,
						int nZ);  // 753
				IntVector3D::IntVector3D(); // 304
				IntVector3D::IntVector3D(); // 304
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(
							const IntVector3D& mins,
							const IntVector3D& maxes);  // 430
				IntAABB_t::IntAABB_t(
						IntVector3D a,
						IntVector3D b);  // 753
				IntVector3D::IntVector3D(); // 301
				IntVector3D::IntVector3D(); // 301
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
				IntAABB_t::IntAABB_t(); // 470
				IntAABB_CellRangeReference::IntAABB_CellRangeReference(); // 530
				IntAABB_t::IndicesNonInclusive(); // 753
				IntVector3D::IntVector3D(); // 301
				IntVector3D::IntVector3D(); // 301
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
				IntAABB_t::IntAABB_t(); // 491
				IntAABBIterator::IntAABBIterator(
						const IntAABB_t& domain,
						int nStartingIndex);  // 520
				IntAABB_CellRangeReference::begin(); // 753
				IntAABB_t::Width(); // 453
				IntAABB_t::Height(); // 453
				IntAABB_t::Depth(); // 453
				IntAABB_t::NumberOfCells(); // 525
				IntVector3D::IntVector3D(); // 301
				IntVector3D::IntVector3D(); // 301
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
				IntAABB_t::IntAABB_t(); // 491
				IntAABBIterator::IntAABBIterator(
						const IntAABB_t& domain,
						int nStartingIndex);  // 525
				IntAABB_CellRangeReference::end(); // 753
			}
			default_delete<unsigned int []>::operator(
						unsigned int* __ptr);  // 204
			__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::reset(
				pointer __p);  // 790
			unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::reset<unsigned int*>(
						unsigned int* __p);  // 744
			__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
			unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 745
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 745
			IntVector3D::IntVector3D(); // 747
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 798
	}
	default_delete<SweepGroup_t []>::operator(
				SweepGroup_t* __ptr);  // 204
	__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::reset(
		pointer __p);  // 790
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::reset<SweepGroup_t*>(
				SweepGroup_t* __p);  // 734
	default_delete<SweepGroup_t::operator(
					SweepGroup_t** __ptr);  // 204
	__uniq_ptr_impl<SweepGroup_t::reset(
		pointer __p);  // 790
	unique_ptr<SweepGroup_t::reset<SweepGroup_t**>(
				SweepGroup_t** __p);  // 735
	__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
	unique_ptr<SweepGroup_t::get(); // 736
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 736
	SweepGroup_t::SweepGroup_t(); // 734
} /* size: 0, variables: 4, inline expansions: 11 (0 bytes) */

// <0098EAB3> ../public/tier0/fastsweep.h:726
// variables: 20
// function calls: 75
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::SetupAlgorithm2()
{
	const char   __FUNCTION__; // 39764
	int nNumberOfSlices; // 729
	int nNumberOfBlocks; // 730
	int nNumberOfGroupsToAllocate; // 731
	{
		uint8 nSweep; // 741
		{
			IntVector3D vSweepOriginBlock; // 747
			{
				int c; // 748
			}
			{
				IntVector3D vBlockIndex; // 753
				IntAABB_CellRangeReference& __for_range; // 62466
				IntAABBIterator __for_begin; // 42876
				IntAABBIterator __for_end; // 42876
				{
					uint8 nBlockFlags; // 755
					IntVector3D vRelativeBlockIndex; // 756
					int nSliceNumber; // 757
					int nIndex; // 760
					SweepGroup_t* pNode; // 761
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 758
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 759
					}
					{
						SweepGroup_t* pNN; // 789
						__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
						unique_ptr<SweepGroup_t::get(); // 735
						unique_ptr<SweepGroup_t::operator[](
								size_t __i);  // 792
					}
					IntVector3D::IntVector3D(); // 507
					IntAABBIterator::operator*(); // 753
					CFastSweepControllerBase::BlockIsOnBorder(
							IntVector3D vBlockIndex);  // 755
					IntVector3D::IntVector3D(
							int nX,
							int nY,
							int nZ);  // 224
					IntVector3D::operator-(
							const IntVector3D& rhs);  // 756
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 761
					__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
							size_t __i);  // 769
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 771
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 772
					__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 777
					CFastSweepControllerBase::BlockIndex(
							IntVector3D vBlockIndex);  // 777
					__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
					unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 735
					unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::operator[](
							size_t __i);  // 777
					__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
					unique_ptr<SweepGroup_t::get(); // 735
					unique_ptr<SweepGroup_t::operator[](
							size_t __i);  // 784
				}
				IntVector3D::IntVector3D(
						int nX,
						int nY,
						int nZ);  // 753
				IntVector3D::IntVector3D(); // 304
				IntVector3D::IntVector3D(); // 304
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(
							const IntVector3D& mins,
							const IntVector3D& maxes);  // 430
				IntAABB_t::IntAABB_t(
						IntVector3D a,
						IntVector3D b);  // 753
				IntVector3D::IntVector3D(); // 301
				IntVector3D::IntVector3D(); // 301
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
				IntAABB_t::IntAABB_t(); // 470
				IntAABB_CellRangeReference::IntAABB_CellRangeReference(); // 530
				IntAABB_t::IndicesNonInclusive(); // 753
				IntVector3D::IntVector3D(); // 301
				IntVector3D::IntVector3D(); // 301
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
				IntAABB_t::IntAABB_t(); // 491
				IntAABBIterator::IntAABBIterator(
						const IntAABB_t& domain,
						int nStartingIndex);  // 520
				IntAABB_CellRangeReference::begin(); // 753
				IntAABB_t::Width(); // 453
				IntAABB_t::Height(); // 453
				IntAABB_t::Depth(); // 453
				IntAABB_t::NumberOfCells(); // 525
				IntVector3D::IntVector3D(); // 301
				IntVector3D::IntVector3D(); // 301
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
				IntAABB_t::IntAABB_t(); // 491
				IntAABBIterator::IntAABBIterator(
						const IntAABB_t& domain,
						int nStartingIndex);  // 525
				IntAABB_CellRangeReference::end(); // 753
			}
			default_delete<unsigned int []>::operator(
						unsigned int* __ptr);  // 204
			__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::reset(
				pointer __p);  // 790
			unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::reset<unsigned int*>(
						unsigned int* __p);  // 744
			__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
			unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 745
			memset(void* __dest,
				int __ch,
				size_t __len);  // 67
			V_memset(void* dest,
				int fill,
				size_t count);  // 745
			IntVector3D::IntVector3D(); // 747
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 798
	}
	default_delete<SweepGroup_t []>::operator(
				SweepGroup_t* __ptr);  // 204
	__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::reset(
		pointer __p);  // 790
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::reset<SweepGroup_t*>(
				SweepGroup_t* __p);  // 734
	default_delete<SweepGroup_t::operator(
					SweepGroup_t** __ptr);  // 204
	__uniq_ptr_impl<SweepGroup_t::reset(
		pointer __p);  // 790
	unique_ptr<SweepGroup_t::reset<SweepGroup_t**>(
				SweepGroup_t** __p);  // 735
	__uniq_ptr_impl<SweepGroup_t::_M_ptr(); // 742
	unique_ptr<SweepGroup_t::get(); // 736
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 736
	SweepGroup_t::SweepGroup_t(); // 734
} /* size: 0, variables: 4, inline expansions: 11 (0 bytes) */

// <044A718B> ../public/tier0/fastsweep.h:802
// variables: 21
// function calls: 89
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::CalculateDependenciesForAlgorithm2()
{
	const char   __FUNCTION__; // 6886
	{
		int nGroup; // 810
		{
			SweepGroup_t* pGroup; // 812
			int nLastBlockAdded; // 822
			{
				int i; // 823
				{
					IntVector3D vBlock; // 825
					{
						int n; // 826
						{
							IntVector3D vDependentBlock; // 828
							{
								int nGroupForBlock; // 831
								{
									const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 832
								}
								{
									bool bAddit; // 837
									{
										int nDep; // 838
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 243
										CUtlBlockMemory<unsigned int, int>::IsIdxValid(
												int i);  // 191
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 192
										CUtlBlockMemory<unsigned int, int>::MinorIndex(
												int i);  // 193
										{
										}
										CUtlBlockMemory<unsigned int, int>::operator[](
												int i);  // 588
										CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::operator[](
												int i);  // 840
									}
									CUtlBlockMemory<unsigned int, int>::NumElementsInBlock(); // 227
									CUtlBlockMemory<unsigned int, int>::NumAllocated(); // 1247
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 243
									CUtlBlockMemory<unsigned int, int>::IsIdxValid(
											int i);  // 191
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 192
									CUtlBlockMemory<unsigned int, int>::MinorIndex(
											int i);  // 193
									{
									}
									CUtlBlockMemory<unsigned int, int>::operator[](
											int i);  // 602
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::Element(
										int i);  // 1252
									Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 247
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 806
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::ResetDbgInfo(); // 824
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::GrowMemory(
											int num);  // 1249
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::AddToTail(
											unsigned int& src);  // 848
									__uniq_ptr_impl<CInterlockedIntT<int, 4>, std::default_delete<CInterlockedIntT<int, 4> []> >::_M_ptr(); // 742
									unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::get(); // 735
									unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::operator[](
											size_t __i);  // 851
									ThreadInterlockedIncrement(volatile int32* p); // 576
									CInterlockedIntT<int, 4>::operator++(); // 582
									CInterlockedIntT<int, 4>::operator++(
											int);  // 851
								}
								CFastSweepControllerBase::BlockIndex(
										IntVector3D vBlockIndex);  // 831
								__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 735
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::operator[](
										size_t __i);  // 831
							}
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 224
							IntVector3D::operator-(
									const IntVector3D& rhs);  // 828
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 829
						}
					}
				}
			}
			{
				int i; // 865
				{
					IntVector3D vBlock; // 867
					{
						int n; // 868
						{
							IntVector3D vDependentBlock; // 870
							{
								int nGroupForBlock; // 878
								{
									const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 879
								}
								{
									bool bAddit; // 882
									{
										int nDep; // 883
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 243
										CUtlBlockMemory<unsigned int, int>::IsIdxValid(
												int i);  // 191
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 192
										CUtlBlockMemory<unsigned int, int>::MinorIndex(
												int i);  // 193
										{
										}
										CUtlBlockMemory<unsigned int, int>::operator[](
												int i);  // 588
										CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::operator[](
												int i);  // 885
									}
									CUtlBlockMemory<unsigned int, int>::NumElementsInBlock(); // 227
									CUtlBlockMemory<unsigned int, int>::NumAllocated(); // 1247
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 243
									CUtlBlockMemory<unsigned int, int>::IsIdxValid(
											int i);  // 191
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 192
									CUtlBlockMemory<unsigned int, int>::MinorIndex(
											int i);  // 193
									{
									}
									CUtlBlockMemory<unsigned int, int>::operator[](
											int i);  // 602
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::Element(
										int i);  // 1252
									Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 247
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 806
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::ResetDbgInfo(); // 824
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::GrowMemory(
											int num);  // 1249
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::AddToTail(
											unsigned int& src);  // 893
									__uniq_ptr_impl<CInterlockedIntT<int, 4>, std::default_delete<CInterlockedIntT<int, 4> []> >::_M_ptr(); // 742
									unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::get(); // 735
									unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::operator[](
											size_t __i);  // 896
									ThreadInterlockedIncrement(volatile int32* p); // 576
									CInterlockedIntT<int, 4>::operator++(); // 582
									CInterlockedIntT<int, 4>::operator++(
											int);  // 896
								}
								CFastSweepControllerBase::BlockIndex(
										IntVector3D vBlockIndex);  // 878
								__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 735
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::operator[](
										size_t __i);  // 878
							}
							IntVector3D::operator+=(
									const IntVector3D& rhs);  // 873
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 876
						}
					}
				}
			}
			__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
			unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
			unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
					size_t __i);  // 812
			CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::Count(); // 819
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 933
	}
	default_delete<CInterlockedIntT<int, 4> []>::operator(
						CInterlockedIntT<int, 4>* __ptr);  // 204
	__uniq_ptr_impl<CInterlockedIntT<int, 4>, std::default_delete<CInterlockedIntT<int, 4> []> >::reset(
		pointer __p);  // 790
	unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::reset<CInterlockedIntT<int>*>(
					CInterlockedIntT<int, 4>* __p);  // 808
	__uniq_ptr_impl<CInterlockedIntT<int, 4>, std::default_delete<CInterlockedIntT<int, 4> []> >::_M_ptr(); // 742
	unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::get(); // 809
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 809
	__uniq_ptr_impl<CInterlockedIntT<int, 4>, std::default_delete<CInterlockedIntT<int, 4> []> >::_M_ptr(); // 742
	unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::get(); // 735
	unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::operator[](
			size_t __i);  // 933
	CInterlockedIntT<int, 4>::operator==(
			int rhs);  // 933
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 224
	Store(AtomicInt32_t& i,
		int val);  // 934
	__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
			size_t __i);  // 935
	CInterlockedIntT<int, 4>::operator!=(
			int rhs);  // 496
	FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::QueueSweep(
			SweepGroup_t* pGroup);  // 935
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 808
} /* size: 0, variables: 1, inline expansions: 20 (0 bytes) */

// <044A4072> ../public/tier0/fastsweep.h:802
// variables: 21
// function calls: 78
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::CalculateDependenciesForAlgorithm2()
{
	const char   __FUNCTION__; // 6886
	{
		int nGroup; // 810
		{
			SweepGroup_t* pGroup; // 812
			int nLastBlockAdded; // 822
			{
				int i; // 823
				{
					IntVector3D vBlock; // 825
					{
						int n; // 826
						{
							IntVector3D vDependentBlock; // 828
							{
								int nGroupForBlock; // 831
								{
									const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 832
								}
								{
									bool bAddit; // 837
									{
										int nDep; // 838
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 243
										CUtlBlockMemory<unsigned int, int>::IsIdxValid(
												int i);  // 191
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 192
										CUtlBlockMemory<unsigned int, int>::MinorIndex(
												int i);  // 193
										{
										}
										CUtlBlockMemory<unsigned int, int>::operator[](
												int i);  // 588
										CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::operator[](
												int i);  // 840
									}
									CUtlBlockMemory<unsigned int, int>::NumElementsInBlock(); // 227
									CUtlBlockMemory<unsigned int, int>::NumAllocated(); // 1247
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 243
									CUtlBlockMemory<unsigned int, int>::IsIdxValid(
											int i);  // 191
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 192
									CUtlBlockMemory<unsigned int, int>::MinorIndex(
											int i);  // 193
									{
									}
									CUtlBlockMemory<unsigned int, int>::operator[](
											int i);  // 602
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::Element(
										int i);  // 1252
									Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 247
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 806
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::ResetDbgInfo(); // 824
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::GrowMemory(
											int num);  // 1249
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::AddToTail(
											unsigned int& src);  // 848
									__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr(); // 742
									unique_ptr<int [], std::default_delete<int []> >::get(); // 735
									unique_ptr<int [], std::default_delete<int []> >::operator[](
											size_t __i);  // 851
								}
								CFastSweepControllerBase::BlockIndex(
										IntVector3D vBlockIndex);  // 831
								__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 735
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::operator[](
										size_t __i);  // 831
							}
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 224
							IntVector3D::operator-(
									const IntVector3D& rhs);  // 828
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 829
						}
					}
				}
			}
			{
				int i; // 865
				{
					IntVector3D vBlock; // 867
					{
						int n; // 868
						{
							IntVector3D vDependentBlock; // 870
							{
								int nGroupForBlock; // 878
								{
									const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 879
								}
								{
									bool bAddit; // 882
									{
										int nDep; // 883
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 243
										CUtlBlockMemory<unsigned int, int>::IsIdxValid(
												int i);  // 191
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 192
										CUtlBlockMemory<unsigned int, int>::MinorIndex(
												int i);  // 193
										{
										}
										CUtlBlockMemory<unsigned int, int>::operator[](
												int i);  // 588
										CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::operator[](
												int i);  // 885
									}
									CUtlBlockMemory<unsigned int, int>::NumElementsInBlock(); // 227
									CUtlBlockMemory<unsigned int, int>::NumAllocated(); // 1247
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 243
									CUtlBlockMemory<unsigned int, int>::IsIdxValid(
											int i);  // 191
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 192
									CUtlBlockMemory<unsigned int, int>::MinorIndex(
											int i);  // 193
									{
									}
									CUtlBlockMemory<unsigned int, int>::operator[](
											int i);  // 602
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::Element(
										int i);  // 1252
									Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 247
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 806
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::ResetDbgInfo(); // 824
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::GrowMemory(
											int num);  // 1249
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::AddToTail(
											unsigned int& src);  // 893
									__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr(); // 742
									unique_ptr<int [], std::default_delete<int []> >::get(); // 735
									unique_ptr<int [], std::default_delete<int []> >::operator[](
											size_t __i);  // 896
								}
								CFastSweepControllerBase::BlockIndex(
										IntVector3D vBlockIndex);  // 878
								__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 735
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::operator[](
										size_t __i);  // 878
							}
							IntVector3D::operator+=(
									const IntVector3D& rhs);  // 873
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 876
						}
					}
				}
			}
			__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
			unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
			unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
					size_t __i);  // 812
			CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::Count(); // 819
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 933
	}
	default_delete<int []>::operator(
			int* __ptr);  // 204
	__uniq_ptr_impl<int, std::default_delete<int []> >::reset(
		pointer __p);  // 790
	unique_ptr<int [], std::default_delete<int []> >::reset<int*>(
			int* __p);  // 808
	__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr(); // 742
	unique_ptr<int [], std::default_delete<int []> >::get(); // 809
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 809
	__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr(); // 742
	unique_ptr<int [], std::default_delete<int []> >::get(); // 735
	unique_ptr<int [], std::default_delete<int []> >::operator[](
			size_t __i);  // 933
	Store(AtomicInt32_t& i,
		int val);  // 934
	FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::QueueSweep(
			SweepGroup_t* pGroup);  // 935
	__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
			size_t __i);  // 935
} /* size: 0, variables: 1, inline expansions: 15 (0 bytes) */

// <044A1795> ../public/tier0/fastsweep.h:802
// variables: 21
// function calls: 78
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::CalculateDependenciesForAlgorithm2()
{
	const char   __FUNCTION__; // 6886
	{
		int nGroup; // 810
		{
			SweepGroup_t* pGroup; // 812
			int nLastBlockAdded; // 822
			{
				int i; // 823
				{
					IntVector3D vBlock; // 825
					{
						int n; // 826
						{
							IntVector3D vDependentBlock; // 828
							{
								int nGroupForBlock; // 831
								{
									const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 832
								}
								{
									bool bAddit; // 837
									{
										int nDep; // 838
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 243
										CUtlBlockMemory<unsigned int, int>::IsIdxValid(
												int i);  // 191
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 192
										CUtlBlockMemory<unsigned int, int>::MinorIndex(
												int i);  // 193
										{
										}
										CUtlBlockMemory<unsigned int, int>::operator[](
												int i);  // 588
										CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::operator[](
												int i);  // 840
									}
									CUtlBlockMemory<unsigned int, int>::NumElementsInBlock(); // 227
									CUtlBlockMemory<unsigned int, int>::NumAllocated(); // 1247
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 243
									CUtlBlockMemory<unsigned int, int>::IsIdxValid(
											int i);  // 191
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 192
									CUtlBlockMemory<unsigned int, int>::MinorIndex(
											int i);  // 193
									{
									}
									CUtlBlockMemory<unsigned int, int>::operator[](
											int i);  // 602
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::Element(
										int i);  // 1252
									Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 247
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 806
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::ResetDbgInfo(); // 824
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::GrowMemory(
											int num);  // 1249
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::AddToTail(
											unsigned int& src);  // 848
									__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr(); // 742
									unique_ptr<int [], std::default_delete<int []> >::get(); // 735
									unique_ptr<int [], std::default_delete<int []> >::operator[](
											size_t __i);  // 851
								}
								CFastSweepControllerBase::BlockIndex(
										IntVector3D vBlockIndex);  // 831
								__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 735
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::operator[](
										size_t __i);  // 831
							}
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 224
							IntVector3D::operator-(
									const IntVector3D& rhs);  // 828
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 829
						}
					}
				}
			}
			{
				int i; // 865
				{
					IntVector3D vBlock; // 867
					{
						int n; // 868
						{
							IntVector3D vDependentBlock; // 870
							{
								int nGroupForBlock; // 878
								{
									const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 879
								}
								{
									bool bAddit; // 882
									{
										int nDep; // 883
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 243
										CUtlBlockMemory<unsigned int, int>::IsIdxValid(
												int i);  // 191
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 192
										CUtlBlockMemory<unsigned int, int>::MinorIndex(
												int i);  // 193
										{
										}
										CUtlBlockMemory<unsigned int, int>::operator[](
												int i);  // 588
										CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::operator[](
												int i);  // 885
									}
									CUtlBlockMemory<unsigned int, int>::NumElementsInBlock(); // 227
									CUtlBlockMemory<unsigned int, int>::NumAllocated(); // 1247
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 243
									CUtlBlockMemory<unsigned int, int>::IsIdxValid(
											int i);  // 191
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 192
									CUtlBlockMemory<unsigned int, int>::MinorIndex(
											int i);  // 193
									{
									}
									CUtlBlockMemory<unsigned int, int>::operator[](
											int i);  // 602
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::Element(
										int i);  // 1252
									Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 247
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 806
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::ResetDbgInfo(); // 824
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::GrowMemory(
											int num);  // 1249
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::AddToTail(
											unsigned int& src);  // 893
									__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr(); // 742
									unique_ptr<int [], std::default_delete<int []> >::get(); // 735
									unique_ptr<int [], std::default_delete<int []> >::operator[](
											size_t __i);  // 896
								}
								CFastSweepControllerBase::BlockIndex(
										IntVector3D vBlockIndex);  // 878
								__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 735
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::operator[](
										size_t __i);  // 878
							}
							IntVector3D::operator+=(
									const IntVector3D& rhs);  // 873
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 876
						}
					}
				}
			}
			__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
			unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
			unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
					size_t __i);  // 812
			CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::Count(); // 819
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 933
	}
	default_delete<int []>::operator(
			int* __ptr);  // 204
	__uniq_ptr_impl<int, std::default_delete<int []> >::reset(
		pointer __p);  // 790
	unique_ptr<int [], std::default_delete<int []> >::reset<int*>(
			int* __p);  // 808
	__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr(); // 742
	unique_ptr<int [], std::default_delete<int []> >::get(); // 809
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 809
	__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr(); // 742
	unique_ptr<int [], std::default_delete<int []> >::get(); // 735
	unique_ptr<int [], std::default_delete<int []> >::operator[](
			size_t __i);  // 933
	Store(AtomicInt32_t& i,
		int val);  // 934
	FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::QueueSweep(
			SweepGroup_t* pGroup);  // 935
	__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
			size_t __i);  // 935
} /* size: 0, variables: 1, inline expansions: 15 (0 bytes) */

// <0449EE32> ../public/tier0/fastsweep.h:802
// variables: 21
// function calls: 89
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::CalculateDependenciesForAlgorithm2()
{
	const char   __FUNCTION__; // 6886
	{
		int nGroup; // 810
		{
			SweepGroup_t* pGroup; // 812
			int nLastBlockAdded; // 822
			{
				int i; // 823
				{
					IntVector3D vBlock; // 825
					{
						int n; // 826
						{
							IntVector3D vDependentBlock; // 828
							{
								int nGroupForBlock; // 831
								{
									const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 832
								}
								{
									bool bAddit; // 837
									{
										int nDep; // 838
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 243
										CUtlBlockMemory<unsigned int, int>::IsIdxValid(
												int i);  // 191
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 192
										CUtlBlockMemory<unsigned int, int>::MinorIndex(
												int i);  // 193
										{
										}
										CUtlBlockMemory<unsigned int, int>::operator[](
												int i);  // 588
										CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::operator[](
												int i);  // 840
									}
									CUtlBlockMemory<unsigned int, int>::NumElementsInBlock(); // 227
									CUtlBlockMemory<unsigned int, int>::NumAllocated(); // 1247
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 243
									CUtlBlockMemory<unsigned int, int>::IsIdxValid(
											int i);  // 191
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 192
									CUtlBlockMemory<unsigned int, int>::MinorIndex(
											int i);  // 193
									{
									}
									CUtlBlockMemory<unsigned int, int>::operator[](
											int i);  // 602
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::Element(
										int i);  // 1252
									Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 247
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 806
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::ResetDbgInfo(); // 824
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::GrowMemory(
											int num);  // 1249
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::AddToTail(
											unsigned int& src);  // 848
									__uniq_ptr_impl<CInterlockedIntT<int, 4>, std::default_delete<CInterlockedIntT<int, 4> []> >::_M_ptr(); // 742
									unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::get(); // 735
									unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::operator[](
											size_t __i);  // 851
									ThreadInterlockedIncrement(volatile int32* p); // 576
									CInterlockedIntT<int, 4>::operator++(); // 582
									CInterlockedIntT<int, 4>::operator++(
											int);  // 851
								}
								CFastSweepControllerBase::BlockIndex(
										IntVector3D vBlockIndex);  // 831
								__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 735
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::operator[](
										size_t __i);  // 831
							}
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 224
							IntVector3D::operator-(
									const IntVector3D& rhs);  // 828
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 829
						}
					}
				}
			}
			{
				int i; // 865
				{
					IntVector3D vBlock; // 867
					{
						int n; // 868
						{
							IntVector3D vDependentBlock; // 870
							{
								int nGroupForBlock; // 878
								{
									const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 879
								}
								{
									bool bAddit; // 882
									{
										int nDep; // 883
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 243
										CUtlBlockMemory<unsigned int, int>::IsIdxValid(
												int i);  // 191
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 192
										CUtlBlockMemory<unsigned int, int>::MinorIndex(
												int i);  // 193
										{
										}
										CUtlBlockMemory<unsigned int, int>::operator[](
												int i);  // 588
										CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::operator[](
												int i);  // 885
									}
									CUtlBlockMemory<unsigned int, int>::NumElementsInBlock(); // 227
									CUtlBlockMemory<unsigned int, int>::NumAllocated(); // 1247
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 243
									CUtlBlockMemory<unsigned int, int>::IsIdxValid(
											int i);  // 191
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 192
									CUtlBlockMemory<unsigned int, int>::MinorIndex(
											int i);  // 193
									{
									}
									CUtlBlockMemory<unsigned int, int>::operator[](
											int i);  // 602
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::Element(
										int i);  // 1252
									Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 247
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 806
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::ResetDbgInfo(); // 824
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::GrowMemory(
											int num);  // 1249
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::AddToTail(
											unsigned int& src);  // 893
									__uniq_ptr_impl<CInterlockedIntT<int, 4>, std::default_delete<CInterlockedIntT<int, 4> []> >::_M_ptr(); // 742
									unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::get(); // 735
									unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::operator[](
											size_t __i);  // 896
									ThreadInterlockedIncrement(volatile int32* p); // 576
									CInterlockedIntT<int, 4>::operator++(); // 582
									CInterlockedIntT<int, 4>::operator++(
											int);  // 896
								}
								CFastSweepControllerBase::BlockIndex(
										IntVector3D vBlockIndex);  // 878
								__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 735
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::operator[](
										size_t __i);  // 878
							}
							IntVector3D::operator+=(
									const IntVector3D& rhs);  // 873
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 876
						}
					}
				}
			}
			__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
			unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
			unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
					size_t __i);  // 812
			CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::Count(); // 819
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 933
	}
	default_delete<CInterlockedIntT<int, 4> []>::operator(
						CInterlockedIntT<int, 4>* __ptr);  // 204
	__uniq_ptr_impl<CInterlockedIntT<int, 4>, std::default_delete<CInterlockedIntT<int, 4> []> >::reset(
		pointer __p);  // 790
	unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::reset<CInterlockedIntT<int>*>(
					CInterlockedIntT<int, 4>* __p);  // 808
	__uniq_ptr_impl<CInterlockedIntT<int, 4>, std::default_delete<CInterlockedIntT<int, 4> []> >::_M_ptr(); // 742
	unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::get(); // 809
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 809
	__uniq_ptr_impl<CInterlockedIntT<int, 4>, std::default_delete<CInterlockedIntT<int, 4> []> >::_M_ptr(); // 742
	unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::get(); // 735
	unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::operator[](
			size_t __i);  // 933
	CInterlockedIntT<int, 4>::operator==(
			int rhs);  // 933
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 224
	Store(AtomicInt32_t& i,
		int val);  // 934
	__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
			size_t __i);  // 935
	CInterlockedIntT<int, 4>::operator!=(
			int rhs);  // 496
	FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::QueueSweep(
			SweepGroup_t* pGroup);  // 935
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 808
} /* size: 0, variables: 1, inline expansions: 20 (0 bytes) */

// <0449BBD5> ../public/tier0/fastsweep.h:802
// variables: 21
// function calls: 78
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::CalculateDependenciesForAlgorithm2()
{
	const char   __FUNCTION__; // 6886
	{
		int nGroup; // 810
		{
			SweepGroup_t* pGroup; // 812
			int nLastBlockAdded; // 822
			{
				int i; // 823
				{
					IntVector3D vBlock; // 825
					{
						int n; // 826
						{
							IntVector3D vDependentBlock; // 828
							{
								int nGroupForBlock; // 831
								{
									const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 832
								}
								{
									bool bAddit; // 837
									{
										int nDep; // 838
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 243
										CUtlBlockMemory<unsigned int, int>::IsIdxValid(
												int i);  // 191
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 192
										CUtlBlockMemory<unsigned int, int>::MinorIndex(
												int i);  // 193
										{
										}
										CUtlBlockMemory<unsigned int, int>::operator[](
												int i);  // 588
										CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::operator[](
												int i);  // 840
									}
									CUtlBlockMemory<unsigned int, int>::NumElementsInBlock(); // 227
									CUtlBlockMemory<unsigned int, int>::NumAllocated(); // 1247
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 243
									CUtlBlockMemory<unsigned int, int>::IsIdxValid(
											int i);  // 191
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 192
									CUtlBlockMemory<unsigned int, int>::MinorIndex(
											int i);  // 193
									{
									}
									CUtlBlockMemory<unsigned int, int>::operator[](
											int i);  // 602
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::Element(
										int i);  // 1252
									Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 247
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 806
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::ResetDbgInfo(); // 824
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::GrowMemory(
											int num);  // 1249
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::AddToTail(
											unsigned int& src);  // 848
									__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr(); // 742
									unique_ptr<int [], std::default_delete<int []> >::get(); // 735
									unique_ptr<int [], std::default_delete<int []> >::operator[](
											size_t __i);  // 851
								}
								CFastSweepControllerBase::BlockIndex(
										IntVector3D vBlockIndex);  // 831
								__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 735
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::operator[](
										size_t __i);  // 831
							}
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 224
							IntVector3D::operator-(
									const IntVector3D& rhs);  // 828
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 829
						}
					}
				}
			}
			{
				int i; // 865
				{
					IntVector3D vBlock; // 867
					{
						int n; // 868
						{
							IntVector3D vDependentBlock; // 870
							{
								int nGroupForBlock; // 878
								{
									const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 879
								}
								{
									bool bAddit; // 882
									{
										int nDep; // 883
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 243
										CUtlBlockMemory<unsigned int, int>::IsIdxValid(
												int i);  // 191
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 192
										CUtlBlockMemory<unsigned int, int>::MinorIndex(
												int i);  // 193
										{
										}
										CUtlBlockMemory<unsigned int, int>::operator[](
												int i);  // 588
										CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::operator[](
												int i);  // 885
									}
									CUtlBlockMemory<unsigned int, int>::NumElementsInBlock(); // 227
									CUtlBlockMemory<unsigned int, int>::NumAllocated(); // 1247
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 243
									CUtlBlockMemory<unsigned int, int>::IsIdxValid(
											int i);  // 191
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 192
									CUtlBlockMemory<unsigned int, int>::MinorIndex(
											int i);  // 193
									{
									}
									CUtlBlockMemory<unsigned int, int>::operator[](
											int i);  // 602
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::Element(
										int i);  // 1252
									Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 247
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 806
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::ResetDbgInfo(); // 824
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::GrowMemory(
											int num);  // 1249
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::AddToTail(
											unsigned int& src);  // 893
									__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr(); // 742
									unique_ptr<int [], std::default_delete<int []> >::get(); // 735
									unique_ptr<int [], std::default_delete<int []> >::operator[](
											size_t __i);  // 896
								}
								CFastSweepControllerBase::BlockIndex(
										IntVector3D vBlockIndex);  // 878
								__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 735
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::operator[](
										size_t __i);  // 878
							}
							IntVector3D::operator+=(
									const IntVector3D& rhs);  // 873
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 876
						}
					}
				}
			}
			__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
			unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
			unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
					size_t __i);  // 812
			CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::Count(); // 819
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 933
	}
	default_delete<int []>::operator(
			int* __ptr);  // 204
	__uniq_ptr_impl<int, std::default_delete<int []> >::reset(
		pointer __p);  // 790
	unique_ptr<int [], std::default_delete<int []> >::reset<int*>(
			int* __p);  // 808
	__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr(); // 742
	unique_ptr<int [], std::default_delete<int []> >::get(); // 809
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 809
	__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr(); // 742
	unique_ptr<int [], std::default_delete<int []> >::get(); // 735
	unique_ptr<int [], std::default_delete<int []> >::operator[](
			size_t __i);  // 933
	Store(AtomicInt32_t& i,
		int val);  // 934
	FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::QueueSweep(
			SweepGroup_t* pGroup);  // 935
	__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
			size_t __i);  // 935
} /* size: 0, variables: 1, inline expansions: 15 (0 bytes) */

// <01B0289D> ../public/tier0/fastsweep.h:802
// variables: 21
// function calls: 89
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::CalculateDependenciesForAlgorithm2()
{
	const char   __FUNCTION__; // 47275
	{
		int nGroup; // 810
		{
			SweepGroup_t* pGroup; // 812
			int nLastBlockAdded; // 822
			{
				int i; // 823
				{
					IntVector3D vBlock; // 825
					{
						int n; // 826
						{
							IntVector3D vDependentBlock; // 828
							{
								int nGroupForBlock; // 831
								{
									const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 832
								}
								{
									bool bAddit; // 837
									{
										int nDep; // 838
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 243
										CUtlBlockMemory<unsigned int, int>::IsIdxValid(
												int i);  // 191
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 192
										CUtlBlockMemory<unsigned int, int>::MinorIndex(
												int i);  // 193
										{
										}
										CUtlBlockMemory<unsigned int, int>::operator[](
												int i);  // 588
										CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::operator[](
												int i);  // 840
									}
									CUtlBlockMemory<unsigned int, int>::NumElementsInBlock(); // 227
									CUtlBlockMemory<unsigned int, int>::NumAllocated(); // 1247
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 243
									CUtlBlockMemory<unsigned int, int>::IsIdxValid(
											int i);  // 191
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 192
									CUtlBlockMemory<unsigned int, int>::MinorIndex(
											int i);  // 193
									{
									}
									CUtlBlockMemory<unsigned int, int>::operator[](
											int i);  // 602
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::Element(
										int i);  // 1252
									Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 247
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 806
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::ResetDbgInfo(); // 824
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::GrowMemory(
											int num);  // 1249
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::AddToTail(
											unsigned int& src);  // 848
									__uniq_ptr_impl<CInterlockedIntT<int, 4>, std::default_delete<CInterlockedIntT<int, 4> []> >::_M_ptr(); // 742
									unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::get(); // 735
									unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::operator[](
											size_t __i);  // 851
									ThreadInterlockedIncrement(volatile int32* p); // 576
									CInterlockedIntT<int, 4>::operator++(); // 582
									CInterlockedIntT<int, 4>::operator++(
											int);  // 851
								}
								CFastSweepControllerBase::BlockIndex(
										IntVector3D vBlockIndex);  // 831
								__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 735
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::operator[](
										size_t __i);  // 831
							}
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 224
							IntVector3D::operator-(
									const IntVector3D& rhs);  // 828
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 829
						}
					}
				}
			}
			{
				int i; // 865
				{
					IntVector3D vBlock; // 867
					{
						int n; // 868
						{
							IntVector3D vDependentBlock; // 870
							{
								int nGroupForBlock; // 878
								{
									const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 879
								}
								{
									bool bAddit; // 882
									{
										int nDep; // 883
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 243
										CUtlBlockMemory<unsigned int, int>::IsIdxValid(
												int i);  // 191
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 192
										CUtlBlockMemory<unsigned int, int>::MinorIndex(
												int i);  // 193
										{
										}
										CUtlBlockMemory<unsigned int, int>::operator[](
												int i);  // 588
										CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::operator[](
												int i);  // 885
									}
									CUtlBlockMemory<unsigned int, int>::NumElementsInBlock(); // 227
									CUtlBlockMemory<unsigned int, int>::NumAllocated(); // 1247
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 243
									CUtlBlockMemory<unsigned int, int>::IsIdxValid(
											int i);  // 191
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 192
									CUtlBlockMemory<unsigned int, int>::MinorIndex(
											int i);  // 193
									{
									}
									CUtlBlockMemory<unsigned int, int>::operator[](
											int i);  // 602
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::Element(
										int i);  // 1252
									Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 247
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 806
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::ResetDbgInfo(); // 824
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::GrowMemory(
											int num);  // 1249
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::AddToTail(
											unsigned int& src);  // 893
									__uniq_ptr_impl<CInterlockedIntT<int, 4>, std::default_delete<CInterlockedIntT<int, 4> []> >::_M_ptr(); // 742
									unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::get(); // 735
									unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::operator[](
											size_t __i);  // 896
									ThreadInterlockedIncrement(volatile int32* p); // 576
									CInterlockedIntT<int, 4>::operator++(); // 582
									CInterlockedIntT<int, 4>::operator++(
											int);  // 896
								}
								CFastSweepControllerBase::BlockIndex(
										IntVector3D vBlockIndex);  // 878
								__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 735
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::operator[](
										size_t __i);  // 878
							}
							IntVector3D::operator+=(
									const IntVector3D& rhs);  // 873
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 876
						}
					}
				}
			}
			__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
			unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
			unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
					size_t __i);  // 812
			CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::Count(); // 819
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 933
	}
	default_delete<CInterlockedIntT<int, 4> []>::operator(
						CInterlockedIntT<int, 4>* __ptr);  // 204
	__uniq_ptr_impl<CInterlockedIntT<int, 4>, std::default_delete<CInterlockedIntT<int, 4> []> >::reset(
		pointer __p);  // 790
	unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::reset<CInterlockedIntT<int>*>(
					CInterlockedIntT<int, 4>* __p);  // 808
	__uniq_ptr_impl<CInterlockedIntT<int, 4>, std::default_delete<CInterlockedIntT<int, 4> []> >::_M_ptr(); // 742
	unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::get(); // 809
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 809
	__uniq_ptr_impl<CInterlockedIntT<int, 4>, std::default_delete<CInterlockedIntT<int, 4> []> >::_M_ptr(); // 742
	unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::get(); // 735
	unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::operator[](
			size_t __i);  // 933
	CInterlockedIntT<int, 4>::operator==(
			int rhs);  // 933
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 224
	Store(AtomicInt32_t& i,
		int val);  // 934
	__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
			size_t __i);  // 935
	CInterlockedIntT<int, 4>::operator!=(
			int rhs);  // 496
	FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::QueueSweep(
			SweepGroup_t* pGroup);  // 935
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 808
} /* size: 0, variables: 1, inline expansions: 20 (0 bytes) */

// <01AFF784> ../public/tier0/fastsweep.h:802
// variables: 21
// function calls: 78
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::CalculateDependenciesForAlgorithm2()
{
	const char   __FUNCTION__; // 47275
	{
		int nGroup; // 810
		{
			SweepGroup_t* pGroup; // 812
			int nLastBlockAdded; // 822
			{
				int i; // 823
				{
					IntVector3D vBlock; // 825
					{
						int n; // 826
						{
							IntVector3D vDependentBlock; // 828
							{
								int nGroupForBlock; // 831
								{
									const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 832
								}
								{
									bool bAddit; // 837
									{
										int nDep; // 838
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 243
										CUtlBlockMemory<unsigned int, int>::IsIdxValid(
												int i);  // 191
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 192
										CUtlBlockMemory<unsigned int, int>::MinorIndex(
												int i);  // 193
										{
										}
										CUtlBlockMemory<unsigned int, int>::operator[](
												int i);  // 588
										CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::operator[](
												int i);  // 840
									}
									CUtlBlockMemory<unsigned int, int>::NumElementsInBlock(); // 227
									CUtlBlockMemory<unsigned int, int>::NumAllocated(); // 1247
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 243
									CUtlBlockMemory<unsigned int, int>::IsIdxValid(
											int i);  // 191
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 192
									CUtlBlockMemory<unsigned int, int>::MinorIndex(
											int i);  // 193
									{
									}
									CUtlBlockMemory<unsigned int, int>::operator[](
											int i);  // 602
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::Element(
										int i);  // 1252
									Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 247
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 806
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::ResetDbgInfo(); // 824
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::GrowMemory(
											int num);  // 1249
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::AddToTail(
											unsigned int& src);  // 848
									__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr(); // 742
									unique_ptr<int [], std::default_delete<int []> >::get(); // 735
									unique_ptr<int [], std::default_delete<int []> >::operator[](
											size_t __i);  // 851
								}
								CFastSweepControllerBase::BlockIndex(
										IntVector3D vBlockIndex);  // 831
								__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 735
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::operator[](
										size_t __i);  // 831
							}
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 224
							IntVector3D::operator-(
									const IntVector3D& rhs);  // 828
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 829
						}
					}
				}
			}
			{
				int i; // 865
				{
					IntVector3D vBlock; // 867
					{
						int n; // 868
						{
							IntVector3D vDependentBlock; // 870
							{
								int nGroupForBlock; // 878
								{
									const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 879
								}
								{
									bool bAddit; // 882
									{
										int nDep; // 883
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 243
										CUtlBlockMemory<unsigned int, int>::IsIdxValid(
												int i);  // 191
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 192
										CUtlBlockMemory<unsigned int, int>::MinorIndex(
												int i);  // 193
										{
										}
										CUtlBlockMemory<unsigned int, int>::operator[](
												int i);  // 588
										CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::operator[](
												int i);  // 885
									}
									CUtlBlockMemory<unsigned int, int>::NumElementsInBlock(); // 227
									CUtlBlockMemory<unsigned int, int>::NumAllocated(); // 1247
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 243
									CUtlBlockMemory<unsigned int, int>::IsIdxValid(
											int i);  // 191
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 192
									CUtlBlockMemory<unsigned int, int>::MinorIndex(
											int i);  // 193
									{
									}
									CUtlBlockMemory<unsigned int, int>::operator[](
											int i);  // 602
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::Element(
										int i);  // 1252
									Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 247
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 806
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::ResetDbgInfo(); // 824
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::GrowMemory(
											int num);  // 1249
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::AddToTail(
											unsigned int& src);  // 893
									__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr(); // 742
									unique_ptr<int [], std::default_delete<int []> >::get(); // 735
									unique_ptr<int [], std::default_delete<int []> >::operator[](
											size_t __i);  // 896
								}
								CFastSweepControllerBase::BlockIndex(
										IntVector3D vBlockIndex);  // 878
								__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 735
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::operator[](
										size_t __i);  // 878
							}
							IntVector3D::operator+=(
									const IntVector3D& rhs);  // 873
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 876
						}
					}
				}
			}
			__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
			unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
			unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
					size_t __i);  // 812
			CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::Count(); // 819
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 933
	}
	default_delete<int []>::operator(
			int* __ptr);  // 204
	__uniq_ptr_impl<int, std::default_delete<int []> >::reset(
		pointer __p);  // 790
	unique_ptr<int [], std::default_delete<int []> >::reset<int*>(
			int* __p);  // 808
	__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr(); // 742
	unique_ptr<int [], std::default_delete<int []> >::get(); // 809
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 809
	__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr(); // 742
	unique_ptr<int [], std::default_delete<int []> >::get(); // 735
	unique_ptr<int [], std::default_delete<int []> >::operator[](
			size_t __i);  // 933
	Store(AtomicInt32_t& i,
		int val);  // 934
	FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::QueueSweep(
			SweepGroup_t* pGroup);  // 935
	__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
			size_t __i);  // 935
} /* size: 0, variables: 1, inline expansions: 15 (0 bytes) */

// <01AFCEA7> ../public/tier0/fastsweep.h:802
// variables: 21
// function calls: 78
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::CalculateDependenciesForAlgorithm2()
{
	const char   __FUNCTION__; // 47275
	{
		int nGroup; // 810
		{
			SweepGroup_t* pGroup; // 812
			int nLastBlockAdded; // 822
			{
				int i; // 823
				{
					IntVector3D vBlock; // 825
					{
						int n; // 826
						{
							IntVector3D vDependentBlock; // 828
							{
								int nGroupForBlock; // 831
								{
									const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 832
								}
								{
									bool bAddit; // 837
									{
										int nDep; // 838
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 243
										CUtlBlockMemory<unsigned int, int>::IsIdxValid(
												int i);  // 191
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 192
										CUtlBlockMemory<unsigned int, int>::MinorIndex(
												int i);  // 193
										{
										}
										CUtlBlockMemory<unsigned int, int>::operator[](
												int i);  // 588
										CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::operator[](
												int i);  // 840
									}
									CUtlBlockMemory<unsigned int, int>::NumElementsInBlock(); // 227
									CUtlBlockMemory<unsigned int, int>::NumAllocated(); // 1247
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 243
									CUtlBlockMemory<unsigned int, int>::IsIdxValid(
											int i);  // 191
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 192
									CUtlBlockMemory<unsigned int, int>::MinorIndex(
											int i);  // 193
									{
									}
									CUtlBlockMemory<unsigned int, int>::operator[](
											int i);  // 602
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::Element(
										int i);  // 1252
									Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 247
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 806
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::ResetDbgInfo(); // 824
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::GrowMemory(
											int num);  // 1249
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::AddToTail(
											unsigned int& src);  // 848
									__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr(); // 742
									unique_ptr<int [], std::default_delete<int []> >::get(); // 735
									unique_ptr<int [], std::default_delete<int []> >::operator[](
											size_t __i);  // 851
								}
								CFastSweepControllerBase::BlockIndex(
										IntVector3D vBlockIndex);  // 831
								__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 735
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::operator[](
										size_t __i);  // 831
							}
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 224
							IntVector3D::operator-(
									const IntVector3D& rhs);  // 828
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 829
						}
					}
				}
			}
			{
				int i; // 865
				{
					IntVector3D vBlock; // 867
					{
						int n; // 868
						{
							IntVector3D vDependentBlock; // 870
							{
								int nGroupForBlock; // 878
								{
									const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 879
								}
								{
									bool bAddit; // 882
									{
										int nDep; // 883
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 243
										CUtlBlockMemory<unsigned int, int>::IsIdxValid(
												int i);  // 191
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 192
										CUtlBlockMemory<unsigned int, int>::MinorIndex(
												int i);  // 193
										{
										}
										CUtlBlockMemory<unsigned int, int>::operator[](
												int i);  // 588
										CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::operator[](
												int i);  // 885
									}
									CUtlBlockMemory<unsigned int, int>::NumElementsInBlock(); // 227
									CUtlBlockMemory<unsigned int, int>::NumAllocated(); // 1247
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 243
									CUtlBlockMemory<unsigned int, int>::IsIdxValid(
											int i);  // 191
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 192
									CUtlBlockMemory<unsigned int, int>::MinorIndex(
											int i);  // 193
									{
									}
									CUtlBlockMemory<unsigned int, int>::operator[](
											int i);  // 602
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::Element(
										int i);  // 1252
									Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 247
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 806
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::ResetDbgInfo(); // 824
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::GrowMemory(
											int num);  // 1249
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::AddToTail(
											unsigned int& src);  // 893
									__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr(); // 742
									unique_ptr<int [], std::default_delete<int []> >::get(); // 735
									unique_ptr<int [], std::default_delete<int []> >::operator[](
											size_t __i);  // 896
								}
								CFastSweepControllerBase::BlockIndex(
										IntVector3D vBlockIndex);  // 878
								__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 735
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::operator[](
										size_t __i);  // 878
							}
							IntVector3D::operator+=(
									const IntVector3D& rhs);  // 873
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 876
						}
					}
				}
			}
			__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
			unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
			unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
					size_t __i);  // 812
			CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::Count(); // 819
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 933
	}
	default_delete<int []>::operator(
			int* __ptr);  // 204
	__uniq_ptr_impl<int, std::default_delete<int []> >::reset(
		pointer __p);  // 790
	unique_ptr<int [], std::default_delete<int []> >::reset<int*>(
			int* __p);  // 808
	__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr(); // 742
	unique_ptr<int [], std::default_delete<int []> >::get(); // 809
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 809
	__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr(); // 742
	unique_ptr<int [], std::default_delete<int []> >::get(); // 735
	unique_ptr<int [], std::default_delete<int []> >::operator[](
			size_t __i);  // 933
	Store(AtomicInt32_t& i,
		int val);  // 934
	FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::QueueSweep(
			SweepGroup_t* pGroup);  // 935
	__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
			size_t __i);  // 935
} /* size: 0, variables: 1, inline expansions: 15 (0 bytes) */

// <01AFA544> ../public/tier0/fastsweep.h:802
// variables: 21
// function calls: 89
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::CalculateDependenciesForAlgorithm2()
{
	const char   __FUNCTION__; // 47275
	{
		int nGroup; // 810
		{
			SweepGroup_t* pGroup; // 812
			int nLastBlockAdded; // 822
			{
				int i; // 823
				{
					IntVector3D vBlock; // 825
					{
						int n; // 826
						{
							IntVector3D vDependentBlock; // 828
							{
								int nGroupForBlock; // 831
								{
									const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 832
								}
								{
									bool bAddit; // 837
									{
										int nDep; // 838
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 243
										CUtlBlockMemory<unsigned int, int>::IsIdxValid(
												int i);  // 191
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 192
										CUtlBlockMemory<unsigned int, int>::MinorIndex(
												int i);  // 193
										{
										}
										CUtlBlockMemory<unsigned int, int>::operator[](
												int i);  // 588
										CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::operator[](
												int i);  // 840
									}
									CUtlBlockMemory<unsigned int, int>::NumElementsInBlock(); // 227
									CUtlBlockMemory<unsigned int, int>::NumAllocated(); // 1247
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 243
									CUtlBlockMemory<unsigned int, int>::IsIdxValid(
											int i);  // 191
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 192
									CUtlBlockMemory<unsigned int, int>::MinorIndex(
											int i);  // 193
									{
									}
									CUtlBlockMemory<unsigned int, int>::operator[](
											int i);  // 602
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::Element(
										int i);  // 1252
									Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 247
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 806
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::ResetDbgInfo(); // 824
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::GrowMemory(
											int num);  // 1249
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::AddToTail(
											unsigned int& src);  // 848
									__uniq_ptr_impl<CInterlockedIntT<int, 4>, std::default_delete<CInterlockedIntT<int, 4> []> >::_M_ptr(); // 742
									unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::get(); // 735
									unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::operator[](
											size_t __i);  // 851
									ThreadInterlockedIncrement(volatile int32* p); // 576
									CInterlockedIntT<int, 4>::operator++(); // 582
									CInterlockedIntT<int, 4>::operator++(
											int);  // 851
								}
								CFastSweepControllerBase::BlockIndex(
										IntVector3D vBlockIndex);  // 831
								__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 735
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::operator[](
										size_t __i);  // 831
							}
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 224
							IntVector3D::operator-(
									const IntVector3D& rhs);  // 828
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 829
						}
					}
				}
			}
			{
				int i; // 865
				{
					IntVector3D vBlock; // 867
					{
						int n; // 868
						{
							IntVector3D vDependentBlock; // 870
							{
								int nGroupForBlock; // 878
								{
									const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 879
								}
								{
									bool bAddit; // 882
									{
										int nDep; // 883
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 243
										CUtlBlockMemory<unsigned int, int>::IsIdxValid(
												int i);  // 191
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 192
										CUtlBlockMemory<unsigned int, int>::MinorIndex(
												int i);  // 193
										{
										}
										CUtlBlockMemory<unsigned int, int>::operator[](
												int i);  // 588
										CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::operator[](
												int i);  // 885
									}
									CUtlBlockMemory<unsigned int, int>::NumElementsInBlock(); // 227
									CUtlBlockMemory<unsigned int, int>::NumAllocated(); // 1247
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 243
									CUtlBlockMemory<unsigned int, int>::IsIdxValid(
											int i);  // 191
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 192
									CUtlBlockMemory<unsigned int, int>::MinorIndex(
											int i);  // 193
									{
									}
									CUtlBlockMemory<unsigned int, int>::operator[](
											int i);  // 602
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::Element(
										int i);  // 1252
									Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 247
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 806
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::ResetDbgInfo(); // 824
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::GrowMemory(
											int num);  // 1249
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::AddToTail(
											unsigned int& src);  // 893
									__uniq_ptr_impl<CInterlockedIntT<int, 4>, std::default_delete<CInterlockedIntT<int, 4> []> >::_M_ptr(); // 742
									unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::get(); // 735
									unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::operator[](
											size_t __i);  // 896
									ThreadInterlockedIncrement(volatile int32* p); // 576
									CInterlockedIntT<int, 4>::operator++(); // 582
									CInterlockedIntT<int, 4>::operator++(
											int);  // 896
								}
								CFastSweepControllerBase::BlockIndex(
										IntVector3D vBlockIndex);  // 878
								__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 735
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::operator[](
										size_t __i);  // 878
							}
							IntVector3D::operator+=(
									const IntVector3D& rhs);  // 873
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 876
						}
					}
				}
			}
			__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
			unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
			unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
					size_t __i);  // 812
			CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::Count(); // 819
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 933
	}
	default_delete<CInterlockedIntT<int, 4> []>::operator(
						CInterlockedIntT<int, 4>* __ptr);  // 204
	__uniq_ptr_impl<CInterlockedIntT<int, 4>, std::default_delete<CInterlockedIntT<int, 4> []> >::reset(
		pointer __p);  // 790
	unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::reset<CInterlockedIntT<int>*>(
					CInterlockedIntT<int, 4>* __p);  // 808
	__uniq_ptr_impl<CInterlockedIntT<int, 4>, std::default_delete<CInterlockedIntT<int, 4> []> >::_M_ptr(); // 742
	unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::get(); // 809
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 809
	__uniq_ptr_impl<CInterlockedIntT<int, 4>, std::default_delete<CInterlockedIntT<int, 4> []> >::_M_ptr(); // 742
	unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::get(); // 735
	unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::operator[](
			size_t __i);  // 933
	CInterlockedIntT<int, 4>::operator==(
			int rhs);  // 933
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 224
	Store(AtomicInt32_t& i,
		int val);  // 934
	__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
			size_t __i);  // 935
	CInterlockedIntT<int, 4>::operator!=(
			int rhs);  // 496
	FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::QueueSweep(
			SweepGroup_t* pGroup);  // 935
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 808
} /* size: 0, variables: 1, inline expansions: 20 (0 bytes) */

// <01AF72E7> ../public/tier0/fastsweep.h:802
// variables: 21
// function calls: 78
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::CalculateDependenciesForAlgorithm2()
{
	const char   __FUNCTION__; // 47275
	{
		int nGroup; // 810
		{
			SweepGroup_t* pGroup; // 812
			int nLastBlockAdded; // 822
			{
				int i; // 823
				{
					IntVector3D vBlock; // 825
					{
						int n; // 826
						{
							IntVector3D vDependentBlock; // 828
							{
								int nGroupForBlock; // 831
								{
									const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 832
								}
								{
									bool bAddit; // 837
									{
										int nDep; // 838
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 243
										CUtlBlockMemory<unsigned int, int>::IsIdxValid(
												int i);  // 191
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 192
										CUtlBlockMemory<unsigned int, int>::MinorIndex(
												int i);  // 193
										{
										}
										CUtlBlockMemory<unsigned int, int>::operator[](
												int i);  // 588
										CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::operator[](
												int i);  // 840
									}
									CUtlBlockMemory<unsigned int, int>::NumElementsInBlock(); // 227
									CUtlBlockMemory<unsigned int, int>::NumAllocated(); // 1247
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 243
									CUtlBlockMemory<unsigned int, int>::IsIdxValid(
											int i);  // 191
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 192
									CUtlBlockMemory<unsigned int, int>::MinorIndex(
											int i);  // 193
									{
									}
									CUtlBlockMemory<unsigned int, int>::operator[](
											int i);  // 602
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::Element(
										int i);  // 1252
									Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 247
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 806
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::ResetDbgInfo(); // 824
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::GrowMemory(
											int num);  // 1249
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::AddToTail(
											unsigned int& src);  // 848
									__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr(); // 742
									unique_ptr<int [], std::default_delete<int []> >::get(); // 735
									unique_ptr<int [], std::default_delete<int []> >::operator[](
											size_t __i);  // 851
								}
								CFastSweepControllerBase::BlockIndex(
										IntVector3D vBlockIndex);  // 831
								__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 735
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::operator[](
										size_t __i);  // 831
							}
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 224
							IntVector3D::operator-(
									const IntVector3D& rhs);  // 828
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 829
						}
					}
				}
			}
			{
				int i; // 865
				{
					IntVector3D vBlock; // 867
					{
						int n; // 868
						{
							IntVector3D vDependentBlock; // 870
							{
								int nGroupForBlock; // 878
								{
									const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 879
								}
								{
									bool bAddit; // 882
									{
										int nDep; // 883
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 243
										CUtlBlockMemory<unsigned int, int>::IsIdxValid(
												int i);  // 191
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 192
										CUtlBlockMemory<unsigned int, int>::MinorIndex(
												int i);  // 193
										{
										}
										CUtlBlockMemory<unsigned int, int>::operator[](
												int i);  // 588
										CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::operator[](
												int i);  // 885
									}
									CUtlBlockMemory<unsigned int, int>::NumElementsInBlock(); // 227
									CUtlBlockMemory<unsigned int, int>::NumAllocated(); // 1247
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 243
									CUtlBlockMemory<unsigned int, int>::IsIdxValid(
											int i);  // 191
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 192
									CUtlBlockMemory<unsigned int, int>::MinorIndex(
											int i);  // 193
									{
									}
									CUtlBlockMemory<unsigned int, int>::operator[](
											int i);  // 602
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::Element(
										int i);  // 1252
									Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 247
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 806
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::ResetDbgInfo(); // 824
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::GrowMemory(
											int num);  // 1249
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::AddToTail(
											unsigned int& src);  // 893
									__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr(); // 742
									unique_ptr<int [], std::default_delete<int []> >::get(); // 735
									unique_ptr<int [], std::default_delete<int []> >::operator[](
											size_t __i);  // 896
								}
								CFastSweepControllerBase::BlockIndex(
										IntVector3D vBlockIndex);  // 878
								__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 735
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::operator[](
										size_t __i);  // 878
							}
							IntVector3D::operator+=(
									const IntVector3D& rhs);  // 873
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 876
						}
					}
				}
			}
			__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
			unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
			unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
					size_t __i);  // 812
			CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::Count(); // 819
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 933
	}
	default_delete<int []>::operator(
			int* __ptr);  // 204
	__uniq_ptr_impl<int, std::default_delete<int []> >::reset(
		pointer __p);  // 790
	unique_ptr<int [], std::default_delete<int []> >::reset<int*>(
			int* __p);  // 808
	__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr(); // 742
	unique_ptr<int [], std::default_delete<int []> >::get(); // 809
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 809
	__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr(); // 742
	unique_ptr<int [], std::default_delete<int []> >::get(); // 735
	unique_ptr<int [], std::default_delete<int []> >::operator[](
			size_t __i);  // 933
	Store(AtomicInt32_t& i,
		int val);  // 934
	FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::QueueSweep(
			SweepGroup_t* pGroup);  // 935
	__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
			size_t __i);  // 935
} /* size: 0, variables: 1, inline expansions: 15 (0 bytes) */

// <00988100> ../public/tier0/fastsweep.h:802
// variables: 21
// function calls: 89
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::CalculateDependenciesForAlgorithm2()
{
	const char   __FUNCTION__; // 39995
	{
		int nGroup; // 810
		{
			SweepGroup_t* pGroup; // 812
			int nLastBlockAdded; // 822
			{
				int i; // 823
				{
					IntVector3D vBlock; // 825
					{
						int n; // 826
						{
							IntVector3D vDependentBlock; // 828
							{
								int nGroupForBlock; // 831
								{
									const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 832
								}
								{
									bool bAddit; // 837
									{
										int nDep; // 838
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 243
										CUtlBlockMemory<unsigned int, int>::IsIdxValid(
												int i);  // 191
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 192
										CUtlBlockMemory<unsigned int, int>::MinorIndex(
												int i);  // 193
										{
										}
										CUtlBlockMemory<unsigned int, int>::operator[](
												int i);  // 588
										CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::operator[](
												int i);  // 840
									}
									CUtlBlockMemory<unsigned int, int>::NumElementsInBlock(); // 227
									CUtlBlockMemory<unsigned int, int>::NumAllocated(); // 1247
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 243
									CUtlBlockMemory<unsigned int, int>::IsIdxValid(
											int i);  // 191
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 192
									CUtlBlockMemory<unsigned int, int>::MinorIndex(
											int i);  // 193
									{
									}
									CUtlBlockMemory<unsigned int, int>::operator[](
											int i);  // 602
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::Element(
										int i);  // 1252
									Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 247
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 806
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::ResetDbgInfo(); // 824
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::GrowMemory(
											int num);  // 1249
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::AddToTail(
											unsigned int& src);  // 848
									__uniq_ptr_impl<CInterlockedIntT<int, 4>, std::default_delete<CInterlockedIntT<int, 4> []> >::_M_ptr(); // 742
									unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::get(); // 735
									unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::operator[](
											size_t __i);  // 851
									ThreadInterlockedIncrement(volatile int32* p); // 576
									CInterlockedIntT<int, 4>::operator++(); // 582
									CInterlockedIntT<int, 4>::operator++(
											int);  // 851
								}
								CFastSweepControllerBase::BlockIndex(
										IntVector3D vBlockIndex);  // 831
								__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 735
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::operator[](
										size_t __i);  // 831
							}
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 224
							IntVector3D::operator-(
									const IntVector3D& rhs);  // 828
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 829
						}
					}
				}
			}
			{
				int i; // 865
				{
					IntVector3D vBlock; // 867
					{
						int n; // 868
						{
							IntVector3D vDependentBlock; // 870
							{
								int nGroupForBlock; // 878
								{
									const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 879
								}
								{
									bool bAddit; // 882
									{
										int nDep; // 883
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 243
										CUtlBlockMemory<unsigned int, int>::IsIdxValid(
												int i);  // 191
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 192
										CUtlBlockMemory<unsigned int, int>::MinorIndex(
												int i);  // 193
										{
										}
										CUtlBlockMemory<unsigned int, int>::operator[](
												int i);  // 588
										CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::operator[](
												int i);  // 885
									}
									CUtlBlockMemory<unsigned int, int>::NumElementsInBlock(); // 227
									CUtlBlockMemory<unsigned int, int>::NumAllocated(); // 1247
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 243
									CUtlBlockMemory<unsigned int, int>::IsIdxValid(
											int i);  // 191
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 192
									CUtlBlockMemory<unsigned int, int>::MinorIndex(
											int i);  // 193
									{
									}
									CUtlBlockMemory<unsigned int, int>::operator[](
											int i);  // 602
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::Element(
										int i);  // 1252
									Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 247
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 806
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::ResetDbgInfo(); // 824
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::GrowMemory(
											int num);  // 1249
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::AddToTail(
											unsigned int& src);  // 893
									__uniq_ptr_impl<CInterlockedIntT<int, 4>, std::default_delete<CInterlockedIntT<int, 4> []> >::_M_ptr(); // 742
									unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::get(); // 735
									unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::operator[](
											size_t __i);  // 896
									ThreadInterlockedIncrement(volatile int32* p); // 576
									CInterlockedIntT<int, 4>::operator++(); // 582
									CInterlockedIntT<int, 4>::operator++(
											int);  // 896
								}
								CFastSweepControllerBase::BlockIndex(
										IntVector3D vBlockIndex);  // 878
								__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 735
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::operator[](
										size_t __i);  // 878
							}
							IntVector3D::operator+=(
									const IntVector3D& rhs);  // 873
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 876
						}
					}
				}
			}
			__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
			unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
			unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
					size_t __i);  // 812
			CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::Count(); // 819
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 933
	}
	default_delete<CInterlockedIntT<int, 4> []>::operator(
						CInterlockedIntT<int, 4>* __ptr);  // 204
	__uniq_ptr_impl<CInterlockedIntT<int, 4>, std::default_delete<CInterlockedIntT<int, 4> []> >::reset(
		pointer __p);  // 790
	unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::reset<CInterlockedIntT<int>*>(
					CInterlockedIntT<int, 4>* __p);  // 808
	__uniq_ptr_impl<CInterlockedIntT<int, 4>, std::default_delete<CInterlockedIntT<int, 4> []> >::_M_ptr(); // 742
	unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::get(); // 809
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 809
	__uniq_ptr_impl<CInterlockedIntT<int, 4>, std::default_delete<CInterlockedIntT<int, 4> []> >::_M_ptr(); // 742
	unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::get(); // 735
	unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::operator[](
			size_t __i);  // 933
	CInterlockedIntT<int, 4>::operator==(
			int rhs);  // 933
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 224
	Store(AtomicInt32_t& i,
		int val);  // 934
	__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
			size_t __i);  // 935
	CInterlockedIntT<int, 4>::operator!=(
			int rhs);  // 496
	FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::QueueSweep(
			SweepGroup_t* pGroup);  // 935
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 808
} /* size: 0, variables: 1, inline expansions: 20 (0 bytes) */

// <00984FE7> ../public/tier0/fastsweep.h:802
// variables: 21
// function calls: 78
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::CalculateDependenciesForAlgorithm2()
{
	const char   __FUNCTION__; // 39995
	{
		int nGroup; // 810
		{
			SweepGroup_t* pGroup; // 812
			int nLastBlockAdded; // 822
			{
				int i; // 823
				{
					IntVector3D vBlock; // 825
					{
						int n; // 826
						{
							IntVector3D vDependentBlock; // 828
							{
								int nGroupForBlock; // 831
								{
									const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 832
								}
								{
									bool bAddit; // 837
									{
										int nDep; // 838
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 243
										CUtlBlockMemory<unsigned int, int>::IsIdxValid(
												int i);  // 191
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 192
										CUtlBlockMemory<unsigned int, int>::MinorIndex(
												int i);  // 193
										{
										}
										CUtlBlockMemory<unsigned int, int>::operator[](
												int i);  // 588
										CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::operator[](
												int i);  // 840
									}
									CUtlBlockMemory<unsigned int, int>::NumElementsInBlock(); // 227
									CUtlBlockMemory<unsigned int, int>::NumAllocated(); // 1247
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 243
									CUtlBlockMemory<unsigned int, int>::IsIdxValid(
											int i);  // 191
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 192
									CUtlBlockMemory<unsigned int, int>::MinorIndex(
											int i);  // 193
									{
									}
									CUtlBlockMemory<unsigned int, int>::operator[](
											int i);  // 602
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::Element(
										int i);  // 1252
									Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 247
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 806
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::ResetDbgInfo(); // 824
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::GrowMemory(
											int num);  // 1249
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::AddToTail(
											unsigned int& src);  // 848
									__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr(); // 742
									unique_ptr<int [], std::default_delete<int []> >::get(); // 735
									unique_ptr<int [], std::default_delete<int []> >::operator[](
											size_t __i);  // 851
								}
								CFastSweepControllerBase::BlockIndex(
										IntVector3D vBlockIndex);  // 831
								__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 735
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::operator[](
										size_t __i);  // 831
							}
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 224
							IntVector3D::operator-(
									const IntVector3D& rhs);  // 828
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 829
						}
					}
				}
			}
			{
				int i; // 865
				{
					IntVector3D vBlock; // 867
					{
						int n; // 868
						{
							IntVector3D vDependentBlock; // 870
							{
								int nGroupForBlock; // 878
								{
									const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 879
								}
								{
									bool bAddit; // 882
									{
										int nDep; // 883
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 243
										CUtlBlockMemory<unsigned int, int>::IsIdxValid(
												int i);  // 191
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 192
										CUtlBlockMemory<unsigned int, int>::MinorIndex(
												int i);  // 193
										{
										}
										CUtlBlockMemory<unsigned int, int>::operator[](
												int i);  // 588
										CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::operator[](
												int i);  // 885
									}
									CUtlBlockMemory<unsigned int, int>::NumElementsInBlock(); // 227
									CUtlBlockMemory<unsigned int, int>::NumAllocated(); // 1247
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 243
									CUtlBlockMemory<unsigned int, int>::IsIdxValid(
											int i);  // 191
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 192
									CUtlBlockMemory<unsigned int, int>::MinorIndex(
											int i);  // 193
									{
									}
									CUtlBlockMemory<unsigned int, int>::operator[](
											int i);  // 602
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::Element(
										int i);  // 1252
									Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 247
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 806
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::ResetDbgInfo(); // 824
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::GrowMemory(
											int num);  // 1249
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::AddToTail(
											unsigned int& src);  // 893
									__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr(); // 742
									unique_ptr<int [], std::default_delete<int []> >::get(); // 735
									unique_ptr<int [], std::default_delete<int []> >::operator[](
											size_t __i);  // 896
								}
								CFastSweepControllerBase::BlockIndex(
										IntVector3D vBlockIndex);  // 878
								__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 735
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::operator[](
										size_t __i);  // 878
							}
							IntVector3D::operator+=(
									const IntVector3D& rhs);  // 873
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 876
						}
					}
				}
			}
			__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
			unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
			unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
					size_t __i);  // 812
			CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::Count(); // 819
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 933
	}
	default_delete<int []>::operator(
			int* __ptr);  // 204
	__uniq_ptr_impl<int, std::default_delete<int []> >::reset(
		pointer __p);  // 790
	unique_ptr<int [], std::default_delete<int []> >::reset<int*>(
			int* __p);  // 808
	__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr(); // 742
	unique_ptr<int [], std::default_delete<int []> >::get(); // 809
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 809
	__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr(); // 742
	unique_ptr<int [], std::default_delete<int []> >::get(); // 735
	unique_ptr<int [], std::default_delete<int []> >::operator[](
			size_t __i);  // 933
	Store(AtomicInt32_t& i,
		int val);  // 934
	FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::QueueSweep(
			SweepGroup_t* pGroup);  // 935
	__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
			size_t __i);  // 935
} /* size: 0, variables: 1, inline expansions: 15 (0 bytes) */

// <0098270A> ../public/tier0/fastsweep.h:802
// variables: 21
// function calls: 78
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::CalculateDependenciesForAlgorithm2()
{
	const char   __FUNCTION__; // 39995
	{
		int nGroup; // 810
		{
			SweepGroup_t* pGroup; // 812
			int nLastBlockAdded; // 822
			{
				int i; // 823
				{
					IntVector3D vBlock; // 825
					{
						int n; // 826
						{
							IntVector3D vDependentBlock; // 828
							{
								int nGroupForBlock; // 831
								{
									const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 832
								}
								{
									bool bAddit; // 837
									{
										int nDep; // 838
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 243
										CUtlBlockMemory<unsigned int, int>::IsIdxValid(
												int i);  // 191
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 192
										CUtlBlockMemory<unsigned int, int>::MinorIndex(
												int i);  // 193
										{
										}
										CUtlBlockMemory<unsigned int, int>::operator[](
												int i);  // 588
										CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::operator[](
												int i);  // 840
									}
									CUtlBlockMemory<unsigned int, int>::NumElementsInBlock(); // 227
									CUtlBlockMemory<unsigned int, int>::NumAllocated(); // 1247
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 243
									CUtlBlockMemory<unsigned int, int>::IsIdxValid(
											int i);  // 191
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 192
									CUtlBlockMemory<unsigned int, int>::MinorIndex(
											int i);  // 193
									{
									}
									CUtlBlockMemory<unsigned int, int>::operator[](
											int i);  // 602
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::Element(
										int i);  // 1252
									Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 247
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 806
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::ResetDbgInfo(); // 824
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::GrowMemory(
											int num);  // 1249
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::AddToTail(
											unsigned int& src);  // 848
									__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr(); // 742
									unique_ptr<int [], std::default_delete<int []> >::get(); // 735
									unique_ptr<int [], std::default_delete<int []> >::operator[](
											size_t __i);  // 851
								}
								CFastSweepControllerBase::BlockIndex(
										IntVector3D vBlockIndex);  // 831
								__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 735
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::operator[](
										size_t __i);  // 831
							}
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 224
							IntVector3D::operator-(
									const IntVector3D& rhs);  // 828
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 829
						}
					}
				}
			}
			{
				int i; // 865
				{
					IntVector3D vBlock; // 867
					{
						int n; // 868
						{
							IntVector3D vDependentBlock; // 870
							{
								int nGroupForBlock; // 878
								{
									const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 879
								}
								{
									bool bAddit; // 882
									{
										int nDep; // 883
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 243
										CUtlBlockMemory<unsigned int, int>::IsIdxValid(
												int i);  // 191
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 192
										CUtlBlockMemory<unsigned int, int>::MinorIndex(
												int i);  // 193
										{
										}
										CUtlBlockMemory<unsigned int, int>::operator[](
												int i);  // 588
										CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::operator[](
												int i);  // 885
									}
									CUtlBlockMemory<unsigned int, int>::NumElementsInBlock(); // 227
									CUtlBlockMemory<unsigned int, int>::NumAllocated(); // 1247
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 243
									CUtlBlockMemory<unsigned int, int>::IsIdxValid(
											int i);  // 191
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 192
									CUtlBlockMemory<unsigned int, int>::MinorIndex(
											int i);  // 193
									{
									}
									CUtlBlockMemory<unsigned int, int>::operator[](
											int i);  // 602
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::Element(
										int i);  // 1252
									Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 247
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 806
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::ResetDbgInfo(); // 824
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::GrowMemory(
											int num);  // 1249
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::AddToTail(
											unsigned int& src);  // 893
									__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr(); // 742
									unique_ptr<int [], std::default_delete<int []> >::get(); // 735
									unique_ptr<int [], std::default_delete<int []> >::operator[](
											size_t __i);  // 896
								}
								CFastSweepControllerBase::BlockIndex(
										IntVector3D vBlockIndex);  // 878
								__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 735
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::operator[](
										size_t __i);  // 878
							}
							IntVector3D::operator+=(
									const IntVector3D& rhs);  // 873
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 876
						}
					}
				}
			}
			__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
			unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
			unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
					size_t __i);  // 812
			CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::Count(); // 819
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 933
	}
	default_delete<int []>::operator(
			int* __ptr);  // 204
	__uniq_ptr_impl<int, std::default_delete<int []> >::reset(
		pointer __p);  // 790
	unique_ptr<int [], std::default_delete<int []> >::reset<int*>(
			int* __p);  // 808
	__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr(); // 742
	unique_ptr<int [], std::default_delete<int []> >::get(); // 809
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 809
	__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr(); // 742
	unique_ptr<int [], std::default_delete<int []> >::get(); // 735
	unique_ptr<int [], std::default_delete<int []> >::operator[](
			size_t __i);  // 933
	Store(AtomicInt32_t& i,
		int val);  // 934
	FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::QueueSweep(
			SweepGroup_t* pGroup);  // 935
	__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
			size_t __i);  // 935
} /* size: 0, variables: 1, inline expansions: 15 (0 bytes) */

// <0097FDA7> ../public/tier0/fastsweep.h:802
// variables: 21
// function calls: 89
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::CalculateDependenciesForAlgorithm2()
{
	const char   __FUNCTION__; // 39995
	{
		int nGroup; // 810
		{
			SweepGroup_t* pGroup; // 812
			int nLastBlockAdded; // 822
			{
				int i; // 823
				{
					IntVector3D vBlock; // 825
					{
						int n; // 826
						{
							IntVector3D vDependentBlock; // 828
							{
								int nGroupForBlock; // 831
								{
									const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 832
								}
								{
									bool bAddit; // 837
									{
										int nDep; // 838
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 243
										CUtlBlockMemory<unsigned int, int>::IsIdxValid(
												int i);  // 191
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 192
										CUtlBlockMemory<unsigned int, int>::MinorIndex(
												int i);  // 193
										{
										}
										CUtlBlockMemory<unsigned int, int>::operator[](
												int i);  // 588
										CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::operator[](
												int i);  // 840
									}
									CUtlBlockMemory<unsigned int, int>::NumElementsInBlock(); // 227
									CUtlBlockMemory<unsigned int, int>::NumAllocated(); // 1247
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 243
									CUtlBlockMemory<unsigned int, int>::IsIdxValid(
											int i);  // 191
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 192
									CUtlBlockMemory<unsigned int, int>::MinorIndex(
											int i);  // 193
									{
									}
									CUtlBlockMemory<unsigned int, int>::operator[](
											int i);  // 602
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::Element(
										int i);  // 1252
									Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 247
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 806
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::ResetDbgInfo(); // 824
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::GrowMemory(
											int num);  // 1249
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::AddToTail(
											unsigned int& src);  // 848
									__uniq_ptr_impl<CInterlockedIntT<int, 4>, std::default_delete<CInterlockedIntT<int, 4> []> >::_M_ptr(); // 742
									unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::get(); // 735
									unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::operator[](
											size_t __i);  // 851
									ThreadInterlockedIncrement(volatile int32* p); // 576
									CInterlockedIntT<int, 4>::operator++(); // 582
									CInterlockedIntT<int, 4>::operator++(
											int);  // 851
								}
								CFastSweepControllerBase::BlockIndex(
										IntVector3D vBlockIndex);  // 831
								__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 735
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::operator[](
										size_t __i);  // 831
							}
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 224
							IntVector3D::operator-(
									const IntVector3D& rhs);  // 828
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 829
						}
					}
				}
			}
			{
				int i; // 865
				{
					IntVector3D vBlock; // 867
					{
						int n; // 868
						{
							IntVector3D vDependentBlock; // 870
							{
								int nGroupForBlock; // 878
								{
									const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 879
								}
								{
									bool bAddit; // 882
									{
										int nDep; // 883
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 243
										CUtlBlockMemory<unsigned int, int>::IsIdxValid(
												int i);  // 191
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 192
										CUtlBlockMemory<unsigned int, int>::MinorIndex(
												int i);  // 193
										{
										}
										CUtlBlockMemory<unsigned int, int>::operator[](
												int i);  // 588
										CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::operator[](
												int i);  // 885
									}
									CUtlBlockMemory<unsigned int, int>::NumElementsInBlock(); // 227
									CUtlBlockMemory<unsigned int, int>::NumAllocated(); // 1247
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 243
									CUtlBlockMemory<unsigned int, int>::IsIdxValid(
											int i);  // 191
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 192
									CUtlBlockMemory<unsigned int, int>::MinorIndex(
											int i);  // 193
									{
									}
									CUtlBlockMemory<unsigned int, int>::operator[](
											int i);  // 602
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::Element(
										int i);  // 1252
									Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 247
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 806
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::ResetDbgInfo(); // 824
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::GrowMemory(
											int num);  // 1249
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::AddToTail(
											unsigned int& src);  // 893
									__uniq_ptr_impl<CInterlockedIntT<int, 4>, std::default_delete<CInterlockedIntT<int, 4> []> >::_M_ptr(); // 742
									unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::get(); // 735
									unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::operator[](
											size_t __i);  // 896
									ThreadInterlockedIncrement(volatile int32* p); // 576
									CInterlockedIntT<int, 4>::operator++(); // 582
									CInterlockedIntT<int, 4>::operator++(
											int);  // 896
								}
								CFastSweepControllerBase::BlockIndex(
										IntVector3D vBlockIndex);  // 878
								__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 735
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::operator[](
										size_t __i);  // 878
							}
							IntVector3D::operator+=(
									const IntVector3D& rhs);  // 873
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 876
						}
					}
				}
			}
			__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
			unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
			unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
					size_t __i);  // 812
			CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::Count(); // 819
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 933
	}
	default_delete<CInterlockedIntT<int, 4> []>::operator(
						CInterlockedIntT<int, 4>* __ptr);  // 204
	__uniq_ptr_impl<CInterlockedIntT<int, 4>, std::default_delete<CInterlockedIntT<int, 4> []> >::reset(
		pointer __p);  // 790
	unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::reset<CInterlockedIntT<int>*>(
					CInterlockedIntT<int, 4>* __p);  // 808
	__uniq_ptr_impl<CInterlockedIntT<int, 4>, std::default_delete<CInterlockedIntT<int, 4> []> >::_M_ptr(); // 742
	unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::get(); // 809
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 809
	__uniq_ptr_impl<CInterlockedIntT<int, 4>, std::default_delete<CInterlockedIntT<int, 4> []> >::_M_ptr(); // 742
	unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::get(); // 735
	unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::operator[](
			size_t __i);  // 933
	CInterlockedIntT<int, 4>::operator==(
			int rhs);  // 933
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 224
	Store(AtomicInt32_t& i,
		int val);  // 934
	__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
			size_t __i);  // 935
	CInterlockedIntT<int, 4>::operator!=(
			int rhs);  // 496
	FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::QueueSweep(
			SweepGroup_t* pGroup);  // 935
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 808
} /* size: 0, variables: 1, inline expansions: 20 (0 bytes) */

// <0097CB4A> ../public/tier0/fastsweep.h:802
// variables: 21
// function calls: 78
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::CalculateDependenciesForAlgorithm2()
{
	const char   __FUNCTION__; // 39995
	{
		int nGroup; // 810
		{
			SweepGroup_t* pGroup; // 812
			int nLastBlockAdded; // 822
			{
				int i; // 823
				{
					IntVector3D vBlock; // 825
					{
						int n; // 826
						{
							IntVector3D vDependentBlock; // 828
							{
								int nGroupForBlock; // 831
								{
									const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 832
								}
								{
									bool bAddit; // 837
									{
										int nDep; // 838
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 243
										CUtlBlockMemory<unsigned int, int>::IsIdxValid(
												int i);  // 191
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 192
										CUtlBlockMemory<unsigned int, int>::MinorIndex(
												int i);  // 193
										{
										}
										CUtlBlockMemory<unsigned int, int>::operator[](
												int i);  // 588
										CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::operator[](
												int i);  // 840
									}
									CUtlBlockMemory<unsigned int, int>::NumElementsInBlock(); // 227
									CUtlBlockMemory<unsigned int, int>::NumAllocated(); // 1247
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 243
									CUtlBlockMemory<unsigned int, int>::IsIdxValid(
											int i);  // 191
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 192
									CUtlBlockMemory<unsigned int, int>::MinorIndex(
											int i);  // 193
									{
									}
									CUtlBlockMemory<unsigned int, int>::operator[](
											int i);  // 602
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::Element(
										int i);  // 1252
									Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 247
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 806
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::ResetDbgInfo(); // 824
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::GrowMemory(
											int num);  // 1249
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::AddToTail(
											unsigned int& src);  // 848
									__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr(); // 742
									unique_ptr<int [], std::default_delete<int []> >::get(); // 735
									unique_ptr<int [], std::default_delete<int []> >::operator[](
											size_t __i);  // 851
								}
								CFastSweepControllerBase::BlockIndex(
										IntVector3D vBlockIndex);  // 831
								__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 735
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::operator[](
										size_t __i);  // 831
							}
							IntVector3D::IntVector3D(
									int nX,
									int nY,
									int nZ);  // 224
							IntVector3D::operator-(
									const IntVector3D& rhs);  // 828
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 829
						}
					}
				}
			}
			{
				int i; // 865
				{
					IntVector3D vBlock; // 867
					{
						int n; // 868
						{
							IntVector3D vDependentBlock; // 870
							{
								int nGroupForBlock; // 878
								{
									const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 879
								}
								{
									bool bAddit; // 882
									{
										int nDep; // 883
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 243
										CUtlBlockMemory<unsigned int, int>::IsIdxValid(
												int i);  // 191
										CUtlBlockMemory<unsigned int, int>::MajorIndex(
												int i);  // 192
										CUtlBlockMemory<unsigned int, int>::MinorIndex(
												int i);  // 193
										{
										}
										CUtlBlockMemory<unsigned int, int>::operator[](
												int i);  // 588
										CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::operator[](
												int i);  // 885
									}
									CUtlBlockMemory<unsigned int, int>::NumElementsInBlock(); // 227
									CUtlBlockMemory<unsigned int, int>::NumAllocated(); // 1247
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 243
									CUtlBlockMemory<unsigned int, int>::IsIdxValid(
											int i);  // 191
									CUtlBlockMemory<unsigned int, int>::MajorIndex(
											int i);  // 192
									CUtlBlockMemory<unsigned int, int>::MinorIndex(
											int i);  // 193
									{
									}
									CUtlBlockMemory<unsigned int, int>::operator[](
											int i);  // 602
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::Element(
										int i);  // 1252
									Construct<unsigned int, unsigned int>(unsigned int* pMemory); // 1252
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 247
									CUtlBlockMemory<unsigned int, int>::Grow(
										int num);  // 806
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::ResetDbgInfo(); // 824
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::GrowMemory(
											int num);  // 1249
									CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::AddToTail(
											unsigned int& src);  // 893
									__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr(); // 742
									unique_ptr<int [], std::default_delete<int []> >::get(); // 735
									unique_ptr<int [], std::default_delete<int []> >::operator[](
											size_t __i);  // 896
								}
								CFastSweepControllerBase::BlockIndex(
										IntVector3D vBlockIndex);  // 878
								__uniq_ptr_impl<unsigned int, std::default_delete<unsigned int []> >::_M_ptr(); // 742
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::get(); // 735
								unique_ptr<unsigned int [], std::default_delete<unsigned int []> >::operator[](
										size_t __i);  // 878
							}
							IntVector3D::operator+=(
									const IntVector3D& rhs);  // 873
							CFastSweepControllerBase::BlockExists(
									IntVector3D vBlockIndex);  // 876
						}
					}
				}
			}
			__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
			unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
			unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
					size_t __i);  // 812
			CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::Count(); // 819
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 933
	}
	default_delete<int []>::operator(
			int* __ptr);  // 204
	__uniq_ptr_impl<int, std::default_delete<int []> >::reset(
		pointer __p);  // 790
	unique_ptr<int [], std::default_delete<int []> >::reset<int*>(
			int* __p);  // 808
	__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr(); // 742
	unique_ptr<int [], std::default_delete<int []> >::get(); // 809
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 809
	__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr(); // 742
	unique_ptr<int [], std::default_delete<int []> >::get(); // 735
	unique_ptr<int [], std::default_delete<int []> >::operator[](
			size_t __i);  // 933
	Store(AtomicInt32_t& i,
		int val);  // 934
	FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::QueueSweep(
			SweepGroup_t* pGroup);  // 935
	__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
	unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
			size_t __i);  // 935
} /* size: 0, variables: 1, inline expansions: 15 (0 bytes) */

// <04495BE3> ../public/tier0/fastsweep.h:938
// variables: 29
// function calls: 54
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::ProcessFinishedSweep(IntVector3D vBlockIndex, int nWhichSweep, QueuedSweepNode_t& queueOut)
{
	const char   __FUNCTION__; // 6739
	{
		int nBitOffset; // 945
		uint64 nOurAdjustment; // 947
		uint64 nNewValue; // 949
		int nCountRemaining; // 952
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 953
		}
		{
			uint8 nBlockFlags; // 958
			CalculateBlockFlags(const IntVector3D& vBlockIndex,
						int nWhichSweep,
						CFastSweepControllerBase* pSweeper);  // 958
			QueuedSweepNode_t::IsFull(); // 91
			QueuedSweepNode_t::QueueSweep(
					const IntVector3D& vBlockIndex,
					int nWhichSweep,
					uint8 nBlockFlags);  // 959
			CInterlockedIntT<int, 4>::operator!=(
					int rhs);  // 507
			FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::QueueSweep(
					const QueuedSweepNode_t& node);  // 962
			QueuedSweepNode_t::Clear(); // 963
			QueuedSweepNode_t::IsFull(); // 91
			QueuedSweepNode_t::QueueSweep(
					const IntVector3D& vBlockIndex,
					int nWhichSweep,
					uint8 nBlockFlags);  // 964
		}
		_M_ptr(const __uniq_ptr_impl<CInterlockedIntT<long long unsigned int, 8>, std::default_delete<CInterlockedIntT<long long u this); // 742
		get(const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long uns this); // 735
		operator[](const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long uns this,
				size_t __i);  // 484
		FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::BlockState(
				int nXBlock,
				int nYBlock,
				int nZBlock);  // 489
		FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::BlockState(
				IntVector3D vBlockIndex);  // 949
		ThreadInterlockedExchangeAdd64(volatile int64* p,
						int64 value);  // 663
		CInterlockedIntT<long long unsigned int, 8>::AtomicAdd(
				long long unsigned int add);  // 252
		AtomicSub(CInterlockedUInt64& x,
				uint64 nIncrement);  // 949
	}
	{
		IntVector3D vOfs; // 970
		ArrayReference_t<IntVector3D>& __for_range; // 44586
		IntVector3D* __for_begin; // 6100
		IntVector3D* __for_end; // 6100
		{
			IntVector3D vNeighborCoords; // 972
			{
				int nBitOffset; // 978
				uint64 nAdjust; // 979
				uint64 nNewState; // 980
				int nDepsRemaining; // 981
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 983
				}
				{
					uint8 nBlockFlags; // 987
					CalculateBlockFlags(const IntVector3D& vBlockIndex,
								int nWhichSweep,
								CFastSweepControllerBase* pSweeper);  // 987
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 988
					CInterlockedIntT<int, 4>::operator!=(
							int rhs);  // 507
					FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::QueueSweep(
							const QueuedSweepNode_t& node);  // 991
					QueuedSweepNode_t::Clear(); // 992
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 993
				}
				_M_ptr(const __uniq_ptr_impl<CInterlockedIntT<long long unsigned int, 8>, std::default_delete<CInterlockedIntT<long long u this); // 742
				get(const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long uns this); // 735
				operator[](const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long uns this,
						size_t __i);  // 484
				FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::BlockState(
						int nXBlock,
						int nYBlock,
						int nZBlock);  // 489
				FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::BlockState(
						IntVector3D vBlockIndex);  // 980
				ThreadInterlockedExchangeAdd64(volatile int64* p,
								int64 value);  // 663
				CInterlockedIntT<long long unsigned int, 8>::AtomicAdd(
						long long unsigned int add);  // 252
				AtomicSub(CInterlockedUInt64& x,
						uint64 nIncrement);  // 980
			}
			IntVector3D::operator-=(
					const IntVector3D& rhs);  // 973
			CFastSweepControllerBase::BlockExists(
					IntVector3D vBlockIndex);  // 974
		}
		ArrayReference_t<IntVector3D>::ArrayReference_t(
				IntVector3D* pBase,
				int nCount);  // 199
		NeighborsAccessedDuringSweep(int nSweep); // 970
	}
	{
		IntVector3D vOfs; // 1002
		ArrayReference_t<IntVector3D>& __for_range; // 44586
		IntVector3D* __for_begin; // 6100
		IntVector3D* __for_end; // 6100
		{
			IntVector3D vNeighborCoords; // 1004
			{
				int nBitOffset; // 1010
				uint64 nAdjust; // 1011
				uint64 nNewState; // 1012
				int nDepsRemaining; // 1013
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1015
				}
				{
					uint8 nBlockFlags; // 1019
					CalculateBlockFlags(const IntVector3D& vBlockIndex,
								int nWhichSweep,
								CFastSweepControllerBase* pSweeper);  // 1019
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 1020
					CInterlockedIntT<int, 4>::operator!=(
							int rhs);  // 507
					FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::QueueSweep(
							const QueuedSweepNode_t& node);  // 1023
					QueuedSweepNode_t::Clear(); // 1024
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 1025
				}
				_M_ptr(const __uniq_ptr_impl<CInterlockedIntT<long long unsigned int, 8>, std::default_delete<CInterlockedIntT<long long u this); // 742
				get(const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long uns this); // 735
				operator[](const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long uns this,
						size_t __i);  // 484
				FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::BlockState(
						int nXBlock,
						int nYBlock,
						int nZBlock);  // 489
				FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::BlockState(
						IntVector3D vBlockIndex);  // 1012
				ThreadInterlockedExchangeAdd64(volatile int64* p,
								int64 value);  // 663
				CInterlockedIntT<long long unsigned int, 8>::AtomicAdd(
						long long unsigned int add);  // 252
				AtomicSub(CInterlockedUInt64& x,
						uint64 nIncrement);  // 1012
			}
			IntVector3D::operator+=(
					const IntVector3D& rhs);  // 1005
			CFastSweepControllerBase::BlockExists(
					IntVector3D vBlockIndex);  // 1006
		}
	}
} /* size: 1658, variables: 1 */

// <04494609> ../public/tier0/fastsweep.h:938
// variables: 29
// function calls: 45
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::ProcessFinishedSweep(IntVector3D vBlockIndex, int nWhichSweep, QueuedSweepNode_t& queueOut)
{
	const char   __FUNCTION__; // 6739
	{
		int nBitOffset; // 945
		uint64 nOurAdjustment; // 947
		uint64 nNewValue; // 949
		int nCountRemaining; // 952
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 953
		}
		{
			uint8 nBlockFlags; // 958
			CalculateBlockFlags(const IntVector3D& vBlockIndex,
						int nWhichSweep,
						CFastSweepControllerBase* pSweeper);  // 958
			QueuedSweepNode_t::IsFull(); // 91
			QueuedSweepNode_t::QueueSweep(
					const IntVector3D& vBlockIndex,
					int nWhichSweep,
					uint8 nBlockFlags);  // 959
			FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::QueueSweep(
					const QueuedSweepNode_t& node);  // 962
			QueuedSweepNode_t::Clear(); // 963
			QueuedSweepNode_t::IsFull(); // 91
			QueuedSweepNode_t::QueueSweep(
					const IntVector3D& vBlockIndex,
					int nWhichSweep,
					uint8 nBlockFlags);  // 964
		}
		__uniq_ptr_impl<long long unsigned int, std::default_delete<long long unsigned int []> >::_M_ptr(); // 742
		unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::get(); // 735
		unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::operator[](
				size_t __i);  // 484
		FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::BlockState(
				int nXBlock,
				int nYBlock,
				int nZBlock);  // 489
		FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::BlockState(
				IntVector3D vBlockIndex);  // 949
		AtomicSub(AtomicUInt64_t& x,
				uint64 nIncrement);  // 949
	}
	{
		IntVector3D vOfs; // 970
		ArrayReference_t<IntVector3D>& __for_range; // 44586
		IntVector3D* __for_begin; // 6100
		IntVector3D* __for_end; // 6100
		{
			IntVector3D vNeighborCoords; // 972
			{
				int nBitOffset; // 978
				uint64 nAdjust; // 979
				uint64 nNewState; // 980
				int nDepsRemaining; // 981
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 983
				}
				{
					uint8 nBlockFlags; // 987
					CalculateBlockFlags(const IntVector3D& vBlockIndex,
								int nWhichSweep,
								CFastSweepControllerBase* pSweeper);  // 987
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 988
					FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::QueueSweep(
							const QueuedSweepNode_t& node);  // 991
					QueuedSweepNode_t::Clear(); // 992
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 993
				}
				__uniq_ptr_impl<long long unsigned int, std::default_delete<long long unsigned int []> >::_M_ptr(); // 742
				unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::get(); // 735
				unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::operator[](
						size_t __i);  // 484
				FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::BlockState(
						int nXBlock,
						int nYBlock,
						int nZBlock);  // 489
				FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::BlockState(
						IntVector3D vBlockIndex);  // 980
				AtomicSub(AtomicUInt64_t& x,
						uint64 nIncrement);  // 980
			}
			IntVector3D::operator-=(
					const IntVector3D& rhs);  // 973
			CFastSweepControllerBase::BlockExists(
					IntVector3D vBlockIndex);  // 974
		}
		ArrayReference_t<IntVector3D>::ArrayReference_t(
				IntVector3D* pBase,
				int nCount);  // 199
		NeighborsAccessedDuringSweep(int nSweep); // 970
	}
	{
		IntVector3D vOfs; // 1002
		ArrayReference_t<IntVector3D>& __for_range; // 44586
		IntVector3D* __for_begin; // 6100
		IntVector3D* __for_end; // 6100
		{
			IntVector3D vNeighborCoords; // 1004
			{
				int nBitOffset; // 1010
				uint64 nAdjust; // 1011
				uint64 nNewState; // 1012
				int nDepsRemaining; // 1013
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1015
				}
				{
					uint8 nBlockFlags; // 1019
					CalculateBlockFlags(const IntVector3D& vBlockIndex,
								int nWhichSweep,
								CFastSweepControllerBase* pSweeper);  // 1019
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 1020
					FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::QueueSweep(
							const QueuedSweepNode_t& node);  // 1023
					QueuedSweepNode_t::Clear(); // 1024
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 1025
				}
				__uniq_ptr_impl<long long unsigned int, std::default_delete<long long unsigned int []> >::_M_ptr(); // 742
				unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::get(); // 735
				unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::operator[](
						size_t __i);  // 484
				FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::BlockState(
						int nXBlock,
						int nYBlock,
						int nZBlock);  // 489
				FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::BlockState(
						IntVector3D vBlockIndex);  // 1012
				AtomicSub(AtomicUInt64_t& x,
						uint64 nIncrement);  // 1012
			}
			IntVector3D::operator+=(
					const IntVector3D& rhs);  // 1005
			CFastSweepControllerBase::BlockExists(
					IntVector3D vBlockIndex);  // 1006
		}
	}
} /* size: 0, variables: 1 */

// <0449310C> ../public/tier0/fastsweep.h:938
// variables: 29
// function calls: 45
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::ProcessFinishedSweep(IntVector3D vBlockIndex, int nWhichSweep, QueuedSweepNode_t& queueOut)
{
	const char   __FUNCTION__; // 6739
	{
		int nBitOffset; // 945
		uint64 nOurAdjustment; // 947
		uint64 nNewValue; // 949
		int nCountRemaining; // 952
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 953
		}
		{
			uint8 nBlockFlags; // 958
			CalculateBlockFlags(const IntVector3D& vBlockIndex,
						int nWhichSweep,
						CFastSweepControllerBase* pSweeper);  // 958
			QueuedSweepNode_t::IsFull(); // 91
			QueuedSweepNode_t::QueueSweep(
					const IntVector3D& vBlockIndex,
					int nWhichSweep,
					uint8 nBlockFlags);  // 959
			FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::QueueSweep(
					const QueuedSweepNode_t& node);  // 962
			QueuedSweepNode_t::Clear(); // 963
			QueuedSweepNode_t::IsFull(); // 91
			QueuedSweepNode_t::QueueSweep(
					const IntVector3D& vBlockIndex,
					int nWhichSweep,
					uint8 nBlockFlags);  // 964
		}
		__uniq_ptr_impl<long long unsigned int, std::default_delete<long long unsigned int []> >::_M_ptr(); // 742
		unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::get(); // 735
		unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::operator[](
				size_t __i);  // 484
		FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::BlockState(
				int nXBlock,
				int nYBlock,
				int nZBlock);  // 489
		FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::BlockState(
				IntVector3D vBlockIndex);  // 949
		AtomicSub(AtomicUInt64_t& x,
				uint64 nIncrement);  // 949
	}
	{
		IntVector3D vOfs; // 970
		ArrayReference_t<IntVector3D>& __for_range; // 44586
		IntVector3D* __for_begin; // 6100
		IntVector3D* __for_end; // 6100
		{
			IntVector3D vNeighborCoords; // 972
			{
				int nBitOffset; // 978
				uint64 nAdjust; // 979
				uint64 nNewState; // 980
				int nDepsRemaining; // 981
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 983
				}
				{
					uint8 nBlockFlags; // 987
					CalculateBlockFlags(const IntVector3D& vBlockIndex,
								int nWhichSweep,
								CFastSweepControllerBase* pSweeper);  // 987
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 988
					FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::QueueSweep(
							const QueuedSweepNode_t& node);  // 991
					QueuedSweepNode_t::Clear(); // 992
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 993
				}
				__uniq_ptr_impl<long long unsigned int, std::default_delete<long long unsigned int []> >::_M_ptr(); // 742
				unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::get(); // 735
				unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::operator[](
						size_t __i);  // 484
				FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::BlockState(
						int nXBlock,
						int nYBlock,
						int nZBlock);  // 489
				FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::BlockState(
						IntVector3D vBlockIndex);  // 980
				AtomicSub(AtomicUInt64_t& x,
						uint64 nIncrement);  // 980
			}
			IntVector3D::operator-=(
					const IntVector3D& rhs);  // 973
			CFastSweepControllerBase::BlockExists(
					IntVector3D vBlockIndex);  // 974
		}
		ArrayReference_t<IntVector3D>::ArrayReference_t(
				IntVector3D* pBase,
				int nCount);  // 199
		NeighborsAccessedDuringSweep(int nSweep); // 970
	}
	{
		IntVector3D vOfs; // 1002
		ArrayReference_t<IntVector3D>& __for_range; // 44586
		IntVector3D* __for_begin; // 6100
		IntVector3D* __for_end; // 6100
		{
			IntVector3D vNeighborCoords; // 1004
			{
				int nBitOffset; // 1010
				uint64 nAdjust; // 1011
				uint64 nNewState; // 1012
				int nDepsRemaining; // 1013
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1015
				}
				{
					uint8 nBlockFlags; // 1019
					CalculateBlockFlags(const IntVector3D& vBlockIndex,
								int nWhichSweep,
								CFastSweepControllerBase* pSweeper);  // 1019
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 1020
					FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::QueueSweep(
							const QueuedSweepNode_t& node);  // 1023
					QueuedSweepNode_t::Clear(); // 1024
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 1025
				}
				__uniq_ptr_impl<long long unsigned int, std::default_delete<long long unsigned int []> >::_M_ptr(); // 742
				unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::get(); // 735
				unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::operator[](
						size_t __i);  // 484
				FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::BlockState(
						int nXBlock,
						int nYBlock,
						int nZBlock);  // 489
				FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::BlockState(
						IntVector3D vBlockIndex);  // 1012
				AtomicSub(AtomicUInt64_t& x,
						uint64 nIncrement);  // 1012
			}
			IntVector3D::operator+=(
					const IntVector3D& rhs);  // 1005
			CFastSweepControllerBase::BlockExists(
					IntVector3D vBlockIndex);  // 1006
		}
	}
} /* size: 0, variables: 1 */

// <04491B81> ../public/tier0/fastsweep.h:938
// variables: 29
// function calls: 54
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::ProcessFinishedSweep(IntVector3D vBlockIndex, int nWhichSweep, QueuedSweepNode_t& queueOut)
{
	const char   __FUNCTION__; // 6739
	{
		int nBitOffset; // 945
		uint64 nOurAdjustment; // 947
		uint64 nNewValue; // 949
		int nCountRemaining; // 952
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 953
		}
		{
			uint8 nBlockFlags; // 958
			CalculateBlockFlags(const IntVector3D& vBlockIndex,
						int nWhichSweep,
						CFastSweepControllerBase* pSweeper);  // 958
			QueuedSweepNode_t::IsFull(); // 91
			QueuedSweepNode_t::QueueSweep(
					const IntVector3D& vBlockIndex,
					int nWhichSweep,
					uint8 nBlockFlags);  // 959
			CInterlockedIntT<int, 4>::operator!=(
					int rhs);  // 507
			FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::QueueSweep(
					const QueuedSweepNode_t& node);  // 962
			QueuedSweepNode_t::Clear(); // 963
			QueuedSweepNode_t::IsFull(); // 91
			QueuedSweepNode_t::QueueSweep(
					const IntVector3D& vBlockIndex,
					int nWhichSweep,
					uint8 nBlockFlags);  // 964
		}
		_M_ptr(const __uniq_ptr_impl<CInterlockedIntT<long long unsigned int, 8>, std::default_delete<CInterlockedIntT<long long u this); // 742
		get(const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long uns this); // 735
		operator[](const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long uns this,
				size_t __i);  // 484
		FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::BlockState(
				int nXBlock,
				int nYBlock,
				int nZBlock);  // 489
		FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::BlockState(
				IntVector3D vBlockIndex);  // 949
		ThreadInterlockedExchangeAdd64(volatile int64* p,
						int64 value);  // 663
		CInterlockedIntT<long long unsigned int, 8>::AtomicAdd(
				long long unsigned int add);  // 252
		AtomicSub(CInterlockedUInt64& x,
				uint64 nIncrement);  // 949
	}
	{
		IntVector3D vOfs; // 970
		ArrayReference_t<IntVector3D>& __for_range; // 44586
		IntVector3D* __for_begin; // 6100
		IntVector3D* __for_end; // 6100
		{
			IntVector3D vNeighborCoords; // 972
			{
				int nBitOffset; // 978
				uint64 nAdjust; // 979
				uint64 nNewState; // 980
				int nDepsRemaining; // 981
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 983
				}
				{
					uint8 nBlockFlags; // 987
					CalculateBlockFlags(const IntVector3D& vBlockIndex,
								int nWhichSweep,
								CFastSweepControllerBase* pSweeper);  // 987
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 988
					CInterlockedIntT<int, 4>::operator!=(
							int rhs);  // 507
					FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::QueueSweep(
							const QueuedSweepNode_t& node);  // 991
					QueuedSweepNode_t::Clear(); // 992
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 993
				}
				_M_ptr(const __uniq_ptr_impl<CInterlockedIntT<long long unsigned int, 8>, std::default_delete<CInterlockedIntT<long long u this); // 742
				get(const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long uns this); // 735
				operator[](const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long uns this,
						size_t __i);  // 484
				FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::BlockState(
						int nXBlock,
						int nYBlock,
						int nZBlock);  // 489
				FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::BlockState(
						IntVector3D vBlockIndex);  // 980
				ThreadInterlockedExchangeAdd64(volatile int64* p,
								int64 value);  // 663
				CInterlockedIntT<long long unsigned int, 8>::AtomicAdd(
						long long unsigned int add);  // 252
				AtomicSub(CInterlockedUInt64& x,
						uint64 nIncrement);  // 980
			}
			IntVector3D::operator-=(
					const IntVector3D& rhs);  // 973
			CFastSweepControllerBase::BlockExists(
					IntVector3D vBlockIndex);  // 974
		}
		ArrayReference_t<IntVector3D>::ArrayReference_t(
				IntVector3D* pBase,
				int nCount);  // 199
		NeighborsAccessedDuringSweep(int nSweep); // 970
	}
	{
		IntVector3D vOfs; // 1002
		ArrayReference_t<IntVector3D>& __for_range; // 44586
		IntVector3D* __for_begin; // 6100
		IntVector3D* __for_end; // 6100
		{
			IntVector3D vNeighborCoords; // 1004
			{
				int nBitOffset; // 1010
				uint64 nAdjust; // 1011
				uint64 nNewState; // 1012
				int nDepsRemaining; // 1013
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1015
				}
				{
					uint8 nBlockFlags; // 1019
					CalculateBlockFlags(const IntVector3D& vBlockIndex,
								int nWhichSweep,
								CFastSweepControllerBase* pSweeper);  // 1019
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 1020
					CInterlockedIntT<int, 4>::operator!=(
							int rhs);  // 507
					FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::QueueSweep(
							const QueuedSweepNode_t& node);  // 1023
					QueuedSweepNode_t::Clear(); // 1024
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 1025
				}
				_M_ptr(const __uniq_ptr_impl<CInterlockedIntT<long long unsigned int, 8>, std::default_delete<CInterlockedIntT<long long u this); // 742
				get(const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long uns this); // 735
				operator[](const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long uns this,
						size_t __i);  // 484
				FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::BlockState(
						int nXBlock,
						int nYBlock,
						int nZBlock);  // 489
				FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::BlockState(
						IntVector3D vBlockIndex);  // 1012
				ThreadInterlockedExchangeAdd64(volatile int64* p,
								int64 value);  // 663
				CInterlockedIntT<long long unsigned int, 8>::AtomicAdd(
						long long unsigned int add);  // 252
				AtomicSub(CInterlockedUInt64& x,
						uint64 nIncrement);  // 1012
			}
			IntVector3D::operator+=(
					const IntVector3D& rhs);  // 1005
			CFastSweepControllerBase::BlockExists(
					IntVector3D vBlockIndex);  // 1006
		}
	}
} /* size: 1658, variables: 1 */

// <0449078B> ../public/tier0/fastsweep.h:938
// variables: 29
// function calls: 45
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::ProcessFinishedSweep(IntVector3D vBlockIndex, int nWhichSweep, QueuedSweepNode_t& queueOut)
{
	const char   __FUNCTION__; // 6739
	{
		int nBitOffset; // 945
		uint64 nOurAdjustment; // 947
		uint64 nNewValue; // 949
		int nCountRemaining; // 952
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 953
		}
		{
			uint8 nBlockFlags; // 958
			CalculateBlockFlags(const IntVector3D& vBlockIndex,
						int nWhichSweep,
						CFastSweepControllerBase* pSweeper);  // 958
			QueuedSweepNode_t::IsFull(); // 91
			QueuedSweepNode_t::QueueSweep(
					const IntVector3D& vBlockIndex,
					int nWhichSweep,
					uint8 nBlockFlags);  // 959
			FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::QueueSweep(
					const QueuedSweepNode_t& node);  // 962
			QueuedSweepNode_t::Clear(); // 963
			QueuedSweepNode_t::IsFull(); // 91
			QueuedSweepNode_t::QueueSweep(
					const IntVector3D& vBlockIndex,
					int nWhichSweep,
					uint8 nBlockFlags);  // 964
		}
		__uniq_ptr_impl<long long unsigned int, std::default_delete<long long unsigned int []> >::_M_ptr(); // 742
		unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::get(); // 735
		unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::operator[](
				size_t __i);  // 484
		FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::BlockState(
				int nXBlock,
				int nYBlock,
				int nZBlock);  // 489
		FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::BlockState(
				IntVector3D vBlockIndex);  // 949
		AtomicSub(AtomicUInt64_t& x,
				uint64 nIncrement);  // 949
	}
	{
		IntVector3D vOfs; // 970
		ArrayReference_t<IntVector3D>& __for_range; // 44586
		IntVector3D* __for_begin; // 6100
		IntVector3D* __for_end; // 6100
		{
			IntVector3D vNeighborCoords; // 972
			{
				int nBitOffset; // 978
				uint64 nAdjust; // 979
				uint64 nNewState; // 980
				int nDepsRemaining; // 981
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 983
				}
				{
					uint8 nBlockFlags; // 987
					CalculateBlockFlags(const IntVector3D& vBlockIndex,
								int nWhichSweep,
								CFastSweepControllerBase* pSweeper);  // 987
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 988
					FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::QueueSweep(
							const QueuedSweepNode_t& node);  // 991
					QueuedSweepNode_t::Clear(); // 992
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 993
				}
				__uniq_ptr_impl<long long unsigned int, std::default_delete<long long unsigned int []> >::_M_ptr(); // 742
				unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::get(); // 735
				unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::operator[](
						size_t __i);  // 484
				FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::BlockState(
						int nXBlock,
						int nYBlock,
						int nZBlock);  // 489
				FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::BlockState(
						IntVector3D vBlockIndex);  // 980
				AtomicSub(AtomicUInt64_t& x,
						uint64 nIncrement);  // 980
			}
			IntVector3D::operator-=(
					const IntVector3D& rhs);  // 973
			CFastSweepControllerBase::BlockExists(
					IntVector3D vBlockIndex);  // 974
		}
		ArrayReference_t<IntVector3D>::ArrayReference_t(
				IntVector3D* pBase,
				int nCount);  // 199
		NeighborsAccessedDuringSweep(int nSweep); // 970
	}
	{
		IntVector3D vOfs; // 1002
		ArrayReference_t<IntVector3D>& __for_range; // 44586
		IntVector3D* __for_begin; // 6100
		IntVector3D* __for_end; // 6100
		{
			IntVector3D vNeighborCoords; // 1004
			{
				int nBitOffset; // 1010
				uint64 nAdjust; // 1011
				uint64 nNewState; // 1012
				int nDepsRemaining; // 1013
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1015
				}
				{
					uint8 nBlockFlags; // 1019
					CalculateBlockFlags(const IntVector3D& vBlockIndex,
								int nWhichSweep,
								CFastSweepControllerBase* pSweeper);  // 1019
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 1020
					FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::QueueSweep(
							const QueuedSweepNode_t& node);  // 1023
					QueuedSweepNode_t::Clear(); // 1024
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 1025
				}
				__uniq_ptr_impl<long long unsigned int, std::default_delete<long long unsigned int []> >::_M_ptr(); // 742
				unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::get(); // 735
				unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::operator[](
						size_t __i);  // 484
				FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::BlockState(
						int nXBlock,
						int nYBlock,
						int nZBlock);  // 489
				FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::BlockState(
						IntVector3D vBlockIndex);  // 1012
				AtomicSub(AtomicUInt64_t& x,
						uint64 nIncrement);  // 1012
			}
			IntVector3D::operator+=(
					const IntVector3D& rhs);  // 1005
			CFastSweepControllerBase::BlockExists(
					IntVector3D vBlockIndex);  // 1006
		}
	}
} /* size: 0, variables: 1 */

// <01AF12F5> ../public/tier0/fastsweep.h:938
// variables: 29
// function calls: 54
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::ProcessFinishedSweep(IntVector3D vBlockIndex, int nWhichSweep, QueuedSweepNode_t& queueOut)
{
	const char   __FUNCTION__; // 47128
	{
		int nBitOffset; // 945
		uint64 nOurAdjustment; // 947
		uint64 nNewValue; // 949
		int nCountRemaining; // 952
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 953
		}
		{
			uint8 nBlockFlags; // 958
			CalculateBlockFlags(const IntVector3D& vBlockIndex,
						int nWhichSweep,
						CFastSweepControllerBase* pSweeper);  // 958
			QueuedSweepNode_t::IsFull(); // 91
			QueuedSweepNode_t::QueueSweep(
					const IntVector3D& vBlockIndex,
					int nWhichSweep,
					uint8 nBlockFlags);  // 959
			CInterlockedIntT<int, 4>::operator!=(
					int rhs);  // 507
			FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::QueueSweep(
					const QueuedSweepNode_t& node);  // 962
			QueuedSweepNode_t::Clear(); // 963
			QueuedSweepNode_t::IsFull(); // 91
			QueuedSweepNode_t::QueueSweep(
					const IntVector3D& vBlockIndex,
					int nWhichSweep,
					uint8 nBlockFlags);  // 964
		}
		_M_ptr(const __uniq_ptr_impl<CInterlockedIntT<long long unsigned int, 8>, std::default_delete<CInterlockedIntT<long long u this); // 742
		get(const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long uns this); // 735
		operator[](const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long uns this,
				size_t __i);  // 484
		FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::BlockState(
				int nXBlock,
				int nYBlock,
				int nZBlock);  // 489
		FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::BlockState(
				IntVector3D vBlockIndex);  // 949
		ThreadInterlockedExchangeAdd64(volatile int64* p,
						int64 value);  // 663
		CInterlockedIntT<long long unsigned int, 8>::AtomicAdd(
				long long unsigned int add);  // 252
		AtomicSub(CInterlockedUInt64& x,
				uint64 nIncrement);  // 949
	}
	{
		IntVector3D vOfs; // 970
		ArrayReference_t<IntVector3D>& __for_range; // 19439
		IntVector3D* __for_begin; // 46489
		IntVector3D* __for_end; // 46489
		{
			IntVector3D vNeighborCoords; // 972
			{
				int nBitOffset; // 978
				uint64 nAdjust; // 979
				uint64 nNewState; // 980
				int nDepsRemaining; // 981
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 983
				}
				{
					uint8 nBlockFlags; // 987
					CalculateBlockFlags(const IntVector3D& vBlockIndex,
								int nWhichSweep,
								CFastSweepControllerBase* pSweeper);  // 987
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 988
					CInterlockedIntT<int, 4>::operator!=(
							int rhs);  // 507
					FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::QueueSweep(
							const QueuedSweepNode_t& node);  // 991
					QueuedSweepNode_t::Clear(); // 992
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 993
				}
				_M_ptr(const __uniq_ptr_impl<CInterlockedIntT<long long unsigned int, 8>, std::default_delete<CInterlockedIntT<long long u this); // 742
				get(const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long uns this); // 735
				operator[](const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long uns this,
						size_t __i);  // 484
				FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::BlockState(
						int nXBlock,
						int nYBlock,
						int nZBlock);  // 489
				FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::BlockState(
						IntVector3D vBlockIndex);  // 980
				ThreadInterlockedExchangeAdd64(volatile int64* p,
								int64 value);  // 663
				CInterlockedIntT<long long unsigned int, 8>::AtomicAdd(
						long long unsigned int add);  // 252
				AtomicSub(CInterlockedUInt64& x,
						uint64 nIncrement);  // 980
			}
			IntVector3D::operator-=(
					const IntVector3D& rhs);  // 973
			CFastSweepControllerBase::BlockExists(
					IntVector3D vBlockIndex);  // 974
		}
		ArrayReference_t<IntVector3D>::ArrayReference_t(
				IntVector3D* pBase,
				int nCount);  // 199
		NeighborsAccessedDuringSweep(int nSweep); // 970
	}
	{
		IntVector3D vOfs; // 1002
		ArrayReference_t<IntVector3D>& __for_range; // 19439
		IntVector3D* __for_begin; // 46489
		IntVector3D* __for_end; // 46489
		{
			IntVector3D vNeighborCoords; // 1004
			{
				int nBitOffset; // 1010
				uint64 nAdjust; // 1011
				uint64 nNewState; // 1012
				int nDepsRemaining; // 1013
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1015
				}
				{
					uint8 nBlockFlags; // 1019
					CalculateBlockFlags(const IntVector3D& vBlockIndex,
								int nWhichSweep,
								CFastSweepControllerBase* pSweeper);  // 1019
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 1020
					CInterlockedIntT<int, 4>::operator!=(
							int rhs);  // 507
					FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::QueueSweep(
							const QueuedSweepNode_t& node);  // 1023
					QueuedSweepNode_t::Clear(); // 1024
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 1025
				}
				_M_ptr(const __uniq_ptr_impl<CInterlockedIntT<long long unsigned int, 8>, std::default_delete<CInterlockedIntT<long long u this); // 742
				get(const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long uns this); // 735
				operator[](const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long uns this,
						size_t __i);  // 484
				FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::BlockState(
						int nXBlock,
						int nYBlock,
						int nZBlock);  // 489
				FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::BlockState(
						IntVector3D vBlockIndex);  // 1012
				ThreadInterlockedExchangeAdd64(volatile int64* p,
								int64 value);  // 663
				CInterlockedIntT<long long unsigned int, 8>::AtomicAdd(
						long long unsigned int add);  // 252
				AtomicSub(CInterlockedUInt64& x,
						uint64 nIncrement);  // 1012
			}
			IntVector3D::operator+=(
					const IntVector3D& rhs);  // 1005
			CFastSweepControllerBase::BlockExists(
					IntVector3D vBlockIndex);  // 1006
		}
	}
} /* size: 1658, variables: 1 */

// <01AEFD1B> ../public/tier0/fastsweep.h:938
// variables: 29
// function calls: 45
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::ProcessFinishedSweep(IntVector3D vBlockIndex, int nWhichSweep, QueuedSweepNode_t& queueOut)
{
	const char   __FUNCTION__; // 47128
	{
		int nBitOffset; // 945
		uint64 nOurAdjustment; // 947
		uint64 nNewValue; // 949
		int nCountRemaining; // 952
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 953
		}
		{
			uint8 nBlockFlags; // 958
			CalculateBlockFlags(const IntVector3D& vBlockIndex,
						int nWhichSweep,
						CFastSweepControllerBase* pSweeper);  // 958
			QueuedSweepNode_t::IsFull(); // 91
			QueuedSweepNode_t::QueueSweep(
					const IntVector3D& vBlockIndex,
					int nWhichSweep,
					uint8 nBlockFlags);  // 959
			FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::QueueSweep(
					const QueuedSweepNode_t& node);  // 962
			QueuedSweepNode_t::Clear(); // 963
			QueuedSweepNode_t::IsFull(); // 91
			QueuedSweepNode_t::QueueSweep(
					const IntVector3D& vBlockIndex,
					int nWhichSweep,
					uint8 nBlockFlags);  // 964
		}
		__uniq_ptr_impl<long long unsigned int, std::default_delete<long long unsigned int []> >::_M_ptr(); // 742
		unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::get(); // 735
		unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::operator[](
				size_t __i);  // 484
		FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::BlockState(
				int nXBlock,
				int nYBlock,
				int nZBlock);  // 489
		FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::BlockState(
				IntVector3D vBlockIndex);  // 949
		AtomicSub(AtomicUInt64_t& x,
				uint64 nIncrement);  // 949
	}
	{
		IntVector3D vOfs; // 970
		ArrayReference_t<IntVector3D>& __for_range; // 19439
		IntVector3D* __for_begin; // 46489
		IntVector3D* __for_end; // 46489
		{
			IntVector3D vNeighborCoords; // 972
			{
				int nBitOffset; // 978
				uint64 nAdjust; // 979
				uint64 nNewState; // 980
				int nDepsRemaining; // 981
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 983
				}
				{
					uint8 nBlockFlags; // 987
					CalculateBlockFlags(const IntVector3D& vBlockIndex,
								int nWhichSweep,
								CFastSweepControllerBase* pSweeper);  // 987
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 988
					FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::QueueSweep(
							const QueuedSweepNode_t& node);  // 991
					QueuedSweepNode_t::Clear(); // 992
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 993
				}
				__uniq_ptr_impl<long long unsigned int, std::default_delete<long long unsigned int []> >::_M_ptr(); // 742
				unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::get(); // 735
				unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::operator[](
						size_t __i);  // 484
				FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::BlockState(
						int nXBlock,
						int nYBlock,
						int nZBlock);  // 489
				FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::BlockState(
						IntVector3D vBlockIndex);  // 980
				AtomicSub(AtomicUInt64_t& x,
						uint64 nIncrement);  // 980
			}
			IntVector3D::operator-=(
					const IntVector3D& rhs);  // 973
			CFastSweepControllerBase::BlockExists(
					IntVector3D vBlockIndex);  // 974
		}
		ArrayReference_t<IntVector3D>::ArrayReference_t(
				IntVector3D* pBase,
				int nCount);  // 199
		NeighborsAccessedDuringSweep(int nSweep); // 970
	}
	{
		IntVector3D vOfs; // 1002
		ArrayReference_t<IntVector3D>& __for_range; // 19439
		IntVector3D* __for_begin; // 46489
		IntVector3D* __for_end; // 46489
		{
			IntVector3D vNeighborCoords; // 1004
			{
				int nBitOffset; // 1010
				uint64 nAdjust; // 1011
				uint64 nNewState; // 1012
				int nDepsRemaining; // 1013
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1015
				}
				{
					uint8 nBlockFlags; // 1019
					CalculateBlockFlags(const IntVector3D& vBlockIndex,
								int nWhichSweep,
								CFastSweepControllerBase* pSweeper);  // 1019
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 1020
					FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::QueueSweep(
							const QueuedSweepNode_t& node);  // 1023
					QueuedSweepNode_t::Clear(); // 1024
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 1025
				}
				__uniq_ptr_impl<long long unsigned int, std::default_delete<long long unsigned int []> >::_M_ptr(); // 742
				unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::get(); // 735
				unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::operator[](
						size_t __i);  // 484
				FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::BlockState(
						int nXBlock,
						int nYBlock,
						int nZBlock);  // 489
				FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::BlockState(
						IntVector3D vBlockIndex);  // 1012
				AtomicSub(AtomicUInt64_t& x,
						uint64 nIncrement);  // 1012
			}
			IntVector3D::operator+=(
					const IntVector3D& rhs);  // 1005
			CFastSweepControllerBase::BlockExists(
					IntVector3D vBlockIndex);  // 1006
		}
	}
} /* size: 0, variables: 1 */

// <01AEE81E> ../public/tier0/fastsweep.h:938
// variables: 29
// function calls: 45
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::ProcessFinishedSweep(IntVector3D vBlockIndex, int nWhichSweep, QueuedSweepNode_t& queueOut)
{
	const char   __FUNCTION__; // 47128
	{
		int nBitOffset; // 945
		uint64 nOurAdjustment; // 947
		uint64 nNewValue; // 949
		int nCountRemaining; // 952
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 953
		}
		{
			uint8 nBlockFlags; // 958
			CalculateBlockFlags(const IntVector3D& vBlockIndex,
						int nWhichSweep,
						CFastSweepControllerBase* pSweeper);  // 958
			QueuedSweepNode_t::IsFull(); // 91
			QueuedSweepNode_t::QueueSweep(
					const IntVector3D& vBlockIndex,
					int nWhichSweep,
					uint8 nBlockFlags);  // 959
			FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::QueueSweep(
					const QueuedSweepNode_t& node);  // 962
			QueuedSweepNode_t::Clear(); // 963
			QueuedSweepNode_t::IsFull(); // 91
			QueuedSweepNode_t::QueueSweep(
					const IntVector3D& vBlockIndex,
					int nWhichSweep,
					uint8 nBlockFlags);  // 964
		}
		__uniq_ptr_impl<long long unsigned int, std::default_delete<long long unsigned int []> >::_M_ptr(); // 742
		unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::get(); // 735
		unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::operator[](
				size_t __i);  // 484
		FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::BlockState(
				int nXBlock,
				int nYBlock,
				int nZBlock);  // 489
		FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::BlockState(
				IntVector3D vBlockIndex);  // 949
		AtomicSub(AtomicUInt64_t& x,
				uint64 nIncrement);  // 949
	}
	{
		IntVector3D vOfs; // 970
		ArrayReference_t<IntVector3D>& __for_range; // 19439
		IntVector3D* __for_begin; // 46489
		IntVector3D* __for_end; // 46489
		{
			IntVector3D vNeighborCoords; // 972
			{
				int nBitOffset; // 978
				uint64 nAdjust; // 979
				uint64 nNewState; // 980
				int nDepsRemaining; // 981
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 983
				}
				{
					uint8 nBlockFlags; // 987
					CalculateBlockFlags(const IntVector3D& vBlockIndex,
								int nWhichSweep,
								CFastSweepControllerBase* pSweeper);  // 987
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 988
					FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::QueueSweep(
							const QueuedSweepNode_t& node);  // 991
					QueuedSweepNode_t::Clear(); // 992
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 993
				}
				__uniq_ptr_impl<long long unsigned int, std::default_delete<long long unsigned int []> >::_M_ptr(); // 742
				unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::get(); // 735
				unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::operator[](
						size_t __i);  // 484
				FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::BlockState(
						int nXBlock,
						int nYBlock,
						int nZBlock);  // 489
				FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::BlockState(
						IntVector3D vBlockIndex);  // 980
				AtomicSub(AtomicUInt64_t& x,
						uint64 nIncrement);  // 980
			}
			IntVector3D::operator-=(
					const IntVector3D& rhs);  // 973
			CFastSweepControllerBase::BlockExists(
					IntVector3D vBlockIndex);  // 974
		}
		ArrayReference_t<IntVector3D>::ArrayReference_t(
				IntVector3D* pBase,
				int nCount);  // 199
		NeighborsAccessedDuringSweep(int nSweep); // 970
	}
	{
		IntVector3D vOfs; // 1002
		ArrayReference_t<IntVector3D>& __for_range; // 19439
		IntVector3D* __for_begin; // 46489
		IntVector3D* __for_end; // 46489
		{
			IntVector3D vNeighborCoords; // 1004
			{
				int nBitOffset; // 1010
				uint64 nAdjust; // 1011
				uint64 nNewState; // 1012
				int nDepsRemaining; // 1013
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1015
				}
				{
					uint8 nBlockFlags; // 1019
					CalculateBlockFlags(const IntVector3D& vBlockIndex,
								int nWhichSweep,
								CFastSweepControllerBase* pSweeper);  // 1019
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 1020
					FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::QueueSweep(
							const QueuedSweepNode_t& node);  // 1023
					QueuedSweepNode_t::Clear(); // 1024
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 1025
				}
				__uniq_ptr_impl<long long unsigned int, std::default_delete<long long unsigned int []> >::_M_ptr(); // 742
				unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::get(); // 735
				unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::operator[](
						size_t __i);  // 484
				FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::BlockState(
						int nXBlock,
						int nYBlock,
						int nZBlock);  // 489
				FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::BlockState(
						IntVector3D vBlockIndex);  // 1012
				AtomicSub(AtomicUInt64_t& x,
						uint64 nIncrement);  // 1012
			}
			IntVector3D::operator+=(
					const IntVector3D& rhs);  // 1005
			CFastSweepControllerBase::BlockExists(
					IntVector3D vBlockIndex);  // 1006
		}
	}
} /* size: 0, variables: 1 */

// <01AED293> ../public/tier0/fastsweep.h:938
// variables: 29
// function calls: 54
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::ProcessFinishedSweep(IntVector3D vBlockIndex, int nWhichSweep, QueuedSweepNode_t& queueOut)
{
	const char   __FUNCTION__; // 47128
	{
		int nBitOffset; // 945
		uint64 nOurAdjustment; // 947
		uint64 nNewValue; // 949
		int nCountRemaining; // 952
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 953
		}
		{
			uint8 nBlockFlags; // 958
			CalculateBlockFlags(const IntVector3D& vBlockIndex,
						int nWhichSweep,
						CFastSweepControllerBase* pSweeper);  // 958
			QueuedSweepNode_t::IsFull(); // 91
			QueuedSweepNode_t::QueueSweep(
					const IntVector3D& vBlockIndex,
					int nWhichSweep,
					uint8 nBlockFlags);  // 959
			CInterlockedIntT<int, 4>::operator!=(
					int rhs);  // 507
			FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::QueueSweep(
					const QueuedSweepNode_t& node);  // 962
			QueuedSweepNode_t::Clear(); // 963
			QueuedSweepNode_t::IsFull(); // 91
			QueuedSweepNode_t::QueueSweep(
					const IntVector3D& vBlockIndex,
					int nWhichSweep,
					uint8 nBlockFlags);  // 964
		}
		_M_ptr(const __uniq_ptr_impl<CInterlockedIntT<long long unsigned int, 8>, std::default_delete<CInterlockedIntT<long long u this); // 742
		get(const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long uns this); // 735
		operator[](const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long uns this,
				size_t __i);  // 484
		FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::BlockState(
				int nXBlock,
				int nYBlock,
				int nZBlock);  // 489
		FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::BlockState(
				IntVector3D vBlockIndex);  // 949
		ThreadInterlockedExchangeAdd64(volatile int64* p,
						int64 value);  // 663
		CInterlockedIntT<long long unsigned int, 8>::AtomicAdd(
				long long unsigned int add);  // 252
		AtomicSub(CInterlockedUInt64& x,
				uint64 nIncrement);  // 949
	}
	{
		IntVector3D vOfs; // 970
		ArrayReference_t<IntVector3D>& __for_range; // 19439
		IntVector3D* __for_begin; // 46489
		IntVector3D* __for_end; // 46489
		{
			IntVector3D vNeighborCoords; // 972
			{
				int nBitOffset; // 978
				uint64 nAdjust; // 979
				uint64 nNewState; // 980
				int nDepsRemaining; // 981
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 983
				}
				{
					uint8 nBlockFlags; // 987
					CalculateBlockFlags(const IntVector3D& vBlockIndex,
								int nWhichSweep,
								CFastSweepControllerBase* pSweeper);  // 987
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 988
					CInterlockedIntT<int, 4>::operator!=(
							int rhs);  // 507
					FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::QueueSweep(
							const QueuedSweepNode_t& node);  // 991
					QueuedSweepNode_t::Clear(); // 992
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 993
				}
				_M_ptr(const __uniq_ptr_impl<CInterlockedIntT<long long unsigned int, 8>, std::default_delete<CInterlockedIntT<long long u this); // 742
				get(const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long uns this); // 735
				operator[](const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long uns this,
						size_t __i);  // 484
				FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::BlockState(
						int nXBlock,
						int nYBlock,
						int nZBlock);  // 489
				FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::BlockState(
						IntVector3D vBlockIndex);  // 980
				ThreadInterlockedExchangeAdd64(volatile int64* p,
								int64 value);  // 663
				CInterlockedIntT<long long unsigned int, 8>::AtomicAdd(
						long long unsigned int add);  // 252
				AtomicSub(CInterlockedUInt64& x,
						uint64 nIncrement);  // 980
			}
			IntVector3D::operator-=(
					const IntVector3D& rhs);  // 973
			CFastSweepControllerBase::BlockExists(
					IntVector3D vBlockIndex);  // 974
		}
		ArrayReference_t<IntVector3D>::ArrayReference_t(
				IntVector3D* pBase,
				int nCount);  // 199
		NeighborsAccessedDuringSweep(int nSweep); // 970
	}
	{
		IntVector3D vOfs; // 1002
		ArrayReference_t<IntVector3D>& __for_range; // 19439
		IntVector3D* __for_begin; // 46489
		IntVector3D* __for_end; // 46489
		{
			IntVector3D vNeighborCoords; // 1004
			{
				int nBitOffset; // 1010
				uint64 nAdjust; // 1011
				uint64 nNewState; // 1012
				int nDepsRemaining; // 1013
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1015
				}
				{
					uint8 nBlockFlags; // 1019
					CalculateBlockFlags(const IntVector3D& vBlockIndex,
								int nWhichSweep,
								CFastSweepControllerBase* pSweeper);  // 1019
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 1020
					CInterlockedIntT<int, 4>::operator!=(
							int rhs);  // 507
					FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::QueueSweep(
							const QueuedSweepNode_t& node);  // 1023
					QueuedSweepNode_t::Clear(); // 1024
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 1025
				}
				_M_ptr(const __uniq_ptr_impl<CInterlockedIntT<long long unsigned int, 8>, std::default_delete<CInterlockedIntT<long long u this); // 742
				get(const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long uns this); // 735
				operator[](const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long uns this,
						size_t __i);  // 484
				FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::BlockState(
						int nXBlock,
						int nYBlock,
						int nZBlock);  // 489
				FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::BlockState(
						IntVector3D vBlockIndex);  // 1012
				ThreadInterlockedExchangeAdd64(volatile int64* p,
								int64 value);  // 663
				CInterlockedIntT<long long unsigned int, 8>::AtomicAdd(
						long long unsigned int add);  // 252
				AtomicSub(CInterlockedUInt64& x,
						uint64 nIncrement);  // 1012
			}
			IntVector3D::operator+=(
					const IntVector3D& rhs);  // 1005
			CFastSweepControllerBase::BlockExists(
					IntVector3D vBlockIndex);  // 1006
		}
	}
} /* size: 1658, variables: 1 */

// <01AEBE9D> ../public/tier0/fastsweep.h:938
// variables: 29
// function calls: 45
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::ProcessFinishedSweep(IntVector3D vBlockIndex, int nWhichSweep, QueuedSweepNode_t& queueOut)
{
	const char   __FUNCTION__; // 47128
	{
		int nBitOffset; // 945
		uint64 nOurAdjustment; // 947
		uint64 nNewValue; // 949
		int nCountRemaining; // 952
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 953
		}
		{
			uint8 nBlockFlags; // 958
			CalculateBlockFlags(const IntVector3D& vBlockIndex,
						int nWhichSweep,
						CFastSweepControllerBase* pSweeper);  // 958
			QueuedSweepNode_t::IsFull(); // 91
			QueuedSweepNode_t::QueueSweep(
					const IntVector3D& vBlockIndex,
					int nWhichSweep,
					uint8 nBlockFlags);  // 959
			FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::QueueSweep(
					const QueuedSweepNode_t& node);  // 962
			QueuedSweepNode_t::Clear(); // 963
			QueuedSweepNode_t::IsFull(); // 91
			QueuedSweepNode_t::QueueSweep(
					const IntVector3D& vBlockIndex,
					int nWhichSweep,
					uint8 nBlockFlags);  // 964
		}
		__uniq_ptr_impl<long long unsigned int, std::default_delete<long long unsigned int []> >::_M_ptr(); // 742
		unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::get(); // 735
		unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::operator[](
				size_t __i);  // 484
		FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::BlockState(
				int nXBlock,
				int nYBlock,
				int nZBlock);  // 489
		FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::BlockState(
				IntVector3D vBlockIndex);  // 949
		AtomicSub(AtomicUInt64_t& x,
				uint64 nIncrement);  // 949
	}
	{
		IntVector3D vOfs; // 970
		ArrayReference_t<IntVector3D>& __for_range; // 19439
		IntVector3D* __for_begin; // 46489
		IntVector3D* __for_end; // 46489
		{
			IntVector3D vNeighborCoords; // 972
			{
				int nBitOffset; // 978
				uint64 nAdjust; // 979
				uint64 nNewState; // 980
				int nDepsRemaining; // 981
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 983
				}
				{
					uint8 nBlockFlags; // 987
					CalculateBlockFlags(const IntVector3D& vBlockIndex,
								int nWhichSweep,
								CFastSweepControllerBase* pSweeper);  // 987
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 988
					FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::QueueSweep(
							const QueuedSweepNode_t& node);  // 991
					QueuedSweepNode_t::Clear(); // 992
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 993
				}
				__uniq_ptr_impl<long long unsigned int, std::default_delete<long long unsigned int []> >::_M_ptr(); // 742
				unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::get(); // 735
				unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::operator[](
						size_t __i);  // 484
				FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::BlockState(
						int nXBlock,
						int nYBlock,
						int nZBlock);  // 489
				FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::BlockState(
						IntVector3D vBlockIndex);  // 980
				AtomicSub(AtomicUInt64_t& x,
						uint64 nIncrement);  // 980
			}
			IntVector3D::operator-=(
					const IntVector3D& rhs);  // 973
			CFastSweepControllerBase::BlockExists(
					IntVector3D vBlockIndex);  // 974
		}
		ArrayReference_t<IntVector3D>::ArrayReference_t(
				IntVector3D* pBase,
				int nCount);  // 199
		NeighborsAccessedDuringSweep(int nSweep); // 970
	}
	{
		IntVector3D vOfs; // 1002
		ArrayReference_t<IntVector3D>& __for_range; // 19439
		IntVector3D* __for_begin; // 46489
		IntVector3D* __for_end; // 46489
		{
			IntVector3D vNeighborCoords; // 1004
			{
				int nBitOffset; // 1010
				uint64 nAdjust; // 1011
				uint64 nNewState; // 1012
				int nDepsRemaining; // 1013
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1015
				}
				{
					uint8 nBlockFlags; // 1019
					CalculateBlockFlags(const IntVector3D& vBlockIndex,
								int nWhichSweep,
								CFastSweepControllerBase* pSweeper);  // 1019
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 1020
					FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::QueueSweep(
							const QueuedSweepNode_t& node);  // 1023
					QueuedSweepNode_t::Clear(); // 1024
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 1025
				}
				__uniq_ptr_impl<long long unsigned int, std::default_delete<long long unsigned int []> >::_M_ptr(); // 742
				unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::get(); // 735
				unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::operator[](
						size_t __i);  // 484
				FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::BlockState(
						int nXBlock,
						int nYBlock,
						int nZBlock);  // 489
				FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::BlockState(
						IntVector3D vBlockIndex);  // 1012
				AtomicSub(AtomicUInt64_t& x,
						uint64 nIncrement);  // 1012
			}
			IntVector3D::operator+=(
					const IntVector3D& rhs);  // 1005
			CFastSweepControllerBase::BlockExists(
					IntVector3D vBlockIndex);  // 1006
		}
	}
} /* size: 0, variables: 1 */

// <00976B58> ../public/tier0/fastsweep.h:938
// variables: 29
// function calls: 54
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::ProcessFinishedSweep(IntVector3D vBlockIndex, int nWhichSweep, QueuedSweepNode_t& queueOut)
{
	const char   __FUNCTION__; // 39848
	{
		int nBitOffset; // 945
		uint64 nOurAdjustment; // 947
		uint64 nNewValue; // 949
		int nCountRemaining; // 952
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 953
		}
		{
			uint8 nBlockFlags; // 958
			CalculateBlockFlags(const IntVector3D& vBlockIndex,
						int nWhichSweep,
						CFastSweepControllerBase* pSweeper);  // 958
			QueuedSweepNode_t::IsFull(); // 91
			QueuedSweepNode_t::QueueSweep(
					const IntVector3D& vBlockIndex,
					int nWhichSweep,
					uint8 nBlockFlags);  // 959
			CInterlockedIntT<int, 4>::operator!=(
					int rhs);  // 507
			FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::QueueSweep(
					const QueuedSweepNode_t& node);  // 962
			QueuedSweepNode_t::Clear(); // 963
			QueuedSweepNode_t::IsFull(); // 91
			QueuedSweepNode_t::QueueSweep(
					const IntVector3D& vBlockIndex,
					int nWhichSweep,
					uint8 nBlockFlags);  // 964
		}
		_M_ptr(const __uniq_ptr_impl<CInterlockedIntT<long long unsigned int, 8>, std::default_delete<CInterlockedIntT<long long u this); // 742
		get(const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long uns this); // 735
		operator[](const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long uns this,
				size_t __i);  // 484
		FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::BlockState(
				int nXBlock,
				int nYBlock,
				int nZBlock);  // 489
		FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::BlockState(
				IntVector3D vBlockIndex);  // 949
		ThreadInterlockedExchangeAdd64(volatile int64* p,
						int64 value);  // 663
		CInterlockedIntT<long long unsigned int, 8>::AtomicAdd(
				long long unsigned int add);  // 252
		AtomicSub(CInterlockedUInt64& x,
				uint64 nIncrement);  // 949
	}
	{
		IntVector3D vOfs; // 970
		ArrayReference_t<IntVector3D>& __for_range; // 12159
		IntVector3D* __for_begin; // 39209
		IntVector3D* __for_end; // 39209
		{
			IntVector3D vNeighborCoords; // 972
			{
				int nBitOffset; // 978
				uint64 nAdjust; // 979
				uint64 nNewState; // 980
				int nDepsRemaining; // 981
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 983
				}
				{
					uint8 nBlockFlags; // 987
					CalculateBlockFlags(const IntVector3D& vBlockIndex,
								int nWhichSweep,
								CFastSweepControllerBase* pSweeper);  // 987
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 988
					CInterlockedIntT<int, 4>::operator!=(
							int rhs);  // 507
					FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::QueueSweep(
							const QueuedSweepNode_t& node);  // 991
					QueuedSweepNode_t::Clear(); // 992
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 993
				}
				_M_ptr(const __uniq_ptr_impl<CInterlockedIntT<long long unsigned int, 8>, std::default_delete<CInterlockedIntT<long long u this); // 742
				get(const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long uns this); // 735
				operator[](const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long uns this,
						size_t __i);  // 484
				FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::BlockState(
						int nXBlock,
						int nYBlock,
						int nZBlock);  // 489
				FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::BlockState(
						IntVector3D vBlockIndex);  // 980
				ThreadInterlockedExchangeAdd64(volatile int64* p,
								int64 value);  // 663
				CInterlockedIntT<long long unsigned int, 8>::AtomicAdd(
						long long unsigned int add);  // 252
				AtomicSub(CInterlockedUInt64& x,
						uint64 nIncrement);  // 980
			}
			IntVector3D::operator-=(
					const IntVector3D& rhs);  // 973
			CFastSweepControllerBase::BlockExists(
					IntVector3D vBlockIndex);  // 974
		}
		ArrayReference_t<IntVector3D>::ArrayReference_t(
				IntVector3D* pBase,
				int nCount);  // 199
		NeighborsAccessedDuringSweep(int nSweep); // 970
	}
	{
		IntVector3D vOfs; // 1002
		ArrayReference_t<IntVector3D>& __for_range; // 12159
		IntVector3D* __for_begin; // 39209
		IntVector3D* __for_end; // 39209
		{
			IntVector3D vNeighborCoords; // 1004
			{
				int nBitOffset; // 1010
				uint64 nAdjust; // 1011
				uint64 nNewState; // 1012
				int nDepsRemaining; // 1013
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1015
				}
				{
					uint8 nBlockFlags; // 1019
					CalculateBlockFlags(const IntVector3D& vBlockIndex,
								int nWhichSweep,
								CFastSweepControllerBase* pSweeper);  // 1019
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 1020
					CInterlockedIntT<int, 4>::operator!=(
							int rhs);  // 507
					FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::QueueSweep(
							const QueuedSweepNode_t& node);  // 1023
					QueuedSweepNode_t::Clear(); // 1024
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 1025
				}
				_M_ptr(const __uniq_ptr_impl<CInterlockedIntT<long long unsigned int, 8>, std::default_delete<CInterlockedIntT<long long u this); // 742
				get(const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long uns this); // 735
				operator[](const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long uns this,
						size_t __i);  // 484
				FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::BlockState(
						int nXBlock,
						int nYBlock,
						int nZBlock);  // 489
				FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::BlockState(
						IntVector3D vBlockIndex);  // 1012
				ThreadInterlockedExchangeAdd64(volatile int64* p,
								int64 value);  // 663
				CInterlockedIntT<long long unsigned int, 8>::AtomicAdd(
						long long unsigned int add);  // 252
				AtomicSub(CInterlockedUInt64& x,
						uint64 nIncrement);  // 1012
			}
			IntVector3D::operator+=(
					const IntVector3D& rhs);  // 1005
			CFastSweepControllerBase::BlockExists(
					IntVector3D vBlockIndex);  // 1006
		}
	}
} /* size: 0, variables: 1 */

// <0097557E> ../public/tier0/fastsweep.h:938
// variables: 29
// function calls: 45
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::ProcessFinishedSweep(IntVector3D vBlockIndex, int nWhichSweep, QueuedSweepNode_t& queueOut)
{
	const char   __FUNCTION__; // 39848
	{
		int nBitOffset; // 945
		uint64 nOurAdjustment; // 947
		uint64 nNewValue; // 949
		int nCountRemaining; // 952
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 953
		}
		{
			uint8 nBlockFlags; // 958
			CalculateBlockFlags(const IntVector3D& vBlockIndex,
						int nWhichSweep,
						CFastSweepControllerBase* pSweeper);  // 958
			QueuedSweepNode_t::IsFull(); // 91
			QueuedSweepNode_t::QueueSweep(
					const IntVector3D& vBlockIndex,
					int nWhichSweep,
					uint8 nBlockFlags);  // 959
			FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::QueueSweep(
					const QueuedSweepNode_t& node);  // 962
			QueuedSweepNode_t::Clear(); // 963
			QueuedSweepNode_t::IsFull(); // 91
			QueuedSweepNode_t::QueueSweep(
					const IntVector3D& vBlockIndex,
					int nWhichSweep,
					uint8 nBlockFlags);  // 964
		}
		__uniq_ptr_impl<long long unsigned int, std::default_delete<long long unsigned int []> >::_M_ptr(); // 742
		unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::get(); // 735
		unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::operator[](
				size_t __i);  // 484
		FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::BlockState(
				int nXBlock,
				int nYBlock,
				int nZBlock);  // 489
		FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::BlockState(
				IntVector3D vBlockIndex);  // 949
		AtomicSub(AtomicUInt64_t& x,
				uint64 nIncrement);  // 949
	}
	{
		IntVector3D vOfs; // 970
		ArrayReference_t<IntVector3D>& __for_range; // 12159
		IntVector3D* __for_begin; // 39209
		IntVector3D* __for_end; // 39209
		{
			IntVector3D vNeighborCoords; // 972
			{
				int nBitOffset; // 978
				uint64 nAdjust; // 979
				uint64 nNewState; // 980
				int nDepsRemaining; // 981
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 983
				}
				{
					uint8 nBlockFlags; // 987
					CalculateBlockFlags(const IntVector3D& vBlockIndex,
								int nWhichSweep,
								CFastSweepControllerBase* pSweeper);  // 987
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 988
					FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::QueueSweep(
							const QueuedSweepNode_t& node);  // 991
					QueuedSweepNode_t::Clear(); // 992
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 993
				}
				__uniq_ptr_impl<long long unsigned int, std::default_delete<long long unsigned int []> >::_M_ptr(); // 742
				unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::get(); // 735
				unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::operator[](
						size_t __i);  // 484
				FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::BlockState(
						int nXBlock,
						int nYBlock,
						int nZBlock);  // 489
				FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::BlockState(
						IntVector3D vBlockIndex);  // 980
				AtomicSub(AtomicUInt64_t& x,
						uint64 nIncrement);  // 980
			}
			IntVector3D::operator-=(
					const IntVector3D& rhs);  // 973
			CFastSweepControllerBase::BlockExists(
					IntVector3D vBlockIndex);  // 974
		}
		ArrayReference_t<IntVector3D>::ArrayReference_t(
				IntVector3D* pBase,
				int nCount);  // 199
		NeighborsAccessedDuringSweep(int nSweep); // 970
	}
	{
		IntVector3D vOfs; // 1002
		ArrayReference_t<IntVector3D>& __for_range; // 12159
		IntVector3D* __for_begin; // 39209
		IntVector3D* __for_end; // 39209
		{
			IntVector3D vNeighborCoords; // 1004
			{
				int nBitOffset; // 1010
				uint64 nAdjust; // 1011
				uint64 nNewState; // 1012
				int nDepsRemaining; // 1013
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1015
				}
				{
					uint8 nBlockFlags; // 1019
					CalculateBlockFlags(const IntVector3D& vBlockIndex,
								int nWhichSweep,
								CFastSweepControllerBase* pSweeper);  // 1019
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 1020
					FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::QueueSweep(
							const QueuedSweepNode_t& node);  // 1023
					QueuedSweepNode_t::Clear(); // 1024
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 1025
				}
				__uniq_ptr_impl<long long unsigned int, std::default_delete<long long unsigned int []> >::_M_ptr(); // 742
				unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::get(); // 735
				unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::operator[](
						size_t __i);  // 484
				FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::BlockState(
						int nXBlock,
						int nYBlock,
						int nZBlock);  // 489
				FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::BlockState(
						IntVector3D vBlockIndex);  // 1012
				AtomicSub(AtomicUInt64_t& x,
						uint64 nIncrement);  // 1012
			}
			IntVector3D::operator+=(
					const IntVector3D& rhs);  // 1005
			CFastSweepControllerBase::BlockExists(
					IntVector3D vBlockIndex);  // 1006
		}
	}
} /* size: 0, variables: 1 */

// <00974081> ../public/tier0/fastsweep.h:938
// variables: 29
// function calls: 45
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::ProcessFinishedSweep(IntVector3D vBlockIndex, int nWhichSweep, QueuedSweepNode_t& queueOut)
{
	const char   __FUNCTION__; // 39848
	{
		int nBitOffset; // 945
		uint64 nOurAdjustment; // 947
		uint64 nNewValue; // 949
		int nCountRemaining; // 952
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 953
		}
		{
			uint8 nBlockFlags; // 958
			CalculateBlockFlags(const IntVector3D& vBlockIndex,
						int nWhichSweep,
						CFastSweepControllerBase* pSweeper);  // 958
			QueuedSweepNode_t::IsFull(); // 91
			QueuedSweepNode_t::QueueSweep(
					const IntVector3D& vBlockIndex,
					int nWhichSweep,
					uint8 nBlockFlags);  // 959
			FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::QueueSweep(
					const QueuedSweepNode_t& node);  // 962
			QueuedSweepNode_t::Clear(); // 963
			QueuedSweepNode_t::IsFull(); // 91
			QueuedSweepNode_t::QueueSweep(
					const IntVector3D& vBlockIndex,
					int nWhichSweep,
					uint8 nBlockFlags);  // 964
		}
		__uniq_ptr_impl<long long unsigned int, std::default_delete<long long unsigned int []> >::_M_ptr(); // 742
		unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::get(); // 735
		unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::operator[](
				size_t __i);  // 484
		FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::BlockState(
				int nXBlock,
				int nYBlock,
				int nZBlock);  // 489
		FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::BlockState(
				IntVector3D vBlockIndex);  // 949
		AtomicSub(AtomicUInt64_t& x,
				uint64 nIncrement);  // 949
	}
	{
		IntVector3D vOfs; // 970
		ArrayReference_t<IntVector3D>& __for_range; // 12159
		IntVector3D* __for_begin; // 39209
		IntVector3D* __for_end; // 39209
		{
			IntVector3D vNeighborCoords; // 972
			{
				int nBitOffset; // 978
				uint64 nAdjust; // 979
				uint64 nNewState; // 980
				int nDepsRemaining; // 981
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 983
				}
				{
					uint8 nBlockFlags; // 987
					CalculateBlockFlags(const IntVector3D& vBlockIndex,
								int nWhichSweep,
								CFastSweepControllerBase* pSweeper);  // 987
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 988
					FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::QueueSweep(
							const QueuedSweepNode_t& node);  // 991
					QueuedSweepNode_t::Clear(); // 992
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 993
				}
				__uniq_ptr_impl<long long unsigned int, std::default_delete<long long unsigned int []> >::_M_ptr(); // 742
				unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::get(); // 735
				unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::operator[](
						size_t __i);  // 484
				FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::BlockState(
						int nXBlock,
						int nYBlock,
						int nZBlock);  // 489
				FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::BlockState(
						IntVector3D vBlockIndex);  // 980
				AtomicSub(AtomicUInt64_t& x,
						uint64 nIncrement);  // 980
			}
			IntVector3D::operator-=(
					const IntVector3D& rhs);  // 973
			CFastSweepControllerBase::BlockExists(
					IntVector3D vBlockIndex);  // 974
		}
		ArrayReference_t<IntVector3D>::ArrayReference_t(
				IntVector3D* pBase,
				int nCount);  // 199
		NeighborsAccessedDuringSweep(int nSweep); // 970
	}
	{
		IntVector3D vOfs; // 1002
		ArrayReference_t<IntVector3D>& __for_range; // 12159
		IntVector3D* __for_begin; // 39209
		IntVector3D* __for_end; // 39209
		{
			IntVector3D vNeighborCoords; // 1004
			{
				int nBitOffset; // 1010
				uint64 nAdjust; // 1011
				uint64 nNewState; // 1012
				int nDepsRemaining; // 1013
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1015
				}
				{
					uint8 nBlockFlags; // 1019
					CalculateBlockFlags(const IntVector3D& vBlockIndex,
								int nWhichSweep,
								CFastSweepControllerBase* pSweeper);  // 1019
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 1020
					FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::QueueSweep(
							const QueuedSweepNode_t& node);  // 1023
					QueuedSweepNode_t::Clear(); // 1024
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 1025
				}
				__uniq_ptr_impl<long long unsigned int, std::default_delete<long long unsigned int []> >::_M_ptr(); // 742
				unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::get(); // 735
				unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::operator[](
						size_t __i);  // 484
				FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::BlockState(
						int nXBlock,
						int nYBlock,
						int nZBlock);  // 489
				FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::BlockState(
						IntVector3D vBlockIndex);  // 1012
				AtomicSub(AtomicUInt64_t& x,
						uint64 nIncrement);  // 1012
			}
			IntVector3D::operator+=(
					const IntVector3D& rhs);  // 1005
			CFastSweepControllerBase::BlockExists(
					IntVector3D vBlockIndex);  // 1006
		}
	}
} /* size: 0, variables: 1 */

// <00972AF6> ../public/tier0/fastsweep.h:938
// variables: 29
// function calls: 54
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::ProcessFinishedSweep(IntVector3D vBlockIndex, int nWhichSweep, QueuedSweepNode_t& queueOut)
{
	const char   __FUNCTION__; // 39848
	{
		int nBitOffset; // 945
		uint64 nOurAdjustment; // 947
		uint64 nNewValue; // 949
		int nCountRemaining; // 952
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 953
		}
		{
			uint8 nBlockFlags; // 958
			CalculateBlockFlags(const IntVector3D& vBlockIndex,
						int nWhichSweep,
						CFastSweepControllerBase* pSweeper);  // 958
			QueuedSweepNode_t::IsFull(); // 91
			QueuedSweepNode_t::QueueSweep(
					const IntVector3D& vBlockIndex,
					int nWhichSweep,
					uint8 nBlockFlags);  // 959
			CInterlockedIntT<int, 4>::operator!=(
					int rhs);  // 507
			FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::QueueSweep(
					const QueuedSweepNode_t& node);  // 962
			QueuedSweepNode_t::Clear(); // 963
			QueuedSweepNode_t::IsFull(); // 91
			QueuedSweepNode_t::QueueSweep(
					const IntVector3D& vBlockIndex,
					int nWhichSweep,
					uint8 nBlockFlags);  // 964
		}
		_M_ptr(const __uniq_ptr_impl<CInterlockedIntT<long long unsigned int, 8>, std::default_delete<CInterlockedIntT<long long u this); // 742
		get(const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long uns this); // 735
		operator[](const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long uns this,
				size_t __i);  // 484
		FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::BlockState(
				int nXBlock,
				int nYBlock,
				int nZBlock);  // 489
		FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::BlockState(
				IntVector3D vBlockIndex);  // 949
		ThreadInterlockedExchangeAdd64(volatile int64* p,
						int64 value);  // 663
		CInterlockedIntT<long long unsigned int, 8>::AtomicAdd(
				long long unsigned int add);  // 252
		AtomicSub(CInterlockedUInt64& x,
				uint64 nIncrement);  // 949
	}
	{
		IntVector3D vOfs; // 970
		ArrayReference_t<IntVector3D>& __for_range; // 12159
		IntVector3D* __for_begin; // 39209
		IntVector3D* __for_end; // 39209
		{
			IntVector3D vNeighborCoords; // 972
			{
				int nBitOffset; // 978
				uint64 nAdjust; // 979
				uint64 nNewState; // 980
				int nDepsRemaining; // 981
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 983
				}
				{
					uint8 nBlockFlags; // 987
					CalculateBlockFlags(const IntVector3D& vBlockIndex,
								int nWhichSweep,
								CFastSweepControllerBase* pSweeper);  // 987
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 988
					CInterlockedIntT<int, 4>::operator!=(
							int rhs);  // 507
					FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::QueueSweep(
							const QueuedSweepNode_t& node);  // 991
					QueuedSweepNode_t::Clear(); // 992
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 993
				}
				_M_ptr(const __uniq_ptr_impl<CInterlockedIntT<long long unsigned int, 8>, std::default_delete<CInterlockedIntT<long long u this); // 742
				get(const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long uns this); // 735
				operator[](const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long uns this,
						size_t __i);  // 484
				FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::BlockState(
						int nXBlock,
						int nYBlock,
						int nZBlock);  // 489
				FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::BlockState(
						IntVector3D vBlockIndex);  // 980
				ThreadInterlockedExchangeAdd64(volatile int64* p,
								int64 value);  // 663
				CInterlockedIntT<long long unsigned int, 8>::AtomicAdd(
						long long unsigned int add);  // 252
				AtomicSub(CInterlockedUInt64& x,
						uint64 nIncrement);  // 980
			}
			IntVector3D::operator-=(
					const IntVector3D& rhs);  // 973
			CFastSweepControllerBase::BlockExists(
					IntVector3D vBlockIndex);  // 974
		}
		ArrayReference_t<IntVector3D>::ArrayReference_t(
				IntVector3D* pBase,
				int nCount);  // 199
		NeighborsAccessedDuringSweep(int nSweep); // 970
	}
	{
		IntVector3D vOfs; // 1002
		ArrayReference_t<IntVector3D>& __for_range; // 12159
		IntVector3D* __for_begin; // 39209
		IntVector3D* __for_end; // 39209
		{
			IntVector3D vNeighborCoords; // 1004
			{
				int nBitOffset; // 1010
				uint64 nAdjust; // 1011
				uint64 nNewState; // 1012
				int nDepsRemaining; // 1013
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1015
				}
				{
					uint8 nBlockFlags; // 1019
					CalculateBlockFlags(const IntVector3D& vBlockIndex,
								int nWhichSweep,
								CFastSweepControllerBase* pSweeper);  // 1019
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 1020
					CInterlockedIntT<int, 4>::operator!=(
							int rhs);  // 507
					FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::QueueSweep(
							const QueuedSweepNode_t& node);  // 1023
					QueuedSweepNode_t::Clear(); // 1024
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 1025
				}
				_M_ptr(const __uniq_ptr_impl<CInterlockedIntT<long long unsigned int, 8>, std::default_delete<CInterlockedIntT<long long u this); // 742
				get(const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long uns this); // 735
				operator[](const unique_ptr<CInterlockedIntT<long long unsigned int, 8> [], std::default_delete<CInterlockedIntT<long long uns this,
						size_t __i);  // 484
				FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::BlockState(
						int nXBlock,
						int nYBlock,
						int nZBlock);  // 489
				FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::BlockState(
						IntVector3D vBlockIndex);  // 1012
				ThreadInterlockedExchangeAdd64(volatile int64* p,
								int64 value);  // 663
				CInterlockedIntT<long long unsigned int, 8>::AtomicAdd(
						long long unsigned int add);  // 252
				AtomicSub(CInterlockedUInt64& x,
						uint64 nIncrement);  // 1012
			}
			IntVector3D::operator+=(
					const IntVector3D& rhs);  // 1005
			CFastSweepControllerBase::BlockExists(
					IntVector3D vBlockIndex);  // 1006
		}
	}
} /* size: 0, variables: 1 */

// <00971700> ../public/tier0/fastsweep.h:938
// variables: 29
// function calls: 45
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::ProcessFinishedSweep(IntVector3D vBlockIndex, int nWhichSweep, QueuedSweepNode_t& queueOut)
{
	const char   __FUNCTION__; // 39848
	{
		int nBitOffset; // 945
		uint64 nOurAdjustment; // 947
		uint64 nNewValue; // 949
		int nCountRemaining; // 952
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 953
		}
		{
			uint8 nBlockFlags; // 958
			CalculateBlockFlags(const IntVector3D& vBlockIndex,
						int nWhichSweep,
						CFastSweepControllerBase* pSweeper);  // 958
			QueuedSweepNode_t::IsFull(); // 91
			QueuedSweepNode_t::QueueSweep(
					const IntVector3D& vBlockIndex,
					int nWhichSweep,
					uint8 nBlockFlags);  // 959
			FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::QueueSweep(
					const QueuedSweepNode_t& node);  // 962
			QueuedSweepNode_t::Clear(); // 963
			QueuedSweepNode_t::IsFull(); // 91
			QueuedSweepNode_t::QueueSweep(
					const IntVector3D& vBlockIndex,
					int nWhichSweep,
					uint8 nBlockFlags);  // 964
		}
		__uniq_ptr_impl<long long unsigned int, std::default_delete<long long unsigned int []> >::_M_ptr(); // 742
		unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::get(); // 735
		unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::operator[](
				size_t __i);  // 484
		FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::BlockState(
				int nXBlock,
				int nYBlock,
				int nZBlock);  // 489
		FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::BlockState(
				IntVector3D vBlockIndex);  // 949
		AtomicSub(AtomicUInt64_t& x,
				uint64 nIncrement);  // 949
	}
	{
		IntVector3D vOfs; // 970
		ArrayReference_t<IntVector3D>& __for_range; // 12159
		IntVector3D* __for_begin; // 39209
		IntVector3D* __for_end; // 39209
		{
			IntVector3D vNeighborCoords; // 972
			{
				int nBitOffset; // 978
				uint64 nAdjust; // 979
				uint64 nNewState; // 980
				int nDepsRemaining; // 981
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 983
				}
				{
					uint8 nBlockFlags; // 987
					CalculateBlockFlags(const IntVector3D& vBlockIndex,
								int nWhichSweep,
								CFastSweepControllerBase* pSweeper);  // 987
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 988
					FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::QueueSweep(
							const QueuedSweepNode_t& node);  // 991
					QueuedSweepNode_t::Clear(); // 992
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 993
				}
				__uniq_ptr_impl<long long unsigned int, std::default_delete<long long unsigned int []> >::_M_ptr(); // 742
				unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::get(); // 735
				unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::operator[](
						size_t __i);  // 484
				FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::BlockState(
						int nXBlock,
						int nYBlock,
						int nZBlock);  // 489
				FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::BlockState(
						IntVector3D vBlockIndex);  // 980
				AtomicSub(AtomicUInt64_t& x,
						uint64 nIncrement);  // 980
			}
			IntVector3D::operator-=(
					const IntVector3D& rhs);  // 973
			CFastSweepControllerBase::BlockExists(
					IntVector3D vBlockIndex);  // 974
		}
		ArrayReference_t<IntVector3D>::ArrayReference_t(
				IntVector3D* pBase,
				int nCount);  // 199
		NeighborsAccessedDuringSweep(int nSweep); // 970
	}
	{
		IntVector3D vOfs; // 1002
		ArrayReference_t<IntVector3D>& __for_range; // 12159
		IntVector3D* __for_begin; // 39209
		IntVector3D* __for_end; // 39209
		{
			IntVector3D vNeighborCoords; // 1004
			{
				int nBitOffset; // 1010
				uint64 nAdjust; // 1011
				uint64 nNewState; // 1012
				int nDepsRemaining; // 1013
				{
					const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1015
				}
				{
					uint8 nBlockFlags; // 1019
					CalculateBlockFlags(const IntVector3D& vBlockIndex,
								int nWhichSweep,
								CFastSweepControllerBase* pSweeper);  // 1019
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 1020
					FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::QueueSweep(
							const QueuedSweepNode_t& node);  // 1023
					QueuedSweepNode_t::Clear(); // 1024
					QueuedSweepNode_t::IsFull(); // 91
					QueuedSweepNode_t::QueueSweep(
							const IntVector3D& vBlockIndex,
							int nWhichSweep,
							uint8 nBlockFlags);  // 1025
				}
				__uniq_ptr_impl<long long unsigned int, std::default_delete<long long unsigned int []> >::_M_ptr(); // 742
				unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::get(); // 735
				unique_ptr<long long unsigned int [], std::default_delete<long long unsigned int []> >::operator[](
						size_t __i);  // 484
				FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::BlockState(
						int nXBlock,
						int nYBlock,
						int nZBlock);  // 489
				FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::BlockState(
						IntVector3D vBlockIndex);  // 1012
				AtomicSub(AtomicUInt64_t& x,
						uint64 nIncrement);  // 1012
			}
			IntVector3D::operator+=(
					const IntVector3D& rhs);  // 1005
			CFastSweepControllerBase::BlockExists(
					IntVector3D vBlockIndex);  // 1006
		}
	}
} /* size: 0, variables: 1 */

// <044A577F> ../public/tier0/fastsweep.h:1033
// variables: 13
// function calls: 43
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::RunThread()
{
	const char   __FUNCTION__; // 6571
	QueuedSweepNode_t ourQueue; // 1036
	int nNumFinishedJobsToAccountFor; // 1038
	{
		QueuedSweepNode_t workItem; // 1042
		{
			int nNewValue; // 1052
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1051
			}
			CInterlockedIntT<int, 4>::operator int(); // 1051
			ThreadInterlockedExchangeAdd(volatile int32* p,
							int32 value);  // 660
			CInterlockedIntT<int, 4>::AtomicAdd(
					int add);  // 257
			AtomicSub(AtomicInt32_t& x,
					int nIncrement);  // 1052
		}
		{
			int i; // 1081
			{
				int o; // 1087
			}
		}
		{
			int i; // 1105
			QueuedSweepNode_t::Count(); // 1105
			IntVector3D::IntVector3D(); // 301
			IntVector3D::IntVector3D(); // 301
			GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
			IntAABB_t::IntAABB_t(); // 419
			{
				int i; // 420
			}
			CFastSweepControllerBase::BlockBounds(
					IntVector3D vBlockIndex);  // 521
			IntVector3D::IntVector3D(); // 522
			{
				int nAxis; // 527
			}
			FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::ExecuteSweep(
					IntVector3D vBlockIndex,
					int nWhichSweep);  // 1108
		}
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<QueuedSweepNode_t, false>::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<QueuedSweepNode_t, false>::PopItem(
			QueuedSweepNode_t* pResult);  // 1047
		QueuedSweepNode_t::IsEmpty(); // 1060
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 582
		CInterlockedIntT<int, 4>::operator++(
				int);  // 1062
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<QueuedSweepNode_t, false>::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<QueuedSweepNode_t, false>::PopItem(
			QueuedSweepNode_t* pResult);  // 1063
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 592
		CInterlockedIntT<int, 4>::operator--(
				int);  // 1065
		CThreadMultiWaitObject::GetWaitItem(
				ThreadMultiWaitItem_t* pItem,
				ThreadMultiWaitExtra_t* pExtra);  // 1782
		CThreadMultiWaitObject::Wait(
			uint32 nMillis);  // 1069
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 592
		CInterlockedIntT<int, 4>::operator--(
				int);  // 1070
		QueuedSweepNode_t::IsEmpty(); // 1044
		QueuedSweepNode_t::QueuedSweepNode_t(); // 1042
		{
			uint8 nNumBlocksToMove; // 118
			QueuedSweepNode_t::SpaceRemaining(); // 118
			{
				int i; // 119
			}
		}
		QueuedSweepNode_t::IsCompatibleWith(
				const QueuedSweepNode_t& other);  // 111
		QueuedSweepNode_t::FillFrom(
			QueuedSweepNode_t& other);  // 1077
	}
	QueuedSweepNode_t::QueuedSweepNode_t(); // 1036
	CInterlockedIntT<int, 4>::operator int(); // 1040
} /* size: 1644, variables: 3, inline expansions: 2 (18 bytes) */

// <044A2C7E> ../public/tier0/fastsweep.h:1033
// variables: 13
// function calls: 30
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::RunThread()
{
	const char   __FUNCTION__; // 6571
	QueuedSweepNode_t ourQueue; // 1036
	int nNumFinishedJobsToAccountFor; // 1038
	{
		QueuedSweepNode_t workItem; // 1042
		{
			int nNewValue; // 1052
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1051
			}
			AtomicSub(AtomicInt32_t& x,
					int nIncrement);  // 1052
		}
		{
			int i; // 1081
			{
				int o; // 1087
			}
		}
		{
			int i; // 1105
			QueuedSweepNode_t::Count(); // 1105
			IntVector3D::IntVector3D(); // 301
			IntVector3D::IntVector3D(); // 301
			GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
			IntAABB_t::IntAABB_t(); // 419
			{
				int i; // 420
			}
			CFastSweepControllerBase::BlockBounds(
					IntVector3D vBlockIndex);  // 521
			IntVector3D::IntVector3D(); // 522
			{
				int nAxis; // 527
			}
			FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::ExecuteSweep(
					IntVector3D vBlockIndex,
					int nWhichSweep);  // 1108
		}
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<QueuedSweepNode_t, false>::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<QueuedSweepNode_t, false>::PopItem(
			QueuedSweepNode_t* pResult);  // 1047
		QueuedSweepNode_t::IsEmpty(); // 1060
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<QueuedSweepNode_t, false>::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<QueuedSweepNode_t, false>::PopItem(
			QueuedSweepNode_t* pResult);  // 1063
		CThreadMultiWaitObject::GetWaitItem(
				ThreadMultiWaitItem_t* pItem,
				ThreadMultiWaitExtra_t* pExtra);  // 1782
		CThreadMultiWaitObject::Wait(
			uint32 nMillis);  // 1069
		QueuedSweepNode_t::IsEmpty(); // 1044
		QueuedSweepNode_t::QueuedSweepNode_t(); // 1042
		{
			uint8 nNumBlocksToMove; // 118
			QueuedSweepNode_t::SpaceRemaining(); // 118
			{
				int i; // 119
			}
		}
		QueuedSweepNode_t::IsCompatibleWith(
				const QueuedSweepNode_t& other);  // 111
		QueuedSweepNode_t::FillFrom(
			QueuedSweepNode_t& other);  // 1077
	}
	QueuedSweepNode_t::QueuedSweepNode_t(); // 1036
} /* size: 0, variables: 3, inline expansions: 1 (0 bytes) */

// <044A058A> ../public/tier0/fastsweep.h:1033
// variables: 11
// function calls: 23
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::RunThread()
{
	const char   __FUNCTION__; // 6571
	QueuedSweepNode_t ourQueue; // 1036
	int nNumFinishedJobsToAccountFor; // 1038
	{
		QueuedSweepNode_t workItem; // 1042
		{
			int nNewValue; // 1052
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1051
			}
			AtomicSub(AtomicInt32_t& x,
					int nIncrement);  // 1052
		}
		{
			int i; // 1081
			{
				int o; // 1087
			}
		}
		{
			int i; // 1105
			QueuedSweepNode_t::Count(); // 1105
		}
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<QueuedSweepNode_t, false>::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<QueuedSweepNode_t, false>::PopItem(
			QueuedSweepNode_t* pResult);  // 1047
		QueuedSweepNode_t::IsEmpty(); // 1060
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<QueuedSweepNode_t, false>::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<QueuedSweepNode_t, false>::PopItem(
			QueuedSweepNode_t* pResult);  // 1063
		CThreadMultiWaitObject::GetWaitItem(
				ThreadMultiWaitItem_t* pItem,
				ThreadMultiWaitExtra_t* pExtra);  // 1782
		CThreadMultiWaitObject::Wait(
			uint32 nMillis);  // 1069
		QueuedSweepNode_t::IsEmpty(); // 1044
		QueuedSweepNode_t::QueuedSweepNode_t(); // 1042
		{
			uint8 nNumBlocksToMove; // 118
			QueuedSweepNode_t::SpaceRemaining(); // 118
			{
				int i; // 119
			}
		}
		QueuedSweepNode_t::IsCompatibleWith(
				const QueuedSweepNode_t& other);  // 111
		QueuedSweepNode_t::FillFrom(
			QueuedSweepNode_t& other);  // 1077
	}
	QueuedSweepNode_t::QueuedSweepNode_t(); // 1036
} /* size: 0, variables: 3, inline expansions: 1 (0 bytes) */

// <0449D0BE> ../public/tier0/fastsweep.h:1033
// variables: 13
// function calls: 43
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::RunThread()
{
	const char   __FUNCTION__; // 6571
	QueuedSweepNode_t ourQueue; // 1036
	int nNumFinishedJobsToAccountFor; // 1038
	{
		QueuedSweepNode_t workItem; // 1042
		{
			int nNewValue; // 1052
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1051
			}
			CInterlockedIntT<int, 4>::operator int(); // 1051
			ThreadInterlockedExchangeAdd(volatile int32* p,
							int32 value);  // 660
			CInterlockedIntT<int, 4>::AtomicAdd(
					int add);  // 257
			AtomicSub(AtomicInt32_t& x,
					int nIncrement);  // 1052
		}
		{
			int i; // 1081
			{
				int o; // 1087
			}
		}
		{
			int i; // 1105
			QueuedSweepNode_t::Count(); // 1105
			IntVector3D::IntVector3D(); // 301
			IntVector3D::IntVector3D(); // 301
			GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
			IntAABB_t::IntAABB_t(); // 419
			{
				int i; // 420
			}
			CFastSweepControllerBase::BlockBounds(
					IntVector3D vBlockIndex);  // 521
			IntVector3D::IntVector3D(); // 522
			{
				int nAxis; // 527
			}
			FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::ExecuteSweep(
					IntVector3D vBlockIndex,
					int nWhichSweep);  // 1108
		}
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<QueuedSweepNode_t, false>::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<QueuedSweepNode_t, false>::PopItem(
			QueuedSweepNode_t* pResult);  // 1047
		QueuedSweepNode_t::IsEmpty(); // 1060
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 582
		CInterlockedIntT<int, 4>::operator++(
				int);  // 1062
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<QueuedSweepNode_t, false>::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<QueuedSweepNode_t, false>::PopItem(
			QueuedSweepNode_t* pResult);  // 1063
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 592
		CInterlockedIntT<int, 4>::operator--(
				int);  // 1065
		CThreadMultiWaitObject::GetWaitItem(
				ThreadMultiWaitItem_t* pItem,
				ThreadMultiWaitExtra_t* pExtra);  // 1782
		CThreadMultiWaitObject::Wait(
			uint32 nMillis);  // 1069
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 592
		CInterlockedIntT<int, 4>::operator--(
				int);  // 1070
		QueuedSweepNode_t::IsEmpty(); // 1044
		QueuedSweepNode_t::QueuedSweepNode_t(); // 1042
		{
			uint8 nNumBlocksToMove; // 118
			QueuedSweepNode_t::SpaceRemaining(); // 118
			{
				int i; // 119
			}
		}
		QueuedSweepNode_t::IsCompatibleWith(
				const QueuedSweepNode_t& other);  // 111
		QueuedSweepNode_t::FillFrom(
			QueuedSweepNode_t& other);  // 1077
	}
	QueuedSweepNode_t::QueuedSweepNode_t(); // 1036
	CInterlockedIntT<int, 4>::operator int(); // 1040
} /* size: 1610, variables: 3, inline expansions: 2 (18 bytes) */

// <04499A0C> ../public/tier0/fastsweep.h:1033
// variables: 13
// function calls: 42
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::RunThread()
{
	const char   __FUNCTION__; // 6571
	QueuedSweepNode_t ourQueue; // 1036
	int nNumFinishedJobsToAccountFor; // 1038
	{
		QueuedSweepNode_t workItem; // 1042
		{
			int nNewValue; // 1052
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1051
			}
			AtomicSub(AtomicInt32_t& x,
					int nIncrement);  // 1052
		}
		{
			int i; // 1081
			{
				int o; // 1087
			}
		}
		{
			int i; // 1105
			QueuedSweepNode_t::Count(); // 1105
			CSOAContainer::ElementPointer<float>(
						int nAttributeIdx,
						int nX,
						int nY,
						int nZ);  // 3816
			IntAABB_t::Width(); // 457
			IntAABB_t::Depth(); // 457
			IntAABB_t::Height(); // 457
			IntVector3D::IntVector3D(
					int nX,
					int nY,
					int nZ);  // 457
			IntAABB_t::Size(); // 3817
			CSOAContainer::ElementPointer<float>(
						int nAttributeIdx,
						int nX,
						int nY,
						int nZ);  // 3820
			CSOAContainer::ElementPointer<float>(
						int nAttributeIdx,
						int nX,
						int nY,
						int nZ);  // 3823
			CSOAContainer::ElementPointer<float>(
						int nAttributeIdx,
						int nX,
						int nY,
						int nZ);  // 3822
			CSOAContainer::ElementPointer<float>(
						int nAttributeIdx,
						int nX,
						int nY,
						int nZ);  // 3821
			IntVector3D::IntVector3D(
					int nX,
					int nY,
					int nZ);  // 3817
			CGutterFillingControls::ExecuteOnBlock(
					IntVector3D vBlockIndex,
					int nWhichSweep,
					const IntAABB_t& vBounds,
					IntVector3D vStart,
					CFastSweepControllerBase* pController,
					int nBoundaryMask);  // 544
			IntVector3D::IntVector3D(); // 301
			IntVector3D::IntVector3D(); // 301
			GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
			IntAABB_t::IntAABB_t(); // 419
			{
				int i; // 420
			}
			CFastSweepControllerBase::BlockBounds(
					IntVector3D vBlockIndex);  // 521
			IntVector3D::IntVector3D(); // 522
			{
				int nAxis; // 527
			}
			FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::ExecuteSweep(
					IntVector3D vBlockIndex,
					int nWhichSweep);  // 1108
		}
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<QueuedSweepNode_t, false>::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<QueuedSweepNode_t, false>::PopItem(
			QueuedSweepNode_t* pResult);  // 1047
		QueuedSweepNode_t::IsEmpty(); // 1060
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<QueuedSweepNode_t, false>::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<QueuedSweepNode_t, false>::PopItem(
			QueuedSweepNode_t* pResult);  // 1063
		CThreadMultiWaitObject::GetWaitItem(
				ThreadMultiWaitItem_t* pItem,
				ThreadMultiWaitExtra_t* pExtra);  // 1782
		CThreadMultiWaitObject::Wait(
			uint32 nMillis);  // 1069
		QueuedSweepNode_t::IsEmpty(); // 1044
		QueuedSweepNode_t::QueuedSweepNode_t(); // 1042
		{
			uint8 nNumBlocksToMove; // 118
			QueuedSweepNode_t::SpaceRemaining(); // 118
			{
				int i; // 119
			}
		}
		QueuedSweepNode_t::IsCompatibleWith(
				const QueuedSweepNode_t& other);  // 111
		QueuedSweepNode_t::FillFrom(
			QueuedSweepNode_t& other);  // 1077
	}
	QueuedSweepNode_t::QueuedSweepNode_t(); // 1036
} /* size: 0, variables: 3, inline expansions: 1 (0 bytes) */

// <01B00E91> ../public/tier0/fastsweep.h:1033
// variables: 13
// function calls: 43
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::RunThread()
{
	const char   __FUNCTION__; // 46960
	QueuedSweepNode_t ourQueue; // 1036
	int nNumFinishedJobsToAccountFor; // 1038
	{
		QueuedSweepNode_t workItem; // 1042
		{
			int nNewValue; // 1052
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1051
			}
			CInterlockedIntT<int, 4>::operator int(); // 1051
			ThreadInterlockedExchangeAdd(volatile int32* p,
							int32 value);  // 660
			CInterlockedIntT<int, 4>::AtomicAdd(
					int add);  // 257
			AtomicSub(AtomicInt32_t& x,
					int nIncrement);  // 1052
		}
		{
			int i; // 1081
			{
				int o; // 1087
			}
		}
		{
			int i; // 1105
			QueuedSweepNode_t::Count(); // 1105
			IntVector3D::IntVector3D(); // 301
			IntVector3D::IntVector3D(); // 301
			GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
			IntAABB_t::IntAABB_t(); // 419
			{
				int i; // 420
			}
			CFastSweepControllerBase::BlockBounds(
					IntVector3D vBlockIndex);  // 521
			IntVector3D::IntVector3D(); // 522
			{
				int nAxis; // 527
			}
			FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::ExecuteSweep(
					IntVector3D vBlockIndex,
					int nWhichSweep);  // 1108
		}
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<QueuedSweepNode_t, false>::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<QueuedSweepNode_t, false>::PopItem(
			QueuedSweepNode_t* pResult);  // 1047
		QueuedSweepNode_t::IsEmpty(); // 1060
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 582
		CInterlockedIntT<int, 4>::operator++(
				int);  // 1062
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<QueuedSweepNode_t, false>::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<QueuedSweepNode_t, false>::PopItem(
			QueuedSweepNode_t* pResult);  // 1063
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 592
		CInterlockedIntT<int, 4>::operator--(
				int);  // 1065
		CThreadMultiWaitObject::GetWaitItem(
				ThreadMultiWaitItem_t* pItem,
				ThreadMultiWaitExtra_t* pExtra);  // 1782
		CThreadMultiWaitObject::Wait(
			uint32 nMillis);  // 1069
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 592
		CInterlockedIntT<int, 4>::operator--(
				int);  // 1070
		QueuedSweepNode_t::IsEmpty(); // 1044
		QueuedSweepNode_t::QueuedSweepNode_t(); // 1042
		{
			uint8 nNumBlocksToMove; // 118
			QueuedSweepNode_t::SpaceRemaining(); // 118
			{
				int i; // 119
			}
		}
		QueuedSweepNode_t::IsCompatibleWith(
				const QueuedSweepNode_t& other);  // 111
		QueuedSweepNode_t::FillFrom(
			QueuedSweepNode_t& other);  // 1077
	}
	QueuedSweepNode_t::QueuedSweepNode_t(); // 1036
	CInterlockedIntT<int, 4>::operator int(); // 1040
} /* size: 1644, variables: 3, inline expansions: 2 (18 bytes) */

// <01AFE390> ../public/tier0/fastsweep.h:1033
// variables: 13
// function calls: 30
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::RunThread()
{
	const char   __FUNCTION__; // 46960
	QueuedSweepNode_t ourQueue; // 1036
	int nNumFinishedJobsToAccountFor; // 1038
	{
		QueuedSweepNode_t workItem; // 1042
		{
			int nNewValue; // 1052
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1051
			}
			AtomicSub(AtomicInt32_t& x,
					int nIncrement);  // 1052
		}
		{
			int i; // 1081
			{
				int o; // 1087
			}
		}
		{
			int i; // 1105
			QueuedSweepNode_t::Count(); // 1105
			IntVector3D::IntVector3D(); // 301
			IntVector3D::IntVector3D(); // 301
			GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
			IntAABB_t::IntAABB_t(); // 419
			{
				int i; // 420
			}
			CFastSweepControllerBase::BlockBounds(
					IntVector3D vBlockIndex);  // 521
			IntVector3D::IntVector3D(); // 522
			{
				int nAxis; // 527
			}
			FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::ExecuteSweep(
					IntVector3D vBlockIndex,
					int nWhichSweep);  // 1108
		}
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<QueuedSweepNode_t, false>::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<QueuedSweepNode_t, false>::PopItem(
			QueuedSweepNode_t* pResult);  // 1047
		QueuedSweepNode_t::IsEmpty(); // 1060
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<QueuedSweepNode_t, false>::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<QueuedSweepNode_t, false>::PopItem(
			QueuedSweepNode_t* pResult);  // 1063
		CThreadMultiWaitObject::GetWaitItem(
				ThreadMultiWaitItem_t* pItem,
				ThreadMultiWaitExtra_t* pExtra);  // 1782
		CThreadMultiWaitObject::Wait(
			uint32 nMillis);  // 1069
		QueuedSweepNode_t::IsEmpty(); // 1044
		QueuedSweepNode_t::QueuedSweepNode_t(); // 1042
		{
			uint8 nNumBlocksToMove; // 118
			QueuedSweepNode_t::SpaceRemaining(); // 118
			{
				int i; // 119
			}
		}
		QueuedSweepNode_t::IsCompatibleWith(
				const QueuedSweepNode_t& other);  // 111
		QueuedSweepNode_t::FillFrom(
			QueuedSweepNode_t& other);  // 1077
	}
	QueuedSweepNode_t::QueuedSweepNode_t(); // 1036
} /* size: 0, variables: 3, inline expansions: 1 (0 bytes) */

// <01AFBC9C> ../public/tier0/fastsweep.h:1033
// variables: 11
// function calls: 23
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::RunThread()
{
	const char   __FUNCTION__; // 46960
	QueuedSweepNode_t ourQueue; // 1036
	int nNumFinishedJobsToAccountFor; // 1038
	{
		QueuedSweepNode_t workItem; // 1042
		{
			int nNewValue; // 1052
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1051
			}
			AtomicSub(AtomicInt32_t& x,
					int nIncrement);  // 1052
		}
		{
			int i; // 1081
			{
				int o; // 1087
			}
		}
		{
			int i; // 1105
			QueuedSweepNode_t::Count(); // 1105
		}
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<QueuedSweepNode_t, false>::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<QueuedSweepNode_t, false>::PopItem(
			QueuedSweepNode_t* pResult);  // 1047
		QueuedSweepNode_t::IsEmpty(); // 1060
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<QueuedSweepNode_t, false>::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<QueuedSweepNode_t, false>::PopItem(
			QueuedSweepNode_t* pResult);  // 1063
		CThreadMultiWaitObject::GetWaitItem(
				ThreadMultiWaitItem_t* pItem,
				ThreadMultiWaitExtra_t* pExtra);  // 1782
		CThreadMultiWaitObject::Wait(
			uint32 nMillis);  // 1069
		QueuedSweepNode_t::IsEmpty(); // 1044
		QueuedSweepNode_t::QueuedSweepNode_t(); // 1042
		{
			uint8 nNumBlocksToMove; // 118
			QueuedSweepNode_t::SpaceRemaining(); // 118
			{
				int i; // 119
			}
		}
		QueuedSweepNode_t::IsCompatibleWith(
				const QueuedSweepNode_t& other);  // 111
		QueuedSweepNode_t::FillFrom(
			QueuedSweepNode_t& other);  // 1077
	}
	QueuedSweepNode_t::QueuedSweepNode_t(); // 1036
} /* size: 0, variables: 3, inline expansions: 1 (0 bytes) */

// <01AF87D0> ../public/tier0/fastsweep.h:1033
// variables: 13
// function calls: 43
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::RunThread()
{
	const char   __FUNCTION__; // 46960
	QueuedSweepNode_t ourQueue; // 1036
	int nNumFinishedJobsToAccountFor; // 1038
	{
		QueuedSweepNode_t workItem; // 1042
		{
			int nNewValue; // 1052
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1051
			}
			CInterlockedIntT<int, 4>::operator int(); // 1051
			ThreadInterlockedExchangeAdd(volatile int32* p,
							int32 value);  // 660
			CInterlockedIntT<int, 4>::AtomicAdd(
					int add);  // 257
			AtomicSub(AtomicInt32_t& x,
					int nIncrement);  // 1052
		}
		{
			int i; // 1081
			{
				int o; // 1087
			}
		}
		{
			int i; // 1105
			QueuedSweepNode_t::Count(); // 1105
			IntVector3D::IntVector3D(); // 301
			IntVector3D::IntVector3D(); // 301
			GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
			IntAABB_t::IntAABB_t(); // 419
			{
				int i; // 420
			}
			CFastSweepControllerBase::BlockBounds(
					IntVector3D vBlockIndex);  // 521
			IntVector3D::IntVector3D(); // 522
			{
				int nAxis; // 527
			}
			FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::ExecuteSweep(
					IntVector3D vBlockIndex,
					int nWhichSweep);  // 1108
		}
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<QueuedSweepNode_t, false>::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<QueuedSweepNode_t, false>::PopItem(
			QueuedSweepNode_t* pResult);  // 1047
		QueuedSweepNode_t::IsEmpty(); // 1060
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 582
		CInterlockedIntT<int, 4>::operator++(
				int);  // 1062
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<QueuedSweepNode_t, false>::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<QueuedSweepNode_t, false>::PopItem(
			QueuedSweepNode_t* pResult);  // 1063
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 592
		CInterlockedIntT<int, 4>::operator--(
				int);  // 1065
		CThreadMultiWaitObject::GetWaitItem(
				ThreadMultiWaitItem_t* pItem,
				ThreadMultiWaitExtra_t* pExtra);  // 1782
		CThreadMultiWaitObject::Wait(
			uint32 nMillis);  // 1069
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 592
		CInterlockedIntT<int, 4>::operator--(
				int);  // 1070
		QueuedSweepNode_t::IsEmpty(); // 1044
		QueuedSweepNode_t::QueuedSweepNode_t(); // 1042
		{
			uint8 nNumBlocksToMove; // 118
			QueuedSweepNode_t::SpaceRemaining(); // 118
			{
				int i; // 119
			}
		}
		QueuedSweepNode_t::IsCompatibleWith(
				const QueuedSweepNode_t& other);  // 111
		QueuedSweepNode_t::FillFrom(
			QueuedSweepNode_t& other);  // 1077
	}
	QueuedSweepNode_t::QueuedSweepNode_t(); // 1036
	CInterlockedIntT<int, 4>::operator int(); // 1040
} /* size: 1610, variables: 3, inline expansions: 2 (18 bytes) */

// <01AF511E> ../public/tier0/fastsweep.h:1033
// variables: 13
// function calls: 42
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::RunThread()
{
	const char   __FUNCTION__; // 46960
	QueuedSweepNode_t ourQueue; // 1036
	int nNumFinishedJobsToAccountFor; // 1038
	{
		QueuedSweepNode_t workItem; // 1042
		{
			int nNewValue; // 1052
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1051
			}
			AtomicSub(AtomicInt32_t& x,
					int nIncrement);  // 1052
		}
		{
			int i; // 1081
			{
				int o; // 1087
			}
		}
		{
			int i; // 1105
			QueuedSweepNode_t::Count(); // 1105
			CSOAContainer::ElementPointer<float>(
						int nAttributeIdx,
						int nX,
						int nY,
						int nZ);  // 3816
			IntAABB_t::Width(); // 457
			IntAABB_t::Depth(); // 457
			IntAABB_t::Height(); // 457
			IntVector3D::IntVector3D(
					int nX,
					int nY,
					int nZ);  // 457
			IntAABB_t::Size(); // 3817
			CSOAContainer::ElementPointer<float>(
						int nAttributeIdx,
						int nX,
						int nY,
						int nZ);  // 3820
			CSOAContainer::ElementPointer<float>(
						int nAttributeIdx,
						int nX,
						int nY,
						int nZ);  // 3823
			CSOAContainer::ElementPointer<float>(
						int nAttributeIdx,
						int nX,
						int nY,
						int nZ);  // 3822
			CSOAContainer::ElementPointer<float>(
						int nAttributeIdx,
						int nX,
						int nY,
						int nZ);  // 3821
			IntVector3D::IntVector3D(
					int nX,
					int nY,
					int nZ);  // 3817
			CGutterFillingControls::ExecuteOnBlock(
					IntVector3D vBlockIndex,
					int nWhichSweep,
					const IntAABB_t& vBounds,
					IntVector3D vStart,
					CFastSweepControllerBase* pController,
					int nBoundaryMask);  // 544
			IntVector3D::IntVector3D(); // 301
			IntVector3D::IntVector3D(); // 301
			GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
			IntAABB_t::IntAABB_t(); // 419
			{
				int i; // 420
			}
			CFastSweepControllerBase::BlockBounds(
					IntVector3D vBlockIndex);  // 521
			IntVector3D::IntVector3D(); // 522
			{
				int nAxis; // 527
			}
			FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::ExecuteSweep(
					IntVector3D vBlockIndex,
					int nWhichSweep);  // 1108
		}
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<QueuedSweepNode_t, false>::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<QueuedSweepNode_t, false>::PopItem(
			QueuedSweepNode_t* pResult);  // 1047
		QueuedSweepNode_t::IsEmpty(); // 1060
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<QueuedSweepNode_t, false>::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<QueuedSweepNode_t, false>::PopItem(
			QueuedSweepNode_t* pResult);  // 1063
		CThreadMultiWaitObject::GetWaitItem(
				ThreadMultiWaitItem_t* pItem,
				ThreadMultiWaitExtra_t* pExtra);  // 1782
		CThreadMultiWaitObject::Wait(
			uint32 nMillis);  // 1069
		QueuedSweepNode_t::IsEmpty(); // 1044
		QueuedSweepNode_t::QueuedSweepNode_t(); // 1042
		{
			uint8 nNumBlocksToMove; // 118
			QueuedSweepNode_t::SpaceRemaining(); // 118
			{
				int i; // 119
			}
		}
		QueuedSweepNode_t::IsCompatibleWith(
				const QueuedSweepNode_t& other);  // 111
		QueuedSweepNode_t::FillFrom(
			QueuedSweepNode_t& other);  // 1077
	}
	QueuedSweepNode_t::QueuedSweepNode_t(); // 1036
} /* size: 0, variables: 3, inline expansions: 1 (0 bytes) */

// <009866F4> ../public/tier0/fastsweep.h:1033
// variables: 13
// function calls: 43
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::RunThread()
{
	const char   __FUNCTION__; // 39680
	QueuedSweepNode_t ourQueue; // 1036
	int nNumFinishedJobsToAccountFor; // 1038
	{
		QueuedSweepNode_t workItem; // 1042
		{
			int nNewValue; // 1052
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1051
			}
			CInterlockedIntT<int, 4>::operator int(); // 1051
			ThreadInterlockedExchangeAdd(volatile int32* p,
							int32 value);  // 660
			CInterlockedIntT<int, 4>::AtomicAdd(
					int add);  // 257
			AtomicSub(AtomicInt32_t& x,
					int nIncrement);  // 1052
		}
		{
			int i; // 1081
			{
				int o; // 1087
			}
		}
		{
			int i; // 1105
			QueuedSweepNode_t::Count(); // 1105
			IntVector3D::IntVector3D(); // 301
			IntVector3D::IntVector3D(); // 301
			GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
			IntAABB_t::IntAABB_t(); // 419
			{
				int i; // 420
			}
			CFastSweepControllerBase::BlockBounds(
					IntVector3D vBlockIndex);  // 521
			IntVector3D::IntVector3D(); // 522
			{
				int nAxis; // 527
			}
			FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::ExecuteSweep(
					IntVector3D vBlockIndex,
					int nWhichSweep);  // 1108
		}
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<QueuedSweepNode_t, false>::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<QueuedSweepNode_t, false>::PopItem(
			QueuedSweepNode_t* pResult);  // 1047
		QueuedSweepNode_t::IsEmpty(); // 1060
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 582
		CInterlockedIntT<int, 4>::operator++(
				int);  // 1062
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<QueuedSweepNode_t, false>::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<QueuedSweepNode_t, false>::PopItem(
			QueuedSweepNode_t* pResult);  // 1063
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 592
		CInterlockedIntT<int, 4>::operator--(
				int);  // 1065
		CThreadMultiWaitObject::GetWaitItem(
				ThreadMultiWaitItem_t* pItem,
				ThreadMultiWaitExtra_t* pExtra);  // 1782
		CThreadMultiWaitObject::Wait(
			uint32 nMillis);  // 1069
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 592
		CInterlockedIntT<int, 4>::operator--(
				int);  // 1070
		QueuedSweepNode_t::IsEmpty(); // 1044
		QueuedSweepNode_t::QueuedSweepNode_t(); // 1042
		{
			uint8 nNumBlocksToMove; // 118
			QueuedSweepNode_t::SpaceRemaining(); // 118
			{
				int i; // 119
			}
		}
		QueuedSweepNode_t::IsCompatibleWith(
				const QueuedSweepNode_t& other);  // 111
		QueuedSweepNode_t::FillFrom(
			QueuedSweepNode_t& other);  // 1077
	}
	QueuedSweepNode_t::QueuedSweepNode_t(); // 1036
	CInterlockedIntT<int, 4>::operator int(); // 1040
} /* size: 0, variables: 3, inline expansions: 2 (0 bytes) */

// <00983BF3> ../public/tier0/fastsweep.h:1033
// variables: 13
// function calls: 30
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::RunThread()
{
	const char   __FUNCTION__; // 39680
	QueuedSweepNode_t ourQueue; // 1036
	int nNumFinishedJobsToAccountFor; // 1038
	{
		QueuedSweepNode_t workItem; // 1042
		{
			int nNewValue; // 1052
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1051
			}
			AtomicSub(AtomicInt32_t& x,
					int nIncrement);  // 1052
		}
		{
			int i; // 1081
			{
				int o; // 1087
			}
		}
		{
			int i; // 1105
			QueuedSweepNode_t::Count(); // 1105
			IntVector3D::IntVector3D(); // 301
			IntVector3D::IntVector3D(); // 301
			GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
			IntAABB_t::IntAABB_t(); // 419
			{
				int i; // 420
			}
			CFastSweepControllerBase::BlockBounds(
					IntVector3D vBlockIndex);  // 521
			IntVector3D::IntVector3D(); // 522
			{
				int nAxis; // 527
			}
			FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::ExecuteSweep(
					IntVector3D vBlockIndex,
					int nWhichSweep);  // 1108
		}
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<QueuedSweepNode_t, false>::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<QueuedSweepNode_t, false>::PopItem(
			QueuedSweepNode_t* pResult);  // 1047
		QueuedSweepNode_t::IsEmpty(); // 1060
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<QueuedSweepNode_t, false>::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<QueuedSweepNode_t, false>::PopItem(
			QueuedSweepNode_t* pResult);  // 1063
		CThreadMultiWaitObject::GetWaitItem(
				ThreadMultiWaitItem_t* pItem,
				ThreadMultiWaitExtra_t* pExtra);  // 1782
		CThreadMultiWaitObject::Wait(
			uint32 nMillis);  // 1069
		QueuedSweepNode_t::IsEmpty(); // 1044
		QueuedSweepNode_t::QueuedSweepNode_t(); // 1042
		{
			uint8 nNumBlocksToMove; // 118
			QueuedSweepNode_t::SpaceRemaining(); // 118
			{
				int i; // 119
			}
		}
		QueuedSweepNode_t::IsCompatibleWith(
				const QueuedSweepNode_t& other);  // 111
		QueuedSweepNode_t::FillFrom(
			QueuedSweepNode_t& other);  // 1077
	}
	QueuedSweepNode_t::QueuedSweepNode_t(); // 1036
} /* size: 0, variables: 3, inline expansions: 1 (0 bytes) */

// <009814FF> ../public/tier0/fastsweep.h:1033
// variables: 11
// function calls: 23
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::RunThread()
{
	const char   __FUNCTION__; // 39680
	QueuedSweepNode_t ourQueue; // 1036
	int nNumFinishedJobsToAccountFor; // 1038
	{
		QueuedSweepNode_t workItem; // 1042
		{
			int nNewValue; // 1052
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1051
			}
			AtomicSub(AtomicInt32_t& x,
					int nIncrement);  // 1052
		}
		{
			int i; // 1081
			{
				int o; // 1087
			}
		}
		{
			int i; // 1105
			QueuedSweepNode_t::Count(); // 1105
		}
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<QueuedSweepNode_t, false>::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<QueuedSweepNode_t, false>::PopItem(
			QueuedSweepNode_t* pResult);  // 1047
		QueuedSweepNode_t::IsEmpty(); // 1060
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<QueuedSweepNode_t, false>::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<QueuedSweepNode_t, false>::PopItem(
			QueuedSweepNode_t* pResult);  // 1063
		CThreadMultiWaitObject::GetWaitItem(
				ThreadMultiWaitItem_t* pItem,
				ThreadMultiWaitExtra_t* pExtra);  // 1782
		CThreadMultiWaitObject::Wait(
			uint32 nMillis);  // 1069
		QueuedSweepNode_t::IsEmpty(); // 1044
		QueuedSweepNode_t::QueuedSweepNode_t(); // 1042
		{
			uint8 nNumBlocksToMove; // 118
			QueuedSweepNode_t::SpaceRemaining(); // 118
			{
				int i; // 119
			}
		}
		QueuedSweepNode_t::IsCompatibleWith(
				const QueuedSweepNode_t& other);  // 111
		QueuedSweepNode_t::FillFrom(
			QueuedSweepNode_t& other);  // 1077
	}
	QueuedSweepNode_t::QueuedSweepNode_t(); // 1036
} /* size: 0, variables: 3, inline expansions: 1 (0 bytes) */

// <0097E033> ../public/tier0/fastsweep.h:1033
// variables: 13
// function calls: 43
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::RunThread()
{
	const char   __FUNCTION__; // 39680
	QueuedSweepNode_t ourQueue; // 1036
	int nNumFinishedJobsToAccountFor; // 1038
	{
		QueuedSweepNode_t workItem; // 1042
		{
			int nNewValue; // 1052
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1051
			}
			CInterlockedIntT<int, 4>::operator int(); // 1051
			ThreadInterlockedExchangeAdd(volatile int32* p,
							int32 value);  // 660
			CInterlockedIntT<int, 4>::AtomicAdd(
					int add);  // 257
			AtomicSub(AtomicInt32_t& x,
					int nIncrement);  // 1052
		}
		{
			int i; // 1081
			{
				int o; // 1087
			}
		}
		{
			int i; // 1105
			QueuedSweepNode_t::Count(); // 1105
			IntVector3D::IntVector3D(); // 301
			IntVector3D::IntVector3D(); // 301
			GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
			IntAABB_t::IntAABB_t(); // 419
			{
				int i; // 420
			}
			CFastSweepControllerBase::BlockBounds(
					IntVector3D vBlockIndex);  // 521
			IntVector3D::IntVector3D(); // 522
			{
				int nAxis; // 527
			}
			FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::ExecuteSweep(
					IntVector3D vBlockIndex,
					int nWhichSweep);  // 1108
		}
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<QueuedSweepNode_t, false>::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<QueuedSweepNode_t, false>::PopItem(
			QueuedSweepNode_t* pResult);  // 1047
		QueuedSweepNode_t::IsEmpty(); // 1060
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 582
		CInterlockedIntT<int, 4>::operator++(
				int);  // 1062
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<QueuedSweepNode_t, false>::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<QueuedSweepNode_t, false>::PopItem(
			QueuedSweepNode_t* pResult);  // 1063
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 592
		CInterlockedIntT<int, 4>::operator--(
				int);  // 1065
		CThreadMultiWaitObject::GetWaitItem(
				ThreadMultiWaitItem_t* pItem,
				ThreadMultiWaitExtra_t* pExtra);  // 1782
		CThreadMultiWaitObject::Wait(
			uint32 nMillis);  // 1069
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 592
		CInterlockedIntT<int, 4>::operator--(
				int);  // 1070
		QueuedSweepNode_t::IsEmpty(); // 1044
		QueuedSweepNode_t::QueuedSweepNode_t(); // 1042
		{
			uint8 nNumBlocksToMove; // 118
			QueuedSweepNode_t::SpaceRemaining(); // 118
			{
				int i; // 119
			}
		}
		QueuedSweepNode_t::IsCompatibleWith(
				const QueuedSweepNode_t& other);  // 111
		QueuedSweepNode_t::FillFrom(
			QueuedSweepNode_t& other);  // 1077
	}
	QueuedSweepNode_t::QueuedSweepNode_t(); // 1036
	CInterlockedIntT<int, 4>::operator int(); // 1040
} /* size: 0, variables: 3, inline expansions: 2 (0 bytes) */

// <0097A981> ../public/tier0/fastsweep.h:1033
// variables: 13
// function calls: 42
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::RunThread()
{
	const char   __FUNCTION__; // 39680
	QueuedSweepNode_t ourQueue; // 1036
	int nNumFinishedJobsToAccountFor; // 1038
	{
		QueuedSweepNode_t workItem; // 1042
		{
			int nNewValue; // 1052
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1051
			}
			AtomicSub(AtomicInt32_t& x,
					int nIncrement);  // 1052
		}
		{
			int i; // 1081
			{
				int o; // 1087
			}
		}
		{
			int i; // 1105
			QueuedSweepNode_t::Count(); // 1105
			CSOAContainer::ElementPointer<float>(
						int nAttributeIdx,
						int nX,
						int nY,
						int nZ);  // 3816
			IntAABB_t::Width(); // 457
			IntAABB_t::Depth(); // 457
			IntAABB_t::Height(); // 457
			IntVector3D::IntVector3D(
					int nX,
					int nY,
					int nZ);  // 457
			IntAABB_t::Size(); // 3817
			CSOAContainer::ElementPointer<float>(
						int nAttributeIdx,
						int nX,
						int nY,
						int nZ);  // 3820
			CSOAContainer::ElementPointer<float>(
						int nAttributeIdx,
						int nX,
						int nY,
						int nZ);  // 3823
			CSOAContainer::ElementPointer<float>(
						int nAttributeIdx,
						int nX,
						int nY,
						int nZ);  // 3822
			CSOAContainer::ElementPointer<float>(
						int nAttributeIdx,
						int nX,
						int nY,
						int nZ);  // 3821
			IntVector3D::IntVector3D(
					int nX,
					int nY,
					int nZ);  // 3817
			CGutterFillingControls::ExecuteOnBlock(
					IntVector3D vBlockIndex,
					int nWhichSweep,
					const IntAABB_t& vBounds,
					IntVector3D vStart,
					CFastSweepControllerBase* pController,
					int nBoundaryMask);  // 544
			IntVector3D::IntVector3D(); // 301
			IntVector3D::IntVector3D(); // 301
			GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
			IntAABB_t::IntAABB_t(); // 419
			{
				int i; // 420
			}
			CFastSweepControllerBase::BlockBounds(
					IntVector3D vBlockIndex);  // 521
			IntVector3D::IntVector3D(); // 522
			{
				int nAxis; // 527
			}
			FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::ExecuteSweep(
					IntVector3D vBlockIndex,
					int nWhichSweep);  // 1108
		}
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<QueuedSweepNode_t, false>::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<QueuedSweepNode_t, false>::PopItem(
			QueuedSweepNode_t* pResult);  // 1047
		QueuedSweepNode_t::IsEmpty(); // 1060
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<QueuedSweepNode_t, false>::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<QueuedSweepNode_t, false>::PopItem(
			QueuedSweepNode_t* pResult);  // 1063
		CThreadMultiWaitObject::GetWaitItem(
				ThreadMultiWaitItem_t* pItem,
				ThreadMultiWaitExtra_t* pExtra);  // 1782
		CThreadMultiWaitObject::Wait(
			uint32 nMillis);  // 1069
		QueuedSweepNode_t::IsEmpty(); // 1044
		QueuedSweepNode_t::QueuedSweepNode_t(); // 1042
		{
			uint8 nNumBlocksToMove; // 118
			QueuedSweepNode_t::SpaceRemaining(); // 118
			{
				int i; // 119
			}
		}
		QueuedSweepNode_t::IsCompatibleWith(
				const QueuedSweepNode_t& other);  // 111
		QueuedSweepNode_t::FillFrom(
			QueuedSweepNode_t& other);  // 1077
	}
	QueuedSweepNode_t::QueuedSweepNode_t(); // 1036
} /* size: 0, variables: 3, inline expansions: 1 (0 bytes) */

// <044A64A4> ../public/tier0/fastsweep.h:1116
// variables: 10
// function calls: 47
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::RunThread2()
{
	const char   __FUNCTION__; // 6592
	int nNumFinishedJobsToAccountFor; // 1119
	{
		SweepGroup_t* pWorkItem; // 1125
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1124
		}
		{
			int nNewValue; // 1132
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1131
			}
			CInterlockedIntT<int, 4>::operator int(); // 1131
			ThreadInterlockedExchangeAdd(volatile int32* p,
							int32 value);  // 660
			CInterlockedIntT<int, 4>::AtomicAdd(
					int add);  // 257
			AtomicSub(AtomicInt32_t& x,
					int nIncrement);  // 1132
		}
		{
			int i; // 1197
			{
				int nDepGroup; // 1199
				int nNewValue; // 1203
				{
					SweepGroup_t* pNew1; // 1206
					CInterlockedIntT<int, 4>::operator!=(
							int rhs);  // 496
					FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::QueueSweep(
							SweepGroup_t* pGroup);  // 1209
					__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
							size_t __i);  // 1206
				}
				CUtlBlockMemory<unsigned int, int>::MajorIndex(
						int i);  // 243
				CUtlBlockMemory<unsigned int, int>::IsIdxValid(
						int i);  // 191
				CUtlBlockMemory<unsigned int, int>::MajorIndex(
						int i);  // 192
				CUtlBlockMemory<unsigned int, int>::MinorIndex(
						int i);  // 193
				{
				}
				CUtlBlockMemory<unsigned int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::operator[](
						int i);  // 1199
				{
				}
				__uniq_ptr_impl<CInterlockedIntT<int, 4>, std::default_delete<CInterlockedIntT<int, 4> []> >::_M_ptr(); // 742
				unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::get(); // 735
				unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::operator[](
						size_t __i);  // 1203
				ThreadInterlockedExchangeAdd(volatile int32* p,
								int32 value);  // 660
				CInterlockedIntT<int, 4>::AtomicAdd(
						int add);  // 257
				AtomicSub(AtomicInt32_t& x,
						int nIncrement);  // 1203
			}
		}
		FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::ProcessFinishedGroup(
					SweepGroup_t* pGroup);  // 1160
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<SweepGroup_t::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<SweepGroup_t::PopItem(
			SweepGroup_t** pResult);  // 1127
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 582
		CInterlockedIntT<int, 4>::operator++(
				int);  // 1140
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<SweepGroup_t::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<SweepGroup_t::PopItem(
			SweepGroup_t** pResult);  // 1141
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 592
		CInterlockedIntT<int, 4>::operator--(
				int);  // 1143
		CThreadMultiWaitObject::GetWaitItem(
				ThreadMultiWaitItem_t* pItem,
				ThreadMultiWaitExtra_t* pExtra);  // 1782
		CThreadMultiWaitObject::Wait(
			uint32 nMillis);  // 1147
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 592
		CInterlockedIntT<int, 4>::operator--(
				int);  // 1148
		CInterlockedIntT<int, 4>::operator int(); // 1124
	}
	CInterlockedIntT<int, 4>::operator int(); // 1122
} /* size: 1033, variables: 2, inline expansions: 1 (24 bytes) */

// <044A36C8> ../public/tier0/fastsweep.h:1116
// variables: 10
// function calls: 30
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::RunThread2()
{
	const char   __FUNCTION__; // 6592
	int nNumFinishedJobsToAccountFor; // 1119
	{
		SweepGroup_t* pWorkItem; // 1125
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1124
		}
		{
			int nNewValue; // 1132
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1131
			}
			AtomicSub(AtomicInt32_t& x,
					int nIncrement);  // 1132
		}
		{
			int i; // 1197
			{
				int nDepGroup; // 1199
				int nNewValue; // 1203
				{
					SweepGroup_t* pNew1; // 1206
					FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::QueueSweep(
							SweepGroup_t* pGroup);  // 1209
					__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
							size_t __i);  // 1206
				}
				CUtlBlockMemory<unsigned int, int>::MajorIndex(
						int i);  // 243
				CUtlBlockMemory<unsigned int, int>::IsIdxValid(
						int i);  // 191
				CUtlBlockMemory<unsigned int, int>::MajorIndex(
						int i);  // 192
				CUtlBlockMemory<unsigned int, int>::MinorIndex(
						int i);  // 193
				{
				}
				CUtlBlockMemory<unsigned int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::operator[](
						int i);  // 1199
				{
				}
				__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr(); // 742
				unique_ptr<int [], std::default_delete<int []> >::get(); // 735
				unique_ptr<int [], std::default_delete<int []> >::operator[](
						size_t __i);  // 1203
				AtomicSub(AtomicInt32_t& x,
						int nIncrement);  // 1203
			}
		}
		FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::ProcessFinishedGroup(
					SweepGroup_t* pGroup);  // 1160
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<SweepGroup_t::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<SweepGroup_t::PopItem(
			SweepGroup_t** pResult);  // 1127
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<SweepGroup_t::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<SweepGroup_t::PopItem(
			SweepGroup_t** pResult);  // 1141
		CThreadMultiWaitObject::GetWaitItem(
				ThreadMultiWaitItem_t* pItem,
				ThreadMultiWaitExtra_t* pExtra);  // 1782
		CThreadMultiWaitObject::Wait(
			uint32 nMillis);  // 1147
	}
} /* size: 0, variables: 2 */

// <044A0DEB> ../public/tier0/fastsweep.h:1116
// variables: 10
// function calls: 30
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::RunThread2()
{
	const char   __FUNCTION__; // 6592
	int nNumFinishedJobsToAccountFor; // 1119
	{
		SweepGroup_t* pWorkItem; // 1125
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1124
		}
		{
			int nNewValue; // 1132
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1131
			}
			AtomicSub(AtomicInt32_t& x,
					int nIncrement);  // 1132
		}
		{
			int i; // 1197
			{
				int nDepGroup; // 1199
				int nNewValue; // 1203
				{
					SweepGroup_t* pNew1; // 1206
					FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::QueueSweep(
							SweepGroup_t* pGroup);  // 1209
					__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
							size_t __i);  // 1206
				}
				CUtlBlockMemory<unsigned int, int>::MajorIndex(
						int i);  // 243
				CUtlBlockMemory<unsigned int, int>::IsIdxValid(
						int i);  // 191
				CUtlBlockMemory<unsigned int, int>::MajorIndex(
						int i);  // 192
				CUtlBlockMemory<unsigned int, int>::MinorIndex(
						int i);  // 193
				{
				}
				CUtlBlockMemory<unsigned int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::operator[](
						int i);  // 1199
				{
				}
				__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr(); // 742
				unique_ptr<int [], std::default_delete<int []> >::get(); // 735
				unique_ptr<int [], std::default_delete<int []> >::operator[](
						size_t __i);  // 1203
				AtomicSub(AtomicInt32_t& x,
						int nIncrement);  // 1203
			}
		}
		FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::ProcessFinishedGroup(
					SweepGroup_t* pGroup);  // 1160
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<SweepGroup_t::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<SweepGroup_t::PopItem(
			SweepGroup_t** pResult);  // 1127
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<SweepGroup_t::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<SweepGroup_t::PopItem(
			SweepGroup_t** pResult);  // 1141
		CThreadMultiWaitObject::GetWaitItem(
				ThreadMultiWaitItem_t* pItem,
				ThreadMultiWaitExtra_t* pExtra);  // 1782
		CThreadMultiWaitObject::Wait(
			uint32 nMillis);  // 1147
	}
} /* size: 0, variables: 2 */

// <0449DD52> ../public/tier0/fastsweep.h:1116
// variables: 18
// function calls: 63
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::RunThread2()
{
	const char   __FUNCTION__; // 6592
	int nNumFinishedJobsToAccountFor; // 1119
	{
		SweepGroup_t* pWorkItem; // 1125
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1124
		}
		{
			int nNewValue; // 1132
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1131
			}
			CInterlockedIntT<int, 4>::operator int(); // 1131
			ThreadInterlockedExchangeAdd(volatile int32* p,
							int32 value);  // 660
			CInterlockedIntT<int, 4>::AtomicAdd(
					int add);  // 257
			AtomicSub(AtomicInt32_t& x,
					int nIncrement);  // 1132
		}
		{
			int nIndex; // 559
			int nWhichSweep; // 560
			{
				IntAABB_t bounds; // 563
				IntVector3D vStart; // 564
				IntVector3D::IntVector3D(); // 301
				IntVector3D::IntVector3D(); // 301
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
				IntAABB_t::IntAABB_t(); // 419
				{
					int i; // 420
				}
				CFastSweepControllerBase::BlockBounds(
						IntVector3D vBlockIndex);  // 563
				IntVector3D::IntVector3D(); // 564
				{
				}
				CHeatTransferEquationControls::ExecuteOn4Blocks(
						IntVector3D vBlockIndex0,
						IntVector3D vBlockIndex1,
						IntVector3D vBlockIndex2,
						IntVector3D vBlockIndex3,
						int nWhichSweep,
						const IntAABB_t& vBounds,
						IntVector3D vStart,
						CFastSweepControllerBase* pController);  // 571
			}
		}
		{
			int i; // 551
			IntVector3D::IntVector3D(); // 301
			IntVector3D::IntVector3D(); // 301
			GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
			IntAABB_t::IntAABB_t(); // 419
			{
				int i; // 420
			}
			CFastSweepControllerBase::BlockBounds(
					IntVector3D vBlockIndex);  // 521
			IntVector3D::IntVector3D(); // 522
			{
				int nAxis; // 527
			}
			FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::ExecuteSweep(
					IntVector3D vBlockIndex,
					int nWhichSweep);  // 554
		}
		FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::ExecuteSweepGroup(
					SweepGroup_t* pWorkItem);  // 547
		FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::ExecuteSweepGroup(
					SweepGroup_t* pWorkItem);  // 1158
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<SweepGroup_t::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<SweepGroup_t::PopItem(
			SweepGroup_t** pResult);  // 1127
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 582
		CInterlockedIntT<int, 4>::operator++(
				int);  // 1140
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<SweepGroup_t::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<SweepGroup_t::PopItem(
			SweepGroup_t** pResult);  // 1141
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 592
		CInterlockedIntT<int, 4>::operator--(
				int);  // 1143
		CThreadMultiWaitObject::GetWaitItem(
				ThreadMultiWaitItem_t* pItem,
				ThreadMultiWaitExtra_t* pExtra);  // 1782
		CThreadMultiWaitObject::Wait(
			uint32 nMillis);  // 1147
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 592
		CInterlockedIntT<int, 4>::operator--(
				int);  // 1148
		CInterlockedIntT<int, 4>::operator int(); // 1124
		{
			int i; // 1197
			{
				int nDepGroup; // 1199
				int nNewValue; // 1203
				CUtlBlockMemory<unsigned int, int>::MajorIndex(
						int i);  // 243
				CUtlBlockMemory<unsigned int, int>::IsIdxValid(
						int i);  // 191
				CUtlBlockMemory<unsigned int, int>::MajorIndex(
						int i);  // 192
				CUtlBlockMemory<unsigned int, int>::MinorIndex(
						int i);  // 193
				{
				}
				CUtlBlockMemory<unsigned int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::operator[](
						int i);  // 1199
				{
				}
				ThreadInterlockedExchangeAdd(volatile int32* p,
								int32 value);  // 660
				CInterlockedIntT<int, 4>::AtomicAdd(
						int add);  // 257
				AtomicSub(AtomicInt32_t& x,
						int nIncrement);  // 1203
				__uniq_ptr_impl<CInterlockedIntT<int, 4>, std::default_delete<CInterlockedIntT<int, 4> []> >::_M_ptr(); // 742
				unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::get(); // 735
				unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::operator[](
						size_t __i);  // 1203
				{
					SweepGroup_t* pNew1; // 1206
					__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
							size_t __i);  // 1206
					CInterlockedIntT<int, 4>::operator!=(
							int rhs);  // 496
					FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::QueueSweep(
							SweepGroup_t* pGroup);  // 1209
				}
			}
		}
		FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::ProcessFinishedGroup(
					SweepGroup_t* pGroup);  // 1160
	}
	CInterlockedIntT<int, 4>::operator int(); // 1122
} /* size: 1608, variables: 2, inline expansions: 1 (26 bytes) */

// <0449A76C> ../public/tier0/fastsweep.h:1116
// variables: 18
// function calls: 70
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::RunThread2()
{
	const char   __FUNCTION__; // 6592
	int nNumFinishedJobsToAccountFor; // 1119
	{
		SweepGroup_t* pWorkItem; // 1125
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1124
		}
		{
			int nNewValue; // 1132
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1131
			}
			AtomicSub(AtomicInt32_t& x,
					int nIncrement);  // 1132
		}
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<SweepGroup_t::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<SweepGroup_t::PopItem(
			SweepGroup_t** pResult);  // 1127
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<SweepGroup_t::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<SweepGroup_t::PopItem(
			SweepGroup_t** pResult);  // 1141
		CThreadMultiWaitObject::GetWaitItem(
				ThreadMultiWaitItem_t* pItem,
				ThreadMultiWaitExtra_t* pExtra);  // 1782
		CThreadMultiWaitObject::Wait(
			uint32 nMillis);  // 1147
		{
			int nIndex; // 559
			int nWhichSweep; // 560
			{
				IntAABB_t bounds; // 563
				IntVector3D vStart; // 564
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 3816
				IntAABB_t::Width(); // 457
				IntAABB_t::Height(); // 457
				IntAABB_t::Depth(); // 457
				IntVector3D::IntVector3D(
						int nX,
						int nY,
						int nZ);  // 457
				IntAABB_t::Size(); // 3817
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 3820
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 3823
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 3822
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 3821
				IntVector3D::IntVector3D(
						int nX,
						int nY,
						int nZ);  // 3817
				CGutterFillingControls::ExecuteOnBlock(
						IntVector3D vBlockIndex,
						int nWhichSweep,
						const IntAABB_t& vBounds,
						IntVector3D vStart,
						CFastSweepControllerBase* pController,
						int nBoundaryMask);  // 581
				IntVector3D::IntVector3D(); // 301
				IntVector3D::IntVector3D(); // 301
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
				IntAABB_t::IntAABB_t(); // 419
				{
					int i; // 420
				}
				CFastSweepControllerBase::BlockBounds(
						IntVector3D vBlockIndex);  // 563
				IntVector3D::IntVector3D(); // 564
				{
				}
				CGutterFillingControls::ExecuteOn4Blocks(
						IntVector3D vBlockIndex0,
						IntVector3D vBlockIndex1,
						IntVector3D vBlockIndex2,
						IntVector3D vBlockIndex3,
						int nWhichSweep,
						const IntAABB_t& vBounds,
						IntVector3D vStart,
						CFastSweepControllerBase* pController);  // 571
			}
		}
		{
			int i; // 551
			IntVector3D::IntVector3D(); // 301
			IntVector3D::IntVector3D(); // 301
			GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
			IntAABB_t::IntAABB_t(); // 419
			{
				int i; // 420
			}
			CFastSweepControllerBase::BlockBounds(
					IntVector3D vBlockIndex);  // 521
			IntVector3D::IntVector3D(); // 522
			{
				int nAxis; // 527
			}
			CSOAContainer::ElementPointer<float>(
						int nAttributeIdx,
						int nX,
						int nY,
						int nZ);  // 3816
			IntAABB_t::Width(); // 457
			IntAABB_t::Depth(); // 457
			IntAABB_t::Height(); // 457
			IntVector3D::IntVector3D(
					int nX,
					int nY,
					int nZ);  // 457
			IntAABB_t::Size(); // 3817
			CSOAContainer::ElementPointer<float>(
						int nAttributeIdx,
						int nX,
						int nY,
						int nZ);  // 3823
			CSOAContainer::ElementPointer<float>(
						int nAttributeIdx,
						int nX,
						int nY,
						int nZ);  // 3822
			CSOAContainer::ElementPointer<float>(
						int nAttributeIdx,
						int nX,
						int nY,
						int nZ);  // 3821
			CSOAContainer::ElementPointer<float>(
						int nAttributeIdx,
						int nX,
						int nY,
						int nZ);  // 3820
			IntVector3D::IntVector3D(
					int nX,
					int nY,
					int nZ);  // 3817
			CGutterFillingControls::ExecuteOnBlock(
					IntVector3D vBlockIndex,
					int nWhichSweep,
					const IntAABB_t& vBounds,
					IntVector3D vStart,
					CFastSweepControllerBase* pController,
					int nBoundaryMask);  // 544
			FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::ExecuteSweep(
					IntVector3D vBlockIndex,
					int nWhichSweep);  // 554
		}
		FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::ExecuteSweepGroup(
					SweepGroup_t* pWorkItem);  // 547
		FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::ExecuteSweepGroup(
					SweepGroup_t* pWorkItem);  // 1158
		{
			int i; // 1197
			{
				int nDepGroup; // 1199
				int nNewValue; // 1203
				CUtlBlockMemory<unsigned int, int>::MajorIndex(
						int i);  // 243
				CUtlBlockMemory<unsigned int, int>::IsIdxValid(
						int i);  // 191
				CUtlBlockMemory<unsigned int, int>::MajorIndex(
						int i);  // 192
				CUtlBlockMemory<unsigned int, int>::MinorIndex(
						int i);  // 193
				{
				}
				CUtlBlockMemory<unsigned int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::operator[](
						int i);  // 1199
				{
				}
				__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr(); // 742
				unique_ptr<int [], std::default_delete<int []> >::get(); // 735
				unique_ptr<int [], std::default_delete<int []> >::operator[](
						size_t __i);  // 1203
				AtomicSub(AtomicInt32_t& x,
						int nIncrement);  // 1203
				{
					SweepGroup_t* pNew1; // 1206
					__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
							size_t __i);  // 1206
					FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::QueueSweep(
							SweepGroup_t* pGroup);  // 1209
				}
			}
		}
		FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::ProcessFinishedGroup(
					SweepGroup_t* pGroup);  // 1160
	}
} /* size: 0, variables: 2 */

// <01B01BB6> ../public/tier0/fastsweep.h:1116
// variables: 10
// function calls: 47
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::RunThread2()
{
	const char   __FUNCTION__; // 46981
	int nNumFinishedJobsToAccountFor; // 1119
	{
		SweepGroup_t* pWorkItem; // 1125
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1124
		}
		{
			int nNewValue; // 1132
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1131
			}
			CInterlockedIntT<int, 4>::operator int(); // 1131
			ThreadInterlockedExchangeAdd(volatile int32* p,
							int32 value);  // 660
			CInterlockedIntT<int, 4>::AtomicAdd(
					int add);  // 257
			AtomicSub(AtomicInt32_t& x,
					int nIncrement);  // 1132
		}
		{
			int i; // 1197
			{
				int nDepGroup; // 1199
				int nNewValue; // 1203
				{
					SweepGroup_t* pNew1; // 1206
					CInterlockedIntT<int, 4>::operator!=(
							int rhs);  // 496
					FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::QueueSweep(
							SweepGroup_t* pGroup);  // 1209
					__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
							size_t __i);  // 1206
				}
				CUtlBlockMemory<unsigned int, int>::MajorIndex(
						int i);  // 243
				CUtlBlockMemory<unsigned int, int>::IsIdxValid(
						int i);  // 191
				CUtlBlockMemory<unsigned int, int>::MajorIndex(
						int i);  // 192
				CUtlBlockMemory<unsigned int, int>::MinorIndex(
						int i);  // 193
				{
				}
				CUtlBlockMemory<unsigned int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::operator[](
						int i);  // 1199
				{
				}
				__uniq_ptr_impl<CInterlockedIntT<int, 4>, std::default_delete<CInterlockedIntT<int, 4> []> >::_M_ptr(); // 742
				unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::get(); // 735
				unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::operator[](
						size_t __i);  // 1203
				ThreadInterlockedExchangeAdd(volatile int32* p,
								int32 value);  // 660
				CInterlockedIntT<int, 4>::AtomicAdd(
						int add);  // 257
				AtomicSub(AtomicInt32_t& x,
						int nIncrement);  // 1203
			}
		}
		FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::ProcessFinishedGroup(
					SweepGroup_t* pGroup);  // 1160
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<SweepGroup_t::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<SweepGroup_t::PopItem(
			SweepGroup_t** pResult);  // 1127
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 582
		CInterlockedIntT<int, 4>::operator++(
				int);  // 1140
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<SweepGroup_t::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<SweepGroup_t::PopItem(
			SweepGroup_t** pResult);  // 1141
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 592
		CInterlockedIntT<int, 4>::operator--(
				int);  // 1143
		CThreadMultiWaitObject::GetWaitItem(
				ThreadMultiWaitItem_t* pItem,
				ThreadMultiWaitExtra_t* pExtra);  // 1782
		CThreadMultiWaitObject::Wait(
			uint32 nMillis);  // 1147
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 592
		CInterlockedIntT<int, 4>::operator--(
				int);  // 1148
		CInterlockedIntT<int, 4>::operator int(); // 1124
	}
	CInterlockedIntT<int, 4>::operator int(); // 1122
} /* size: 1033, variables: 2, inline expansions: 1 (24 bytes) */

// <01AFEDDA> ../public/tier0/fastsweep.h:1116
// variables: 10
// function calls: 30
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::RunThread2()
{
	const char   __FUNCTION__; // 46981
	int nNumFinishedJobsToAccountFor; // 1119
	{
		SweepGroup_t* pWorkItem; // 1125
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1124
		}
		{
			int nNewValue; // 1132
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1131
			}
			AtomicSub(AtomicInt32_t& x,
					int nIncrement);  // 1132
		}
		{
			int i; // 1197
			{
				int nDepGroup; // 1199
				int nNewValue; // 1203
				{
					SweepGroup_t* pNew1; // 1206
					FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::QueueSweep(
							SweepGroup_t* pGroup);  // 1209
					__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
							size_t __i);  // 1206
				}
				CUtlBlockMemory<unsigned int, int>::MajorIndex(
						int i);  // 243
				CUtlBlockMemory<unsigned int, int>::IsIdxValid(
						int i);  // 191
				CUtlBlockMemory<unsigned int, int>::MajorIndex(
						int i);  // 192
				CUtlBlockMemory<unsigned int, int>::MinorIndex(
						int i);  // 193
				{
				}
				CUtlBlockMemory<unsigned int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::operator[](
						int i);  // 1199
				{
				}
				__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr(); // 742
				unique_ptr<int [], std::default_delete<int []> >::get(); // 735
				unique_ptr<int [], std::default_delete<int []> >::operator[](
						size_t __i);  // 1203
				AtomicSub(AtomicInt32_t& x,
						int nIncrement);  // 1203
			}
		}
		FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::ProcessFinishedGroup(
					SweepGroup_t* pGroup);  // 1160
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<SweepGroup_t::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<SweepGroup_t::PopItem(
			SweepGroup_t** pResult);  // 1127
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<SweepGroup_t::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<SweepGroup_t::PopItem(
			SweepGroup_t** pResult);  // 1141
		CThreadMultiWaitObject::GetWaitItem(
				ThreadMultiWaitItem_t* pItem,
				ThreadMultiWaitExtra_t* pExtra);  // 1782
		CThreadMultiWaitObject::Wait(
			uint32 nMillis);  // 1147
	}
} /* size: 0, variables: 2 */

// <01AFC4FD> ../public/tier0/fastsweep.h:1116
// variables: 10
// function calls: 30
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::RunThread2()
{
	const char   __FUNCTION__; // 46981
	int nNumFinishedJobsToAccountFor; // 1119
	{
		SweepGroup_t* pWorkItem; // 1125
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1124
		}
		{
			int nNewValue; // 1132
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1131
			}
			AtomicSub(AtomicInt32_t& x,
					int nIncrement);  // 1132
		}
		{
			int i; // 1197
			{
				int nDepGroup; // 1199
				int nNewValue; // 1203
				{
					SweepGroup_t* pNew1; // 1206
					FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::QueueSweep(
							SweepGroup_t* pGroup);  // 1209
					__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
							size_t __i);  // 1206
				}
				CUtlBlockMemory<unsigned int, int>::MajorIndex(
						int i);  // 243
				CUtlBlockMemory<unsigned int, int>::IsIdxValid(
						int i);  // 191
				CUtlBlockMemory<unsigned int, int>::MajorIndex(
						int i);  // 192
				CUtlBlockMemory<unsigned int, int>::MinorIndex(
						int i);  // 193
				{
				}
				CUtlBlockMemory<unsigned int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::operator[](
						int i);  // 1199
				{
				}
				__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr(); // 742
				unique_ptr<int [], std::default_delete<int []> >::get(); // 735
				unique_ptr<int [], std::default_delete<int []> >::operator[](
						size_t __i);  // 1203
				AtomicSub(AtomicInt32_t& x,
						int nIncrement);  // 1203
			}
		}
		FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::ProcessFinishedGroup(
					SweepGroup_t* pGroup);  // 1160
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<SweepGroup_t::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<SweepGroup_t::PopItem(
			SweepGroup_t** pResult);  // 1127
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<SweepGroup_t::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<SweepGroup_t::PopItem(
			SweepGroup_t** pResult);  // 1141
		CThreadMultiWaitObject::GetWaitItem(
				ThreadMultiWaitItem_t* pItem,
				ThreadMultiWaitExtra_t* pExtra);  // 1782
		CThreadMultiWaitObject::Wait(
			uint32 nMillis);  // 1147
	}
} /* size: 0, variables: 2 */

// <01AF9464> ../public/tier0/fastsweep.h:1116
// variables: 18
// function calls: 63
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::RunThread2()
{
	const char   __FUNCTION__; // 46981
	int nNumFinishedJobsToAccountFor; // 1119
	{
		SweepGroup_t* pWorkItem; // 1125
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1124
		}
		{
			int nNewValue; // 1132
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1131
			}
			CInterlockedIntT<int, 4>::operator int(); // 1131
			ThreadInterlockedExchangeAdd(volatile int32* p,
							int32 value);  // 660
			CInterlockedIntT<int, 4>::AtomicAdd(
					int add);  // 257
			AtomicSub(AtomicInt32_t& x,
					int nIncrement);  // 1132
		}
		{
			int nIndex; // 559
			int nWhichSweep; // 560
			{
				IntAABB_t bounds; // 563
				IntVector3D vStart; // 564
				IntVector3D::IntVector3D(); // 301
				IntVector3D::IntVector3D(); // 301
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
				IntAABB_t::IntAABB_t(); // 419
				{
					int i; // 420
				}
				CFastSweepControllerBase::BlockBounds(
						IntVector3D vBlockIndex);  // 563
				IntVector3D::IntVector3D(); // 564
				{
				}
				CHeatTransferEquationControls::ExecuteOn4Blocks(
						IntVector3D vBlockIndex0,
						IntVector3D vBlockIndex1,
						IntVector3D vBlockIndex2,
						IntVector3D vBlockIndex3,
						int nWhichSweep,
						const IntAABB_t& vBounds,
						IntVector3D vStart,
						CFastSweepControllerBase* pController);  // 571
			}
		}
		{
			int i; // 551
			IntVector3D::IntVector3D(); // 301
			IntVector3D::IntVector3D(); // 301
			GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
			IntAABB_t::IntAABB_t(); // 419
			{
				int i; // 420
			}
			CFastSweepControllerBase::BlockBounds(
					IntVector3D vBlockIndex);  // 521
			IntVector3D::IntVector3D(); // 522
			{
				int nAxis; // 527
			}
			FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::ExecuteSweep(
					IntVector3D vBlockIndex,
					int nWhichSweep);  // 554
		}
		FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::ExecuteSweepGroup(
					SweepGroup_t* pWorkItem);  // 547
		FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::ExecuteSweepGroup(
					SweepGroup_t* pWorkItem);  // 1158
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<SweepGroup_t::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<SweepGroup_t::PopItem(
			SweepGroup_t** pResult);  // 1127
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 582
		CInterlockedIntT<int, 4>::operator++(
				int);  // 1140
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<SweepGroup_t::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<SweepGroup_t::PopItem(
			SweepGroup_t** pResult);  // 1141
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 592
		CInterlockedIntT<int, 4>::operator--(
				int);  // 1143
		CThreadMultiWaitObject::GetWaitItem(
				ThreadMultiWaitItem_t* pItem,
				ThreadMultiWaitExtra_t* pExtra);  // 1782
		CThreadMultiWaitObject::Wait(
			uint32 nMillis);  // 1147
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 592
		CInterlockedIntT<int, 4>::operator--(
				int);  // 1148
		CInterlockedIntT<int, 4>::operator int(); // 1124
		{
			int i; // 1197
			{
				int nDepGroup; // 1199
				int nNewValue; // 1203
				CUtlBlockMemory<unsigned int, int>::MajorIndex(
						int i);  // 243
				CUtlBlockMemory<unsigned int, int>::IsIdxValid(
						int i);  // 191
				CUtlBlockMemory<unsigned int, int>::MajorIndex(
						int i);  // 192
				CUtlBlockMemory<unsigned int, int>::MinorIndex(
						int i);  // 193
				{
				}
				CUtlBlockMemory<unsigned int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::operator[](
						int i);  // 1199
				{
				}
				ThreadInterlockedExchangeAdd(volatile int32* p,
								int32 value);  // 660
				CInterlockedIntT<int, 4>::AtomicAdd(
						int add);  // 257
				AtomicSub(AtomicInt32_t& x,
						int nIncrement);  // 1203
				__uniq_ptr_impl<CInterlockedIntT<int, 4>, std::default_delete<CInterlockedIntT<int, 4> []> >::_M_ptr(); // 742
				unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::get(); // 735
				unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::operator[](
						size_t __i);  // 1203
				{
					SweepGroup_t* pNew1; // 1206
					__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
							size_t __i);  // 1206
					CInterlockedIntT<int, 4>::operator!=(
							int rhs);  // 496
					FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::QueueSweep(
							SweepGroup_t* pGroup);  // 1209
				}
			}
		}
		FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::ProcessFinishedGroup(
					SweepGroup_t* pGroup);  // 1160
	}
	CInterlockedIntT<int, 4>::operator int(); // 1122
} /* size: 1608, variables: 2, inline expansions: 1 (26 bytes) */

// <01AF5E7E> ../public/tier0/fastsweep.h:1116
// variables: 18
// function calls: 70
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::RunThread2()
{
	const char   __FUNCTION__; // 46981
	int nNumFinishedJobsToAccountFor; // 1119
	{
		SweepGroup_t* pWorkItem; // 1125
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1124
		}
		{
			int nNewValue; // 1132
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1131
			}
			AtomicSub(AtomicInt32_t& x,
					int nIncrement);  // 1132
		}
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<SweepGroup_t::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<SweepGroup_t::PopItem(
			SweepGroup_t** pResult);  // 1127
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<SweepGroup_t::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<SweepGroup_t::PopItem(
			SweepGroup_t** pResult);  // 1141
		CThreadMultiWaitObject::GetWaitItem(
				ThreadMultiWaitItem_t* pItem,
				ThreadMultiWaitExtra_t* pExtra);  // 1782
		CThreadMultiWaitObject::Wait(
			uint32 nMillis);  // 1147
		{
			int nIndex; // 559
			int nWhichSweep; // 560
			{
				IntAABB_t bounds; // 563
				IntVector3D vStart; // 564
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 3816
				IntAABB_t::Width(); // 457
				IntAABB_t::Height(); // 457
				IntAABB_t::Depth(); // 457
				IntVector3D::IntVector3D(
						int nX,
						int nY,
						int nZ);  // 457
				IntAABB_t::Size(); // 3817
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 3820
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 3823
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 3822
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 3821
				IntVector3D::IntVector3D(
						int nX,
						int nY,
						int nZ);  // 3817
				CGutterFillingControls::ExecuteOnBlock(
						IntVector3D vBlockIndex,
						int nWhichSweep,
						const IntAABB_t& vBounds,
						IntVector3D vStart,
						CFastSweepControllerBase* pController,
						int nBoundaryMask);  // 581
				IntVector3D::IntVector3D(); // 301
				IntVector3D::IntVector3D(); // 301
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
				IntAABB_t::IntAABB_t(); // 419
				{
					int i; // 420
				}
				CFastSweepControllerBase::BlockBounds(
						IntVector3D vBlockIndex);  // 563
				IntVector3D::IntVector3D(); // 564
				{
				}
				CGutterFillingControls::ExecuteOn4Blocks(
						IntVector3D vBlockIndex0,
						IntVector3D vBlockIndex1,
						IntVector3D vBlockIndex2,
						IntVector3D vBlockIndex3,
						int nWhichSweep,
						const IntAABB_t& vBounds,
						IntVector3D vStart,
						CFastSweepControllerBase* pController);  // 571
			}
		}
		{
			int i; // 551
			IntVector3D::IntVector3D(); // 301
			IntVector3D::IntVector3D(); // 301
			GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
			IntAABB_t::IntAABB_t(); // 419
			{
				int i; // 420
			}
			CFastSweepControllerBase::BlockBounds(
					IntVector3D vBlockIndex);  // 521
			IntVector3D::IntVector3D(); // 522
			{
				int nAxis; // 527
			}
			CSOAContainer::ElementPointer<float>(
						int nAttributeIdx,
						int nX,
						int nY,
						int nZ);  // 3816
			IntAABB_t::Width(); // 457
			IntAABB_t::Depth(); // 457
			IntAABB_t::Height(); // 457
			IntVector3D::IntVector3D(
					int nX,
					int nY,
					int nZ);  // 457
			IntAABB_t::Size(); // 3817
			CSOAContainer::ElementPointer<float>(
						int nAttributeIdx,
						int nX,
						int nY,
						int nZ);  // 3823
			CSOAContainer::ElementPointer<float>(
						int nAttributeIdx,
						int nX,
						int nY,
						int nZ);  // 3822
			CSOAContainer::ElementPointer<float>(
						int nAttributeIdx,
						int nX,
						int nY,
						int nZ);  // 3821
			CSOAContainer::ElementPointer<float>(
						int nAttributeIdx,
						int nX,
						int nY,
						int nZ);  // 3820
			IntVector3D::IntVector3D(
					int nX,
					int nY,
					int nZ);  // 3817
			CGutterFillingControls::ExecuteOnBlock(
					IntVector3D vBlockIndex,
					int nWhichSweep,
					const IntAABB_t& vBounds,
					IntVector3D vStart,
					CFastSweepControllerBase* pController,
					int nBoundaryMask);  // 544
			FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::ExecuteSweep(
					IntVector3D vBlockIndex,
					int nWhichSweep);  // 554
		}
		FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::ExecuteSweepGroup(
					SweepGroup_t* pWorkItem);  // 547
		FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::ExecuteSweepGroup(
					SweepGroup_t* pWorkItem);  // 1158
		{
			int i; // 1197
			{
				int nDepGroup; // 1199
				int nNewValue; // 1203
				CUtlBlockMemory<unsigned int, int>::MajorIndex(
						int i);  // 243
				CUtlBlockMemory<unsigned int, int>::IsIdxValid(
						int i);  // 191
				CUtlBlockMemory<unsigned int, int>::MajorIndex(
						int i);  // 192
				CUtlBlockMemory<unsigned int, int>::MinorIndex(
						int i);  // 193
				{
				}
				CUtlBlockMemory<unsigned int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::operator[](
						int i);  // 1199
				{
				}
				__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr(); // 742
				unique_ptr<int [], std::default_delete<int []> >::get(); // 735
				unique_ptr<int [], std::default_delete<int []> >::operator[](
						size_t __i);  // 1203
				AtomicSub(AtomicInt32_t& x,
						int nIncrement);  // 1203
				{
					SweepGroup_t* pNew1; // 1206
					__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
							size_t __i);  // 1206
					FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::QueueSweep(
							SweepGroup_t* pGroup);  // 1209
				}
			}
		}
		FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::ProcessFinishedGroup(
					SweepGroup_t* pGroup);  // 1160
	}
} /* size: 0, variables: 2 */

// <00987419> ../public/tier0/fastsweep.h:1116
// variables: 10
// function calls: 47
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::RunThread2()
{
	const char   __FUNCTION__; // 39701
	int nNumFinishedJobsToAccountFor; // 1119
	{
		SweepGroup_t* pWorkItem; // 1125
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1124
		}
		{
			int nNewValue; // 1132
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1131
			}
			CInterlockedIntT<int, 4>::operator int(); // 1131
			ThreadInterlockedExchangeAdd(volatile int32* p,
							int32 value);  // 660
			CInterlockedIntT<int, 4>::AtomicAdd(
					int add);  // 257
			AtomicSub(AtomicInt32_t& x,
					int nIncrement);  // 1132
		}
		{
			int i; // 1197
			{
				int nDepGroup; // 1199
				int nNewValue; // 1203
				{
					SweepGroup_t* pNew1; // 1206
					CInterlockedIntT<int, 4>::operator!=(
							int rhs);  // 496
					FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::QueueSweep(
							SweepGroup_t* pGroup);  // 1209
					__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
							size_t __i);  // 1206
				}
				CUtlBlockMemory<unsigned int, int>::MajorIndex(
						int i);  // 243
				CUtlBlockMemory<unsigned int, int>::IsIdxValid(
						int i);  // 191
				CUtlBlockMemory<unsigned int, int>::MajorIndex(
						int i);  // 192
				CUtlBlockMemory<unsigned int, int>::MinorIndex(
						int i);  // 193
				{
				}
				CUtlBlockMemory<unsigned int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::operator[](
						int i);  // 1199
				{
				}
				__uniq_ptr_impl<CInterlockedIntT<int, 4>, std::default_delete<CInterlockedIntT<int, 4> []> >::_M_ptr(); // 742
				unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::get(); // 735
				unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::operator[](
						size_t __i);  // 1203
				ThreadInterlockedExchangeAdd(volatile int32* p,
								int32 value);  // 660
				CInterlockedIntT<int, 4>::AtomicAdd(
						int add);  // 257
				AtomicSub(AtomicInt32_t& x,
						int nIncrement);  // 1203
			}
		}
		FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::ProcessFinishedGroup(
					SweepGroup_t* pGroup);  // 1160
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<SweepGroup_t::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<SweepGroup_t::PopItem(
			SweepGroup_t** pResult);  // 1127
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 582
		CInterlockedIntT<int, 4>::operator++(
				int);  // 1140
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<SweepGroup_t::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<SweepGroup_t::PopItem(
			SweepGroup_t** pResult);  // 1141
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 592
		CInterlockedIntT<int, 4>::operator--(
				int);  // 1143
		CThreadMultiWaitObject::GetWaitItem(
				ThreadMultiWaitItem_t* pItem,
				ThreadMultiWaitExtra_t* pExtra);  // 1782
		CThreadMultiWaitObject::Wait(
			uint32 nMillis);  // 1147
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 592
		CInterlockedIntT<int, 4>::operator--(
				int);  // 1148
		CInterlockedIntT<int, 4>::operator int(); // 1124
	}
	CInterlockedIntT<int, 4>::operator int(); // 1122
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <0098463D> ../public/tier0/fastsweep.h:1116
// variables: 10
// function calls: 30
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::RunThread2()
{
	const char   __FUNCTION__; // 39701
	int nNumFinishedJobsToAccountFor; // 1119
	{
		SweepGroup_t* pWorkItem; // 1125
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1124
		}
		{
			int nNewValue; // 1132
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1131
			}
			AtomicSub(AtomicInt32_t& x,
					int nIncrement);  // 1132
		}
		{
			int i; // 1197
			{
				int nDepGroup; // 1199
				int nNewValue; // 1203
				{
					SweepGroup_t* pNew1; // 1206
					FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::QueueSweep(
							SweepGroup_t* pGroup);  // 1209
					__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
							size_t __i);  // 1206
				}
				CUtlBlockMemory<unsigned int, int>::MajorIndex(
						int i);  // 243
				CUtlBlockMemory<unsigned int, int>::IsIdxValid(
						int i);  // 191
				CUtlBlockMemory<unsigned int, int>::MajorIndex(
						int i);  // 192
				CUtlBlockMemory<unsigned int, int>::MinorIndex(
						int i);  // 193
				{
				}
				CUtlBlockMemory<unsigned int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::operator[](
						int i);  // 1199
				{
				}
				__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr(); // 742
				unique_ptr<int [], std::default_delete<int []> >::get(); // 735
				unique_ptr<int [], std::default_delete<int []> >::operator[](
						size_t __i);  // 1203
				AtomicSub(AtomicInt32_t& x,
						int nIncrement);  // 1203
			}
		}
		FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::ProcessFinishedGroup(
					SweepGroup_t* pGroup);  // 1160
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<SweepGroup_t::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<SweepGroup_t::PopItem(
			SweepGroup_t** pResult);  // 1127
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<SweepGroup_t::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<SweepGroup_t::PopItem(
			SweepGroup_t** pResult);  // 1141
		CThreadMultiWaitObject::GetWaitItem(
				ThreadMultiWaitItem_t* pItem,
				ThreadMultiWaitExtra_t* pExtra);  // 1782
		CThreadMultiWaitObject::Wait(
			uint32 nMillis);  // 1147
	}
} /* size: 0, variables: 2 */

// <00981D60> ../public/tier0/fastsweep.h:1116
// variables: 10
// function calls: 30
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::RunThread2()
{
	const char   __FUNCTION__; // 39701
	int nNumFinishedJobsToAccountFor; // 1119
	{
		SweepGroup_t* pWorkItem; // 1125
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1124
		}
		{
			int nNewValue; // 1132
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1131
			}
			AtomicSub(AtomicInt32_t& x,
					int nIncrement);  // 1132
		}
		{
			int i; // 1197
			{
				int nDepGroup; // 1199
				int nNewValue; // 1203
				{
					SweepGroup_t* pNew1; // 1206
					FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::QueueSweep(
							SweepGroup_t* pGroup);  // 1209
					__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
							size_t __i);  // 1206
				}
				CUtlBlockMemory<unsigned int, int>::MajorIndex(
						int i);  // 243
				CUtlBlockMemory<unsigned int, int>::IsIdxValid(
						int i);  // 191
				CUtlBlockMemory<unsigned int, int>::MajorIndex(
						int i);  // 192
				CUtlBlockMemory<unsigned int, int>::MinorIndex(
						int i);  // 193
				{
				}
				CUtlBlockMemory<unsigned int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::operator[](
						int i);  // 1199
				{
				}
				__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr(); // 742
				unique_ptr<int [], std::default_delete<int []> >::get(); // 735
				unique_ptr<int [], std::default_delete<int []> >::operator[](
						size_t __i);  // 1203
				AtomicSub(AtomicInt32_t& x,
						int nIncrement);  // 1203
			}
		}
		FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::ProcessFinishedGroup(
					SweepGroup_t* pGroup);  // 1160
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<SweepGroup_t::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<SweepGroup_t::PopItem(
			SweepGroup_t** pResult);  // 1127
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<SweepGroup_t::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<SweepGroup_t::PopItem(
			SweepGroup_t** pResult);  // 1141
		CThreadMultiWaitObject::GetWaitItem(
				ThreadMultiWaitItem_t* pItem,
				ThreadMultiWaitExtra_t* pExtra);  // 1782
		CThreadMultiWaitObject::Wait(
			uint32 nMillis);  // 1147
	}
} /* size: 0, variables: 2 */

// <0097ECC7> ../public/tier0/fastsweep.h:1116
// variables: 18
// function calls: 63
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::RunThread2()
{
	const char   __FUNCTION__; // 39701
	int nNumFinishedJobsToAccountFor; // 1119
	{
		SweepGroup_t* pWorkItem; // 1125
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1124
		}
		{
			int nNewValue; // 1132
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1131
			}
			CInterlockedIntT<int, 4>::operator int(); // 1131
			ThreadInterlockedExchangeAdd(volatile int32* p,
							int32 value);  // 660
			CInterlockedIntT<int, 4>::AtomicAdd(
					int add);  // 257
			AtomicSub(AtomicInt32_t& x,
					int nIncrement);  // 1132
		}
		{
			int nIndex; // 559
			int nWhichSweep; // 560
			{
				IntAABB_t bounds; // 563
				IntVector3D vStart; // 564
				IntVector3D::IntVector3D(); // 301
				IntVector3D::IntVector3D(); // 301
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
				IntAABB_t::IntAABB_t(); // 419
				{
					int i; // 420
				}
				CFastSweepControllerBase::BlockBounds(
						IntVector3D vBlockIndex);  // 563
				IntVector3D::IntVector3D(); // 564
				{
				}
				CHeatTransferEquationControls::ExecuteOn4Blocks(
						IntVector3D vBlockIndex0,
						IntVector3D vBlockIndex1,
						IntVector3D vBlockIndex2,
						IntVector3D vBlockIndex3,
						int nWhichSweep,
						const IntAABB_t& vBounds,
						IntVector3D vStart,
						CFastSweepControllerBase* pController);  // 571
			}
		}
		{
			int i; // 551
			IntVector3D::IntVector3D(); // 301
			IntVector3D::IntVector3D(); // 301
			GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
			IntAABB_t::IntAABB_t(); // 419
			{
				int i; // 420
			}
			CFastSweepControllerBase::BlockBounds(
					IntVector3D vBlockIndex);  // 521
			IntVector3D::IntVector3D(); // 522
			{
				int nAxis; // 527
			}
			FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::ExecuteSweep(
					IntVector3D vBlockIndex,
					int nWhichSweep);  // 554
		}
		FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::ExecuteSweepGroup(
					SweepGroup_t* pWorkItem);  // 547
		FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::ExecuteSweepGroup(
					SweepGroup_t* pWorkItem);  // 1158
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<SweepGroup_t::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<SweepGroup_t::PopItem(
			SweepGroup_t** pResult);  // 1127
		ThreadInterlockedIncrement(volatile int32* p); // 576
		CInterlockedIntT<int, 4>::operator++(); // 582
		CInterlockedIntT<int, 4>::operator++(
				int);  // 1140
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<SweepGroup_t::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<SweepGroup_t::PopItem(
			SweepGroup_t** pResult);  // 1141
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 592
		CInterlockedIntT<int, 4>::operator--(
				int);  // 1143
		CThreadMultiWaitObject::GetWaitItem(
				ThreadMultiWaitItem_t* pItem,
				ThreadMultiWaitExtra_t* pExtra);  // 1782
		CThreadMultiWaitObject::Wait(
			uint32 nMillis);  // 1147
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 592
		CInterlockedIntT<int, 4>::operator--(
				int);  // 1148
		CInterlockedIntT<int, 4>::operator int(); // 1124
		{
			int i; // 1197
			{
				int nDepGroup; // 1199
				int nNewValue; // 1203
				CUtlBlockMemory<unsigned int, int>::MajorIndex(
						int i);  // 243
				CUtlBlockMemory<unsigned int, int>::IsIdxValid(
						int i);  // 191
				CUtlBlockMemory<unsigned int, int>::MajorIndex(
						int i);  // 192
				CUtlBlockMemory<unsigned int, int>::MinorIndex(
						int i);  // 193
				{
				}
				CUtlBlockMemory<unsigned int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::operator[](
						int i);  // 1199
				{
				}
				ThreadInterlockedExchangeAdd(volatile int32* p,
								int32 value);  // 660
				CInterlockedIntT<int, 4>::AtomicAdd(
						int add);  // 257
				AtomicSub(AtomicInt32_t& x,
						int nIncrement);  // 1203
				__uniq_ptr_impl<CInterlockedIntT<int, 4>, std::default_delete<CInterlockedIntT<int, 4> []> >::_M_ptr(); // 742
				unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::get(); // 735
				unique_ptr<CInterlockedIntT<int, 4> [], std::default_delete<CInterlockedIntT<int, 4> []> >::operator[](
						size_t __i);  // 1203
				{
					SweepGroup_t* pNew1; // 1206
					__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
							size_t __i);  // 1206
					CInterlockedIntT<int, 4>::operator!=(
							int rhs);  // 496
					FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::QueueSweep(
							SweepGroup_t* pGroup);  // 1209
				}
			}
		}
		FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::ProcessFinishedGroup(
					SweepGroup_t* pGroup);  // 1160
	}
	CInterlockedIntT<int, 4>::operator int(); // 1122
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <0097B6E1> ../public/tier0/fastsweep.h:1116
// variables: 18
// function calls: 70
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::RunThread2()
{
	const char   __FUNCTION__; // 39701
	int nNumFinishedJobsToAccountFor; // 1119
	{
		SweepGroup_t* pWorkItem; // 1125
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1124
		}
		{
			int nNewValue; // 1132
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1131
			}
			AtomicSub(AtomicInt32_t& x,
					int nIncrement);  // 1132
		}
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<SweepGroup_t::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<SweepGroup_t::PopItem(
			SweepGroup_t** pResult);  // 1127
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<SweepGroup_t::FreeNode(
			Node_t* pNode);  // 1103
		CTSQueue<SweepGroup_t::PopItem(
			SweepGroup_t** pResult);  // 1141
		CThreadMultiWaitObject::GetWaitItem(
				ThreadMultiWaitItem_t* pItem,
				ThreadMultiWaitExtra_t* pExtra);  // 1782
		CThreadMultiWaitObject::Wait(
			uint32 nMillis);  // 1147
		{
			int nIndex; // 559
			int nWhichSweep; // 560
			{
				IntAABB_t bounds; // 563
				IntVector3D vStart; // 564
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 3816
				IntAABB_t::Width(); // 457
				IntAABB_t::Height(); // 457
				IntAABB_t::Depth(); // 457
				IntVector3D::IntVector3D(
						int nX,
						int nY,
						int nZ);  // 457
				IntAABB_t::Size(); // 3817
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 3820
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 3823
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 3822
				CSOAContainer::ElementPointer<float>(
							int nAttributeIdx,
							int nX,
							int nY,
							int nZ);  // 3821
				IntVector3D::IntVector3D(
						int nX,
						int nY,
						int nZ);  // 3817
				CGutterFillingControls::ExecuteOnBlock(
						IntVector3D vBlockIndex,
						int nWhichSweep,
						const IntAABB_t& vBounds,
						IntVector3D vStart,
						CFastSweepControllerBase* pController,
						int nBoundaryMask);  // 581
				IntVector3D::IntVector3D(); // 301
				IntVector3D::IntVector3D(); // 301
				GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
				IntAABB_t::IntAABB_t(); // 419
				{
					int i; // 420
				}
				CFastSweepControllerBase::BlockBounds(
						IntVector3D vBlockIndex);  // 563
				IntVector3D::IntVector3D(); // 564
				{
				}
				CGutterFillingControls::ExecuteOn4Blocks(
						IntVector3D vBlockIndex0,
						IntVector3D vBlockIndex1,
						IntVector3D vBlockIndex2,
						IntVector3D vBlockIndex3,
						int nWhichSweep,
						const IntAABB_t& vBounds,
						IntVector3D vStart,
						CFastSweepControllerBase* pController);  // 571
			}
		}
		{
			int i; // 551
			IntVector3D::IntVector3D(); // 301
			IntVector3D::IntVector3D(); // 301
			GenericBoundingBox_t<IntVector3D, 3>::GenericBoundingBox_t(); // 434
			IntAABB_t::IntAABB_t(); // 419
			{
				int i; // 420
			}
			CFastSweepControllerBase::BlockBounds(
					IntVector3D vBlockIndex);  // 521
			IntVector3D::IntVector3D(); // 522
			{
				int nAxis; // 527
			}
			CSOAContainer::ElementPointer<float>(
						int nAttributeIdx,
						int nX,
						int nY,
						int nZ);  // 3816
			IntAABB_t::Width(); // 457
			IntAABB_t::Depth(); // 457
			IntAABB_t::Height(); // 457
			IntVector3D::IntVector3D(
					int nX,
					int nY,
					int nZ);  // 457
			IntAABB_t::Size(); // 3817
			CSOAContainer::ElementPointer<float>(
						int nAttributeIdx,
						int nX,
						int nY,
						int nZ);  // 3823
			CSOAContainer::ElementPointer<float>(
						int nAttributeIdx,
						int nX,
						int nY,
						int nZ);  // 3822
			CSOAContainer::ElementPointer<float>(
						int nAttributeIdx,
						int nX,
						int nY,
						int nZ);  // 3821
			CSOAContainer::ElementPointer<float>(
						int nAttributeIdx,
						int nX,
						int nY,
						int nZ);  // 3820
			IntVector3D::IntVector3D(
					int nX,
					int nY,
					int nZ);  // 3817
			CGutterFillingControls::ExecuteOnBlock(
					IntVector3D vBlockIndex,
					int nWhichSweep,
					const IntAABB_t& vBounds,
					IntVector3D vStart,
					CFastSweepControllerBase* pController,
					int nBoundaryMask);  // 544
			FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::ExecuteSweep(
					IntVector3D vBlockIndex,
					int nWhichSweep);  // 554
		}
		FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::ExecuteSweepGroup(
					SweepGroup_t* pWorkItem);  // 547
		FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::ExecuteSweepGroup(
					SweepGroup_t* pWorkItem);  // 1158
		{
			int i; // 1197
			{
				int nDepGroup; // 1199
				int nNewValue; // 1203
				CUtlBlockMemory<unsigned int, int>::MajorIndex(
						int i);  // 243
				CUtlBlockMemory<unsigned int, int>::IsIdxValid(
						int i);  // 191
				CUtlBlockMemory<unsigned int, int>::MajorIndex(
						int i);  // 192
				CUtlBlockMemory<unsigned int, int>::MinorIndex(
						int i);  // 193
				{
				}
				CUtlBlockMemory<unsigned int, int>::operator[](
						int i);  // 588
				CUtlVectorBase<unsigned int, CUtlBlockMemory<unsigned int, int> >::operator[](
						int i);  // 1199
				{
				}
				__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr(); // 742
				unique_ptr<int [], std::default_delete<int []> >::get(); // 735
				unique_ptr<int [], std::default_delete<int []> >::operator[](
						size_t __i);  // 1203
				AtomicSub(AtomicInt32_t& x,
						int nIncrement);  // 1203
				{
					SweepGroup_t* pNew1; // 1206
					__uniq_ptr_impl<SweepGroup_t, std::default_delete<SweepGroup_t []> >::_M_ptr(); // 742
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::get(); // 735
					unique_ptr<SweepGroup_t [], std::default_delete<SweepGroup_t []> >::operator[](
							size_t __i);  // 1206
					FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::QueueSweep(
							SweepGroup_t* pGroup);  // 1209
				}
			}
		}
		FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::ProcessFinishedGroup(
					SweepGroup_t* pGroup);  // 1160
	}
} /* size: 0, variables: 2 */

// <044B6919> ../public/tier0/fastsweep.h:1168
// variables: 7
// function calls: 36
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::Run()
{
	int nWorkers; // 1171
	{
		CCallQueue workList; // 1178
		{
			int i; // 1179
			{
				CCallQueue::ResumeProcessing(); // 115
				_Function_base::_Function_base(); // 407
				function<void()>::operator bool()>* this); // 409
				function<void()>::function(
					function<void()>& __x); // 102
				CCallQueue::QueueCall(
						function<void()>& fnCall);  // 96
				function<void()>::operator()(const function<void()>* this); // 110
				CCallQueue::QueueCall(
						function<void()>& fnCall);  // 1181
				_Function_base::~_Function_base(); // 336
				function<void()>::~function()>* this); // 1181
				{
					_M_not_empty_function<FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::Run()::<lambda()> >(const &); // 449
					_M_create<FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::Run()::<lambda()> >(union _Any_data& __dest,
																class& __f,
																true_type); // 217
					_M_init_functor<FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::Run()::<lambda()> >(union _Any_data& __functor,
																class& __f); // 451
				}
				_Function_base::_Function_base(); // 439
				function<void()>::function<FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::Run(
																class& __f); // 1181
			}
		}
		CTSListBase::CTSListBase(); // 846
		ThreadInterlockedExchange(volatile int32* p,
						int32 value);  // 641
		CInterlockedIntT<int, 4>::operator=(
				int newValue);  // 862
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
		Node_t::Node_t(); // 864
		CTSQueue<std::function<void()>::End()>*, false>* this); // 865
		CTSQueue<std::function<void()>::CTSQueue()>*, false>* this); // 13
		CCallQueue::CCallQueue(); // 1178
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<std::function<void()>::FreeNode(
			Node_t* pNode); // 1103
		CTSQueue<std::function<void()>::PopItem(
			function<void()>** pResult); // 75
		_Function_base::~_Function_base(); // 336
		function<void()>::~function()>* this); // 77
		CCallQueue::ResumeProcessing(); // 80
		CCallQueue::Flush(); // 17
		CCallQueue::~CCallQueue(); // 1184
	}
	MaxWorkers(void); // 1171
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <044B45FF> ../public/tier0/fastsweep.h:1168
// variables: 3
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::Run()
{
	int nWorkers; // 1171
	{
		CCallQueue workList; // 1178
		{
			int i; // 1179
			{
			}
		}
	}
} /* size: 0, variables: 1 */

// <044B237B> ../public/tier0/fastsweep.h:1168
// variables: 3
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::Run()
{
	int nWorkers; // 1171
	{
		CCallQueue workList; // 1178
		{
			int i; // 1179
			{
			}
		}
	}
} /* size: 0, variables: 1 */

// <044AEF06> ../public/tier0/fastsweep.h:1168
// variables: 7
// function calls: 36
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::Run()
{
	int nWorkers; // 1171
	{
		CCallQueue workList; // 1178
		{
			int i; // 1179
			{
				CCallQueue::ResumeProcessing(); // 115
				_Function_base::_Function_base(); // 407
				function<void()>::operator bool()>* this); // 409
				function<void()>::function(
					function<void()>& __x); // 102
				CCallQueue::QueueCall(
						function<void()>& fnCall);  // 96
				function<void()>::operator()(const function<void()>* this); // 110
				CCallQueue::QueueCall(
						function<void()>& fnCall);  // 1181
				_Function_base::~_Function_base(); // 336
				function<void()>::~function()>* this); // 1181
				{
					_M_not_empty_function<FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::Run()::<lambda()> >(const &); // 449
					_M_create<FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::Run()::<lambda()> >(union _Any_data& __dest,
																class& __f,
																true_type); // 217
					_M_init_functor<FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::Run()::<lambda()> >(union _Any_data& __functor,
																class& __f); // 451
				}
				_Function_base::_Function_base(); // 439
				function<void()>::function<FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::Run(
																class& __f); // 1181
			}
		}
		CTSListBase::CTSListBase(); // 846
		ThreadInterlockedExchange(volatile int32* p,
						int32 value);  // 641
		CInterlockedIntT<int, 4>::operator=(
				int newValue);  // 862
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
		Node_t::Node_t(); // 864
		CTSQueue<std::function<void()>::End()>*, false>* this); // 865
		CTSQueue<std::function<void()>::CTSQueue()>*, false>* this); // 13
		CCallQueue::CCallQueue(); // 1178
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<std::function<void()>::FreeNode(
			Node_t* pNode); // 1103
		CTSQueue<std::function<void()>::PopItem(
			function<void()>** pResult); // 75
		_Function_base::~_Function_base(); // 336
		function<void()>::~function()>* this); // 77
		CCallQueue::ResumeProcessing(); // 80
		CCallQueue::Flush(); // 17
		CCallQueue::~CCallQueue(); // 1184
	}
	MaxWorkers(void); // 1171
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <044ACC7C> ../public/tier0/fastsweep.h:1168
// variables: 3
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::Run()
{
	int nWorkers; // 1171
	{
		CCallQueue workList; // 1178
		{
			int i; // 1179
			{
			}
		}
	}
} /* size: 0, variables: 1 */

// <0449774A> ../public/tier0/fastsweep.h:1189
// variables: 7
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::ProcessFinishedGroup(SweepGroup_t* pGroup)
{
	const char   __FUNCTION__; // 6739
	{
		int i; // 1192
	}
	{
		int i; // 1197
		{
			int nDepGroup; // 1199
			int nNewValue; // 1203
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1200
			}
			{
				SweepGroup_t* pNew1; // 1206
			}
		}
	}
} /* size: 0, variables: 1 */

// <044955F3> ../public/tier0/fastsweep.h:1189
// variables: 7
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::ProcessFinishedGroup(SweepGroup_t* pGroup)
{
	const char   __FUNCTION__; // 6739
	{
		int i; // 1192
	}
	{
		int i; // 1197
		{
			int nDepGroup; // 1199
			int nNewValue; // 1203
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1200
			}
			{
				SweepGroup_t* pNew1; // 1206
			}
		}
	}
} /* size: 0, variables: 1 */

// <0449443E> ../public/tier0/fastsweep.h:1189
// variables: 7
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::ProcessFinishedGroup(SweepGroup_t* pGroup)
{
	const char   __FUNCTION__; // 6739
	{
		int i; // 1192
	}
	{
		int i; // 1197
		{
			int nDepGroup; // 1199
			int nNewValue; // 1203
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1200
			}
			{
				SweepGroup_t* pNew1; // 1206
			}
		}
	}
} /* size: 0, variables: 1 */

// <04492F41> ../public/tier0/fastsweep.h:1189
// variables: 7
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::ProcessFinishedGroup(SweepGroup_t* pGroup)
{
	const char   __FUNCTION__; // 6739
	{
		int i; // 1192
	}
	{
		int i; // 1197
		{
			int nDepGroup; // 1199
			int nNewValue; // 1203
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1200
			}
			{
				SweepGroup_t* pNew1; // 1206
			}
		}
	}
} /* size: 0, variables: 1 */

// <0449174A> ../public/tier0/fastsweep.h:1189
// variables: 7
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::ProcessFinishedGroup(SweepGroup_t* pGroup)
{
	const char   __FUNCTION__; // 6739
	{
		int i; // 1192
	}
	{
		int i; // 1197
		{
			int nDepGroup; // 1199
			int nNewValue; // 1203
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1200
			}
			{
				SweepGroup_t* pNew1; // 1206
			}
		}
	}
} /* size: 0, variables: 1 */

// <01AF2E5C> ../public/tier0/fastsweep.h:1189
// variables: 7
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::ProcessFinishedGroup(SweepGroup_t* pGroup)
{
	const char   __FUNCTION__; // 47128
	{
		int i; // 1192
	}
	{
		int i; // 1197
		{
			int nDepGroup; // 1199
			int nNewValue; // 1203
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1200
			}
			{
				SweepGroup_t* pNew1; // 1206
			}
		}
	}
} /* size: 0, variables: 1 */

// <01AF0D05> ../public/tier0/fastsweep.h:1189
// variables: 7
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::ProcessFinishedGroup(SweepGroup_t* pGroup)
{
	const char   __FUNCTION__; // 47128
	{
		int i; // 1192
	}
	{
		int i; // 1197
		{
			int nDepGroup; // 1199
			int nNewValue; // 1203
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1200
			}
			{
				SweepGroup_t* pNew1; // 1206
			}
		}
	}
} /* size: 0, variables: 1 */

// <01AEFB50> ../public/tier0/fastsweep.h:1189
// variables: 7
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::ProcessFinishedGroup(SweepGroup_t* pGroup)
{
	const char   __FUNCTION__; // 47128
	{
		int i; // 1192
	}
	{
		int i; // 1197
		{
			int nDepGroup; // 1199
			int nNewValue; // 1203
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1200
			}
			{
				SweepGroup_t* pNew1; // 1206
			}
		}
	}
} /* size: 0, variables: 1 */

// <01AEE653> ../public/tier0/fastsweep.h:1189
// variables: 7
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::ProcessFinishedGroup(SweepGroup_t* pGroup)
{
	const char   __FUNCTION__; // 47128
	{
		int i; // 1192
	}
	{
		int i; // 1197
		{
			int nDepGroup; // 1199
			int nNewValue; // 1203
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1200
			}
			{
				SweepGroup_t* pNew1; // 1206
			}
		}
	}
} /* size: 0, variables: 1 */

// <01AECE5C> ../public/tier0/fastsweep.h:1189
// variables: 7
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::ProcessFinishedGroup(SweepGroup_t* pGroup)
{
	const char   __FUNCTION__; // 47128
	{
		int i; // 1192
	}
	{
		int i; // 1197
		{
			int nDepGroup; // 1199
			int nNewValue; // 1203
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1200
			}
			{
				SweepGroup_t* pNew1; // 1206
			}
		}
	}
} /* size: 0, variables: 1 */

// <009786BF> ../public/tier0/fastsweep.h:1189
// variables: 7
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::ProcessFinishedGroup(SweepGroup_t* pGroup)
{
	const char   __FUNCTION__; // 39848
	{
		int i; // 1192
	}
	{
		int i; // 1197
		{
			int nDepGroup; // 1199
			int nNewValue; // 1203
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1200
			}
			{
				SweepGroup_t* pNew1; // 1206
			}
		}
	}
} /* size: 0, variables: 1 */

// <00976568> ../public/tier0/fastsweep.h:1189
// variables: 7
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::ProcessFinishedGroup(SweepGroup_t* pGroup)
{
	const char   __FUNCTION__; // 39848
	{
		int i; // 1192
	}
	{
		int i; // 1197
		{
			int nDepGroup; // 1199
			int nNewValue; // 1203
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1200
			}
			{
				SweepGroup_t* pNew1; // 1206
			}
		}
	}
} /* size: 0, variables: 1 */

// <009753B3> ../public/tier0/fastsweep.h:1189
// variables: 7
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::ProcessFinishedGroup(SweepGroup_t* pGroup)
{
	const char   __FUNCTION__; // 39848
	{
		int i; // 1192
	}
	{
		int i; // 1197
		{
			int nDepGroup; // 1199
			int nNewValue; // 1203
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1200
			}
			{
				SweepGroup_t* pNew1; // 1206
			}
		}
	}
} /* size: 0, variables: 1 */

// <00973EB6> ../public/tier0/fastsweep.h:1189
// variables: 7
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::ProcessFinishedGroup(SweepGroup_t* pGroup)
{
	const char   __FUNCTION__; // 39848
	{
		int i; // 1192
	}
	{
		int i; // 1197
		{
			int nDepGroup; // 1199
			int nNewValue; // 1203
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1200
			}
			{
				SweepGroup_t* pNew1; // 1206
			}
		}
	}
} /* size: 0, variables: 1 */

// <009726BF> ../public/tier0/fastsweep.h:1189
// variables: 7
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::ProcessFinishedGroup(SweepGroup_t* pGroup)
{
	const char   __FUNCTION__; // 39848
	{
		int i; // 1192
	}
	{
		int i; // 1197
		{
			int nDepGroup; // 1199
			int nNewValue; // 1203
			{
				const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 1200
			}
			{
				SweepGroup_t* pNew1; // 1206
			}
		}
	}
} /* size: 0, variables: 1 */

// <044B812C> ../public/tier0/fastsweep.h:1216
// variables: 7
// function calls: 36
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::RunAlgorithm2()
{
	int nWorkers; // 1219
	{
		CCallQueue workList; // 1227
		{
			int i; // 1228
			{
				CCallQueue::ResumeProcessing(); // 115
				_Function_base::_Function_base(); // 407
				function<void()>::operator bool()>* this); // 409
				function<void()>::function(
					function<void()>& __x); // 102
				CCallQueue::QueueCall(
						function<void()>& fnCall);  // 96
				function<void()>::operator()(const function<void()>* this); // 110
				CCallQueue::QueueCall(
						function<void()>& fnCall);  // 1230
				_Function_base::~_Function_base(); // 336
				function<void()>::~function()>* this); // 1230
				{
					_M_not_empty_function<FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::RunAlgorithm2()::<lambda()> >(const &); // 449
					_M_create<FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::RunAlgorithm2()::<lambda()> >(union _Any_data& __dest,
																class& __f,
																true_type); // 217
					_M_init_functor<FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::RunAlgorithm2()::<lambda()> >(union _Any_data& __functor,
																class& __f); // 451
				}
				_Function_base::_Function_base(); // 439
				function<void()>::function<FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CEikonalExecuteControls> >::RunAlgorithm2(
																class& __f); // 1230
			}
		}
		CTSListBase::CTSListBase(); // 846
		ThreadInterlockedExchange(volatile int32* p,
						int32 value);  // 641
		CInterlockedIntT<int, 4>::operator=(
				int newValue);  // 862
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
		Node_t::Node_t(); // 864
		CTSQueue<std::function<void()>::End()>*, false>* this); // 865
		CTSQueue<std::function<void()>::CTSQueue()>*, false>* this); // 13
		CCallQueue::CCallQueue(); // 1227
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<std::function<void()>::FreeNode(
			Node_t* pNode); // 1103
		CTSQueue<std::function<void()>::PopItem(
			function<void()>** pResult); // 75
		_Function_base::~_Function_base(); // 336
		function<void()>::~function()>* this); // 77
		CCallQueue::ResumeProcessing(); // 80
		CCallQueue::Flush(); // 17
		CCallQueue::~CCallQueue(); // 1233
	}
	MaxWorkers(void); // 1219
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <044B5414> ../public/tier0/fastsweep.h:1216
// variables: 3
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CEikonalExecuteControls> >::RunAlgorithm2()
{
	int nWorkers; // 1219
	{
		CCallQueue workList; // 1227
		{
			int i; // 1228
			{
			}
		}
	}
} /* size: 0, variables: 1 */

// <044B3190> ../public/tier0/fastsweep.h:1216
// variables: 3
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CDistanceFieldReinitializationControls> >::RunAlgorithm2()
{
	int nWorkers; // 1219
	{
		CCallQueue workList; // 1227
		{
			int i; // 1228
			{
			}
		}
	}
} /* size: 0, variables: 1 */

// <044B06A8> ../public/tier0/fastsweep.h:1216
// variables: 7
// function calls: 36
void FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::RunAlgorithm2()
{
	int nWorkers; // 1219
	{
		CCallQueue workList; // 1227
		{
			int i; // 1228
			{
				CCallQueue::ResumeProcessing(); // 115
				_Function_base::_Function_base(); // 407
				function<void()>::operator bool()>* this); // 409
				function<void()>::function(
					function<void()>& __x); // 102
				CCallQueue::QueueCall(
						function<void()>& fnCall);  // 96
				function<void()>::operator()(const function<void()>* this); // 110
				CCallQueue::QueueCall(
						function<void()>& fnCall);  // 1230
				_Function_base::~_Function_base(); // 336
				function<void()>::~function()>* this); // 1230
				{
					_M_not_empty_function<FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::RunAlgorithm2()::<lambda()> >(const &); // 449
					_M_create<FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::RunAlgorithm2()::<lambda()> >(union _Any_data& __dest,
																class& __f,
																true_type); // 217
					_M_init_functor<FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::RunAlgorithm2()::<lambda()> >(union _Any_data& __functor,
																class& __f); // 451
				}
				_Function_base::_Function_base(); // 439
				function<void()>::function<FastSweepThreadedExecutionState<JoinedClasses_t<CValveThreadingControls, CHeatTransferEquationControls> >::RunAlgorithm2(
																class& __f); // 1230
			}
		}
		CTSListBase::CTSListBase(); // 846
		ThreadInterlockedExchange(volatile int32* p,
						int32 value);  // 641
		CInterlockedIntT<int, 4>::operator=(
				int newValue);  // 862
		CInterlockedIntT<int, 4>::CInterlockedIntT(); // 846
		Node_t::Node_t(); // 864
		CTSQueue<std::function<void()>::End()>*, false>* this); // 865
		CTSQueue<std::function<void()>::CTSQueue()>*, false>* this); // 13
		CCallQueue::CCallQueue(); // 1227
		ThreadPause(void); // 173
		ThreadInterlockedAssignIf128(volatile int128* pDest,
						const int128& value,
						const int128& comparand);  // 478
		ThreadInterlockedAssignIfPointerX2(volatile InterlockedPointerX2SizedInt_t* pDest,
							const InterlockedPointerX2SizedInt_t& value,
							const InterlockedPointerX2SizedInt_t& comperand);  // 168
		CTSListBase::Push(
			TSLNodeBase_t* pNode);  // 1080
		CTSQueue<std::function<void()>::FreeNode(
			Node_t* pNode); // 1103
		CTSQueue<std::function<void()>::PopItem(
			function<void()>** pResult); // 75
		_Function_base::~_Function_base(); // 336
		function<void()>::~function()>* this); // 77
		CCallQueue::ResumeProcessing(); // 80
		CCallQueue::Flush(); // 17
		CCallQueue::~CCallQueue(); // 1233
	}
	MaxWorkers(void); // 1219
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <044ADA97> ../public/tier0/fastsweep.h:1216
// variables: 3
void FastSweepThreadedExecutionState<JoinedClasses_t<CNonThreadedControls, CGutterFillingControls> >::RunAlgorithm2()
{
	int nWorkers; // 1219
	{
		CCallQueue workList; // 1227
		{
			int i; // 1228
			{
			}
		}
	}
} /* size: 0, variables: 1 */

// <04498CB1> ../public/tier0/fastsweep.h:1238
// variable: 1
inline float UpWindDifferenceEstimate2D<true>(float d1, float d2, float H)
{
	float d; // 1250
} /* size: 0, variables: 1 */

// <04498C05> ../public/tier0/fastsweep.h:1238
// variable: 1
inline float UpWindDifferenceEstimate2D<false>(float d1, float d2, float H)
{
	float d; // 1250
} /* size: 0, variables: 1 */

// <044A99C2> ../public/tier0/fastsweep.h:1264
// variables: 4
inline fltx4 UpWindDifferenceEstimate2DSIMD<true, (ESIMDLevel)40>(fltx4 fl4D1, fltx4 fl4D2, fltx4 fl4H)
{
	fltx4 fl4Closest; // 1271
	fltx4 fl4Farthest; // 1272
	fltx4 fl4DistanceEst1; // 1273
	fltx4 fl4DistanceEst2; // 1274
} /* size: 0, variables: 4 */

// <044A963A> ../public/tier0/fastsweep.h:1264
// variables: 4
inline fltx4 UpWindDifferenceEstimate2DSIMD<false, (ESIMDLevel)40>(fltx4 fl4D1, fltx4 fl4D2, fltx4 fl4H)
{
	fltx4 fl4Closest; // 1271
	fltx4 fl4Farthest; // 1272
	fltx4 fl4DistanceEst1; // 1273
	fltx4 fl4DistanceEst2; // 1274
} /* size: 0, variables: 4 */

// <044A941C> ../public/tier0/fastsweep.h:1264
// variables: 4
inline fltx4 UpWindDifferenceEstimate2DSIMD<true, (ESIMDLevel)20>(fltx4 fl4D1, fltx4 fl4D2, fltx4 fl4H)
{
	fltx4 fl4Closest; // 1271
	fltx4 fl4Farthest; // 1272
	fltx4 fl4DistanceEst1; // 1273
	fltx4 fl4DistanceEst2; // 1274
} /* size: 0, variables: 4 */

// <044A91FD> ../public/tier0/fastsweep.h:1264
// variables: 4
inline fltx4 UpWindDifferenceEstimate2DSIMD<false, (ESIMDLevel)20>(fltx4 fl4D1, fltx4 fl4D2, fltx4 fl4H)
{
	fltx4 fl4Closest; // 1271
	fltx4 fl4Farthest; // 1272
	fltx4 fl4DistanceEst1; // 1273
	fltx4 fl4DistanceEst2; // 1274
} /* size: 0, variables: 4 */

// <04498C55> ../public/tier0/fastsweep.h:1278
// variable: 1
inline float UpWindDifferenceEstimate3D<true>(float d1, float d2, float d3, float H)
{
	float d; // 1300
} /* size: 0, variables: 1 */

// <04498BA9> ../public/tier0/fastsweep.h:1278
// variable: 1
inline float UpWindDifferenceEstimate3D<false>(float d1, float d2, float d3, float H)
{
	float d; // 1300
} /* size: 0, variables: 1 */

// <044A9892> ../public/tier0/fastsweep.h:1314
// variables: 16
inline fltx4 UpWindDifferenceEstimate3DSIMD<true, (ESIMDLevel)40>(fltx4 fl4D1, fltx4 fl4D2, fltx4 fl4D3, const fltx4& fl4H)
{
	fltx4 fl4Max12; // 1324
	fltx4 fl4Min12; // 1325
	fltx4 fl4Max02; // 1329
	fltx4 fl4Min02; // 1330
	fltx4 fl4Max01; // 1334
	fltx4 fl4Min01; // 1335
	fltx4 fl4Est01; // 1340
	fltx4 fl4HH; // 1341
	fltx4 fl4D1MinusD2; // 1342
	fltx4 fl4D1PlusD2; // 1343
	fltx4 fl4SqrtTerm0; // 1344
	fltx4 fl4Est02; // 1345
	fltx4 fl4Est03; // 1346
	fltx4 fl4SqrtTerm; // 1347
	fltx4 fl4Ret; // 1355
	fltx4 fl4Keep; // 1356
} /* size: 0, variables: 16 */

// <044A950A> ../public/tier0/fastsweep.h:1314
// variables: 16
inline fltx4 UpWindDifferenceEstimate3DSIMD<false, (ESIMDLevel)40>(fltx4 fl4D1, fltx4 fl4D2, fltx4 fl4D3, const fltx4& fl4H)
{
	fltx4 fl4Max12; // 1324
	fltx4 fl4Min12; // 1325
	fltx4 fl4Max02; // 1329
	fltx4 fl4Min02; // 1330
	fltx4 fl4Max01; // 1334
	fltx4 fl4Min01; // 1335
	fltx4 fl4Est01; // 1340
	fltx4 fl4HH; // 1341
	fltx4 fl4D1MinusD2; // 1342
	fltx4 fl4D1PlusD2; // 1343
	fltx4 fl4SqrtTerm0; // 1344
	fltx4 fl4Est02; // 1345
	fltx4 fl4Est03; // 1346
	fltx4 fl4SqrtTerm; // 1347
	fltx4 fl4Ret; // 1355
	fltx4 fl4Keep; // 1356
} /* size: 0, variables: 16 */

// <044A92EC> ../public/tier0/fastsweep.h:1314
// variables: 16
inline fltx4 UpWindDifferenceEstimate3DSIMD<true, (ESIMDLevel)20>(fltx4 fl4D1, fltx4 fl4D2, fltx4 fl4D3, const fltx4& fl4H)
{
	fltx4 fl4Max12; // 1324
	fltx4 fl4Min12; // 1325
	fltx4 fl4Max02; // 1329
	fltx4 fl4Min02; // 1330
	fltx4 fl4Max01; // 1334
	fltx4 fl4Min01; // 1335
	fltx4 fl4Est01; // 1340
	fltx4 fl4HH; // 1341
	fltx4 fl4D1MinusD2; // 1342
	fltx4 fl4D1PlusD2; // 1343
	fltx4 fl4SqrtTerm0; // 1344
	fltx4 fl4Est02; // 1345
	fltx4 fl4Est03; // 1346
	fltx4 fl4SqrtTerm; // 1347
	fltx4 fl4Ret; // 1355
	fltx4 fl4Keep; // 1356
} /* size: 0, variables: 16 */

// <044A90CD> ../public/tier0/fastsweep.h:1314
// variables: 16
inline fltx4 UpWindDifferenceEstimate3DSIMD<false, (ESIMDLevel)20>(fltx4 fl4D1, fltx4 fl4D2, fltx4 fl4D3, const fltx4& fl4H)
{
	fltx4 fl4Max12; // 1324
	fltx4 fl4Min12; // 1325
	fltx4 fl4Max02; // 1329
	fltx4 fl4Min02; // 1330
	fltx4 fl4Max01; // 1334
	fltx4 fl4Min01; // 1335
	fltx4 fl4Est01; // 1340
	fltx4 fl4HH; // 1341
	fltx4 fl4D1MinusD2; // 1342
	fltx4 fl4D1PlusD2; // 1343
	fltx4 fl4SqrtTerm0; // 1344
	fltx4 fl4Est02; // 1345
	fltx4 fl4Est03; // 1346
	fltx4 fl4SqrtTerm; // 1347
	fltx4 fl4Ret; // 1355
	fltx4 fl4Keep; // 1356
} /* size: 0, variables: 16 */

