
//
// public/tier0/utlidgenerator.h
//
//	referenced by: librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 10
//	class: 1
//

// <002D867B> ../public/tier0/utlidgenerator.h:66
// member functions: 26
// member variables: 3
// class size: 16
class CUtlIdGenerator {
	/* ../public/tier0/utlidgenerator.h:325 */
	struct Range {
		uint m_First; /* 0 4 */
		uint m_Last; /* 4 4 */
	};
	/* ../public/tier0/utlidgenerator.h:69 */
	void CUtlIdGenerator(CUtlIdGenerator* , uint);
	/* ../public/tier0/utlidgenerator.h:79 */
	void ~CUtlIdGenerator(CUtlIdGenerator* );
	/* ../public/tier0/utlidgenerator.h:85 */
	bool CreateID(CUtlIdGenerator* , uint& );
	/* ../public/tier0/utlidgenerator.h:107 */
	bool CreateRangeID(CUtlIdGenerator* , uint& , uint);
	/* ../public/tier0/utlidgenerator.h:135 */
	bool DestroyID(CUtlIdGenerator* , uint);
	/* ../public/tier0/utlidgenerator.h:140 */
	bool DestroyRangeID(CUtlIdGenerator* , uint, uint);
	/* ../public/tier0/utlidgenerator.h:238 */
	bool IsID(const CUtlIdGenerator* , uint);
	/* ../public/tier0/utlidgenerator.h:273 */
	uint GetAvailableIDs(const CUtlIdGenerator* );
	/* ../public/tier0/utlidgenerator.h:287 */
	uint GetLargestContinuousRange(const CUtlIdGenerator* );
private:
	/* ../public/tier0/utlidgenerator.h:306 */
	void InsertRange(CUtlIdGenerator* , uint);
	/* ../public/tier0/utlidgenerator.h:318 */
	void DestroyRange(CUtlIdGenerator* , uint);
	Range * m_Ranges; /* 0 8 */
	uint m_Count; /* 8 4 */
	uint m_Capacity; /* 12 4 */
	/* ../public/tier0/utlidgenerator.h:335 */
	CUtlIdGenerator& operator=(CUtlIdGenerator* , const CUtlIdGenerator& );
	/* ../public/tier0/utlidgenerator.h:336 */
	void CUtlIdGenerator(CUtlIdGenerator* , const CUtlIdGenerator& );
	void CUtlIdGenerator(class CUtlIdGenerator *, uint); /* linkage=_ZN15CUtlIdGeneratorC4Ej */
	void ~CUtlIdGenerator(class CUtlIdGenerator *); /* linkage=_ZN15CUtlIdGeneratorD4Ev */
	bool CreateID(class CUtlIdGenerator *, uint &); /* linkage=_ZN15CUtlIdGenerator8CreateIDERj */
	bool CreateRangeID(class CUtlIdGenerator *, uint &, uint); /* linkage=_ZN15CUtlIdGenerator13CreateRangeIDERjj */
	bool DestroyID(class CUtlIdGenerator *, uint); /* linkage=_ZN15CUtlIdGenerator9DestroyIDEj */
	bool DestroyRangeID(class CUtlIdGenerator *, uint, uint); /* linkage=_ZN15CUtlIdGenerator14DestroyRangeIDEjj */
	bool IsID(const class CUtlIdGenerator  *, uint); /* linkage=_ZNK15CUtlIdGenerator4IsIDEj */
	uint GetAvailableIDs(const class CUtlIdGenerator  *); /* linkage=_ZNK15CUtlIdGenerator15GetAvailableIDsEv */
	uint GetLargestContinuousRange(const class CUtlIdGenerator  *); /* linkage=_ZNK15CUtlIdGenerator25GetLargestContinuousRangeEv */
	void InsertRange(class CUtlIdGenerator *, uint); /* linkage=_ZN15CUtlIdGenerator11InsertRangeEj */
	void DestroyRange(class CUtlIdGenerator *, uint); /* linkage=_ZN15CUtlIdGenerator12DestroyRangeEj */
	class CUtlIdGenerator & operator=(class CUtlIdGenerator *, const class CUtlIdGenerator  &); /* linkage=_ZN15CUtlIdGeneratoraSERKS_ */
	void CUtlIdGenerator(class CUtlIdGenerator *, const class CUtlIdGenerator  &); /* linkage=_ZN15CUtlIdGeneratorC4ERKS_ */
};

// <00C50E06> ../public/tier0/utlidgenerator.h:69
void CUtlIdGenerator::CUtlIdGenerator(const uint max_id)
{
} /* size: 0 */

// <00C50DE1> ../public/tier0/utlidgenerator.h:69
inline void CUtlIdGenerator::CUtlIdGenerator(const uint max_id)
{
} /* size: 0 */

// <00C50DCA> ../public/tier0/utlidgenerator.h:79
void CUtlIdGenerator::~CUtlIdGenerator()
{
} /* size: 0 */

// <00C50DB1> ../public/tier0/utlidgenerator.h:79
inline void CUtlIdGenerator::~CUtlIdGenerator()
{
} /* size: 0 */

// <00C50D8D> ../public/tier0/utlidgenerator.h:85
inline void CUtlIdGenerator::CreateID(uint& id)
{
} /* size: 0 */

// <00C50D69> ../public/tier0/utlidgenerator.h:135
inline void CUtlIdGenerator::DestroyID(const uint id)
{
} /* size: 0 */

// <00C50D08> ../public/tier0/utlidgenerator.h:140
// variables: 4
inline void CUtlIdGenerator::DestroyRangeID(const uint id, const uint count)
{
	const uint  end_id; // 142
	uint i0; // 145
	uint i1; // 146
	{
		const uint  i; // 150
	}
} /* size: 0, variables: 3 */

// <00343FE8> ../public/tier0/utlidgenerator.h:140
// variables: 4
// function calls: 12
void CUtlIdGenerator::DestroyRangeID(const uint id, const uint count)
{
	const uint  end_id; // 142
	uint i0; // 145
	uint i1; // 146
	{
		const uint  i; // 150
		memmove(void* __dest,
			const void* __src,
			size_t __len);  // 115
		V_memmove(void* dest,
				const void* src,
				size_t count);  // 314
		CUtlIdGenerator::InsertRange(
				const uint  index);  // 222
		memmove(void* __dest,
			const void* __src,
			size_t __len);  // 115
		V_memmove(void* dest,
				const void* src,
				size_t count);  // 321
		CUtlIdGenerator::DestroyRange(
				const uint  index);  // 165
		memmove(void* __dest,
			const void* __src,
			size_t __len);  // 115
		V_memmove(void* dest,
				const void* src,
				size_t count);  // 314
		CUtlIdGenerator::InsertRange(
				const uint  index);  // 185
		memmove(void* __dest,
			const void* __src,
			size_t __len);  // 115
		V_memmove(void* dest,
				const void* src,
				size_t count);  // 321
		CUtlIdGenerator::DestroyRange(
				const uint  index);  // 202
	}
} /* size: 667, variables: 3 */

// <00C50CE2> ../public/tier0/utlidgenerator.h:306
inline void CUtlIdGenerator::InsertRange(const uint index)
{
} /* size: 0 */

// <00C50CBC> ../public/tier0/utlidgenerator.h:318
inline void CUtlIdGenerator::DestroyRange(const uint index)
{
} /* size: 0 */

