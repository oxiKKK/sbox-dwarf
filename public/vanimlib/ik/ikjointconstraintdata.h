
//
// public/vanimlib/ik/ikjointconstraintdata.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 7
//	classes: 5
//

// <034280FD> ../public/vanimlib/ik/ikjointconstraintdata.h:12
void IIKJointConstraintData::IIKJointConstraintData()
{
} /* size: 0 */

// <034280E1> ../public/vanimlib/ik/ikjointconstraintdata.h:12
inline void IIKJointConstraintData::IIKJointConstraintData()
{
} /* size: 0 */

// <0341FA9D> ../public/vanimlib/ik/ikjointconstraintdata.h:12
inline void IIKJointConstraintData::operator=(const IIKJointConstraintData &)
{
} /* size: 0 */

// <00040F35> ../public/vanimlib/ik/ikjointconstraintdata.h:12
// member functions: 25
// member variable: 1
// vtable entries: 8
// class size: 8
class IIKJointConstraintData {
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:25 */
	enum Type {
		Hinge = 0,
		Plane = 1,
	};
	int ()(void) * * _vptr.IIKJointConstraintData; /* 0 8 */
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:16 */
	virtual void KV3TransferSave(const IIKJointConstraintData* , CKV3TransferSaveContext* );
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:17 */
	virtual void KV3TransferLoad(IIKJointConstraintData* , CKV3TransferLoadContext* );
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:18 */
	void KV3TransferPolymorphicClassname(const IIKJointConstraintData* , char& );
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:19 */
	IIKJointConstraintData* KV3TransferAllocateClassInstance(const char* );
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:21 */
	virtual void ~IIKJointConstraintData(IIKJointConstraintData* );
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:22 */
	virtual bool Initialize(IIKJointConstraintData* , const CModel* );
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:23 */
	virtual IIKJointConstraintData* Clone(const IIKJointConstraintData* );
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:31 */
	virtual Type GetType(const IIKJointConstraintData* );
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:32 */
	virtual const char* GetTypeName(const IIKJointConstraintData* );
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:34 */
	virtual VectorAligned GetHingeAxis(const IIKJointConstraintData* );
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:36 */
	virtual matrix3x4a_t Constrain(const IIKJointConstraintData* , const CIKChainData_t* , const matrix3x4a_t& , int, const IPoseAccessor* , IAnimationDebugRenderer* , int);
	virtual void KV3TransferSave(const class IIKJointConstraintData  *, class CKV3TransferSaveContext *); /* linkage=_ZNK22IIKJointConstraintData15KV3TransferSaveEP23CKV3TransferSaveContext */
	virtual void KV3TransferLoad(class IIKJointConstraintData *, class CKV3TransferLoadContext *); /* linkage=_ZN22IIKJointConstraintData15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferPolymorphicClassname(const class IIKJointConstraintData  *, char &); /* linkage=_ZN22IIKJointConstraintData31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class IIKJointConstraintData * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN22IIKJointConstraintData32KV3TransferAllocateClassInstanceEPKc */
	virtual void ~IIKJointConstraintData(class IIKJointConstraintData *); /* linkage=_ZN22IIKJointConstraintDataD4Ev */
	virtual bool Initialize(class IIKJointConstraintData *, const class CModel  *); /* linkage=_ZN22IIKJointConstraintData10InitializeEPK6CModel */
	virtual class IIKJointConstraintData * Clone(const class IIKJointConstraintData  *); /* linkage=_ZNK22IIKJointConstraintData5CloneEv */
	virtual enum Type GetType(const class IIKJointConstraintData  *); /* linkage=_ZNK22IIKJointConstraintData7GetTypeEv */
	virtual const char  * GetTypeName(const class IIKJointConstraintData  *); /* linkage=_ZNK22IIKJointConstraintData11GetTypeNameEv */
	/* <334860d> ../public/vanimlib/ik/ikjointconstraintdata.h:34 */
	virtual class VectorAligned GetHingeAxis(const class IIKJointConstraintData  *); /* linkage=_ZNK22IIKJointConstraintData12GetHingeAxisEv */
	virtual class matrix3x4a_t Constrain(const class IIKJointConstraintData  *, const class CIKChainData_t  *, const class matrix3x4a_t  &, int, const class IPoseAccessor  *, class IAnimationDebugRenderer *, int); /* linkage=_ZNK22IIKJointConstraintData9ConstrainEPK14CIKChainData_tRK12matrix3x4a_tiPK13IPoseAccessorP23IAnimationDebugRendereri */
	void IIKJointConstraintData(class IIKJointConstraintData *, const class IIKJointConstraintData  &); /* linkage=_ZN22IIKJointConstraintDataC4ERKS_ */
	void IIKJointConstraintData(class IIKJointConstraintData *); /* linkage=_ZN22IIKJointConstraintDataC4Ev */
	class IIKJointConstraintData & operator=(class IIKJointConstraintData *, const class IIKJointConstraintData  &); /* linkage=_ZN22IIKJointConstraintDataaSERKS_ */
};

// <016E4D5C> ../public/vanimlib/ik/ikjointconstraintdata.h:12
// member functions: 27
// member variable: 1
// vtable entries: 8
// class size: 8
class IIKJointConstraintData {
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:25 */
	enum Type {
		Hinge = 0,
		Plane = 1,
	};
	void IIKJointConstraintData(IIKJointConstraintData* , const IIKJointConstraintData& );
	void IIKJointConstraintData(IIKJointConstraintData* );
	int ()(void) * * _vptr.IIKJointConstraintData; /* 0 8 */
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:16 */
	virtual void KV3TransferSave(const IIKJointConstraintData* , CKV3TransferSaveContext* );
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:17 */
	virtual void KV3TransferLoad(IIKJointConstraintData* , CKV3TransferLoadContext* );
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:18 */
	void KV3TransferPolymorphicClassname(const IIKJointConstraintData* , char& );
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:19 */
	IIKJointConstraintData* KV3TransferAllocateClassInstance(const char* );
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:21 */
	virtual void ~IIKJointConstraintData(IIKJointConstraintData* );
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:22 */
	virtual bool Initialize(IIKJointConstraintData* , const CModel* );
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:23 */
	virtual IIKJointConstraintData* Clone(const IIKJointConstraintData* );
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:31 */
	virtual Type GetType(const IIKJointConstraintData* );
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:32 */
	virtual const char* GetTypeName(const IIKJointConstraintData* );
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:34 */
	virtual VectorAligned GetHingeAxis(const IIKJointConstraintData* );
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:36 */
	virtual matrix3x4a_t Constrain(const IIKJointConstraintData* , const CIKChainData_t* , const matrix3x4a_t& , int, const IPoseAccessor* , IAnimationDebugRenderer* , int);
	virtual void KV3TransferSave(const class IIKJointConstraintData  *, class CKV3TransferSaveContext *); /* linkage=_ZNK22IIKJointConstraintData15KV3TransferSaveEP23CKV3TransferSaveContext */
	virtual void KV3TransferLoad(class IIKJointConstraintData *, class CKV3TransferLoadContext *); /* linkage=_ZN22IIKJointConstraintData15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferPolymorphicClassname(const class IIKJointConstraintData  *, char &); /* linkage=_ZN22IIKJointConstraintData31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class IIKJointConstraintData * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN22IIKJointConstraintData32KV3TransferAllocateClassInstanceEPKc */
	virtual void ~IIKJointConstraintData(class IIKJointConstraintData *); /* linkage=_ZN22IIKJointConstraintDataD4Ev */
	virtual bool Initialize(class IIKJointConstraintData *, const class CModel  *); /* linkage=_ZN22IIKJointConstraintData10InitializeEPK6CModel */
	virtual class IIKJointConstraintData * Clone(const class IIKJointConstraintData  *); /* linkage=_ZNK22IIKJointConstraintData5CloneEv */
	virtual enum Type GetType(const class IIKJointConstraintData  *); /* linkage=_ZNK22IIKJointConstraintData7GetTypeEv */
	virtual const char  * GetTypeName(const class IIKJointConstraintData  *); /* linkage=_ZNK22IIKJointConstraintData11GetTypeNameEv */
	/* <334860d> ../public/vanimlib/ik/ikjointconstraintdata.h:34 */
	virtual class VectorAligned GetHingeAxis(const class IIKJointConstraintData  *); /* linkage=_ZNK22IIKJointConstraintData12GetHingeAxisEv */
	virtual class matrix3x4a_t Constrain(const class IIKJointConstraintData  *, const class CIKChainData_t  *, const class matrix3x4a_t  &, int, const class IPoseAccessor  *, class IAnimationDebugRenderer *, int); /* linkage=_ZNK22IIKJointConstraintData9ConstrainEPK14CIKChainData_tRK12matrix3x4a_tiPK13IPoseAccessorP23IAnimationDebugRendereri */
	void IIKJointConstraintData(class IIKJointConstraintData *, const class IIKJointConstraintData  &); /* linkage=_ZN22IIKJointConstraintDataC4ERKS_ */
	void IIKJointConstraintData(class IIKJointConstraintData *); /* linkage=_ZN22IIKJointConstraintDataC4Ev */
	class IIKJointConstraintData & operator=(class IIKJointConstraintData *, const class IIKJointConstraintData  &); /* linkage=_ZN22IIKJointConstraintDataaSERKS_ */
};

// <0334151F> ../public/vanimlib/ik/ikjointconstraintdata.h:12
// member functions: 25
// member variable: 1
// vtable entries: 8
// class size: 8
class IIKJointConstraintData {
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:15 */
	enum {
		KV3TRANSFER_BEHAVIOR = 2,
	};
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:25 */
	enum Type {
		Hinge = 0,
		Plane = 1,
	};
	int ()(void) * * _vptr.IIKJointConstraintData; /* 0 8 */
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:16 */
	virtual void KV3TransferSave(const IIKJointConstraintData* , CKV3TransferSaveContext* );
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:17 */
	virtual void KV3TransferLoad(IIKJointConstraintData* , CKV3TransferLoadContext* );
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:18 */
	void KV3TransferPolymorphicClassname(const IIKJointConstraintData* , char& );
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:19 */
	IIKJointConstraintData* KV3TransferAllocateClassInstance(const char* );
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:21 */
	virtual void ~IIKJointConstraintData(IIKJointConstraintData* );
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:22 */
	virtual bool Initialize(IIKJointConstraintData* , const CModel* );
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:23 */
	virtual IIKJointConstraintData* Clone(const IIKJointConstraintData* );
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:31 */
	virtual Type GetType(const IIKJointConstraintData* );
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:32 */
	virtual const char* GetTypeName(const IIKJointConstraintData* );
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:34 */
	virtual VectorAligned GetHingeAxis(const IIKJointConstraintData* );
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:36 */
	virtual matrix3x4a_t Constrain(const IIKJointConstraintData* , const CIKChainData_t* , const matrix3x4a_t& , int, const IPoseAccessor* , IAnimationDebugRenderer* , int);
	virtual void KV3TransferSave(const class IIKJointConstraintData  *, class CKV3TransferSaveContext *); /* linkage=_ZNK22IIKJointConstraintData15KV3TransferSaveEP23CKV3TransferSaveContext */
	virtual void KV3TransferLoad(class IIKJointConstraintData *, class CKV3TransferLoadContext *); /* linkage=_ZN22IIKJointConstraintData15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferPolymorphicClassname(const class IIKJointConstraintData  *, char &); /* linkage=_ZN22IIKJointConstraintData31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class IIKJointConstraintData * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN22IIKJointConstraintData32KV3TransferAllocateClassInstanceEPKc */
	virtual void ~IIKJointConstraintData(class IIKJointConstraintData *); /* linkage=_ZN22IIKJointConstraintDataD4Ev */
	virtual bool Initialize(class IIKJointConstraintData *, const class CModel  *); /* linkage=_ZN22IIKJointConstraintData10InitializeEPK6CModel */
	virtual class IIKJointConstraintData * Clone(const class IIKJointConstraintData  *); /* linkage=_ZNK22IIKJointConstraintData5CloneEv */
	virtual enum Type GetType(const class IIKJointConstraintData  *); /* linkage=_ZNK22IIKJointConstraintData7GetTypeEv */
	virtual const char  * GetTypeName(const class IIKJointConstraintData  *); /* linkage=_ZNK22IIKJointConstraintData11GetTypeNameEv */
	/* <334860d> ../public/vanimlib/ik/ikjointconstraintdata.h:34 */
	virtual class VectorAligned GetHingeAxis(const class IIKJointConstraintData  *); /* linkage=_ZNK22IIKJointConstraintData12GetHingeAxisEv */
	virtual class matrix3x4a_t Constrain(const class IIKJointConstraintData  *, const class CIKChainData_t  *, const class matrix3x4a_t  &, int, const class IPoseAccessor  *, class IAnimationDebugRenderer *, int); /* linkage=_ZNK22IIKJointConstraintData9ConstrainEPK14CIKChainData_tRK12matrix3x4a_tiPK13IPoseAccessorP23IAnimationDebugRendereri */
	void IIKJointConstraintData(class IIKJointConstraintData *, const class IIKJointConstraintData  &); /* linkage=_ZN22IIKJointConstraintDataC4ERKS_ */
	void IIKJointConstraintData(class IIKJointConstraintData *); /* linkage=_ZN22IIKJointConstraintDataC4Ev */
	class IIKJointConstraintData & operator=(class IIKJointConstraintData *, const class IIKJointConstraintData  &); /* linkage=_ZN22IIKJointConstraintDataaSERKS_ */
};

// <033B2B64> ../public/vanimlib/ik/ikjointconstraintdata.h:12
// member functions: 27
// member variable: 1
// vtable entries: 8
// class size: 8
class IIKJointConstraintData {
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:25 */
	enum Type {
		Hinge = 0,
		Plane = 1,
	};
	void IIKJointConstraintData(IIKJointConstraintData* , const IIKJointConstraintData& );
	void IIKJointConstraintData(IIKJointConstraintData* );
	int ()(void) * * _vptr.IIKJointConstraintData; /* 0 8 */
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:16 */
	virtual void KV3TransferSave(const IIKJointConstraintData* , CKV3TransferSaveContext* );
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:17 */
	virtual void KV3TransferLoad(IIKJointConstraintData* , CKV3TransferLoadContext* );
	/* ik/ikjointconstraintdata.cpp:6 */
	void KV3TransferPolymorphicClassname(const IIKJointConstraintData* , char& );
	/* ik/ikjointconstraintdata.cpp:11 */
	IIKJointConstraintData* KV3TransferAllocateClassInstance(const char* );
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:21 */
	virtual void ~IIKJointConstraintData(IIKJointConstraintData* );
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:22 */
	virtual bool Initialize(IIKJointConstraintData* , const CModel* );
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:23 */
	virtual IIKJointConstraintData* Clone(const IIKJointConstraintData* );
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:31 */
	virtual Type GetType(const IIKJointConstraintData* );
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:32 */
	virtual const char* GetTypeName(const IIKJointConstraintData* );
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:34 */
	virtual VectorAligned GetHingeAxis(const IIKJointConstraintData* );
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:36 */
	virtual matrix3x4a_t Constrain(const IIKJointConstraintData* , const CIKChainData_t* , const matrix3x4a_t& , int, const IPoseAccessor* , IAnimationDebugRenderer* , int);
	virtual void KV3TransferSave(const class IIKJointConstraintData  *, class CKV3TransferSaveContext *); /* linkage=_ZNK22IIKJointConstraintData15KV3TransferSaveEP23CKV3TransferSaveContext */
	virtual void KV3TransferLoad(class IIKJointConstraintData *, class CKV3TransferLoadContext *); /* linkage=_ZN22IIKJointConstraintData15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferPolymorphicClassname(const class IIKJointConstraintData  *, char &); /* linkage=_ZN22IIKJointConstraintData31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class IIKJointConstraintData * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN22IIKJointConstraintData32KV3TransferAllocateClassInstanceEPKc */
	virtual void ~IIKJointConstraintData(class IIKJointConstraintData *); /* linkage=_ZN22IIKJointConstraintDataD4Ev */
	virtual bool Initialize(class IIKJointConstraintData *, const class CModel  *); /* linkage=_ZN22IIKJointConstraintData10InitializeEPK6CModel */
	virtual class IIKJointConstraintData * Clone(const class IIKJointConstraintData  *); /* linkage=_ZNK22IIKJointConstraintData5CloneEv */
	virtual enum Type GetType(const class IIKJointConstraintData  *); /* linkage=_ZNK22IIKJointConstraintData7GetTypeEv */
	virtual const char  * GetTypeName(const class IIKJointConstraintData  *); /* linkage=_ZNK22IIKJointConstraintData11GetTypeNameEv */
	/* <334860d> ../public/vanimlib/ik/ikjointconstraintdata.h:34 */
	virtual class VectorAligned GetHingeAxis(const class IIKJointConstraintData  *); /* linkage=_ZNK22IIKJointConstraintData12GetHingeAxisEv */
	virtual class matrix3x4a_t Constrain(const class IIKJointConstraintData  *, const class CIKChainData_t  *, const class matrix3x4a_t  &, int, const class IPoseAccessor  *, class IAnimationDebugRenderer *, int); /* linkage=_ZNK22IIKJointConstraintData9ConstrainEPK14CIKChainData_tRK12matrix3x4a_tiPK13IPoseAccessorP23IAnimationDebugRendereri */
	void IIKJointConstraintData(class IIKJointConstraintData *, const class IIKJointConstraintData  &); /* linkage=_ZN22IIKJointConstraintDataC4ERKS_ */
	void IIKJointConstraintData(class IIKJointConstraintData *); /* linkage=_ZN22IIKJointConstraintDataC4Ev */
	class IIKJointConstraintData & operator=(class IIKJointConstraintData *, const class IIKJointConstraintData  &); /* linkage=_ZN22IIKJointConstraintDataaSERKS_ */
};

// <033BC953> ../public/vanimlib/ik/ikjointconstraintdata.h:12
// member functions: 28
// member variable: 1
// vtable entries: 8
// class size: 8
class IIKJointConstraintData {
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:25 */
	enum Type {
		Hinge = 0,
		Plane = 1,
	};
	IIKJointConstraintData& operator=(IIKJointConstraintData* , const IIKJointConstraintData& );
	void IIKJointConstraintData(IIKJointConstraintData* , const IIKJointConstraintData& );
	void IIKJointConstraintData(IIKJointConstraintData* );
	int ()(void) * * _vptr.IIKJointConstraintData; /* 0 8 */
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:16 */
	virtual void KV3TransferSave(const IIKJointConstraintData* , CKV3TransferSaveContext* );
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:17 */
	virtual void KV3TransferLoad(IIKJointConstraintData* , CKV3TransferLoadContext* );
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:18 */
	void KV3TransferPolymorphicClassname(const IIKJointConstraintData* , char& );
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:19 */
	IIKJointConstraintData* KV3TransferAllocateClassInstance(const char* );
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:21 */
	virtual void ~IIKJointConstraintData(IIKJointConstraintData* );
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:22 */
	virtual bool Initialize(IIKJointConstraintData* , const CModel* );
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:23 */
	virtual IIKJointConstraintData* Clone(const IIKJointConstraintData* );
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:31 */
	virtual Type GetType(const IIKJointConstraintData* );
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:32 */
	virtual const char* GetTypeName(const IIKJointConstraintData* );
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:34 */
	virtual VectorAligned GetHingeAxis(const IIKJointConstraintData* );
	/* ../public/vanimlib/ik/ikjointconstraintdata.h:36 */
	virtual matrix3x4a_t Constrain(const IIKJointConstraintData* , const CIKChainData_t* , const matrix3x4a_t& , int, const IPoseAccessor* , IAnimationDebugRenderer* , int);
	virtual void KV3TransferSave(const class IIKJointConstraintData  *, class CKV3TransferSaveContext *); /* linkage=_ZNK22IIKJointConstraintData15KV3TransferSaveEP23CKV3TransferSaveContext */
	virtual void KV3TransferLoad(class IIKJointConstraintData *, class CKV3TransferLoadContext *); /* linkage=_ZN22IIKJointConstraintData15KV3TransferLoadEP23CKV3TransferLoadContext */
	void KV3TransferPolymorphicClassname(const class IIKJointConstraintData  *, char &); /* linkage=_ZN22IIKJointConstraintData31KV3TransferPolymorphicClassnameEPKS_RA256_c */
	class IIKJointConstraintData * KV3TransferAllocateClassInstance(const char  *); /* linkage=_ZN22IIKJointConstraintData32KV3TransferAllocateClassInstanceEPKc */
	virtual void ~IIKJointConstraintData(class IIKJointConstraintData *); /* linkage=_ZN22IIKJointConstraintDataD4Ev */
	virtual bool Initialize(class IIKJointConstraintData *, const class CModel  *); /* linkage=_ZN22IIKJointConstraintData10InitializeEPK6CModel */
	virtual class IIKJointConstraintData * Clone(const class IIKJointConstraintData  *); /* linkage=_ZNK22IIKJointConstraintData5CloneEv */
	virtual enum Type GetType(const class IIKJointConstraintData  *); /* linkage=_ZNK22IIKJointConstraintData7GetTypeEv */
	virtual const char  * GetTypeName(const class IIKJointConstraintData  *); /* linkage=_ZNK22IIKJointConstraintData11GetTypeNameEv */
	/* <334860d> ../public/vanimlib/ik/ikjointconstraintdata.h:34 */
	virtual class VectorAligned GetHingeAxis(const class IIKJointConstraintData  *); /* linkage=_ZNK22IIKJointConstraintData12GetHingeAxisEv */
	virtual class matrix3x4a_t Constrain(const class IIKJointConstraintData  *, const class CIKChainData_t  *, const class matrix3x4a_t  &, int, const class IPoseAccessor  *, class IAnimationDebugRenderer *, int); /* linkage=_ZNK22IIKJointConstraintData9ConstrainEPK14CIKChainData_tRK12matrix3x4a_tiPK13IPoseAccessorP23IAnimationDebugRendereri */
	void IIKJointConstraintData(class IIKJointConstraintData *, const class IIKJointConstraintData  &); /* linkage=_ZN22IIKJointConstraintDataC4ERKS_ */
	void IIKJointConstraintData(class IIKJointConstraintData *); /* linkage=_ZN22IIKJointConstraintDataC4Ev */
	class IIKJointConstraintData & operator=(class IIKJointConstraintData *, const class IIKJointConstraintData  &); /* linkage=_ZN22IIKJointConstraintDataaSERKS_ */
};

// <03428598> ../public/vanimlib/ik/ikjointconstraintdata.h:21
void IIKJointConstraintData::~IIKJointConstraintData()
{
} /* size: 0 */

// <03428568> ../public/vanimlib/ik/ikjointconstraintdata.h:21
inline void IIKJointConstraintData::~IIKJointConstraintData()
{
} /* size: 0 */

// <03428538> ../public/vanimlib/ik/ikjointconstraintdata.h:34
void IIKJointConstraintData::GetHingeAxis()
{
} /* size: 15 */

// <03347C14> ../public/vanimlib/ik/ikjointconstraintdata.h:34
inline void IIKJointConstraintData::GetHingeAxis()
{
} /* size: 0 */

