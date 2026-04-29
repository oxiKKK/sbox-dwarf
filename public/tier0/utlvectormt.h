
//
// public/tier0/utlvectormt.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   librendersystemvulkan.so
//
//	functions: 20
//	classes: 5
//

// <02F0520F> ../public/tier0/utlvectormt.h:18
void CUtlVectorMT<CUtlVector<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> >, CThreadFastMutex>::~CUtlVectorMT()
{
} /* size: 0 */

// <02F051F3> ../public/tier0/utlvectormt.h:18
inline void CUtlVectorMT<CUtlVector<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> >, CThreadFastMutex>::~CUtlVectorMT()
{
} /* size: 0 */

// <02F051A8> ../public/tier0/utlvectormt.h:18
void ~CUtlVectorMT(const CUtlVectorMT<CUtlVector<SceneVolumetricFogVolume_t, CUtlMemory<SceneVolumetricFogVolume_t, int> >, CThreadFastMutex this)
{
} /* size: 0 */

// <02F0518C> ../public/tier0/utlvectormt.h:18
inline void ~CUtlVectorMT(const CUtlVectorMT<CUtlVector<SceneVolumetricFogVolume_t, CUtlMemory<SceneVolumetricFogVolume_t, int> >, CThreadFastMutex this)
{
} /* size: 0 */

// <00D0B354> ../public/tier0/utlvectormt.h:18
void CUtlVectorMT<CUtlVectorFixed<CUtlString, 4096>, CThreadFastMutex>::~CUtlVectorMT()
{
} /* size: 0 */

// <00D0B338> ../public/tier0/utlvectormt.h:18
inline void CUtlVectorMT<CUtlVectorFixed<CUtlString, 4096>, CThreadFastMutex>::~CUtlVectorMT()
{
} /* size: 0 */

// <00A53F20> ../public/tier0/utlvectormt.h:18
void ~CUtlVectorMT(const CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVu this)
{
} /* size: 0 */

// <00A53F03> ../public/tier0/utlvectormt.h:18
inline void ~CUtlVectorMT(const CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVu this)
{
} /* size: 0 */

// <00A53E1C> ../public/tier0/utlvectormt.h:18
void ~CUtlVectorMT(const CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >, CThr this)
{
} /* size: 0 */

// <00A53DFF> ../public/tier0/utlvectormt.h:18
inline void ~CUtlVectorMT(const CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >, CThr this)
{
} /* size: 0 */

// <02DA20BC> ../public/tier0/utlvectormt.h:18
// member functions: 3
// member variables: 3
// class size: 80
class CUtlVectorMT<CUtlVector<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> >, CThreadFastMutex> : public CUtlVector<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> >, public CThreadFastMutex {
public:
	/* class CUtlVector<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> > <ancestor>; */ /* 0 32 */
	/* class CThreadFastMutex <ancestor>; */ /* 32 24 */
	CThreadFastMutex Mutex_t; /* 56 24 */
	/* ../public/tier0/utlvectormt.h:25 */
	void CUtlVectorMT(CUtlVectorMT<CUtlVector<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> >, CThreadFastMutex>* , int, int);
	/* ../public/tier0/utlvectormt.h:26 */
	void CUtlVectorMT(CUtlVectorMT<CUtlVector<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> >, CThreadFastMutex>* , ElemType_t* , int, int);
	void ~CUtlVectorMT(CUtlVectorMT<CUtlVector<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> >, CThreadFastMutex>* );
};

// <02DA38EA> ../public/tier0/utlvectormt.h:18
// member functions: 6
// member variables: 3
// class size: 80
class CUtlVectorMT<CUtlVector<SceneVolumetricFogVolume_t, CUtlMemory<SceneVolumetricFogVolume_t, int> >, CThreadFastMutex> : public CUtlVector<SceneVolumetricFogVolume_t, CUtlMemory<SceneVolumetricFogVolume_t, int> >, public CThreadFastMutex {
public:
	/* class CUtlVector<SceneVolumetricFogVolume_t, CUtlMemory<SceneVolumetricFogVolume_t, int> > <ancestor>; */ /* 0 32 */
	/* class CThreadFastMutex <ancestor>; */ /* 32 24 */
	CThreadFastMutex Mutex_t; /* 56 24 */
	/* ../public/tier0/utlvectormt.h:25 */
	void CUtlVectorMT(CUtlVectorMT<CUtlVector<SceneVolumetricFogVolume_t, CUtlMemory<SceneVolumetricFogVolume_t, int> >, CThreadFastMutex>* , int, int);
	/* ../public/tier0/utlvectormt.h:26 */
	void CUtlVectorMT(CUtlVectorMT<CUtlVector<SceneVolumetricFogVolume_t, CUtlMemory<SceneVolumetricFogVolume_t, int> >, CThreadFastMutex>* , ElemType_t* , int, int);
	void ~CUtlVectorMT(CUtlVectorMT<CUtlVector<SceneVolumetricFogVolume_t, CUtlMemory<SceneVolumetricFogVolume_t, int> >, CThreadFastMutex>* );
	void CUtlVectorMT(class CUtlVectorMT<CUtlVector<SceneVolumetricFogVolume_t, CUtlMemory<SceneVolumetricFogVolume_t, int> >, CThreadFastMutex> *, int, int); /* linkage=_ZN12CUtlVectorMTI10CUtlVectorI26SceneVolumetricFogVolume_t10CUtlMemoryIS1_iEE16CThreadFastMutexEC4Eii */
	void CUtlVectorMT(class CUtlVectorMT<CUtlVector<SceneVolumetricFogVolume_t, CUtlMemory<SceneVolumetricFogVolume_t, int> >, CThreadFastMutex> *, ElemType_t *, int, int); /* linkage=_ZN12CUtlVectorMTI10CUtlVectorI26SceneVolumetricFogVolume_t10CUtlMemoryIS1_iEE16CThreadFastMutexEC4EPS1_ii */
	void ~CUtlVectorMT(class CUtlVectorMT<CUtlVector<SceneVolumetricFogVolume_t, CUtlMemory<SceneVolumetricFogVolume_t, int> >, CThreadFastMutex> *); /* linkage=_ZN12CUtlVectorMTI10CUtlVectorI26SceneVolumetricFogVolume_t10CUtlMemoryIS1_iEE16CThreadFastMutexED4Ev */
};

// <00B28E4C> ../public/tier0/utlvectormt.h:18
// member functions: 6
// member variables: 3
// class size: 32,832
class CUtlVectorMT<CUtlVectorFixed<CUtlString, 4096>, CThreadFastMutex> : public CUtlVectorFixed<CUtlString, 4096>, public CThreadFastMutex {
public:
	/* class CUtlVectorFixed<CUtlString, 4096> <ancestor>; */ /* 0 32784 */
	/* class CThreadFastMutex <ancestor>; */ /* 32784 24 */
	CThreadFastMutex Mutex_t; /* 32808 24 */
	/* ../public/tier0/utlvectormt.h:25 */
	void CUtlVectorMT(CUtlVectorMT<CUtlVectorFixed<CUtlString, 4096>, CThreadFastMutex>* , int, int);
	/* ../public/tier0/utlvectormt.h:26 */
	void CUtlVectorMT(CUtlVectorMT<CUtlVectorFixed<CUtlString, 4096>, CThreadFastMutex>* , ElemType_t* , int, int);
	void ~CUtlVectorMT(CUtlVectorMT<CUtlVectorFixed<CUtlString, 4096>, CThreadFastMutex>* );
	void CUtlVectorMT(class CUtlVectorMT<CUtlVectorFixed<CUtlString, 4096>, CThreadFastMutex> *, int, int); /* linkage=_ZN12CUtlVectorMTI15CUtlVectorFixedI10CUtlStringLm4096EE16CThreadFastMutexEC4Eii */
	void CUtlVectorMT(class CUtlVectorMT<CUtlVectorFixed<CUtlString, 4096>, CThreadFastMutex> *, ElemType_t *, int, int); /* linkage=_ZN12CUtlVectorMTI15CUtlVectorFixedI10CUtlStringLm4096EE16CThreadFastMutexEC4EPS1_ii */
	void ~CUtlVectorMT(class CUtlVectorMT<CUtlVectorFixed<CUtlString, 4096>, CThreadFastMutex> *); /* linkage=_ZN12CUtlVectorMTI15CUtlVectorFixedI10CUtlStringLm4096EE16CThreadFastMutexED4Ev */
} __attribute__((__aligned__(8)));

// <00966161> ../public/tier0/utlvectormt.h:18
// member functions: 3
// member variables: 3
// class size: 80
class CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, int> >, CThreadFastMutex> : public CUtlVector<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, int> >, public CThreadFastMutex {
public:
	/* class CUtlVector<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, int> > <ancestor>; */ /* 0 32 */
	/* class CThreadFastMutex <ancestor>; */ /* 32 24 */
	CThreadFastMutex Mutex_t; /* 56 24 */
	/* ../public/tier0/utlvectormt.h:25 */
	void CUtlVectorMT(CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVulkanTe, int, int);
	/* ../public/tier0/utlvectormt.h:26 */
	void CUtlVectorMT(CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVulkanTe, ElemType_t* , int, int);
	void ~CUtlVectorMT(CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVulkanTe);
};

// <0096A7A2> ../public/tier0/utlvectormt.h:18
// member functions: 3
// member variables: 3
// class size: 80
class CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >, CThreadFastMutex> : public CUtlVector<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >, public CThreadFastMutex {
public:
	/* class CUtlVector<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> > <ancestor>; */ /* 0 32 */
	/* class CThreadFastMutex <ancestor>; */ /* 32 24 */
	CThreadFastMutex Mutex_t; /* 56 24 */
	/* ../public/tier0/utlvectormt.h:25 */
	void CUtlVectorMT(CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >, CThreadFas, int, int);
	/* ../public/tier0/utlvectormt.h:26 */
	void CUtlVectorMT(CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >, CThreadFas, ElemType_t* , int, int);
	void ~CUtlVectorMT(CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >, CThreadFas);
};

// <02EAC0BA> ../public/tier0/utlvectormt.h:25
void CUtlVectorMT<CUtlVector<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> >, CThreadFastMutex>::CUtlVectorMT(int growSize, int initCapacity)
{
} /* size: 0 */

// <02EAC089> ../public/tier0/utlvectormt.h:25
inline void CUtlVectorMT<CUtlVector<SceneObjectCullingBox_t, CUtlMemory<SceneObjectCullingBox_t, int> >, CThreadFastMutex>::CUtlVectorMT(int growSize, int initCapacity)
{
} /* size: 0 */

// <02EAC038> ../public/tier0/utlvectormt.h:25
void CUtlVectorMT(const CUtlVectorMT<CUtlVector<SceneVolumetricFogVolume_t, CUtlMemory<SceneVolumetricFogVolume_t, int> >, CThreadFastMutex this, int growSize, int initCapacity)
{
} /* size: 0 */

// <02EAC007> ../public/tier0/utlvectormt.h:25
inline void CUtlVectorMT(const CUtlVectorMT<CUtlVector<SceneVolumetricFogVolume_t, CUtlMemory<SceneVolumetricFogVolume_t, int> >, CThreadFastMutex this, int growSize, int initCapacity)
{
} /* size: 0 */

// <00C77EDA> ../public/tier0/utlvectormt.h:25
void CUtlVectorMT<CUtlVectorFixed<CUtlString, 4096>, CThreadFastMutex>::CUtlVectorMT(int growSize, int initCapacity)
{
} /* size: 0 */

// <00C77EA9> ../public/tier0/utlvectormt.h:25
inline void CUtlVectorMT<CUtlVectorFixed<CUtlString, 4096>, CThreadFastMutex>::CUtlVectorMT(int growSize, int initCapacity)
{
} /* size: 0 */

// <009E84AE> ../public/tier0/utlvectormt.h:25
void CUtlVectorMT(const CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVu this, int growSize, int initCapacity)
{
} /* size: 0 */

// <009E847D> ../public/tier0/utlvectormt.h:25
inline void CUtlVectorMT(const CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::FencedVulkanTextureRelease_t, CUtlMemory<CRenderDeviceVulkan::FencedVu this, int growSize, int initCapacity)
{
} /* size: 0 */

// <009E836C> ../public/tier0/utlvectormt.h:25
void CUtlVectorMT(const CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >, CThr this, int growSize, int initCapacity)
{
} /* size: 0 */

// <009E833B> ../public/tier0/utlvectormt.h:25
inline void CUtlVectorMT(const CUtlVectorMT<CUtlVector<CRenderDeviceVulkan::QueryPool_t, CUtlMemory<CRenderDeviceVulkan::QueryPool_t, int> >, CThr this, int growSize, int initCapacity)
{
} /* size: 0 */

