
//
// public/animationsystem/ianimmotorlist.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 2
//	class: 1
//

// <0146F0D5> ../public/animationsystem/ianimmotorlist.h:15
void IAnimMotorList::IAnimMotorList()
{
} /* size: 0 */

// <0146F0B9> ../public/animationsystem/ianimmotorlist.h:15
inline void IAnimMotorList::IAnimMotorList()
{
} /* size: 0 */

// <007490A9> ../public/animationsystem/ianimmotorlist.h:15
// member functions: 30
// member variable: 1
// vtable entries: 9
// class size: 8
class IAnimMotorList {
	void ~IAnimMotorList(IAnimMotorList* );
	void IAnimMotorList(IAnimMotorList* , IAnimMotorList& );
	void IAnimMotorList(IAnimMotorList* , const IAnimMotorList& );
	void IAnimMotorList(IAnimMotorList* );
	IAnimMotorList& operator=(IAnimMotorList* , IAnimMotorList& );
	IAnimMotorList& operator=(IAnimMotorList* , const IAnimMotorList& );
	int ()(void) * * _vptr.IAnimMotorList; /* 0 8 */
	/* ../public/animationsystem/ianimmotorlist.h:19 */
	virtual CClassInfoList GetMotorTypes(const IAnimMotorList* );
	/* ../public/animationsystem/ianimmotorlist.h:22 */
	virtual int GetMotorCount(const IAnimMotorList* );
	/* ../public/animationsystem/ianimmotorlist.h:25 */
	virtual IAnimMotor* GetMotor(IAnimMotorList* , int);
	/* ../public/animationsystem/ianimmotorlist.h:26 */
	virtual const IAnimMotor* GetMotor(const IAnimMotorList* , int);
	/* ../public/animationsystem/ianimmotorlist.h:29 */
	virtual IAnimMotor* GetDefaultMotor(IAnimMotorList* );
	/* ../public/animationsystem/ianimmotorlist.h:30 */
	virtual const IAnimMotor* GetDefaultMotor(const IAnimMotorList* );
	/* ../public/animationsystem/ianimmotorlist.h:31 */
	virtual void SetDefaultMotor(IAnimMotorList* , IAnimMotor* );
	/* ../public/animationsystem/ianimmotorlist.h:34 */
	virtual IAnimMotor* AddMotor(IAnimMotorList* , const char* );
	/* ../public/animationsystem/ianimmotorlist.h:35 */
	virtual void RemoveMotor(IAnimMotorList* , IAnimMotor* );
	void ~IAnimMotorList(class IAnimMotorList *); /* linkage=_ZN14IAnimMotorListD4Ev */
	void IAnimMotorList(class IAnimMotorList *, class IAnimMotorList &); /* linkage=_ZN14IAnimMotorListC4EOS_ */
	void IAnimMotorList(class IAnimMotorList *, const class IAnimMotorList  &); /* linkage=_ZN14IAnimMotorListC4ERKS_ */
	void IAnimMotorList(class IAnimMotorList *); /* linkage=_ZN14IAnimMotorListC4Ev */
	class IAnimMotorList & operator=(class IAnimMotorList *, class IAnimMotorList &); /* linkage=_ZN14IAnimMotorListaSEOS_ */
	class IAnimMotorList & operator=(class IAnimMotorList *, const class IAnimMotorList  &); /* linkage=_ZN14IAnimMotorListaSERKS_ */
	virtual CClassInfoList GetMotorTypes(const class IAnimMotorList  *); /* linkage=_ZNK14IAnimMotorList13GetMotorTypesEv */
	virtual int GetMotorCount(const class IAnimMotorList  *); /* linkage=_ZNK14IAnimMotorList13GetMotorCountEv */
	virtual class IAnimMotor * GetMotor(class IAnimMotorList *, int); /* linkage=_ZN14IAnimMotorList8GetMotorEi */
	virtual const class IAnimMotor  * GetMotor(const class IAnimMotorList  *, int); /* linkage=_ZNK14IAnimMotorList8GetMotorEi */
	virtual class IAnimMotor * GetDefaultMotor(class IAnimMotorList *); /* linkage=_ZN14IAnimMotorList15GetDefaultMotorEv */
	virtual const class IAnimMotor  * GetDefaultMotor(const class IAnimMotorList  *); /* linkage=_ZNK14IAnimMotorList15GetDefaultMotorEv */
	virtual void SetDefaultMotor(class IAnimMotorList *, class IAnimMotor *); /* linkage=_ZN14IAnimMotorList15SetDefaultMotorEP10IAnimMotor */
	virtual class IAnimMotor * AddMotor(class IAnimMotorList *, const char  *); /* linkage=_ZN14IAnimMotorList8AddMotorEPKc */
	virtual void RemoveMotor(class IAnimMotorList *, class IAnimMotor *); /* linkage=_ZN14IAnimMotorList11RemoveMotorEP10IAnimMotor */
};

