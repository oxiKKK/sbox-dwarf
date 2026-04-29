
//
// engine2/looptypebase.cpp
//
//	referenced by: libengine2.so
//
//	functions: 12
//

// <002A2393> engine2/looptypebase.cpp:33
// variable: 1
// function calls: 9
void CLoopTypeBase::AddEngineService(const char* pServiceName)
{
	IEngineService* pService; // 35
	CUtlMemory<IEngineService::NumAllocated(); // 1196
	CUtlMemory<IEngineService::operator[](
			int i);  // 602
	CUtlVectorBase<IEngineService::Element(
		int i);  // 1201
	CopyConstruct<IEngineService*>(IEngineService** pMemory,
					IEngineService* const& src);  // 1201
	CUtlMemory<IEngineService::Base(); // 112
	CUtlVectorBase<IEngineService::Base(); // 368
	CUtlVectorBase<IEngineService::ResetDbgInfo(); // 824
	CUtlVectorBase<IEngineService::GrowMemory(
			int num);  // 1198
	CUtlVectorBase<IEngineService::AddToTail(
			IEngineService* const& src);  // 38
} /* size: 122, variables: 1, inline expansions: 9 (130 bytes) */

// <002A1AD0> engine2/looptypebase.cpp:46
// variables: 11
// function calls: 33
void CLoopTypeBase::AddDependentServices(ServiceDependencies_t& dependencies)
{
	ServiceDependency_t search; // 49
	const char   __FUNCTION__; // 24405
	{
		int i; // 50
		{
			IEngineService* pService; // 52
			const EngineServiceDependencies_t* pDep; // 53
			{
				int j; // 56
				{
					IEngineService* pDepService; // 61
					int d; // 73
					ServiceDependency_t& dep; // 74
					{
						int* _pCrash; // 64
					}
					CUtlMemory<CLoopTypeBase::ServiceDependency_t, int>::Base(); // 112
					CUtlVectorBase<CLoopTypeBase::ServiceDependency_t, CUtlMemory<CLoopTypeBase::ServiceDependency_t, int> >::Base(); // 368
					CUtlVectorBase<CLoopTypeBase::ServiceDependency_t, CUtlMemory<CLoopTypeBase::ServiceDependency_t, int> >::ResetDbgInfo(); // 824
					CUtlVectorBase<CLoopTypeBase::ServiceDependency_t, CUtlMemory<CLoopTypeBase::ServiceDependency_t, int> >::GrowMemory(
							int num);  // 1145
					CUtlMemory<CLoopTypeBase::ServiceDependency_t, int>::NumAllocated(); // 1143
					CUtlMemory<CLoopTypeBase::ServiceDependency_t, int>::operator[](
							int i);  // 602
					CUtlVectorBase<CLoopTypeBase::ServiceDependency_t, CUtlMemory<CLoopTypeBase::ServiceDependency_t, int> >::Element(
						int i);  // 1148
					CUtlMemory<int, int>::ValidateGrowSize(); // 475
					CUtlMemory<int, int>::CUtlMemory(
							int nGrowSize,
							int nInitAllocationCount);  // 527
					CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
					CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
							int growSize,
							int initCapacity);  // 418
					CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 70
					ServiceDependency_t::ServiceDependency_t(); // 1479
					Construct<CLoopTypeBase::ServiceDependency_t>(ServiceDependency_t* pMemory); // 1148
					CUtlVectorBase<CLoopTypeBase::ServiceDependency_t, CUtlMemory<CLoopTypeBase::ServiceDependency_t, int> >::AddToTail(); // 73
					LeafCodeInfo_t::LeafCodeInfo_t(
							const char* szFile,
							int nLine,
							const char* szFunction);  // 64
					{
						int i; // 1531
						CUtlVectorBase<CLoopTypeBase::ServiceDependency_t, CUtlMemory<CLoopTypeBase::ServiceDependency_t, int> >::Count(); // 1531
						CUtlMemory<CLoopTypeBase::ServiceDependency_t, int>::operator[](
								int i);  // 609
						CUtlVectorBase<CLoopTypeBase::ServiceDependency_t, CUtlMemory<CLoopTypeBase::ServiceDependency_t, int> >::Element(
							int i);  // 1533
						ServiceDependency_t::operator==(
								const ServiceDependency_t& src);  // 1533
					}
					CUtlVectorBase<CLoopTypeBase::ServiceDependency_t, CUtlMemory<CLoopTypeBase::ServiceDependency_t, int> >::Find(
						const ServiceDependency_t& src);  // 70
					CUtlMemory<CLoopTypeBase::ServiceDependency_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CLoopTypeBase::ServiceDependency_t, CUtlMemory<CLoopTypeBase::ServiceDependency_t, int> >::operator[](
							int i);  // 74
				}
			}
			CUtlMemory<CLoopTypeBase::ServiceDependency_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CLoopTypeBase::ServiceDependency_t, CUtlMemory<CLoopTypeBase::ServiceDependency_t, int> >::operator[](
					int i);  // 52
		}
		CUtlVectorBase<CLoopTypeBase::ServiceDependency_t, CUtlMemory<CLoopTypeBase::ServiceDependency_t, int> >::Count(); // 50
	}
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 70
	ServiceDependency_t::~ServiceDependency_t(); // 80
} /* size: 543, variables: 2, inline expansions: 7 (0 bytes) */

// <002A1093> engine2/looptypebase.cpp:86
// variables: 15
// function calls: 39
void CLoopTypeBase::GenerateServiceDependencies(ServiceDependencies_t& dependencies)
{
	ServiceDependency_t search; // 89
	const char   __FUNCTION__; // 24564
	{
		int i; // 90
		{
			IEngineService* pService; // 92
			const EngineServiceDependencies_t* pServiceDep; // 93
			{
				int j; // 96
				{
					IEngineService* pSpecifiedService; // 108
					int nIndex; // 118
					ServiceDependency_t* pDep; // 122
					int nDependentIndex; // 123
					{
						int* _pCrash; // 103
					}
					{
						int* _pCrash; // 111
					}
					{
						const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 131
					}
					LeafCodeInfo_t::LeafCodeInfo_t(
							const char* szFile,
							int nLine,
							const char* szFunction);  // 103
					LeafCodeInfo_t::LeafCodeInfo_t(
							const char* szFile,
							int nLine,
							const char* szFunction);  // 111
					{
						int i; // 1531
						CUtlVectorBase<CLoopTypeBase::ServiceDependency_t, CUtlMemory<CLoopTypeBase::ServiceDependency_t, int> >::Count(); // 1531
						CUtlMemory<CLoopTypeBase::ServiceDependency_t, int>::operator[](
								int i);  // 609
						CUtlVectorBase<CLoopTypeBase::ServiceDependency_t, CUtlMemory<CLoopTypeBase::ServiceDependency_t, int> >::Element(
							int i);  // 1533
						ServiceDependency_t::operator==(
								const ServiceDependency_t& src);  // 1533
					}
					CUtlVectorBase<CLoopTypeBase::ServiceDependency_t, CUtlMemory<CLoopTypeBase::ServiceDependency_t, int> >::Find(
						const ServiceDependency_t& src);  // 118
					CUtlMemory<CLoopTypeBase::ServiceDependency_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CLoopTypeBase::ServiceDependency_t, CUtlMemory<CLoopTypeBase::ServiceDependency_t, int> >::operator[](
							int i);  // 126
					CUtlMemory<CLoopTypeBase::ServiceDependency_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CLoopTypeBase::ServiceDependency_t, CUtlMemory<CLoopTypeBase::ServiceDependency_t, int> >::operator[](
							int i);  // 132
					{
						int i; // 1531
						CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1531
						CUtlMemory<int, int>::operator[](
								int i);  // 609
						CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
							int i);  // 1533
					}
					CUtlVectorBase<int, CUtlMemory<int, int> >::Find(
						const int& src);  // 137
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
							const int& src);  // 140
				}
			}
			CUtlMemory<CLoopTypeBase::ServiceDependency_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CLoopTypeBase::ServiceDependency_t, CUtlMemory<CLoopTypeBase::ServiceDependency_t, int> >::operator[](
					int i);  // 92
		}
		CUtlVectorBase<CLoopTypeBase::ServiceDependency_t, CUtlMemory<CLoopTypeBase::ServiceDependency_t, int> >::Count(); // 90
	}
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 70
	ServiceDependency_t::ServiceDependency_t(); // 89
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 70
	ServiceDependency_t::~ServiceDependency_t(); // 144
} /* size: 0, variables: 2, inline expansions: 12 (0 bytes) */

// <002A0850> engine2/looptypebase.cpp:147
// variables: 12
// function calls: 33
void CLoopTypeBase::GenerateSecondaryDependencies(ServiceDependencies_t& dependencies)
{
	ServiceDependency_t search; // 151
	int nCount; // 152
	bool bDone; // 153
	const char   __FUNCTION__; // 24613
	{
		int i; // 157
		{
			ServiceDependency_t& dep; // 159
			{
				int j; // 160
				{
					int d; // 162
					{
						int k; // 163
						{
							int d2; // 165
							{
								int* _pCrash; // 168
							}
							CUtlMemory<int, int>::operator[](
									int i);  // 588
							CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
									int i);  // 165
							CLoopTypeBase::GetName(); // 168
							LeafCodeInfo_t::LeafCodeInfo_t(
									const char* szFile,
									int nLine,
									const char* szFunction);  // 168
							{
								int i; // 1531
								CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 1531
								CUtlMemory<int, int>::operator[](
										int i);  // 609
								CUtlVectorBase<int, CUtlMemory<int, int> >::Element(
									int i);  // 1533
							}
							CUtlVectorBase<int, CUtlMemory<int, int> >::Find(
								const int& src);  // 173
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
									const int& src);  // 175
						}
						CUtlMemory<CLoopTypeBase::ServiceDependency_t, int>::operator[](
								int i);  // 588
						CUtlVectorBase<CLoopTypeBase::ServiceDependency_t, CUtlMemory<CLoopTypeBase::ServiceDependency_t, int> >::operator[](
								int i);  // 163
						CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 163
					}
					CUtlMemory<int, int>::operator[](
							int i);  // 588
					CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
							int i);  // 162
				}
				CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 160
			}
			CUtlMemory<CLoopTypeBase::ServiceDependency_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CLoopTypeBase::ServiceDependency_t, CUtlMemory<CLoopTypeBase::ServiceDependency_t, int> >::operator[](
					int i);  // 159
		}
	}
	CUtlVectorBase<CLoopTypeBase::ServiceDependency_t, CUtlMemory<CLoopTypeBase::ServiceDependency_t, int> >::Count(); // 152
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 70
	ServiceDependency_t::~ServiceDependency_t(); // 184
} /* size: 530, variables: 4, inline expansions: 8 (16 bytes) */

// <002A0328> engine2/looptypebase.cpp:190
// variables: 10
// function calls: 19
void CLoopTypeBase::SortServices(ServiceDependencies_t& dependencies)
{
	int i; // 194
	int nCount; // 195
	const char   __FUNCTION__; // 24214
	{
		int d; // 200
		{
			ServiceDependency_t& dep; // 202
			bool bDepsSatisfied; // 206
			int nDepCount; // 207
			{
				int j; // 208
				{
					int nDepIndex; // 210
					CUtlMemory<int, int>::operator[](
							int i);  // 588
					CUtlVectorBase<int, CUtlMemory<int, int> >::operator[](
							int i);  // 210
					CUtlMemory<CLoopTypeBase::ServiceDependency_t, int>::operator[](
							int i);  // 588
					CUtlVectorBase<CLoopTypeBase::ServiceDependency_t, CUtlMemory<CLoopTypeBase::ServiceDependency_t, int> >::operator[](
							int i);  // 211
				}
			}
			CUtlMemory<IEngineService::Base(); // 112
			CUtlVectorBase<IEngineService::Base(); // 368
			CUtlVectorBase<IEngineService::ResetDbgInfo(); // 824
			CUtlVectorBase<IEngineService::GrowMemory(
					int num);  // 1198
			CUtlMemory<IEngineService::NumAllocated(); // 1196
			CUtlMemory<IEngineService::operator[](
					int i);  // 602
			CUtlVectorBase<IEngineService::Element(
				int i);  // 1201
			CopyConstruct<IEngineService*>(IEngineService** pMemory,
							IEngineService* const& src);  // 1201
			CUtlVectorBase<IEngineService::AddToTail(
					IEngineService* const& src);  // 220
			CUtlMemory<CLoopTypeBase::ServiceDependency_t, int>::operator[](
					int i);  // 588
			CUtlVectorBase<CLoopTypeBase::ServiceDependency_t, CUtlMemory<CLoopTypeBase::ServiceDependency_t, int> >::operator[](
					int i);  // 202
			CUtlVectorBase<int, CUtlMemory<int, int> >::Count(); // 207
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 225
	}
	CUtlVectorBase<IEngineService::RemoveAll(); // 192
	CUtlVectorBase<CLoopTypeBase::ServiceDependency_t, CUtlMemory<CLoopTypeBase::ServiceDependency_t, int> >::Count(); // 195
	CUtlVectorBase<IEngineService::Count(); // 225
} /* size: 0, variables: 3, inline expansions: 3 (15 bytes) */

// <0029F6CF> engine2/looptypebase.cpp:233
// variables: 9
// function calls: 59
void CLoopTypeBase::LoadDependentServices()
{
	ServiceDependency_t search; // 235
	ServiceDependencies_t dependencies; // 236
	int nCount; // 239
	{
		int i; // 240
		{
			IEngineService* pService; // 242
			int d; // 250
			ServiceDependency_t& dep; // 251
			CUtlMemory<IEngineService::operator[](
					int i);  // 588
			CUtlVectorBase<IEngineService::operator[](
					int i);  // 242
			{
				int i; // 1531
				ServiceDependency_t::operator==(
						const ServiceDependency_t& src);  // 1533
			}
			CUtlVectorBase<CLoopTypeBase::ServiceDependency_t, CUtlMemory<CLoopTypeBase::ServiceDependency_t, int> >::Find(
				const ServiceDependency_t& src);  // 246
			CUtlMemory<CLoopTypeBase::ServiceDependency_t, int>::operator[](
					int i);  // 602
			CUtlVectorBase<CLoopTypeBase::ServiceDependency_t, CUtlMemory<CLoopTypeBase::ServiceDependency_t, int> >::Element(
				int i);  // 1148
			CUtlMemory<int, int>::ValidateGrowSize(); // 475
			CUtlMemory<int, int>::CUtlMemory(
					int nGrowSize,
					int nInitAllocationCount);  // 527
			CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
			CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
					int growSize,
					int initCapacity);  // 418
			CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 70
			ServiceDependency_t::ServiceDependency_t(); // 1479
			Construct<CLoopTypeBase::ServiceDependency_t>(ServiceDependency_t* pMemory); // 1148
			CUtlVectorBase<CLoopTypeBase::ServiceDependency_t, CUtlMemory<CLoopTypeBase::ServiceDependency_t, int> >::ResetDbgInfo(); // 824
			CUtlVectorBase<CLoopTypeBase::ServiceDependency_t, CUtlMemory<CLoopTypeBase::ServiceDependency_t, int> >::GrowMemory(
					int num);  // 1145
			CUtlVectorBase<CLoopTypeBase::ServiceDependency_t, CUtlMemory<CLoopTypeBase::ServiceDependency_t, int> >::AddToTail(); // 250
		}
	}
	CUtlVectorBase<IEngineService::Count(); // 239
	CUtlMemory<int, int>::ValidateGrowSize(); // 475
	CUtlMemory<int, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<int, CUtlMemory<int, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<int, CUtlMemory<int, int> >::CUtlVector(); // 70
	ServiceDependency_t::ServiceDependency_t(); // 235
	CUtlMemory<CLoopTypeBase::ServiceDependency_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<CLoopTypeBase::ServiceDependency_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<CLoopTypeBase::ServiceDependency_t, CUtlMemory<CLoopTypeBase::ServiceDependency_t, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<CLoopTypeBase::ServiceDependency_t, CUtlMemory<CLoopTypeBase::ServiceDependency_t, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<CLoopTypeBase::ServiceDependency_t, CUtlMemory<CLoopTypeBase::ServiceDependency_t, int> >::CUtlVector(); // 236
	{
		int i; // 1721
		CUtlMemory<CLoopTypeBase::ServiceDependency_t, int>::operator[](
				int i);  // 602
		CUtlVectorBase<CLoopTypeBase::ServiceDependency_t, CUtlMemory<CLoopTypeBase::ServiceDependency_t, int> >::Element(
			int i);  // 1723
		CUtlVectorBase<int, CUtlMemory<int, int> >::RemoveAll(); // 1798
		CUtlMemory<int, int>::IsExternallyAllocated(); // 905
		CUtlMemory<int, int>::Purge(); // 903
		CUtlMemory<int, int>::Purge(); // 1799
		CUtlVectorBase<int, CUtlMemory<int, int> >::ResetDbgInfo(); // 1800
		CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
		ValidateAlignment<int>(void); // 508
		CUtlMemory<int, int>::Purge(); // 510
		CUtlMemory<int, int>::~CUtlMemory(); // 562
		CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
		CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 70
		ServiceDependency_t::~ServiceDependency_t(); // 1526
		Destruct<CLoopTypeBase::ServiceDependency_t>(ServiceDependency_t* pMemory); // 1723
	}
	CUtlVectorBase<CLoopTypeBase::ServiceDependency_t, CUtlMemory<CLoopTypeBase::ServiceDependency_t, int> >::RemoveAll(); // 1798
	CUtlMemory<CLoopTypeBase::ServiceDependency_t, int>::Purge(); // 903
	CUtlMemory<CLoopTypeBase::ServiceDependency_t, int>::Purge(); // 1799
	CUtlVectorBase<CLoopTypeBase::ServiceDependency_t, CUtlMemory<CLoopTypeBase::ServiceDependency_t, int> >::Purge(); // 560
	ValidateAlignment<CLoopTypeBase::ServiceDependency_t>(void); // 508
	CUtlMemory<CLoopTypeBase::ServiceDependency_t, int>::Purge(); // 510
	CUtlMemory<CLoopTypeBase::ServiceDependency_t, int>::~CUtlMemory(); // 562
	CUtlVectorBase<CLoopTypeBase::ServiceDependency_t, CUtlMemory<CLoopTypeBase::ServiceDependency_t, int> >::~CUtlVectorBase(); // 410
	CUtlVector<CLoopTypeBase::ServiceDependency_t, CUtlMemory<CLoopTypeBase::ServiceDependency_t, int> >::~CUtlVector(); // 267
	CUtlVectorBase<int, CUtlMemory<int, int> >::Purge(); // 560
	ValidateAlignment<int>(void); // 508
	CUtlMemory<int, int>::Purge(); // 510
	CUtlMemory<int, int>::~CUtlMemory(); // 562
	CUtlVectorBase<int, CUtlMemory<int, int> >::~CUtlVectorBase(); // 410
	CUtlVector<int, CUtlMemory<int, int> >::~CUtlVector(); // 70
	ServiceDependency_t::~ServiceDependency_t(); // 267
} /* size: 548, variables: 3, inline expansions: 28 (659 bytes) */

// <0029F647> engine2/looptypebase.cpp:273
void CLoopTypeBase::Init(const char* pLoopName, ILoopModeFactory* pFactory, void** ppGlobalPointer)
{
} /* size: 61 */

// <0029F5E6> engine2/looptypebase.cpp:283
void CLoopTypeBase::Shutdown()
{
} /* size: 52 */

// <0029F337> engine2/looptypebase.cpp:297
// variables: 6
// function calls: 5
void CLoopTypeBase::OnLoopActivate(const EngineLoopState_t& state, CEventDispatcher<CEventIDManager_Default>* pEventDispatcher)
{
	const char   __FUNCTION__; // 24263
	int nCount; // 311
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 299
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 300
	}
	{
		int i; // 312
		{
			IEngineService* pService; // 314
			CUtlMemory<IEngineService::operator[](
					int i);  // 588
			CUtlVectorBase<IEngineService::operator[](
					int i);  // 314
		}
	}
	CUtlVectorBase<IEngineService::Count(); // 299
	CLoopTypeBase::GetName(); // 303
	CUtlVectorBase<IEngineService::Count(); // 311
} /* size: 0, variables: 2, inline expansions: 3 (4 bytes) */

// <0029F110> engine2/looptypebase.cpp:320
// variables: 5
// function calls: 4
void CLoopTypeBase::OnLoopDeactivate(const EngineLoopState_t& state, CEventDispatcher<CEventIDManager_Default>* pEventDispatcher)
{
	const char   __FUNCTION__; // 24312
	int nCount; // 324
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 322
	}
	{
		int i; // 325
		{
			IEngineService* pService; // 327
			CUtlMemory<IEngineService::operator[](
					int i);  // 588
			CUtlVectorBase<IEngineService::operator[](
					int i);  // 327
		}
	}
	CUtlVectorBase<IEngineService::Count(); // 324
	CUtlVectorBase<IEngineService::RemoveAll(); // 332
} /* size: 0, variables: 2, inline expansions: 2 (12 bytes) */

// <0029F0B3> engine2/looptypebase.cpp:337
void CLoopTypeBase::Update(const EngineLoopState_t& state, float64 flCurrTime, float64 flPrevTime)
{
} /* size: 9 */

// <0029F03B> engine2/looptypebase.cpp:342
void CLoopTypeBase::SetInitInfo(KeyValues* pInitInfo)
{
} /* size: 61 */

