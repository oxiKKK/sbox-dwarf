
//
// public/tier0/utlslotallocator.h
//
//	referenced by: libengine2.so
//
//	functions: 6
//	class: 1
//

// <02B5D624> ../public/tier0/utlslotallocator.h:16
// member functions: 10
// member variable: 1
// class size: 32
class CUtlSlotAllocator<8> {
private:
	uint32 m_nSlotIDs[8]; /* 0 32 */
	/* ../public/tier0/utlslotallocator.h:21 */
	void Reset(CUtlSlotAllocator<8>* );
	/* ../public/tier0/utlslotallocator.h:23 */
	void CUtlSlotAllocator(CUtlSlotAllocator<8>* );
	/* ../public/tier0/utlslotallocator.h:29 */
	int SlotIsAllocated(const CUtlSlotAllocator<8>* , CUtlStringToken);
	/* ../public/tier0/utlslotallocator.h:43 */
	bool AllocateSpecificSlot(CUtlSlotAllocator<8>* , int, CUtlStringToken);
	/* ../public/tier0/utlslotallocator.h:53 */
	int FindOrAllocateSlot(CUtlSlotAllocator<8>* , CUtlStringToken);
	void Reset(class CUtlSlotAllocator<8> *); /* linkage=_ZN17CUtlSlotAllocatorILi8EE5ResetEv */
	void CUtlSlotAllocator(class CUtlSlotAllocator<8> *); /* linkage=_ZN17CUtlSlotAllocatorILi8EEC4Ev */
	int SlotIsAllocated(const class CUtlSlotAllocator<8>  *, class CUtlStringToken); /* linkage=_ZNK17CUtlSlotAllocatorILi8EE15SlotIsAllocatedE15CUtlStringToken */
	bool AllocateSpecificSlot(class CUtlSlotAllocator<8> *, int, class CUtlStringToken); /* linkage=_ZN17CUtlSlotAllocatorILi8EE20AllocateSpecificSlotEi15CUtlStringToken */
	int FindOrAllocateSlot(class CUtlSlotAllocator<8> *, class CUtlStringToken); /* linkage=_ZN17CUtlSlotAllocatorILi8EE18FindOrAllocateSlotE15CUtlStringToken */
};

// <0346756E> ../public/tier0/utlslotallocator.h:21
inline void CUtlSlotAllocator<8>::Reset()
{
} /* size: 0 */

// <03469782> ../public/tier0/utlslotallocator.h:23
void CUtlSlotAllocator<8>::CUtlSlotAllocator()
{
} /* size: 0 */

// <03469769> ../public/tier0/utlslotallocator.h:23
inline void CUtlSlotAllocator<8>::CUtlSlotAllocator()
{
} /* size: 0 */

// <03468955> ../public/tier0/utlslotallocator.h:29
// variables: 2
inline void CUtlSlotAllocator<8>::SlotIsAllocated(CUtlStringToken nID)
{
	uint32 nHash; // 31
	{
		int i; // 32
	}
} /* size: 0, variables: 1 */

// <02EA79D7> ../public/tier0/utlslotallocator.h:43
// variables: 2
inline void CUtlSlotAllocator<8>::AllocateSpecificSlot(int nIdx, CUtlStringToken nID)
{
	uint32 nHash; // 45
	uint32 nAssociatedID; // 46
} /* size: 0, variables: 2 */

// <03468A35> ../public/tier0/utlslotallocator.h:53
// variables: 3
inline void CUtlSlotAllocator<8>::FindOrAllocateSlot(CUtlStringToken nID)
{
	uint32 nHash; // 55
	int nIdx; // 56
	{
		uint32 nAssociatedID; // 59
	}
} /* size: 0, variables: 2 */

