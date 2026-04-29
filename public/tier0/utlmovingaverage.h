
//
// public/tier0/utlmovingaverage.h
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 6
//	class: 1
//

// <00470BB8> ../public/tier0/utlmovingaverage.h:11
// member functions: 18
// member variables: 3
// class size: 136
class CUtlMovingAverage<30> {
	/* ../public/tier0/utlmovingaverage.h:14 */
	void CUtlMovingAverage(CUtlMovingAverage<30>* );
	/* ../public/tier0/utlmovingaverage.h:20 */
	void Reset(CUtlMovingAverage<30>* );
	/* ../public/tier0/utlmovingaverage.h:26 */
	uint32 GetTotalValuesPushed(const CUtlMovingAverage<30>* );
	/* ../public/tier0/utlmovingaverage.h:31 */
	float GetAverage(const CUtlMovingAverage<30>* );
	/* ../public/tier0/utlmovingaverage.h:38 */
	void GetAverageAndAbsRange(const CUtlMovingAverage<30>* , float* , float* , float* , float* );
	/* ../public/tier0/utlmovingaverage.h:70 */
	void PushValue(CUtlMovingAverage<30>* , float);
	/* ../public/tier0/utlmovingaverage.h:91 */
	float GetHistoryValue(const CUtlMovingAverage<30>* , int);
	/* ../public/tier0/utlmovingaverage.h:98 */
	float GetHistoryValueOrDefault(const CUtlMovingAverage<30>* , int, float);
	/* ../public/tier0/utlmovingaverage.h:109 */
	int GetNumHistoryValues(const CUtlMovingAverage<30>* );
private:
	float m_Buffer[30]; /* 0 120 */
	uint32 m_nValuesPushed; /* 120 4 */
	double m_flTotal; /* 128 8 */
	void CUtlMovingAverage(class CUtlMovingAverage<30> *); /* linkage=_ZN17CUtlMovingAverageILj30EEC4Ev */
	void Reset(class CUtlMovingAverage<30> *); /* linkage=_ZN17CUtlMovingAverageILj30EE5ResetEv */
	uint32 GetTotalValuesPushed(const class CUtlMovingAverage<30>  *); /* linkage=_ZNK17CUtlMovingAverageILj30EE20GetTotalValuesPushedEv */
	float GetAverage(const class CUtlMovingAverage<30>  *); /* linkage=_ZNK17CUtlMovingAverageILj30EE10GetAverageEv */
	void GetAverageAndAbsRange(const class CUtlMovingAverage<30>  *, float *, float *, float *, float *); /* linkage=_ZNK17CUtlMovingAverageILj30EE21GetAverageAndAbsRangeEPfS1_S1_S1_ */
	void PushValue(class CUtlMovingAverage<30> *, float); /* linkage=_ZN17CUtlMovingAverageILj30EE9PushValueEf */
	float GetHistoryValue(const class CUtlMovingAverage<30>  *, int); /* linkage=_ZNK17CUtlMovingAverageILj30EE15GetHistoryValueEi */
	float GetHistoryValueOrDefault(const class CUtlMovingAverage<30>  *, int, float); /* linkage=_ZNK17CUtlMovingAverageILj30EE24GetHistoryValueOrDefaultEif */
	int GetNumHistoryValues(const class CUtlMovingAverage<30>  *); /* linkage=_ZNK17CUtlMovingAverageILj30EE19GetNumHistoryValuesEv */
};

// <0058E0DE> ../public/tier0/utlmovingaverage.h:14
void CUtlMovingAverage<30>::CUtlMovingAverage()
{
} /* size: 0 */

// <0058E0C5> ../public/tier0/utlmovingaverage.h:14
inline void CUtlMovingAverage<30>::CUtlMovingAverage()
{
} /* size: 0 */

// <0058A10E> ../public/tier0/utlmovingaverage.h:20
inline void CUtlMovingAverage<30>::Reset()
{
} /* size: 0 */

// <0058A0EA> ../public/tier0/utlmovingaverage.h:31
// variable: 1
inline void CUtlMovingAverage<30>::GetAverage()
{
	uint n; // 33
} /* size: 0, variables: 1 */

// <0058E388> ../public/tier0/utlmovingaverage.h:38
// variables: 7
inline void CUtlMovingAverage<30>::GetAverageAndAbsRange(float* pOutAverage, float* pOutMaxAbsRange, float* pOutMinValue, float* pOutMaxValue)
{
	const float  flAverage; // 49
	const int  nNumValues; // 50
	float flMaxAbsRange; // 52
	float flMinValue; // 53
	float flMaxValue; // 54
	{
		int i; // 56
		{
			float flDif; // 58
		}
	}
} /* size: 0, variables: 5 */

// <0058E428> ../public/tier0/utlmovingaverage.h:70
// variable: 1
inline void CUtlMovingAverage<30>::PushValue(float v)
{
	uint nIndex; // 72
} /* size: 0, variables: 1 */

