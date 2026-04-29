
//
// tier0/earlyinit_tier0.cpp
//
//	referenced by: libtier0.so
//
//	functions: 8
//

// <0000D13C> tier0/earlyinit_tier0.cpp:18
void OrderedInit_Platform(bool, COrderedSystem_DependencyManagement &)
{
} /* size: 0 */

// <0000D102> tier0/earlyinit_tier0.cpp:21
void ResolveOrderedSystem_CommandLine(COrderedSystem_DependencyManagement &)
{
} /* size: 0 */

// <0000D0EA> tier0/earlyinit_tier0.cpp:24
void ResolveOrderedSystem_FiberTools(COrderedSystem_DependencyManagement &)
{
} /* size: 0 */

// <0000D0D2> tier0/earlyinit_tier0.cpp:27
void ResolveOrderedSystem_StackTools(COrderedSystem_DependencyManagement &)
{
} /* size: 0 */

// <0000D0A2> tier0/earlyinit_tier0.cpp:30
void ResolveOrderedSystem_LoggingSystem(COrderedSystem_DependencyManagement &)
{
} /* size: 0 */

// <0000D08A> tier0/earlyinit_tier0.cpp:33
void ResolveOrderedSystem_ThreadTools(COrderedSystem_DependencyManagement &)
{
} /* size: 0 */

// <0000D0BA> tier0/earlyinit_tier0.cpp:36
void ResolveOrderedSystem_MemorySystem(COrderedSystem_DependencyManagement &)
{
} /* size: 0 */

// <0000F9A4> tier0/earlyinit_tier0.cpp:39
// variables: 26
// function calls: 128
void ResolveOrderedSystem_EarlyInitTier0(COrderedSystem_DependencyManagement& owner)
{
	OrderedDependency_t dependOn_g_OrderedInit_Platform; // 44
	OrderedDependency_t dependOn_g_OrderedSystem_CommandLine; // 46
	OrderedDependency_t dependOn_g_OrderedSystem_FiberTools; // 47
	OrderedDependency_t dependOn_g_OrderedSystem_StackTools; // 48
	OrderedDependency_t dependOn_g_OrderedSystem_MemorySystem; // 49
	OrderedDependency_t dependOn_g_OrderedSystem_LoggingSystem; // 50
	OrderedDependency_t dependOn_g_OrderedSystem_ThreadTools; // 51
	{
		CPathBufferString executableName; // 67
		CBufferString::InitMinConstruct(
				bool bGrowable);  // 712
		CBufferString::CBufferString(); // 591
		CBufferStringN<200>::CBufferStringN(); // 67
		CBufferString::IsEmpty(); // 70
		CBufferString::~CBufferString(); // 587
		CBufferStringN<200>::~CBufferStringN(); // 74
		CBufferString::ReadBuffer(); // 1374
		CBufferString::ReadBuffer(); // 781
		CBufferString::operator char const*(); // 72
	}
	COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >::ToGenericDependencyManagement(); // 1435
	{
	}
	{
		_DebuggerBreakInlineExpressionWrapper(void); // 1447
	}
	OrderedDependency_t::LinkDependency<COrderedInitShutdownRefWrapper<OrderedInit_Platform>, void>(
											COrderedConstructor_DependencyManagement<void>& dependant,
											COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >& dependsOn);  // 1430
	OrderedDependency_t::LinkDependency<COrderedInitShutdownRefWrapper<OrderedInit_Platform>, void>(
											COrderedConstructor_DependencyManagement<void>& dependant,
											COrderedConstructor_DependencyManagement<COrderedInitShutdownRefWrapper<OrderedInit_Platform> >& dependsOn);  // 44
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1259
	ThreadPause(void); // 1264
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<void>::InternalLock(
			bool bAcquireLock);  // 1272
	{
	}
	{
		const uint8* pMemory; // 1292
		{
			size_t i; // 1293
		}
	}
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1346
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<void>::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<void>::InternalLock(
			bool bAcquireLock);  // 1350
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1358
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1365
	COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_CommandLine>, false>::AddRef(
		bool bIsWrapperRef);  // 46
	{
	}
	OrderedDependency_t::LinkDependency<void, void>(
					COrderedConstructor_DependencyManagement<void>& dependant,
					COrderedConstructor_DependencyManagement<void>& dependsOn);  // 46
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1259
	ThreadPause(void); // 1264
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<void>::InternalLock(
			bool bAcquireLock);  // 1272
	{
	}
	{
		const uint8* pMemory; // 1292
		{
			size_t i; // 1293
		}
	}
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1346
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<void>::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<void>::InternalLock(
			bool bAcquireLock);  // 1350
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1358
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1365
	COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_FiberTools>, false>::AddRef(
		bool bIsWrapperRef);  // 47
	{
	}
	OrderedDependency_t::LinkDependency<void, void>(
					COrderedConstructor_DependencyManagement<void>& dependant,
					COrderedConstructor_DependencyManagement<void>& dependsOn);  // 47
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1259
	ThreadPause(void); // 1264
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<void>::InternalLock(
			bool bAcquireLock);  // 1272
	{
	}
	{
		const uint8* pMemory; // 1292
		{
			size_t i; // 1293
		}
	}
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1346
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<void>::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<void>::InternalLock(
			bool bAcquireLock);  // 1350
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1358
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1365
	COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_StackTools>, false>::AddRef(
		bool bIsWrapperRef);  // 48
	{
	}
	OrderedDependency_t::LinkDependency<void, void>(
					COrderedConstructor_DependencyManagement<void>& dependant,
					COrderedConstructor_DependencyManagement<void>& dependsOn);  // 48
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1259
	ThreadPause(void); // 1264
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<void>::InternalLock(
			bool bAcquireLock);  // 1272
	{
	}
	{
		const uint8* pMemory; // 1292
		{
			size_t i; // 1293
		}
	}
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1346
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<void>::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<void>::InternalLock(
			bool bAcquireLock);  // 1350
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1358
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1365
	COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_MemorySystem>, false>::AddRef(
		bool bIsWrapperRef);  // 49
	{
	}
	OrderedDependency_t::LinkDependency<void, void>(
					COrderedConstructor_DependencyManagement<void>& dependant,
					COrderedConstructor_DependencyManagement<void>& dependsOn);  // 49
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1259
	ThreadPause(void); // 1264
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<void>::InternalLock(
			bool bAcquireLock);  // 1272
	{
	}
	{
		const uint8* pMemory; // 1292
		{
			size_t i; // 1293
		}
	}
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1346
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<void>::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<void>::InternalLock(
			bool bAcquireLock);  // 1350
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1358
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1365
	COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_LoggingSystem>, false>::AddRef(
		bool bIsWrapperRef);  // 50
	{
	}
	OrderedDependency_t::LinkDependency<void, void>(
					COrderedConstructor_DependencyManagement<void>& dependant,
					COrderedConstructor_DependencyManagement<void>& dependsOn);  // 50
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1259
	ThreadPause(void); // 1264
	{
		uint32 nOldRefState; // 1211
		ThreadInterlockedOr(volatile int32* p,
					int32 value);  // 429
		ThreadInterlockedOr(volatile uint32* p,
					uint32 value);  // 1214
	}
	COrderedConstructor_DependencyManagement<void>::InternalLock(
			bool bAcquireLock);  // 1272
	{
	}
	{
		const uint8* pMemory; // 1292
		{
			size_t i; // 1293
		}
	}
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1346
	{
	}
	ThreadInterlockedAnd(volatile int32* p,
				int32 value);  // 430
	ThreadInterlockedAnd(volatile uint32* p,
				uint32 value);  // 1221
	COrderedConstructor_DependencyManagement<void>::InternalLock(
			bool bAcquireLock);  // 1206
	COrderedConstructor_DependencyManagement<void>::InternalLock(
			bool bAcquireLock);  // 1350
	ThreadInterlockedIncrement(volatile int32* p); // 426
	ThreadInterlockedIncrement(volatile uint32* p); // 1358
	ThreadInterlockedOr(volatile int32* p,
				int32 value);  // 429
	ThreadInterlockedOr(volatile uint32* p,
				uint32 value);  // 1365
	COrderedConstructor_Create<void, CResolveOrderedFunc<void, ResolveOrderedSystem_ThreadTools>, false>::AddRef(
		bool bIsWrapperRef);  // 51
	{
	}
	OrderedDependency_t::LinkDependency<void, void>(
					COrderedConstructor_DependencyManagement<void>& dependant,
					COrderedConstructor_DependencyManagement<void>& dependsOn);  // 51
	OrderedDependency_t::OrderedDependency_t(); // 47
	OrderedDependency_t::OrderedDependency_t(); // 48
	OrderedDependency_t::OrderedDependency_t(); // 49
	OrderedDependency_t::OrderedDependency_t(); // 50
	OrderedDependency_t::OrderedDependency_t(); // 51
	OrderedDependency_t::OrderedDependency_t(); // 46
	OrderedDependency_t::OrderedDependency_t(); // 44
} /* size: 0, variables: 7, inline expansions: 106 (4075 bytes) */

