
//
// reflection/classinfo.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 9
//

// <01C420A8> reflection/classinfo.cpp:13
// function calls: 10
void CClassInfo::CClassInfo(const char* typeName, ClassID typeID)
{
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::ValidateGrowSize(); // 475
	CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute> >, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 178
	Init(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this); // 178
	CUtlHashtable(const CUtlHashtable<Reflection::ClassID, std::shared_ptr<Reflection::CAttribute>, DefaultHashFunctor<Reflection::ClassID> this,
			int minimumSize);  // 20
	CAttributeContainer::CAttributeContainer(); // 15
	ResetDbgInfo(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 530
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >  this,
			int growSize,
			int initCapacity);  // 418
	CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >::CUtlVector(); // 15
} /* size: 97, inline expansions: 10 (102 bytes) */

// <01C42077> reflection/classinfo.cpp:13
void CClassInfo::CClassInfo(const char* typeName, ClassID typeID)
{
} /* size: 0 */

// <01C41C99> reflection/classinfo.cpp:19
// function calls: 15
void CClassInfo::CClassInfo(CClassInfo& rhs)
{
	ResetDbgInfo(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> > this); // 530
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::ValidateGrowSize(); // 475
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >  this,
			int growSize,
			int initCapacity);  // 437
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::IsExternallyAllocated(); // 535
	{
	}
	V_swap_through_temp<unsigned int>(unsigned int& x,
						unsigned int& y);  // 536
	V_swap_through_temp<Reflection::CClassInfo::BaseClassInfo_t*>(BaseClassInfo_t *& x,
									BaseClassInfo_t *& y);  // 537
	V_swap_through_temp<int>(int& x,
				int& y);  // 538
	CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Swap(
		CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>& mem);  // 1351
	swap<int>(int& __a,
			int& __b);  // 19
	V_swap<int>(int& x,
			int& y);  // 1352
	swap<Reflection::CClassInfo::BaseClassInfo_t*>(BaseClassInfo_t *& __a,
							BaseClassInfo_t *& __b);  // 19
	V_swap<Reflection::CClassInfo::BaseClassInfo_t*>(BaseClassInfo_t *& x,
							BaseClassInfo_t *& y);  // 1354
	Swap(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >  this,
		CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >& vec);  // 437
	CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >::CUtlVector(
			CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >& src);  // 21
} /* size: 0, inline expansions: 15 (689 bytes) */

// <01C41C74> reflection/classinfo.cpp:19
void CClassInfo::CClassInfo(CClassInfo& rhs)
{
} /* size: 0 */

// <01C41AAD> reflection/classinfo.cpp:28
// variables: 5
// function calls: 5
void CClassInfo::GetAttributeByID(ClassID typeID)
{
	const CAttribute* pAttr; // 34
	{
		const BaseClassInfo_t& baseClass; // 37
		const CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >& __for_range; // 30359
		const_iterator __for_begin; // 26937
		const_iterator __for_end; // 26937
		CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Base(); // 113
		Base(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, i this); // 103
		begin(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, i this); // 37
		Count(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, i this); // 105
		end(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, i this); // 37
	}
} /* size: 129, variables: 1 */

// <01C423F7> reflection/classinfo.cpp:48
// variables: 36
// function calls: 62
void CClassInfo::IsDerivedFrom(ClassID baseTypeID)
{
	ClassID::operator==(
			ClassID nOther);  // 50
	{
		const BaseClassInfo_t& baseClass; // 52
		const CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >& __for_range; // 33182
		const_iterator __for_begin; // 33192
		const_iterator __for_end; // 33202
		CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Base(); // 113
		Base(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, i this); // 103
		begin(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, i this); // 52
		Count(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, i this); // 105
		end(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, i this); // 52
		ClassID::operator==(
				ClassID nOther);  // 50
		{
			const BaseClassInfo_t& baseClass; // 52
			const CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >& __for_range; // 33182
			const_iterator __for_begin; // 33192
			const_iterator __for_end; // 33202
			CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Base(); // 113
			Base(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, i this); // 103
			begin(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, i this); // 52
			Count(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, i this); // 105
			end(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, i this); // 52
			ClassID::operator==(
					ClassID nOther);  // 50
			{
				const BaseClassInfo_t& baseClass; // 52
				const CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >& __for_range; // 33182
				const_iterator __for_begin; // 33192
				const_iterator __for_end; // 33202
				CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Base(); // 113
				Base(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, i this); // 103
				begin(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, i this); // 52
				Count(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, i this); // 105
				end(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, i this); // 52
				ClassID::operator==(
						ClassID nOther);  // 50
				{
					const BaseClassInfo_t& baseClass; // 52
					const CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >& __for_range; // 33182
					const_iterator __for_begin; // 33192
					const_iterator __for_end; // 33202
					CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Base(); // 113
					Base(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, i this); // 103
					begin(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, i this); // 52
					Count(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, i this); // 105
					end(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, i this); // 52
					ClassID::operator==(
							ClassID nOther);  // 50
					{
						const BaseClassInfo_t& baseClass; // 52
						const CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >& __for_range; // 33182
						const_iterator __for_begin; // 33192
						const_iterator __for_end; // 33202
						CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Base(); // 113
						Base(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, i this); // 103
						begin(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, i this); // 52
						Count(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, i this); // 105
						end(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, i this); // 52
						ClassID::operator==(
								ClassID nOther);  // 50
						{
							const BaseClassInfo_t& baseClass; // 52
							const CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >& __for_range; // 33182
							const_iterator __for_begin; // 33192
							const_iterator __for_end; // 33202
							CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Base(); // 113
							Base(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, i this); // 103
							begin(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, i this); // 52
							Count(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, i this); // 105
							end(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, i this); // 52
							ClassID::operator==(
									ClassID nOther);  // 50
							{
								const BaseClassInfo_t& baseClass; // 52
								const CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >& __for_range; // 33182
								const_iterator __for_begin; // 33192
								const_iterator __for_end; // 33202
								CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Base(); // 113
								Base(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, i this); // 103
								begin(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, i this); // 52
								Count(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, i this); // 105
								end(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, i this); // 52
								ClassID::operator==(
										ClassID nOther);  // 50
								{
									const BaseClassInfo_t& baseClass; // 52
									const CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >& __for_range; // 33182
									const_iterator __for_begin; // 33192
									const_iterator __for_end; // 33202
									CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Base(); // 113
									Base(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, i this); // 103
									begin(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, i this); // 52
									Count(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, i this); // 105
									end(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, i this); // 52
									ClassID::operator==(
											ClassID nOther);  // 50
									{
										const BaseClassInfo_t& baseClass; // 52
										const CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >& __for_range; // 33182
										const_iterator __for_begin; // 33192
										const_iterator __for_end; // 33202
										CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Base(); // 113
										Base(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, i this); // 103
										begin(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, i this); // 52
										Count(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, i this); // 105
										end(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, i this); // 52
									}
									CClassInfo::IsDerivedFrom(
											ClassID baseTypeID);  // 54
								}
								CClassInfo::IsDerivedFrom(
										ClassID baseTypeID);  // 54
							}
							CClassInfo::IsDerivedFrom(
									ClassID baseTypeID);  // 54
						}
						CClassInfo::IsDerivedFrom(
								ClassID baseTypeID);  // 54
					}
					CClassInfo::IsDerivedFrom(
							ClassID baseTypeID);  // 54
				}
				CClassInfo::IsDerivedFrom(
						ClassID baseTypeID);  // 54
			}
			CClassInfo::IsDerivedFrom(
					ClassID baseTypeID);  // 54
		}
		CClassInfo::IsDerivedFrom(
				ClassID baseTypeID);  // 54
	}
} /* size: 895, inline expansions: 1 (0 bytes) */

// <01C41A5C> reflection/classinfo.cpp:48
// variables: 4
void CClassInfo::IsDerivedFrom(ClassID baseTypeID)
{
	{
		const BaseClassInfo_t& baseClass; // 52
		const CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >& __for_range; // 30359
		const_iterator __for_begin; // 26937
		const_iterator __for_end; // 26937
	}
} /* size: 0 */

// <01C4172B> reflection/classinfo.cpp:64
// variables: 8
// function calls: 13
void* CClassInfo::CastToBase(char* derived, ClassID baseTypeID)
{
	{
		const BaseClassInfo_t& baseClass; // 70
		const CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >& __for_range; // 30359
		const_iterator __for_begin; // 26937
		const_iterator __for_end; // 26937
		CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Base(); // 113
		Base(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, i this); // 103
		begin(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, i this); // 70
		Count(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, i this); // 105
		end(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, i this); // 70
		ClassID::operator==(
				ClassID nOther);  // 50
		{
			const BaseClassInfo_t& baseClass; // 52
			const CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >& __for_range; // 33182
			const_iterator __for_begin; // 33192
			const_iterator __for_end; // 33202
			CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int>::Base(); // 113
			Base(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, i this); // 103
			begin(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, i this); // 52
			Count(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, i this); // 105
			end(const CUtlVectorBase<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, i this); // 52
		}
		CClassInfo::IsDerivedFrom(
				ClassID baseTypeID);  // 72
	}
	ClassID::operator==(
			ClassID nOther);  // 68
} /* size: 331, inline expansions: 1 (10 bytes) */

// <01C416CA> reflection/classinfo.cpp:83
// variables: 4
const void* CClassInfo::CastToBase(const char* derived, ClassID baseTypeID)
{
	{
		const BaseClassInfo_t& baseClass; // 89
		const CUtlVector<Reflection::CClassInfo::BaseClassInfo_t, CUtlMemory<Reflection::CClassInfo::BaseClassInfo_t, int> >& __for_range; // 30359
		const_iterator __for_begin; // 26937
		const_iterator __for_end; // 26937
	}
} /* size: 0 */

