
//
// public/tier0/utlstack.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libvfx_vulkan.so
//
//	functions: 80
//	classes: 10
//

// <000411A2> ../public/tier0/utlstack.h:26
// member functions: 46
// member variables: 3
// class size: 32
class CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > {
	/* ../public/tier0/utlstack.h:105 */
	void CUtlStack(CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >* , int, int);
	/* ../public/tier0/utlstack.h:112 */
	void ~CUtlStack(CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >* );
	/* ../public/tier0/utlstack.h:123 */
	void CopyFrom(CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >* , const CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >& );
	/* ../public/tier0/utlstack.h:138 */
	KeyValues3* & operator[](CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >* , int);
	/* ../public/tier0/utlstack.h:145 */
	KeyValues3* const& operator[](const CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >* , int);
	/* ../public/tier0/utlstack.h:152 */
	KeyValues3* & Element(CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >* , int);
	/* ../public/tier0/utlstack.h:159 */
	KeyValues3* const& Element(const CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >* , int);
	/* ../public/tier0/utlstack.h:171 */
	KeyValues3** Base(CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >* );
	/* ../public/tier0/utlstack.h:177 */
	KeyValues3* const* Base(const CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >* );
	/* ../public/tier0/utlstack.h:187 */
	KeyValues3* & Top(CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >* );
	/* ../public/tier0/utlstack.h:194 */
	KeyValues3* const& Top(const CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >* );
	/* ../public/tier0/utlstack.h:205 */
	int Count(const CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >* );
	/* ../public/tier0/utlstack.h:216 */
	bool IsIdxValid(const CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >* , int);
	/* ../public/tier0/utlstack.h:253 */
	int Push(CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >* );
	/* ../public/tier0/utlstack.h:265 */
	int Push(CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >* , KeyValues3* const& );
	/* ../public/tier0/utlstack.h:278 */
	void Pop(CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >* );
	/* ../public/tier0/utlstack.h:286 */
	void Pop(CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >* , KeyValues3* & );
	/* ../public/tier0/utlstack.h:294 */
	void PopMultiple(CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >* , int);
	/* ../public/tier0/utlstack.h:241 */
	void EnsureCapacity(CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >* , int);
	/* ../public/tier0/utlstack.h:308 */
	void Clear(CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >* );
	/* ../public/tier0/utlstack.h:322 */
	void Purge(CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >* );
private:
	/* ../public/tier0/utlstack.h:226 */
	void GrowStack(CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >* );
	/* ../public/tier0/utlstack.h:95 */
	void ResetDbgInfo(CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >* );
	CUtlMemory<KeyValues3*, int> m_Memory; /* 0 16 */
	int m_Size; /* 16 4 */
	KeyValues3 * * m_pElements; /* 24 8 */
	void CUtlStack(class CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *, int, int); /* linkage=_ZN9CUtlStackIP10KeyValues310CUtlMemoryIS1_iEEC4Eii */
	void ~CUtlStack(class CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *); /* linkage=_ZN9CUtlStackIP10KeyValues310CUtlMemoryIS1_iEED4Ev */
	void CopyFrom(class CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *, const class CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >  &); /* linkage=_ZN9CUtlStackIP10KeyValues310CUtlMemoryIS1_iEE8CopyFromERKS4_ */
	class KeyValues3 * & operator[](class CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *, int); /* linkage=_ZN9CUtlStackIP10KeyValues310CUtlMemoryIS1_iEEixEi */
	class KeyValues3 * const & operator[](const class CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >  *, int); /* linkage=_ZNK9CUtlStackIP10KeyValues310CUtlMemoryIS1_iEEixEi */
	class KeyValues3 * & Element(class CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *, int); /* linkage=_ZN9CUtlStackIP10KeyValues310CUtlMemoryIS1_iEE7ElementEi */
	class KeyValues3 * const & Element(const class CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >  *, int); /* linkage=_ZNK9CUtlStackIP10KeyValues310CUtlMemoryIS1_iEE7ElementEi */
	class KeyValues3 * * Base(class CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *); /* linkage=_ZN9CUtlStackIP10KeyValues310CUtlMemoryIS1_iEE4BaseEv */
	class KeyValues3 * const * Base(const class CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >  *); /* linkage=_ZNK9CUtlStackIP10KeyValues310CUtlMemoryIS1_iEE4BaseEv */
	class KeyValues3 * & Top(class CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *); /* linkage=_ZN9CUtlStackIP10KeyValues310CUtlMemoryIS1_iEE3TopEv */
	class KeyValues3 * const & Top(const class CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >  *); /* linkage=_ZNK9CUtlStackIP10KeyValues310CUtlMemoryIS1_iEE3TopEv */
	int Count(const class CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >  *); /* linkage=_ZNK9CUtlStackIP10KeyValues310CUtlMemoryIS1_iEE5CountEv */
	bool IsIdxValid(const class CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >  *, int); /* linkage=_ZNK9CUtlStackIP10KeyValues310CUtlMemoryIS1_iEE10IsIdxValidEi */
	int Push(class CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *); /* linkage=_ZN9CUtlStackIP10KeyValues310CUtlMemoryIS1_iEE4PushEv */
	int Push(class CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *, class KeyValues3 * const &); /* linkage=_ZN9CUtlStackIP10KeyValues310CUtlMemoryIS1_iEE4PushERKS1_ */
	void Pop(class CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *); /* linkage=_ZN9CUtlStackIP10KeyValues310CUtlMemoryIS1_iEE3PopEv */
	void Pop(class CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *, class KeyValues3 * &); /* linkage=_ZN9CUtlStackIP10KeyValues310CUtlMemoryIS1_iEE3PopERS1_ */
	void PopMultiple(class CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *, int); /* linkage=_ZN9CUtlStackIP10KeyValues310CUtlMemoryIS1_iEE11PopMultipleEi */
	void EnsureCapacity(class CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *, int); /* linkage=_ZN9CUtlStackIP10KeyValues310CUtlMemoryIS1_iEE14EnsureCapacityEi */
	void Clear(class CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *); /* linkage=_ZN9CUtlStackIP10KeyValues310CUtlMemoryIS1_iEE5ClearEv */
	void Purge(class CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *); /* linkage=_ZN9CUtlStackIP10KeyValues310CUtlMemoryIS1_iEE5PurgeEv */
	void GrowStack(class CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *); /* linkage=_ZN9CUtlStackIP10KeyValues310CUtlMemoryIS1_iEE9GrowStackEv */
	void ResetDbgInfo(class CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *); /* linkage=_ZN9CUtlStackIP10KeyValues310CUtlMemoryIS1_iEE12ResetDbgInfoEv */
};

// <00041C2A> ../public/tier0/utlstack.h:26
// member functions: 46
// member variables: 3
// class size: 32
class CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > {
	/* ../public/tier0/utlstack.h:105 */
	void CUtlStack(CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >* , int, int);
	/* ../public/tier0/utlstack.h:112 */
	void ~CUtlStack(CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >* );
	/* ../public/tier0/utlstack.h:123 */
	void CopyFrom(CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >* , const CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >& );
	/* ../public/tier0/utlstack.h:138 */
	const KeyValues3* & operator[](CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >* , int);
	/* ../public/tier0/utlstack.h:145 */
	const KeyValues3* const& operator[](const CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >* , int);
	/* ../public/tier0/utlstack.h:152 */
	const KeyValues3* & Element(CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >* , int);
	/* ../public/tier0/utlstack.h:159 */
	const KeyValues3* const& Element(const CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >* , int);
	/* ../public/tier0/utlstack.h:171 */
	const KeyValues3* * Base(CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >* );
	/* ../public/tier0/utlstack.h:177 */
	const KeyValues3* const* Base(const CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >* );
	/* ../public/tier0/utlstack.h:187 */
	const KeyValues3* & Top(CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >* );
	/* ../public/tier0/utlstack.h:194 */
	const KeyValues3* const& Top(const CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >* );
	/* ../public/tier0/utlstack.h:205 */
	int Count(const CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >* );
	/* ../public/tier0/utlstack.h:216 */
	bool IsIdxValid(const CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >* , int);
	/* ../public/tier0/utlstack.h:253 */
	int Push(CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >* );
	/* ../public/tier0/utlstack.h:265 */
	int Push(CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >* , const KeyValues3* const& );
	/* ../public/tier0/utlstack.h:278 */
	void Pop(CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >* );
	/* ../public/tier0/utlstack.h:286 */
	void Pop(CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >* , const KeyValues3* & );
	/* ../public/tier0/utlstack.h:294 */
	void PopMultiple(CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >* , int);
	/* ../public/tier0/utlstack.h:241 */
	void EnsureCapacity(CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >* , int);
	/* ../public/tier0/utlstack.h:308 */
	void Clear(CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >* );
	/* ../public/tier0/utlstack.h:322 */
	void Purge(CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >* );
private:
	/* ../public/tier0/utlstack.h:226 */
	void GrowStack(CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >* );
	/* ../public/tier0/utlstack.h:95 */
	void ResetDbgInfo(CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >* );
	CUtlMemory<const KeyValues3*, int> m_Memory; /* 0 16 */
	int m_Size; /* 16 4 */
	const class KeyValues3 * * m_pElements; /* 24 8 */
	void CUtlStack(class CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *, int, int); /* linkage=_ZN9CUtlStackIPK10KeyValues310CUtlMemoryIS2_iEEC4Eii */
	void ~CUtlStack(class CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *); /* linkage=_ZN9CUtlStackIPK10KeyValues310CUtlMemoryIS2_iEED4Ev */
	void CopyFrom(class CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *, const class CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >  &); /* linkage=_ZN9CUtlStackIPK10KeyValues310CUtlMemoryIS2_iEE8CopyFromERKS5_ */
	const class KeyValues3  * & operator[](class CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *, int); /* linkage=_ZN9CUtlStackIPK10KeyValues310CUtlMemoryIS2_iEEixEi */
	const class KeyValues3  * const & operator[](const class CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >  *, int); /* linkage=_ZNK9CUtlStackIPK10KeyValues310CUtlMemoryIS2_iEEixEi */
	const class KeyValues3  * & Element(class CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *, int); /* linkage=_ZN9CUtlStackIPK10KeyValues310CUtlMemoryIS2_iEE7ElementEi */
	const class KeyValues3  * const & Element(const class CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >  *, int); /* linkage=_ZNK9CUtlStackIPK10KeyValues310CUtlMemoryIS2_iEE7ElementEi */
	const class KeyValues3  * * Base(class CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *); /* linkage=_ZN9CUtlStackIPK10KeyValues310CUtlMemoryIS2_iEE4BaseEv */
	const class KeyValues3  * const * Base(const class CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >  *); /* linkage=_ZNK9CUtlStackIPK10KeyValues310CUtlMemoryIS2_iEE4BaseEv */
	const class KeyValues3  * & Top(class CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *); /* linkage=_ZN9CUtlStackIPK10KeyValues310CUtlMemoryIS2_iEE3TopEv */
	const class KeyValues3  * const & Top(const class CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >  *); /* linkage=_ZNK9CUtlStackIPK10KeyValues310CUtlMemoryIS2_iEE3TopEv */
	int Count(const class CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >  *); /* linkage=_ZNK9CUtlStackIPK10KeyValues310CUtlMemoryIS2_iEE5CountEv */
	bool IsIdxValid(const class CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >  *, int); /* linkage=_ZNK9CUtlStackIPK10KeyValues310CUtlMemoryIS2_iEE10IsIdxValidEi */
	int Push(class CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *); /* linkage=_ZN9CUtlStackIPK10KeyValues310CUtlMemoryIS2_iEE4PushEv */
	int Push(class CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *, const class KeyValues3  * const &); /* linkage=_ZN9CUtlStackIPK10KeyValues310CUtlMemoryIS2_iEE4PushERKS2_ */
	void Pop(class CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *); /* linkage=_ZN9CUtlStackIPK10KeyValues310CUtlMemoryIS2_iEE3PopEv */
	void Pop(class CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *, const class KeyValues3  * &); /* linkage=_ZN9CUtlStackIPK10KeyValues310CUtlMemoryIS2_iEE3PopERS2_ */
	void PopMultiple(class CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *, int); /* linkage=_ZN9CUtlStackIPK10KeyValues310CUtlMemoryIS2_iEE11PopMultipleEi */
	void EnsureCapacity(class CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *, int); /* linkage=_ZN9CUtlStackIPK10KeyValues310CUtlMemoryIS2_iEE14EnsureCapacityEi */
	void Clear(class CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *); /* linkage=_ZN9CUtlStackIPK10KeyValues310CUtlMemoryIS2_iEE5ClearEv */
	void Purge(class CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *); /* linkage=_ZN9CUtlStackIPK10KeyValues310CUtlMemoryIS2_iEE5PurgeEv */
	void GrowStack(class CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *); /* linkage=_ZN9CUtlStackIPK10KeyValues310CUtlMemoryIS2_iEE9GrowStackEv */
	void ResetDbgInfo(class CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *); /* linkage=_ZN9CUtlStackIPK10KeyValues310CUtlMemoryIS2_iEE12ResetDbgInfoEv */
};

// <030F19DE> ../public/tier0/utlstack.h:26
// member functions: 46
// member variables: 3
// class size: 32
class CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> > {
	/* ../public/tier0/utlstack.h:105 */
	void CUtlStack(CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >* , int, int);
	/* ../public/tier0/utlstack.h:112 */
	void ~CUtlStack(CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >* );
	/* ../public/tier0/utlstack.h:123 */
	void CopyFrom(CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >* , const CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >& );
	/* ../public/tier0/utlstack.h:138 */
	CUtlStringToken& operator[](CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >* , int);
	/* ../public/tier0/utlstack.h:145 */
	const CUtlStringToken& operator[](const CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >* , int);
	/* ../public/tier0/utlstack.h:152 */
	CUtlStringToken& Element(CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >* , int);
	/* ../public/tier0/utlstack.h:159 */
	const CUtlStringToken& Element(const CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >* , int);
	/* ../public/tier0/utlstack.h:171 */
	CUtlStringToken* Base(CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >* );
	/* ../public/tier0/utlstack.h:177 */
	const CUtlStringToken* Base(const CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >* );
	/* ../public/tier0/utlstack.h:187 */
	CUtlStringToken& Top(CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >* );
	/* ../public/tier0/utlstack.h:194 */
	const CUtlStringToken& Top(const CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >* );
	/* ../public/tier0/utlstack.h:205 */
	int Count(const CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >* );
	/* ../public/tier0/utlstack.h:216 */
	bool IsIdxValid(const CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >* , int);
	/* ../public/tier0/utlstack.h:253 */
	int Push(CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >* );
	/* ../public/tier0/utlstack.h:265 */
	int Push(CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >* , const CUtlStringToken& );
	/* ../public/tier0/utlstack.h:278 */
	void Pop(CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >* );
	/* ../public/tier0/utlstack.h:286 */
	void Pop(CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >* , CUtlStringToken& );
	/* ../public/tier0/utlstack.h:294 */
	void PopMultiple(CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >* , int);
	/* ../public/tier0/utlstack.h:241 */
	void EnsureCapacity(CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >* , int);
	/* ../public/tier0/utlstack.h:308 */
	void Clear(CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >* );
	/* ../public/tier0/utlstack.h:322 */
	void Purge(CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >* );
private:
	/* ../public/tier0/utlstack.h:226 */
	void GrowStack(CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >* );
	/* ../public/tier0/utlstack.h:95 */
	void ResetDbgInfo(CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >* );
	CUtlMemory<CUtlStringToken, int> m_Memory; /* 0 16 */
	int m_Size; /* 16 4 */
	CUtlStringToken * m_pElements; /* 24 8 */
	void CUtlStack(class CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> > *, int, int); /* linkage=_ZN9CUtlStackI15CUtlStringToken10CUtlMemoryIS0_iEEC4Eii */
	void ~CUtlStack(class CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> > *); /* linkage=_ZN9CUtlStackI15CUtlStringToken10CUtlMemoryIS0_iEED4Ev */
	void CopyFrom(class CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> > *, const class CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >  &); /* linkage=_ZN9CUtlStackI15CUtlStringToken10CUtlMemoryIS0_iEE8CopyFromERKS3_ */
	class CUtlStringToken & operator[](class CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> > *, int); /* linkage=_ZN9CUtlStackI15CUtlStringToken10CUtlMemoryIS0_iEEixEi */
	const class CUtlStringToken  & operator[](const class CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >  *, int); /* linkage=_ZNK9CUtlStackI15CUtlStringToken10CUtlMemoryIS0_iEEixEi */
	class CUtlStringToken & Element(class CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> > *, int); /* linkage=_ZN9CUtlStackI15CUtlStringToken10CUtlMemoryIS0_iEE7ElementEi */
	const class CUtlStringToken  & Element(const class CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >  *, int); /* linkage=_ZNK9CUtlStackI15CUtlStringToken10CUtlMemoryIS0_iEE7ElementEi */
	class CUtlStringToken * Base(class CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> > *); /* linkage=_ZN9CUtlStackI15CUtlStringToken10CUtlMemoryIS0_iEE4BaseEv */
	const class CUtlStringToken  * Base(const class CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >  *); /* linkage=_ZNK9CUtlStackI15CUtlStringToken10CUtlMemoryIS0_iEE4BaseEv */
	class CUtlStringToken & Top(class CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> > *); /* linkage=_ZN9CUtlStackI15CUtlStringToken10CUtlMemoryIS0_iEE3TopEv */
	const class CUtlStringToken  & Top(const class CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >  *); /* linkage=_ZNK9CUtlStackI15CUtlStringToken10CUtlMemoryIS0_iEE3TopEv */
	int Count(const class CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >  *); /* linkage=_ZNK9CUtlStackI15CUtlStringToken10CUtlMemoryIS0_iEE5CountEv */
	bool IsIdxValid(const class CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >  *, int); /* linkage=_ZNK9CUtlStackI15CUtlStringToken10CUtlMemoryIS0_iEE10IsIdxValidEi */
	int Push(class CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> > *); /* linkage=_ZN9CUtlStackI15CUtlStringToken10CUtlMemoryIS0_iEE4PushEv */
	int Push(class CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> > *, const class CUtlStringToken  &); /* linkage=_ZN9CUtlStackI15CUtlStringToken10CUtlMemoryIS0_iEE4PushERKS0_ */
	void Pop(class CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> > *); /* linkage=_ZN9CUtlStackI15CUtlStringToken10CUtlMemoryIS0_iEE3PopEv */
	void Pop(class CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> > *, class CUtlStringToken &); /* linkage=_ZN9CUtlStackI15CUtlStringToken10CUtlMemoryIS0_iEE3PopERS0_ */
	void PopMultiple(class CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> > *, int); /* linkage=_ZN9CUtlStackI15CUtlStringToken10CUtlMemoryIS0_iEE11PopMultipleEi */
	void EnsureCapacity(class CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> > *, int); /* linkage=_ZN9CUtlStackI15CUtlStringToken10CUtlMemoryIS0_iEE14EnsureCapacityEi */
	void Clear(class CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> > *); /* linkage=_ZN9CUtlStackI15CUtlStringToken10CUtlMemoryIS0_iEE5ClearEv */
	void Purge(class CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> > *); /* linkage=_ZN9CUtlStackI15CUtlStringToken10CUtlMemoryIS0_iEE5PurgeEv */
	void GrowStack(class CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> > *); /* linkage=_ZN9CUtlStackI15CUtlStringToken10CUtlMemoryIS0_iEE9GrowStackEv */
	void ResetDbgInfo(class CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> > *); /* linkage=_ZN9CUtlStackI15CUtlStringToken10CUtlMemoryIS0_iEE12ResetDbgInfoEv */
};

// <04107E23> ../public/tier0/utlstack.h:26
// member functions: 46
// member variables: 3
// class size: 32
class CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> > {
	/* ../public/tier0/utlstack.h:105 */
	void CUtlStack(CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >* , int, int);
	/* ../public/tier0/utlstack.h:112 */
	void ~CUtlStack(CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >* );
	/* ../public/tier0/utlstack.h:123 */
	void CopyFrom(CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >* , const CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >& );
	/* ../public/tier0/utlstack.h:138 */
	CInterpolationTimeContext& operator[](CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >* , int);
	/* ../public/tier0/utlstack.h:145 */
	const CInterpolationTimeContext& operator[](const CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >* , int);
	/* ../public/tier0/utlstack.h:152 */
	CInterpolationTimeContext& Element(CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >* , int);
	/* ../public/tier0/utlstack.h:159 */
	const CInterpolationTimeContext& Element(const CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >* , int);
	/* ../public/tier0/utlstack.h:171 */
	CInterpolationTimeContext* Base(CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >* );
	/* ../public/tier0/utlstack.h:177 */
	const CInterpolationTimeContext* Base(const CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >* );
	/* ../public/tier0/utlstack.h:187 */
	CInterpolationTimeContext& Top(CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >* );
	/* ../public/tier0/utlstack.h:194 */
	const CInterpolationTimeContext& Top(const CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >* );
	/* ../public/tier0/utlstack.h:205 */
	int Count(const CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >* );
	/* ../public/tier0/utlstack.h:216 */
	bool IsIdxValid(const CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >* , int);
	/* ../public/tier0/utlstack.h:253 */
	int Push(CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >* );
	/* ../public/tier0/utlstack.h:265 */
	int Push(CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >* , const CInterpolationTimeContext& );
	/* ../public/tier0/utlstack.h:278 */
	void Pop(CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >* );
	/* ../public/tier0/utlstack.h:286 */
	void Pop(CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >* , CInterpolationTimeContext& );
	/* ../public/tier0/utlstack.h:294 */
	void PopMultiple(CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >* , int);
	/* ../public/tier0/utlstack.h:241 */
	void EnsureCapacity(CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >* , int);
	/* ../public/tier0/utlstack.h:308 */
	void Clear(CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >* );
	/* ../public/tier0/utlstack.h:322 */
	void Purge(CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >* );
private:
	/* ../public/tier0/utlstack.h:226 */
	void GrowStack(CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >* );
	/* ../public/tier0/utlstack.h:95 */
	void ResetDbgInfo(CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >* );
	CUtlMemory<CInterpolationTimeContext, int> m_Memory; /* 0 16 */
	int m_Size; /* 16 4 */
	CInterpolationTimeContext * m_pElements; /* 24 8 */
	void CUtlStack(class CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> > *, int, int); /* linkage=_ZN9CUtlStackI25CInterpolationTimeContext10CUtlMemoryIS0_iEEC4Eii */
	void ~CUtlStack(class CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> > *); /* linkage=_ZN9CUtlStackI25CInterpolationTimeContext10CUtlMemoryIS0_iEED4Ev */
	void CopyFrom(class CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> > *, const class CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >  &); /* linkage=_ZN9CUtlStackI25CInterpolationTimeContext10CUtlMemoryIS0_iEE8CopyFromERKS3_ */
	class CInterpolationTimeContext & operator[](class CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> > *, int); /* linkage=_ZN9CUtlStackI25CInterpolationTimeContext10CUtlMemoryIS0_iEEixEi */
	const class CInterpolationTimeContext  & operator[](const class CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >  *, int); /* linkage=_ZNK9CUtlStackI25CInterpolationTimeContext10CUtlMemoryIS0_iEEixEi */
	class CInterpolationTimeContext & Element(class CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> > *, int); /* linkage=_ZN9CUtlStackI25CInterpolationTimeContext10CUtlMemoryIS0_iEE7ElementEi */
	const class CInterpolationTimeContext  & Element(const class CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >  *, int); /* linkage=_ZNK9CUtlStackI25CInterpolationTimeContext10CUtlMemoryIS0_iEE7ElementEi */
	class CInterpolationTimeContext * Base(class CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> > *); /* linkage=_ZN9CUtlStackI25CInterpolationTimeContext10CUtlMemoryIS0_iEE4BaseEv */
	const class CInterpolationTimeContext  * Base(const class CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >  *); /* linkage=_ZNK9CUtlStackI25CInterpolationTimeContext10CUtlMemoryIS0_iEE4BaseEv */
	class CInterpolationTimeContext & Top(class CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> > *); /* linkage=_ZN9CUtlStackI25CInterpolationTimeContext10CUtlMemoryIS0_iEE3TopEv */
	const class CInterpolationTimeContext  & Top(const class CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >  *); /* linkage=_ZNK9CUtlStackI25CInterpolationTimeContext10CUtlMemoryIS0_iEE3TopEv */
	int Count(const class CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >  *); /* linkage=_ZNK9CUtlStackI25CInterpolationTimeContext10CUtlMemoryIS0_iEE5CountEv */
	bool IsIdxValid(const class CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >  *, int); /* linkage=_ZNK9CUtlStackI25CInterpolationTimeContext10CUtlMemoryIS0_iEE10IsIdxValidEi */
	int Push(class CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> > *); /* linkage=_ZN9CUtlStackI25CInterpolationTimeContext10CUtlMemoryIS0_iEE4PushEv */
	int Push(class CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> > *, const class CInterpolationTimeContext  &); /* linkage=_ZN9CUtlStackI25CInterpolationTimeContext10CUtlMemoryIS0_iEE4PushERKS0_ */
	void Pop(class CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> > *); /* linkage=_ZN9CUtlStackI25CInterpolationTimeContext10CUtlMemoryIS0_iEE3PopEv */
	void Pop(class CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> > *, class CInterpolationTimeContext &); /* linkage=_ZN9CUtlStackI25CInterpolationTimeContext10CUtlMemoryIS0_iEE3PopERS0_ */
	void PopMultiple(class CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> > *, int); /* linkage=_ZN9CUtlStackI25CInterpolationTimeContext10CUtlMemoryIS0_iEE11PopMultipleEi */
	void EnsureCapacity(class CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> > *, int); /* linkage=_ZN9CUtlStackI25CInterpolationTimeContext10CUtlMemoryIS0_iEE14EnsureCapacityEi */
	void Clear(class CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> > *); /* linkage=_ZN9CUtlStackI25CInterpolationTimeContext10CUtlMemoryIS0_iEE5ClearEv */
	void Purge(class CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> > *); /* linkage=_ZN9CUtlStackI25CInterpolationTimeContext10CUtlMemoryIS0_iEE5PurgeEv */
	void GrowStack(class CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> > *); /* linkage=_ZN9CUtlStackI25CInterpolationTimeContext10CUtlMemoryIS0_iEE9GrowStackEv */
	void ResetDbgInfo(class CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> > *); /* linkage=_ZN9CUtlStackI25CInterpolationTimeContext10CUtlMemoryIS0_iEE12ResetDbgInfoEv */
};

// <04E7DCB0> ../public/tier0/utlstack.h:26
// member functions: 46
// member variables: 3
// class size: 32
class CUtlStack<CBufferString, CUtlMemory<CBufferString, int> > {
	/* ../public/tier0/utlstack.h:105 */
	void CUtlStack(CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >* , int, int);
	/* ../public/tier0/utlstack.h:112 */
	void ~CUtlStack(CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >* );
	/* ../public/tier0/utlstack.h:123 */
	void CopyFrom(CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >* , const CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >& );
	/* ../public/tier0/utlstack.h:138 */
	CBufferString& operator[](CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >* , int);
	/* ../public/tier0/utlstack.h:145 */
	const CBufferString& operator[](const CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >* , int);
	/* ../public/tier0/utlstack.h:152 */
	CBufferString& Element(CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >* , int);
	/* ../public/tier0/utlstack.h:159 */
	const CBufferString& Element(const CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >* , int);
	/* ../public/tier0/utlstack.h:171 */
	CBufferString* Base(CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >* );
	/* ../public/tier0/utlstack.h:177 */
	const CBufferString* Base(const CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >* );
	/* ../public/tier0/utlstack.h:187 */
	CBufferString& Top(CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >* );
	/* ../public/tier0/utlstack.h:194 */
	const CBufferString& Top(const CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >* );
	/* ../public/tier0/utlstack.h:205 */
	int Count(const CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >* );
	/* ../public/tier0/utlstack.h:216 */
	bool IsIdxValid(const CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >* , int);
	/* ../public/tier0/utlstack.h:253 */
	int Push(CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >* );
	/* ../public/tier0/utlstack.h:265 */
	int Push(CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >* , const CBufferString& );
	/* ../public/tier0/utlstack.h:278 */
	void Pop(CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >* );
	/* ../public/tier0/utlstack.h:286 */
	void Pop(CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >* , CBufferString& );
	/* ../public/tier0/utlstack.h:294 */
	void PopMultiple(CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >* , int);
	/* ../public/tier0/utlstack.h:241 */
	void EnsureCapacity(CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >* , int);
	/* ../public/tier0/utlstack.h:308 */
	void Clear(CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >* );
	/* ../public/tier0/utlstack.h:322 */
	void Purge(CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >* );
private:
	/* ../public/tier0/utlstack.h:226 */
	void GrowStack(CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >* );
	/* ../public/tier0/utlstack.h:95 */
	void ResetDbgInfo(CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >* );
	CUtlMemory<CBufferString, int> m_Memory; /* 0 16 */
	int m_Size; /* 16 4 */
	CBufferString * m_pElements; /* 24 8 */
	void CUtlStack(class CUtlStack<CBufferString, CUtlMemory<CBufferString, int> > *, int, int); /* linkage=_ZN9CUtlStackI13CBufferString10CUtlMemoryIS0_iEEC4Eii */
	void ~CUtlStack(class CUtlStack<CBufferString, CUtlMemory<CBufferString, int> > *); /* linkage=_ZN9CUtlStackI13CBufferString10CUtlMemoryIS0_iEED4Ev */
	void CopyFrom(class CUtlStack<CBufferString, CUtlMemory<CBufferString, int> > *, const class CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >  &); /* linkage=_ZN9CUtlStackI13CBufferString10CUtlMemoryIS0_iEE8CopyFromERKS3_ */
	class CBufferString & operator[](class CUtlStack<CBufferString, CUtlMemory<CBufferString, int> > *, int); /* linkage=_ZN9CUtlStackI13CBufferString10CUtlMemoryIS0_iEEixEi */
	const class CBufferString  & operator[](const class CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >  *, int); /* linkage=_ZNK9CUtlStackI13CBufferString10CUtlMemoryIS0_iEEixEi */
	class CBufferString & Element(class CUtlStack<CBufferString, CUtlMemory<CBufferString, int> > *, int); /* linkage=_ZN9CUtlStackI13CBufferString10CUtlMemoryIS0_iEE7ElementEi */
	const class CBufferString  & Element(const class CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >  *, int); /* linkage=_ZNK9CUtlStackI13CBufferString10CUtlMemoryIS0_iEE7ElementEi */
	class CBufferString * Base(class CUtlStack<CBufferString, CUtlMemory<CBufferString, int> > *); /* linkage=_ZN9CUtlStackI13CBufferString10CUtlMemoryIS0_iEE4BaseEv */
	const class CBufferString  * Base(const class CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >  *); /* linkage=_ZNK9CUtlStackI13CBufferString10CUtlMemoryIS0_iEE4BaseEv */
	class CBufferString & Top(class CUtlStack<CBufferString, CUtlMemory<CBufferString, int> > *); /* linkage=_ZN9CUtlStackI13CBufferString10CUtlMemoryIS0_iEE3TopEv */
	const class CBufferString  & Top(const class CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >  *); /* linkage=_ZNK9CUtlStackI13CBufferString10CUtlMemoryIS0_iEE3TopEv */
	int Count(const class CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >  *); /* linkage=_ZNK9CUtlStackI13CBufferString10CUtlMemoryIS0_iEE5CountEv */
	bool IsIdxValid(const class CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >  *, int); /* linkage=_ZNK9CUtlStackI13CBufferString10CUtlMemoryIS0_iEE10IsIdxValidEi */
	int Push(class CUtlStack<CBufferString, CUtlMemory<CBufferString, int> > *); /* linkage=_ZN9CUtlStackI13CBufferString10CUtlMemoryIS0_iEE4PushEv */
	int Push(class CUtlStack<CBufferString, CUtlMemory<CBufferString, int> > *, const class CBufferString  &); /* linkage=_ZN9CUtlStackI13CBufferString10CUtlMemoryIS0_iEE4PushERKS0_ */
	void Pop(class CUtlStack<CBufferString, CUtlMemory<CBufferString, int> > *); /* linkage=_ZN9CUtlStackI13CBufferString10CUtlMemoryIS0_iEE3PopEv */
	void Pop(class CUtlStack<CBufferString, CUtlMemory<CBufferString, int> > *, class CBufferString &); /* linkage=_ZN9CUtlStackI13CBufferString10CUtlMemoryIS0_iEE3PopERS0_ */
	void PopMultiple(class CUtlStack<CBufferString, CUtlMemory<CBufferString, int> > *, int); /* linkage=_ZN9CUtlStackI13CBufferString10CUtlMemoryIS0_iEE11PopMultipleEi */
	void EnsureCapacity(class CUtlStack<CBufferString, CUtlMemory<CBufferString, int> > *, int); /* linkage=_ZN9CUtlStackI13CBufferString10CUtlMemoryIS0_iEE14EnsureCapacityEi */
	void Clear(class CUtlStack<CBufferString, CUtlMemory<CBufferString, int> > *); /* linkage=_ZN9CUtlStackI13CBufferString10CUtlMemoryIS0_iEE5ClearEv */
	void Purge(class CUtlStack<CBufferString, CUtlMemory<CBufferString, int> > *); /* linkage=_ZN9CUtlStackI13CBufferString10CUtlMemoryIS0_iEE5PurgeEv */
	void GrowStack(class CUtlStack<CBufferString, CUtlMemory<CBufferString, int> > *); /* linkage=_ZN9CUtlStackI13CBufferString10CUtlMemoryIS0_iEE9GrowStackEv */
	void ResetDbgInfo(class CUtlStack<CBufferString, CUtlMemory<CBufferString, int> > *); /* linkage=_ZN9CUtlStackI13CBufferString10CUtlMemoryIS0_iEE12ResetDbgInfoEv */
};

// <057FEEBA> ../../public/tier0/utlstack.h:26
// member functions: 46
// member variables: 3
// class size: 32
class CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > {
	/* ../../public/tier0/utlstack.h:105 */
	void CUtlStack(CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >* , int, int);
	/* ../../public/tier0/utlstack.h:112 */
	void ~CUtlStack(CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >* );
	/* ../../public/tier0/utlstack.h:123 */
	void CopyFrom(CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >* , const CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >& );
	/* ../../public/tier0/utlstack.h:138 */
	KeyValues3* & operator[](CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >* , int);
	/* ../../public/tier0/utlstack.h:145 */
	KeyValues3* const& operator[](const CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >* , int);
	/* ../../public/tier0/utlstack.h:152 */
	KeyValues3* & Element(CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >* , int);
	/* ../../public/tier0/utlstack.h:159 */
	KeyValues3* const& Element(const CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >* , int);
	/* ../../public/tier0/utlstack.h:171 */
	KeyValues3** Base(CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >* );
	/* ../../public/tier0/utlstack.h:177 */
	KeyValues3* const* Base(const CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >* );
	/* ../../public/tier0/utlstack.h:187 */
	KeyValues3* & Top(CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >* );
	/* ../../public/tier0/utlstack.h:194 */
	KeyValues3* const& Top(const CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >* );
	/* ../../public/tier0/utlstack.h:205 */
	int Count(const CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >* );
	/* ../../public/tier0/utlstack.h:216 */
	bool IsIdxValid(const CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >* , int);
	/* ../../public/tier0/utlstack.h:253 */
	int Push(CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >* );
	/* ../../public/tier0/utlstack.h:265 */
	int Push(CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >* , KeyValues3* const& );
	/* ../../public/tier0/utlstack.h:278 */
	void Pop(CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >* );
	/* ../../public/tier0/utlstack.h:286 */
	void Pop(CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >* , KeyValues3* & );
	/* ../../public/tier0/utlstack.h:294 */
	void PopMultiple(CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >* , int);
	/* ../../public/tier0/utlstack.h:241 */
	void EnsureCapacity(CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >* , int);
	/* ../../public/tier0/utlstack.h:308 */
	void Clear(CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >* );
	/* ../../public/tier0/utlstack.h:322 */
	void Purge(CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >* );
private:
	/* ../../public/tier0/utlstack.h:226 */
	void GrowStack(CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >* );
	/* ../../public/tier0/utlstack.h:95 */
	void ResetDbgInfo(CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >* );
	CUtlMemory<KeyValues3*, int> m_Memory; /* 0 16 */
	int m_Size; /* 16 4 */
	KeyValues3 * * m_pElements; /* 24 8 */
	void CUtlStack(class CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *, int, int); /* linkage=_ZN9CUtlStackIP10KeyValues310CUtlMemoryIS1_iEEC4Eii */
	void ~CUtlStack(class CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *); /* linkage=_ZN9CUtlStackIP10KeyValues310CUtlMemoryIS1_iEED4Ev */
	void CopyFrom(class CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *, const class CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >  &); /* linkage=_ZN9CUtlStackIP10KeyValues310CUtlMemoryIS1_iEE8CopyFromERKS4_ */
	class KeyValues3 * & operator[](class CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *, int); /* linkage=_ZN9CUtlStackIP10KeyValues310CUtlMemoryIS1_iEEixEi */
	class KeyValues3 * const & operator[](const class CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >  *, int); /* linkage=_ZNK9CUtlStackIP10KeyValues310CUtlMemoryIS1_iEEixEi */
	class KeyValues3 * & Element(class CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *, int); /* linkage=_ZN9CUtlStackIP10KeyValues310CUtlMemoryIS1_iEE7ElementEi */
	class KeyValues3 * const & Element(const class CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >  *, int); /* linkage=_ZNK9CUtlStackIP10KeyValues310CUtlMemoryIS1_iEE7ElementEi */
	class KeyValues3 * * Base(class CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *); /* linkage=_ZN9CUtlStackIP10KeyValues310CUtlMemoryIS1_iEE4BaseEv */
	class KeyValues3 * const * Base(const class CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >  *); /* linkage=_ZNK9CUtlStackIP10KeyValues310CUtlMemoryIS1_iEE4BaseEv */
	class KeyValues3 * & Top(class CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *); /* linkage=_ZN9CUtlStackIP10KeyValues310CUtlMemoryIS1_iEE3TopEv */
	class KeyValues3 * const & Top(const class CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >  *); /* linkage=_ZNK9CUtlStackIP10KeyValues310CUtlMemoryIS1_iEE3TopEv */
	int Count(const class CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >  *); /* linkage=_ZNK9CUtlStackIP10KeyValues310CUtlMemoryIS1_iEE5CountEv */
	bool IsIdxValid(const class CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> >  *, int); /* linkage=_ZNK9CUtlStackIP10KeyValues310CUtlMemoryIS1_iEE10IsIdxValidEi */
	int Push(class CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *); /* linkage=_ZN9CUtlStackIP10KeyValues310CUtlMemoryIS1_iEE4PushEv */
	int Push(class CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *, class KeyValues3 * const &); /* linkage=_ZN9CUtlStackIP10KeyValues310CUtlMemoryIS1_iEE4PushERKS1_ */
	void Pop(class CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *); /* linkage=_ZN9CUtlStackIP10KeyValues310CUtlMemoryIS1_iEE3PopEv */
	void Pop(class CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *, class KeyValues3 * &); /* linkage=_ZN9CUtlStackIP10KeyValues310CUtlMemoryIS1_iEE3PopERS1_ */
	void PopMultiple(class CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *, int); /* linkage=_ZN9CUtlStackIP10KeyValues310CUtlMemoryIS1_iEE11PopMultipleEi */
	void EnsureCapacity(class CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *, int); /* linkage=_ZN9CUtlStackIP10KeyValues310CUtlMemoryIS1_iEE14EnsureCapacityEi */
	void Clear(class CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *); /* linkage=_ZN9CUtlStackIP10KeyValues310CUtlMemoryIS1_iEE5ClearEv */
	void Purge(class CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *); /* linkage=_ZN9CUtlStackIP10KeyValues310CUtlMemoryIS1_iEE5PurgeEv */
	void GrowStack(class CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *); /* linkage=_ZN9CUtlStackIP10KeyValues310CUtlMemoryIS1_iEE9GrowStackEv */
	void ResetDbgInfo(class CUtlStack<KeyValues3*, CUtlMemory<KeyValues3*, int> > *); /* linkage=_ZN9CUtlStackIP10KeyValues310CUtlMemoryIS1_iEE12ResetDbgInfoEv */
};

// <057FF942> ../../public/tier0/utlstack.h:26
// member functions: 46
// member variables: 3
// class size: 32
class CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > {
	/* ../../public/tier0/utlstack.h:105 */
	void CUtlStack(CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >* , int, int);
	/* ../../public/tier0/utlstack.h:112 */
	void ~CUtlStack(CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >* );
	/* ../../public/tier0/utlstack.h:123 */
	void CopyFrom(CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >* , const CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >& );
	/* ../../public/tier0/utlstack.h:138 */
	const KeyValues3* & operator[](CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >* , int);
	/* ../../public/tier0/utlstack.h:145 */
	const KeyValues3* const& operator[](const CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >* , int);
	/* ../../public/tier0/utlstack.h:152 */
	const KeyValues3* & Element(CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >* , int);
	/* ../../public/tier0/utlstack.h:159 */
	const KeyValues3* const& Element(const CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >* , int);
	/* ../../public/tier0/utlstack.h:171 */
	const KeyValues3* * Base(CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >* );
	/* ../../public/tier0/utlstack.h:177 */
	const KeyValues3* const* Base(const CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >* );
	/* ../../public/tier0/utlstack.h:187 */
	const KeyValues3* & Top(CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >* );
	/* ../../public/tier0/utlstack.h:194 */
	const KeyValues3* const& Top(const CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >* );
	/* ../../public/tier0/utlstack.h:205 */
	int Count(const CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >* );
	/* ../../public/tier0/utlstack.h:216 */
	bool IsIdxValid(const CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >* , int);
	/* ../../public/tier0/utlstack.h:253 */
	int Push(CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >* );
	/* ../../public/tier0/utlstack.h:265 */
	int Push(CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >* , const KeyValues3* const& );
	/* ../../public/tier0/utlstack.h:278 */
	void Pop(CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >* );
	/* ../../public/tier0/utlstack.h:286 */
	void Pop(CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >* , const KeyValues3* & );
	/* ../../public/tier0/utlstack.h:294 */
	void PopMultiple(CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >* , int);
	/* ../../public/tier0/utlstack.h:241 */
	void EnsureCapacity(CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >* , int);
	/* ../../public/tier0/utlstack.h:308 */
	void Clear(CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >* );
	/* ../../public/tier0/utlstack.h:322 */
	void Purge(CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >* );
private:
	/* ../../public/tier0/utlstack.h:226 */
	void GrowStack(CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >* );
	/* ../../public/tier0/utlstack.h:95 */
	void ResetDbgInfo(CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >* );
	CUtlMemory<const KeyValues3*, int> m_Memory; /* 0 16 */
	int m_Size; /* 16 4 */
	const class KeyValues3 * * m_pElements; /* 24 8 */
	void CUtlStack(class CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *, int, int); /* linkage=_ZN9CUtlStackIPK10KeyValues310CUtlMemoryIS2_iEEC4Eii */
	void ~CUtlStack(class CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *); /* linkage=_ZN9CUtlStackIPK10KeyValues310CUtlMemoryIS2_iEED4Ev */
	void CopyFrom(class CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *, const class CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >  &); /* linkage=_ZN9CUtlStackIPK10KeyValues310CUtlMemoryIS2_iEE8CopyFromERKS5_ */
	const class KeyValues3  * & operator[](class CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *, int); /* linkage=_ZN9CUtlStackIPK10KeyValues310CUtlMemoryIS2_iEEixEi */
	const class KeyValues3  * const & operator[](const class CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >  *, int); /* linkage=_ZNK9CUtlStackIPK10KeyValues310CUtlMemoryIS2_iEEixEi */
	const class KeyValues3  * & Element(class CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *, int); /* linkage=_ZN9CUtlStackIPK10KeyValues310CUtlMemoryIS2_iEE7ElementEi */
	const class KeyValues3  * const & Element(const class CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >  *, int); /* linkage=_ZNK9CUtlStackIPK10KeyValues310CUtlMemoryIS2_iEE7ElementEi */
	const class KeyValues3  * * Base(class CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *); /* linkage=_ZN9CUtlStackIPK10KeyValues310CUtlMemoryIS2_iEE4BaseEv */
	const class KeyValues3  * const * Base(const class CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >  *); /* linkage=_ZNK9CUtlStackIPK10KeyValues310CUtlMemoryIS2_iEE4BaseEv */
	const class KeyValues3  * & Top(class CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *); /* linkage=_ZN9CUtlStackIPK10KeyValues310CUtlMemoryIS2_iEE3TopEv */
	const class KeyValues3  * const & Top(const class CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >  *); /* linkage=_ZNK9CUtlStackIPK10KeyValues310CUtlMemoryIS2_iEE3TopEv */
	int Count(const class CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >  *); /* linkage=_ZNK9CUtlStackIPK10KeyValues310CUtlMemoryIS2_iEE5CountEv */
	bool IsIdxValid(const class CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> >  *, int); /* linkage=_ZNK9CUtlStackIPK10KeyValues310CUtlMemoryIS2_iEE10IsIdxValidEi */
	int Push(class CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *); /* linkage=_ZN9CUtlStackIPK10KeyValues310CUtlMemoryIS2_iEE4PushEv */
	int Push(class CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *, const class KeyValues3  * const &); /* linkage=_ZN9CUtlStackIPK10KeyValues310CUtlMemoryIS2_iEE4PushERKS2_ */
	void Pop(class CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *); /* linkage=_ZN9CUtlStackIPK10KeyValues310CUtlMemoryIS2_iEE3PopEv */
	void Pop(class CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *, const class KeyValues3  * &); /* linkage=_ZN9CUtlStackIPK10KeyValues310CUtlMemoryIS2_iEE3PopERS2_ */
	void PopMultiple(class CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *, int); /* linkage=_ZN9CUtlStackIPK10KeyValues310CUtlMemoryIS2_iEE11PopMultipleEi */
	void EnsureCapacity(class CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *, int); /* linkage=_ZN9CUtlStackIPK10KeyValues310CUtlMemoryIS2_iEE14EnsureCapacityEi */
	void Clear(class CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *); /* linkage=_ZN9CUtlStackIPK10KeyValues310CUtlMemoryIS2_iEE5ClearEv */
	void Purge(class CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *); /* linkage=_ZN9CUtlStackIPK10KeyValues310CUtlMemoryIS2_iEE5PurgeEv */
	void GrowStack(class CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *); /* linkage=_ZN9CUtlStackIPK10KeyValues310CUtlMemoryIS2_iEE9GrowStackEv */
	void ResetDbgInfo(class CUtlStack<const KeyValues3*, CUtlMemory<const KeyValues3*, int> > *); /* linkage=_ZN9CUtlStackIPK10KeyValues310CUtlMemoryIS2_iEE12ResetDbgInfoEv */
};

// <058C849D> ../../public/tier0/utlstack.h:26
// member functions: 46
// member variables: 3
// class size: 32
class CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> > {
	/* ../../public/tier0/utlstack.h:105 */
	void CUtlStack(CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >* , int, int);
	/* ../../public/tier0/utlstack.h:112 */
	void ~CUtlStack(CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >* );
	/* ../../public/tier0/utlstack.h:123 */
	void CopyFrom(CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >* , const CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >& );
	/* ../../public/tier0/utlstack.h:138 */
	CInterpolationTimeContext& operator[](CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >* , int);
	/* ../../public/tier0/utlstack.h:145 */
	const CInterpolationTimeContext& operator[](const CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >* , int);
	/* ../../public/tier0/utlstack.h:152 */
	CInterpolationTimeContext& Element(CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >* , int);
	/* ../../public/tier0/utlstack.h:159 */
	const CInterpolationTimeContext& Element(const CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >* , int);
	/* ../../public/tier0/utlstack.h:171 */
	CInterpolationTimeContext* Base(CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >* );
	/* ../../public/tier0/utlstack.h:177 */
	const CInterpolationTimeContext* Base(const CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >* );
	/* ../../public/tier0/utlstack.h:187 */
	CInterpolationTimeContext& Top(CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >* );
	/* ../../public/tier0/utlstack.h:194 */
	const CInterpolationTimeContext& Top(const CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >* );
	/* ../../public/tier0/utlstack.h:205 */
	int Count(const CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >* );
	/* ../../public/tier0/utlstack.h:216 */
	bool IsIdxValid(const CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >* , int);
	/* ../../public/tier0/utlstack.h:253 */
	int Push(CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >* );
	/* ../../public/tier0/utlstack.h:265 */
	int Push(CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >* , const CInterpolationTimeContext& );
	/* ../../public/tier0/utlstack.h:278 */
	void Pop(CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >* );
	/* ../../public/tier0/utlstack.h:286 */
	void Pop(CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >* , CInterpolationTimeContext& );
	/* ../../public/tier0/utlstack.h:294 */
	void PopMultiple(CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >* , int);
	/* ../../public/tier0/utlstack.h:241 */
	void EnsureCapacity(CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >* , int);
	/* ../../public/tier0/utlstack.h:308 */
	void Clear(CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >* );
	/* ../../public/tier0/utlstack.h:322 */
	void Purge(CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >* );
private:
	/* ../../public/tier0/utlstack.h:226 */
	void GrowStack(CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >* );
	/* ../../public/tier0/utlstack.h:95 */
	void ResetDbgInfo(CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >* );
	CUtlMemory<CInterpolationTimeContext, int> m_Memory; /* 0 16 */
	int m_Size; /* 16 4 */
	CInterpolationTimeContext * m_pElements; /* 24 8 */
	void CUtlStack(class CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> > *, int, int); /* linkage=_ZN9CUtlStackI25CInterpolationTimeContext10CUtlMemoryIS0_iEEC4Eii */
	void ~CUtlStack(class CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> > *); /* linkage=_ZN9CUtlStackI25CInterpolationTimeContext10CUtlMemoryIS0_iEED4Ev */
	void CopyFrom(class CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> > *, const class CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >  &); /* linkage=_ZN9CUtlStackI25CInterpolationTimeContext10CUtlMemoryIS0_iEE8CopyFromERKS3_ */
	class CInterpolationTimeContext & operator[](class CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> > *, int); /* linkage=_ZN9CUtlStackI25CInterpolationTimeContext10CUtlMemoryIS0_iEEixEi */
	const class CInterpolationTimeContext  & operator[](const class CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >  *, int); /* linkage=_ZNK9CUtlStackI25CInterpolationTimeContext10CUtlMemoryIS0_iEEixEi */
	class CInterpolationTimeContext & Element(class CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> > *, int); /* linkage=_ZN9CUtlStackI25CInterpolationTimeContext10CUtlMemoryIS0_iEE7ElementEi */
	const class CInterpolationTimeContext  & Element(const class CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >  *, int); /* linkage=_ZNK9CUtlStackI25CInterpolationTimeContext10CUtlMemoryIS0_iEE7ElementEi */
	class CInterpolationTimeContext * Base(class CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> > *); /* linkage=_ZN9CUtlStackI25CInterpolationTimeContext10CUtlMemoryIS0_iEE4BaseEv */
	const class CInterpolationTimeContext  * Base(const class CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >  *); /* linkage=_ZNK9CUtlStackI25CInterpolationTimeContext10CUtlMemoryIS0_iEE4BaseEv */
	class CInterpolationTimeContext & Top(class CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> > *); /* linkage=_ZN9CUtlStackI25CInterpolationTimeContext10CUtlMemoryIS0_iEE3TopEv */
	const class CInterpolationTimeContext  & Top(const class CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >  *); /* linkage=_ZNK9CUtlStackI25CInterpolationTimeContext10CUtlMemoryIS0_iEE3TopEv */
	int Count(const class CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >  *); /* linkage=_ZNK9CUtlStackI25CInterpolationTimeContext10CUtlMemoryIS0_iEE5CountEv */
	bool IsIdxValid(const class CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >  *, int); /* linkage=_ZNK9CUtlStackI25CInterpolationTimeContext10CUtlMemoryIS0_iEE10IsIdxValidEi */
	int Push(class CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> > *); /* linkage=_ZN9CUtlStackI25CInterpolationTimeContext10CUtlMemoryIS0_iEE4PushEv */
	int Push(class CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> > *, const class CInterpolationTimeContext  &); /* linkage=_ZN9CUtlStackI25CInterpolationTimeContext10CUtlMemoryIS0_iEE4PushERKS0_ */
	void Pop(class CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> > *); /* linkage=_ZN9CUtlStackI25CInterpolationTimeContext10CUtlMemoryIS0_iEE3PopEv */
	void Pop(class CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> > *, class CInterpolationTimeContext &); /* linkage=_ZN9CUtlStackI25CInterpolationTimeContext10CUtlMemoryIS0_iEE3PopERS0_ */
	void PopMultiple(class CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> > *, int); /* linkage=_ZN9CUtlStackI25CInterpolationTimeContext10CUtlMemoryIS0_iEE11PopMultipleEi */
	void EnsureCapacity(class CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> > *, int); /* linkage=_ZN9CUtlStackI25CInterpolationTimeContext10CUtlMemoryIS0_iEE14EnsureCapacityEi */
	void Clear(class CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> > *); /* linkage=_ZN9CUtlStackI25CInterpolationTimeContext10CUtlMemoryIS0_iEE5ClearEv */
	void Purge(class CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> > *); /* linkage=_ZN9CUtlStackI25CInterpolationTimeContext10CUtlMemoryIS0_iEE5PurgeEv */
	void GrowStack(class CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> > *); /* linkage=_ZN9CUtlStackI25CInterpolationTimeContext10CUtlMemoryIS0_iEE9GrowStackEv */
	void ResetDbgInfo(class CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> > *); /* linkage=_ZN9CUtlStackI25CInterpolationTimeContext10CUtlMemoryIS0_iEE12ResetDbgInfoEv */
};

// <00BFAB04> ../public/tier0/utlstack.h:26
// member functions: 46
// member variables: 3
// class size: 32
class CUtlStack<CAnimPose*, CUtlMemory<CAnimPose*, int> > {
	/* ../public/tier0/utlstack.h:105 */
	void CUtlStack(CUtlStack<CAnimPose*, CUtlMemory<CAnimPose*, int> >* , int, int);
	/* ../public/tier0/utlstack.h:112 */
	void ~CUtlStack(CUtlStack<CAnimPose*, CUtlMemory<CAnimPose*, int> >* );
	/* ../public/tier0/utlstack.h:123 */
	void CopyFrom(CUtlStack<CAnimPose*, CUtlMemory<CAnimPose*, int> >* , const CUtlStack<CAnimPose*, CUtlMemory<CAnimPose*, int> >& );
	/* ../public/tier0/utlstack.h:138 */
	CAnimPose* & operator[](CUtlStack<CAnimPose*, CUtlMemory<CAnimPose*, int> >* , int);
	/* ../public/tier0/utlstack.h:145 */
	CAnimPose* const& operator[](const CUtlStack<CAnimPose*, CUtlMemory<CAnimPose*, int> >* , int);
	/* ../public/tier0/utlstack.h:152 */
	CAnimPose* & Element(CUtlStack<CAnimPose*, CUtlMemory<CAnimPose*, int> >* , int);
	/* ../public/tier0/utlstack.h:159 */
	CAnimPose* const& Element(const CUtlStack<CAnimPose*, CUtlMemory<CAnimPose*, int> >* , int);
	/* ../public/tier0/utlstack.h:171 */
	CAnimPose** Base(CUtlStack<CAnimPose*, CUtlMemory<CAnimPose*, int> >* );
	/* ../public/tier0/utlstack.h:177 */
	CAnimPose* const* Base(const CUtlStack<CAnimPose*, CUtlMemory<CAnimPose*, int> >* );
	/* ../public/tier0/utlstack.h:187 */
	CAnimPose* & Top(CUtlStack<CAnimPose*, CUtlMemory<CAnimPose*, int> >* );
	/* ../public/tier0/utlstack.h:194 */
	CAnimPose* const& Top(const CUtlStack<CAnimPose*, CUtlMemory<CAnimPose*, int> >* );
	/* ../public/tier0/utlstack.h:205 */
	int Count(const CUtlStack<CAnimPose*, CUtlMemory<CAnimPose*, int> >* );
	/* ../public/tier0/utlstack.h:216 */
	bool IsIdxValid(const CUtlStack<CAnimPose*, CUtlMemory<CAnimPose*, int> >* , int);
	/* ../public/tier0/utlstack.h:253 */
	int Push(CUtlStack<CAnimPose*, CUtlMemory<CAnimPose*, int> >* );
	/* ../public/tier0/utlstack.h:265 */
	int Push(CUtlStack<CAnimPose*, CUtlMemory<CAnimPose*, int> >* , CAnimPose* const& );
	/* ../public/tier0/utlstack.h:278 */
	void Pop(CUtlStack<CAnimPose*, CUtlMemory<CAnimPose*, int> >* );
	/* ../public/tier0/utlstack.h:286 */
	void Pop(CUtlStack<CAnimPose*, CUtlMemory<CAnimPose*, int> >* , CAnimPose* & );
	/* ../public/tier0/utlstack.h:294 */
	void PopMultiple(CUtlStack<CAnimPose*, CUtlMemory<CAnimPose*, int> >* , int);
	/* ../public/tier0/utlstack.h:241 */
	void EnsureCapacity(CUtlStack<CAnimPose*, CUtlMemory<CAnimPose*, int> >* , int);
	/* ../public/tier0/utlstack.h:308 */
	void Clear(CUtlStack<CAnimPose*, CUtlMemory<CAnimPose*, int> >* );
	/* ../public/tier0/utlstack.h:322 */
	void Purge(CUtlStack<CAnimPose*, CUtlMemory<CAnimPose*, int> >* );
private:
	/* ../public/tier0/utlstack.h:226 */
	void GrowStack(CUtlStack<CAnimPose*, CUtlMemory<CAnimPose*, int> >* );
	/* ../public/tier0/utlstack.h:95 */
	void ResetDbgInfo(CUtlStack<CAnimPose*, CUtlMemory<CAnimPose*, int> >* );
	CUtlMemory<CAnimPose*, int> m_Memory; /* 0 16 */
	int m_Size; /* 16 4 */
	CAnimPose * * m_pElements; /* 24 8 */
	void CUtlStack(class CUtlStack<CAnimPose*, CUtlMemory<CAnimPose*, int> > *, int, int); /* linkage=_ZN9CUtlStackIP9CAnimPose10CUtlMemoryIS1_iEEC4Eii */
	void ~CUtlStack(class CUtlStack<CAnimPose*, CUtlMemory<CAnimPose*, int> > *); /* linkage=_ZN9CUtlStackIP9CAnimPose10CUtlMemoryIS1_iEED4Ev */
	void CopyFrom(class CUtlStack<CAnimPose*, CUtlMemory<CAnimPose*, int> > *, const class CUtlStack<CAnimPose*, CUtlMemory<CAnimPose*, int> >  &); /* linkage=_ZN9CUtlStackIP9CAnimPose10CUtlMemoryIS1_iEE8CopyFromERKS4_ */
	class CAnimPose * & operator[](class CUtlStack<CAnimPose*, CUtlMemory<CAnimPose*, int> > *, int); /* linkage=_ZN9CUtlStackIP9CAnimPose10CUtlMemoryIS1_iEEixEi */
	class CAnimPose * const & operator[](const class CUtlStack<CAnimPose*, CUtlMemory<CAnimPose*, int> >  *, int); /* linkage=_ZNK9CUtlStackIP9CAnimPose10CUtlMemoryIS1_iEEixEi */
	class CAnimPose * & Element(class CUtlStack<CAnimPose*, CUtlMemory<CAnimPose*, int> > *, int); /* linkage=_ZN9CUtlStackIP9CAnimPose10CUtlMemoryIS1_iEE7ElementEi */
	class CAnimPose * const & Element(const class CUtlStack<CAnimPose*, CUtlMemory<CAnimPose*, int> >  *, int); /* linkage=_ZNK9CUtlStackIP9CAnimPose10CUtlMemoryIS1_iEE7ElementEi */
	class CAnimPose * * Base(class CUtlStack<CAnimPose*, CUtlMemory<CAnimPose*, int> > *); /* linkage=_ZN9CUtlStackIP9CAnimPose10CUtlMemoryIS1_iEE4BaseEv */
	class CAnimPose * const * Base(const class CUtlStack<CAnimPose*, CUtlMemory<CAnimPose*, int> >  *); /* linkage=_ZNK9CUtlStackIP9CAnimPose10CUtlMemoryIS1_iEE4BaseEv */
	class CAnimPose * & Top(class CUtlStack<CAnimPose*, CUtlMemory<CAnimPose*, int> > *); /* linkage=_ZN9CUtlStackIP9CAnimPose10CUtlMemoryIS1_iEE3TopEv */
	class CAnimPose * const & Top(const class CUtlStack<CAnimPose*, CUtlMemory<CAnimPose*, int> >  *); /* linkage=_ZNK9CUtlStackIP9CAnimPose10CUtlMemoryIS1_iEE3TopEv */
	int Count(const class CUtlStack<CAnimPose*, CUtlMemory<CAnimPose*, int> >  *); /* linkage=_ZNK9CUtlStackIP9CAnimPose10CUtlMemoryIS1_iEE5CountEv */
	bool IsIdxValid(const class CUtlStack<CAnimPose*, CUtlMemory<CAnimPose*, int> >  *, int); /* linkage=_ZNK9CUtlStackIP9CAnimPose10CUtlMemoryIS1_iEE10IsIdxValidEi */
	int Push(class CUtlStack<CAnimPose*, CUtlMemory<CAnimPose*, int> > *); /* linkage=_ZN9CUtlStackIP9CAnimPose10CUtlMemoryIS1_iEE4PushEv */
	int Push(class CUtlStack<CAnimPose*, CUtlMemory<CAnimPose*, int> > *, class CAnimPose * const &); /* linkage=_ZN9CUtlStackIP9CAnimPose10CUtlMemoryIS1_iEE4PushERKS1_ */
	void Pop(class CUtlStack<CAnimPose*, CUtlMemory<CAnimPose*, int> > *); /* linkage=_ZN9CUtlStackIP9CAnimPose10CUtlMemoryIS1_iEE3PopEv */
	void Pop(class CUtlStack<CAnimPose*, CUtlMemory<CAnimPose*, int> > *, class CAnimPose * &); /* linkage=_ZN9CUtlStackIP9CAnimPose10CUtlMemoryIS1_iEE3PopERS1_ */
	void PopMultiple(class CUtlStack<CAnimPose*, CUtlMemory<CAnimPose*, int> > *, int); /* linkage=_ZN9CUtlStackIP9CAnimPose10CUtlMemoryIS1_iEE11PopMultipleEi */
	void EnsureCapacity(class CUtlStack<CAnimPose*, CUtlMemory<CAnimPose*, int> > *, int); /* linkage=_ZN9CUtlStackIP9CAnimPose10CUtlMemoryIS1_iEE14EnsureCapacityEi */
	void Clear(class CUtlStack<CAnimPose*, CUtlMemory<CAnimPose*, int> > *); /* linkage=_ZN9CUtlStackIP9CAnimPose10CUtlMemoryIS1_iEE5ClearEv */
	void Purge(class CUtlStack<CAnimPose*, CUtlMemory<CAnimPose*, int> > *); /* linkage=_ZN9CUtlStackIP9CAnimPose10CUtlMemoryIS1_iEE5PurgeEv */
	void GrowStack(class CUtlStack<CAnimPose*, CUtlMemory<CAnimPose*, int> > *); /* linkage=_ZN9CUtlStackIP9CAnimPose10CUtlMemoryIS1_iEE9GrowStackEv */
	void ResetDbgInfo(class CUtlStack<CAnimPose*, CUtlMemory<CAnimPose*, int> > *); /* linkage=_ZN9CUtlStackIP9CAnimPose10CUtlMemoryIS1_iEE12ResetDbgInfoEv */
};

// <0152CF6F> ../public/tier0/utlstack.h:26
// member functions: 23
// member variables: 3
// class size: 32
class CUtlStack<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int> > {
	/* ../public/tier0/utlstack.h:105 */
	void CUtlStack(CUtlStack<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int> >* , int, int);
	/* ../public/tier0/utlstack.h:112 */
	void ~CUtlStack(CUtlStack<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int> >* );
	/* ../public/tier0/utlstack.h:123 */
	void CopyFrom(CUtlStack<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int> >* , const CUtlStack<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int> > );
	/* ../public/tier0/utlstack.h:138 */
	NodeUpdateDesc_t& operator[](CUtlStack<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int> >* , int);
	/* ../public/tier0/utlstack.h:145 */
	const NodeUpdateDesc_t& operator[](const CUtlStack<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int> > , int);
	/* ../public/tier0/utlstack.h:152 */
	NodeUpdateDesc_t& Element(CUtlStack<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int> >* , int);
	/* ../public/tier0/utlstack.h:159 */
	const NodeUpdateDesc_t& Element(const CUtlStack<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int> > , int);
	/* ../public/tier0/utlstack.h:171 */
	NodeUpdateDesc_t* Base(CUtlStack<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int> >* );
	/* ../public/tier0/utlstack.h:177 */
	const NodeUpdateDesc_t* Base(const CUtlStack<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int> > );
	/* ../public/tier0/utlstack.h:187 */
	NodeUpdateDesc_t& Top(CUtlStack<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int> >* );
	/* ../public/tier0/utlstack.h:194 */
	const NodeUpdateDesc_t& Top(const CUtlStack<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int> > );
	/* ../public/tier0/utlstack.h:205 */
	int Count(const CUtlStack<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int> > );
	/* ../public/tier0/utlstack.h:216 */
	bool IsIdxValid(const CUtlStack<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int> > , int);
	/* ../public/tier0/utlstack.h:253 */
	int Push(CUtlStack<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int> >* );
	/* ../public/tier0/utlstack.h:265 */
	int Push(CUtlStack<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int> >* , const NodeUpdateDesc_t& );
	/* ../public/tier0/utlstack.h:278 */
	void Pop(CUtlStack<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int> >* );
	/* ../public/tier0/utlstack.h:286 */
	void Pop(CUtlStack<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int> >* , NodeUpdateDesc_t& );
	/* ../public/tier0/utlstack.h:294 */
	void PopMultiple(CUtlStack<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int> >* , int);
	/* ../public/tier0/utlstack.h:241 */
	void EnsureCapacity(CUtlStack<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int> >* , int);
	/* ../public/tier0/utlstack.h:308 */
	void Clear(CUtlStack<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int> >* );
	/* ../public/tier0/utlstack.h:322 */
	void Purge(CUtlStack<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int> >* );
private:
	/* ../public/tier0/utlstack.h:226 */
	void GrowStack(CUtlStack<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int> >* );
	/* ../public/tier0/utlstack.h:95 */
	void ResetDbgInfo(CUtlStack<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int> >* );
	CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int> m_Memory; /* 0 16 */
	int m_Size; /* 16 4 */
	NodeUpdateDesc_t * m_pElements; /* 24 8 */
};

// <06E26C31> ../../public/tier0/utlstack.h:95
inline void CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >::ResetDbgInfo()
{
} /* size: 0 */

// <057165B6> ../public/tier0/utlstack.h:95
inline void CUtlStack<const KeyValues3::ResetDbgInfo()
{
} /* size: 0 */

// <05716492> ../public/tier0/utlstack.h:95
inline void CUtlStack<KeyValues3::ResetDbgInfo()
{
} /* size: 0 */

// <04E8207A> ../public/tier0/utlstack.h:95
inline void CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::ResetDbgInfo()
{
} /* size: 0 */

// <03124FDA> ../public/tier0/utlstack.h:95
inline void CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::ResetDbgInfo()
{
} /* size: 0 */

// <027276B6> ../public/tier0/utlstack.h:95
inline void CUtlStack<CAnimPose::ResetDbgInfo()
{
} /* size: 0 */

// <0157CBE5> ../public/tier0/utlstack.h:95
inline void CUtlStack<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int> >::ResetDbgInfo()
{
} /* size: 0 */

// <06E27BE7> ../../public/tier0/utlstack.h:105
void CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >::CUtlStack(int growSize, int initSize)
{
} /* size: 0 */

// <05716817> ../public/tier0/utlstack.h:105
void CUtlStack<const KeyValues3::CUtlStack(int growSize, int initSize)
{
} /* size: 0 */

// <05716724> ../public/tier0/utlstack.h:105
void CUtlStack<KeyValues3::CUtlStack(int growSize, int initSize)
{
} /* size: 0 */

// <04E82BD0> ../public/tier0/utlstack.h:105
void CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::CUtlStack(int growSize, int initSize)
{
} /* size: 0 */

// <031295B2> ../public/tier0/utlstack.h:105
void CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::CUtlStack(int growSize, int initSize)
{
} /* size: 0 */

// <01582F84> ../public/tier0/utlstack.h:105
void CUtlStack<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int> >::CUtlStack(int growSize, int initSize)
{
} /* size: 0 */

// <00F5015F> ../public/tier0/utlstack.h:105
void CUtlStack<CAnimPose::CUtlStack(int growSize, int initSize)
{
} /* size: 0 */

// <06E27B9F> ../../public/tier0/utlstack.h:112
void CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >::~CUtlStack()
{
} /* size: 0 */

// <057167CF> ../public/tier0/utlstack.h:112
void CUtlStack<const KeyValues3::~CUtlStack()
{
} /* size: 0 */

// <04E82B88> ../public/tier0/utlstack.h:112
void CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::~CUtlStack()
{
} /* size: 0 */

// <03E82158> ../public/tier0/utlstack.h:112
void CUtlStack<KeyValues3::~CUtlStack()
{
} /* size: 0 */

// <0312956A> ../public/tier0/utlstack.h:112
void CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::~CUtlStack()
{
} /* size: 0 */

// <01582F3C> ../public/tier0/utlstack.h:112
void CUtlStack<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int> >::~CUtlStack()
{
} /* size: 0 */

// <01580D3D> ../public/tier0/utlstack.h:112
void CUtlStack<CAnimPose::~CUtlStack()
{
} /* size: 0 */

// <04E82A7C> ../public/tier0/utlstack.h:138
inline void CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::operator[](int i)
{
} /* size: 0 */

// <06E26BF5> ../../public/tier0/utlstack.h:152
inline void CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >::Element(int i)
{
} /* size: 0 */

// <05716561> ../public/tier0/utlstack.h:152
inline void CUtlStack<const KeyValues3::Element(int i)
{
} /* size: 0 */

// <05716456> ../public/tier0/utlstack.h:152
inline void CUtlStack<KeyValues3::Element(int i)
{
} /* size: 0 */

// <04E82A00> ../public/tier0/utlstack.h:152
inline void CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(int i)
{
} /* size: 0 */

// <03124620> ../public/tier0/utlstack.h:152
inline void CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Element(int i)
{
} /* size: 0 */

// <027277CD> ../public/tier0/utlstack.h:152
inline void CUtlStack<CAnimPose::Element(int i)
{
} /* size: 0 */

// <0157BEFD> ../public/tier0/utlstack.h:152
inline void CUtlStack<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int> >::Element(int i)
{
} /* size: 0 */

// <05716745> ../public/tier0/utlstack.h:187
inline void CUtlStack<const KeyValues3::Top()
{
} /* size: 0 */

// <05716682> ../public/tier0/utlstack.h:187
inline void CUtlStack<KeyValues3::Top()
{
} /* size: 0 */

// <04E82AF5> ../public/tier0/utlstack.h:187
inline void CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Top()
{
} /* size: 0 */

// <03128E14> ../public/tier0/utlstack.h:187
inline void CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Top()
{
} /* size: 0 */

// <01582592> ../public/tier0/utlstack.h:187
inline void CUtlStack<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int> >::Top()
{
} /* size: 0 */

// <0157969F> ../public/tier0/utlstack.h:187
inline void CUtlStack<CAnimPose::Top()
{
} /* size: 0 */

// <06E486F6> ../../public/tier0/utlstack.h:205
inline void CUtlStack<KeyValues3::Count()
{
} /* size: 0 */

// <06E486DD> ../../public/tier0/utlstack.h:205
inline void CUtlStack<const KeyValues3::Count()
{
} /* size: 0 */

// <04E82B56> ../public/tier0/utlstack.h:205
inline void CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Count()
{
} /* size: 0 */

// <03128E2D> ../public/tier0/utlstack.h:205
inline void CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Count()
{
} /* size: 0 */

// <015825AB> ../public/tier0/utlstack.h:205
inline void Count(const CUtlStack<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, in this)
{
} /* size: 0 */

// <0157AE53> ../public/tier0/utlstack.h:205
inline void CUtlStack<CAnimPose::Count()
{
} /* size: 0 */

// <05716584> ../public/tier0/utlstack.h:226
void CUtlStack<const KeyValues3::GrowStack()
{
} /* size: 0 */

// <05716479> ../public/tier0/utlstack.h:226
void CUtlStack<KeyValues3::GrowStack()
{
} /* size: 0 */

// <04E82020> ../public/tier0/utlstack.h:226
void CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::GrowStack()
{
} /* size: 0 */

// <03124643> ../public/tier0/utlstack.h:226
void CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::GrowStack()
{
} /* size: 0 */

// <027277F0> ../public/tier0/utlstack.h:226
void CUtlStack<CAnimPose::GrowStack()
{
} /* size: 0 */

// <0157BF20> ../public/tier0/utlstack.h:226
void CUtlStack<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int> >::GrowStack()
{
} /* size: 0 */

// <01573B8B> ../public/tier0/utlstack.h:241
void CUtlStack<CAnimPose::EnsureCapacity(int num)
{
} /* size: 0 */

// <04E99B57> ../public/tier0/utlstack.h:253
// function calls: 9
void CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Push()
{
	CUtlMemory<CBufferString, int>::NumAllocated(); // 228
	CUtlMemory<CBufferString, int>::Base(); // 97
	CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::ResetDbgInfo(); // 233
	CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::GrowStack(); // 255
	CUtlMemory<CBufferString, int>::operator[](
			int i);  // 155
	CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
		int i);  // 256
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 712
	CBufferString::CBufferString(); // 1479
	Construct<CBufferString>(CBufferString* pMemory); // 256
} /* size: 0, inline expansions: 9 (0 bytes) */

// <04E82AC3> ../public/tier0/utlstack.h:253
void CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Push()
{
} /* size: 0 */

// <05716790> ../public/tier0/utlstack.h:265
void CUtlStack<const KeyValues3::Push(const KeyValues3* const& src)
{
} /* size: 0 */

// <057166CD> ../public/tier0/utlstack.h:265
void CUtlStack<KeyValues3::Push(KeyValues3* const& src)
{
} /* size: 0 */

// <04E99D49> ../public/tier0/utlstack.h:265
// function calls: 12
void CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Push(const CBufferString& src)
{
	CUtlMemory<CBufferString, int>::NumAllocated(); // 228
	CUtlMemory<CBufferString, int>::Base(); // 97
	CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::ResetDbgInfo(); // 233
	CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::GrowStack(); // 267
	CUtlMemory<CBufferString, int>::operator[](
			int i);  // 155
	CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Element(
		int i);  // 268
	CBufferString::ReadBuffer(); // 1374
	CBufferString::ReadBuffer(); // 745
	CBufferString::InitMinConstruct(
			bool bGrowable);  // 744
	CBufferString::Set(
		const char* pString,
		int nChars,
		bool bExact);  // 745
	CBufferString::CBufferString(
			const CBufferString& string);  // 1520
	CopyConstruct<CBufferString>(CBufferString* pMemory,
					const CBufferString& src);  // 268
} /* size: 0, inline expansions: 12 (0 bytes) */

// <04E82A23> ../public/tier0/utlstack.h:265
void CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Push(const CBufferString& src)
{
} /* size: 0 */

// <03128E5F> ../public/tier0/utlstack.h:265
void CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Push(const CUtlStringToken& src)
{
} /* size: 0 */

// <02727E8F> ../public/tier0/utlstack.h:265
void CUtlStack<CAnimPose::Push(CAnimPose* const& src)
{
} /* size: 0 */

// <01B5653F> ../public/tier0/utlstack.h:265
// function calls: 11
void CUtlStack<CAnimPose::Push(CAnimPose* const& src)
{
	CUtlMemory<CAnimPose::NumAllocated(); // 228
	CUtlMemory<CAnimPose::Base(); // 97
	CUtlStack<CAnimPose::ResetDbgInfo(); // 233
	CUtlMemory<CAnimPose::IsGrowable(); // 823
	CUtlMemory<CAnimPose::IsExternallyAllocated(); // 859
	CUtlMemory<CAnimPose::IsExternallyAllocated(); // 861
	CUtlMemory<CAnimPose::Grow(
		int num);  // 229
	CUtlStack<CAnimPose::GrowStack(); // 267
	CUtlMemory<CAnimPose::operator[](
			int i);  // 155
	CUtlStack<CAnimPose::Element(
		int i);  // 268
	CopyConstruct<CAnimPose*>(CAnimPose** pMemory,
					CAnimPose* const& src);  // 268
} /* size: 279, inline expansions: 11 (546 bytes) */

// <015D65C7> ../public/tier0/utlstack.h:265
// function calls: 7
void CUtlStack<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int> >::Push(const NodeUpdateDesc_t& src)
{
	CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int>::NumAllocated(); // 228
	CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int>::Base(); // 97
	CUtlStack<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int> >::ResetDbgInfo(); // 233
	CUtlStack<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int> >::GrowStack(); // 267
	CopyConstruct<CAnimGraphUpdateContext::NodeUpdateDesc_t>(NodeUpdateDesc_t* pMemory,
								const NodeUpdateDesc_t& src);  // 268
	CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int>::operator[](
			int i);  // 155
	CUtlStack<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int> >::Element(
		int i);  // 268
} /* size: 104, inline expansions: 7 (90 bytes) */

// <015825EA> ../public/tier0/utlstack.h:265
void CUtlStack<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int> >::Push(const NodeUpdateDesc_t& src)
{
} /* size: 0 */

// <05716777> ../public/tier0/utlstack.h:278
void CUtlStack<const KeyValues3::Pop()
{
} /* size: 0 */

// <057166B4> ../public/tier0/utlstack.h:278
void CUtlStack<KeyValues3::Pop()
{
} /* size: 0 */

// <04E82ADC> ../public/tier0/utlstack.h:278
void CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Pop()
{
} /* size: 0 */

// <03128E46> ../public/tier0/utlstack.h:278
void CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Pop()
{
} /* size: 0 */

// <01582579> ../public/tier0/utlstack.h:278
void CUtlStack<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int> >::Pop()
{
} /* size: 0 */

// <01579686> ../public/tier0/utlstack.h:278
void CUtlStack<CAnimPose::Pop()
{
} /* size: 0 */

// <04E82A49> ../public/tier0/utlstack.h:294
// variable: 1
void CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::PopMultiple(int num)
{
	{
		int i; // 297
	}
} /* size: 0 */

// <06E26056> ../../public/tier0/utlstack.h:308
// variable: 1
void CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >::Clear()
{
	{
		int i; // 310
	}
} /* size: 0 */

// <05716367> ../public/tier0/utlstack.h:308
// variable: 1
void CUtlStack<const KeyValues3::Clear()
{
	{
		int i; // 310
	}
} /* size: 0 */

// <04E80DF3> ../public/tier0/utlstack.h:308
// variable: 1
void CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Clear()
{
	{
		int i; // 310
	}
} /* size: 0 */

// <03E77115> ../public/tier0/utlstack.h:308
// variable: 1
void CUtlStack<KeyValues3::Clear()
{
	{
		int i; // 310
	}
} /* size: 0 */

// <0311F580> ../public/tier0/utlstack.h:308
// variable: 1
void CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Clear()
{
	{
		int i; // 310
	}
} /* size: 0 */

// <01575ED3> ../public/tier0/utlstack.h:308
// variable: 1
void CUtlStack<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int> >::Clear()
{
	{
		int i; // 310
	}
} /* size: 0 */

// <01574B13> ../public/tier0/utlstack.h:308
// variable: 1
void CUtlStack<CAnimPose::Clear()
{
	{
		int i; // 310
	}
} /* size: 0 */

// <06E26C18> ../../public/tier0/utlstack.h:322
void CUtlStack<CInterpolationTimeContext, CUtlMemory<CInterpolationTimeContext, int> >::Purge()
{
} /* size: 0 */

// <0571659D> ../public/tier0/utlstack.h:322
void CUtlStack<const KeyValues3::Purge()
{
} /* size: 0 */

// <04E82061> ../public/tier0/utlstack.h:322
void CUtlStack<CBufferString, CUtlMemory<CBufferString, int> >::Purge()
{
} /* size: 0 */

// <03E79FB3> ../public/tier0/utlstack.h:322
void CUtlStack<KeyValues3::Purge()
{
} /* size: 0 */

// <03124FC1> ../public/tier0/utlstack.h:322
void CUtlStack<CUtlStringToken, CUtlMemory<CUtlStringToken, int> >::Purge()
{
} /* size: 0 */

// <0157CBCC> ../public/tier0/utlstack.h:322
void CUtlStack<CAnimGraphUpdateContext::NodeUpdateDesc_t, CUtlMemory<CAnimGraphUpdateContext::NodeUpdateDesc_t, int> >::Purge()
{
} /* size: 0 */

// <0157B03C> ../public/tier0/utlstack.h:322
void CUtlStack<CAnimPose::Purge()
{
} /* size: 0 */

