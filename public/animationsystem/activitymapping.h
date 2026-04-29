
//
// public/animationsystem/activitymapping.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 16
//	classes: 2
//

// <04A87364> ../public/animationsystem/activitymapping.h:22
// member functions: 31
// member variables: 4
// class size: 64
class CActivityToSequenceMapping {
	/* ../public/animationsystem/activitymapping.h:26 */
	struct SequenceTuple {
		HSequence m_hSequence; /* 0 4 */
		int m_nWeight; /* 4 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/animationsystem/activitymapping.h:42 */
	struct HashValueType {
		/* ../public/animationsystem/activitymapping.h:60 */
		class HashFuncs {
			/* ../public/animationsystem/activitymapping.h:64 */
			void HashFuncs(HashFuncs* , int);
			/* ../public/animationsystem/activitymapping.h:71 */
			bool operator()(const HashFuncs* , const HashValueType& , const HashValueType& );
			/* ../public/animationsystem/activitymapping.h:78 */
			unsigned int operator()(const HashFuncs* , const HashValueType& );
		};
		/* tag__fprintf: const_type tag not supported! */;
		int activityIdx; /* 0 4 */
		int startingIdx; /* 4 4 */
		int count; /* 8 4 */
		int totalWeight; /* 12 4 */
		/* ../public/animationsystem/activitymapping.h:52 */
		void HashValueType(HashValueType* , int, int, int, int);
		/* ../public/animationsystem/activitymapping.h:56 */
		void HashValueType(HashValueType* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/animationsystem/activitymapping.h:90 */
	void CActivityToSequenceMapping(CActivityToSequenceMapping* , const CModel* );
	/* ../public/animationsystem/activitymapping.h:97 */
	void ~CActivityToSequenceMapping(CActivityToSequenceMapping* );
	/* ../public/animationsystem/activitymapping.h:110 */
	const SequenceTuple* GetSequences(CActivityToSequenceMapping* , Activity, int* , int* );
	/* ../public/animationsystem/activitymapping.h:113 */
	int NumSequencesForActivity(CActivityToSequenceMapping* , Activity);
	/* ../public/animationsystem/activitymapping.h:114 */
	void GetActivitiesForSequence(CActivityToSequenceMapping* , HSequence, CUtlVector<int, CUtlMemory<int, int> >* );
	/* ../public/animationsystem/activitymapping.h:118 */
	void Initialize(CActivityToSequenceMapping* );
	/* ../public/animationsystem/activitymapping.h:121 */
	void Reinitialize(CActivityToSequenceMapping* );
	/* ../public/animationsystem/activitymapping.h:124 */
	HSequence SelectWeightedSequence(CActivityToSequenceMapping* , Activity, HSequence);
	/* ../public/animationsystem/activitymapping.h:126 */
	HSequence SelectWeightedSequenceFromModifiers(CActivityToSequenceMapping* , Activity, CUtlSymbolTable* , const CUtlSymbol* , int);
	/* ../public/animationsystem/activitymapping.h:129 */
	int GetSequenceVariantForActivity(CActivityToSequenceMapping* , HSequence, Activity);
	/* ../public/animationsystem/activitymapping.h:132 */
	HSequence GetSequenceByVariantForActivity(CActivityToSequenceMapping* , int, Activity);
	/* ../public/animationsystem/activitymapping.h:135 */
	bool IsSequenceValidForActivityAndModifiers(CActivityToSequenceMapping* , HSequence, Activity, CUtlSymbolTable* , const CUtlSymbol* , int);
private:
	/* ../public/animationsystem/activitymapping.h:138 */
	const HashValueType* BuildTopScoringSequencesForActivityAndModifiers(CActivityToSequenceMapping* , Activity, CUtlSymbolTable* , const CUtlSymbol* , int, CUtlVector<int, CUtlMemory<int, int> >& , float& );
	SequenceTuple * m_pSequenceTuples; /* 0 8 */
	unsigned int m_iSequenceTuplesCount; /* 8 4 */
	/* ../public/animationsystem/activitymapping.h:85 */
	typedef struct CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivityToSequenceMapping::HashValueType::HashFuncs> ActivityToValueIdxHash;
	ActivityToValueIdxHash m_ActToSeqHash; /* 16 40 */
	const class CModel * m_pModel; /* 56 8 */
	void CActivityToSequenceMapping(class CActivityToSequenceMapping *, const class CModel  *); /* linkage=_ZN26CActivityToSequenceMappingC4EPK6CModel */
	void ~CActivityToSequenceMapping(class CActivityToSequenceMapping *); /* linkage=_ZN26CActivityToSequenceMappingD4Ev */
	const class SequenceTuple  * GetSequences(class CActivityToSequenceMapping *, Activity, int *, int *); /* linkage=_ZN26CActivityToSequenceMapping12GetSequencesEiPiS0_ */
	int NumSequencesForActivity(class CActivityToSequenceMapping *, Activity); /* linkage=_ZN26CActivityToSequenceMapping23NumSequencesForActivityEi */
	void GetActivitiesForSequence(class CActivityToSequenceMapping *, class HSequence, class CUtlVector<int, CUtlMemory<int, int> > *); /* linkage=_ZN26CActivityToSequenceMapping24GetActivitiesForSequenceE9HSequenceP10CUtlVectorIi10CUtlMemoryIiiEE */
	void Initialize(class CActivityToSequenceMapping *); /* linkage=_ZN26CActivityToSequenceMapping10InitializeEv */
	void Reinitialize(class CActivityToSequenceMapping *); /* linkage=_ZN26CActivityToSequenceMapping12ReinitializeEv */
	class HSequence SelectWeightedSequence(class CActivityToSequenceMapping *, Activity, class HSequence); /* linkage=_ZN26CActivityToSequenceMapping22SelectWeightedSequenceEi9HSequence */
	class HSequence SelectWeightedSequenceFromModifiers(class CActivityToSequenceMapping *, Activity, class CUtlSymbolTable *, const class CUtlSymbol  *, int); /* linkage=_ZN26CActivityToSequenceMapping35SelectWeightedSequenceFromModifiersEiP15CUtlSymbolTablePK10CUtlSymboli */
	int GetSequenceVariantForActivity(class CActivityToSequenceMapping *, class HSequence, Activity); /* linkage=_ZN26CActivityToSequenceMapping29GetSequenceVariantForActivityE9HSequencei */
	class HSequence GetSequenceByVariantForActivity(class CActivityToSequenceMapping *, int, Activity); /* linkage=_ZN26CActivityToSequenceMapping31GetSequenceByVariantForActivityEii */
	bool IsSequenceValidForActivityAndModifiers(class CActivityToSequenceMapping *, class HSequence, Activity, class CUtlSymbolTable *, const class CUtlSymbol  *, int); /* linkage=_ZN26CActivityToSequenceMapping38IsSequenceValidForActivityAndModifiersE9HSequenceiP15CUtlSymbolTablePK10CUtlSymboli */
	const class HashValueType  * BuildTopScoringSequencesForActivityAndModifiers(class CActivityToSequenceMapping *, Activity, class CUtlSymbolTable *, const class CUtlSymbol  *, int, class CUtlVector<int, CUtlMemory<int, int> > &, float &); /* linkage=_ZN26CActivityToSequenceMapping47BuildTopScoringSequencesForActivityAndModifiersEiP15CUtlSymbolTablePK10CUtlSymboliR10CUtlVectorIi10CUtlMemoryIiiEERf */
};

// <04D65419> ../public/animationsystem/activitymapping.h:22
// member functions: 32
// member variables: 4
// class size: 64
class CActivityToSequenceMapping {
	/* ../public/animationsystem/activitymapping.h:26 */
	struct SequenceTuple {
		HSequence m_hSequence; /* 0 4 */
		int m_nWeight; /* 4 4 */
		void SequenceTuple(SequenceTuple* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/animationsystem/activitymapping.h:42 */
	struct HashValueType {
		/* ../public/animationsystem/activitymapping.h:60 */
		class HashFuncs {
			/* ../public/animationsystem/activitymapping.h:64 */
			void HashFuncs(HashFuncs* , int);
			/* ../public/animationsystem/activitymapping.h:71 */
			bool operator()(const HashFuncs* , const HashValueType& , const HashValueType& );
			/* ../public/animationsystem/activitymapping.h:78 */
			unsigned int operator()(const HashFuncs* , const HashValueType& );
		};
		/* tag__fprintf: const_type tag not supported! */;
		int activityIdx; /* 0 4 */
		int startingIdx; /* 4 4 */
		int count; /* 8 4 */
		int totalWeight; /* 12 4 */
		/* ../public/animationsystem/activitymapping.h:52 */
		void HashValueType(HashValueType* , int, int, int, int);
		/* ../public/animationsystem/activitymapping.h:56 */
		void HashValueType(HashValueType* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/animationsystem/activitymapping.h:90 */
	void CActivityToSequenceMapping(CActivityToSequenceMapping* , const CModel* );
	/* ../public/animationsystem/activitymapping.h:97 */
	void ~CActivityToSequenceMapping(CActivityToSequenceMapping* );
	/* ../public/animationsystem/activitymapping.h:110 */
	const SequenceTuple* GetSequences(CActivityToSequenceMapping* , Activity, int* , int* );
	/* ../public/animationsystem/activitymapping.h:113 */
	int NumSequencesForActivity(CActivityToSequenceMapping* , Activity);
	/* ../public/animationsystem/activitymapping.h:114 */
	void GetActivitiesForSequence(CActivityToSequenceMapping* , HSequence, CUtlVector<int, CUtlMemory<int, int> >* );
	/* ../public/animationsystem/activitymapping.h:118 */
	void Initialize(CActivityToSequenceMapping* );
	/* ../public/animationsystem/activitymapping.h:121 */
	void Reinitialize(CActivityToSequenceMapping* );
	/* ../public/animationsystem/activitymapping.h:124 */
	HSequence SelectWeightedSequence(CActivityToSequenceMapping* , Activity, HSequence);
	/* ../public/animationsystem/activitymapping.h:126 */
	HSequence SelectWeightedSequenceFromModifiers(CActivityToSequenceMapping* , Activity, CUtlSymbolTable* , const CUtlSymbol* , int);
	/* ../public/animationsystem/activitymapping.h:129 */
	int GetSequenceVariantForActivity(CActivityToSequenceMapping* , HSequence, Activity);
	/* ../public/animationsystem/activitymapping.h:132 */
	HSequence GetSequenceByVariantForActivity(CActivityToSequenceMapping* , int, Activity);
	/* ../public/animationsystem/activitymapping.h:135 */
	bool IsSequenceValidForActivityAndModifiers(CActivityToSequenceMapping* , HSequence, Activity, CUtlSymbolTable* , const CUtlSymbol* , int);
private:
	/* ../public/animationsystem/activitymapping.h:138 */
	const HashValueType* BuildTopScoringSequencesForActivityAndModifiers(CActivityToSequenceMapping* , Activity, CUtlSymbolTable* , const CUtlSymbol* , int, CUtlVector<int, CUtlMemory<int, int> >& , float& );
	SequenceTuple * m_pSequenceTuples; /* 0 8 */
	unsigned int m_iSequenceTuplesCount; /* 8 4 */
	/* ../public/animationsystem/activitymapping.h:85 */
	typedef struct CUtlHash<CActivityToSequenceMapping::HashValueType, CActivityToSequenceMapping::HashValueType::HashFuncs, CActivityToSequenceMapping::HashValueType::HashFuncs> ActivityToValueIdxHash;
	ActivityToValueIdxHash m_ActToSeqHash; /* 16 40 */
	const class CModel * m_pModel; /* 56 8 */
	void CActivityToSequenceMapping(class CActivityToSequenceMapping *, const class CModel  *); /* linkage=_ZN26CActivityToSequenceMappingC4EPK6CModel */
	void ~CActivityToSequenceMapping(class CActivityToSequenceMapping *); /* linkage=_ZN26CActivityToSequenceMappingD4Ev */
	const class SequenceTuple  * GetSequences(class CActivityToSequenceMapping *, Activity, int *, int *); /* linkage=_ZN26CActivityToSequenceMapping12GetSequencesEiPiS0_ */
	int NumSequencesForActivity(class CActivityToSequenceMapping *, Activity); /* linkage=_ZN26CActivityToSequenceMapping23NumSequencesForActivityEi */
	void GetActivitiesForSequence(class CActivityToSequenceMapping *, class HSequence, class CUtlVector<int, CUtlMemory<int, int> > *); /* linkage=_ZN26CActivityToSequenceMapping24GetActivitiesForSequenceE9HSequenceP10CUtlVectorIi10CUtlMemoryIiiEE */
	void Initialize(class CActivityToSequenceMapping *); /* linkage=_ZN26CActivityToSequenceMapping10InitializeEv */
	void Reinitialize(class CActivityToSequenceMapping *); /* linkage=_ZN26CActivityToSequenceMapping12ReinitializeEv */
	class HSequence SelectWeightedSequence(class CActivityToSequenceMapping *, Activity, class HSequence); /* linkage=_ZN26CActivityToSequenceMapping22SelectWeightedSequenceEi9HSequence */
	class HSequence SelectWeightedSequenceFromModifiers(class CActivityToSequenceMapping *, Activity, class CUtlSymbolTable *, const class CUtlSymbol  *, int); /* linkage=_ZN26CActivityToSequenceMapping35SelectWeightedSequenceFromModifiersEiP15CUtlSymbolTablePK10CUtlSymboli */
	int GetSequenceVariantForActivity(class CActivityToSequenceMapping *, class HSequence, Activity); /* linkage=_ZN26CActivityToSequenceMapping29GetSequenceVariantForActivityE9HSequencei */
	class HSequence GetSequenceByVariantForActivity(class CActivityToSequenceMapping *, int, Activity); /* linkage=_ZN26CActivityToSequenceMapping31GetSequenceByVariantForActivityEii */
	bool IsSequenceValidForActivityAndModifiers(class CActivityToSequenceMapping *, class HSequence, Activity, class CUtlSymbolTable *, const class CUtlSymbol  *, int); /* linkage=_ZN26CActivityToSequenceMapping38IsSequenceValidForActivityAndModifiersE9HSequenceiP15CUtlSymbolTablePK10CUtlSymboli */
	const class HashValueType  * BuildTopScoringSequencesForActivityAndModifiers(class CActivityToSequenceMapping *, Activity, class CUtlSymbolTable *, const class CUtlSymbol  *, int, class CUtlVector<int, CUtlMemory<int, int> > &, float &); /* linkage=_ZN26CActivityToSequenceMapping47BuildTopScoringSequencesForActivityAndModifiersEiP15CUtlSymbolTablePK10CUtlSymboliR10CUtlVectorIi10CUtlMemoryIiiEERf */
};

// <04D78BA7> ../public/animationsystem/activitymapping.h:26
void SequenceTuple::SequenceTuple()
{
} /* size: 0 */

// <04D78B8A> ../public/animationsystem/activitymapping.h:26
inline void SequenceTuple::SequenceTuple()
{
} /* size: 0 */

// <04D798BA> ../public/animationsystem/activitymapping.h:52
void HashValueType::HashValueType(int _actIdx, int _stIdx, int _ct, int _tW)
{
} /* size: 0 */

// <04D79871> ../public/animationsystem/activitymapping.h:52
inline void HashValueType::HashValueType(int _actIdx, int _stIdx, int _ct, int _tW)
{
} /* size: 0 */

// <04D79852> ../public/animationsystem/activitymapping.h:56
void HashValueType::HashValueType()
{
	{
		{
		}
	}
} /* size: 0 */

// <04D79810> ../public/animationsystem/activitymapping.h:56
// variables: 2
inline void HashValueType::HashValueType()
{
	const char   __FUNCTION__; // 53600
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 57
	}
} /* size: 0, variables: 1 */

// <0212FC94> ../public/animationsystem/activitymapping.h:56
// variables: 2
inline void HashValueType::HashValueType()
{
	const char   __FUNCTION__; // 1241
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 57
	}
} /* size: 0, variables: 1 */

// <00C9C451> ../public/animationsystem/activitymapping.h:56
// variables: 2
inline void HashValueType::HashValueType()
{
	const char   __FUNCTION__; // 2566
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 57
	}
} /* size: 0, variables: 1 */

// <04D797F4> ../public/animationsystem/activitymapping.h:64
void HashFuncs::HashFuncs(int)
{
} /* size: 0 */

// <04D797D6> ../public/animationsystem/activitymapping.h:64
inline void HashFuncs::HashFuncs(int)
{
} /* size: 0 */

// <04D797A5> ../public/animationsystem/activitymapping.h:71
inline void HashFuncs::operator(const HashValueType& lhs, const HashValueType& rhs)
{
} /* size: 0 */

// <04D79780> ../public/animationsystem/activitymapping.h:78
inline void HashFuncs::operator(const HashValueType& item)
{
} /* size: 0 */

// <04D79764> ../public/animationsystem/activitymapping.h:90
void CActivityToSequenceMapping::CActivityToSequenceMapping(const CModel* pstudiohdr)
{
} /* size: 0 */

// <04D7973F> ../public/animationsystem/activitymapping.h:90
inline void CActivityToSequenceMapping::CActivityToSequenceMapping(const CModel* pstudiohdr)
{
} /* size: 0 */

// <04AE0706> ../public/animationsystem/activitymapping.h:97
void CActivityToSequenceMapping::~CActivityToSequenceMapping()
{
} /* size: 0 */

// <04AE06ED> ../public/animationsystem/activitymapping.h:97
inline void CActivityToSequenceMapping::~CActivityToSequenceMapping()
{
} /* size: 0 */

