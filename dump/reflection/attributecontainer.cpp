
//
// reflection/attributecontainer.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 3
//

// <01C1CF8A> reflection/attributecontainer.cpp:9
// function calls: 10
void CAttributeContainer::CAttributeContainer(CAttributeContainer& src)
{
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 186
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::IsExternallyAllocated(); // 535
	{
	}
	V_swap_through_temp<unsigned int>(unsigned int& x,
						unsigned int& y);  // 536
	V_swap_through_temp<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >*>(CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > *& x,
														CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > *& y);  // 537
	V_swap_through_temp<int>(int& x,
				int& y);  // 538
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Swap(
		CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>& mem);  // 314
	V_swap_through_temp<int>(int& x,
				int& y);  // 314
	Swap(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this,
		CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID>, Defa other);  // 186
	CUtlHashtable(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this,
			CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID>, Defa src);  // 10
} /* size: 0, inline expansions: 10 (469 bytes) */

// <01C1CF65> reflection/attributecontainer.cpp:9
void CAttributeContainer::CAttributeContainer(CAttributeContainer& src)
{
} /* size: 0 */

// <01C1CBEE> reflection/attributecontainer.cpp:13
// variable: 1
// function calls: 16
void CAttributeContainer::GetAttributeByID(ClassID typeID)
{
	UtlHashHandle_t handle; // 15
	ClassID::TypeHash(); // 67
	Mix32HashFunctor::operator(
			uint32 n);  // 67
	ClassIDHashFunctor::operator(
			ClassID nType);  // 218
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Count(); // 651
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Base(); // 650
	IdealIndex(uint32_if32BitStorage h,
			uint32 m);  // 653
	CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >::IdealIndex(
			uint32 slotmask);  // 656
	CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >::IdealIndex(
			uint32 slotmask);  // 667
	ClassID::operator==(
			ClassID nOther);  // 154
	DefaultEqualFunctor<Reflection::ClassID>::operator(
			Arg_t a,
			Arg_t b);  // 670
	DoLookup<const Reflection::ClassID&>(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::Cl this,
						const ClassID& x,
						unsigned int h,
						handle_t* pPreviousInChain);  // 218
	Find(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::Cl this,
		KeyArg_t k);  // 15
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::operator[](
			int i);  // 204
	CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >::IsValid(); // 204
	IsValidHandle(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::Cl this,
			handle_t idx);  // 16
	__shared_ptr<Reflection::CAttribute, (__gnu_cxx::_Lock_policy)2>::get()2>* this); // 18
} /* size: 276, variables: 1, inline expansions: 16 (584 bytes) */

