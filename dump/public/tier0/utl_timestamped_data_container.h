
//
// public/tier0/utl_timestamped_data_container.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 9
//	class: 1
//

// <04995BDC> ../public/tier0/utl_timestamped_data_container.h:29
// member functions: 35
// member variables: 4
// class size: 48
class CTimestampedDataContainer<AnimationOperationHistory_t, 3> {
	/* ../public/tier0/utl_timestamped_data_container.h:70 */
	struct InternalData_t {
		/* ../public/tier0/utl_timestamped_data_container.h:72 */
		void InternalData_t(InternalData_t* );
		AnimationOperationHistory_t m_data; /* 0 28 */
		float m_flSimulationTime; /* 28 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/tier0/utl_timestamped_data_container.h:85 */
	void CTimestampedDataContainer(CTimestampedDataContainer<AnimationOperationHistory_t, 3>* );
	/* ../public/tier0/utl_timestamped_data_container.h:94 */
	void Setup(CTimestampedDataContainer<AnimationOperationHistory_t, 3>* );
	/* ../public/tier0/utl_timestamped_data_container.h:103 */
	void Shutdown(CTimestampedDataContainer<AnimationOperationHistory_t, 3>* );
	/* ../public/tier0/utl_timestamped_data_container.h:109 */
	AnimationOperationHistory_t* AllocateNewState(CTimestampedDataContainer<AnimationOperationHistory_t, 3>* , float);
	/* ../public/tier0/utl_timestamped_data_container.h:147 */
	void ApplyNewState(CTimestampedDataContainer<AnimationOperationHistory_t, 3>* , float, AnimationOperationHistory_t* );
	/* ../public/tier0/utl_timestamped_data_container.h:180 */
	bool HasValidData(const CTimestampedDataContainer<AnimationOperationHistory_t, 3>* );
	/* ../public/tier0/utl_timestamped_data_container.h:203 */
	float GetCurrentTimeSeconds(const CTimestampedDataContainer<AnimationOperationHistory_t, 3>* );
	/* ../public/tier0/utl_timestamped_data_container.h:186 */
	const AnimationOperationHistory_t* GetCurrentState(const CTimestampedDataContainer<AnimationOperationHistory_t, 3>* );
	/* ../public/tier0/utl_timestamped_data_container.h:194 */
	AnimationOperationHistory_t* GetCurrentStateForUpdate(CTimestampedDataContainer<AnimationOperationHistory_t, 3>* );
	/* ../public/tier0/utl_timestamped_data_container.h:230 */
	int Count(const CTimestampedDataContainer<AnimationOperationHistory_t, 3>* );
	/* ../public/tier0/utl_timestamped_data_container.h:236 */
	const AnimationOperationHistory_t* Get(const CTimestampedDataContainer<AnimationOperationHistory_t, 3>* , int);
	/* ../public/tier0/utl_timestamped_data_container.h:244 */
	float ComputeInterpolationAmount(const CTimestampedDataContainer<AnimationOperationHistory_t, 3>* , float, const AnimationOperationHistory_t** , const AnimationOperationHistory_t** , float* , float* );
	/* ../public/tier0/utl_timestamped_data_container.h:164 */
	void ClearHistory(CTimestampedDataContainer<AnimationOperationHistory_t, 3>* );
	/* ../public/tier0/utl_timestamped_data_container.h:54 */
	uint16 NextState(const CTimestampedDataContainer<AnimationOperationHistory_t, 3>* , uint16);
	/* ../public/tier0/utl_timestamped_data_container.h:55 */
	uint16 PrevState(const CTimestampedDataContainer<AnimationOperationHistory_t, 3>* , uint16);
	/* ../public/tier0/utl_timestamped_data_container.h:211 */
	void PrintStateHistoryTimes(const CTimestampedDataContainer<AnimationOperationHistory_t, 3>* , IPrintState* );
	class IPrintState {
	};
	/* ../public/tier0/utl_timestamped_data_container.h:65 */
	void SetDebug(const CTimestampedDataContainer<AnimationOperationHistory_t, 3>* , bool);
protected:
	uint16 m_nCurrentSimState; /* 0 2 */
	uint16 m_nNextSimState; /* 2 2 */
	CUtlVector<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, CUtlMemory<CTimestampedDataContainer<AnimationOperationHistory_t, 3>::InternalData_t, int> > m_SimulationState; /* 8 32 */
	bool m_bDebug; /* 40 1 */
	void CTimestampedDataContainer(class CTimestampedDataContainer<AnimationOperationHistory_t, 3> *); /* linkage=_ZN25CTimestampedDataContainerI27AnimationOperationHistory_tLi3EEC4Ev */
	void Setup(class CTimestampedDataContainer<AnimationOperationHistory_t, 3> *); /* linkage=_ZN25CTimestampedDataContainerI27AnimationOperationHistory_tLi3EE5SetupEv */
	void Shutdown(class CTimestampedDataContainer<AnimationOperationHistory_t, 3> *); /* linkage=_ZN25CTimestampedDataContainerI27AnimationOperationHistory_tLi3EE8ShutdownEv */
	class AnimationOperationHistory_t * AllocateNewState(class CTimestampedDataContainer<AnimationOperationHistory_t, 3> *, float); /* linkage=_ZN25CTimestampedDataContainerI27AnimationOperationHistory_tLi3EE16AllocateNewStateEf */
	void ApplyNewState(class CTimestampedDataContainer<AnimationOperationHistory_t, 3> *, float, class AnimationOperationHistory_t *); /* linkage=_ZN25CTimestampedDataContainerI27AnimationOperationHistory_tLi3EE13ApplyNewStateEfPS0_ */
	bool HasValidData(const class CTimestampedDataContainer<AnimationOperationHistory_t, 3>  *); /* linkage=_ZNK25CTimestampedDataContainerI27AnimationOperationHistory_tLi3EE12HasValidDataEv */
	float GetCurrentTimeSeconds(const class CTimestampedDataContainer<AnimationOperationHistory_t, 3>  *); /* linkage=_ZNK25CTimestampedDataContainerI27AnimationOperationHistory_tLi3EE21GetCurrentTimeSecondsEv */
	const class AnimationOperationHistory_t  * GetCurrentState(const class CTimestampedDataContainer<AnimationOperationHistory_t, 3>  *); /* linkage=_ZNK25CTimestampedDataContainerI27AnimationOperationHistory_tLi3EE15GetCurrentStateEv */
	class AnimationOperationHistory_t * GetCurrentStateForUpdate(class CTimestampedDataContainer<AnimationOperationHistory_t, 3> *); /* linkage=_ZN25CTimestampedDataContainerI27AnimationOperationHistory_tLi3EE24GetCurrentStateForUpdateEv */
	int Count(const class CTimestampedDataContainer<AnimationOperationHistory_t, 3>  *); /* linkage=_ZNK25CTimestampedDataContainerI27AnimationOperationHistory_tLi3EE5CountEv */
	const class AnimationOperationHistory_t  * Get(const class CTimestampedDataContainer<AnimationOperationHistory_t, 3>  *, int); /* linkage=_ZNK25CTimestampedDataContainerI27AnimationOperationHistory_tLi3EE3GetEi */
	float ComputeInterpolationAmount(const class CTimestampedDataContainer<AnimationOperationHistory_t, 3>  *, float, const class AnimationOperationHistory_t  * *, const class AnimationOperationHistory_t  * *, float *, float *); /* linkage=_ZNK25CTimestampedDataContainerI27AnimationOperationHistory_tLi3EE26ComputeInterpolationAmountEfPPKS0_S4_PfS5_ */
	void ClearHistory(class CTimestampedDataContainer<AnimationOperationHistory_t, 3> *); /* linkage=_ZN25CTimestampedDataContainerI27AnimationOperationHistory_tLi3EE12ClearHistoryEv */
	uint16 NextState(const class CTimestampedDataContainer<AnimationOperationHistory_t, 3>  *, uint16); /* linkage=_ZNK25CTimestampedDataContainerI27AnimationOperationHistory_tLi3EE9NextStateEt */
	uint16 PrevState(const class CTimestampedDataContainer<AnimationOperationHistory_t, 3>  *, uint16); /* linkage=_ZNK25CTimestampedDataContainerI27AnimationOperationHistory_tLi3EE9PrevStateEt */
	void PrintStateHistoryTimes(const class CTimestampedDataContainer<AnimationOperationHistory_t, 3>  *, class IPrintState *); /* linkage=_ZNK25CTimestampedDataContainerI27AnimationOperationHistory_tLi3EE22PrintStateHistoryTimesEPNS1_11IPrintStateE */
	void SetDebug(const class CTimestampedDataContainer<AnimationOperationHistory_t, 3>  *, bool); /* linkage=_ZNK25CTimestampedDataContainerI27AnimationOperationHistory_tLi3EE8SetDebugEb */
};

// <0499989A> ../public/tier0/utl_timestamped_data_container.h:54
inline void CTimestampedDataContainer<AnimationOperationHistory_t, 3>::NextState(uint16 nState)
{
} /* size: 0 */

// <04999FA8> ../public/tier0/utl_timestamped_data_container.h:55
inline void CTimestampedDataContainer<AnimationOperationHistory_t, 3>::PrevState(uint16 nState)
{
} /* size: 0 */

// <0499A11F> ../public/tier0/utl_timestamped_data_container.h:109
// variables: 3
inline void CTimestampedDataContainer<AnimationOperationHistory_t, 3>::AllocateNewState(float flTimeStamp)
{
	const char   __FUNCTION__; // 48190
	{
		int nState; // 119
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 133
	}
} /* size: 0, variables: 1 */

// <01CDEF8D> ../public/tier0/utl_timestamped_data_container.h:109
// variables: 3
inline void CTimestampedDataContainer<AnimationOperationHistory_t, 3>::AllocateNewState(float flTimeStamp)
{
	const char   __FUNCTION__; // 55713
	{
		int nState; // 119
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 133
	}
} /* size: 0, variables: 1 */

// <00914F62> ../public/tier0/utl_timestamped_data_container.h:109
// variables: 3
inline void CTimestampedDataContainer<AnimationOperationHistory_t, 3>::AllocateNewState(float flTimeStamp)
{
	const char   __FUNCTION__; // 30438
	{
		int nState; // 119
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 133
	}
} /* size: 0, variables: 1 */

// <0499A060> ../public/tier0/utl_timestamped_data_container.h:147
// variables: 5
inline void CTimestampedDataContainer<AnimationOperationHistory_t, 3>::ApplyNewState(float flTimeStamp, AnimationOperationHistory_t* pNewState)
{
	const char   __FUNCTION__; // 48148
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 149
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 150
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 151
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 153
	}
} /* size: 0, variables: 1 */

// <01CDEECE> ../public/tier0/utl_timestamped_data_container.h:147
// variables: 5
inline void CTimestampedDataContainer<AnimationOperationHistory_t, 3>::ApplyNewState(float flTimeStamp, AnimationOperationHistory_t* pNewState)
{
	const char   __FUNCTION__; // 55671
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 149
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 150
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 151
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 153
	}
} /* size: 0, variables: 1 */

// <00914EA3> ../public/tier0/utl_timestamped_data_container.h:147
// variables: 5
inline void CTimestampedDataContainer<AnimationOperationHistory_t, 3>::ApplyNewState(float flTimeStamp, AnimationOperationHistory_t* pNewState)
{
	const char   __FUNCTION__; // 30396
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 149
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 150
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 151
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 153
	}
} /* size: 0, variables: 1 */

// <0499A023> ../public/tier0/utl_timestamped_data_container.h:164
// variables: 3
inline void CTimestampedDataContainer<AnimationOperationHistory_t, 3>::ClearHistory()
{
	int nStateCount; // 166
	InternalData_t* pBase; // 167
	{
		int i; // 168
	}
} /* size: 0, variables: 2 */

