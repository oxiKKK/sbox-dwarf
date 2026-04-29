
//
// public/vanimlib/ik/poseaccessor.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 4
//	classes: 2
//

// <02889B06> ../public/vanimlib/ik/poseaccessor.h:3
void IPoseAccessor::IPoseAccessor()
{
} /* size: 0 */

// <02889AEA> ../public/vanimlib/ik/poseaccessor.h:3
inline void IPoseAccessor::IPoseAccessor()
{
} /* size: 0 */

// <00046418> ../public/vanimlib/ik/poseaccessor.h:3
// member functions: 20
// member variable: 1
// vtable entries: 8
// class size: 8
class IPoseAccessor {
	int ()(void) * * _vptr.IPoseAccessor; /* 0 8 */
	/* ../public/vanimlib/ik/poseaccessor.h:6 */
	virtual void ~IPoseAccessor(IPoseAccessor* );
	/* ../public/vanimlib/ik/poseaccessor.h:8 */
	virtual const CModel* GetModel(const IPoseAccessor* );
	/* ../public/vanimlib/ik/poseaccessor.h:10 */
	virtual CTransform GetModelToWorld(const IPoseAccessor* );
	/* ../public/vanimlib/ik/poseaccessor.h:12 */
	virtual void SetParentSpaceBone(IPoseAccessor* , int, const CTransform& );
	/* ../public/vanimlib/ik/poseaccessor.h:13 */
	virtual CTransform GetParentSpaceBone(const IPoseAccessor* , int);
	/* ../public/vanimlib/ik/poseaccessor.h:15 */
	virtual void SetModelSpaceBone(IPoseAccessor* , int, const CTransform& );
	/* ../public/vanimlib/ik/poseaccessor.h:16 */
	virtual CTransform GetModelSpaceBone(const IPoseAccessor* , int);
	/* ../public/vanimlib/ik/poseaccessor.h:18 */
	virtual void SetWorldSpaceBone(IPoseAccessor* , int, const CTransform& );
	/* ../public/vanimlib/ik/poseaccessor.h:19 */
	virtual CTransform GetWorldSpaceBone(const IPoseAccessor* , int);
	void IPoseAccessor(class IPoseAccessor *, const class IPoseAccessor  &); /* linkage=_ZN13IPoseAccessorC4ERKS_ */
	void IPoseAccessor(class IPoseAccessor *); /* linkage=_ZN13IPoseAccessorC4Ev */
	virtual void ~IPoseAccessor(class IPoseAccessor *); /* linkage=_ZN13IPoseAccessorD4Ev */
	virtual const class CModel  * GetModel(const class IPoseAccessor  *); /* linkage=_ZNK13IPoseAccessor8GetModelEv */
	virtual class CTransform GetModelToWorld(const class IPoseAccessor  *); /* linkage=_ZNK13IPoseAccessor15GetModelToWorldEv */
	virtual void SetParentSpaceBone(class IPoseAccessor *, int, const class CTransform  &); /* linkage=_ZN13IPoseAccessor18SetParentSpaceBoneEiRK10CTransform */
	virtual class CTransform GetParentSpaceBone(const class IPoseAccessor  *, int); /* linkage=_ZNK13IPoseAccessor18GetParentSpaceBoneEi */
	virtual void SetModelSpaceBone(class IPoseAccessor *, int, const class CTransform  &); /* linkage=_ZN13IPoseAccessor17SetModelSpaceBoneEiRK10CTransform */
	virtual class CTransform GetModelSpaceBone(const class IPoseAccessor  *, int); /* linkage=_ZNK13IPoseAccessor17GetModelSpaceBoneEi */
	virtual void SetWorldSpaceBone(class IPoseAccessor *, int, const class CTransform  &); /* linkage=_ZN13IPoseAccessor17SetWorldSpaceBoneEiRK10CTransform */
	virtual class CTransform GetWorldSpaceBone(const class IPoseAccessor  *, int); /* linkage=_ZNK13IPoseAccessor17GetWorldSpaceBoneEi */
};

// <0007B9EC> ../public/vanimlib/ik/poseaccessor.h:3
// member functions: 22
// member variable: 1
// vtable entries: 8
// class size: 8
class IPoseAccessor {
	void IPoseAccessor(IPoseAccessor* , const IPoseAccessor& );
	void IPoseAccessor(IPoseAccessor* );
	int ()(void) * * _vptr.IPoseAccessor; /* 0 8 */
	/* ../public/vanimlib/ik/poseaccessor.h:6 */
	virtual void ~IPoseAccessor(IPoseAccessor* );
	/* ../public/vanimlib/ik/poseaccessor.h:8 */
	virtual const CModel* GetModel(const IPoseAccessor* );
	/* ../public/vanimlib/ik/poseaccessor.h:10 */
	virtual CTransform GetModelToWorld(const IPoseAccessor* );
	/* ../public/vanimlib/ik/poseaccessor.h:12 */
	virtual void SetParentSpaceBone(IPoseAccessor* , int, const CTransform& );
	/* ../public/vanimlib/ik/poseaccessor.h:13 */
	virtual CTransform GetParentSpaceBone(const IPoseAccessor* , int);
	/* ../public/vanimlib/ik/poseaccessor.h:15 */
	virtual void SetModelSpaceBone(IPoseAccessor* , int, const CTransform& );
	/* ../public/vanimlib/ik/poseaccessor.h:16 */
	virtual CTransform GetModelSpaceBone(const IPoseAccessor* , int);
	/* ../public/vanimlib/ik/poseaccessor.h:18 */
	virtual void SetWorldSpaceBone(IPoseAccessor* , int, const CTransform& );
	/* ../public/vanimlib/ik/poseaccessor.h:19 */
	virtual CTransform GetWorldSpaceBone(const IPoseAccessor* , int);
	void IPoseAccessor(class IPoseAccessor *, const class IPoseAccessor  &); /* linkage=_ZN13IPoseAccessorC4ERKS_ */
	void IPoseAccessor(class IPoseAccessor *); /* linkage=_ZN13IPoseAccessorC4Ev */
	virtual void ~IPoseAccessor(class IPoseAccessor *); /* linkage=_ZN13IPoseAccessorD4Ev */
	virtual const class CModel  * GetModel(const class IPoseAccessor  *); /* linkage=_ZNK13IPoseAccessor8GetModelEv */
	virtual class CTransform GetModelToWorld(const class IPoseAccessor  *); /* linkage=_ZNK13IPoseAccessor15GetModelToWorldEv */
	virtual void SetParentSpaceBone(class IPoseAccessor *, int, const class CTransform  &); /* linkage=_ZN13IPoseAccessor18SetParentSpaceBoneEiRK10CTransform */
	virtual class CTransform GetParentSpaceBone(const class IPoseAccessor  *, int); /* linkage=_ZNK13IPoseAccessor18GetParentSpaceBoneEi */
	virtual void SetModelSpaceBone(class IPoseAccessor *, int, const class CTransform  &); /* linkage=_ZN13IPoseAccessor17SetModelSpaceBoneEiRK10CTransform */
	virtual class CTransform GetModelSpaceBone(const class IPoseAccessor  *, int); /* linkage=_ZNK13IPoseAccessor17GetModelSpaceBoneEi */
	virtual void SetWorldSpaceBone(class IPoseAccessor *, int, const class CTransform  &); /* linkage=_ZN13IPoseAccessor17SetWorldSpaceBoneEiRK10CTransform */
	virtual class CTransform GetWorldSpaceBone(const class IPoseAccessor  *, int); /* linkage=_ZNK13IPoseAccessor17GetWorldSpaceBoneEi */
};

// <02889BAD> ../public/vanimlib/ik/poseaccessor.h:6
void IPoseAccessor::~IPoseAccessor()
{
} /* size: 0 */

// <02889B7D> ../public/vanimlib/ik/poseaccessor.h:6
inline void IPoseAccessor::~IPoseAccessor()
{
} /* size: 0 */

