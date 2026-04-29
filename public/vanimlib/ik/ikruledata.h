
//
// public/vanimlib/ik/ikruledata.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 5
//	classes: 5
//

// <03486DC8> ../public/vanimlib/ik/ikruledata.h:7
void IIKRuleData::IIKRuleData()
{
} /* size: 0 */

// <03486DAC> ../public/vanimlib/ik/ikruledata.h:7
inline void IIKRuleData::IIKRuleData()
{
} /* size: 0 */

// <03486D25> ../public/vanimlib/ik/ikruledata.h:7
inline void IIKRuleData::operator=(const IIKRuleData &)
{
} /* size: 0 */

// <00041140> ../public/vanimlib/ik/ikruledata.h:7
// member functions: 21
// member variable: 1
// vtable entries: 6
// class size: 8
class IIKRuleData {
	/* ../public/vanimlib/ik/ikruledata.h:20 */
	enum Type {
		Ground = 0,
		Ground_VirtualPlanes = 1,
		Debug = 2,
		FollowAnimation = 3,
	};
	int ()(void) * * _vptr.IIKRuleData; /* 0 8 */
	/* ../public/vanimlib/ik/ikruledata.h:11 */
	virtual void KV3TransferSave(const IIKRuleData* , CKV3TransferSaveContext* );
	/* ../public/vanimlib/ik/ikruledata.h:12 */
	virtual void KV3TransferLoad(IIKRuleData* , CKV3TransferLoadContext* );
	/* ../public/vanimlib/ik/ikruledata.h:13 */
	void KV3TransferPolymorphicClassname(const IIKRuleData* , char& );
	/* ../public/vanimlib/ik/ikruledata.h:14 */
	IIKRuleData* KV3TransferAllocateClassInstance(const char* );
	/* ../public/vanimlib/ik/ikruledata.h:16 */
	virtual void ~IIKRuleData(IIKRuleData* );
	/* ../public/vanimlib/ik/ikruledata.h:17 */
	virtual bool Initialize(IIKRuleData* , const CModel* );
	/* ../public/vanimlib/ik/ikruledata.h:18 */
	virtual IIKRuleData* Clone(const IIKRuleData* );
	/* ../public/vanimlib/ik/ikruledata.h:28 */
	virtual Type GetType(const IIKRuleData* );
	/* ../public/vanimlib/ik/ikruledata.h:29 */
	virtual const char* GetTypeName(const IIKRuleData* );
	void IIKRuleData(class IIKRuleData *, const class IIKRuleData  &); /* linkage=_ZN11IIKRuleDataC4ERKS_ */
	void IIKRuleData(class IIKRuleData *); /* linkage=_ZN11IIKRuleDataC4Ev */
	class IIKRuleData & operator=(class IIKRuleData *, const class IIKRuleData  &); /* linkage=_ZN11IIKRuleDataaSERKS_ */
	virtual void KV3TransferSave(const class IIKRuleData  *, class CKV3TransferSaveContext *); /* linkage=_ZNK11IIKRuleData15KV3TransferSaveEP23CKV3TransferSaveContext */
	virtual void KV3TransferLoad(class IIKRuleData *, class CKV3TransferLoadContext *); /* linkage=_ZN11IIKRuleData15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferPolymorphicClassname(const class IIKRuleData  *, char &); /* linkage=_ZN11IIKRuleData31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class IIKRuleData * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN11IIKRuleData32KV3TransferAllocateClassInstanceEPKc */
	virtual void ~IIKRuleData(class IIKRuleData *); /* linkage=_ZN11IIKRuleDataD4Ev */
	virtual bool Initialize(class IIKRuleData *, const class CModel  *); /* linkage=_ZN11IIKRuleData10InitializeEPK6CModel */
	virtual class IIKRuleData * Clone(const class IIKRuleData  *); /* linkage=_ZNK11IIKRuleData5CloneEv */
	virtual enum Type GetType(const class IIKRuleData  *); /* linkage=_ZNK11IIKRuleData7GetTypeEv */
	virtual const char  * GetTypeName(const class IIKRuleData  *); /* linkage=_ZNK11IIKRuleData11GetTypeNameEv */
};

// <0007704F> ../public/vanimlib/ik/ikruledata.h:7
// member functions: 22
// member variable: 1
// vtable entries: 6
// class size: 8
class IIKRuleData {
	/* ../public/vanimlib/ik/ikruledata.h:20 */
	enum Type {
		Ground = 0,
		Ground_VirtualPlanes = 1,
		Debug = 2,
		FollowAnimation = 3,
	};
	IIKRuleData& operator=(IIKRuleData* , const IIKRuleData& );
	int ()(void) * * _vptr.IIKRuleData; /* 0 8 */
	/* ../public/vanimlib/ik/ikruledata.h:11 */
	virtual void KV3TransferSave(const IIKRuleData* , CKV3TransferSaveContext* );
	/* ../public/vanimlib/ik/ikruledata.h:12 */
	virtual void KV3TransferLoad(IIKRuleData* , CKV3TransferLoadContext* );
	/* ../public/vanimlib/ik/ikruledata.h:13 */
	void KV3TransferPolymorphicClassname(const IIKRuleData* , char& );
	/* ../public/vanimlib/ik/ikruledata.h:14 */
	IIKRuleData* KV3TransferAllocateClassInstance(const char* );
	/* ../public/vanimlib/ik/ikruledata.h:16 */
	virtual void ~IIKRuleData(IIKRuleData* );
	/* ../public/vanimlib/ik/ikruledata.h:17 */
	virtual bool Initialize(IIKRuleData* , const CModel* );
	/* ../public/vanimlib/ik/ikruledata.h:18 */
	virtual IIKRuleData* Clone(const IIKRuleData* );
	/* ../public/vanimlib/ik/ikruledata.h:28 */
	virtual Type GetType(const IIKRuleData* );
	/* ../public/vanimlib/ik/ikruledata.h:29 */
	virtual const char* GetTypeName(const IIKRuleData* );
	void IIKRuleData(class IIKRuleData *, const class IIKRuleData  &); /* linkage=_ZN11IIKRuleDataC4ERKS_ */
	void IIKRuleData(class IIKRuleData *); /* linkage=_ZN11IIKRuleDataC4Ev */
	class IIKRuleData & operator=(class IIKRuleData *, const class IIKRuleData  &); /* linkage=_ZN11IIKRuleDataaSERKS_ */
	virtual void KV3TransferSave(const class IIKRuleData  *, class CKV3TransferSaveContext *); /* linkage=_ZNK11IIKRuleData15KV3TransferSaveEP23CKV3TransferSaveContext */
	virtual void KV3TransferLoad(class IIKRuleData *, class CKV3TransferLoadContext *); /* linkage=_ZN11IIKRuleData15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferPolymorphicClassname(const class IIKRuleData  *, char &); /* linkage=_ZN11IIKRuleData31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class IIKRuleData * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN11IIKRuleData32KV3TransferAllocateClassInstanceEPKc */
	virtual void ~IIKRuleData(class IIKRuleData *); /* linkage=_ZN11IIKRuleDataD4Ev */
	virtual bool Initialize(class IIKRuleData *, const class CModel  *); /* linkage=_ZN11IIKRuleData10InitializeEPK6CModel */
	virtual class IIKRuleData * Clone(const class IIKRuleData  *); /* linkage=_ZNK11IIKRuleData5CloneEv */
	virtual enum Type GetType(const class IIKRuleData  *); /* linkage=_ZNK11IIKRuleData7GetTypeEv */
	virtual const char  * GetTypeName(const class IIKRuleData  *); /* linkage=_ZNK11IIKRuleData11GetTypeNameEv */
};

// <000C1968> ../public/vanimlib/ik/ikruledata.h:7
// member functions: 24
// member variable: 1
// vtable entries: 6
// class size: 8
class IIKRuleData {
	/* ../public/vanimlib/ik/ikruledata.h:20 */
	enum Type {
		Ground = 0,
		Ground_VirtualPlanes = 1,
		Debug = 2,
		FollowAnimation = 3,
	};
	void IIKRuleData(IIKRuleData* , const IIKRuleData& );
	void IIKRuleData(IIKRuleData* );
	IIKRuleData& operator=(IIKRuleData* , const IIKRuleData& );
	int ()(void) * * _vptr.IIKRuleData; /* 0 8 */
	/* ../public/vanimlib/ik/ikruledata.h:11 */
	virtual void KV3TransferSave(const IIKRuleData* , CKV3TransferSaveContext* );
	/* ../public/vanimlib/ik/ikruledata.h:12 */
	virtual void KV3TransferLoad(IIKRuleData* , CKV3TransferLoadContext* );
	/* ../public/vanimlib/ik/ikruledata.h:13 */
	void KV3TransferPolymorphicClassname(const IIKRuleData* , char& );
	/* ../public/vanimlib/ik/ikruledata.h:14 */
	IIKRuleData* KV3TransferAllocateClassInstance(const char* );
	/* ../public/vanimlib/ik/ikruledata.h:16 */
	virtual void ~IIKRuleData(IIKRuleData* );
	/* ../public/vanimlib/ik/ikruledata.h:17 */
	virtual bool Initialize(IIKRuleData* , const CModel* );
	/* ../public/vanimlib/ik/ikruledata.h:18 */
	virtual IIKRuleData* Clone(const IIKRuleData* );
	/* ../public/vanimlib/ik/ikruledata.h:28 */
	virtual Type GetType(const IIKRuleData* );
	/* ../public/vanimlib/ik/ikruledata.h:29 */
	virtual const char* GetTypeName(const IIKRuleData* );
	void IIKRuleData(class IIKRuleData *, const class IIKRuleData  &); /* linkage=_ZN11IIKRuleDataC4ERKS_ */
	void IIKRuleData(class IIKRuleData *); /* linkage=_ZN11IIKRuleDataC4Ev */
	class IIKRuleData & operator=(class IIKRuleData *, const class IIKRuleData  &); /* linkage=_ZN11IIKRuleDataaSERKS_ */
	virtual void KV3TransferSave(const class IIKRuleData  *, class CKV3TransferSaveContext *); /* linkage=_ZNK11IIKRuleData15KV3TransferSaveEP23CKV3TransferSaveContext */
	virtual void KV3TransferLoad(class IIKRuleData *, class CKV3TransferLoadContext *); /* linkage=_ZN11IIKRuleData15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferPolymorphicClassname(const class IIKRuleData  *, char &); /* linkage=_ZN11IIKRuleData31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class IIKRuleData * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN11IIKRuleData32KV3TransferAllocateClassInstanceEPKc */
	virtual void ~IIKRuleData(class IIKRuleData *); /* linkage=_ZN11IIKRuleDataD4Ev */
	virtual bool Initialize(class IIKRuleData *, const class CModel  *); /* linkage=_ZN11IIKRuleData10InitializeEPK6CModel */
	virtual class IIKRuleData * Clone(const class IIKRuleData  *); /* linkage=_ZNK11IIKRuleData5CloneEv */
	virtual enum Type GetType(const class IIKRuleData  *); /* linkage=_ZNK11IIKRuleData7GetTypeEv */
	virtual const char  * GetTypeName(const class IIKRuleData  *); /* linkage=_ZNK11IIKRuleData11GetTypeNameEv */
};

// <03365079> ../public/vanimlib/ik/ikruledata.h:7
// member functions: 21
// member variable: 1
// vtable entries: 6
// class size: 8
class IIKRuleData {
	/* ../public/vanimlib/ik/ikruledata.h:10 */
	enum {
		KV3TRANSFER_BEHAVIOR = 2,
	};
	/* ../public/vanimlib/ik/ikruledata.h:20 */
	enum Type {
		Ground = 0,
		Ground_VirtualPlanes = 1,
		Debug = 2,
		FollowAnimation = 3,
	};
	int ()(void) * * _vptr.IIKRuleData; /* 0 8 */
	/* ../public/vanimlib/ik/ikruledata.h:11 */
	virtual void KV3TransferSave(const IIKRuleData* , CKV3TransferSaveContext* );
	/* ../public/vanimlib/ik/ikruledata.h:12 */
	virtual void KV3TransferLoad(IIKRuleData* , CKV3TransferLoadContext* );
	/* ../public/vanimlib/ik/ikruledata.h:13 */
	void KV3TransferPolymorphicClassname(const IIKRuleData* , char& );
	/* ../public/vanimlib/ik/ikruledata.h:14 */
	IIKRuleData* KV3TransferAllocateClassInstance(const char* );
	/* ../public/vanimlib/ik/ikruledata.h:16 */
	virtual void ~IIKRuleData(IIKRuleData* );
	/* ../public/vanimlib/ik/ikruledata.h:17 */
	virtual bool Initialize(IIKRuleData* , const CModel* );
	/* ../public/vanimlib/ik/ikruledata.h:18 */
	virtual IIKRuleData* Clone(const IIKRuleData* );
	/* ../public/vanimlib/ik/ikruledata.h:28 */
	virtual Type GetType(const IIKRuleData* );
	/* ../public/vanimlib/ik/ikruledata.h:29 */
	virtual const char* GetTypeName(const IIKRuleData* );
	void IIKRuleData(class IIKRuleData *, const class IIKRuleData  &); /* linkage=_ZN11IIKRuleDataC4ERKS_ */
	void IIKRuleData(class IIKRuleData *); /* linkage=_ZN11IIKRuleDataC4Ev */
	class IIKRuleData & operator=(class IIKRuleData *, const class IIKRuleData  &); /* linkage=_ZN11IIKRuleDataaSERKS_ */
	virtual void KV3TransferSave(const class IIKRuleData  *, class CKV3TransferSaveContext *); /* linkage=_ZNK11IIKRuleData15KV3TransferSaveEP23CKV3TransferSaveContext */
	virtual void KV3TransferLoad(class IIKRuleData *, class CKV3TransferLoadContext *); /* linkage=_ZN11IIKRuleData15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferPolymorphicClassname(const class IIKRuleData  *, char &); /* linkage=_ZN11IIKRuleData31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class IIKRuleData * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN11IIKRuleData32KV3TransferAllocateClassInstanceEPKc */
	virtual void ~IIKRuleData(class IIKRuleData *); /* linkage=_ZN11IIKRuleDataD4Ev */
	virtual bool Initialize(class IIKRuleData *, const class CModel  *); /* linkage=_ZN11IIKRuleData10InitializeEPK6CModel */
	virtual class IIKRuleData * Clone(const class IIKRuleData  *); /* linkage=_ZNK11IIKRuleData5CloneEv */
	virtual enum Type GetType(const class IIKRuleData  *); /* linkage=_ZNK11IIKRuleData7GetTypeEv */
	virtual const char  * GetTypeName(const class IIKRuleData  *); /* linkage=_ZNK11IIKRuleData11GetTypeNameEv */
};

// <0342EB64> ../public/vanimlib/ik/ikruledata.h:7
// member functions: 23
// member variable: 1
// vtable entries: 6
// class size: 8
class IIKRuleData {
	/* ../public/vanimlib/ik/ikruledata.h:20 */
	enum Type {
		Ground = 0,
		Ground_VirtualPlanes = 1,
		Debug = 2,
		FollowAnimation = 3,
	};
	void IIKRuleData(IIKRuleData* , const IIKRuleData& );
	void IIKRuleData(IIKRuleData* );
	int ()(void) * * _vptr.IIKRuleData; /* 0 8 */
	/* ../public/vanimlib/ik/ikruledata.h:11 */
	virtual void KV3TransferSave(const IIKRuleData* , CKV3TransferSaveContext* );
	/* ../public/vanimlib/ik/ikruledata.h:12 */
	virtual void KV3TransferLoad(IIKRuleData* , CKV3TransferLoadContext* );
	/* ik/ikruledata.cpp:9 */
	void KV3TransferPolymorphicClassname(const IIKRuleData* , char& );
	/* ik/ikruledata.cpp:14 */
	IIKRuleData* KV3TransferAllocateClassInstance(const char* );
	/* ../public/vanimlib/ik/ikruledata.h:16 */
	virtual void ~IIKRuleData(IIKRuleData* );
	/* ../public/vanimlib/ik/ikruledata.h:17 */
	virtual bool Initialize(IIKRuleData* , const CModel* );
	/* ../public/vanimlib/ik/ikruledata.h:18 */
	virtual IIKRuleData* Clone(const IIKRuleData* );
	/* ../public/vanimlib/ik/ikruledata.h:28 */
	virtual Type GetType(const IIKRuleData* );
	/* ../public/vanimlib/ik/ikruledata.h:29 */
	virtual const char* GetTypeName(const IIKRuleData* );
	void IIKRuleData(class IIKRuleData *, const class IIKRuleData  &); /* linkage=_ZN11IIKRuleDataC4ERKS_ */
	void IIKRuleData(class IIKRuleData *); /* linkage=_ZN11IIKRuleDataC4Ev */
	class IIKRuleData & operator=(class IIKRuleData *, const class IIKRuleData  &); /* linkage=_ZN11IIKRuleDataaSERKS_ */
	virtual void KV3TransferSave(const class IIKRuleData  *, class CKV3TransferSaveContext *); /* linkage=_ZNK11IIKRuleData15KV3TransferSaveEP23CKV3TransferSaveContext */
	virtual void KV3TransferLoad(class IIKRuleData *, class CKV3TransferLoadContext *); /* linkage=_ZN11IIKRuleData15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferPolymorphicClassname(const class IIKRuleData  *, char &); /* linkage=_ZN11IIKRuleData31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class IIKRuleData * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN11IIKRuleData32KV3TransferAllocateClassInstanceEPKc */
	virtual void ~IIKRuleData(class IIKRuleData *); /* linkage=_ZN11IIKRuleDataD4Ev */
	virtual bool Initialize(class IIKRuleData *, const class CModel  *); /* linkage=_ZN11IIKRuleData10InitializeEPK6CModel */
	virtual class IIKRuleData * Clone(const class IIKRuleData  *); /* linkage=_ZNK11IIKRuleData5CloneEv */
	virtual enum Type GetType(const class IIKRuleData  *); /* linkage=_ZNK11IIKRuleData7GetTypeEv */
	virtual const char  * GetTypeName(const class IIKRuleData  *); /* linkage=_ZNK11IIKRuleData11GetTypeNameEv */
};

// <0348A9F4> ../public/vanimlib/ik/ikruledata.h:16
void IIKRuleData::~IIKRuleData()
{
} /* size: 0 */

// <0348A9C4> ../public/vanimlib/ik/ikruledata.h:16
inline void IIKRuleData::~IIKRuleData()
{
} /* size: 0 */

