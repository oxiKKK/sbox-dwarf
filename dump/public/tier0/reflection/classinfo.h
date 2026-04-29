
//
// public/tier0/reflection/classinfo.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 1,605
//

// <01C56EFF> ../public/tier0/reflection/classinfo.h:14
void CClassInfo::~CClassInfo()
{
} /* size: 0 */

// <01C56EE3> ../public/tier0/reflection/classinfo.h:14
inline void CClassInfo::~CClassInfo()
{
} /* size: 0 */

// <01C2D4AA> ../public/tier0/reflection/classinfo.h:14
// function calls: 17
void CClassInfo::~CClassInfo()
{
	RemoveAll(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 1798
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 903
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 560
	ValidateAlignment<Reflection::CClassInfo::BaseClassInfo_t>(void); // 508
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 510
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 410
	CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >::~CUtlVector(); // 14
	ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(void); // 508
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 17
	CAttributeContainer::~CAttributeContainer(); // 14
} /* size: 118, inline expansions: 17 (273 bytes) */

// <01A7BC21> ../public/tier0/reflection/classinfo.h:14
// variables: 10
// function calls: 33
void CClassInfo::~CClassInfo()
{
	RemoveAll(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 1798
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 903
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 560
	ValidateAlignment<Reflection::CClassInfo::BaseClassInfo_t>(void); // 508
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 510
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 410
	CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >::~CUtlVector(); // 14
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Count(); // 897
			{
				const int  __wordbits; // 330
				const int  __shiftbits; // 331
				const long long int  __unique_ref; // 332
				long long int* __both_counts; // 333
				__exchange_and_add_single(_Atomic_word* __mem,
								int __val);  // 101
				__is_single_threaded(void); // 100
				__exchange_and_add(volatile _Atomic_word* __mem,
							int __val);  // 103
				__exchange_and_add_dispatch(_Atomic_word* __mem,
								int __val);  // 349
			}
			{
				const int  __wordbits; // 330
				const int  __shiftbits; // 331
				const long long int  __unique_ref; // 332
				long long int* __both_counts; // 333
			}
			_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 316
			_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 1069
			__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count()2>* this); // 1531
			__shared_ptr<Reflection::CAttribute, (__gnu_cxx::_Lock_policy)2>::~__shared_ptr()2>* this); // 175
			shared_ptr<Reflection::CAttribute>::~shared_ptr(); // 51
			CUtlKeyValuePair<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >::~CUtlKeyValuePair(); // 1526
			Destruct<CUtlKeyValuePair<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(CUtlKeyValuePair<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >* pMemory); // 902
			CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >::IsValid(); // 899
			CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >::MarkInvalid(); // 901
		}
	}
	RemoveAll(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 188
	ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(void); // 508
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 17
	CAttributeContainer::~CAttributeContainer(); // 14
} /* size: 0, inline expansions: 18 (0 bytes) */

// <01C55434> ../public/tier0/reflection/classinfo.h:17
void CClassInfo::CClassInfo(const char* typeName, ClassID typeID)
{
} /* size: 0 */

// <01C553BE> ../public/tier0/reflection/classinfo.h:18
void CClassInfo::CClassInfo(CClassInfo& rhs)
{
} /* size: 0 */

// <01C574C0> ../public/tier0/reflection/classinfo.h:21
inline void CClassInfo::GetID()
{
} /* size: 0 */

// <01C2DE63> ../public/tier0/reflection/classinfo.h:24
inline void CClassInfo::GetName()
{
} /* size: 0 */

// <01C56BAB> ../public/tier0/reflection/classinfo.h:61
// function calls: 18
void CClassInfoT<Reflection::CAttribute>::~CClassInfoT()
{
	RemoveAll(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 1798
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 903
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 560
	ValidateAlignment<Reflection::CClassInfo::BaseClassInfo_t>(void); // 508
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 510
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 410
	CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >::~CUtlVector(); // 14
	ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(void); // 508
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 17
	CAttributeContainer::~CAttributeContainer(); // 14
	CClassInfo::~CClassInfo(); // 61
} /* size: 118, inline expansions: 18 (364 bytes) */

// <01C56B8F> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<Reflection::CAttribute>::~CClassInfoT()
{
} /* size: 0 */

// <01C37E3D> ../public/tier0/reflection/classinfo.h:61
// function calls: 18
void CClassInfoT<Reflection::Object>::~CClassInfoT()
{
	RemoveAll(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 1798
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 903
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 560
	ValidateAlignment<Reflection::CClassInfo::BaseClassInfo_t>(void); // 508
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 510
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 410
	CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >::~CUtlVector(); // 14
	ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(void); // 508
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 17
	CAttributeContainer::~CAttributeContainer(); // 14
	CClassInfo::~CClassInfo(); // 61
} /* size: 118, inline expansions: 18 (364 bytes) */

// <01C37E21> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<Reflection::Object>::~CClassInfoT()
{
} /* size: 0 */

// <01C2D146> ../public/tier0/reflection/classinfo.h:61
// function calls: 18
void CClassInfoT<Attribute::Color>::~CClassInfoT()
{
	RemoveAll(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 1798
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 903
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 560
	ValidateAlignment<Reflection::CClassInfo::BaseClassInfo_t>(void); // 508
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 510
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 410
	CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >::~CUtlVector(); // 14
	ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(void); // 508
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 17
	CAttributeContainer::~CAttributeContainer(); // 14
	CClassInfo::~CClassInfo(); // 61
} /* size: 118, inline expansions: 18 (364 bytes) */

// <01C2D12A> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<Attribute::Color>::~CClassInfoT()
{
} /* size: 0 */

// <01C2CA8A> ../public/tier0/reflection/classinfo.h:61
// function calls: 18
void CClassInfoT<Attribute::Deprecated>::~CClassInfoT()
{
	RemoveAll(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 1798
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 903
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 560
	ValidateAlignment<Reflection::CClassInfo::BaseClassInfo_t>(void); // 508
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 510
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 410
	CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >::~CUtlVector(); // 14
	ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(void); // 508
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 17
	CAttributeContainer::~CAttributeContainer(); // 14
	CClassInfo::~CClassInfo(); // 61
} /* size: 118, inline expansions: 18 (364 bytes) */

// <01C2CA6E> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<Attribute::Deprecated>::~CClassInfoT()
{
} /* size: 0 */

// <01C2C3CE> ../public/tier0/reflection/classinfo.h:61
// function calls: 18
void CClassInfoT<Attribute::Description>::~CClassInfoT()
{
	RemoveAll(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 1798
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 903
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 560
	ValidateAlignment<Reflection::CClassInfo::BaseClassInfo_t>(void); // 508
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 510
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 410
	CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >::~CUtlVector(); // 14
	ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(void); // 508
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 17
	CAttributeContainer::~CAttributeContainer(); // 14
	CClassInfo::~CClassInfo(); // 61
} /* size: 118, inline expansions: 18 (364 bytes) */

// <01C2C3B2> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<Attribute::Description>::~CClassInfoT()
{
} /* size: 0 */

// <01C2BD12> ../public/tier0/reflection/classinfo.h:61
// function calls: 18
void CClassInfoT<Attribute::FriendlyName>::~CClassInfoT()
{
	RemoveAll(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 1798
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 903
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 560
	ValidateAlignment<Reflection::CClassInfo::BaseClassInfo_t>(void); // 508
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 510
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 410
	CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >::~CUtlVector(); // 14
	ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(void); // 508
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 17
	CAttributeContainer::~CAttributeContainer(); // 14
	CClassInfo::~CClassInfo(); // 61
} /* size: 118, inline expansions: 18 (364 bytes) */

// <01C2BCF6> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<Attribute::FriendlyName>::~CClassInfoT()
{
} /* size: 0 */

// <01C2B656> ../public/tier0/reflection/classinfo.h:61
// function calls: 18
void CClassInfoT<Attribute::Group>::~CClassInfoT()
{
	RemoveAll(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 1798
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 903
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 560
	ValidateAlignment<Reflection::CClassInfo::BaseClassInfo_t>(void); // 508
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 510
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 410
	CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >::~CUtlVector(); // 14
	ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(void); // 508
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 17
	CAttributeContainer::~CAttributeContainer(); // 14
	CClassInfo::~CClassInfo(); // 61
} /* size: 118, inline expansions: 18 (364 bytes) */

// <01C2B63A> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<Attribute::Group>::~CClassInfoT()
{
} /* size: 0 */

// <01C2AF9A> ../public/tier0/reflection/classinfo.h:61
// function calls: 18
void CClassInfoT<Attribute::Icon>::~CClassInfoT()
{
	RemoveAll(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 1798
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 903
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 560
	ValidateAlignment<Reflection::CClassInfo::BaseClassInfo_t>(void); // 508
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 510
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 410
	CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >::~CUtlVector(); // 14
	ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(void); // 508
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 17
	CAttributeContainer::~CAttributeContainer(); // 14
	CClassInfo::~CClassInfo(); // 61
} /* size: 118, inline expansions: 18 (364 bytes) */

// <01C2AF7E> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<Attribute::Icon>::~CClassInfoT()
{
} /* size: 0 */

// <01A7B6D4> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<IAnimStateCondition>::~CClassInfoT()
{
} /* size: 19 */

// <01A7B6B8> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<IAnimStateCondition>::~CClassInfoT()
{
} /* size: 0 */

// <01A7B315> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CAnimStateConditionBase>::~CClassInfoT()
{
} /* size: 19 */

// <01A7B2F9> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CAnimStateConditionBase>::~CClassInfoT()
{
} /* size: 0 */

// <01A79EAE> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CControlValueCondition>::~CClassInfoT()
{
} /* size: 19 */

// <01A79E92> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CControlValueCondition>::~CClassInfoT()
{
} /* size: 0 */

// <01A772C6> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CCycleCondition>::~CClassInfoT()
{
} /* size: 19 */

// <01A772AA> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CCycleCondition>::~CClassInfoT()
{
} /* size: 0 */

// <01A75660> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CFinishedCondition>::~CClassInfoT()
{
} /* size: 19 */

// <01A75644> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CFinishedCondition>::~CClassInfoT()
{
} /* size: 0 */

// <01A73418> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CGroundCondition>::~CClassInfoT()
{
} /* size: 19 */

// <01A733FC> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CGroundCondition>::~CClassInfoT()
{
} /* size: 0 */

// <01A723D6> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CParameterAnimCondition>::~CClassInfoT()
{
} /* size: 19 */

// <01A723BA> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CParameterAnimCondition>::~CClassInfoT()
{
} /* size: 0 */

// <01A7026E> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CPathStatusCondition>::~CClassInfoT()
{
} /* size: 19 */

// <01A70252> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CPathStatusCondition>::~CClassInfoT()
{
} /* size: 0 */

// <01A6F36C> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CTagCondition>::~CClassInfoT()
{
} /* size: 19 */

// <01A6F350> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CTagCondition>::~CClassInfoT()
{
} /* size: 0 */

// <01A6DF0A> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CTimeCondition>::~CClassInfoT()
{
} /* size: 19 */

// <01A6DEEE> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CTimeCondition>::~CClassInfoT()
{
} /* size: 0 */

// <01A01284> ../public/tier0/reflection/classinfo.h:61
// function calls: 18
void CClassInfoT<IAnimState>::~CClassInfoT()
{
	RemoveAll(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 1798
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 903
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 560
	ValidateAlignment<Reflection::CClassInfo::BaseClassInfo_t>(void); // 508
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 510
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 410
	CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >::~CUtlVector(); // 14
	ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(void); // 508
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 17
	CAttributeContainer::~CAttributeContainer(); // 14
	CClassInfo::~CClassInfo(); // 61
} /* size: 118, inline expansions: 18 (364 bytes) */

// <01A01268> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<IAnimState>::~CClassInfoT()
{
} /* size: 0 */

// <01A00BC1> ../public/tier0/reflection/classinfo.h:61
// function calls: 18
void CClassInfoT<CAnimState>::~CClassInfoT()
{
	RemoveAll(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 1798
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 903
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 560
	ValidateAlignment<Reflection::CClassInfo::BaseClassInfo_t>(void); // 508
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 510
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 410
	CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >::~CUtlVector(); // 14
	ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(void); // 508
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 17
	CAttributeContainer::~CAttributeContainer(); // 14
	CClassInfo::~CClassInfo(); // 61
} /* size: 118, inline expansions: 18 (364 bytes) */

// <01A00BA5> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CAnimState>::~CClassInfoT()
{
} /* size: 0 */

// <019F84A9> ../public/tier0/reflection/classinfo.h:61
// function calls: 18
void CClassInfoT<IAnimStateTransition>::~CClassInfoT()
{
	RemoveAll(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 1798
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 903
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 560
	ValidateAlignment<Reflection::CClassInfo::BaseClassInfo_t>(void); // 508
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 510
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 410
	CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >::~CUtlVector(); // 14
	ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(void); // 508
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 17
	CAttributeContainer::~CAttributeContainer(); // 14
	CClassInfo::~CClassInfo(); // 61
} /* size: 118, inline expansions: 18 (364 bytes) */

// <019F848D> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<IAnimStateTransition>::~CClassInfoT()
{
} /* size: 0 */

// <019F7DE6> ../public/tier0/reflection/classinfo.h:61
// function calls: 18
void CClassInfoT<CAnimStateTransition>::~CClassInfoT()
{
	RemoveAll(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 1798
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 903
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 560
	ValidateAlignment<Reflection::CClassInfo::BaseClassInfo_t>(void); // 508
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 510
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 410
	CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >::~CUtlVector(); // 14
	ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(void); // 508
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 17
	CAttributeContainer::~CAttributeContainer(); // 14
	CClassInfo::~CClassInfo(); // 61
} /* size: 118, inline expansions: 18 (364 bytes) */

// <019F7DCA> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CAnimStateTransition>::~CClassInfoT()
{
} /* size: 0 */

// <014C2FBC> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<IAnimParameter>::~CClassInfoT()
{
} /* size: 19 */

// <014C2FA0> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<IAnimParameter>::~CClassInfoT()
{
} /* size: 0 */

// <014C2BFD> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CAnimParameterBase>::~CClassInfoT()
{
} /* size: 19 */

// <014C2BE1> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CAnimParameterBase>::~CClassInfoT()
{
} /* size: 0 */

// <014C20B6> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CBoolAnimParameter>::~CClassInfoT()
{
} /* size: 19 */

// <014C209A> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CBoolAnimParameter>::~CClassInfoT()
{
} /* size: 0 */

// <014C122A> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<IEnumAnimParameter>::~CClassInfoT()
{
} /* size: 19 */

// <014C120E> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<IEnumAnimParameter>::~CClassInfoT()
{
} /* size: 0 */

// <014C0E80> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CEnumAnimParameter>::~CClassInfoT()
{
} /* size: 19 */

// <014C0E64> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CEnumAnimParameter>::~CClassInfoT()
{
} /* size: 0 */

// <014BF8BF> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CFloatAnimParameter>::~CClassInfoT()
{
} /* size: 19 */

// <014BF8A3> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CFloatAnimParameter>::~CClassInfoT()
{
} /* size: 0 */

// <014BEBBB> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CIntAnimParameter>::~CClassInfoT()
{
} /* size: 19 */

// <014BEB9F> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CIntAnimParameter>::~CClassInfoT()
{
} /* size: 0 */

// <014BDEB7> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CQuaternionAnimParameter>::~CClassInfoT()
{
} /* size: 19 */

// <014BDE9B> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CQuaternionAnimParameter>::~CClassInfoT()
{
} /* size: 0 */

// <014BD112> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CVectorAnimParameter>::~CClassInfoT()
{
} /* size: 19 */

// <014BD0F6> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CVectorAnimParameter>::~CClassInfoT()
{
} /* size: 0 */

// <014706D0> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<IAnimMotor>::~CClassInfoT()
{
} /* size: 19 */

// <014706B4> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<IAnimMotor>::~CClassInfoT()
{
} /* size: 0 */

// <01470311> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CAnimMotorBase>::~CClassInfoT()
{
} /* size: 19 */

// <014702F5> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CAnimMotorBase>::~CClassInfoT()
{
} /* size: 0 */

// <0146F6B8> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CAnimMotorInstance>::~CClassInfoT()
{
} /* size: 19 */

// <0146F69C> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CAnimMotorInstance>::~CClassInfoT()
{
} /* size: 0 */

// <0146C65E> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CDampedPathAnimMotor>::~CClassInfoT()
{
} /* size: 19 */

// <0146C642> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CDampedPathAnimMotor>::~CClassInfoT()
{
} /* size: 0 */

// <0146BC5A> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CPathAnimMotor>::~CClassInfoT()
{
} /* size: 19 */

// <0146BC3E> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CPathAnimMotor>::~CClassInfoT()
{
} /* size: 0 */

// <0146B56F> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CPathAnimMotorBase>::~CClassInfoT()
{
} /* size: 19 */

// <0146B553> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CPathAnimMotorBase>::~CClassInfoT()
{
} /* size: 0 */

// <0146AFC3> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CPlayerInputAnimMotor>::~CClassInfoT()
{
} /* size: 19 */

// <0146AFA7> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CPlayerInputAnimMotor>::~CClassInfoT()
{
} /* size: 0 */

// <0146A60A> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<IPlayerInputAnimMotorInstance>::~CClassInfoT()
{
} /* size: 19 */

// <0146A5EE> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<IPlayerInputAnimMotorInstance>::~CClassInfoT()
{
} /* size: 0 */

// <0146A25E> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CPlayerInputAnimMotorInstance>::~CClassInfoT()
{
} /* size: 19 */

// <0146A242> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CPlayerInputAnimMotorInstance>::~CClassInfoT()
{
} /* size: 0 */

// <0140A40B> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CBonePositionMetric>::~CClassInfoT()
{
} /* size: 19 */

// <0140A3EF> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CBonePositionMetric>::~CClassInfoT()
{
} /* size: 0 */

// <01409A6E> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CBoneVelocityMetric>::~CClassInfoT()
{
} /* size: 19 */

// <01409A52> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CBoneVelocityMetric>::~CClassInfoT()
{
} /* size: 0 */

// <01409294> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CCurrentVelocityMetric>::~CClassInfoT()
{
} /* size: 19 */

// <01409278> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CCurrentVelocityMetric>::~CClassInfoT()
{
} /* size: 0 */

// <01408C90> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CDistanceRemainingMetric>::~CClassInfoT()
{
} /* size: 19 */

// <01408C74> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CDistanceRemainingMetric>::~CClassInfoT()
{
} /* size: 0 */

// <0140861B> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CFootCycleMetric>::~CClassInfoT()
{
} /* size: 19 */

// <014085FF> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CFootCycleMetric>::~CClassInfoT()
{
} /* size: 0 */

// <014075E3> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CFootPositionMetric>::~CClassInfoT()
{
} /* size: 19 */

// <014075C7> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CFootPositionMetric>::~CClassInfoT()
{
} /* size: 0 */

// <014065FC> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<IFootPositionMetricInstance>::~CClassInfoT()
{
} /* size: 19 */

// <014065E0> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<IFootPositionMetricInstance>::~CClassInfoT()
{
} /* size: 0 */

// <01406252> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CFootPositionMetricInstance>::~CClassInfoT()
{
} /* size: 19 */

// <01406236> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CFootPositionMetricInstance>::~CClassInfoT()
{
} /* size: 0 */

// <01405359> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CFutureFacingMetric>::~CClassInfoT()
{
} /* size: 19 */

// <0140533D> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CFutureFacingMetric>::~CClassInfoT()
{
} /* size: 0 */

// <01404D88> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<IFutureFacingMetricInstance>::~CClassInfoT()
{
} /* size: 19 */

// <01404D6C> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<IFutureFacingMetricInstance>::~CClassInfoT()
{
} /* size: 0 */

// <014049DE> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CFutureFacingMetricInstance>::~CClassInfoT()
{
} /* size: 19 */

// <014049C2> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CFutureFacingMetricInstance>::~CClassInfoT()
{
} /* size: 0 */

// <01403F68> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CFutureVelocityMetric>::~CClassInfoT()
{
} /* size: 19 */

// <01403F4C> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CFutureVelocityMetric>::~CClassInfoT()
{
} /* size: 0 */

// <0140391A> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<IFutureVelocityMetricInstance>::~CClassInfoT()
{
} /* size: 19 */

// <014038FE> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<IFutureVelocityMetricInstance>::~CClassInfoT()
{
} /* size: 0 */

// <01403570> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CFutureVelocityMetricInstance>::~CClassInfoT()
{
} /* size: 19 */

// <01403554> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CFutureVelocityMetricInstance>::~CClassInfoT()
{
} /* size: 0 */

// <01402B9E> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<IMotionMetric>::~CClassInfoT()
{
} /* size: 19 */

// <01402B82> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<IMotionMetric>::~CClassInfoT()
{
} /* size: 0 */

// <014027DF> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CMotionMetricBase>::~CClassInfoT()
{
} /* size: 19 */

// <014027C3> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CMotionMetricBase>::~CClassInfoT()
{
} /* size: 0 */

// <013FB3A1> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<IMotionMetricInstance>::~CClassInfoT()
{
} /* size: 19 */

// <013FB385> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<IMotionMetricInstance>::~CClassInfoT()
{
} /* size: 0 */

// <013FAFF7> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CMotionMetricInstance>::~CClassInfoT()
{
} /* size: 19 */

// <013FAFDB> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CMotionMetricInstance>::~CClassInfoT()
{
} /* size: 0 */

// <013FA639> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CPathMetric>::~CClassInfoT()
{
} /* size: 19 */

// <013FA61D> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CPathMetric>::~CClassInfoT()
{
} /* size: 0 */

// <013F9FF6> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<IPathMetricInstance>::~CClassInfoT()
{
} /* size: 19 */

// <013F9FDA> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<IPathMetricInstance>::~CClassInfoT()
{
} /* size: 0 */

// <013F9C4C> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CPathMetricInstance>::~CClassInfoT()
{
} /* size: 19 */

// <013F9C30> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CPathMetricInstance>::~CClassInfoT()
{
} /* size: 0 */

// <013F921E> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CStepsRemainingMetric>::~CClassInfoT()
{
} /* size: 19 */

// <013F9202> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CStepsRemainingMetric>::~CClassInfoT()
{
} /* size: 0 */

// <013F8034> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CTimeRemainingMetric>::~CClassInfoT()
{
} /* size: 19 */

// <013F8018> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CTimeRemainingMetric>::~CClassInfoT()
{
} /* size: 0 */

// <013553A4> ../public/tier0/reflection/classinfo.h:61
// function calls: 18
void CClassInfoT<IMotionClip>::~CClassInfoT()
{
	RemoveAll(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 1798
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 903
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 560
	ValidateAlignment<Reflection::CClassInfo::BaseClassInfo_t>(void); // 508
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 510
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 410
	CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >::~CUtlVector(); // 14
	ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(void); // 508
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 17
	CAttributeContainer::~CAttributeContainer(); // 14
	CClassInfo::~CClassInfo(); // 61
} /* size: 118, inline expansions: 18 (364 bytes) */

// <01355388> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<IMotionClip>::~CClassInfoT()
{
} /* size: 0 */

// <01354CE4> ../public/tier0/reflection/classinfo.h:61
// function calls: 18
void CClassInfoT<CMotionClip>::~CClassInfoT()
{
	RemoveAll(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 1798
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 903
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 560
	ValidateAlignment<Reflection::CClassInfo::BaseClassInfo_t>(void); // 508
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 510
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 410
	CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >::~CUtlVector(); // 14
	ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(void); // 508
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 17
	CAttributeContainer::~CAttributeContainer(); // 14
	CClassInfo::~CClassInfo(); // 61
} /* size: 118, inline expansions: 18 (364 bytes) */

// <01354CC8> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CMotionClip>::~CClassInfoT()
{
} /* size: 0 */

// <0135307A> ../public/tier0/reflection/classinfo.h:61
// function calls: 18
void CClassInfoT<IMotionClipGroup>::~CClassInfoT()
{
	RemoveAll(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 1798
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 903
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 560
	ValidateAlignment<Reflection::CClassInfo::BaseClassInfo_t>(void); // 508
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 510
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 410
	CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >::~CUtlVector(); // 14
	ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(void); // 508
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 17
	CAttributeContainer::~CAttributeContainer(); // 14
	CClassInfo::~CClassInfo(); // 61
} /* size: 118, inline expansions: 18 (364 bytes) */

// <0135305E> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<IMotionClipGroup>::~CClassInfoT()
{
} /* size: 0 */

// <013529BA> ../public/tier0/reflection/classinfo.h:61
// function calls: 18
void CClassInfoT<CMotionClipGroup>::~CClassInfoT()
{
	RemoveAll(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 1798
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 903
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 560
	ValidateAlignment<Reflection::CClassInfo::BaseClassInfo_t>(void); // 508
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 510
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 410
	CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >::~CUtlVector(); // 14
	ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(void); // 508
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 17
	CAttributeContainer::~CAttributeContainer(); // 14
	CClassInfo::~CClassInfo(); // 61
} /* size: 118, inline expansions: 18 (364 bytes) */

// <0135299E> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CMotionClipGroup>::~CClassInfoT()
{
} /* size: 0 */

// <0131BF47> ../public/tier0/reflection/classinfo.h:61
// variables: 10
// function calls: 34
void CClassInfoT<IAnimTag>::~CClassInfoT()
{
	RemoveAll(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 1798
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 903
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 560
	ValidateAlignment<Reflection::CClassInfo::BaseClassInfo_t>(void); // 508
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 510
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 410
	CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >::~CUtlVector(); // 14
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Count(); // 897
			{
				const int  __wordbits; // 330
				const int  __shiftbits; // 331
				const long long int  __unique_ref; // 332
				long long int* __both_counts; // 333
				__exchange_and_add_single(_Atomic_word* __mem,
								int __val);  // 101
				__is_single_threaded(void); // 100
				__exchange_and_add(volatile _Atomic_word* __mem,
							int __val);  // 103
				__exchange_and_add_dispatch(_Atomic_word* __mem,
								int __val);  // 349
			}
			{
				const int  __wordbits; // 330
				const int  __shiftbits; // 331
				const long long int  __unique_ref; // 332
				long long int* __both_counts; // 333
			}
			_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 316
			_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 1069
			__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count()2>* this); // 1531
			__shared_ptr<Reflection::CAttribute, (__gnu_cxx::_Lock_policy)2>::~__shared_ptr()2>* this); // 175
			shared_ptr<Reflection::CAttribute>::~shared_ptr(); // 51
			CUtlKeyValuePair<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >::~CUtlKeyValuePair(); // 1526
			Destruct<CUtlKeyValuePair<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(CUtlKeyValuePair<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >* pMemory); // 902
			CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >::IsValid(); // 899
			CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >::MarkInvalid(); // 901
		}
	}
	RemoveAll(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 188
	ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(void); // 508
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 17
	CAttributeContainer::~CAttributeContainer(); // 14
	CClassInfo::~CClassInfo(); // 61
} /* size: 401, inline expansions: 19 (1509 bytes) */

// <0131BF2B> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<IAnimTag>::~CClassInfoT()
{
} /* size: 0 */

// <0131B4B7> ../public/tier0/reflection/classinfo.h:61
// variables: 10
// function calls: 34
void CClassInfoT<CAnimTagBase>::~CClassInfoT()
{
	RemoveAll(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 1798
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 903
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 560
	ValidateAlignment<Reflection::CClassInfo::BaseClassInfo_t>(void); // 508
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 510
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 410
	CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >::~CUtlVector(); // 14
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Count(); // 897
			{
				const int  __wordbits; // 330
				const int  __shiftbits; // 331
				const long long int  __unique_ref; // 332
				long long int* __both_counts; // 333
				__exchange_and_add_single(_Atomic_word* __mem,
								int __val);  // 101
				__is_single_threaded(void); // 100
				__exchange_and_add(volatile _Atomic_word* __mem,
							int __val);  // 103
				__exchange_and_add_dispatch(_Atomic_word* __mem,
								int __val);  // 349
			}
			{
				const int  __wordbits; // 330
				const int  __shiftbits; // 331
				const long long int  __unique_ref; // 332
				long long int* __both_counts; // 333
			}
			_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 316
			_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 1069
			__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count()2>* this); // 1531
			__shared_ptr<Reflection::CAttribute, (__gnu_cxx::_Lock_policy)2>::~__shared_ptr()2>* this); // 175
			shared_ptr<Reflection::CAttribute>::~shared_ptr(); // 51
			CUtlKeyValuePair<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >::~CUtlKeyValuePair(); // 1526
			Destruct<CUtlKeyValuePair<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(CUtlKeyValuePair<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >* pMemory); // 902
			CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >::IsValid(); // 899
			CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >::MarkInvalid(); // 901
		}
	}
	RemoveAll(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 188
	ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(void); // 508
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 17
	CAttributeContainer::~CAttributeContainer(); // 14
	CClassInfo::~CClassInfo(); // 61
} /* size: 401, inline expansions: 19 (1509 bytes) */

// <0131B49B> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CAnimTagBase>::~CClassInfoT()
{
} /* size: 0 */

// <0131341C> ../public/tier0/reflection/classinfo.h:61
// variables: 10
// function calls: 34
void CClassInfoT<IAnimTagSpanContainer>::~CClassInfoT()
{
	RemoveAll(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 1798
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 903
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 560
	ValidateAlignment<Reflection::CClassInfo::BaseClassInfo_t>(void); // 508
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 510
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 410
	CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >::~CUtlVector(); // 14
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Count(); // 897
			{
				const int  __wordbits; // 330
				const int  __shiftbits; // 331
				const long long int  __unique_ref; // 332
				long long int* __both_counts; // 333
				__exchange_and_add_single(_Atomic_word* __mem,
								int __val);  // 101
				__is_single_threaded(void); // 100
				__exchange_and_add(volatile _Atomic_word* __mem,
							int __val);  // 103
				__exchange_and_add_dispatch(_Atomic_word* __mem,
								int __val);  // 349
			}
			{
				const int  __wordbits; // 330
				const int  __shiftbits; // 331
				const long long int  __unique_ref; // 332
				long long int* __both_counts; // 333
			}
			_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 316
			_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 1069
			__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count()2>* this); // 1531
			__shared_ptr<Reflection::CAttribute, (__gnu_cxx::_Lock_policy)2>::~__shared_ptr()2>* this); // 175
			shared_ptr<Reflection::CAttribute>::~shared_ptr(); // 51
			CUtlKeyValuePair<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >::~CUtlKeyValuePair(); // 1526
			Destruct<CUtlKeyValuePair<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(CUtlKeyValuePair<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >* pMemory); // 902
			CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >::IsValid(); // 899
			CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >::MarkInvalid(); // 901
		}
	}
	RemoveAll(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 188
	ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(void); // 508
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 17
	CAttributeContainer::~CAttributeContainer(); // 14
	CClassInfo::~CClassInfo(); // 61
} /* size: 401, inline expansions: 19 (1509 bytes) */

// <01313400> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<IAnimTagSpanContainer>::~CClassInfoT()
{
} /* size: 0 */

// <01311D10> ../public/tier0/reflection/classinfo.h:61
// variables: 10
// function calls: 34
void CClassInfoT<IEventAnimTag>::~CClassInfoT()
{
	RemoveAll(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 1798
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 903
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 560
	ValidateAlignment<Reflection::CClassInfo::BaseClassInfo_t>(void); // 508
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 510
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 410
	CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >::~CUtlVector(); // 14
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Count(); // 897
			{
				const int  __wordbits; // 330
				const int  __shiftbits; // 331
				const long long int  __unique_ref; // 332
				long long int* __both_counts; // 333
				__exchange_and_add_single(_Atomic_word* __mem,
								int __val);  // 101
				__is_single_threaded(void); // 100
				__exchange_and_add(volatile _Atomic_word* __mem,
							int __val);  // 103
				__exchange_and_add_dispatch(_Atomic_word* __mem,
								int __val);  // 349
			}
			{
				const int  __wordbits; // 330
				const int  __shiftbits; // 331
				const long long int  __unique_ref; // 332
				long long int* __both_counts; // 333
			}
			_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 316
			_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 1069
			__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count()2>* this); // 1531
			__shared_ptr<Reflection::CAttribute, (__gnu_cxx::_Lock_policy)2>::~__shared_ptr()2>* this); // 175
			shared_ptr<Reflection::CAttribute>::~shared_ptr(); // 51
			CUtlKeyValuePair<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >::~CUtlKeyValuePair(); // 1526
			Destruct<CUtlKeyValuePair<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(CUtlKeyValuePair<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >* pMemory); // 902
			CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >::IsValid(); // 899
			CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >::MarkInvalid(); // 901
		}
	}
	RemoveAll(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 188
	ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(void); // 508
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 17
	CAttributeContainer::~CAttributeContainer(); // 14
	CClassInfo::~CClassInfo(); // 61
} /* size: 401, inline expansions: 19 (1509 bytes) */

// <01311CF4> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<IEventAnimTag>::~CClassInfoT()
{
} /* size: 0 */

// <01311295> ../public/tier0/reflection/classinfo.h:61
// variables: 10
// function calls: 34
void CClassInfoT<CEventAnimTag>::~CClassInfoT()
{
	RemoveAll(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 1798
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 903
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 560
	ValidateAlignment<Reflection::CClassInfo::BaseClassInfo_t>(void); // 508
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 510
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 410
	CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >::~CUtlVector(); // 14
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Count(); // 897
			{
				const int  __wordbits; // 330
				const int  __shiftbits; // 331
				const long long int  __unique_ref; // 332
				long long int* __both_counts; // 333
				__exchange_and_add_single(_Atomic_word* __mem,
								int __val);  // 101
				__is_single_threaded(void); // 100
				__exchange_and_add(volatile _Atomic_word* __mem,
							int __val);  // 103
				__exchange_and_add_dispatch(_Atomic_word* __mem,
								int __val);  // 349
			}
			{
				const int  __wordbits; // 330
				const int  __shiftbits; // 331
				const long long int  __unique_ref; // 332
				long long int* __both_counts; // 333
			}
			_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 316
			_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 1069
			__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count()2>* this); // 1531
			__shared_ptr<Reflection::CAttribute, (__gnu_cxx::_Lock_policy)2>::~__shared_ptr()2>* this); // 175
			shared_ptr<Reflection::CAttribute>::~shared_ptr(); // 51
			CUtlKeyValuePair<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >::~CUtlKeyValuePair(); // 1526
			Destruct<CUtlKeyValuePair<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(CUtlKeyValuePair<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >* pMemory); // 902
			CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >::IsValid(); // 899
			CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >::MarkInvalid(); // 901
		}
	}
	RemoveAll(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 188
	ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(void); // 508
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 17
	CAttributeContainer::~CAttributeContainer(); // 14
	CClassInfo::~CClassInfo(); // 61
} /* size: 401, inline expansions: 19 (1509 bytes) */

// <01311279> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CEventAnimTag>::~CClassInfoT()
{
} /* size: 0 */

// <013102B3> ../public/tier0/reflection/classinfo.h:61
// variables: 10
// function calls: 34
void CClassInfoT<IStringAnimTag>::~CClassInfoT()
{
	RemoveAll(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 1798
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 903
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 560
	ValidateAlignment<Reflection::CClassInfo::BaseClassInfo_t>(void); // 508
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 510
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 410
	CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >::~CUtlVector(); // 14
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Count(); // 897
			{
				const int  __wordbits; // 330
				const int  __shiftbits; // 331
				const long long int  __unique_ref; // 332
				long long int* __both_counts; // 333
				__exchange_and_add_single(_Atomic_word* __mem,
								int __val);  // 101
				__is_single_threaded(void); // 100
				__exchange_and_add(volatile _Atomic_word* __mem,
							int __val);  // 103
				__exchange_and_add_dispatch(_Atomic_word* __mem,
								int __val);  // 349
			}
			{
				const int  __wordbits; // 330
				const int  __shiftbits; // 331
				const long long int  __unique_ref; // 332
				long long int* __both_counts; // 333
			}
			_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 316
			_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 1069
			__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count()2>* this); // 1531
			__shared_ptr<Reflection::CAttribute, (__gnu_cxx::_Lock_policy)2>::~__shared_ptr()2>* this); // 175
			shared_ptr<Reflection::CAttribute>::~shared_ptr(); // 51
			CUtlKeyValuePair<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >::~CUtlKeyValuePair(); // 1526
			Destruct<CUtlKeyValuePair<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(CUtlKeyValuePair<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >* pMemory); // 902
			CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >::IsValid(); // 899
			CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >::MarkInvalid(); // 901
		}
	}
	RemoveAll(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 188
	ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(void); // 508
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 17
	CAttributeContainer::~CAttributeContainer(); // 14
	CClassInfo::~CClassInfo(); // 61
} /* size: 401, inline expansions: 19 (1509 bytes) */

// <01310297> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<IStringAnimTag>::~CClassInfoT()
{
} /* size: 0 */

// <0130F838> ../public/tier0/reflection/classinfo.h:61
// variables: 10
// function calls: 34
void CClassInfoT<CStringAnimTag>::~CClassInfoT()
{
	RemoveAll(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 1798
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 903
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 560
	ValidateAlignment<Reflection::CClassInfo::BaseClassInfo_t>(void); // 508
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 510
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 410
	CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >::~CUtlVector(); // 14
	{
		entry_t* table; // 896
		CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Base(); // 896
		{
			int i; // 897
			CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Count(); // 897
			{
				const int  __wordbits; // 330
				const int  __shiftbits; // 331
				const long long int  __unique_ref; // 332
				long long int* __both_counts; // 333
				__exchange_and_add_single(_Atomic_word* __mem,
								int __val);  // 101
				__is_single_threaded(void); // 100
				__exchange_and_add(volatile _Atomic_word* __mem,
							int __val);  // 103
				__exchange_and_add_dispatch(_Atomic_word* __mem,
								int __val);  // 349
			}
			{
				const int  __wordbits; // 330
				const int  __shiftbits; // 331
				const long long int  __unique_ref; // 332
				long long int* __both_counts; // 333
			}
			_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 316
			_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release()2>* this); // 1069
			__shared_count<(__gnu_cxx::_Lock_policy)2>::~__shared_count()2>* this); // 1531
			__shared_ptr<Reflection::CAttribute, (__gnu_cxx::_Lock_policy)2>::~__shared_ptr()2>* this); // 175
			shared_ptr<Reflection::CAttribute>::~shared_ptr(); // 51
			CUtlKeyValuePair<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >::~CUtlKeyValuePair(); // 1526
			Destruct<CUtlKeyValuePair<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(CUtlKeyValuePair<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >* pMemory); // 902
			CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >::IsValid(); // 899
			CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >::MarkInvalid(); // 901
		}
	}
	RemoveAll(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 188
	ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(void); // 508
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 17
	CAttributeContainer::~CAttributeContainer(); // 14
	CClassInfo::~CClassInfo(); // 61
} /* size: 401, inline expansions: 19 (1509 bytes) */

// <0130F81C> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CStringAnimTag>::~CClassInfoT()
{
} /* size: 0 */

// <01295F18> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CSkeletalInputAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <01295EFC> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CSkeletalInputAnimNode>::~CClassInfoT()
{
} /* size: 0 */

// <01294DCC> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CSlowDownOnSlopesAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <01294DB0> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CSlowDownOnSlopesAnimNode>::~CClassInfoT()
{
} /* size: 0 */

// <0129294B> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<ISolveIKChainSettings>::~CClassInfoT()
{
} /* size: 19 */

// <0129292F> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<ISolveIKChainSettings>::~CClassInfoT()
{
} /* size: 0 */

// <0129258C> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<ISolveIKChainAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <01292570> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<ISolveIKChainAnimNode>::~CClassInfoT()
{
} /* size: 0 */

// <012921CC> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CSolveIKChainAnimNodeChainData>::~CClassInfoT()
{
} /* size: 19 */

// <01291E20> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CSolveIKChainAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <01291E04> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CSolveIKChainAnimNode>::~CClassInfoT()
{
} /* size: 0 */

// <0128FB04> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<ISolveIKChainAnimNodeInstance>::~CClassInfoT()
{
} /* size: 19 */

// <0128FAE8> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<ISolveIKChainAnimNodeInstance>::~CClassInfoT()
{
} /* size: 0 */

// <0128F744> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CSolveIKChainAnimNodeInstance>::~CClassInfoT()
{
} /* size: 19 */

// <0128F728> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CSolveIKChainAnimNodeInstance>::~CClassInfoT()
{
} /* size: 0 */

// <0128F0ED> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CSpeedScaleAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <0128F0D1> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CSpeedScaleAnimNode>::~CClassInfoT()
{
} /* size: 0 */

// <0128E5A7> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<IAnimStateMachine>::~CClassInfoT()
{
} /* size: 19 */

// <0128E58B> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<IAnimStateMachine>::~CClassInfoT()
{
} /* size: 0 */

// <0128E1FB> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CStateMachineAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <0128E1DF> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CStateMachineAnimNode>::~CClassInfoT()
{
} /* size: 0 */

// <01287AE6> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<IAnimStateMachineInstance>::~CClassInfoT()
{
} /* size: 19 */

// <01287ACA> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<IAnimStateMachineInstance>::~CClassInfoT()
{
} /* size: 0 */

// <01287726> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CStateMachineAnimNodeInstance>::~CClassInfoT()
{
} /* size: 19 */

// <0128770A> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CStateMachineAnimNodeInstance>::~CClassInfoT()
{
} /* size: 0 */

// <01286C66> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CStopAtGoalAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <01286C4A> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CStopAtGoalAnimNode>::~CClassInfoT()
{
} /* size: 0 */

// <01286182> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<ISubGraphAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <01286166> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<ISubGraphAnimNode>::~CClassInfoT()
{
} /* size: 0 */

// <01285DD6> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CSubGraphAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <01285DBA> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CSubGraphAnimNode>::~CClassInfoT()
{
} /* size: 0 */

// <0127CE37> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CSubtractAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <0127CE1B> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CSubtractAnimNode>::~CClassInfoT()
{
} /* size: 0 */

// <0127BEAE> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CTurnHelperAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <0127BE92> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CTurnHelperAnimNode>::~CClassInfoT()
{
} /* size: 0 */

// <0127B4D9> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CTwoBoneIKAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <0127B4BD> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CTwoBoneIKAnimNode>::~CClassInfoT()
{
} /* size: 0 */

// <01190084> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CFootStepTriggerAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <01190068> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CFootStepTriggerAnimNode>::~CClassInfoT()
{
} /* size: 0 */

// <0118E4DF> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<IGroupAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <0118E135> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CGroupAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <01188EB3> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CGroupInputAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <01188E97> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CGroupInputAnimNode>::~CClassInfoT()
{
} /* size: 0 */

// <01185DAB> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CGroupOutputAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <01185D8F> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CGroupOutputAnimNode>::~CClassInfoT()
{
} /* size: 0 */

// <01182E94> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CHitReactAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <01182E78> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CHitReactAnimNode>::~CClassInfoT()
{
} /* size: 0 */

// <011820A6> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CInputStreamAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <0118208A> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CInputStreamAnimNode>::~CClassInfoT()
{
} /* size: 0 */

// <01181A2E> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<IInputStreamAnimNodeInstance>::~CClassInfoT()
{
} /* size: 19 */

// <01181A12> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<IInputStreamAnimNodeInstance>::~CClassInfoT()
{
} /* size: 0 */

// <01181670> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CInputStreamAnimNodeInstance>::~CClassInfoT()
{
} /* size: 19 */

// <01181654> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CInputStreamAnimNodeInstance>::~CClassInfoT()
{
} /* size: 0 */

// <01180FF9> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CJiggleBoneAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <01180FDD> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CJiggleBoneAnimNode>::~CClassInfoT()
{
} /* size: 0 */

// <011801BA> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CLeanMatrixAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <0118019E> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CLeanMatrixAnimNode>::~CClassInfoT()
{
} /* size: 0 */

// <0117F082> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CLookAtAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <0117F066> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CLookAtAnimNode>::~CClassInfoT()
{
} /* size: 0 */

// <0117D648> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<IMotionMatchingAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <0117D62C> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<IMotionMatchingAnimNode>::~CClassInfoT()
{
} /* size: 0 */

// <0117D29E> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CMotionMatchingAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <0117D282> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CMotionMatchingAnimNode>::~CClassInfoT()
{
} /* size: 0 */

// <01172DEB> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<IMotionMatchingAnimNodeInstance>::~CClassInfoT()
{
} /* size: 19 */

// <01172DCF> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<IMotionMatchingAnimNodeInstance>::~CClassInfoT()
{
} /* size: 0 */

// <01172A2D> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CMotionMatchingAnimNodeInstance>::~CClassInfoT()
{
} /* size: 19 */

// <01172A11> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CMotionMatchingAnimNodeInstance>::~CClassInfoT()
{
} /* size: 0 */

// <01170AAA> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CMoverAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <01170A8E> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CMoverAnimNode>::~CClassInfoT()
{
} /* size: 0 */

// <01170089> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CPathHelperAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <0117006D> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CPathHelperAnimNode>::~CClassInfoT()
{
} /* size: 0 */

// <0116F788> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CRootAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <0116F76C> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CRootAnimNode>::~CClassInfoT()
{
} /* size: 0 */

// <0116EE2A> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<ISelectorAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <0116EE0E> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<ISelectorAnimNode>::~CClassInfoT()
{
} /* size: 0 */

// <0116EA80> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CSelectorAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <0116EA64> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CSelectorAnimNode>::~CClassInfoT()
{
} /* size: 0 */

// <0116C314> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<ISequenceAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <0116C2F8> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<ISequenceAnimNode>::~CClassInfoT()
{
} /* size: 0 */

// <0116BF55> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<ISequenceUser>::~CClassInfoT()
{
} /* size: 19 */

// <0116BF39> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<ISequenceUser>::~CClassInfoT()
{
} /* size: 0 */

// <0116BBAB> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CSequenceAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <0116BB8F> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CSequenceAnimNode>::~CClassInfoT()
{
} /* size: 0 */

// <011695DD> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<ISequenceAnimNodeInstance>::~CClassInfoT()
{
} /* size: 19 */

// <011695C1> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<ISequenceAnimNodeInstance>::~CClassInfoT()
{
} /* size: 0 */

// <0116921F> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CSequenceAnimNodeInstance>::~CClassInfoT()
{
} /* size: 19 */

// <01169203> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CSequenceAnimNodeInstance>::~CClassInfoT()
{
} /* size: 0 */

// <01168C7F> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CSetFacingAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <01168C63> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CSetFacingAnimNode>::~CClassInfoT()
{
} /* size: 0 */

// <01167D7C> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<ISingleFrameAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <01167D60> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<ISingleFrameAnimNode>::~CClassInfoT()
{
} /* size: 0 */

// <011679D2> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CSingleFrameAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <011679B6> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CSingleFrameAnimNode>::~CClassInfoT()
{
} /* size: 0 */

// <0108D0FB> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CAddAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <0108D0DF> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CAddAnimNode>::~CClassInfoT()
{
} /* size: 0 */

// <0108BDBF> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CAimMatrixAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <0108BDA3> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CAimMatrixAnimNode>::~CClassInfoT()
{
} /* size: 0 */

// <01089E9E> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<IAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <01089E82> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<IAnimNode>::~CClassInfoT()
{
} /* size: 0 */

// <01089ADF> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CAnimNodeBase>::~CClassInfoT()
{
} /* size: 19 */

// <01089AC3> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CAnimNodeBase>::~CClassInfoT()
{
} /* size: 0 */

// <0108741A> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<IAnimNodeInstance>::~CClassInfoT()
{
} /* size: 19 */

// <010873FE> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<IAnimNodeInstance>::~CClassInfoT()
{
} /* size: 0 */

// <0108705B> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CAnimNodeInstanceBase>::~CClassInfoT()
{
} /* size: 19 */

// <0108703F> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CAnimNodeInstanceBase>::~CClassInfoT()
{
} /* size: 0 */

// <01084E97> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<IBlend2DItem>::~CClassInfoT()
{
} /* size: 19 */

// <01084E7B> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<IBlend2DItem>::~CClassInfoT()
{
} /* size: 0 */

// <01084AD8> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<IBlend2DAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <01084ABC> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<IBlend2DAnimNode>::~CClassInfoT()
{
} /* size: 0 */

// <0108471A> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CBlend2DItem>::~CClassInfoT()
{
} /* size: 19 */

// <010846FE> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CBlend2DItem>::~CClassInfoT()
{
} /* size: 0 */

// <01084354> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CBlend2DAnimNode>::~CClassInfoT()
{
} /* size: 0 */

// <0107EB21> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<IBlend2DAnimNodeInstance>::~CClassInfoT()
{
} /* size: 19 */

// <0107EB05> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<IBlend2DAnimNodeInstance>::~CClassInfoT()
{
} /* size: 0 */

// <0107E763> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CBlend2DAnimNodeInstance>::~CClassInfoT()
{
} /* size: 19 */

// <0107E747> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CBlend2DAnimNodeInstance>::~CClassInfoT()
{
} /* size: 0 */

// <0107D221> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<IBlendAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <0107D205> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<IBlendAnimNode>::~CClassInfoT()
{
} /* size: 0 */

// <0107CE77> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CBlendAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <0107CE5B> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CBlendAnimNode>::~CClassInfoT()
{
} /* size: 0 */

// <0107938E> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CBoneMaskAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <01079372> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CBoneMaskAnimNode>::~CClassInfoT()
{
} /* size: 0 */

// <01078004> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<IChoiceAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <01077FE8> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<IChoiceAnimNode>::~CClassInfoT()
{
} /* size: 0 */

// <01077C5A> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CChoiceAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <01077C3E> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CChoiceAnimNode>::~CClassInfoT()
{
} /* size: 0 */

// <010748D1> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CChoreoAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <010748B5> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CChoreoAnimNode>::~CClassInfoT()
{
} /* size: 0 */

// <01073C5C> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<IChoreoAnimNodeInstance>::~CClassInfoT()
{
} /* size: 19 */

// <01073C40> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<IChoreoAnimNodeInstance>::~CClassInfoT()
{
} /* size: 0 */

// <0107389E> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CChoreoAnimNodeInstance>::~CClassInfoT()
{
} /* size: 19 */

// <01073882> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CChoreoAnimNodeInstance>::~CClassInfoT()
{
} /* size: 0 */

// <010729FA> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<ICommentAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <01072650> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CCommentAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <01072634> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CCommentAnimNode>::~CClassInfoT()
{
} /* size: 0 */

// <01071CB9> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CCycleControlAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <0107107F> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CDirectionalBlendAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <01071063> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CDirectionalBlendAnimNode>::~CClassInfoT()
{
} /* size: 0 */

// <01070371> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CDirectPlaybackAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <01070355> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CDirectPlaybackAnimNode>::~CClassInfoT()
{
} /* size: 0 */

// <0106F9CD> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<IDirectPlaybackAnimNodeInstance>::~CClassInfoT()
{
} /* size: 0 */

// <0106F62B> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CDirectPlaybackAnimNodeInstance>::~CClassInfoT()
{
} /* size: 19 */

// <0106F60F> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CDirectPlaybackAnimNodeInstance>::~CClassInfoT()
{
} /* size: 0 */

// <0106E901> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CFollowAttachmentAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <0106E8E5> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CFollowAttachmentAnimNode>::~CClassInfoT()
{
} /* size: 0 */

// <0106D79C> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CFollowPathAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <0106D780> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CFollowPathAnimNode>::~CClassInfoT()
{
} /* size: 0 */

// <0106A0FD> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CFootLockAnimNode>::~CClassInfoT()
{
} /* size: 19 */

// <0106A0E1> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CFootLockAnimNode>::~CClassInfoT()
{
} /* size: 0 */

// <01066B38> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<IFootLockAnimNodeInstance>::~CClassInfoT()
{
} /* size: 19 */

// <01066B1C> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<IFootLockAnimNodeInstance>::~CClassInfoT()
{
} /* size: 0 */

// <0106677A> ../public/tier0/reflection/classinfo.h:61
void CClassInfoT<CFootLockAnimNodeInstance>::~CClassInfoT()
{
} /* size: 19 */

// <0106675E> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CFootLockAnimNodeInstance>::~CClassInfoT()
{
} /* size: 0 */

// <00F8A1C4> ../public/tier0/reflection/classinfo.h:61
// function calls: 18
void CClassInfoT<IAnimNodeManager>::~CClassInfoT()
{
	RemoveAll(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 1798
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 903
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 560
	ValidateAlignment<Reflection::CClassInfo::BaseClassInfo_t>(void); // 508
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 510
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 410
	CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >::~CUtlVector(); // 14
	ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(void); // 508
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 17
	CAttributeContainer::~CAttributeContainer(); // 14
	CClassInfo::~CClassInfo(); // 61
} /* size: 118, inline expansions: 18 (364 bytes) */

// <00F8A1A8> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<IAnimNodeManager>::~CClassInfoT()
{
} /* size: 0 */

// <00F89B02> ../public/tier0/reflection/classinfo.h:61
// function calls: 18
void CClassInfoT<CAnimNodeManager>::~CClassInfoT()
{
	RemoveAll(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 1798
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 903
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 560
	ValidateAlignment<Reflection::CClassInfo::BaseClassInfo_t>(void); // 508
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 510
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 410
	CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >::~CUtlVector(); // 14
	ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(void); // 508
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 17
	CAttributeContainer::~CAttributeContainer(); // 14
	CClassInfo::~CClassInfo(); // 61
} /* size: 118, inline expansions: 18 (364 bytes) */

// <00F89AE6> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CAnimNodeManager>::~CClassInfoT()
{
} /* size: 0 */

// <00F7B45C> ../public/tier0/reflection/classinfo.h:61
// function calls: 18
void CClassInfoT<IAnimParameterInstance>::~CClassInfoT()
{
	RemoveAll(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 1798
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 903
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 560
	ValidateAlignment<Reflection::CClassInfo::BaseClassInfo_t>(void); // 508
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 510
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 410
	CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >::~CUtlVector(); // 14
	ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(void); // 508
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 17
	CAttributeContainer::~CAttributeContainer(); // 14
	CClassInfo::~CClassInfo(); // 61
} /* size: 118, inline expansions: 18 (364 bytes) */

// <00F7B440> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<IAnimParameterInstance>::~CClassInfoT()
{
} /* size: 0 */

// <00F7AD99> ../public/tier0/reflection/classinfo.h:61
// function calls: 18
void CClassInfoT<IEnumAnimParameterInstance>::~CClassInfoT()
{
	RemoveAll(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 1798
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 903
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 560
	ValidateAlignment<Reflection::CClassInfo::BaseClassInfo_t>(void); // 508
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 510
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 410
	CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >::~CUtlVector(); // 14
	ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(void); // 508
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 17
	CAttributeContainer::~CAttributeContainer(); // 14
	CClassInfo::~CClassInfo(); // 61
} /* size: 118, inline expansions: 18 (364 bytes) */

// <00F7AD7D> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<IEnumAnimParameterInstance>::~CClassInfoT()
{
} /* size: 0 */

// <00F7A6D7> ../public/tier0/reflection/classinfo.h:61
// function calls: 18
void CClassInfoT<CEnumAnimParameterInstance>::~CClassInfoT()
{
	RemoveAll(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 1798
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 903
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 560
	ValidateAlignment<Reflection::CClassInfo::BaseClassInfo_t>(void); // 508
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 510
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 410
	CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >::~CUtlVector(); // 14
	ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(void); // 508
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 17
	CAttributeContainer::~CAttributeContainer(); // 14
	CClassInfo::~CClassInfo(); // 61
} /* size: 118, inline expansions: 18 (364 bytes) */

// <00F7A6BB> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CEnumAnimParameterInstance>::~CClassInfoT()
{
} /* size: 0 */

// <00F7A02B> ../public/tier0/reflection/classinfo.h:61
// function calls: 18
void CClassInfoT<CAnimParameterInstance>::~CClassInfoT()
{
	RemoveAll(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 1798
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 903
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 560
	ValidateAlignment<Reflection::CClassInfo::BaseClassInfo_t>(void); // 508
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 510
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 410
	CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >::~CUtlVector(); // 14
	ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(void); // 508
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 17
	CAttributeContainer::~CAttributeContainer(); // 14
	CClassInfo::~CClassInfo(); // 61
} /* size: 118, inline expansions: 18 (364 bytes) */

// <00F7A00F> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CAnimParameterInstance>::~CClassInfoT()
{
} /* size: 0 */

// <00F71491> ../public/tier0/reflection/classinfo.h:61
// function calls: 18
void CClassInfoT<IAnimClipProperties>::~CClassInfoT()
{
	RemoveAll(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 1798
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 903
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 560
	ValidateAlignment<Reflection::CClassInfo::BaseClassInfo_t>(void); // 508
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 510
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 410
	CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >::~CUtlVector(); // 14
	ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(void); // 508
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 17
	CAttributeContainer::~CAttributeContainer(); // 14
	CClassInfo::~CClassInfo(); // 61
} /* size: 118, inline expansions: 18 (364 bytes) */

// <00F71475> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<IAnimClipProperties>::~CClassInfoT()
{
} /* size: 0 */

// <00F70DCF> ../public/tier0/reflection/classinfo.h:61
// function calls: 18
void CClassInfoT<CClipProperties>::~CClassInfoT()
{
	RemoveAll(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 1798
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 903
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 560
	ValidateAlignment<Reflection::CClassInfo::BaseClassInfo_t>(void); // 508
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 510
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 410
	CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >::~CUtlVector(); // 14
	ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(void); // 508
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 17
	CAttributeContainer::~CAttributeContainer(); // 14
	CClassInfo::~CClassInfo(); // 61
} /* size: 118, inline expansions: 18 (364 bytes) */

// <00F70DB3> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CClipProperties>::~CClassInfoT()
{
} /* size: 0 */

// <00E7D3FD> ../public/tier0/reflection/classinfo.h:61
// function calls: 18
void CClassInfoT<IAnimationGraph>::~CClassInfoT()
{
	RemoveAll(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 1798
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 903
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 560
	ValidateAlignment<Reflection::CClassInfo::BaseClassInfo_t>(void); // 508
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 510
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 410
	CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >::~CUtlVector(); // 14
	ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(void); // 508
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 17
	CAttributeContainer::~CAttributeContainer(); // 14
	CClassInfo::~CClassInfo(); // 61
} /* size: 118, inline expansions: 18 (364 bytes) */

// <00E7D3E1> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<IAnimationGraph>::~CClassInfoT()
{
} /* size: 0 */

// <00E7CD3B> ../public/tier0/reflection/classinfo.h:61
// function calls: 18
void CClassInfoT<IAnimationGraphBuilder>::~CClassInfoT()
{
	RemoveAll(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 1798
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 903
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 560
	ValidateAlignment<Reflection::CClassInfo::BaseClassInfo_t>(void); // 508
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 510
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 410
	CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >::~CUtlVector(); // 14
	ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(void); // 508
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 17
	CAttributeContainer::~CAttributeContainer(); // 14
	CClassInfo::~CClassInfo(); // 61
} /* size: 118, inline expansions: 18 (364 bytes) */

// <00E7CD1F> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<IAnimationGraphBuilder>::~CClassInfoT()
{
} /* size: 0 */

// <00E7C678> ../public/tier0/reflection/classinfo.h:61
// function calls: 18
void CClassInfoT<CAnimationGraph>::~CClassInfoT()
{
	RemoveAll(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 1798
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 903
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 560
	ValidateAlignment<Reflection::CClassInfo::BaseClassInfo_t>(void); // 508
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 510
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 410
	CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >::~CUtlVector(); // 14
	ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(void); // 508
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 17
	CAttributeContainer::~CAttributeContainer(); // 14
	CClassInfo::~CClassInfo(); // 61
} /* size: 118, inline expansions: 18 (364 bytes) */

// <00E7C65C> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CAnimationGraph>::~CClassInfoT()
{
} /* size: 0 */

// <00E737DA> ../public/tier0/reflection/classinfo.h:61
// function calls: 18
void CClassInfoT<IAnimationGraphInstance>::~CClassInfoT()
{
	RemoveAll(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 1798
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 903
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 560
	ValidateAlignment<Reflection::CClassInfo::BaseClassInfo_t>(void); // 508
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 510
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 410
	CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >::~CUtlVector(); // 14
	ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(void); // 508
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 17
	CAttributeContainer::~CAttributeContainer(); // 14
	CClassInfo::~CClassInfo(); // 61
} /* size: 118, inline expansions: 18 (364 bytes) */

// <00E73117> ../public/tier0/reflection/classinfo.h:61
// function calls: 18
void CClassInfoT<CAnimationGraphInstance>::~CClassInfoT()
{
	RemoveAll(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 1798
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 903
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 560
	ValidateAlignment<Reflection::CClassInfo::BaseClassInfo_t>(void); // 508
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 510
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 410
	CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >::~CUtlVector(); // 14
	ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(void); // 508
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 17
	CAttributeContainer::~CAttributeContainer(); // 14
	CClassInfo::~CClassInfo(); // 61
} /* size: 118, inline expansions: 18 (364 bytes) */

// <00E730FB> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CAnimationGraphInstance>::~CClassInfoT()
{
} /* size: 0 */

// <00E4F7A4> ../public/tier0/reflection/classinfo.h:61
// function calls: 18
void CClassInfoT<IAnimationSubGraph>::~CClassInfoT()
{
	RemoveAll(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 1798
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 903
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 560
	ValidateAlignment<Reflection::CClassInfo::BaseClassInfo_t>(void); // 508
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 510
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 410
	CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >::~CUtlVector(); // 14
	ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(void); // 508
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 17
	CAttributeContainer::~CAttributeContainer(); // 14
	CClassInfo::~CClassInfo(); // 61
} /* size: 118, inline expansions: 18 (364 bytes) */

// <00E4F0E1> ../public/tier0/reflection/classinfo.h:61
// function calls: 18
void CClassInfoT<CAnimationSubGraph>::~CClassInfoT()
{
	RemoveAll(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 1798
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 903
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 560
	ValidateAlignment<Reflection::CClassInfo::BaseClassInfo_t>(void); // 508
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 510
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 410
	CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >::~CUtlVector(); // 14
	ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(void); // 508
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 17
	CAttributeContainer::~CAttributeContainer(); // 14
	CClassInfo::~CClassInfo(); // 61
} /* size: 118, inline expansions: 18 (364 bytes) */

// <00E4F0C5> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CAnimationSubGraph>::~CClassInfoT()
{
} /* size: 0 */

// <00E38D8A> ../public/tier0/reflection/classinfo.h:61
// function calls: 18
void CClassInfoT<IAnimGraphSettingsGroup>::~CClassInfoT()
{
	RemoveAll(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 1798
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 903
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 560
	ValidateAlignment<Reflection::CClassInfo::BaseClassInfo_t>(void); // 508
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 510
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 410
	CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >::~CUtlVector(); // 14
	ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(void); // 508
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 17
	CAttributeContainer::~CAttributeContainer(); // 14
	CClassInfo::~CClassInfo(); // 61
} /* size: 118, inline expansions: 18 (364 bytes) */

// <00E386C8> ../public/tier0/reflection/classinfo.h:61
// function calls: 18
void CClassInfoT<CAnimGraphSettingsGroup>::~CClassInfoT()
{
	RemoveAll(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 1798
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 903
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 560
	ValidateAlignment<Reflection::CClassInfo::BaseClassInfo_t>(void); // 508
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 510
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 410
	CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >::~CUtlVector(); // 14
	ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(void); // 508
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 17
	CAttributeContainer::~CAttributeContainer(); // 14
	CClassInfo::~CClassInfo(); // 61
} /* size: 118, inline expansions: 18 (364 bytes) */

// <00E386AC> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CAnimGraphSettingsGroup>::~CClassInfoT()
{
} /* size: 0 */

// <00E38005> ../public/tier0/reflection/classinfo.h:61
// function calls: 18
void CClassInfoT<CAnimGraphGeneralSettings>::~CClassInfoT()
{
	RemoveAll(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 1798
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 903
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 560
	ValidateAlignment<Reflection::CClassInfo::BaseClassInfo_t>(void); // 508
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 510
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 410
	CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >::~CUtlVector(); // 14
	ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(void); // 508
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 17
	CAttributeContainer::~CAttributeContainer(); // 14
	CClassInfo::~CClassInfo(); // 61
} /* size: 118, inline expansions: 18 (364 bytes) */

// <00E37FE9> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CAnimGraphGeneralSettings>::~CClassInfoT()
{
} /* size: 0 */

// <00E37942> ../public/tier0/reflection/classinfo.h:61
// function calls: 18
void CClassInfoT<CAnimGraphNetworkSettings>::~CClassInfoT()
{
	RemoveAll(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 1798
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::IsExternallyAllocated(); // 905
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 903
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 1799
	Purge(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 560
	ValidateAlignment<Reflection::CClassInfo::BaseClassInfo_t>(void); // 508
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Purge(); // 510
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::~CUtlMemory(); // 562
	~CUtlVectorBase(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 410
	CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >::~CUtlVector(); // 14
	ValidateAlignment<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> > >(void); // 508
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::IsExternallyAllocated(); // 905
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 903
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::Purge(); // 510
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::~CUtlMemory(); // 188
	~CUtlHashtable(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 17
	CAttributeContainer::~CAttributeContainer(); // 14
	CClassInfo::~CClassInfo(); // 61
} /* size: 118, inline expansions: 18 (364 bytes) */

// <00E37926> ../public/tier0/reflection/classinfo.h:61
inline void CClassInfoT<CAnimGraphNetworkSettings>::~CClassInfoT()
{
} /* size: 0 */

// <01C568CF> ../public/tier0/reflection/classinfo.h:66
inline void CreateTypeInfo(const char* name)
{
} /* size: 0 */

// <01C56398> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<Reflection::CAttribute>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01C56373> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<Reflection::CAttribute>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01C376B5> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<Reflection::Object>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01C37690> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<Reflection::Object>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01C29804> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<Attribute::Color>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01C297DF> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<Attribute::Color>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01C29746> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<Attribute::Deprecated>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01C29721> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<Attribute::Deprecated>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01C29705> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<Attribute::Description>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01C296E0> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<Attribute::Description>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01C296C4> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<Attribute::FriendlyName>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01C2969F> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<Attribute::FriendlyName>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01C29683> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<Attribute::Group>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01C2965E> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<Attribute::Group>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01C29642> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<Attribute::Icon>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01C2961D> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<Attribute::Icon>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01A6A961> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<IAnimStateCondition>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01A6A93C> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<IAnimStateCondition>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01A6A8ED> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CAnimStateConditionBase>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01A6A8C8> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CAnimStateConditionBase>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01A6A82E> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CControlValueCondition>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01A6A809> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CControlValueCondition>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01A6A0A1> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CCycleCondition>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01A6A07C> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CCycleCondition>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01A69FB9> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CFinishedCondition>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01A69F94> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CFinishedCondition>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01A69EEE> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CGroundCondition>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01A69EC9> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CGroundCondition>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01A69E4E> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CParameterAnimCondition>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01A69E29> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CParameterAnimCondition>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01A69D5D> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CPathStatusCondition>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01A69D38> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CPathStatusCondition>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01A69CBD> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CTagCondition>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01A69C98> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CTagCondition>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01A69C1D> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CTimeCondition>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01A69BF8> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CTimeCondition>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <019F02F2> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<IAnimState>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <019F02CD> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<IAnimState>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <019F027E> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CAnimState>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <019F0259> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CAnimState>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <019EF93D> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<IAnimStateTransition>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <019EF918> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<IAnimStateTransition>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <019EF8FC> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CAnimStateTransition>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <019EF8D7> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CAnimStateTransition>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <014BAD4D> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<IAnimParameter>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <014BAD28> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<IAnimParameter>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <014BAC90> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CAnimParameterBase>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <014BAC6B> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CAnimParameterBase>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <014BAC4F> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CBoolAnimParameter>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <014BAC2A> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CBoolAnimParameter>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <014BA4E1> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<IEnumAnimParameter>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <014BA4BC> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<IEnumAnimParameter>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <014BA4A0> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CEnumAnimParameter>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <014BA47B> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CEnumAnimParameter>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <014BA397> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CFloatAnimParameter>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <014BA372> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CFloatAnimParameter>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <014BA2F7> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CIntAnimParameter>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <014BA2D2> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CIntAnimParameter>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <014BA257> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CQuaternionAnimParameter>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <014BA232> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CQuaternionAnimParameter>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <014BA1B7> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CVectorAnimParameter>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <014BA192> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CVectorAnimParameter>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0146707B> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<IAnimMotor>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01467056> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<IAnimMotor>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01466FBE> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CAnimMotorBase>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01466F99> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CAnimMotorBase>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01466E61> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CAnimMotorInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01466E3C> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CAnimMotorInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01466944> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CDampedPathAnimMotor>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0146691F> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CDampedPathAnimMotor>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <014666B8> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CPathAnimMotor>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01466693> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CPathAnimMotor>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01466618> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CPathAnimMotorBase>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <014665F3> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CPathAnimMotorBase>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <014665D7> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CPlayerInputAnimMotor>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <014665B2> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CPlayerInputAnimMotor>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01466537> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<IPlayerInputAnimMotorInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01466512> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<IPlayerInputAnimMotorInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <014664F6> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CPlayerInputAnimMotorInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <014664D1> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CPlayerInputAnimMotorInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <013F34BF> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CBonePositionMetric>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <013F349A> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CBonePositionMetric>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <013F2D9B> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CBoneVelocityMetric>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <013F2D76> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CBoneVelocityMetric>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <013F2CFB> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CCurrentVelocityMetric>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <013F2CD6> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CCurrentVelocityMetric>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <013F2C5B> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CDistanceRemainingMetric>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <013F2C36> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CDistanceRemainingMetric>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <013F2BBB> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CFootCycleMetric>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <013F2B96> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CFootCycleMetric>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <013F2A8A> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CFootPositionMetric>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <013F2A65> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CFootPositionMetric>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <013F29EA> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<IFootPositionMetricInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <013F29C5> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<IFootPositionMetricInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <013F29A9> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CFootPositionMetricInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <013F2984> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CFootPositionMetricInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <013F23FF> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CFutureFacingMetric>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <013F23DA> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CFutureFacingMetric>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <013F235F> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<IFutureFacingMetricInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <013F233A> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<IFutureFacingMetricInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <013F231E> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CFutureFacingMetricInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <013F22F9> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CFutureFacingMetricInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <013F2271> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CFutureVelocityMetric>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <013F224C> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CFutureVelocityMetric>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <013F21D1> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<IFutureVelocityMetricInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <013F21AC> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<IFutureVelocityMetricInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <013F2190> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CFutureVelocityMetricInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <013F216B> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CFutureVelocityMetricInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <013F20E3> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<IMotionMetric>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <013F20BE> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<IMotionMetric>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <013F20A2> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CMotionMetricBase>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <013F207D> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CMotionMetricBase>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <013F10C1> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<IMotionMetricInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <013F109C> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<IMotionMetricInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <013F1080> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CMotionMetricInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <013F105B> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CMotionMetricInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <013F0FC1> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CPathMetric>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <013F0F46> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<IPathMetricInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <013F0F21> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<IPathMetricInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <013F0F05> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CPathMetricInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <013F0EE0> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CPathMetricInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <013F0E58> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CStepsRemainingMetric>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <013F0E33> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CStepsRemainingMetric>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <013F0DB8> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CTimeRemainingMetric>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <013F0D93> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CTimeRemainingMetric>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0134F66B> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<IMotionClip>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0134F646> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<IMotionClip>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0134F5AE> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CMotionClip>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0134F589> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CMotionClip>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0134F2D0> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<IMotionClipGroup>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0134F2AB> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<IMotionClipGroup>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0134F28F> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CMotionClipGroup>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0134F26A> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CMotionClipGroup>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0130B90F> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<IAnimTag>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0130B8EA> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<IAnimTag>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0130B852> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CAnimTagBase>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0130B82D> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CAnimTagBase>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0130A7B8> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<IAnimTagSpanContainer>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0130A793> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<IAnimTagSpanContainer>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0130A733> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<IEventAnimTag>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0130A70E> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<IEventAnimTag>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0130A6F2> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CEventAnimTag>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0130A6CD> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CEventAnimTag>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0130A3EB> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<IStringAnimTag>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0130A3C6> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<IStringAnimTag>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0130A3AA> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CStringAnimTag>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0130A385> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CStringAnimTag>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0126BF8C> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CSkeletalInputAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0126BF67> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CSkeletalInputAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0126B633> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CSlowDownOnSlopesAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0126B60E> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CSlowDownOnSlopesAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0126B445> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<ISolveIKChainSettings>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0126B420> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<ISolveIKChainSettings>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0126B404> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<ISolveIKChainAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0126B3DF> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<ISolveIKChainAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0126B3C3> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CSolveIKChainAnimNodeChainData>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0126B39E> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CSolveIKChainAnimNodeChainData>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0126B382> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CSolveIKChainAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0126B35D> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CSolveIKChainAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0126B07D> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<ISolveIKChainAnimNodeInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0126B058> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<ISolveIKChainAnimNodeInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0126B03C> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CSolveIKChainAnimNodeInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0126B017> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CSolveIKChainAnimNodeInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0126AFBF> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CSpeedScaleAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0126AF9A> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CSpeedScaleAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0126AEED> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<IAnimStateMachine>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0126AEC8> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<IAnimStateMachine>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0126AEAC> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CStateMachineAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0126AE87> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CStateMachineAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0126A708> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<IAnimStateMachineInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0126A6E3> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<IAnimStateMachineInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0126A6C7> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CStateMachineAnimNodeInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0126A6A2> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CStateMachineAnimNodeInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0126A622> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CStopAtGoalAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0126A5FD> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CStopAtGoalAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0126A582> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<ISubGraphAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0126A55D> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<ISubGraphAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0126A541> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CSubGraphAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0126A51C> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CSubGraphAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0126898A> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CSubtractAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01268965> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CSubtractAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <012688EA> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CTurnHelperAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <012688C5> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CTurnHelperAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0126884A> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CTwoBoneIKAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01268825> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CTwoBoneIKAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01158E5E> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CFootStepTriggerAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01158E39> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CFootStepTriggerAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01156E7C> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CGroupInputAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01156E57> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CGroupInputAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01156B0E> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CGroupOutputAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01156AE9> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CGroupOutputAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01156A2F> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CHitReactAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01156A0A> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CHitReactAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0115698F> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CInputStreamAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0115696A> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CInputStreamAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <011568EF> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<IInputStreamAnimNodeInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <011568CA> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<IInputStreamAnimNodeInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <011568AE> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CInputStreamAnimNodeInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01156889> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CInputStreamAnimNodeInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01156831> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CJiggleBoneAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0115680C> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CJiggleBoneAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0115658B> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CLeanMatrixAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01156566> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CLeanMatrixAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <011564EB> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CLookAtAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <011564C6> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CLookAtAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <011562F8> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<IMotionMatchingAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <011562D3> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<IMotionMatchingAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <011562B7> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CMotionMatchingAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01156292> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CMotionMatchingAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <011553D6> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<IMotionMatchingAnimNodeInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <011553B1> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<IMotionMatchingAnimNodeInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01155395> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CMotionMatchingAnimNodeInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01155370> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CMotionMatchingAnimNodeInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01155031> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CMoverAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0115500C> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CMoverAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01154F91> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CPathHelperAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01154F6C> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CPathHelperAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01154EF1> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CRootAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01154ECC> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CRootAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01154E51> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<ISelectorAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01154E2C> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<ISelectorAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01154E10> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CSelectorAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01154DEB> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CSelectorAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01154B0D> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<ISequenceAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01154AE8> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<ISequenceAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01154ACC> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<ISequenceUser>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01154AA7> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<ISequenceUser>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01154A8B> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CSequenceAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01154A66> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CSequenceAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01154792> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<ISequenceAnimNodeInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0115476D> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<ISequenceAnimNodeInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01154751> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CSequenceAnimNodeInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0115472C> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CSequenceAnimNodeInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01154710> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CSetFacingAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <011546EB> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CSetFacingAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01154670> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<ISingleFrameAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0115464B> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<ISingleFrameAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0115462F> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CSingleFrameAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0115460A> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CSingleFrameAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105F82A> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CAddAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105F805> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CAddAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105EEC7> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CAimMatrixAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105EEA2> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CAimMatrixAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105ED66> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<IAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105ED41> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<IAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105ED25> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CAnimNodeBase>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105EC46> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<IAnimNodeInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105EC21> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<IAnimNodeInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105EC05> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CAnimNodeInstanceBase>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105EBE0> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CAnimNodeInstanceBase>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105EA7A> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<IBlend2DItem>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105EA5E> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<IBlend2DAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105EA39> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<IBlend2DAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105EA1D> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CBlend2DItem>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105E9F8> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CBlend2DItem>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105E9DC> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CBlend2DAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105D927> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<IBlend2DAnimNodeInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105D902> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<IBlend2DAnimNodeInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105D8E6> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CBlend2DAnimNodeInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105D8C1> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CBlend2DAnimNodeInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105D8A5> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<IBlendAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105D880> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<IBlendAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105D83F> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CBlendAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105D409> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CBoneMaskAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105D3E4> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CBoneMaskAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105D369> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<IChoiceAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105D344> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<IChoiceAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105D328> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CChoiceAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105D303> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CChoiceAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105CFF9> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CChoreoAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105CFD4> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CChoreoAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105CF59> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<IChoreoAnimNodeInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105CF34> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<IChoreoAnimNodeInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105CF18> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CChoreoAnimNodeInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105CEF3> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CChoreoAnimNodeInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105CE96> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CCommentAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105CE71> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CCommentAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105CD56> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CDirectionalBlendAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105CD31> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CDirectionalBlendAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105CCB6> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CDirectPlaybackAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105CC91> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CDirectPlaybackAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105CBF1> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<IDirectPlaybackAnimNodeInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105CBB0> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CDirectPlaybackAnimNodeInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105CB94> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CFollowAttachmentAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105CB6F> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CFollowAttachmentAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105CAF4> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CFollowPathAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105CACF> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CFollowPathAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105C2E0> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CFootLockAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105C2BB> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CFootLockAnimNode>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105C0A3> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<IFootLockAnimNodeInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105C07E> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<IFootLockAnimNodeInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <0105C062> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CFootLockAnimNodeInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <00F53620> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<IAnimNodeManager>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <00F535FB> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<IAnimNodeManager>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <00F535DF> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CAnimNodeManager>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <00F535BA> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CAnimNodeManager>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <00F50D02> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<IAnimParameterInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <00F50CDD> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<IAnimParameterInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <00F50C8E> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<IEnumAnimParameterInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <00F50C69> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<IEnumAnimParameterInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <00F50C28> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CEnumAnimParameterInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <00F50C0C> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CAnimParameterInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <00F50BE7> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CAnimParameterInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <00F4FC9D> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<IAnimClipProperties>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <00F4FC78> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<IAnimClipProperties>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <00F4FC5C> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CClipProperties>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <00F4FC37> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CClipProperties>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <00E132E4> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<IAnimationGraph>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <00E132BF> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<IAnimationGraph>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <00E13270> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<IAnimationGraphBuilder>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <00E1324B> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<IAnimationGraphBuilder>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <00E1322F> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CAnimationGraph>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <00E1320A> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CAnimationGraph>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <00E126BC> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CAnimationGraphInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <00E12697> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CAnimationGraphInstance>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <00E0F006> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<IAnimationSubGraph>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <00E0EFC5> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CAnimationSubGraph>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <00E0EFA0> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CAnimationSubGraph>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <00E0D6D8> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<IAnimGraphSettingsGroup>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <00E0D6B3> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<IAnimGraphSettingsGroup>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <00E0D697> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CAnimGraphSettingsGroup>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <00E0D672> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CAnimGraphSettingsGroup>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <00E0D656> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CAnimGraphGeneralSettings>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <00E0D615> ../public/tier0/reflection/classinfo.h:68
void CClassInfoT<CAnimGraphNetworkSettings>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <00E0D5F0> ../public/tier0/reflection/classinfo.h:68
inline void CClassInfoT<CAnimGraphNetworkSettings>::CClassInfoT(const char* typeName)
{
} /* size: 0 */

// <01C56839> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<Reflection::CAttribute>::CClassInfoT(const CClassInfoT<Reflection::CAttribute>& rhs)
{
} /* size: 0 */

// <01C56814> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<Reflection::CAttribute>::CClassInfoT(const CClassInfoT<Reflection::CAttribute>& rhs)
{
} /* size: 0 */

// <01C2A437> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<Attribute::Color>::CClassInfoT(const CClassInfoT<Attribute::Color>& rhs)
{
} /* size: 0 */

// <01C2A412> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<Attribute::Color>::CClassInfoT(const CClassInfoT<Attribute::Color>& rhs)
{
} /* size: 0 */

// <01C2A2DB> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<Attribute::Deprecated>::CClassInfoT(const CClassInfoT<Attribute::Deprecated>& rhs)
{
} /* size: 0 */

// <01C2A2B6> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<Attribute::Deprecated>::CClassInfoT(const CClassInfoT<Attribute::Deprecated>& rhs)
{
} /* size: 0 */

// <01C2A17F> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<Attribute::Description>::CClassInfoT(const CClassInfoT<Attribute::Description>& rhs)
{
} /* size: 0 */

// <01C2A15A> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<Attribute::Description>::CClassInfoT(const CClassInfoT<Attribute::Description>& rhs)
{
} /* size: 0 */

// <01C2A023> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<Attribute::FriendlyName>::CClassInfoT(const CClassInfoT<Attribute::FriendlyName>& rhs)
{
} /* size: 0 */

// <01C29FFE> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<Attribute::FriendlyName>::CClassInfoT(const CClassInfoT<Attribute::FriendlyName>& rhs)
{
} /* size: 0 */

// <01C29EC7> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<Attribute::Group>::CClassInfoT(const CClassInfoT<Attribute::Group>& rhs)
{
} /* size: 0 */

// <01C29EA2> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<Attribute::Group>::CClassInfoT(const CClassInfoT<Attribute::Group>& rhs)
{
} /* size: 0 */

// <01C29D56> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<Attribute::Icon>::CClassInfoT(const CClassInfoT<Attribute::Icon>& rhs)
{
} /* size: 0 */

// <01C29D31> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<Attribute::Icon>::CClassInfoT(const CClassInfoT<Attribute::Icon>& rhs)
{
} /* size: 0 */

// <01A6C9D9> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<IAnimStateCondition>::CClassInfoT(const CClassInfoT<IAnimStateCondition>& rhs)
{
} /* size: 0 */

// <01A6C9B4> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<IAnimStateCondition>::CClassInfoT(const CClassInfoT<IAnimStateCondition>& rhs)
{
} /* size: 0 */

// <01A6C87D> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CAnimStateConditionBase>::CClassInfoT(const CClassInfoT<CAnimStateConditionBase>& rhs)
{
} /* size: 0 */

// <01A6C858> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CAnimStateConditionBase>::CClassInfoT(const CClassInfoT<CAnimStateConditionBase>& rhs)
{
} /* size: 0 */

// <01A6C5CA> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CControlValueCondition>::CClassInfoT(const CClassInfoT<CControlValueCondition>& rhs)
{
} /* size: 0 */

// <01A6C5A5> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CControlValueCondition>::CClassInfoT(const CClassInfoT<CControlValueCondition>& rhs)
{
} /* size: 0 */

// <01A6C1F6> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CCycleCondition>::CClassInfoT(const CClassInfoT<CCycleCondition>& rhs)
{
} /* size: 0 */

// <01A6C1D1> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CCycleCondition>::CClassInfoT(const CClassInfoT<CCycleCondition>& rhs)
{
} /* size: 0 */

// <01A6BF2D> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CFinishedCondition>::CClassInfoT(const CClassInfoT<CFinishedCondition>& rhs)
{
} /* size: 0 */

// <01A6BF08> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CFinishedCondition>::CClassInfoT(const CClassInfoT<CFinishedCondition>& rhs)
{
} /* size: 0 */

// <01A6BA64> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CGroundCondition>::CClassInfoT(const CClassInfoT<CGroundCondition>& rhs)
{
} /* size: 0 */

// <01A6BA3F> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CGroundCondition>::CClassInfoT(const CClassInfoT<CGroundCondition>& rhs)
{
} /* size: 0 */

// <01A6B7A9> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CParameterAnimCondition>::CClassInfoT(const CClassInfoT<CParameterAnimCondition>& rhs)
{
} /* size: 0 */

// <01A6B784> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CParameterAnimCondition>::CClassInfoT(const CClassInfoT<CParameterAnimCondition>& rhs)
{
} /* size: 0 */

// <01A6B3DE> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CPathStatusCondition>::CClassInfoT(const CClassInfoT<CPathStatusCondition>& rhs)
{
} /* size: 0 */

// <01A6B3B9> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CPathStatusCondition>::CClassInfoT(const CClassInfoT<CPathStatusCondition>& rhs)
{
} /* size: 0 */

// <01A6B145> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CTagCondition>::CClassInfoT(const CClassInfoT<CTagCondition>& rhs)
{
} /* size: 0 */

// <01A6B120> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CTagCondition>::CClassInfoT(const CClassInfoT<CTagCondition>& rhs)
{
} /* size: 0 */

// <01A6AEAC> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CTimeCondition>::CClassInfoT(const CClassInfoT<CTimeCondition>& rhs)
{
} /* size: 0 */

// <01A6AE87> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CTimeCondition>::CClassInfoT(const CClassInfoT<CTimeCondition>& rhs)
{
} /* size: 0 */

// <019F3BCE> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<IAnimState>::CClassInfoT(const CClassInfoT<IAnimState>& rhs)
{
} /* size: 0 */

// <019F3BA9> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<IAnimState>::CClassInfoT(const CClassInfoT<IAnimState>& rhs)
{
} /* size: 0 */

// <019F3A70> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CAnimState>::CClassInfoT(const CClassInfoT<CAnimState>& rhs)
{
} /* size: 0 */

// <019F3A4B> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CAnimState>::CClassInfoT(const CClassInfoT<CAnimState>& rhs)
{
} /* size: 0 */

// <019F2C84> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<IAnimStateTransition>::CClassInfoT(const CClassInfoT<IAnimStateTransition>& rhs)
{
} /* size: 0 */

// <019F2C5F> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<IAnimStateTransition>::CClassInfoT(const CClassInfoT<IAnimStateTransition>& rhs)
{
} /* size: 0 */

// <019F2B26> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CAnimStateTransition>::CClassInfoT(const CClassInfoT<CAnimStateTransition>& rhs)
{
} /* size: 0 */

// <019F2B01> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CAnimStateTransition>::CClassInfoT(const CClassInfoT<CAnimStateTransition>& rhs)
{
} /* size: 0 */

// <014BC1C2> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<IAnimParameter>::CClassInfoT(const CClassInfoT<IAnimParameter>& rhs)
{
} /* size: 0 */

// <014BC19D> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<IAnimParameter>::CClassInfoT(const CClassInfoT<IAnimParameter>& rhs)
{
} /* size: 0 */

// <014BC066> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CAnimParameterBase>::CClassInfoT(const CClassInfoT<CAnimParameterBase>& rhs)
{
} /* size: 0 */

// <014BC041> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CAnimParameterBase>::CClassInfoT(const CClassInfoT<CAnimParameterBase>& rhs)
{
} /* size: 0 */

// <014BBDF0> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CBoolAnimParameter>::CClassInfoT(const CClassInfoT<CBoolAnimParameter>& rhs)
{
} /* size: 0 */

// <014BBDCB> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CBoolAnimParameter>::CClassInfoT(const CClassInfoT<CBoolAnimParameter>& rhs)
{
} /* size: 0 */

// <014BBA7A> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CEnumAnimParameter>::CClassInfoT(const CClassInfoT<CEnumAnimParameter>& rhs)
{
} /* size: 0 */

// <014BBA55> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CEnumAnimParameter>::CClassInfoT(const CClassInfoT<CEnumAnimParameter>& rhs)
{
} /* size: 0 */

// <014BB7A4> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CFloatAnimParameter>::CClassInfoT(const CClassInfoT<CFloatAnimParameter>& rhs)
{
} /* size: 0 */

// <014BB77F> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CFloatAnimParameter>::CClassInfoT(const CClassInfoT<CFloatAnimParameter>& rhs)
{
} /* size: 0 */

// <014BB543> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CIntAnimParameter>::CClassInfoT(const CClassInfoT<CIntAnimParameter>& rhs)
{
} /* size: 0 */

// <014BB51E> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CIntAnimParameter>::CClassInfoT(const CClassInfoT<CIntAnimParameter>& rhs)
{
} /* size: 0 */

// <014BB2E2> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CQuaternionAnimParameter>::CClassInfoT(const CClassInfoT<CQuaternionAnimParameter>& rhs)
{
} /* size: 0 */

// <014BB2BD> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CQuaternionAnimParameter>::CClassInfoT(const CClassInfoT<CQuaternionAnimParameter>& rhs)
{
} /* size: 0 */

// <014BB081> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CVectorAnimParameter>::CClassInfoT(const CClassInfoT<CVectorAnimParameter>& rhs)
{
} /* size: 0 */

// <014BB05C> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CVectorAnimParameter>::CClassInfoT(const CClassInfoT<CVectorAnimParameter>& rhs)
{
} /* size: 0 */

// <014694CD> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<IAnimMotor>::CClassInfoT(const CClassInfoT<IAnimMotor>& rhs)
{
} /* size: 0 */

// <014694A8> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<IAnimMotor>::CClassInfoT(const CClassInfoT<IAnimMotor>& rhs)
{
} /* size: 0 */

// <01469371> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CAnimMotorBase>::CClassInfoT(const CClassInfoT<CAnimMotorBase>& rhs)
{
} /* size: 0 */

// <0146934C> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CAnimMotorBase>::CClassInfoT(const CClassInfoT<CAnimMotorBase>& rhs)
{
} /* size: 0 */

// <01468F6B> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CAnimMotorInstance>::CClassInfoT(const CClassInfoT<CAnimMotorInstance>& rhs)
{
} /* size: 0 */

// <01468F46> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CAnimMotorInstance>::CClassInfoT(const CClassInfoT<CAnimMotorInstance>& rhs)
{
} /* size: 0 */

// <01467C64> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CDampedPathAnimMotor>::CClassInfoT(const CClassInfoT<CDampedPathAnimMotor>& rhs)
{
} /* size: 0 */

// <01467C3F> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CDampedPathAnimMotor>::CClassInfoT(const CClassInfoT<CDampedPathAnimMotor>& rhs)
{
} /* size: 0 */

// <01467A1D> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CPathAnimMotor>::CClassInfoT(const CClassInfoT<CPathAnimMotor>& rhs)
{
} /* size: 0 */

// <014679F8> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CPathAnimMotor>::CClassInfoT(const CClassInfoT<CPathAnimMotor>& rhs)
{
} /* size: 0 */

// <01467804> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CPathAnimMotorBase>::CClassInfoT(const CClassInfoT<CPathAnimMotorBase>& rhs)
{
} /* size: 0 */

// <014677DF> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CPathAnimMotorBase>::CClassInfoT(const CClassInfoT<CPathAnimMotorBase>& rhs)
{
} /* size: 0 */

// <0146767A> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CPlayerInputAnimMotor>::CClassInfoT(const CClassInfoT<CPlayerInputAnimMotor>& rhs)
{
} /* size: 0 */

// <01467655> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CPlayerInputAnimMotor>::CClassInfoT(const CClassInfoT<CPlayerInputAnimMotor>& rhs)
{
} /* size: 0 */

// <01467350> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CPlayerInputAnimMotorInstance>::CClassInfoT(const CClassInfoT<CPlayerInputAnimMotorInstance>& rhs)
{
} /* size: 0 */

// <0146732B> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CPlayerInputAnimMotorInstance>::CClassInfoT(const CClassInfoT<CPlayerInputAnimMotorInstance>& rhs)
{
} /* size: 0 */

// <013F6FE2> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CBonePositionMetric>::CClassInfoT(const CClassInfoT<CBonePositionMetric>& rhs)
{
} /* size: 0 */

// <013F6FBD> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CBonePositionMetric>::CClassInfoT(const CClassInfoT<CBonePositionMetric>& rhs)
{
} /* size: 0 */

// <013F6DAF> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CBoneVelocityMetric>::CClassInfoT(const CClassInfoT<CBoneVelocityMetric>& rhs)
{
} /* size: 0 */

// <013F6D8A> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CBoneVelocityMetric>::CClassInfoT(const CClassInfoT<CBoneVelocityMetric>& rhs)
{
} /* size: 0 */

// <013F6B7C> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CCurrentVelocityMetric>::CClassInfoT(const CClassInfoT<CCurrentVelocityMetric>& rhs)
{
} /* size: 0 */

// <013F6B57> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CCurrentVelocityMetric>::CClassInfoT(const CClassInfoT<CCurrentVelocityMetric>& rhs)
{
} /* size: 0 */

// <013F6953> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CDistanceRemainingMetric>::CClassInfoT(const CClassInfoT<CDistanceRemainingMetric>& rhs)
{
} /* size: 0 */

// <013F692E> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CDistanceRemainingMetric>::CClassInfoT(const CClassInfoT<CDistanceRemainingMetric>& rhs)
{
} /* size: 0 */

// <013F66E4> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CFootCycleMetric>::CClassInfoT(const CClassInfoT<CFootCycleMetric>& rhs)
{
} /* size: 0 */

// <013F66BF> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CFootCycleMetric>::CClassInfoT(const CClassInfoT<CFootCycleMetric>& rhs)
{
} /* size: 0 */

// <013F6420> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CFootPositionMetric>::CClassInfoT(const CClassInfoT<CFootPositionMetric>& rhs)
{
} /* size: 0 */

// <013F63FB> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CFootPositionMetric>::CClassInfoT(const CClassInfoT<CFootPositionMetric>& rhs)
{
} /* size: 0 */

// <013F60FC> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CFootPositionMetricInstance>::CClassInfoT(const CClassInfoT<CFootPositionMetricInstance>& rhs)
{
} /* size: 0 */

// <013F60D7> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CFootPositionMetricInstance>::CClassInfoT(const CClassInfoT<CFootPositionMetricInstance>& rhs)
{
} /* size: 0 */

// <013F5F12> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CFutureFacingMetric>::CClassInfoT(const CClassInfoT<CFutureFacingMetric>& rhs)
{
} /* size: 0 */

// <013F5EED> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CFutureFacingMetric>::CClassInfoT(const CClassInfoT<CFutureFacingMetric>& rhs)
{
} /* size: 0 */

// <013F5BF8> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CFutureFacingMetricInstance>::CClassInfoT(const CClassInfoT<CFutureFacingMetricInstance>& rhs)
{
} /* size: 0 */

// <013F5BD3> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CFutureFacingMetricInstance>::CClassInfoT(const CClassInfoT<CFutureFacingMetricInstance>& rhs)
{
} /* size: 0 */

// <013F5A3E> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CFutureVelocityMetric>::CClassInfoT(const CClassInfoT<CFutureVelocityMetric>& rhs)
{
} /* size: 0 */

// <013F5A19> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CFutureVelocityMetric>::CClassInfoT(const CClassInfoT<CFutureVelocityMetric>& rhs)
{
} /* size: 0 */

// <013F5706> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CFutureVelocityMetricInstance>::CClassInfoT(const CClassInfoT<CFutureVelocityMetricInstance>& rhs)
{
} /* size: 0 */

// <013F56E1> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CFutureVelocityMetricInstance>::CClassInfoT(const CClassInfoT<CFutureVelocityMetricInstance>& rhs)
{
} /* size: 0 */

// <013F54A9> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CMotionMetricBase>::CClassInfoT(const CClassInfoT<CMotionMetricBase>& rhs)
{
} /* size: 0 */

// <013F5484> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CMotionMetricBase>::CClassInfoT(const CClassInfoT<CMotionMetricBase>& rhs)
{
} /* size: 0 */

// <013F472A> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<IMotionMetricInstance>::CClassInfoT(const CClassInfoT<IMotionMetricInstance>& rhs)
{
} /* size: 0 */

// <013F4705> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<IMotionMetricInstance>::CClassInfoT(const CClassInfoT<IMotionMetricInstance>& rhs)
{
} /* size: 0 */

// <013F45CE> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CMotionMetricInstance>::CClassInfoT(const CClassInfoT<CMotionMetricInstance>& rhs)
{
} /* size: 0 */

// <013F45A9> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CMotionMetricInstance>::CClassInfoT(const CClassInfoT<CMotionMetricInstance>& rhs)
{
} /* size: 0 */

// <013F43A4> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CPathMetric>::CClassInfoT(const CClassInfoT<CPathMetric>& rhs)
{
} /* size: 0 */

// <013F437F> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CPathMetric>::CClassInfoT(const CClassInfoT<CPathMetric>& rhs)
{
} /* size: 0 */

// <013F406C> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CPathMetricInstance>::CClassInfoT(const CClassInfoT<CPathMetricInstance>& rhs)
{
} /* size: 0 */

// <013F3EB2> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CStepsRemainingMetric>::CClassInfoT(const CClassInfoT<CStepsRemainingMetric>& rhs)
{
} /* size: 0 */

// <013F3E8D> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CStepsRemainingMetric>::CClassInfoT(const CClassInfoT<CStepsRemainingMetric>& rhs)
{
} /* size: 0 */

// <013F3C7F> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CTimeRemainingMetric>::CClassInfoT(const CClassInfoT<CTimeRemainingMetric>& rhs)
{
} /* size: 0 */

// <013F3C5A> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CTimeRemainingMetric>::CClassInfoT(const CClassInfoT<CTimeRemainingMetric>& rhs)
{
} /* size: 0 */

// <0135054E> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<IMotionClip>::CClassInfoT(const CClassInfoT<IMotionClip>& rhs)
{
} /* size: 0 */

// <01350529> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<IMotionClip>::CClassInfoT(const CClassInfoT<IMotionClip>& rhs)
{
} /* size: 0 */

// <013503F2> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CMotionClip>::CClassInfoT(const CClassInfoT<CMotionClip>& rhs)
{
} /* size: 0 */

// <013503CD> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CMotionClip>::CClassInfoT(const CClassInfoT<CMotionClip>& rhs)
{
} /* size: 0 */

// <0134FF81> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<IMotionClipGroup>::CClassInfoT(const CClassInfoT<IMotionClipGroup>& rhs)
{
} /* size: 0 */

// <0134FF5C> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<IMotionClipGroup>::CClassInfoT(const CClassInfoT<IMotionClipGroup>& rhs)
{
} /* size: 0 */

// <0134FE25> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CMotionClipGroup>::CClassInfoT(const CClassInfoT<CMotionClipGroup>& rhs)
{
} /* size: 0 */

// <0134FE00> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CMotionClipGroup>::CClassInfoT(const CClassInfoT<CMotionClipGroup>& rhs)
{
} /* size: 0 */

// <0130EE68> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<IAnimTag>::CClassInfoT(const CClassInfoT<IAnimTag>& rhs)
{
} /* size: 0 */

// <0130EE43> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<IAnimTag>::CClassInfoT(const CClassInfoT<IAnimTag>& rhs)
{
} /* size: 0 */

// <0130ED0C> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CAnimTagBase>::CClassInfoT(const CClassInfoT<CAnimTagBase>& rhs)
{
} /* size: 0 */

// <0130BF3D> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CEventAnimTag>::CClassInfoT(const CClassInfoT<CEventAnimTag>& rhs)
{
} /* size: 0 */

// <0130BF18> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CEventAnimTag>::CClassInfoT(const CClassInfoT<CEventAnimTag>& rhs)
{
} /* size: 0 */

// <0130BC40> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CStringAnimTag>::CClassInfoT(const CClassInfoT<CStringAnimTag>& rhs)
{
} /* size: 0 */

// <0130BC1B> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CStringAnimTag>::CClassInfoT(const CClassInfoT<CStringAnimTag>& rhs)
{
} /* size: 0 */

// <012747B1> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CSkeletalInputAnimNode>::CClassInfoT(const CClassInfoT<CSkeletalInputAnimNode>& rhs)
{
} /* size: 0 */

// <0127478C> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CSkeletalInputAnimNode>::CClassInfoT(const CClassInfoT<CSkeletalInputAnimNode>& rhs)
{
} /* size: 0 */

// <012743E2> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CSlowDownOnSlopesAnimNode>::CClassInfoT(const CClassInfoT<CSlowDownOnSlopesAnimNode>& rhs)
{
} /* size: 0 */

// <012743BD> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CSlowDownOnSlopesAnimNode>::CClassInfoT(const CClassInfoT<CSlowDownOnSlopesAnimNode>& rhs)
{
} /* size: 0 */

// <01273FC8> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CSolveIKChainAnimNodeChainData>::CClassInfoT(const CClassInfoT<CSolveIKChainAnimNodeChainData>& rhs)
{
} /* size: 0 */

// <01273FA3> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CSolveIKChainAnimNodeChainData>::CClassInfoT(const CClassInfoT<CSolveIKChainAnimNodeChainData>& rhs)
{
} /* size: 0 */

// <01273D9E> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CSolveIKChainAnimNode>::CClassInfoT(const CClassInfoT<CSolveIKChainAnimNode>& rhs)
{
} /* size: 0 */

// <01273D79> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CSolveIKChainAnimNode>::CClassInfoT(const CClassInfoT<CSolveIKChainAnimNode>& rhs)
{
} /* size: 0 */

// <012737F0> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CSolveIKChainAnimNodeInstance>::CClassInfoT(const CClassInfoT<CSolveIKChainAnimNodeInstance>& rhs)
{
} /* size: 0 */

// <012737CB> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CSolveIKChainAnimNodeInstance>::CClassInfoT(const CClassInfoT<CSolveIKChainAnimNodeInstance>& rhs)
{
} /* size: 0 */

// <01273591> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CSpeedScaleAnimNode>::CClassInfoT(const CClassInfoT<CSpeedScaleAnimNode>& rhs)
{
} /* size: 0 */

// <0127356C> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CSpeedScaleAnimNode>::CClassInfoT(const CClassInfoT<CSpeedScaleAnimNode>& rhs)
{
} /* size: 0 */

// <01272F7F> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CStateMachineAnimNode>::CClassInfoT(const CClassInfoT<CStateMachineAnimNode>& rhs)
{
} /* size: 0 */

// <01272F5A> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CStateMachineAnimNode>::CClassInfoT(const CClassInfoT<CStateMachineAnimNode>& rhs)
{
} /* size: 0 */

// <01270D3B> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CStateMachineAnimNodeInstance>::CClassInfoT(const CClassInfoT<CStateMachineAnimNodeInstance>& rhs)
{
} /* size: 0 */

// <01270D16> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CStateMachineAnimNodeInstance>::CClassInfoT(const CClassInfoT<CStateMachineAnimNodeInstance>& rhs)
{
} /* size: 0 */

// <01270A3E> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CStopAtGoalAnimNode>::CClassInfoT(const CClassInfoT<CStopAtGoalAnimNode>& rhs)
{
} /* size: 0 */

// <01270A19> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CStopAtGoalAnimNode>::CClassInfoT(const CClassInfoT<CStopAtGoalAnimNode>& rhs)
{
} /* size: 0 */

// <0127066D> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CSubGraphAnimNode>::CClassInfoT(const CClassInfoT<CSubGraphAnimNode>& rhs)
{
} /* size: 0 */

// <01270648> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CSubGraphAnimNode>::CClassInfoT(const CClassInfoT<CSubGraphAnimNode>& rhs)
{
} /* size: 0 */

// <0126D3C9> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CSubtractAnimNode>::CClassInfoT(const CClassInfoT<CSubtractAnimNode>& rhs)
{
} /* size: 0 */

// <0126D3A4> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CSubtractAnimNode>::CClassInfoT(const CClassInfoT<CSubtractAnimNode>& rhs)
{
} /* size: 0 */

// <0126D11E> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CTurnHelperAnimNode>::CClassInfoT(const CClassInfoT<CTurnHelperAnimNode>& rhs)
{
} /* size: 0 */

// <0126CE73> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CTwoBoneIKAnimNode>::CClassInfoT(const CClassInfoT<CTwoBoneIKAnimNode>& rhs)
{
} /* size: 0 */

// <0126CE4E> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CTwoBoneIKAnimNode>::CClassInfoT(const CClassInfoT<CTwoBoneIKAnimNode>& rhs)
{
} /* size: 0 */

// <011652B5> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CFootStepTriggerAnimNode>::CClassInfoT(const CClassInfoT<CFootStepTriggerAnimNode>& rhs)
{
} /* size: 0 */

// <01165290> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CFootStepTriggerAnimNode>::CClassInfoT(const CClassInfoT<CFootStepTriggerAnimNode>& rhs)
{
} /* size: 0 */

// <0116209E> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CGroupInputAnimNode>::CClassInfoT(const CClassInfoT<CGroupInputAnimNode>& rhs)
{
} /* size: 0 */

// <01162079> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CGroupInputAnimNode>::CClassInfoT(const CClassInfoT<CGroupInputAnimNode>& rhs)
{
} /* size: 0 */

// <01161BAB> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CGroupOutputAnimNode>::CClassInfoT(const CClassInfoT<CGroupOutputAnimNode>& rhs)
{
} /* size: 0 */

// <01161B86> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CGroupOutputAnimNode>::CClassInfoT(const CClassInfoT<CGroupOutputAnimNode>& rhs)
{
} /* size: 0 */

// <0116191F> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CHitReactAnimNode>::CClassInfoT(const CClassInfoT<CHitReactAnimNode>& rhs)
{
} /* size: 0 */

// <011618FA> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CHitReactAnimNode>::CClassInfoT(const CClassInfoT<CHitReactAnimNode>& rhs)
{
} /* size: 0 */

// <0116166B> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CInputStreamAnimNode>::CClassInfoT(const CClassInfoT<CInputStreamAnimNode>& rhs)
{
} /* size: 0 */

// <01161646> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CInputStreamAnimNode>::CClassInfoT(const CClassInfoT<CInputStreamAnimNode>& rhs)
{
} /* size: 0 */

// <01161365> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CInputStreamAnimNodeInstance>::CClassInfoT(const CClassInfoT<CInputStreamAnimNodeInstance>& rhs)
{
} /* size: 0 */

// <01161340> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CInputStreamAnimNodeInstance>::CClassInfoT(const CClassInfoT<CInputStreamAnimNodeInstance>& rhs)
{
} /* size: 0 */

// <01161106> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CJiggleBoneAnimNode>::CClassInfoT(const CClassInfoT<CJiggleBoneAnimNode>& rhs)
{
} /* size: 0 */

// <011610E1> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CJiggleBoneAnimNode>::CClassInfoT(const CClassInfoT<CJiggleBoneAnimNode>& rhs)
{
} /* size: 0 */

// <01160C92> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CLeanMatrixAnimNode>::CClassInfoT(const CClassInfoT<CLeanMatrixAnimNode>& rhs)
{
} /* size: 0 */

// <01160C6D> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CLeanMatrixAnimNode>::CClassInfoT(const CClassInfoT<CLeanMatrixAnimNode>& rhs)
{
} /* size: 0 */

// <011609DD> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CLookAtAnimNode>::CClassInfoT(const CClassInfoT<CLookAtAnimNode>& rhs)
{
} /* size: 0 */

// <011609B8> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CLookAtAnimNode>::CClassInfoT(const CClassInfoT<CLookAtAnimNode>& rhs)
{
} /* size: 0 */

// <011603AD> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CMotionMatchingAnimNode>::CClassInfoT(const CClassInfoT<CMotionMatchingAnimNode>& rhs)
{
} /* size: 0 */

// <01160388> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CMotionMatchingAnimNode>::CClassInfoT(const CClassInfoT<CMotionMatchingAnimNode>& rhs)
{
} /* size: 0 */

// <0115D58D> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CMotionMatchingAnimNodeInstance>::CClassInfoT(const CClassInfoT<CMotionMatchingAnimNodeInstance>& rhs)
{
} /* size: 0 */

// <0115D568> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CMotionMatchingAnimNodeInstance>::CClassInfoT(const CClassInfoT<CMotionMatchingAnimNodeInstance>& rhs)
{
} /* size: 0 */

// <0115C662> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CMoverAnimNode>::CClassInfoT(const CClassInfoT<CMoverAnimNode>& rhs)
{
} /* size: 0 */

// <0115C63D> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CMoverAnimNode>::CClassInfoT(const CClassInfoT<CMoverAnimNode>& rhs)
{
} /* size: 0 */

// <0115C3B7> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CPathHelperAnimNode>::CClassInfoT(const CClassInfoT<CPathHelperAnimNode>& rhs)
{
} /* size: 0 */

// <0115C392> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CPathHelperAnimNode>::CClassInfoT(const CClassInfoT<CPathHelperAnimNode>& rhs)
{
} /* size: 0 */

// <0115C13A> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CRootAnimNode>::CClassInfoT(const CClassInfoT<CRootAnimNode>& rhs)
{
} /* size: 0 */

// <0115C115> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CRootAnimNode>::CClassInfoT(const CClassInfoT<CRootAnimNode>& rhs)
{
} /* size: 0 */

// <0115BD7A> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CSelectorAnimNode>::CClassInfoT(const CClassInfoT<CSelectorAnimNode>& rhs)
{
} /* size: 0 */

// <0115BD55> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CSelectorAnimNode>::CClassInfoT(const CClassInfoT<CSelectorAnimNode>& rhs)
{
} /* size: 0 */

// <0115AB12> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<ISequenceAnimNode>::CClassInfoT(const CClassInfoT<ISequenceAnimNode>& rhs)
{
} /* size: 0 */

// <0115AAED> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<ISequenceAnimNode>::CClassInfoT(const CClassInfoT<ISequenceAnimNode>& rhs)
{
} /* size: 0 */

// <0115A7A5> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CSequenceAnimNode>::CClassInfoT(const CClassInfoT<CSequenceAnimNode>& rhs)
{
} /* size: 0 */

// <0115A780> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CSequenceAnimNode>::CClassInfoT(const CClassInfoT<CSequenceAnimNode>& rhs)
{
} /* size: 0 */

// <01159DE9> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CSequenceAnimNodeInstance>::CClassInfoT(const CClassInfoT<CSequenceAnimNodeInstance>& rhs)
{
} /* size: 0 */

// <01159DC4> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CSequenceAnimNodeInstance>::CClassInfoT(const CClassInfoT<CSequenceAnimNodeInstance>& rhs)
{
} /* size: 0 */

// <01159C03> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CSetFacingAnimNode>::CClassInfoT(const CClassInfoT<CSetFacingAnimNode>& rhs)
{
} /* size: 0 */

// <01159BDE> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CSetFacingAnimNode>::CClassInfoT(const CClassInfoT<CSetFacingAnimNode>& rhs)
{
} /* size: 0 */

// <011598D8> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<ISingleFrameAnimNode>::CClassInfoT(const CClassInfoT<ISingleFrameAnimNode>& rhs)
{
} /* size: 0 */

// <011598B3> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<ISingleFrameAnimNode>::CClassInfoT(const CClassInfoT<ISingleFrameAnimNode>& rhs)
{
} /* size: 0 */

// <0115963C> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CSingleFrameAnimNode>::CClassInfoT(const CClassInfoT<CSingleFrameAnimNode>& rhs)
{
} /* size: 0 */

// <01159617> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CSingleFrameAnimNode>::CClassInfoT(const CClassInfoT<CSingleFrameAnimNode>& rhs)
{
} /* size: 0 */

// <01064FB1> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CAddAnimNode>::CClassInfoT(const CClassInfoT<CAddAnimNode>& rhs)
{
} /* size: 0 */

// <01064F8C> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CAddAnimNode>::CClassInfoT(const CClassInfoT<CAddAnimNode>& rhs)
{
} /* size: 0 */

// <01064BF8> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CAimMatrixAnimNode>::CClassInfoT(const CClassInfoT<CAimMatrixAnimNode>& rhs)
{
} /* size: 0 */

// <01064BD3> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CAimMatrixAnimNode>::CClassInfoT(const CClassInfoT<CAimMatrixAnimNode>& rhs)
{
} /* size: 0 */

// <01064901> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<IAnimNode>::CClassInfoT(const CClassInfoT<IAnimNode>& rhs)
{
} /* size: 0 */

// <010648DC> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<IAnimNode>::CClassInfoT(const CClassInfoT<IAnimNode>& rhs)
{
} /* size: 0 */

// <010647A5> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CAnimNodeBase>::CClassInfoT(const CClassInfoT<CAnimNodeBase>& rhs)
{
} /* size: 0 */

// <01064780> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CAnimNodeBase>::CClassInfoT(const CClassInfoT<CAnimNodeBase>& rhs)
{
} /* size: 0 */

// <0106450B> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<IAnimNodeInstance>::CClassInfoT(const CClassInfoT<IAnimNodeInstance>& rhs)
{
} /* size: 0 */

// <010644E6> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<IAnimNodeInstance>::CClassInfoT(const CClassInfoT<IAnimNodeInstance>& rhs)
{
} /* size: 0 */

// <010643AF> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CAnimNodeInstanceBase>::CClassInfoT(const CClassInfoT<CAnimNodeInstanceBase>& rhs)
{
} /* size: 0 */

// <0106438A> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CAnimNodeInstanceBase>::CClassInfoT(const CClassInfoT<CAnimNodeInstanceBase>& rhs)
{
} /* size: 0 */

// <01063F09> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CBlend2DItem>::CClassInfoT(const CClassInfoT<CBlend2DItem>& rhs)
{
} /* size: 0 */

// <01063EE4> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CBlend2DItem>::CClassInfoT(const CClassInfoT<CBlend2DItem>& rhs)
{
} /* size: 0 */

// <01063C9B> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CBlend2DAnimNode>::CClassInfoT(const CClassInfoT<CBlend2DAnimNode>& rhs)
{
} /* size: 0 */

// <01063C76> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CBlend2DAnimNode>::CClassInfoT(const CClassInfoT<CBlend2DAnimNode>& rhs)
{
} /* size: 0 */

// <010630E5> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CBlend2DAnimNodeInstance>::CClassInfoT(const CClassInfoT<CBlend2DAnimNodeInstance>& rhs)
{
} /* size: 0 */

// <010630C0> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CBlend2DAnimNodeInstance>::CClassInfoT(const CClassInfoT<CBlend2DAnimNodeInstance>& rhs)
{
} /* size: 0 */

// <01062DEA> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CBlendAnimNode>::CClassInfoT(const CClassInfoT<CBlendAnimNode>& rhs)
{
} /* size: 0 */

// <01062DC5> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CBlendAnimNode>::CClassInfoT(const CClassInfoT<CBlendAnimNode>& rhs)
{
} /* size: 0 */

// <0106291D> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CBoneMaskAnimNode>::CClassInfoT(const CClassInfoT<CBoneMaskAnimNode>& rhs)
{
} /* size: 0 */

// <010628F8> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CBoneMaskAnimNode>::CClassInfoT(const CClassInfoT<CBoneMaskAnimNode>& rhs)
{
} /* size: 0 */

// <0106255D> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CChoiceAnimNode>::CClassInfoT(const CClassInfoT<CChoiceAnimNode>& rhs)
{
} /* size: 0 */

// <01062538> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CChoiceAnimNode>::CClassInfoT(const CClassInfoT<CChoiceAnimNode>& rhs)
{
} /* size: 0 */

// <01061DDF> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CChoreoAnimNode>::CClassInfoT(const CClassInfoT<CChoreoAnimNode>& rhs)
{
} /* size: 0 */

// <01061DBA> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CChoreoAnimNode>::CClassInfoT(const CClassInfoT<CChoreoAnimNode>& rhs)
{
} /* size: 0 */

// <01061A84> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CChoreoAnimNodeInstance>::CClassInfoT(const CClassInfoT<CChoreoAnimNodeInstance>& rhs)
{
} /* size: 0 */

// <010617DC> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CCommentAnimNode>::CClassInfoT(const CClassInfoT<CCommentAnimNode>& rhs)
{
} /* size: 0 */

// <010617B7> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CCommentAnimNode>::CClassInfoT(const CClassInfoT<CCommentAnimNode>& rhs)
{
} /* size: 0 */

// <010615C6> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CCycleControlAnimNode>::CClassInfoT(const CClassInfoT<CCycleControlAnimNode>& rhs)
{
} /* size: 0 */

// <010615A1> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CCycleControlAnimNode>::CClassInfoT(const CClassInfoT<CCycleControlAnimNode>& rhs)
{
} /* size: 0 */

// <0106131B> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CDirectionalBlendAnimNode>::CClassInfoT(const CClassInfoT<CDirectionalBlendAnimNode>& rhs)
{
} /* size: 0 */

// <010612F6> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CDirectionalBlendAnimNode>::CClassInfoT(const CClassInfoT<CDirectionalBlendAnimNode>& rhs)
{
} /* size: 0 */

// <01061070> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CDirectPlaybackAnimNode>::CClassInfoT(const CClassInfoT<CDirectPlaybackAnimNode>& rhs)
{
} /* size: 0 */

// <0106104B> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CDirectPlaybackAnimNode>::CClassInfoT(const CClassInfoT<CDirectPlaybackAnimNode>& rhs)
{
} /* size: 0 */

// <01060D1C> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CDirectPlaybackAnimNodeInstance>::CClassInfoT(const CClassInfoT<CDirectPlaybackAnimNodeInstance>& rhs)
{
} /* size: 0 */

// <01060CF7> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CDirectPlaybackAnimNodeInstance>::CClassInfoT(const CClassInfoT<CDirectPlaybackAnimNodeInstance>& rhs)
{
} /* size: 0 */

// <01060B36> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CFollowAttachmentAnimNode>::CClassInfoT(const CClassInfoT<CFollowAttachmentAnimNode>& rhs)
{
} /* size: 0 */

// <01060B11> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CFollowAttachmentAnimNode>::CClassInfoT(const CClassInfoT<CFollowAttachmentAnimNode>& rhs)
{
} /* size: 0 */

// <01060852> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CFollowPathAnimNode>::CClassInfoT(const CClassInfoT<CFollowPathAnimNode>& rhs)
{
} /* size: 0 */

// <0106082D> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CFollowPathAnimNode>::CClassInfoT(const CClassInfoT<CFollowPathAnimNode>& rhs)
{
} /* size: 0 */

// <0106020E> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CFootLockAnimNode>::CClassInfoT(const CClassInfoT<CFootLockAnimNode>& rhs)
{
} /* size: 0 */

// <010601E9> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CFootLockAnimNode>::CClassInfoT(const CClassInfoT<CFootLockAnimNode>& rhs)
{
} /* size: 0 */

// <0105FBCC> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CFootLockAnimNodeInstance>::CClassInfoT(const CClassInfoT<CFootLockAnimNodeInstance>& rhs)
{
} /* size: 0 */

// <00F5865C> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<IAnimParameterInstance>::CClassInfoT(const CClassInfoT<IAnimParameterInstance>& rhs)
{
} /* size: 0 */

// <00F58637> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<IAnimParameterInstance>::CClassInfoT(const CClassInfoT<IAnimParameterInstance>& rhs)
{
} /* size: 0 */

// <00F584FE> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<IEnumAnimParameterInstance>::CClassInfoT(const CClassInfoT<IEnumAnimParameterInstance>& rhs)
{
} /* size: 0 */

// <00F584D9> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<IEnumAnimParameterInstance>::CClassInfoT(const CClassInfoT<IEnumAnimParameterInstance>& rhs)
{
} /* size: 0 */

// <00F5835C> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CEnumAnimParameterInstance>::CClassInfoT(const CClassInfoT<CEnumAnimParameterInstance>& rhs)
{
} /* size: 0 */

// <00F58337> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CEnumAnimParameterInstance>::CClassInfoT(const CClassInfoT<CEnumAnimParameterInstance>& rhs)
{
} /* size: 0 */

// <00F581FE> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CAnimParameterInstance>::CClassInfoT(const CClassInfoT<CAnimParameterInstance>& rhs)
{
} /* size: 0 */

// <00F581D9> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CAnimParameterInstance>::CClassInfoT(const CClassInfoT<CAnimParameterInstance>& rhs)
{
} /* size: 0 */

// <00F55CF6> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<IAnimClipProperties>::CClassInfoT(const CClassInfoT<IAnimClipProperties>& rhs)
{
} /* size: 0 */

// <00F55CD1> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<IAnimClipProperties>::CClassInfoT(const CClassInfoT<IAnimClipProperties>& rhs)
{
} /* size: 0 */

// <00F55B98> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CClipProperties>::CClassInfoT(const CClassInfoT<CClipProperties>& rhs)
{
} /* size: 0 */

// <00F55B73> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CClipProperties>::CClassInfoT(const CClassInfoT<CClipProperties>& rhs)
{
} /* size: 0 */

// <00E2A75F> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<IAnimationGraph>::CClassInfoT(const CClassInfoT<IAnimationGraph>& rhs)
{
} /* size: 0 */

// <00E2A73A> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<IAnimationGraph>::CClassInfoT(const CClassInfoT<IAnimationGraph>& rhs)
{
} /* size: 0 */

// <00E2A5FF> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<IAnimationGraphBuilder>::CClassInfoT(const CClassInfoT<IAnimationGraphBuilder>& rhs)
{
} /* size: 0 */

// <00E2A5DA> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<IAnimationGraphBuilder>::CClassInfoT(const CClassInfoT<IAnimationGraphBuilder>& rhs)
{
} /* size: 0 */

// <00E2A49F> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CAnimationGraph>::CClassInfoT(const CClassInfoT<CAnimationGraph>& rhs)
{
} /* size: 0 */

// <00E2A47A> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CAnimationGraph>::CClassInfoT(const CClassInfoT<CAnimationGraph>& rhs)
{
} /* size: 0 */

// <00E28DCB> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CAnimationGraphInstance>::CClassInfoT(const CClassInfoT<CAnimationGraphInstance>& rhs)
{
} /* size: 0 */

// <00E28DA6> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CAnimationGraphInstance>::CClassInfoT(const CClassInfoT<CAnimationGraphInstance>& rhs)
{
} /* size: 0 */

// <00E24A1E> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<IAnimationSubGraph>::CClassInfoT(const CClassInfoT<IAnimationSubGraph>& rhs)
{
} /* size: 0 */

// <00E249F9> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<IAnimationSubGraph>::CClassInfoT(const CClassInfoT<IAnimationSubGraph>& rhs)
{
} /* size: 0 */

// <00E248BE> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CAnimationSubGraph>::CClassInfoT(const CClassInfoT<CAnimationSubGraph>& rhs)
{
} /* size: 0 */

// <00E24899> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CAnimationSubGraph>::CClassInfoT(const CClassInfoT<CAnimationSubGraph>& rhs)
{
} /* size: 0 */

// <00E21A83> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<IAnimGraphSettingsGroup>::CClassInfoT(const CClassInfoT<IAnimGraphSettingsGroup>& rhs)
{
} /* size: 0 */

// <00E21948> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CAnimGraphSettingsGroup>::CClassInfoT(const CClassInfoT<CAnimGraphSettingsGroup>& rhs)
{
} /* size: 0 */

// <00E21923> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CAnimGraphSettingsGroup>::CClassInfoT(const CClassInfoT<CAnimGraphSettingsGroup>& rhs)
{
} /* size: 0 */

// <00E217E8> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CAnimGraphGeneralSettings>::CClassInfoT(const CClassInfoT<CAnimGraphGeneralSettings>& rhs)
{
} /* size: 0 */

// <00E217C3> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CAnimGraphGeneralSettings>::CClassInfoT(const CClassInfoT<CAnimGraphGeneralSettings>& rhs)
{
} /* size: 0 */

// <00E21688> ../public/tier0/reflection/classinfo.h:75
void CClassInfoT<CAnimGraphNetworkSettings>::CClassInfoT(const CClassInfoT<CAnimGraphNetworkSettings>& rhs)
{
} /* size: 0 */

// <00E21663> ../public/tier0/reflection/classinfo.h:75
inline void CClassInfoT<CAnimGraphNetworkSettings>::CClassInfoT(const CClassInfoT<CAnimGraphNetworkSettings>& rhs)
{
} /* size: 0 */

// <01C56958> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<Reflection::CAttribute>::CastTo(CAttribute* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 53348
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01C37BEA> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<Reflection::Object>::CastTo(Object* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 58102
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01C2A541> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<Attribute::Color>::CastTo(Color* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 1361
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01C2A3B5> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<Attribute::Deprecated>::CastTo(Deprecated* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 1361
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01C2A259> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<Attribute::Description>::CastTo(Description* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 1361
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01C2A0FD> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<Attribute::FriendlyName>::CastTo(FriendlyName* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 1361
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01C29FA1> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<Attribute::Group>::CastTo(Group* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 1361
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01C29E45> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<Attribute::Icon>::CastTo(Icon* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 1361
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01A6CAB3> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<IAnimStateCondition>::CastTo(IAnimStateCondition* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 21758
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01A6C957> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CAnimStateConditionBase>::CastTo(CAnimStateConditionBase* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 21758
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01A6C700> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CControlValueCondition>::CastTo(CControlValueCondition* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 21758
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01A6C32C> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CCycleCondition>::CastTo(CCycleCondition* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 21758
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01A6C063> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CFinishedCondition>::CastTo(CFinishedCondition* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 21758
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01A6BB9A> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CGroundCondition>::CastTo(CGroundCondition* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 21758
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01A6B8DF> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CParameterAnimCondition>::CastTo(CParameterAnimCondition* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 21758
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01A6B514> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CPathStatusCondition>::CastTo(CPathStatusCondition* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 21758
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01A6B27B> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CTagCondition>::CastTo(CTagCondition* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 21758
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01A6AFE2> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CTimeCondition>::CastTo(CTimeCondition* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 21758
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <019F3CA9> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<IAnimState>::CastTo(IAnimState* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 50744
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <019F3B4B> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CAnimState>::CastTo(CAnimState* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 50744
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <019F2D5F> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<IAnimStateTransition>::CastTo(IAnimStateTransition* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 50744
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <019F2C01> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CAnimStateTransition>::CastTo(CAnimStateTransition* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 50744
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <014BC2CC> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<IAnimParameter>::CastTo(IAnimParameter* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 17362
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <014BC140> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CAnimParameterBase>::CastTo(CAnimParameterBase* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 17362
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <014BBF26> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CBoolAnimParameter>::CastTo(CBoolAnimParameter* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 17362
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <014BBCC5> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<IEnumAnimParameter>::CastTo(IEnumAnimParameter* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 17362
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <014BBBF4> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CEnumAnimParameter>::CastTo(CEnumAnimParameter* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 17362
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <014BB8DA> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CFloatAnimParameter>::CastTo(CFloatAnimParameter* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 17362
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <014BB679> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CIntAnimParameter>::CastTo(CIntAnimParameter* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 17362
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <014BB418> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CQuaternionAnimParameter>::CastTo(CQuaternionAnimParameter* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 17362
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <014BB1B7> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CVectorAnimParameter>::CastTo(CVectorAnimParameter* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 17362
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <014695D7> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<IAnimMotor>::CastTo(IAnimMotor* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 7438
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <0146944B> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CAnimMotorBase>::CastTo(CAnimMotorBase* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 7438
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <014691A1> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<IAnimMotorInstance>::CastTo(IAnimMotorInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 7438
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01469045> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CAnimMotorInstance>::CastTo(CAnimMotorInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 7438
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01467D6C> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CDampedPathAnimMotor>::CastTo(CDampedPathAnimMotor* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 7438
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01467B25> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CPathAnimMotor>::CastTo(CPathAnimMotor* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 7438
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <014678DE> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CPathAnimMotorBase>::CastTo(CPathAnimMotorBase* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 7438
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01467782> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CPlayerInputAnimMotor>::CastTo(CPlayerInputAnimMotor* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 7438
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <0146753F> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<IPlayerInputAnimMotorInstance>::CastTo(IPlayerInputAnimMotorInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 7438
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <0146746E> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CPlayerInputAnimMotorInstance>::CastTo(CPlayerInputAnimMotorInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 7438
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <013F70EA> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CBonePositionMetric>::CastTo(CBonePositionMetric* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 45577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <013F6EB7> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CBoneVelocityMetric>::CastTo(CBoneVelocityMetric* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 45577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <013F6C84> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CCurrentVelocityMetric>::CastTo(CCurrentVelocityMetric* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 45577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <013F6A5B> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CDistanceRemainingMetric>::CastTo(CDistanceRemainingMetric* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 45577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <013F67EC> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CFootCycleMetric>::CastTo(CFootCycleMetric* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 45577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <013F6528> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CFootPositionMetric>::CastTo(CFootPositionMetric* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 45577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <013F62EB> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<IFootPositionMetricInstance>::CastTo(IFootPositionMetricInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 45577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <013F621A> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CFootPositionMetricInstance>::CastTo(CFootPositionMetricInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 45577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <013F601A> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CFutureFacingMetric>::CastTo(CFutureFacingMetric* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 45577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <013F5DE7> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<IFutureFacingMetricInstance>::CastTo(IFutureFacingMetricInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 45577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <013F5D16> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CFutureFacingMetricInstance>::CastTo(CFutureFacingMetricInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 45577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <013F5B46> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CFutureVelocityMetric>::CastTo(CFutureVelocityMetric* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 45577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <013F58F5> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<IFutureVelocityMetricInstance>::CastTo(IFutureVelocityMetricInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 45577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <013F5824> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CFutureVelocityMetricInstance>::CastTo(CFutureVelocityMetricInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 45577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <013F5654> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<IMotionMetric>::CastTo(IMotionMetric* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 45577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <013F5583> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CMotionMetricBase>::CastTo(CMotionMetricBase* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 45577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <013F4804> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<IMotionMetricInstance>::CastTo(IMotionMetricInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 45577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <013F46A8> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CMotionMetricInstance>::CastTo(CMotionMetricInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 45577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <013F44AC> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CPathMetric>::CastTo(CPathMetric* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 45577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <013F425B> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<IPathMetricInstance>::CastTo(IPathMetricInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 45577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <013F418A> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CPathMetricInstance>::CastTo(CPathMetricInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 45577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <013F3FBA> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CStepsRemainingMetric>::CastTo(CStepsRemainingMetric* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 45577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <013F3D87> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CTimeRemainingMetric>::CastTo(CTimeRemainingMetric* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 45577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <0135069C> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<IMotionClip>::CastTo(IMotionClip* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 47667
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <013504CC> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CMotionClip>::CastTo(CMotionClip* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 47667
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <0135005B> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<IMotionClipGroup>::CastTo(IMotionClipGroup* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 47667
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <0134FEFF> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CMotionClipGroup>::CastTo(CMotionClipGroup* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 47667
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <0130EF72> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<IAnimTag>::CastTo(IAnimTag* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 21387
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <0130EDE6> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CAnimTagBase>::CastTo(CAnimTagBase* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 21387
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <0130C330> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<IAnimTagSpanContainer>::CastTo(IAnimTagSpanContainer* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 21387
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <0130C188> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<IEventAnimTag>::CastTo(IEventAnimTag* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 21387
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <0130C0B7> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CEventAnimTag>::CastTo(CEventAnimTag* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 21387
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <0130BE8B> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<IStringAnimTag>::CastTo(IStringAnimTag* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 21387
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <0130BDBA> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CStringAnimTag>::CastTo(CStringAnimTag* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 21387
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01274915> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CSkeletalInputAnimNode>::CastTo(CSkeletalInputAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 9721
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01274546> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CSlowDownOnSlopesAnimNode>::CastTo(CSlowDownOnSlopesAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 9721
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01274244> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<ISolveIKChainSettings>::CastTo(ISolveIKChainSettings* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 9721
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01274173> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<ISolveIKChainAnimNode>::CastTo(ISolveIKChainAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 9721
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <012740A2> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CSolveIKChainAnimNodeChainData>::CastTo(CSolveIKChainAnimNodeChainData* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 9721
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01273F46> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CSolveIKChainAnimNode>::CastTo(CSolveIKChainAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 9721
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <012739DF> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<ISolveIKChainAnimNodeInstance>::CastTo(ISolveIKChainAnimNodeInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 9721
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <0127390E> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CSolveIKChainAnimNodeInstance>::CastTo(CSolveIKChainAnimNodeInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 9721
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <012736F5> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CSpeedScaleAnimNode>::CastTo(CSpeedScaleAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 9721
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <012731F8> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<IAnimStateMachine>::CastTo(IAnimStateMachine* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 9721
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01273127> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CStateMachineAnimNode>::CastTo(CStateMachineAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 9721
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01270F2A> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<IAnimStateMachineInstance>::CastTo(IAnimStateMachineInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 9721
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01270E59> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CStateMachineAnimNodeInstance>::CastTo(CStateMachineAnimNodeInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 9721
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01270BA2> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CStopAtGoalAnimNode>::CastTo(CStopAtGoalAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 9721
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <012708E6> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<ISubGraphAnimNode>::CastTo(ISubGraphAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 9721
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01270815> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CSubGraphAnimNode>::CastTo(CSubGraphAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 9721
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <0126D52D> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CSubtractAnimNode>::CastTo(CSubtractAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 9721
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <0126D282> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CTurnHelperAnimNode>::CastTo(CTurnHelperAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 9721
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <0126CFD7> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CTwoBoneIKAnimNode>::CastTo(CTwoBoneIKAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 9721
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01165419> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CFootStepTriggerAnimNode>::CastTo(CFootStepTriggerAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01164D25> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<IGroupAnimNode>::CastTo(IGroupAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01164C54> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CGroupAnimNode>::CastTo(CGroupAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01162202> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CGroupInputAnimNode>::CastTo(CGroupInputAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01161D0F> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CGroupOutputAnimNode>::CastTo(CGroupOutputAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01161A83> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CHitReactAnimNode>::CastTo(CHitReactAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01161554> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<IInputStreamAnimNodeInstance>::CastTo(IInputStreamAnimNodeInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01161483> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CInputStreamAnimNodeInstance>::CastTo(CInputStreamAnimNodeInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <0116126A> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CJiggleBoneAnimNode>::CastTo(CJiggleBoneAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01160E3A> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CLeanMatrixAnimNode>::CastTo(CLeanMatrixAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01160B41> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CLookAtAnimNode>::CastTo(CLookAtAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <0116066A> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<IMotionMatchingAnimNode>::CastTo(IMotionMatchingAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01160599> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CMotionMatchingAnimNode>::CastTo(CMotionMatchingAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <0115D77C> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<IMotionMatchingAnimNodeInstance>::CastTo(IMotionMatchingAnimNodeInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <0115D6AB> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CMotionMatchingAnimNodeInstance>::CastTo(CMotionMatchingAnimNodeInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <0115C7C6> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CMoverAnimNode>::CastTo(CMoverAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <0115C51B> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CPathHelperAnimNode>::CastTo(CPathHelperAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <0115C270> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CRootAnimNode>::CastTo(CRootAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <0115BFF3> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<ISelectorAnimNode>::CastTo(ISelectorAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <0115BF22> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CSelectorAnimNode>::CastTo(CSelectorAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <0115ABEC> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<ISequenceAnimNode>::CastTo(ISequenceAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <0115AA90> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<ISequenceUser>::CastTo(ISequenceUser* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <0115A9BF> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CSequenceAnimNode>::CastTo(CSequenceAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01159FD8> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<ISequenceAnimNodeInstance>::CastTo(ISequenceAnimNodeInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01159F07> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CSequenceAnimNodeInstance>::CastTo(CSequenceAnimNodeInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01159D67> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CSetFacingAnimNode>::CastTo(CSetFacingAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <011599B2> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<ISingleFrameAnimNode>::CastTo(ISingleFrameAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01159856> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CSingleFrameAnimNode>::CastTo(CSingleFrameAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01065115> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CAddAnimNode>::CastTo(CAddAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01064DA0> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CAimMatrixAnimNode>::CastTo(CAimMatrixAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <010649DB> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<IAnimNode>::CastTo(IAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <0106487F> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CAnimNodeBase>::CastTo(CAnimNodeBase* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <010645E5> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<IAnimNodeInstance>::CastTo(IAnimNodeInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01064489> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CAnimNodeInstanceBase>::CastTo(CAnimNodeInstanceBase* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01064185> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<IBlend2DItem>::CastTo(IBlend2DItem* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <010640B4> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<IBlend2DAnimNode>::CastTo(IBlend2DAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01063FE3> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CBlend2DItem>::CastTo(CBlend2DItem* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01063E87> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CBlend2DAnimNode>::CastTo(CBlend2DAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <010632D4> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<IBlend2DAnimNodeInstance>::CastTo(IBlend2DAnimNodeInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01063203> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CBlend2DAnimNodeInstance>::CastTo(CBlend2DAnimNodeInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01063063> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<IBlendAnimNode>::CastTo(IBlendAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01062F92> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CBlendAnimNode>::CastTo(CBlendAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01062A81> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CBoneMaskAnimNode>::CastTo(CBoneMaskAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <010627D6> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<IChoiceAnimNode>::CastTo(IChoiceAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01062705> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CChoiceAnimNode>::CastTo(CChoiceAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01061F43> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CChoreoAnimNode>::CastTo(CChoreoAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01061C98> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<IChoreoAnimNodeInstance>::CastTo(IChoreoAnimNodeInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01061BC7> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CChoreoAnimNodeInstance>::CastTo(CChoreoAnimNodeInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01061A27> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<ICommentAnimNode>::CastTo(ICommentAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01061956> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CCommentAnimNode>::CastTo(CCommentAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <0106172A> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CCycleControlAnimNode>::CastTo(CCycleControlAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <0106147F> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CDirectionalBlendAnimNode>::CastTo(CDirectionalBlendAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <010611D4> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CDirectPlaybackAnimNode>::CastTo(CDirectPlaybackAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01060F0B> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<IDirectPlaybackAnimNodeInstance>::CastTo(IDirectPlaybackAnimNodeInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01060E3A> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CDirectPlaybackAnimNodeInstance>::CastTo(CDirectPlaybackAnimNodeInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01060C9A> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CFollowAttachmentAnimNode>::CastTo(CFollowAttachmentAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01060372> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CFootLockAnimNode>::CastTo(CFootLockAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <0105FDE0> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<IFootLockAnimNodeInstance>::CastTo(IFootLockAnimNodeInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <0105FD0F> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CFootLockAnimNodeInstance>::CastTo(CFootLockAnimNodeInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <00F5EB29> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<IAnimNodeManager>::CastTo(IAnimNodeManager* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 37489
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <00F5EA56> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CAnimNodeManager>::CastTo(CAnimNodeManager* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 37489
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <00F58737> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<IAnimParameterInstance>::CastTo(IAnimParameterInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 37489
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <00F5847B> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CEnumAnimParameterInstance>::CastTo(CEnumAnimParameterInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 37489
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <00F55DD1> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<IAnimClipProperties>::CastTo(IAnimClipProperties* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 37489
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <00F55C73> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CClipProperties>::CastTo(CClipProperties* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 37489
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <00E2A83B> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<IAnimationGraph>::CastTo(IAnimationGraph* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 10158
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <00E2A6DB> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<IAnimationGraphBuilder>::CastTo(IAnimationGraphBuilder* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 10158
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <00E2A57B> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CAnimationGraph>::CastTo(CAnimationGraph* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 10158
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <00E29007> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<IAnimationGraphInstance>::CastTo(IAnimationGraphInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 10158
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <00E28EA7> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CAnimationGraphInstance>::CastTo(CAnimationGraphInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 10158
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <00E24AFA> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<IAnimationSubGraph>::CastTo(IAnimationSubGraph* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 10158
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <00E2499A> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CAnimationSubGraph>::CastTo(CAnimationSubGraph* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 10158
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <00E21B84> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<IAnimGraphSettingsGroup>::CastTo(IAnimGraphSettingsGroup* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 10158
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <00E21A24> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CAnimGraphSettingsGroup>::CastTo(CAnimGraphSettingsGroup* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 10158
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <00E218C4> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CAnimGraphGeneralSettings>::CastTo(CAnimGraphGeneralSettings* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 10158
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <00E21764> ../public/tier0/reflection/classinfo.h:77
// variables: 2
inline void* CClassInfoT<CAnimGraphNetworkSettings>::CastTo(CAnimGraphNetworkSettings* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 10158
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 80
	}
} /* size: 0, variables: 1 */

// <01C568E6> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<Reflection::CAttribute>::CastTo(const CAttribute* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 53348
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01C37B78> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<Reflection::Object>::CastTo(const Object* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 58102
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01C2A4E4> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<Attribute::Color>::CastTo(const Color* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 1361
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01C2A358> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<Attribute::Deprecated>::CastTo(const Deprecated* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 1361
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01C2A1FC> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<Attribute::Description>::CastTo(const Description* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 1361
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01C2A0A0> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<Attribute::FriendlyName>::CastTo(const FriendlyName* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 1361
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01C29F44> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<Attribute::Group>::CastTo(const Group* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 1361
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01C29DD3> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<Attribute::Icon>::CastTo(const Icon* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 1361
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01A6CA56> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<IAnimStateCondition>::CastTo(const IAnimStateCondition* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 21758
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01A6C8FA> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CAnimStateConditionBase>::CastTo(const CAnimStateConditionBase* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 21758
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01A6C6A3> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CControlValueCondition>::CastTo(const CControlValueCondition* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 21758
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01A6C2CF> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CCycleCondition>::CastTo(const CCycleCondition* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 21758
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01A6C006> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CFinishedCondition>::CastTo(const CFinishedCondition* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 21758
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01A6BB3D> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CGroundCondition>::CastTo(const CGroundCondition* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 21758
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01A6B882> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CParameterAnimCondition>::CastTo(const CParameterAnimCondition* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 21758
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01A6B4B7> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CPathStatusCondition>::CastTo(const CPathStatusCondition* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 21758
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01A6B21E> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CTagCondition>::CastTo(const CTagCondition* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 21758
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01A6AF85> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CTimeCondition>::CastTo(const CTimeCondition* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 21758
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <019F3C4B> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<IAnimState>::CastTo(const IAnimState* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 50744
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <019F3AED> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CAnimState>::CastTo(const CAnimState* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 50744
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <019F2D01> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<IAnimStateTransition>::CastTo(const IAnimStateTransition* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 50744
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <019F2BA3> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CAnimStateTransition>::CastTo(const CAnimStateTransition* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 50744
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <014BC26F> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<IAnimParameter>::CastTo(const IAnimParameter* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 17362
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <014BC0E3> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CAnimParameterBase>::CastTo(const CAnimParameterBase* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 17362
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <014BBEC9> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CBoolAnimParameter>::CastTo(const CBoolAnimParameter* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 17362
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <014BBC68> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<IEnumAnimParameter>::CastTo(const IEnumAnimParameter* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 17362
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <014BBB97> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CEnumAnimParameter>::CastTo(const CEnumAnimParameter* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 17362
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <014BB87D> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CFloatAnimParameter>::CastTo(const CFloatAnimParameter* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 17362
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <014BB61C> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CIntAnimParameter>::CastTo(const CIntAnimParameter* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 17362
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <014BB3BB> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CQuaternionAnimParameter>::CastTo(const CQuaternionAnimParameter* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 17362
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <014BB15A> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CVectorAnimParameter>::CastTo(const CVectorAnimParameter* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 17362
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <0146957A> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<IAnimMotor>::CastTo(const IAnimMotor* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 7438
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <014693EE> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CAnimMotorBase>::CastTo(const CAnimMotorBase* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 7438
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01469144> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<IAnimMotorInstance>::CastTo(const IAnimMotorInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 7438
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01468FE8> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CAnimMotorInstance>::CastTo(const CAnimMotorInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 7438
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01467D0F> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CDampedPathAnimMotor>::CastTo(const CDampedPathAnimMotor* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 7438
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01467AC8> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CPathAnimMotor>::CastTo(const CPathAnimMotor* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 7438
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01467881> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CPathAnimMotorBase>::CastTo(const CPathAnimMotorBase* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 7438
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01467725> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CPlayerInputAnimMotor>::CastTo(const CPlayerInputAnimMotor* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 7438
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <014674E2> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<IPlayerInputAnimMotorInstance>::CastTo(const IPlayerInputAnimMotorInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 7438
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01467411> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CPlayerInputAnimMotorInstance>::CastTo(const CPlayerInputAnimMotorInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 7438
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <013F708D> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CBonePositionMetric>::CastTo(const CBonePositionMetric* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 45577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <013F6E5A> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CBoneVelocityMetric>::CastTo(const CBoneVelocityMetric* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 45577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <013F6C27> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CCurrentVelocityMetric>::CastTo(const CCurrentVelocityMetric* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 45577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <013F69FE> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CDistanceRemainingMetric>::CastTo(const CDistanceRemainingMetric* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 45577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <013F678F> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CFootCycleMetric>::CastTo(const CFootCycleMetric* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 45577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <013F64CB> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CFootPositionMetric>::CastTo(const CFootPositionMetric* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 45577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <013F628E> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<IFootPositionMetricInstance>::CastTo(const IFootPositionMetricInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 45577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <013F61BD> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CFootPositionMetricInstance>::CastTo(const CFootPositionMetricInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 45577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <013F5FBD> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CFutureFacingMetric>::CastTo(const CFutureFacingMetric* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 45577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <013F5D8A> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<IFutureFacingMetricInstance>::CastTo(const IFutureFacingMetricInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 45577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <013F5CB9> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CFutureFacingMetricInstance>::CastTo(const CFutureFacingMetricInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 45577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <013F5AE9> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CFutureVelocityMetric>::CastTo(const CFutureVelocityMetric* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 45577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <013F5898> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<IFutureVelocityMetricInstance>::CastTo(const IFutureVelocityMetricInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 45577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <013F57C7> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CFutureVelocityMetricInstance>::CastTo(const CFutureVelocityMetricInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 45577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <013F55F7> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<IMotionMetric>::CastTo(const IMotionMetric* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 45577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <013F5526> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CMotionMetricBase>::CastTo(const CMotionMetricBase* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 45577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <013F47A7> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<IMotionMetricInstance>::CastTo(const IMotionMetricInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 45577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <013F464B> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CMotionMetricInstance>::CastTo(const CMotionMetricInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 45577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <013F444F> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CPathMetric>::CastTo(const CPathMetric* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 45577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <013F41FE> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<IPathMetricInstance>::CastTo(const IPathMetricInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 45577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <013F412D> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CPathMetricInstance>::CastTo(const CPathMetricInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 45577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <013F3F5D> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CStepsRemainingMetric>::CastTo(const CStepsRemainingMetric* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 45577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <013F3D2A> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CTimeRemainingMetric>::CastTo(const CTimeRemainingMetric* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 45577
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <0135063F> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<IMotionClip>::CastTo(const IMotionClip* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 47667
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <0135046F> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CMotionClip>::CastTo(const CMotionClip* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 47667
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <0134FFFE> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<IMotionClipGroup>::CastTo(const IMotionClipGroup* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 47667
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <0134FEA2> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CMotionClipGroup>::CastTo(const CMotionClipGroup* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 47667
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <0130EF15> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<IAnimTag>::CastTo(const IAnimTag* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 21387
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <0130ED89> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CAnimTagBase>::CastTo(const CAnimTagBase* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 21387
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <0130C2D3> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<IAnimTagSpanContainer>::CastTo(const IAnimTagSpanContainer* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 21387
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <0130C12B> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<IEventAnimTag>::CastTo(const IEventAnimTag* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 21387
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <0130C05A> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CEventAnimTag>::CastTo(const CEventAnimTag* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 21387
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <0130BE2E> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<IStringAnimTag>::CastTo(const IStringAnimTag* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 21387
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <0130BD5D> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CStringAnimTag>::CastTo(const CStringAnimTag* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 21387
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <012748B8> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CSkeletalInputAnimNode>::CastTo(const CSkeletalInputAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 9721
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <012744E9> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CSlowDownOnSlopesAnimNode>::CastTo(const CSlowDownOnSlopesAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 9721
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <012741E7> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<ISolveIKChainSettings>::CastTo(const ISolveIKChainSettings* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 9721
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01274116> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<ISolveIKChainAnimNode>::CastTo(const ISolveIKChainAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 9721
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01274045> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CSolveIKChainAnimNodeChainData>::CastTo(const CSolveIKChainAnimNodeChainData* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 9721
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01273EE9> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CSolveIKChainAnimNode>::CastTo(const CSolveIKChainAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 9721
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01273982> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<ISolveIKChainAnimNodeInstance>::CastTo(const ISolveIKChainAnimNodeInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 9721
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <012738B1> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CSolveIKChainAnimNodeInstance>::CastTo(const CSolveIKChainAnimNodeInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 9721
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01273698> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CSpeedScaleAnimNode>::CastTo(const CSpeedScaleAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 9721
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <0127319B> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<IAnimStateMachine>::CastTo(const IAnimStateMachine* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 9721
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <012730CA> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CStateMachineAnimNode>::CastTo(const CStateMachineAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 9721
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01270ECD> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<IAnimStateMachineInstance>::CastTo(const IAnimStateMachineInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 9721
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01270DFC> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CStateMachineAnimNodeInstance>::CastTo(const CStateMachineAnimNodeInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 9721
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01270B45> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CStopAtGoalAnimNode>::CastTo(const CStopAtGoalAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 9721
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01270889> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<ISubGraphAnimNode>::CastTo(const ISubGraphAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 9721
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <012707B8> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CSubGraphAnimNode>::CastTo(const CSubGraphAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 9721
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <0126D4D0> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CSubtractAnimNode>::CastTo(const CSubtractAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 9721
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <0126D225> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CTurnHelperAnimNode>::CastTo(const CTurnHelperAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 9721
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <0126CF7A> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CTwoBoneIKAnimNode>::CastTo(const CTwoBoneIKAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 9721
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <011653BC> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CFootStepTriggerAnimNode>::CastTo(const CFootStepTriggerAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01164CC8> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<IGroupAnimNode>::CastTo(const IGroupAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01164BF7> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CGroupAnimNode>::CastTo(const CGroupAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <011621A5> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CGroupInputAnimNode>::CastTo(const CGroupInputAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01161CB2> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CGroupOutputAnimNode>::CastTo(const CGroupOutputAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01161A26> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CHitReactAnimNode>::CastTo(const CHitReactAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01161772> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CInputStreamAnimNode>::CastTo(const CInputStreamAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <011614F7> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<IInputStreamAnimNodeInstance>::CastTo(const IInputStreamAnimNodeInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01161426> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CInputStreamAnimNodeInstance>::CastTo(const CInputStreamAnimNodeInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <0116120D> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CJiggleBoneAnimNode>::CastTo(const CJiggleBoneAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01160DDD> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CLeanMatrixAnimNode>::CastTo(const CLeanMatrixAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01160AE4> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CLookAtAnimNode>::CastTo(const CLookAtAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <0116060D> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<IMotionMatchingAnimNode>::CastTo(const IMotionMatchingAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <0116053C> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CMotionMatchingAnimNode>::CastTo(const CMotionMatchingAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <0115D71F> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<IMotionMatchingAnimNodeInstance>::CastTo(const IMotionMatchingAnimNodeInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <0115D64E> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CMotionMatchingAnimNodeInstance>::CastTo(const CMotionMatchingAnimNodeInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <0115C769> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CMoverAnimNode>::CastTo(const CMoverAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <0115C4BE> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CPathHelperAnimNode>::CastTo(const CPathHelperAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <0115C213> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CRootAnimNode>::CastTo(const CRootAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <0115BF96> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<ISelectorAnimNode>::CastTo(const ISelectorAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <0115BEC5> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CSelectorAnimNode>::CastTo(const CSelectorAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <0115AB8F> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<ISequenceAnimNode>::CastTo(const ISequenceAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <0115AA33> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<ISequenceUser>::CastTo(const ISequenceUser* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <0115A962> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CSequenceAnimNode>::CastTo(const CSequenceAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01159F7B> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<ISequenceAnimNodeInstance>::CastTo(const ISequenceAnimNodeInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01159EAA> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CSequenceAnimNodeInstance>::CastTo(const CSequenceAnimNodeInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01159D0A> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CSetFacingAnimNode>::CastTo(const CSetFacingAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01159955> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<ISingleFrameAnimNode>::CastTo(const ISingleFrameAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <011597F9> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CSingleFrameAnimNode>::CastTo(const CSingleFrameAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 43021
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <010650B8> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CAddAnimNode>::CastTo(const CAddAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01064D43> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CAimMatrixAnimNode>::CastTo(const CAimMatrixAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <0106497E> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<IAnimNode>::CastTo(const IAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01064822> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CAnimNodeBase>::CastTo(const CAnimNodeBase* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01064588> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<IAnimNodeInstance>::CastTo(const IAnimNodeInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <0106442C> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CAnimNodeInstanceBase>::CastTo(const CAnimNodeInstanceBase* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01064128> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<IBlend2DItem>::CastTo(const IBlend2DItem* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01064057> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<IBlend2DAnimNode>::CastTo(const IBlend2DAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01063F86> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CBlend2DItem>::CastTo(const CBlend2DItem* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01063E2A> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CBlend2DAnimNode>::CastTo(const CBlend2DAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01063006> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<IBlendAnimNode>::CastTo(const IBlendAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01062F35> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CBlendAnimNode>::CastTo(const CBlendAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01062A24> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CBoneMaskAnimNode>::CastTo(const CBoneMaskAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01062779> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<IChoiceAnimNode>::CastTo(const IChoiceAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <010626A8> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CChoiceAnimNode>::CastTo(const CChoiceAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01061EE6> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CChoreoAnimNode>::CastTo(const CChoreoAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01061C3B> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<IChoreoAnimNodeInstance>::CastTo(const IChoreoAnimNodeInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01061B6A> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CChoreoAnimNodeInstance>::CastTo(const CChoreoAnimNodeInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <010619CA> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<ICommentAnimNode>::CastTo(const ICommentAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <010618F9> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CCommentAnimNode>::CastTo(const CCommentAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <010616CD> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CCycleControlAnimNode>::CastTo(const CCycleControlAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01061422> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CDirectionalBlendAnimNode>::CastTo(const CDirectionalBlendAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01061177> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CDirectPlaybackAnimNode>::CastTo(const CDirectPlaybackAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01060EAE> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<IDirectPlaybackAnimNodeInstance>::CastTo(const IDirectPlaybackAnimNodeInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01060DDD> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CDirectPlaybackAnimNodeInstance>::CastTo(const CDirectPlaybackAnimNodeInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01060C3D> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CFollowAttachmentAnimNode>::CastTo(const CFollowAttachmentAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01060959> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CFollowPathAnimNode>::CastTo(const CFollowPathAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01060315> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CFootLockAnimNode>::CastTo(const CFootLockAnimNode* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <0105FD83> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<IFootLockAnimNodeInstance>::CastTo(const IFootLockAnimNodeInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <0105FCB2> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CFootLockAnimNodeInstance>::CastTo(const CFootLockAnimNodeInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 19783
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <00F5EACB> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<IAnimNodeManager>::CastTo(const IAnimNodeManager* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 37489
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <00F5E9F8> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CAnimNodeManager>::CastTo(const CAnimNodeManager* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 37489
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <00F586D9> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<IAnimParameterInstance>::CastTo(const IAnimParameterInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 37489
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <00F5857B> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<IEnumAnimParameterInstance>::CastTo(const IEnumAnimParameterInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 37489
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <00F5841D> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CEnumAnimParameterInstance>::CastTo(const CEnumAnimParameterInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 37489
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <00F5827B> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CAnimParameterInstance>::CastTo(const CAnimParameterInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 37489
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <00F55D73> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<IAnimClipProperties>::CastTo(const IAnimClipProperties* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 37489
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <00F55C15> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CClipProperties>::CastTo(const CClipProperties* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 37489
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <00E2A67C> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<IAnimationGraphBuilder>::CastTo(const IAnimationGraphBuilder* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 10158
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <00E2A51C> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CAnimationGraph>::CastTo(const CAnimationGraph* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 10158
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <00E28FA8> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<IAnimationGraphInstance>::CastTo(const IAnimationGraphInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 10158
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <00E28E48> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CAnimationGraphInstance>::CastTo(const CAnimationGraphInstance* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 10158
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <00E24A9B> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<IAnimationSubGraph>::CastTo(const IAnimationSubGraph* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 10158
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <00E2493B> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CAnimationSubGraph>::CastTo(const CAnimationSubGraph* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 10158
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <00E21B25> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<IAnimGraphSettingsGroup>::CastTo(const IAnimGraphSettingsGroup* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 10158
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <00E219C5> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CAnimGraphSettingsGroup>::CastTo(const CAnimGraphSettingsGroup* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 10158
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <00E21865> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CAnimGraphGeneralSettings>::CastTo(const CAnimGraphGeneralSettings* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 10158
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <00E21705> ../public/tier0/reflection/classinfo.h:84
// variables: 2
inline const void* CClassInfoT<CAnimGraphNetworkSettings>::CastTo(const CAnimGraphNetworkSettings* derived, ClassID baseTypeInfo)
{
	const char   __FUNCTION__; // 10158
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 87
	}
} /* size: 0, variables: 1 */

// <01C5685B> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<Reflection::CAttribute>::BaseClass<Reflection::Object>()
{
	BaseClassInfo_t info; // 94
	const CAttribute* pDerived; // 97
	const Object* pBase; // 98
} /* size: 0, variables: 3 */

// <01C2A459> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<Attribute::Color>::BaseClass<Reflection::CAttribute>()
{
	BaseClassInfo_t info; // 94
	const Color* pDerived; // 97
	const CAttribute* pBase; // 98
} /* size: 0, variables: 3 */

// <01C2A2FD> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<Attribute::Deprecated>::BaseClass<Reflection::CAttribute>()
{
	BaseClassInfo_t info; // 94
	const Deprecated* pDerived; // 97
	const CAttribute* pBase; // 98
} /* size: 0, variables: 3 */

// <01C2A1A1> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<Attribute::Description>::BaseClass<Reflection::CAttribute>()
{
	BaseClassInfo_t info; // 94
	const Description* pDerived; // 97
	const CAttribute* pBase; // 98
} /* size: 0, variables: 3 */

// <01C2A045> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<Attribute::FriendlyName>::BaseClass<Reflection::CAttribute>()
{
	BaseClassInfo_t info; // 94
	const FriendlyName* pDerived; // 97
	const CAttribute* pBase; // 98
} /* size: 0, variables: 3 */

// <01C29EE9> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<Attribute::Group>::BaseClass<Reflection::CAttribute>()
{
	BaseClassInfo_t info; // 94
	const Group* pDerived; // 97
	const CAttribute* pBase; // 98
} /* size: 0, variables: 3 */

// <01C29D78> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<Attribute::Icon>::BaseClass<Reflection::CAttribute>()
{
	BaseClassInfo_t info; // 94
	const Icon* pDerived; // 97
	const CAttribute* pBase; // 98
} /* size: 0, variables: 3 */

// <01A6C9FB> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<IAnimStateCondition>::BaseClass<Reflection::Object>()
{
	BaseClassInfo_t info; // 94
	const IAnimStateCondition* pDerived; // 97
	const Object* pBase; // 98
} /* size: 0, variables: 3 */

// <01A6C89F> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CAnimStateConditionBase>::BaseClass<IAnimStateCondition>()
{
	BaseClassInfo_t info; // 94
	const CAnimStateConditionBase* pDerived; // 97
	const IAnimStateCondition* pBase; // 98
} /* size: 0, variables: 3 */

// <01A6C5EC> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CControlValueCondition>::BaseClass<CAnimStateConditionBase>()
{
	BaseClassInfo_t info; // 94
	const CControlValueCondition* pDerived; // 97
	const CAnimStateConditionBase* pBase; // 98
} /* size: 0, variables: 3 */

// <01A6C218> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CCycleCondition>::BaseClass<CAnimStateConditionBase>()
{
	BaseClassInfo_t info; // 94
	const CCycleCondition* pDerived; // 97
	const CAnimStateConditionBase* pBase; // 98
} /* size: 0, variables: 3 */

// <01A6BF4F> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CFinishedCondition>::BaseClass<CAnimStateConditionBase>()
{
	BaseClassInfo_t info; // 94
	const CFinishedCondition* pDerived; // 97
	const CAnimStateConditionBase* pBase; // 98
} /* size: 0, variables: 3 */

// <01A6BA86> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CGroundCondition>::BaseClass<CAnimStateConditionBase>()
{
	BaseClassInfo_t info; // 94
	const CGroundCondition* pDerived; // 97
	const CAnimStateConditionBase* pBase; // 98
} /* size: 0, variables: 3 */

// <01A6B7CB> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CParameterAnimCondition>::BaseClass<CAnimStateConditionBase>()
{
	BaseClassInfo_t info; // 94
	const CParameterAnimCondition* pDerived; // 97
	const CAnimStateConditionBase* pBase; // 98
} /* size: 0, variables: 3 */

// <01A6B400> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CPathStatusCondition>::BaseClass<CAnimStateConditionBase>()
{
	BaseClassInfo_t info; // 94
	const CPathStatusCondition* pDerived; // 97
	const CAnimStateConditionBase* pBase; // 98
} /* size: 0, variables: 3 */

// <01A6B167> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CTagCondition>::BaseClass<CAnimStateConditionBase>()
{
	BaseClassInfo_t info; // 94
	const CTagCondition* pDerived; // 97
	const CAnimStateConditionBase* pBase; // 98
} /* size: 0, variables: 3 */

// <01A6AECE> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CTimeCondition>::BaseClass<CAnimStateConditionBase>()
{
	BaseClassInfo_t info; // 94
	const CTimeCondition* pDerived; // 97
	const CAnimStateConditionBase* pBase; // 98
} /* size: 0, variables: 3 */

// <019F3BF0> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<IAnimState>::BaseClass<Reflection::Object>()
{
	BaseClassInfo_t info; // 94
	const IAnimState* pDerived; // 97
	const Object* pBase; // 98
} /* size: 0, variables: 3 */

// <019F3A92> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CAnimState>::BaseClass<IAnimState>()
{
	BaseClassInfo_t info; // 94
	const CAnimState* pDerived; // 97
	const IAnimState* pBase; // 98
} /* size: 0, variables: 3 */

// <019F2CA6> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<IAnimStateTransition>::BaseClass<Reflection::Object>()
{
	BaseClassInfo_t info; // 94
	const IAnimStateTransition* pDerived; // 97
	const Object* pBase; // 98
} /* size: 0, variables: 3 */

// <019F2B48> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CAnimStateTransition>::BaseClass<IAnimStateTransition>()
{
	BaseClassInfo_t info; // 94
	const CAnimStateTransition* pDerived; // 97
	const IAnimStateTransition* pBase; // 98
} /* size: 0, variables: 3 */

// <014BC1E4> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<IAnimParameter>::BaseClass<Reflection::Object>()
{
	BaseClassInfo_t info; // 94
	const IAnimParameter* pDerived; // 97
	const Object* pBase; // 98
} /* size: 0, variables: 3 */

// <014BC088> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CAnimParameterBase>::BaseClass<IAnimParameter>()
{
	BaseClassInfo_t info; // 94
	const CAnimParameterBase* pDerived; // 97
	const IAnimParameter* pBase; // 98
} /* size: 0, variables: 3 */

// <014BBE12> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CBoolAnimParameter>::BaseClass<CAnimParameterBase>()
{
	BaseClassInfo_t info; // 94
	const CBoolAnimParameter* pDerived; // 97
	const CAnimParameterBase* pBase; // 98
} /* size: 0, variables: 3 */

// <014BBAE0> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CEnumAnimParameter>::BaseClass<CAnimParameterBase>()
{
	BaseClassInfo_t info; // 94
	const CEnumAnimParameter* pDerived; // 97
	const CAnimParameterBase* pBase; // 98
} /* size: 0, variables: 3 */

// <014BBA9C> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CEnumAnimParameter>::BaseClass<IEnumAnimParameter>()
{
	BaseClassInfo_t info; // 94
	const CEnumAnimParameter* pDerived; // 97
	const IEnumAnimParameter* pBase; // 98
} /* size: 0, variables: 3 */

// <014BB7C6> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CFloatAnimParameter>::BaseClass<CAnimParameterBase>()
{
	BaseClassInfo_t info; // 94
	const CFloatAnimParameter* pDerived; // 97
	const CAnimParameterBase* pBase; // 98
} /* size: 0, variables: 3 */

// <014BB565> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CIntAnimParameter>::BaseClass<CAnimParameterBase>()
{
	BaseClassInfo_t info; // 94
	const CIntAnimParameter* pDerived; // 97
	const CAnimParameterBase* pBase; // 98
} /* size: 0, variables: 3 */

// <014BB304> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CQuaternionAnimParameter>::BaseClass<CAnimParameterBase>()
{
	BaseClassInfo_t info; // 94
	const CQuaternionAnimParameter* pDerived; // 97
	const CAnimParameterBase* pBase; // 98
} /* size: 0, variables: 3 */

// <014BB0A3> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CVectorAnimParameter>::BaseClass<CAnimParameterBase>()
{
	BaseClassInfo_t info; // 94
	const CVectorAnimParameter* pDerived; // 97
	const CAnimParameterBase* pBase; // 98
} /* size: 0, variables: 3 */

// <014694EF> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<IAnimMotor>::BaseClass<Reflection::Object>()
{
	BaseClassInfo_t info; // 94
	const IAnimMotor* pDerived; // 97
	const Object* pBase; // 98
} /* size: 0, variables: 3 */

// <01469393> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CAnimMotorBase>::BaseClass<IAnimMotor>()
{
	BaseClassInfo_t info; // 94
	const CAnimMotorBase* pDerived; // 97
	const IAnimMotor* pBase; // 98
} /* size: 0, variables: 3 */

// <014690E9> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<IAnimMotorInstance>::BaseClass<Reflection::Object>()
{
	BaseClassInfo_t info; // 94
	const IAnimMotorInstance* pDerived; // 97
	const Object* pBase; // 98
} /* size: 0, variables: 3 */

// <01468F8D> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CAnimMotorInstance>::BaseClass<IAnimMotorInstance>()
{
	BaseClassInfo_t info; // 94
	const CAnimMotorInstance* pDerived; // 97
	const IAnimMotorInstance* pBase; // 98
} /* size: 0, variables: 3 */

// <01467C86> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CDampedPathAnimMotor>::BaseClass<CPathAnimMotorBase>()
{
	BaseClassInfo_t info; // 94
	const CDampedPathAnimMotor* pDerived; // 97
	const CPathAnimMotorBase* pBase; // 98
} /* size: 0, variables: 3 */

// <01467A3F> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CPathAnimMotor>::BaseClass<CPathAnimMotorBase>()
{
	BaseClassInfo_t info; // 94
	const CPathAnimMotor* pDerived; // 97
	const CPathAnimMotorBase* pBase; // 98
} /* size: 0, variables: 3 */

// <01467826> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CPathAnimMotorBase>::BaseClass<CAnimMotorBase>()
{
	BaseClassInfo_t info; // 94
	const CPathAnimMotorBase* pDerived; // 97
	const CAnimMotorBase* pBase; // 98
} /* size: 0, variables: 3 */

// <0146769C> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CPlayerInputAnimMotor>::BaseClass<CAnimMotorBase>()
{
	BaseClassInfo_t info; // 94
	const CPlayerInputAnimMotor* pDerived; // 97
	const CAnimMotorBase* pBase; // 98
} /* size: 0, variables: 3 */

// <014673B6> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CPlayerInputAnimMotorInstance>::BaseClass<CAnimMotorInstance>()
{
	BaseClassInfo_t info; // 94
	const CPlayerInputAnimMotorInstance* pDerived; // 97
	const CAnimMotorInstance* pBase; // 98
} /* size: 0, variables: 3 */

// <01467372> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CPlayerInputAnimMotorInstance>::BaseClass<IPlayerInputAnimMotorInstance>()
{
	BaseClassInfo_t info; // 94
	const CPlayerInputAnimMotorInstance* pDerived; // 97
	const IPlayerInputAnimMotorInstance* pBase; // 98
} /* size: 0, variables: 3 */

// <013F7004> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CBonePositionMetric>::BaseClass<CMotionMetricBase>()
{
	BaseClassInfo_t info; // 94
	const CBonePositionMetric* pDerived; // 97
	const CMotionMetricBase* pBase; // 98
} /* size: 0, variables: 3 */

// <013F6DD1> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CBoneVelocityMetric>::BaseClass<CMotionMetricBase>()
{
	BaseClassInfo_t info; // 94
	const CBoneVelocityMetric* pDerived; // 97
	const CMotionMetricBase* pBase; // 98
} /* size: 0, variables: 3 */

// <013F6B9E> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CCurrentVelocityMetric>::BaseClass<CMotionMetricBase>()
{
	BaseClassInfo_t info; // 94
	const CCurrentVelocityMetric* pDerived; // 97
	const CMotionMetricBase* pBase; // 98
} /* size: 0, variables: 3 */

// <013F6975> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CDistanceRemainingMetric>::BaseClass<CMotionMetricBase>()
{
	BaseClassInfo_t info; // 94
	const CDistanceRemainingMetric* pDerived; // 97
	const CMotionMetricBase* pBase; // 98
} /* size: 0, variables: 3 */

// <013F6706> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CFootCycleMetric>::BaseClass<CMotionMetricBase>()
{
	BaseClassInfo_t info; // 94
	const CFootCycleMetric* pDerived; // 97
	const CMotionMetricBase* pBase; // 98
} /* size: 0, variables: 3 */

// <013F6442> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CFootPositionMetric>::BaseClass<CMotionMetricBase>()
{
	BaseClassInfo_t info; // 94
	const CFootPositionMetric* pDerived; // 97
	const CMotionMetricBase* pBase; // 98
} /* size: 0, variables: 3 */

// <013F6162> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CFootPositionMetricInstance>::BaseClass<CMotionMetricInstance>()
{
	BaseClassInfo_t info; // 94
	const CFootPositionMetricInstance* pDerived; // 97
	const CMotionMetricInstance* pBase; // 98
} /* size: 0, variables: 3 */

// <013F611E> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CFootPositionMetricInstance>::BaseClass<IFootPositionMetricInstance>()
{
	BaseClassInfo_t info; // 94
	const CFootPositionMetricInstance* pDerived; // 97
	const IFootPositionMetricInstance* pBase; // 98
} /* size: 0, variables: 3 */

// <013F5F34> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CFutureFacingMetric>::BaseClass<CMotionMetricBase>()
{
	BaseClassInfo_t info; // 94
	const CFutureFacingMetric* pDerived; // 97
	const CMotionMetricBase* pBase; // 98
} /* size: 0, variables: 3 */

// <013F5C5E> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CFutureFacingMetricInstance>::BaseClass<CMotionMetricInstance>()
{
	BaseClassInfo_t info; // 94
	const CFutureFacingMetricInstance* pDerived; // 97
	const CMotionMetricInstance* pBase; // 98
} /* size: 0, variables: 3 */

// <013F5C1A> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CFutureFacingMetricInstance>::BaseClass<IFutureFacingMetricInstance>()
{
	BaseClassInfo_t info; // 94
	const CFutureFacingMetricInstance* pDerived; // 97
	const IFutureFacingMetricInstance* pBase; // 98
} /* size: 0, variables: 3 */

// <013F5A60> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CFutureVelocityMetric>::BaseClass<CMotionMetricBase>()
{
	BaseClassInfo_t info; // 94
	const CFutureVelocityMetric* pDerived; // 97
	const CMotionMetricBase* pBase; // 98
} /* size: 0, variables: 3 */

// <013F576C> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CFutureVelocityMetricInstance>::BaseClass<CMotionMetricInstance>()
{
	BaseClassInfo_t info; // 94
	const CFutureVelocityMetricInstance* pDerived; // 97
	const CMotionMetricInstance* pBase; // 98
} /* size: 0, variables: 3 */

// <013F5728> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CFutureVelocityMetricInstance>::BaseClass<IFutureVelocityMetricInstance>()
{
	BaseClassInfo_t info; // 94
	const CFutureVelocityMetricInstance* pDerived; // 97
	const IFutureVelocityMetricInstance* pBase; // 98
} /* size: 0, variables: 3 */

// <013F54CB> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CMotionMetricBase>::BaseClass<IMotionMetric>()
{
	BaseClassInfo_t info; // 94
	const CMotionMetricBase* pDerived; // 97
	const IMotionMetric* pBase; // 98
} /* size: 0, variables: 3 */

// <013F474C> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<IMotionMetricInstance>::BaseClass<Reflection::Object>()
{
	BaseClassInfo_t info; // 94
	const IMotionMetricInstance* pDerived; // 97
	const Object* pBase; // 98
} /* size: 0, variables: 3 */

// <013F45F0> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CMotionMetricInstance>::BaseClass<IMotionMetricInstance>()
{
	BaseClassInfo_t info; // 94
	const CMotionMetricInstance* pDerived; // 97
	const IMotionMetricInstance* pBase; // 98
} /* size: 0, variables: 3 */

// <013F43C6> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CPathMetric>::BaseClass<CMotionMetricBase>()
{
	BaseClassInfo_t info; // 94
	const CPathMetric* pDerived; // 97
	const CMotionMetricBase* pBase; // 98
} /* size: 0, variables: 3 */

// <013F40D2> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CPathMetricInstance>::BaseClass<CMotionMetricInstance>()
{
	BaseClassInfo_t info; // 94
	const CPathMetricInstance* pDerived; // 97
	const CMotionMetricInstance* pBase; // 98
} /* size: 0, variables: 3 */

// <013F408E> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CPathMetricInstance>::BaseClass<IPathMetricInstance>()
{
	BaseClassInfo_t info; // 94
	const CPathMetricInstance* pDerived; // 97
	const IPathMetricInstance* pBase; // 98
} /* size: 0, variables: 3 */

// <013F3ED4> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CStepsRemainingMetric>::BaseClass<CMotionMetricBase>()
{
	BaseClassInfo_t info; // 94
	const CStepsRemainingMetric* pDerived; // 97
	const CMotionMetricBase* pBase; // 98
} /* size: 0, variables: 3 */

// <013F3CA1> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CTimeRemainingMetric>::BaseClass<CMotionMetricBase>()
{
	BaseClassInfo_t info; // 94
	const CTimeRemainingMetric* pDerived; // 97
	const CMotionMetricBase* pBase; // 98
} /* size: 0, variables: 3 */

// <013505B4> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<IMotionClip>::BaseClass<Reflection::Object>()
{
	BaseClassInfo_t info; // 94
	const IMotionClip* pDerived; // 97
	const Object* pBase; // 98
} /* size: 0, variables: 3 */

// <01350570> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<IMotionClip>::BaseClass<IAnimTagSpanContainer>()
{
	BaseClassInfo_t info; // 94
	const IMotionClip* pDerived; // 97
	const IAnimTagSpanContainer* pBase; // 98
} /* size: 0, variables: 3 */

// <01350414> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CMotionClip>::BaseClass<IMotionClip>()
{
	BaseClassInfo_t info; // 94
	const CMotionClip* pDerived; // 97
	const IMotionClip* pBase; // 98
} /* size: 0, variables: 3 */

// <0134FFA3> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<IMotionClipGroup>::BaseClass<Reflection::Object>()
{
	BaseClassInfo_t info; // 94
	const IMotionClipGroup* pDerived; // 97
	const Object* pBase; // 98
} /* size: 0, variables: 3 */

// <0134FE47> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CMotionClipGroup>::BaseClass<IMotionClipGroup>()
{
	BaseClassInfo_t info; // 94
	const CMotionClipGroup* pDerived; // 97
	const IMotionClipGroup* pBase; // 98
} /* size: 0, variables: 3 */

// <0130EE8A> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<IAnimTag>::BaseClass<Reflection::Object>()
{
	BaseClassInfo_t info; // 94
	const IAnimTag* pDerived; // 97
	const Object* pBase; // 98
} /* size: 0, variables: 3 */

// <0130ED2E> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CAnimTagBase>::BaseClass<IAnimTag>()
{
	BaseClassInfo_t info; // 94
	const CAnimTagBase* pDerived; // 97
	const IAnimTag* pBase; // 98
} /* size: 0, variables: 3 */

// <0130BFA3> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CEventAnimTag>::BaseClass<CAnimTagBase>()
{
	BaseClassInfo_t info; // 94
	const CEventAnimTag* pDerived; // 97
	const CAnimTagBase* pBase; // 98
} /* size: 0, variables: 3 */

// <0130BF5F> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CEventAnimTag>::BaseClass<IEventAnimTag>()
{
	BaseClassInfo_t info; // 94
	const CEventAnimTag* pDerived; // 97
	const IEventAnimTag* pBase; // 98
} /* size: 0, variables: 3 */

// <0130BCA6> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CStringAnimTag>::BaseClass<CAnimTagBase>()
{
	BaseClassInfo_t info; // 94
	const CStringAnimTag* pDerived; // 97
	const CAnimTagBase* pBase; // 98
} /* size: 0, variables: 3 */

// <0130BC62> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CStringAnimTag>::BaseClass<IStringAnimTag>()
{
	BaseClassInfo_t info; // 94
	const CStringAnimTag* pDerived; // 97
	const IStringAnimTag* pBase; // 98
} /* size: 0, variables: 3 */

// <012747D3> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CSkeletalInputAnimNode>::BaseClass<CAnimNodeBase>()
{
	BaseClassInfo_t info; // 94
	const CSkeletalInputAnimNode* pDerived; // 97
	const CAnimNodeBase* pBase; // 98
} /* size: 0, variables: 3 */

// <01274404> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CSlowDownOnSlopesAnimNode>::BaseClass<CAnimNodeBase>()
{
	BaseClassInfo_t info; // 94
	const CSlowDownOnSlopesAnimNode* pDerived; // 97
	const CAnimNodeBase* pBase; // 98
} /* size: 0, variables: 3 */

// <01273FEA> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CSolveIKChainAnimNodeChainData>::BaseClass<ISolveIKChainSettings>()
{
	BaseClassInfo_t info; // 94
	const CSolveIKChainAnimNodeChainData* pDerived; // 97
	const ISolveIKChainSettings* pBase; // 98
} /* size: 0, variables: 3 */

// <01273E04> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CSolveIKChainAnimNode>::BaseClass<CAnimNodeBase>()
{
	BaseClassInfo_t info; // 94
	const CSolveIKChainAnimNode* pDerived; // 97
	const CAnimNodeBase* pBase; // 98
} /* size: 0, variables: 3 */

// <01273DC0> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CSolveIKChainAnimNode>::BaseClass<ISolveIKChainAnimNode>()
{
	BaseClassInfo_t info; // 94
	const CSolveIKChainAnimNode* pDerived; // 97
	const ISolveIKChainAnimNode* pBase; // 98
} /* size: 0, variables: 3 */

// <01273856> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CSolveIKChainAnimNodeInstance>::BaseClass<ISolveIKChainAnimNodeInstance>()
{
	BaseClassInfo_t info; // 94
	const CSolveIKChainAnimNodeInstance* pDerived; // 97
	const ISolveIKChainAnimNodeInstance* pBase; // 98
} /* size: 0, variables: 3 */

// <01273812> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CSolveIKChainAnimNodeInstance>::BaseClass<CAnimNodeInstanceBase>()
{
	BaseClassInfo_t info; // 94
	const CSolveIKChainAnimNodeInstance* pDerived; // 97
	const CAnimNodeInstanceBase* pBase; // 98
} /* size: 0, variables: 3 */

// <012735B3> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CSpeedScaleAnimNode>::BaseClass<CAnimNodeBase>()
{
	BaseClassInfo_t info; // 94
	const CSpeedScaleAnimNode* pDerived; // 97
	const CAnimNodeBase* pBase; // 98
} /* size: 0, variables: 3 */

// <01272FE5> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CStateMachineAnimNode>::BaseClass<CAnimNodeBase>()
{
	BaseClassInfo_t info; // 94
	const CStateMachineAnimNode* pDerived; // 97
	const CAnimNodeBase* pBase; // 98
} /* size: 0, variables: 3 */

// <01272FA1> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CStateMachineAnimNode>::BaseClass<IAnimStateMachine>()
{
	BaseClassInfo_t info; // 94
	const CStateMachineAnimNode* pDerived; // 97
	const IAnimStateMachine* pBase; // 98
} /* size: 0, variables: 3 */

// <01270DA1> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CStateMachineAnimNodeInstance>::BaseClass<CAnimNodeInstanceBase>()
{
	BaseClassInfo_t info; // 94
	const CStateMachineAnimNodeInstance* pDerived; // 97
	const CAnimNodeInstanceBase* pBase; // 98
} /* size: 0, variables: 3 */

// <01270D5D> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CStateMachineAnimNodeInstance>::BaseClass<IAnimStateMachineInstance>()
{
	BaseClassInfo_t info; // 94
	const CStateMachineAnimNodeInstance* pDerived; // 97
	const IAnimStateMachineInstance* pBase; // 98
} /* size: 0, variables: 3 */

// <01270A60> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CStopAtGoalAnimNode>::BaseClass<CAnimNodeBase>()
{
	BaseClassInfo_t info; // 94
	const CStopAtGoalAnimNode* pDerived; // 97
	const CAnimNodeBase* pBase; // 98
} /* size: 0, variables: 3 */

// <012706D3> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CSubGraphAnimNode>::BaseClass<CAnimNodeBase>()
{
	BaseClassInfo_t info; // 94
	const CSubGraphAnimNode* pDerived; // 97
	const CAnimNodeBase* pBase; // 98
} /* size: 0, variables: 3 */

// <0127068F> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CSubGraphAnimNode>::BaseClass<ISubGraphAnimNode>()
{
	BaseClassInfo_t info; // 94
	const CSubGraphAnimNode* pDerived; // 97
	const ISubGraphAnimNode* pBase; // 98
} /* size: 0, variables: 3 */

// <0126D3EB> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CSubtractAnimNode>::BaseClass<CAnimNodeBase>()
{
	BaseClassInfo_t info; // 94
	const CSubtractAnimNode* pDerived; // 97
	const CAnimNodeBase* pBase; // 98
} /* size: 0, variables: 3 */

// <0126D140> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CTurnHelperAnimNode>::BaseClass<CAnimNodeBase>()
{
	BaseClassInfo_t info; // 94
	const CTurnHelperAnimNode* pDerived; // 97
	const CAnimNodeBase* pBase; // 98
} /* size: 0, variables: 3 */

// <0126CE95> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CTwoBoneIKAnimNode>::BaseClass<CAnimNodeBase>()
{
	BaseClassInfo_t info; // 94
	const CTwoBoneIKAnimNode* pDerived; // 97
	const CAnimNodeBase* pBase; // 98
} /* size: 0, variables: 3 */

// <011652D7> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CFootStepTriggerAnimNode>::BaseClass<CAnimNodeBase>()
{
	BaseClassInfo_t info; // 94
	const CFootStepTriggerAnimNode* pDerived; // 97
	const CAnimNodeBase* pBase; // 98
} /* size: 0, variables: 3 */

// <01164B12> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CGroupAnimNode>::BaseClass<CAnimNodeBase>()
{
	BaseClassInfo_t info; // 94
	const CGroupAnimNode* pDerived; // 97
	const CAnimNodeBase* pBase; // 98
} /* size: 0, variables: 3 */

// <011620C0> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CGroupInputAnimNode>::BaseClass<CAnimNodeBase>()
{
	BaseClassInfo_t info; // 94
	const CGroupInputAnimNode* pDerived; // 97
	const CAnimNodeBase* pBase; // 98
} /* size: 0, variables: 3 */

// <01161BCD> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CGroupOutputAnimNode>::BaseClass<CAnimNodeBase>()
{
	BaseClassInfo_t info; // 94
	const CGroupOutputAnimNode* pDerived; // 97
	const CAnimNodeBase* pBase; // 98
} /* size: 0, variables: 3 */

// <01161941> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CHitReactAnimNode>::BaseClass<CAnimNodeBase>()
{
	BaseClassInfo_t info; // 94
	const CHitReactAnimNode* pDerived; // 97
	const CAnimNodeBase* pBase; // 98
} /* size: 0, variables: 3 */

// <0116168D> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CInputStreamAnimNode>::BaseClass<CAnimNodeBase>()
{
	BaseClassInfo_t info; // 94
	const CInputStreamAnimNode* pDerived; // 97
	const CAnimNodeBase* pBase; // 98
} /* size: 0, variables: 3 */

// <011613CB> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CInputStreamAnimNodeInstance>::BaseClass<CAnimNodeInstanceBase>()
{
	BaseClassInfo_t info; // 94
	const CInputStreamAnimNodeInstance* pDerived; // 97
	const CAnimNodeInstanceBase* pBase; // 98
} /* size: 0, variables: 3 */

// <01161387> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CInputStreamAnimNodeInstance>::BaseClass<IInputStreamAnimNodeInstance>()
{
	BaseClassInfo_t info; // 94
	const CInputStreamAnimNodeInstance* pDerived; // 97
	const IInputStreamAnimNodeInstance* pBase; // 98
} /* size: 0, variables: 3 */

// <01161128> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CJiggleBoneAnimNode>::BaseClass<CAnimNodeBase>()
{
	BaseClassInfo_t info; // 94
	const CJiggleBoneAnimNode* pDerived; // 97
	const CAnimNodeBase* pBase; // 98
} /* size: 0, variables: 3 */

// <01160CF8> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CLeanMatrixAnimNode>::BaseClass<CAnimNodeBase>()
{
	BaseClassInfo_t info; // 94
	const CLeanMatrixAnimNode* pDerived; // 97
	const CAnimNodeBase* pBase; // 98
} /* size: 0, variables: 3 */

// <01160CB4> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CLeanMatrixAnimNode>::BaseClass<ISequenceUser>()
{
	BaseClassInfo_t info; // 94
	const CLeanMatrixAnimNode* pDerived; // 97
	const ISequenceUser* pBase; // 98
} /* size: 0, variables: 3 */

// <011609FF> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CLookAtAnimNode>::BaseClass<CAnimNodeBase>()
{
	BaseClassInfo_t info; // 94
	const CLookAtAnimNode* pDerived; // 97
	const CAnimNodeBase* pBase; // 98
} /* size: 0, variables: 3 */

// <01160457> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CMotionMatchingAnimNode>::BaseClass<CAnimNodeBase>()
{
	BaseClassInfo_t info; // 94
	const CMotionMatchingAnimNode* pDerived; // 97
	const CAnimNodeBase* pBase; // 98
} /* size: 0, variables: 3 */

// <01160413> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CMotionMatchingAnimNode>::BaseClass<IMotionMatchingAnimNode>()
{
	BaseClassInfo_t info; // 94
	const CMotionMatchingAnimNode* pDerived; // 97
	const IMotionMatchingAnimNode* pBase; // 98
} /* size: 0, variables: 3 */

// <011603CF> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CMotionMatchingAnimNode>::BaseClass<ISequenceUser>()
{
	BaseClassInfo_t info; // 94
	const CMotionMatchingAnimNode* pDerived; // 97
	const ISequenceUser* pBase; // 98
} /* size: 0, variables: 3 */

// <0115D5F3> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CMotionMatchingAnimNodeInstance>::BaseClass<IMotionMatchingAnimNodeInstance>()
{
	BaseClassInfo_t info; // 94
	const CMotionMatchingAnimNodeInstance* pDerived; // 97
	const IMotionMatchingAnimNodeInstance* pBase; // 98
} /* size: 0, variables: 3 */

// <0115D5AF> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CMotionMatchingAnimNodeInstance>::BaseClass<CAnimNodeInstanceBase>()
{
	BaseClassInfo_t info; // 94
	const CMotionMatchingAnimNodeInstance* pDerived; // 97
	const CAnimNodeInstanceBase* pBase; // 98
} /* size: 0, variables: 3 */

// <0115C684> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CMoverAnimNode>::BaseClass<CAnimNodeBase>()
{
	BaseClassInfo_t info; // 94
	const CMoverAnimNode* pDerived; // 97
	const CAnimNodeBase* pBase; // 98
} /* size: 0, variables: 3 */

// <0115C3D9> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CPathHelperAnimNode>::BaseClass<CAnimNodeBase>()
{
	BaseClassInfo_t info; // 94
	const CPathHelperAnimNode* pDerived; // 97
	const CAnimNodeBase* pBase; // 98
} /* size: 0, variables: 3 */

// <0115C15C> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CRootAnimNode>::BaseClass<CAnimNodeBase>()
{
	BaseClassInfo_t info; // 94
	const CRootAnimNode* pDerived; // 97
	const CAnimNodeBase* pBase; // 98
} /* size: 0, variables: 3 */

// <0115BDE0> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CSelectorAnimNode>::BaseClass<CAnimNodeBase>()
{
	BaseClassInfo_t info; // 94
	const CSelectorAnimNode* pDerived; // 97
	const CAnimNodeBase* pBase; // 98
} /* size: 0, variables: 3 */

// <0115BD9C> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CSelectorAnimNode>::BaseClass<ISelectorAnimNode>()
{
	BaseClassInfo_t info; // 94
	const CSelectorAnimNode* pDerived; // 97
	const ISelectorAnimNode* pBase; // 98
} /* size: 0, variables: 3 */

// <0115AB34> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<ISequenceAnimNode>::BaseClass<IAnimTagSpanContainer>()
{
	BaseClassInfo_t info; // 94
	const ISequenceAnimNode* pDerived; // 97
	const IAnimTagSpanContainer* pBase; // 98
} /* size: 0, variables: 3 */

// <0115A84F> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CSequenceAnimNode>::BaseClass<CAnimNodeBase>()
{
	BaseClassInfo_t info; // 94
	const CSequenceAnimNode* pDerived; // 97
	const CAnimNodeBase* pBase; // 98
} /* size: 0, variables: 3 */

// <0115A80B> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CSequenceAnimNode>::BaseClass<ISequenceAnimNode>()
{
	BaseClassInfo_t info; // 94
	const CSequenceAnimNode* pDerived; // 97
	const ISequenceAnimNode* pBase; // 98
} /* size: 0, variables: 3 */

// <0115A7C7> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CSequenceAnimNode>::BaseClass<ISequenceUser>()
{
	BaseClassInfo_t info; // 94
	const CSequenceAnimNode* pDerived; // 97
	const ISequenceUser* pBase; // 98
} /* size: 0, variables: 3 */

// <01159E4F> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CSequenceAnimNodeInstance>::BaseClass<CAnimNodeInstanceBase>()
{
	BaseClassInfo_t info; // 94
	const CSequenceAnimNodeInstance* pDerived; // 97
	const CAnimNodeInstanceBase* pBase; // 98
} /* size: 0, variables: 3 */

// <01159E0B> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CSequenceAnimNodeInstance>::BaseClass<ISequenceAnimNodeInstance>()
{
	BaseClassInfo_t info; // 94
	const CSequenceAnimNodeInstance* pDerived; // 97
	const ISequenceAnimNodeInstance* pBase; // 98
} /* size: 0, variables: 3 */

// <01159C25> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CSetFacingAnimNode>::BaseClass<CAnimNodeBase>()
{
	BaseClassInfo_t info; // 94
	const CSetFacingAnimNode* pDerived; // 97
	const CAnimNodeBase* pBase; // 98
} /* size: 0, variables: 3 */

// <011598FA> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<ISingleFrameAnimNode>::BaseClass<IAnimTagSpanContainer>()
{
	BaseClassInfo_t info; // 94
	const ISingleFrameAnimNode* pDerived; // 97
	const IAnimTagSpanContainer* pBase; // 98
} /* size: 0, variables: 3 */

// <011596E6> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CSingleFrameAnimNode>::BaseClass<CAnimNodeBase>()
{
	BaseClassInfo_t info; // 94
	const CSingleFrameAnimNode* pDerived; // 97
	const CAnimNodeBase* pBase; // 98
} /* size: 0, variables: 3 */

// <011596A2> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CSingleFrameAnimNode>::BaseClass<ISingleFrameAnimNode>()
{
	BaseClassInfo_t info; // 94
	const CSingleFrameAnimNode* pDerived; // 97
	const ISingleFrameAnimNode* pBase; // 98
} /* size: 0, variables: 3 */

// <0115965E> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CSingleFrameAnimNode>::BaseClass<ISequenceUser>()
{
	BaseClassInfo_t info; // 94
	const CSingleFrameAnimNode* pDerived; // 97
	const ISequenceUser* pBase; // 98
} /* size: 0, variables: 3 */

// <01064FD3> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CAddAnimNode>::BaseClass<CAnimNodeBase>()
{
	BaseClassInfo_t info; // 94
	const CAddAnimNode* pDerived; // 97
	const CAnimNodeBase* pBase; // 98
} /* size: 0, variables: 3 */

// <01064C5E> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CAimMatrixAnimNode>::BaseClass<CAnimNodeBase>()
{
	BaseClassInfo_t info; // 94
	const CAimMatrixAnimNode* pDerived; // 97
	const CAnimNodeBase* pBase; // 98
} /* size: 0, variables: 3 */

// <01064C1A> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CAimMatrixAnimNode>::BaseClass<ISequenceUser>()
{
	BaseClassInfo_t info; // 94
	const CAimMatrixAnimNode* pDerived; // 97
	const ISequenceUser* pBase; // 98
} /* size: 0, variables: 3 */

// <01064923> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<IAnimNode>::BaseClass<Reflection::Object>()
{
	BaseClassInfo_t info; // 94
	const IAnimNode* pDerived; // 97
	const Object* pBase; // 98
} /* size: 0, variables: 3 */

// <010647C7> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CAnimNodeBase>::BaseClass<IAnimNode>()
{
	BaseClassInfo_t info; // 94
	const CAnimNodeBase* pDerived; // 97
	const IAnimNode* pBase; // 98
} /* size: 0, variables: 3 */

// <0106452D> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<IAnimNodeInstance>::BaseClass<Reflection::Object>()
{
	BaseClassInfo_t info; // 94
	const IAnimNodeInstance* pDerived; // 97
	const Object* pBase; // 98
} /* size: 0, variables: 3 */

// <010643D1> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CAnimNodeInstanceBase>::BaseClass<IAnimNodeInstance>()
{
	BaseClassInfo_t info; // 94
	const CAnimNodeInstanceBase* pDerived; // 97
	const IAnimNodeInstance* pBase; // 98
} /* size: 0, variables: 3 */

// <01063F2B> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CBlend2DItem>::BaseClass<IBlend2DItem>()
{
	BaseClassInfo_t info; // 94
	const CBlend2DItem* pDerived; // 97
	const IBlend2DItem* pBase; // 98
} /* size: 0, variables: 3 */

// <01063D45> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CBlend2DAnimNode>::BaseClass<CAnimNodeBase>()
{
	BaseClassInfo_t info; // 94
	const CBlend2DAnimNode* pDerived; // 97
	const CAnimNodeBase* pBase; // 98
} /* size: 0, variables: 3 */

// <01063D01> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CBlend2DAnimNode>::BaseClass<IBlend2DAnimNode>()
{
	BaseClassInfo_t info; // 94
	const CBlend2DAnimNode* pDerived; // 97
	const IBlend2DAnimNode* pBase; // 98
} /* size: 0, variables: 3 */

// <01063CBD> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CBlend2DAnimNode>::BaseClass<ISequenceUser>()
{
	BaseClassInfo_t info; // 94
	const CBlend2DAnimNode* pDerived; // 97
	const ISequenceUser* pBase; // 98
} /* size: 0, variables: 3 */

// <0106314B> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CBlend2DAnimNodeInstance>::BaseClass<CAnimNodeInstanceBase>()
{
	BaseClassInfo_t info; // 94
	const CBlend2DAnimNodeInstance* pDerived; // 97
	const CAnimNodeInstanceBase* pBase; // 98
} /* size: 0, variables: 3 */

// <01063107> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CBlend2DAnimNodeInstance>::BaseClass<IBlend2DAnimNodeInstance>()
{
	BaseClassInfo_t info; // 94
	const CBlend2DAnimNodeInstance* pDerived; // 97
	const IBlend2DAnimNodeInstance* pBase; // 98
} /* size: 0, variables: 3 */

// <01062E50> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CBlendAnimNode>::BaseClass<CAnimNodeBase>()
{
	BaseClassInfo_t info; // 94
	const CBlendAnimNode* pDerived; // 97
	const CAnimNodeBase* pBase; // 98
} /* size: 0, variables: 3 */

// <01062E0C> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CBlendAnimNode>::BaseClass<IBlendAnimNode>()
{
	BaseClassInfo_t info; // 94
	const CBlendAnimNode* pDerived; // 97
	const IBlendAnimNode* pBase; // 98
} /* size: 0, variables: 3 */

// <0106293F> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CBoneMaskAnimNode>::BaseClass<CAnimNodeBase>()
{
	BaseClassInfo_t info; // 94
	const CBoneMaskAnimNode* pDerived; // 97
	const CAnimNodeBase* pBase; // 98
} /* size: 0, variables: 3 */

// <010625C3> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CChoiceAnimNode>::BaseClass<CAnimNodeBase>()
{
	BaseClassInfo_t info; // 94
	const CChoiceAnimNode* pDerived; // 97
	const CAnimNodeBase* pBase; // 98
} /* size: 0, variables: 3 */

// <01061E01> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CChoreoAnimNode>::BaseClass<CAnimNodeBase>()
{
	BaseClassInfo_t info; // 94
	const CChoreoAnimNode* pDerived; // 97
	const CAnimNodeBase* pBase; // 98
} /* size: 0, variables: 3 */

// <01061B0F> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CChoreoAnimNodeInstance>::BaseClass<IChoreoAnimNodeInstance>()
{
	BaseClassInfo_t info; // 94
	const CChoreoAnimNodeInstance* pDerived; // 97
	const IChoreoAnimNodeInstance* pBase; // 98
} /* size: 0, variables: 3 */

// <01061ACB> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CChoreoAnimNodeInstance>::BaseClass<CAnimNodeInstanceBase>()
{
	BaseClassInfo_t info; // 94
	const CChoreoAnimNodeInstance* pDerived; // 97
	const CAnimNodeInstanceBase* pBase; // 98
} /* size: 0, variables: 3 */

// <01061842> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CCommentAnimNode>::BaseClass<CAnimNodeBase>()
{
	BaseClassInfo_t info; // 94
	const CCommentAnimNode* pDerived; // 97
	const CAnimNodeBase* pBase; // 98
} /* size: 0, variables: 3 */

// <010617FE> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CCommentAnimNode>::BaseClass<ICommentAnimNode>()
{
	BaseClassInfo_t info; // 94
	const CCommentAnimNode* pDerived; // 97
	const ICommentAnimNode* pBase; // 98
} /* size: 0, variables: 3 */

// <010615E8> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CCycleControlAnimNode>::BaseClass<CAnimNodeBase>()
{
	BaseClassInfo_t info; // 94
	const CCycleControlAnimNode* pDerived; // 97
	const CAnimNodeBase* pBase; // 98
} /* size: 0, variables: 3 */

// <0106133D> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CDirectionalBlendAnimNode>::BaseClass<CAnimNodeBase>()
{
	BaseClassInfo_t info; // 94
	const CDirectionalBlendAnimNode* pDerived; // 97
	const CAnimNodeBase* pBase; // 98
} /* size: 0, variables: 3 */

// <01061092> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CDirectPlaybackAnimNode>::BaseClass<CAnimNodeBase>()
{
	BaseClassInfo_t info; // 94
	const CDirectPlaybackAnimNode* pDerived; // 97
	const CAnimNodeBase* pBase; // 98
} /* size: 0, variables: 3 */

// <01060D82> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CDirectPlaybackAnimNodeInstance>::BaseClass<CAnimNodeInstanceBase>()
{
	BaseClassInfo_t info; // 94
	const CDirectPlaybackAnimNodeInstance* pDerived; // 97
	const CAnimNodeInstanceBase* pBase; // 98
} /* size: 0, variables: 3 */

// <01060B58> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CFollowAttachmentAnimNode>::BaseClass<CAnimNodeBase>()
{
	BaseClassInfo_t info; // 94
	const CFollowAttachmentAnimNode* pDerived; // 97
	const CAnimNodeBase* pBase; // 98
} /* size: 0, variables: 3 */

// <01060874> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CFollowPathAnimNode>::BaseClass<CAnimNodeBase>()
{
	BaseClassInfo_t info; // 94
	const CFollowPathAnimNode* pDerived; // 97
	const CAnimNodeBase* pBase; // 98
} /* size: 0, variables: 3 */

// <01060230> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CFootLockAnimNode>::BaseClass<CAnimNodeBase>()
{
	BaseClassInfo_t info; // 94
	const CFootLockAnimNode* pDerived; // 97
	const CAnimNodeBase* pBase; // 98
} /* size: 0, variables: 3 */

// <0105FC57> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CFootLockAnimNodeInstance>::BaseClass<IFootLockAnimNodeInstance>()
{
	BaseClassInfo_t info; // 94
	const CFootLockAnimNodeInstance* pDerived; // 97
	const IFootLockAnimNodeInstance* pBase; // 98
} /* size: 0, variables: 3 */

// <0105FC13> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CFootLockAnimNodeInstance>::BaseClass<CAnimNodeInstanceBase>()
{
	BaseClassInfo_t info; // 94
	const CFootLockAnimNodeInstance* pDerived; // 97
	const CAnimNodeInstanceBase* pBase; // 98
} /* size: 0, variables: 3 */

// <00F5867E> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<IAnimParameterInstance>::BaseClass<Reflection::Object>()
{
	BaseClassInfo_t info; // 94
	const IAnimParameterInstance* pDerived; // 97
	const Object* pBase; // 98
} /* size: 0, variables: 3 */

// <00F58520> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<IEnumAnimParameterInstance>::BaseClass<Reflection::Object>()
{
	BaseClassInfo_t info; // 94
	const IEnumAnimParameterInstance* pDerived; // 97
	const Object* pBase; // 98
} /* size: 0, variables: 3 */

// <00F583C2> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CEnumAnimParameterInstance>::BaseClass<CAnimParameterInstance>()
{
	BaseClassInfo_t info; // 94
	const CEnumAnimParameterInstance* pDerived; // 97
	const CAnimParameterInstance* pBase; // 98
} /* size: 0, variables: 3 */

// <00F5837E> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CEnumAnimParameterInstance>::BaseClass<IEnumAnimParameterInstance>()
{
	BaseClassInfo_t info; // 94
	const CEnumAnimParameterInstance* pDerived; // 97
	const IEnumAnimParameterInstance* pBase; // 98
} /* size: 0, variables: 3 */

// <00F58220> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CAnimParameterInstance>::BaseClass<IAnimParameterInstance>()
{
	BaseClassInfo_t info; // 94
	const CAnimParameterInstance* pDerived; // 97
	const IAnimParameterInstance* pBase; // 98
} /* size: 0, variables: 3 */

// <00F55D18> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<IAnimClipProperties>::BaseClass<Reflection::Object>()
{
	BaseClassInfo_t info; // 94
	const IAnimClipProperties* pDerived; // 97
	const Object* pBase; // 98
} /* size: 0, variables: 3 */

// <00F55BBA> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CClipProperties>::BaseClass<IAnimClipProperties>()
{
	BaseClassInfo_t info; // 94
	const CClipProperties* pDerived; // 97
	const IAnimClipProperties* pBase; // 98
} /* size: 0, variables: 3 */

// <00E2A781> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<IAnimationGraph>::BaseClass<Reflection::Object>()
{
	BaseClassInfo_t info; // 94
	const IAnimationGraph* pDerived; // 97
	const Object* pBase; // 98
} /* size: 0, variables: 3 */

// <00E2A621> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<IAnimationGraphBuilder>::BaseClass<IAnimationGraph>()
{
	BaseClassInfo_t info; // 94
	const IAnimationGraphBuilder* pDerived; // 97
	const IAnimationGraph* pBase; // 98
} /* size: 0, variables: 3 */

// <00E2A4C1> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CAnimationGraph>::BaseClass<IAnimationGraphBuilder>()
{
	BaseClassInfo_t info; // 94
	const CAnimationGraph* pDerived; // 97
	const IAnimationGraphBuilder* pBase; // 98
} /* size: 0, variables: 3 */

// <00E28F4D> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<IAnimationGraphInstance>::BaseClass<Reflection::Object>()
{
	BaseClassInfo_t info; // 94
	const IAnimationGraphInstance* pDerived; // 97
	const Object* pBase; // 98
} /* size: 0, variables: 3 */

// <00E28DED> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CAnimationGraphInstance>::BaseClass<IAnimationGraphInstance>()
{
	BaseClassInfo_t info; // 94
	const CAnimationGraphInstance* pDerived; // 97
	const IAnimationGraphInstance* pBase; // 98
} /* size: 0, variables: 3 */

// <00E24A40> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<IAnimationSubGraph>::BaseClass<Reflection::Object>()
{
	BaseClassInfo_t info; // 94
	const IAnimationSubGraph* pDerived; // 97
	const Object* pBase; // 98
} /* size: 0, variables: 3 */

// <00E21ACA> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<IAnimGraphSettingsGroup>::BaseClass<Reflection::Object>()
{
	BaseClassInfo_t info; // 94
	const IAnimGraphSettingsGroup* pDerived; // 97
	const Object* pBase; // 98
} /* size: 0, variables: 3 */

// <00E2196A> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CAnimGraphSettingsGroup>::BaseClass<IAnimGraphSettingsGroup>()
{
	BaseClassInfo_t info; // 94
	const CAnimGraphSettingsGroup* pDerived; // 97
	const IAnimGraphSettingsGroup* pBase; // 98
} /* size: 0, variables: 3 */

// <00E2180A> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CAnimGraphGeneralSettings>::BaseClass<CAnimGraphSettingsGroup>()
{
	BaseClassInfo_t info; // 94
	const CAnimGraphGeneralSettings* pDerived; // 97
	const CAnimGraphSettingsGroup* pBase; // 98
} /* size: 0, variables: 3 */

// <00E216AA> ../public/tier0/reflection/classinfo.h:92
// variables: 3
inline void CClassInfoT<CAnimGraphNetworkSettings>::BaseClass<CAnimGraphSettingsGroup>()
{
	BaseClassInfo_t info; // 94
	const CAnimGraphNetworkSettings* pDerived; // 97
	const CAnimGraphSettingsGroup* pBase; // 98
} /* size: 0, variables: 3 */

// <01A6C65E> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CControlValueCondition>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <01A6C630> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CControlValueCondition>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <01A6C28A> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CCycleCondition>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <01A6C25C> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CCycleCondition>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <01A6BFC1> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CFinishedCondition>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <01A6BF93> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CFinishedCondition>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <01A6BAF8> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CGroundCondition>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <01A6BACA> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CGroundCondition>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <01A6B83D> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CParameterAnimCondition>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <01A6B80F> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CParameterAnimCondition>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <01A6B472> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CPathStatusCondition>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <01A6B444> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CPathStatusCondition>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <01A6B1D9> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CTagCondition>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <01A6B1AB> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CTagCondition>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <01A6AF40> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CTimeCondition>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <01A6AF12> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CTimeCondition>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <014BBE84> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CBoolAnimParameter>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <014BBE56> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CBoolAnimParameter>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <014BBB52> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CEnumAnimParameter>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <014BBB24> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CEnumAnimParameter>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <014BB838> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CFloatAnimParameter>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <014BB80A> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CFloatAnimParameter>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <014BB5D7> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CIntAnimParameter>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <014BB5A9> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CIntAnimParameter>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <014BB376> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CQuaternionAnimParameter>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <014BB348> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CQuaternionAnimParameter>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <014BB115> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CVectorAnimParameter>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <014BB0E7> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CVectorAnimParameter>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <01467CCA> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CDampedPathAnimMotor>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <014676E0> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CPlayerInputAnimMotor>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <013F7048> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CBonePositionMetric>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <013F6E15> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CBoneVelocityMetric>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <013F6BE2> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CCurrentVelocityMetric>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <013F69B9> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CDistanceRemainingMetric>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <013F674A> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CFootCycleMetric>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <013F5F78> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CFutureFacingMetric>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <013F5AA4> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CFutureVelocityMetric>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <013F440A> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CPathMetric>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <013F3F18> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CStepsRemainingMetric>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <013F3CE5> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CTimeRemainingMetric>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <0130C015> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CEventAnimTag>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <0130BFE7> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CEventAnimTag>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <0130BD18> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CStringAnimTag>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <0130BCEA> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CStringAnimTag>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <01274873> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CSkeletalInputAnimNode>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <01274845> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CSkeletalInputAnimNode>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <01274817> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CSkeletalInputAnimNode>::operator[]<Attribute::Group>(Group& attr)
{
} /* size: 0 */

// <012744A4> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CSlowDownOnSlopesAnimNode>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <01274476> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CSlowDownOnSlopesAnimNode>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <01274448> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CSlowDownOnSlopesAnimNode>::operator[]<Attribute::Group>(Group& attr)
{
} /* size: 0 */

// <01273EA4> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CSolveIKChainAnimNode>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <01273E76> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CSolveIKChainAnimNode>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <01273E48> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CSolveIKChainAnimNode>::operator[]<Attribute::Group>(Group& attr)
{
} /* size: 0 */

// <01273653> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CSpeedScaleAnimNode>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <01273625> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CSpeedScaleAnimNode>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <012735F7> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CSpeedScaleAnimNode>::operator[]<Attribute::Group>(Group& attr)
{
} /* size: 0 */

// <01273085> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CStateMachineAnimNode>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <01273057> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CStateMachineAnimNode>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <01273029> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CStateMachineAnimNode>::operator[]<Attribute::Icon>(Icon& attr)
{
} /* size: 0 */

// <01270B00> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CStopAtGoalAnimNode>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <01270AD2> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CStopAtGoalAnimNode>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <01270AA4> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CStopAtGoalAnimNode>::operator[]<Attribute::Group>(Group& attr)
{
} /* size: 0 */

// <01270773> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CSubGraphAnimNode>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <01270745> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CSubGraphAnimNode>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <01270717> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CSubGraphAnimNode>::operator[]<Attribute::Icon>(Icon& attr)
{
} /* size: 0 */

// <0126D48B> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CSubtractAnimNode>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <0126D45D> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CSubtractAnimNode>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <0126D42F> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CSubtractAnimNode>::operator[]<Attribute::Group>(Group& attr)
{
} /* size: 0 */

// <0126D1E0> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CTurnHelperAnimNode>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <0126D1B2> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CTurnHelperAnimNode>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <0126D184> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CTurnHelperAnimNode>::operator[]<Attribute::Group>(Group& attr)
{
} /* size: 0 */

// <0126CF35> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CTwoBoneIKAnimNode>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <0126CF07> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CTwoBoneIKAnimNode>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <0126CED9> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CTwoBoneIKAnimNode>::operator[]<Attribute::Group>(Group& attr)
{
} /* size: 0 */

// <01165377> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CFootStepTriggerAnimNode>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <01165349> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CFootStepTriggerAnimNode>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <0116531B> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CFootStepTriggerAnimNode>::operator[]<Attribute::Group>(Group& attr)
{
} /* size: 0 */

// <01164B56> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CGroupAnimNode>::operator[]<Attribute::Icon>(Icon& attr)
{
} /* size: 0 */

// <01162160> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CGroupInputAnimNode>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <01161C6D> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CGroupOutputAnimNode>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <01161C3F> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CGroupOutputAnimNode>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <01161C11> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CGroupOutputAnimNode>::operator[]<Attribute::Icon>(Icon& attr)
{
} /* size: 0 */

// <011619E1> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CHitReactAnimNode>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <011619B3> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CHitReactAnimNode>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <0116172D> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CInputStreamAnimNode>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <011616FF> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CInputStreamAnimNode>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <011616D1> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CInputStreamAnimNode>::operator[]<Attribute::Group>(Group& attr)
{
} /* size: 0 */

// <011611C8> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CJiggleBoneAnimNode>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <0116119A> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CJiggleBoneAnimNode>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <0116116C> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CJiggleBoneAnimNode>::operator[]<Attribute::Group>(Group& attr)
{
} /* size: 0 */

// <01160D98> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CLeanMatrixAnimNode>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <01160A71> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CLookAtAnimNode>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <01160A43> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CLookAtAnimNode>::operator[]<Attribute::Group>(Group& attr)
{
} /* size: 0 */

// <011604F7> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CMotionMatchingAnimNode>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <011604C9> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CMotionMatchingAnimNode>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <0116049B> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CMotionMatchingAnimNode>::operator[]<Attribute::Group>(Group& attr)
{
} /* size: 0 */

// <0115C724> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CMoverAnimNode>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <0115C6F6> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CMoverAnimNode>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <0115C6C8> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CMoverAnimNode>::operator[]<Attribute::Group>(Group& attr)
{
} /* size: 0 */

// <0115C479> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CPathHelperAnimNode>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <0115C44B> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CPathHelperAnimNode>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <0115C1CE> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CRootAnimNode>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <0115C1A0> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CRootAnimNode>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <0115BE80> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CSelectorAnimNode>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <0115BE52> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CSelectorAnimNode>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <0115BE24> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CSelectorAnimNode>::operator[]<Attribute::Group>(Group& attr)
{
} /* size: 0 */

// <0115A91D> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CSequenceAnimNode>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <0115A8EF> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CSequenceAnimNode>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <0115A8C1> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CSequenceAnimNode>::operator[]<Attribute::Icon>(Icon& attr)
{
} /* size: 0 */

// <0115A893> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CSequenceAnimNode>::operator[]<Attribute::Group>(Group& attr)
{
} /* size: 0 */

// <01159CC5> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CSetFacingAnimNode>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <01159C97> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CSetFacingAnimNode>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <01159C69> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CSetFacingAnimNode>::operator[]<Attribute::Group>(Group& attr)
{
} /* size: 0 */

// <011597B4> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CSingleFrameAnimNode>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <01159786> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CSingleFrameAnimNode>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <01159758> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CSingleFrameAnimNode>::operator[]<Attribute::Icon>(Icon& attr)
{
} /* size: 0 */

// <0115972A> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CSingleFrameAnimNode>::operator[]<Attribute::Group>(Group& attr)
{
} /* size: 0 */

// <01065073> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CAddAnimNode>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <01065045> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CAddAnimNode>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <01065017> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CAddAnimNode>::operator[]<Attribute::Group>(Group& attr)
{
} /* size: 0 */

// <01064CFE> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CAimMatrixAnimNode>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <01064CA2> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CAimMatrixAnimNode>::operator[]<Attribute::Group>(Group& attr)
{
} /* size: 0 */

// <01063DE5> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CBlend2DAnimNode>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <01063DB7> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CBlend2DAnimNode>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <01063D89> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CBlend2DAnimNode>::operator[]<Attribute::Group>(Group& attr)
{
} /* size: 0 */

// <01062EF0> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CBlendAnimNode>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <01062EC2> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CBlendAnimNode>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <01062E94> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CBlendAnimNode>::operator[]<Attribute::Group>(Group& attr)
{
} /* size: 0 */

// <010629DF> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CBoneMaskAnimNode>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <010629B1> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CBoneMaskAnimNode>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <01062983> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CBoneMaskAnimNode>::operator[]<Attribute::Group>(Group& attr)
{
} /* size: 0 */

// <01062663> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CChoiceAnimNode>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <01062635> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CChoiceAnimNode>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <01061EA1> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CChoreoAnimNode>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <01061E73> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CChoreoAnimNode>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <01061E45> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CChoreoAnimNode>::operator[]<Attribute::Group>(Group& attr)
{
} /* size: 0 */

// <010618B4> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CCommentAnimNode>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <01061886> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CCommentAnimNode>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <01061688> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CCycleControlAnimNode>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <0106165A> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CCycleControlAnimNode>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <0106162C> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CCycleControlAnimNode>::operator[]<Attribute::Group>(Group& attr)
{
} /* size: 0 */

// <010613DD> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CDirectionalBlendAnimNode>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <010613AF> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CDirectionalBlendAnimNode>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <01061381> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CDirectionalBlendAnimNode>::operator[]<Attribute::Group>(Group& attr)
{
} /* size: 0 */

// <01061132> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CDirectPlaybackAnimNode>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <01061104> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CDirectPlaybackAnimNode>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <010610D6> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CDirectPlaybackAnimNode>::operator[]<Attribute::Group>(Group& attr)
{
} /* size: 0 */

// <01060BF8> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CFollowAttachmentAnimNode>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <01060BCA> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CFollowAttachmentAnimNode>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <01060B9C> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CFollowAttachmentAnimNode>::operator[]<Attribute::Group>(Group& attr)
{
} /* size: 0 */

// <01060914> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CFollowPathAnimNode>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <010608E6> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CFollowPathAnimNode>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <010608B8> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CFollowPathAnimNode>::operator[]<Attribute::Group>(Group& attr)
{
} /* size: 0 */

// <010602D0> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CFootLockAnimNode>::operator[]<Attribute::FriendlyName>(FriendlyName& attr)
{
} /* size: 0 */

// <010602A2> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CFootLockAnimNode>::operator[]<Attribute::Color>(Color& attr)
{
} /* size: 0 */

// <01060274> ../public/tier0/reflection/classinfo.h:106
inline void CClassInfoT<CFootLockAnimNode>::operator[]<Attribute::Group>(Group& attr)
{
} /* size: 0 */

