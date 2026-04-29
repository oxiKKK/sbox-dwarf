
//
// public/tier0/utlcommon.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libfilesystem_stdio.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libtier0.so
//				   libvfx_vulkan.so
//
//	functions: 322
//	classes: 104
//	structs: 179
//

// <00946369> ../public/tier0/utlcommon.h:25
// struct size: 1
struct CTypeSelect<1, short unsigned int, unsigned int> {
	/* ../public/tier0/utlcommon.h:25 */
	typedef short unsigned int type;
};

// <00946F5C> ../public/tier0/utlcommon.h:25
// struct size: 1
struct CTypeSelect<1, short int, int> {
	/* ../public/tier0/utlcommon.h:25 */
	typedef short int type;
};

// <00946F8E> ../public/tier0/utlcommon.h:25
// struct size: 1
struct CTypeSelect<1, short unsigned int, undefined_t> {
	/* ../public/tier0/utlcommon.h:25 */
	typedef short unsigned int type;
};

// <00946FC0> ../public/tier0/utlcommon.h:25
// struct size: 1
struct CTypeSelect<1, undefined_t, unsigned int> {
	/* ../public/tier0/utlcommon.h:25 */
	typedef struct undefined_t type;
};

// <0001B966> ../public/tier0/utlcommon.h:28
// struct size: 1
struct CTypeSelect<0, short int, int> {
	/* ../public/tier0/utlcommon.h:28 */
	typedef int type;
};

// <0001B998> ../public/tier0/utlcommon.h:28
// struct size: 1
struct CTypeSelect<0, short unsigned int, undefined_t> {
	/* ../public/tier0/utlcommon.h:28 */
	typedef struct undefined_t type;
};

// <0001B9CA> ../public/tier0/utlcommon.h:28
// struct size: 1
struct CTypeSelect<0, undefined_t, unsigned int> {
	/* ../public/tier0/utlcommon.h:28 */
	typedef unsigned int type;
};

// <002197CC> ../../public/tier0/utlcommon.h:28
// struct size: 1
struct CTypeSelect<0, short int, int> {
	/* ../../public/tier0/utlcommon.h:28 */
	typedef int type;
};

// <002197FE> ../../public/tier0/utlcommon.h:28
// struct size: 1
struct CTypeSelect<0, short unsigned int, undefined_t> {
	/* ../../public/tier0/utlcommon.h:28 */
	typedef struct undefined_t type;
};

// <00219830> ../../public/tier0/utlcommon.h:28
// struct size: 1
struct CTypeSelect<0, undefined_t, unsigned int> {
	/* ../../public/tier0/utlcommon.h:28 */
	typedef unsigned int type;
};

// <04AAA0F3> ../public/tier0/utlcommon.h:51
void CUtlKeyValuePair<CUtlString, int>::~CUtlKeyValuePair()
{
} /* size: 0 */

// <04AAA0D7> ../public/tier0/utlcommon.h:51
inline void CUtlKeyValuePair<CUtlString, int>::~CUtlKeyValuePair()
{
} /* size: 0 */

// <02E98CE7> ../public/tier0/utlcommon.h:51
void CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t>::~CUtlKeyValuePair()
{
} /* size: 0 */

// <02E98CCB> ../public/tier0/utlcommon.h:51
inline void CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t>::~CUtlKeyValuePair()
{
} /* size: 0 */

// <01C561C0> ../public/tier0/utlcommon.h:51
void CUtlKeyValuePair<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >::~CUtlKeyValuePair()
{
} /* size: 0 */

// <01C561A4> ../public/tier0/utlcommon.h:51
inline void CUtlKeyValuePair<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >::~CUtlKeyValuePair()
{
} /* size: 0 */

// <0157710F> ../public/tier0/utlcommon.h:51
void CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> >::~CUtlKeyValuePair()
{
} /* size: 0 */

// <015770F3> ../public/tier0/utlcommon.h:51
inline void CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> >::~CUtlKeyValuePair()
{
} /* size: 0 */

// <01576F20> ../public/tier0/utlcommon.h:51
void CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> >::~CUtlKeyValuePair()
{
} /* size: 0 */

// <01576F04> ../public/tier0/utlcommon.h:51
inline void CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> >::~CUtlKeyValuePair()
{
} /* size: 0 */

// <01462A2F> ../public/tier0/utlcommon.h:51
void ~CUtlKeyValuePair(const CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CAnimMotorInstance, CAnimMotorBase, co this)
{
} /* size: 0 */

// <01462A13> ../public/tier0/utlcommon.h:51
inline void ~CUtlKeyValuePair(const CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CAnimMotorInstance, CAnimMotorBase, co this)
{
} /* size: 0 */

// <013EEEF8> ../public/tier0/utlcommon.h:51
void CUtlKeyValuePair<HSequence, CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor> >::~CUtlKeyValuePair()
{
} /* size: 0 */

// <013EEEDC> ../public/tier0/utlcommon.h:51
inline void CUtlKeyValuePair<HSequence, CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor> >::~CUtlKeyValuePair()
{
} /* size: 0 */

// <013EBDBB> ../public/tier0/utlcommon.h:51
void ~CUtlKeyValuePair(const CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CMotionMetricInstance, CMotionMetricBa this)
{
} /* size: 0 */

// <013EBD9F> ../public/tier0/utlcommon.h:51
inline void ~CUtlKeyValuePair(const CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CMotionMetricInstance, CMotionMetricBa this)
{
} /* size: 0 */

// <013091DA> ../public/tier0/utlcommon.h:51
void CUtlKeyValuePair<Reflection::ClassID, CUtlVector<IAnimTagListener::~CUtlKeyValuePair()
{
} /* size: 0 */

// <013091BE> ../public/tier0/utlcommon.h:51
inline void CUtlKeyValuePair<Reflection::ClassID, CUtlVector<IAnimTagListener::~CUtlKeyValuePair()
{
} /* size: 0 */

// <01264CA7> ../public/tier0/utlcommon.h:51
void CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> >::~CUtlKeyValuePair()
{
} /* size: 0 */

// <01264C8B> ../public/tier0/utlcommon.h:51
inline void CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> >::~CUtlKeyValuePair()
{
} /* size: 0 */

// <00F4CAC2> ../public/tier0/utlcommon.h:51
void CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >::~CUtlKeyValuePair()
{
} /* size: 0 */

// <00F4CAA6> ../public/tier0/utlcommon.h:51
inline void CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >::~CUtlKeyValuePair()
{
} /* size: 0 */

// <00E0A570> ../public/tier0/utlcommon.h:51
void CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> >::~CUtlKeyValuePair()
{
} /* size: 0 */

// <00E0A554> ../public/tier0/utlcommon.h:51
inline void CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> >::~CUtlKeyValuePair()
{
} /* size: 0 */

// <00E0A471> ../public/tier0/utlcommon.h:51
void CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> >::~CUtlKeyValuePair()
{
} /* size: 0 */

// <00E0A455> ../public/tier0/utlcommon.h:51
inline void CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> >::~CUtlKeyValuePair()
{
} /* size: 0 */

// <00E0A292> ../public/tier0/utlcommon.h:51
void CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor> >::~CUtlKeyValuePair()
{
} /* size: 0 */

// <00E0A276> ../public/tier0/utlcommon.h:51
inline void CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor> >::~CUtlKeyValuePair()
{
} /* size: 0 */

// <005A4E44> ../public/tier0/utlcommon.h:51
void CUtlKeyValuePair<AnimOutputID, CNodeConnection>::CUtlKeyValuePair(const CUtlKeyValuePair<AnimOutputID, CNodeConnection> &)
{
} /* size: 0 */

// <005A4E23> ../public/tier0/utlcommon.h:51
inline void CUtlKeyValuePair<AnimOutputID, CNodeConnection>::CUtlKeyValuePair(const CUtlKeyValuePair<AnimOutputID, CNodeConnection> &)
{
} /* size: 0 */

// <0041A953> ../public/tier0/utlcommon.h:51
void CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >::CUtlKeyValuePair(const CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> > &)
{
} /* size: 0 */

// <0041A932> ../public/tier0/utlcommon.h:51
inline void CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >::CUtlKeyValuePair(const CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> > &)
{
} /* size: 0 */

// <0041A423> ../public/tier0/utlcommon.h:51
void CUtlKeyValuePair<AnimNodeID, CAnimNodeBase::CUtlKeyValuePair(const CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*> &)
{
} /* size: 0 */

// <0041A402> ../public/tier0/utlcommon.h:51
inline void CUtlKeyValuePair<AnimNodeID, CAnimNodeBase::CUtlKeyValuePair(const CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*> &)
{
} /* size: 0 */

// <0070414D> ../public/tier0/utlcommon.h:51
void CUtlKeyValuePair<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>::~CUtlKeyValuePair()
{
} /* size: 0 */

// <00704130> ../public/tier0/utlcommon.h:51
inline void CUtlKeyValuePair<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>::~CUtlKeyValuePair()
{
} /* size: 0 */

// <002938CF> ../../public/tier0/utlcommon.h:51
void CUtlKeyValuePair<CUtlString, CBufferString>::~CUtlKeyValuePair()
{
} /* size: 0 */

// <002938B2> ../../public/tier0/utlcommon.h:51
inline void CUtlKeyValuePair<CUtlString, CBufferString>::~CUtlKeyValuePair()
{
} /* size: 0 */

// <000EA91F> ../public/tier0/utlcommon.h:51
// member functions: 40
// member variables: 2
// class size: 8
class CUtlKeyValuePair<unsigned int, short unsigned int> {
	unsigned int m_key; /* 0 4 */
	short unsigned int m_value; /* 4 2 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<unsigned int, short unsigned int>* );
	/* ../public/tier0/utlcommon.h:66 */
	short unsigned int& GetValue(CUtlKeyValuePair<unsigned int, short unsigned int>* );
	/* ../public/tier0/utlcommon.h:67 */
	const short unsigned int& GetValue(const CUtlKeyValuePair<unsigned int, short unsigned int>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef short unsigned int ValueReturn_t;
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, int> *); /* linkage=_ZN16CUtlKeyValuePairIjiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<unsigned int, int> *); /* linkage=_ZN16CUtlKeyValuePairIjiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<unsigned int, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIjiE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, int>(class CUtlKeyValuePair<unsigned int, int> *, const unsigned int  &, const int  &); /* linkage=_ZN16CUtlKeyValuePairIjiEC4IjiEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIj7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, empty_t> *, const unsigned int  &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIj7empty_tEC4ERKjRKS0_ */
	const unsigned int  & GetValue(const class CUtlKeyValuePair<unsigned int, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIj7empty_tE8GetValueEv */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*> *); /* linkage=_ZN16CUtlKeyValuePairIjPN16CKeyValuesSystem18SharedStringData_tEEC4Ev */
	class SharedStringData_t * & GetValue(class CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*> *); /* linkage=_ZN16CUtlKeyValuePairIjPN16CKeyValuesSystem18SharedStringData_tEE8GetValueEv */
	class SharedStringData_t * const & GetValue(const class CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*>  *); /* linkage=_ZNK16CUtlKeyValuePairIjPN16CKeyValuesSystem18SharedStringData_tEE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*>(class CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*> *, const unsigned int  &, class SharedStringData_t * const &); /* linkage=_ZN16CUtlKeyValuePairIjPN16CKeyValuesSystem18SharedStringData_tEEC4IjS2_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*> *); /* linkage=_ZN16CUtlKeyValuePairIjPK17CResourceDiskEnumEC4Ev */
	const class CResourceDiskEnum  * & GetValue(class CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*> *); /* linkage=_ZN16CUtlKeyValuePairIjPK17CResourceDiskEnumE8GetValueEv */
	const class CResourceDiskEnum  * const & GetValue(const class CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*>  *); /* linkage=_ZNK16CUtlKeyValuePairIjPK17CResourceDiskEnumE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*>(class CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*> *, const unsigned int  &, const class CResourceDiskEnum  * const &); /* linkage=_ZN16CUtlKeyValuePairIjPK17CResourceDiskEnumEC4IjS2_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*> *); /* linkage=_ZN16CUtlKeyValuePairIjPK19CResourceDiskStructEC4Ev */
	const class CResourceDiskStruct  * & GetValue(class CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*> *); /* linkage=_ZN16CUtlKeyValuePairIjPK19CResourceDiskStructE8GetValueEv */
	const class CResourceDiskStruct  * const & GetValue(const class CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*>  *); /* linkage=_ZNK16CUtlKeyValuePairIjPK19CResourceDiskStructE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*>(class CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*> *, const unsigned int  &, const class CResourceDiskStruct  * const &); /* linkage=_ZN16CUtlKeyValuePairIjPK19CResourceDiskStructEC4IjS2_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, short unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIjtEC4Ev */
	short unsigned int & GetValue(class CUtlKeyValuePair<unsigned int, short unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIjtE8GetValueEv */
	const short unsigned int  & GetValue(const class CUtlKeyValuePair<unsigned int, short unsigned int>  *); /* linkage=_ZNK16CUtlKeyValuePairIjtE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, short unsigned int>(class CUtlKeyValuePair<unsigned int, short unsigned int> *, const unsigned int  &, const short unsigned int  &); /* linkage=_ZN16CUtlKeyValuePairIjtEC4IjtEERKT_RKT0_ */
	void CUtlKeyValuePair<unsigned int>(class CUtlKeyValuePair<unsigned int, empty_t> *, const unsigned int  &); /* linkage=_ZN16CUtlKeyValuePairIj7empty_tEC4IjEERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry> *); /* linkage=_ZN16CUtlKeyValuePairIjN18CVSoundTypeManager12SfxDictEntryEEC4Ev */
	class SfxDictEntry & GetValue(class CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry> *); /* linkage=_ZN16CUtlKeyValuePairIjN18CVSoundTypeManager12SfxDictEntryEE8GetValueEv */
	const class SfxDictEntry  & GetValue(const class CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry>  *); /* linkage=_ZNK16CUtlKeyValuePairIjN18CVSoundTypeManager12SfxDictEntryEE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry>(class CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry> *, const unsigned int  &, const class SfxDictEntry  &); /* linkage=_ZN16CUtlKeyValuePairIjN18CVSoundTypeManager12SfxDictEntryEEC4IjS1_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t> *); /* linkage=_ZN16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEEC4Ev */
	class FrameBufferScratchTexInfo_t & GetValue(class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t> *); /* linkage=_ZN16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEE8GetValueEv */
	const class FrameBufferScratchTexInfo_t  & GetValue(const class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEE8GetValueEv */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t> *); /* linkage=_ZN16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEED4Ev */
	void CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t>(class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t> *, const unsigned int  &, const class FrameBufferScratchTexInfo_t  &); /* linkage=_ZN16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEEC4IjS1_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t> *); /* linkage=_ZN16CUtlKeyValuePairIj28CAnimationDecodeCacheEntry_tEC4Ev */
	class CAnimationDecodeCacheEntry_t & GetValue(class CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t> *); /* linkage=_ZN16CUtlKeyValuePairIj28CAnimationDecodeCacheEntry_tE8GetValueEv */
	const class CAnimationDecodeCacheEntry_t  & GetValue(const class CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIj28CAnimationDecodeCacheEntry_tE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t>(class CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t> *, const unsigned int  &, const class CAnimationDecodeCacheEntry_t  &); /* linkage=_ZN16CUtlKeyValuePairIj28CAnimationDecodeCacheEntry_tEC4IjS0_EERKT_RKT0_ */
};

// <000EC03E> ../public/tier0/utlcommon.h:51
// member functions: 11
// member variables: 2
// class size: 8
class CUtlKeyValuePair<short unsigned int, unsigned int> {
	short unsigned int m_key; /* 0 2 */
	unsigned int m_value; /* 4 4 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<short unsigned int, unsigned int>* );
	/* ../public/tier0/utlcommon.h:66 */
	unsigned int& GetValue(CUtlKeyValuePair<short unsigned int, unsigned int>* );
	/* ../public/tier0/utlcommon.h:67 */
	const unsigned int& GetValue(const CUtlKeyValuePair<short unsigned int, unsigned int>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef unsigned int ValueReturn_t;
	void CUtlKeyValuePair(class CUtlKeyValuePair<short unsigned int, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIt7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<short unsigned int, empty_t> *, const short unsigned int  &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIt7empty_tEC4ERKtRKS0_ */
	const short unsigned int  & GetValue(const class CUtlKeyValuePair<short unsigned int, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIt7empty_tE8GetValueEv */
	void CUtlKeyValuePair<short unsigned int>(class CUtlKeyValuePair<short unsigned int, empty_t> *, const short unsigned int  &); /* linkage=_ZN16CUtlKeyValuePairIt7empty_tEC4ItEERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<short unsigned int, unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairItjEC4Ev */
	unsigned int & GetValue(class CUtlKeyValuePair<short unsigned int, unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairItjE8GetValueEv */
	const unsigned int  & GetValue(const class CUtlKeyValuePair<short unsigned int, unsigned int>  *); /* linkage=_ZNK16CUtlKeyValuePairItjE8GetValueEv */
	void CUtlKeyValuePair<short unsigned int, unsigned int>(class CUtlKeyValuePair<short unsigned int, unsigned int> *, const short unsigned int  &, const unsigned int  &); /* linkage=_ZN16CUtlKeyValuePairItjEC4ItjEERKT_RKT0_ */
};

// <00FF299B> ../public/tier0/utlcommon.h:51
// member functions: 20
// member variables: 2
// class size: 16
class CUtlKeyValuePair<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> > {
	CUtlStringToken m_key; /* 0 4 */
	CWeakHandle<InfoForResourceTypeCEntityLump> m_value; /* 8 8 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> >* );
	/* ../public/tier0/utlcommon.h:66 */
	CWeakHandle<InfoForResourceTypeCEntityLump>& GetValue(CUtlKeyValuePair<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> >* );
	/* ../public/tier0/utlcommon.h:67 */
	const CWeakHandle<InfoForResourceTypeCEntityLump>& GetValue(const CUtlKeyValuePair<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> >* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef struct CWeakHandle<InfoForResourceTypeCEntityLump> ValueReturn_t;
	/* ../public/tier0/utlcommon.h:64 */
	void CUtlKeyValuePair<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> >(CUtlKeyValuePair<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> >* , const CUtlStringToken& , const CWeakHandle<InfoForResourceTypeCEntityLump>& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlStringToken, int> *); /* linkage=_ZN16CUtlKeyValuePairI15CUtlStringTokeniEC4Ev */
	int & GetValue(class CUtlKeyValuePair<CUtlStringToken, int> *); /* linkage=_ZN16CUtlKeyValuePairI15CUtlStringTokeniE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<CUtlStringToken, int>  *); /* linkage=_ZNK16CUtlKeyValuePairI15CUtlStringTokeniE8GetValueEv */
	void CUtlKeyValuePair<CUtlStringToken, int>(class CUtlKeyValuePair<CUtlStringToken, int> *, const class CUtlStringToken  &, const int  &); /* linkage=_ZN16CUtlKeyValuePairI15CUtlStringTokeniEC4IS0_iEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlStringToken, RenderDescriptorSetHandle_t__*> *); /* linkage=_ZN16CUtlKeyValuePairI15CUtlStringTokenP29RenderDescriptorSetHandle_t__EC4Ev */
	class RenderDescriptorSetHandle_t__ * & GetValue(class CUtlKeyValuePair<CUtlStringToken, RenderDescriptorSetHandle_t__*> *); /* linkage=_ZN16CUtlKeyValuePairI15CUtlStringTokenP29RenderDescriptorSetHandle_t__E8GetValueEv */
	class RenderDescriptorSetHandle_t__ * const & GetValue(const class CUtlKeyValuePair<CUtlStringToken, RenderDescriptorSetHandle_t__*>  *); /* linkage=_ZNK16CUtlKeyValuePairI15CUtlStringTokenP29RenderDescriptorSetHandle_t__E8GetValueEv */
	void CUtlKeyValuePair<CUtlStringToken, RenderDescriptorSetHandle_t__*>(class CUtlKeyValuePair<CUtlStringToken, RenderDescriptorSetHandle_t__*> *, const class CUtlStringToken  &, class RenderDescriptorSetHandle_t__ * const &); /* linkage=_ZN16CUtlKeyValuePairI15CUtlStringTokenP29RenderDescriptorSetHandle_t__EC4IS0_S2_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlStringToken, CUtlStringToken> *); /* linkage=_ZN16CUtlKeyValuePairI15CUtlStringTokenS0_EC4Ev */
	class CUtlStringToken & GetValue(class CUtlKeyValuePair<CUtlStringToken, CUtlStringToken> *); /* linkage=_ZN16CUtlKeyValuePairI15CUtlStringTokenS0_E8GetValueEv */
	const class CUtlStringToken  & GetValue(const class CUtlKeyValuePair<CUtlStringToken, CUtlStringToken>  *); /* linkage=_ZNK16CUtlKeyValuePairI15CUtlStringTokenS0_E8GetValueEv */
	void CUtlKeyValuePair<CUtlStringToken, CUtlStringToken>(class CUtlKeyValuePair<CUtlStringToken, CUtlStringToken> *, const class CUtlStringToken  &, const class CUtlStringToken  &); /* linkage=_ZN16CUtlKeyValuePairI15CUtlStringTokenS0_EC4IS0_S0_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> > *); /* linkage=_ZN16CUtlKeyValuePairI15CUtlStringToken11CWeakHandleI30InfoForResourceTypeCEntityLumpEEC4Ev */
	class CWeakHandle<InfoForResourceTypeCEntityLump> & GetValue(class CUtlKeyValuePair<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> > *); /* linkage=_ZN16CUtlKeyValuePairI15CUtlStringToken11CWeakHandleI30InfoForResourceTypeCEntityLumpEE8GetValueEv */
	const class CWeakHandle<InfoForResourceTypeCEntityLump>  & GetValue(const class CUtlKeyValuePair<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> >  *); /* linkage=_ZNK16CUtlKeyValuePairI15CUtlStringToken11CWeakHandleI30InfoForResourceTypeCEntityLumpEE8GetValueEv */
	void CUtlKeyValuePair<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> >(class CUtlKeyValuePair<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> > *, const class CUtlStringToken  &, const class CWeakHandle<InfoForResourceTypeCEntityLump>  &); /* linkage=_ZN16CUtlKeyValuePairI15CUtlStringToken11CWeakHandleI30InfoForResourceTypeCEntityLumpEEC4IS0_S3_EERKT_RKT0_ */
};

// <02186370> ../public/tier0/utlcommon.h:51
// member functions: 11
// member variables: 2
// class size: 16
class CUtlKeyValuePair<char const*, int> {
	const char * m_key; /* 0 8 */
	int m_value; /* 8 4 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<char const*, int>* );
	/* ../public/tier0/utlcommon.h:66 */
	int& GetValue(CUtlKeyValuePair<char const*, int>* );
	/* ../public/tier0/utlcommon.h:67 */
	const int& GetValue(const CUtlKeyValuePair<char const*, int>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef int ValueReturn_t;
	void CUtlKeyValuePair(class CUtlKeyValuePair<char const*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPKciEC4Ev */
	int & GetValue(class CUtlKeyValuePair<char const*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPKciE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<char const*, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIPKciE8GetValueEv */
	void CUtlKeyValuePair<char const*, int>(class CUtlKeyValuePair<char const*, int> *, const char  * const &, const int  &); /* linkage=_ZN16CUtlKeyValuePairIPKciEC4IS1_iEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<char const*, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIPKc7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<char const*, empty_t> *, const char  * const &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIPKc7empty_tEC4ERKS1_RKS2_ */
	const char  * const & GetValue(const class CUtlKeyValuePair<char const*, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIPKc7empty_tE8GetValueEv */
	void CUtlKeyValuePair<char const*>(class CUtlKeyValuePair<char const*, empty_t> *, const char  * const &); /* linkage=_ZN16CUtlKeyValuePairIPKc7empty_tEC4IS1_EERKT_ */
};

// <021C2026> ../public/tier0/utlcommon.h:51
// member functions: 16
// member variables: 2
// class size: 16
class CUtlKeyValuePair<ResourceId_t, CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> >*> {
	ResourceId_t m_key; /* 0 8 */
	CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> > * m_value; /* 8 8 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<ResourceId_t, CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> >);
	/* ../public/tier0/utlcommon.h:66 */
	CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> >* & GetValue(CUtlKeyValuePair<ResourceId_t, CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> >);
	/* ../public/tier0/utlcommon.h:67 */
	CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> >* const& GetValue(const CUtlKeyValuePair<ResourceId_t, CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, );
	/* ../public/tier0/utlcommon.h:54 */
	typedef class CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> > * ValueReturn_t;
	/* ../public/tier0/utlcommon.h:64 */
	void CUtlKeyValuePair<ResourceId_t, CUtlVector<IGenericDataResourceListener*>*>(CUtlKeyValuePair<ResourceId_t, CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> >, const ResourceId_t& , CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> >* const& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<ResourceId_t, int> *); /* linkage=_ZN16CUtlKeyValuePairI12ResourceId_tiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<ResourceId_t, int> *); /* linkage=_ZN16CUtlKeyValuePairI12ResourceId_tiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<ResourceId_t, int>  *); /* linkage=_ZNK16CUtlKeyValuePairI12ResourceId_tiE8GetValueEv */
	void CUtlKeyValuePair<ResourceId_t, int>(class CUtlKeyValuePair<ResourceId_t, int> *, const class ResourceId_t  &, const int  &); /* linkage=_ZN16CUtlKeyValuePairI12ResourceId_tiEC4IS0_iEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<ResourceId_t, CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> >); /* linkage=_ZN16CUtlKeyValuePairI12ResourceId_tP10CUtlVectorIP28IGenericDataResourceListener10CUtlMemoryIS3_iEEEC4Ev */
	class CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> > * & GetValue(class CUtlKeyValuePair<ResourceId_t, CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> >); /* linkage=_ZN16CUtlKeyValuePairI12ResourceId_tP10CUtlVectorIP28IGenericDataResourceListener10CUtlMemoryIS3_iEEE8GetValueEv */
	class CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> > * const & GetValue(const class CUtlKeyValuePair<ResourceId_t, CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, ); /* linkage=_ZNK16CUtlKeyValuePairI12ResourceId_tP10CUtlVectorIP28IGenericDataResourceListener10CUtlMemoryIS3_iEEE8GetValueEv */
	void CUtlKeyValuePair<ResourceId_t, CUtlVector<IGenericDataResourceListener*>*>(class CUtlKeyValuePair<ResourceId_t, CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> >, const class ResourceId_t  &, class CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> > * const &); /* linkage=_ZN16CUtlKeyValuePairI12ResourceId_tP10CUtlVectorIP28IGenericDataResourceListener10CUtlMemoryIS3_iEEEC4IS0_S7_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<ResourceId_t, const ResourceBindingBase_t*> *); /* linkage=_ZN16CUtlKeyValuePairI12ResourceId_tPK21ResourceBindingBase_tEC4Ev */
	const class ResourceBindingBase_t  * & GetValue(class CUtlKeyValuePair<ResourceId_t, const ResourceBindingBase_t*> *); /* linkage=_ZN16CUtlKeyValuePairI12ResourceId_tPK21ResourceBindingBase_tE8GetValueEv */
	const class ResourceBindingBase_t  * const & GetValue(const class CUtlKeyValuePair<ResourceId_t, const ResourceBindingBase_t*>  *); /* linkage=_ZNK16CUtlKeyValuePairI12ResourceId_tPK21ResourceBindingBase_tE8GetValueEv */
	void CUtlKeyValuePair<ResourceId_t, const ResourceBindingBase_t*>(class CUtlKeyValuePair<ResourceId_t, const ResourceBindingBase_t*> *, const class ResourceId_t  &, const class ResourceBindingBase_t  * const &); /* linkage=_ZN16CUtlKeyValuePairI12ResourceId_tPK21ResourceBindingBase_tEC4IS0_S3_EERKT_RKT0_ */
};

// <02250BF3> ../public/tier0/utlcommon.h:51
// member functions: 48
// member variables: 2
// class size: 16
class CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int> {
	const class ResourceBindingBase_t * m_key; /* 0 8 */
	unsigned int m_value; /* 8 4 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int>* );
	/* ../public/tier0/utlcommon.h:66 */
	unsigned int& GetValue(CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int>* );
	/* ../public/tier0/utlcommon.h:67 */
	const unsigned int& GetValue(const CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef unsigned int ValueReturn_t;
	/* ../public/tier0/utlcommon.h:61 */
	void CUtlKeyValuePair<const ResourceBindingBase_t*>(CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int>* , const ResourceBindingBase_t* const& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*> *); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructFieldPK32KV3ConvertSpecialFieldBehavior_tEC4Ev */
	const class KV3ConvertSpecialFieldBehavior_t  * & GetValue(class CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*> *); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructFieldPK32KV3ConvertSpecialFieldBehavior_tE8GetValueEv */
	const class KV3ConvertSpecialFieldBehavior_t  * const & GetValue(const class CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK24CResourceDiskStructFieldPK32KV3ConvertSpecialFieldBehavior_tE8GetValueEv */
	void CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*>(class CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*> *, const class CResourceDiskStructField  * const &, const class KV3ConvertSpecialFieldBehavior_t  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructFieldPK32KV3ConvertSpecialFieldBehavior_tEC4IS2_S5_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CResourceDiskStructField*, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructField7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CResourceDiskStructField*, empty_t> *, const class CResourceDiskStructField  * const &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructField7empty_tEC4ERKS2_RKS3_ */
	const class CResourceDiskStructField  * const & GetValue(const class CUtlKeyValuePair<const CResourceDiskStructField*, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK24CResourceDiskStructField7empty_tE8GetValueEv */
	void CUtlKeyValuePair<const CResourceDiskStructField*>(class CUtlKeyValuePair<const CResourceDiskStructField*, empty_t> *, const class CResourceDiskStructField  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructField7empty_tEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_t7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t> *, const class ResourceBindingBase_t  * const &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_t7empty_tEC4ERKS2_RKS3_ */
	const class ResourceBindingBase_t  * const & GetValue(const class CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK21ResourceBindingBase_t7empty_tE8GetValueEv */
	void CUtlKeyValuePair<const ResourceBindingBase_t*>(class CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t> *, const class ResourceBindingBase_t  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_t7empty_tEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_tjEC4Ev */
	unsigned int & GetValue(class CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_tjE8GetValueEv */
	const unsigned int  & GetValue(const class CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK21ResourceBindingBase_tjE8GetValueEv */
	void CUtlKeyValuePair<const ResourceBindingBase_t*>(class CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int> *, const class ResourceBindingBase_t  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_tjEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CEnvMapSceneObject*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK18CEnvMapSceneObjectiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<const CEnvMapSceneObject*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK18CEnvMapSceneObjectiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<const CEnvMapSceneObject*, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK18CEnvMapSceneObjectiE8GetValueEv */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const IMaterial2*, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIPK10IMaterial27empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const IMaterial2*, empty_t> *, const class IMaterial2  * const &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIPK10IMaterial27empty_tEC4ERKS2_RKS3_ */
	const class IMaterial2  * const & GetValue(const class CUtlKeyValuePair<const IMaterial2*, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK10IMaterial27empty_tE8GetValueEv */
	void CUtlKeyValuePair<const IMaterial2*>(class CUtlKeyValuePair<const IMaterial2*, empty_t> *, const class IMaterial2  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK10IMaterial27empty_tEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const qhVertex*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<const qhVertex*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<const qhVertex*, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK8qhVertexiE8GetValueEv */
	void CUtlKeyValuePair<const qhVertex*, int>(class CUtlKeyValuePair<const qhVertex*, int> *, const class qhVertex  * const &, const int  &); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexiEC4IS2_iEERKT_RKT0_ */
	void CUtlKeyValuePair<const qhVertex*>(class CUtlKeyValuePair<const qhVertex*, int> *, const class qhVertex  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexiEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const qhFace*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK6qhFaceiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<const qhFace*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK6qhFaceiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<const qhFace*, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK6qhFaceiE8GetValueEv */
	void CUtlKeyValuePair<const qhFace*, int>(class CUtlKeyValuePair<const qhFace*, int> *, const class qhFace  * const &, const int  &); /* linkage=_ZN16CUtlKeyValuePairIPK6qhFaceiEC4IS2_iEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIF); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEEC4Ev */
	class ComponentHandleWithListPointer_t & GetValue(class CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIF); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEE8GetValueEv */
	const class ComponentHandleWithListPointer_t  & GetValue(const class CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, ); /* linkage=_ZNK16CUtlKeyValuePairIPK8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEE8GetValueEv */
	void CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>(class CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIF, const class qhVertex  * const &, const class ComponentHandleWithListPointer_t  &); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEEC4IS2_SB_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus> *); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase13CStrideStatusEC4Ev */
	class CStrideStatus & GetValue(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus> *); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase13CStrideStatusE8GetValueEv */
	const class CStrideStatus  & GetValue(const class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK19CAnimUpdateNodeBase13CStrideStatusE8GetValueEv */
	void CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus>(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus> *, const class CAnimUpdateNodeBase  * const &, const class CStrideStatus  &); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase13CStrideStatusEC4IS2_S3_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion> *); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase11CRootMotionEC4Ev */
	class CRootMotion & GetValue(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion> *); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase11CRootMotionE8GetValueEv */
	const class CRootMotion  & GetValue(const class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK19CAnimUpdateNodeBase11CRootMotionE8GetValueEv */
	void CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion>(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion> *, const class CAnimUpdateNodeBase  * const &, const class CRootMotion  &); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase11CRootMotionEC4IS2_S3_EERKT_RKT0_ */
};

// <02292E3F> ../public/tier0/utlcommon.h:51
// member functions: 15
// member variables: 2
// class size: 16
class CUtlKeyValuePair<ResourceId_t, const ResourceBindingBase_t*> {
	ResourceId_t m_key; /* 0 8 */
	const class ResourceBindingBase_t * m_value; /* 8 8 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<ResourceId_t, const ResourceBindingBase_t*>* );
	/* ../public/tier0/utlcommon.h:66 */
	const ResourceBindingBase_t* & GetValue(CUtlKeyValuePair<ResourceId_t, const ResourceBindingBase_t*>* );
	/* ../public/tier0/utlcommon.h:67 */
	const ResourceBindingBase_t* const& GetValue(const CUtlKeyValuePair<ResourceId_t, const ResourceBindingBase_t*>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef const class ResourceBindingBase_t * ValueReturn_t;
	void CUtlKeyValuePair(class CUtlKeyValuePair<ResourceId_t, int> *); /* linkage=_ZN16CUtlKeyValuePairI12ResourceId_tiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<ResourceId_t, int> *); /* linkage=_ZN16CUtlKeyValuePairI12ResourceId_tiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<ResourceId_t, int>  *); /* linkage=_ZNK16CUtlKeyValuePairI12ResourceId_tiE8GetValueEv */
	void CUtlKeyValuePair<ResourceId_t, int>(class CUtlKeyValuePair<ResourceId_t, int> *, const class ResourceId_t  &, const int  &); /* linkage=_ZN16CUtlKeyValuePairI12ResourceId_tiEC4IS0_iEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<ResourceId_t, CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> >); /* linkage=_ZN16CUtlKeyValuePairI12ResourceId_tP10CUtlVectorIP28IGenericDataResourceListener10CUtlMemoryIS3_iEEEC4Ev */
	class CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> > * & GetValue(class CUtlKeyValuePair<ResourceId_t, CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> >); /* linkage=_ZN16CUtlKeyValuePairI12ResourceId_tP10CUtlVectorIP28IGenericDataResourceListener10CUtlMemoryIS3_iEEE8GetValueEv */
	class CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> > * const & GetValue(const class CUtlKeyValuePair<ResourceId_t, CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, ); /* linkage=_ZNK16CUtlKeyValuePairI12ResourceId_tP10CUtlVectorIP28IGenericDataResourceListener10CUtlMemoryIS3_iEEE8GetValueEv */
	void CUtlKeyValuePair<ResourceId_t, CUtlVector<IGenericDataResourceListener*>*>(class CUtlKeyValuePair<ResourceId_t, CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> >, const class ResourceId_t  &, class CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> > * const &); /* linkage=_ZN16CUtlKeyValuePairI12ResourceId_tP10CUtlVectorIP28IGenericDataResourceListener10CUtlMemoryIS3_iEEEC4IS0_S7_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<ResourceId_t, const ResourceBindingBase_t*> *); /* linkage=_ZN16CUtlKeyValuePairI12ResourceId_tPK21ResourceBindingBase_tEC4Ev */
	const class ResourceBindingBase_t  * & GetValue(class CUtlKeyValuePair<ResourceId_t, const ResourceBindingBase_t*> *); /* linkage=_ZN16CUtlKeyValuePairI12ResourceId_tPK21ResourceBindingBase_tE8GetValueEv */
	const class ResourceBindingBase_t  * const & GetValue(const class CUtlKeyValuePair<ResourceId_t, const ResourceBindingBase_t*>  *); /* linkage=_ZNK16CUtlKeyValuePairI12ResourceId_tPK21ResourceBindingBase_tE8GetValueEv */
	void CUtlKeyValuePair<ResourceId_t, const ResourceBindingBase_t*>(class CUtlKeyValuePair<ResourceId_t, const ResourceBindingBase_t*> *, const class ResourceId_t  &, const class ResourceBindingBase_t  * const &); /* linkage=_ZN16CUtlKeyValuePairI12ResourceId_tPK21ResourceBindingBase_tEC4IS0_S3_EERKT_RKT0_ */
};

// <02697CE4> ../public/tier0/utlcommon.h:51
// member functions: 41
// member variables: 2
// class size: 16
class CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry> {
	unsigned int m_key; /* 0 4 */
	SfxDictEntry m_value; /* 8 8 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry>* );
	/* ../public/tier0/utlcommon.h:66 */
	SfxDictEntry& GetValue(CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry>* );
	/* ../public/tier0/utlcommon.h:67 */
	const SfxDictEntry& GetValue(const CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef struct SfxDictEntry ValueReturn_t;
	/* ../public/tier0/utlcommon.h:64 */
	void CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry>(CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry>* , const unsigned int& , const SfxDictEntry& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, int> *); /* linkage=_ZN16CUtlKeyValuePairIjiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<unsigned int, int> *); /* linkage=_ZN16CUtlKeyValuePairIjiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<unsigned int, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIjiE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, int>(class CUtlKeyValuePair<unsigned int, int> *, const unsigned int  &, const int  &); /* linkage=_ZN16CUtlKeyValuePairIjiEC4IjiEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIj7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, empty_t> *, const unsigned int  &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIj7empty_tEC4ERKjRKS0_ */
	const unsigned int  & GetValue(const class CUtlKeyValuePair<unsigned int, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIj7empty_tE8GetValueEv */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*> *); /* linkage=_ZN16CUtlKeyValuePairIjPN16CKeyValuesSystem18SharedStringData_tEEC4Ev */
	class SharedStringData_t * & GetValue(class CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*> *); /* linkage=_ZN16CUtlKeyValuePairIjPN16CKeyValuesSystem18SharedStringData_tEE8GetValueEv */
	class SharedStringData_t * const & GetValue(const class CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*>  *); /* linkage=_ZNK16CUtlKeyValuePairIjPN16CKeyValuesSystem18SharedStringData_tEE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*>(class CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*> *, const unsigned int  &, class SharedStringData_t * const &); /* linkage=_ZN16CUtlKeyValuePairIjPN16CKeyValuesSystem18SharedStringData_tEEC4IjS2_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*> *); /* linkage=_ZN16CUtlKeyValuePairIjPK17CResourceDiskEnumEC4Ev */
	const class CResourceDiskEnum  * & GetValue(class CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*> *); /* linkage=_ZN16CUtlKeyValuePairIjPK17CResourceDiskEnumE8GetValueEv */
	const class CResourceDiskEnum  * const & GetValue(const class CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*>  *); /* linkage=_ZNK16CUtlKeyValuePairIjPK17CResourceDiskEnumE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*>(class CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*> *, const unsigned int  &, const class CResourceDiskEnum  * const &); /* linkage=_ZN16CUtlKeyValuePairIjPK17CResourceDiskEnumEC4IjS2_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*> *); /* linkage=_ZN16CUtlKeyValuePairIjPK19CResourceDiskStructEC4Ev */
	const class CResourceDiskStruct  * & GetValue(class CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*> *); /* linkage=_ZN16CUtlKeyValuePairIjPK19CResourceDiskStructE8GetValueEv */
	const class CResourceDiskStruct  * const & GetValue(const class CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*>  *); /* linkage=_ZNK16CUtlKeyValuePairIjPK19CResourceDiskStructE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*>(class CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*> *, const unsigned int  &, const class CResourceDiskStruct  * const &); /* linkage=_ZN16CUtlKeyValuePairIjPK19CResourceDiskStructEC4IjS2_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, short unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIjtEC4Ev */
	short unsigned int & GetValue(class CUtlKeyValuePair<unsigned int, short unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIjtE8GetValueEv */
	const short unsigned int  & GetValue(const class CUtlKeyValuePair<unsigned int, short unsigned int>  *); /* linkage=_ZNK16CUtlKeyValuePairIjtE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, short unsigned int>(class CUtlKeyValuePair<unsigned int, short unsigned int> *, const unsigned int  &, const short unsigned int  &); /* linkage=_ZN16CUtlKeyValuePairIjtEC4IjtEERKT_RKT0_ */
	void CUtlKeyValuePair<unsigned int>(class CUtlKeyValuePair<unsigned int, empty_t> *, const unsigned int  &); /* linkage=_ZN16CUtlKeyValuePairIj7empty_tEC4IjEERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry> *); /* linkage=_ZN16CUtlKeyValuePairIjN18CVSoundTypeManager12SfxDictEntryEEC4Ev */
	class SfxDictEntry & GetValue(class CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry> *); /* linkage=_ZN16CUtlKeyValuePairIjN18CVSoundTypeManager12SfxDictEntryEE8GetValueEv */
	const class SfxDictEntry  & GetValue(const class CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry>  *); /* linkage=_ZNK16CUtlKeyValuePairIjN18CVSoundTypeManager12SfxDictEntryEE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry>(class CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry> *, const unsigned int  &, const class SfxDictEntry  &); /* linkage=_ZN16CUtlKeyValuePairIjN18CVSoundTypeManager12SfxDictEntryEEC4IjS1_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t> *); /* linkage=_ZN16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEEC4Ev */
	class FrameBufferScratchTexInfo_t & GetValue(class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t> *); /* linkage=_ZN16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEE8GetValueEv */
	const class FrameBufferScratchTexInfo_t  & GetValue(const class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEE8GetValueEv */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t> *); /* linkage=_ZN16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEED4Ev */
	void CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t>(class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t> *, const unsigned int  &, const class FrameBufferScratchTexInfo_t  &); /* linkage=_ZN16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEEC4IjS1_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t> *); /* linkage=_ZN16CUtlKeyValuePairIj28CAnimationDecodeCacheEntry_tEC4Ev */
	class CAnimationDecodeCacheEntry_t & GetValue(class CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t> *); /* linkage=_ZN16CUtlKeyValuePairIj28CAnimationDecodeCacheEntry_tE8GetValueEv */
	const class CAnimationDecodeCacheEntry_t  & GetValue(const class CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIj28CAnimationDecodeCacheEntry_tE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t>(class CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t> *, const unsigned int  &, const class CAnimationDecodeCacheEntry_t  &); /* linkage=_ZN16CUtlKeyValuePairIj28CAnimationDecodeCacheEntry_tEC4IjS0_EERKT_RKT0_ */
};

// <02B694B4> ../public/tier0/utlcommon.h:51
// member functions: 30
// member variables: 2
// class size: 8
class CUtlKeyValuePair<int, int> {
	int m_key; /* 0 4 */
	int m_value; /* 4 4 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<int, int>* );
	/* ../public/tier0/utlcommon.h:66 */
	int& GetValue(CUtlKeyValuePair<int, int>* );
	/* ../public/tier0/utlcommon.h:67 */
	const int& GetValue(const CUtlKeyValuePair<int, int>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef int ValueReturn_t;
	/* ../public/tier0/utlcommon.h:64 */
	void CUtlKeyValuePair<int, int>(CUtlKeyValuePair<int, int>* , const int& , const int& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, float> *); /* linkage=_ZN16CUtlKeyValuePairIifEC4Ev */
	float & GetValue(class CUtlKeyValuePair<int, float> *); /* linkage=_ZN16CUtlKeyValuePairIifE8GetValueEv */
	const float  & GetValue(const class CUtlKeyValuePair<int, float>  *); /* linkage=_ZNK16CUtlKeyValuePairIifE8GetValueEv */
	void CUtlKeyValuePair<int, float>(class CUtlKeyValuePair<int, float> *, const int  &, const float  &); /* linkage=_ZN16CUtlKeyValuePairIifEC4IifEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIijEC4Ev */
	unsigned int & GetValue(class CUtlKeyValuePair<int, unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIijE8GetValueEv */
	const unsigned int  & GetValue(const class CUtlKeyValuePair<int, unsigned int>  *); /* linkage=_ZNK16CUtlKeyValuePairIijE8GetValueEv */
	void CUtlKeyValuePair<int, unsigned int>(class CUtlKeyValuePair<int, unsigned int> *, const int  &, const unsigned int  &); /* linkage=_ZN16CUtlKeyValuePairIijEC4IijEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, int> *); /* linkage=_ZN16CUtlKeyValuePairIiiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<int, int> *); /* linkage=_ZN16CUtlKeyValuePairIiiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<int, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIiiE8GetValueEv */
	void CUtlKeyValuePair<int, int>(class CUtlKeyValuePair<int, int> *, const int  &, const int  &); /* linkage=_ZN16CUtlKeyValuePairIiiEC4IiiEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIi7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, empty_t> *, const int  &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIi7empty_tEC4ERKiRKS0_ */
	const int  & GetValue(const class CUtlKeyValuePair<int, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIi7empty_tE8GetValueEv */
	void CUtlKeyValuePair<int>(class CUtlKeyValuePair<int, empty_t> *, const int  &); /* linkage=_ZN16CUtlKeyValuePairIi7empty_tEC4IiEERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrI21CAnimNodeInstanceBase17CRefCountAccessorEEC4Ev */
	class CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> & GetValue(class CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrI21CAnimNodeInstanceBase17CRefCountAccessorEE8GetValueEv */
	const class CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>  & GetValue(const class CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> >  *); /* linkage=_ZNK16CUtlKeyValuePairIi9CSmartPtrI21CAnimNodeInstanceBase17CRefCountAccessorEE8GetValueEv */
	void CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase> >(class CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> > *, const int  &, const class CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>  &); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrI21CAnimNodeInstanceBase17CRefCountAccessorEEC4IiS3_EERKT_RKT0_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrI21CAnimNodeInstanceBase17CRefCountAccessorEED4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrIK15CActivityValues17CRefCountAccessorEEC4Ev */
	class CSmartPtr<const CActivityValues, CRefCountAccessor> & GetValue(class CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrIK15CActivityValues17CRefCountAccessorEE8GetValueEv */
	const class CSmartPtr<const CActivityValues, CRefCountAccessor>  & GetValue(const class CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> >  *); /* linkage=_ZNK16CUtlKeyValuePairIi9CSmartPtrIK15CActivityValues17CRefCountAccessorEE8GetValueEv */
	void CUtlKeyValuePair<int, CSmartPtr<const CActivityValues> >(class CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> > *, const int  &, const class CSmartPtr<const CActivityValues, CRefCountAccessor>  &); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrIK15CActivityValues17CRefCountAccessorEEC4IiS4_EERKT_RKT0_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrIK15CActivityValues17CRefCountAccessorEED4Ev */
};

// <02B6ACDC> ../public/tier0/utlcommon.h:51
// member functions: 8
// member variables: 2
// class size: 16
class CUtlKeyValuePair<CSceneLightProbeVolumeObject*, int> {
	CSceneLightProbeVolumeObject * m_key; /* 0 8 */
	int m_value; /* 8 4 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<CSceneLightProbeVolumeObject*, int>* );
	/* ../public/tier0/utlcommon.h:66 */
	int& GetValue(CUtlKeyValuePair<CSceneLightProbeVolumeObject*, int>* );
	/* ../public/tier0/utlcommon.h:67 */
	const int& GetValue(const CUtlKeyValuePair<CSceneLightProbeVolumeObject*, int>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef int ValueReturn_t;
	/* ../public/tier0/utlcommon.h:64 */
	void CUtlKeyValuePair<CSceneLightProbeVolumeObject*, int>(CUtlKeyValuePair<CSceneLightProbeVolumeObject*, int>* , CSceneLightProbeVolumeObject* const& , const int& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<CSceneLightProbeVolumeObject*, int> *); /* linkage=_ZN16CUtlKeyValuePairIP28CSceneLightProbeVolumeObjectiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<CSceneLightProbeVolumeObject*, int> *); /* linkage=_ZN16CUtlKeyValuePairIP28CSceneLightProbeVolumeObjectiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<CSceneLightProbeVolumeObject*, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIP28CSceneLightProbeVolumeObjectiE8GetValueEv */
	void CUtlKeyValuePair<CSceneLightProbeVolumeObject*, int>(class CUtlKeyValuePair<CSceneLightProbeVolumeObject*, int> *, class CSceneLightProbeVolumeObject * const &, const int  &); /* linkage=_ZN16CUtlKeyValuePairIP28CSceneLightProbeVolumeObjectiEC4IS1_iEERKT_RKT0_ */
};

// <02B6DCE0> ../public/tier0/utlcommon.h:51
// member functions: 47
// member variables: 2
// class size: 16
class CUtlKeyValuePair<const CEnvMapSceneObject*, int> {
	const class CEnvMapSceneObject * m_key; /* 0 8 */
	int m_value; /* 8 4 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<const CEnvMapSceneObject*, int>* );
	/* ../public/tier0/utlcommon.h:66 */
	int& GetValue(CUtlKeyValuePair<const CEnvMapSceneObject*, int>* );
	/* ../public/tier0/utlcommon.h:67 */
	const int& GetValue(const CUtlKeyValuePair<const CEnvMapSceneObject*, int>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef int ValueReturn_t;
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*> *); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructFieldPK32KV3ConvertSpecialFieldBehavior_tEC4Ev */
	const class KV3ConvertSpecialFieldBehavior_t  * & GetValue(class CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*> *); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructFieldPK32KV3ConvertSpecialFieldBehavior_tE8GetValueEv */
	const class KV3ConvertSpecialFieldBehavior_t  * const & GetValue(const class CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK24CResourceDiskStructFieldPK32KV3ConvertSpecialFieldBehavior_tE8GetValueEv */
	void CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*>(class CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*> *, const class CResourceDiskStructField  * const &, const class KV3ConvertSpecialFieldBehavior_t  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructFieldPK32KV3ConvertSpecialFieldBehavior_tEC4IS2_S5_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CResourceDiskStructField*, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructField7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CResourceDiskStructField*, empty_t> *, const class CResourceDiskStructField  * const &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructField7empty_tEC4ERKS2_RKS3_ */
	const class CResourceDiskStructField  * const & GetValue(const class CUtlKeyValuePair<const CResourceDiskStructField*, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK24CResourceDiskStructField7empty_tE8GetValueEv */
	void CUtlKeyValuePair<const CResourceDiskStructField*>(class CUtlKeyValuePair<const CResourceDiskStructField*, empty_t> *, const class CResourceDiskStructField  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructField7empty_tEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_t7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t> *, const class ResourceBindingBase_t  * const &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_t7empty_tEC4ERKS2_RKS3_ */
	const class ResourceBindingBase_t  * const & GetValue(const class CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK21ResourceBindingBase_t7empty_tE8GetValueEv */
	void CUtlKeyValuePair<const ResourceBindingBase_t*>(class CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t> *, const class ResourceBindingBase_t  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_t7empty_tEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_tjEC4Ev */
	unsigned int & GetValue(class CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_tjE8GetValueEv */
	const unsigned int  & GetValue(const class CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK21ResourceBindingBase_tjE8GetValueEv */
	void CUtlKeyValuePair<const ResourceBindingBase_t*>(class CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int> *, const class ResourceBindingBase_t  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_tjEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CEnvMapSceneObject*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK18CEnvMapSceneObjectiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<const CEnvMapSceneObject*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK18CEnvMapSceneObjectiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<const CEnvMapSceneObject*, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK18CEnvMapSceneObjectiE8GetValueEv */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const IMaterial2*, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIPK10IMaterial27empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const IMaterial2*, empty_t> *, const class IMaterial2  * const &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIPK10IMaterial27empty_tEC4ERKS2_RKS3_ */
	const class IMaterial2  * const & GetValue(const class CUtlKeyValuePair<const IMaterial2*, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK10IMaterial27empty_tE8GetValueEv */
	void CUtlKeyValuePair<const IMaterial2*>(class CUtlKeyValuePair<const IMaterial2*, empty_t> *, const class IMaterial2  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK10IMaterial27empty_tEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const qhVertex*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<const qhVertex*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<const qhVertex*, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK8qhVertexiE8GetValueEv */
	void CUtlKeyValuePair<const qhVertex*, int>(class CUtlKeyValuePair<const qhVertex*, int> *, const class qhVertex  * const &, const int  &); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexiEC4IS2_iEERKT_RKT0_ */
	void CUtlKeyValuePair<const qhVertex*>(class CUtlKeyValuePair<const qhVertex*, int> *, const class qhVertex  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexiEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const qhFace*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK6qhFaceiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<const qhFace*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK6qhFaceiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<const qhFace*, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK6qhFaceiE8GetValueEv */
	void CUtlKeyValuePair<const qhFace*, int>(class CUtlKeyValuePair<const qhFace*, int> *, const class qhFace  * const &, const int  &); /* linkage=_ZN16CUtlKeyValuePairIPK6qhFaceiEC4IS2_iEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIF); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEEC4Ev */
	class ComponentHandleWithListPointer_t & GetValue(class CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIF); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEE8GetValueEv */
	const class ComponentHandleWithListPointer_t  & GetValue(const class CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, ); /* linkage=_ZNK16CUtlKeyValuePairIPK8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEE8GetValueEv */
	void CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>(class CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIF, const class qhVertex  * const &, const class ComponentHandleWithListPointer_t  &); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEEC4IS2_SB_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus> *); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase13CStrideStatusEC4Ev */
	class CStrideStatus & GetValue(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus> *); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase13CStrideStatusE8GetValueEv */
	const class CStrideStatus  & GetValue(const class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK19CAnimUpdateNodeBase13CStrideStatusE8GetValueEv */
	void CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus>(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus> *, const class CAnimUpdateNodeBase  * const &, const class CStrideStatus  &); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase13CStrideStatusEC4IS2_S3_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion> *); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase11CRootMotionEC4Ev */
	class CRootMotion & GetValue(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion> *); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase11CRootMotionE8GetValueEv */
	const class CRootMotion  & GetValue(const class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK19CAnimUpdateNodeBase11CRootMotionE8GetValueEv */
	void CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion>(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion> *, const class CAnimUpdateNodeBase  * const &, const class CRootMotion  &); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase11CRootMotionEC4IS2_S3_EERKT_RKT0_ */
};

// <02DC761E> ../public/tier0/utlcommon.h:51
// member functions: 41
// member variables: 2
// class size: 32
class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t> {
	unsigned int m_key; /* 0 4 */
	FrameBufferScratchTexInfo_t m_value; /* 8 24 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t>* );
	/* ../public/tier0/utlcommon.h:66 */
	FrameBufferScratchTexInfo_t& GetValue(CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t>* );
	/* ../public/tier0/utlcommon.h:67 */
	const FrameBufferScratchTexInfo_t& GetValue(const CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef struct FrameBufferScratchTexInfo_t ValueReturn_t;
	void ~CUtlKeyValuePair(CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t>* );
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, int> *); /* linkage=_ZN16CUtlKeyValuePairIjiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<unsigned int, int> *); /* linkage=_ZN16CUtlKeyValuePairIjiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<unsigned int, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIjiE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, int>(class CUtlKeyValuePair<unsigned int, int> *, const unsigned int  &, const int  &); /* linkage=_ZN16CUtlKeyValuePairIjiEC4IjiEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIj7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, empty_t> *, const unsigned int  &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIj7empty_tEC4ERKjRKS0_ */
	const unsigned int  & GetValue(const class CUtlKeyValuePair<unsigned int, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIj7empty_tE8GetValueEv */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*> *); /* linkage=_ZN16CUtlKeyValuePairIjPN16CKeyValuesSystem18SharedStringData_tEEC4Ev */
	class SharedStringData_t * & GetValue(class CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*> *); /* linkage=_ZN16CUtlKeyValuePairIjPN16CKeyValuesSystem18SharedStringData_tEE8GetValueEv */
	class SharedStringData_t * const & GetValue(const class CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*>  *); /* linkage=_ZNK16CUtlKeyValuePairIjPN16CKeyValuesSystem18SharedStringData_tEE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*>(class CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*> *, const unsigned int  &, class SharedStringData_t * const &); /* linkage=_ZN16CUtlKeyValuePairIjPN16CKeyValuesSystem18SharedStringData_tEEC4IjS2_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*> *); /* linkage=_ZN16CUtlKeyValuePairIjPK17CResourceDiskEnumEC4Ev */
	const class CResourceDiskEnum  * & GetValue(class CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*> *); /* linkage=_ZN16CUtlKeyValuePairIjPK17CResourceDiskEnumE8GetValueEv */
	const class CResourceDiskEnum  * const & GetValue(const class CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*>  *); /* linkage=_ZNK16CUtlKeyValuePairIjPK17CResourceDiskEnumE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*>(class CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*> *, const unsigned int  &, const class CResourceDiskEnum  * const &); /* linkage=_ZN16CUtlKeyValuePairIjPK17CResourceDiskEnumEC4IjS2_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*> *); /* linkage=_ZN16CUtlKeyValuePairIjPK19CResourceDiskStructEC4Ev */
	const class CResourceDiskStruct  * & GetValue(class CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*> *); /* linkage=_ZN16CUtlKeyValuePairIjPK19CResourceDiskStructE8GetValueEv */
	const class CResourceDiskStruct  * const & GetValue(const class CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*>  *); /* linkage=_ZNK16CUtlKeyValuePairIjPK19CResourceDiskStructE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*>(class CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*> *, const unsigned int  &, const class CResourceDiskStruct  * const &); /* linkage=_ZN16CUtlKeyValuePairIjPK19CResourceDiskStructEC4IjS2_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, short unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIjtEC4Ev */
	short unsigned int & GetValue(class CUtlKeyValuePair<unsigned int, short unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIjtE8GetValueEv */
	const short unsigned int  & GetValue(const class CUtlKeyValuePair<unsigned int, short unsigned int>  *); /* linkage=_ZNK16CUtlKeyValuePairIjtE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, short unsigned int>(class CUtlKeyValuePair<unsigned int, short unsigned int> *, const unsigned int  &, const short unsigned int  &); /* linkage=_ZN16CUtlKeyValuePairIjtEC4IjtEERKT_RKT0_ */
	void CUtlKeyValuePair<unsigned int>(class CUtlKeyValuePair<unsigned int, empty_t> *, const unsigned int  &); /* linkage=_ZN16CUtlKeyValuePairIj7empty_tEC4IjEERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry> *); /* linkage=_ZN16CUtlKeyValuePairIjN18CVSoundTypeManager12SfxDictEntryEEC4Ev */
	class SfxDictEntry & GetValue(class CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry> *); /* linkage=_ZN16CUtlKeyValuePairIjN18CVSoundTypeManager12SfxDictEntryEE8GetValueEv */
	const class SfxDictEntry  & GetValue(const class CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry>  *); /* linkage=_ZNK16CUtlKeyValuePairIjN18CVSoundTypeManager12SfxDictEntryEE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry>(class CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry> *, const unsigned int  &, const class SfxDictEntry  &); /* linkage=_ZN16CUtlKeyValuePairIjN18CVSoundTypeManager12SfxDictEntryEEC4IjS1_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t> *); /* linkage=_ZN16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEEC4Ev */
	class FrameBufferScratchTexInfo_t & GetValue(class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t> *); /* linkage=_ZN16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEE8GetValueEv */
	const class FrameBufferScratchTexInfo_t  & GetValue(const class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEE8GetValueEv */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t> *); /* linkage=_ZN16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEED4Ev */
	void CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t>(class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t> *, const unsigned int  &, const class FrameBufferScratchTexInfo_t  &); /* linkage=_ZN16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEEC4IjS1_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t> *); /* linkage=_ZN16CUtlKeyValuePairIj28CAnimationDecodeCacheEntry_tEC4Ev */
	class CAnimationDecodeCacheEntry_t & GetValue(class CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t> *); /* linkage=_ZN16CUtlKeyValuePairIj28CAnimationDecodeCacheEntry_tE8GetValueEv */
	const class CAnimationDecodeCacheEntry_t  & GetValue(const class CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIj28CAnimationDecodeCacheEntry_tE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t>(class CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t> *, const unsigned int  &, const class CAnimationDecodeCacheEntry_t  &); /* linkage=_ZN16CUtlKeyValuePairIj28CAnimationDecodeCacheEntry_tEC4IjS0_EERKT_RKT0_ */
};

// <04A26C59> ../public/tier0/utlcommon.h:51
// member functions: 15
// member variables: 2
// class size: 16
class CUtlKeyValuePair<ResourceId_t, int> {
	ResourceId_t m_key; /* 0 8 */
	int m_value; /* 8 4 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<ResourceId_t, int>* );
	/* ../public/tier0/utlcommon.h:66 */
	int& GetValue(CUtlKeyValuePair<ResourceId_t, int>* );
	/* ../public/tier0/utlcommon.h:67 */
	const int& GetValue(const CUtlKeyValuePair<ResourceId_t, int>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef int ValueReturn_t;
	void CUtlKeyValuePair(class CUtlKeyValuePair<ResourceId_t, int> *); /* linkage=_ZN16CUtlKeyValuePairI12ResourceId_tiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<ResourceId_t, int> *); /* linkage=_ZN16CUtlKeyValuePairI12ResourceId_tiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<ResourceId_t, int>  *); /* linkage=_ZNK16CUtlKeyValuePairI12ResourceId_tiE8GetValueEv */
	void CUtlKeyValuePair<ResourceId_t, int>(class CUtlKeyValuePair<ResourceId_t, int> *, const class ResourceId_t  &, const int  &); /* linkage=_ZN16CUtlKeyValuePairI12ResourceId_tiEC4IS0_iEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<ResourceId_t, CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> >); /* linkage=_ZN16CUtlKeyValuePairI12ResourceId_tP10CUtlVectorIP28IGenericDataResourceListener10CUtlMemoryIS3_iEEEC4Ev */
	class CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> > * & GetValue(class CUtlKeyValuePair<ResourceId_t, CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> >); /* linkage=_ZN16CUtlKeyValuePairI12ResourceId_tP10CUtlVectorIP28IGenericDataResourceListener10CUtlMemoryIS3_iEEE8GetValueEv */
	class CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> > * const & GetValue(const class CUtlKeyValuePair<ResourceId_t, CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, ); /* linkage=_ZNK16CUtlKeyValuePairI12ResourceId_tP10CUtlVectorIP28IGenericDataResourceListener10CUtlMemoryIS3_iEEE8GetValueEv */
	void CUtlKeyValuePair<ResourceId_t, CUtlVector<IGenericDataResourceListener*>*>(class CUtlKeyValuePair<ResourceId_t, CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> >, const class ResourceId_t  &, class CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> > * const &); /* linkage=_ZN16CUtlKeyValuePairI12ResourceId_tP10CUtlVectorIP28IGenericDataResourceListener10CUtlMemoryIS3_iEEEC4IS0_S7_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<ResourceId_t, const ResourceBindingBase_t*> *); /* linkage=_ZN16CUtlKeyValuePairI12ResourceId_tPK21ResourceBindingBase_tEC4Ev */
	const class ResourceBindingBase_t  * & GetValue(class CUtlKeyValuePair<ResourceId_t, const ResourceBindingBase_t*> *); /* linkage=_ZN16CUtlKeyValuePairI12ResourceId_tPK21ResourceBindingBase_tE8GetValueEv */
	const class ResourceBindingBase_t  * const & GetValue(const class CUtlKeyValuePair<ResourceId_t, const ResourceBindingBase_t*>  *); /* linkage=_ZNK16CUtlKeyValuePairI12ResourceId_tPK21ResourceBindingBase_tE8GetValueEv */
	void CUtlKeyValuePair<ResourceId_t, const ResourceBindingBase_t*>(class CUtlKeyValuePair<ResourceId_t, const ResourceBindingBase_t*> *, const class ResourceId_t  &, const class ResourceBindingBase_t  * const &); /* linkage=_ZN16CUtlKeyValuePairI12ResourceId_tPK21ResourceBindingBase_tEC4IS0_S3_EERKT_RKT0_ */
};

// <04A29B95> ../public/tier0/utlcommon.h:51
// member functions: 40
// member variables: 2
// class size: 8
class CUtlKeyValuePair<unsigned int, int> {
	unsigned int m_key; /* 0 4 */
	int m_value; /* 4 4 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<unsigned int, int>* );
	/* ../public/tier0/utlcommon.h:66 */
	int& GetValue(CUtlKeyValuePair<unsigned int, int>* );
	/* ../public/tier0/utlcommon.h:67 */
	const int& GetValue(const CUtlKeyValuePair<unsigned int, int>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef int ValueReturn_t;
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, int> *); /* linkage=_ZN16CUtlKeyValuePairIjiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<unsigned int, int> *); /* linkage=_ZN16CUtlKeyValuePairIjiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<unsigned int, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIjiE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, int>(class CUtlKeyValuePair<unsigned int, int> *, const unsigned int  &, const int  &); /* linkage=_ZN16CUtlKeyValuePairIjiEC4IjiEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIj7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, empty_t> *, const unsigned int  &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIj7empty_tEC4ERKjRKS0_ */
	const unsigned int  & GetValue(const class CUtlKeyValuePair<unsigned int, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIj7empty_tE8GetValueEv */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*> *); /* linkage=_ZN16CUtlKeyValuePairIjPN16CKeyValuesSystem18SharedStringData_tEEC4Ev */
	class SharedStringData_t * & GetValue(class CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*> *); /* linkage=_ZN16CUtlKeyValuePairIjPN16CKeyValuesSystem18SharedStringData_tEE8GetValueEv */
	class SharedStringData_t * const & GetValue(const class CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*>  *); /* linkage=_ZNK16CUtlKeyValuePairIjPN16CKeyValuesSystem18SharedStringData_tEE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*>(class CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*> *, const unsigned int  &, class SharedStringData_t * const &); /* linkage=_ZN16CUtlKeyValuePairIjPN16CKeyValuesSystem18SharedStringData_tEEC4IjS2_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*> *); /* linkage=_ZN16CUtlKeyValuePairIjPK17CResourceDiskEnumEC4Ev */
	const class CResourceDiskEnum  * & GetValue(class CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*> *); /* linkage=_ZN16CUtlKeyValuePairIjPK17CResourceDiskEnumE8GetValueEv */
	const class CResourceDiskEnum  * const & GetValue(const class CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*>  *); /* linkage=_ZNK16CUtlKeyValuePairIjPK17CResourceDiskEnumE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*>(class CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*> *, const unsigned int  &, const class CResourceDiskEnum  * const &); /* linkage=_ZN16CUtlKeyValuePairIjPK17CResourceDiskEnumEC4IjS2_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*> *); /* linkage=_ZN16CUtlKeyValuePairIjPK19CResourceDiskStructEC4Ev */
	const class CResourceDiskStruct  * & GetValue(class CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*> *); /* linkage=_ZN16CUtlKeyValuePairIjPK19CResourceDiskStructE8GetValueEv */
	const class CResourceDiskStruct  * const & GetValue(const class CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*>  *); /* linkage=_ZNK16CUtlKeyValuePairIjPK19CResourceDiskStructE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*>(class CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*> *, const unsigned int  &, const class CResourceDiskStruct  * const &); /* linkage=_ZN16CUtlKeyValuePairIjPK19CResourceDiskStructEC4IjS2_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, short unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIjtEC4Ev */
	short unsigned int & GetValue(class CUtlKeyValuePair<unsigned int, short unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIjtE8GetValueEv */
	const short unsigned int  & GetValue(const class CUtlKeyValuePair<unsigned int, short unsigned int>  *); /* linkage=_ZNK16CUtlKeyValuePairIjtE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, short unsigned int>(class CUtlKeyValuePair<unsigned int, short unsigned int> *, const unsigned int  &, const short unsigned int  &); /* linkage=_ZN16CUtlKeyValuePairIjtEC4IjtEERKT_RKT0_ */
	void CUtlKeyValuePair<unsigned int>(class CUtlKeyValuePair<unsigned int, empty_t> *, const unsigned int  &); /* linkage=_ZN16CUtlKeyValuePairIj7empty_tEC4IjEERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry> *); /* linkage=_ZN16CUtlKeyValuePairIjN18CVSoundTypeManager12SfxDictEntryEEC4Ev */
	class SfxDictEntry & GetValue(class CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry> *); /* linkage=_ZN16CUtlKeyValuePairIjN18CVSoundTypeManager12SfxDictEntryEE8GetValueEv */
	const class SfxDictEntry  & GetValue(const class CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry>  *); /* linkage=_ZNK16CUtlKeyValuePairIjN18CVSoundTypeManager12SfxDictEntryEE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry>(class CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry> *, const unsigned int  &, const class SfxDictEntry  &); /* linkage=_ZN16CUtlKeyValuePairIjN18CVSoundTypeManager12SfxDictEntryEEC4IjS1_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t> *); /* linkage=_ZN16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEEC4Ev */
	class FrameBufferScratchTexInfo_t & GetValue(class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t> *); /* linkage=_ZN16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEE8GetValueEv */
	const class FrameBufferScratchTexInfo_t  & GetValue(const class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEE8GetValueEv */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t> *); /* linkage=_ZN16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEED4Ev */
	void CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t>(class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t> *, const unsigned int  &, const class FrameBufferScratchTexInfo_t  &); /* linkage=_ZN16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEEC4IjS1_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t> *); /* linkage=_ZN16CUtlKeyValuePairIj28CAnimationDecodeCacheEntry_tEC4Ev */
	class CAnimationDecodeCacheEntry_t & GetValue(class CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t> *); /* linkage=_ZN16CUtlKeyValuePairIj28CAnimationDecodeCacheEntry_tE8GetValueEv */
	const class CAnimationDecodeCacheEntry_t  & GetValue(const class CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIj28CAnimationDecodeCacheEntry_tE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t>(class CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t> *, const unsigned int  &, const class CAnimationDecodeCacheEntry_t  &); /* linkage=_ZN16CUtlKeyValuePairIj28CAnimationDecodeCacheEntry_tEC4IjS0_EERKT_RKT0_ */
};

// <04A2B2EF> ../public/tier0/utlcommon.h:51
// member functions: 29
// member variables: 2
// class size: 8
class CUtlKeyValuePair<int, unsigned int> {
	int m_key; /* 0 4 */
	unsigned int m_value; /* 4 4 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<int, unsigned int>* );
	/* ../public/tier0/utlcommon.h:66 */
	unsigned int& GetValue(CUtlKeyValuePair<int, unsigned int>* );
	/* ../public/tier0/utlcommon.h:67 */
	const unsigned int& GetValue(const CUtlKeyValuePair<int, unsigned int>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef unsigned int ValueReturn_t;
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, float> *); /* linkage=_ZN16CUtlKeyValuePairIifEC4Ev */
	float & GetValue(class CUtlKeyValuePair<int, float> *); /* linkage=_ZN16CUtlKeyValuePairIifE8GetValueEv */
	const float  & GetValue(const class CUtlKeyValuePair<int, float>  *); /* linkage=_ZNK16CUtlKeyValuePairIifE8GetValueEv */
	void CUtlKeyValuePair<int, float>(class CUtlKeyValuePair<int, float> *, const int  &, const float  &); /* linkage=_ZN16CUtlKeyValuePairIifEC4IifEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIijEC4Ev */
	unsigned int & GetValue(class CUtlKeyValuePair<int, unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIijE8GetValueEv */
	const unsigned int  & GetValue(const class CUtlKeyValuePair<int, unsigned int>  *); /* linkage=_ZNK16CUtlKeyValuePairIijE8GetValueEv */
	void CUtlKeyValuePair<int, unsigned int>(class CUtlKeyValuePair<int, unsigned int> *, const int  &, const unsigned int  &); /* linkage=_ZN16CUtlKeyValuePairIijEC4IijEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, int> *); /* linkage=_ZN16CUtlKeyValuePairIiiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<int, int> *); /* linkage=_ZN16CUtlKeyValuePairIiiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<int, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIiiE8GetValueEv */
	void CUtlKeyValuePair<int, int>(class CUtlKeyValuePair<int, int> *, const int  &, const int  &); /* linkage=_ZN16CUtlKeyValuePairIiiEC4IiiEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIi7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, empty_t> *, const int  &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIi7empty_tEC4ERKiRKS0_ */
	const int  & GetValue(const class CUtlKeyValuePair<int, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIi7empty_tE8GetValueEv */
	void CUtlKeyValuePair<int>(class CUtlKeyValuePair<int, empty_t> *, const int  &); /* linkage=_ZN16CUtlKeyValuePairIi7empty_tEC4IiEERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrI21CAnimNodeInstanceBase17CRefCountAccessorEEC4Ev */
	class CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> & GetValue(class CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrI21CAnimNodeInstanceBase17CRefCountAccessorEE8GetValueEv */
	const class CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>  & GetValue(const class CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> >  *); /* linkage=_ZNK16CUtlKeyValuePairIi9CSmartPtrI21CAnimNodeInstanceBase17CRefCountAccessorEE8GetValueEv */
	void CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase> >(class CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> > *, const int  &, const class CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>  &); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrI21CAnimNodeInstanceBase17CRefCountAccessorEEC4IiS3_EERKT_RKT0_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrI21CAnimNodeInstanceBase17CRefCountAccessorEED4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrIK15CActivityValues17CRefCountAccessorEEC4Ev */
	class CSmartPtr<const CActivityValues, CRefCountAccessor> & GetValue(class CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrIK15CActivityValues17CRefCountAccessorEE8GetValueEv */
	const class CSmartPtr<const CActivityValues, CRefCountAccessor>  & GetValue(const class CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> >  *); /* linkage=_ZNK16CUtlKeyValuePairIi9CSmartPtrIK15CActivityValues17CRefCountAccessorEE8GetValueEv */
	void CUtlKeyValuePair<int, CSmartPtr<const CActivityValues> >(class CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> > *, const int  &, const class CSmartPtr<const CActivityValues, CRefCountAccessor>  &); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrIK15CActivityValues17CRefCountAccessorEEC4IiS4_EERKT_RKT0_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrIK15CActivityValues17CRefCountAccessorEED4Ev */
};

// <04A31269> ../public/tier0/utlcommon.h:51
// member functions: 24
// member variables: 2
// class size: 16
class CUtlKeyValuePair<CUtlString, int> {
	CUtlString m_key; /* 0 8 */
	int m_value; /* 8 4 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<CUtlString, int>* );
	/* ../public/tier0/utlcommon.h:66 */
	int& GetValue(CUtlKeyValuePair<CUtlString, int>* );
	/* ../public/tier0/utlcommon.h:67 */
	const int& GetValue(const CUtlKeyValuePair<CUtlString, int>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef int ValueReturn_t;
	void ~CUtlKeyValuePair(CUtlKeyValuePair<CUtlString, int>* );
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, CBufferString> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString13CBufferStringEC4Ev */
	class CBufferString & GetValue(class CUtlKeyValuePair<CUtlString, CBufferString> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString13CBufferStringE8GetValueEv */
	const class CBufferString  & GetValue(const class CUtlKeyValuePair<CUtlString, CBufferString>  *); /* linkage=_ZNK16CUtlKeyValuePairI10CUtlString13CBufferStringE8GetValueEv */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, CBufferString> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString13CBufferStringED4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, empty_t> *, const class CUtlString  &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString7empty_tEC4ERKS0_RKS1_ */
	const class CUtlString  & GetValue(const class CUtlKeyValuePair<CUtlString, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairI10CUtlString7empty_tE8GetValueEv */
	void CUtlKeyValuePair<CUtlString>(class CUtlKeyValuePair<CUtlString, empty_t> *, const class CUtlString  &); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString7empty_tEC4IS0_EERKT_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString7empty_tED4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, int> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlStringiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<CUtlString, int> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlStringiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<CUtlString, int>  *); /* linkage=_ZNK16CUtlKeyValuePairI10CUtlStringiE8GetValueEv */
	void CUtlKeyValuePair<CUtlString, int>(class CUtlKeyValuePair<CUtlString, int> *, const class CUtlString  &, const int  &); /* linkage=_ZN16CUtlKeyValuePairI10CUtlStringiEC4IS0_iEERKT_RKT0_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, int> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlStringiED4Ev */
	void CUtlKeyValuePair<CUtlString>(class CUtlKeyValuePair<CUtlString, int> *, const class CUtlString  &); /* linkage=_ZN16CUtlKeyValuePairI10CUtlStringiEC4IS0_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString9CSmartPtrI9CSubGraph17CRefCountAccessorEEC4Ev */
	class CSmartPtr<CSubGraph, CRefCountAccessor> & GetValue(class CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString9CSmartPtrI9CSubGraph17CRefCountAccessorEE8GetValueEv */
	const class CSmartPtr<CSubGraph, CRefCountAccessor>  & GetValue(const class CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> >  *); /* linkage=_ZNK16CUtlKeyValuePairI10CUtlString9CSmartPtrI9CSubGraph17CRefCountAccessorEE8GetValueEv */
	void CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph> >(class CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> > *, const class CUtlString  &, const class CSmartPtr<CSubGraph, CRefCountAccessor>  &); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString9CSmartPtrI9CSubGraph17CRefCountAccessorEEC4IS0_S4_EERKT_RKT0_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString9CSmartPtrI9CSubGraph17CRefCountAccessorEED4Ev */
};

// <04A9C163> ../public/tier0/utlcommon.h:51
// member functions: 29
// member variables: 2
// class size: 8
class CUtlKeyValuePair<int, float> {
	int m_key; /* 0 4 */
	float m_value; /* 4 4 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<int, float>* );
	/* ../public/tier0/utlcommon.h:66 */
	float& GetValue(CUtlKeyValuePair<int, float>* );
	/* ../public/tier0/utlcommon.h:67 */
	const float& GetValue(const CUtlKeyValuePair<int, float>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef float ValueReturn_t;
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, float> *); /* linkage=_ZN16CUtlKeyValuePairIifEC4Ev */
	float & GetValue(class CUtlKeyValuePair<int, float> *); /* linkage=_ZN16CUtlKeyValuePairIifE8GetValueEv */
	const float  & GetValue(const class CUtlKeyValuePair<int, float>  *); /* linkage=_ZNK16CUtlKeyValuePairIifE8GetValueEv */
	void CUtlKeyValuePair<int, float>(class CUtlKeyValuePair<int, float> *, const int  &, const float  &); /* linkage=_ZN16CUtlKeyValuePairIifEC4IifEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIijEC4Ev */
	unsigned int & GetValue(class CUtlKeyValuePair<int, unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIijE8GetValueEv */
	const unsigned int  & GetValue(const class CUtlKeyValuePair<int, unsigned int>  *); /* linkage=_ZNK16CUtlKeyValuePairIijE8GetValueEv */
	void CUtlKeyValuePair<int, unsigned int>(class CUtlKeyValuePair<int, unsigned int> *, const int  &, const unsigned int  &); /* linkage=_ZN16CUtlKeyValuePairIijEC4IijEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, int> *); /* linkage=_ZN16CUtlKeyValuePairIiiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<int, int> *); /* linkage=_ZN16CUtlKeyValuePairIiiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<int, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIiiE8GetValueEv */
	void CUtlKeyValuePair<int, int>(class CUtlKeyValuePair<int, int> *, const int  &, const int  &); /* linkage=_ZN16CUtlKeyValuePairIiiEC4IiiEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIi7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, empty_t> *, const int  &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIi7empty_tEC4ERKiRKS0_ */
	const int  & GetValue(const class CUtlKeyValuePair<int, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIi7empty_tE8GetValueEv */
	void CUtlKeyValuePair<int>(class CUtlKeyValuePair<int, empty_t> *, const int  &); /* linkage=_ZN16CUtlKeyValuePairIi7empty_tEC4IiEERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrI21CAnimNodeInstanceBase17CRefCountAccessorEEC4Ev */
	class CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> & GetValue(class CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrI21CAnimNodeInstanceBase17CRefCountAccessorEE8GetValueEv */
	const class CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>  & GetValue(const class CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> >  *); /* linkage=_ZNK16CUtlKeyValuePairIi9CSmartPtrI21CAnimNodeInstanceBase17CRefCountAccessorEE8GetValueEv */
	void CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase> >(class CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> > *, const int  &, const class CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>  &); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrI21CAnimNodeInstanceBase17CRefCountAccessorEEC4IiS3_EERKT_RKT0_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrI21CAnimNodeInstanceBase17CRefCountAccessorEED4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrIK15CActivityValues17CRefCountAccessorEEC4Ev */
	class CSmartPtr<const CActivityValues, CRefCountAccessor> & GetValue(class CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrIK15CActivityValues17CRefCountAccessorEE8GetValueEv */
	const class CSmartPtr<const CActivityValues, CRefCountAccessor>  & GetValue(const class CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> >  *); /* linkage=_ZNK16CUtlKeyValuePairIi9CSmartPtrIK15CActivityValues17CRefCountAccessorEE8GetValueEv */
	void CUtlKeyValuePair<int, CSmartPtr<const CActivityValues> >(class CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> > *, const int  &, const class CSmartPtr<const CActivityValues, CRefCountAccessor>  &); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrIK15CActivityValues17CRefCountAccessorEEC4IiS4_EERKT_RKT0_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrIK15CActivityValues17CRefCountAccessorEED4Ev */
};

// <055343CA> ../public/tier0/utlcommon.h:51
// member functions: 20
// member variables: 2
// class size: 8
class CUtlKeyValuePair<CUtlStringToken, int> {
	CUtlStringToken m_key; /* 0 4 */
	int m_value; /* 4 4 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<CUtlStringToken, int>* );
	/* ../public/tier0/utlcommon.h:66 */
	int& GetValue(CUtlKeyValuePair<CUtlStringToken, int>* );
	/* ../public/tier0/utlcommon.h:67 */
	const int& GetValue(const CUtlKeyValuePair<CUtlStringToken, int>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef int ValueReturn_t;
	/* ../public/tier0/utlcommon.h:64 */
	void CUtlKeyValuePair<CUtlStringToken, int>(CUtlKeyValuePair<CUtlStringToken, int>* , const CUtlStringToken& , const int& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlStringToken, int> *); /* linkage=_ZN16CUtlKeyValuePairI15CUtlStringTokeniEC4Ev */
	int & GetValue(class CUtlKeyValuePair<CUtlStringToken, int> *); /* linkage=_ZN16CUtlKeyValuePairI15CUtlStringTokeniE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<CUtlStringToken, int>  *); /* linkage=_ZNK16CUtlKeyValuePairI15CUtlStringTokeniE8GetValueEv */
	void CUtlKeyValuePair<CUtlStringToken, int>(class CUtlKeyValuePair<CUtlStringToken, int> *, const class CUtlStringToken  &, const int  &); /* linkage=_ZN16CUtlKeyValuePairI15CUtlStringTokeniEC4IS0_iEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlStringToken, RenderDescriptorSetHandle_t__*> *); /* linkage=_ZN16CUtlKeyValuePairI15CUtlStringTokenP29RenderDescriptorSetHandle_t__EC4Ev */
	class RenderDescriptorSetHandle_t__ * & GetValue(class CUtlKeyValuePair<CUtlStringToken, RenderDescriptorSetHandle_t__*> *); /* linkage=_ZN16CUtlKeyValuePairI15CUtlStringTokenP29RenderDescriptorSetHandle_t__E8GetValueEv */
	class RenderDescriptorSetHandle_t__ * const & GetValue(const class CUtlKeyValuePair<CUtlStringToken, RenderDescriptorSetHandle_t__*>  *); /* linkage=_ZNK16CUtlKeyValuePairI15CUtlStringTokenP29RenderDescriptorSetHandle_t__E8GetValueEv */
	void CUtlKeyValuePair<CUtlStringToken, RenderDescriptorSetHandle_t__*>(class CUtlKeyValuePair<CUtlStringToken, RenderDescriptorSetHandle_t__*> *, const class CUtlStringToken  &, class RenderDescriptorSetHandle_t__ * const &); /* linkage=_ZN16CUtlKeyValuePairI15CUtlStringTokenP29RenderDescriptorSetHandle_t__EC4IS0_S2_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlStringToken, CUtlStringToken> *); /* linkage=_ZN16CUtlKeyValuePairI15CUtlStringTokenS0_EC4Ev */
	class CUtlStringToken & GetValue(class CUtlKeyValuePair<CUtlStringToken, CUtlStringToken> *); /* linkage=_ZN16CUtlKeyValuePairI15CUtlStringTokenS0_E8GetValueEv */
	const class CUtlStringToken  & GetValue(const class CUtlKeyValuePair<CUtlStringToken, CUtlStringToken>  *); /* linkage=_ZNK16CUtlKeyValuePairI15CUtlStringTokenS0_E8GetValueEv */
	void CUtlKeyValuePair<CUtlStringToken, CUtlStringToken>(class CUtlKeyValuePair<CUtlStringToken, CUtlStringToken> *, const class CUtlStringToken  &, const class CUtlStringToken  &); /* linkage=_ZN16CUtlKeyValuePairI15CUtlStringTokenS0_EC4IS0_S0_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> > *); /* linkage=_ZN16CUtlKeyValuePairI15CUtlStringToken11CWeakHandleI30InfoForResourceTypeCEntityLumpEEC4Ev */
	class CWeakHandle<InfoForResourceTypeCEntityLump> & GetValue(class CUtlKeyValuePair<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> > *); /* linkage=_ZN16CUtlKeyValuePairI15CUtlStringToken11CWeakHandleI30InfoForResourceTypeCEntityLumpEE8GetValueEv */
	const class CWeakHandle<InfoForResourceTypeCEntityLump>  & GetValue(const class CUtlKeyValuePair<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> >  *); /* linkage=_ZNK16CUtlKeyValuePairI15CUtlStringToken11CWeakHandleI30InfoForResourceTypeCEntityLumpEE8GetValueEv */
	void CUtlKeyValuePair<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> >(class CUtlKeyValuePair<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> > *, const class CUtlStringToken  &, const class CWeakHandle<InfoForResourceTypeCEntityLump>  &); /* linkage=_ZN16CUtlKeyValuePairI15CUtlStringToken11CWeakHandleI30InfoForResourceTypeCEntityLumpEEC4IS0_S3_EERKT_RKT0_ */
};

// <05CC4BC4> ../public/tier0/utlcommon.h:51
// member functions: 12
// member variables: 2
// class size: 12
class CUtlKeyValuePair<UndirectedEdge_t, int> {
	UndirectedEdge_t m_key; /* 0 8 */
	int m_value; /* 8 4 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<UndirectedEdge_t, int>* );
	/* ../public/tier0/utlcommon.h:66 */
	int& GetValue(CUtlKeyValuePair<UndirectedEdge_t, int>* );
	/* ../public/tier0/utlcommon.h:67 */
	const int& GetValue(const CUtlKeyValuePair<UndirectedEdge_t, int>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef int ValueReturn_t;
	/* ../public/tier0/utlcommon.h:64 */
	void CUtlKeyValuePair<UndirectedEdge_t, int>(CUtlKeyValuePair<UndirectedEdge_t, int>* , const UndirectedEdge_t& , const int& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<UndirectedEdge_t, EdgeFaceIdEntry_t> *); /* linkage=_ZN16CUtlKeyValuePairI16UndirectedEdge_t17EdgeFaceIdEntry_tEC4Ev */
	class EdgeFaceIdEntry_t & GetValue(class CUtlKeyValuePair<UndirectedEdge_t, EdgeFaceIdEntry_t> *); /* linkage=_ZN16CUtlKeyValuePairI16UndirectedEdge_t17EdgeFaceIdEntry_tE8GetValueEv */
	const class EdgeFaceIdEntry_t  & GetValue(const class CUtlKeyValuePair<UndirectedEdge_t, EdgeFaceIdEntry_t>  *); /* linkage=_ZNK16CUtlKeyValuePairI16UndirectedEdge_t17EdgeFaceIdEntry_tE8GetValueEv */
	void CUtlKeyValuePair<UndirectedEdge_t, EdgeFaceIdEntry_t>(class CUtlKeyValuePair<UndirectedEdge_t, EdgeFaceIdEntry_t> *, const class UndirectedEdge_t  &, const class EdgeFaceIdEntry_t  &); /* linkage=_ZN16CUtlKeyValuePairI16UndirectedEdge_t17EdgeFaceIdEntry_tEC4IS0_S1_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<UndirectedEdge_t, int> *); /* linkage=_ZN16CUtlKeyValuePairI16UndirectedEdge_tiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<UndirectedEdge_t, int> *); /* linkage=_ZN16CUtlKeyValuePairI16UndirectedEdge_tiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<UndirectedEdge_t, int>  *); /* linkage=_ZNK16CUtlKeyValuePairI16UndirectedEdge_tiE8GetValueEv */
	void CUtlKeyValuePair<UndirectedEdge_t, int>(class CUtlKeyValuePair<UndirectedEdge_t, int> *, const class UndirectedEdge_t  &, const int  &); /* linkage=_ZN16CUtlKeyValuePairI16UndirectedEdge_tiEC4IS0_iEERKT_RKT0_ */
};

// <05CD2F91> ../public/tier0/utlcommon.h:51
// member functions: 12
// member variables: 2
// class size: 16
class CUtlKeyValuePair<UndirectedEdge_t, EdgeFaceIdEntry_t> {
	UndirectedEdge_t m_key; /* 0 8 */
	EdgeFaceIdEntry_t m_value; /* 8 8 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<UndirectedEdge_t, EdgeFaceIdEntry_t>* );
	/* ../public/tier0/utlcommon.h:66 */
	EdgeFaceIdEntry_t& GetValue(CUtlKeyValuePair<UndirectedEdge_t, EdgeFaceIdEntry_t>* );
	/* ../public/tier0/utlcommon.h:67 */
	const EdgeFaceIdEntry_t& GetValue(const CUtlKeyValuePair<UndirectedEdge_t, EdgeFaceIdEntry_t>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef struct EdgeFaceIdEntry_t ValueReturn_t;
	/* ../public/tier0/utlcommon.h:64 */
	void CUtlKeyValuePair<UndirectedEdge_t, EdgeFaceIdEntry_t>(CUtlKeyValuePair<UndirectedEdge_t, EdgeFaceIdEntry_t>* , const UndirectedEdge_t& , const EdgeFaceIdEntry_t& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<UndirectedEdge_t, EdgeFaceIdEntry_t> *); /* linkage=_ZN16CUtlKeyValuePairI16UndirectedEdge_t17EdgeFaceIdEntry_tEC4Ev */
	class EdgeFaceIdEntry_t & GetValue(class CUtlKeyValuePair<UndirectedEdge_t, EdgeFaceIdEntry_t> *); /* linkage=_ZN16CUtlKeyValuePairI16UndirectedEdge_t17EdgeFaceIdEntry_tE8GetValueEv */
	const class EdgeFaceIdEntry_t  & GetValue(const class CUtlKeyValuePair<UndirectedEdge_t, EdgeFaceIdEntry_t>  *); /* linkage=_ZNK16CUtlKeyValuePairI16UndirectedEdge_t17EdgeFaceIdEntry_tE8GetValueEv */
	void CUtlKeyValuePair<UndirectedEdge_t, EdgeFaceIdEntry_t>(class CUtlKeyValuePair<UndirectedEdge_t, EdgeFaceIdEntry_t> *, const class UndirectedEdge_t  &, const class EdgeFaceIdEntry_t  &); /* linkage=_ZN16CUtlKeyValuePairI16UndirectedEdge_t17EdgeFaceIdEntry_tEC4IS0_S1_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<UndirectedEdge_t, int> *); /* linkage=_ZN16CUtlKeyValuePairI16UndirectedEdge_tiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<UndirectedEdge_t, int> *); /* linkage=_ZN16CUtlKeyValuePairI16UndirectedEdge_tiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<UndirectedEdge_t, int>  *); /* linkage=_ZNK16CUtlKeyValuePairI16UndirectedEdge_tiE8GetValueEv */
	void CUtlKeyValuePair<UndirectedEdge_t, int>(class CUtlKeyValuePair<UndirectedEdge_t, int> *, const class UndirectedEdge_t  &, const int  &); /* linkage=_ZN16CUtlKeyValuePairI16UndirectedEdge_tiEC4IS0_iEERKT_RKT0_ */
};

// <05D9B9DF> ../public/tier0/utlcommon.h:51
// member functions: 48
// member variables: 2
// class size: 16
class CUtlKeyValuePair<const qhFace*, int> {
	const class qhFace * m_key; /* 0 8 */
	int m_value; /* 8 4 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<const qhFace*, int>* );
	/* ../public/tier0/utlcommon.h:66 */
	int& GetValue(CUtlKeyValuePair<const qhFace*, int>* );
	/* ../public/tier0/utlcommon.h:67 */
	const int& GetValue(const CUtlKeyValuePair<const qhFace*, int>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef int ValueReturn_t;
	/* ../public/tier0/utlcommon.h:64 */
	void CUtlKeyValuePair<const qhFace*, int>(CUtlKeyValuePair<const qhFace*, int>* , const qhFace* const& , const int& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*> *); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructFieldPK32KV3ConvertSpecialFieldBehavior_tEC4Ev */
	const class KV3ConvertSpecialFieldBehavior_t  * & GetValue(class CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*> *); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructFieldPK32KV3ConvertSpecialFieldBehavior_tE8GetValueEv */
	const class KV3ConvertSpecialFieldBehavior_t  * const & GetValue(const class CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK24CResourceDiskStructFieldPK32KV3ConvertSpecialFieldBehavior_tE8GetValueEv */
	void CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*>(class CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*> *, const class CResourceDiskStructField  * const &, const class KV3ConvertSpecialFieldBehavior_t  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructFieldPK32KV3ConvertSpecialFieldBehavior_tEC4IS2_S5_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CResourceDiskStructField*, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructField7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CResourceDiskStructField*, empty_t> *, const class CResourceDiskStructField  * const &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructField7empty_tEC4ERKS2_RKS3_ */
	const class CResourceDiskStructField  * const & GetValue(const class CUtlKeyValuePair<const CResourceDiskStructField*, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK24CResourceDiskStructField7empty_tE8GetValueEv */
	void CUtlKeyValuePair<const CResourceDiskStructField*>(class CUtlKeyValuePair<const CResourceDiskStructField*, empty_t> *, const class CResourceDiskStructField  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructField7empty_tEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_t7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t> *, const class ResourceBindingBase_t  * const &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_t7empty_tEC4ERKS2_RKS3_ */
	const class ResourceBindingBase_t  * const & GetValue(const class CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK21ResourceBindingBase_t7empty_tE8GetValueEv */
	void CUtlKeyValuePair<const ResourceBindingBase_t*>(class CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t> *, const class ResourceBindingBase_t  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_t7empty_tEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_tjEC4Ev */
	unsigned int & GetValue(class CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_tjE8GetValueEv */
	const unsigned int  & GetValue(const class CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK21ResourceBindingBase_tjE8GetValueEv */
	void CUtlKeyValuePair<const ResourceBindingBase_t*>(class CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int> *, const class ResourceBindingBase_t  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_tjEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CEnvMapSceneObject*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK18CEnvMapSceneObjectiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<const CEnvMapSceneObject*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK18CEnvMapSceneObjectiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<const CEnvMapSceneObject*, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK18CEnvMapSceneObjectiE8GetValueEv */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const IMaterial2*, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIPK10IMaterial27empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const IMaterial2*, empty_t> *, const class IMaterial2  * const &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIPK10IMaterial27empty_tEC4ERKS2_RKS3_ */
	const class IMaterial2  * const & GetValue(const class CUtlKeyValuePair<const IMaterial2*, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK10IMaterial27empty_tE8GetValueEv */
	void CUtlKeyValuePair<const IMaterial2*>(class CUtlKeyValuePair<const IMaterial2*, empty_t> *, const class IMaterial2  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK10IMaterial27empty_tEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const qhVertex*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<const qhVertex*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<const qhVertex*, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK8qhVertexiE8GetValueEv */
	void CUtlKeyValuePair<const qhVertex*, int>(class CUtlKeyValuePair<const qhVertex*, int> *, const class qhVertex  * const &, const int  &); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexiEC4IS2_iEERKT_RKT0_ */
	void CUtlKeyValuePair<const qhVertex*>(class CUtlKeyValuePair<const qhVertex*, int> *, const class qhVertex  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexiEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const qhFace*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK6qhFaceiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<const qhFace*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK6qhFaceiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<const qhFace*, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK6qhFaceiE8GetValueEv */
	void CUtlKeyValuePair<const qhFace*, int>(class CUtlKeyValuePair<const qhFace*, int> *, const class qhFace  * const &, const int  &); /* linkage=_ZN16CUtlKeyValuePairIPK6qhFaceiEC4IS2_iEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIF); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEEC4Ev */
	class ComponentHandleWithListPointer_t & GetValue(class CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIF); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEE8GetValueEv */
	const class ComponentHandleWithListPointer_t  & GetValue(const class CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, ); /* linkage=_ZNK16CUtlKeyValuePairIPK8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEE8GetValueEv */
	void CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>(class CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIF, const class qhVertex  * const &, const class ComponentHandleWithListPointer_t  &); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEEC4IS2_SB_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus> *); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase13CStrideStatusEC4Ev */
	class CStrideStatus & GetValue(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus> *); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase13CStrideStatusE8GetValueEv */
	const class CStrideStatus  & GetValue(const class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK19CAnimUpdateNodeBase13CStrideStatusE8GetValueEv */
	void CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus>(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus> *, const class CAnimUpdateNodeBase  * const &, const class CStrideStatus  &); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase13CStrideStatusEC4IS2_S3_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion> *); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase11CRootMotionEC4Ev */
	class CRootMotion & GetValue(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion> *); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase11CRootMotionE8GetValueEv */
	const class CRootMotion  & GetValue(const class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK19CAnimUpdateNodeBase11CRootMotionE8GetValueEv */
	void CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion>(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion> *, const class CAnimUpdateNodeBase  * const &, const class CRootMotion  &); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase11CRootMotionEC4IS2_S3_EERKT_RKT0_ */
};

// <05DA9316> ../public/tier0/utlcommon.h:51
// member functions: 49
// member variables: 2
// class size: 16
class CUtlKeyValuePair<const qhVertex*, int> {
	const class qhVertex * m_key; /* 0 8 */
	int m_value; /* 8 4 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<const qhVertex*, int>* );
	/* ../public/tier0/utlcommon.h:66 */
	int& GetValue(CUtlKeyValuePair<const qhVertex*, int>* );
	/* ../public/tier0/utlcommon.h:67 */
	const int& GetValue(const CUtlKeyValuePair<const qhVertex*, int>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef int ValueReturn_t;
	/* ../public/tier0/utlcommon.h:64 */
	void CUtlKeyValuePair<const qhVertex*, int>(CUtlKeyValuePair<const qhVertex*, int>* , const qhVertex* const& , const int& );
	/* ../public/tier0/utlcommon.h:61 */
	void CUtlKeyValuePair<const qhVertex*>(CUtlKeyValuePair<const qhVertex*, int>* , const qhVertex* const& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*> *); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructFieldPK32KV3ConvertSpecialFieldBehavior_tEC4Ev */
	const class KV3ConvertSpecialFieldBehavior_t  * & GetValue(class CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*> *); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructFieldPK32KV3ConvertSpecialFieldBehavior_tE8GetValueEv */
	const class KV3ConvertSpecialFieldBehavior_t  * const & GetValue(const class CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK24CResourceDiskStructFieldPK32KV3ConvertSpecialFieldBehavior_tE8GetValueEv */
	void CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*>(class CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*> *, const class CResourceDiskStructField  * const &, const class KV3ConvertSpecialFieldBehavior_t  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructFieldPK32KV3ConvertSpecialFieldBehavior_tEC4IS2_S5_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CResourceDiskStructField*, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructField7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CResourceDiskStructField*, empty_t> *, const class CResourceDiskStructField  * const &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructField7empty_tEC4ERKS2_RKS3_ */
	const class CResourceDiskStructField  * const & GetValue(const class CUtlKeyValuePair<const CResourceDiskStructField*, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK24CResourceDiskStructField7empty_tE8GetValueEv */
	void CUtlKeyValuePair<const CResourceDiskStructField*>(class CUtlKeyValuePair<const CResourceDiskStructField*, empty_t> *, const class CResourceDiskStructField  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructField7empty_tEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_t7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t> *, const class ResourceBindingBase_t  * const &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_t7empty_tEC4ERKS2_RKS3_ */
	const class ResourceBindingBase_t  * const & GetValue(const class CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK21ResourceBindingBase_t7empty_tE8GetValueEv */
	void CUtlKeyValuePair<const ResourceBindingBase_t*>(class CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t> *, const class ResourceBindingBase_t  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_t7empty_tEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_tjEC4Ev */
	unsigned int & GetValue(class CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_tjE8GetValueEv */
	const unsigned int  & GetValue(const class CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK21ResourceBindingBase_tjE8GetValueEv */
	void CUtlKeyValuePair<const ResourceBindingBase_t*>(class CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int> *, const class ResourceBindingBase_t  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_tjEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CEnvMapSceneObject*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK18CEnvMapSceneObjectiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<const CEnvMapSceneObject*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK18CEnvMapSceneObjectiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<const CEnvMapSceneObject*, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK18CEnvMapSceneObjectiE8GetValueEv */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const IMaterial2*, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIPK10IMaterial27empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const IMaterial2*, empty_t> *, const class IMaterial2  * const &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIPK10IMaterial27empty_tEC4ERKS2_RKS3_ */
	const class IMaterial2  * const & GetValue(const class CUtlKeyValuePair<const IMaterial2*, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK10IMaterial27empty_tE8GetValueEv */
	void CUtlKeyValuePair<const IMaterial2*>(class CUtlKeyValuePair<const IMaterial2*, empty_t> *, const class IMaterial2  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK10IMaterial27empty_tEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const qhVertex*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<const qhVertex*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<const qhVertex*, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK8qhVertexiE8GetValueEv */
	void CUtlKeyValuePair<const qhVertex*, int>(class CUtlKeyValuePair<const qhVertex*, int> *, const class qhVertex  * const &, const int  &); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexiEC4IS2_iEERKT_RKT0_ */
	void CUtlKeyValuePair<const qhVertex*>(class CUtlKeyValuePair<const qhVertex*, int> *, const class qhVertex  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexiEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const qhFace*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK6qhFaceiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<const qhFace*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK6qhFaceiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<const qhFace*, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK6qhFaceiE8GetValueEv */
	void CUtlKeyValuePair<const qhFace*, int>(class CUtlKeyValuePair<const qhFace*, int> *, const class qhFace  * const &, const int  &); /* linkage=_ZN16CUtlKeyValuePairIPK6qhFaceiEC4IS2_iEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIF); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEEC4Ev */
	class ComponentHandleWithListPointer_t & GetValue(class CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIF); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEE8GetValueEv */
	const class ComponentHandleWithListPointer_t  & GetValue(const class CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, ); /* linkage=_ZNK16CUtlKeyValuePairIPK8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEE8GetValueEv */
	void CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>(class CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIF, const class qhVertex  * const &, const class ComponentHandleWithListPointer_t  &); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEEC4IS2_SB_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus> *); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase13CStrideStatusEC4Ev */
	class CStrideStatus & GetValue(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus> *); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase13CStrideStatusE8GetValueEv */
	const class CStrideStatus  & GetValue(const class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK19CAnimUpdateNodeBase13CStrideStatusE8GetValueEv */
	void CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus>(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus> *, const class CAnimUpdateNodeBase  * const &, const class CStrideStatus  &); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase13CStrideStatusEC4IS2_S3_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion> *); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase11CRootMotionEC4Ev */
	class CRootMotion & GetValue(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion> *); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase11CRootMotionE8GetValueEv */
	const class CRootMotion  & GetValue(const class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK19CAnimUpdateNodeBase11CRootMotionE8GetValueEv */
	void CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion>(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion> *, const class CAnimUpdateNodeBase  * const &, const class CRootMotion  &); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase11CRootMotionEC4IS2_S3_EERKT_RKT0_ */
};

// <05E2EFEE> ../public/tier0/utlcommon.h:51
// member functions: 12
// member variables: 2
// class size: 32
class CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, Vector> {
	ComponentHandleWithListPointer_t m_key; /* 0 16 */
	Vector m_value; /* 16 12 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon);
	/* ../public/tier0/utlcommon.h:66 */
	Vector& GetValue(CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon);
	/* ../public/tier0/utlcommon.h:67 */
	const Vector& GetValue(const CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::);
	/* ../public/tier0/utlcommon.h:54 */
	typedef struct Vector ValueReturn_t;
	/* ../public/tier0/utlcommon.h:61 */
	void CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>(CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon, const ComponentHandleWithListPointer_t& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon); /* linkage=_ZN16CUtlKeyValuePairIN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIVRVertexData_t7empty_t17HullIVRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tE6VectorEC4Ev */
	class Vector & GetValue(class CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon); /* linkage=_ZN16CUtlKeyValuePairIN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIVRVertexData_t7empty_t17HullIVRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tE6VectorE8GetValueEv */
	const class Vector  & GetValue(const class CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::); /* linkage=_ZNK16CUtlKeyValuePairIN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIVRVertexData_t7empty_t17HullIVRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tE6VectorE8GetValueEv */
	void CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>(class CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon, const class ComponentHandleWithListPointer_t  &); /* linkage=_ZN16CUtlKeyValuePairIN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIVRVertexData_t7empty_t17HullIVRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tE6VectorEC4IS8_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon); /* linkage=_ZN16CUtlKeyValuePairIN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIVRVertexData_t7empty_t17HullIVRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tES3_EC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon, const class ComponentHandleWithListPointer_t  &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIVRVertexData_t7empty_t17HullIVRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tES3_EC4ERKS8_RKS3_ */
	const class ComponentHandleWithListPointer_t  & GetValue(const class CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::); /* linkage=_ZNK16CUtlKeyValuePairIN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIVRVertexData_t7empty_t17HullIVRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tES3_E8GetValueEv */
	void CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>(class CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon, const class ComponentHandleWithListPointer_t  &); /* linkage=_ZN16CUtlKeyValuePairIN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIVRVertexData_t7empty_t17HullIVRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tES3_EC4IS8_EERKT_ */
};

// <05E30924> ../public/tier0/utlcommon.h:51
// member functions: 8
// member variables: 2
// class size: 24
class CUtlKeyValuePair<qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t> {
	qhVertex * m_key; /* 0 8 */
	ComponentHandleWithListPointer_t m_value; /* 8 16 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex);
	/* ../public/tier0/utlcommon.h:66 */
	ComponentHandleWithListPointer_t& GetValue(CUtlKeyValuePair<qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex);
	/* ../public/tier0/utlcommon.h:67 */
	const ComponentHandleWithListPointer_t& GetValue(const CUtlKeyValuePair<qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::);
	/* ../public/tier0/utlcommon.h:54 */
	typedef struct ComponentHandleWithListPointer_t ValueReturn_t;
	/* ../public/tier0/utlcommon.h:61 */
	void CUtlKeyValuePair<qhVertex*>(CUtlKeyValuePair<qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex, qhVertex* const& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex); /* linkage=_ZN16CUtlKeyValuePairIP8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIVRVertexData_t7empty_t17HullIVRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEEC4Ev */
	class ComponentHandleWithListPointer_t & GetValue(class CUtlKeyValuePair<qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex); /* linkage=_ZN16CUtlKeyValuePairIP8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIVRVertexData_t7empty_t17HullIVRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEE8GetValueEv */
	const class ComponentHandleWithListPointer_t  & GetValue(const class CUtlKeyValuePair<qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::); /* linkage=_ZNK16CUtlKeyValuePairIP8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIVRVertexData_t7empty_t17HullIVRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEE8GetValueEv */
	void CUtlKeyValuePair<qhVertex*>(class CUtlKeyValuePair<qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex, class qhVertex * const &); /* linkage=_ZN16CUtlKeyValuePairIP8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIVRVertexData_t7empty_t17HullIVRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEEC4IS1_EERKT_ */
};

// <05EC037D> ../public/tier0/utlcommon.h:51
// member functions: 48
// member variables: 2
// class size: 24
class CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t> {
	const class qhVertex * m_key; /* 0 8 */
	ComponentHandleWithListPointer_t m_value; /* 8 16 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIF);
	/* ../public/tier0/utlcommon.h:66 */
	ComponentHandleWithListPointer_t& GetValue(CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIF);
	/* ../public/tier0/utlcommon.h:67 */
	const ComponentHandleWithListPointer_t& GetValue(const CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, );
	/* ../public/tier0/utlcommon.h:54 */
	typedef struct ComponentHandleWithListPointer_t ValueReturn_t;
	/* ../public/tier0/utlcommon.h:64 */
	void CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>(CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIF, const qhVertex* const& , const ComponentHandleWithListPointer_t& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*> *); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructFieldPK32KV3ConvertSpecialFieldBehavior_tEC4Ev */
	const class KV3ConvertSpecialFieldBehavior_t  * & GetValue(class CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*> *); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructFieldPK32KV3ConvertSpecialFieldBehavior_tE8GetValueEv */
	const class KV3ConvertSpecialFieldBehavior_t  * const & GetValue(const class CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK24CResourceDiskStructFieldPK32KV3ConvertSpecialFieldBehavior_tE8GetValueEv */
	void CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*>(class CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*> *, const class CResourceDiskStructField  * const &, const class KV3ConvertSpecialFieldBehavior_t  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructFieldPK32KV3ConvertSpecialFieldBehavior_tEC4IS2_S5_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CResourceDiskStructField*, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructField7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CResourceDiskStructField*, empty_t> *, const class CResourceDiskStructField  * const &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructField7empty_tEC4ERKS2_RKS3_ */
	const class CResourceDiskStructField  * const & GetValue(const class CUtlKeyValuePair<const CResourceDiskStructField*, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK24CResourceDiskStructField7empty_tE8GetValueEv */
	void CUtlKeyValuePair<const CResourceDiskStructField*>(class CUtlKeyValuePair<const CResourceDiskStructField*, empty_t> *, const class CResourceDiskStructField  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructField7empty_tEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_t7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t> *, const class ResourceBindingBase_t  * const &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_t7empty_tEC4ERKS2_RKS3_ */
	const class ResourceBindingBase_t  * const & GetValue(const class CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK21ResourceBindingBase_t7empty_tE8GetValueEv */
	void CUtlKeyValuePair<const ResourceBindingBase_t*>(class CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t> *, const class ResourceBindingBase_t  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_t7empty_tEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_tjEC4Ev */
	unsigned int & GetValue(class CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_tjE8GetValueEv */
	const unsigned int  & GetValue(const class CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK21ResourceBindingBase_tjE8GetValueEv */
	void CUtlKeyValuePair<const ResourceBindingBase_t*>(class CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int> *, const class ResourceBindingBase_t  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_tjEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CEnvMapSceneObject*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK18CEnvMapSceneObjectiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<const CEnvMapSceneObject*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK18CEnvMapSceneObjectiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<const CEnvMapSceneObject*, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK18CEnvMapSceneObjectiE8GetValueEv */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const IMaterial2*, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIPK10IMaterial27empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const IMaterial2*, empty_t> *, const class IMaterial2  * const &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIPK10IMaterial27empty_tEC4ERKS2_RKS3_ */
	const class IMaterial2  * const & GetValue(const class CUtlKeyValuePair<const IMaterial2*, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK10IMaterial27empty_tE8GetValueEv */
	void CUtlKeyValuePair<const IMaterial2*>(class CUtlKeyValuePair<const IMaterial2*, empty_t> *, const class IMaterial2  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK10IMaterial27empty_tEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const qhVertex*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<const qhVertex*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<const qhVertex*, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK8qhVertexiE8GetValueEv */
	void CUtlKeyValuePair<const qhVertex*, int>(class CUtlKeyValuePair<const qhVertex*, int> *, const class qhVertex  * const &, const int  &); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexiEC4IS2_iEERKT_RKT0_ */
	void CUtlKeyValuePair<const qhVertex*>(class CUtlKeyValuePair<const qhVertex*, int> *, const class qhVertex  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexiEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const qhFace*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK6qhFaceiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<const qhFace*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK6qhFaceiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<const qhFace*, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK6qhFaceiE8GetValueEv */
	void CUtlKeyValuePair<const qhFace*, int>(class CUtlKeyValuePair<const qhFace*, int> *, const class qhFace  * const &, const int  &); /* linkage=_ZN16CUtlKeyValuePairIPK6qhFaceiEC4IS2_iEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIF); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEEC4Ev */
	class ComponentHandleWithListPointer_t & GetValue(class CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIF); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEE8GetValueEv */
	const class ComponentHandleWithListPointer_t  & GetValue(const class CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, ); /* linkage=_ZNK16CUtlKeyValuePairIPK8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEE8GetValueEv */
	void CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>(class CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIF, const class qhVertex  * const &, const class ComponentHandleWithListPointer_t  &); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEEC4IS2_SB_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus> *); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase13CStrideStatusEC4Ev */
	class CStrideStatus & GetValue(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus> *); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase13CStrideStatusE8GetValueEv */
	const class CStrideStatus  & GetValue(const class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK19CAnimUpdateNodeBase13CStrideStatusE8GetValueEv */
	void CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus>(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus> *, const class CAnimUpdateNodeBase  * const &, const class CStrideStatus  &); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase13CStrideStatusEC4IS2_S3_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion> *); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase11CRootMotionEC4Ev */
	class CRootMotion & GetValue(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion> *); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase11CRootMotionE8GetValueEv */
	const class CRootMotion  & GetValue(const class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK19CAnimUpdateNodeBase11CRootMotionE8GetValueEv */
	void CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion>(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion> *, const class CAnimUpdateNodeBase  * const &, const class CRootMotion  &); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase11CRootMotionEC4IS2_S3_EERKT_RKT0_ */
};

// <0604EBBE> ../public/tier0/utlcommon.h:51
// member functions: 5
// member variables: 2
// class size: 24
class CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int> {
	ComponentHandleWithListPointer_t m_key; /* 0 16 */
	int m_value; /* 16 4 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>* );
	/* ../public/tier0/utlcommon.h:66 */
	int& GetValue(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>* );
	/* ../public/tier0/utlcommon.h:67 */
	const int& GetValue(const CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef int ValueReturn_t;
	/* ../public/tier0/utlcommon.h:61 */
	void CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>* , const ComponentHandleWithListPointer_t& );
	/* ../public/tier0/utlcommon.h:64 */
	void CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>* , const ComponentHandleWithListPointer_t& , const int& );
};

// <060504F8> ../public/tier0/utlcommon.h:51
// member functions: 4
// member variables: 2
// class size: 24
class CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int> {
	ComponentHandleWithListPointer_t m_key; /* 0 16 */
	int m_value; /* 16 4 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>* );
	/* ../public/tier0/utlcommon.h:66 */
	int& GetValue(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>* );
	/* ../public/tier0/utlcommon.h:67 */
	const int& GetValue(const CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef int ValueReturn_t;
	/* ../public/tier0/utlcommon.h:64 */
	void CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>* , const ComponentHandleWithListPointer_t& , const int& );
};

// <060543CF> ../public/tier0/utlcommon.h:51
// member functions: 4
// member variables: 2
// class size: 24
class CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int> {
	ComponentHandleWithListPointer_t m_key; /* 0 16 */
	int m_value; /* 16 4 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>* );
	/* ../public/tier0/utlcommon.h:66 */
	int& GetValue(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>* );
	/* ../public/tier0/utlcommon.h:67 */
	const int& GetValue(const CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef int ValueReturn_t;
	/* ../public/tier0/utlcommon.h:61 */
	void CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>* , const ComponentHandleWithListPointer_t& );
};

// <06055C53> ../public/tier0/utlcommon.h:51
// member functions: 4
// member variables: 2
// class size: 24
class CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int> {
	ComponentHandleWithListPointer_t m_key; /* 0 16 */
	int m_value; /* 16 4 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>* );
	/* ../public/tier0/utlcommon.h:66 */
	int& GetValue(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>* );
	/* ../public/tier0/utlcommon.h:67 */
	const int& GetValue(const CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef int ValueReturn_t;
	/* ../public/tier0/utlcommon.h:64 */
	void CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>* , const ComponentHandleWithListPointer_t& , const int& );
};

// <003EE68F> ../public/tier0/utlcommon.h:51
// member functions: 34
// member variables: 2
// class size: 16
class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> > {
	AnimNodeID m_key; /* 0 4 */
	CSmartPtr<CAnimNodeBase, CRefCountAccessor> m_value; /* 8 8 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >* );
	/* ../public/tier0/utlcommon.h:66 */
	CSmartPtr<CAnimNodeBase, CRefCountAccessor>& GetValue(CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >* );
	/* ../public/tier0/utlcommon.h:67 */
	const CSmartPtr<CAnimNodeBase, CRefCountAccessor>& GetValue(const CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef struct CSmartPtr<CAnimNodeBase, CRefCountAccessor> ValueReturn_t;
	void ~CUtlKeyValuePair(CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >* );
	void CUtlKeyValuePair(CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >* , const CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*> *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeIDP13CAnimNodeBaseEC4Ev */
	class CAnimNodeBase * & GetValue(class CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*> *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeIDP13CAnimNodeBaseE8GetValueEv */
	class CAnimNodeBase * const & GetValue(const class CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*>  *); /* linkage=_ZNK16CUtlKeyValuePairI10AnimNodeIDP13CAnimNodeBaseE8GetValueEv */
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*> *, const class CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*>  &); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeIDP13CAnimNodeBaseEC4ERKS3_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI13CAnimNodeBase17CRefCountAccessorEEC4Ev */
	class CSmartPtr<CAnimNodeBase, CRefCountAccessor> & GetValue(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI13CAnimNodeBase17CRefCountAccessorEE8GetValueEv */
	const class CSmartPtr<CAnimNodeBase, CRefCountAccessor>  & GetValue(const class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >  *); /* linkage=_ZNK16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI13CAnimNodeBase17CRefCountAccessorEE8GetValueEv */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI13CAnimNodeBase17CRefCountAccessorEED4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> > *, const class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >  &); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI13CAnimNodeBase17CRefCountAccessorEEC4ERKS5_ */
	void CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*>(class CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*> *, const class AnimNodeID  &, class CAnimNodeBase * const &); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeIDP13CAnimNodeBaseEC4IS0_S2_EERKT_RKT0_ */
	void CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase> >(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> > *, const class AnimNodeID  &, const class CSmartPtr<CAnimNodeBase, CRefCountAccessor>  &); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI13CAnimNodeBase17CRefCountAccessorEEC4IS0_S4_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrIK13CAnimNodeBase17CRefCountAccessorEEC4Ev */
	class CSmartPtr<const CAnimNodeBase, CRefCountAccessor> & GetValue(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrIK13CAnimNodeBase17CRefCountAccessorEE8GetValueEv */
	const class CSmartPtr<const CAnimNodeBase, CRefCountAccessor>  & GetValue(const class CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> >  *); /* linkage=_ZNK16CUtlKeyValuePairI10AnimNodeID9CSmartPtrIK13CAnimNodeBase17CRefCountAccessorEE8GetValueEv */
	void CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase> >(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> > *, const class AnimNodeID  &, const class CSmartPtr<const CAnimNodeBase, CRefCountAccessor>  &); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrIK13CAnimNodeBase17CRefCountAccessorEEC4IS0_S5_EERKT_RKT0_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrIK13CAnimNodeBase17CRefCountAccessorEED4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI18CUpdateNodeManager17CRefCountAccessorEEC4Ev */
	class CSmartPtr<CUpdateNodeManager, CRefCountAccessor> & GetValue(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI18CUpdateNodeManager17CRefCountAccessorEE8GetValueEv */
	const class CSmartPtr<CUpdateNodeManager, CRefCountAccessor>  & GetValue(const class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> >  *); /* linkage=_ZNK16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI18CUpdateNodeManager17CRefCountAccessorEE8GetValueEv */
	void CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager> >(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> > *, const class AnimNodeID  &, const class CSmartPtr<CUpdateNodeManager, CRefCountAccessor>  &); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI18CUpdateNodeManager17CRefCountAccessorEEC4IS0_S4_EERKT_RKT0_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI18CUpdateNodeManager17CRefCountAccessorEED4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID13CPackedHandleI19CAnimUpdateNodeBaseEEC4Ev */
	class CPackedHandle<CAnimUpdateNodeBase> & GetValue(class CUtlKeyValuePair<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID13CPackedHandleI19CAnimUpdateNodeBaseEE8GetValueEv */
	const class CPackedHandle<CAnimUpdateNodeBase>  & GetValue(const class CUtlKeyValuePair<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> >  *); /* linkage=_ZNK16CUtlKeyValuePairI10AnimNodeID13CPackedHandleI19CAnimUpdateNodeBaseEE8GetValueEv */
	void CUtlKeyValuePair<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> >(class CUtlKeyValuePair<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> > *, const class AnimNodeID  &, const class CPackedHandle<CAnimUpdateNodeBase>  &); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID13CPackedHandleI19CAnimUpdateNodeBaseEEC4IS0_S3_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, int> *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeIDiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<AnimNodeID, int> *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeIDiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<AnimNodeID, int>  *); /* linkage=_ZNK16CUtlKeyValuePairI10AnimNodeIDiE8GetValueEv */
	void CUtlKeyValuePair<AnimNodeID, int>(class CUtlKeyValuePair<AnimNodeID, int> *, const class AnimNodeID  &, const int  &); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeIDiEC4IS0_iEERKT_RKT0_ */
};

// <003EFE18> ../public/tier0/utlcommon.h:51
// member functions: 33
// member variables: 2
// class size: 16
class CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*> {
	AnimNodeID m_key; /* 0 4 */
	CAnimNodeBase * m_value; /* 8 8 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*>* );
	/* ../public/tier0/utlcommon.h:66 */
	CAnimNodeBase* & GetValue(CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*>* );
	/* ../public/tier0/utlcommon.h:67 */
	CAnimNodeBase* const& GetValue(const CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef class CAnimNodeBase * ValueReturn_t;
	void CUtlKeyValuePair(CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*>* , const CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*>& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*> *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeIDP13CAnimNodeBaseEC4Ev */
	class CAnimNodeBase * & GetValue(class CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*> *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeIDP13CAnimNodeBaseE8GetValueEv */
	class CAnimNodeBase * const & GetValue(const class CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*>  *); /* linkage=_ZNK16CUtlKeyValuePairI10AnimNodeIDP13CAnimNodeBaseE8GetValueEv */
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*> *, const class CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*>  &); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeIDP13CAnimNodeBaseEC4ERKS3_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI13CAnimNodeBase17CRefCountAccessorEEC4Ev */
	class CSmartPtr<CAnimNodeBase, CRefCountAccessor> & GetValue(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI13CAnimNodeBase17CRefCountAccessorEE8GetValueEv */
	const class CSmartPtr<CAnimNodeBase, CRefCountAccessor>  & GetValue(const class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >  *); /* linkage=_ZNK16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI13CAnimNodeBase17CRefCountAccessorEE8GetValueEv */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI13CAnimNodeBase17CRefCountAccessorEED4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> > *, const class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >  &); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI13CAnimNodeBase17CRefCountAccessorEEC4ERKS5_ */
	void CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*>(class CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*> *, const class AnimNodeID  &, class CAnimNodeBase * const &); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeIDP13CAnimNodeBaseEC4IS0_S2_EERKT_RKT0_ */
	void CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase> >(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> > *, const class AnimNodeID  &, const class CSmartPtr<CAnimNodeBase, CRefCountAccessor>  &); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI13CAnimNodeBase17CRefCountAccessorEEC4IS0_S4_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrIK13CAnimNodeBase17CRefCountAccessorEEC4Ev */
	class CSmartPtr<const CAnimNodeBase, CRefCountAccessor> & GetValue(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrIK13CAnimNodeBase17CRefCountAccessorEE8GetValueEv */
	const class CSmartPtr<const CAnimNodeBase, CRefCountAccessor>  & GetValue(const class CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> >  *); /* linkage=_ZNK16CUtlKeyValuePairI10AnimNodeID9CSmartPtrIK13CAnimNodeBase17CRefCountAccessorEE8GetValueEv */
	void CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase> >(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> > *, const class AnimNodeID  &, const class CSmartPtr<const CAnimNodeBase, CRefCountAccessor>  &); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrIK13CAnimNodeBase17CRefCountAccessorEEC4IS0_S5_EERKT_RKT0_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrIK13CAnimNodeBase17CRefCountAccessorEED4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI18CUpdateNodeManager17CRefCountAccessorEEC4Ev */
	class CSmartPtr<CUpdateNodeManager, CRefCountAccessor> & GetValue(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI18CUpdateNodeManager17CRefCountAccessorEE8GetValueEv */
	const class CSmartPtr<CUpdateNodeManager, CRefCountAccessor>  & GetValue(const class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> >  *); /* linkage=_ZNK16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI18CUpdateNodeManager17CRefCountAccessorEE8GetValueEv */
	void CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager> >(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> > *, const class AnimNodeID  &, const class CSmartPtr<CUpdateNodeManager, CRefCountAccessor>  &); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI18CUpdateNodeManager17CRefCountAccessorEEC4IS0_S4_EERKT_RKT0_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI18CUpdateNodeManager17CRefCountAccessorEED4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID13CPackedHandleI19CAnimUpdateNodeBaseEEC4Ev */
	class CPackedHandle<CAnimUpdateNodeBase> & GetValue(class CUtlKeyValuePair<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID13CPackedHandleI19CAnimUpdateNodeBaseEE8GetValueEv */
	const class CPackedHandle<CAnimUpdateNodeBase>  & GetValue(const class CUtlKeyValuePair<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> >  *); /* linkage=_ZNK16CUtlKeyValuePairI10AnimNodeID13CPackedHandleI19CAnimUpdateNodeBaseEE8GetValueEv */
	void CUtlKeyValuePair<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> >(class CUtlKeyValuePair<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> > *, const class AnimNodeID  &, const class CPackedHandle<CAnimUpdateNodeBase>  &); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID13CPackedHandleI19CAnimUpdateNodeBaseEEC4IS0_S3_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, int> *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeIDiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<AnimNodeID, int> *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeIDiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<AnimNodeID, int>  *); /* linkage=_ZNK16CUtlKeyValuePairI10AnimNodeIDiE8GetValueEv */
	void CUtlKeyValuePair<AnimNodeID, int>(class CUtlKeyValuePair<AnimNodeID, int> *, const class AnimNodeID  &, const int  &); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeIDiEC4IS0_iEERKT_RKT0_ */
};

// <0048BB64> ../public/tier0/utlcommon.h:51
// member functions: 23
// member variables: 2
// class size: 16
class CUtlKeyValuePair<CUtlString, int> {
	CUtlString m_key; /* 0 8 */
	int m_value; /* 8 4 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<CUtlString, int>* );
	/* ../public/tier0/utlcommon.h:66 */
	int& GetValue(CUtlKeyValuePair<CUtlString, int>* );
	/* ../public/tier0/utlcommon.h:67 */
	const int& GetValue(const CUtlKeyValuePair<CUtlString, int>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef int ValueReturn_t;
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, CBufferString> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString13CBufferStringEC4Ev */
	class CBufferString & GetValue(class CUtlKeyValuePair<CUtlString, CBufferString> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString13CBufferStringE8GetValueEv */
	const class CBufferString  & GetValue(const class CUtlKeyValuePair<CUtlString, CBufferString>  *); /* linkage=_ZNK16CUtlKeyValuePairI10CUtlString13CBufferStringE8GetValueEv */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, CBufferString> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString13CBufferStringED4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, empty_t> *, const class CUtlString  &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString7empty_tEC4ERKS0_RKS1_ */
	const class CUtlString  & GetValue(const class CUtlKeyValuePair<CUtlString, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairI10CUtlString7empty_tE8GetValueEv */
	void CUtlKeyValuePair<CUtlString>(class CUtlKeyValuePair<CUtlString, empty_t> *, const class CUtlString  &); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString7empty_tEC4IS0_EERKT_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString7empty_tED4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, int> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlStringiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<CUtlString, int> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlStringiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<CUtlString, int>  *); /* linkage=_ZNK16CUtlKeyValuePairI10CUtlStringiE8GetValueEv */
	void CUtlKeyValuePair<CUtlString, int>(class CUtlKeyValuePair<CUtlString, int> *, const class CUtlString  &, const int  &); /* linkage=_ZN16CUtlKeyValuePairI10CUtlStringiEC4IS0_iEERKT_RKT0_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, int> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlStringiED4Ev */
	void CUtlKeyValuePair<CUtlString>(class CUtlKeyValuePair<CUtlString, int> *, const class CUtlString  &); /* linkage=_ZN16CUtlKeyValuePairI10CUtlStringiEC4IS0_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString9CSmartPtrI9CSubGraph17CRefCountAccessorEEC4Ev */
	class CSmartPtr<CSubGraph, CRefCountAccessor> & GetValue(class CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString9CSmartPtrI9CSubGraph17CRefCountAccessorEE8GetValueEv */
	const class CSmartPtr<CSubGraph, CRefCountAccessor>  & GetValue(const class CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> >  *); /* linkage=_ZNK16CUtlKeyValuePairI10CUtlString9CSmartPtrI9CSubGraph17CRefCountAccessorEE8GetValueEv */
	void CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph> >(class CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> > *, const class CUtlString  &, const class CSmartPtr<CSubGraph, CRefCountAccessor>  &); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString9CSmartPtrI9CSubGraph17CRefCountAccessorEEC4IS0_S4_EERKT_RKT0_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString9CSmartPtrI9CSubGraph17CRefCountAccessorEED4Ev */
};

// <004A9C20> ../public/tier0/utlcommon.h:51
// member functions: 9
// member variables: 2
// class size: 12
class CUtlKeyValuePair<AnimOutputID, CNodeConnection> {
	AnimOutputID m_key; /* 0 4 */
	CNodeConnection m_value; /* 4 8 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<AnimOutputID, CNodeConnection>* );
	/* ../public/tier0/utlcommon.h:66 */
	CNodeConnection& GetValue(CUtlKeyValuePair<AnimOutputID, CNodeConnection>* );
	/* ../public/tier0/utlcommon.h:67 */
	const CNodeConnection& GetValue(const CUtlKeyValuePair<AnimOutputID, CNodeConnection>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef struct CNodeConnection ValueReturn_t;
	void CUtlKeyValuePair(CUtlKeyValuePair<AnimOutputID, CNodeConnection>* , const CUtlKeyValuePair<AnimOutputID, CNodeConnection>& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimOutputID, CNodeConnection> *); /* linkage=_ZN16CUtlKeyValuePairI12AnimOutputID15CNodeConnectionEC4Ev */
	class CNodeConnection & GetValue(class CUtlKeyValuePair<AnimOutputID, CNodeConnection> *); /* linkage=_ZN16CUtlKeyValuePairI12AnimOutputID15CNodeConnectionE8GetValueEv */
	const class CNodeConnection  & GetValue(const class CUtlKeyValuePair<AnimOutputID, CNodeConnection>  *); /* linkage=_ZNK16CUtlKeyValuePairI12AnimOutputID15CNodeConnectionE8GetValueEv */
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimOutputID, CNodeConnection> *, const class CUtlKeyValuePair<AnimOutputID, CNodeConnection>  &); /* linkage=_ZN16CUtlKeyValuePairI12AnimOutputID15CNodeConnectionEC4ERKS2_ */
	void CUtlKeyValuePair<AnimOutputID, CNodeConnection>(class CUtlKeyValuePair<AnimOutputID, CNodeConnection> *, const class AnimOutputID  &, const class CNodeConnection  &); /* linkage=_ZN16CUtlKeyValuePairI12AnimOutputID15CNodeConnectionEC4IS0_S1_EERKT_RKT0_ */
};

// <006F42AC> ../public/tier0/utlcommon.h:51
// member functions: 8
// member variables: 2
// class size: 16
class CUtlKeyValuePair<HSequence, CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor> > {
	HSequence m_key; /* 0 4 */
	CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor> m_value; /* 8 8 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<HSequence, CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor> >* );
	/* ../public/tier0/utlcommon.h:66 */
	CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor>& GetValue(CUtlKeyValuePair<HSequence, CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor> >* );
	/* ../public/tier0/utlcommon.h:67 */
	const CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor>& GetValue(const CUtlKeyValuePair<HSequence, CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor> >* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef struct CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor> ValueReturn_t;
	void CUtlKeyValuePair(class CUtlKeyValuePair<HSequence, CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI9HSequence9CSmartPtrI23CSequenceDistanceHelper17CRefCountAccessorEEC4Ev */
	class CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor> & GetValue(class CUtlKeyValuePair<HSequence, CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI9HSequence9CSmartPtrI23CSequenceDistanceHelper17CRefCountAccessorEE8GetValueEv */
	const class CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor>  & GetValue(const class CUtlKeyValuePair<HSequence, CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor> >  *); /* linkage=_ZNK16CUtlKeyValuePairI9HSequence9CSmartPtrI23CSequenceDistanceHelper17CRefCountAccessorEE8GetValueEv */
	void CUtlKeyValuePair<HSequence, CSmartPtr<CSequenceDistanceHelper> >(class CUtlKeyValuePair<HSequence, CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor> > *, const class HSequence  &, const class CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor>  &); /* linkage=_ZN16CUtlKeyValuePairI9HSequence9CSmartPtrI23CSequenceDistanceHelper17CRefCountAccessorEEC4IS0_S4_EERKT_RKT0_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<HSequence, CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI9HSequence9CSmartPtrI23CSequenceDistanceHelper17CRefCountAccessorEED4Ev */
};

// <00D87AB1> ../public/tier0/utlcommon.h:51
// member functions: 4
// member variables: 2
// class size: 32
class CUtlKeyValuePair<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > {
	ClassID m_key; /* 0 16 */
	shared_ptr<Reflection::CAttribute> m_value; /* 16 16 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >* );
	/* ../public/tier0/utlcommon.h:66 */
	shared_ptr<Reflection::CAttribute>& GetValue(CUtlKeyValuePair<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >* );
	/* ../public/tier0/utlcommon.h:67 */
	const shared_ptr<Reflection::CAttribute>& GetValue(const CUtlKeyValuePair<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef struct shared_ptr<Reflection::CAttribute> ValueReturn_t;
	void ~CUtlKeyValuePair(CUtlKeyValuePair<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >* );
};

// <00DDE748> ../public/tier0/utlcommon.h:51
// member functions: 4
// member variables: 2
// class size: 24
class CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor> > {
	ClassID m_key; /* 0 16 */
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor> m_value; /* 16 8 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor> >* );
	/* ../public/tier0/utlcommon.h:66 */
	CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>& GetValue(CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor> >* );
	/* ../public/tier0/utlcommon.h:67 */
	const CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>& GetValue(const CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor> >* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef struct CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor> ValueReturn_t;
	void ~CUtlKeyValuePair(CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor> >* );
};

// <00DE08FA> ../public/tier0/utlcommon.h:51
// member functions: 31
// member variables: 2
// class size: 16
class CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> > {
	int m_key; /* 0 4 */
	CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> m_value; /* 8 8 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> >* );
	/* ../public/tier0/utlcommon.h:66 */
	CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>& GetValue(CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> >* );
	/* ../public/tier0/utlcommon.h:67 */
	const CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>& GetValue(const CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> >* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef struct CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> ValueReturn_t;
	/* ../public/tier0/utlcommon.h:64 */
	void CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase> >(CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> >* , const int& , const CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>& );
	void ~CUtlKeyValuePair(CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> >* );
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, float> *); /* linkage=_ZN16CUtlKeyValuePairIifEC4Ev */
	float & GetValue(class CUtlKeyValuePair<int, float> *); /* linkage=_ZN16CUtlKeyValuePairIifE8GetValueEv */
	const float  & GetValue(const class CUtlKeyValuePair<int, float>  *); /* linkage=_ZNK16CUtlKeyValuePairIifE8GetValueEv */
	void CUtlKeyValuePair<int, float>(class CUtlKeyValuePair<int, float> *, const int  &, const float  &); /* linkage=_ZN16CUtlKeyValuePairIifEC4IifEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIijEC4Ev */
	unsigned int & GetValue(class CUtlKeyValuePair<int, unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIijE8GetValueEv */
	const unsigned int  & GetValue(const class CUtlKeyValuePair<int, unsigned int>  *); /* linkage=_ZNK16CUtlKeyValuePairIijE8GetValueEv */
	void CUtlKeyValuePair<int, unsigned int>(class CUtlKeyValuePair<int, unsigned int> *, const int  &, const unsigned int  &); /* linkage=_ZN16CUtlKeyValuePairIijEC4IijEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, int> *); /* linkage=_ZN16CUtlKeyValuePairIiiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<int, int> *); /* linkage=_ZN16CUtlKeyValuePairIiiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<int, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIiiE8GetValueEv */
	void CUtlKeyValuePair<int, int>(class CUtlKeyValuePair<int, int> *, const int  &, const int  &); /* linkage=_ZN16CUtlKeyValuePairIiiEC4IiiEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIi7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, empty_t> *, const int  &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIi7empty_tEC4ERKiRKS0_ */
	const int  & GetValue(const class CUtlKeyValuePair<int, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIi7empty_tE8GetValueEv */
	void CUtlKeyValuePair<int>(class CUtlKeyValuePair<int, empty_t> *, const int  &); /* linkage=_ZN16CUtlKeyValuePairIi7empty_tEC4IiEERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrI21CAnimNodeInstanceBase17CRefCountAccessorEEC4Ev */
	class CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> & GetValue(class CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrI21CAnimNodeInstanceBase17CRefCountAccessorEE8GetValueEv */
	const class CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>  & GetValue(const class CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> >  *); /* linkage=_ZNK16CUtlKeyValuePairIi9CSmartPtrI21CAnimNodeInstanceBase17CRefCountAccessorEE8GetValueEv */
	void CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase> >(class CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> > *, const int  &, const class CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>  &); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrI21CAnimNodeInstanceBase17CRefCountAccessorEEC4IiS3_EERKT_RKT0_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrI21CAnimNodeInstanceBase17CRefCountAccessorEED4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrIK15CActivityValues17CRefCountAccessorEEC4Ev */
	class CSmartPtr<const CActivityValues, CRefCountAccessor> & GetValue(class CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrIK15CActivityValues17CRefCountAccessorEE8GetValueEv */
	const class CSmartPtr<const CActivityValues, CRefCountAccessor>  & GetValue(const class CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> >  *); /* linkage=_ZNK16CUtlKeyValuePairIi9CSmartPtrIK15CActivityValues17CRefCountAccessorEE8GetValueEv */
	void CUtlKeyValuePair<int, CSmartPtr<const CActivityValues> >(class CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> > *, const int  &, const class CSmartPtr<const CActivityValues, CRefCountAccessor>  &); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrIK15CActivityValues17CRefCountAccessorEEC4IiS4_EERKT_RKT0_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrIK15CActivityValues17CRefCountAccessorEED4Ev */
};

// <00DE211A> ../public/tier0/utlcommon.h:51
// member functions: 31
// member variables: 2
// class size: 16
class CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> > {
	int m_key; /* 0 4 */
	CSmartPtr<const CActivityValues, CRefCountAccessor> m_value; /* 8 8 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> >* );
	/* ../public/tier0/utlcommon.h:66 */
	CSmartPtr<const CActivityValues, CRefCountAccessor>& GetValue(CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> >* );
	/* ../public/tier0/utlcommon.h:67 */
	const CSmartPtr<const CActivityValues, CRefCountAccessor>& GetValue(const CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> >* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef struct CSmartPtr<const CActivityValues, CRefCountAccessor> ValueReturn_t;
	/* ../public/tier0/utlcommon.h:64 */
	void CUtlKeyValuePair<int, CSmartPtr<const CActivityValues> >(CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> >* , const int& , const CSmartPtr<const CActivityValues, CRefCountAccessor>& );
	void ~CUtlKeyValuePair(CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> >* );
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, float> *); /* linkage=_ZN16CUtlKeyValuePairIifEC4Ev */
	float & GetValue(class CUtlKeyValuePair<int, float> *); /* linkage=_ZN16CUtlKeyValuePairIifE8GetValueEv */
	const float  & GetValue(const class CUtlKeyValuePair<int, float>  *); /* linkage=_ZNK16CUtlKeyValuePairIifE8GetValueEv */
	void CUtlKeyValuePair<int, float>(class CUtlKeyValuePair<int, float> *, const int  &, const float  &); /* linkage=_ZN16CUtlKeyValuePairIifEC4IifEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIijEC4Ev */
	unsigned int & GetValue(class CUtlKeyValuePair<int, unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIijE8GetValueEv */
	const unsigned int  & GetValue(const class CUtlKeyValuePair<int, unsigned int>  *); /* linkage=_ZNK16CUtlKeyValuePairIijE8GetValueEv */
	void CUtlKeyValuePair<int, unsigned int>(class CUtlKeyValuePair<int, unsigned int> *, const int  &, const unsigned int  &); /* linkage=_ZN16CUtlKeyValuePairIijEC4IijEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, int> *); /* linkage=_ZN16CUtlKeyValuePairIiiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<int, int> *); /* linkage=_ZN16CUtlKeyValuePairIiiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<int, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIiiE8GetValueEv */
	void CUtlKeyValuePair<int, int>(class CUtlKeyValuePair<int, int> *, const int  &, const int  &); /* linkage=_ZN16CUtlKeyValuePairIiiEC4IiiEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIi7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, empty_t> *, const int  &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIi7empty_tEC4ERKiRKS0_ */
	const int  & GetValue(const class CUtlKeyValuePair<int, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIi7empty_tE8GetValueEv */
	void CUtlKeyValuePair<int>(class CUtlKeyValuePair<int, empty_t> *, const int  &); /* linkage=_ZN16CUtlKeyValuePairIi7empty_tEC4IiEERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrI21CAnimNodeInstanceBase17CRefCountAccessorEEC4Ev */
	class CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> & GetValue(class CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrI21CAnimNodeInstanceBase17CRefCountAccessorEE8GetValueEv */
	const class CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>  & GetValue(const class CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> >  *); /* linkage=_ZNK16CUtlKeyValuePairIi9CSmartPtrI21CAnimNodeInstanceBase17CRefCountAccessorEE8GetValueEv */
	void CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase> >(class CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> > *, const int  &, const class CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>  &); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrI21CAnimNodeInstanceBase17CRefCountAccessorEEC4IiS3_EERKT_RKT0_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrI21CAnimNodeInstanceBase17CRefCountAccessorEED4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrIK15CActivityValues17CRefCountAccessorEEC4Ev */
	class CSmartPtr<const CActivityValues, CRefCountAccessor> & GetValue(class CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrIK15CActivityValues17CRefCountAccessorEE8GetValueEv */
	const class CSmartPtr<const CActivityValues, CRefCountAccessor>  & GetValue(const class CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> >  *); /* linkage=_ZNK16CUtlKeyValuePairIi9CSmartPtrIK15CActivityValues17CRefCountAccessorEE8GetValueEv */
	void CUtlKeyValuePair<int, CSmartPtr<const CActivityValues> >(class CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> > *, const int  &, const class CSmartPtr<const CActivityValues, CRefCountAccessor>  &); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrIK15CActivityValues17CRefCountAccessorEEC4IiS4_EERKT_RKT0_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrIK15CActivityValues17CRefCountAccessorEED4Ev */
};

// <00DEB4D8> ../public/tier0/utlcommon.h:51
// member functions: 12
// member variables: 2
// class size: 16
class CUtlKeyValuePair<AnimParamID, const CAnimParameterBase*> {
	AnimParamID m_key; /* 0 4 */
	const class CAnimParameterBase * m_value; /* 8 8 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<AnimParamID, const CAnimParameterBase*>* );
	/* ../public/tier0/utlcommon.h:66 */
	const CAnimParameterBase* & GetValue(CUtlKeyValuePair<AnimParamID, const CAnimParameterBase*>* );
	/* ../public/tier0/utlcommon.h:67 */
	const CAnimParameterBase* const& GetValue(const CUtlKeyValuePair<AnimParamID, const CAnimParameterBase*>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef const class CAnimParameterBase * ValueReturn_t;
	/* ../public/tier0/utlcommon.h:64 */
	void CUtlKeyValuePair<AnimParamID, const CAnimParameterBase*>(CUtlKeyValuePair<AnimParamID, const CAnimParameterBase*>* , const AnimParamID& , const CAnimParameterBase* const& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimParamID, const CAnimParameterBase*> *); /* linkage=_ZN16CUtlKeyValuePairI11AnimParamIDPK18CAnimParameterBaseEC4Ev */
	const class CAnimParameterBase  * & GetValue(class CUtlKeyValuePair<AnimParamID, const CAnimParameterBase*> *); /* linkage=_ZN16CUtlKeyValuePairI11AnimParamIDPK18CAnimParameterBaseE8GetValueEv */
	const class CAnimParameterBase  * const & GetValue(const class CUtlKeyValuePair<AnimParamID, const CAnimParameterBase*>  *); /* linkage=_ZNK16CUtlKeyValuePairI11AnimParamIDPK18CAnimParameterBaseE8GetValueEv */
	void CUtlKeyValuePair<AnimParamID, const CAnimParameterBase*>(class CUtlKeyValuePair<AnimParamID, const CAnimParameterBase*> *, const class AnimParamID  &, const class CAnimParameterBase  * const &); /* linkage=_ZN16CUtlKeyValuePairI11AnimParamIDPK18CAnimParameterBaseEC4IS0_S3_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimParamID, int> *); /* linkage=_ZN16CUtlKeyValuePairI11AnimParamIDiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<AnimParamID, int> *); /* linkage=_ZN16CUtlKeyValuePairI11AnimParamIDiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<AnimParamID, int>  *); /* linkage=_ZNK16CUtlKeyValuePairI11AnimParamIDiE8GetValueEv */
	void CUtlKeyValuePair<AnimParamID, int>(class CUtlKeyValuePair<AnimParamID, int> *, const class AnimParamID  &, const int  &); /* linkage=_ZN16CUtlKeyValuePairI11AnimParamIDiEC4IS0_iEERKT_RKT0_ */
};

// <00DECD2C> ../public/tier0/utlcommon.h:51
// member functions: 8
// member variables: 2
// class size: 16
class CUtlKeyValuePair<AnimTagID, const CAnimTagBase*> {
	AnimTagID m_key; /* 0 4 */
	const class CAnimTagBase * m_value; /* 8 8 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<AnimTagID, const CAnimTagBase*>* );
	/* ../public/tier0/utlcommon.h:66 */
	const CAnimTagBase* & GetValue(CUtlKeyValuePair<AnimTagID, const CAnimTagBase*>* );
	/* ../public/tier0/utlcommon.h:67 */
	const CAnimTagBase* const& GetValue(const CUtlKeyValuePair<AnimTagID, const CAnimTagBase*>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef const class CAnimTagBase * ValueReturn_t;
	/* ../public/tier0/utlcommon.h:64 */
	void CUtlKeyValuePair<AnimTagID, const CAnimTagBase*>(CUtlKeyValuePair<AnimTagID, const CAnimTagBase*>* , const AnimTagID& , const CAnimTagBase* const& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimTagID, const CAnimTagBase*> *); /* linkage=_ZN16CUtlKeyValuePairI9AnimTagIDPK12CAnimTagBaseEC4Ev */
	const class CAnimTagBase  * & GetValue(class CUtlKeyValuePair<AnimTagID, const CAnimTagBase*> *); /* linkage=_ZN16CUtlKeyValuePairI9AnimTagIDPK12CAnimTagBaseE8GetValueEv */
	const class CAnimTagBase  * const & GetValue(const class CUtlKeyValuePair<AnimTagID, const CAnimTagBase*>  *); /* linkage=_ZNK16CUtlKeyValuePairI9AnimTagIDPK12CAnimTagBaseE8GetValueEv */
	void CUtlKeyValuePair<AnimTagID, const CAnimTagBase*>(class CUtlKeyValuePair<AnimTagID, const CAnimTagBase*> *, const class AnimTagID  &, const class CAnimTagBase  * const &); /* linkage=_ZN16CUtlKeyValuePairI9AnimTagIDPK12CAnimTagBaseEC4IS0_S3_EERKT_RKT0_ */
};

// <00EEB650> ../public/tier0/utlcommon.h:51
// member functions: 12
// member variables: 2
// class size: 8
class CUtlKeyValuePair<AnimParamID, int> {
	AnimParamID m_key; /* 0 4 */
	int m_value; /* 4 4 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<AnimParamID, int>* );
	/* ../public/tier0/utlcommon.h:66 */
	int& GetValue(CUtlKeyValuePair<AnimParamID, int>* );
	/* ../public/tier0/utlcommon.h:67 */
	const int& GetValue(const CUtlKeyValuePair<AnimParamID, int>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef int ValueReturn_t;
	/* ../public/tier0/utlcommon.h:64 */
	void CUtlKeyValuePair<AnimParamID, int>(CUtlKeyValuePair<AnimParamID, int>* , const AnimParamID& , const int& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimParamID, const CAnimParameterBase*> *); /* linkage=_ZN16CUtlKeyValuePairI11AnimParamIDPK18CAnimParameterBaseEC4Ev */
	const class CAnimParameterBase  * & GetValue(class CUtlKeyValuePair<AnimParamID, const CAnimParameterBase*> *); /* linkage=_ZN16CUtlKeyValuePairI11AnimParamIDPK18CAnimParameterBaseE8GetValueEv */
	const class CAnimParameterBase  * const & GetValue(const class CUtlKeyValuePair<AnimParamID, const CAnimParameterBase*>  *); /* linkage=_ZNK16CUtlKeyValuePairI11AnimParamIDPK18CAnimParameterBaseE8GetValueEv */
	void CUtlKeyValuePair<AnimParamID, const CAnimParameterBase*>(class CUtlKeyValuePair<AnimParamID, const CAnimParameterBase*> *, const class AnimParamID  &, const class CAnimParameterBase  * const &); /* linkage=_ZN16CUtlKeyValuePairI11AnimParamIDPK18CAnimParameterBaseEC4IS0_S3_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimParamID, int> *); /* linkage=_ZN16CUtlKeyValuePairI11AnimParamIDiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<AnimParamID, int> *); /* linkage=_ZN16CUtlKeyValuePairI11AnimParamIDiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<AnimParamID, int>  *); /* linkage=_ZNK16CUtlKeyValuePairI11AnimParamIDiE8GetValueEv */
	void CUtlKeyValuePair<AnimParamID, int>(class CUtlKeyValuePair<AnimParamID, int> *, const class AnimParamID  &, const int  &); /* linkage=_ZN16CUtlKeyValuePairI11AnimParamIDiEC4IS0_iEERKT_RKT0_ */
};

// <00EF7087> ../public/tier0/utlcommon.h:51
// member functions: 4
// member variables: 2
// class size: 24
class CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CAnimMotorInstance, CAnimMotorBase, const CAnimMotorUpdaterBase*, const CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>&>::CFactoryMaker, CRefCountAccessor> > {
	ClassID m_key; /* 0 16 */
	CSmartPtr<Reflection::CInstanceFactory<CAnimMotorInstance, CAnimMotorBase, const CAnimMotorUpdaterBase*, const CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>&>::CFactoryMaker, CRefCountAccessor> m_value; /* 16 8 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CAnimMotorInstance, CAnimMotorBase, const CA);
	/* ../public/tier0/utlcommon.h:66 */
	CSmartPtr<Reflection::CInstanceFactory<CAnimMotorInstance, CAnimMotorBase, const CAnimMotorUpdaterBase*, const CSmartPtr< GetValue(CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CAnimMotorInstance, CAnimMotorBase, const CA);
	/* ../public/tier0/utlcommon.h:67 */
	const CSmartPtr<Reflection::CInstanceFactory<CAnimMotorInstance, CAnimMotorBase, const CAnimMotorUpdaterBase*, const CSma GetValue(const CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CAnimMotorInstance, CAnimMotorBase, co);
	/* ../public/tier0/utlcommon.h:54 */
	typedef struct CSmartPtr<Reflection::CInstanceFactory<CAnimMotorInstance, CAnimMotorBase, const CAnimMotorUpdaterBase*, const CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>&>::CFactoryMaker, CRefCountAccessor> ValueReturn_t;
	void ~CUtlKeyValuePair(CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CAnimMotorInstance, CAnimMotorBase, const CA);
};

// <0111966A> ../public/tier0/utlcommon.h:51
// member functions: 4
// member variables: 2
// class size: 24
class CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CMotionMetricInstance, CMotionMetricBase, const CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>&, CPackedHandle<const CMotionMetricEvaluator> >::CFactoryMaker, CRefCountAccessor> > {
	ClassID m_key; /* 0 16 */
	CSmartPtr<Reflection::CInstanceFactory<CMotionMetricInstance, CMotionMetricBase, const CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>&, CPackedHandle<const CMotionMetricEvaluator> >::CFactoryMaker, CRefCountAccessor> m_value; /* 16 8 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CMotionMetricInstance, CMotionMetricBase, co);
	/* ../public/tier0/utlcommon.h:66 */
	CSmartPtr<Reflection::CInstanceFactory<CMotionMetricInstance, CMotionMetricBase, const CSmartPtr<CAnimGraphUpdateContext, GetValue(CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CMotionMetricInstance, CMotionMetricBase, co);
	/* ../public/tier0/utlcommon.h:67 */
	const CSmartPtr<Reflection::CInstanceFactory<CMotionMetricInstance, CMotionMetricBase, const CSmartPtr<CAnimGraphUpdateCo GetValue(const CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CMotionMetricInstance, CMotionMetricBa);
	/* ../public/tier0/utlcommon.h:54 */
	typedef struct CSmartPtr<Reflection::CInstanceFactory<CMotionMetricInstance, CMotionMetricBase, const CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>&, CPackedHandle<const CMotionMetricEvaluator> >::CFactoryMaker, CRefCountAccessor> ValueReturn_t;
	void ~CUtlKeyValuePair(CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CMotionMetricInstance, CMotionMetricBase, co);
};

// <01238025> ../public/tier0/utlcommon.h:51
// member functions: 25
// member variables: 2
// class size: 16
class CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> > {
	CUtlString m_key; /* 0 8 */
	CSmartPtr<CSubGraph, CRefCountAccessor> m_value; /* 8 8 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> >* );
	/* ../public/tier0/utlcommon.h:66 */
	CSmartPtr<CSubGraph, CRefCountAccessor>& GetValue(CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> >* );
	/* ../public/tier0/utlcommon.h:67 */
	const CSmartPtr<CSubGraph, CRefCountAccessor>& GetValue(const CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> >* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef struct CSmartPtr<CSubGraph, CRefCountAccessor> ValueReturn_t;
	/* ../public/tier0/utlcommon.h:64 */
	void CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph> >(CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> >* , const CUtlString& , const CSmartPtr<CSubGraph, CRefCountAccessor>& );
	void ~CUtlKeyValuePair(CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> >* );
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, CBufferString> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString13CBufferStringEC4Ev */
	class CBufferString & GetValue(class CUtlKeyValuePair<CUtlString, CBufferString> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString13CBufferStringE8GetValueEv */
	const class CBufferString  & GetValue(const class CUtlKeyValuePair<CUtlString, CBufferString>  *); /* linkage=_ZNK16CUtlKeyValuePairI10CUtlString13CBufferStringE8GetValueEv */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, CBufferString> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString13CBufferStringED4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, empty_t> *, const class CUtlString  &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString7empty_tEC4ERKS0_RKS1_ */
	const class CUtlString  & GetValue(const class CUtlKeyValuePair<CUtlString, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairI10CUtlString7empty_tE8GetValueEv */
	void CUtlKeyValuePair<CUtlString>(class CUtlKeyValuePair<CUtlString, empty_t> *, const class CUtlString  &); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString7empty_tEC4IS0_EERKT_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString7empty_tED4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, int> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlStringiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<CUtlString, int> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlStringiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<CUtlString, int>  *); /* linkage=_ZNK16CUtlKeyValuePairI10CUtlStringiE8GetValueEv */
	void CUtlKeyValuePair<CUtlString, int>(class CUtlKeyValuePair<CUtlString, int> *, const class CUtlString  &, const int  &); /* linkage=_ZN16CUtlKeyValuePairI10CUtlStringiEC4IS0_iEERKT_RKT0_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, int> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlStringiED4Ev */
	void CUtlKeyValuePair<CUtlString>(class CUtlKeyValuePair<CUtlString, int> *, const class CUtlString  &); /* linkage=_ZN16CUtlKeyValuePairI10CUtlStringiEC4IS0_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString9CSmartPtrI9CSubGraph17CRefCountAccessorEEC4Ev */
	class CSmartPtr<CSubGraph, CRefCountAccessor> & GetValue(class CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString9CSmartPtrI9CSubGraph17CRefCountAccessorEE8GetValueEv */
	const class CSmartPtr<CSubGraph, CRefCountAccessor>  & GetValue(const class CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> >  *); /* linkage=_ZNK16CUtlKeyValuePairI10CUtlString9CSmartPtrI9CSubGraph17CRefCountAccessorEE8GetValueEv */
	void CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph> >(class CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> > *, const class CUtlString  &, const class CSmartPtr<CSubGraph, CRefCountAccessor>  &); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString9CSmartPtrI9CSubGraph17CRefCountAccessorEEC4IS0_S4_EERKT_RKT0_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString9CSmartPtrI9CSubGraph17CRefCountAccessorEED4Ev */
};

// <012F7B80> ../public/tier0/utlcommon.h:51
// member functions: 5
// member variables: 2
// class size: 48
class CUtlKeyValuePair<Reflection::ClassID, CUtlVector<IAnimTagListener*, CUtlMemory<IAnimTagListener*, int> > > {
	ClassID m_key; /* 0 16 */
	CUtlVector<IAnimTagListener*, CUtlMemory<IAnimTagListener*, int> > m_value; /* 16 32 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<Reflection::ClassID, CUtlVector<IAnimTagListener*, CUtlMemory<IAnimTagListener*, int> > >* );
	/* ../public/tier0/utlcommon.h:66 */
	CUtlVector<IAnimTagListener*, CUtlMemory<IAnimTagListener*, int> >& GetValue(CUtlKeyValuePair<Reflection::ClassID, CUtlVector<IAnimTagListener*, CUtlMemory<IAnimTagListener*, int> > >* );
	/* ../public/tier0/utlcommon.h:67 */
	const CUtlVector<IAnimTagListener*, CUtlMemory<IAnimTagListener*, int> >& GetValue(const CUtlKeyValuePair<Reflection::ClassID, CUtlVector<IAnimTagListener*, CUtlMemory<IAnimTagListener*, int> > >* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef struct CUtlVector<IAnimTagListener*, CUtlMemory<IAnimTagListener*, int> > ValueReturn_t;
	/* ../public/tier0/utlcommon.h:61 */
	void CUtlKeyValuePair<Reflection::ClassID>(CUtlKeyValuePair<Reflection::ClassID, CUtlVector<IAnimTagListener*, CUtlMemory<IAnimTagListener*, int> > >* , const ClassID& );
	void ~CUtlKeyValuePair(CUtlKeyValuePair<Reflection::ClassID, CUtlVector<IAnimTagListener*, CUtlMemory<IAnimTagListener*, int> > >* );
};

// <0151F1F5> ../public/tier0/utlcommon.h:51
// member functions: 34
// member variables: 2
// class size: 16
class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> > {
	AnimNodeID m_key; /* 0 4 */
	CSmartPtr<CUpdateNodeManager, CRefCountAccessor> m_value; /* 8 8 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> >* );
	/* ../public/tier0/utlcommon.h:66 */
	CSmartPtr<CUpdateNodeManager, CRefCountAccessor>& GetValue(CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> >* );
	/* ../public/tier0/utlcommon.h:67 */
	const CSmartPtr<CUpdateNodeManager, CRefCountAccessor>& GetValue(const CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> >* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef struct CSmartPtr<CUpdateNodeManager, CRefCountAccessor> ValueReturn_t;
	/* ../public/tier0/utlcommon.h:64 */
	void CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager> >(CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> >* , const AnimNodeID& , const CSmartPtr<CUpdateNodeManager, CRefCountAccessor>& );
	void ~CUtlKeyValuePair(CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> >* );
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*> *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeIDP13CAnimNodeBaseEC4Ev */
	class CAnimNodeBase * & GetValue(class CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*> *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeIDP13CAnimNodeBaseE8GetValueEv */
	class CAnimNodeBase * const & GetValue(const class CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*>  *); /* linkage=_ZNK16CUtlKeyValuePairI10AnimNodeIDP13CAnimNodeBaseE8GetValueEv */
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*> *, const class CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*>  &); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeIDP13CAnimNodeBaseEC4ERKS3_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI13CAnimNodeBase17CRefCountAccessorEEC4Ev */
	class CSmartPtr<CAnimNodeBase, CRefCountAccessor> & GetValue(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI13CAnimNodeBase17CRefCountAccessorEE8GetValueEv */
	const class CSmartPtr<CAnimNodeBase, CRefCountAccessor>  & GetValue(const class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >  *); /* linkage=_ZNK16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI13CAnimNodeBase17CRefCountAccessorEE8GetValueEv */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI13CAnimNodeBase17CRefCountAccessorEED4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> > *, const class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >  &); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI13CAnimNodeBase17CRefCountAccessorEEC4ERKS5_ */
	void CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*>(class CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*> *, const class AnimNodeID  &, class CAnimNodeBase * const &); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeIDP13CAnimNodeBaseEC4IS0_S2_EERKT_RKT0_ */
	void CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase> >(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> > *, const class AnimNodeID  &, const class CSmartPtr<CAnimNodeBase, CRefCountAccessor>  &); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI13CAnimNodeBase17CRefCountAccessorEEC4IS0_S4_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrIK13CAnimNodeBase17CRefCountAccessorEEC4Ev */
	class CSmartPtr<const CAnimNodeBase, CRefCountAccessor> & GetValue(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrIK13CAnimNodeBase17CRefCountAccessorEE8GetValueEv */
	const class CSmartPtr<const CAnimNodeBase, CRefCountAccessor>  & GetValue(const class CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> >  *); /* linkage=_ZNK16CUtlKeyValuePairI10AnimNodeID9CSmartPtrIK13CAnimNodeBase17CRefCountAccessorEE8GetValueEv */
	void CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase> >(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> > *, const class AnimNodeID  &, const class CSmartPtr<const CAnimNodeBase, CRefCountAccessor>  &); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrIK13CAnimNodeBase17CRefCountAccessorEEC4IS0_S5_EERKT_RKT0_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrIK13CAnimNodeBase17CRefCountAccessorEED4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI18CUpdateNodeManager17CRefCountAccessorEEC4Ev */
	class CSmartPtr<CUpdateNodeManager, CRefCountAccessor> & GetValue(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI18CUpdateNodeManager17CRefCountAccessorEE8GetValueEv */
	const class CSmartPtr<CUpdateNodeManager, CRefCountAccessor>  & GetValue(const class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> >  *); /* linkage=_ZNK16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI18CUpdateNodeManager17CRefCountAccessorEE8GetValueEv */
	void CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager> >(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> > *, const class AnimNodeID  &, const class CSmartPtr<CUpdateNodeManager, CRefCountAccessor>  &); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI18CUpdateNodeManager17CRefCountAccessorEEC4IS0_S4_EERKT_RKT0_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI18CUpdateNodeManager17CRefCountAccessorEED4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID13CPackedHandleI19CAnimUpdateNodeBaseEEC4Ev */
	class CPackedHandle<CAnimUpdateNodeBase> & GetValue(class CUtlKeyValuePair<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID13CPackedHandleI19CAnimUpdateNodeBaseEE8GetValueEv */
	const class CPackedHandle<CAnimUpdateNodeBase>  & GetValue(const class CUtlKeyValuePair<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> >  *); /* linkage=_ZNK16CUtlKeyValuePairI10AnimNodeID13CPackedHandleI19CAnimUpdateNodeBaseEE8GetValueEv */
	void CUtlKeyValuePair<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> >(class CUtlKeyValuePair<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> > *, const class AnimNodeID  &, const class CPackedHandle<CAnimUpdateNodeBase>  &); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID13CPackedHandleI19CAnimUpdateNodeBaseEEC4IS0_S3_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, int> *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeIDiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<AnimNodeID, int> *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeIDiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<AnimNodeID, int>  *); /* linkage=_ZNK16CUtlKeyValuePairI10AnimNodeIDiE8GetValueEv */
	void CUtlKeyValuePair<AnimNodeID, int>(class CUtlKeyValuePair<AnimNodeID, int> *, const class AnimNodeID  &, const int  &); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeIDiEC4IS0_iEERKT_RKT0_ */
};

// <01520AD2> ../public/tier0/utlcommon.h:51
// member functions: 33
// member variables: 2
// class size: 8
class CUtlKeyValuePair<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> > {
	AnimNodeID m_key; /* 0 4 */
	CPackedHandle<CAnimUpdateNodeBase> m_value; /* 4 4 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> >* );
	/* ../public/tier0/utlcommon.h:66 */
	CPackedHandle<CAnimUpdateNodeBase>& GetValue(CUtlKeyValuePair<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> >* );
	/* ../public/tier0/utlcommon.h:67 */
	const CPackedHandle<CAnimUpdateNodeBase>& GetValue(const CUtlKeyValuePair<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> >* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef struct CPackedHandle<CAnimUpdateNodeBase> ValueReturn_t;
	/* ../public/tier0/utlcommon.h:64 */
	void CUtlKeyValuePair<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> >(CUtlKeyValuePair<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> >* , const AnimNodeID& , const CPackedHandle<CAnimUpdateNodeBase>& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*> *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeIDP13CAnimNodeBaseEC4Ev */
	class CAnimNodeBase * & GetValue(class CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*> *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeIDP13CAnimNodeBaseE8GetValueEv */
	class CAnimNodeBase * const & GetValue(const class CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*>  *); /* linkage=_ZNK16CUtlKeyValuePairI10AnimNodeIDP13CAnimNodeBaseE8GetValueEv */
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*> *, const class CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*>  &); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeIDP13CAnimNodeBaseEC4ERKS3_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI13CAnimNodeBase17CRefCountAccessorEEC4Ev */
	class CSmartPtr<CAnimNodeBase, CRefCountAccessor> & GetValue(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI13CAnimNodeBase17CRefCountAccessorEE8GetValueEv */
	const class CSmartPtr<CAnimNodeBase, CRefCountAccessor>  & GetValue(const class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >  *); /* linkage=_ZNK16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI13CAnimNodeBase17CRefCountAccessorEE8GetValueEv */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI13CAnimNodeBase17CRefCountAccessorEED4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> > *, const class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >  &); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI13CAnimNodeBase17CRefCountAccessorEEC4ERKS5_ */
	void CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*>(class CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*> *, const class AnimNodeID  &, class CAnimNodeBase * const &); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeIDP13CAnimNodeBaseEC4IS0_S2_EERKT_RKT0_ */
	void CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase> >(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> > *, const class AnimNodeID  &, const class CSmartPtr<CAnimNodeBase, CRefCountAccessor>  &); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI13CAnimNodeBase17CRefCountAccessorEEC4IS0_S4_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrIK13CAnimNodeBase17CRefCountAccessorEEC4Ev */
	class CSmartPtr<const CAnimNodeBase, CRefCountAccessor> & GetValue(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrIK13CAnimNodeBase17CRefCountAccessorEE8GetValueEv */
	const class CSmartPtr<const CAnimNodeBase, CRefCountAccessor>  & GetValue(const class CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> >  *); /* linkage=_ZNK16CUtlKeyValuePairI10AnimNodeID9CSmartPtrIK13CAnimNodeBase17CRefCountAccessorEE8GetValueEv */
	void CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase> >(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> > *, const class AnimNodeID  &, const class CSmartPtr<const CAnimNodeBase, CRefCountAccessor>  &); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrIK13CAnimNodeBase17CRefCountAccessorEEC4IS0_S5_EERKT_RKT0_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrIK13CAnimNodeBase17CRefCountAccessorEED4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI18CUpdateNodeManager17CRefCountAccessorEEC4Ev */
	class CSmartPtr<CUpdateNodeManager, CRefCountAccessor> & GetValue(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI18CUpdateNodeManager17CRefCountAccessorEE8GetValueEv */
	const class CSmartPtr<CUpdateNodeManager, CRefCountAccessor>  & GetValue(const class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> >  *); /* linkage=_ZNK16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI18CUpdateNodeManager17CRefCountAccessorEE8GetValueEv */
	void CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager> >(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> > *, const class AnimNodeID  &, const class CSmartPtr<CUpdateNodeManager, CRefCountAccessor>  &); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI18CUpdateNodeManager17CRefCountAccessorEEC4IS0_S4_EERKT_RKT0_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI18CUpdateNodeManager17CRefCountAccessorEED4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID13CPackedHandleI19CAnimUpdateNodeBaseEEC4Ev */
	class CPackedHandle<CAnimUpdateNodeBase> & GetValue(class CUtlKeyValuePair<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID13CPackedHandleI19CAnimUpdateNodeBaseEE8GetValueEv */
	const class CPackedHandle<CAnimUpdateNodeBase>  & GetValue(const class CUtlKeyValuePair<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> >  *); /* linkage=_ZNK16CUtlKeyValuePairI10AnimNodeID13CPackedHandleI19CAnimUpdateNodeBaseEE8GetValueEv */
	void CUtlKeyValuePair<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> >(class CUtlKeyValuePair<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> > *, const class AnimNodeID  &, const class CPackedHandle<CAnimUpdateNodeBase>  &); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID13CPackedHandleI19CAnimUpdateNodeBaseEEC4IS0_S3_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, int> *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeIDiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<AnimNodeID, int> *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeIDiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<AnimNodeID, int>  *); /* linkage=_ZNK16CUtlKeyValuePairI10AnimNodeIDiE8GetValueEv */
	void CUtlKeyValuePair<AnimNodeID, int>(class CUtlKeyValuePair<AnimNodeID, int> *, const class AnimNodeID  &, const int  &); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeIDiEC4IS0_iEERKT_RKT0_ */
};

// <015222ED> ../public/tier0/utlcommon.h:51
// member functions: 34
// member variables: 2
// class size: 16
class CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> > {
	AnimNodeID m_key; /* 0 4 */
	CSmartPtr<const CAnimNodeBase, CRefCountAccessor> m_value; /* 8 8 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> >* );
	/* ../public/tier0/utlcommon.h:66 */
	CSmartPtr<const CAnimNodeBase, CRefCountAccessor>& GetValue(CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> >* );
	/* ../public/tier0/utlcommon.h:67 */
	const CSmartPtr<const CAnimNodeBase, CRefCountAccessor>& GetValue(const CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> >* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef struct CSmartPtr<const CAnimNodeBase, CRefCountAccessor> ValueReturn_t;
	/* ../public/tier0/utlcommon.h:64 */
	void CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase> >(CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> >* , const AnimNodeID& , const CSmartPtr<const CAnimNodeBase, CRefCountAccessor>& );
	void ~CUtlKeyValuePair(CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> >* );
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*> *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeIDP13CAnimNodeBaseEC4Ev */
	class CAnimNodeBase * & GetValue(class CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*> *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeIDP13CAnimNodeBaseE8GetValueEv */
	class CAnimNodeBase * const & GetValue(const class CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*>  *); /* linkage=_ZNK16CUtlKeyValuePairI10AnimNodeIDP13CAnimNodeBaseE8GetValueEv */
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*> *, const class CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*>  &); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeIDP13CAnimNodeBaseEC4ERKS3_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI13CAnimNodeBase17CRefCountAccessorEEC4Ev */
	class CSmartPtr<CAnimNodeBase, CRefCountAccessor> & GetValue(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI13CAnimNodeBase17CRefCountAccessorEE8GetValueEv */
	const class CSmartPtr<CAnimNodeBase, CRefCountAccessor>  & GetValue(const class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >  *); /* linkage=_ZNK16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI13CAnimNodeBase17CRefCountAccessorEE8GetValueEv */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI13CAnimNodeBase17CRefCountAccessorEED4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> > *, const class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >  &); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI13CAnimNodeBase17CRefCountAccessorEEC4ERKS5_ */
	void CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*>(class CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*> *, const class AnimNodeID  &, class CAnimNodeBase * const &); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeIDP13CAnimNodeBaseEC4IS0_S2_EERKT_RKT0_ */
	void CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase> >(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> > *, const class AnimNodeID  &, const class CSmartPtr<CAnimNodeBase, CRefCountAccessor>  &); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI13CAnimNodeBase17CRefCountAccessorEEC4IS0_S4_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrIK13CAnimNodeBase17CRefCountAccessorEEC4Ev */
	class CSmartPtr<const CAnimNodeBase, CRefCountAccessor> & GetValue(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrIK13CAnimNodeBase17CRefCountAccessorEE8GetValueEv */
	const class CSmartPtr<const CAnimNodeBase, CRefCountAccessor>  & GetValue(const class CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> >  *); /* linkage=_ZNK16CUtlKeyValuePairI10AnimNodeID9CSmartPtrIK13CAnimNodeBase17CRefCountAccessorEE8GetValueEv */
	void CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase> >(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> > *, const class AnimNodeID  &, const class CSmartPtr<const CAnimNodeBase, CRefCountAccessor>  &); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrIK13CAnimNodeBase17CRefCountAccessorEEC4IS0_S5_EERKT_RKT0_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrIK13CAnimNodeBase17CRefCountAccessorEED4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI18CUpdateNodeManager17CRefCountAccessorEEC4Ev */
	class CSmartPtr<CUpdateNodeManager, CRefCountAccessor> & GetValue(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI18CUpdateNodeManager17CRefCountAccessorEE8GetValueEv */
	const class CSmartPtr<CUpdateNodeManager, CRefCountAccessor>  & GetValue(const class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> >  *); /* linkage=_ZNK16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI18CUpdateNodeManager17CRefCountAccessorEE8GetValueEv */
	void CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager> >(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> > *, const class AnimNodeID  &, const class CSmartPtr<CUpdateNodeManager, CRefCountAccessor>  &); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI18CUpdateNodeManager17CRefCountAccessorEEC4IS0_S4_EERKT_RKT0_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI18CUpdateNodeManager17CRefCountAccessorEED4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID13CPackedHandleI19CAnimUpdateNodeBaseEEC4Ev */
	class CPackedHandle<CAnimUpdateNodeBase> & GetValue(class CUtlKeyValuePair<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID13CPackedHandleI19CAnimUpdateNodeBaseEE8GetValueEv */
	const class CPackedHandle<CAnimUpdateNodeBase>  & GetValue(const class CUtlKeyValuePair<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> >  *); /* linkage=_ZNK16CUtlKeyValuePairI10AnimNodeID13CPackedHandleI19CAnimUpdateNodeBaseEE8GetValueEv */
	void CUtlKeyValuePair<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> >(class CUtlKeyValuePair<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> > *, const class AnimNodeID  &, const class CPackedHandle<CAnimUpdateNodeBase>  &); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID13CPackedHandleI19CAnimUpdateNodeBaseEEC4IS0_S3_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, int> *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeIDiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<AnimNodeID, int> *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeIDiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<AnimNodeID, int>  *); /* linkage=_ZNK16CUtlKeyValuePairI10AnimNodeIDiE8GetValueEv */
	void CUtlKeyValuePair<AnimNodeID, int>(class CUtlKeyValuePair<AnimNodeID, int> *, const class AnimNodeID  &, const int  &); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeIDiEC4IS0_iEERKT_RKT0_ */
};

// <01523AE5> ../public/tier0/utlcommon.h:51
// member functions: 33
// member variables: 2
// class size: 8
class CUtlKeyValuePair<AnimNodeID, int> {
	AnimNodeID m_key; /* 0 4 */
	int m_value; /* 4 4 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<AnimNodeID, int>* );
	/* ../public/tier0/utlcommon.h:66 */
	int& GetValue(CUtlKeyValuePair<AnimNodeID, int>* );
	/* ../public/tier0/utlcommon.h:67 */
	const int& GetValue(const CUtlKeyValuePair<AnimNodeID, int>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef int ValueReturn_t;
	/* ../public/tier0/utlcommon.h:64 */
	void CUtlKeyValuePair<AnimNodeID, int>(CUtlKeyValuePair<AnimNodeID, int>* , const AnimNodeID& , const int& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*> *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeIDP13CAnimNodeBaseEC4Ev */
	class CAnimNodeBase * & GetValue(class CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*> *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeIDP13CAnimNodeBaseE8GetValueEv */
	class CAnimNodeBase * const & GetValue(const class CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*>  *); /* linkage=_ZNK16CUtlKeyValuePairI10AnimNodeIDP13CAnimNodeBaseE8GetValueEv */
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*> *, const class CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*>  &); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeIDP13CAnimNodeBaseEC4ERKS3_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI13CAnimNodeBase17CRefCountAccessorEEC4Ev */
	class CSmartPtr<CAnimNodeBase, CRefCountAccessor> & GetValue(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI13CAnimNodeBase17CRefCountAccessorEE8GetValueEv */
	const class CSmartPtr<CAnimNodeBase, CRefCountAccessor>  & GetValue(const class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >  *); /* linkage=_ZNK16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI13CAnimNodeBase17CRefCountAccessorEE8GetValueEv */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI13CAnimNodeBase17CRefCountAccessorEED4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> > *, const class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >  &); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI13CAnimNodeBase17CRefCountAccessorEEC4ERKS5_ */
	void CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*>(class CUtlKeyValuePair<AnimNodeID, CAnimNodeBase*> *, const class AnimNodeID  &, class CAnimNodeBase * const &); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeIDP13CAnimNodeBaseEC4IS0_S2_EERKT_RKT0_ */
	void CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase> >(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> > *, const class AnimNodeID  &, const class CSmartPtr<CAnimNodeBase, CRefCountAccessor>  &); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI13CAnimNodeBase17CRefCountAccessorEEC4IS0_S4_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrIK13CAnimNodeBase17CRefCountAccessorEEC4Ev */
	class CSmartPtr<const CAnimNodeBase, CRefCountAccessor> & GetValue(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrIK13CAnimNodeBase17CRefCountAccessorEE8GetValueEv */
	const class CSmartPtr<const CAnimNodeBase, CRefCountAccessor>  & GetValue(const class CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> >  *); /* linkage=_ZNK16CUtlKeyValuePairI10AnimNodeID9CSmartPtrIK13CAnimNodeBase17CRefCountAccessorEE8GetValueEv */
	void CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase> >(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> > *, const class AnimNodeID  &, const class CSmartPtr<const CAnimNodeBase, CRefCountAccessor>  &); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrIK13CAnimNodeBase17CRefCountAccessorEEC4IS0_S5_EERKT_RKT0_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrIK13CAnimNodeBase17CRefCountAccessorEED4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI18CUpdateNodeManager17CRefCountAccessorEEC4Ev */
	class CSmartPtr<CUpdateNodeManager, CRefCountAccessor> & GetValue(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI18CUpdateNodeManager17CRefCountAccessorEE8GetValueEv */
	const class CSmartPtr<CUpdateNodeManager, CRefCountAccessor>  & GetValue(const class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> >  *); /* linkage=_ZNK16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI18CUpdateNodeManager17CRefCountAccessorEE8GetValueEv */
	void CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager> >(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> > *, const class AnimNodeID  &, const class CSmartPtr<CUpdateNodeManager, CRefCountAccessor>  &); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI18CUpdateNodeManager17CRefCountAccessorEEC4IS0_S4_EERKT_RKT0_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID9CSmartPtrI18CUpdateNodeManager17CRefCountAccessorEED4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID13CPackedHandleI19CAnimUpdateNodeBaseEEC4Ev */
	class CPackedHandle<CAnimUpdateNodeBase> & GetValue(class CUtlKeyValuePair<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> > *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID13CPackedHandleI19CAnimUpdateNodeBaseEE8GetValueEv */
	const class CPackedHandle<CAnimUpdateNodeBase>  & GetValue(const class CUtlKeyValuePair<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> >  *); /* linkage=_ZNK16CUtlKeyValuePairI10AnimNodeID13CPackedHandleI19CAnimUpdateNodeBaseEE8GetValueEv */
	void CUtlKeyValuePair<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> >(class CUtlKeyValuePair<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> > *, const class AnimNodeID  &, const class CPackedHandle<CAnimUpdateNodeBase>  &); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeID13CPackedHandleI19CAnimUpdateNodeBaseEEC4IS0_S3_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<AnimNodeID, int> *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeIDiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<AnimNodeID, int> *); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeIDiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<AnimNodeID, int>  *); /* linkage=_ZNK16CUtlKeyValuePairI10AnimNodeIDiE8GetValueEv */
	void CUtlKeyValuePair<AnimNodeID, int>(class CUtlKeyValuePair<AnimNodeID, int> *, const class AnimNodeID  &, const int  &); /* linkage=_ZN16CUtlKeyValuePairI10AnimNodeIDiEC4IS0_iEERKT_RKT0_ */
};

// <01532951> ../public/tier0/utlcommon.h:51
// member functions: 48
// member variables: 2
// class size: 40
class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion> {
	const class CAnimUpdateNodeBase * m_key; /* 0 8 */
	CRootMotion m_value; /* 8 28 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion>* );
	/* ../public/tier0/utlcommon.h:66 */
	CRootMotion& GetValue(CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion>* );
	/* ../public/tier0/utlcommon.h:67 */
	const CRootMotion& GetValue(const CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef struct CRootMotion ValueReturn_t;
	/* ../public/tier0/utlcommon.h:64 */
	void CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion>(CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion>* , const CAnimUpdateNodeBase* const& , const CRootMotion& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*> *); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructFieldPK32KV3ConvertSpecialFieldBehavior_tEC4Ev */
	const class KV3ConvertSpecialFieldBehavior_t  * & GetValue(class CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*> *); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructFieldPK32KV3ConvertSpecialFieldBehavior_tE8GetValueEv */
	const class KV3ConvertSpecialFieldBehavior_t  * const & GetValue(const class CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK24CResourceDiskStructFieldPK32KV3ConvertSpecialFieldBehavior_tE8GetValueEv */
	void CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*>(class CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*> *, const class CResourceDiskStructField  * const &, const class KV3ConvertSpecialFieldBehavior_t  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructFieldPK32KV3ConvertSpecialFieldBehavior_tEC4IS2_S5_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CResourceDiskStructField*, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructField7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CResourceDiskStructField*, empty_t> *, const class CResourceDiskStructField  * const &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructField7empty_tEC4ERKS2_RKS3_ */
	const class CResourceDiskStructField  * const & GetValue(const class CUtlKeyValuePair<const CResourceDiskStructField*, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK24CResourceDiskStructField7empty_tE8GetValueEv */
	void CUtlKeyValuePair<const CResourceDiskStructField*>(class CUtlKeyValuePair<const CResourceDiskStructField*, empty_t> *, const class CResourceDiskStructField  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructField7empty_tEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_t7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t> *, const class ResourceBindingBase_t  * const &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_t7empty_tEC4ERKS2_RKS3_ */
	const class ResourceBindingBase_t  * const & GetValue(const class CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK21ResourceBindingBase_t7empty_tE8GetValueEv */
	void CUtlKeyValuePair<const ResourceBindingBase_t*>(class CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t> *, const class ResourceBindingBase_t  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_t7empty_tEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_tjEC4Ev */
	unsigned int & GetValue(class CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_tjE8GetValueEv */
	const unsigned int  & GetValue(const class CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK21ResourceBindingBase_tjE8GetValueEv */
	void CUtlKeyValuePair<const ResourceBindingBase_t*>(class CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int> *, const class ResourceBindingBase_t  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_tjEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CEnvMapSceneObject*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK18CEnvMapSceneObjectiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<const CEnvMapSceneObject*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK18CEnvMapSceneObjectiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<const CEnvMapSceneObject*, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK18CEnvMapSceneObjectiE8GetValueEv */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const IMaterial2*, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIPK10IMaterial27empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const IMaterial2*, empty_t> *, const class IMaterial2  * const &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIPK10IMaterial27empty_tEC4ERKS2_RKS3_ */
	const class IMaterial2  * const & GetValue(const class CUtlKeyValuePair<const IMaterial2*, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK10IMaterial27empty_tE8GetValueEv */
	void CUtlKeyValuePair<const IMaterial2*>(class CUtlKeyValuePair<const IMaterial2*, empty_t> *, const class IMaterial2  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK10IMaterial27empty_tEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const qhVertex*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<const qhVertex*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<const qhVertex*, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK8qhVertexiE8GetValueEv */
	void CUtlKeyValuePair<const qhVertex*, int>(class CUtlKeyValuePair<const qhVertex*, int> *, const class qhVertex  * const &, const int  &); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexiEC4IS2_iEERKT_RKT0_ */
	void CUtlKeyValuePair<const qhVertex*>(class CUtlKeyValuePair<const qhVertex*, int> *, const class qhVertex  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexiEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const qhFace*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK6qhFaceiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<const qhFace*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK6qhFaceiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<const qhFace*, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK6qhFaceiE8GetValueEv */
	void CUtlKeyValuePair<const qhFace*, int>(class CUtlKeyValuePair<const qhFace*, int> *, const class qhFace  * const &, const int  &); /* linkage=_ZN16CUtlKeyValuePairIPK6qhFaceiEC4IS2_iEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIF); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEEC4Ev */
	class ComponentHandleWithListPointer_t & GetValue(class CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIF); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEE8GetValueEv */
	const class ComponentHandleWithListPointer_t  & GetValue(const class CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, ); /* linkage=_ZNK16CUtlKeyValuePairIPK8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEE8GetValueEv */
	void CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>(class CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIF, const class qhVertex  * const &, const class ComponentHandleWithListPointer_t  &); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEEC4IS2_SB_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus> *); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase13CStrideStatusEC4Ev */
	class CStrideStatus & GetValue(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus> *); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase13CStrideStatusE8GetValueEv */
	const class CStrideStatus  & GetValue(const class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK19CAnimUpdateNodeBase13CStrideStatusE8GetValueEv */
	void CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus>(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus> *, const class CAnimUpdateNodeBase  * const &, const class CStrideStatus  &); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase13CStrideStatusEC4IS2_S3_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion> *); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase11CRootMotionEC4Ev */
	class CRootMotion & GetValue(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion> *); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase11CRootMotionE8GetValueEv */
	const class CRootMotion  & GetValue(const class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK19CAnimUpdateNodeBase11CRootMotionE8GetValueEv */
	void CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion>(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion> *, const class CAnimUpdateNodeBase  * const &, const class CRootMotion  &); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase11CRootMotionEC4IS2_S3_EERKT_RKT0_ */
};

// <01534248> ../public/tier0/utlcommon.h:51
// member functions: 48
// member variables: 2
// class size: 1,328
class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus> {
	const class CAnimUpdateNodeBase * m_key; /* 0 8 */
	CStrideStatus m_value; /* 8 1316 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus>* );
	/* ../public/tier0/utlcommon.h:66 */
	CStrideStatus& GetValue(CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus>* );
	/* ../public/tier0/utlcommon.h:67 */
	const CStrideStatus& GetValue(const CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef struct CStrideStatus ValueReturn_t;
	/* ../public/tier0/utlcommon.h:64 */
	void CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus>(CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus>* , const CAnimUpdateNodeBase* const& , const CStrideStatus& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*> *); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructFieldPK32KV3ConvertSpecialFieldBehavior_tEC4Ev */
	const class KV3ConvertSpecialFieldBehavior_t  * & GetValue(class CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*> *); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructFieldPK32KV3ConvertSpecialFieldBehavior_tE8GetValueEv */
	const class KV3ConvertSpecialFieldBehavior_t  * const & GetValue(const class CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK24CResourceDiskStructFieldPK32KV3ConvertSpecialFieldBehavior_tE8GetValueEv */
	void CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*>(class CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*> *, const class CResourceDiskStructField  * const &, const class KV3ConvertSpecialFieldBehavior_t  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructFieldPK32KV3ConvertSpecialFieldBehavior_tEC4IS2_S5_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CResourceDiskStructField*, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructField7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CResourceDiskStructField*, empty_t> *, const class CResourceDiskStructField  * const &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructField7empty_tEC4ERKS2_RKS3_ */
	const class CResourceDiskStructField  * const & GetValue(const class CUtlKeyValuePair<const CResourceDiskStructField*, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK24CResourceDiskStructField7empty_tE8GetValueEv */
	void CUtlKeyValuePair<const CResourceDiskStructField*>(class CUtlKeyValuePair<const CResourceDiskStructField*, empty_t> *, const class CResourceDiskStructField  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructField7empty_tEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_t7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t> *, const class ResourceBindingBase_t  * const &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_t7empty_tEC4ERKS2_RKS3_ */
	const class ResourceBindingBase_t  * const & GetValue(const class CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK21ResourceBindingBase_t7empty_tE8GetValueEv */
	void CUtlKeyValuePair<const ResourceBindingBase_t*>(class CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t> *, const class ResourceBindingBase_t  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_t7empty_tEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_tjEC4Ev */
	unsigned int & GetValue(class CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_tjE8GetValueEv */
	const unsigned int  & GetValue(const class CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK21ResourceBindingBase_tjE8GetValueEv */
	void CUtlKeyValuePair<const ResourceBindingBase_t*>(class CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int> *, const class ResourceBindingBase_t  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_tjEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CEnvMapSceneObject*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK18CEnvMapSceneObjectiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<const CEnvMapSceneObject*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK18CEnvMapSceneObjectiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<const CEnvMapSceneObject*, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK18CEnvMapSceneObjectiE8GetValueEv */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const IMaterial2*, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIPK10IMaterial27empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const IMaterial2*, empty_t> *, const class IMaterial2  * const &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIPK10IMaterial27empty_tEC4ERKS2_RKS3_ */
	const class IMaterial2  * const & GetValue(const class CUtlKeyValuePair<const IMaterial2*, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK10IMaterial27empty_tE8GetValueEv */
	void CUtlKeyValuePair<const IMaterial2*>(class CUtlKeyValuePair<const IMaterial2*, empty_t> *, const class IMaterial2  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK10IMaterial27empty_tEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const qhVertex*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<const qhVertex*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<const qhVertex*, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK8qhVertexiE8GetValueEv */
	void CUtlKeyValuePair<const qhVertex*, int>(class CUtlKeyValuePair<const qhVertex*, int> *, const class qhVertex  * const &, const int  &); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexiEC4IS2_iEERKT_RKT0_ */
	void CUtlKeyValuePair<const qhVertex*>(class CUtlKeyValuePair<const qhVertex*, int> *, const class qhVertex  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexiEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const qhFace*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK6qhFaceiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<const qhFace*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK6qhFaceiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<const qhFace*, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK6qhFaceiE8GetValueEv */
	void CUtlKeyValuePair<const qhFace*, int>(class CUtlKeyValuePair<const qhFace*, int> *, const class qhFace  * const &, const int  &); /* linkage=_ZN16CUtlKeyValuePairIPK6qhFaceiEC4IS2_iEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIF); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEEC4Ev */
	class ComponentHandleWithListPointer_t & GetValue(class CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIF); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEE8GetValueEv */
	const class ComponentHandleWithListPointer_t  & GetValue(const class CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, ); /* linkage=_ZNK16CUtlKeyValuePairIPK8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEE8GetValueEv */
	void CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>(class CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIF, const class qhVertex  * const &, const class ComponentHandleWithListPointer_t  &); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEEC4IS2_SB_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus> *); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase13CStrideStatusEC4Ev */
	class CStrideStatus & GetValue(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus> *); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase13CStrideStatusE8GetValueEv */
	const class CStrideStatus  & GetValue(const class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK19CAnimUpdateNodeBase13CStrideStatusE8GetValueEv */
	void CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus>(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus> *, const class CAnimUpdateNodeBase  * const &, const class CStrideStatus  &); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase13CStrideStatusEC4IS2_S3_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion> *); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase11CRootMotionEC4Ev */
	class CRootMotion & GetValue(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion> *); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase11CRootMotionE8GetValueEv */
	const class CRootMotion  & GetValue(const class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK19CAnimUpdateNodeBase11CRootMotionE8GetValueEv */
	void CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion>(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion> *, const class CAnimUpdateNodeBase  * const &, const class CRootMotion  &); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase11CRootMotionEC4IS2_S3_EERKT_RKT0_ */
};

// <0258C52A> ../public/tier0/utlcommon.h:51
// member functions: 41
// member variables: 2
// class size: 160
class CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t> {
	unsigned int m_key; /* 0 4 */
	CAnimationDecodeCacheEntry_t m_value __attribute__((__aligned__(16))); /* 16 144 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t>* );
	/* ../public/tier0/utlcommon.h:66 */
	CAnimationDecodeCacheEntry_t& GetValue(CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t>* );
	/* ../public/tier0/utlcommon.h:67 */
	const CAnimationDecodeCacheEntry_t& GetValue(const CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef struct CAnimationDecodeCacheEntry_t ValueReturn_t;
	/* ../public/tier0/utlcommon.h:64 */
	void CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t>(CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t>* , const unsigned int& , const CAnimationDecodeCacheEntry_t& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, int> *); /* linkage=_ZN16CUtlKeyValuePairIjiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<unsigned int, int> *); /* linkage=_ZN16CUtlKeyValuePairIjiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<unsigned int, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIjiE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, int>(class CUtlKeyValuePair<unsigned int, int> *, const unsigned int  &, const int  &); /* linkage=_ZN16CUtlKeyValuePairIjiEC4IjiEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIj7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, empty_t> *, const unsigned int  &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIj7empty_tEC4ERKjRKS0_ */
	const unsigned int  & GetValue(const class CUtlKeyValuePair<unsigned int, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIj7empty_tE8GetValueEv */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*> *); /* linkage=_ZN16CUtlKeyValuePairIjPN16CKeyValuesSystem18SharedStringData_tEEC4Ev */
	class SharedStringData_t * & GetValue(class CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*> *); /* linkage=_ZN16CUtlKeyValuePairIjPN16CKeyValuesSystem18SharedStringData_tEE8GetValueEv */
	class SharedStringData_t * const & GetValue(const class CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*>  *); /* linkage=_ZNK16CUtlKeyValuePairIjPN16CKeyValuesSystem18SharedStringData_tEE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*>(class CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*> *, const unsigned int  &, class SharedStringData_t * const &); /* linkage=_ZN16CUtlKeyValuePairIjPN16CKeyValuesSystem18SharedStringData_tEEC4IjS2_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*> *); /* linkage=_ZN16CUtlKeyValuePairIjPK17CResourceDiskEnumEC4Ev */
	const class CResourceDiskEnum  * & GetValue(class CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*> *); /* linkage=_ZN16CUtlKeyValuePairIjPK17CResourceDiskEnumE8GetValueEv */
	const class CResourceDiskEnum  * const & GetValue(const class CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*>  *); /* linkage=_ZNK16CUtlKeyValuePairIjPK17CResourceDiskEnumE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*>(class CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*> *, const unsigned int  &, const class CResourceDiskEnum  * const &); /* linkage=_ZN16CUtlKeyValuePairIjPK17CResourceDiskEnumEC4IjS2_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*> *); /* linkage=_ZN16CUtlKeyValuePairIjPK19CResourceDiskStructEC4Ev */
	const class CResourceDiskStruct  * & GetValue(class CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*> *); /* linkage=_ZN16CUtlKeyValuePairIjPK19CResourceDiskStructE8GetValueEv */
	const class CResourceDiskStruct  * const & GetValue(const class CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*>  *); /* linkage=_ZNK16CUtlKeyValuePairIjPK19CResourceDiskStructE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*>(class CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*> *, const unsigned int  &, const class CResourceDiskStruct  * const &); /* linkage=_ZN16CUtlKeyValuePairIjPK19CResourceDiskStructEC4IjS2_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, short unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIjtEC4Ev */
	short unsigned int & GetValue(class CUtlKeyValuePair<unsigned int, short unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIjtE8GetValueEv */
	const short unsigned int  & GetValue(const class CUtlKeyValuePair<unsigned int, short unsigned int>  *); /* linkage=_ZNK16CUtlKeyValuePairIjtE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, short unsigned int>(class CUtlKeyValuePair<unsigned int, short unsigned int> *, const unsigned int  &, const short unsigned int  &); /* linkage=_ZN16CUtlKeyValuePairIjtEC4IjtEERKT_RKT0_ */
	void CUtlKeyValuePair<unsigned int>(class CUtlKeyValuePair<unsigned int, empty_t> *, const unsigned int  &); /* linkage=_ZN16CUtlKeyValuePairIj7empty_tEC4IjEERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry> *); /* linkage=_ZN16CUtlKeyValuePairIjN18CVSoundTypeManager12SfxDictEntryEEC4Ev */
	class SfxDictEntry & GetValue(class CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry> *); /* linkage=_ZN16CUtlKeyValuePairIjN18CVSoundTypeManager12SfxDictEntryEE8GetValueEv */
	const class SfxDictEntry  & GetValue(const class CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry>  *); /* linkage=_ZNK16CUtlKeyValuePairIjN18CVSoundTypeManager12SfxDictEntryEE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry>(class CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry> *, const unsigned int  &, const class SfxDictEntry  &); /* linkage=_ZN16CUtlKeyValuePairIjN18CVSoundTypeManager12SfxDictEntryEEC4IjS1_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t> *); /* linkage=_ZN16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEEC4Ev */
	class FrameBufferScratchTexInfo_t & GetValue(class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t> *); /* linkage=_ZN16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEE8GetValueEv */
	const class FrameBufferScratchTexInfo_t  & GetValue(const class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEE8GetValueEv */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t> *); /* linkage=_ZN16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEED4Ev */
	void CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t>(class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t> *, const unsigned int  &, const class FrameBufferScratchTexInfo_t  &); /* linkage=_ZN16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEEC4IjS1_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t> *); /* linkage=_ZN16CUtlKeyValuePairIj28CAnimationDecodeCacheEntry_tEC4Ev */
	class CAnimationDecodeCacheEntry_t & GetValue(class CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t> *); /* linkage=_ZN16CUtlKeyValuePairIj28CAnimationDecodeCacheEntry_tE8GetValueEv */
	const class CAnimationDecodeCacheEntry_t  & GetValue(const class CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIj28CAnimationDecodeCacheEntry_tE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t>(class CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t> *, const unsigned int  &, const class CAnimationDecodeCacheEntry_t  &); /* linkage=_ZN16CUtlKeyValuePairIj28CAnimationDecodeCacheEntry_tEC4IjS0_EERKT_RKT0_ */
} __attribute__((__aligned__(16)));

// <004453AC> ../public/tier0/utlcommon.h:51
// member functions: 8
// member variables: 2
// class size: 56
class CUtlKeyValuePair<RenderResourceHandle_t__*, RenderDescriptorBinding_t> {
	RenderResourceHandle_t__ * m_key; /* 0 8 */
	RenderDescriptorBinding_t m_value; /* 8 48 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<RenderResourceHandle_t__*, RenderDescriptorBinding_t>* );
	/* ../public/tier0/utlcommon.h:66 */
	RenderDescriptorBinding_t& GetValue(CUtlKeyValuePair<RenderResourceHandle_t__*, RenderDescriptorBinding_t>* );
	/* ../public/tier0/utlcommon.h:67 */
	const RenderDescriptorBinding_t& GetValue(const CUtlKeyValuePair<RenderResourceHandle_t__*, RenderDescriptorBinding_t>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef struct RenderDescriptorBinding_t ValueReturn_t;
	/* ../public/tier0/utlcommon.h:64 */
	void CUtlKeyValuePair<RenderResourceHandle_t__*, RenderDescriptorBinding_t>(CUtlKeyValuePair<RenderResourceHandle_t__*, RenderDescriptorBinding_t>* , RenderResourceHandle_t__* const& , const RenderDescriptorBinding_t& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<RenderResourceHandle_t__*, RenderDescriptorBinding_t> *); /* linkage=_ZN16CUtlKeyValuePairIP24RenderResourceHandle_t__25RenderDescriptorBinding_tEC4Ev */
	class RenderDescriptorBinding_t & GetValue(class CUtlKeyValuePair<RenderResourceHandle_t__*, RenderDescriptorBinding_t> *); /* linkage=_ZN16CUtlKeyValuePairIP24RenderResourceHandle_t__25RenderDescriptorBinding_tE8GetValueEv */
	const class RenderDescriptorBinding_t  & GetValue(const class CUtlKeyValuePair<RenderResourceHandle_t__*, RenderDescriptorBinding_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIP24RenderResourceHandle_t__25RenderDescriptorBinding_tE8GetValueEv */
	void CUtlKeyValuePair<RenderResourceHandle_t__*, RenderDescriptorBinding_t>(class CUtlKeyValuePair<RenderResourceHandle_t__*, RenderDescriptorBinding_t> *, class RenderResourceHandle_t__ * const &, const class RenderDescriptorBinding_t  &); /* linkage=_ZN16CUtlKeyValuePairIP24RenderResourceHandle_t__25RenderDescriptorBinding_tEC4IS1_S2_EERKT_RKT0_ */
};

// <004CE847> ../public/tier0/utlcommon.h:51
// member functions: 12
// member variables: 2
// class size: 376
class CUtlKeyValuePair<VulkanFramebufferState_t, VkFramebuffer_T*> {
	VulkanFramebufferState_t m_key; /* 0 368 */
	VkFramebuffer_T * m_value; /* 368 8 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<VulkanFramebufferState_t, VkFramebuffer_T*>* );
	/* ../public/tier0/utlcommon.h:66 */
	VkFramebuffer_T* & GetValue(CUtlKeyValuePair<VulkanFramebufferState_t, VkFramebuffer_T*>* );
	/* ../public/tier0/utlcommon.h:67 */
	VkFramebuffer_T* const& GetValue(const CUtlKeyValuePair<VulkanFramebufferState_t, VkFramebuffer_T*>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef class VkFramebuffer_T * ValueReturn_t;
	/* ../public/tier0/utlcommon.h:64 */
	void CUtlKeyValuePair<VulkanFramebufferState_t, VkFramebuffer_T*>(CUtlKeyValuePair<VulkanFramebufferState_t, VkFramebuffer_T*>* , const VulkanFramebufferState_t& , VkFramebuffer_T* const& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<VulkanFramebufferState_t, VkRenderPass_T*> *); /* linkage=_ZN16CUtlKeyValuePairI24VulkanFramebufferState_tP14VkRenderPass_TEC4Ev */
	class VkRenderPass_T * & GetValue(class CUtlKeyValuePair<VulkanFramebufferState_t, VkRenderPass_T*> *); /* linkage=_ZN16CUtlKeyValuePairI24VulkanFramebufferState_tP14VkRenderPass_TE8GetValueEv */
	class VkRenderPass_T * const & GetValue(const class CUtlKeyValuePair<VulkanFramebufferState_t, VkRenderPass_T*>  *); /* linkage=_ZNK16CUtlKeyValuePairI24VulkanFramebufferState_tP14VkRenderPass_TE8GetValueEv */
	void CUtlKeyValuePair<VulkanFramebufferState_t, VkRenderPass_T*>(class CUtlKeyValuePair<VulkanFramebufferState_t, VkRenderPass_T*> *, const class VulkanFramebufferState_t  &, class VkRenderPass_T * const &); /* linkage=_ZN16CUtlKeyValuePairI24VulkanFramebufferState_tP14VkRenderPass_TEC4IS0_S2_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<VulkanFramebufferState_t, VkFramebuffer_T*> *); /* linkage=_ZN16CUtlKeyValuePairI24VulkanFramebufferState_tP15VkFramebuffer_TEC4Ev */
	class VkFramebuffer_T * & GetValue(class CUtlKeyValuePair<VulkanFramebufferState_t, VkFramebuffer_T*> *); /* linkage=_ZN16CUtlKeyValuePairI24VulkanFramebufferState_tP15VkFramebuffer_TE8GetValueEv */
	class VkFramebuffer_T * const & GetValue(const class CUtlKeyValuePair<VulkanFramebufferState_t, VkFramebuffer_T*>  *); /* linkage=_ZNK16CUtlKeyValuePairI24VulkanFramebufferState_tP15VkFramebuffer_TE8GetValueEv */
	void CUtlKeyValuePair<VulkanFramebufferState_t, VkFramebuffer_T*>(class CUtlKeyValuePair<VulkanFramebufferState_t, VkFramebuffer_T*> *, const class VulkanFramebufferState_t  &, class VkFramebuffer_T * const &); /* linkage=_ZN16CUtlKeyValuePairI24VulkanFramebufferState_tP15VkFramebuffer_TEC4IS0_S2_EERKT_RKT0_ */
};

// <004D0144> ../public/tier0/utlcommon.h:51
// member functions: 12
// member variables: 2
// class size: 376
class CUtlKeyValuePair<VulkanFramebufferState_t, VkRenderPass_T*> {
	VulkanFramebufferState_t m_key; /* 0 368 */
	VkRenderPass_T * m_value; /* 368 8 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<VulkanFramebufferState_t, VkRenderPass_T*>* );
	/* ../public/tier0/utlcommon.h:66 */
	VkRenderPass_T* & GetValue(CUtlKeyValuePair<VulkanFramebufferState_t, VkRenderPass_T*>* );
	/* ../public/tier0/utlcommon.h:67 */
	VkRenderPass_T* const& GetValue(const CUtlKeyValuePair<VulkanFramebufferState_t, VkRenderPass_T*>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef class VkRenderPass_T * ValueReturn_t;
	/* ../public/tier0/utlcommon.h:64 */
	void CUtlKeyValuePair<VulkanFramebufferState_t, VkRenderPass_T*>(CUtlKeyValuePair<VulkanFramebufferState_t, VkRenderPass_T*>* , const VulkanFramebufferState_t& , VkRenderPass_T* const& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<VulkanFramebufferState_t, VkRenderPass_T*> *); /* linkage=_ZN16CUtlKeyValuePairI24VulkanFramebufferState_tP14VkRenderPass_TEC4Ev */
	class VkRenderPass_T * & GetValue(class CUtlKeyValuePair<VulkanFramebufferState_t, VkRenderPass_T*> *); /* linkage=_ZN16CUtlKeyValuePairI24VulkanFramebufferState_tP14VkRenderPass_TE8GetValueEv */
	class VkRenderPass_T * const & GetValue(const class CUtlKeyValuePair<VulkanFramebufferState_t, VkRenderPass_T*>  *); /* linkage=_ZNK16CUtlKeyValuePairI24VulkanFramebufferState_tP14VkRenderPass_TE8GetValueEv */
	void CUtlKeyValuePair<VulkanFramebufferState_t, VkRenderPass_T*>(class CUtlKeyValuePair<VulkanFramebufferState_t, VkRenderPass_T*> *, const class VulkanFramebufferState_t  &, class VkRenderPass_T * const &); /* linkage=_ZN16CUtlKeyValuePairI24VulkanFramebufferState_tP14VkRenderPass_TEC4IS0_S2_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<VulkanFramebufferState_t, VkFramebuffer_T*> *); /* linkage=_ZN16CUtlKeyValuePairI24VulkanFramebufferState_tP15VkFramebuffer_TEC4Ev */
	class VkFramebuffer_T * & GetValue(class CUtlKeyValuePair<VulkanFramebufferState_t, VkFramebuffer_T*> *); /* linkage=_ZN16CUtlKeyValuePairI24VulkanFramebufferState_tP15VkFramebuffer_TE8GetValueEv */
	class VkFramebuffer_T * const & GetValue(const class CUtlKeyValuePair<VulkanFramebufferState_t, VkFramebuffer_T*>  *); /* linkage=_ZNK16CUtlKeyValuePairI24VulkanFramebufferState_tP15VkFramebuffer_TE8GetValueEv */
	void CUtlKeyValuePair<VulkanFramebufferState_t, VkFramebuffer_T*>(class CUtlKeyValuePair<VulkanFramebufferState_t, VkFramebuffer_T*> *, const class VulkanFramebufferState_t  &, class VkFramebuffer_T * const &); /* linkage=_ZN16CUtlKeyValuePairI24VulkanFramebufferState_tP15VkFramebuffer_TEC4IS0_S2_EERKT_RKT0_ */
};

// <004F4C0F> ../public/tier0/utlcommon.h:51
// member functions: 10
// member variables: 2
// class size: 40
class CUtlKeyValuePair<CVulkanImage*, CImageLayoutTracker::ImageTransition_t> {
	CVulkanImage * m_key; /* 0 8 */
	ImageTransition_t m_value; /* 8 32 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<CVulkanImage*, CImageLayoutTracker::ImageTransition_t>* );
	/* ../public/tier0/utlcommon.h:66 */
	ImageTransition_t& GetValue(CUtlKeyValuePair<CVulkanImage*, CImageLayoutTracker::ImageTransition_t>* );
	/* ../public/tier0/utlcommon.h:67 */
	const ImageTransition_t& GetValue(const CUtlKeyValuePair<CVulkanImage*, CImageLayoutTracker::ImageTransition_t>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef struct ImageTransition_t ValueReturn_t;
	/* ../public/tier0/utlcommon.h:64 */
	void CUtlKeyValuePair<CVulkanImage*, CImageLayoutTracker::ImageTransition_t>(CUtlKeyValuePair<CVulkanImage*, CImageLayoutTracker::ImageTransition_t>* , CVulkanImage* const& , const ImageTransition_t& );
	/* ../public/tier0/utlcommon.h:61 */
	void CUtlKeyValuePair<CVulkanImage*>(CUtlKeyValuePair<CVulkanImage*, CImageLayoutTracker::ImageTransition_t>* , CVulkanImage* const& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<CVulkanImage*, CImageLayoutTracker::ImageTransition_t> *); /* linkage=_ZN16CUtlKeyValuePairIP12CVulkanImageN19CImageLayoutTracker17ImageTransition_tEEC4Ev */
	class ImageTransition_t & GetValue(class CUtlKeyValuePair<CVulkanImage*, CImageLayoutTracker::ImageTransition_t> *); /* linkage=_ZN16CUtlKeyValuePairIP12CVulkanImageN19CImageLayoutTracker17ImageTransition_tEE8GetValueEv */
	const class ImageTransition_t  & GetValue(const class CUtlKeyValuePair<CVulkanImage*, CImageLayoutTracker::ImageTransition_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIP12CVulkanImageN19CImageLayoutTracker17ImageTransition_tEE8GetValueEv */
	void CUtlKeyValuePair<CVulkanImage*, CImageLayoutTracker::ImageTransition_t>(class CUtlKeyValuePair<CVulkanImage*, CImageLayoutTracker::ImageTransition_t> *, class CVulkanImage * const &, const class ImageTransition_t  &); /* linkage=_ZN16CUtlKeyValuePairIP12CVulkanImageN19CImageLayoutTracker17ImageTransition_tEEC4IS1_S3_EERKT_RKT0_ */
	void CUtlKeyValuePair<CVulkanImage*>(class CUtlKeyValuePair<CVulkanImage*, CImageLayoutTracker::ImageTransition_t> *, class CVulkanImage * const &); /* linkage=_ZN16CUtlKeyValuePairIP12CVulkanImageN19CImageLayoutTracker17ImageTransition_tEEC4IS1_EERKT_ */
};

// <0061C07E> ../public/tier0/utlcommon.h:51
// member functions: 24
// member variables: 2
// class size: 16
class CUtlKeyValuePair<long unsigned int, const CShaderVulkanBase*> {
	long unsigned int m_key; /* 0 8 */
	const class CShaderVulkanBase * m_value; /* 8 8 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<long unsigned int, const CShaderVulkanBase*>* );
	/* ../public/tier0/utlcommon.h:66 */
	const CShaderVulkanBase* & GetValue(CUtlKeyValuePair<long unsigned int, const CShaderVulkanBase*>* );
	/* ../public/tier0/utlcommon.h:67 */
	const CShaderVulkanBase* const& GetValue(const CUtlKeyValuePair<long unsigned int, const CShaderVulkanBase*>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef const class CShaderVulkanBase * ValueReturn_t;
	/* ../public/tier0/utlcommon.h:64 */
	void CUtlKeyValuePair<long unsigned int, const CShaderVulkanBase*>(CUtlKeyValuePair<long unsigned int, const CShaderVulkanBase*>* , const long unsigned int& , const CShaderVulkanBase* const& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<long long unsigned int, char const*> *); /* linkage=_ZN16CUtlKeyValuePairIyPKcEC4Ev */
	const char  * & GetValue(class CUtlKeyValuePair<long long unsigned int, char const*> *); /* linkage=_ZN16CUtlKeyValuePairIyPKcE8GetValueEv */
	const char  * const & GetValue(const class CUtlKeyValuePair<long long unsigned int, char const*>  *); /* linkage=_ZNK16CUtlKeyValuePairIyPKcE8GetValueEv */
	void CUtlKeyValuePair<long long unsigned int, char const*>(class CUtlKeyValuePair<long long unsigned int, char const*> *, const long long unsigned int  &, const char  * const &); /* linkage=_ZN16CUtlKeyValuePairIyPKcEC4IyS1_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<long unsigned int, const CShaderVulkanBase*> *); /* linkage=_ZN16CUtlKeyValuePairImPK17CShaderVulkanBaseEC4Ev */
	const class CShaderVulkanBase  * & GetValue(class CUtlKeyValuePair<long unsigned int, const CShaderVulkanBase*> *); /* linkage=_ZN16CUtlKeyValuePairImPK17CShaderVulkanBaseE8GetValueEv */
	const class CShaderVulkanBase  * const & GetValue(const class CUtlKeyValuePair<long unsigned int, const CShaderVulkanBase*>  *); /* linkage=_ZNK16CUtlKeyValuePairImPK17CShaderVulkanBaseE8GetValueEv */
	void CUtlKeyValuePair<long unsigned int, const CShaderVulkanBase*>(class CUtlKeyValuePair<long unsigned int, const CShaderVulkanBase*> *, const long unsigned int  &, const class CShaderVulkanBase  * const &); /* linkage=_ZN16CUtlKeyValuePairImPK17CShaderVulkanBaseEC4ImS2_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t> *); /* linkage=_ZN16CUtlKeyValuePairIyN18CShaderTableVulkan24RefCountedShaderModule_tEEC4Ev */
	class RefCountedShaderModule_t & GetValue(class CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t> *); /* linkage=_ZN16CUtlKeyValuePairIyN18CShaderTableVulkan24RefCountedShaderModule_tEE8GetValueEv */
	const class RefCountedShaderModule_t  & GetValue(const class CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIyN18CShaderTableVulkan24RefCountedShaderModule_tEE8GetValueEv */
	void CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>(class CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t> *, const long long unsigned int  &, const class RefCountedShaderModule_t  &); /* linkage=_ZN16CUtlKeyValuePairIyN18CShaderTableVulkan24RefCountedShaderModule_tEEC4IyS1_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t> *); /* linkage=_ZN16CUtlKeyValuePairIyN18CShaderTableVulkan22RefCountedShaderFile_tEEC4Ev */
	class RefCountedShaderFile_t & GetValue(class CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t> *); /* linkage=_ZN16CUtlKeyValuePairIyN18CShaderTableVulkan22RefCountedShaderFile_tEE8GetValueEv */
	const class RefCountedShaderFile_t  & GetValue(const class CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIyN18CShaderTableVulkan22RefCountedShaderFile_tEE8GetValueEv */
	void CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>(class CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t> *, const long long unsigned int  &, const class RefCountedShaderFile_t  &); /* linkage=_ZN16CUtlKeyValuePairIyN18CShaderTableVulkan22RefCountedShaderFile_tEEC4IyS1_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<long long unsigned int, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIy7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<long long unsigned int, empty_t> *, const long long unsigned int  &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIy7empty_tEC4ERKyRKS0_ */
	const long long unsigned int  & GetValue(const class CUtlKeyValuePair<long long unsigned int, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIy7empty_tE8GetValueEv */
	void CUtlKeyValuePair<long long unsigned int>(class CUtlKeyValuePair<long long unsigned int, empty_t> *, const long long unsigned int  &); /* linkage=_ZN16CUtlKeyValuePairIy7empty_tEC4IyEERKT_ */
};

// <006C493D> ../public/tier0/utlcommon.h:51
// member functions: 8
// member variables: 2
// class size: 280
class CUtlKeyValuePair<PipelineCreateInfo_t, PipelineObjectVulkan_t*> {
	PipelineCreateInfo_t m_key; /* 0 272 */
	PipelineObjectVulkan_t * m_value; /* 272 8 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<PipelineCreateInfo_t, PipelineObjectVulkan_t*>* );
	/* ../public/tier0/utlcommon.h:66 */
	PipelineObjectVulkan_t* & GetValue(CUtlKeyValuePair<PipelineCreateInfo_t, PipelineObjectVulkan_t*>* );
	/* ../public/tier0/utlcommon.h:67 */
	PipelineObjectVulkan_t* const& GetValue(const CUtlKeyValuePair<PipelineCreateInfo_t, PipelineObjectVulkan_t*>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef class PipelineObjectVulkan_t * ValueReturn_t;
	/* ../public/tier0/utlcommon.h:64 */
	void CUtlKeyValuePair<PipelineCreateInfo_t, PipelineObjectVulkan_t*>(CUtlKeyValuePair<PipelineCreateInfo_t, PipelineObjectVulkan_t*>* , const PipelineCreateInfo_t& , PipelineObjectVulkan_t* const& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<PipelineCreateInfo_t, PipelineObjectVulkan_t*> *); /* linkage=_ZN16CUtlKeyValuePairI20PipelineCreateInfo_tP22PipelineObjectVulkan_tEC4Ev */
	class PipelineObjectVulkan_t * & GetValue(class CUtlKeyValuePair<PipelineCreateInfo_t, PipelineObjectVulkan_t*> *); /* linkage=_ZN16CUtlKeyValuePairI20PipelineCreateInfo_tP22PipelineObjectVulkan_tE8GetValueEv */
	class PipelineObjectVulkan_t * const & GetValue(const class CUtlKeyValuePair<PipelineCreateInfo_t, PipelineObjectVulkan_t*>  *); /* linkage=_ZNK16CUtlKeyValuePairI20PipelineCreateInfo_tP22PipelineObjectVulkan_tE8GetValueEv */
	void CUtlKeyValuePair<PipelineCreateInfo_t, PipelineObjectVulkan_t*>(class CUtlKeyValuePair<PipelineCreateInfo_t, PipelineObjectVulkan_t*> *, const class PipelineCreateInfo_t  &, class PipelineObjectVulkan_t * const &); /* linkage=_ZN16CUtlKeyValuePairI20PipelineCreateInfo_tP22PipelineObjectVulkan_tEC4IS0_S2_EERKT_RKT0_ */
};

// <006CB67A> ../public/tier0/utlcommon.h:51
// member functions: 10
// member variables: 2
// class size: 192
class CUtlKeyValuePair<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t> {
	PipelineLayoutCreateInfo_t m_key; /* 0 168 */
	PipelineLayoutVulkan_t m_value; /* 168 24 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>* );
	/* ../public/tier0/utlcommon.h:66 */
	PipelineLayoutVulkan_t& GetValue(CUtlKeyValuePair<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>* );
	/* ../public/tier0/utlcommon.h:67 */
	const PipelineLayoutVulkan_t& GetValue(const CUtlKeyValuePair<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef struct PipelineLayoutVulkan_t ValueReturn_t;
	/* ../public/tier0/utlcommon.h:64 */
	void CUtlKeyValuePair<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>(CUtlKeyValuePair<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>* , const PipelineLayoutCreateInfo_t& , const PipelineLayoutVulkan_t& );
	void ~CUtlKeyValuePair(CUtlKeyValuePair<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>* );
	void CUtlKeyValuePair(class CUtlKeyValuePair<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t> *); /* linkage=_ZN16CUtlKeyValuePairI26PipelineLayoutCreateInfo_t22PipelineLayoutVulkan_tEC4Ev */
	class PipelineLayoutVulkan_t & GetValue(class CUtlKeyValuePair<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t> *); /* linkage=_ZN16CUtlKeyValuePairI26PipelineLayoutCreateInfo_t22PipelineLayoutVulkan_tE8GetValueEv */
	const class PipelineLayoutVulkan_t  & GetValue(const class CUtlKeyValuePair<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>  *); /* linkage=_ZNK16CUtlKeyValuePairI26PipelineLayoutCreateInfo_t22PipelineLayoutVulkan_tE8GetValueEv */
	void CUtlKeyValuePair<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>(class CUtlKeyValuePair<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t> *, const class PipelineLayoutCreateInfo_t  &, const class PipelineLayoutVulkan_t  &); /* linkage=_ZN16CUtlKeyValuePairI26PipelineLayoutCreateInfo_t22PipelineLayoutVulkan_tEC4IS0_S1_EERKT_RKT0_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t> *); /* linkage=_ZN16CUtlKeyValuePairI26PipelineLayoutCreateInfo_t22PipelineLayoutVulkan_tED4Ev */
};

// <0094639B> ../public/tier0/utlcommon.h:51
// member functions: 23
// member variables: 2
// class size: 24
class CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t> {
	long long unsigned int m_key; /* 0 8 */
	RefCountedShaderFile_t m_value; /* 8 16 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>* );
	/* ../public/tier0/utlcommon.h:66 */
	RefCountedShaderFile_t& GetValue(CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>* );
	/* ../public/tier0/utlcommon.h:67 */
	const RefCountedShaderFile_t& GetValue(const CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef struct RefCountedShaderFile_t ValueReturn_t;
	void CUtlKeyValuePair(class CUtlKeyValuePair<long long unsigned int, char const*> *); /* linkage=_ZN16CUtlKeyValuePairIyPKcEC4Ev */
	const char  * & GetValue(class CUtlKeyValuePair<long long unsigned int, char const*> *); /* linkage=_ZN16CUtlKeyValuePairIyPKcE8GetValueEv */
	const char  * const & GetValue(const class CUtlKeyValuePair<long long unsigned int, char const*>  *); /* linkage=_ZNK16CUtlKeyValuePairIyPKcE8GetValueEv */
	void CUtlKeyValuePair<long long unsigned int, char const*>(class CUtlKeyValuePair<long long unsigned int, char const*> *, const long long unsigned int  &, const char  * const &); /* linkage=_ZN16CUtlKeyValuePairIyPKcEC4IyS1_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<long unsigned int, const CShaderVulkanBase*> *); /* linkage=_ZN16CUtlKeyValuePairImPK17CShaderVulkanBaseEC4Ev */
	const class CShaderVulkanBase  * & GetValue(class CUtlKeyValuePair<long unsigned int, const CShaderVulkanBase*> *); /* linkage=_ZN16CUtlKeyValuePairImPK17CShaderVulkanBaseE8GetValueEv */
	const class CShaderVulkanBase  * const & GetValue(const class CUtlKeyValuePair<long unsigned int, const CShaderVulkanBase*>  *); /* linkage=_ZNK16CUtlKeyValuePairImPK17CShaderVulkanBaseE8GetValueEv */
	void CUtlKeyValuePair<long unsigned int, const CShaderVulkanBase*>(class CUtlKeyValuePair<long unsigned int, const CShaderVulkanBase*> *, const long unsigned int  &, const class CShaderVulkanBase  * const &); /* linkage=_ZN16CUtlKeyValuePairImPK17CShaderVulkanBaseEC4ImS2_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t> *); /* linkage=_ZN16CUtlKeyValuePairIyN18CShaderTableVulkan24RefCountedShaderModule_tEEC4Ev */
	class RefCountedShaderModule_t & GetValue(class CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t> *); /* linkage=_ZN16CUtlKeyValuePairIyN18CShaderTableVulkan24RefCountedShaderModule_tEE8GetValueEv */
	const class RefCountedShaderModule_t  & GetValue(const class CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIyN18CShaderTableVulkan24RefCountedShaderModule_tEE8GetValueEv */
	void CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>(class CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t> *, const long long unsigned int  &, const class RefCountedShaderModule_t  &); /* linkage=_ZN16CUtlKeyValuePairIyN18CShaderTableVulkan24RefCountedShaderModule_tEEC4IyS1_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t> *); /* linkage=_ZN16CUtlKeyValuePairIyN18CShaderTableVulkan22RefCountedShaderFile_tEEC4Ev */
	class RefCountedShaderFile_t & GetValue(class CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t> *); /* linkage=_ZN16CUtlKeyValuePairIyN18CShaderTableVulkan22RefCountedShaderFile_tEE8GetValueEv */
	const class RefCountedShaderFile_t  & GetValue(const class CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIyN18CShaderTableVulkan22RefCountedShaderFile_tEE8GetValueEv */
	void CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>(class CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t> *, const long long unsigned int  &, const class RefCountedShaderFile_t  &); /* linkage=_ZN16CUtlKeyValuePairIyN18CShaderTableVulkan22RefCountedShaderFile_tEEC4IyS1_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<long long unsigned int, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIy7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<long long unsigned int, empty_t> *, const long long unsigned int  &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIy7empty_tEC4ERKyRKS0_ */
	const long long unsigned int  & GetValue(const class CUtlKeyValuePair<long long unsigned int, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIy7empty_tE8GetValueEv */
	void CUtlKeyValuePair<long long unsigned int>(class CUtlKeyValuePair<long long unsigned int, empty_t> *, const long long unsigned int  &); /* linkage=_ZN16CUtlKeyValuePairIy7empty_tEC4IyEERKT_ */
};

// <00961AF6> ../public/tier0/utlcommon.h:51
// member functions: 4
// member variables: 2
// class size: 24
class CUtlKeyValuePair<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan*> {
	RenderInputLayoutDesc_t m_key; /* 0 16 */
	CInputLayoutVulkan * m_value; /* 16 8 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan*>* );
	/* ../public/tier0/utlcommon.h:66 */
	CInputLayoutVulkan* & GetValue(CUtlKeyValuePair<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan*>* );
	/* ../public/tier0/utlcommon.h:67 */
	CInputLayoutVulkan* const& GetValue(const CUtlKeyValuePair<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan*>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef class CInputLayoutVulkan * ValueReturn_t;
	/* ../public/tier0/utlcommon.h:64 */
	void CUtlKeyValuePair<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan*>(CUtlKeyValuePair<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan*>* , const RenderInputLayoutDesc_t& , CInputLayoutVulkan* const& );
};

// <0096CC7C> ../public/tier0/utlcommon.h:51
// member functions: 20
// member variables: 2
// class size: 16
class CUtlKeyValuePair<CUtlStringToken, RenderDescriptorSetHandle_t__*> {
	CUtlStringToken m_key; /* 0 4 */
	RenderDescriptorSetHandle_t__ * m_value; /* 8 8 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<CUtlStringToken, RenderDescriptorSetHandle_t__*>* );
	/* ../public/tier0/utlcommon.h:66 */
	RenderDescriptorSetHandle_t__* & GetValue(CUtlKeyValuePair<CUtlStringToken, RenderDescriptorSetHandle_t__*>* );
	/* ../public/tier0/utlcommon.h:67 */
	RenderDescriptorSetHandle_t__* const& GetValue(const CUtlKeyValuePair<CUtlStringToken, RenderDescriptorSetHandle_t__*>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef class RenderDescriptorSetHandle_t__ * ValueReturn_t;
	/* ../public/tier0/utlcommon.h:64 */
	void CUtlKeyValuePair<CUtlStringToken, RenderDescriptorSetHandle_t__*>(CUtlKeyValuePair<CUtlStringToken, RenderDescriptorSetHandle_t__*>* , const CUtlStringToken& , RenderDescriptorSetHandle_t__* const& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlStringToken, int> *); /* linkage=_ZN16CUtlKeyValuePairI15CUtlStringTokeniEC4Ev */
	int & GetValue(class CUtlKeyValuePair<CUtlStringToken, int> *); /* linkage=_ZN16CUtlKeyValuePairI15CUtlStringTokeniE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<CUtlStringToken, int>  *); /* linkage=_ZNK16CUtlKeyValuePairI15CUtlStringTokeniE8GetValueEv */
	void CUtlKeyValuePair<CUtlStringToken, int>(class CUtlKeyValuePair<CUtlStringToken, int> *, const class CUtlStringToken  &, const int  &); /* linkage=_ZN16CUtlKeyValuePairI15CUtlStringTokeniEC4IS0_iEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlStringToken, RenderDescriptorSetHandle_t__*> *); /* linkage=_ZN16CUtlKeyValuePairI15CUtlStringTokenP29RenderDescriptorSetHandle_t__EC4Ev */
	class RenderDescriptorSetHandle_t__ * & GetValue(class CUtlKeyValuePair<CUtlStringToken, RenderDescriptorSetHandle_t__*> *); /* linkage=_ZN16CUtlKeyValuePairI15CUtlStringTokenP29RenderDescriptorSetHandle_t__E8GetValueEv */
	class RenderDescriptorSetHandle_t__ * const & GetValue(const class CUtlKeyValuePair<CUtlStringToken, RenderDescriptorSetHandle_t__*>  *); /* linkage=_ZNK16CUtlKeyValuePairI15CUtlStringTokenP29RenderDescriptorSetHandle_t__E8GetValueEv */
	void CUtlKeyValuePair<CUtlStringToken, RenderDescriptorSetHandle_t__*>(class CUtlKeyValuePair<CUtlStringToken, RenderDescriptorSetHandle_t__*> *, const class CUtlStringToken  &, class RenderDescriptorSetHandle_t__ * const &); /* linkage=_ZN16CUtlKeyValuePairI15CUtlStringTokenP29RenderDescriptorSetHandle_t__EC4IS0_S2_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlStringToken, CUtlStringToken> *); /* linkage=_ZN16CUtlKeyValuePairI15CUtlStringTokenS0_EC4Ev */
	class CUtlStringToken & GetValue(class CUtlKeyValuePair<CUtlStringToken, CUtlStringToken> *); /* linkage=_ZN16CUtlKeyValuePairI15CUtlStringTokenS0_E8GetValueEv */
	const class CUtlStringToken  & GetValue(const class CUtlKeyValuePair<CUtlStringToken, CUtlStringToken>  *); /* linkage=_ZNK16CUtlKeyValuePairI15CUtlStringTokenS0_E8GetValueEv */
	void CUtlKeyValuePair<CUtlStringToken, CUtlStringToken>(class CUtlKeyValuePair<CUtlStringToken, CUtlStringToken> *, const class CUtlStringToken  &, const class CUtlStringToken  &); /* linkage=_ZN16CUtlKeyValuePairI15CUtlStringTokenS0_EC4IS0_S0_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> > *); /* linkage=_ZN16CUtlKeyValuePairI15CUtlStringToken11CWeakHandleI30InfoForResourceTypeCEntityLumpEEC4Ev */
	class CWeakHandle<InfoForResourceTypeCEntityLump> & GetValue(class CUtlKeyValuePair<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> > *); /* linkage=_ZN16CUtlKeyValuePairI15CUtlStringToken11CWeakHandleI30InfoForResourceTypeCEntityLumpEE8GetValueEv */
	const class CWeakHandle<InfoForResourceTypeCEntityLump>  & GetValue(const class CUtlKeyValuePair<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> >  *); /* linkage=_ZNK16CUtlKeyValuePairI15CUtlStringToken11CWeakHandleI30InfoForResourceTypeCEntityLumpEE8GetValueEv */
	void CUtlKeyValuePair<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> >(class CUtlKeyValuePair<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> > *, const class CUtlStringToken  &, const class CWeakHandle<InfoForResourceTypeCEntityLump>  &); /* linkage=_ZN16CUtlKeyValuePairI15CUtlStringToken11CWeakHandleI30InfoForResourceTypeCEntityLumpEEC4IS0_S3_EERKT_RKT0_ */
};

// <00BB02D6> ../public/tier0/utlcommon.h:51
// member functions: 24
// member variables: 2
// class size: 24
class CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t> {
	long long unsigned int m_key; /* 0 8 */
	RefCountedShaderModule_t m_value; /* 8 16 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>* );
	/* ../public/tier0/utlcommon.h:66 */
	RefCountedShaderModule_t& GetValue(CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>* );
	/* ../public/tier0/utlcommon.h:67 */
	const RefCountedShaderModule_t& GetValue(const CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef struct RefCountedShaderModule_t ValueReturn_t;
	/* ../public/tier0/utlcommon.h:64 */
	void CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>(CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>* , const long long unsigned int& , const RefCountedShaderModule_t& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<long long unsigned int, char const*> *); /* linkage=_ZN16CUtlKeyValuePairIyPKcEC4Ev */
	const char  * & GetValue(class CUtlKeyValuePair<long long unsigned int, char const*> *); /* linkage=_ZN16CUtlKeyValuePairIyPKcE8GetValueEv */
	const char  * const & GetValue(const class CUtlKeyValuePair<long long unsigned int, char const*>  *); /* linkage=_ZNK16CUtlKeyValuePairIyPKcE8GetValueEv */
	void CUtlKeyValuePair<long long unsigned int, char const*>(class CUtlKeyValuePair<long long unsigned int, char const*> *, const long long unsigned int  &, const char  * const &); /* linkage=_ZN16CUtlKeyValuePairIyPKcEC4IyS1_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<long unsigned int, const CShaderVulkanBase*> *); /* linkage=_ZN16CUtlKeyValuePairImPK17CShaderVulkanBaseEC4Ev */
	const class CShaderVulkanBase  * & GetValue(class CUtlKeyValuePair<long unsigned int, const CShaderVulkanBase*> *); /* linkage=_ZN16CUtlKeyValuePairImPK17CShaderVulkanBaseE8GetValueEv */
	const class CShaderVulkanBase  * const & GetValue(const class CUtlKeyValuePair<long unsigned int, const CShaderVulkanBase*>  *); /* linkage=_ZNK16CUtlKeyValuePairImPK17CShaderVulkanBaseE8GetValueEv */
	void CUtlKeyValuePair<long unsigned int, const CShaderVulkanBase*>(class CUtlKeyValuePair<long unsigned int, const CShaderVulkanBase*> *, const long unsigned int  &, const class CShaderVulkanBase  * const &); /* linkage=_ZN16CUtlKeyValuePairImPK17CShaderVulkanBaseEC4ImS2_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t> *); /* linkage=_ZN16CUtlKeyValuePairIyN18CShaderTableVulkan24RefCountedShaderModule_tEEC4Ev */
	class RefCountedShaderModule_t & GetValue(class CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t> *); /* linkage=_ZN16CUtlKeyValuePairIyN18CShaderTableVulkan24RefCountedShaderModule_tEE8GetValueEv */
	const class RefCountedShaderModule_t  & GetValue(const class CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIyN18CShaderTableVulkan24RefCountedShaderModule_tEE8GetValueEv */
	void CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>(class CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t> *, const long long unsigned int  &, const class RefCountedShaderModule_t  &); /* linkage=_ZN16CUtlKeyValuePairIyN18CShaderTableVulkan24RefCountedShaderModule_tEEC4IyS1_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t> *); /* linkage=_ZN16CUtlKeyValuePairIyN18CShaderTableVulkan22RefCountedShaderFile_tEEC4Ev */
	class RefCountedShaderFile_t & GetValue(class CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t> *); /* linkage=_ZN16CUtlKeyValuePairIyN18CShaderTableVulkan22RefCountedShaderFile_tEE8GetValueEv */
	const class RefCountedShaderFile_t  & GetValue(const class CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIyN18CShaderTableVulkan22RefCountedShaderFile_tEE8GetValueEv */
	void CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>(class CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t> *, const long long unsigned int  &, const class RefCountedShaderFile_t  &); /* linkage=_ZN16CUtlKeyValuePairIyN18CShaderTableVulkan22RefCountedShaderFile_tEEC4IyS1_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<long long unsigned int, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIy7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<long long unsigned int, empty_t> *, const long long unsigned int  &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIy7empty_tEC4ERKyRKS0_ */
	const long long unsigned int  & GetValue(const class CUtlKeyValuePair<long long unsigned int, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIy7empty_tE8GetValueEv */
	void CUtlKeyValuePair<long long unsigned int>(class CUtlKeyValuePair<long long unsigned int, empty_t> *, const long long unsigned int  &); /* linkage=_ZN16CUtlKeyValuePairIy7empty_tEC4IyEERKT_ */
};

// <00219527> ../../public/tier0/utlcommon.h:51
// member functions: 40
// member variables: 2
// class size: 8
class CUtlKeyValuePair<unsigned int, int> {
	unsigned int m_key; /* 0 4 */
	int m_value; /* 4 4 */
	/* ../../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<unsigned int, int>* );
	/* ../../public/tier0/utlcommon.h:66 */
	int& GetValue(CUtlKeyValuePair<unsigned int, int>* );
	/* ../../public/tier0/utlcommon.h:67 */
	const int& GetValue(const CUtlKeyValuePair<unsigned int, int>* );
	/* ../../public/tier0/utlcommon.h:54 */
	typedef int ValueReturn_t;
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, int> *); /* linkage=_ZN16CUtlKeyValuePairIjiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<unsigned int, int> *); /* linkage=_ZN16CUtlKeyValuePairIjiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<unsigned int, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIjiE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, int>(class CUtlKeyValuePair<unsigned int, int> *, const unsigned int  &, const int  &); /* linkage=_ZN16CUtlKeyValuePairIjiEC4IjiEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIj7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, empty_t> *, const unsigned int  &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIj7empty_tEC4ERKjRKS0_ */
	const unsigned int  & GetValue(const class CUtlKeyValuePair<unsigned int, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIj7empty_tE8GetValueEv */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*> *); /* linkage=_ZN16CUtlKeyValuePairIjPN16CKeyValuesSystem18SharedStringData_tEEC4Ev */
	class SharedStringData_t * & GetValue(class CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*> *); /* linkage=_ZN16CUtlKeyValuePairIjPN16CKeyValuesSystem18SharedStringData_tEE8GetValueEv */
	class SharedStringData_t * const & GetValue(const class CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*>  *); /* linkage=_ZNK16CUtlKeyValuePairIjPN16CKeyValuesSystem18SharedStringData_tEE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*>(class CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*> *, const unsigned int  &, class SharedStringData_t * const &); /* linkage=_ZN16CUtlKeyValuePairIjPN16CKeyValuesSystem18SharedStringData_tEEC4IjS2_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*> *); /* linkage=_ZN16CUtlKeyValuePairIjPK17CResourceDiskEnumEC4Ev */
	const class CResourceDiskEnum  * & GetValue(class CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*> *); /* linkage=_ZN16CUtlKeyValuePairIjPK17CResourceDiskEnumE8GetValueEv */
	const class CResourceDiskEnum  * const & GetValue(const class CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*>  *); /* linkage=_ZNK16CUtlKeyValuePairIjPK17CResourceDiskEnumE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*>(class CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*> *, const unsigned int  &, const class CResourceDiskEnum  * const &); /* linkage=_ZN16CUtlKeyValuePairIjPK17CResourceDiskEnumEC4IjS2_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*> *); /* linkage=_ZN16CUtlKeyValuePairIjPK19CResourceDiskStructEC4Ev */
	const class CResourceDiskStruct  * & GetValue(class CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*> *); /* linkage=_ZN16CUtlKeyValuePairIjPK19CResourceDiskStructE8GetValueEv */
	const class CResourceDiskStruct  * const & GetValue(const class CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*>  *); /* linkage=_ZNK16CUtlKeyValuePairIjPK19CResourceDiskStructE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*>(class CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*> *, const unsigned int  &, const class CResourceDiskStruct  * const &); /* linkage=_ZN16CUtlKeyValuePairIjPK19CResourceDiskStructEC4IjS2_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, short unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIjtEC4Ev */
	short unsigned int & GetValue(class CUtlKeyValuePair<unsigned int, short unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIjtE8GetValueEv */
	const short unsigned int  & GetValue(const class CUtlKeyValuePair<unsigned int, short unsigned int>  *); /* linkage=_ZNK16CUtlKeyValuePairIjtE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, short unsigned int>(class CUtlKeyValuePair<unsigned int, short unsigned int> *, const unsigned int  &, const short unsigned int  &); /* linkage=_ZN16CUtlKeyValuePairIjtEC4IjtEERKT_RKT0_ */
	void CUtlKeyValuePair<unsigned int>(class CUtlKeyValuePair<unsigned int, empty_t> *, const unsigned int  &); /* linkage=_ZN16CUtlKeyValuePairIj7empty_tEC4IjEERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry> *); /* linkage=_ZN16CUtlKeyValuePairIjN18CVSoundTypeManager12SfxDictEntryEEC4Ev */
	class SfxDictEntry & GetValue(class CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry> *); /* linkage=_ZN16CUtlKeyValuePairIjN18CVSoundTypeManager12SfxDictEntryEE8GetValueEv */
	const class SfxDictEntry  & GetValue(const class CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry>  *); /* linkage=_ZNK16CUtlKeyValuePairIjN18CVSoundTypeManager12SfxDictEntryEE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry>(class CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry> *, const unsigned int  &, const class SfxDictEntry  &); /* linkage=_ZN16CUtlKeyValuePairIjN18CVSoundTypeManager12SfxDictEntryEEC4IjS1_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t> *); /* linkage=_ZN16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEEC4Ev */
	class FrameBufferScratchTexInfo_t & GetValue(class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t> *); /* linkage=_ZN16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEE8GetValueEv */
	const class FrameBufferScratchTexInfo_t  & GetValue(const class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEE8GetValueEv */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t> *); /* linkage=_ZN16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEED4Ev */
	void CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t>(class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t> *, const unsigned int  &, const class FrameBufferScratchTexInfo_t  &); /* linkage=_ZN16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEEC4IjS1_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t> *); /* linkage=_ZN16CUtlKeyValuePairIj28CAnimationDecodeCacheEntry_tEC4Ev */
	class CAnimationDecodeCacheEntry_t & GetValue(class CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t> *); /* linkage=_ZN16CUtlKeyValuePairIj28CAnimationDecodeCacheEntry_tE8GetValueEv */
	const class CAnimationDecodeCacheEntry_t  & GetValue(const class CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIj28CAnimationDecodeCacheEntry_tE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t>(class CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t> *, const unsigned int  &, const class CAnimationDecodeCacheEntry_t  &); /* linkage=_ZN16CUtlKeyValuePairIj28CAnimationDecodeCacheEntry_tEC4IjS0_EERKT_RKT0_ */
};

// <00275D0A> ../../public/tier0/utlcommon.h:51
// member functions: 24
// member variables: 2
// class size: 24
class CUtlKeyValuePair<CUtlString, CBufferString> {
	CUtlString m_key; /* 0 8 */
	CBufferString m_value; /* 8 16 */
	/* ../../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<CUtlString, CBufferString>* );
	/* ../../public/tier0/utlcommon.h:66 */
	CBufferString& GetValue(CUtlKeyValuePair<CUtlString, CBufferString>* );
	/* ../../public/tier0/utlcommon.h:67 */
	const CBufferString& GetValue(const CUtlKeyValuePair<CUtlString, CBufferString>* );
	/* ../../public/tier0/utlcommon.h:54 */
	typedef struct CBufferString ValueReturn_t;
	void ~CUtlKeyValuePair(CUtlKeyValuePair<CUtlString, CBufferString>* );
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, CBufferString> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString13CBufferStringEC4Ev */
	class CBufferString & GetValue(class CUtlKeyValuePair<CUtlString, CBufferString> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString13CBufferStringE8GetValueEv */
	const class CBufferString  & GetValue(const class CUtlKeyValuePair<CUtlString, CBufferString>  *); /* linkage=_ZNK16CUtlKeyValuePairI10CUtlString13CBufferStringE8GetValueEv */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, CBufferString> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString13CBufferStringED4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, empty_t> *, const class CUtlString  &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString7empty_tEC4ERKS0_RKS1_ */
	const class CUtlString  & GetValue(const class CUtlKeyValuePair<CUtlString, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairI10CUtlString7empty_tE8GetValueEv */
	void CUtlKeyValuePair<CUtlString>(class CUtlKeyValuePair<CUtlString, empty_t> *, const class CUtlString  &); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString7empty_tEC4IS0_EERKT_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString7empty_tED4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, int> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlStringiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<CUtlString, int> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlStringiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<CUtlString, int>  *); /* linkage=_ZNK16CUtlKeyValuePairI10CUtlStringiE8GetValueEv */
	void CUtlKeyValuePair<CUtlString, int>(class CUtlKeyValuePair<CUtlString, int> *, const class CUtlString  &, const int  &); /* linkage=_ZN16CUtlKeyValuePairI10CUtlStringiEC4IS0_iEERKT_RKT0_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, int> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlStringiED4Ev */
	void CUtlKeyValuePair<CUtlString>(class CUtlKeyValuePair<CUtlString, int> *, const class CUtlString  &); /* linkage=_ZN16CUtlKeyValuePairI10CUtlStringiEC4IS0_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString9CSmartPtrI9CSubGraph17CRefCountAccessorEEC4Ev */
	class CSmartPtr<CSubGraph, CRefCountAccessor> & GetValue(class CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString9CSmartPtrI9CSubGraph17CRefCountAccessorEE8GetValueEv */
	const class CSmartPtr<CSubGraph, CRefCountAccessor>  & GetValue(const class CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> >  *); /* linkage=_ZNK16CUtlKeyValuePairI10CUtlString9CSmartPtrI9CSubGraph17CRefCountAccessorEE8GetValueEv */
	void CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph> >(class CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> > *, const class CUtlString  &, const class CSmartPtr<CSubGraph, CRefCountAccessor>  &); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString9CSmartPtrI9CSubGraph17CRefCountAccessorEEC4IS0_S4_EERKT_RKT0_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString9CSmartPtrI9CSubGraph17CRefCountAccessorEED4Ev */
};

// <00252DA4> ../public/tier0/utlcommon.h:51
// member functions: 4
// member variables: 2
// class size: 16
class CUtlKeyValuePair<CKeyValuesSystem::SharedStringData_t*, CInterlockedIntT<int, 4> > {
	SharedStringData_t * m_key; /* 0 8 */
	CInterlockedIntT<int, 4> m_value __attribute__((__aligned__(4))); /* 8 4 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<CKeyValuesSystem::SharedStringData_t*, CInterlockedIntT<int, 4> >* );
	/* ../public/tier0/utlcommon.h:66 */
	CInterlockedIntT<int, 4>& GetValue(CUtlKeyValuePair<CKeyValuesSystem::SharedStringData_t*, CInterlockedIntT<int, 4> >* );
	/* ../public/tier0/utlcommon.h:67 */
	const CInterlockedIntT<int, 4>& GetValue(const CUtlKeyValuePair<CKeyValuesSystem::SharedStringData_t*, CInterlockedIntT<int, 4> >* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef struct CInterlockedIntT<int, 4> ValueReturn_t;
	/* ../public/tier0/utlcommon.h:64 */
	void CUtlKeyValuePair<CKeyValuesSystem::SharedStringData_t*, CInterlockedIntT<int> >(CUtlKeyValuePair<CKeyValuesSystem::SharedStringData_t*, CInterlockedIntT<int, 4> >* , SharedStringData_t* const& , const CInterlockedIntT<int, 4>& );
} __attribute__((__aligned__(8)));

// <0025474E> ../public/tier0/utlcommon.h:51
// member functions: 41
// member variables: 2
// class size: 16
class CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*> {
	unsigned int m_key; /* 0 4 */
	SharedStringData_t * m_value; /* 8 8 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*>* );
	/* ../public/tier0/utlcommon.h:66 */
	SharedStringData_t* & GetValue(CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*>* );
	/* ../public/tier0/utlcommon.h:67 */
	SharedStringData_t* const& GetValue(const CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef class SharedStringData_t * ValueReturn_t;
	/* ../public/tier0/utlcommon.h:64 */
	void CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*>(CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*>* , const unsigned int& , SharedStringData_t* const& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, int> *); /* linkage=_ZN16CUtlKeyValuePairIjiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<unsigned int, int> *); /* linkage=_ZN16CUtlKeyValuePairIjiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<unsigned int, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIjiE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, int>(class CUtlKeyValuePair<unsigned int, int> *, const unsigned int  &, const int  &); /* linkage=_ZN16CUtlKeyValuePairIjiEC4IjiEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIj7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, empty_t> *, const unsigned int  &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIj7empty_tEC4ERKjRKS0_ */
	const unsigned int  & GetValue(const class CUtlKeyValuePair<unsigned int, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIj7empty_tE8GetValueEv */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*> *); /* linkage=_ZN16CUtlKeyValuePairIjPN16CKeyValuesSystem18SharedStringData_tEEC4Ev */
	class SharedStringData_t * & GetValue(class CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*> *); /* linkage=_ZN16CUtlKeyValuePairIjPN16CKeyValuesSystem18SharedStringData_tEE8GetValueEv */
	class SharedStringData_t * const & GetValue(const class CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*>  *); /* linkage=_ZNK16CUtlKeyValuePairIjPN16CKeyValuesSystem18SharedStringData_tEE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*>(class CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*> *, const unsigned int  &, class SharedStringData_t * const &); /* linkage=_ZN16CUtlKeyValuePairIjPN16CKeyValuesSystem18SharedStringData_tEEC4IjS2_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*> *); /* linkage=_ZN16CUtlKeyValuePairIjPK17CResourceDiskEnumEC4Ev */
	const class CResourceDiskEnum  * & GetValue(class CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*> *); /* linkage=_ZN16CUtlKeyValuePairIjPK17CResourceDiskEnumE8GetValueEv */
	const class CResourceDiskEnum  * const & GetValue(const class CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*>  *); /* linkage=_ZNK16CUtlKeyValuePairIjPK17CResourceDiskEnumE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*>(class CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*> *, const unsigned int  &, const class CResourceDiskEnum  * const &); /* linkage=_ZN16CUtlKeyValuePairIjPK17CResourceDiskEnumEC4IjS2_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*> *); /* linkage=_ZN16CUtlKeyValuePairIjPK19CResourceDiskStructEC4Ev */
	const class CResourceDiskStruct  * & GetValue(class CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*> *); /* linkage=_ZN16CUtlKeyValuePairIjPK19CResourceDiskStructE8GetValueEv */
	const class CResourceDiskStruct  * const & GetValue(const class CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*>  *); /* linkage=_ZNK16CUtlKeyValuePairIjPK19CResourceDiskStructE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*>(class CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*> *, const unsigned int  &, const class CResourceDiskStruct  * const &); /* linkage=_ZN16CUtlKeyValuePairIjPK19CResourceDiskStructEC4IjS2_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, short unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIjtEC4Ev */
	short unsigned int & GetValue(class CUtlKeyValuePair<unsigned int, short unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIjtE8GetValueEv */
	const short unsigned int  & GetValue(const class CUtlKeyValuePair<unsigned int, short unsigned int>  *); /* linkage=_ZNK16CUtlKeyValuePairIjtE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, short unsigned int>(class CUtlKeyValuePair<unsigned int, short unsigned int> *, const unsigned int  &, const short unsigned int  &); /* linkage=_ZN16CUtlKeyValuePairIjtEC4IjtEERKT_RKT0_ */
	void CUtlKeyValuePair<unsigned int>(class CUtlKeyValuePair<unsigned int, empty_t> *, const unsigned int  &); /* linkage=_ZN16CUtlKeyValuePairIj7empty_tEC4IjEERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry> *); /* linkage=_ZN16CUtlKeyValuePairIjN18CVSoundTypeManager12SfxDictEntryEEC4Ev */
	class SfxDictEntry & GetValue(class CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry> *); /* linkage=_ZN16CUtlKeyValuePairIjN18CVSoundTypeManager12SfxDictEntryEE8GetValueEv */
	const class SfxDictEntry  & GetValue(const class CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry>  *); /* linkage=_ZNK16CUtlKeyValuePairIjN18CVSoundTypeManager12SfxDictEntryEE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry>(class CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry> *, const unsigned int  &, const class SfxDictEntry  &); /* linkage=_ZN16CUtlKeyValuePairIjN18CVSoundTypeManager12SfxDictEntryEEC4IjS1_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t> *); /* linkage=_ZN16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEEC4Ev */
	class FrameBufferScratchTexInfo_t & GetValue(class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t> *); /* linkage=_ZN16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEE8GetValueEv */
	const class FrameBufferScratchTexInfo_t  & GetValue(const class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEE8GetValueEv */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t> *); /* linkage=_ZN16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEED4Ev */
	void CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t>(class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t> *, const unsigned int  &, const class FrameBufferScratchTexInfo_t  &); /* linkage=_ZN16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEEC4IjS1_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t> *); /* linkage=_ZN16CUtlKeyValuePairIj28CAnimationDecodeCacheEntry_tEC4Ev */
	class CAnimationDecodeCacheEntry_t & GetValue(class CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t> *); /* linkage=_ZN16CUtlKeyValuePairIj28CAnimationDecodeCacheEntry_tE8GetValueEv */
	const class CAnimationDecodeCacheEntry_t  & GetValue(const class CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIj28CAnimationDecodeCacheEntry_tE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t>(class CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t> *, const unsigned int  &, const class CAnimationDecodeCacheEntry_t  &); /* linkage=_ZN16CUtlKeyValuePairIj28CAnimationDecodeCacheEntry_tEC4IjS0_EERKT_RKT0_ */
};

// <0056EEEB> ../public/tier0/utlcommon.h:51
// member functions: 12
// member variables: 2
// class size: 16
class CUtlKeyValuePair<char const*, int> {
	const char * m_key; /* 0 8 */
	int m_value; /* 8 4 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<char const*, int>* );
	/* ../public/tier0/utlcommon.h:66 */
	int& GetValue(CUtlKeyValuePair<char const*, int>* );
	/* ../public/tier0/utlcommon.h:67 */
	const int& GetValue(const CUtlKeyValuePair<char const*, int>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef int ValueReturn_t;
	/* ../public/tier0/utlcommon.h:64 */
	void CUtlKeyValuePair<char const*, int>(CUtlKeyValuePair<char const*, int>* , const char* const& , const int& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<char const*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPKciEC4Ev */
	int & GetValue(class CUtlKeyValuePair<char const*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPKciE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<char const*, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIPKciE8GetValueEv */
	void CUtlKeyValuePair<char const*, int>(class CUtlKeyValuePair<char const*, int> *, const char  * const &, const int  &); /* linkage=_ZN16CUtlKeyValuePairIPKciEC4IS1_iEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<char const*, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIPKc7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<char const*, empty_t> *, const char  * const &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIPKc7empty_tEC4ERKS1_RKS2_ */
	const char  * const & GetValue(const class CUtlKeyValuePair<char const*, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIPKc7empty_tE8GetValueEv */
	void CUtlKeyValuePair<char const*>(class CUtlKeyValuePair<char const*, empty_t> *, const char  * const &); /* linkage=_ZN16CUtlKeyValuePairIPKc7empty_tEC4IS1_EERKT_ */
};

// <0015687E> ../public/tier0/utlcommon.h:51
// member functions: 41
// member variables: 2
// class size: 16
class CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*> {
	unsigned int m_key; /* 0 4 */
	const class CResourceDiskStruct * m_value; /* 8 8 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*>* );
	/* ../public/tier0/utlcommon.h:66 */
	const CResourceDiskStruct* & GetValue(CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*>* );
	/* ../public/tier0/utlcommon.h:67 */
	const CResourceDiskStruct* const& GetValue(const CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef const class CResourceDiskStruct * ValueReturn_t;
	/* ../public/tier0/utlcommon.h:64 */
	void CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*>(CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*>* , const unsigned int& , const CResourceDiskStruct* const& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, int> *); /* linkage=_ZN16CUtlKeyValuePairIjiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<unsigned int, int> *); /* linkage=_ZN16CUtlKeyValuePairIjiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<unsigned int, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIjiE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, int>(class CUtlKeyValuePair<unsigned int, int> *, const unsigned int  &, const int  &); /* linkage=_ZN16CUtlKeyValuePairIjiEC4IjiEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIj7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, empty_t> *, const unsigned int  &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIj7empty_tEC4ERKjRKS0_ */
	const unsigned int  & GetValue(const class CUtlKeyValuePair<unsigned int, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIj7empty_tE8GetValueEv */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*> *); /* linkage=_ZN16CUtlKeyValuePairIjPN16CKeyValuesSystem18SharedStringData_tEEC4Ev */
	class SharedStringData_t * & GetValue(class CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*> *); /* linkage=_ZN16CUtlKeyValuePairIjPN16CKeyValuesSystem18SharedStringData_tEE8GetValueEv */
	class SharedStringData_t * const & GetValue(const class CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*>  *); /* linkage=_ZNK16CUtlKeyValuePairIjPN16CKeyValuesSystem18SharedStringData_tEE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*>(class CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*> *, const unsigned int  &, class SharedStringData_t * const &); /* linkage=_ZN16CUtlKeyValuePairIjPN16CKeyValuesSystem18SharedStringData_tEEC4IjS2_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*> *); /* linkage=_ZN16CUtlKeyValuePairIjPK17CResourceDiskEnumEC4Ev */
	const class CResourceDiskEnum  * & GetValue(class CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*> *); /* linkage=_ZN16CUtlKeyValuePairIjPK17CResourceDiskEnumE8GetValueEv */
	const class CResourceDiskEnum  * const & GetValue(const class CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*>  *); /* linkage=_ZNK16CUtlKeyValuePairIjPK17CResourceDiskEnumE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*>(class CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*> *, const unsigned int  &, const class CResourceDiskEnum  * const &); /* linkage=_ZN16CUtlKeyValuePairIjPK17CResourceDiskEnumEC4IjS2_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*> *); /* linkage=_ZN16CUtlKeyValuePairIjPK19CResourceDiskStructEC4Ev */
	const class CResourceDiskStruct  * & GetValue(class CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*> *); /* linkage=_ZN16CUtlKeyValuePairIjPK19CResourceDiskStructE8GetValueEv */
	const class CResourceDiskStruct  * const & GetValue(const class CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*>  *); /* linkage=_ZNK16CUtlKeyValuePairIjPK19CResourceDiskStructE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*>(class CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*> *, const unsigned int  &, const class CResourceDiskStruct  * const &); /* linkage=_ZN16CUtlKeyValuePairIjPK19CResourceDiskStructEC4IjS2_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, short unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIjtEC4Ev */
	short unsigned int & GetValue(class CUtlKeyValuePair<unsigned int, short unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIjtE8GetValueEv */
	const short unsigned int  & GetValue(const class CUtlKeyValuePair<unsigned int, short unsigned int>  *); /* linkage=_ZNK16CUtlKeyValuePairIjtE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, short unsigned int>(class CUtlKeyValuePair<unsigned int, short unsigned int> *, const unsigned int  &, const short unsigned int  &); /* linkage=_ZN16CUtlKeyValuePairIjtEC4IjtEERKT_RKT0_ */
	void CUtlKeyValuePair<unsigned int>(class CUtlKeyValuePair<unsigned int, empty_t> *, const unsigned int  &); /* linkage=_ZN16CUtlKeyValuePairIj7empty_tEC4IjEERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry> *); /* linkage=_ZN16CUtlKeyValuePairIjN18CVSoundTypeManager12SfxDictEntryEEC4Ev */
	class SfxDictEntry & GetValue(class CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry> *); /* linkage=_ZN16CUtlKeyValuePairIjN18CVSoundTypeManager12SfxDictEntryEE8GetValueEv */
	const class SfxDictEntry  & GetValue(const class CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry>  *); /* linkage=_ZNK16CUtlKeyValuePairIjN18CVSoundTypeManager12SfxDictEntryEE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry>(class CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry> *, const unsigned int  &, const class SfxDictEntry  &); /* linkage=_ZN16CUtlKeyValuePairIjN18CVSoundTypeManager12SfxDictEntryEEC4IjS1_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t> *); /* linkage=_ZN16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEEC4Ev */
	class FrameBufferScratchTexInfo_t & GetValue(class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t> *); /* linkage=_ZN16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEE8GetValueEv */
	const class FrameBufferScratchTexInfo_t  & GetValue(const class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEE8GetValueEv */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t> *); /* linkage=_ZN16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEED4Ev */
	void CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t>(class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t> *, const unsigned int  &, const class FrameBufferScratchTexInfo_t  &); /* linkage=_ZN16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEEC4IjS1_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t> *); /* linkage=_ZN16CUtlKeyValuePairIj28CAnimationDecodeCacheEntry_tEC4Ev */
	class CAnimationDecodeCacheEntry_t & GetValue(class CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t> *); /* linkage=_ZN16CUtlKeyValuePairIj28CAnimationDecodeCacheEntry_tE8GetValueEv */
	const class CAnimationDecodeCacheEntry_t  & GetValue(const class CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIj28CAnimationDecodeCacheEntry_tE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t>(class CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t> *, const unsigned int  &, const class CAnimationDecodeCacheEntry_t  &); /* linkage=_ZN16CUtlKeyValuePairIj28CAnimationDecodeCacheEntry_tEC4IjS0_EERKT_RKT0_ */
};

// <00158151> ../public/tier0/utlcommon.h:51
// member functions: 41
// member variables: 2
// class size: 16
class CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*> {
	unsigned int m_key; /* 0 4 */
	const class CResourceDiskEnum * m_value; /* 8 8 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*>* );
	/* ../public/tier0/utlcommon.h:66 */
	const CResourceDiskEnum* & GetValue(CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*>* );
	/* ../public/tier0/utlcommon.h:67 */
	const CResourceDiskEnum* const& GetValue(const CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef const class CResourceDiskEnum * ValueReturn_t;
	/* ../public/tier0/utlcommon.h:64 */
	void CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*>(CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*>* , const unsigned int& , const CResourceDiskEnum* const& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, int> *); /* linkage=_ZN16CUtlKeyValuePairIjiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<unsigned int, int> *); /* linkage=_ZN16CUtlKeyValuePairIjiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<unsigned int, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIjiE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, int>(class CUtlKeyValuePair<unsigned int, int> *, const unsigned int  &, const int  &); /* linkage=_ZN16CUtlKeyValuePairIjiEC4IjiEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIj7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, empty_t> *, const unsigned int  &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIj7empty_tEC4ERKjRKS0_ */
	const unsigned int  & GetValue(const class CUtlKeyValuePair<unsigned int, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIj7empty_tE8GetValueEv */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*> *); /* linkage=_ZN16CUtlKeyValuePairIjPN16CKeyValuesSystem18SharedStringData_tEEC4Ev */
	class SharedStringData_t * & GetValue(class CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*> *); /* linkage=_ZN16CUtlKeyValuePairIjPN16CKeyValuesSystem18SharedStringData_tEE8GetValueEv */
	class SharedStringData_t * const & GetValue(const class CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*>  *); /* linkage=_ZNK16CUtlKeyValuePairIjPN16CKeyValuesSystem18SharedStringData_tEE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*>(class CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*> *, const unsigned int  &, class SharedStringData_t * const &); /* linkage=_ZN16CUtlKeyValuePairIjPN16CKeyValuesSystem18SharedStringData_tEEC4IjS2_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*> *); /* linkage=_ZN16CUtlKeyValuePairIjPK17CResourceDiskEnumEC4Ev */
	const class CResourceDiskEnum  * & GetValue(class CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*> *); /* linkage=_ZN16CUtlKeyValuePairIjPK17CResourceDiskEnumE8GetValueEv */
	const class CResourceDiskEnum  * const & GetValue(const class CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*>  *); /* linkage=_ZNK16CUtlKeyValuePairIjPK17CResourceDiskEnumE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*>(class CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*> *, const unsigned int  &, const class CResourceDiskEnum  * const &); /* linkage=_ZN16CUtlKeyValuePairIjPK17CResourceDiskEnumEC4IjS2_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*> *); /* linkage=_ZN16CUtlKeyValuePairIjPK19CResourceDiskStructEC4Ev */
	const class CResourceDiskStruct  * & GetValue(class CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*> *); /* linkage=_ZN16CUtlKeyValuePairIjPK19CResourceDiskStructE8GetValueEv */
	const class CResourceDiskStruct  * const & GetValue(const class CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*>  *); /* linkage=_ZNK16CUtlKeyValuePairIjPK19CResourceDiskStructE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*>(class CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*> *, const unsigned int  &, const class CResourceDiskStruct  * const &); /* linkage=_ZN16CUtlKeyValuePairIjPK19CResourceDiskStructEC4IjS2_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, short unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIjtEC4Ev */
	short unsigned int & GetValue(class CUtlKeyValuePair<unsigned int, short unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIjtE8GetValueEv */
	const short unsigned int  & GetValue(const class CUtlKeyValuePair<unsigned int, short unsigned int>  *); /* linkage=_ZNK16CUtlKeyValuePairIjtE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, short unsigned int>(class CUtlKeyValuePair<unsigned int, short unsigned int> *, const unsigned int  &, const short unsigned int  &); /* linkage=_ZN16CUtlKeyValuePairIjtEC4IjtEERKT_RKT0_ */
	void CUtlKeyValuePair<unsigned int>(class CUtlKeyValuePair<unsigned int, empty_t> *, const unsigned int  &); /* linkage=_ZN16CUtlKeyValuePairIj7empty_tEC4IjEERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry> *); /* linkage=_ZN16CUtlKeyValuePairIjN18CVSoundTypeManager12SfxDictEntryEEC4Ev */
	class SfxDictEntry & GetValue(class CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry> *); /* linkage=_ZN16CUtlKeyValuePairIjN18CVSoundTypeManager12SfxDictEntryEE8GetValueEv */
	const class SfxDictEntry  & GetValue(const class CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry>  *); /* linkage=_ZNK16CUtlKeyValuePairIjN18CVSoundTypeManager12SfxDictEntryEE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry>(class CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry> *, const unsigned int  &, const class SfxDictEntry  &); /* linkage=_ZN16CUtlKeyValuePairIjN18CVSoundTypeManager12SfxDictEntryEEC4IjS1_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t> *); /* linkage=_ZN16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEEC4Ev */
	class FrameBufferScratchTexInfo_t & GetValue(class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t> *); /* linkage=_ZN16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEE8GetValueEv */
	const class FrameBufferScratchTexInfo_t  & GetValue(const class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEE8GetValueEv */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t> *); /* linkage=_ZN16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEED4Ev */
	void CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t>(class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t> *, const unsigned int  &, const class FrameBufferScratchTexInfo_t  &); /* linkage=_ZN16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEEC4IjS1_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t> *); /* linkage=_ZN16CUtlKeyValuePairIj28CAnimationDecodeCacheEntry_tEC4Ev */
	class CAnimationDecodeCacheEntry_t & GetValue(class CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t> *); /* linkage=_ZN16CUtlKeyValuePairIj28CAnimationDecodeCacheEntry_tE8GetValueEv */
	const class CAnimationDecodeCacheEntry_t  & GetValue(const class CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIj28CAnimationDecodeCacheEntry_tE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t>(class CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t> *, const unsigned int  &, const class CAnimationDecodeCacheEntry_t  &); /* linkage=_ZN16CUtlKeyValuePairIj28CAnimationDecodeCacheEntry_tEC4IjS0_EERKT_RKT0_ */
};

// <00159961> ../public/tier0/utlcommon.h:51
// member functions: 24
// member variables: 2
// class size: 16
class CUtlKeyValuePair<long long unsigned int, char const*> {
	long long unsigned int m_key; /* 0 8 */
	const char * m_value; /* 8 8 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<long long unsigned int, char const*>* );
	/* ../public/tier0/utlcommon.h:66 */
	const char* & GetValue(CUtlKeyValuePair<long long unsigned int, char const*>* );
	/* ../public/tier0/utlcommon.h:67 */
	const char* const& GetValue(const CUtlKeyValuePair<long long unsigned int, char const*>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef const char * ValueReturn_t;
	/* ../public/tier0/utlcommon.h:64 */
	void CUtlKeyValuePair<long long unsigned int, char const*>(CUtlKeyValuePair<long long unsigned int, char const*>* , const long long unsigned int& , const char* const& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<long long unsigned int, char const*> *); /* linkage=_ZN16CUtlKeyValuePairIyPKcEC4Ev */
	const char  * & GetValue(class CUtlKeyValuePair<long long unsigned int, char const*> *); /* linkage=_ZN16CUtlKeyValuePairIyPKcE8GetValueEv */
	const char  * const & GetValue(const class CUtlKeyValuePair<long long unsigned int, char const*>  *); /* linkage=_ZNK16CUtlKeyValuePairIyPKcE8GetValueEv */
	void CUtlKeyValuePair<long long unsigned int, char const*>(class CUtlKeyValuePair<long long unsigned int, char const*> *, const long long unsigned int  &, const char  * const &); /* linkage=_ZN16CUtlKeyValuePairIyPKcEC4IyS1_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<long unsigned int, const CShaderVulkanBase*> *); /* linkage=_ZN16CUtlKeyValuePairImPK17CShaderVulkanBaseEC4Ev */
	const class CShaderVulkanBase  * & GetValue(class CUtlKeyValuePair<long unsigned int, const CShaderVulkanBase*> *); /* linkage=_ZN16CUtlKeyValuePairImPK17CShaderVulkanBaseE8GetValueEv */
	const class CShaderVulkanBase  * const & GetValue(const class CUtlKeyValuePair<long unsigned int, const CShaderVulkanBase*>  *); /* linkage=_ZNK16CUtlKeyValuePairImPK17CShaderVulkanBaseE8GetValueEv */
	void CUtlKeyValuePair<long unsigned int, const CShaderVulkanBase*>(class CUtlKeyValuePair<long unsigned int, const CShaderVulkanBase*> *, const long unsigned int  &, const class CShaderVulkanBase  * const &); /* linkage=_ZN16CUtlKeyValuePairImPK17CShaderVulkanBaseEC4ImS2_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t> *); /* linkage=_ZN16CUtlKeyValuePairIyN18CShaderTableVulkan24RefCountedShaderModule_tEEC4Ev */
	class RefCountedShaderModule_t & GetValue(class CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t> *); /* linkage=_ZN16CUtlKeyValuePairIyN18CShaderTableVulkan24RefCountedShaderModule_tEE8GetValueEv */
	const class RefCountedShaderModule_t  & GetValue(const class CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIyN18CShaderTableVulkan24RefCountedShaderModule_tEE8GetValueEv */
	void CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>(class CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t> *, const long long unsigned int  &, const class RefCountedShaderModule_t  &); /* linkage=_ZN16CUtlKeyValuePairIyN18CShaderTableVulkan24RefCountedShaderModule_tEEC4IyS1_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t> *); /* linkage=_ZN16CUtlKeyValuePairIyN18CShaderTableVulkan22RefCountedShaderFile_tEEC4Ev */
	class RefCountedShaderFile_t & GetValue(class CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t> *); /* linkage=_ZN16CUtlKeyValuePairIyN18CShaderTableVulkan22RefCountedShaderFile_tEE8GetValueEv */
	const class RefCountedShaderFile_t  & GetValue(const class CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIyN18CShaderTableVulkan22RefCountedShaderFile_tEE8GetValueEv */
	void CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>(class CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t> *, const long long unsigned int  &, const class RefCountedShaderFile_t  &); /* linkage=_ZN16CUtlKeyValuePairIyN18CShaderTableVulkan22RefCountedShaderFile_tEEC4IyS1_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<long long unsigned int, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIy7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<long long unsigned int, empty_t> *, const long long unsigned int  &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIy7empty_tEC4ERKyRKS0_ */
	const long long unsigned int  & GetValue(const class CUtlKeyValuePair<long long unsigned int, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIy7empty_tE8GetValueEv */
	void CUtlKeyValuePair<long long unsigned int>(class CUtlKeyValuePair<long long unsigned int, empty_t> *, const long long unsigned int  &); /* linkage=_ZN16CUtlKeyValuePairIy7empty_tEC4IyEERKT_ */
};

// <0015B278> ../public/tier0/utlcommon.h:51
// member functions: 48
// member variables: 2
// class size: 16
class CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*> {
	const class CResourceDiskStructField * m_key; /* 0 8 */
	const class KV3ConvertSpecialFieldBehavior_t * m_value; /* 8 8 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*>* );
	/* ../public/tier0/utlcommon.h:66 */
	const KV3ConvertSpecialFieldBehavior_t* & GetValue(CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*>* );
	/* ../public/tier0/utlcommon.h:67 */
	const KV3ConvertSpecialFieldBehavior_t* const& GetValue(const CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef const class KV3ConvertSpecialFieldBehavior_t * ValueReturn_t;
	/* ../public/tier0/utlcommon.h:64 */
	void CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*>(CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*>* , const CResourceDiskStructField* const& , const KV3ConvertSpecialFieldBehavior_t* const& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*> *); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructFieldPK32KV3ConvertSpecialFieldBehavior_tEC4Ev */
	const class KV3ConvertSpecialFieldBehavior_t  * & GetValue(class CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*> *); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructFieldPK32KV3ConvertSpecialFieldBehavior_tE8GetValueEv */
	const class KV3ConvertSpecialFieldBehavior_t  * const & GetValue(const class CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK24CResourceDiskStructFieldPK32KV3ConvertSpecialFieldBehavior_tE8GetValueEv */
	void CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*>(class CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*> *, const class CResourceDiskStructField  * const &, const class KV3ConvertSpecialFieldBehavior_t  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructFieldPK32KV3ConvertSpecialFieldBehavior_tEC4IS2_S5_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CResourceDiskStructField*, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructField7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CResourceDiskStructField*, empty_t> *, const class CResourceDiskStructField  * const &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructField7empty_tEC4ERKS2_RKS3_ */
	const class CResourceDiskStructField  * const & GetValue(const class CUtlKeyValuePair<const CResourceDiskStructField*, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK24CResourceDiskStructField7empty_tE8GetValueEv */
	void CUtlKeyValuePair<const CResourceDiskStructField*>(class CUtlKeyValuePair<const CResourceDiskStructField*, empty_t> *, const class CResourceDiskStructField  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructField7empty_tEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_t7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t> *, const class ResourceBindingBase_t  * const &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_t7empty_tEC4ERKS2_RKS3_ */
	const class ResourceBindingBase_t  * const & GetValue(const class CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK21ResourceBindingBase_t7empty_tE8GetValueEv */
	void CUtlKeyValuePair<const ResourceBindingBase_t*>(class CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t> *, const class ResourceBindingBase_t  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_t7empty_tEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_tjEC4Ev */
	unsigned int & GetValue(class CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_tjE8GetValueEv */
	const unsigned int  & GetValue(const class CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK21ResourceBindingBase_tjE8GetValueEv */
	void CUtlKeyValuePair<const ResourceBindingBase_t*>(class CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int> *, const class ResourceBindingBase_t  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_tjEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CEnvMapSceneObject*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK18CEnvMapSceneObjectiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<const CEnvMapSceneObject*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK18CEnvMapSceneObjectiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<const CEnvMapSceneObject*, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK18CEnvMapSceneObjectiE8GetValueEv */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const IMaterial2*, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIPK10IMaterial27empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const IMaterial2*, empty_t> *, const class IMaterial2  * const &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIPK10IMaterial27empty_tEC4ERKS2_RKS3_ */
	const class IMaterial2  * const & GetValue(const class CUtlKeyValuePair<const IMaterial2*, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK10IMaterial27empty_tE8GetValueEv */
	void CUtlKeyValuePair<const IMaterial2*>(class CUtlKeyValuePair<const IMaterial2*, empty_t> *, const class IMaterial2  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK10IMaterial27empty_tEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const qhVertex*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<const qhVertex*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<const qhVertex*, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK8qhVertexiE8GetValueEv */
	void CUtlKeyValuePair<const qhVertex*, int>(class CUtlKeyValuePair<const qhVertex*, int> *, const class qhVertex  * const &, const int  &); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexiEC4IS2_iEERKT_RKT0_ */
	void CUtlKeyValuePair<const qhVertex*>(class CUtlKeyValuePair<const qhVertex*, int> *, const class qhVertex  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexiEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const qhFace*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK6qhFaceiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<const qhFace*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK6qhFaceiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<const qhFace*, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK6qhFaceiE8GetValueEv */
	void CUtlKeyValuePair<const qhFace*, int>(class CUtlKeyValuePair<const qhFace*, int> *, const class qhFace  * const &, const int  &); /* linkage=_ZN16CUtlKeyValuePairIPK6qhFaceiEC4IS2_iEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIF); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEEC4Ev */
	class ComponentHandleWithListPointer_t & GetValue(class CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIF); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEE8GetValueEv */
	const class ComponentHandleWithListPointer_t  & GetValue(const class CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, ); /* linkage=_ZNK16CUtlKeyValuePairIPK8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEE8GetValueEv */
	void CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>(class CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIF, const class qhVertex  * const &, const class ComponentHandleWithListPointer_t  &); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEEC4IS2_SB_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus> *); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase13CStrideStatusEC4Ev */
	class CStrideStatus & GetValue(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus> *); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase13CStrideStatusE8GetValueEv */
	const class CStrideStatus  & GetValue(const class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK19CAnimUpdateNodeBase13CStrideStatusE8GetValueEv */
	void CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus>(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus> *, const class CAnimUpdateNodeBase  * const &, const class CStrideStatus  &); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase13CStrideStatusEC4IS2_S3_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion> *); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase11CRootMotionEC4Ev */
	class CRootMotion & GetValue(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion> *); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase11CRootMotionE8GetValueEv */
	const class CRootMotion  & GetValue(const class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK19CAnimUpdateNodeBase11CRootMotionE8GetValueEv */
	void CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion>(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion> *, const class CAnimUpdateNodeBase  * const &, const class CRootMotion  &); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase11CRootMotionEC4IS2_S3_EERKT_RKT0_ */
};

// <002AA1B3> ../public/tier0/utlcommon.h:51
// member functions: 16
// member variables: 2
// class size: 16
class CUtlKeyValuePair<ResourceId_t, int> {
	ResourceId_t m_key; /* 0 8 */
	int m_value; /* 8 4 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<ResourceId_t, int>* );
	/* ../public/tier0/utlcommon.h:66 */
	int& GetValue(CUtlKeyValuePair<ResourceId_t, int>* );
	/* ../public/tier0/utlcommon.h:67 */
	const int& GetValue(const CUtlKeyValuePair<ResourceId_t, int>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef int ValueReturn_t;
	/* ../public/tier0/utlcommon.h:64 */
	void CUtlKeyValuePair<ResourceId_t, int>(CUtlKeyValuePair<ResourceId_t, int>* , const ResourceId_t& , const int& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<ResourceId_t, int> *); /* linkage=_ZN16CUtlKeyValuePairI12ResourceId_tiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<ResourceId_t, int> *); /* linkage=_ZN16CUtlKeyValuePairI12ResourceId_tiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<ResourceId_t, int>  *); /* linkage=_ZNK16CUtlKeyValuePairI12ResourceId_tiE8GetValueEv */
	void CUtlKeyValuePair<ResourceId_t, int>(class CUtlKeyValuePair<ResourceId_t, int> *, const class ResourceId_t  &, const int  &); /* linkage=_ZN16CUtlKeyValuePairI12ResourceId_tiEC4IS0_iEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<ResourceId_t, CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> >); /* linkage=_ZN16CUtlKeyValuePairI12ResourceId_tP10CUtlVectorIP28IGenericDataResourceListener10CUtlMemoryIS3_iEEEC4Ev */
	class CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> > * & GetValue(class CUtlKeyValuePair<ResourceId_t, CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> >); /* linkage=_ZN16CUtlKeyValuePairI12ResourceId_tP10CUtlVectorIP28IGenericDataResourceListener10CUtlMemoryIS3_iEEE8GetValueEv */
	class CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> > * const & GetValue(const class CUtlKeyValuePair<ResourceId_t, CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, ); /* linkage=_ZNK16CUtlKeyValuePairI12ResourceId_tP10CUtlVectorIP28IGenericDataResourceListener10CUtlMemoryIS3_iEEE8GetValueEv */
	void CUtlKeyValuePair<ResourceId_t, CUtlVector<IGenericDataResourceListener*>*>(class CUtlKeyValuePair<ResourceId_t, CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> >, const class ResourceId_t  &, class CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> > * const &); /* linkage=_ZN16CUtlKeyValuePairI12ResourceId_tP10CUtlVectorIP28IGenericDataResourceListener10CUtlMemoryIS3_iEEEC4IS0_S7_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<ResourceId_t, const ResourceBindingBase_t*> *); /* linkage=_ZN16CUtlKeyValuePairI12ResourceId_tPK21ResourceBindingBase_tEC4Ev */
	const class ResourceBindingBase_t  * & GetValue(class CUtlKeyValuePair<ResourceId_t, const ResourceBindingBase_t*> *); /* linkage=_ZN16CUtlKeyValuePairI12ResourceId_tPK21ResourceBindingBase_tE8GetValueEv */
	const class ResourceBindingBase_t  * const & GetValue(const class CUtlKeyValuePair<ResourceId_t, const ResourceBindingBase_t*>  *); /* linkage=_ZNK16CUtlKeyValuePairI12ResourceId_tPK21ResourceBindingBase_tE8GetValueEv */
	void CUtlKeyValuePair<ResourceId_t, const ResourceBindingBase_t*>(class CUtlKeyValuePair<ResourceId_t, const ResourceBindingBase_t*> *, const class ResourceId_t  &, const class ResourceBindingBase_t  * const &); /* linkage=_ZN16CUtlKeyValuePairI12ResourceId_tPK21ResourceBindingBase_tEC4IS0_S3_EERKT_RKT0_ */
};

// <002ACFE7> ../public/tier0/utlcommon.h:51
// member functions: 41
// member variables: 2
// class size: 8
class CUtlKeyValuePair<unsigned int, int> {
	unsigned int m_key; /* 0 4 */
	int m_value; /* 4 4 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<unsigned int, int>* );
	/* ../public/tier0/utlcommon.h:66 */
	int& GetValue(CUtlKeyValuePair<unsigned int, int>* );
	/* ../public/tier0/utlcommon.h:67 */
	const int& GetValue(const CUtlKeyValuePair<unsigned int, int>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef int ValueReturn_t;
	/* ../public/tier0/utlcommon.h:64 */
	void CUtlKeyValuePair<unsigned int, int>(CUtlKeyValuePair<unsigned int, int>* , const unsigned int& , const int& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, int> *); /* linkage=_ZN16CUtlKeyValuePairIjiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<unsigned int, int> *); /* linkage=_ZN16CUtlKeyValuePairIjiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<unsigned int, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIjiE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, int>(class CUtlKeyValuePair<unsigned int, int> *, const unsigned int  &, const int  &); /* linkage=_ZN16CUtlKeyValuePairIjiEC4IjiEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIj7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, empty_t> *, const unsigned int  &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIj7empty_tEC4ERKjRKS0_ */
	const unsigned int  & GetValue(const class CUtlKeyValuePair<unsigned int, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIj7empty_tE8GetValueEv */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*> *); /* linkage=_ZN16CUtlKeyValuePairIjPN16CKeyValuesSystem18SharedStringData_tEEC4Ev */
	class SharedStringData_t * & GetValue(class CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*> *); /* linkage=_ZN16CUtlKeyValuePairIjPN16CKeyValuesSystem18SharedStringData_tEE8GetValueEv */
	class SharedStringData_t * const & GetValue(const class CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*>  *); /* linkage=_ZNK16CUtlKeyValuePairIjPN16CKeyValuesSystem18SharedStringData_tEE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*>(class CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*> *, const unsigned int  &, class SharedStringData_t * const &); /* linkage=_ZN16CUtlKeyValuePairIjPN16CKeyValuesSystem18SharedStringData_tEEC4IjS2_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*> *); /* linkage=_ZN16CUtlKeyValuePairIjPK17CResourceDiskEnumEC4Ev */
	const class CResourceDiskEnum  * & GetValue(class CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*> *); /* linkage=_ZN16CUtlKeyValuePairIjPK17CResourceDiskEnumE8GetValueEv */
	const class CResourceDiskEnum  * const & GetValue(const class CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*>  *); /* linkage=_ZNK16CUtlKeyValuePairIjPK17CResourceDiskEnumE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*>(class CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*> *, const unsigned int  &, const class CResourceDiskEnum  * const &); /* linkage=_ZN16CUtlKeyValuePairIjPK17CResourceDiskEnumEC4IjS2_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*> *); /* linkage=_ZN16CUtlKeyValuePairIjPK19CResourceDiskStructEC4Ev */
	const class CResourceDiskStruct  * & GetValue(class CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*> *); /* linkage=_ZN16CUtlKeyValuePairIjPK19CResourceDiskStructE8GetValueEv */
	const class CResourceDiskStruct  * const & GetValue(const class CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*>  *); /* linkage=_ZNK16CUtlKeyValuePairIjPK19CResourceDiskStructE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*>(class CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*> *, const unsigned int  &, const class CResourceDiskStruct  * const &); /* linkage=_ZN16CUtlKeyValuePairIjPK19CResourceDiskStructEC4IjS2_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, short unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIjtEC4Ev */
	short unsigned int & GetValue(class CUtlKeyValuePair<unsigned int, short unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIjtE8GetValueEv */
	const short unsigned int  & GetValue(const class CUtlKeyValuePair<unsigned int, short unsigned int>  *); /* linkage=_ZNK16CUtlKeyValuePairIjtE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, short unsigned int>(class CUtlKeyValuePair<unsigned int, short unsigned int> *, const unsigned int  &, const short unsigned int  &); /* linkage=_ZN16CUtlKeyValuePairIjtEC4IjtEERKT_RKT0_ */
	void CUtlKeyValuePair<unsigned int>(class CUtlKeyValuePair<unsigned int, empty_t> *, const unsigned int  &); /* linkage=_ZN16CUtlKeyValuePairIj7empty_tEC4IjEERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry> *); /* linkage=_ZN16CUtlKeyValuePairIjN18CVSoundTypeManager12SfxDictEntryEEC4Ev */
	class SfxDictEntry & GetValue(class CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry> *); /* linkage=_ZN16CUtlKeyValuePairIjN18CVSoundTypeManager12SfxDictEntryEE8GetValueEv */
	const class SfxDictEntry  & GetValue(const class CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry>  *); /* linkage=_ZNK16CUtlKeyValuePairIjN18CVSoundTypeManager12SfxDictEntryEE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry>(class CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry> *, const unsigned int  &, const class SfxDictEntry  &); /* linkage=_ZN16CUtlKeyValuePairIjN18CVSoundTypeManager12SfxDictEntryEEC4IjS1_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t> *); /* linkage=_ZN16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEEC4Ev */
	class FrameBufferScratchTexInfo_t & GetValue(class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t> *); /* linkage=_ZN16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEE8GetValueEv */
	const class FrameBufferScratchTexInfo_t  & GetValue(const class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEE8GetValueEv */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t> *); /* linkage=_ZN16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEED4Ev */
	void CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t>(class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t> *, const unsigned int  &, const class FrameBufferScratchTexInfo_t  &); /* linkage=_ZN16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEEC4IjS1_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t> *); /* linkage=_ZN16CUtlKeyValuePairIj28CAnimationDecodeCacheEntry_tEC4Ev */
	class CAnimationDecodeCacheEntry_t & GetValue(class CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t> *); /* linkage=_ZN16CUtlKeyValuePairIj28CAnimationDecodeCacheEntry_tE8GetValueEv */
	const class CAnimationDecodeCacheEntry_t  & GetValue(const class CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIj28CAnimationDecodeCacheEntry_tE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t>(class CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t> *, const unsigned int  &, const class CAnimationDecodeCacheEntry_t  &); /* linkage=_ZN16CUtlKeyValuePairIj28CAnimationDecodeCacheEntry_tEC4IjS0_EERKT_RKT0_ */
};

// <002AE7BF> ../public/tier0/utlcommon.h:51
// member functions: 30
// member variables: 2
// class size: 8
class CUtlKeyValuePair<int, unsigned int> {
	int m_key; /* 0 4 */
	unsigned int m_value; /* 4 4 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<int, unsigned int>* );
	/* ../public/tier0/utlcommon.h:66 */
	unsigned int& GetValue(CUtlKeyValuePair<int, unsigned int>* );
	/* ../public/tier0/utlcommon.h:67 */
	const unsigned int& GetValue(const CUtlKeyValuePair<int, unsigned int>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef unsigned int ValueReturn_t;
	/* ../public/tier0/utlcommon.h:64 */
	void CUtlKeyValuePair<int, unsigned int>(CUtlKeyValuePair<int, unsigned int>* , const int& , const unsigned int& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, float> *); /* linkage=_ZN16CUtlKeyValuePairIifEC4Ev */
	float & GetValue(class CUtlKeyValuePair<int, float> *); /* linkage=_ZN16CUtlKeyValuePairIifE8GetValueEv */
	const float  & GetValue(const class CUtlKeyValuePair<int, float>  *); /* linkage=_ZNK16CUtlKeyValuePairIifE8GetValueEv */
	void CUtlKeyValuePair<int, float>(class CUtlKeyValuePair<int, float> *, const int  &, const float  &); /* linkage=_ZN16CUtlKeyValuePairIifEC4IifEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIijEC4Ev */
	unsigned int & GetValue(class CUtlKeyValuePair<int, unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIijE8GetValueEv */
	const unsigned int  & GetValue(const class CUtlKeyValuePair<int, unsigned int>  *); /* linkage=_ZNK16CUtlKeyValuePairIijE8GetValueEv */
	void CUtlKeyValuePair<int, unsigned int>(class CUtlKeyValuePair<int, unsigned int> *, const int  &, const unsigned int  &); /* linkage=_ZN16CUtlKeyValuePairIijEC4IijEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, int> *); /* linkage=_ZN16CUtlKeyValuePairIiiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<int, int> *); /* linkage=_ZN16CUtlKeyValuePairIiiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<int, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIiiE8GetValueEv */
	void CUtlKeyValuePair<int, int>(class CUtlKeyValuePair<int, int> *, const int  &, const int  &); /* linkage=_ZN16CUtlKeyValuePairIiiEC4IiiEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIi7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, empty_t> *, const int  &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIi7empty_tEC4ERKiRKS0_ */
	const int  & GetValue(const class CUtlKeyValuePair<int, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIi7empty_tE8GetValueEv */
	void CUtlKeyValuePair<int>(class CUtlKeyValuePair<int, empty_t> *, const int  &); /* linkage=_ZN16CUtlKeyValuePairIi7empty_tEC4IiEERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrI21CAnimNodeInstanceBase17CRefCountAccessorEEC4Ev */
	class CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> & GetValue(class CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrI21CAnimNodeInstanceBase17CRefCountAccessorEE8GetValueEv */
	const class CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>  & GetValue(const class CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> >  *); /* linkage=_ZNK16CUtlKeyValuePairIi9CSmartPtrI21CAnimNodeInstanceBase17CRefCountAccessorEE8GetValueEv */
	void CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase> >(class CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> > *, const int  &, const class CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>  &); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrI21CAnimNodeInstanceBase17CRefCountAccessorEEC4IiS3_EERKT_RKT0_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrI21CAnimNodeInstanceBase17CRefCountAccessorEED4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrIK15CActivityValues17CRefCountAccessorEEC4Ev */
	class CSmartPtr<const CActivityValues, CRefCountAccessor> & GetValue(class CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrIK15CActivityValues17CRefCountAccessorEE8GetValueEv */
	const class CSmartPtr<const CActivityValues, CRefCountAccessor>  & GetValue(const class CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> >  *); /* linkage=_ZNK16CUtlKeyValuePairIi9CSmartPtrIK15CActivityValues17CRefCountAccessorEE8GetValueEv */
	void CUtlKeyValuePair<int, CSmartPtr<const CActivityValues> >(class CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> > *, const int  &, const class CSmartPtr<const CActivityValues, CRefCountAccessor>  &); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrIK15CActivityValues17CRefCountAccessorEEC4IiS4_EERKT_RKT0_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrIK15CActivityValues17CRefCountAccessorEED4Ev */
};

// <002B453A> ../public/tier0/utlcommon.h:51
// member functions: 25
// member variables: 2
// class size: 16
class CUtlKeyValuePair<CUtlString, int> {
	CUtlString m_key; /* 0 8 */
	int m_value; /* 8 4 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<CUtlString, int>* );
	/* ../public/tier0/utlcommon.h:66 */
	int& GetValue(CUtlKeyValuePair<CUtlString, int>* );
	/* ../public/tier0/utlcommon.h:67 */
	const int& GetValue(const CUtlKeyValuePair<CUtlString, int>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef int ValueReturn_t;
	/* ../public/tier0/utlcommon.h:64 */
	void CUtlKeyValuePair<CUtlString, int>(CUtlKeyValuePair<CUtlString, int>* , const CUtlString& , const int& );
	void ~CUtlKeyValuePair(CUtlKeyValuePair<CUtlString, int>* );
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, CBufferString> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString13CBufferStringEC4Ev */
	class CBufferString & GetValue(class CUtlKeyValuePair<CUtlString, CBufferString> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString13CBufferStringE8GetValueEv */
	const class CBufferString  & GetValue(const class CUtlKeyValuePair<CUtlString, CBufferString>  *); /* linkage=_ZNK16CUtlKeyValuePairI10CUtlString13CBufferStringE8GetValueEv */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, CBufferString> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString13CBufferStringED4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, empty_t> *, const class CUtlString  &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString7empty_tEC4ERKS0_RKS1_ */
	const class CUtlString  & GetValue(const class CUtlKeyValuePair<CUtlString, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairI10CUtlString7empty_tE8GetValueEv */
	void CUtlKeyValuePair<CUtlString>(class CUtlKeyValuePair<CUtlString, empty_t> *, const class CUtlString  &); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString7empty_tEC4IS0_EERKT_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString7empty_tED4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, int> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlStringiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<CUtlString, int> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlStringiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<CUtlString, int>  *); /* linkage=_ZNK16CUtlKeyValuePairI10CUtlStringiE8GetValueEv */
	void CUtlKeyValuePair<CUtlString, int>(class CUtlKeyValuePair<CUtlString, int> *, const class CUtlString  &, const int  &); /* linkage=_ZN16CUtlKeyValuePairI10CUtlStringiEC4IS0_iEERKT_RKT0_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, int> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlStringiED4Ev */
	void CUtlKeyValuePair<CUtlString>(class CUtlKeyValuePair<CUtlString, int> *, const class CUtlString  &); /* linkage=_ZN16CUtlKeyValuePairI10CUtlStringiEC4IS0_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString9CSmartPtrI9CSubGraph17CRefCountAccessorEEC4Ev */
	class CSmartPtr<CSubGraph, CRefCountAccessor> & GetValue(class CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString9CSmartPtrI9CSubGraph17CRefCountAccessorEE8GetValueEv */
	const class CSmartPtr<CSubGraph, CRefCountAccessor>  & GetValue(const class CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> >  *); /* linkage=_ZNK16CUtlKeyValuePairI10CUtlString9CSmartPtrI9CSubGraph17CRefCountAccessorEE8GetValueEv */
	void CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph> >(class CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> > *, const class CUtlString  &, const class CSmartPtr<CSubGraph, CRefCountAccessor>  &); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString9CSmartPtrI9CSubGraph17CRefCountAccessorEEC4IS0_S4_EERKT_RKT0_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString9CSmartPtrI9CSubGraph17CRefCountAccessorEED4Ev */
};

// <0033E0AF> ../public/tier0/utlcommon.h:51
// member functions: 30
// member variables: 2
// class size: 8
class CUtlKeyValuePair<int, float> {
	int m_key; /* 0 4 */
	float m_value; /* 4 4 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<int, float>* );
	/* ../public/tier0/utlcommon.h:66 */
	float& GetValue(CUtlKeyValuePair<int, float>* );
	/* ../public/tier0/utlcommon.h:67 */
	const float& GetValue(const CUtlKeyValuePair<int, float>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef float ValueReturn_t;
	/* ../public/tier0/utlcommon.h:64 */
	void CUtlKeyValuePair<int, float>(CUtlKeyValuePair<int, float>* , const int& , const float& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, float> *); /* linkage=_ZN16CUtlKeyValuePairIifEC4Ev */
	float & GetValue(class CUtlKeyValuePair<int, float> *); /* linkage=_ZN16CUtlKeyValuePairIifE8GetValueEv */
	const float  & GetValue(const class CUtlKeyValuePair<int, float>  *); /* linkage=_ZNK16CUtlKeyValuePairIifE8GetValueEv */
	void CUtlKeyValuePair<int, float>(class CUtlKeyValuePair<int, float> *, const int  &, const float  &); /* linkage=_ZN16CUtlKeyValuePairIifEC4IifEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIijEC4Ev */
	unsigned int & GetValue(class CUtlKeyValuePair<int, unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIijE8GetValueEv */
	const unsigned int  & GetValue(const class CUtlKeyValuePair<int, unsigned int>  *); /* linkage=_ZNK16CUtlKeyValuePairIijE8GetValueEv */
	void CUtlKeyValuePair<int, unsigned int>(class CUtlKeyValuePair<int, unsigned int> *, const int  &, const unsigned int  &); /* linkage=_ZN16CUtlKeyValuePairIijEC4IijEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, int> *); /* linkage=_ZN16CUtlKeyValuePairIiiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<int, int> *); /* linkage=_ZN16CUtlKeyValuePairIiiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<int, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIiiE8GetValueEv */
	void CUtlKeyValuePair<int, int>(class CUtlKeyValuePair<int, int> *, const int  &, const int  &); /* linkage=_ZN16CUtlKeyValuePairIiiEC4IiiEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIi7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, empty_t> *, const int  &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIi7empty_tEC4ERKiRKS0_ */
	const int  & GetValue(const class CUtlKeyValuePair<int, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIi7empty_tE8GetValueEv */
	void CUtlKeyValuePair<int>(class CUtlKeyValuePair<int, empty_t> *, const int  &); /* linkage=_ZN16CUtlKeyValuePairIi7empty_tEC4IiEERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrI21CAnimNodeInstanceBase17CRefCountAccessorEEC4Ev */
	class CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> & GetValue(class CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrI21CAnimNodeInstanceBase17CRefCountAccessorEE8GetValueEv */
	const class CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>  & GetValue(const class CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> >  *); /* linkage=_ZNK16CUtlKeyValuePairIi9CSmartPtrI21CAnimNodeInstanceBase17CRefCountAccessorEE8GetValueEv */
	void CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase> >(class CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> > *, const int  &, const class CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>  &); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrI21CAnimNodeInstanceBase17CRefCountAccessorEEC4IiS3_EERKT_RKT0_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrI21CAnimNodeInstanceBase17CRefCountAccessorEED4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrIK15CActivityValues17CRefCountAccessorEEC4Ev */
	class CSmartPtr<const CActivityValues, CRefCountAccessor> & GetValue(class CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrIK15CActivityValues17CRefCountAccessorEE8GetValueEv */
	const class CSmartPtr<const CActivityValues, CRefCountAccessor>  & GetValue(const class CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> >  *); /* linkage=_ZNK16CUtlKeyValuePairIi9CSmartPtrIK15CActivityValues17CRefCountAccessorEE8GetValueEv */
	void CUtlKeyValuePair<int, CSmartPtr<const CActivityValues> >(class CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> > *, const int  &, const class CSmartPtr<const CActivityValues, CRefCountAccessor>  &); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrIK15CActivityValues17CRefCountAccessorEEC4IiS4_EERKT_RKT0_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrIK15CActivityValues17CRefCountAccessorEED4Ev */
};

// <00072D6A> ../public/tier0/utlcommon.h:51
// member functions: 20
// member variables: 2
// class size: 8
class CUtlKeyValuePair<CUtlStringToken, CUtlStringToken> {
	CUtlStringToken m_key; /* 0 4 */
	CUtlStringToken m_value; /* 4 4 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<CUtlStringToken, CUtlStringToken>* );
	/* ../public/tier0/utlcommon.h:66 */
	CUtlStringToken& GetValue(CUtlKeyValuePair<CUtlStringToken, CUtlStringToken>* );
	/* ../public/tier0/utlcommon.h:67 */
	const CUtlStringToken& GetValue(const CUtlKeyValuePair<CUtlStringToken, CUtlStringToken>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef struct CUtlStringToken ValueReturn_t;
	/* ../public/tier0/utlcommon.h:64 */
	void CUtlKeyValuePair<CUtlStringToken, CUtlStringToken>(CUtlKeyValuePair<CUtlStringToken, CUtlStringToken>* , const CUtlStringToken& , const CUtlStringToken& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlStringToken, int> *); /* linkage=_ZN16CUtlKeyValuePairI15CUtlStringTokeniEC4Ev */
	int & GetValue(class CUtlKeyValuePair<CUtlStringToken, int> *); /* linkage=_ZN16CUtlKeyValuePairI15CUtlStringTokeniE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<CUtlStringToken, int>  *); /* linkage=_ZNK16CUtlKeyValuePairI15CUtlStringTokeniE8GetValueEv */
	void CUtlKeyValuePair<CUtlStringToken, int>(class CUtlKeyValuePair<CUtlStringToken, int> *, const class CUtlStringToken  &, const int  &); /* linkage=_ZN16CUtlKeyValuePairI15CUtlStringTokeniEC4IS0_iEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlStringToken, RenderDescriptorSetHandle_t__*> *); /* linkage=_ZN16CUtlKeyValuePairI15CUtlStringTokenP29RenderDescriptorSetHandle_t__EC4Ev */
	class RenderDescriptorSetHandle_t__ * & GetValue(class CUtlKeyValuePair<CUtlStringToken, RenderDescriptorSetHandle_t__*> *); /* linkage=_ZN16CUtlKeyValuePairI15CUtlStringTokenP29RenderDescriptorSetHandle_t__E8GetValueEv */
	class RenderDescriptorSetHandle_t__ * const & GetValue(const class CUtlKeyValuePair<CUtlStringToken, RenderDescriptorSetHandle_t__*>  *); /* linkage=_ZNK16CUtlKeyValuePairI15CUtlStringTokenP29RenderDescriptorSetHandle_t__E8GetValueEv */
	void CUtlKeyValuePair<CUtlStringToken, RenderDescriptorSetHandle_t__*>(class CUtlKeyValuePair<CUtlStringToken, RenderDescriptorSetHandle_t__*> *, const class CUtlStringToken  &, class RenderDescriptorSetHandle_t__ * const &); /* linkage=_ZN16CUtlKeyValuePairI15CUtlStringTokenP29RenderDescriptorSetHandle_t__EC4IS0_S2_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlStringToken, CUtlStringToken> *); /* linkage=_ZN16CUtlKeyValuePairI15CUtlStringTokenS0_EC4Ev */
	class CUtlStringToken & GetValue(class CUtlKeyValuePair<CUtlStringToken, CUtlStringToken> *); /* linkage=_ZN16CUtlKeyValuePairI15CUtlStringTokenS0_E8GetValueEv */
	const class CUtlStringToken  & GetValue(const class CUtlKeyValuePair<CUtlStringToken, CUtlStringToken>  *); /* linkage=_ZNK16CUtlKeyValuePairI15CUtlStringTokenS0_E8GetValueEv */
	void CUtlKeyValuePair<CUtlStringToken, CUtlStringToken>(class CUtlKeyValuePair<CUtlStringToken, CUtlStringToken> *, const class CUtlStringToken  &, const class CUtlStringToken  &); /* linkage=_ZN16CUtlKeyValuePairI15CUtlStringTokenS0_EC4IS0_S0_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> > *); /* linkage=_ZN16CUtlKeyValuePairI15CUtlStringToken11CWeakHandleI30InfoForResourceTypeCEntityLumpEEC4Ev */
	class CWeakHandle<InfoForResourceTypeCEntityLump> & GetValue(class CUtlKeyValuePair<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> > *); /* linkage=_ZN16CUtlKeyValuePairI15CUtlStringToken11CWeakHandleI30InfoForResourceTypeCEntityLumpEE8GetValueEv */
	const class CWeakHandle<InfoForResourceTypeCEntityLump>  & GetValue(const class CUtlKeyValuePair<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> >  *); /* linkage=_ZNK16CUtlKeyValuePairI15CUtlStringToken11CWeakHandleI30InfoForResourceTypeCEntityLumpEE8GetValueEv */
	void CUtlKeyValuePair<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> >(class CUtlKeyValuePair<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> > *, const class CUtlStringToken  &, const class CWeakHandle<InfoForResourceTypeCEntityLump>  &); /* linkage=_ZN16CUtlKeyValuePairI15CUtlStringToken11CWeakHandleI30InfoForResourceTypeCEntityLumpEEC4IS0_S3_EERKT_RKT0_ */
};

// <0008AF1B> ../public/tier0/utlcommon.h:51
// member functions: 29
// member variables: 2
// class size: 8
class CUtlKeyValuePair<int, int> {
	int m_key; /* 0 4 */
	int m_value; /* 4 4 */
	/* ../public/tier0/utlcommon.h:58 */
	void CUtlKeyValuePair(CUtlKeyValuePair<int, int>* );
	/* ../public/tier0/utlcommon.h:66 */
	int& GetValue(CUtlKeyValuePair<int, int>* );
	/* ../public/tier0/utlcommon.h:67 */
	const int& GetValue(const CUtlKeyValuePair<int, int>* );
	/* ../public/tier0/utlcommon.h:54 */
	typedef int ValueReturn_t;
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, float> *); /* linkage=_ZN16CUtlKeyValuePairIifEC4Ev */
	float & GetValue(class CUtlKeyValuePair<int, float> *); /* linkage=_ZN16CUtlKeyValuePairIifE8GetValueEv */
	const float  & GetValue(const class CUtlKeyValuePair<int, float>  *); /* linkage=_ZNK16CUtlKeyValuePairIifE8GetValueEv */
	void CUtlKeyValuePair<int, float>(class CUtlKeyValuePair<int, float> *, const int  &, const float  &); /* linkage=_ZN16CUtlKeyValuePairIifEC4IifEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIijEC4Ev */
	unsigned int & GetValue(class CUtlKeyValuePair<int, unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIijE8GetValueEv */
	const unsigned int  & GetValue(const class CUtlKeyValuePair<int, unsigned int>  *); /* linkage=_ZNK16CUtlKeyValuePairIijE8GetValueEv */
	void CUtlKeyValuePair<int, unsigned int>(class CUtlKeyValuePair<int, unsigned int> *, const int  &, const unsigned int  &); /* linkage=_ZN16CUtlKeyValuePairIijEC4IijEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, int> *); /* linkage=_ZN16CUtlKeyValuePairIiiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<int, int> *); /* linkage=_ZN16CUtlKeyValuePairIiiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<int, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIiiE8GetValueEv */
	void CUtlKeyValuePair<int, int>(class CUtlKeyValuePair<int, int> *, const int  &, const int  &); /* linkage=_ZN16CUtlKeyValuePairIiiEC4IiiEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIi7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, empty_t> *, const int  &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIi7empty_tEC4ERKiRKS0_ */
	const int  & GetValue(const class CUtlKeyValuePair<int, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIi7empty_tE8GetValueEv */
	void CUtlKeyValuePair<int>(class CUtlKeyValuePair<int, empty_t> *, const int  &); /* linkage=_ZN16CUtlKeyValuePairIi7empty_tEC4IiEERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrI21CAnimNodeInstanceBase17CRefCountAccessorEEC4Ev */
	class CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> & GetValue(class CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrI21CAnimNodeInstanceBase17CRefCountAccessorEE8GetValueEv */
	const class CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>  & GetValue(const class CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> >  *); /* linkage=_ZNK16CUtlKeyValuePairIi9CSmartPtrI21CAnimNodeInstanceBase17CRefCountAccessorEE8GetValueEv */
	void CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase> >(class CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> > *, const int  &, const class CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>  &); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrI21CAnimNodeInstanceBase17CRefCountAccessorEEC4IiS3_EERKT_RKT0_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrI21CAnimNodeInstanceBase17CRefCountAccessorEED4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrIK15CActivityValues17CRefCountAccessorEEC4Ev */
	class CSmartPtr<const CActivityValues, CRefCountAccessor> & GetValue(class CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrIK15CActivityValues17CRefCountAccessorEE8GetValueEv */
	const class CSmartPtr<const CActivityValues, CRefCountAccessor>  & GetValue(const class CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> >  *); /* linkage=_ZNK16CUtlKeyValuePairIi9CSmartPtrIK15CActivityValues17CRefCountAccessorEE8GetValueEv */
	void CUtlKeyValuePair<int, CSmartPtr<const CActivityValues> >(class CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> > *, const int  &, const class CSmartPtr<const CActivityValues, CRefCountAccessor>  &); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrIK15CActivityValues17CRefCountAccessorEEC4IiS4_EERKT_RKT0_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrIK15CActivityValues17CRefCountAccessorEED4Ev */
};

// <060724C5> ../public/tier0/utlcommon.h:61
void CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>(const ComponentHandleWithListPointer_t& k)
{
} /* size: 0 */

// <06072499> ../public/tier0/utlcommon.h:61
inline void CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, int>::CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>(const ComponentHandleWithListPointer_t& k)
{
} /* size: 0 */

// <06072474> ../public/tier0/utlcommon.h:61
void CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>(const ComponentHandleWithListPointer_t& k)
{
} /* size: 0 */

// <06072448> ../public/tier0/utlcommon.h:61
inline void CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>(const ComponentHandleWithListPointer_t& k)
{
} /* size: 0 */

// <05E51290> ../public/tier0/utlcommon.h:61
void CUtlKeyValuePair<qhVertex::CUtlKeyValuePair<qhVertex*>(qhVertex* const& k)
{
} /* size: 0 */

// <05E51264> ../public/tier0/utlcommon.h:61
inline void CUtlKeyValuePair<qhVertex::CUtlKeyValuePair<qhVertex*>(qhVertex* const& k)
{
} /* size: 0 */

// <05DC6554> ../public/tier0/utlcommon.h:61
void CUtlKeyValuePair<const CUtlKeyValuePair<const qhVertex::qhVertex*>(const qhVertex* const& k)
{
} /* size: 0 */

// <05DC6528> ../public/tier0/utlcommon.h:61
inline void CUtlKeyValuePair<const CUtlKeyValuePair<const qhVertex::qhVertex*>(const qhVertex* const& k)
{
} /* size: 0 */

// <013077B4> ../public/tier0/utlcommon.h:61
void CUtlKeyValuePair<Reflection::ClassID, CUtlVector<IAnimTagListener::CUtlKeyValuePair<Reflection::ClassID>(const ClassID& k)
{
} /* size: 0 */

// <01307788> ../public/tier0/utlcommon.h:61
inline void CUtlKeyValuePair<Reflection::ClassID, CUtlVector<IAnimTagListener::CUtlKeyValuePair<Reflection::ClassID>(const ClassID& k)
{
} /* size: 0 */

// <0114E77F> ../public/tier0/utlcommon.h:61
void CUtlKeyValuePair<CUtlString, int>::CUtlKeyValuePair<CUtlString>(const CUtlString& k)
{
} /* size: 0 */

// <0114E753> ../public/tier0/utlcommon.h:61
inline void CUtlKeyValuePair<CUtlString, int>::CUtlKeyValuePair<CUtlString>(const CUtlString& k)
{
} /* size: 0 */

// <004FDB08> ../public/tier0/utlcommon.h:61
void CUtlKeyValuePair<CVulkanImage::CUtlKeyValuePair<CVulkanImage*>(CVulkanImage* const& k)
{
} /* size: 0 */

// <004FDADC> ../public/tier0/utlcommon.h:61
inline void CUtlKeyValuePair<CVulkanImage::CUtlKeyValuePair<CVulkanImage*>(CVulkanImage* const& k)
{
} /* size: 0 */

// <06E7CAE4> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<unsigned int, CUtlKeyValuePair<unsigned int, int>::int>(const unsigned int& k, const int& v)
{
} /* size: 0 */

// <06E7CAA5> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<unsigned int, CUtlKeyValuePair<unsigned int, int>::int>(const unsigned int& k, const int& v)
{
} /* size: 0 */

// <0607628C> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::int>(const ComponentHandleWithListPointer_t& k, const int& v)
{
} /* size: 0 */

// <0607624D> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::int>(const ComponentHandleWithListPointer_t& k, const int& v)
{
} /* size: 0 */

// <060761AF> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::int>(const ComponentHandleWithListPointer_t& k, const int& v)
{
} /* size: 0 */

// <06076170> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::int>(const ComponentHandleWithListPointer_t& k, const int& v)
{
} /* size: 0 */

// <060720CC> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::int>(const ComponentHandleWithListPointer_t& k, const int& v)
{
} /* size: 0 */

// <0607208D> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::int>(const ComponentHandleWithListPointer_t& k, const int& v)
{
} /* size: 0 */

// <05ED9672> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, CUtlKeyValuePair<const qhVertex::HullIFRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>(const qhVertex* const& k, const ComponentHandleWithListPointer_t& v)
{
} /* size: 0 */

// <05ED9633> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, CUtlKeyValuePair<const qhVertex::HullIFRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>(const qhVertex* const& k, const ComponentHandleWithListPointer_t& v)
{
} /* size: 0 */

// <05DC745C> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<const qhFace*, CUtlKeyValuePair<const qhFace::int>(const qhFace* const& k, const int& v)
{
} /* size: 0 */

// <05DC741D> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<const qhFace*, CUtlKeyValuePair<const qhFace::int>(const qhFace* const& k, const int& v)
{
} /* size: 0 */

// <05DBC9F6> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<const qhVertex*, CUtlKeyValuePair<const qhVertex::int>(const qhVertex* const& k, const int& v)
{
} /* size: 0 */

// <05DBC9B7> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<const qhVertex*, CUtlKeyValuePair<const qhVertex::int>(const qhVertex* const& k, const int& v)
{
} /* size: 0 */

// <05CD9566> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<UndirectedEdge_t, CUtlKeyValuePair<UndirectedEdge_t, int>::int>(const UndirectedEdge_t& k, const int& v)
{
} /* size: 0 */

// <05CD9527> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<UndirectedEdge_t, CUtlKeyValuePair<UndirectedEdge_t, int>::int>(const UndirectedEdge_t& k, const int& v)
{
} /* size: 0 */

// <05CD8686> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<UndirectedEdge_t, CUtlKeyValuePair<UndirectedEdge_t, EdgeFaceIdEntry_t>::EdgeFaceIdEntry_t>(const UndirectedEdge_t& k, const EdgeFaceIdEntry_t& v)
{
} /* size: 0 */

// <05CD8647> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<UndirectedEdge_t, CUtlKeyValuePair<UndirectedEdge_t, EdgeFaceIdEntry_t>::EdgeFaceIdEntry_t>(const UndirectedEdge_t& k, const EdgeFaceIdEntry_t& v)
{
} /* size: 0 */

// <0554745E> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<CUtlStringToken, CUtlKeyValuePair<CUtlStringToken, int>::int>(const CUtlStringToken& k, const int& v)
{
} /* size: 0 */

// <0554741F> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<CUtlStringToken, CUtlKeyValuePair<CUtlStringToken, int>::int>(const CUtlStringToken& k, const int& v)
{
} /* size: 0 */

// <04E3463B> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<unsigned int, short unsigned CUtlKeyValuePair<unsigned int, short unsigned int>::int>(const unsigned int& k, const short unsigned int& v)
{
} /* size: 0 */

// <04E345FC> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<unsigned int, short unsigned CUtlKeyValuePair<unsigned int, short unsigned int>::int>(const unsigned int& k, const short unsigned int& v)
{
} /* size: 0 */

// <033A947F> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<unsigned int, CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t>::CSceneSystem::FrameBufferScratchTexInfo_t>(const unsigned int& k, const FrameBufferScratchTexInfo_t& v)
{
} /* size: 0 */

// <033A9440> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<unsigned int, CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t>::CSceneSystem::FrameBufferScratchTexInfo_t>(const unsigned int& k, const FrameBufferScratchTexInfo_t& v)
{
} /* size: 0 */

// <02B755B9> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<CSceneLightProbeVolumeObject*, CUtlKeyValuePair<CSceneLightProbeVolumeObject::int>(CSceneLightProbeVolumeObject* const& k, const int& v)
{
} /* size: 0 */

// <02B7557A> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<CSceneLightProbeVolumeObject*, CUtlKeyValuePair<CSceneLightProbeVolumeObject::int>(CSceneLightProbeVolumeObject* const& k, const int& v)
{
} /* size: 0 */

// <02B74B70> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<int, CUtlKeyValuePair<int, int>::int>(const int& k, const int& v)
{
} /* size: 0 */

// <02B74B31> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<int, CUtlKeyValuePair<int, int>::int>(const int& k, const int& v)
{
} /* size: 0 */

// <0269CCD3> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<unsigned int, CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry>::CVSoundTypeManager::SfxDictEntry>(const unsigned int& k, const SfxDictEntry& v)
{
} /* size: 0 */

// <0269CC94> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<unsigned int, CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry>::CVSoundTypeManager::SfxDictEntry>(const unsigned int& k, const SfxDictEntry& v)
{
} /* size: 0 */

// <0234B801> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<ResourceId_t, const CUtlKeyValuePair<ResourceId_t, const ResourceBindingBase_t::ResourceBindingBase_t*>(const ResourceId_t& k, const ResourceBindingBase_t* const& v)
{
} /* size: 0 */

// <0234B7C2> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<ResourceId_t, const CUtlKeyValuePair<ResourceId_t, const ResourceBindingBase_t::ResourceBindingBase_t*>(const ResourceId_t& k, const ResourceBindingBase_t* const& v)
{
} /* size: 0 */

// <021CB797> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<ResourceId_t, CUtlKeyValuePair<ResourceId_t, CUtlVector<IGenericDataResourceListener::CUtlVector<IGenericDataResourceListener*>*>(const ResourceId_t& k, CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> >* const& v)
{
} /* size: 0 */

// <021CB758> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<ResourceId_t, CUtlKeyValuePair<ResourceId_t, CUtlVector<IGenericDataResourceListener::CUtlVector<IGenericDataResourceListener*>*>(const ResourceId_t& k, CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> >* const& v)
{
} /* size: 0 */

// <00FFE5FE> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> CUtlKeyValuePair<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> >::>(const CUtlStringToken& k, const CWeakHandle<InfoForResourceTypeCEntityLump>& v)
{
} /* size: 0 */

// <00FFE5BF> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> CUtlKeyValuePair<CUtlStringToken, CWeakHandle<InfoForResourceTypeCEntityLump> >::>(const CUtlStringToken& k, const CWeakHandle<InfoForResourceTypeCEntityLump>& v)
{
} /* size: 0 */

// <025B0D7A> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<unsigned int, CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t>::CAnimationDecodeCacheEntry_t>(const unsigned int& k, const CAnimationDecodeCacheEntry_t& v)
{
} /* size: 0 */

// <025B0D3B> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<unsigned int, CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t>::CAnimationDecodeCacheEntry_t>(const unsigned int& k, const CAnimationDecodeCacheEntry_t& v)
{
} /* size: 0 */

// <01A6724C> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> CUtlKeyValuePair<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >::>(const ClassID& k, const shared_ptr<Reflection::CAttribute>& v)
{
} /* size: 0 */

// <01A6720D> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> CUtlKeyValuePair<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >::>(const ClassID& k, const shared_ptr<Reflection::CAttribute>& v)
{
} /* size: 0 */

// <01572638> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<AnimNodeID, CUtlKeyValuePair<AnimNodeID, int>::int>(const AnimNodeID& k, const int& v)
{
} /* size: 0 */

// <015725F9> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<AnimNodeID, CUtlKeyValuePair<AnimNodeID, int>::int>(const AnimNodeID& k, const int& v)
{
} /* size: 0 */

// <0157230A> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> CUtlKeyValuePair<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> >::>(const AnimNodeID& k, const CPackedHandle<CAnimUpdateNodeBase>& v)
{
} /* size: 0 */

// <015722CB> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> CUtlKeyValuePair<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> >::>(const AnimNodeID& k, const CPackedHandle<CAnimUpdateNodeBase>& v)
{
} /* size: 0 */

// <015718A2> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager> CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> >::>(const AnimNodeID& k, const CSmartPtr<CUpdateNodeManager, CRefCountAccessor>& v)
{
} /* size: 0 */

// <01571863> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager> CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> >::>(const AnimNodeID& k, const CSmartPtr<CUpdateNodeManager, CRefCountAccessor>& v)
{
} /* size: 0 */

// <01571574> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase> CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> >::>(const AnimNodeID& k, const CSmartPtr<const CAnimNodeBase, CRefCountAccessor>& v)
{
} /* size: 0 */

// <01571535> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase> CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> >::>(const AnimNodeID& k, const CSmartPtr<const CAnimNodeBase, CRefCountAccessor>& v)
{
} /* size: 0 */

// <015706DD> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<const CAnimUpdateNodeBase*, CUtlKeyValuePair<const CAnimUpdateNodeBase::CRootMotion>(const CAnimUpdateNodeBase* const& k, const CRootMotion& v)
{
} /* size: 0 */

// <0157069E> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<const CAnimUpdateNodeBase*, CUtlKeyValuePair<const CAnimUpdateNodeBase::CRootMotion>(const CAnimUpdateNodeBase* const& k, const CRootMotion& v)
{
} /* size: 0 */

// <0156FC79> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<const CAnimUpdateNodeBase*, CUtlKeyValuePair<const CAnimUpdateNodeBase::CStrideStatus>(const CAnimUpdateNodeBase* const& k, const CStrideStatus& v)
{
} /* size: 0 */

// <0156FC3A> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<const CAnimUpdateNodeBase*, CUtlKeyValuePair<const CAnimUpdateNodeBase::CStrideStatus>(const CAnimUpdateNodeBase* const& k, const CStrideStatus& v)
{
} /* size: 0 */

// <01460CC5> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CAnimMotorInstance, CAnimMotorBase, const CAnimMotorUpdaterBase*, const CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>&>::CFactoryMaker, CRefCountAccessor> >(const CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CAnimMotorInstance, CAnimMotorBase, co this, const ClassID& k, const CSmartPtr<Reflection::CInstanceFactory<CAnimMotorInstance, CAnimMotorBase, const CAnimMotorUpdaterBase*, const CSma v)
{
} /* size: 0 */

// <01460C86> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CAnimMotorInstance, CAnimMotorBase, const CAnimMotorUpdaterBase*, const CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>&>::CFactoryMaker, CRefCountAccessor> >(const CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CAnimMotorInstance, CAnimMotorBase, co this, const ClassID& k, const CSmartPtr<Reflection::CInstanceFactory<CAnimMotorInstance, CAnimMotorBase, const CAnimMotorUpdaterBase*, const CSma v)
{
} /* size: 0 */

// <013EC77A> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<HSequence, CSmartPtr<CSequenceDistanceHelper> CUtlKeyValuePair<HSequence, CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor> >::>(const HSequence& k, const CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor>& v)
{
} /* size: 0 */

// <013EC73B> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<HSequence, CSmartPtr<CSequenceDistanceHelper> CUtlKeyValuePair<HSequence, CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor> >::>(const HSequence& k, const CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor>& v)
{
} /* size: 0 */

// <013E9AEB> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CMotionMetricInstance, CMotionMetricBase, const CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>&, CPackedHandle<const CMotionMetricEvaluator> >::CFactoryMaker, CRefCountAccessor> >(const CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CMotionMetricInstance, CMotionMetricBa this, const ClassID& k, const CSmartPtr<Reflection::CInstanceFactory<CMotionMetricInstance, CMotionMetricBase, const CSmartPtr<CAnimGraphUpdateCo v)
{
} /* size: 0 */

// <013E9AAC> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CMotionMetricInstance, CMotionMetricBase, const CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>&, CPackedHandle<const CMotionMetricEvaluator> >::CFactoryMaker, CRefCountAccessor> >(const CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CMotionMetricInstance, CMotionMetricBa this, const ClassID& k, const CSmartPtr<Reflection::CInstanceFactory<CMotionMetricInstance, CMotionMetricBase, const CSmartPtr<CAnimGraphUpdateCo v)
{
} /* size: 0 */

// <01260E11> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<AnimOutputID, CUtlKeyValuePair<AnimOutputID, CNodeConnection>::CNodeConnection>(const AnimOutputID& k, const CNodeConnection& v)
{
} /* size: 0 */

// <01260DD2> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<AnimOutputID, CUtlKeyValuePair<AnimOutputID, CNodeConnection>::CNodeConnection>(const AnimOutputID& k, const CNodeConnection& v)
{
} /* size: 0 */

// <01260086> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph> CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> >::>(const CUtlString& k, const CSmartPtr<CSubGraph, CRefCountAccessor>& v)
{
} /* size: 0 */

// <01260047> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph> CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> >::>(const CUtlString& k, const CSmartPtr<CSubGraph, CRefCountAccessor>& v)
{
} /* size: 0 */

// <00F46DF6> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase> CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >::>(const AnimNodeID& k, const CSmartPtr<CAnimNodeBase, CRefCountAccessor>& v)
{
} /* size: 0 */

// <00F46DB7> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase> CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >::>(const AnimNodeID& k, const CSmartPtr<CAnimNodeBase, CRefCountAccessor>& v)
{
} /* size: 0 */

// <00F46019> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<AnimNodeID, CUtlKeyValuePair<AnimNodeID, CAnimNodeBase::CAnimNodeBase*>(const AnimNodeID& k, CAnimNodeBase* const& v)
{
} /* size: 0 */

// <00F45FDA> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<AnimNodeID, CUtlKeyValuePair<AnimNodeID, CAnimNodeBase::CAnimNodeBase*>(const AnimNodeID& k, CAnimNodeBase* const& v)
{
} /* size: 0 */

// <00F450B5> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<AnimParamID, CUtlKeyValuePair<AnimParamID, int>::int>(const AnimParamID& k, const int& v)
{
} /* size: 0 */

// <00F45076> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<AnimParamID, CUtlKeyValuePair<AnimParamID, int>::int>(const AnimParamID& k, const int& v)
{
} /* size: 0 */

// <00F45043> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<CUtlString, CUtlKeyValuePair<CUtlString, int>::int>(const CUtlString& k, const int& v)
{
} /* size: 0 */

// <00F45004> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<CUtlString, CUtlKeyValuePair<CUtlString, int>::int>(const CUtlString& k, const int& v)
{
} /* size: 0 */

// <00F427CE> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker> CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor> >::>(const ClassID& k, const CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>& v)
{
} /* size: 0 */

// <00F4278F> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker> CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor> >::>(const ClassID& k, const CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>& v)
{
} /* size: 0 */

// <00E05DE4> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<int, CSmartPtr<const CActivityValues> CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> >::>(const int& k, const CSmartPtr<const CActivityValues, CRefCountAccessor>& v)
{
} /* size: 0 */

// <00E05DA5> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<int, CSmartPtr<const CActivityValues> CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> >::>(const int& k, const CSmartPtr<const CActivityValues, CRefCountAccessor>& v)
{
} /* size: 0 */

// <00E04FAB> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase> CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> >::>(const int& k, const CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>& v)
{
} /* size: 0 */

// <00E04F6C> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase> CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> >::>(const int& k, const CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>& v)
{
} /* size: 0 */

// <00E0414B> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<AnimParamID, const CUtlKeyValuePair<AnimParamID, const CAnimParameterBase::CAnimParameterBase*>(const AnimParamID& k, const CAnimParameterBase* const& v)
{
} /* size: 0 */

// <00E0410C> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<AnimParamID, const CUtlKeyValuePair<AnimParamID, const CAnimParameterBase::CAnimParameterBase*>(const AnimParamID& k, const CAnimParameterBase* const& v)
{
} /* size: 0 */

// <00E03632> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<AnimTagID, const CUtlKeyValuePair<AnimTagID, const CAnimTagBase::CAnimTagBase*>(const AnimTagID& k, const CAnimTagBase* const& v)
{
} /* size: 0 */

// <00E035F3> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<AnimTagID, const CUtlKeyValuePair<AnimTagID, const CAnimTagBase::CAnimTagBase*>(const AnimTagID& k, const CAnimTagBase* const& v)
{
} /* size: 0 */

// <00BB9BA1> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<long long unsigned int, CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::CShaderTableVulkan::RefCountedShaderFile_t>(const long long unsigned int& k, const RefCountedShaderFile_t& v)
{
} /* size: 0 */

// <00BB9B62> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<long long unsigned int, CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::CShaderTableVulkan::RefCountedShaderFile_t>(const long long unsigned int& k, const RefCountedShaderFile_t& v)
{
} /* size: 0 */

// <00BB8866> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<long long unsigned int, CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::CShaderTableVulkan::RefCountedShaderModule_t>(const long long unsigned int& k, const RefCountedShaderModule_t& v)
{
} /* size: 0 */

// <00BB8827> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<long long unsigned int, CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::CShaderTableVulkan::RefCountedShaderModule_t>(const long long unsigned int& k, const RefCountedShaderModule_t& v)
{
} /* size: 0 */

// <009B6B90> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<CUtlStringToken, CUtlKeyValuePair<CUtlStringToken, RenderDescriptorSetHandle_t__::RenderDescriptorSetHandle_t__*>(const CUtlStringToken& k, RenderDescriptorSetHandle_t__* const& v)
{
} /* size: 0 */

// <009B6B51> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<CUtlStringToken, CUtlKeyValuePair<CUtlStringToken, RenderDescriptorSetHandle_t__::RenderDescriptorSetHandle_t__*>(const CUtlStringToken& k, RenderDescriptorSetHandle_t__* const& v)
{
} /* size: 0 */

// <009B034C> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CUtlKeyValuePair<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan::CInputLayoutVulkan*>(const RenderInputLayoutDesc_t& k, CInputLayoutVulkan* const& v)
{
} /* size: 0 */

// <009B030D> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CUtlKeyValuePair<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan::CInputLayoutVulkan*>(const RenderInputLayoutDesc_t& k, CInputLayoutVulkan* const& v)
{
} /* size: 0 */

// <006FD090> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<PipelineCreateInfo_t, CUtlKeyValuePair<PipelineCreateInfo_t, PipelineObjectVulkan_t::PipelineObjectVulkan_t*>(const PipelineCreateInfo_t& k, PipelineObjectVulkan_t* const& v)
{
} /* size: 0 */

// <006FD051> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<PipelineCreateInfo_t, CUtlKeyValuePair<PipelineCreateInfo_t, PipelineObjectVulkan_t::PipelineObjectVulkan_t*>(const PipelineCreateInfo_t& k, PipelineObjectVulkan_t* const& v)
{
} /* size: 0 */

// <006FA761> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<PipelineLayoutCreateInfo_t, CUtlKeyValuePair<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>::PipelineLayoutVulkan_t>(const PipelineLayoutCreateInfo_t& k, const PipelineLayoutVulkan_t& v)
{
} /* size: 0 */

// <006FA722> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<PipelineLayoutCreateInfo_t, CUtlKeyValuePair<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>::PipelineLayoutVulkan_t>(const PipelineLayoutCreateInfo_t& k, const PipelineLayoutVulkan_t& v)
{
} /* size: 0 */

// <0064C23A> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<long unsigned int, const CUtlKeyValuePair<long unsigned int, const CShaderVulkanBase::CShaderVulkanBase*>(const long unsigned int& k, const CShaderVulkanBase* const& v)
{
} /* size: 0 */

// <0064C1FB> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<long unsigned int, const CUtlKeyValuePair<long unsigned int, const CShaderVulkanBase::CShaderVulkanBase*>(const long unsigned int& k, const CShaderVulkanBase* const& v)
{
} /* size: 0 */

// <004FDA83> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<CVulkanImage*, CUtlKeyValuePair<CVulkanImage::CImageLayoutTracker::ImageTransition_t>(CVulkanImage* const& k, const ImageTransition_t& v)
{
} /* size: 0 */

// <004FDA44> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<CVulkanImage*, CUtlKeyValuePair<CVulkanImage::CImageLayoutTracker::ImageTransition_t>(CVulkanImage* const& k, const ImageTransition_t& v)
{
} /* size: 0 */

// <004D59F5> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<VulkanFramebufferState_t, CUtlKeyValuePair<VulkanFramebufferState_t, VkFramebuffer_T::VkFramebuffer_T*>(const VulkanFramebufferState_t& k, VkFramebuffer_T* const& v)
{
} /* size: 0 */

// <004D59B6> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<VulkanFramebufferState_t, CUtlKeyValuePair<VulkanFramebufferState_t, VkFramebuffer_T::VkFramebuffer_T*>(const VulkanFramebufferState_t& k, VkFramebuffer_T* const& v)
{
} /* size: 0 */

// <004D4F91> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<VulkanFramebufferState_t, CUtlKeyValuePair<VulkanFramebufferState_t, VkRenderPass_T::VkRenderPass_T*>(const VulkanFramebufferState_t& k, VkRenderPass_T* const& v)
{
} /* size: 0 */

// <004D4F52> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<VulkanFramebufferState_t, CUtlKeyValuePair<VulkanFramebufferState_t, VkRenderPass_T::VkRenderPass_T*>(const VulkanFramebufferState_t& k, VkRenderPass_T* const& v)
{
} /* size: 0 */

// <00447394> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<RenderResourceHandle_t__*, CUtlKeyValuePair<RenderResourceHandle_t__::RenderDescriptorBinding_t>(RenderResourceHandle_t__* const& k, const RenderDescriptorBinding_t& v)
{
} /* size: 0 */

// <00447355> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<RenderResourceHandle_t__*, CUtlKeyValuePair<RenderResourceHandle_t__::RenderDescriptorBinding_t>(RenderResourceHandle_t__* const& k, const RenderDescriptorBinding_t& v)
{
} /* size: 0 */

// <00572378> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<char const*, CUtlKeyValuePair<char const::int>(const char* const& k, const int& v)
{
} /* size: 0 */

// <00572339> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<char const*, CUtlKeyValuePair<char const::int>(const char* const& k, const int& v)
{
} /* size: 0 */

// <0025AA63> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<CKeyValuesSystem::SharedStringData_t*, CInterlockedIntT<int> CUtlKeyValuePair<CKeyValuesSystem::SharedStringData_t::>(SharedStringData_t* const& k, const CInterlockedIntT<int, 4>& v)
{
} /* size: 0 */

// <0025AA24> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<CKeyValuesSystem::SharedStringData_t*, CInterlockedIntT<int> CUtlKeyValuePair<CKeyValuesSystem::SharedStringData_t::>(SharedStringData_t* const& k, const CInterlockedIntT<int, 4>& v)
{
} /* size: 0 */

// <00259FFB> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<unsigned int, CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t::CKeyValuesSystem::SharedStringData_t*>(const unsigned int& k, SharedStringData_t* const& v)
{
} /* size: 0 */

// <00259FBC> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<unsigned int, CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t::CKeyValuesSystem::SharedStringData_t*>(const unsigned int& k, SharedStringData_t* const& v)
{
} /* size: 0 */

// <00160E39> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<long long unsigned int, char CUtlKeyValuePair<long long unsigned int, char const::const*>(const long long unsigned int& k, const char* const& v)
{
} /* size: 0 */

// <00160DFA> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<long long unsigned int, char CUtlKeyValuePair<long long unsigned int, char const::const*>(const long long unsigned int& k, const char* const& v)
{
} /* size: 0 */

// <00160799> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<unsigned int, const CUtlKeyValuePair<unsigned int, const CResourceDiskStruct::CResourceDiskStruct*>(const unsigned int& k, const CResourceDiskStruct* const& v)
{
} /* size: 0 */

// <0016075A> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<unsigned int, const CUtlKeyValuePair<unsigned int, const CResourceDiskStruct::CResourceDiskStruct*>(const unsigned int& k, const CResourceDiskStruct* const& v)
{
} /* size: 0 */

// <00160702> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<unsigned int, const CUtlKeyValuePair<unsigned int, const CResourceDiskEnum::CResourceDiskEnum*>(const unsigned int& k, const CResourceDiskEnum* const& v)
{
} /* size: 0 */

// <001606C3> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<unsigned int, const CUtlKeyValuePair<unsigned int, const CResourceDiskEnum::CResourceDiskEnum*>(const unsigned int& k, const CResourceDiskEnum* const& v)
{
} /* size: 0 */

// <0015F14F> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<const CResourceDiskStructField*, const CUtlKeyValuePair<const CResourceDiskStructField::KV3ConvertSpecialFieldBehavior_t*>(const CResourceDiskStructField* const& k, const KV3ConvertSpecialFieldBehavior_t* const& v)
{
} /* size: 0 */

// <0015F110> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<const CResourceDiskStructField*, const CUtlKeyValuePair<const CResourceDiskStructField::KV3ConvertSpecialFieldBehavior_t*>(const CResourceDiskStructField* const& k, const KV3ConvertSpecialFieldBehavior_t* const& v)
{
} /* size: 0 */

// <003445B9> ../public/tier0/utlcommon.h:64
void CUtlKeyValuePair<int, CUtlKeyValuePair<int, float>::float>(const int& k, const float& v)
{
} /* size: 0 */

// <0034457A> ../public/tier0/utlcommon.h:64
inline void CUtlKeyValuePair<int, CUtlKeyValuePair<int, float>::float>(const int& k, const float& v)
{
} /* size: 0 */

// <060864C1> ../public/tier0/utlcommon.h:66
inline void CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, int>::GetValue()
{
} /* size: 0 */

// <06085A34> ../public/tier0/utlcommon.h:66
inline void CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, int>::GetValue()
{
} /* size: 0 */

// <05EDEAB2> ../public/tier0/utlcommon.h:66
inline void CUtlKeyValuePair<const qhVertex::GetValue()
{
} /* size: 0 */

// <05E5D9D9> ../public/tier0/utlcommon.h:66
inline void CUtlKeyValuePair<qhVertex::GetValue()
{
} /* size: 0 */

// <05E5CE9C> ../public/tier0/utlcommon.h:66
inline void GetValue(const CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>:: this)
{
} /* size: 0 */

// <05DDCFE8> ../public/tier0/utlcommon.h:66
inline void CUtlKeyValuePair<const qhFace::GetValue()
{
} /* size: 0 */

// <05CDEB2C> ../public/tier0/utlcommon.h:66
inline void CUtlKeyValuePair<UndirectedEdge_t, int>::GetValue()
{
} /* size: 0 */

// <05CDD5F9> ../public/tier0/utlcommon.h:66
inline void CUtlKeyValuePair<UndirectedEdge_t, EdgeFaceIdEntry_t>::GetValue()
{
} /* size: 0 */

// <0554B8C2> ../public/tier0/utlcommon.h:66
inline void CUtlKeyValuePair<CUtlStringToken, int>::GetValue()
{
} /* size: 0 */

// <04AADEB6> ../public/tier0/utlcommon.h:66
inline void CUtlKeyValuePair<CUtlString, int>::GetValue()
{
} /* size: 0 */

// <03929004> ../public/tier0/utlcommon.h:66
inline void CUtlKeyValuePair<CSceneLightProbeVolumeObject::GetValue()
{
} /* size: 0 */

// <033AC1A5> ../public/tier0/utlcommon.h:66
inline void CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t>::GetValue()
{
} /* size: 0 */

// <02E9B9EA> ../public/tier0/utlcommon.h:66
inline void CUtlKeyValuePair<int, int>::GetValue()
{
} /* size: 0 */

// <0269DE74> ../public/tier0/utlcommon.h:66
inline void CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry>::GetValue()
{
} /* size: 0 */

// <022A36A1> ../public/tier0/utlcommon.h:66
inline void CUtlKeyValuePair<ResourceId_t, const ResourceBindingBase_t::GetValue()
{
} /* size: 0 */

// <022A346A> ../public/tier0/utlcommon.h:66
inline void CUtlKeyValuePair<const ResourceBindingBase_t::GetValue()
{
} /* size: 0 */

// <021CD6BC> ../public/tier0/utlcommon.h:66
inline void CUtlKeyValuePair<ResourceId_t, CUtlVector<IGenericDataResourceListener::GetValue()
{
} /* size: 0 */

// <025B739E> ../public/tier0/utlcommon.h:66
inline void CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t>::GetValue()
{
} /* size: 0 */

// <0157E746> ../public/tier0/utlcommon.h:66
inline void CUtlKeyValuePair<AnimNodeID, CPackedHandle<CAnimUpdateNodeBase> >::GetValue()
{
} /* size: 0 */

// <0157E608> ../public/tier0/utlcommon.h:66
inline void CUtlKeyValuePair<AnimNodeID, CSmartPtr<CUpdateNodeManager, CRefCountAccessor> >::GetValue()
{
} /* size: 0 */

// <013F1486> ../public/tier0/utlcommon.h:66
inline void CUtlKeyValuePair<HSequence, CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor> >::GetValue()
{
} /* size: 0 */

// <0130AAB5> ../public/tier0/utlcommon.h:66
inline void CUtlKeyValuePair<Reflection::ClassID, CUtlVector<IAnimTagListener::GetValue()
{
} /* size: 0 */

// <01268B39> ../public/tier0/utlcommon.h:66
inline void CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> >::GetValue()
{
} /* size: 0 */

// <011510AE> ../public/tier0/utlcommon.h:66
inline void GetValue(const CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CMotionMetricInstance, CMotionMetricBa this)
{
} /* size: 0 */

// <00F5391E> ../public/tier0/utlcommon.h:66
inline void CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor> >::GetValue()
{
} /* size: 0 */

// <00F522DF> ../public/tier0/utlcommon.h:66
inline void CUtlKeyValuePair<AnimNodeID, CSmartPtr<CAnimNodeBase, CRefCountAccessor> >::GetValue()
{
} /* size: 0 */

// <00F512A2> ../public/tier0/utlcommon.h:66
inline void CUtlKeyValuePair<AnimNodeID, CAnimNodeBase::GetValue()
{
} /* size: 0 */

// <00F4E3EF> ../public/tier0/utlcommon.h:66
inline void GetValue(const CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<Reflection::CInstanceFactory<CAnimMotorInstance, CAnimMotorBase, co this)
{
} /* size: 0 */

// <00E103C5> ../public/tier0/utlcommon.h:66
inline void CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> >::GetValue()
{
} /* size: 0 */

// <00E100BE> ../public/tier0/utlcommon.h:66
inline void CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> >::GetValue()
{
} /* size: 0 */

// <00E0EBBB> ../public/tier0/utlcommon.h:66
inline void CUtlKeyValuePair<AnimParamID, const CAnimParameterBase::GetValue()
{
} /* size: 0 */

// <00E0E9D8> ../public/tier0/utlcommon.h:66
inline void CUtlKeyValuePair<AnimTagID, const CAnimTagBase::GetValue()
{
} /* size: 0 */

// <00BBBF68> ../public/tier0/utlcommon.h:66
inline void CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::GetValue()
{
} /* size: 0 */

// <00BBBD0E> ../public/tier0/utlcommon.h:66
inline void CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::GetValue()
{
} /* size: 0 */

// <009D3334> ../public/tier0/utlcommon.h:66
inline void CUtlKeyValuePair<CUtlStringToken, RenderDescriptorSetHandle_t__::GetValue()
{
} /* size: 0 */

// <009C8112> ../public/tier0/utlcommon.h:66
inline void CUtlKeyValuePair<CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t, CInputLayoutVulkan::GetValue()
{
} /* size: 0 */

// <0070AE15> ../public/tier0/utlcommon.h:66
inline void CUtlKeyValuePair<PipelineCreateInfo_t, PipelineObjectVulkan_t::GetValue()
{
} /* size: 0 */

// <0070A83B> ../public/tier0/utlcommon.h:66
inline void CUtlKeyValuePair<PipelineLayoutCreateInfo_t, PipelineLayoutVulkan_t>::GetValue()
{
} /* size: 0 */

// <00661AC8> ../public/tier0/utlcommon.h:66
inline void CUtlKeyValuePair<long unsigned int, const CShaderVulkanBase::GetValue()
{
} /* size: 0 */

// <004FEFCC> ../public/tier0/utlcommon.h:66
inline void CUtlKeyValuePair<CVulkanImage::GetValue()
{
} /* size: 0 */

// <004D7560> ../public/tier0/utlcommon.h:66
inline void CUtlKeyValuePair<VulkanFramebufferState_t, VkFramebuffer_T::GetValue()
{
} /* size: 0 */

// <004D74A6> ../public/tier0/utlcommon.h:66
inline void CUtlKeyValuePair<VulkanFramebufferState_t, VkRenderPass_T::GetValue()
{
} /* size: 0 */

// <005733EC> ../public/tier0/utlcommon.h:66
inline void CUtlKeyValuePair<char const::GetValue()
{
} /* size: 0 */

// <0025D540> ../public/tier0/utlcommon.h:66
inline void CUtlKeyValuePair<CKeyValuesSystem::SharedStringData_t::GetValue()
{
} /* size: 0 */

// <0025D206> ../public/tier0/utlcommon.h:66
inline void CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t::GetValue()
{
} /* size: 0 */

// <001631CF> ../public/tier0/utlcommon.h:66
inline void CUtlKeyValuePair<unsigned int, const CResourceDiskEnum::GetValue()
{
} /* size: 0 */

// <00162F91> ../public/tier0/utlcommon.h:66
inline void CUtlKeyValuePair<long long unsigned int, char const::GetValue()
{
} /* size: 0 */

// <06E7D906> ../public/tier0/utlcommon.h:67
inline void CUtlKeyValuePair<unsigned int, int>::GetValue()
{
} /* size: 0 */

// <0607EF1B> ../public/tier0/utlcommon.h:67
inline void CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, int>::GetValue()
{
} /* size: 0 */

// <04BACF08> ../public/tier0/utlcommon.h:67
inline void CUtlKeyValuePair<unsigned int, short unsigned int>::GetValue()
{
} /* size: 0 */

// <04AADD78> ../public/tier0/utlcommon.h:67
inline void CUtlKeyValuePair<int, float>::GetValue()
{
} /* size: 0 */

// <01C1C992> ../public/tier0/utlcommon.h:67
inline void CUtlKeyValuePair<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >::GetValue()
{
} /* size: 0 */

// <0157E3F0> ../public/tier0/utlcommon.h:67
inline void CUtlKeyValuePair<AnimNodeID, CSmartPtr<const CAnimNodeBase, CRefCountAccessor> >::GetValue()
{
} /* size: 0 */

// <0157CD28> ../public/tier0/utlcommon.h:67
inline void CUtlKeyValuePair<AnimNodeID, int>::GetValue()
{
} /* size: 0 */

// <0157C378> ../public/tier0/utlcommon.h:67
inline void CUtlKeyValuePair<const CAnimUpdateNodeBase::GetValue()
{
} /* size: 0 */

// <0126530A> ../public/tier0/utlcommon.h:67
inline void CUtlKeyValuePair<AnimOutputID, CNodeConnection>::GetValue()
{
} /* size: 0 */

// <00F5388F> ../public/tier0/utlcommon.h:67
inline void GetValue(const CUtlKeyValuePair<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor> > this)
{
} /* size: 0 */

// <00F502BE> ../public/tier0/utlcommon.h:67
inline void CUtlKeyValuePair<AnimParamID, int>::GetValue()
{
} /* size: 0 */

// <00447FA5> ../public/tier0/utlcommon.h:67
inline void CUtlKeyValuePair<RenderResourceHandle_t__::GetValue()
{
} /* size: 0 */

// <00163463> ../public/tier0/utlcommon.h:67
inline void CUtlKeyValuePair<unsigned int, const CResourceDiskStruct::GetValue()
{
} /* size: 0 */

// <00161313> ../public/tier0/utlcommon.h:67
inline void CUtlKeyValuePair<const CResourceDiskStructField::GetValue()
{
} /* size: 0 */

// <068E83F0> ../public/tier0/utlcommon.h:71
void CUtlKeyValuePair<CUtlString, empty_t>::~CUtlKeyValuePair()
{
} /* size: 0 */

// <068E83D3> ../public/tier0/utlcommon.h:71
inline void CUtlKeyValuePair<CUtlString, empty_t>::~CUtlKeyValuePair()
{
} /* size: 0 */

// <0001B6EF> ../public/tier0/utlcommon.h:71
// member functions: 40
// member variable: 1
// class size: 4
class CUtlKeyValuePair<unsigned int, empty_t> {
	unsigned int m_key; /* 0 4 */
	/* ../public/tier0/utlcommon.h:77 */
	void CUtlKeyValuePair(CUtlKeyValuePair<unsigned int, empty_t>* );
	/* ../public/tier0/utlcommon.h:85 */
	void CUtlKeyValuePair(CUtlKeyValuePair<unsigned int, empty_t>* , const unsigned int& , const empty_t& );
	/* ../public/tier0/utlcommon.h:86 */
	const unsigned int& GetValue(const CUtlKeyValuePair<unsigned int, empty_t>* );
	/* ../public/tier0/utlcommon.h:74 */
	typedef const unsigned int ValueReturn_t;
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, int> *); /* linkage=_ZN16CUtlKeyValuePairIjiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<unsigned int, int> *); /* linkage=_ZN16CUtlKeyValuePairIjiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<unsigned int, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIjiE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, int>(class CUtlKeyValuePair<unsigned int, int> *, const unsigned int  &, const int  &); /* linkage=_ZN16CUtlKeyValuePairIjiEC4IjiEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIj7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, empty_t> *, const unsigned int  &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIj7empty_tEC4ERKjRKS0_ */
	const unsigned int  & GetValue(const class CUtlKeyValuePair<unsigned int, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIj7empty_tE8GetValueEv */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*> *); /* linkage=_ZN16CUtlKeyValuePairIjPN16CKeyValuesSystem18SharedStringData_tEEC4Ev */
	class SharedStringData_t * & GetValue(class CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*> *); /* linkage=_ZN16CUtlKeyValuePairIjPN16CKeyValuesSystem18SharedStringData_tEE8GetValueEv */
	class SharedStringData_t * const & GetValue(const class CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*>  *); /* linkage=_ZNK16CUtlKeyValuePairIjPN16CKeyValuesSystem18SharedStringData_tEE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*>(class CUtlKeyValuePair<unsigned int, CKeyValuesSystem::SharedStringData_t*> *, const unsigned int  &, class SharedStringData_t * const &); /* linkage=_ZN16CUtlKeyValuePairIjPN16CKeyValuesSystem18SharedStringData_tEEC4IjS2_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*> *); /* linkage=_ZN16CUtlKeyValuePairIjPK17CResourceDiskEnumEC4Ev */
	const class CResourceDiskEnum  * & GetValue(class CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*> *); /* linkage=_ZN16CUtlKeyValuePairIjPK17CResourceDiskEnumE8GetValueEv */
	const class CResourceDiskEnum  * const & GetValue(const class CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*>  *); /* linkage=_ZNK16CUtlKeyValuePairIjPK17CResourceDiskEnumE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*>(class CUtlKeyValuePair<unsigned int, const CResourceDiskEnum*> *, const unsigned int  &, const class CResourceDiskEnum  * const &); /* linkage=_ZN16CUtlKeyValuePairIjPK17CResourceDiskEnumEC4IjS2_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*> *); /* linkage=_ZN16CUtlKeyValuePairIjPK19CResourceDiskStructEC4Ev */
	const class CResourceDiskStruct  * & GetValue(class CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*> *); /* linkage=_ZN16CUtlKeyValuePairIjPK19CResourceDiskStructE8GetValueEv */
	const class CResourceDiskStruct  * const & GetValue(const class CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*>  *); /* linkage=_ZNK16CUtlKeyValuePairIjPK19CResourceDiskStructE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*>(class CUtlKeyValuePair<unsigned int, const CResourceDiskStruct*> *, const unsigned int  &, const class CResourceDiskStruct  * const &); /* linkage=_ZN16CUtlKeyValuePairIjPK19CResourceDiskStructEC4IjS2_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, short unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIjtEC4Ev */
	short unsigned int & GetValue(class CUtlKeyValuePair<unsigned int, short unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIjtE8GetValueEv */
	const short unsigned int  & GetValue(const class CUtlKeyValuePair<unsigned int, short unsigned int>  *); /* linkage=_ZNK16CUtlKeyValuePairIjtE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, short unsigned int>(class CUtlKeyValuePair<unsigned int, short unsigned int> *, const unsigned int  &, const short unsigned int  &); /* linkage=_ZN16CUtlKeyValuePairIjtEC4IjtEERKT_RKT0_ */
	void CUtlKeyValuePair<unsigned int>(class CUtlKeyValuePair<unsigned int, empty_t> *, const unsigned int  &); /* linkage=_ZN16CUtlKeyValuePairIj7empty_tEC4IjEERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry> *); /* linkage=_ZN16CUtlKeyValuePairIjN18CVSoundTypeManager12SfxDictEntryEEC4Ev */
	class SfxDictEntry & GetValue(class CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry> *); /* linkage=_ZN16CUtlKeyValuePairIjN18CVSoundTypeManager12SfxDictEntryEE8GetValueEv */
	const class SfxDictEntry  & GetValue(const class CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry>  *); /* linkage=_ZNK16CUtlKeyValuePairIjN18CVSoundTypeManager12SfxDictEntryEE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry>(class CUtlKeyValuePair<unsigned int, CVSoundTypeManager::SfxDictEntry> *, const unsigned int  &, const class SfxDictEntry  &); /* linkage=_ZN16CUtlKeyValuePairIjN18CVSoundTypeManager12SfxDictEntryEEC4IjS1_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t> *); /* linkage=_ZN16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEEC4Ev */
	class FrameBufferScratchTexInfo_t & GetValue(class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t> *); /* linkage=_ZN16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEE8GetValueEv */
	const class FrameBufferScratchTexInfo_t  & GetValue(const class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEE8GetValueEv */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t> *); /* linkage=_ZN16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEED4Ev */
	void CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t>(class CUtlKeyValuePair<unsigned int, CSceneSystem::FrameBufferScratchTexInfo_t> *, const unsigned int  &, const class FrameBufferScratchTexInfo_t  &); /* linkage=_ZN16CUtlKeyValuePairIjN12CSceneSystem27FrameBufferScratchTexInfo_tEEC4IjS1_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t> *); /* linkage=_ZN16CUtlKeyValuePairIj28CAnimationDecodeCacheEntry_tEC4Ev */
	class CAnimationDecodeCacheEntry_t & GetValue(class CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t> *); /* linkage=_ZN16CUtlKeyValuePairIj28CAnimationDecodeCacheEntry_tE8GetValueEv */
	const class CAnimationDecodeCacheEntry_t  & GetValue(const class CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIj28CAnimationDecodeCacheEntry_tE8GetValueEv */
	void CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t>(class CUtlKeyValuePair<unsigned int, CAnimationDecodeCacheEntry_t> *, const unsigned int  &, const class CAnimationDecodeCacheEntry_t  &); /* linkage=_ZN16CUtlKeyValuePairIj28CAnimationDecodeCacheEntry_tEC4IjS0_EERKT_RKT0_ */
};

// <00AC11C0> ../public/tier0/utlcommon.h:71
// member functions: 8
// member variable: 1
// class size: 12
class CUtlKeyValuePair<b3ContactId, empty_t> {
	b3ContactId m_key; /* 0 12 */
	/* ../public/tier0/utlcommon.h:77 */
	void CUtlKeyValuePair(CUtlKeyValuePair<b3ContactId, empty_t>* );
	/* ../public/tier0/utlcommon.h:85 */
	void CUtlKeyValuePair(CUtlKeyValuePair<b3ContactId, empty_t>* , const b3ContactId& , const empty_t& );
	/* ../public/tier0/utlcommon.h:86 */
	const b3ContactId& GetValue(const CUtlKeyValuePair<b3ContactId, empty_t>* );
	/* ../public/tier0/utlcommon.h:74 */
	typedef const class b3ContactId ValueReturn_t;
	/* ../public/tier0/utlcommon.h:80 */
	void CUtlKeyValuePair<b3ContactId>(CUtlKeyValuePair<b3ContactId, empty_t>* , const b3ContactId& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<b3ContactId, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairI11b3ContactId7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<b3ContactId, empty_t> *, const class b3ContactId  &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairI11b3ContactId7empty_tEC4ERKS0_RKS1_ */
	const class b3ContactId  & GetValue(const class CUtlKeyValuePair<b3ContactId, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairI11b3ContactId7empty_tE8GetValueEv */
	void CUtlKeyValuePair<b3ContactId>(class CUtlKeyValuePair<b3ContactId, empty_t> *, const class b3ContactId  &); /* linkage=_ZN16CUtlKeyValuePairI11b3ContactId7empty_tEC4IS0_EERKT_ */
};

// <0224D8BA> ../public/tier0/utlcommon.h:71
// member functions: 8
// member variable: 1
// class size: 8
class CUtlKeyValuePair<CLoadingResource*, empty_t> {
	CLoadingResource * m_key; /* 0 8 */
	/* ../public/tier0/utlcommon.h:77 */
	void CUtlKeyValuePair(CUtlKeyValuePair<CLoadingResource*, empty_t>* );
	/* ../public/tier0/utlcommon.h:85 */
	void CUtlKeyValuePair(CUtlKeyValuePair<CLoadingResource*, empty_t>* , CLoadingResource* const& , const empty_t& );
	/* ../public/tier0/utlcommon.h:86 */
	CLoadingResource* const& GetValue(const CUtlKeyValuePair<CLoadingResource*, empty_t>* );
	/* ../public/tier0/utlcommon.h:74 */
	typedef const class CLoadingResource * ValueReturn_t;
	/* ../public/tier0/utlcommon.h:80 */
	void CUtlKeyValuePair<CLoadingResource*>(CUtlKeyValuePair<CLoadingResource*, empty_t>* , CLoadingResource* const& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<CLoadingResource*, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIP16CLoadingResource7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CLoadingResource*, empty_t> *, class CLoadingResource * const &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIP16CLoadingResource7empty_tEC4ERKS1_RKS2_ */
	class CLoadingResource * const & GetValue(const class CUtlKeyValuePair<CLoadingResource*, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIP16CLoadingResource7empty_tE8GetValueEv */
	void CUtlKeyValuePair<CLoadingResource*>(class CUtlKeyValuePair<CLoadingResource*, empty_t> *, class CLoadingResource * const &); /* linkage=_ZN16CUtlKeyValuePairIP16CLoadingResource7empty_tEC4IS1_EERKT_ */
};

// <023E189D> ../public/tier0/utlcommon.h:71
// member functions: 48
// member variable: 1
// class size: 8
class CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t> {
	const class ResourceBindingBase_t * m_key; /* 0 8 */
	/* ../public/tier0/utlcommon.h:77 */
	void CUtlKeyValuePair(CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t>* );
	/* ../public/tier0/utlcommon.h:85 */
	void CUtlKeyValuePair(CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t>* , const ResourceBindingBase_t* const& , const empty_t& );
	/* ../public/tier0/utlcommon.h:86 */
	const ResourceBindingBase_t* const& GetValue(const CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t>* );
	/* ../public/tier0/utlcommon.h:74 */
	typedef const const class ResourceBindingBase_t * ValueReturn_t;
	/* ../public/tier0/utlcommon.h:80 */
	void CUtlKeyValuePair<const ResourceBindingBase_t*>(CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t>* , const ResourceBindingBase_t* const& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*> *); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructFieldPK32KV3ConvertSpecialFieldBehavior_tEC4Ev */
	const class KV3ConvertSpecialFieldBehavior_t  * & GetValue(class CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*> *); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructFieldPK32KV3ConvertSpecialFieldBehavior_tE8GetValueEv */
	const class KV3ConvertSpecialFieldBehavior_t  * const & GetValue(const class CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK24CResourceDiskStructFieldPK32KV3ConvertSpecialFieldBehavior_tE8GetValueEv */
	void CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*>(class CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*> *, const class CResourceDiskStructField  * const &, const class KV3ConvertSpecialFieldBehavior_t  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructFieldPK32KV3ConvertSpecialFieldBehavior_tEC4IS2_S5_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CResourceDiskStructField*, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructField7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CResourceDiskStructField*, empty_t> *, const class CResourceDiskStructField  * const &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructField7empty_tEC4ERKS2_RKS3_ */
	const class CResourceDiskStructField  * const & GetValue(const class CUtlKeyValuePair<const CResourceDiskStructField*, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK24CResourceDiskStructField7empty_tE8GetValueEv */
	void CUtlKeyValuePair<const CResourceDiskStructField*>(class CUtlKeyValuePair<const CResourceDiskStructField*, empty_t> *, const class CResourceDiskStructField  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructField7empty_tEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_t7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t> *, const class ResourceBindingBase_t  * const &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_t7empty_tEC4ERKS2_RKS3_ */
	const class ResourceBindingBase_t  * const & GetValue(const class CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK21ResourceBindingBase_t7empty_tE8GetValueEv */
	void CUtlKeyValuePair<const ResourceBindingBase_t*>(class CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t> *, const class ResourceBindingBase_t  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_t7empty_tEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_tjEC4Ev */
	unsigned int & GetValue(class CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_tjE8GetValueEv */
	const unsigned int  & GetValue(const class CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK21ResourceBindingBase_tjE8GetValueEv */
	void CUtlKeyValuePair<const ResourceBindingBase_t*>(class CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int> *, const class ResourceBindingBase_t  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_tjEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CEnvMapSceneObject*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK18CEnvMapSceneObjectiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<const CEnvMapSceneObject*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK18CEnvMapSceneObjectiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<const CEnvMapSceneObject*, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK18CEnvMapSceneObjectiE8GetValueEv */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const IMaterial2*, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIPK10IMaterial27empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const IMaterial2*, empty_t> *, const class IMaterial2  * const &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIPK10IMaterial27empty_tEC4ERKS2_RKS3_ */
	const class IMaterial2  * const & GetValue(const class CUtlKeyValuePair<const IMaterial2*, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK10IMaterial27empty_tE8GetValueEv */
	void CUtlKeyValuePair<const IMaterial2*>(class CUtlKeyValuePair<const IMaterial2*, empty_t> *, const class IMaterial2  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK10IMaterial27empty_tEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const qhVertex*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<const qhVertex*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<const qhVertex*, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK8qhVertexiE8GetValueEv */
	void CUtlKeyValuePair<const qhVertex*, int>(class CUtlKeyValuePair<const qhVertex*, int> *, const class qhVertex  * const &, const int  &); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexiEC4IS2_iEERKT_RKT0_ */
	void CUtlKeyValuePair<const qhVertex*>(class CUtlKeyValuePair<const qhVertex*, int> *, const class qhVertex  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexiEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const qhFace*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK6qhFaceiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<const qhFace*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK6qhFaceiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<const qhFace*, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK6qhFaceiE8GetValueEv */
	void CUtlKeyValuePair<const qhFace*, int>(class CUtlKeyValuePair<const qhFace*, int> *, const class qhFace  * const &, const int  &); /* linkage=_ZN16CUtlKeyValuePairIPK6qhFaceiEC4IS2_iEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIF); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEEC4Ev */
	class ComponentHandleWithListPointer_t & GetValue(class CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIF); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEE8GetValueEv */
	const class ComponentHandleWithListPointer_t  & GetValue(const class CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, ); /* linkage=_ZNK16CUtlKeyValuePairIPK8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEE8GetValueEv */
	void CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>(class CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIF, const class qhVertex  * const &, const class ComponentHandleWithListPointer_t  &); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEEC4IS2_SB_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus> *); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase13CStrideStatusEC4Ev */
	class CStrideStatus & GetValue(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus> *); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase13CStrideStatusE8GetValueEv */
	const class CStrideStatus  & GetValue(const class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK19CAnimUpdateNodeBase13CStrideStatusE8GetValueEv */
	void CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus>(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus> *, const class CAnimUpdateNodeBase  * const &, const class CStrideStatus  &); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase13CStrideStatusEC4IS2_S3_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion> *); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase11CRootMotionEC4Ev */
	class CRootMotion & GetValue(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion> *); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase11CRootMotionE8GetValueEv */
	const class CRootMotion  & GetValue(const class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK19CAnimUpdateNodeBase11CRootMotionE8GetValueEv */
	void CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion>(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion> *, const class CAnimUpdateNodeBase  * const &, const class CRootMotion  &); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase11CRootMotionEC4IS2_S3_EERKT_RKT0_ */
};

// <02DB5244> ../public/tier0/utlcommon.h:71
// member functions: 47
// member variable: 1
// class size: 8
class CUtlKeyValuePair<const IMaterial2*, empty_t> {
	const class IMaterial2 * m_key; /* 0 8 */
	/* ../public/tier0/utlcommon.h:77 */
	void CUtlKeyValuePair(CUtlKeyValuePair<const IMaterial2*, empty_t>* );
	/* ../public/tier0/utlcommon.h:85 */
	void CUtlKeyValuePair(CUtlKeyValuePair<const IMaterial2*, empty_t>* , const IMaterial2* const& , const empty_t& );
	/* ../public/tier0/utlcommon.h:86 */
	const IMaterial2* const& GetValue(const CUtlKeyValuePair<const IMaterial2*, empty_t>* );
	/* ../public/tier0/utlcommon.h:74 */
	typedef const const class IMaterial2 * ValueReturn_t;
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*> *); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructFieldPK32KV3ConvertSpecialFieldBehavior_tEC4Ev */
	const class KV3ConvertSpecialFieldBehavior_t  * & GetValue(class CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*> *); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructFieldPK32KV3ConvertSpecialFieldBehavior_tE8GetValueEv */
	const class KV3ConvertSpecialFieldBehavior_t  * const & GetValue(const class CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK24CResourceDiskStructFieldPK32KV3ConvertSpecialFieldBehavior_tE8GetValueEv */
	void CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*>(class CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*> *, const class CResourceDiskStructField  * const &, const class KV3ConvertSpecialFieldBehavior_t  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructFieldPK32KV3ConvertSpecialFieldBehavior_tEC4IS2_S5_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CResourceDiskStructField*, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructField7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CResourceDiskStructField*, empty_t> *, const class CResourceDiskStructField  * const &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructField7empty_tEC4ERKS2_RKS3_ */
	const class CResourceDiskStructField  * const & GetValue(const class CUtlKeyValuePair<const CResourceDiskStructField*, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK24CResourceDiskStructField7empty_tE8GetValueEv */
	void CUtlKeyValuePair<const CResourceDiskStructField*>(class CUtlKeyValuePair<const CResourceDiskStructField*, empty_t> *, const class CResourceDiskStructField  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructField7empty_tEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_t7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t> *, const class ResourceBindingBase_t  * const &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_t7empty_tEC4ERKS2_RKS3_ */
	const class ResourceBindingBase_t  * const & GetValue(const class CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK21ResourceBindingBase_t7empty_tE8GetValueEv */
	void CUtlKeyValuePair<const ResourceBindingBase_t*>(class CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t> *, const class ResourceBindingBase_t  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_t7empty_tEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_tjEC4Ev */
	unsigned int & GetValue(class CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_tjE8GetValueEv */
	const unsigned int  & GetValue(const class CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK21ResourceBindingBase_tjE8GetValueEv */
	void CUtlKeyValuePair<const ResourceBindingBase_t*>(class CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int> *, const class ResourceBindingBase_t  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_tjEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CEnvMapSceneObject*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK18CEnvMapSceneObjectiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<const CEnvMapSceneObject*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK18CEnvMapSceneObjectiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<const CEnvMapSceneObject*, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK18CEnvMapSceneObjectiE8GetValueEv */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const IMaterial2*, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIPK10IMaterial27empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const IMaterial2*, empty_t> *, const class IMaterial2  * const &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIPK10IMaterial27empty_tEC4ERKS2_RKS3_ */
	const class IMaterial2  * const & GetValue(const class CUtlKeyValuePair<const IMaterial2*, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK10IMaterial27empty_tE8GetValueEv */
	void CUtlKeyValuePair<const IMaterial2*>(class CUtlKeyValuePair<const IMaterial2*, empty_t> *, const class IMaterial2  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK10IMaterial27empty_tEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const qhVertex*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<const qhVertex*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<const qhVertex*, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK8qhVertexiE8GetValueEv */
	void CUtlKeyValuePair<const qhVertex*, int>(class CUtlKeyValuePair<const qhVertex*, int> *, const class qhVertex  * const &, const int  &); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexiEC4IS2_iEERKT_RKT0_ */
	void CUtlKeyValuePair<const qhVertex*>(class CUtlKeyValuePair<const qhVertex*, int> *, const class qhVertex  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexiEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const qhFace*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK6qhFaceiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<const qhFace*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK6qhFaceiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<const qhFace*, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK6qhFaceiE8GetValueEv */
	void CUtlKeyValuePair<const qhFace*, int>(class CUtlKeyValuePair<const qhFace*, int> *, const class qhFace  * const &, const int  &); /* linkage=_ZN16CUtlKeyValuePairIPK6qhFaceiEC4IS2_iEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIF); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEEC4Ev */
	class ComponentHandleWithListPointer_t & GetValue(class CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIF); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEE8GetValueEv */
	const class ComponentHandleWithListPointer_t  & GetValue(const class CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, ); /* linkage=_ZNK16CUtlKeyValuePairIPK8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEE8GetValueEv */
	void CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>(class CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIF, const class qhVertex  * const &, const class ComponentHandleWithListPointer_t  &); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEEC4IS2_SB_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus> *); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase13CStrideStatusEC4Ev */
	class CStrideStatus & GetValue(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus> *); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase13CStrideStatusE8GetValueEv */
	const class CStrideStatus  & GetValue(const class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK19CAnimUpdateNodeBase13CStrideStatusE8GetValueEv */
	void CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus>(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus> *, const class CAnimUpdateNodeBase  * const &, const class CStrideStatus  &); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase13CStrideStatusEC4IS2_S3_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion> *); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase11CRootMotionEC4Ev */
	class CRootMotion & GetValue(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion> *); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase11CRootMotionE8GetValueEv */
	const class CRootMotion  & GetValue(const class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK19CAnimUpdateNodeBase11CRootMotionE8GetValueEv */
	void CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion>(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion> *, const class CAnimUpdateNodeBase  * const &, const class CRootMotion  &); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase11CRootMotionEC4IS2_S3_EERKT_RKT0_ */
};

// <04CA5F30> ../public/tier0/utlcommon.h:71
// member functions: 24
// member variable: 1
// class size: 8
class CUtlKeyValuePair<long long unsigned int, empty_t> {
	long long unsigned int m_key; /* 0 8 */
	/* ../public/tier0/utlcommon.h:77 */
	void CUtlKeyValuePair(CUtlKeyValuePair<long long unsigned int, empty_t>* );
	/* ../public/tier0/utlcommon.h:85 */
	void CUtlKeyValuePair(CUtlKeyValuePair<long long unsigned int, empty_t>* , const long long unsigned int& , const empty_t& );
	/* ../public/tier0/utlcommon.h:86 */
	const long long unsigned int& GetValue(const CUtlKeyValuePair<long long unsigned int, empty_t>* );
	/* ../public/tier0/utlcommon.h:74 */
	typedef const long long unsigned int ValueReturn_t;
	/* ../public/tier0/utlcommon.h:80 */
	void CUtlKeyValuePair<long long unsigned int>(CUtlKeyValuePair<long long unsigned int, empty_t>* , const long long unsigned int& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<long long unsigned int, char const*> *); /* linkage=_ZN16CUtlKeyValuePairIyPKcEC4Ev */
	const char  * & GetValue(class CUtlKeyValuePair<long long unsigned int, char const*> *); /* linkage=_ZN16CUtlKeyValuePairIyPKcE8GetValueEv */
	const char  * const & GetValue(const class CUtlKeyValuePair<long long unsigned int, char const*>  *); /* linkage=_ZNK16CUtlKeyValuePairIyPKcE8GetValueEv */
	void CUtlKeyValuePair<long long unsigned int, char const*>(class CUtlKeyValuePair<long long unsigned int, char const*> *, const long long unsigned int  &, const char  * const &); /* linkage=_ZN16CUtlKeyValuePairIyPKcEC4IyS1_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<long unsigned int, const CShaderVulkanBase*> *); /* linkage=_ZN16CUtlKeyValuePairImPK17CShaderVulkanBaseEC4Ev */
	const class CShaderVulkanBase  * & GetValue(class CUtlKeyValuePair<long unsigned int, const CShaderVulkanBase*> *); /* linkage=_ZN16CUtlKeyValuePairImPK17CShaderVulkanBaseE8GetValueEv */
	const class CShaderVulkanBase  * const & GetValue(const class CUtlKeyValuePair<long unsigned int, const CShaderVulkanBase*>  *); /* linkage=_ZNK16CUtlKeyValuePairImPK17CShaderVulkanBaseE8GetValueEv */
	void CUtlKeyValuePair<long unsigned int, const CShaderVulkanBase*>(class CUtlKeyValuePair<long unsigned int, const CShaderVulkanBase*> *, const long unsigned int  &, const class CShaderVulkanBase  * const &); /* linkage=_ZN16CUtlKeyValuePairImPK17CShaderVulkanBaseEC4ImS2_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t> *); /* linkage=_ZN16CUtlKeyValuePairIyN18CShaderTableVulkan24RefCountedShaderModule_tEEC4Ev */
	class RefCountedShaderModule_t & GetValue(class CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t> *); /* linkage=_ZN16CUtlKeyValuePairIyN18CShaderTableVulkan24RefCountedShaderModule_tEE8GetValueEv */
	const class RefCountedShaderModule_t  & GetValue(const class CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIyN18CShaderTableVulkan24RefCountedShaderModule_tEE8GetValueEv */
	void CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>(class CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t> *, const long long unsigned int  &, const class RefCountedShaderModule_t  &); /* linkage=_ZN16CUtlKeyValuePairIyN18CShaderTableVulkan24RefCountedShaderModule_tEEC4IyS1_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t> *); /* linkage=_ZN16CUtlKeyValuePairIyN18CShaderTableVulkan22RefCountedShaderFile_tEEC4Ev */
	class RefCountedShaderFile_t & GetValue(class CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t> *); /* linkage=_ZN16CUtlKeyValuePairIyN18CShaderTableVulkan22RefCountedShaderFile_tEE8GetValueEv */
	const class RefCountedShaderFile_t  & GetValue(const class CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIyN18CShaderTableVulkan22RefCountedShaderFile_tEE8GetValueEv */
	void CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>(class CUtlKeyValuePair<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t> *, const long long unsigned int  &, const class RefCountedShaderFile_t  &); /* linkage=_ZN16CUtlKeyValuePairIyN18CShaderTableVulkan22RefCountedShaderFile_tEEC4IyS1_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<long long unsigned int, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIy7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<long long unsigned int, empty_t> *, const long long unsigned int  &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIy7empty_tEC4ERKyRKS0_ */
	const long long unsigned int  & GetValue(const class CUtlKeyValuePair<long long unsigned int, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIy7empty_tE8GetValueEv */
	void CUtlKeyValuePair<long long unsigned int>(class CUtlKeyValuePair<long long unsigned int, empty_t> *, const long long unsigned int  &); /* linkage=_ZN16CUtlKeyValuePairIy7empty_tEC4IyEERKT_ */
};

// <05C684A0> ../public/tier0/utlcommon.h:71
// member functions: 3
// member variable: 1
// class size: 16
class CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t> {
	ComponentHandleWithListPointer_t m_key; /* 0 16 */
	/* ../public/tier0/utlcommon.h:77 */
	void CUtlKeyValuePair(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t>* );
	/* ../public/tier0/utlcommon.h:85 */
	void CUtlKeyValuePair(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t>* , const ComponentHandleWithListPointer_t& , const empty_t& );
	/* ../public/tier0/utlcommon.h:86 */
	const ComponentHandleWithListPointer_t& GetValue(const CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t>* );
	/* ../public/tier0/utlcommon.h:74 */
	typedef const class ComponentHandleWithListPointer_t ValueReturn_t;
};

// <05E46F19> ../public/tier0/utlcommon.h:71
// member functions: 12
// member variable: 1
// class size: 16
class CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t, empty_t> {
	ComponentHandleWithListPointer_t m_key; /* 0 16 */
	/* ../public/tier0/utlcommon.h:77 */
	void CUtlKeyValuePair(CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon);
	/* ../public/tier0/utlcommon.h:85 */
	void CUtlKeyValuePair(CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon, const ComponentHandleWithListPointer_t& , const empty_t& );
	/* ../public/tier0/utlcommon.h:86 */
	const ComponentHandleWithListPointer_t& GetValue(const CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::);
	/* ../public/tier0/utlcommon.h:74 */
	typedef const class ComponentHandleWithListPointer_t ValueReturn_t;
	/* ../public/tier0/utlcommon.h:80 */
	void CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>(CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon, const ComponentHandleWithListPointer_t& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon); /* linkage=_ZN16CUtlKeyValuePairIN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIVRVertexData_t7empty_t17HullIVRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tE6VectorEC4Ev */
	class Vector & GetValue(class CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon); /* linkage=_ZN16CUtlKeyValuePairIN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIVRVertexData_t7empty_t17HullIVRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tE6VectorE8GetValueEv */
	const class Vector  & GetValue(const class CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::); /* linkage=_ZNK16CUtlKeyValuePairIN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIVRVertexData_t7empty_t17HullIVRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tE6VectorE8GetValueEv */
	void CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>(class CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon, const class ComponentHandleWithListPointer_t  &); /* linkage=_ZN16CUtlKeyValuePairIN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIVRVertexData_t7empty_t17HullIVRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tE6VectorEC4IS8_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon); /* linkage=_ZN16CUtlKeyValuePairIN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIVRVertexData_t7empty_t17HullIVRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tES3_EC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon, const class ComponentHandleWithListPointer_t  &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIVRVertexData_t7empty_t17HullIVRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tES3_EC4ERKS8_RKS3_ */
	const class ComponentHandleWithListPointer_t  & GetValue(const class CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::); /* linkage=_ZNK16CUtlKeyValuePairIN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIVRVertexData_t7empty_t17HullIVRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tES3_E8GetValueEv */
	void CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>(class CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::Compon, const class ComponentHandleWithListPointer_t  &); /* linkage=_ZN16CUtlKeyValuePairIN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIVRVertexData_t7empty_t17HullIVRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tES3_EC4IS8_EERKT_ */
};

// <0605742B> ../public/tier0/utlcommon.h:71
// member functions: 4
// member variable: 1
// class size: 16
class CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t> {
	ComponentHandleWithListPointer_t m_key; /* 0 16 */
	/* ../public/tier0/utlcommon.h:77 */
	void CUtlKeyValuePair(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t>* );
	/* ../public/tier0/utlcommon.h:85 */
	void CUtlKeyValuePair(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t>* , const ComponentHandleWithListPointer_t& , const empty_t& );
	/* ../public/tier0/utlcommon.h:86 */
	const ComponentHandleWithListPointer_t& GetValue(const CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t>* );
	/* ../public/tier0/utlcommon.h:74 */
	typedef const class ComponentHandleWithListPointer_t ValueReturn_t;
	/* ../public/tier0/utlcommon.h:80 */
	void CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t>* , const ComponentHandleWithListPointer_t& );
};

// <0605A1A0> ../public/tier0/utlcommon.h:71
// member functions: 4
// member variable: 1
// class size: 16
class CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t> {
	ComponentHandleWithListPointer_t m_key; /* 0 16 */
	/* ../public/tier0/utlcommon.h:77 */
	void CUtlKeyValuePair(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t>* );
	/* ../public/tier0/utlcommon.h:85 */
	void CUtlKeyValuePair(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t>* , const ComponentHandleWithListPointer_t& , const empty_t& );
	/* ../public/tier0/utlcommon.h:86 */
	const ComponentHandleWithListPointer_t& GetValue(const CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t>* );
	/* ../public/tier0/utlcommon.h:74 */
	typedef const class ComponentHandleWithListPointer_t ValueReturn_t;
	/* ../public/tier0/utlcommon.h:80 */
	void CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t>* , const ComponentHandleWithListPointer_t& );
};

// <0605B94D> ../public/tier0/utlcommon.h:71
// member functions: 3
// member variable: 1
// class size: 16
class CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, empty_t> {
	ComponentHandleWithListPointer_t m_key; /* 0 16 */
	/* ../public/tier0/utlcommon.h:77 */
	void CUtlKeyValuePair(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, empty_t>* );
	/* ../public/tier0/utlcommon.h:85 */
	void CUtlKeyValuePair(CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, empty_t>* , const ComponentHandleWithListPointer_t& , const empty_t& );
	/* ../public/tier0/utlcommon.h:86 */
	const ComponentHandleWithListPointer_t& GetValue(const CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t, empty_t>* );
	/* ../public/tier0/utlcommon.h:74 */
	typedef const class ComponentHandleWithListPointer_t ValueReturn_t;
};

// <0605D06C> ../public/tier0/utlcommon.h:71
// member functions: 30
// member variable: 1
// class size: 4
class CUtlKeyValuePair<int, empty_t> {
	int m_key; /* 0 4 */
	/* ../public/tier0/utlcommon.h:77 */
	void CUtlKeyValuePair(CUtlKeyValuePair<int, empty_t>* );
	/* ../public/tier0/utlcommon.h:85 */
	void CUtlKeyValuePair(CUtlKeyValuePair<int, empty_t>* , const int& , const empty_t& );
	/* ../public/tier0/utlcommon.h:86 */
	const int& GetValue(const CUtlKeyValuePair<int, empty_t>* );
	/* ../public/tier0/utlcommon.h:74 */
	typedef const int ValueReturn_t;
	/* ../public/tier0/utlcommon.h:80 */
	void CUtlKeyValuePair<int>(CUtlKeyValuePair<int, empty_t>* , const int& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, float> *); /* linkage=_ZN16CUtlKeyValuePairIifEC4Ev */
	float & GetValue(class CUtlKeyValuePair<int, float> *); /* linkage=_ZN16CUtlKeyValuePairIifE8GetValueEv */
	const float  & GetValue(const class CUtlKeyValuePair<int, float>  *); /* linkage=_ZNK16CUtlKeyValuePairIifE8GetValueEv */
	void CUtlKeyValuePair<int, float>(class CUtlKeyValuePair<int, float> *, const int  &, const float  &); /* linkage=_ZN16CUtlKeyValuePairIifEC4IifEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIijEC4Ev */
	unsigned int & GetValue(class CUtlKeyValuePair<int, unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIijE8GetValueEv */
	const unsigned int  & GetValue(const class CUtlKeyValuePair<int, unsigned int>  *); /* linkage=_ZNK16CUtlKeyValuePairIijE8GetValueEv */
	void CUtlKeyValuePair<int, unsigned int>(class CUtlKeyValuePair<int, unsigned int> *, const int  &, const unsigned int  &); /* linkage=_ZN16CUtlKeyValuePairIijEC4IijEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, int> *); /* linkage=_ZN16CUtlKeyValuePairIiiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<int, int> *); /* linkage=_ZN16CUtlKeyValuePairIiiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<int, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIiiE8GetValueEv */
	void CUtlKeyValuePair<int, int>(class CUtlKeyValuePair<int, int> *, const int  &, const int  &); /* linkage=_ZN16CUtlKeyValuePairIiiEC4IiiEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIi7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, empty_t> *, const int  &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIi7empty_tEC4ERKiRKS0_ */
	const int  & GetValue(const class CUtlKeyValuePair<int, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIi7empty_tE8GetValueEv */
	void CUtlKeyValuePair<int>(class CUtlKeyValuePair<int, empty_t> *, const int  &); /* linkage=_ZN16CUtlKeyValuePairIi7empty_tEC4IiEERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrI21CAnimNodeInstanceBase17CRefCountAccessorEEC4Ev */
	class CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> & GetValue(class CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrI21CAnimNodeInstanceBase17CRefCountAccessorEE8GetValueEv */
	const class CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>  & GetValue(const class CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> >  *); /* linkage=_ZNK16CUtlKeyValuePairIi9CSmartPtrI21CAnimNodeInstanceBase17CRefCountAccessorEE8GetValueEv */
	void CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase> >(class CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> > *, const int  &, const class CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>  &); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrI21CAnimNodeInstanceBase17CRefCountAccessorEEC4IiS3_EERKT_RKT0_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrI21CAnimNodeInstanceBase17CRefCountAccessorEED4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrIK15CActivityValues17CRefCountAccessorEEC4Ev */
	class CSmartPtr<const CActivityValues, CRefCountAccessor> & GetValue(class CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrIK15CActivityValues17CRefCountAccessorEE8GetValueEv */
	const class CSmartPtr<const CActivityValues, CRefCountAccessor>  & GetValue(const class CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> >  *); /* linkage=_ZNK16CUtlKeyValuePairIi9CSmartPtrIK15CActivityValues17CRefCountAccessorEE8GetValueEv */
	void CUtlKeyValuePair<int, CSmartPtr<const CActivityValues> >(class CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> > *, const int  &, const class CSmartPtr<const CActivityValues, CRefCountAccessor>  &); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrIK15CActivityValues17CRefCountAccessorEEC4IiS4_EERKT_RKT0_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrIK15CActivityValues17CRefCountAccessorEED4Ev */
};

// <068D6284> ../public/tier0/utlcommon.h:71
// member functions: 25
// member variable: 1
// class size: 8
class CUtlKeyValuePair<CUtlString, empty_t> {
	CUtlString m_key; /* 0 8 */
	/* ../public/tier0/utlcommon.h:77 */
	void CUtlKeyValuePair(CUtlKeyValuePair<CUtlString, empty_t>* );
	/* ../public/tier0/utlcommon.h:85 */
	void CUtlKeyValuePair(CUtlKeyValuePair<CUtlString, empty_t>* , const CUtlString& , const empty_t& );
	/* ../public/tier0/utlcommon.h:86 */
	const CUtlString& GetValue(const CUtlKeyValuePair<CUtlString, empty_t>* );
	/* ../public/tier0/utlcommon.h:74 */
	typedef const class CUtlString ValueReturn_t;
	/* ../public/tier0/utlcommon.h:80 */
	void CUtlKeyValuePair<CUtlString>(CUtlKeyValuePair<CUtlString, empty_t>* , const CUtlString& );
	void ~CUtlKeyValuePair(CUtlKeyValuePair<CUtlString, empty_t>* );
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, CBufferString> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString13CBufferStringEC4Ev */
	class CBufferString & GetValue(class CUtlKeyValuePair<CUtlString, CBufferString> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString13CBufferStringE8GetValueEv */
	const class CBufferString  & GetValue(const class CUtlKeyValuePair<CUtlString, CBufferString>  *); /* linkage=_ZNK16CUtlKeyValuePairI10CUtlString13CBufferStringE8GetValueEv */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, CBufferString> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString13CBufferStringED4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, empty_t> *, const class CUtlString  &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString7empty_tEC4ERKS0_RKS1_ */
	const class CUtlString  & GetValue(const class CUtlKeyValuePair<CUtlString, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairI10CUtlString7empty_tE8GetValueEv */
	void CUtlKeyValuePair<CUtlString>(class CUtlKeyValuePair<CUtlString, empty_t> *, const class CUtlString  &); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString7empty_tEC4IS0_EERKT_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString7empty_tED4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, int> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlStringiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<CUtlString, int> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlStringiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<CUtlString, int>  *); /* linkage=_ZNK16CUtlKeyValuePairI10CUtlStringiE8GetValueEv */
	void CUtlKeyValuePair<CUtlString, int>(class CUtlKeyValuePair<CUtlString, int> *, const class CUtlString  &, const int  &); /* linkage=_ZN16CUtlKeyValuePairI10CUtlStringiEC4IS0_iEERKT_RKT0_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, int> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlStringiED4Ev */
	void CUtlKeyValuePair<CUtlString>(class CUtlKeyValuePair<CUtlString, int> *, const class CUtlString  &); /* linkage=_ZN16CUtlKeyValuePairI10CUtlStringiEC4IS0_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString9CSmartPtrI9CSubGraph17CRefCountAccessorEEC4Ev */
	class CSmartPtr<CSubGraph, CRefCountAccessor> & GetValue(class CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString9CSmartPtrI9CSubGraph17CRefCountAccessorEE8GetValueEv */
	const class CSmartPtr<CSubGraph, CRefCountAccessor>  & GetValue(const class CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> >  *); /* linkage=_ZNK16CUtlKeyValuePairI10CUtlString9CSmartPtrI9CSubGraph17CRefCountAccessorEE8GetValueEv */
	void CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph> >(class CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> > *, const class CUtlString  &, const class CSmartPtr<CSubGraph, CRefCountAccessor>  &); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString9CSmartPtrI9CSubGraph17CRefCountAccessorEEC4IS0_S4_EERKT_RKT0_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString9CSmartPtrI9CSubGraph17CRefCountAccessorEED4Ev */
};

// <0004A876> ../public/tier0/utlcommon.h:71
// member functions: 29
// member variable: 1
// class size: 4
class CUtlKeyValuePair<int, empty_t> {
	int m_key; /* 0 4 */
	/* ../public/tier0/utlcommon.h:77 */
	void CUtlKeyValuePair(CUtlKeyValuePair<int, empty_t>* );
	/* ../public/tier0/utlcommon.h:85 */
	void CUtlKeyValuePair(CUtlKeyValuePair<int, empty_t>* , const int& , const empty_t& );
	/* ../public/tier0/utlcommon.h:86 */
	const int& GetValue(const CUtlKeyValuePair<int, empty_t>* );
	/* ../public/tier0/utlcommon.h:74 */
	typedef const int ValueReturn_t;
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, float> *); /* linkage=_ZN16CUtlKeyValuePairIifEC4Ev */
	float & GetValue(class CUtlKeyValuePair<int, float> *); /* linkage=_ZN16CUtlKeyValuePairIifE8GetValueEv */
	const float  & GetValue(const class CUtlKeyValuePair<int, float>  *); /* linkage=_ZNK16CUtlKeyValuePairIifE8GetValueEv */
	void CUtlKeyValuePair<int, float>(class CUtlKeyValuePair<int, float> *, const int  &, const float  &); /* linkage=_ZN16CUtlKeyValuePairIifEC4IifEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIijEC4Ev */
	unsigned int & GetValue(class CUtlKeyValuePair<int, unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIijE8GetValueEv */
	const unsigned int  & GetValue(const class CUtlKeyValuePair<int, unsigned int>  *); /* linkage=_ZNK16CUtlKeyValuePairIijE8GetValueEv */
	void CUtlKeyValuePair<int, unsigned int>(class CUtlKeyValuePair<int, unsigned int> *, const int  &, const unsigned int  &); /* linkage=_ZN16CUtlKeyValuePairIijEC4IijEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, int> *); /* linkage=_ZN16CUtlKeyValuePairIiiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<int, int> *); /* linkage=_ZN16CUtlKeyValuePairIiiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<int, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIiiE8GetValueEv */
	void CUtlKeyValuePair<int, int>(class CUtlKeyValuePair<int, int> *, const int  &, const int  &); /* linkage=_ZN16CUtlKeyValuePairIiiEC4IiiEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIi7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, empty_t> *, const int  &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIi7empty_tEC4ERKiRKS0_ */
	const int  & GetValue(const class CUtlKeyValuePair<int, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIi7empty_tE8GetValueEv */
	void CUtlKeyValuePair<int>(class CUtlKeyValuePair<int, empty_t> *, const int  &); /* linkage=_ZN16CUtlKeyValuePairIi7empty_tEC4IiEERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrI21CAnimNodeInstanceBase17CRefCountAccessorEEC4Ev */
	class CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> & GetValue(class CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrI21CAnimNodeInstanceBase17CRefCountAccessorEE8GetValueEv */
	const class CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>  & GetValue(const class CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> >  *); /* linkage=_ZNK16CUtlKeyValuePairIi9CSmartPtrI21CAnimNodeInstanceBase17CRefCountAccessorEE8GetValueEv */
	void CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase> >(class CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> > *, const int  &, const class CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>  &); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrI21CAnimNodeInstanceBase17CRefCountAccessorEEC4IiS3_EERKT_RKT0_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<int, CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrI21CAnimNodeInstanceBase17CRefCountAccessorEED4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrIK15CActivityValues17CRefCountAccessorEEC4Ev */
	class CSmartPtr<const CActivityValues, CRefCountAccessor> & GetValue(class CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrIK15CActivityValues17CRefCountAccessorEE8GetValueEv */
	const class CSmartPtr<const CActivityValues, CRefCountAccessor>  & GetValue(const class CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> >  *); /* linkage=_ZNK16CUtlKeyValuePairIi9CSmartPtrIK15CActivityValues17CRefCountAccessorEE8GetValueEv */
	void CUtlKeyValuePair<int, CSmartPtr<const CActivityValues> >(class CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> > *, const int  &, const class CSmartPtr<const CActivityValues, CRefCountAccessor>  &); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrIK15CActivityValues17CRefCountAccessorEEC4IiS4_EERKT_RKT0_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<int, CSmartPtr<const CActivityValues, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairIi9CSmartPtrIK15CActivityValues17CRefCountAccessorEED4Ev */
};

// <00BF3950> ../public/tier0/utlcommon.h:71
// member functions: 12
// member variable: 1
// class size: 8
class CUtlKeyValuePair<char const*, empty_t> {
	const char * m_key; /* 0 8 */
	/* ../public/tier0/utlcommon.h:77 */
	void CUtlKeyValuePair(CUtlKeyValuePair<char const*, empty_t>* );
	/* ../public/tier0/utlcommon.h:85 */
	void CUtlKeyValuePair(CUtlKeyValuePair<char const*, empty_t>* , const char* const& , const empty_t& );
	/* ../public/tier0/utlcommon.h:86 */
	const char* const& GetValue(const CUtlKeyValuePair<char const*, empty_t>* );
	/* ../public/tier0/utlcommon.h:74 */
	typedef const const char * ValueReturn_t;
	/* ../public/tier0/utlcommon.h:80 */
	void CUtlKeyValuePair<char const*>(CUtlKeyValuePair<char const*, empty_t>* , const char* const& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<char const*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPKciEC4Ev */
	int & GetValue(class CUtlKeyValuePair<char const*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPKciE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<char const*, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIPKciE8GetValueEv */
	void CUtlKeyValuePair<char const*, int>(class CUtlKeyValuePair<char const*, int> *, const char  * const &, const int  &); /* linkage=_ZN16CUtlKeyValuePairIPKciEC4IS1_iEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<char const*, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIPKc7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<char const*, empty_t> *, const char  * const &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIPKc7empty_tEC4ERKS1_RKS2_ */
	const char  * const & GetValue(const class CUtlKeyValuePair<char const*, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIPKc7empty_tE8GetValueEv */
	void CUtlKeyValuePair<char const*>(class CUtlKeyValuePair<char const*, empty_t> *, const char  * const &); /* linkage=_ZN16CUtlKeyValuePairIPKc7empty_tEC4IS1_EERKT_ */
};

// <005C3ADB> ../public/tier0/utlcommon.h:71
// member functions: 6
// member variable: 1
// class size: 8
class CUtlKeyValuePair<VkDeviceMemory_T*, empty_t> {
	VkDeviceMemory_T * m_key; /* 0 8 */
	/* ../public/tier0/utlcommon.h:77 */
	void CUtlKeyValuePair(CUtlKeyValuePair<VkDeviceMemory_T*, empty_t>* );
	/* ../public/tier0/utlcommon.h:85 */
	void CUtlKeyValuePair(CUtlKeyValuePair<VkDeviceMemory_T*, empty_t>* , VkDeviceMemory_T* const& , const empty_t& );
	/* ../public/tier0/utlcommon.h:86 */
	VkDeviceMemory_T* const& GetValue(const CUtlKeyValuePair<VkDeviceMemory_T*, empty_t>* );
	/* ../public/tier0/utlcommon.h:74 */
	typedef const class VkDeviceMemory_T * ValueReturn_t;
	void CUtlKeyValuePair(class CUtlKeyValuePair<VkDeviceMemory_T*, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIP16VkDeviceMemory_T7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<VkDeviceMemory_T*, empty_t> *, class VkDeviceMemory_T * const &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIP16VkDeviceMemory_T7empty_tEC4ERKS1_RKS2_ */
	class VkDeviceMemory_T * const & GetValue(const class CUtlKeyValuePair<VkDeviceMemory_T*, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIP16VkDeviceMemory_T7empty_tE8GetValueEv */
};

// <006C9D7B> ../public/tier0/utlcommon.h:71
// member functions: 8
// member variable: 1
// class size: 8
class CUtlKeyValuePair<VkRenderPass_T*, empty_t> {
	VkRenderPass_T * m_key; /* 0 8 */
	/* ../public/tier0/utlcommon.h:77 */
	void CUtlKeyValuePair(CUtlKeyValuePair<VkRenderPass_T*, empty_t>* );
	/* ../public/tier0/utlcommon.h:85 */
	void CUtlKeyValuePair(CUtlKeyValuePair<VkRenderPass_T*, empty_t>* , VkRenderPass_T* const& , const empty_t& );
	/* ../public/tier0/utlcommon.h:86 */
	VkRenderPass_T* const& GetValue(const CUtlKeyValuePair<VkRenderPass_T*, empty_t>* );
	/* ../public/tier0/utlcommon.h:74 */
	typedef const class VkRenderPass_T * ValueReturn_t;
	/* ../public/tier0/utlcommon.h:80 */
	void CUtlKeyValuePair<VkRenderPass_T*>(CUtlKeyValuePair<VkRenderPass_T*, empty_t>* , VkRenderPass_T* const& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<VkRenderPass_T*, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIP14VkRenderPass_T7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<VkRenderPass_T*, empty_t> *, class VkRenderPass_T * const &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIP14VkRenderPass_T7empty_tEC4ERKS1_RKS2_ */
	class VkRenderPass_T * const & GetValue(const class CUtlKeyValuePair<VkRenderPass_T*, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIP14VkRenderPass_T7empty_tE8GetValueEv */
	void CUtlKeyValuePair<VkRenderPass_T*>(class CUtlKeyValuePair<VkRenderPass_T*, empty_t> *, class VkRenderPass_T * const &); /* linkage=_ZN16CUtlKeyValuePairIP14VkRenderPass_T7empty_tEC4IS1_EERKT_ */
};

// <00946CEB> ../public/tier0/utlcommon.h:71
// member functions: 9
// member variable: 1
// class size: 2
class CUtlKeyValuePair<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::IndirectIndex, empty_t> {
	IndirectIndex m_key; /* 0 2 */
	/* ../public/tier0/utlcommon.h:77 */
	void CUtlKeyValuePair(CUtlKeyValuePair<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::IndirectIndex, );
	/* ../public/tier0/utlcommon.h:85 */
	void CUtlKeyValuePair(CUtlKeyValuePair<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::IndirectIndex, , const IndirectIndex& , const empty_t& );
	/* ../public/tier0/utlcommon.h:86 */
	const IndirectIndex& GetValue(const CUtlKeyValuePair<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::IndirectI);
	/* ../public/tier0/utlcommon.h:74 */
	typedef const class IndirectIndex ValueReturn_t;
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::IndirectIndex); /* linkage=_ZN16CUtlKeyValuePairIN19CUtlStableHashtableIyN18CShaderTableVulkan24RefCountedShaderModule_tE18DefaultHashFunctorIyE19DefaultEqualFunctorIyEt11undefined_tE13IndirectIndexE7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::IndirectIndex, const class IndirectIndex  &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIN19CUtlStableHashtableIyN18CShaderTableVulkan24RefCountedShaderModule_tE18DefaultHashFunctorIyE19DefaultEqualFunctorIyEt11undefined_tE13IndirectIndexE7empty_tEC4ERKS9_RKSA_ */
	const class IndirectIndex  & GetValue(const class CUtlKeyValuePair<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::Indirec); /* linkage=_ZNK16CUtlKeyValuePairIN19CUtlStableHashtableIyN18CShaderTableVulkan24RefCountedShaderModule_tE18DefaultHashFunctorIyE19DefaultEqualFunctorIyEt11undefined_tE13IndirectIndexE7empty_tE8GetValueEv */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::IndirectIndex, ); /* linkage=_ZN16CUtlKeyValuePairIN19CUtlStableHashtableIyN18CShaderTableVulkan22RefCountedShaderFile_tE18DefaultHashFunctorIyE19DefaultEqualFunctorIyEt11undefined_tE13IndirectIndexE7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::IndirectIndex, , const class IndirectIndex  &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIN19CUtlStableHashtableIyN18CShaderTableVulkan22RefCountedShaderFile_tE18DefaultHashFunctorIyE19DefaultEqualFunctorIyEt11undefined_tE13IndirectIndexE7empty_tEC4ERKS9_RKSA_ */
	const class IndirectIndex  & GetValue(const class CUtlKeyValuePair<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::IndirectI); /* linkage=_ZNK16CUtlKeyValuePairIN19CUtlStableHashtableIyN18CShaderTableVulkan22RefCountedShaderFile_tE18DefaultHashFunctorIyE19DefaultEqualFunctorIyEt11undefined_tE13IndirectIndexE7empty_tE8GetValueEv */
};

// <0095E016> ../public/tier0/utlcommon.h:71
// member functions: 24
// member variable: 1
// class size: 8
class CUtlKeyValuePair<CUtlString, empty_t> {
	CUtlString m_key; /* 0 8 */
	/* ../public/tier0/utlcommon.h:77 */
	void CUtlKeyValuePair(CUtlKeyValuePair<CUtlString, empty_t>* );
	/* ../public/tier0/utlcommon.h:85 */
	void CUtlKeyValuePair(CUtlKeyValuePair<CUtlString, empty_t>* , const CUtlString& , const empty_t& );
	/* ../public/tier0/utlcommon.h:86 */
	const CUtlString& GetValue(const CUtlKeyValuePair<CUtlString, empty_t>* );
	/* ../public/tier0/utlcommon.h:74 */
	typedef const class CUtlString ValueReturn_t;
	void ~CUtlKeyValuePair(CUtlKeyValuePair<CUtlString, empty_t>* );
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, CBufferString> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString13CBufferStringEC4Ev */
	class CBufferString & GetValue(class CUtlKeyValuePair<CUtlString, CBufferString> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString13CBufferStringE8GetValueEv */
	const class CBufferString  & GetValue(const class CUtlKeyValuePair<CUtlString, CBufferString>  *); /* linkage=_ZNK16CUtlKeyValuePairI10CUtlString13CBufferStringE8GetValueEv */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, CBufferString> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString13CBufferStringED4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, empty_t> *, const class CUtlString  &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString7empty_tEC4ERKS0_RKS1_ */
	const class CUtlString  & GetValue(const class CUtlKeyValuePair<CUtlString, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairI10CUtlString7empty_tE8GetValueEv */
	void CUtlKeyValuePair<CUtlString>(class CUtlKeyValuePair<CUtlString, empty_t> *, const class CUtlString  &); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString7empty_tEC4IS0_EERKT_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString7empty_tED4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, int> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlStringiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<CUtlString, int> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlStringiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<CUtlString, int>  *); /* linkage=_ZNK16CUtlKeyValuePairI10CUtlStringiE8GetValueEv */
	void CUtlKeyValuePair<CUtlString, int>(class CUtlKeyValuePair<CUtlString, int> *, const class CUtlString  &, const int  &); /* linkage=_ZN16CUtlKeyValuePairI10CUtlStringiEC4IS0_iEERKT_RKT0_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, int> *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlStringiED4Ev */
	void CUtlKeyValuePair<CUtlString>(class CUtlKeyValuePair<CUtlString, int> *, const class CUtlString  &); /* linkage=_ZN16CUtlKeyValuePairI10CUtlStringiEC4IS0_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString9CSmartPtrI9CSubGraph17CRefCountAccessorEEC4Ev */
	class CSmartPtr<CSubGraph, CRefCountAccessor> & GetValue(class CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString9CSmartPtrI9CSubGraph17CRefCountAccessorEE8GetValueEv */
	const class CSmartPtr<CSubGraph, CRefCountAccessor>  & GetValue(const class CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> >  *); /* linkage=_ZNK16CUtlKeyValuePairI10CUtlString9CSmartPtrI9CSubGraph17CRefCountAccessorEE8GetValueEv */
	void CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph> >(class CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> > *, const class CUtlString  &, const class CSmartPtr<CSubGraph, CRefCountAccessor>  &); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString9CSmartPtrI9CSubGraph17CRefCountAccessorEEC4IS0_S4_EERKT_RKT0_ */
	void ~CUtlKeyValuePair(class CUtlKeyValuePair<CUtlString, CSmartPtr<CSubGraph, CRefCountAccessor> > *); /* linkage=_ZN16CUtlKeyValuePairI10CUtlString9CSmartPtrI9CSubGraph17CRefCountAccessorEED4Ev */
};

// <00AA0C6E> ../public/tier0/utlcommon.h:71
// member functions: 12
// member variable: 1
// class size: 2
class CUtlKeyValuePair<short unsigned int, empty_t> {
	short unsigned int m_key; /* 0 2 */
	/* ../public/tier0/utlcommon.h:77 */
	void CUtlKeyValuePair(CUtlKeyValuePair<short unsigned int, empty_t>* );
	/* ../public/tier0/utlcommon.h:85 */
	void CUtlKeyValuePair(CUtlKeyValuePair<short unsigned int, empty_t>* , const short unsigned int& , const empty_t& );
	/* ../public/tier0/utlcommon.h:86 */
	const short unsigned int& GetValue(const CUtlKeyValuePair<short unsigned int, empty_t>* );
	/* ../public/tier0/utlcommon.h:74 */
	typedef const short unsigned int ValueReturn_t;
	/* ../public/tier0/utlcommon.h:80 */
	void CUtlKeyValuePair<short unsigned int>(CUtlKeyValuePair<short unsigned int, empty_t>* , const short unsigned int& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<short unsigned int, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIt7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<short unsigned int, empty_t> *, const short unsigned int  &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIt7empty_tEC4ERKtRKS0_ */
	const short unsigned int  & GetValue(const class CUtlKeyValuePair<short unsigned int, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIt7empty_tE8GetValueEv */
	void CUtlKeyValuePair<short unsigned int>(class CUtlKeyValuePair<short unsigned int, empty_t> *, const short unsigned int  &); /* linkage=_ZN16CUtlKeyValuePairIt7empty_tEC4ItEERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<short unsigned int, unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairItjEC4Ev */
	unsigned int & GetValue(class CUtlKeyValuePair<short unsigned int, unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairItjE8GetValueEv */
	const unsigned int  & GetValue(const class CUtlKeyValuePair<short unsigned int, unsigned int>  *); /* linkage=_ZNK16CUtlKeyValuePairItjE8GetValueEv */
	void CUtlKeyValuePair<short unsigned int, unsigned int>(class CUtlKeyValuePair<short unsigned int, unsigned int> *, const short unsigned int  &, const unsigned int  &); /* linkage=_ZN16CUtlKeyValuePairItjEC4ItjEERKT_RKT0_ */
};

// <00BB0D47> ../public/tier0/utlcommon.h:71
// member functions: 9
// member variable: 1
// class size: 2
class CUtlKeyValuePair<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::IndirectIndex, empty_t> {
	IndirectIndex m_key; /* 0 2 */
	/* ../public/tier0/utlcommon.h:77 */
	void CUtlKeyValuePair(CUtlKeyValuePair<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::IndirectIndex);
	/* ../public/tier0/utlcommon.h:85 */
	void CUtlKeyValuePair(CUtlKeyValuePair<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::IndirectIndex, const IndirectIndex& , const empty_t& );
	/* ../public/tier0/utlcommon.h:86 */
	const IndirectIndex& GetValue(const CUtlKeyValuePair<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::Indirec);
	/* ../public/tier0/utlcommon.h:74 */
	typedef const class IndirectIndex ValueReturn_t;
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::IndirectIndex); /* linkage=_ZN16CUtlKeyValuePairIN19CUtlStableHashtableIyN18CShaderTableVulkan24RefCountedShaderModule_tE18DefaultHashFunctorIyE19DefaultEqualFunctorIyEt11undefined_tE13IndirectIndexE7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::IndirectIndex, const class IndirectIndex  &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIN19CUtlStableHashtableIyN18CShaderTableVulkan24RefCountedShaderModule_tE18DefaultHashFunctorIyE19DefaultEqualFunctorIyEt11undefined_tE13IndirectIndexE7empty_tEC4ERKS9_RKSA_ */
	const class IndirectIndex  & GetValue(const class CUtlKeyValuePair<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::Indirec); /* linkage=_ZNK16CUtlKeyValuePairIN19CUtlStableHashtableIyN18CShaderTableVulkan24RefCountedShaderModule_tE18DefaultHashFunctorIyE19DefaultEqualFunctorIyEt11undefined_tE13IndirectIndexE7empty_tE8GetValueEv */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::IndirectIndex, ); /* linkage=_ZN16CUtlKeyValuePairIN19CUtlStableHashtableIyN18CShaderTableVulkan22RefCountedShaderFile_tE18DefaultHashFunctorIyE19DefaultEqualFunctorIyEt11undefined_tE13IndirectIndexE7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::IndirectIndex, , const class IndirectIndex  &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIN19CUtlStableHashtableIyN18CShaderTableVulkan22RefCountedShaderFile_tE18DefaultHashFunctorIyE19DefaultEqualFunctorIyEt11undefined_tE13IndirectIndexE7empty_tEC4ERKS9_RKSA_ */
	const class IndirectIndex  & GetValue(const class CUtlKeyValuePair<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::IndirectI); /* linkage=_ZNK16CUtlKeyValuePairIN19CUtlStableHashtableIyN18CShaderTableVulkan22RefCountedShaderFile_tE18DefaultHashFunctorIyE19DefaultEqualFunctorIyEt11undefined_tE13IndirectIndexE7empty_tE8GetValueEv */
};

// <00C1DBE4> ../public/tier0/utlcommon.h:71
// member functions: 8
// member variable: 1
// class size: 8
class CUtlKeyValuePair<CDescriptorSetVulkan*, empty_t> {
	CDescriptorSetVulkan * m_key; /* 0 8 */
	/* ../public/tier0/utlcommon.h:77 */
	void CUtlKeyValuePair(CUtlKeyValuePair<CDescriptorSetVulkan*, empty_t>* );
	/* ../public/tier0/utlcommon.h:85 */
	void CUtlKeyValuePair(CUtlKeyValuePair<CDescriptorSetVulkan*, empty_t>* , CDescriptorSetVulkan* const& , const empty_t& );
	/* ../public/tier0/utlcommon.h:86 */
	CDescriptorSetVulkan* const& GetValue(const CUtlKeyValuePair<CDescriptorSetVulkan*, empty_t>* );
	/* ../public/tier0/utlcommon.h:74 */
	typedef const class CDescriptorSetVulkan * ValueReturn_t;
	/* ../public/tier0/utlcommon.h:80 */
	void CUtlKeyValuePair<CDescriptorSetVulkan*>(CUtlKeyValuePair<CDescriptorSetVulkan*, empty_t>* , CDescriptorSetVulkan* const& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<CDescriptorSetVulkan*, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIP20CDescriptorSetVulkan7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<CDescriptorSetVulkan*, empty_t> *, class CDescriptorSetVulkan * const &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIP20CDescriptorSetVulkan7empty_tEC4ERKS1_RKS2_ */
	class CDescriptorSetVulkan * const & GetValue(const class CUtlKeyValuePair<CDescriptorSetVulkan*, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIP20CDescriptorSetVulkan7empty_tE8GetValueEv */
	void CUtlKeyValuePair<CDescriptorSetVulkan*>(class CUtlKeyValuePair<CDescriptorSetVulkan*, empty_t> *, class CDescriptorSetVulkan * const &); /* linkage=_ZN16CUtlKeyValuePairIP20CDescriptorSetVulkan7empty_tEC4IS1_EERKT_ */
};

// <0015CB49> ../public/tier0/utlcommon.h:71
// member functions: 48
// member variable: 1
// class size: 8
class CUtlKeyValuePair<const CResourceDiskStructField*, empty_t> {
	const class CResourceDiskStructField * m_key; /* 0 8 */
	/* ../public/tier0/utlcommon.h:77 */
	void CUtlKeyValuePair(CUtlKeyValuePair<const CResourceDiskStructField*, empty_t>* );
	/* ../public/tier0/utlcommon.h:85 */
	void CUtlKeyValuePair(CUtlKeyValuePair<const CResourceDiskStructField*, empty_t>* , const CResourceDiskStructField* const& , const empty_t& );
	/* ../public/tier0/utlcommon.h:86 */
	const CResourceDiskStructField* const& GetValue(const CUtlKeyValuePair<const CResourceDiskStructField*, empty_t>* );
	/* ../public/tier0/utlcommon.h:74 */
	typedef const const class CResourceDiskStructField * ValueReturn_t;
	/* ../public/tier0/utlcommon.h:80 */
	void CUtlKeyValuePair<const CResourceDiskStructField*>(CUtlKeyValuePair<const CResourceDiskStructField*, empty_t>* , const CResourceDiskStructField* const& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*> *); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructFieldPK32KV3ConvertSpecialFieldBehavior_tEC4Ev */
	const class KV3ConvertSpecialFieldBehavior_t  * & GetValue(class CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*> *); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructFieldPK32KV3ConvertSpecialFieldBehavior_tE8GetValueEv */
	const class KV3ConvertSpecialFieldBehavior_t  * const & GetValue(const class CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK24CResourceDiskStructFieldPK32KV3ConvertSpecialFieldBehavior_tE8GetValueEv */
	void CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*>(class CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*> *, const class CResourceDiskStructField  * const &, const class KV3ConvertSpecialFieldBehavior_t  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructFieldPK32KV3ConvertSpecialFieldBehavior_tEC4IS2_S5_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CResourceDiskStructField*, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructField7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CResourceDiskStructField*, empty_t> *, const class CResourceDiskStructField  * const &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructField7empty_tEC4ERKS2_RKS3_ */
	const class CResourceDiskStructField  * const & GetValue(const class CUtlKeyValuePair<const CResourceDiskStructField*, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK24CResourceDiskStructField7empty_tE8GetValueEv */
	void CUtlKeyValuePair<const CResourceDiskStructField*>(class CUtlKeyValuePair<const CResourceDiskStructField*, empty_t> *, const class CResourceDiskStructField  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructField7empty_tEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_t7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t> *, const class ResourceBindingBase_t  * const &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_t7empty_tEC4ERKS2_RKS3_ */
	const class ResourceBindingBase_t  * const & GetValue(const class CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK21ResourceBindingBase_t7empty_tE8GetValueEv */
	void CUtlKeyValuePair<const ResourceBindingBase_t*>(class CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t> *, const class ResourceBindingBase_t  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_t7empty_tEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_tjEC4Ev */
	unsigned int & GetValue(class CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_tjE8GetValueEv */
	const unsigned int  & GetValue(const class CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK21ResourceBindingBase_tjE8GetValueEv */
	void CUtlKeyValuePair<const ResourceBindingBase_t*>(class CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int> *, const class ResourceBindingBase_t  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_tjEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CEnvMapSceneObject*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK18CEnvMapSceneObjectiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<const CEnvMapSceneObject*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK18CEnvMapSceneObjectiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<const CEnvMapSceneObject*, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK18CEnvMapSceneObjectiE8GetValueEv */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const IMaterial2*, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIPK10IMaterial27empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const IMaterial2*, empty_t> *, const class IMaterial2  * const &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIPK10IMaterial27empty_tEC4ERKS2_RKS3_ */
	const class IMaterial2  * const & GetValue(const class CUtlKeyValuePair<const IMaterial2*, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK10IMaterial27empty_tE8GetValueEv */
	void CUtlKeyValuePair<const IMaterial2*>(class CUtlKeyValuePair<const IMaterial2*, empty_t> *, const class IMaterial2  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK10IMaterial27empty_tEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const qhVertex*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<const qhVertex*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<const qhVertex*, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK8qhVertexiE8GetValueEv */
	void CUtlKeyValuePair<const qhVertex*, int>(class CUtlKeyValuePair<const qhVertex*, int> *, const class qhVertex  * const &, const int  &); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexiEC4IS2_iEERKT_RKT0_ */
	void CUtlKeyValuePair<const qhVertex*>(class CUtlKeyValuePair<const qhVertex*, int> *, const class qhVertex  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexiEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const qhFace*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK6qhFaceiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<const qhFace*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK6qhFaceiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<const qhFace*, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK6qhFaceiE8GetValueEv */
	void CUtlKeyValuePair<const qhFace*, int>(class CUtlKeyValuePair<const qhFace*, int> *, const class qhFace  * const &, const int  &); /* linkage=_ZN16CUtlKeyValuePairIPK6qhFaceiEC4IS2_iEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIF); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEEC4Ev */
	class ComponentHandleWithListPointer_t & GetValue(class CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIF); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEE8GetValueEv */
	const class ComponentHandleWithListPointer_t  & GetValue(const class CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, ); /* linkage=_ZNK16CUtlKeyValuePairIPK8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEE8GetValueEv */
	void CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>(class CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIF, const class qhVertex  * const &, const class ComponentHandleWithListPointer_t  &); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEEC4IS2_SB_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus> *); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase13CStrideStatusEC4Ev */
	class CStrideStatus & GetValue(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus> *); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase13CStrideStatusE8GetValueEv */
	const class CStrideStatus  & GetValue(const class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK19CAnimUpdateNodeBase13CStrideStatusE8GetValueEv */
	void CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus>(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus> *, const class CAnimUpdateNodeBase  * const &, const class CStrideStatus  &); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase13CStrideStatusEC4IS2_S3_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion> *); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase11CRootMotionEC4Ev */
	class CRootMotion & GetValue(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion> *); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase11CRootMotionE8GetValueEv */
	const class CRootMotion  & GetValue(const class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK19CAnimUpdateNodeBase11CRootMotionE8GetValueEv */
	void CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion>(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion> *, const class CAnimUpdateNodeBase  * const &, const class CRootMotion  &); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase11CRootMotionEC4IS2_S3_EERKT_RKT0_ */
};

// <0014FFC2> ../public/tier0/utlcommon.h:71
// member functions: 47
// member variable: 1
// class size: 8
class CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t> {
	const class ResourceBindingBase_t * m_key; /* 0 8 */
	/* ../public/tier0/utlcommon.h:77 */
	void CUtlKeyValuePair(CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t>* );
	/* ../public/tier0/utlcommon.h:85 */
	void CUtlKeyValuePair(CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t>* , const ResourceBindingBase_t* const& , const empty_t& );
	/* ../public/tier0/utlcommon.h:86 */
	const ResourceBindingBase_t* const& GetValue(const CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t>* );
	/* ../public/tier0/utlcommon.h:74 */
	typedef const const class ResourceBindingBase_t * ValueReturn_t;
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*> *); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructFieldPK32KV3ConvertSpecialFieldBehavior_tEC4Ev */
	const class KV3ConvertSpecialFieldBehavior_t  * & GetValue(class CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*> *); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructFieldPK32KV3ConvertSpecialFieldBehavior_tE8GetValueEv */
	const class KV3ConvertSpecialFieldBehavior_t  * const & GetValue(const class CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK24CResourceDiskStructFieldPK32KV3ConvertSpecialFieldBehavior_tE8GetValueEv */
	void CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*>(class CUtlKeyValuePair<const CResourceDiskStructField*, const KV3ConvertSpecialFieldBehavior_t*> *, const class CResourceDiskStructField  * const &, const class KV3ConvertSpecialFieldBehavior_t  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructFieldPK32KV3ConvertSpecialFieldBehavior_tEC4IS2_S5_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CResourceDiskStructField*, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructField7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CResourceDiskStructField*, empty_t> *, const class CResourceDiskStructField  * const &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructField7empty_tEC4ERKS2_RKS3_ */
	const class CResourceDiskStructField  * const & GetValue(const class CUtlKeyValuePair<const CResourceDiskStructField*, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK24CResourceDiskStructField7empty_tE8GetValueEv */
	void CUtlKeyValuePair<const CResourceDiskStructField*>(class CUtlKeyValuePair<const CResourceDiskStructField*, empty_t> *, const class CResourceDiskStructField  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK24CResourceDiskStructField7empty_tEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_t7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t> *, const class ResourceBindingBase_t  * const &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_t7empty_tEC4ERKS2_RKS3_ */
	const class ResourceBindingBase_t  * const & GetValue(const class CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK21ResourceBindingBase_t7empty_tE8GetValueEv */
	void CUtlKeyValuePair<const ResourceBindingBase_t*>(class CUtlKeyValuePair<const ResourceBindingBase_t*, empty_t> *, const class ResourceBindingBase_t  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_t7empty_tEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_tjEC4Ev */
	unsigned int & GetValue(class CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int> *); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_tjE8GetValueEv */
	const unsigned int  & GetValue(const class CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK21ResourceBindingBase_tjE8GetValueEv */
	void CUtlKeyValuePair<const ResourceBindingBase_t*>(class CUtlKeyValuePair<const ResourceBindingBase_t*, unsigned int> *, const class ResourceBindingBase_t  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK21ResourceBindingBase_tjEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CEnvMapSceneObject*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK18CEnvMapSceneObjectiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<const CEnvMapSceneObject*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK18CEnvMapSceneObjectiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<const CEnvMapSceneObject*, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK18CEnvMapSceneObjectiE8GetValueEv */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const IMaterial2*, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairIPK10IMaterial27empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const IMaterial2*, empty_t> *, const class IMaterial2  * const &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairIPK10IMaterial27empty_tEC4ERKS2_RKS3_ */
	const class IMaterial2  * const & GetValue(const class CUtlKeyValuePair<const IMaterial2*, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK10IMaterial27empty_tE8GetValueEv */
	void CUtlKeyValuePair<const IMaterial2*>(class CUtlKeyValuePair<const IMaterial2*, empty_t> *, const class IMaterial2  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK10IMaterial27empty_tEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const qhVertex*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<const qhVertex*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<const qhVertex*, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK8qhVertexiE8GetValueEv */
	void CUtlKeyValuePair<const qhVertex*, int>(class CUtlKeyValuePair<const qhVertex*, int> *, const class qhVertex  * const &, const int  &); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexiEC4IS2_iEERKT_RKT0_ */
	void CUtlKeyValuePair<const qhVertex*>(class CUtlKeyValuePair<const qhVertex*, int> *, const class qhVertex  * const &); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexiEC4IS2_EERKT_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const qhFace*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK6qhFaceiEC4Ev */
	int & GetValue(class CUtlKeyValuePair<const qhFace*, int> *); /* linkage=_ZN16CUtlKeyValuePairIPK6qhFaceiE8GetValueEv */
	const int  & GetValue(const class CUtlKeyValuePair<const qhFace*, int>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK6qhFaceiE8GetValueEv */
	void CUtlKeyValuePair<const qhFace*, int>(class CUtlKeyValuePair<const qhFace*, int> *, const class qhFace  * const &, const int  &); /* linkage=_ZN16CUtlKeyValuePairIPK6qhFaceiEC4IS2_iEERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIF); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEEC4Ev */
	class ComponentHandleWithListPointer_t & GetValue(class CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIF); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEE8GetValueEv */
	const class ComponentHandleWithListPointer_t  & GetValue(const class CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, ); /* linkage=_ZNK16CUtlKeyValuePairIPK8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEE8GetValueEv */
	void CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>(class CUtlKeyValuePair<const qhVertex*, CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIF, const class qhVertex  * const &, const class ComponentHandleWithListPointer_t  &); /* linkage=_ZN16CUtlKeyValuePairIPK8qhVertexN22CHalfEdgeComponentListIN13CHalfEdgeMeshI19HullIFRVertexData_t21HullIFRHalfEdgeData_t17HullIFRFaceData_tE8Vertex_tEE32ComponentHandleWithListPointer_tEEC4IS2_SB_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus> *); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase13CStrideStatusEC4Ev */
	class CStrideStatus & GetValue(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus> *); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase13CStrideStatusE8GetValueEv */
	const class CStrideStatus  & GetValue(const class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK19CAnimUpdateNodeBase13CStrideStatusE8GetValueEv */
	void CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus>(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CStrideStatus> *, const class CAnimUpdateNodeBase  * const &, const class CStrideStatus  &); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase13CStrideStatusEC4IS2_S3_EERKT_RKT0_ */
	void CUtlKeyValuePair(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion> *); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase11CRootMotionEC4Ev */
	class CRootMotion & GetValue(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion> *); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase11CRootMotionE8GetValueEv */
	const class CRootMotion  & GetValue(const class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion>  *); /* linkage=_ZNK16CUtlKeyValuePairIPK19CAnimUpdateNodeBase11CRootMotionE8GetValueEv */
	void CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion>(class CUtlKeyValuePair<const CAnimUpdateNodeBase*, CRootMotion> *, const class CAnimUpdateNodeBase  * const &, const class CRootMotion  &); /* linkage=_ZN16CUtlKeyValuePairIPK19CAnimUpdateNodeBase11CRootMotionEC4IS2_S3_EERKT_RKT0_ */
};

// <002E8B57> ../public/tier0/utlcommon.h:71
// member functions: 8
// member variable: 1
// class size: 8
class CUtlKeyValuePair<SpamKey_t, empty_t> {
	SpamKey_t m_key; /* 0 8 */
	/* ../public/tier0/utlcommon.h:77 */
	void CUtlKeyValuePair(CUtlKeyValuePair<SpamKey_t, empty_t>* );
	/* ../public/tier0/utlcommon.h:85 */
	void CUtlKeyValuePair(CUtlKeyValuePair<SpamKey_t, empty_t>* , const SpamKey_t& , const empty_t& );
	/* ../public/tier0/utlcommon.h:86 */
	const SpamKey_t& GetValue(const CUtlKeyValuePair<SpamKey_t, empty_t>* );
	/* ../public/tier0/utlcommon.h:74 */
	typedef const class SpamKey_t ValueReturn_t;
	/* ../public/tier0/utlcommon.h:80 */
	void CUtlKeyValuePair<SpamKey_t>(CUtlKeyValuePair<SpamKey_t, empty_t>* , const SpamKey_t& );
	void CUtlKeyValuePair(class CUtlKeyValuePair<SpamKey_t, empty_t> *); /* linkage=_ZN16CUtlKeyValuePairI9SpamKey_t7empty_tEC4Ev */
	void CUtlKeyValuePair(class CUtlKeyValuePair<SpamKey_t, empty_t> *, const class SpamKey_t  &, const class empty_t  &); /* linkage=_ZN16CUtlKeyValuePairI9SpamKey_t7empty_tEC4ERKS0_RKS1_ */
	const class SpamKey_t  & GetValue(const class CUtlKeyValuePair<SpamKey_t, empty_t>  *); /* linkage=_ZNK16CUtlKeyValuePairI9SpamKey_t7empty_tE8GetValueEv */
	void CUtlKeyValuePair<SpamKey_t>(class CUtlKeyValuePair<SpamKey_t, empty_t> *, const class SpamKey_t  &); /* linkage=_ZN16CUtlKeyValuePairI9SpamKey_t7empty_tEC4IS0_EERKT_ */
};

// <068E3EF0> ../public/tier0/utlcommon.h:80
void CUtlKeyValuePair<CUtlString, empty_t>::CUtlKeyValuePair<CUtlString>(const CUtlString& k)
{
} /* size: 0 */

// <068E3EC4> ../public/tier0/utlcommon.h:80
inline void CUtlKeyValuePair<CUtlString, empty_t>::CUtlKeyValuePair<CUtlString>(const CUtlString& k)
{
} /* size: 0 */

// <06071D51> ../public/tier0/utlcommon.h:80
void CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t>::CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>(const ComponentHandleWithListPointer_t& k)
{
} /* size: 0 */

// <06071D25> ../public/tier0/utlcommon.h:80
inline void CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t, empty_t>::CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>(const ComponentHandleWithListPointer_t& k)
{
} /* size: 0 */

// <060711F4> ../public/tier0/utlcommon.h:80
void CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t>::CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>(const ComponentHandleWithListPointer_t& k)
{
} /* size: 0 */

// <060711C8> ../public/tier0/utlcommon.h:80
inline void CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t, empty_t>::CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>(const ComponentHandleWithListPointer_t& k)
{
} /* size: 0 */

// <06070054> ../public/tier0/utlcommon.h:80
void CUtlKeyValuePair<int, empty_t>::CUtlKeyValuePair<int>(const int& k)
{
} /* size: 0 */

// <06070028> ../public/tier0/utlcommon.h:80
inline void CUtlKeyValuePair<int, empty_t>::CUtlKeyValuePair<int>(const int& k)
{
} /* size: 0 */

// <05F6299E> ../public/tier0/utlcommon.h:80
void CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t>::CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>(const ComponentHandleWithListPointer_t& k)
{
} /* size: 0 */

// <05F62972> ../public/tier0/utlcommon.h:80
inline void CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t, empty_t>::CUtlKeyValuePair<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>(const ComponentHandleWithListPointer_t& k)
{
} /* size: 0 */

// <05E5038D> ../public/tier0/utlcommon.h:80
void CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>(const CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>:: this, const ComponentHandleWithListPointer_t& k)
{
} /* size: 0 */

// <05E50361> ../public/tier0/utlcommon.h:80
inline void CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t>(const CUtlKeyValuePair<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>:: this, const ComponentHandleWithListPointer_t& k)
{
} /* size: 0 */

// <05CD9161> ../public/tier0/utlcommon.h:80
void CUtlKeyValuePair<unsigned CUtlKeyValuePair<unsigned int, empty_t>::int>(const unsigned int& k)
{
} /* size: 0 */

// <05CD9135> ../public/tier0/utlcommon.h:80
inline void CUtlKeyValuePair<unsigned CUtlKeyValuePair<unsigned int, empty_t>::int>(const unsigned int& k)
{
} /* size: 0 */

// <04E34947> ../public/tier0/utlcommon.h:80
void CUtlKeyValuePair<const CUtlKeyValuePair<const ResourceBindingBase_t::ResourceBindingBase_t*>(const ResourceBindingBase_t* const& k)
{
} /* size: 0 */

// <04E3491B> ../public/tier0/utlcommon.h:80
inline void CUtlKeyValuePair<const CUtlKeyValuePair<const ResourceBindingBase_t::ResourceBindingBase_t*>(const ResourceBindingBase_t* const& k)
{
} /* size: 0 */

// <04CB09AB> ../public/tier0/utlcommon.h:80
void CUtlKeyValuePair<long long unsigned CUtlKeyValuePair<long long unsigned int, empty_t>::int>(const long long unsigned int& k)
{
} /* size: 0 */

// <04CB097F> ../public/tier0/utlcommon.h:80
inline void CUtlKeyValuePair<long long unsigned CUtlKeyValuePair<long long unsigned int, empty_t>::int>(const long long unsigned int& k)
{
} /* size: 0 */

// <03FF80B3> ../public/tier0/utlcommon.h:80
void CUtlKeyValuePair<const CUtlKeyValuePair<const IMaterial2::IMaterial2*>(const IMaterial2* const& k)
{
} /* size: 0 */

// <03FF8087> ../public/tier0/utlcommon.h:80
inline void CUtlKeyValuePair<const CUtlKeyValuePair<const IMaterial2::IMaterial2*>(const IMaterial2* const& k)
{
} /* size: 0 */

// <0229D595> ../public/tier0/utlcommon.h:80
void CUtlKeyValuePair<CLoadingResource::CUtlKeyValuePair<CLoadingResource*>(CLoadingResource* const& k)
{
} /* size: 0 */

// <0229D569> ../public/tier0/utlcommon.h:80
inline void CUtlKeyValuePair<CLoadingResource::CUtlKeyValuePair<CLoadingResource*>(CLoadingResource* const& k)
{
} /* size: 0 */

// <00B0D350> ../public/tier0/utlcommon.h:80
void CUtlKeyValuePair<b3ContactId, empty_t>::CUtlKeyValuePair<b3ContactId>(const b3ContactId& k)
{
} /* size: 0 */

// <00B0D324> ../public/tier0/utlcommon.h:80
inline void CUtlKeyValuePair<b3ContactId, empty_t>::CUtlKeyValuePair<b3ContactId>(const b3ContactId& k)
{
} /* size: 0 */

// <00C369C1> ../public/tier0/utlcommon.h:80
void CUtlKeyValuePair<char CUtlKeyValuePair<char const::const*>(const char* const& k)
{
} /* size: 0 */

// <00C36995> ../public/tier0/utlcommon.h:80
inline void CUtlKeyValuePair<char CUtlKeyValuePair<char const::const*>(const char* const& k)
{
} /* size: 0 */

// <00C28EF7> ../public/tier0/utlcommon.h:80
void CUtlKeyValuePair<CDescriptorSetVulkan::CUtlKeyValuePair<CDescriptorSetVulkan*>(CDescriptorSetVulkan* const& k)
{
} /* size: 0 */

// <00C28ECB> ../public/tier0/utlcommon.h:80
inline void CUtlKeyValuePair<CDescriptorSetVulkan::CUtlKeyValuePair<CDescriptorSetVulkan*>(CDescriptorSetVulkan* const& k)
{
} /* size: 0 */

// <00AB9CBA> ../public/tier0/utlcommon.h:80
void CUtlKeyValuePair<short unsigned CUtlKeyValuePair<short unsigned int, empty_t>::int>(const short unsigned int& k)
{
} /* size: 0 */

// <00AB9C8E> ../public/tier0/utlcommon.h:80
inline void CUtlKeyValuePair<short unsigned CUtlKeyValuePair<short unsigned int, empty_t>::int>(const short unsigned int& k)
{
} /* size: 0 */

// <006FBFC0> ../public/tier0/utlcommon.h:80
void CUtlKeyValuePair<VkRenderPass_T::CUtlKeyValuePair<VkRenderPass_T*>(VkRenderPass_T* const& k)
{
} /* size: 0 */

// <006FBF94> ../public/tier0/utlcommon.h:80
inline void CUtlKeyValuePair<VkRenderPass_T::CUtlKeyValuePair<VkRenderPass_T*>(VkRenderPass_T* const& k)
{
} /* size: 0 */

// <0015FC00> ../public/tier0/utlcommon.h:80
void CUtlKeyValuePair<const CUtlKeyValuePair<const CResourceDiskStructField::CResourceDiskStructField*>(const CResourceDiskStructField* const& k)
{
} /* size: 0 */

// <0015FBD4> ../public/tier0/utlcommon.h:80
inline void CUtlKeyValuePair<const CUtlKeyValuePair<const CResourceDiskStructField::CResourceDiskStructField*>(const CResourceDiskStructField* const& k)
{
} /* size: 0 */

// <002ECDAC> ../public/tier0/utlcommon.h:80
void CUtlKeyValuePair<SpamKey_t, empty_t>::CUtlKeyValuePair<SpamKey_t>(const SpamKey_t& k)
{
} /* size: 0 */

// <002ECD80> ../public/tier0/utlcommon.h:80
inline void CUtlKeyValuePair<SpamKey_t, empty_t>::CUtlKeyValuePair<SpamKey_t>(const SpamKey_t& k)
{
} /* size: 0 */

// <0568B61C> ../public/tier0/utlcommon.h:85
void CUtlKeyValuePair<unsigned int, empty_t>::CUtlKeyValuePair(const unsigned int& k, const empty_t &)
{
} /* size: 0 */

// <0568B5F4> ../public/tier0/utlcommon.h:85
inline void CUtlKeyValuePair<unsigned int, empty_t>::CUtlKeyValuePair(const unsigned int& k, const empty_t &)
{
} /* size: 0 */

// <00BB749B> ../public/tier0/utlcommon.h:85
void CUtlKeyValuePair(const CUtlKeyValuePair<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::IndirectI this, const IndirectIndex& k, const empty_t &)
{
} /* size: 0 */

// <00BB7473> ../public/tier0/utlcommon.h:85
inline void CUtlKeyValuePair(const CUtlKeyValuePair<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::IndirectI this, const IndirectIndex& k, const empty_t &)
{
} /* size: 0 */

// <00BB683D> ../public/tier0/utlcommon.h:85
void CUtlKeyValuePair(const CUtlKeyValuePair<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::Indirec this, const IndirectIndex& k, const empty_t &)
{
} /* size: 0 */

// <00BB6815> ../public/tier0/utlcommon.h:85
inline void CUtlKeyValuePair(const CUtlKeyValuePair<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::Indirec this, const IndirectIndex& k, const empty_t &)
{
} /* size: 0 */

// <0568C74D> ../public/tier0/utlcommon.h:86
inline void CUtlKeyValuePair<unsigned int, empty_t>::GetValue()
{
} /* size: 0 */

// <00B12155> ../public/tier0/utlcommon.h:86
inline void CUtlKeyValuePair<b3ContactId, empty_t>::GetValue()
{
} /* size: 0 */

// <00C2E438> ../public/tier0/utlcommon.h:86
inline void CUtlKeyValuePair<CDescriptorSetVulkan::GetValue()
{
} /* size: 0 */

// <00BBA65A> ../public/tier0/utlcommon.h:86
inline void GetValue(const CUtlKeyValuePair<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::Ind this)
{
} /* size: 0 */

// <00BB92FA> ../public/tier0/utlcommon.h:86
inline void GetValue(const CUtlKeyValuePair<CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::I this)
{
} /* size: 0 */

// <00AC1EAE> ../public/tier0/utlcommon.h:86
inline void CUtlKeyValuePair<short unsigned int, empty_t>::GetValue()
{
} /* size: 0 */

// <0070A781> ../public/tier0/utlcommon.h:86
inline void CUtlKeyValuePair<VkRenderPass_T::GetValue()
{
} /* size: 0 */

// <06977FA2> ../public/tier0/utlcommon.h:127
inline void StringEqualFunctor::operator(const char* a, const char* b)
{
} /* size: 0 */

// <049BC03B> ../public/tier0/utlcommon.h:127
// member function: 1
// struct size: 1
struct StringEqualFunctor {
	/* ../public/tier0/utlcommon.h:127 */
	bool operator()(const StringEqualFunctor* , const char* , const char* );
};

// <002622D8> ../../public/tier0/utlcommon.h:127
// member function: 1
// struct size: 1
struct StringEqualFunctor {
	/* ../../public/tier0/utlcommon.h:127 */
	bool operator()(const StringEqualFunctor* , const char* , const char* );
};

// <000716C5> ../public/tier0/utlcommon.h:129
inline void FastCaselessStringEqualFunctor::operator(const char* a, const char* b)
{
} /* size: 0 */

// <0001B618> ../public/tier0/utlcommon.h:129
// member function: 1
// struct size: 1
struct FastCaselessStringEqualFunctor {
	/* ../public/tier0/utlcommon.h:129 */
	bool operator()(const FastCaselessStringEqualFunctor* , const char* , const char* );
};

// <04E4912B> ../public/tier0/utlcommon.h:131
inline void IdentityHashFunctor::operator(uint32 s)
{
} /* size: 0 */

// <00082A70> ../public/tier0/utlcommon.h:131
// member function: 1
// struct size: 1
struct IdentityHashFunctor {
	/* ../public/tier0/utlcommon.h:131 */
	unsigned int operator()(const IdentityHashFunctor* , uint32);
};

// <00082AAB> ../public/tier0/utlcommon.h:132
// member function: 1
// struct size: 1
struct Mix32HashFunctor {
	/* ../public/tier0/utlcommon.h:132 */
	unsigned int operator()(const Mix32HashFunctor* , uint32);
};

// <001DB337> ../../public/tier0/utlcommon.h:132
// member function: 1
// struct size: 1
struct Mix32HashFunctor {
	/* ../../public/tier0/utlcommon.h:132 */
	unsigned int operator()(const Mix32HashFunctor* , uint32);
};

// <04C4597F> ../public/tier0/utlcommon.h:133
// member function: 1
// struct size: 1
struct Mix64HashFunctor {
	/* ../public/tier0/utlcommon.h:133 */
	unsigned int operator()(const Mix64HashFunctor* , uint64);
};

// <049BC100> ../public/tier0/utlcommon.h:134
// member function: 1
// struct size: 1
struct StringHashFunctor {
	/* ../public/tier0/utlcommon.h:134 */
	unsigned int operator()(const StringHashFunctor* , const char* );
};

// <00262318> ../../public/tier0/utlcommon.h:134
// member function: 1
// struct size: 1
struct StringHashFunctor {
	/* ../../public/tier0/utlcommon.h:134 */
	unsigned int operator()(const StringHashFunctor* , const char* );
};

// <0001B69D> ../public/tier0/utlcommon.h:135
// member function: 1
// struct size: 1
struct FastCaselessStringHashFunctor {
	/* ../public/tier0/utlcommon.h:135 */
	unsigned int operator()(const FastCaselessStringHashFunctor* , const char* );
};

// <05F0B64B> ../public/tier0/utlcommon.h:139
inline void PointerHashFunctor::operator(const void* s)
{
} /* size: 0 */

// <021F1B61> ../public/tier0/utlcommon.h:139
// member function: 1
// struct size: 1
struct PointerHashFunctor {
	/* ../public/tier0/utlcommon.h:139 */
	unsigned int operator()(const PointerHashFunctor* , const void* );
};

// <000EBF43> ../public/tier0/utlcommon.h:152
// member functions: 3
// struct size: 1
struct DefaultEqualFunctor<unsigned int> {
	/* ../public/tier0/utlcommon.h:154 */
	bool operator()(const DefaultEqualFunctor<unsigned int>* , Arg_t, Arg_t);
	/* ../public/tier0/utlcommon.h:155 */
	bool operator()(const DefaultEqualFunctor<unsigned int>* , Alt_t, Arg_t);
	/* ../public/tier0/utlcommon.h:156 */
	bool operator()(const DefaultEqualFunctor<unsigned int>* , Arg_t, Alt_t);
};

// <000ED662> ../public/tier0/utlcommon.h:152
// member functions: 3
// struct size: 1
struct DefaultEqualFunctor<short unsigned int> {
	/* ../public/tier0/utlcommon.h:154 */
	bool operator()(const DefaultEqualFunctor<short unsigned int>* , Arg_t, Arg_t);
	/* ../public/tier0/utlcommon.h:155 */
	bool operator()(const DefaultEqualFunctor<short unsigned int>* , Alt_t, Arg_t);
	/* ../public/tier0/utlcommon.h:156 */
	bool operator()(const DefaultEqualFunctor<short unsigned int>* , Arg_t, Alt_t);
};

// <00FF412D> ../public/tier0/utlcommon.h:152
// member functions: 3
// struct size: 1
struct DefaultEqualFunctor<CUtlStringToken> {
	/* ../public/tier0/utlcommon.h:154 */
	bool operator()(const DefaultEqualFunctor<CUtlStringToken>* , Arg_t, Arg_t);
	/* ../public/tier0/utlcommon.h:155 */
	bool operator()(const DefaultEqualFunctor<CUtlStringToken>* , Alt_t, Arg_t);
	/* ../public/tier0/utlcommon.h:156 */
	bool operator()(const DefaultEqualFunctor<CUtlStringToken>* , Arg_t, Alt_t);
};

// <0224F257> ../public/tier0/utlcommon.h:152
// member functions: 3
// struct size: 1
struct DefaultEqualFunctor<CLoadingResource*> {
	/* ../public/tier0/utlcommon.h:154 */
	bool operator()(const DefaultEqualFunctor<CLoadingResource*>* , Arg_t, Arg_t);
	/* ../public/tier0/utlcommon.h:155 */
	bool operator()(const DefaultEqualFunctor<CLoadingResource*>* , Alt_t, Arg_t);
	/* ../public/tier0/utlcommon.h:156 */
	bool operator()(const DefaultEqualFunctor<CLoadingResource*>* , Arg_t, Alt_t);
};

// <02252378> ../public/tier0/utlcommon.h:152
// member functions: 3
// struct size: 1
struct DefaultEqualFunctor<const ResourceBindingBase_t*> {
	/* ../public/tier0/utlcommon.h:154 */
	bool operator()(const DefaultEqualFunctor<const ResourceBindingBase_t*>* , Arg_t, Arg_t);
	/* ../public/tier0/utlcommon.h:155 */
	bool operator()(const DefaultEqualFunctor<const ResourceBindingBase_t*>* , Alt_t, Arg_t);
	/* ../public/tier0/utlcommon.h:156 */
	bool operator()(const DefaultEqualFunctor<const ResourceBindingBase_t*>* , Arg_t, Alt_t);
};

// <02B45906> ../public/tier0/utlcommon.h:152
// member functions: 3
// struct size: 1
struct DefaultEqualFunctor<int> {
	/* ../public/tier0/utlcommon.h:154 */
	bool operator()(const DefaultEqualFunctor<int>* , Arg_t, Arg_t);
	/* ../public/tier0/utlcommon.h:155 */
	bool operator()(const DefaultEqualFunctor<int>* , Alt_t, Arg_t);
	/* ../public/tier0/utlcommon.h:156 */
	bool operator()(const DefaultEqualFunctor<int>* , Arg_t, Alt_t);
};

// <02B6C46A> ../public/tier0/utlcommon.h:152
// member functions: 3
// struct size: 1
struct DefaultEqualFunctor<CSceneLightProbeVolumeObject*> {
	/* ../public/tier0/utlcommon.h:154 */
	bool operator()(const DefaultEqualFunctor<CSceneLightProbeVolumeObject*>* , Arg_t, Arg_t);
	/* ../public/tier0/utlcommon.h:155 */
	bool operator()(const DefaultEqualFunctor<CSceneLightProbeVolumeObject*>* , Alt_t, Arg_t);
	/* ../public/tier0/utlcommon.h:156 */
	bool operator()(const DefaultEqualFunctor<CSceneLightProbeVolumeObject*>* , Arg_t, Alt_t);
};

// <02B6F37E> ../public/tier0/utlcommon.h:152
// member functions: 3
// struct size: 1
struct DefaultEqualFunctor<const CEnvMapSceneObject*> {
	/* ../public/tier0/utlcommon.h:154 */
	bool operator()(const DefaultEqualFunctor<const CEnvMapSceneObject*>* , Arg_t, Arg_t);
	/* ../public/tier0/utlcommon.h:155 */
	bool operator()(const DefaultEqualFunctor<const CEnvMapSceneObject*>* , Alt_t, Arg_t);
	/* ../public/tier0/utlcommon.h:156 */
	bool operator()(const DefaultEqualFunctor<const CEnvMapSceneObject*>* , Arg_t, Alt_t);
};

// <02DB68E0> ../public/tier0/utlcommon.h:152
// member functions: 3
// struct size: 1
struct DefaultEqualFunctor<const IMaterial2*> {
	/* ../public/tier0/utlcommon.h:154 */
	bool operator()(const DefaultEqualFunctor<const IMaterial2*>* , Arg_t, Arg_t);
	/* ../public/tier0/utlcommon.h:155 */
	bool operator()(const DefaultEqualFunctor<const IMaterial2*>* , Alt_t, Arg_t);
	/* ../public/tier0/utlcommon.h:156 */
	bool operator()(const DefaultEqualFunctor<const IMaterial2*>* , Arg_t, Alt_t);
};

// <04CA773E> ../public/tier0/utlcommon.h:152
// member functions: 3
// struct size: 1
struct DefaultEqualFunctor<long long unsigned int> {
	/* ../public/tier0/utlcommon.h:154 */
	bool operator()(const DefaultEqualFunctor<long long unsigned int>* , Arg_t, Arg_t);
	/* ../public/tier0/utlcommon.h:155 */
	bool operator()(const DefaultEqualFunctor<long long unsigned int>* , Alt_t, Arg_t);
	/* ../public/tier0/utlcommon.h:156 */
	bool operator()(const DefaultEqualFunctor<long long unsigned int>* , Arg_t, Alt_t);
};

// <05C68E3B> ../public/tier0/utlcommon.h:152
// member functions: 3
// struct size: 1
struct DefaultEqualFunctor<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t> {
	/* ../public/tier0/utlcommon.h:154 */
	bool operator()(const DefaultEqualFunctor<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>* , Arg_t, Arg_t);
	/* ../public/tier0/utlcommon.h:155 */
	bool operator()(const DefaultEqualFunctor<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>* , Alt_t, Arg_t);
	/* ../public/tier0/utlcommon.h:156 */
	bool operator()(const DefaultEqualFunctor<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>* , Arg_t, Alt_t);
};

// <05CC63F6> ../public/tier0/utlcommon.h:152
// member functions: 3
// struct size: 1
struct DefaultEqualFunctor<UndirectedEdge_t> {
	/* ../public/tier0/utlcommon.h:154 */
	bool operator()(const DefaultEqualFunctor<UndirectedEdge_t>* , Arg_t, Arg_t);
	/* ../public/tier0/utlcommon.h:155 */
	bool operator()(const DefaultEqualFunctor<UndirectedEdge_t>* , Alt_t, Arg_t);
	/* ../public/tier0/utlcommon.h:156 */
	bool operator()(const DefaultEqualFunctor<UndirectedEdge_t>* , Arg_t, Alt_t);
};

// <05D9D171> ../public/tier0/utlcommon.h:152
// member functions: 3
// struct size: 1
struct DefaultEqualFunctor<const qhFace*> {
	/* ../public/tier0/utlcommon.h:154 */
	bool operator()(const DefaultEqualFunctor<const qhFace*>* , Arg_t, Arg_t);
	/* ../public/tier0/utlcommon.h:155 */
	bool operator()(const DefaultEqualFunctor<const qhFace*>* , Alt_t, Arg_t);
	/* ../public/tier0/utlcommon.h:156 */
	bool operator()(const DefaultEqualFunctor<const qhFace*>* , Arg_t, Alt_t);
};

// <05DAAAD1> ../public/tier0/utlcommon.h:152
// member functions: 3
// struct size: 1
struct DefaultEqualFunctor<const qhVertex*> {
	/* ../public/tier0/utlcommon.h:154 */
	bool operator()(const DefaultEqualFunctor<const qhVertex*>* , Arg_t, Arg_t);
	/* ../public/tier0/utlcommon.h:155 */
	bool operator()(const DefaultEqualFunctor<const qhVertex*>* , Alt_t, Arg_t);
	/* ../public/tier0/utlcommon.h:156 */
	bool operator()(const DefaultEqualFunctor<const qhVertex*>* , Arg_t, Alt_t);
};

// <05E3076B> ../public/tier0/utlcommon.h:152
// member functions: 3
// struct size: 1
struct DefaultEqualFunctor<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t> {
	/* ../public/tier0/utlcommon.h:154 */
	bool operator()(const DefaultEqualFunctor<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t, Arg_t, Arg_t);
	/* ../public/tier0/utlcommon.h:155 */
	bool operator()(const DefaultEqualFunctor<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t, Alt_t, Arg_t);
	/* ../public/tier0/utlcommon.h:156 */
	bool operator()(const DefaultEqualFunctor<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t, Arg_t, Alt_t);
};

// <05E320A1> ../public/tier0/utlcommon.h:152
// member functions: 3
// struct size: 1
struct DefaultEqualFunctor<qhVertex*> {
	/* ../public/tier0/utlcommon.h:154 */
	bool operator()(const DefaultEqualFunctor<qhVertex*>* , Arg_t, Arg_t);
	/* ../public/tier0/utlcommon.h:155 */
	bool operator()(const DefaultEqualFunctor<qhVertex*>* , Alt_t, Arg_t);
	/* ../public/tier0/utlcommon.h:156 */
	bool operator()(const DefaultEqualFunctor<qhVertex*>* , Arg_t, Alt_t);
};

// <060503B7> ../public/tier0/utlcommon.h:152
// member functions: 3
// struct size: 1
struct DefaultEqualFunctor<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t> {
	/* ../public/tier0/utlcommon.h:154 */
	bool operator()(const DefaultEqualFunctor<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>* , Arg_t, Arg_t);
	/* ../public/tier0/utlcommon.h:155 */
	bool operator()(const DefaultEqualFunctor<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>* , Alt_t, Arg_t);
	/* ../public/tier0/utlcommon.h:156 */
	bool operator()(const DefaultEqualFunctor<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>* , Arg_t, Alt_t);
};

// <06051C8A> ../public/tier0/utlcommon.h:152
// member functions: 3
// struct size: 1
struct DefaultEqualFunctor<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t> {
	/* ../public/tier0/utlcommon.h:154 */
	bool operator()(const DefaultEqualFunctor<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>* , Arg_t, Arg_t);
	/* ../public/tier0/utlcommon.h:155 */
	bool operator()(const DefaultEqualFunctor<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>* , Alt_t, Arg_t);
	/* ../public/tier0/utlcommon.h:156 */
	bool operator()(const DefaultEqualFunctor<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>* , Arg_t, Alt_t);
};

// <06055B4A> ../public/tier0/utlcommon.h:152
// member functions: 3
// struct size: 1
struct DefaultEqualFunctor<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t> {
	/* ../public/tier0/utlcommon.h:154 */
	bool operator()(const DefaultEqualFunctor<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>* , Arg_t, Arg_t);
	/* ../public/tier0/utlcommon.h:155 */
	bool operator()(const DefaultEqualFunctor<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>* , Alt_t, Arg_t);
	/* ../public/tier0/utlcommon.h:156 */
	bool operator()(const DefaultEqualFunctor<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>* , Arg_t, Alt_t);
};

// <003ECF4C> ../public/tier0/utlcommon.h:152
// member functions: 3
// struct size: 1
struct DefaultEqualFunctor<AnimNodeID> {
	/* ../public/tier0/utlcommon.h:154 */
	bool operator()(const DefaultEqualFunctor<AnimNodeID>* , Arg_t, Arg_t);
	/* ../public/tier0/utlcommon.h:155 */
	bool operator()(const DefaultEqualFunctor<AnimNodeID>* , Alt_t, Arg_t);
	/* ../public/tier0/utlcommon.h:156 */
	bool operator()(const DefaultEqualFunctor<AnimNodeID>* , Arg_t, Alt_t);
};

// <004AB326> ../public/tier0/utlcommon.h:152
// member functions: 3
// struct size: 1
struct DefaultEqualFunctor<AnimOutputID> {
	/* ../public/tier0/utlcommon.h:154 */
	bool operator()(const DefaultEqualFunctor<AnimOutputID>* , Arg_t, Arg_t);
	/* ../public/tier0/utlcommon.h:155 */
	bool operator()(const DefaultEqualFunctor<AnimOutputID>* , Alt_t, Arg_t);
	/* ../public/tier0/utlcommon.h:156 */
	bool operator()(const DefaultEqualFunctor<AnimOutputID>* , Arg_t, Alt_t);
};

// <00D8916F> ../public/tier0/utlcommon.h:152
// member functions: 3
// struct size: 1
struct DefaultEqualFunctor<Reflection::ClassID> {
	/* ../public/tier0/utlcommon.h:154 */
	bool operator()(const DefaultEqualFunctor<Reflection::ClassID>* , Arg_t, Arg_t);
	/* ../public/tier0/utlcommon.h:155 */
	bool operator()(const DefaultEqualFunctor<Reflection::ClassID>* , Alt_t, Arg_t);
	/* ../public/tier0/utlcommon.h:156 */
	bool operator()(const DefaultEqualFunctor<Reflection::ClassID>* , Arg_t, Alt_t);
};

// <00DA0BEA> ../public/tier0/utlcommon.h:152
// member functions: 3
// struct size: 1
struct DefaultEqualFunctor<AnimParamID> {
	/* ../public/tier0/utlcommon.h:154 */
	bool operator()(const DefaultEqualFunctor<AnimParamID>* , Arg_t, Arg_t);
	/* ../public/tier0/utlcommon.h:155 */
	bool operator()(const DefaultEqualFunctor<AnimParamID>* , Alt_t, Arg_t);
	/* ../public/tier0/utlcommon.h:156 */
	bool operator()(const DefaultEqualFunctor<AnimParamID>* , Arg_t, Alt_t);
};

// <00DEE4C6> ../public/tier0/utlcommon.h:152
// member functions: 3
// struct size: 1
struct DefaultEqualFunctor<AnimTagID> {
	/* ../public/tier0/utlcommon.h:154 */
	bool operator()(const DefaultEqualFunctor<AnimTagID>* , Arg_t, Arg_t);
	/* ../public/tier0/utlcommon.h:155 */
	bool operator()(const DefaultEqualFunctor<AnimTagID>* , Alt_t, Arg_t);
	/* ../public/tier0/utlcommon.h:156 */
	bool operator()(const DefaultEqualFunctor<AnimTagID>* , Arg_t, Alt_t);
};

// <015340E9> ../public/tier0/utlcommon.h:152
// member functions: 3
// struct size: 1
struct DefaultEqualFunctor<const CAnimUpdateNodeBase*> {
	/* ../public/tier0/utlcommon.h:154 */
	bool operator()(const DefaultEqualFunctor<const CAnimUpdateNodeBase*>* , Arg_t, Arg_t);
	/* ../public/tier0/utlcommon.h:155 */
	bool operator()(const DefaultEqualFunctor<const CAnimUpdateNodeBase*>* , Alt_t, Arg_t);
	/* ../public/tier0/utlcommon.h:156 */
	bool operator()(const DefaultEqualFunctor<const CAnimUpdateNodeBase*>* , Arg_t, Alt_t);
};

// <00445E0F> ../public/tier0/utlcommon.h:152
// member functions: 3
// struct size: 1
struct DefaultEqualFunctor<RenderResourceHandle_t__*> {
	/* ../public/tier0/utlcommon.h:154 */
	bool operator()(const DefaultEqualFunctor<RenderResourceHandle_t__*>* , Arg_t, Arg_t);
	/* ../public/tier0/utlcommon.h:155 */
	bool operator()(const DefaultEqualFunctor<RenderResourceHandle_t__*>* , Alt_t, Arg_t);
	/* ../public/tier0/utlcommon.h:156 */
	bool operator()(const DefaultEqualFunctor<RenderResourceHandle_t__*>* , Arg_t, Alt_t);
};

// <004F64A5> ../public/tier0/utlcommon.h:152
// member functions: 3
// struct size: 1
struct DefaultEqualFunctor<CVulkanImage*> {
	/* ../public/tier0/utlcommon.h:154 */
	bool operator()(const DefaultEqualFunctor<CVulkanImage*>* , Arg_t, Arg_t);
	/* ../public/tier0/utlcommon.h:155 */
	bool operator()(const DefaultEqualFunctor<CVulkanImage*>* , Alt_t, Arg_t);
	/* ../public/tier0/utlcommon.h:156 */
	bool operator()(const DefaultEqualFunctor<CVulkanImage*>* , Arg_t, Alt_t);
};

// <005C5171> ../public/tier0/utlcommon.h:152
// member functions: 3
// struct size: 1
struct DefaultEqualFunctor<VkDeviceMemory_T*> {
	/* ../public/tier0/utlcommon.h:154 */
	bool operator()(const DefaultEqualFunctor<VkDeviceMemory_T*>* , Arg_t, Arg_t);
	/* ../public/tier0/utlcommon.h:155 */
	bool operator()(const DefaultEqualFunctor<VkDeviceMemory_T*>* , Alt_t, Arg_t);
	/* ../public/tier0/utlcommon.h:156 */
	bool operator()(const DefaultEqualFunctor<VkDeviceMemory_T*>* , Arg_t, Alt_t);
};

// <0061D852> ../public/tier0/utlcommon.h:152
// member functions: 3
// struct size: 1
struct DefaultEqualFunctor<long unsigned int> {
	/* ../public/tier0/utlcommon.h:154 */
	bool operator()(const DefaultEqualFunctor<long unsigned int>* , Arg_t, Arg_t);
	/* ../public/tier0/utlcommon.h:155 */
	bool operator()(const DefaultEqualFunctor<long unsigned int>* , Alt_t, Arg_t);
	/* ../public/tier0/utlcommon.h:156 */
	bool operator()(const DefaultEqualFunctor<long unsigned int>* , Arg_t, Alt_t);
};

// <006CB4FB> ../public/tier0/utlcommon.h:152
// member functions: 3
// struct size: 1
struct DefaultEqualFunctor<VkRenderPass_T*> {
	/* ../public/tier0/utlcommon.h:154 */
	bool operator()(const DefaultEqualFunctor<VkRenderPass_T*>* , Arg_t, Arg_t);
	/* ../public/tier0/utlcommon.h:155 */
	bool operator()(const DefaultEqualFunctor<VkRenderPass_T*>* , Alt_t, Arg_t);
	/* ../public/tier0/utlcommon.h:156 */
	bool operator()(const DefaultEqualFunctor<VkRenderPass_T*>* , Arg_t, Alt_t);
};

// <00C1E633> ../public/tier0/utlcommon.h:152
// member functions: 3
// struct size: 1
struct DefaultEqualFunctor<CDescriptorSetVulkan*> {
	/* ../public/tier0/utlcommon.h:154 */
	bool operator()(const DefaultEqualFunctor<CDescriptorSetVulkan*>* , Arg_t, Arg_t);
	/* ../public/tier0/utlcommon.h:155 */
	bool operator()(const DefaultEqualFunctor<CDescriptorSetVulkan*>* , Alt_t, Arg_t);
	/* ../public/tier0/utlcommon.h:156 */
	bool operator()(const DefaultEqualFunctor<CDescriptorSetVulkan*>* , Arg_t, Alt_t);
};

// <0021AC5F> ../../public/tier0/utlcommon.h:152
// member functions: 3
// struct size: 1
struct DefaultEqualFunctor<unsigned int> {
	/* ../../public/tier0/utlcommon.h:154 */
	bool operator()(const DefaultEqualFunctor<unsigned int>* , Arg_t, Arg_t);
	/* ../../public/tier0/utlcommon.h:155 */
	bool operator()(const DefaultEqualFunctor<unsigned int>* , Alt_t, Arg_t);
	/* ../../public/tier0/utlcommon.h:156 */
	bool operator()(const DefaultEqualFunctor<unsigned int>* , Arg_t, Alt_t);
};

// <00254610> ../public/tier0/utlcommon.h:152
// member functions: 3
// struct size: 1
struct DefaultEqualFunctor<CKeyValuesSystem::SharedStringData_t*> {
	/* ../public/tier0/utlcommon.h:154 */
	bool operator()(const DefaultEqualFunctor<CKeyValuesSystem::SharedStringData_t*>* , Arg_t, Arg_t);
	/* ../public/tier0/utlcommon.h:155 */
	bool operator()(const DefaultEqualFunctor<CKeyValuesSystem::SharedStringData_t*>* , Alt_t, Arg_t);
	/* ../public/tier0/utlcommon.h:156 */
	bool operator()(const DefaultEqualFunctor<CKeyValuesSystem::SharedStringData_t*>* , Arg_t, Alt_t);
};

// <0015CA16> ../public/tier0/utlcommon.h:152
// member functions: 3
// struct size: 1
struct DefaultEqualFunctor<const CResourceDiskStructField*> {
	/* ../public/tier0/utlcommon.h:154 */
	bool operator()(const DefaultEqualFunctor<const CResourceDiskStructField*>* , Arg_t, Arg_t);
	/* ../public/tier0/utlcommon.h:155 */
	bool operator()(const DefaultEqualFunctor<const CResourceDiskStructField*>* , Alt_t, Arg_t);
	/* ../public/tier0/utlcommon.h:156 */
	bool operator()(const DefaultEqualFunctor<const CResourceDiskStructField*>* , Arg_t, Alt_t);
};

// <002EA2CF> ../public/tier0/utlcommon.h:152
// member functions: 3
// struct size: 1
struct DefaultEqualFunctor<SpamKey_t> {
	/* ../public/tier0/utlcommon.h:154 */
	bool operator()(const DefaultEqualFunctor<SpamKey_t>* , Arg_t, Arg_t);
	/* ../public/tier0/utlcommon.h:155 */
	bool operator()(const DefaultEqualFunctor<SpamKey_t>* , Alt_t, Arg_t);
	/* ../public/tier0/utlcommon.h:156 */
	bool operator()(const DefaultEqualFunctor<SpamKey_t>* , Arg_t, Alt_t);
};

// <06E7D511> ../public/tier0/utlcommon.h:154
inline void DefaultEqualFunctor<unsigned int>::operator(Arg_t a, Arg_t b)
{
} /* size: 0 */

// <0607AA8A> ../public/tier0/utlcommon.h:154
inline void DefaultEqualFunctor<CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t>::operator(Arg_t a, Arg_t b)
{
} /* size: 0 */

// <0607A50E> ../public/tier0/utlcommon.h:154
inline void DefaultEqualFunctor<CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t>::operator(Arg_t a, Arg_t b)
{
} /* size: 0 */

// <06079D0D> ../public/tier0/utlcommon.h:154
inline void DefaultEqualFunctor<CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t>::operator(Arg_t a, Arg_t b)
{
} /* size: 0 */

// <06076207> ../public/tier0/utlcommon.h:154
inline void DefaultEqualFunctor<CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t>::operator(Arg_t a, Arg_t b)
{
} /* size: 0 */

// <06070A4E> ../public/tier0/utlcommon.h:154
inline void DefaultEqualFunctor<int>::operator(Arg_t a, Arg_t b)
{
} /* size: 0 */

// <05EDA0CB> ../public/tier0/utlcommon.h:154
inline void DefaultEqualFunctor<const qhVertex::operator(Arg_t a, Arg_t b)
{
} /* size: 0 */

// <05E55E92> ../public/tier0/utlcommon.h:154
inline void operator()(const DefaultEqualFunctor<CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Ve this, Arg_t a, Arg_t b)
{
} /* size: 0 */

// <05E51CB5> ../public/tier0/utlcommon.h:154
inline void DefaultEqualFunctor<qhVertex::operator(Arg_t a, Arg_t b)
{
} /* size: 0 */

// <05DD3891> ../public/tier0/utlcommon.h:154
inline void DefaultEqualFunctor<const qhFace::operator(Arg_t a, Arg_t b)
{
} /* size: 0 */

// <05CDA6FC> ../public/tier0/utlcommon.h:154
inline void DefaultEqualFunctor<UndirectedEdge_t>::operator(Arg_t a, Arg_t b)
{
} /* size: 0 */

// <05549603> ../public/tier0/utlcommon.h:154
inline void DefaultEqualFunctor<CUtlStringToken>::operator(Arg_t a, Arg_t b)
{
} /* size: 0 */

// <04E35368> ../public/tier0/utlcommon.h:154
inline void DefaultEqualFunctor<const ResourceBindingBase_t::operator(Arg_t a, Arg_t b)
{
} /* size: 0 */

// <04E345B6> ../public/tier0/utlcommon.h:154
inline void DefaultEqualFunctor<short unsigned int>::operator(Arg_t a, Arg_t b)
{
} /* size: 0 */

// <04CB13C7> ../public/tier0/utlcommon.h:154
inline void DefaultEqualFunctor<long long unsigned int>::operator(Arg_t a, Arg_t b)
{
} /* size: 0 */

// <03FF8B07> ../public/tier0/utlcommon.h:154
inline void DefaultEqualFunctor<const IMaterial2::operator(Arg_t a, Arg_t b)
{
} /* size: 0 */

// <03928356> ../public/tier0/utlcommon.h:154
inline void DefaultEqualFunctor<CSceneLightProbeVolumeObject::operator(Arg_t a, Arg_t b)
{
} /* size: 0 */

// <0229E0F2> ../public/tier0/utlcommon.h:154
inline void DefaultEqualFunctor<CLoadingResource::operator(Arg_t a, Arg_t b)
{
} /* size: 0 */

// <01C1C84A> ../public/tier0/utlcommon.h:154
inline void DefaultEqualFunctor<Reflection::ClassID>::operator(Arg_t a, Arg_t b)
{
} /* size: 0 */

// <01576D49> ../public/tier0/utlcommon.h:154
inline void DefaultEqualFunctor<AnimNodeID>::operator(Arg_t a, Arg_t b)
{
} /* size: 0 */

// <015756DF> ../public/tier0/utlcommon.h:154
inline void DefaultEqualFunctor<const CAnimUpdateNodeBase::operator(Arg_t a, Arg_t b)
{
} /* size: 0 */

// <01262F77> ../public/tier0/utlcommon.h:154
inline void DefaultEqualFunctor<AnimOutputID>::operator(Arg_t a, Arg_t b)
{
} /* size: 0 */

// <00F4A16E> ../public/tier0/utlcommon.h:154
inline void DefaultEqualFunctor<AnimParamID>::operator(Arg_t a, Arg_t b)
{
} /* size: 0 */

// <00E04082> ../public/tier0/utlcommon.h:154
inline void DefaultEqualFunctor<AnimTagID>::operator(Arg_t a, Arg_t b)
{
} /* size: 0 */

// <00C29912> ../public/tier0/utlcommon.h:154
inline void DefaultEqualFunctor<CDescriptorSetVulkan::operator(Arg_t a, Arg_t b)
{
} /* size: 0 */

// <006FC9DB> ../public/tier0/utlcommon.h:154
inline void DefaultEqualFunctor<VkRenderPass_T::operator(Arg_t a, Arg_t b)
{
} /* size: 0 */

// <006570B9> ../public/tier0/utlcommon.h:154
inline void DefaultEqualFunctor<long unsigned int>::operator(Arg_t a, Arg_t b)
{
} /* size: 0 */

// <004FE80F> ../public/tier0/utlcommon.h:154
inline void DefaultEqualFunctor<CVulkanImage::operator(Arg_t a, Arg_t b)
{
} /* size: 0 */

// <00448265> ../public/tier0/utlcommon.h:154
inline void DefaultEqualFunctor<RenderResourceHandle_t__::operator(Arg_t a, Arg_t b)
{
} /* size: 0 */

// <0025C080> ../public/tier0/utlcommon.h:154
inline void DefaultEqualFunctor<CKeyValuesSystem::SharedStringData_t::operator(Arg_t a, Arg_t b)
{
} /* size: 0 */

// <00160620> ../public/tier0/utlcommon.h:154
inline void DefaultEqualFunctor<const CResourceDiskStructField::operator(Arg_t a, Arg_t b)
{
} /* size: 0 */

// <002EDAC1> ../public/tier0/utlcommon.h:154
inline void DefaultEqualFunctor<SpamKey_t>::operator(Arg_t a, Arg_t b)
{
} /* size: 0 */

// <00A888F7> ../public/tier0/utlcommon.h:164
// member variable: 1
// struct size: 1
struct DefaultHashFunctor<short unsigned int> : public Mix32HashFunctor {
public:
	/* struct Mix32HashFunctor <ancestor>; */ /* 0 0 */
};

// <02AF1AD7> ../public/tier0/utlcommon.h:165
// member variable: 1
// struct size: 1
struct DefaultHashFunctor<int> : public Mix32HashFunctor {
public:
	/* struct Mix32HashFunctor <ancestor>; */ /* 0 0 */
};

// <00082AE6> ../public/tier0/utlcommon.h:166
// member variable: 1
// struct size: 1
struct DefaultHashFunctor<unsigned int> : public Mix32HashFunctor {
public:
	/* struct Mix32HashFunctor <ancestor>; */ /* 0 0 */
};

// <005FCC05> ../public/tier0/utlcommon.h:172
// member variable: 1
// struct size: 1
struct DefaultHashFunctor<long unsigned int> : public Mix64HashFunctor {
public:
	/* struct Mix64HashFunctor <ancestor>; */ /* 0 0 */
};

// <04C459BF> ../public/tier0/utlcommon.h:175
// member variable: 1
// struct size: 1
struct DefaultHashFunctor<long long unsigned int> : public Mix64HashFunctor {
public:
	/* struct Mix64HashFunctor <ancestor>; */ /* 0 0 */
};

// <00AD32A9> ../public/tier0/utlcommon.h:187
// member variable: 1
// struct size: 1
struct DefaultEqualFunctor<char const*> : public StringEqualFunctor {
public:
	/* struct StringEqualFunctor <ancestor>; */ /* 0 0 */
};

// <00AD32CC> ../public/tier0/utlcommon.h:189
// member variable: 1
// struct size: 1
struct DefaultHashFunctor<char const*> : public StringHashFunctor {
public:
	/* struct StringHashFunctor <ancestor>; */ /* 0 0 */
};

// <049BC163> ../public/tier0/utlcommon.h:198
// member variable: 1
// struct size: 1
struct DefaultHashFunctor<CUtlString> : public StringHashFunctor {
public:
	/* struct StringHashFunctor <ancestor>; */ /* 0 0 */
};

// <049BC186> ../public/tier0/utlcommon.h:199
// member variable: 1
// struct size: 1
struct DefaultEqualFunctor<CUtlString> : public StringEqualFunctor {
public:
	/* struct StringEqualFunctor <ancestor>; */ /* 0 0 */
};

// <02314A1A> ../public/tier0/utlcommon.h:206
// struct size: 1
struct HasClassAltArgumentType<const ResourceId_t&> {
	/* ../public/tier0/utlcommon.h:210 */
	enum {
		value = 0,
	};
};

// <02314A45> ../public/tier0/utlcommon.h:206
// struct size: 1
struct HasClassAltArgumentType<const ResourceId_t> {
	/* ../public/tier0/utlcommon.h:210 */
	enum {
		value = 0,
	};
};

// <05E2EA88> ../public/tier0/utlcommon.h:206
// struct size: 1
struct HasClassAltArgumentType<const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t&> {
	/* ../public/tier0/utlcommon.h:210 */
	enum {
		value = 0,
	};
};

// <05E2EAB3> ../public/tier0/utlcommon.h:206
// struct size: 1
struct HasClassAltArgumentType<const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t> {
	/* ../public/tier0/utlcommon.h:210 */
	enum {
		value = 0,
	};
};

// <000178DB> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<unsigned int, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef unsigned int Arg_t;
};

// <0001B68B> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const empty_t&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class empty_t & Arg_t;
};

// <0001B6BD> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const undefined_t&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class undefined_t & Arg_t;
};

// <00082B15> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<short unsigned int, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef short unsigned int Arg_t;
	/* ../public/tier0/utlcommon.h:238 */
	typedef struct undefined_t Alt_t;
};

// <00AC112A> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const b3ContactId&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class b3ContactId & Arg_t;
};

// <00FF2904> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const CUtlStringToken&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class CUtlStringToken & Arg_t;
	/* ../public/tier0/utlcommon.h:238 */
	typedef struct undefined_t Alt_t;
};

// <00FF296F> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const CWeakHandle<InfoForResourceTypeCEntityLump>&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class CWeakHandle<InfoForResourceTypeCEntityLump> & Arg_t;
};

// <02176997> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<int, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef int Arg_t;
};

// <02186344> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<char const*, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const char * Arg_t;
};

// <021BE770> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const ResourceId_t&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class ResourceId_t & Arg_t;
	/* ../public/tier0/utlcommon.h:238 */
	typedef struct undefined_t Alt_t;
};

// <021C1E9A> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> >*, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef class CUtlVector<IGenericDataResourceListener*, CUtlMemory<IGenericDataResourceListener*, int> > * Arg_t;
};

// <0224CF32> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<CLoadingResource*, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef class CLoadingResource * Arg_t;
	/* ../public/tier0/utlcommon.h:238 */
	typedef struct undefined_t Alt_t;
};

// <02250BBB> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const ResourceBindingBase_t*, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class ResourceBindingBase_t * Arg_t;
	/* ../public/tier0/utlcommon.h:238 */
	typedef struct undefined_t Alt_t;
};

// <02697CB2> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const CVSoundTypeManager::SfxDictEntry&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class SfxDictEntry & Arg_t;
};

// <02B6AC99> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<CSceneLightProbeVolumeObject*, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef class CSceneLightProbeVolumeObject * Arg_t;
	/* ../public/tier0/utlcommon.h:238 */
	typedef struct undefined_t Alt_t;
};

// <02B6DCA8> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const CEnvMapSceneObject*, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class CEnvMapSceneObject * Arg_t;
	/* ../public/tier0/utlcommon.h:238 */
	typedef struct undefined_t Alt_t;
};

// <02DB520C> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const IMaterial2*, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class IMaterial2 * Arg_t;
	/* ../public/tier0/utlcommon.h:238 */
	typedef struct undefined_t Alt_t;
};

// <02DC75F2> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const CSceneSystem::FrameBufferScratchTexInfo_t&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class FrameBufferScratchTexInfo_t & Arg_t;
};

// <049BC25F> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<float, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef float Arg_t;
};

// <04A3123D> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const CUtlString&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class CUtlString & Arg_t;
};

// <04C459ED> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<long long unsigned int, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef long long unsigned int Arg_t;
	/* ../public/tier0/utlcommon.h:238 */
	typedef struct undefined_t Alt_t;
};

// <05C63D04> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const CHalfEdgeComponentList<CModelMesh::Edge_t>::ComponentHandleWithListPointer_t&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class ComponentHandleWithListPointer_t & Arg_t;
	/* ../public/tier0/utlcommon.h:238 */
	typedef struct undefined_t Alt_t;
};

// <05CC4B5A> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const UndirectedEdge_t&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class UndirectedEdge_t & Arg_t;
	/* ../public/tier0/utlcommon.h:238 */
	typedef struct undefined_t Alt_t;
};

// <05CD2F5F> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const EdgeFaceIdEntry_t&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class EdgeFaceIdEntry_t & Arg_t;
};

// <05D9B9A7> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const qhFace*, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class qhFace * Arg_t;
	/* ../public/tier0/utlcommon.h:238 */
	typedef struct undefined_t Alt_t;
};

// <05DA92DE> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const qhVertex*, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class qhVertex * Arg_t;
	/* ../public/tier0/utlcommon.h:238 */
	typedef struct undefined_t Alt_t;
};

// <05E2EADE> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const CHalfEdgeComponentList<CHalfEdgeMesh<HullIVRVertexData_t, empty_t, HullIVRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class ComponentHandleWithListPointer_t & Arg_t;
	/* ../public/tier0/utlcommon.h:238 */
	typedef struct undefined_t Alt_t;
};

// <05E2EFC2> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const Vector&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class Vector & Arg_t;
};

// <05E30874> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<qhVertex*, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef class qhVertex * Arg_t;
	/* ../public/tier0/utlcommon.h:238 */
	typedef struct undefined_t Alt_t;
};

// <05EC0351> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const CHalfEdgeComponentList<CHalfEdgeMesh<HullIFRVertexData_t, HullIFRHalfEdgeData_t, HullIFRFaceData_t>::Vertex_t>::ComponentHandleWithListPointer_t&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class ComponentHandleWithListPointer_t & Arg_t;
};

// <0604EB86> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const CHalfEdgeComponentList<CModelMesh::Vertex_t>::ComponentHandleWithListPointer_t&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class ComponentHandleWithListPointer_t & Arg_t;
	/* ../public/tier0/utlcommon.h:238 */
	typedef struct undefined_t Alt_t;
};

// <060504C0> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const CHalfEdgeComponentList<CModelMesh::FaceVertex_t>::ComponentHandleWithListPointer_t&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class ComponentHandleWithListPointer_t & Arg_t;
	/* ../public/tier0/utlcommon.h:238 */
	typedef struct undefined_t Alt_t;
};

// <06054397> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const CHalfEdgeComponentList<CModelMesh::Face_t>::ComponentHandleWithListPointer_t&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class ComponentHandleWithListPointer_t & Arg_t;
	/* ../public/tier0/utlcommon.h:238 */
	typedef struct undefined_t Alt_t;
};

// <00031E16> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<int, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef int Arg_t;
	/* ../public/tier0/utlcommon.h:238 */
	typedef struct undefined_t Alt_t;
};

// <003ECF14> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const AnimNodeID&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class AnimNodeID & Arg_t;
	/* ../public/tier0/utlcommon.h:238 */
	typedef struct undefined_t Alt_t;
};

// <003EE663> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const CSmartPtr<CAnimNodeBase, CRefCountAccessor>&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class CSmartPtr<CAnimNodeBase, CRefCountAccessor> & Arg_t;
};

// <003EFDEC> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<CAnimNodeBase*, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef class CAnimNodeBase * Arg_t;
};

// <004A9BB6> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const AnimOutputID&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class AnimOutputID & Arg_t;
	/* ../public/tier0/utlcommon.h:238 */
	typedef struct undefined_t Alt_t;
};

// <004A9BEE> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const CNodeConnection&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class CNodeConnection & Arg_t;
};

// <006F420D> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const HSequence&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class HSequence & Arg_t;
	/* ../public/tier0/utlcommon.h:238 */
	typedef struct undefined_t Alt_t;
};

// <006F4280> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor>&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class CSmartPtr<CSequenceDistanceHelper, CRefCountAccessor> & Arg_t;
};

// <00D879B5> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const Reflection::ClassID&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class ClassID & Arg_t;
	/* ../public/tier0/utlcommon.h:238 */
	typedef struct undefined_t Alt_t;
};

// <00D87A85> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const std::shared_ptr<Reflection::CAttribute>&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class shared_ptr<Reflection::CAttribute> & Arg_t;
};

// <00DA0BB2> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const AnimParamID&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class AnimParamID & Arg_t;
	/* ../public/tier0/utlcommon.h:238 */
	typedef struct undefined_t Alt_t;
};

// <00DDE71C> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor> & Arg_t;
};

// <00DE08CE> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor> & Arg_t;
};

// <00DE20EE> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const CSmartPtr<const CActivityValues, CRefCountAccessor>&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class CSmartPtr<const CActivityValues, CRefCountAccessor> & Arg_t;
};

// <00DEB4AC> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const CAnimParameterBase*, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class CAnimParameterBase * Arg_t;
};

// <00DECCBD> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const AnimTagID&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class AnimTagID & Arg_t;
	/* ../public/tier0/utlcommon.h:238 */
	typedef struct undefined_t Alt_t;
};

// <00DECCF5> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const CAnimTagBase*, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class CAnimTagBase * Arg_t;
};

// <00EF705B> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const CSmartPtr<Reflection::CInstanceFactory<CAnimMotorInstance, CAnimMotorBase, const CAnimMotorUpdaterBase*, const CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>&>::CFactoryMaker, CRefCountAccessor>&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class CSmartPtr<Reflection::CInstanceFactory<CAnimMotorInstance, CAnimMotorBase, const CAnimMotorUpdaterBase*, const CSmartPtr< & Arg_t;
};

// <0111963E> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const CSmartPtr<Reflection::CInstanceFactory<CMotionMetricInstance, CMotionMetricBase, const CSmartPtr<CAnimGraphUpdateContext, CRefCountAccessor>&, CPackedHandle<const CMotionMetricEvaluator> >::CFactoryMaker, CRefCountAccessor>&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class CSmartPtr<Reflection::CInstanceFactory<CMotionMetricInstance, CMotionMetricBase, const CSmartPtr<CAnimGraphUpdateContext, & Arg_t;
};

// <01237FF9> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const CSmartPtr<CSubGraph, CRefCountAccessor>&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class CSmartPtr<CSubGraph, CRefCountAccessor> & Arg_t;
};

// <012F7B54> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const CUtlVector<IAnimTagListener*, CUtlMemory<IAnimTagListener*, int> >&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class CUtlVector<IAnimTagListener*, CUtlMemory<IAnimTagListener*, int> > & Arg_t;
};

// <0151F1C9> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const CSmartPtr<CUpdateNodeManager, CRefCountAccessor>&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class CSmartPtr<CUpdateNodeManager, CRefCountAccessor> & Arg_t;
};

// <01520AA6> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const CPackedHandle<CAnimUpdateNodeBase>&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class CPackedHandle<CAnimUpdateNodeBase> & Arg_t;
};

// <015222C1> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const CSmartPtr<const CAnimNodeBase, CRefCountAccessor>&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class CSmartPtr<const CAnimNodeBase, CRefCountAccessor> & Arg_t;
};

// <015328ED> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const CAnimUpdateNodeBase*, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class CAnimUpdateNodeBase * Arg_t;
	/* ../public/tier0/utlcommon.h:238 */
	typedef struct undefined_t Alt_t;
};

// <01532925> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const CRootMotion&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class CRootMotion & Arg_t;
};

// <0153421C> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const CStrideStatus&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class CStrideStatus & Arg_t;
};

// <0258C4FE> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const CAnimationDecodeCacheEntry_t&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class CAnimationDecodeCacheEntry_t & Arg_t;
};

// <00440862> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<RenderResourceHandle_t__*, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef class RenderResourceHandle_t__ * Arg_t;
	/* ../public/tier0/utlcommon.h:238 */
	typedef struct undefined_t Alt_t;
};

// <00445380> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const RenderDescriptorBinding_t&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class RenderDescriptorBinding_t & Arg_t;
};

// <004CE7BD> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const VulkanFramebufferState_t&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class VulkanFramebufferState_t & Arg_t;
};

// <004CE7E9> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<VkFramebuffer_T*, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef class VkFramebuffer_T * Arg_t;
};

// <004D0118> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<VkRenderPass_T*, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef class VkRenderPass_T * Arg_t;
};

// <004F4B73> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<CVulkanImage*, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef class CVulkanImage * Arg_t;
	/* ../public/tier0/utlcommon.h:238 */
	typedef struct undefined_t Alt_t;
};

// <004F4BAB> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const CImageLayoutTracker::ImageTransition_t&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class ImageTransition_t & Arg_t;
};

// <005C3AA3> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<VkDeviceMemory_T*, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef class VkDeviceMemory_T * Arg_t;
	/* ../public/tier0/utlcommon.h:238 */
	typedef struct undefined_t Alt_t;
};

// <005FCC33> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<long unsigned int, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef long unsigned int Arg_t;
	/* ../public/tier0/utlcommon.h:238 */
	typedef struct undefined_t Alt_t;
};

// <0061C047> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const CShaderVulkanBase*, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class CShaderVulkanBase * Arg_t;
};

// <006C48B3> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const PipelineCreateInfo_t&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class PipelineCreateInfo_t & Arg_t;
};

// <006C48DF> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<PipelineObjectVulkan_t*, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef class PipelineObjectVulkan_t * Arg_t;
};

// <006CB61C> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const PipelineLayoutCreateInfo_t&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class PipelineLayoutCreateInfo_t & Arg_t;
};

// <006CB648> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const PipelineLayoutVulkan_t&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class PipelineLayoutVulkan_t & Arg_t;
};

// <00946337> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const CShaderTableVulkan::RefCountedShaderFile_t&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class RefCountedShaderFile_t & Arg_t;
};

// <00946CB9> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderFile_t>::IndirectIndex&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class IndirectIndex & Arg_t;
};

// <00961A98> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const CInputLayoutDict<CInputLayoutVulkan>::RenderInputLayoutDesc_t&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class RenderInputLayoutDesc_t & Arg_t;
};

// <00961ACA> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<CInputLayoutVulkan*, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef class CInputLayoutVulkan * Arg_t;
};

// <0096CC50> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<RenderDescriptorSetHandle_t__*, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef class RenderDescriptorSetHandle_t__ * Arg_t;
};

// <00BB02A4> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const CShaderTableVulkan::RefCountedShaderModule_t&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class RefCountedShaderModule_t & Arg_t;
};

// <00BB0D15> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const CUtlStableHashtable<long long unsigned int, CShaderTableVulkan::RefCountedShaderModule_t>::IndirectIndex&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class IndirectIndex & Arg_t;
};

// <00C1296D> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<CDescriptorSetVulkan*, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef class CDescriptorSetVulkan * Arg_t;
	/* ../public/tier0/utlcommon.h:238 */
	typedef struct undefined_t Alt_t;
};

// <00D7A34C> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<unsigned int, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef unsigned int Arg_t;
	/* ../public/tier0/utlcommon.h:238 */
	typedef struct undefined_t Alt_t;
};

// <001DB3A0> ../../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<int, undefined_t> {
	/* ../../public/tier0/utlcommon.h:237 */
	typedef int Arg_t;
};

// <001DB3CE> ../../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<unsigned int, undefined_t> {
	/* ../../public/tier0/utlcommon.h:237 */
	typedef unsigned int Arg_t;
	/* ../../public/tier0/utlcommon.h:238 */
	typedef struct undefined_t Alt_t;
};

// <002194F5> ../../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const undefined_t&, undefined_t> {
	/* ../../public/tier0/utlcommon.h:237 */
	typedef const class undefined_t & Arg_t;
};

// <00275C80> ../../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const CUtlString&, undefined_t> {
	/* ../../public/tier0/utlcommon.h:237 */
	typedef const class CUtlString & Arg_t;
};

// <00275CAC> ../../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const CBufferString&, undefined_t> {
	/* ../../public/tier0/utlcommon.h:237 */
	typedef const class CBufferString & Arg_t;
};

// <00252CFD> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<CKeyValuesSystem::SharedStringData_t*, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef class SharedStringData_t * Arg_t;
	/* ../public/tier0/utlcommon.h:238 */
	typedef struct undefined_t Alt_t;
};

// <00156852> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const CResourceDiskStruct*, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class CResourceDiskStruct * Arg_t;
};

// <00158125> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const CResourceDiskEnum*, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class CResourceDiskEnum * Arg_t;
};

// <0015B209> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const CResourceDiskStructField*, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class CResourceDiskStructField * Arg_t;
	/* ../public/tier0/utlcommon.h:238 */
	typedef struct undefined_t Alt_t;
};

// <0015B241> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const KV3ConvertSpecialFieldBehavior_t*, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class KV3ConvertSpecialFieldBehavior_t * Arg_t;
};

// <002E8B1F> ../public/tier0/utlcommon.h:234
// struct size: 1
struct ArgumentTypeInfoImpl<const SpamKey_t&, undefined_t> {
	/* ../public/tier0/utlcommon.h:237 */
	typedef const class SpamKey_t & Arg_t;
	/* ../public/tier0/utlcommon.h:238 */
	typedef struct undefined_t Alt_t;
};

// <0224F2FD> ../public/tier0/utlcommon.h:301
// member variable: 1
// struct size: 1
struct DefaultHashFunctor<CLoadingResource*> : public PointerHashFunctor {
public:
	/* struct PointerHashFunctor <ancestor>; */ /* 0 0 */
};

// <0225241E> ../public/tier0/utlcommon.h:301
// member variable: 1
// struct size: 1
struct DefaultHashFunctor<const ResourceBindingBase_t*> : public PointerHashFunctor {
public:
	/* struct PointerHashFunctor <ancestor>; */ /* 0 0 */
};

// <02B6C510> ../public/tier0/utlcommon.h:301
// member variable: 1
// struct size: 1
struct DefaultHashFunctor<CSceneLightProbeVolumeObject*> : public PointerHashFunctor {
public:
	/* struct PointerHashFunctor <ancestor>; */ /* 0 0 */
};

// <02B6F41F> ../public/tier0/utlcommon.h:301
// member variable: 1
// struct size: 1
struct DefaultHashFunctor<const CEnvMapSceneObject*> : public PointerHashFunctor {
public:
	/* struct PointerHashFunctor <ancestor>; */ /* 0 0 */
};

// <02DB6981> ../public/tier0/utlcommon.h:301
// member variable: 1
// struct size: 1
struct DefaultHashFunctor<const IMaterial2*> : public PointerHashFunctor {
public:
	/* struct PointerHashFunctor <ancestor>; */ /* 0 0 */
};

// <05DAAB77> ../public/tier0/utlcommon.h:301
// member variable: 1
// struct size: 1
struct DefaultHashFunctor<const qhVertex*> : public PointerHashFunctor {
public:
	/* struct PointerHashFunctor <ancestor>; */ /* 0 0 */
};

// <05E32147> ../public/tier0/utlcommon.h:301
// member variable: 1
// struct size: 1
struct DefaultHashFunctor<qhVertex*> : public PointerHashFunctor {
public:
	/* struct PointerHashFunctor <ancestor>; */ /* 0 0 */
};

// <0153418F> ../public/tier0/utlcommon.h:301
// member variable: 1
// struct size: 1
struct DefaultHashFunctor<const CAnimUpdateNodeBase*> : public PointerHashFunctor {
public:
	/* struct PointerHashFunctor <ancestor>; */ /* 0 0 */
};

// <00445EB5> ../public/tier0/utlcommon.h:301
// member variable: 1
// struct size: 1
struct DefaultHashFunctor<RenderResourceHandle_t__*> : public PointerHashFunctor {
public:
	/* struct PointerHashFunctor <ancestor>; */ /* 0 0 */
};

// <004F654B> ../public/tier0/utlcommon.h:301
// member variable: 1
// struct size: 1
struct DefaultHashFunctor<CVulkanImage*> : public PointerHashFunctor {
public:
	/* struct PointerHashFunctor <ancestor>; */ /* 0 0 */
};

// <005C5212> ../public/tier0/utlcommon.h:301
// member variable: 1
// struct size: 1
struct DefaultHashFunctor<VkDeviceMemory_T*> : public PointerHashFunctor {
public:
	/* struct PointerHashFunctor <ancestor>; */ /* 0 0 */
};

// <006CB5A1> ../public/tier0/utlcommon.h:301
// member variable: 1
// struct size: 1
struct DefaultHashFunctor<VkRenderPass_T*> : public PointerHashFunctor {
public:
	/* struct PointerHashFunctor <ancestor>; */ /* 0 0 */
};

// <00C1E6D9> ../public/tier0/utlcommon.h:301
// member variable: 1
// struct size: 1
struct DefaultHashFunctor<CDescriptorSetVulkan*> : public PointerHashFunctor {
public:
	/* struct PointerHashFunctor <ancestor>; */ /* 0 0 */
};

// <002546B6> ../public/tier0/utlcommon.h:301
// member variable: 1
// struct size: 1
struct DefaultHashFunctor<CKeyValuesSystem::SharedStringData_t*> : public PointerHashFunctor {
public:
	/* struct PointerHashFunctor <ancestor>; */ /* 0 0 */
};

// <0015CABC> ../public/tier0/utlcommon.h:301
// member variable: 1
// struct size: 1
struct DefaultHashFunctor<const CResourceDiskStructField*> : public PointerHashFunctor {
public:
	/* struct PointerHashFunctor <ancestor>; */ /* 0 0 */
};

// <06E81A6F> ../public/tier0/utlcommon.h:307
inline void Mix32HashFunctor::operator(uint32 n)
{
} /* size: 0 */

// <05D00798> ../public/tier0/utlcommon.h:332
inline void Mix64HashFunctor::operator(uint64 s)
{
} /* size: 0 */

// <06977F63> ../public/tier0/utlcommon.h:349
// variables: 2
inline void StringHashFunctor::operator(const char* s)
{
	uint32 h; // 351
	{
		uint32 c; // 354
	}
} /* size: 0, variables: 1 */

// <00071647> ../public/tier0/utlcommon.h:361
// variables: 2
inline void FastCaselessStringHashFunctor::operator(const char* s)
{
	uint32 h; // 363
	{
		uint32 c; // 366
	}
} /* size: 0, variables: 1 */

