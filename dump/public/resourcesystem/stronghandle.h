
//
// public/resourcesystem/stronghandle.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libvfx_vulkan.so
//
//	functions: 569
//	classes: 44
//

// <0003DB74> ../public/resourcesystem/stronghandle.h:41
// member functions: 2
// member variable: 1
// class size: 8
class CStrongHandleBase {
	/* ../public/resourcesystem/stronghandle.h:44 */
	const ResourceBindingBase_t* GetResourceBindingBase(const CStrongHandleBase* );
protected:
	const class ResourceBindingBase_t * m_pBinding; /* 0 8 */
	const class ResourceBindingBase_t  * GetResourceBindingBase(const class CStrongHandleBase  *); /* linkage=_ZNK17CStrongHandleBase22GetResourceBindingBaseEv */
};

// <0583B38D> ../../public/resourcesystem/stronghandle.h:41
// member functions: 2
// member variable: 1
// class size: 8
class CStrongHandleBase {
	/* ../../public/resourcesystem/stronghandle.h:44 */
	const ResourceBindingBase_t* GetResourceBindingBase(const CStrongHandleBase* );
protected:
	const class ResourceBindingBase_t * m_pBinding; /* 0 8 */
	const class ResourceBindingBase_t  * GetResourceBindingBase(const class CStrongHandleBase  *); /* linkage=_ZNK17CStrongHandleBase22GetResourceBindingBaseEv */
};

// <042FD361> ../public/resourcesystem/stronghandle.h:44
inline void CStrongHandleBase::GetResourceBindingBase()
{
} /* size: 0 */

// <0003E2B6> ../public/resourcesystem/stronghandle.h:87
// member functions: 90
// member variable: 1
// class size: 8
class CStrongHandle<InfoForResourceTypeIMaterial2> : public CStrongHandleBase {
public:
	/* class CStrongHandleBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcesystem/stronghandle.h:438 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeIMaterial2>* );
	/* ../public/resourcesystem/stronghandle.h:459 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeIMaterial2>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:90 */
	typedef const class ResourceBinding_t<InfoForResourceTypeIMaterial2> * ResourceHandleTyped_t;
	/* ../public/resourcesystem/stronghandle.h:451 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeIMaterial2>* , ResourceId_t);
	/* ../public/resourcesystem/stronghandle.h:444 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeIMaterial2>* , const char* );
	/* ../public/resourcesystem/stronghandle.h:466 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeIMaterial2>* , CStrongHandle<InfoForResourceTypeIMaterial2>& );
	/* ../public/resourcesystem/stronghandle.h:473 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeIMaterial2>* , const CWeakHandle<InfoForResourceTypeIMaterial2>& );
	/* ../public/resourcesystem/stronghandle.h:480 */
	void ~CStrongHandle(CStrongHandle<InfoForResourceTypeIMaterial2>* );
	/* ../public/resourcesystem/stronghandle.h:547 */
	void Init(CStrongHandle<InfoForResourceTypeIMaterial2>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:490 */
	void Init(CStrongHandle<InfoForResourceTypeIMaterial2>* , ResourceId_t);
	/* ../public/resourcesystem/stronghandle.h:518 */
	void Init(CStrongHandle<InfoForResourceTypeIMaterial2>* , const CResourceName& );
	/* ../public/resourcesystem/stronghandle.h:575 */
	void Init(CStrongHandle<InfoForResourceTypeIMaterial2>* , const CWeakHandle<InfoForResourceTypeIMaterial2>& );
	/* ../public/resourcesystem/stronghandle.h:581 */
	void Init(CStrongHandle<InfoForResourceTypeIMaterial2>* , const CStrongHandle<InfoForResourceTypeIMaterial2>& );
	/* ../public/resourcesystem/stronghandle.h:609 */
	void Shutdown(CStrongHandle<InfoForResourceTypeIMaterial2>* );
	/* ../public/resourcesystem/stronghandle.h:657 */
	CStrongHandle<InfoForResourceTypeIMaterial2>& operator=(CStrongHandle<InfoForResourceTypeIMaterial2>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:664 */
	CStrongHandle<InfoForResourceTypeIMaterial2>& operator=(CStrongHandle<InfoForResourceTypeIMaterial2>* , const CStrongHandle<InfoForResourceTypeIMaterial2>& );
	/* ../public/resourcesystem/stronghandle.h:671 */
	CStrongHandle<InfoForResourceTypeIMaterial2>& operator=(CStrongHandle<InfoForResourceTypeIMaterial2>* , const CWeakHandle<InfoForResourceTypeIMaterial2>& );
	/* ../public/resourcesystem/stronghandle.h:851 */
	bool HasHandle(const CStrongHandle<InfoForResourceTypeIMaterial2>* );
	/* ../public/resourcesystem/stronghandle.h:857 */
	bool HasIdentity(const CStrongHandle<InfoForResourceTypeIMaterial2>* );
	/* ../public/resourcesystem/stronghandle.h:867 */
	bool HasData(const CStrongHandle<InfoForResourceTypeIMaterial2>* );
	/* ../public/resourcesystem/stronghandle.h:877 */
	bool IsLoaded(const CStrongHandle<InfoForResourceTypeIMaterial2>* );
	/* ../public/resourcesystem/stronghandle.h:887 */
	bool IsError(const CStrongHandle<InfoForResourceTypeIMaterial2>* );
	/* ../public/resourcesystem/stronghandle.h:731 */
	const RuntimeClass_t* operator const ResourceHandleInfo_t<InfoForResourceTypeIMaterial2>::RuntimeClass_t*(const CStrongHandle<InfoForResourceTypeIMaterial2>* );
	/* ../public/resourcesystem/stronghandle.h:738 */
	const RuntimeClass_t* operator->(const CStrongHandle<InfoForResourceTypeIMaterial2>* );
	/* ../public/resourcesystem/stronghandle.h:745 */
	ResourceHandleTyped_t operator CStrongHandle<InfoForResourceTypeIMaterial2>::ResourceHandleTyped_t(const CStrongHandle<InfoForResourceTypeIMaterial2>* );
	/* ../public/resourcesystem/stronghandle.h:758 */
	ResourceHandle_t operator ResourceHandle_t(const CStrongHandle<InfoForResourceTypeIMaterial2>* );
	/* ../public/resourcesystem/stronghandle.h:752 */
	CWeakHandle<InfoForResourceTypeIMaterial2> operator CWeakHandle<InfoForResourceTypeIMaterial2>(const CStrongHandle<InfoForResourceTypeIMaterial2>* );
	/* ../public/resourcesystem/stronghandle.h:708 */
	const CWeakHandle<InfoForResourceTypeIMaterial2> GetHandle(const CStrongHandle<InfoForResourceTypeIMaterial2>* );
	/* ../public/resourcesystem/stronghandle.h:716 */
	const ResourceBinding_t<InfoForResourceTypeIMaterial2>* GetBinding(const CStrongHandle<InfoForResourceTypeIMaterial2>* );
	/* ../public/resourcesystem/stronghandle.h:724 */
	const RuntimeClass_t* GetData(const CStrongHandle<InfoForResourceTypeIMaterial2>* );
	/* ../public/resourcesystem/stronghandle.h:791 */
	bool operator==(const CStrongHandle<InfoForResourceTypeIMaterial2>* , ResourceHandle_t);
	/* ../public/resourcesystem/stronghandle.h:798 */
	bool operator==(const CStrongHandle<InfoForResourceTypeIMaterial2>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:805 */
	bool operator==(const CStrongHandle<InfoForResourceTypeIMaterial2>* , const CStrongHandle<InfoForResourceTypeIMaterial2>& );
	/* ../public/resourcesystem/stronghandle.h:812 */
	bool operator==(const CStrongHandle<InfoForResourceTypeIMaterial2>* , const CWeakHandle<InfoForResourceTypeIMaterial2>& );
	/* ../public/resourcesystem/stronghandle.h:819 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeIMaterial2>* , ResourceHandle_t);
	/* ../public/resourcesystem/stronghandle.h:826 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeIMaterial2>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:833 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeIMaterial2>* , const CStrongHandle<InfoForResourceTypeIMaterial2>& );
	/* ../public/resourcesystem/stronghandle.h:840 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeIMaterial2>* , const CWeakHandle<InfoForResourceTypeIMaterial2>& );
	/* ../public/resourcesystem/stronghandle.h:179 */
	bool operator!(const CStrongHandle<InfoForResourceTypeIMaterial2>* );
	/* ../public/resourcesystem/stronghandle.h:769 */
	int GetRefCount(const CStrongHandle<InfoForResourceTypeIMaterial2>* );
	/* ../public/resourcesystem/stronghandle.h:780 */
	int GetReloadCounter(const CStrongHandle<InfoForResourceTypeIMaterial2>* );
	/* ../public/resourcesystem/stronghandle.h:895 */
	void GetResourceName(const CStrongHandle<InfoForResourceTypeIMaterial2>* , CBufferString* , bool);
	/* ../public/resourcesystem/stronghandle.h:904 */
	void GetResourceName(const CStrongHandle<InfoForResourceTypeIMaterial2>* , CResourceName* );
	/* ../public/resourcesystem/stronghandle.h:428 */
	ResourceType_t GetResourceType(void);
	/* ../public/resourcesystem/stronghandle.h:683 */
	void Move(CStrongHandle<InfoForResourceTypeIMaterial2>* , CStrongHandle<InfoForResourceTypeIMaterial2>& );
private:
	/* ../public/resourcesystem/stronghandle.h:201 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeIMaterial2>* , const CStrongHandle<InfoForResourceTypeIMaterial2>& );
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeIMaterial2> *); /* linkage=_ZN13CStrongHandleI29InfoForResourceTypeIMaterial2EC4Ev */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeIMaterial2> *, ResourceHandleTyped_t); /* linkage=_ZN13CStrongHandleI29InfoForResourceTypeIMaterial2EC4EPK17ResourceBinding_tIS0_E */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeIMaterial2> *, class ResourceId_t); /* linkage=_ZN13CStrongHandleI29InfoForResourceTypeIMaterial2EC4E12ResourceId_t */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeIMaterial2> *, const char  *); /* linkage=_ZN13CStrongHandleI29InfoForResourceTypeIMaterial2EC4EPKc */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeIMaterial2> *, class CStrongHandle<InfoForResourceTypeIMaterial2> &); /* linkage=_ZN13CStrongHandleI29InfoForResourceTypeIMaterial2EC4EOS1_ */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeIMaterial2> *, const class CWeakHandle<InfoForResourceTypeIMaterial2>  &); /* linkage=_ZN13CStrongHandleI29InfoForResourceTypeIMaterial2EC4ERK11CWeakHandleIS0_E */
	void ~CStrongHandle(class CStrongHandle<InfoForResourceTypeIMaterial2> *); /* linkage=_ZN13CStrongHandleI29InfoForResourceTypeIMaterial2ED4Ev */
	/* <4d25cd4> ../public/resourcesystem/stronghandle.h:547 */
	void Init(class CStrongHandle<InfoForResourceTypeIMaterial2> *, ResourceHandleTyped_t); /* linkage=_ZN13CStrongHandleI29InfoForResourceTypeIMaterial2E4InitEPK17ResourceBinding_tIS0_E */
	void Init(class CStrongHandle<InfoForResourceTypeIMaterial2> *, class ResourceId_t); /* linkage=_ZN13CStrongHandleI29InfoForResourceTypeIMaterial2E4InitE12ResourceId_t */
	void Init(class CStrongHandle<InfoForResourceTypeIMaterial2> *, const class CResourceName  &); /* linkage=_ZN13CStrongHandleI29InfoForResourceTypeIMaterial2E4InitERK13CResourceName */
	void Init(class CStrongHandle<InfoForResourceTypeIMaterial2> *, const class CWeakHandle<InfoForResourceTypeIMaterial2>  &); /* linkage=_ZN13CStrongHandleI29InfoForResourceTypeIMaterial2E4InitERK11CWeakHandleIS0_E */
	void Init(class CStrongHandle<InfoForResourceTypeIMaterial2> *, const class CStrongHandle<InfoForResourceTypeIMaterial2>  &); /* linkage=_ZN13CStrongHandleI29InfoForResourceTypeIMaterial2E4InitERKS1_ */
	void Shutdown(class CStrongHandle<InfoForResourceTypeIMaterial2> *); /* linkage=_ZN13CStrongHandleI29InfoForResourceTypeIMaterial2E8ShutdownEv */
	class CStrongHandle<InfoForResourceTypeIMaterial2> & operator=(class CStrongHandle<InfoForResourceTypeIMaterial2> *, ResourceHandleTyped_t); /* linkage=_ZN13CStrongHandleI29InfoForResourceTypeIMaterial2EaSEPK17ResourceBinding_tIS0_E */
	class CStrongHandle<InfoForResourceTypeIMaterial2> & operator=(class CStrongHandle<InfoForResourceTypeIMaterial2> *, const class CStrongHandle<InfoForResourceTypeIMaterial2>  &); /* linkage=_ZN13CStrongHandleI29InfoForResourceTypeIMaterial2EaSERKS1_ */
	class CStrongHandle<InfoForResourceTypeIMaterial2> & operator=(class CStrongHandle<InfoForResourceTypeIMaterial2> *, const class CWeakHandle<InfoForResourceTypeIMaterial2>  &); /* linkage=_ZN13CStrongHandleI29InfoForResourceTypeIMaterial2EaSERK11CWeakHandleIS0_E */
	bool HasHandle(const class CStrongHandle<InfoForResourceTypeIMaterial2>  *); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeIMaterial2E9HasHandleEv */
	bool HasIdentity(const class CStrongHandle<InfoForResourceTypeIMaterial2>  *); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeIMaterial2E11HasIdentityEv */
	bool HasData(const class CStrongHandle<InfoForResourceTypeIMaterial2>  *); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeIMaterial2E7HasDataEv */
	bool IsLoaded(const class CStrongHandle<InfoForResourceTypeIMaterial2>  *); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeIMaterial2E8IsLoadedEv */
	bool IsError(const class CStrongHandle<InfoForResourceTypeIMaterial2>  *); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeIMaterial2E7IsErrorEv */
	const RuntimeClass_t  * operator const ResourceHandleInfo_t<InfoForResourceTypeIMaterial2>::RuntimeClass_t*(const class CStrongHandle<InfoForResourceTypeIMaterial2>  *); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeIMaterial2EcvPK10IMaterial2Ev */
	const RuntimeClass_t  * operator->(const class CStrongHandle<InfoForResourceTypeIMaterial2>  *); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeIMaterial2EptEv */
	ResourceHandleTyped_t operator CStrongHandle<InfoForResourceTypeIMaterial2>::ResourceHandleTyped_t(const class CStrongHandle<InfoForResourceTypeIMaterial2>  *); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeIMaterial2EcvPK17ResourceBinding_tIS0_EEv */
	ResourceHandle_t operator ResourceHandle_t(const class CStrongHandle<InfoForResourceTypeIMaterial2>  *); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeIMaterial2EcvPK21ResourceBindingBase_tEv */
	class CWeakHandle<InfoForResourceTypeIMaterial2> operator CWeakHandle<InfoForResourceTypeIMaterial2>(const class CStrongHandle<InfoForResourceTypeIMaterial2>  *); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeIMaterial2Ecv11CWeakHandleIS0_EEv */
	const class CWeakHandle<InfoForResourceTypeIMaterial2>  GetHandle(const class CStrongHandle<InfoForResourceTypeIMaterial2>  *); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeIMaterial2E9GetHandleEv */
	const class ResourceBinding_t<InfoForResourceTypeIMaterial2>  * GetBinding(const class CStrongHandle<InfoForResourceTypeIMaterial2>  *); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeIMaterial2E10GetBindingEv */
	const RuntimeClass_t  * GetData(const class CStrongHandle<InfoForResourceTypeIMaterial2>  *); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeIMaterial2E7GetDataEv */
	bool operator==(const class CStrongHandle<InfoForResourceTypeIMaterial2>  *, ResourceHandle_t); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeIMaterial2EeqEPK21ResourceBindingBase_t */
	bool operator==(const class CStrongHandle<InfoForResourceTypeIMaterial2>  *, ResourceHandleTyped_t); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeIMaterial2EeqEPK17ResourceBinding_tIS0_E */
	bool operator==(const class CStrongHandle<InfoForResourceTypeIMaterial2>  *, const class CStrongHandle<InfoForResourceTypeIMaterial2>  &); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeIMaterial2EeqERKS1_ */
	bool operator==(const class CStrongHandle<InfoForResourceTypeIMaterial2>  *, const class CWeakHandle<InfoForResourceTypeIMaterial2>  &); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeIMaterial2EeqERK11CWeakHandleIS0_E */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeIMaterial2>  *, ResourceHandle_t); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeIMaterial2EneEPK21ResourceBindingBase_t */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeIMaterial2>  *, ResourceHandleTyped_t); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeIMaterial2EneEPK17ResourceBinding_tIS0_E */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeIMaterial2>  *, const class CStrongHandle<InfoForResourceTypeIMaterial2>  &); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeIMaterial2EneERKS1_ */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeIMaterial2>  *, const class CWeakHandle<InfoForResourceTypeIMaterial2>  &); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeIMaterial2EneERK11CWeakHandleIS0_E */
	bool operator!(const class CStrongHandle<InfoForResourceTypeIMaterial2>  *); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeIMaterial2EntEv */
	int GetRefCount(const class CStrongHandle<InfoForResourceTypeIMaterial2>  *); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeIMaterial2E11GetRefCountEv */
	int GetReloadCounter(const class CStrongHandle<InfoForResourceTypeIMaterial2>  *); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeIMaterial2E16GetReloadCounterEv */
	void GetResourceName(const class CStrongHandle<InfoForResourceTypeIMaterial2>  *, class CBufferString *, bool); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeIMaterial2E15GetResourceNameEP13CBufferStringb */
	void GetResourceName(const class CStrongHandle<InfoForResourceTypeIMaterial2>  *, class CResourceName *); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeIMaterial2E15GetResourceNameEP13CResourceName */
	ResourceType_t GetResourceType(void); /* linkage=_ZN13CStrongHandleI29InfoForResourceTypeIMaterial2E15GetResourceTypeEv */
	void Move(class CStrongHandle<InfoForResourceTypeIMaterial2> *, class CStrongHandle<InfoForResourceTypeIMaterial2> &); /* linkage=_ZN13CStrongHandleI29InfoForResourceTypeIMaterial2E4MoveEOS1_ */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeIMaterial2> *, const class CStrongHandle<InfoForResourceTypeIMaterial2>  &); /* linkage=_ZN13CStrongHandleI29InfoForResourceTypeIMaterial2EC4ERKS1_ */
};

// <0003F03D> ../public/resourcesystem/stronghandle.h:87
// member functions: 90
// member variable: 1
// class size: 8
class CStrongHandle<InfoForResourceTypeCTextureBase> : public CStrongHandleBase {
public:
	/* class CStrongHandleBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcesystem/stronghandle.h:438 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCTextureBase>* );
	/* ../public/resourcesystem/stronghandle.h:459 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCTextureBase>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:90 */
	typedef const class ResourceBinding_t<InfoForResourceTypeCTextureBase> * ResourceHandleTyped_t;
	/* ../public/resourcesystem/stronghandle.h:451 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCTextureBase>* , ResourceId_t);
	/* ../public/resourcesystem/stronghandle.h:444 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCTextureBase>* , const char* );
	/* ../public/resourcesystem/stronghandle.h:466 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCTextureBase>* , CStrongHandle<InfoForResourceTypeCTextureBase>& );
	/* ../public/resourcesystem/stronghandle.h:473 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCTextureBase>* , const CWeakHandle<InfoForResourceTypeCTextureBase>& );
	/* ../public/resourcesystem/stronghandle.h:480 */
	void ~CStrongHandle(CStrongHandle<InfoForResourceTypeCTextureBase>* );
	/* ../public/resourcesystem/stronghandle.h:547 */
	void Init(CStrongHandle<InfoForResourceTypeCTextureBase>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:490 */
	void Init(CStrongHandle<InfoForResourceTypeCTextureBase>* , ResourceId_t);
	/* ../public/resourcesystem/stronghandle.h:518 */
	void Init(CStrongHandle<InfoForResourceTypeCTextureBase>* , const CResourceName& );
	/* ../public/resourcesystem/stronghandle.h:575 */
	void Init(CStrongHandle<InfoForResourceTypeCTextureBase>* , const CWeakHandle<InfoForResourceTypeCTextureBase>& );
	/* ../public/resourcesystem/stronghandle.h:581 */
	void Init(CStrongHandle<InfoForResourceTypeCTextureBase>* , const CStrongHandle<InfoForResourceTypeCTextureBase>& );
	/* ../public/resourcesystem/stronghandle.h:609 */
	void Shutdown(CStrongHandle<InfoForResourceTypeCTextureBase>* );
	/* ../public/resourcesystem/stronghandle.h:657 */
	CStrongHandle<InfoForResourceTypeCTextureBase>& operator=(CStrongHandle<InfoForResourceTypeCTextureBase>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:664 */
	CStrongHandle<InfoForResourceTypeCTextureBase>& operator=(CStrongHandle<InfoForResourceTypeCTextureBase>* , const CStrongHandle<InfoForResourceTypeCTextureBase>& );
	/* ../public/resourcesystem/stronghandle.h:671 */
	CStrongHandle<InfoForResourceTypeCTextureBase>& operator=(CStrongHandle<InfoForResourceTypeCTextureBase>* , const CWeakHandle<InfoForResourceTypeCTextureBase>& );
	/* ../public/resourcesystem/stronghandle.h:851 */
	bool HasHandle(const CStrongHandle<InfoForResourceTypeCTextureBase>* );
	/* ../public/resourcesystem/stronghandle.h:857 */
	bool HasIdentity(const CStrongHandle<InfoForResourceTypeCTextureBase>* );
	/* ../public/resourcesystem/stronghandle.h:867 */
	bool HasData(const CStrongHandle<InfoForResourceTypeCTextureBase>* );
	/* ../public/resourcesystem/stronghandle.h:877 */
	bool IsLoaded(const CStrongHandle<InfoForResourceTypeCTextureBase>* );
	/* ../public/resourcesystem/stronghandle.h:887 */
	bool IsError(const CStrongHandle<InfoForResourceTypeCTextureBase>* );
	/* ../public/resourcesystem/stronghandle.h:731 */
	const RuntimeClass_t* operator const ResourceHandleInfo_t<InfoForResourceTypeCTextureBase>::RuntimeClass_t*(const CStrongHandle<InfoForResourceTypeCTextureBase>* );
	/* ../public/resourcesystem/stronghandle.h:738 */
	const RuntimeClass_t* operator->(const CStrongHandle<InfoForResourceTypeCTextureBase>* );
	/* ../public/resourcesystem/stronghandle.h:745 */
	ResourceHandleTyped_t operator CStrongHandle<InfoForResourceTypeCTextureBase>::ResourceHandleTyped_t(const CStrongHandle<InfoForResourceTypeCTextureBase>* );
	/* ../public/resourcesystem/stronghandle.h:758 */
	ResourceHandle_t operator ResourceHandle_t(const CStrongHandle<InfoForResourceTypeCTextureBase>* );
	/* ../public/resourcesystem/stronghandle.h:752 */
	CWeakHandle<InfoForResourceTypeCTextureBase> operator CWeakHandle<InfoForResourceTypeCTextureBase>(const CStrongHandle<InfoForResourceTypeCTextureBase>* );
	/* ../public/resourcesystem/stronghandle.h:708 */
	const CWeakHandle<InfoForResourceTypeCTextureBase> GetHandle(const CStrongHandle<InfoForResourceTypeCTextureBase>* );
	/* ../public/resourcesystem/stronghandle.h:716 */
	const ResourceBinding_t<InfoForResourceTypeCTextureBase>* GetBinding(const CStrongHandle<InfoForResourceTypeCTextureBase>* );
	/* ../public/resourcesystem/stronghandle.h:724 */
	const RuntimeClass_t* GetData(const CStrongHandle<InfoForResourceTypeCTextureBase>* );
	/* ../public/resourcesystem/stronghandle.h:791 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCTextureBase>* , ResourceHandle_t);
	/* ../public/resourcesystem/stronghandle.h:798 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCTextureBase>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:805 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCTextureBase>* , const CStrongHandle<InfoForResourceTypeCTextureBase>& );
	/* ../public/resourcesystem/stronghandle.h:812 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCTextureBase>* , const CWeakHandle<InfoForResourceTypeCTextureBase>& );
	/* ../public/resourcesystem/stronghandle.h:819 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCTextureBase>* , ResourceHandle_t);
	/* ../public/resourcesystem/stronghandle.h:826 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCTextureBase>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:833 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCTextureBase>* , const CStrongHandle<InfoForResourceTypeCTextureBase>& );
	/* ../public/resourcesystem/stronghandle.h:840 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCTextureBase>* , const CWeakHandle<InfoForResourceTypeCTextureBase>& );
	/* ../public/resourcesystem/stronghandle.h:179 */
	bool operator!(const CStrongHandle<InfoForResourceTypeCTextureBase>* );
	/* ../public/resourcesystem/stronghandle.h:769 */
	int GetRefCount(const CStrongHandle<InfoForResourceTypeCTextureBase>* );
	/* ../public/resourcesystem/stronghandle.h:780 */
	int GetReloadCounter(const CStrongHandle<InfoForResourceTypeCTextureBase>* );
	/* ../public/resourcesystem/stronghandle.h:895 */
	void GetResourceName(const CStrongHandle<InfoForResourceTypeCTextureBase>* , CBufferString* , bool);
	/* ../public/resourcesystem/stronghandle.h:904 */
	void GetResourceName(const CStrongHandle<InfoForResourceTypeCTextureBase>* , CResourceName* );
	/* ../public/resourcesystem/stronghandle.h:428 */
	ResourceType_t GetResourceType(void);
	/* ../public/resourcesystem/stronghandle.h:683 */
	void Move(CStrongHandle<InfoForResourceTypeCTextureBase>* , CStrongHandle<InfoForResourceTypeCTextureBase>& );
private:
	/* ../public/resourcesystem/stronghandle.h:201 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCTextureBase>* , const CStrongHandle<InfoForResourceTypeCTextureBase>& );
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCTextureBase> *); /* linkage=_ZN13CStrongHandleI31InfoForResourceTypeCTextureBaseEC4Ev */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCTextureBase> *, ResourceHandleTyped_t); /* linkage=_ZN13CStrongHandleI31InfoForResourceTypeCTextureBaseEC4EPK17ResourceBinding_tIS0_E */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCTextureBase> *, class ResourceId_t); /* linkage=_ZN13CStrongHandleI31InfoForResourceTypeCTextureBaseEC4E12ResourceId_t */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCTextureBase> *, const char  *); /* linkage=_ZN13CStrongHandleI31InfoForResourceTypeCTextureBaseEC4EPKc */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCTextureBase> *, class CStrongHandle<InfoForResourceTypeCTextureBase> &); /* linkage=_ZN13CStrongHandleI31InfoForResourceTypeCTextureBaseEC4EOS1_ */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCTextureBase> *, const class CWeakHandle<InfoForResourceTypeCTextureBase>  &); /* linkage=_ZN13CStrongHandleI31InfoForResourceTypeCTextureBaseEC4ERK11CWeakHandleIS0_E */
	void ~CStrongHandle(class CStrongHandle<InfoForResourceTypeCTextureBase> *); /* linkage=_ZN13CStrongHandleI31InfoForResourceTypeCTextureBaseED4Ev */
	/* <39fd6dd> ../public/resourcesystem/stronghandle.h:547 */
	void Init(class CStrongHandle<InfoForResourceTypeCTextureBase> *, ResourceHandleTyped_t); /* linkage=_ZN13CStrongHandleI31InfoForResourceTypeCTextureBaseE4InitEPK17ResourceBinding_tIS0_E */
	void Init(class CStrongHandle<InfoForResourceTypeCTextureBase> *, class ResourceId_t); /* linkage=_ZN13CStrongHandleI31InfoForResourceTypeCTextureBaseE4InitE12ResourceId_t */
	void Init(class CStrongHandle<InfoForResourceTypeCTextureBase> *, const class CResourceName  &); /* linkage=_ZN13CStrongHandleI31InfoForResourceTypeCTextureBaseE4InitERK13CResourceName */
	void Init(class CStrongHandle<InfoForResourceTypeCTextureBase> *, const class CWeakHandle<InfoForResourceTypeCTextureBase>  &); /* linkage=_ZN13CStrongHandleI31InfoForResourceTypeCTextureBaseE4InitERK11CWeakHandleIS0_E */
	void Init(class CStrongHandle<InfoForResourceTypeCTextureBase> *, const class CStrongHandle<InfoForResourceTypeCTextureBase>  &); /* linkage=_ZN13CStrongHandleI31InfoForResourceTypeCTextureBaseE4InitERKS1_ */
	void Shutdown(class CStrongHandle<InfoForResourceTypeCTextureBase> *); /* linkage=_ZN13CStrongHandleI31InfoForResourceTypeCTextureBaseE8ShutdownEv */
	class CStrongHandle<InfoForResourceTypeCTextureBase> & operator=(class CStrongHandle<InfoForResourceTypeCTextureBase> *, ResourceHandleTyped_t); /* linkage=_ZN13CStrongHandleI31InfoForResourceTypeCTextureBaseEaSEPK17ResourceBinding_tIS0_E */
	class CStrongHandle<InfoForResourceTypeCTextureBase> & operator=(class CStrongHandle<InfoForResourceTypeCTextureBase> *, const class CStrongHandle<InfoForResourceTypeCTextureBase>  &); /* linkage=_ZN13CStrongHandleI31InfoForResourceTypeCTextureBaseEaSERKS1_ */
	class CStrongHandle<InfoForResourceTypeCTextureBase> & operator=(class CStrongHandle<InfoForResourceTypeCTextureBase> *, const class CWeakHandle<InfoForResourceTypeCTextureBase>  &); /* linkage=_ZN13CStrongHandleI31InfoForResourceTypeCTextureBaseEaSERK11CWeakHandleIS0_E */
	bool HasHandle(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseE9HasHandleEv */
	bool HasIdentity(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseE11HasIdentityEv */
	bool HasData(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseE7HasDataEv */
	bool IsLoaded(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseE8IsLoadedEv */
	bool IsError(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseE7IsErrorEv */
	const RuntimeClass_t  * operator const ResourceHandleInfo_t<InfoForResourceTypeCTextureBase>::RuntimeClass_t*(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseEcvPK12CTextureBaseEv */
	const RuntimeClass_t  * operator->(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseEptEv */
	ResourceHandleTyped_t operator CStrongHandle<InfoForResourceTypeCTextureBase>::ResourceHandleTyped_t(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseEcvPK17ResourceBinding_tIS0_EEv */
	ResourceHandle_t operator ResourceHandle_t(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseEcvPK21ResourceBindingBase_tEv */
	class CWeakHandle<InfoForResourceTypeCTextureBase> operator CWeakHandle<InfoForResourceTypeCTextureBase>(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseEcv11CWeakHandleIS0_EEv */
	const class CWeakHandle<InfoForResourceTypeCTextureBase>  GetHandle(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseE9GetHandleEv */
	const class ResourceBinding_t<InfoForResourceTypeCTextureBase>  * GetBinding(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseE10GetBindingEv */
	const RuntimeClass_t  * GetData(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseE7GetDataEv */
	bool operator==(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *, ResourceHandle_t); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseEeqEPK21ResourceBindingBase_t */
	bool operator==(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *, ResourceHandleTyped_t); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseEeqEPK17ResourceBinding_tIS0_E */
	bool operator==(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *, const class CStrongHandle<InfoForResourceTypeCTextureBase>  &); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseEeqERKS1_ */
	bool operator==(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *, const class CWeakHandle<InfoForResourceTypeCTextureBase>  &); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseEeqERK11CWeakHandleIS0_E */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *, ResourceHandle_t); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseEneEPK21ResourceBindingBase_t */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *, ResourceHandleTyped_t); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseEneEPK17ResourceBinding_tIS0_E */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *, const class CStrongHandle<InfoForResourceTypeCTextureBase>  &); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseEneERKS1_ */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *, const class CWeakHandle<InfoForResourceTypeCTextureBase>  &); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseEneERK11CWeakHandleIS0_E */
	bool operator!(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseEntEv */
	int GetRefCount(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseE11GetRefCountEv */
	int GetReloadCounter(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseE16GetReloadCounterEv */
	void GetResourceName(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *, class CBufferString *, bool); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseE15GetResourceNameEP13CBufferStringb */
	void GetResourceName(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *, class CResourceName *); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseE15GetResourceNameEP13CResourceName */
	ResourceType_t GetResourceType(void); /* linkage=_ZN13CStrongHandleI31InfoForResourceTypeCTextureBaseE15GetResourceTypeEv */
	void Move(class CStrongHandle<InfoForResourceTypeCTextureBase> *, class CStrongHandle<InfoForResourceTypeCTextureBase> &); /* linkage=_ZN13CStrongHandleI31InfoForResourceTypeCTextureBaseE4MoveEOS1_ */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCTextureBase> *, const class CStrongHandle<InfoForResourceTypeCTextureBase>  &); /* linkage=_ZN13CStrongHandleI31InfoForResourceTypeCTextureBaseEC4ERKS1_ */
};

// <000919F4> ../public/resourcesystem/stronghandle.h:87
// member functions: 90
// member variable: 1
// class size: 8
class CStrongHandle<InfoForResourceTypeCModel> : public CStrongHandleBase {
public:
	/* class CStrongHandleBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcesystem/stronghandle.h:438 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCModel>* );
	/* ../public/resourcesystem/stronghandle.h:459 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCModel>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:90 */
	typedef const class ResourceBinding_t<InfoForResourceTypeCModel> * ResourceHandleTyped_t;
	/* ../public/resourcesystem/stronghandle.h:451 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCModel>* , ResourceId_t);
	/* ../public/resourcesystem/stronghandle.h:444 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCModel>* , const char* );
	/* ../public/resourcesystem/stronghandle.h:466 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCModel>* , CStrongHandle<InfoForResourceTypeCModel>& );
	/* ../public/resourcesystem/stronghandle.h:473 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCModel>* , const CWeakHandle<InfoForResourceTypeCModel>& );
	/* ../public/resourcesystem/stronghandle.h:480 */
	void ~CStrongHandle(CStrongHandle<InfoForResourceTypeCModel>* );
	/* ../public/resourcesystem/stronghandle.h:547 */
	void Init(CStrongHandle<InfoForResourceTypeCModel>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:490 */
	void Init(CStrongHandle<InfoForResourceTypeCModel>* , ResourceId_t);
	/* ../public/resourcesystem/stronghandle.h:518 */
	void Init(CStrongHandle<InfoForResourceTypeCModel>* , const CResourceName& );
	/* ../public/resourcesystem/stronghandle.h:575 */
	void Init(CStrongHandle<InfoForResourceTypeCModel>* , const CWeakHandle<InfoForResourceTypeCModel>& );
	/* ../public/resourcesystem/stronghandle.h:581 */
	void Init(CStrongHandle<InfoForResourceTypeCModel>* , const CStrongHandle<InfoForResourceTypeCModel>& );
	/* ../public/resourcesystem/stronghandle.h:609 */
	void Shutdown(CStrongHandle<InfoForResourceTypeCModel>* );
	/* ../public/resourcesystem/stronghandle.h:657 */
	CStrongHandle<InfoForResourceTypeCModel>& operator=(CStrongHandle<InfoForResourceTypeCModel>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:664 */
	CStrongHandle<InfoForResourceTypeCModel>& operator=(CStrongHandle<InfoForResourceTypeCModel>* , const CStrongHandle<InfoForResourceTypeCModel>& );
	/* ../public/resourcesystem/stronghandle.h:671 */
	CStrongHandle<InfoForResourceTypeCModel>& operator=(CStrongHandle<InfoForResourceTypeCModel>* , const CWeakHandle<InfoForResourceTypeCModel>& );
	/* ../public/resourcesystem/stronghandle.h:851 */
	bool HasHandle(const CStrongHandle<InfoForResourceTypeCModel>* );
	/* ../public/resourcesystem/stronghandle.h:857 */
	bool HasIdentity(const CStrongHandle<InfoForResourceTypeCModel>* );
	/* ../public/resourcesystem/stronghandle.h:867 */
	bool HasData(const CStrongHandle<InfoForResourceTypeCModel>* );
	/* ../public/resourcesystem/stronghandle.h:877 */
	bool IsLoaded(const CStrongHandle<InfoForResourceTypeCModel>* );
	/* ../public/resourcesystem/stronghandle.h:887 */
	bool IsError(const CStrongHandle<InfoForResourceTypeCModel>* );
	/* ../public/resourcesystem/stronghandle.h:731 */
	const RuntimeClass_t* operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(const CStrongHandle<InfoForResourceTypeCModel>* );
	/* ../public/resourcesystem/stronghandle.h:738 */
	const RuntimeClass_t* operator->(const CStrongHandle<InfoForResourceTypeCModel>* );
	/* ../public/resourcesystem/stronghandle.h:745 */
	ResourceHandleTyped_t operator CStrongHandle<InfoForResourceTypeCModel>::ResourceHandleTyped_t(const CStrongHandle<InfoForResourceTypeCModel>* );
	/* ../public/resourcesystem/stronghandle.h:758 */
	ResourceHandle_t operator ResourceHandle_t(const CStrongHandle<InfoForResourceTypeCModel>* );
	/* ../public/resourcesystem/stronghandle.h:752 */
	CWeakHandle<InfoForResourceTypeCModel> operator CWeakHandle<InfoForResourceTypeCModel>(const CStrongHandle<InfoForResourceTypeCModel>* );
	/* ../public/resourcesystem/stronghandle.h:708 */
	const CWeakHandle<InfoForResourceTypeCModel> GetHandle(const CStrongHandle<InfoForResourceTypeCModel>* );
	/* ../public/resourcesystem/stronghandle.h:716 */
	const ResourceBinding_t<InfoForResourceTypeCModel>* GetBinding(const CStrongHandle<InfoForResourceTypeCModel>* );
	/* ../public/resourcesystem/stronghandle.h:724 */
	const RuntimeClass_t* GetData(const CStrongHandle<InfoForResourceTypeCModel>* );
	/* ../public/resourcesystem/stronghandle.h:791 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCModel>* , ResourceHandle_t);
	/* ../public/resourcesystem/stronghandle.h:798 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCModel>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:805 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCModel>* , const CStrongHandle<InfoForResourceTypeCModel>& );
	/* ../public/resourcesystem/stronghandle.h:812 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCModel>* , const CWeakHandle<InfoForResourceTypeCModel>& );
	/* ../public/resourcesystem/stronghandle.h:819 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCModel>* , ResourceHandle_t);
	/* ../public/resourcesystem/stronghandle.h:826 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCModel>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:833 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCModel>* , const CStrongHandle<InfoForResourceTypeCModel>& );
	/* ../public/resourcesystem/stronghandle.h:840 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCModel>* , const CWeakHandle<InfoForResourceTypeCModel>& );
	/* ../public/resourcesystem/stronghandle.h:179 */
	bool operator!(const CStrongHandle<InfoForResourceTypeCModel>* );
	/* ../public/resourcesystem/stronghandle.h:769 */
	int GetRefCount(const CStrongHandle<InfoForResourceTypeCModel>* );
	/* ../public/resourcesystem/stronghandle.h:780 */
	int GetReloadCounter(const CStrongHandle<InfoForResourceTypeCModel>* );
	/* ../public/resourcesystem/stronghandle.h:895 */
	void GetResourceName(const CStrongHandle<InfoForResourceTypeCModel>* , CBufferString* , bool);
	/* ../public/resourcesystem/stronghandle.h:904 */
	void GetResourceName(const CStrongHandle<InfoForResourceTypeCModel>* , CResourceName* );
	/* ../public/resourcesystem/stronghandle.h:428 */
	ResourceType_t GetResourceType(void);
	/* ../public/resourcesystem/stronghandle.h:683 */
	void Move(CStrongHandle<InfoForResourceTypeCModel>* , CStrongHandle<InfoForResourceTypeCModel>& );
private:
	/* ../public/resourcesystem/stronghandle.h:201 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCModel>* , const CStrongHandle<InfoForResourceTypeCModel>& );
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCModel> *); /* linkage=_ZN13CStrongHandleI25InfoForResourceTypeCModelEC4Ev */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCModel> *, ResourceHandleTyped_t); /* linkage=_ZN13CStrongHandleI25InfoForResourceTypeCModelEC4EPK17ResourceBinding_tIS0_E */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCModel> *, class ResourceId_t); /* linkage=_ZN13CStrongHandleI25InfoForResourceTypeCModelEC4E12ResourceId_t */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCModel> *, const char  *); /* linkage=_ZN13CStrongHandleI25InfoForResourceTypeCModelEC4EPKc */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCModel> *, class CStrongHandle<InfoForResourceTypeCModel> &); /* linkage=_ZN13CStrongHandleI25InfoForResourceTypeCModelEC4EOS1_ */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCModel> *, const class CWeakHandle<InfoForResourceTypeCModel>  &); /* linkage=_ZN13CStrongHandleI25InfoForResourceTypeCModelEC4ERK11CWeakHandleIS0_E */
	void ~CStrongHandle(class CStrongHandle<InfoForResourceTypeCModel> *); /* linkage=_ZN13CStrongHandleI25InfoForResourceTypeCModelED4Ev */
	/* <49a6069> ../public/resourcesystem/stronghandle.h:547 */
	void Init(class CStrongHandle<InfoForResourceTypeCModel> *, ResourceHandleTyped_t); /* linkage=_ZN13CStrongHandleI25InfoForResourceTypeCModelE4InitEPK17ResourceBinding_tIS0_E */
	void Init(class CStrongHandle<InfoForResourceTypeCModel> *, class ResourceId_t); /* linkage=_ZN13CStrongHandleI25InfoForResourceTypeCModelE4InitE12ResourceId_t */
	void Init(class CStrongHandle<InfoForResourceTypeCModel> *, const class CResourceName  &); /* linkage=_ZN13CStrongHandleI25InfoForResourceTypeCModelE4InitERK13CResourceName */
	void Init(class CStrongHandle<InfoForResourceTypeCModel> *, const class CWeakHandle<InfoForResourceTypeCModel>  &); /* linkage=_ZN13CStrongHandleI25InfoForResourceTypeCModelE4InitERK11CWeakHandleIS0_E */
	void Init(class CStrongHandle<InfoForResourceTypeCModel> *, const class CStrongHandle<InfoForResourceTypeCModel>  &); /* linkage=_ZN13CStrongHandleI25InfoForResourceTypeCModelE4InitERKS1_ */
	void Shutdown(class CStrongHandle<InfoForResourceTypeCModel> *); /* linkage=_ZN13CStrongHandleI25InfoForResourceTypeCModelE8ShutdownEv */
	class CStrongHandle<InfoForResourceTypeCModel> & operator=(class CStrongHandle<InfoForResourceTypeCModel> *, ResourceHandleTyped_t); /* linkage=_ZN13CStrongHandleI25InfoForResourceTypeCModelEaSEPK17ResourceBinding_tIS0_E */
	class CStrongHandle<InfoForResourceTypeCModel> & operator=(class CStrongHandle<InfoForResourceTypeCModel> *, const class CStrongHandle<InfoForResourceTypeCModel>  &); /* linkage=_ZN13CStrongHandleI25InfoForResourceTypeCModelEaSERKS1_ */
	class CStrongHandle<InfoForResourceTypeCModel> & operator=(class CStrongHandle<InfoForResourceTypeCModel> *, const class CWeakHandle<InfoForResourceTypeCModel>  &); /* linkage=_ZN13CStrongHandleI25InfoForResourceTypeCModelEaSERK11CWeakHandleIS0_E */
	bool HasHandle(const class CStrongHandle<InfoForResourceTypeCModel>  *); /* linkage=_ZNK13CStrongHandleI25InfoForResourceTypeCModelE9HasHandleEv */
	bool HasIdentity(const class CStrongHandle<InfoForResourceTypeCModel>  *); /* linkage=_ZNK13CStrongHandleI25InfoForResourceTypeCModelE11HasIdentityEv */
	bool HasData(const class CStrongHandle<InfoForResourceTypeCModel>  *); /* linkage=_ZNK13CStrongHandleI25InfoForResourceTypeCModelE7HasDataEv */
	bool IsLoaded(const class CStrongHandle<InfoForResourceTypeCModel>  *); /* linkage=_ZNK13CStrongHandleI25InfoForResourceTypeCModelE8IsLoadedEv */
	bool IsError(const class CStrongHandle<InfoForResourceTypeCModel>  *); /* linkage=_ZNK13CStrongHandleI25InfoForResourceTypeCModelE7IsErrorEv */
	const RuntimeClass_t  * operator const ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*(const class CStrongHandle<InfoForResourceTypeCModel>  *); /* linkage=_ZNK13CStrongHandleI25InfoForResourceTypeCModelEcvPK6CModelEv */
	const RuntimeClass_t  * operator->(const class CStrongHandle<InfoForResourceTypeCModel>  *); /* linkage=_ZNK13CStrongHandleI25InfoForResourceTypeCModelEptEv */
	ResourceHandleTyped_t operator CStrongHandle<InfoForResourceTypeCModel>::ResourceHandleTyped_t(const class CStrongHandle<InfoForResourceTypeCModel>  *); /* linkage=_ZNK13CStrongHandleI25InfoForResourceTypeCModelEcvPK17ResourceBinding_tIS0_EEv */
	ResourceHandle_t operator ResourceHandle_t(const class CStrongHandle<InfoForResourceTypeCModel>  *); /* linkage=_ZNK13CStrongHandleI25InfoForResourceTypeCModelEcvPK21ResourceBindingBase_tEv */
	class CWeakHandle<InfoForResourceTypeCModel> operator CWeakHandle<InfoForResourceTypeCModel>(const class CStrongHandle<InfoForResourceTypeCModel>  *); /* linkage=_ZNK13CStrongHandleI25InfoForResourceTypeCModelEcv11CWeakHandleIS0_EEv */
	const class CWeakHandle<InfoForResourceTypeCModel>  GetHandle(const class CStrongHandle<InfoForResourceTypeCModel>  *); /* linkage=_ZNK13CStrongHandleI25InfoForResourceTypeCModelE9GetHandleEv */
	const class ResourceBinding_t<InfoForResourceTypeCModel>  * GetBinding(const class CStrongHandle<InfoForResourceTypeCModel>  *); /* linkage=_ZNK13CStrongHandleI25InfoForResourceTypeCModelE10GetBindingEv */
	const RuntimeClass_t  * GetData(const class CStrongHandle<InfoForResourceTypeCModel>  *); /* linkage=_ZNK13CStrongHandleI25InfoForResourceTypeCModelE7GetDataEv */
	bool operator==(const class CStrongHandle<InfoForResourceTypeCModel>  *, ResourceHandle_t); /* linkage=_ZNK13CStrongHandleI25InfoForResourceTypeCModelEeqEPK21ResourceBindingBase_t */
	bool operator==(const class CStrongHandle<InfoForResourceTypeCModel>  *, ResourceHandleTyped_t); /* linkage=_ZNK13CStrongHandleI25InfoForResourceTypeCModelEeqEPK17ResourceBinding_tIS0_E */
	bool operator==(const class CStrongHandle<InfoForResourceTypeCModel>  *, const class CStrongHandle<InfoForResourceTypeCModel>  &); /* linkage=_ZNK13CStrongHandleI25InfoForResourceTypeCModelEeqERKS1_ */
	bool operator==(const class CStrongHandle<InfoForResourceTypeCModel>  *, const class CWeakHandle<InfoForResourceTypeCModel>  &); /* linkage=_ZNK13CStrongHandleI25InfoForResourceTypeCModelEeqERK11CWeakHandleIS0_E */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeCModel>  *, ResourceHandle_t); /* linkage=_ZNK13CStrongHandleI25InfoForResourceTypeCModelEneEPK21ResourceBindingBase_t */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeCModel>  *, ResourceHandleTyped_t); /* linkage=_ZNK13CStrongHandleI25InfoForResourceTypeCModelEneEPK17ResourceBinding_tIS0_E */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeCModel>  *, const class CStrongHandle<InfoForResourceTypeCModel>  &); /* linkage=_ZNK13CStrongHandleI25InfoForResourceTypeCModelEneERKS1_ */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeCModel>  *, const class CWeakHandle<InfoForResourceTypeCModel>  &); /* linkage=_ZNK13CStrongHandleI25InfoForResourceTypeCModelEneERK11CWeakHandleIS0_E */
	bool operator!(const class CStrongHandle<InfoForResourceTypeCModel>  *); /* linkage=_ZNK13CStrongHandleI25InfoForResourceTypeCModelEntEv */
	int GetRefCount(const class CStrongHandle<InfoForResourceTypeCModel>  *); /* linkage=_ZNK13CStrongHandleI25InfoForResourceTypeCModelE11GetRefCountEv */
	int GetReloadCounter(const class CStrongHandle<InfoForResourceTypeCModel>  *); /* linkage=_ZNK13CStrongHandleI25InfoForResourceTypeCModelE16GetReloadCounterEv */
	void GetResourceName(const class CStrongHandle<InfoForResourceTypeCModel>  *, class CBufferString *, bool); /* linkage=_ZNK13CStrongHandleI25InfoForResourceTypeCModelE15GetResourceNameEP13CBufferStringb */
	void GetResourceName(const class CStrongHandle<InfoForResourceTypeCModel>  *, class CResourceName *); /* linkage=_ZNK13CStrongHandleI25InfoForResourceTypeCModelE15GetResourceNameEP13CResourceName */
	ResourceType_t GetResourceType(void); /* linkage=_ZN13CStrongHandleI25InfoForResourceTypeCModelE15GetResourceTypeEv */
	void Move(class CStrongHandle<InfoForResourceTypeCModel> *, class CStrongHandle<InfoForResourceTypeCModel> &); /* linkage=_ZN13CStrongHandleI25InfoForResourceTypeCModelE4MoveEOS1_ */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCModel> *, const class CStrongHandle<InfoForResourceTypeCModel>  &); /* linkage=_ZN13CStrongHandleI25InfoForResourceTypeCModelEC4ERKS1_ */
};

// <0039AD1B> ../public/resourcesystem/stronghandle.h:87
// member functions: 90
// member variable: 1
// class size: 8
class CStrongHandle<ResourceBindingVoid_t> : public CStrongHandleBase {
public:
	/* class CStrongHandleBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcesystem/stronghandle.h:94 */
	void CStrongHandle(CStrongHandle<ResourceBindingVoid_t>* );
	/* ../public/resourcesystem/stronghandle.h:95 */
	void CStrongHandle(CStrongHandle<ResourceBindingVoid_t>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:90 */
	typedef const class ResourceBinding_t<ResourceBindingVoid_t> * ResourceHandleTyped_t;
	/* ../public/resourcesystem/stronghandle.h:96 */
	void CStrongHandle(CStrongHandle<ResourceBindingVoid_t>* , ResourceId_t);
	/* ../public/resourcesystem/stronghandle.h:97 */
	void CStrongHandle(CStrongHandle<ResourceBindingVoid_t>* , const char* );
	/* ../public/resourcesystem/stronghandle.h:98 */
	void CStrongHandle(CStrongHandle<ResourceBindingVoid_t>* , CStrongHandle<ResourceBindingVoid_t>& );
	/* ../public/resourcesystem/stronghandle.h:99 */
	void CStrongHandle(CStrongHandle<ResourceBindingVoid_t>* , const CWeakHandle<ResourceBindingVoid_t>& );
	/* ../public/resourcesystem/stronghandle.h:100 */
	void ~CStrongHandle(CStrongHandle<ResourceBindingVoid_t>* );
	/* ../public/resourcesystem/stronghandle.h:103 */
	void Init(CStrongHandle<ResourceBindingVoid_t>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:104 */
	void Init(CStrongHandle<ResourceBindingVoid_t>* , ResourceId_t);
	/* ../public/resourcesystem/stronghandle.h:105 */
	void Init(CStrongHandle<ResourceBindingVoid_t>* , const CResourceName& );
	/* ../public/resourcesystem/stronghandle.h:106 */
	void Init(CStrongHandle<ResourceBindingVoid_t>* , const CWeakHandle<ResourceBindingVoid_t>& );
	/* ../public/resourcesystem/stronghandle.h:107 */
	void Init(CStrongHandle<ResourceBindingVoid_t>* , const CStrongHandle<ResourceBindingVoid_t>& );
	/* ../public/resourcesystem/stronghandle.h:108 */
	void Shutdown(CStrongHandle<ResourceBindingVoid_t>* );
	/* ../public/resourcesystem/stronghandle.h:111 */
	CStrongHandle<ResourceBindingVoid_t>& operator=(CStrongHandle<ResourceBindingVoid_t>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:112 */
	CStrongHandle<ResourceBindingVoid_t>& operator=(CStrongHandle<ResourceBindingVoid_t>* , const CStrongHandle<ResourceBindingVoid_t>& );
	/* ../public/resourcesystem/stronghandle.h:113 */
	CStrongHandle<ResourceBindingVoid_t>& operator=(CStrongHandle<ResourceBindingVoid_t>* , const CWeakHandle<ResourceBindingVoid_t>& );
	/* ../public/resourcesystem/stronghandle.h:143 */
	bool HasHandle(const CStrongHandle<ResourceBindingVoid_t>* );
	/* ../public/resourcesystem/stronghandle.h:144 */
	bool HasIdentity(const CStrongHandle<ResourceBindingVoid_t>* );
	/* ../public/resourcesystem/stronghandle.h:145 */
	bool HasData(const CStrongHandle<ResourceBindingVoid_t>* );
	/* ../public/resourcesystem/stronghandle.h:148 */
	bool IsLoaded(const CStrongHandle<ResourceBindingVoid_t>* );
	/* ../public/resourcesystem/stronghandle.h:151 */
	bool IsError(const CStrongHandle<ResourceBindingVoid_t>* );
	/* ../public/resourcesystem/stronghandle.h:91 */
	typedef void ResourceDataTyped_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/resourcesystem/stronghandle.h:154 */
	const ResourceDataTyped_t* operator const CStrongHandle<ResourceBindingVoid_t>::ResourceDataTyped_t*(const CStrongHandle<ResourceBindingVoid_t>* );
	/* ../public/resourcesystem/stronghandle.h:155 */
	const ResourceDataTyped_t* operator->(const CStrongHandle<ResourceBindingVoid_t>* );
	/* ../public/resourcesystem/stronghandle.h:156 */
	ResourceHandleTyped_t operator CStrongHandle<ResourceBindingVoid_t>::ResourceHandleTyped_t(const CStrongHandle<ResourceBindingVoid_t>* );
	/* ../public/resourcesystem/stronghandle.h:157 */
	ResourceHandle_t operator ResourceHandle_t(const CStrongHandle<ResourceBindingVoid_t>* );
	/* ../public/resourcesystem/stronghandle.h:158 */
	CWeakHandle<ResourceBindingVoid_t> operator CWeakHandle<ResourceBindingVoid_t>(const CStrongHandle<ResourceBindingVoid_t>* );
	/* ../public/resourcesystem/stronghandle.h:160 */
	const CWeakHandle<ResourceBindingVoid_t> GetHandle(const CStrongHandle<ResourceBindingVoid_t>* );
	/* ../public/resourcesystem/stronghandle.h:161 */
	const ResourceBinding_t<ResourceBindingVoid_t>* GetBinding(const CStrongHandle<ResourceBindingVoid_t>* );
	/* ../public/resourcesystem/stronghandle.h:164 */
	const ResourceDataTyped_t* GetData(const CStrongHandle<ResourceBindingVoid_t>* );
	/* ../public/resourcesystem/stronghandle.h:167 */
	bool operator==(const CStrongHandle<ResourceBindingVoid_t>* , ResourceHandle_t);
	/* ../public/resourcesystem/stronghandle.h:168 */
	bool operator==(const CStrongHandle<ResourceBindingVoid_t>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:169 */
	bool operator==(const CStrongHandle<ResourceBindingVoid_t>* , const CStrongHandle<ResourceBindingVoid_t>& );
	/* ../public/resourcesystem/stronghandle.h:170 */
	bool operator==(const CStrongHandle<ResourceBindingVoid_t>* , const CWeakHandle<ResourceBindingVoid_t>& );
	/* ../public/resourcesystem/stronghandle.h:172 */
	bool operator!=(const CStrongHandle<ResourceBindingVoid_t>* , ResourceHandle_t);
	/* ../public/resourcesystem/stronghandle.h:173 */
	bool operator!=(const CStrongHandle<ResourceBindingVoid_t>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:174 */
	bool operator!=(const CStrongHandle<ResourceBindingVoid_t>* , const CStrongHandle<ResourceBindingVoid_t>& );
	/* ../public/resourcesystem/stronghandle.h:175 */
	bool operator!=(const CStrongHandle<ResourceBindingVoid_t>* , const CWeakHandle<ResourceBindingVoid_t>& );
	/* ../public/resourcesystem/stronghandle.h:179 */
	bool operator!(const CStrongHandle<ResourceBindingVoid_t>* );
	/* ../public/resourcesystem/stronghandle.h:186 */
	int GetRefCount(const CStrongHandle<ResourceBindingVoid_t>* );
	/* ../public/resourcesystem/stronghandle.h:188 */
	int GetReloadCounter(const CStrongHandle<ResourceBindingVoid_t>* );
	/* ../public/resourcesystem/stronghandle.h:190 */
	void GetResourceName(const CStrongHandle<ResourceBindingVoid_t>* , CBufferString* , bool);
	/* ../public/resourcesystem/stronghandle.h:191 */
	void GetResourceName(const CStrongHandle<ResourceBindingVoid_t>* , CResourceName* );
	/* ../public/resourcesystem/stronghandle.h:193 */
	ResourceType_t GetResourceType(void);
	/* ../public/resourcesystem/stronghandle.h:195 */
	void Move(CStrongHandle<ResourceBindingVoid_t>* , CStrongHandle<ResourceBindingVoid_t>& );
private:
	/* ../public/resourcesystem/stronghandle.h:201 */
	void CStrongHandle(CStrongHandle<ResourceBindingVoid_t>* , const CStrongHandle<ResourceBindingVoid_t>& );
	void CStrongHandle(class CStrongHandle<ResourceBindingVoid_t> *); /* linkage=_ZN13CStrongHandleI21ResourceBindingVoid_tEC4Ev */
	void CStrongHandle(class CStrongHandle<ResourceBindingVoid_t> *, ResourceHandleTyped_t); /* linkage=_ZN13CStrongHandleI21ResourceBindingVoid_tEC4EPK17ResourceBinding_tIS0_E */
	void CStrongHandle(class CStrongHandle<ResourceBindingVoid_t> *, class ResourceId_t); /* linkage=_ZN13CStrongHandleI21ResourceBindingVoid_tEC4E12ResourceId_t */
	void CStrongHandle(class CStrongHandle<ResourceBindingVoid_t> *, const char  *); /* linkage=_ZN13CStrongHandleI21ResourceBindingVoid_tEC4EPKc */
	void CStrongHandle(class CStrongHandle<ResourceBindingVoid_t> *, class CStrongHandle<ResourceBindingVoid_t> &); /* linkage=_ZN13CStrongHandleI21ResourceBindingVoid_tEC4EOS1_ */
	void CStrongHandle(class CStrongHandle<ResourceBindingVoid_t> *, const class CWeakHandle<ResourceBindingVoid_t>  &); /* linkage=_ZN13CStrongHandleI21ResourceBindingVoid_tEC4ERK11CWeakHandleIS0_E */
	void ~CStrongHandle(class CStrongHandle<ResourceBindingVoid_t> *); /* linkage=_ZN13CStrongHandleI21ResourceBindingVoid_tED4Ev */
	void Init(class CStrongHandle<ResourceBindingVoid_t> *, ResourceHandleTyped_t); /* linkage=_ZN13CStrongHandleI21ResourceBindingVoid_tE4InitEPK17ResourceBinding_tIS0_E */
	void Init(class CStrongHandle<ResourceBindingVoid_t> *, class ResourceId_t); /* linkage=_ZN13CStrongHandleI21ResourceBindingVoid_tE4InitE12ResourceId_t */
	void Init(class CStrongHandle<ResourceBindingVoid_t> *, const class CResourceName  &); /* linkage=_ZN13CStrongHandleI21ResourceBindingVoid_tE4InitERK13CResourceName */
	void Init(class CStrongHandle<ResourceBindingVoid_t> *, const class CWeakHandle<ResourceBindingVoid_t>  &); /* linkage=_ZN13CStrongHandleI21ResourceBindingVoid_tE4InitERK11CWeakHandleIS0_E */
	void Init(class CStrongHandle<ResourceBindingVoid_t> *, const class CStrongHandle<ResourceBindingVoid_t>  &); /* linkage=_ZN13CStrongHandleI21ResourceBindingVoid_tE4InitERKS1_ */
	void Shutdown(class CStrongHandle<ResourceBindingVoid_t> *); /* linkage=_ZN13CStrongHandleI21ResourceBindingVoid_tE8ShutdownEv */
	class CStrongHandle<ResourceBindingVoid_t> & operator=(class CStrongHandle<ResourceBindingVoid_t> *, ResourceHandleTyped_t); /* linkage=_ZN13CStrongHandleI21ResourceBindingVoid_tEaSEPK17ResourceBinding_tIS0_E */
	class CStrongHandle<ResourceBindingVoid_t> & operator=(class CStrongHandle<ResourceBindingVoid_t> *, const class CStrongHandle<ResourceBindingVoid_t>  &); /* linkage=_ZN13CStrongHandleI21ResourceBindingVoid_tEaSERKS1_ */
	class CStrongHandle<ResourceBindingVoid_t> & operator=(class CStrongHandle<ResourceBindingVoid_t> *, const class CWeakHandle<ResourceBindingVoid_t>  &); /* linkage=_ZN13CStrongHandleI21ResourceBindingVoid_tEaSERK11CWeakHandleIS0_E */
	bool HasHandle(const class CStrongHandle<ResourceBindingVoid_t>  *); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tE9HasHandleEv */
	bool HasIdentity(const class CStrongHandle<ResourceBindingVoid_t>  *); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tE11HasIdentityEv */
	bool HasData(const class CStrongHandle<ResourceBindingVoid_t>  *); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tE7HasDataEv */
	bool IsLoaded(const class CStrongHandle<ResourceBindingVoid_t>  *); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tE8IsLoadedEv */
	bool IsError(const class CStrongHandle<ResourceBindingVoid_t>  *); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tE7IsErrorEv */
	const ResourceDataTyped_t  * operator const CStrongHandle<ResourceBindingVoid_t>::ResourceDataTyped_t*(const class CStrongHandle<ResourceBindingVoid_t>  *); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tEcvPKvEv */
	const ResourceDataTyped_t  * operator->(const class CStrongHandle<ResourceBindingVoid_t>  *); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tEptEv */
	ResourceHandleTyped_t operator CStrongHandle<ResourceBindingVoid_t>::ResourceHandleTyped_t(const class CStrongHandle<ResourceBindingVoid_t>  *); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tEcvPK17ResourceBinding_tIS0_EEv */
	ResourceHandle_t operator ResourceHandle_t(const class CStrongHandle<ResourceBindingVoid_t>  *); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tEcvPK21ResourceBindingBase_tEv */
	class CWeakHandle<ResourceBindingVoid_t> operator CWeakHandle<ResourceBindingVoid_t>(const class CStrongHandle<ResourceBindingVoid_t>  *); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tEcv11CWeakHandleIS0_EEv */
	const class CWeakHandle<ResourceBindingVoid_t>  GetHandle(const class CStrongHandle<ResourceBindingVoid_t>  *); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tE9GetHandleEv */
	const class ResourceBinding_t<ResourceBindingVoid_t>  * GetBinding(const class CStrongHandle<ResourceBindingVoid_t>  *); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tE10GetBindingEv */
	const ResourceDataTyped_t  * GetData(const class CStrongHandle<ResourceBindingVoid_t>  *); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tE7GetDataEv */
	bool operator==(const class CStrongHandle<ResourceBindingVoid_t>  *, ResourceHandle_t); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tEeqEPK21ResourceBindingBase_t */
	bool operator==(const class CStrongHandle<ResourceBindingVoid_t>  *, ResourceHandleTyped_t); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tEeqEPK17ResourceBinding_tIS0_E */
	bool operator==(const class CStrongHandle<ResourceBindingVoid_t>  *, const class CStrongHandle<ResourceBindingVoid_t>  &); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tEeqERKS1_ */
	bool operator==(const class CStrongHandle<ResourceBindingVoid_t>  *, const class CWeakHandle<ResourceBindingVoid_t>  &); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tEeqERK11CWeakHandleIS0_E */
	bool operator!=(const class CStrongHandle<ResourceBindingVoid_t>  *, ResourceHandle_t); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tEneEPK21ResourceBindingBase_t */
	bool operator!=(const class CStrongHandle<ResourceBindingVoid_t>  *, ResourceHandleTyped_t); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tEneEPK17ResourceBinding_tIS0_E */
	bool operator!=(const class CStrongHandle<ResourceBindingVoid_t>  *, const class CStrongHandle<ResourceBindingVoid_t>  &); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tEneERKS1_ */
	bool operator!=(const class CStrongHandle<ResourceBindingVoid_t>  *, const class CWeakHandle<ResourceBindingVoid_t>  &); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tEneERK11CWeakHandleIS0_E */
	bool operator!(const class CStrongHandle<ResourceBindingVoid_t>  *); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tEntEv */
	int GetRefCount(const class CStrongHandle<ResourceBindingVoid_t>  *); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tE11GetRefCountEv */
	int GetReloadCounter(const class CStrongHandle<ResourceBindingVoid_t>  *); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tE16GetReloadCounterEv */
	void GetResourceName(const class CStrongHandle<ResourceBindingVoid_t>  *, class CBufferString *, bool); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tE15GetResourceNameEP13CBufferStringb */
	void GetResourceName(const class CStrongHandle<ResourceBindingVoid_t>  *, class CResourceName *); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tE15GetResourceNameEP13CResourceName */
	ResourceType_t GetResourceType(void); /* linkage=_ZN13CStrongHandleI21ResourceBindingVoid_tE15GetResourceTypeEv */
	void Move(class CStrongHandle<ResourceBindingVoid_t> *, class CStrongHandle<ResourceBindingVoid_t> &); /* linkage=_ZN13CStrongHandleI21ResourceBindingVoid_tE4MoveEOS1_ */
	void CStrongHandle(class CStrongHandle<ResourceBindingVoid_t> *, const class CStrongHandle<ResourceBindingVoid_t>  &); /* linkage=_ZN13CStrongHandleI21ResourceBindingVoid_tEC4ERKS1_ */
};

// <00E10E51> ../public/resourcesystem/stronghandle.h:87
// member functions: 90
// member variable: 1
// class size: 8
class CStrongHandle<InfoForResourceTypeCEntityLump> : public CStrongHandleBase {
public:
	/* class CStrongHandleBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcesystem/stronghandle.h:438 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCEntityLump>* );
	/* ../public/resourcesystem/stronghandle.h:459 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCEntityLump>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:90 */
	typedef const class ResourceBinding_t<InfoForResourceTypeCEntityLump> * ResourceHandleTyped_t;
	/* ../public/resourcesystem/stronghandle.h:451 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCEntityLump>* , ResourceId_t);
	/* ../public/resourcesystem/stronghandle.h:444 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCEntityLump>* , const char* );
	/* ../public/resourcesystem/stronghandle.h:466 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCEntityLump>* , CStrongHandle<InfoForResourceTypeCEntityLump>& );
	/* ../public/resourcesystem/stronghandle.h:473 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCEntityLump>* , const CWeakHandle<InfoForResourceTypeCEntityLump>& );
	/* ../public/resourcesystem/stronghandle.h:480 */
	void ~CStrongHandle(CStrongHandle<InfoForResourceTypeCEntityLump>* );
	/* ../public/resourcesystem/stronghandle.h:547 */
	void Init(CStrongHandle<InfoForResourceTypeCEntityLump>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:490 */
	void Init(CStrongHandle<InfoForResourceTypeCEntityLump>* , ResourceId_t);
	/* ../public/resourcesystem/stronghandle.h:518 */
	void Init(CStrongHandle<InfoForResourceTypeCEntityLump>* , const CResourceName& );
	/* ../public/resourcesystem/stronghandle.h:575 */
	void Init(CStrongHandle<InfoForResourceTypeCEntityLump>* , const CWeakHandle<InfoForResourceTypeCEntityLump>& );
	/* ../public/resourcesystem/stronghandle.h:581 */
	void Init(CStrongHandle<InfoForResourceTypeCEntityLump>* , const CStrongHandle<InfoForResourceTypeCEntityLump>& );
	/* ../public/resourcesystem/stronghandle.h:609 */
	void Shutdown(CStrongHandle<InfoForResourceTypeCEntityLump>* );
	/* ../public/resourcesystem/stronghandle.h:657 */
	CStrongHandle<InfoForResourceTypeCEntityLump>& operator=(CStrongHandle<InfoForResourceTypeCEntityLump>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:664 */
	CStrongHandle<InfoForResourceTypeCEntityLump>& operator=(CStrongHandle<InfoForResourceTypeCEntityLump>* , const CStrongHandle<InfoForResourceTypeCEntityLump>& );
	/* ../public/resourcesystem/stronghandle.h:671 */
	CStrongHandle<InfoForResourceTypeCEntityLump>& operator=(CStrongHandle<InfoForResourceTypeCEntityLump>* , const CWeakHandle<InfoForResourceTypeCEntityLump>& );
	/* ../public/resourcesystem/stronghandle.h:851 */
	bool HasHandle(const CStrongHandle<InfoForResourceTypeCEntityLump>* );
	/* ../public/resourcesystem/stronghandle.h:857 */
	bool HasIdentity(const CStrongHandle<InfoForResourceTypeCEntityLump>* );
	/* ../public/resourcesystem/stronghandle.h:867 */
	bool HasData(const CStrongHandle<InfoForResourceTypeCEntityLump>* );
	/* ../public/resourcesystem/stronghandle.h:877 */
	bool IsLoaded(const CStrongHandle<InfoForResourceTypeCEntityLump>* );
	/* ../public/resourcesystem/stronghandle.h:887 */
	bool IsError(const CStrongHandle<InfoForResourceTypeCEntityLump>* );
	/* ../public/resourcesystem/stronghandle.h:731 */
	const RuntimeClass_t* operator const ResourceHandleInfo_t<InfoForResourceTypeCEntityLump>::RuntimeClass_t*(const CStrongHandle<InfoForResourceTypeCEntityLump>* );
	/* ../public/resourcesystem/stronghandle.h:738 */
	const RuntimeClass_t* operator->(const CStrongHandle<InfoForResourceTypeCEntityLump>* );
	/* ../public/resourcesystem/stronghandle.h:745 */
	ResourceHandleTyped_t operator CStrongHandle<InfoForResourceTypeCEntityLump>::ResourceHandleTyped_t(const CStrongHandle<InfoForResourceTypeCEntityLump>* );
	/* ../public/resourcesystem/stronghandle.h:758 */
	ResourceHandle_t operator ResourceHandle_t(const CStrongHandle<InfoForResourceTypeCEntityLump>* );
	/* ../public/resourcesystem/stronghandle.h:752 */
	CWeakHandle<InfoForResourceTypeCEntityLump> operator CWeakHandle<InfoForResourceTypeCEntityLump>(const CStrongHandle<InfoForResourceTypeCEntityLump>* );
	/* ../public/resourcesystem/stronghandle.h:708 */
	const CWeakHandle<InfoForResourceTypeCEntityLump> GetHandle(const CStrongHandle<InfoForResourceTypeCEntityLump>* );
	/* ../public/resourcesystem/stronghandle.h:716 */
	const ResourceBinding_t<InfoForResourceTypeCEntityLump>* GetBinding(const CStrongHandle<InfoForResourceTypeCEntityLump>* );
	/* ../public/resourcesystem/stronghandle.h:724 */
	const RuntimeClass_t* GetData(const CStrongHandle<InfoForResourceTypeCEntityLump>* );
	/* ../public/resourcesystem/stronghandle.h:791 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCEntityLump>* , ResourceHandle_t);
	/* ../public/resourcesystem/stronghandle.h:798 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCEntityLump>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:805 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCEntityLump>* , const CStrongHandle<InfoForResourceTypeCEntityLump>& );
	/* ../public/resourcesystem/stronghandle.h:812 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCEntityLump>* , const CWeakHandle<InfoForResourceTypeCEntityLump>& );
	/* ../public/resourcesystem/stronghandle.h:819 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCEntityLump>* , ResourceHandle_t);
	/* ../public/resourcesystem/stronghandle.h:826 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCEntityLump>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:833 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCEntityLump>* , const CStrongHandle<InfoForResourceTypeCEntityLump>& );
	/* ../public/resourcesystem/stronghandle.h:840 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCEntityLump>* , const CWeakHandle<InfoForResourceTypeCEntityLump>& );
	/* ../public/resourcesystem/stronghandle.h:179 */
	bool operator!(const CStrongHandle<InfoForResourceTypeCEntityLump>* );
	/* ../public/resourcesystem/stronghandle.h:769 */
	int GetRefCount(const CStrongHandle<InfoForResourceTypeCEntityLump>* );
	/* ../public/resourcesystem/stronghandle.h:780 */
	int GetReloadCounter(const CStrongHandle<InfoForResourceTypeCEntityLump>* );
	/* ../public/resourcesystem/stronghandle.h:895 */
	void GetResourceName(const CStrongHandle<InfoForResourceTypeCEntityLump>* , CBufferString* , bool);
	/* ../public/resourcesystem/stronghandle.h:904 */
	void GetResourceName(const CStrongHandle<InfoForResourceTypeCEntityLump>* , CResourceName* );
	/* ../public/resourcesystem/stronghandle.h:428 */
	ResourceType_t GetResourceType(void);
	/* ../public/resourcesystem/stronghandle.h:683 */
	void Move(CStrongHandle<InfoForResourceTypeCEntityLump>* , CStrongHandle<InfoForResourceTypeCEntityLump>& );
private:
	/* ../public/resourcesystem/stronghandle.h:201 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCEntityLump>* , const CStrongHandle<InfoForResourceTypeCEntityLump>& );
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCEntityLump> *); /* linkage=_ZN13CStrongHandleI30InfoForResourceTypeCEntityLumpEC4Ev */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCEntityLump> *, ResourceHandleTyped_t); /* linkage=_ZN13CStrongHandleI30InfoForResourceTypeCEntityLumpEC4EPK17ResourceBinding_tIS0_E */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCEntityLump> *, class ResourceId_t); /* linkage=_ZN13CStrongHandleI30InfoForResourceTypeCEntityLumpEC4E12ResourceId_t */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCEntityLump> *, const char  *); /* linkage=_ZN13CStrongHandleI30InfoForResourceTypeCEntityLumpEC4EPKc */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCEntityLump> *, class CStrongHandle<InfoForResourceTypeCEntityLump> &); /* linkage=_ZN13CStrongHandleI30InfoForResourceTypeCEntityLumpEC4EOS1_ */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCEntityLump> *, const class CWeakHandle<InfoForResourceTypeCEntityLump>  &); /* linkage=_ZN13CStrongHandleI30InfoForResourceTypeCEntityLumpEC4ERK11CWeakHandleIS0_E */
	void ~CStrongHandle(class CStrongHandle<InfoForResourceTypeCEntityLump> *); /* linkage=_ZN13CStrongHandleI30InfoForResourceTypeCEntityLumpED4Ev */
	void Init(class CStrongHandle<InfoForResourceTypeCEntityLump> *, ResourceHandleTyped_t); /* linkage=_ZN13CStrongHandleI30InfoForResourceTypeCEntityLumpE4InitEPK17ResourceBinding_tIS0_E */
	void Init(class CStrongHandle<InfoForResourceTypeCEntityLump> *, class ResourceId_t); /* linkage=_ZN13CStrongHandleI30InfoForResourceTypeCEntityLumpE4InitE12ResourceId_t */
	void Init(class CStrongHandle<InfoForResourceTypeCEntityLump> *, const class CResourceName  &); /* linkage=_ZN13CStrongHandleI30InfoForResourceTypeCEntityLumpE4InitERK13CResourceName */
	void Init(class CStrongHandle<InfoForResourceTypeCEntityLump> *, const class CWeakHandle<InfoForResourceTypeCEntityLump>  &); /* linkage=_ZN13CStrongHandleI30InfoForResourceTypeCEntityLumpE4InitERK11CWeakHandleIS0_E */
	void Init(class CStrongHandle<InfoForResourceTypeCEntityLump> *, const class CStrongHandle<InfoForResourceTypeCEntityLump>  &); /* linkage=_ZN13CStrongHandleI30InfoForResourceTypeCEntityLumpE4InitERKS1_ */
	void Shutdown(class CStrongHandle<InfoForResourceTypeCEntityLump> *); /* linkage=_ZN13CStrongHandleI30InfoForResourceTypeCEntityLumpE8ShutdownEv */
	class CStrongHandle<InfoForResourceTypeCEntityLump> & operator=(class CStrongHandle<InfoForResourceTypeCEntityLump> *, ResourceHandleTyped_t); /* linkage=_ZN13CStrongHandleI30InfoForResourceTypeCEntityLumpEaSEPK17ResourceBinding_tIS0_E */
	class CStrongHandle<InfoForResourceTypeCEntityLump> & operator=(class CStrongHandle<InfoForResourceTypeCEntityLump> *, const class CStrongHandle<InfoForResourceTypeCEntityLump>  &); /* linkage=_ZN13CStrongHandleI30InfoForResourceTypeCEntityLumpEaSERKS1_ */
	class CStrongHandle<InfoForResourceTypeCEntityLump> & operator=(class CStrongHandle<InfoForResourceTypeCEntityLump> *, const class CWeakHandle<InfoForResourceTypeCEntityLump>  &); /* linkage=_ZN13CStrongHandleI30InfoForResourceTypeCEntityLumpEaSERK11CWeakHandleIS0_E */
	bool HasHandle(const class CStrongHandle<InfoForResourceTypeCEntityLump>  *); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCEntityLumpE9HasHandleEv */
	bool HasIdentity(const class CStrongHandle<InfoForResourceTypeCEntityLump>  *); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCEntityLumpE11HasIdentityEv */
	bool HasData(const class CStrongHandle<InfoForResourceTypeCEntityLump>  *); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCEntityLumpE7HasDataEv */
	bool IsLoaded(const class CStrongHandle<InfoForResourceTypeCEntityLump>  *); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCEntityLumpE8IsLoadedEv */
	bool IsError(const class CStrongHandle<InfoForResourceTypeCEntityLump>  *); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCEntityLumpE7IsErrorEv */
	const RuntimeClass_t  * operator const ResourceHandleInfo_t<InfoForResourceTypeCEntityLump>::RuntimeClass_t*(const class CStrongHandle<InfoForResourceTypeCEntityLump>  *); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCEntityLumpEcvPK11CEntityLumpEv */
	const RuntimeClass_t  * operator->(const class CStrongHandle<InfoForResourceTypeCEntityLump>  *); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCEntityLumpEptEv */
	ResourceHandleTyped_t operator CStrongHandle<InfoForResourceTypeCEntityLump>::ResourceHandleTyped_t(const class CStrongHandle<InfoForResourceTypeCEntityLump>  *); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCEntityLumpEcvPK17ResourceBinding_tIS0_EEv */
	ResourceHandle_t operator ResourceHandle_t(const class CStrongHandle<InfoForResourceTypeCEntityLump>  *); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCEntityLumpEcvPK21ResourceBindingBase_tEv */
	class CWeakHandle<InfoForResourceTypeCEntityLump> operator CWeakHandle<InfoForResourceTypeCEntityLump>(const class CStrongHandle<InfoForResourceTypeCEntityLump>  *); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCEntityLumpEcv11CWeakHandleIS0_EEv */
	const class CWeakHandle<InfoForResourceTypeCEntityLump>  GetHandle(const class CStrongHandle<InfoForResourceTypeCEntityLump>  *); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCEntityLumpE9GetHandleEv */
	const class ResourceBinding_t<InfoForResourceTypeCEntityLump>  * GetBinding(const class CStrongHandle<InfoForResourceTypeCEntityLump>  *); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCEntityLumpE10GetBindingEv */
	const RuntimeClass_t  * GetData(const class CStrongHandle<InfoForResourceTypeCEntityLump>  *); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCEntityLumpE7GetDataEv */
	bool operator==(const class CStrongHandle<InfoForResourceTypeCEntityLump>  *, ResourceHandle_t); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCEntityLumpEeqEPK21ResourceBindingBase_t */
	bool operator==(const class CStrongHandle<InfoForResourceTypeCEntityLump>  *, ResourceHandleTyped_t); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCEntityLumpEeqEPK17ResourceBinding_tIS0_E */
	bool operator==(const class CStrongHandle<InfoForResourceTypeCEntityLump>  *, const class CStrongHandle<InfoForResourceTypeCEntityLump>  &); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCEntityLumpEeqERKS1_ */
	bool operator==(const class CStrongHandle<InfoForResourceTypeCEntityLump>  *, const class CWeakHandle<InfoForResourceTypeCEntityLump>  &); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCEntityLumpEeqERK11CWeakHandleIS0_E */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeCEntityLump>  *, ResourceHandle_t); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCEntityLumpEneEPK21ResourceBindingBase_t */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeCEntityLump>  *, ResourceHandleTyped_t); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCEntityLumpEneEPK17ResourceBinding_tIS0_E */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeCEntityLump>  *, const class CStrongHandle<InfoForResourceTypeCEntityLump>  &); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCEntityLumpEneERKS1_ */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeCEntityLump>  *, const class CWeakHandle<InfoForResourceTypeCEntityLump>  &); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCEntityLumpEneERK11CWeakHandleIS0_E */
	bool operator!(const class CStrongHandle<InfoForResourceTypeCEntityLump>  *); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCEntityLumpEntEv */
	int GetRefCount(const class CStrongHandle<InfoForResourceTypeCEntityLump>  *); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCEntityLumpE11GetRefCountEv */
	int GetReloadCounter(const class CStrongHandle<InfoForResourceTypeCEntityLump>  *); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCEntityLumpE16GetReloadCounterEv */
	void GetResourceName(const class CStrongHandle<InfoForResourceTypeCEntityLump>  *, class CBufferString *, bool); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCEntityLumpE15GetResourceNameEP13CBufferStringb */
	void GetResourceName(const class CStrongHandle<InfoForResourceTypeCEntityLump>  *, class CResourceName *); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCEntityLumpE15GetResourceNameEP13CResourceName */
	ResourceType_t GetResourceType(void); /* linkage=_ZN13CStrongHandleI30InfoForResourceTypeCEntityLumpE15GetResourceTypeEv */
	void Move(class CStrongHandle<InfoForResourceTypeCEntityLump> *, class CStrongHandle<InfoForResourceTypeCEntityLump> &); /* linkage=_ZN13CStrongHandleI30InfoForResourceTypeCEntityLumpE4MoveEOS1_ */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCEntityLump> *, const class CStrongHandle<InfoForResourceTypeCEntityLump>  &); /* linkage=_ZN13CStrongHandleI30InfoForResourceTypeCEntityLumpEC4ERKS1_ */
};

// <00EB4F4E> ../public/resourcesystem/stronghandle.h:87
// member functions: 90
// member variable: 1
// class size: 8
class CStrongHandle<InfoForResourceTypeWorld_t> : public CStrongHandleBase {
public:
	/* class CStrongHandleBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcesystem/stronghandle.h:438 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeWorld_t>* );
	/* ../public/resourcesystem/stronghandle.h:459 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeWorld_t>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:90 */
	typedef const class ResourceBinding_t<InfoForResourceTypeWorld_t> * ResourceHandleTyped_t;
	/* ../public/resourcesystem/stronghandle.h:451 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeWorld_t>* , ResourceId_t);
	/* ../public/resourcesystem/stronghandle.h:444 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeWorld_t>* , const char* );
	/* ../public/resourcesystem/stronghandle.h:466 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeWorld_t>* , CStrongHandle<InfoForResourceTypeWorld_t>& );
	/* ../public/resourcesystem/stronghandle.h:473 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeWorld_t>* , const CWeakHandle<InfoForResourceTypeWorld_t>& );
	/* ../public/resourcesystem/stronghandle.h:480 */
	void ~CStrongHandle(CStrongHandle<InfoForResourceTypeWorld_t>* );
	/* ../public/resourcesystem/stronghandle.h:547 */
	void Init(CStrongHandle<InfoForResourceTypeWorld_t>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:490 */
	void Init(CStrongHandle<InfoForResourceTypeWorld_t>* , ResourceId_t);
	/* ../public/resourcesystem/stronghandle.h:518 */
	void Init(CStrongHandle<InfoForResourceTypeWorld_t>* , const CResourceName& );
	/* ../public/resourcesystem/stronghandle.h:575 */
	void Init(CStrongHandle<InfoForResourceTypeWorld_t>* , const CWeakHandle<InfoForResourceTypeWorld_t>& );
	/* ../public/resourcesystem/stronghandle.h:581 */
	void Init(CStrongHandle<InfoForResourceTypeWorld_t>* , const CStrongHandle<InfoForResourceTypeWorld_t>& );
	/* ../public/resourcesystem/stronghandle.h:609 */
	void Shutdown(CStrongHandle<InfoForResourceTypeWorld_t>* );
	/* ../public/resourcesystem/stronghandle.h:657 */
	CStrongHandle<InfoForResourceTypeWorld_t>& operator=(CStrongHandle<InfoForResourceTypeWorld_t>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:664 */
	CStrongHandle<InfoForResourceTypeWorld_t>& operator=(CStrongHandle<InfoForResourceTypeWorld_t>* , const CStrongHandle<InfoForResourceTypeWorld_t>& );
	/* ../public/resourcesystem/stronghandle.h:671 */
	CStrongHandle<InfoForResourceTypeWorld_t>& operator=(CStrongHandle<InfoForResourceTypeWorld_t>* , const CWeakHandle<InfoForResourceTypeWorld_t>& );
	/* ../public/resourcesystem/stronghandle.h:851 */
	bool HasHandle(const CStrongHandle<InfoForResourceTypeWorld_t>* );
	/* ../public/resourcesystem/stronghandle.h:857 */
	bool HasIdentity(const CStrongHandle<InfoForResourceTypeWorld_t>* );
	/* ../public/resourcesystem/stronghandle.h:867 */
	bool HasData(const CStrongHandle<InfoForResourceTypeWorld_t>* );
	/* ../public/resourcesystem/stronghandle.h:877 */
	bool IsLoaded(const CStrongHandle<InfoForResourceTypeWorld_t>* );
	/* ../public/resourcesystem/stronghandle.h:887 */
	bool IsError(const CStrongHandle<InfoForResourceTypeWorld_t>* );
	/* ../public/resourcesystem/stronghandle.h:731 */
	const RuntimeClass_t* operator const ResourceHandleInfo_t<InfoForResourceTypeWorld_t>::RuntimeClass_t*(const CStrongHandle<InfoForResourceTypeWorld_t>* );
	/* ../public/resourcesystem/stronghandle.h:738 */
	const RuntimeClass_t* operator->(const CStrongHandle<InfoForResourceTypeWorld_t>* );
	/* ../public/resourcesystem/stronghandle.h:745 */
	ResourceHandleTyped_t operator CStrongHandle<InfoForResourceTypeWorld_t>::ResourceHandleTyped_t(const CStrongHandle<InfoForResourceTypeWorld_t>* );
	/* ../public/resourcesystem/stronghandle.h:758 */
	ResourceHandle_t operator ResourceHandle_t(const CStrongHandle<InfoForResourceTypeWorld_t>* );
	/* ../public/resourcesystem/stronghandle.h:752 */
	CWeakHandle<InfoForResourceTypeWorld_t> operator CWeakHandle<InfoForResourceTypeWorld_t>(const CStrongHandle<InfoForResourceTypeWorld_t>* );
	/* ../public/resourcesystem/stronghandle.h:708 */
	const CWeakHandle<InfoForResourceTypeWorld_t> GetHandle(const CStrongHandle<InfoForResourceTypeWorld_t>* );
	/* ../public/resourcesystem/stronghandle.h:716 */
	const ResourceBinding_t<InfoForResourceTypeWorld_t>* GetBinding(const CStrongHandle<InfoForResourceTypeWorld_t>* );
	/* ../public/resourcesystem/stronghandle.h:724 */
	const RuntimeClass_t* GetData(const CStrongHandle<InfoForResourceTypeWorld_t>* );
	/* ../public/resourcesystem/stronghandle.h:791 */
	bool operator==(const CStrongHandle<InfoForResourceTypeWorld_t>* , ResourceHandle_t);
	/* ../public/resourcesystem/stronghandle.h:798 */
	bool operator==(const CStrongHandle<InfoForResourceTypeWorld_t>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:805 */
	bool operator==(const CStrongHandle<InfoForResourceTypeWorld_t>* , const CStrongHandle<InfoForResourceTypeWorld_t>& );
	/* ../public/resourcesystem/stronghandle.h:812 */
	bool operator==(const CStrongHandle<InfoForResourceTypeWorld_t>* , const CWeakHandle<InfoForResourceTypeWorld_t>& );
	/* ../public/resourcesystem/stronghandle.h:819 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeWorld_t>* , ResourceHandle_t);
	/* ../public/resourcesystem/stronghandle.h:826 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeWorld_t>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:833 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeWorld_t>* , const CStrongHandle<InfoForResourceTypeWorld_t>& );
	/* ../public/resourcesystem/stronghandle.h:840 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeWorld_t>* , const CWeakHandle<InfoForResourceTypeWorld_t>& );
	/* ../public/resourcesystem/stronghandle.h:179 */
	bool operator!(const CStrongHandle<InfoForResourceTypeWorld_t>* );
	/* ../public/resourcesystem/stronghandle.h:769 */
	int GetRefCount(const CStrongHandle<InfoForResourceTypeWorld_t>* );
	/* ../public/resourcesystem/stronghandle.h:780 */
	int GetReloadCounter(const CStrongHandle<InfoForResourceTypeWorld_t>* );
	/* ../public/resourcesystem/stronghandle.h:895 */
	void GetResourceName(const CStrongHandle<InfoForResourceTypeWorld_t>* , CBufferString* , bool);
	/* ../public/resourcesystem/stronghandle.h:904 */
	void GetResourceName(const CStrongHandle<InfoForResourceTypeWorld_t>* , CResourceName* );
	/* ../public/resourcesystem/stronghandle.h:428 */
	ResourceType_t GetResourceType(void);
	/* ../public/resourcesystem/stronghandle.h:683 */
	void Move(CStrongHandle<InfoForResourceTypeWorld_t>* , CStrongHandle<InfoForResourceTypeWorld_t>& );
private:
	/* ../public/resourcesystem/stronghandle.h:201 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeWorld_t>* , const CStrongHandle<InfoForResourceTypeWorld_t>& );
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeWorld_t> *); /* linkage=_ZN13CStrongHandleI26InfoForResourceTypeWorld_tEC4Ev */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeWorld_t> *, ResourceHandleTyped_t); /* linkage=_ZN13CStrongHandleI26InfoForResourceTypeWorld_tEC4EPK17ResourceBinding_tIS0_E */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeWorld_t> *, class ResourceId_t); /* linkage=_ZN13CStrongHandleI26InfoForResourceTypeWorld_tEC4E12ResourceId_t */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeWorld_t> *, const char  *); /* linkage=_ZN13CStrongHandleI26InfoForResourceTypeWorld_tEC4EPKc */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeWorld_t> *, class CStrongHandle<InfoForResourceTypeWorld_t> &); /* linkage=_ZN13CStrongHandleI26InfoForResourceTypeWorld_tEC4EOS1_ */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeWorld_t> *, const class CWeakHandle<InfoForResourceTypeWorld_t>  &); /* linkage=_ZN13CStrongHandleI26InfoForResourceTypeWorld_tEC4ERK11CWeakHandleIS0_E */
	void ~CStrongHandle(class CStrongHandle<InfoForResourceTypeWorld_t> *); /* linkage=_ZN13CStrongHandleI26InfoForResourceTypeWorld_tED4Ev */
	void Init(class CStrongHandle<InfoForResourceTypeWorld_t> *, ResourceHandleTyped_t); /* linkage=_ZN13CStrongHandleI26InfoForResourceTypeWorld_tE4InitEPK17ResourceBinding_tIS0_E */
	void Init(class CStrongHandle<InfoForResourceTypeWorld_t> *, class ResourceId_t); /* linkage=_ZN13CStrongHandleI26InfoForResourceTypeWorld_tE4InitE12ResourceId_t */
	void Init(class CStrongHandle<InfoForResourceTypeWorld_t> *, const class CResourceName  &); /* linkage=_ZN13CStrongHandleI26InfoForResourceTypeWorld_tE4InitERK13CResourceName */
	void Init(class CStrongHandle<InfoForResourceTypeWorld_t> *, const class CWeakHandle<InfoForResourceTypeWorld_t>  &); /* linkage=_ZN13CStrongHandleI26InfoForResourceTypeWorld_tE4InitERK11CWeakHandleIS0_E */
	void Init(class CStrongHandle<InfoForResourceTypeWorld_t> *, const class CStrongHandle<InfoForResourceTypeWorld_t>  &); /* linkage=_ZN13CStrongHandleI26InfoForResourceTypeWorld_tE4InitERKS1_ */
	void Shutdown(class CStrongHandle<InfoForResourceTypeWorld_t> *); /* linkage=_ZN13CStrongHandleI26InfoForResourceTypeWorld_tE8ShutdownEv */
	class CStrongHandle<InfoForResourceTypeWorld_t> & operator=(class CStrongHandle<InfoForResourceTypeWorld_t> *, ResourceHandleTyped_t); /* linkage=_ZN13CStrongHandleI26InfoForResourceTypeWorld_tEaSEPK17ResourceBinding_tIS0_E */
	class CStrongHandle<InfoForResourceTypeWorld_t> & operator=(class CStrongHandle<InfoForResourceTypeWorld_t> *, const class CStrongHandle<InfoForResourceTypeWorld_t>  &); /* linkage=_ZN13CStrongHandleI26InfoForResourceTypeWorld_tEaSERKS1_ */
	class CStrongHandle<InfoForResourceTypeWorld_t> & operator=(class CStrongHandle<InfoForResourceTypeWorld_t> *, const class CWeakHandle<InfoForResourceTypeWorld_t>  &); /* linkage=_ZN13CStrongHandleI26InfoForResourceTypeWorld_tEaSERK11CWeakHandleIS0_E */
	bool HasHandle(const class CStrongHandle<InfoForResourceTypeWorld_t>  *); /* linkage=_ZNK13CStrongHandleI26InfoForResourceTypeWorld_tE9HasHandleEv */
	bool HasIdentity(const class CStrongHandle<InfoForResourceTypeWorld_t>  *); /* linkage=_ZNK13CStrongHandleI26InfoForResourceTypeWorld_tE11HasIdentityEv */
	bool HasData(const class CStrongHandle<InfoForResourceTypeWorld_t>  *); /* linkage=_ZNK13CStrongHandleI26InfoForResourceTypeWorld_tE7HasDataEv */
	bool IsLoaded(const class CStrongHandle<InfoForResourceTypeWorld_t>  *); /* linkage=_ZNK13CStrongHandleI26InfoForResourceTypeWorld_tE8IsLoadedEv */
	bool IsError(const class CStrongHandle<InfoForResourceTypeWorld_t>  *); /* linkage=_ZNK13CStrongHandleI26InfoForResourceTypeWorld_tE7IsErrorEv */
	const RuntimeClass_t  * operator const ResourceHandleInfo_t<InfoForResourceTypeWorld_t>::RuntimeClass_t*(const class CStrongHandle<InfoForResourceTypeWorld_t>  *); /* linkage=_ZNK13CStrongHandleI26InfoForResourceTypeWorld_tEcvPK7World_tEv */
	const RuntimeClass_t  * operator->(const class CStrongHandle<InfoForResourceTypeWorld_t>  *); /* linkage=_ZNK13CStrongHandleI26InfoForResourceTypeWorld_tEptEv */
	ResourceHandleTyped_t operator CStrongHandle<InfoForResourceTypeWorld_t>::ResourceHandleTyped_t(const class CStrongHandle<InfoForResourceTypeWorld_t>  *); /* linkage=_ZNK13CStrongHandleI26InfoForResourceTypeWorld_tEcvPK17ResourceBinding_tIS0_EEv */
	ResourceHandle_t operator ResourceHandle_t(const class CStrongHandle<InfoForResourceTypeWorld_t>  *); /* linkage=_ZNK13CStrongHandleI26InfoForResourceTypeWorld_tEcvPK21ResourceBindingBase_tEv */
	class CWeakHandle<InfoForResourceTypeWorld_t> operator CWeakHandle<InfoForResourceTypeWorld_t>(const class CStrongHandle<InfoForResourceTypeWorld_t>  *); /* linkage=_ZNK13CStrongHandleI26InfoForResourceTypeWorld_tEcv11CWeakHandleIS0_EEv */
	const class CWeakHandle<InfoForResourceTypeWorld_t>  GetHandle(const class CStrongHandle<InfoForResourceTypeWorld_t>  *); /* linkage=_ZNK13CStrongHandleI26InfoForResourceTypeWorld_tE9GetHandleEv */
	const class ResourceBinding_t<InfoForResourceTypeWorld_t>  * GetBinding(const class CStrongHandle<InfoForResourceTypeWorld_t>  *); /* linkage=_ZNK13CStrongHandleI26InfoForResourceTypeWorld_tE10GetBindingEv */
	const RuntimeClass_t  * GetData(const class CStrongHandle<InfoForResourceTypeWorld_t>  *); /* linkage=_ZNK13CStrongHandleI26InfoForResourceTypeWorld_tE7GetDataEv */
	bool operator==(const class CStrongHandle<InfoForResourceTypeWorld_t>  *, ResourceHandle_t); /* linkage=_ZNK13CStrongHandleI26InfoForResourceTypeWorld_tEeqEPK21ResourceBindingBase_t */
	bool operator==(const class CStrongHandle<InfoForResourceTypeWorld_t>  *, ResourceHandleTyped_t); /* linkage=_ZNK13CStrongHandleI26InfoForResourceTypeWorld_tEeqEPK17ResourceBinding_tIS0_E */
	bool operator==(const class CStrongHandle<InfoForResourceTypeWorld_t>  *, const class CStrongHandle<InfoForResourceTypeWorld_t>  &); /* linkage=_ZNK13CStrongHandleI26InfoForResourceTypeWorld_tEeqERKS1_ */
	bool operator==(const class CStrongHandle<InfoForResourceTypeWorld_t>  *, const class CWeakHandle<InfoForResourceTypeWorld_t>  &); /* linkage=_ZNK13CStrongHandleI26InfoForResourceTypeWorld_tEeqERK11CWeakHandleIS0_E */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeWorld_t>  *, ResourceHandle_t); /* linkage=_ZNK13CStrongHandleI26InfoForResourceTypeWorld_tEneEPK21ResourceBindingBase_t */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeWorld_t>  *, ResourceHandleTyped_t); /* linkage=_ZNK13CStrongHandleI26InfoForResourceTypeWorld_tEneEPK17ResourceBinding_tIS0_E */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeWorld_t>  *, const class CStrongHandle<InfoForResourceTypeWorld_t>  &); /* linkage=_ZNK13CStrongHandleI26InfoForResourceTypeWorld_tEneERKS1_ */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeWorld_t>  *, const class CWeakHandle<InfoForResourceTypeWorld_t>  &); /* linkage=_ZNK13CStrongHandleI26InfoForResourceTypeWorld_tEneERK11CWeakHandleIS0_E */
	bool operator!(const class CStrongHandle<InfoForResourceTypeWorld_t>  *); /* linkage=_ZNK13CStrongHandleI26InfoForResourceTypeWorld_tEntEv */
	int GetRefCount(const class CStrongHandle<InfoForResourceTypeWorld_t>  *); /* linkage=_ZNK13CStrongHandleI26InfoForResourceTypeWorld_tE11GetRefCountEv */
	int GetReloadCounter(const class CStrongHandle<InfoForResourceTypeWorld_t>  *); /* linkage=_ZNK13CStrongHandleI26InfoForResourceTypeWorld_tE16GetReloadCounterEv */
	void GetResourceName(const class CStrongHandle<InfoForResourceTypeWorld_t>  *, class CBufferString *, bool); /* linkage=_ZNK13CStrongHandleI26InfoForResourceTypeWorld_tE15GetResourceNameEP13CBufferStringb */
	void GetResourceName(const class CStrongHandle<InfoForResourceTypeWorld_t>  *, class CResourceName *); /* linkage=_ZNK13CStrongHandleI26InfoForResourceTypeWorld_tE15GetResourceNameEP13CResourceName */
	ResourceType_t GetResourceType(void); /* linkage=_ZN13CStrongHandleI26InfoForResourceTypeWorld_tE15GetResourceTypeEv */
	void Move(class CStrongHandle<InfoForResourceTypeWorld_t> *, class CStrongHandle<InfoForResourceTypeWorld_t> &); /* linkage=_ZN13CStrongHandleI26InfoForResourceTypeWorld_tE4MoveEOS1_ */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeWorld_t> *, const class CStrongHandle<InfoForResourceTypeWorld_t>  &); /* linkage=_ZN13CStrongHandleI26InfoForResourceTypeWorld_tEC4ERKS1_ */
};

// <00EB6148> ../public/resourcesystem/stronghandle.h:87
// member functions: 45
// member variable: 1
// class size: 8
class CStrongHandle<InfoForResourceTypeCVoxelVisibility> : public CStrongHandleBase {
public:
	/* class CStrongHandleBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcesystem/stronghandle.h:438 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCVoxelVisibility>* );
	/* ../public/resourcesystem/stronghandle.h:459 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCVoxelVisibility>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:90 */
	typedef const class ResourceBinding_t<InfoForResourceTypeCVoxelVisibility> * ResourceHandleTyped_t;
	/* ../public/resourcesystem/stronghandle.h:451 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCVoxelVisibility>* , ResourceId_t);
	/* ../public/resourcesystem/stronghandle.h:444 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCVoxelVisibility>* , const char* );
	/* ../public/resourcesystem/stronghandle.h:466 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCVoxelVisibility>* , CStrongHandle<InfoForResourceTypeCVoxelVisibility>& );
	/* ../public/resourcesystem/stronghandle.h:473 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCVoxelVisibility>* , const CWeakHandle<InfoForResourceTypeCVoxelVisibility>& );
	/* ../public/resourcesystem/stronghandle.h:480 */
	void ~CStrongHandle(CStrongHandle<InfoForResourceTypeCVoxelVisibility>* );
	/* ../public/resourcesystem/stronghandle.h:547 */
	void Init(CStrongHandle<InfoForResourceTypeCVoxelVisibility>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:490 */
	void Init(CStrongHandle<InfoForResourceTypeCVoxelVisibility>* , ResourceId_t);
	/* ../public/resourcesystem/stronghandle.h:518 */
	void Init(CStrongHandle<InfoForResourceTypeCVoxelVisibility>* , const CResourceName& );
	/* ../public/resourcesystem/stronghandle.h:575 */
	void Init(CStrongHandle<InfoForResourceTypeCVoxelVisibility>* , const CWeakHandle<InfoForResourceTypeCVoxelVisibility>& );
	/* ../public/resourcesystem/stronghandle.h:581 */
	void Init(CStrongHandle<InfoForResourceTypeCVoxelVisibility>* , const CStrongHandle<InfoForResourceTypeCVoxelVisibility>& );
	/* ../public/resourcesystem/stronghandle.h:609 */
	void Shutdown(CStrongHandle<InfoForResourceTypeCVoxelVisibility>* );
	/* ../public/resourcesystem/stronghandle.h:657 */
	CStrongHandle<InfoForResourceTypeCVoxelVisibility>& operator=(CStrongHandle<InfoForResourceTypeCVoxelVisibility>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:664 */
	CStrongHandle<InfoForResourceTypeCVoxelVisibility>& operator=(CStrongHandle<InfoForResourceTypeCVoxelVisibility>* , const CStrongHandle<InfoForResourceTypeCVoxelVisibility>& );
	/* ../public/resourcesystem/stronghandle.h:671 */
	CStrongHandle<InfoForResourceTypeCVoxelVisibility>& operator=(CStrongHandle<InfoForResourceTypeCVoxelVisibility>* , const CWeakHandle<InfoForResourceTypeCVoxelVisibility>& );
	/* ../public/resourcesystem/stronghandle.h:851 */
	bool HasHandle(const CStrongHandle<InfoForResourceTypeCVoxelVisibility>* );
	/* ../public/resourcesystem/stronghandle.h:857 */
	bool HasIdentity(const CStrongHandle<InfoForResourceTypeCVoxelVisibility>* );
	/* ../public/resourcesystem/stronghandle.h:867 */
	bool HasData(const CStrongHandle<InfoForResourceTypeCVoxelVisibility>* );
	/* ../public/resourcesystem/stronghandle.h:877 */
	bool IsLoaded(const CStrongHandle<InfoForResourceTypeCVoxelVisibility>* );
	/* ../public/resourcesystem/stronghandle.h:887 */
	bool IsError(const CStrongHandle<InfoForResourceTypeCVoxelVisibility>* );
	/* ../public/resourcesystem/stronghandle.h:731 */
	const RuntimeClass_t* operator const ResourceHandleInfo_t<InfoForResourceTypeCVoxelVisibility>::RuntimeClass_t*(const CStrongHandle<InfoForResourceTypeCVoxelVisibility>* );
	/* ../public/resourcesystem/stronghandle.h:738 */
	const RuntimeClass_t* operator->(const CStrongHandle<InfoForResourceTypeCVoxelVisibility>* );
	/* ../public/resourcesystem/stronghandle.h:745 */
	ResourceHandleTyped_t operator CStrongHandle<InfoForResourceTypeCVoxelVisibility>::ResourceHandleTyped_t(const CStrongHandle<InfoForResourceTypeCVoxelVisibility>* );
	/* ../public/resourcesystem/stronghandle.h:758 */
	ResourceHandle_t operator ResourceHandle_t(const CStrongHandle<InfoForResourceTypeCVoxelVisibility>* );
	/* ../public/resourcesystem/stronghandle.h:752 */
	CWeakHandle<InfoForResourceTypeCVoxelVisibility> operator CWeakHandle<InfoForResourceTypeCVoxelVisibility>(const CStrongHandle<InfoForResourceTypeCVoxelVisibility>* );
	/* ../public/resourcesystem/stronghandle.h:708 */
	const CWeakHandle<InfoForResourceTypeCVoxelVisibility> GetHandle(const CStrongHandle<InfoForResourceTypeCVoxelVisibility>* );
	/* ../public/resourcesystem/stronghandle.h:716 */
	const ResourceBinding_t<InfoForResourceTypeCVoxelVisibility>* GetBinding(const CStrongHandle<InfoForResourceTypeCVoxelVisibility>* );
	/* ../public/resourcesystem/stronghandle.h:724 */
	const RuntimeClass_t* GetData(const CStrongHandle<InfoForResourceTypeCVoxelVisibility>* );
	/* ../public/resourcesystem/stronghandle.h:791 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCVoxelVisibility>* , ResourceHandle_t);
	/* ../public/resourcesystem/stronghandle.h:798 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCVoxelVisibility>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:805 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCVoxelVisibility>* , const CStrongHandle<InfoForResourceTypeCVoxelVisibility>& );
	/* ../public/resourcesystem/stronghandle.h:812 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCVoxelVisibility>* , const CWeakHandle<InfoForResourceTypeCVoxelVisibility>& );
	/* ../public/resourcesystem/stronghandle.h:819 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCVoxelVisibility>* , ResourceHandle_t);
	/* ../public/resourcesystem/stronghandle.h:826 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCVoxelVisibility>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:833 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCVoxelVisibility>* , const CStrongHandle<InfoForResourceTypeCVoxelVisibility>& );
	/* ../public/resourcesystem/stronghandle.h:840 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCVoxelVisibility>* , const CWeakHandle<InfoForResourceTypeCVoxelVisibility>& );
	/* ../public/resourcesystem/stronghandle.h:179 */
	bool operator!(const CStrongHandle<InfoForResourceTypeCVoxelVisibility>* );
	/* ../public/resourcesystem/stronghandle.h:769 */
	int GetRefCount(const CStrongHandle<InfoForResourceTypeCVoxelVisibility>* );
	/* ../public/resourcesystem/stronghandle.h:780 */
	int GetReloadCounter(const CStrongHandle<InfoForResourceTypeCVoxelVisibility>* );
	/* ../public/resourcesystem/stronghandle.h:895 */
	void GetResourceName(const CStrongHandle<InfoForResourceTypeCVoxelVisibility>* , CBufferString* , bool);
	/* ../public/resourcesystem/stronghandle.h:904 */
	void GetResourceName(const CStrongHandle<InfoForResourceTypeCVoxelVisibility>* , CResourceName* );
	/* ../public/resourcesystem/stronghandle.h:428 */
	ResourceType_t GetResourceType(void);
	/* ../public/resourcesystem/stronghandle.h:683 */
	void Move(CStrongHandle<InfoForResourceTypeCVoxelVisibility>* , CStrongHandle<InfoForResourceTypeCVoxelVisibility>& );
private:
	/* ../public/resourcesystem/stronghandle.h:201 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCVoxelVisibility>* , const CStrongHandle<InfoForResourceTypeCVoxelVisibility>& );
};

// <00F6FB36> ../public/resourcesystem/stronghandle.h:87
// member functions: 90
// member variable: 1
// class size: 8
class CStrongHandle<InfoForResourceTypeCRenderMesh> : public CStrongHandleBase {
public:
	/* class CStrongHandleBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcesystem/stronghandle.h:438 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCRenderMesh>* );
	/* ../public/resourcesystem/stronghandle.h:459 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCRenderMesh>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:90 */
	typedef const class ResourceBinding_t<InfoForResourceTypeCRenderMesh> * ResourceHandleTyped_t;
	/* ../public/resourcesystem/stronghandle.h:451 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCRenderMesh>* , ResourceId_t);
	/* ../public/resourcesystem/stronghandle.h:444 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCRenderMesh>* , const char* );
	/* ../public/resourcesystem/stronghandle.h:466 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCRenderMesh>* , CStrongHandle<InfoForResourceTypeCRenderMesh>& );
	/* ../public/resourcesystem/stronghandle.h:473 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCRenderMesh>* , const CWeakHandle<InfoForResourceTypeCRenderMesh>& );
	/* ../public/resourcesystem/stronghandle.h:480 */
	void ~CStrongHandle(CStrongHandle<InfoForResourceTypeCRenderMesh>* );
	/* ../public/resourcesystem/stronghandle.h:547 */
	void Init(CStrongHandle<InfoForResourceTypeCRenderMesh>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:490 */
	void Init(CStrongHandle<InfoForResourceTypeCRenderMesh>* , ResourceId_t);
	/* ../public/resourcesystem/stronghandle.h:518 */
	void Init(CStrongHandle<InfoForResourceTypeCRenderMesh>* , const CResourceName& );
	/* ../public/resourcesystem/stronghandle.h:575 */
	void Init(CStrongHandle<InfoForResourceTypeCRenderMesh>* , const CWeakHandle<InfoForResourceTypeCRenderMesh>& );
	/* ../public/resourcesystem/stronghandle.h:581 */
	void Init(CStrongHandle<InfoForResourceTypeCRenderMesh>* , const CStrongHandle<InfoForResourceTypeCRenderMesh>& );
	/* ../public/resourcesystem/stronghandle.h:609 */
	void Shutdown(CStrongHandle<InfoForResourceTypeCRenderMesh>* );
	/* ../public/resourcesystem/stronghandle.h:657 */
	CStrongHandle<InfoForResourceTypeCRenderMesh>& operator=(CStrongHandle<InfoForResourceTypeCRenderMesh>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:664 */
	CStrongHandle<InfoForResourceTypeCRenderMesh>& operator=(CStrongHandle<InfoForResourceTypeCRenderMesh>* , const CStrongHandle<InfoForResourceTypeCRenderMesh>& );
	/* ../public/resourcesystem/stronghandle.h:671 */
	CStrongHandle<InfoForResourceTypeCRenderMesh>& operator=(CStrongHandle<InfoForResourceTypeCRenderMesh>* , const CWeakHandle<InfoForResourceTypeCRenderMesh>& );
	/* ../public/resourcesystem/stronghandle.h:851 */
	bool HasHandle(const CStrongHandle<InfoForResourceTypeCRenderMesh>* );
	/* ../public/resourcesystem/stronghandle.h:857 */
	bool HasIdentity(const CStrongHandle<InfoForResourceTypeCRenderMesh>* );
	/* ../public/resourcesystem/stronghandle.h:867 */
	bool HasData(const CStrongHandle<InfoForResourceTypeCRenderMesh>* );
	/* ../public/resourcesystem/stronghandle.h:877 */
	bool IsLoaded(const CStrongHandle<InfoForResourceTypeCRenderMesh>* );
	/* ../public/resourcesystem/stronghandle.h:887 */
	bool IsError(const CStrongHandle<InfoForResourceTypeCRenderMesh>* );
	/* ../public/resourcesystem/stronghandle.h:731 */
	const RuntimeClass_t* operator const ResourceHandleInfo_t<InfoForResourceTypeCRenderMesh>::RuntimeClass_t*(const CStrongHandle<InfoForResourceTypeCRenderMesh>* );
	/* ../public/resourcesystem/stronghandle.h:738 */
	const RuntimeClass_t* operator->(const CStrongHandle<InfoForResourceTypeCRenderMesh>* );
	/* ../public/resourcesystem/stronghandle.h:745 */
	ResourceHandleTyped_t operator CStrongHandle<InfoForResourceTypeCRenderMesh>::ResourceHandleTyped_t(const CStrongHandle<InfoForResourceTypeCRenderMesh>* );
	/* ../public/resourcesystem/stronghandle.h:758 */
	ResourceHandle_t operator ResourceHandle_t(const CStrongHandle<InfoForResourceTypeCRenderMesh>* );
	/* ../public/resourcesystem/stronghandle.h:752 */
	CWeakHandle<InfoForResourceTypeCRenderMesh> operator CWeakHandle<InfoForResourceTypeCRenderMesh>(const CStrongHandle<InfoForResourceTypeCRenderMesh>* );
	/* ../public/resourcesystem/stronghandle.h:708 */
	const CWeakHandle<InfoForResourceTypeCRenderMesh> GetHandle(const CStrongHandle<InfoForResourceTypeCRenderMesh>* );
	/* ../public/resourcesystem/stronghandle.h:716 */
	const ResourceBinding_t<InfoForResourceTypeCRenderMesh>* GetBinding(const CStrongHandle<InfoForResourceTypeCRenderMesh>* );
	/* ../public/resourcesystem/stronghandle.h:724 */
	const RuntimeClass_t* GetData(const CStrongHandle<InfoForResourceTypeCRenderMesh>* );
	/* ../public/resourcesystem/stronghandle.h:791 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCRenderMesh>* , ResourceHandle_t);
	/* ../public/resourcesystem/stronghandle.h:798 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCRenderMesh>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:805 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCRenderMesh>* , const CStrongHandle<InfoForResourceTypeCRenderMesh>& );
	/* ../public/resourcesystem/stronghandle.h:812 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCRenderMesh>* , const CWeakHandle<InfoForResourceTypeCRenderMesh>& );
	/* ../public/resourcesystem/stronghandle.h:819 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCRenderMesh>* , ResourceHandle_t);
	/* ../public/resourcesystem/stronghandle.h:826 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCRenderMesh>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:833 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCRenderMesh>* , const CStrongHandle<InfoForResourceTypeCRenderMesh>& );
	/* ../public/resourcesystem/stronghandle.h:840 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCRenderMesh>* , const CWeakHandle<InfoForResourceTypeCRenderMesh>& );
	/* ../public/resourcesystem/stronghandle.h:179 */
	bool operator!(const CStrongHandle<InfoForResourceTypeCRenderMesh>* );
	/* ../public/resourcesystem/stronghandle.h:769 */
	int GetRefCount(const CStrongHandle<InfoForResourceTypeCRenderMesh>* );
	/* ../public/resourcesystem/stronghandle.h:780 */
	int GetReloadCounter(const CStrongHandle<InfoForResourceTypeCRenderMesh>* );
	/* ../public/resourcesystem/stronghandle.h:895 */
	void GetResourceName(const CStrongHandle<InfoForResourceTypeCRenderMesh>* , CBufferString* , bool);
	/* ../public/resourcesystem/stronghandle.h:904 */
	void GetResourceName(const CStrongHandle<InfoForResourceTypeCRenderMesh>* , CResourceName* );
	/* ../public/resourcesystem/stronghandle.h:428 */
	ResourceType_t GetResourceType(void);
	/* ../public/resourcesystem/stronghandle.h:683 */
	void Move(CStrongHandle<InfoForResourceTypeCRenderMesh>* , CStrongHandle<InfoForResourceTypeCRenderMesh>& );
private:
	/* ../public/resourcesystem/stronghandle.h:201 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCRenderMesh>* , const CStrongHandle<InfoForResourceTypeCRenderMesh>& );
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCRenderMesh> *); /* linkage=_ZN13CStrongHandleI30InfoForResourceTypeCRenderMeshEC4Ev */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCRenderMesh> *, ResourceHandleTyped_t); /* linkage=_ZN13CStrongHandleI30InfoForResourceTypeCRenderMeshEC4EPK17ResourceBinding_tIS0_E */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCRenderMesh> *, class ResourceId_t); /* linkage=_ZN13CStrongHandleI30InfoForResourceTypeCRenderMeshEC4E12ResourceId_t */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCRenderMesh> *, const char  *); /* linkage=_ZN13CStrongHandleI30InfoForResourceTypeCRenderMeshEC4EPKc */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCRenderMesh> *, class CStrongHandle<InfoForResourceTypeCRenderMesh> &); /* linkage=_ZN13CStrongHandleI30InfoForResourceTypeCRenderMeshEC4EOS1_ */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCRenderMesh> *, const class CWeakHandle<InfoForResourceTypeCRenderMesh>  &); /* linkage=_ZN13CStrongHandleI30InfoForResourceTypeCRenderMeshEC4ERK11CWeakHandleIS0_E */
	void ~CStrongHandle(class CStrongHandle<InfoForResourceTypeCRenderMesh> *); /* linkage=_ZN13CStrongHandleI30InfoForResourceTypeCRenderMeshED4Ev */
	void Init(class CStrongHandle<InfoForResourceTypeCRenderMesh> *, ResourceHandleTyped_t); /* linkage=_ZN13CStrongHandleI30InfoForResourceTypeCRenderMeshE4InitEPK17ResourceBinding_tIS0_E */
	void Init(class CStrongHandle<InfoForResourceTypeCRenderMesh> *, class ResourceId_t); /* linkage=_ZN13CStrongHandleI30InfoForResourceTypeCRenderMeshE4InitE12ResourceId_t */
	void Init(class CStrongHandle<InfoForResourceTypeCRenderMesh> *, const class CResourceName  &); /* linkage=_ZN13CStrongHandleI30InfoForResourceTypeCRenderMeshE4InitERK13CResourceName */
	void Init(class CStrongHandle<InfoForResourceTypeCRenderMesh> *, const class CWeakHandle<InfoForResourceTypeCRenderMesh>  &); /* linkage=_ZN13CStrongHandleI30InfoForResourceTypeCRenderMeshE4InitERK11CWeakHandleIS0_E */
	void Init(class CStrongHandle<InfoForResourceTypeCRenderMesh> *, const class CStrongHandle<InfoForResourceTypeCRenderMesh>  &); /* linkage=_ZN13CStrongHandleI30InfoForResourceTypeCRenderMeshE4InitERKS1_ */
	/* <1876dd0> ../public/resourcesystem/stronghandle.h:609 */
	void Shutdown(class CStrongHandle<InfoForResourceTypeCRenderMesh> *); /* linkage=_ZN13CStrongHandleI30InfoForResourceTypeCRenderMeshE8ShutdownEv */
	class CStrongHandle<InfoForResourceTypeCRenderMesh> & operator=(class CStrongHandle<InfoForResourceTypeCRenderMesh> *, ResourceHandleTyped_t); /* linkage=_ZN13CStrongHandleI30InfoForResourceTypeCRenderMeshEaSEPK17ResourceBinding_tIS0_E */
	class CStrongHandle<InfoForResourceTypeCRenderMesh> & operator=(class CStrongHandle<InfoForResourceTypeCRenderMesh> *, const class CStrongHandle<InfoForResourceTypeCRenderMesh>  &); /* linkage=_ZN13CStrongHandleI30InfoForResourceTypeCRenderMeshEaSERKS1_ */
	class CStrongHandle<InfoForResourceTypeCRenderMesh> & operator=(class CStrongHandle<InfoForResourceTypeCRenderMesh> *, const class CWeakHandle<InfoForResourceTypeCRenderMesh>  &); /* linkage=_ZN13CStrongHandleI30InfoForResourceTypeCRenderMeshEaSERK11CWeakHandleIS0_E */
	bool HasHandle(const class CStrongHandle<InfoForResourceTypeCRenderMesh>  *); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCRenderMeshE9HasHandleEv */
	bool HasIdentity(const class CStrongHandle<InfoForResourceTypeCRenderMesh>  *); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCRenderMeshE11HasIdentityEv */
	bool HasData(const class CStrongHandle<InfoForResourceTypeCRenderMesh>  *); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCRenderMeshE7HasDataEv */
	bool IsLoaded(const class CStrongHandle<InfoForResourceTypeCRenderMesh>  *); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCRenderMeshE8IsLoadedEv */
	bool IsError(const class CStrongHandle<InfoForResourceTypeCRenderMesh>  *); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCRenderMeshE7IsErrorEv */
	const RuntimeClass_t  * operator const ResourceHandleInfo_t<InfoForResourceTypeCRenderMesh>::RuntimeClass_t*(const class CStrongHandle<InfoForResourceTypeCRenderMesh>  *); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCRenderMeshEcvPK11CRenderMeshEv */
	const RuntimeClass_t  * operator->(const class CStrongHandle<InfoForResourceTypeCRenderMesh>  *); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCRenderMeshEptEv */
	ResourceHandleTyped_t operator CStrongHandle<InfoForResourceTypeCRenderMesh>::ResourceHandleTyped_t(const class CStrongHandle<InfoForResourceTypeCRenderMesh>  *); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCRenderMeshEcvPK17ResourceBinding_tIS0_EEv */
	ResourceHandle_t operator ResourceHandle_t(const class CStrongHandle<InfoForResourceTypeCRenderMesh>  *); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCRenderMeshEcvPK21ResourceBindingBase_tEv */
	class CWeakHandle<InfoForResourceTypeCRenderMesh> operator CWeakHandle<InfoForResourceTypeCRenderMesh>(const class CStrongHandle<InfoForResourceTypeCRenderMesh>  *); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCRenderMeshEcv11CWeakHandleIS0_EEv */
	const class CWeakHandle<InfoForResourceTypeCRenderMesh>  GetHandle(const class CStrongHandle<InfoForResourceTypeCRenderMesh>  *); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCRenderMeshE9GetHandleEv */
	const class ResourceBinding_t<InfoForResourceTypeCRenderMesh>  * GetBinding(const class CStrongHandle<InfoForResourceTypeCRenderMesh>  *); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCRenderMeshE10GetBindingEv */
	const RuntimeClass_t  * GetData(const class CStrongHandle<InfoForResourceTypeCRenderMesh>  *); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCRenderMeshE7GetDataEv */
	bool operator==(const class CStrongHandle<InfoForResourceTypeCRenderMesh>  *, ResourceHandle_t); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCRenderMeshEeqEPK21ResourceBindingBase_t */
	bool operator==(const class CStrongHandle<InfoForResourceTypeCRenderMesh>  *, ResourceHandleTyped_t); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCRenderMeshEeqEPK17ResourceBinding_tIS0_E */
	bool operator==(const class CStrongHandle<InfoForResourceTypeCRenderMesh>  *, const class CStrongHandle<InfoForResourceTypeCRenderMesh>  &); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCRenderMeshEeqERKS1_ */
	bool operator==(const class CStrongHandle<InfoForResourceTypeCRenderMesh>  *, const class CWeakHandle<InfoForResourceTypeCRenderMesh>  &); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCRenderMeshEeqERK11CWeakHandleIS0_E */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeCRenderMesh>  *, ResourceHandle_t); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCRenderMeshEneEPK21ResourceBindingBase_t */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeCRenderMesh>  *, ResourceHandleTyped_t); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCRenderMeshEneEPK17ResourceBinding_tIS0_E */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeCRenderMesh>  *, const class CStrongHandle<InfoForResourceTypeCRenderMesh>  &); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCRenderMeshEneERKS1_ */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeCRenderMesh>  *, const class CWeakHandle<InfoForResourceTypeCRenderMesh>  &); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCRenderMeshEneERK11CWeakHandleIS0_E */
	bool operator!(const class CStrongHandle<InfoForResourceTypeCRenderMesh>  *); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCRenderMeshEntEv */
	int GetRefCount(const class CStrongHandle<InfoForResourceTypeCRenderMesh>  *); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCRenderMeshE11GetRefCountEv */
	int GetReloadCounter(const class CStrongHandle<InfoForResourceTypeCRenderMesh>  *); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCRenderMeshE16GetReloadCounterEv */
	void GetResourceName(const class CStrongHandle<InfoForResourceTypeCRenderMesh>  *, class CBufferString *, bool); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCRenderMeshE15GetResourceNameEP13CBufferStringb */
	void GetResourceName(const class CStrongHandle<InfoForResourceTypeCRenderMesh>  *, class CResourceName *); /* linkage=_ZNK13CStrongHandleI30InfoForResourceTypeCRenderMeshE15GetResourceNameEP13CResourceName */
	ResourceType_t GetResourceType(void); /* linkage=_ZN13CStrongHandleI30InfoForResourceTypeCRenderMeshE15GetResourceTypeEv */
	void Move(class CStrongHandle<InfoForResourceTypeCRenderMesh> *, class CStrongHandle<InfoForResourceTypeCRenderMesh> &); /* linkage=_ZN13CStrongHandleI30InfoForResourceTypeCRenderMeshE4MoveEOS1_ */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCRenderMesh> *, const class CStrongHandle<InfoForResourceTypeCRenderMesh>  &); /* linkage=_ZN13CStrongHandleI30InfoForResourceTypeCRenderMeshEC4ERKS1_ */
};

// <00F73BE2> ../public/resourcesystem/stronghandle.h:87
// member functions: 90
// member variable: 1
// class size: 8
class CStrongHandle<InfoForResourceTypeCWorldNode> : public CStrongHandleBase {
public:
	/* class CStrongHandleBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcesystem/stronghandle.h:438 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCWorldNode>* );
	/* ../public/resourcesystem/stronghandle.h:459 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCWorldNode>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:90 */
	typedef const class ResourceBinding_t<InfoForResourceTypeCWorldNode> * ResourceHandleTyped_t;
	/* ../public/resourcesystem/stronghandle.h:451 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCWorldNode>* , ResourceId_t);
	/* ../public/resourcesystem/stronghandle.h:444 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCWorldNode>* , const char* );
	/* ../public/resourcesystem/stronghandle.h:466 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCWorldNode>* , CStrongHandle<InfoForResourceTypeCWorldNode>& );
	/* ../public/resourcesystem/stronghandle.h:473 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCWorldNode>* , const CWeakHandle<InfoForResourceTypeCWorldNode>& );
	/* ../public/resourcesystem/stronghandle.h:480 */
	void ~CStrongHandle(CStrongHandle<InfoForResourceTypeCWorldNode>* );
	/* ../public/resourcesystem/stronghandle.h:547 */
	void Init(CStrongHandle<InfoForResourceTypeCWorldNode>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:490 */
	void Init(CStrongHandle<InfoForResourceTypeCWorldNode>* , ResourceId_t);
	/* ../public/resourcesystem/stronghandle.h:518 */
	void Init(CStrongHandle<InfoForResourceTypeCWorldNode>* , const CResourceName& );
	/* ../public/resourcesystem/stronghandle.h:575 */
	void Init(CStrongHandle<InfoForResourceTypeCWorldNode>* , const CWeakHandle<InfoForResourceTypeCWorldNode>& );
	/* ../public/resourcesystem/stronghandle.h:581 */
	void Init(CStrongHandle<InfoForResourceTypeCWorldNode>* , const CStrongHandle<InfoForResourceTypeCWorldNode>& );
	/* ../public/resourcesystem/stronghandle.h:609 */
	void Shutdown(CStrongHandle<InfoForResourceTypeCWorldNode>* );
	/* ../public/resourcesystem/stronghandle.h:657 */
	CStrongHandle<InfoForResourceTypeCWorldNode>& operator=(CStrongHandle<InfoForResourceTypeCWorldNode>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:664 */
	CStrongHandle<InfoForResourceTypeCWorldNode>& operator=(CStrongHandle<InfoForResourceTypeCWorldNode>* , const CStrongHandle<InfoForResourceTypeCWorldNode>& );
	/* ../public/resourcesystem/stronghandle.h:671 */
	CStrongHandle<InfoForResourceTypeCWorldNode>& operator=(CStrongHandle<InfoForResourceTypeCWorldNode>* , const CWeakHandle<InfoForResourceTypeCWorldNode>& );
	/* ../public/resourcesystem/stronghandle.h:851 */
	bool HasHandle(const CStrongHandle<InfoForResourceTypeCWorldNode>* );
	/* ../public/resourcesystem/stronghandle.h:857 */
	bool HasIdentity(const CStrongHandle<InfoForResourceTypeCWorldNode>* );
	/* ../public/resourcesystem/stronghandle.h:867 */
	bool HasData(const CStrongHandle<InfoForResourceTypeCWorldNode>* );
	/* ../public/resourcesystem/stronghandle.h:877 */
	bool IsLoaded(const CStrongHandle<InfoForResourceTypeCWorldNode>* );
	/* ../public/resourcesystem/stronghandle.h:887 */
	bool IsError(const CStrongHandle<InfoForResourceTypeCWorldNode>* );
	/* ../public/resourcesystem/stronghandle.h:731 */
	const RuntimeClass_t* operator const ResourceHandleInfo_t<InfoForResourceTypeCWorldNode>::RuntimeClass_t*(const CStrongHandle<InfoForResourceTypeCWorldNode>* );
	/* ../public/resourcesystem/stronghandle.h:738 */
	const RuntimeClass_t* operator->(const CStrongHandle<InfoForResourceTypeCWorldNode>* );
	/* ../public/resourcesystem/stronghandle.h:745 */
	ResourceHandleTyped_t operator CStrongHandle<InfoForResourceTypeCWorldNode>::ResourceHandleTyped_t(const CStrongHandle<InfoForResourceTypeCWorldNode>* );
	/* ../public/resourcesystem/stronghandle.h:758 */
	ResourceHandle_t operator ResourceHandle_t(const CStrongHandle<InfoForResourceTypeCWorldNode>* );
	/* ../public/resourcesystem/stronghandle.h:752 */
	CWeakHandle<InfoForResourceTypeCWorldNode> operator CWeakHandle<InfoForResourceTypeCWorldNode>(const CStrongHandle<InfoForResourceTypeCWorldNode>* );
	/* ../public/resourcesystem/stronghandle.h:708 */
	const CWeakHandle<InfoForResourceTypeCWorldNode> GetHandle(const CStrongHandle<InfoForResourceTypeCWorldNode>* );
	/* ../public/resourcesystem/stronghandle.h:716 */
	const ResourceBinding_t<InfoForResourceTypeCWorldNode>* GetBinding(const CStrongHandle<InfoForResourceTypeCWorldNode>* );
	/* ../public/resourcesystem/stronghandle.h:724 */
	const RuntimeClass_t* GetData(const CStrongHandle<InfoForResourceTypeCWorldNode>* );
	/* ../public/resourcesystem/stronghandle.h:791 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCWorldNode>* , ResourceHandle_t);
	/* ../public/resourcesystem/stronghandle.h:798 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCWorldNode>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:805 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCWorldNode>* , const CStrongHandle<InfoForResourceTypeCWorldNode>& );
	/* ../public/resourcesystem/stronghandle.h:812 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCWorldNode>* , const CWeakHandle<InfoForResourceTypeCWorldNode>& );
	/* ../public/resourcesystem/stronghandle.h:819 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCWorldNode>* , ResourceHandle_t);
	/* ../public/resourcesystem/stronghandle.h:826 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCWorldNode>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:833 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCWorldNode>* , const CStrongHandle<InfoForResourceTypeCWorldNode>& );
	/* ../public/resourcesystem/stronghandle.h:840 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCWorldNode>* , const CWeakHandle<InfoForResourceTypeCWorldNode>& );
	/* ../public/resourcesystem/stronghandle.h:179 */
	bool operator!(const CStrongHandle<InfoForResourceTypeCWorldNode>* );
	/* ../public/resourcesystem/stronghandle.h:769 */
	int GetRefCount(const CStrongHandle<InfoForResourceTypeCWorldNode>* );
	/* ../public/resourcesystem/stronghandle.h:780 */
	int GetReloadCounter(const CStrongHandle<InfoForResourceTypeCWorldNode>* );
	/* ../public/resourcesystem/stronghandle.h:895 */
	void GetResourceName(const CStrongHandle<InfoForResourceTypeCWorldNode>* , CBufferString* , bool);
	/* ../public/resourcesystem/stronghandle.h:904 */
	void GetResourceName(const CStrongHandle<InfoForResourceTypeCWorldNode>* , CResourceName* );
	/* ../public/resourcesystem/stronghandle.h:428 */
	ResourceType_t GetResourceType(void);
	/* ../public/resourcesystem/stronghandle.h:683 */
	void Move(CStrongHandle<InfoForResourceTypeCWorldNode>* , CStrongHandle<InfoForResourceTypeCWorldNode>& );
private:
	/* ../public/resourcesystem/stronghandle.h:201 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCWorldNode>* , const CStrongHandle<InfoForResourceTypeCWorldNode>& );
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCWorldNode> *); /* linkage=_ZN13CStrongHandleI29InfoForResourceTypeCWorldNodeEC4Ev */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCWorldNode> *, ResourceHandleTyped_t); /* linkage=_ZN13CStrongHandleI29InfoForResourceTypeCWorldNodeEC4EPK17ResourceBinding_tIS0_E */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCWorldNode> *, class ResourceId_t); /* linkage=_ZN13CStrongHandleI29InfoForResourceTypeCWorldNodeEC4E12ResourceId_t */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCWorldNode> *, const char  *); /* linkage=_ZN13CStrongHandleI29InfoForResourceTypeCWorldNodeEC4EPKc */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCWorldNode> *, class CStrongHandle<InfoForResourceTypeCWorldNode> &); /* linkage=_ZN13CStrongHandleI29InfoForResourceTypeCWorldNodeEC4EOS1_ */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCWorldNode> *, const class CWeakHandle<InfoForResourceTypeCWorldNode>  &); /* linkage=_ZN13CStrongHandleI29InfoForResourceTypeCWorldNodeEC4ERK11CWeakHandleIS0_E */
	void ~CStrongHandle(class CStrongHandle<InfoForResourceTypeCWorldNode> *); /* linkage=_ZN13CStrongHandleI29InfoForResourceTypeCWorldNodeED4Ev */
	void Init(class CStrongHandle<InfoForResourceTypeCWorldNode> *, ResourceHandleTyped_t); /* linkage=_ZN13CStrongHandleI29InfoForResourceTypeCWorldNodeE4InitEPK17ResourceBinding_tIS0_E */
	void Init(class CStrongHandle<InfoForResourceTypeCWorldNode> *, class ResourceId_t); /* linkage=_ZN13CStrongHandleI29InfoForResourceTypeCWorldNodeE4InitE12ResourceId_t */
	void Init(class CStrongHandle<InfoForResourceTypeCWorldNode> *, const class CResourceName  &); /* linkage=_ZN13CStrongHandleI29InfoForResourceTypeCWorldNodeE4InitERK13CResourceName */
	void Init(class CStrongHandle<InfoForResourceTypeCWorldNode> *, const class CWeakHandle<InfoForResourceTypeCWorldNode>  &); /* linkage=_ZN13CStrongHandleI29InfoForResourceTypeCWorldNodeE4InitERK11CWeakHandleIS0_E */
	void Init(class CStrongHandle<InfoForResourceTypeCWorldNode> *, const class CStrongHandle<InfoForResourceTypeCWorldNode>  &); /* linkage=_ZN13CStrongHandleI29InfoForResourceTypeCWorldNodeE4InitERKS1_ */
	void Shutdown(class CStrongHandle<InfoForResourceTypeCWorldNode> *); /* linkage=_ZN13CStrongHandleI29InfoForResourceTypeCWorldNodeE8ShutdownEv */
	class CStrongHandle<InfoForResourceTypeCWorldNode> & operator=(class CStrongHandle<InfoForResourceTypeCWorldNode> *, ResourceHandleTyped_t); /* linkage=_ZN13CStrongHandleI29InfoForResourceTypeCWorldNodeEaSEPK17ResourceBinding_tIS0_E */
	class CStrongHandle<InfoForResourceTypeCWorldNode> & operator=(class CStrongHandle<InfoForResourceTypeCWorldNode> *, const class CStrongHandle<InfoForResourceTypeCWorldNode>  &); /* linkage=_ZN13CStrongHandleI29InfoForResourceTypeCWorldNodeEaSERKS1_ */
	class CStrongHandle<InfoForResourceTypeCWorldNode> & operator=(class CStrongHandle<InfoForResourceTypeCWorldNode> *, const class CWeakHandle<InfoForResourceTypeCWorldNode>  &); /* linkage=_ZN13CStrongHandleI29InfoForResourceTypeCWorldNodeEaSERK11CWeakHandleIS0_E */
	bool HasHandle(const class CStrongHandle<InfoForResourceTypeCWorldNode>  *); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeCWorldNodeE9HasHandleEv */
	bool HasIdentity(const class CStrongHandle<InfoForResourceTypeCWorldNode>  *); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeCWorldNodeE11HasIdentityEv */
	bool HasData(const class CStrongHandle<InfoForResourceTypeCWorldNode>  *); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeCWorldNodeE7HasDataEv */
	bool IsLoaded(const class CStrongHandle<InfoForResourceTypeCWorldNode>  *); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeCWorldNodeE8IsLoadedEv */
	bool IsError(const class CStrongHandle<InfoForResourceTypeCWorldNode>  *); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeCWorldNodeE7IsErrorEv */
	const RuntimeClass_t  * operator const ResourceHandleInfo_t<InfoForResourceTypeCWorldNode>::RuntimeClass_t*(const class CStrongHandle<InfoForResourceTypeCWorldNode>  *); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeCWorldNodeEcvPK10CWorldNodeEv */
	const RuntimeClass_t  * operator->(const class CStrongHandle<InfoForResourceTypeCWorldNode>  *); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeCWorldNodeEptEv */
	ResourceHandleTyped_t operator CStrongHandle<InfoForResourceTypeCWorldNode>::ResourceHandleTyped_t(const class CStrongHandle<InfoForResourceTypeCWorldNode>  *); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeCWorldNodeEcvPK17ResourceBinding_tIS0_EEv */
	ResourceHandle_t operator ResourceHandle_t(const class CStrongHandle<InfoForResourceTypeCWorldNode>  *); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeCWorldNodeEcvPK21ResourceBindingBase_tEv */
	class CWeakHandle<InfoForResourceTypeCWorldNode> operator CWeakHandle<InfoForResourceTypeCWorldNode>(const class CStrongHandle<InfoForResourceTypeCWorldNode>  *); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeCWorldNodeEcv11CWeakHandleIS0_EEv */
	const class CWeakHandle<InfoForResourceTypeCWorldNode>  GetHandle(const class CStrongHandle<InfoForResourceTypeCWorldNode>  *); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeCWorldNodeE9GetHandleEv */
	const class ResourceBinding_t<InfoForResourceTypeCWorldNode>  * GetBinding(const class CStrongHandle<InfoForResourceTypeCWorldNode>  *); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeCWorldNodeE10GetBindingEv */
	const RuntimeClass_t  * GetData(const class CStrongHandle<InfoForResourceTypeCWorldNode>  *); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeCWorldNodeE7GetDataEv */
	bool operator==(const class CStrongHandle<InfoForResourceTypeCWorldNode>  *, ResourceHandle_t); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeCWorldNodeEeqEPK21ResourceBindingBase_t */
	bool operator==(const class CStrongHandle<InfoForResourceTypeCWorldNode>  *, ResourceHandleTyped_t); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeCWorldNodeEeqEPK17ResourceBinding_tIS0_E */
	bool operator==(const class CStrongHandle<InfoForResourceTypeCWorldNode>  *, const class CStrongHandle<InfoForResourceTypeCWorldNode>  &); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeCWorldNodeEeqERKS1_ */
	bool operator==(const class CStrongHandle<InfoForResourceTypeCWorldNode>  *, const class CWeakHandle<InfoForResourceTypeCWorldNode>  &); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeCWorldNodeEeqERK11CWeakHandleIS0_E */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeCWorldNode>  *, ResourceHandle_t); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeCWorldNodeEneEPK21ResourceBindingBase_t */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeCWorldNode>  *, ResourceHandleTyped_t); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeCWorldNodeEneEPK17ResourceBinding_tIS0_E */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeCWorldNode>  *, const class CStrongHandle<InfoForResourceTypeCWorldNode>  &); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeCWorldNodeEneERKS1_ */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeCWorldNode>  *, const class CWeakHandle<InfoForResourceTypeCWorldNode>  &); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeCWorldNodeEneERK11CWeakHandleIS0_E */
	bool operator!(const class CStrongHandle<InfoForResourceTypeCWorldNode>  *); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeCWorldNodeEntEv */
	int GetRefCount(const class CStrongHandle<InfoForResourceTypeCWorldNode>  *); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeCWorldNodeE11GetRefCountEv */
	int GetReloadCounter(const class CStrongHandle<InfoForResourceTypeCWorldNode>  *); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeCWorldNodeE16GetReloadCounterEv */
	void GetResourceName(const class CStrongHandle<InfoForResourceTypeCWorldNode>  *, class CBufferString *, bool); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeCWorldNodeE15GetResourceNameEP13CBufferStringb */
	void GetResourceName(const class CStrongHandle<InfoForResourceTypeCWorldNode>  *, class CResourceName *); /* linkage=_ZNK13CStrongHandleI29InfoForResourceTypeCWorldNodeE15GetResourceNameEP13CResourceName */
	ResourceType_t GetResourceType(void); /* linkage=_ZN13CStrongHandleI29InfoForResourceTypeCWorldNodeE15GetResourceTypeEv */
	void Move(class CStrongHandle<InfoForResourceTypeCWorldNode> *, class CStrongHandle<InfoForResourceTypeCWorldNode> &); /* linkage=_ZN13CStrongHandleI29InfoForResourceTypeCWorldNodeE4MoveEOS1_ */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCWorldNode> *, const class CStrongHandle<InfoForResourceTypeCWorldNode>  &); /* linkage=_ZN13CStrongHandleI29InfoForResourceTypeCWorldNodeEC4ERKS1_ */
};

// <010509D5> ../public/resourcesystem/stronghandle.h:87
// member functions: 90
// member variable: 1
// class size: 8
class CStrongHandle<InfoForResourceTypeCAnimationGroup> : public CStrongHandleBase {
public:
	/* class CStrongHandleBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcesystem/stronghandle.h:438 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCAnimationGroup>* );
	/* ../public/resourcesystem/stronghandle.h:459 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCAnimationGroup>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:90 */
	typedef const class ResourceBinding_t<InfoForResourceTypeCAnimationGroup> * ResourceHandleTyped_t;
	/* ../public/resourcesystem/stronghandle.h:451 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCAnimationGroup>* , ResourceId_t);
	/* ../public/resourcesystem/stronghandle.h:444 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCAnimationGroup>* , const char* );
	/* ../public/resourcesystem/stronghandle.h:466 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCAnimationGroup>* , CStrongHandle<InfoForResourceTypeCAnimationGroup>& );
	/* ../public/resourcesystem/stronghandle.h:473 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCAnimationGroup>* , const CWeakHandle<InfoForResourceTypeCAnimationGroup>& );
	/* ../public/resourcesystem/stronghandle.h:480 */
	void ~CStrongHandle(CStrongHandle<InfoForResourceTypeCAnimationGroup>* );
	/* ../public/resourcesystem/stronghandle.h:547 */
	void Init(CStrongHandle<InfoForResourceTypeCAnimationGroup>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:490 */
	void Init(CStrongHandle<InfoForResourceTypeCAnimationGroup>* , ResourceId_t);
	/* ../public/resourcesystem/stronghandle.h:518 */
	void Init(CStrongHandle<InfoForResourceTypeCAnimationGroup>* , const CResourceName& );
	/* ../public/resourcesystem/stronghandle.h:575 */
	void Init(CStrongHandle<InfoForResourceTypeCAnimationGroup>* , const CWeakHandle<InfoForResourceTypeCAnimationGroup>& );
	/* ../public/resourcesystem/stronghandle.h:581 */
	void Init(CStrongHandle<InfoForResourceTypeCAnimationGroup>* , const CStrongHandle<InfoForResourceTypeCAnimationGroup>& );
	/* ../public/resourcesystem/stronghandle.h:609 */
	void Shutdown(CStrongHandle<InfoForResourceTypeCAnimationGroup>* );
	/* ../public/resourcesystem/stronghandle.h:657 */
	CStrongHandle<InfoForResourceTypeCAnimationGroup>& operator=(CStrongHandle<InfoForResourceTypeCAnimationGroup>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:664 */
	CStrongHandle<InfoForResourceTypeCAnimationGroup>& operator=(CStrongHandle<InfoForResourceTypeCAnimationGroup>* , const CStrongHandle<InfoForResourceTypeCAnimationGroup>& );
	/* ../public/resourcesystem/stronghandle.h:671 */
	CStrongHandle<InfoForResourceTypeCAnimationGroup>& operator=(CStrongHandle<InfoForResourceTypeCAnimationGroup>* , const CWeakHandle<InfoForResourceTypeCAnimationGroup>& );
	/* ../public/resourcesystem/stronghandle.h:851 */
	bool HasHandle(const CStrongHandle<InfoForResourceTypeCAnimationGroup>* );
	/* ../public/resourcesystem/stronghandle.h:857 */
	bool HasIdentity(const CStrongHandle<InfoForResourceTypeCAnimationGroup>* );
	/* ../public/resourcesystem/stronghandle.h:867 */
	bool HasData(const CStrongHandle<InfoForResourceTypeCAnimationGroup>* );
	/* ../public/resourcesystem/stronghandle.h:877 */
	bool IsLoaded(const CStrongHandle<InfoForResourceTypeCAnimationGroup>* );
	/* ../public/resourcesystem/stronghandle.h:887 */
	bool IsError(const CStrongHandle<InfoForResourceTypeCAnimationGroup>* );
	/* ../public/resourcesystem/stronghandle.h:731 */
	const RuntimeClass_t* operator const ResourceHandleInfo_t<InfoForResourceTypeCAnimationGroup>::RuntimeClass_t*(const CStrongHandle<InfoForResourceTypeCAnimationGroup>* );
	/* ../public/resourcesystem/stronghandle.h:738 */
	const RuntimeClass_t* operator->(const CStrongHandle<InfoForResourceTypeCAnimationGroup>* );
	/* ../public/resourcesystem/stronghandle.h:745 */
	ResourceHandleTyped_t operator CStrongHandle<InfoForResourceTypeCAnimationGroup>::ResourceHandleTyped_t(const CStrongHandle<InfoForResourceTypeCAnimationGroup>* );
	/* ../public/resourcesystem/stronghandle.h:758 */
	ResourceHandle_t operator ResourceHandle_t(const CStrongHandle<InfoForResourceTypeCAnimationGroup>* );
	/* ../public/resourcesystem/stronghandle.h:752 */
	CWeakHandle<InfoForResourceTypeCAnimationGroup> operator CWeakHandle<InfoForResourceTypeCAnimationGroup>(const CStrongHandle<InfoForResourceTypeCAnimationGroup>* );
	/* ../public/resourcesystem/stronghandle.h:708 */
	const CWeakHandle<InfoForResourceTypeCAnimationGroup> GetHandle(const CStrongHandle<InfoForResourceTypeCAnimationGroup>* );
	/* ../public/resourcesystem/stronghandle.h:716 */
	const ResourceBinding_t<InfoForResourceTypeCAnimationGroup>* GetBinding(const CStrongHandle<InfoForResourceTypeCAnimationGroup>* );
	/* ../public/resourcesystem/stronghandle.h:724 */
	const RuntimeClass_t* GetData(const CStrongHandle<InfoForResourceTypeCAnimationGroup>* );
	/* ../public/resourcesystem/stronghandle.h:791 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCAnimationGroup>* , ResourceHandle_t);
	/* ../public/resourcesystem/stronghandle.h:798 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCAnimationGroup>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:805 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCAnimationGroup>* , const CStrongHandle<InfoForResourceTypeCAnimationGroup>& );
	/* ../public/resourcesystem/stronghandle.h:812 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCAnimationGroup>* , const CWeakHandle<InfoForResourceTypeCAnimationGroup>& );
	/* ../public/resourcesystem/stronghandle.h:819 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCAnimationGroup>* , ResourceHandle_t);
	/* ../public/resourcesystem/stronghandle.h:826 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCAnimationGroup>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:833 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCAnimationGroup>* , const CStrongHandle<InfoForResourceTypeCAnimationGroup>& );
	/* ../public/resourcesystem/stronghandle.h:840 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCAnimationGroup>* , const CWeakHandle<InfoForResourceTypeCAnimationGroup>& );
	/* ../public/resourcesystem/stronghandle.h:179 */
	bool operator!(const CStrongHandle<InfoForResourceTypeCAnimationGroup>* );
	/* ../public/resourcesystem/stronghandle.h:769 */
	int GetRefCount(const CStrongHandle<InfoForResourceTypeCAnimationGroup>* );
	/* ../public/resourcesystem/stronghandle.h:780 */
	int GetReloadCounter(const CStrongHandle<InfoForResourceTypeCAnimationGroup>* );
	/* ../public/resourcesystem/stronghandle.h:895 */
	void GetResourceName(const CStrongHandle<InfoForResourceTypeCAnimationGroup>* , CBufferString* , bool);
	/* ../public/resourcesystem/stronghandle.h:904 */
	void GetResourceName(const CStrongHandle<InfoForResourceTypeCAnimationGroup>* , CResourceName* );
	/* ../public/resourcesystem/stronghandle.h:428 */
	ResourceType_t GetResourceType(void);
	/* ../public/resourcesystem/stronghandle.h:683 */
	void Move(CStrongHandle<InfoForResourceTypeCAnimationGroup>* , CStrongHandle<InfoForResourceTypeCAnimationGroup>& );
private:
	/* ../public/resourcesystem/stronghandle.h:201 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCAnimationGroup>* , const CStrongHandle<InfoForResourceTypeCAnimationGroup>& );
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCAnimationGroup> *); /* linkage=_ZN13CStrongHandleI34InfoForResourceTypeCAnimationGroupEC4Ev */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCAnimationGroup> *, ResourceHandleTyped_t); /* linkage=_ZN13CStrongHandleI34InfoForResourceTypeCAnimationGroupEC4EPK17ResourceBinding_tIS0_E */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCAnimationGroup> *, class ResourceId_t); /* linkage=_ZN13CStrongHandleI34InfoForResourceTypeCAnimationGroupEC4E12ResourceId_t */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCAnimationGroup> *, const char  *); /* linkage=_ZN13CStrongHandleI34InfoForResourceTypeCAnimationGroupEC4EPKc */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCAnimationGroup> *, class CStrongHandle<InfoForResourceTypeCAnimationGroup> &); /* linkage=_ZN13CStrongHandleI34InfoForResourceTypeCAnimationGroupEC4EOS1_ */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCAnimationGroup> *, const class CWeakHandle<InfoForResourceTypeCAnimationGroup>  &); /* linkage=_ZN13CStrongHandleI34InfoForResourceTypeCAnimationGroupEC4ERK11CWeakHandleIS0_E */
	void ~CStrongHandle(class CStrongHandle<InfoForResourceTypeCAnimationGroup> *); /* linkage=_ZN13CStrongHandleI34InfoForResourceTypeCAnimationGroupED4Ev */
	void Init(class CStrongHandle<InfoForResourceTypeCAnimationGroup> *, ResourceHandleTyped_t); /* linkage=_ZN13CStrongHandleI34InfoForResourceTypeCAnimationGroupE4InitEPK17ResourceBinding_tIS0_E */
	void Init(class CStrongHandle<InfoForResourceTypeCAnimationGroup> *, class ResourceId_t); /* linkage=_ZN13CStrongHandleI34InfoForResourceTypeCAnimationGroupE4InitE12ResourceId_t */
	void Init(class CStrongHandle<InfoForResourceTypeCAnimationGroup> *, const class CResourceName  &); /* linkage=_ZN13CStrongHandleI34InfoForResourceTypeCAnimationGroupE4InitERK13CResourceName */
	void Init(class CStrongHandle<InfoForResourceTypeCAnimationGroup> *, const class CWeakHandle<InfoForResourceTypeCAnimationGroup>  &); /* linkage=_ZN13CStrongHandleI34InfoForResourceTypeCAnimationGroupE4InitERK11CWeakHandleIS0_E */
	void Init(class CStrongHandle<InfoForResourceTypeCAnimationGroup> *, const class CStrongHandle<InfoForResourceTypeCAnimationGroup>  &); /* linkage=_ZN13CStrongHandleI34InfoForResourceTypeCAnimationGroupE4InitERKS1_ */
	void Shutdown(class CStrongHandle<InfoForResourceTypeCAnimationGroup> *); /* linkage=_ZN13CStrongHandleI34InfoForResourceTypeCAnimationGroupE8ShutdownEv */
	class CStrongHandle<InfoForResourceTypeCAnimationGroup> & operator=(class CStrongHandle<InfoForResourceTypeCAnimationGroup> *, ResourceHandleTyped_t); /* linkage=_ZN13CStrongHandleI34InfoForResourceTypeCAnimationGroupEaSEPK17ResourceBinding_tIS0_E */
	class CStrongHandle<InfoForResourceTypeCAnimationGroup> & operator=(class CStrongHandle<InfoForResourceTypeCAnimationGroup> *, const class CStrongHandle<InfoForResourceTypeCAnimationGroup>  &); /* linkage=_ZN13CStrongHandleI34InfoForResourceTypeCAnimationGroupEaSERKS1_ */
	class CStrongHandle<InfoForResourceTypeCAnimationGroup> & operator=(class CStrongHandle<InfoForResourceTypeCAnimationGroup> *, const class CWeakHandle<InfoForResourceTypeCAnimationGroup>  &); /* linkage=_ZN13CStrongHandleI34InfoForResourceTypeCAnimationGroupEaSERK11CWeakHandleIS0_E */
	bool HasHandle(const class CStrongHandle<InfoForResourceTypeCAnimationGroup>  *); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeCAnimationGroupE9HasHandleEv */
	bool HasIdentity(const class CStrongHandle<InfoForResourceTypeCAnimationGroup>  *); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeCAnimationGroupE11HasIdentityEv */
	bool HasData(const class CStrongHandle<InfoForResourceTypeCAnimationGroup>  *); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeCAnimationGroupE7HasDataEv */
	bool IsLoaded(const class CStrongHandle<InfoForResourceTypeCAnimationGroup>  *); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeCAnimationGroupE8IsLoadedEv */
	bool IsError(const class CStrongHandle<InfoForResourceTypeCAnimationGroup>  *); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeCAnimationGroupE7IsErrorEv */
	const RuntimeClass_t  * operator const ResourceHandleInfo_t<InfoForResourceTypeCAnimationGroup>::RuntimeClass_t*(const class CStrongHandle<InfoForResourceTypeCAnimationGroup>  *); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeCAnimationGroupEcvPK15CAnimationGroupEv */
	const RuntimeClass_t  * operator->(const class CStrongHandle<InfoForResourceTypeCAnimationGroup>  *); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeCAnimationGroupEptEv */
	ResourceHandleTyped_t operator CStrongHandle<InfoForResourceTypeCAnimationGroup>::ResourceHandleTyped_t(const class CStrongHandle<InfoForResourceTypeCAnimationGroup>  *); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeCAnimationGroupEcvPK17ResourceBinding_tIS0_EEv */
	ResourceHandle_t operator ResourceHandle_t(const class CStrongHandle<InfoForResourceTypeCAnimationGroup>  *); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeCAnimationGroupEcvPK21ResourceBindingBase_tEv */
	class CWeakHandle<InfoForResourceTypeCAnimationGroup> operator CWeakHandle<InfoForResourceTypeCAnimationGroup>(const class CStrongHandle<InfoForResourceTypeCAnimationGroup>  *); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeCAnimationGroupEcv11CWeakHandleIS0_EEv */
	const class CWeakHandle<InfoForResourceTypeCAnimationGroup>  GetHandle(const class CStrongHandle<InfoForResourceTypeCAnimationGroup>  *); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeCAnimationGroupE9GetHandleEv */
	const class ResourceBinding_t<InfoForResourceTypeCAnimationGroup>  * GetBinding(const class CStrongHandle<InfoForResourceTypeCAnimationGroup>  *); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeCAnimationGroupE10GetBindingEv */
	const RuntimeClass_t  * GetData(const class CStrongHandle<InfoForResourceTypeCAnimationGroup>  *); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeCAnimationGroupE7GetDataEv */
	bool operator==(const class CStrongHandle<InfoForResourceTypeCAnimationGroup>  *, ResourceHandle_t); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeCAnimationGroupEeqEPK21ResourceBindingBase_t */
	bool operator==(const class CStrongHandle<InfoForResourceTypeCAnimationGroup>  *, ResourceHandleTyped_t); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeCAnimationGroupEeqEPK17ResourceBinding_tIS0_E */
	bool operator==(const class CStrongHandle<InfoForResourceTypeCAnimationGroup>  *, const class CStrongHandle<InfoForResourceTypeCAnimationGroup>  &); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeCAnimationGroupEeqERKS1_ */
	bool operator==(const class CStrongHandle<InfoForResourceTypeCAnimationGroup>  *, const class CWeakHandle<InfoForResourceTypeCAnimationGroup>  &); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeCAnimationGroupEeqERK11CWeakHandleIS0_E */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeCAnimationGroup>  *, ResourceHandle_t); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeCAnimationGroupEneEPK21ResourceBindingBase_t */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeCAnimationGroup>  *, ResourceHandleTyped_t); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeCAnimationGroupEneEPK17ResourceBinding_tIS0_E */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeCAnimationGroup>  *, const class CStrongHandle<InfoForResourceTypeCAnimationGroup>  &); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeCAnimationGroupEneERKS1_ */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeCAnimationGroup>  *, const class CWeakHandle<InfoForResourceTypeCAnimationGroup>  &); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeCAnimationGroupEneERK11CWeakHandleIS0_E */
	bool operator!(const class CStrongHandle<InfoForResourceTypeCAnimationGroup>  *); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeCAnimationGroupEntEv */
	int GetRefCount(const class CStrongHandle<InfoForResourceTypeCAnimationGroup>  *); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeCAnimationGroupE11GetRefCountEv */
	int GetReloadCounter(const class CStrongHandle<InfoForResourceTypeCAnimationGroup>  *); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeCAnimationGroupE16GetReloadCounterEv */
	void GetResourceName(const class CStrongHandle<InfoForResourceTypeCAnimationGroup>  *, class CBufferString *, bool); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeCAnimationGroupE15GetResourceNameEP13CBufferStringb */
	void GetResourceName(const class CStrongHandle<InfoForResourceTypeCAnimationGroup>  *, class CResourceName *); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeCAnimationGroupE15GetResourceNameEP13CResourceName */
	ResourceType_t GetResourceType(void); /* linkage=_ZN13CStrongHandleI34InfoForResourceTypeCAnimationGroupE15GetResourceTypeEv */
	void Move(class CStrongHandle<InfoForResourceTypeCAnimationGroup> *, class CStrongHandle<InfoForResourceTypeCAnimationGroup> &); /* linkage=_ZN13CStrongHandleI34InfoForResourceTypeCAnimationGroupE4MoveEOS1_ */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCAnimationGroup> *, const class CStrongHandle<InfoForResourceTypeCAnimationGroup>  &); /* linkage=_ZN13CStrongHandleI34InfoForResourceTypeCAnimationGroupEC4ERKS1_ */
};

// <01054CA9> ../public/resourcesystem/stronghandle.h:87
// member functions: 90
// member variable: 1
// class size: 8
class CStrongHandle<InfoForResourceTypeCPhysAggregateData> : public CStrongHandleBase {
public:
	/* class CStrongHandleBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcesystem/stronghandle.h:438 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCPhysAggregateData>* );
	/* ../public/resourcesystem/stronghandle.h:459 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCPhysAggregateData>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:90 */
	typedef const class ResourceBinding_t<InfoForResourceTypeCPhysAggregateData> * ResourceHandleTyped_t;
	/* ../public/resourcesystem/stronghandle.h:451 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCPhysAggregateData>* , ResourceId_t);
	/* ../public/resourcesystem/stronghandle.h:444 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCPhysAggregateData>* , const char* );
	/* ../public/resourcesystem/stronghandle.h:466 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCPhysAggregateData>* , CStrongHandle<InfoForResourceTypeCPhysAggregateData>& );
	/* ../public/resourcesystem/stronghandle.h:473 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCPhysAggregateData>* , const CWeakHandle<InfoForResourceTypeCPhysAggregateData>& );
	/* ../public/resourcesystem/stronghandle.h:480 */
	void ~CStrongHandle(CStrongHandle<InfoForResourceTypeCPhysAggregateData>* );
	/* ../public/resourcesystem/stronghandle.h:547 */
	void Init(CStrongHandle<InfoForResourceTypeCPhysAggregateData>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:490 */
	void Init(CStrongHandle<InfoForResourceTypeCPhysAggregateData>* , ResourceId_t);
	/* ../public/resourcesystem/stronghandle.h:518 */
	void Init(CStrongHandle<InfoForResourceTypeCPhysAggregateData>* , const CResourceName& );
	/* ../public/resourcesystem/stronghandle.h:575 */
	void Init(CStrongHandle<InfoForResourceTypeCPhysAggregateData>* , const CWeakHandle<InfoForResourceTypeCPhysAggregateData>& );
	/* ../public/resourcesystem/stronghandle.h:581 */
	void Init(CStrongHandle<InfoForResourceTypeCPhysAggregateData>* , const CStrongHandle<InfoForResourceTypeCPhysAggregateData>& );
	/* ../public/resourcesystem/stronghandle.h:609 */
	void Shutdown(CStrongHandle<InfoForResourceTypeCPhysAggregateData>* );
	/* ../public/resourcesystem/stronghandle.h:657 */
	CStrongHandle<InfoForResourceTypeCPhysAggregateData>& operator=(CStrongHandle<InfoForResourceTypeCPhysAggregateData>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:664 */
	CStrongHandle<InfoForResourceTypeCPhysAggregateData>& operator=(CStrongHandle<InfoForResourceTypeCPhysAggregateData>* , const CStrongHandle<InfoForResourceTypeCPhysAggregateData>& );
	/* ../public/resourcesystem/stronghandle.h:671 */
	CStrongHandle<InfoForResourceTypeCPhysAggregateData>& operator=(CStrongHandle<InfoForResourceTypeCPhysAggregateData>* , const CWeakHandle<InfoForResourceTypeCPhysAggregateData>& );
	/* ../public/resourcesystem/stronghandle.h:851 */
	bool HasHandle(const CStrongHandle<InfoForResourceTypeCPhysAggregateData>* );
	/* ../public/resourcesystem/stronghandle.h:857 */
	bool HasIdentity(const CStrongHandle<InfoForResourceTypeCPhysAggregateData>* );
	/* ../public/resourcesystem/stronghandle.h:867 */
	bool HasData(const CStrongHandle<InfoForResourceTypeCPhysAggregateData>* );
	/* ../public/resourcesystem/stronghandle.h:877 */
	bool IsLoaded(const CStrongHandle<InfoForResourceTypeCPhysAggregateData>* );
	/* ../public/resourcesystem/stronghandle.h:887 */
	bool IsError(const CStrongHandle<InfoForResourceTypeCPhysAggregateData>* );
	/* ../public/resourcesystem/stronghandle.h:731 */
	const RuntimeClass_t* operator const ResourceHandleInfo_t<InfoForResourceTypeCPhysAggregateData>::RuntimeClass_t*(const CStrongHandle<InfoForResourceTypeCPhysAggregateData>* );
	/* ../public/resourcesystem/stronghandle.h:738 */
	const RuntimeClass_t* operator->(const CStrongHandle<InfoForResourceTypeCPhysAggregateData>* );
	/* ../public/resourcesystem/stronghandle.h:745 */
	ResourceHandleTyped_t operator CStrongHandle<InfoForResourceTypeCPhysAggregateData>::ResourceHandleTyped_t(const CStrongHandle<InfoForResourceTypeCPhysAggregateData>* );
	/* ../public/resourcesystem/stronghandle.h:758 */
	ResourceHandle_t operator ResourceHandle_t(const CStrongHandle<InfoForResourceTypeCPhysAggregateData>* );
	/* ../public/resourcesystem/stronghandle.h:752 */
	CWeakHandle<InfoForResourceTypeCPhysAggregateData> operator CWeakHandle<InfoForResourceTypeCPhysAggregateData>(const CStrongHandle<InfoForResourceTypeCPhysAggregateData>* );
	/* ../public/resourcesystem/stronghandle.h:708 */
	const CWeakHandle<InfoForResourceTypeCPhysAggregateData> GetHandle(const CStrongHandle<InfoForResourceTypeCPhysAggregateData>* );
	/* ../public/resourcesystem/stronghandle.h:716 */
	const ResourceBinding_t<InfoForResourceTypeCPhysAggregateData>* GetBinding(const CStrongHandle<InfoForResourceTypeCPhysAggregateData>* );
	/* ../public/resourcesystem/stronghandle.h:724 */
	const RuntimeClass_t* GetData(const CStrongHandle<InfoForResourceTypeCPhysAggregateData>* );
	/* ../public/resourcesystem/stronghandle.h:791 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCPhysAggregateData>* , ResourceHandle_t);
	/* ../public/resourcesystem/stronghandle.h:798 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCPhysAggregateData>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:805 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCPhysAggregateData>* , const CStrongHandle<InfoForResourceTypeCPhysAggregateData>& );
	/* ../public/resourcesystem/stronghandle.h:812 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCPhysAggregateData>* , const CWeakHandle<InfoForResourceTypeCPhysAggregateData>& );
	/* ../public/resourcesystem/stronghandle.h:819 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCPhysAggregateData>* , ResourceHandle_t);
	/* ../public/resourcesystem/stronghandle.h:826 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCPhysAggregateData>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:833 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCPhysAggregateData>* , const CStrongHandle<InfoForResourceTypeCPhysAggregateData>& );
	/* ../public/resourcesystem/stronghandle.h:840 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCPhysAggregateData>* , const CWeakHandle<InfoForResourceTypeCPhysAggregateData>& );
	/* ../public/resourcesystem/stronghandle.h:179 */
	bool operator!(const CStrongHandle<InfoForResourceTypeCPhysAggregateData>* );
	/* ../public/resourcesystem/stronghandle.h:769 */
	int GetRefCount(const CStrongHandle<InfoForResourceTypeCPhysAggregateData>* );
	/* ../public/resourcesystem/stronghandle.h:780 */
	int GetReloadCounter(const CStrongHandle<InfoForResourceTypeCPhysAggregateData>* );
	/* ../public/resourcesystem/stronghandle.h:895 */
	void GetResourceName(const CStrongHandle<InfoForResourceTypeCPhysAggregateData>* , CBufferString* , bool);
	/* ../public/resourcesystem/stronghandle.h:904 */
	void GetResourceName(const CStrongHandle<InfoForResourceTypeCPhysAggregateData>* , CResourceName* );
	/* ../public/resourcesystem/stronghandle.h:428 */
	ResourceType_t GetResourceType(void);
	/* ../public/resourcesystem/stronghandle.h:683 */
	void Move(CStrongHandle<InfoForResourceTypeCPhysAggregateData>* , CStrongHandle<InfoForResourceTypeCPhysAggregateData>& );
private:
	/* ../public/resourcesystem/stronghandle.h:201 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCPhysAggregateData>* , const CStrongHandle<InfoForResourceTypeCPhysAggregateData>& );
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCPhysAggregateData> *); /* linkage=_ZN13CStrongHandleI37InfoForResourceTypeCPhysAggregateDataEC4Ev */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCPhysAggregateData> *, ResourceHandleTyped_t); /* linkage=_ZN13CStrongHandleI37InfoForResourceTypeCPhysAggregateDataEC4EPK17ResourceBinding_tIS0_E */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCPhysAggregateData> *, class ResourceId_t); /* linkage=_ZN13CStrongHandleI37InfoForResourceTypeCPhysAggregateDataEC4E12ResourceId_t */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCPhysAggregateData> *, const char  *); /* linkage=_ZN13CStrongHandleI37InfoForResourceTypeCPhysAggregateDataEC4EPKc */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCPhysAggregateData> *, class CStrongHandle<InfoForResourceTypeCPhysAggregateData> &); /* linkage=_ZN13CStrongHandleI37InfoForResourceTypeCPhysAggregateDataEC4EOS1_ */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCPhysAggregateData> *, const class CWeakHandle<InfoForResourceTypeCPhysAggregateData>  &); /* linkage=_ZN13CStrongHandleI37InfoForResourceTypeCPhysAggregateDataEC4ERK11CWeakHandleIS0_E */
	void ~CStrongHandle(class CStrongHandle<InfoForResourceTypeCPhysAggregateData> *); /* linkage=_ZN13CStrongHandleI37InfoForResourceTypeCPhysAggregateDataED4Ev */
	void Init(class CStrongHandle<InfoForResourceTypeCPhysAggregateData> *, ResourceHandleTyped_t); /* linkage=_ZN13CStrongHandleI37InfoForResourceTypeCPhysAggregateDataE4InitEPK17ResourceBinding_tIS0_E */
	void Init(class CStrongHandle<InfoForResourceTypeCPhysAggregateData> *, class ResourceId_t); /* linkage=_ZN13CStrongHandleI37InfoForResourceTypeCPhysAggregateDataE4InitE12ResourceId_t */
	void Init(class CStrongHandle<InfoForResourceTypeCPhysAggregateData> *, const class CResourceName  &); /* linkage=_ZN13CStrongHandleI37InfoForResourceTypeCPhysAggregateDataE4InitERK13CResourceName */
	void Init(class CStrongHandle<InfoForResourceTypeCPhysAggregateData> *, const class CWeakHandle<InfoForResourceTypeCPhysAggregateData>  &); /* linkage=_ZN13CStrongHandleI37InfoForResourceTypeCPhysAggregateDataE4InitERK11CWeakHandleIS0_E */
	void Init(class CStrongHandle<InfoForResourceTypeCPhysAggregateData> *, const class CStrongHandle<InfoForResourceTypeCPhysAggregateData>  &); /* linkage=_ZN13CStrongHandleI37InfoForResourceTypeCPhysAggregateDataE4InitERKS1_ */
	void Shutdown(class CStrongHandle<InfoForResourceTypeCPhysAggregateData> *); /* linkage=_ZN13CStrongHandleI37InfoForResourceTypeCPhysAggregateDataE8ShutdownEv */
	class CStrongHandle<InfoForResourceTypeCPhysAggregateData> & operator=(class CStrongHandle<InfoForResourceTypeCPhysAggregateData> *, ResourceHandleTyped_t); /* linkage=_ZN13CStrongHandleI37InfoForResourceTypeCPhysAggregateDataEaSEPK17ResourceBinding_tIS0_E */
	class CStrongHandle<InfoForResourceTypeCPhysAggregateData> & operator=(class CStrongHandle<InfoForResourceTypeCPhysAggregateData> *, const class CStrongHandle<InfoForResourceTypeCPhysAggregateData>  &); /* linkage=_ZN13CStrongHandleI37InfoForResourceTypeCPhysAggregateDataEaSERKS1_ */
	class CStrongHandle<InfoForResourceTypeCPhysAggregateData> & operator=(class CStrongHandle<InfoForResourceTypeCPhysAggregateData> *, const class CWeakHandle<InfoForResourceTypeCPhysAggregateData>  &); /* linkage=_ZN13CStrongHandleI37InfoForResourceTypeCPhysAggregateDataEaSERK11CWeakHandleIS0_E */
	bool HasHandle(const class CStrongHandle<InfoForResourceTypeCPhysAggregateData>  *); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCPhysAggregateDataE9HasHandleEv */
	bool HasIdentity(const class CStrongHandle<InfoForResourceTypeCPhysAggregateData>  *); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCPhysAggregateDataE11HasIdentityEv */
	bool HasData(const class CStrongHandle<InfoForResourceTypeCPhysAggregateData>  *); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCPhysAggregateDataE7HasDataEv */
	bool IsLoaded(const class CStrongHandle<InfoForResourceTypeCPhysAggregateData>  *); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCPhysAggregateDataE8IsLoadedEv */
	bool IsError(const class CStrongHandle<InfoForResourceTypeCPhysAggregateData>  *); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCPhysAggregateDataE7IsErrorEv */
	const RuntimeClass_t  * operator const ResourceHandleInfo_t<InfoForResourceTypeCPhysAggregateData>::RuntimeClass_t*(const class CStrongHandle<InfoForResourceTypeCPhysAggregateData>  *); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCPhysAggregateDataEcvPK18CPhysAggregateDataEv */
	const RuntimeClass_t  * operator->(const class CStrongHandle<InfoForResourceTypeCPhysAggregateData>  *); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCPhysAggregateDataEptEv */
	ResourceHandleTyped_t operator CStrongHandle<InfoForResourceTypeCPhysAggregateData>::ResourceHandleTyped_t(const class CStrongHandle<InfoForResourceTypeCPhysAggregateData>  *); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCPhysAggregateDataEcvPK17ResourceBinding_tIS0_EEv */
	ResourceHandle_t operator ResourceHandle_t(const class CStrongHandle<InfoForResourceTypeCPhysAggregateData>  *); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCPhysAggregateDataEcvPK21ResourceBindingBase_tEv */
	class CWeakHandle<InfoForResourceTypeCPhysAggregateData> operator CWeakHandle<InfoForResourceTypeCPhysAggregateData>(const class CStrongHandle<InfoForResourceTypeCPhysAggregateData>  *); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCPhysAggregateDataEcv11CWeakHandleIS0_EEv */
	const class CWeakHandle<InfoForResourceTypeCPhysAggregateData>  GetHandle(const class CStrongHandle<InfoForResourceTypeCPhysAggregateData>  *); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCPhysAggregateDataE9GetHandleEv */
	const class ResourceBinding_t<InfoForResourceTypeCPhysAggregateData>  * GetBinding(const class CStrongHandle<InfoForResourceTypeCPhysAggregateData>  *); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCPhysAggregateDataE10GetBindingEv */
	const RuntimeClass_t  * GetData(const class CStrongHandle<InfoForResourceTypeCPhysAggregateData>  *); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCPhysAggregateDataE7GetDataEv */
	bool operator==(const class CStrongHandle<InfoForResourceTypeCPhysAggregateData>  *, ResourceHandle_t); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCPhysAggregateDataEeqEPK21ResourceBindingBase_t */
	bool operator==(const class CStrongHandle<InfoForResourceTypeCPhysAggregateData>  *, ResourceHandleTyped_t); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCPhysAggregateDataEeqEPK17ResourceBinding_tIS0_E */
	bool operator==(const class CStrongHandle<InfoForResourceTypeCPhysAggregateData>  *, const class CStrongHandle<InfoForResourceTypeCPhysAggregateData>  &); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCPhysAggregateDataEeqERKS1_ */
	bool operator==(const class CStrongHandle<InfoForResourceTypeCPhysAggregateData>  *, const class CWeakHandle<InfoForResourceTypeCPhysAggregateData>  &); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCPhysAggregateDataEeqERK11CWeakHandleIS0_E */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeCPhysAggregateData>  *, ResourceHandle_t); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCPhysAggregateDataEneEPK21ResourceBindingBase_t */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeCPhysAggregateData>  *, ResourceHandleTyped_t); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCPhysAggregateDataEneEPK17ResourceBinding_tIS0_E */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeCPhysAggregateData>  *, const class CStrongHandle<InfoForResourceTypeCPhysAggregateData>  &); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCPhysAggregateDataEneERKS1_ */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeCPhysAggregateData>  *, const class CWeakHandle<InfoForResourceTypeCPhysAggregateData>  &); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCPhysAggregateDataEneERK11CWeakHandleIS0_E */
	bool operator!(const class CStrongHandle<InfoForResourceTypeCPhysAggregateData>  *); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCPhysAggregateDataEntEv */
	int GetRefCount(const class CStrongHandle<InfoForResourceTypeCPhysAggregateData>  *); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCPhysAggregateDataE11GetRefCountEv */
	int GetReloadCounter(const class CStrongHandle<InfoForResourceTypeCPhysAggregateData>  *); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCPhysAggregateDataE16GetReloadCounterEv */
	void GetResourceName(const class CStrongHandle<InfoForResourceTypeCPhysAggregateData>  *, class CBufferString *, bool); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCPhysAggregateDataE15GetResourceNameEP13CBufferStringb */
	void GetResourceName(const class CStrongHandle<InfoForResourceTypeCPhysAggregateData>  *, class CResourceName *); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCPhysAggregateDataE15GetResourceNameEP13CResourceName */
	ResourceType_t GetResourceType(void); /* linkage=_ZN13CStrongHandleI37InfoForResourceTypeCPhysAggregateDataE15GetResourceTypeEv */
	void Move(class CStrongHandle<InfoForResourceTypeCPhysAggregateData> *, class CStrongHandle<InfoForResourceTypeCPhysAggregateData> &); /* linkage=_ZN13CStrongHandleI37InfoForResourceTypeCPhysAggregateDataE4MoveEOS1_ */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCPhysAggregateData> *, const class CStrongHandle<InfoForResourceTypeCPhysAggregateData>  &); /* linkage=_ZN13CStrongHandleI37InfoForResourceTypeCPhysAggregateDataEC4ERKS1_ */
};

// <011510CA> ../public/resourcesystem/stronghandle.h:87
// member functions: 90
// member variable: 1
// class size: 8
class CStrongHandle<InfoForResourceTypeVSound_t> : public CStrongHandleBase {
public:
	/* class CStrongHandleBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcesystem/stronghandle.h:438 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeVSound_t>* );
	/* ../public/resourcesystem/stronghandle.h:459 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeVSound_t>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:90 */
	typedef const class ResourceBinding_t<InfoForResourceTypeVSound_t> * ResourceHandleTyped_t;
	/* ../public/resourcesystem/stronghandle.h:451 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeVSound_t>* , ResourceId_t);
	/* ../public/resourcesystem/stronghandle.h:444 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeVSound_t>* , const char* );
	/* ../public/resourcesystem/stronghandle.h:466 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeVSound_t>* , CStrongHandle<InfoForResourceTypeVSound_t>& );
	/* ../public/resourcesystem/stronghandle.h:473 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeVSound_t>* , const CWeakHandle<InfoForResourceTypeVSound_t>& );
	/* ../public/resourcesystem/stronghandle.h:480 */
	void ~CStrongHandle(CStrongHandle<InfoForResourceTypeVSound_t>* );
	/* ../public/resourcesystem/stronghandle.h:547 */
	void Init(CStrongHandle<InfoForResourceTypeVSound_t>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:490 */
	void Init(CStrongHandle<InfoForResourceTypeVSound_t>* , ResourceId_t);
	/* ../public/resourcesystem/stronghandle.h:518 */
	void Init(CStrongHandle<InfoForResourceTypeVSound_t>* , const CResourceName& );
	/* ../public/resourcesystem/stronghandle.h:575 */
	void Init(CStrongHandle<InfoForResourceTypeVSound_t>* , const CWeakHandle<InfoForResourceTypeVSound_t>& );
	/* ../public/resourcesystem/stronghandle.h:581 */
	void Init(CStrongHandle<InfoForResourceTypeVSound_t>* , const CStrongHandle<InfoForResourceTypeVSound_t>& );
	/* ../public/resourcesystem/stronghandle.h:609 */
	void Shutdown(CStrongHandle<InfoForResourceTypeVSound_t>* );
	/* ../public/resourcesystem/stronghandle.h:657 */
	CStrongHandle<InfoForResourceTypeVSound_t>& operator=(CStrongHandle<InfoForResourceTypeVSound_t>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:664 */
	CStrongHandle<InfoForResourceTypeVSound_t>& operator=(CStrongHandle<InfoForResourceTypeVSound_t>* , const CStrongHandle<InfoForResourceTypeVSound_t>& );
	/* ../public/resourcesystem/stronghandle.h:671 */
	CStrongHandle<InfoForResourceTypeVSound_t>& operator=(CStrongHandle<InfoForResourceTypeVSound_t>* , const CWeakHandle<InfoForResourceTypeVSound_t>& );
	/* ../public/resourcesystem/stronghandle.h:851 */
	bool HasHandle(const CStrongHandle<InfoForResourceTypeVSound_t>* );
	/* ../public/resourcesystem/stronghandle.h:857 */
	bool HasIdentity(const CStrongHandle<InfoForResourceTypeVSound_t>* );
	/* ../public/resourcesystem/stronghandle.h:867 */
	bool HasData(const CStrongHandle<InfoForResourceTypeVSound_t>* );
	/* ../public/resourcesystem/stronghandle.h:877 */
	bool IsLoaded(const CStrongHandle<InfoForResourceTypeVSound_t>* );
	/* ../public/resourcesystem/stronghandle.h:887 */
	bool IsError(const CStrongHandle<InfoForResourceTypeVSound_t>* );
	/* ../public/resourcesystem/stronghandle.h:731 */
	const RuntimeClass_t* operator const ResourceHandleInfo_t<InfoForResourceTypeVSound_t>::RuntimeClass_t*(const CStrongHandle<InfoForResourceTypeVSound_t>* );
	/* ../public/resourcesystem/stronghandle.h:738 */
	const RuntimeClass_t* operator->(const CStrongHandle<InfoForResourceTypeVSound_t>* );
	/* ../public/resourcesystem/stronghandle.h:745 */
	ResourceHandleTyped_t operator CStrongHandle<InfoForResourceTypeVSound_t>::ResourceHandleTyped_t(const CStrongHandle<InfoForResourceTypeVSound_t>* );
	/* ../public/resourcesystem/stronghandle.h:758 */
	ResourceHandle_t operator ResourceHandle_t(const CStrongHandle<InfoForResourceTypeVSound_t>* );
	/* ../public/resourcesystem/stronghandle.h:752 */
	CWeakHandle<InfoForResourceTypeVSound_t> operator CWeakHandle<InfoForResourceTypeVSound_t>(const CStrongHandle<InfoForResourceTypeVSound_t>* );
	/* ../public/resourcesystem/stronghandle.h:708 */
	const CWeakHandle<InfoForResourceTypeVSound_t> GetHandle(const CStrongHandle<InfoForResourceTypeVSound_t>* );
	/* ../public/resourcesystem/stronghandle.h:716 */
	const ResourceBinding_t<InfoForResourceTypeVSound_t>* GetBinding(const CStrongHandle<InfoForResourceTypeVSound_t>* );
	/* ../public/resourcesystem/stronghandle.h:724 */
	const RuntimeClass_t* GetData(const CStrongHandle<InfoForResourceTypeVSound_t>* );
	/* ../public/resourcesystem/stronghandle.h:791 */
	bool operator==(const CStrongHandle<InfoForResourceTypeVSound_t>* , ResourceHandle_t);
	/* ../public/resourcesystem/stronghandle.h:798 */
	bool operator==(const CStrongHandle<InfoForResourceTypeVSound_t>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:805 */
	bool operator==(const CStrongHandle<InfoForResourceTypeVSound_t>* , const CStrongHandle<InfoForResourceTypeVSound_t>& );
	/* ../public/resourcesystem/stronghandle.h:812 */
	bool operator==(const CStrongHandle<InfoForResourceTypeVSound_t>* , const CWeakHandle<InfoForResourceTypeVSound_t>& );
	/* ../public/resourcesystem/stronghandle.h:819 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeVSound_t>* , ResourceHandle_t);
	/* ../public/resourcesystem/stronghandle.h:826 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeVSound_t>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:833 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeVSound_t>* , const CStrongHandle<InfoForResourceTypeVSound_t>& );
	/* ../public/resourcesystem/stronghandle.h:840 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeVSound_t>* , const CWeakHandle<InfoForResourceTypeVSound_t>& );
	/* ../public/resourcesystem/stronghandle.h:179 */
	bool operator!(const CStrongHandle<InfoForResourceTypeVSound_t>* );
	/* ../public/resourcesystem/stronghandle.h:769 */
	int GetRefCount(const CStrongHandle<InfoForResourceTypeVSound_t>* );
	/* ../public/resourcesystem/stronghandle.h:780 */
	int GetReloadCounter(const CStrongHandle<InfoForResourceTypeVSound_t>* );
	/* ../public/resourcesystem/stronghandle.h:895 */
	void GetResourceName(const CStrongHandle<InfoForResourceTypeVSound_t>* , CBufferString* , bool);
	/* ../public/resourcesystem/stronghandle.h:904 */
	void GetResourceName(const CStrongHandle<InfoForResourceTypeVSound_t>* , CResourceName* );
	/* ../public/resourcesystem/stronghandle.h:428 */
	ResourceType_t GetResourceType(void);
	/* ../public/resourcesystem/stronghandle.h:683 */
	void Move(CStrongHandle<InfoForResourceTypeVSound_t>* , CStrongHandle<InfoForResourceTypeVSound_t>& );
private:
	/* ../public/resourcesystem/stronghandle.h:201 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeVSound_t>* , const CStrongHandle<InfoForResourceTypeVSound_t>& );
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeVSound_t> *); /* linkage=_ZN13CStrongHandleI27InfoForResourceTypeVSound_tEC4Ev */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeVSound_t> *, ResourceHandleTyped_t); /* linkage=_ZN13CStrongHandleI27InfoForResourceTypeVSound_tEC4EPK17ResourceBinding_tIS0_E */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeVSound_t> *, class ResourceId_t); /* linkage=_ZN13CStrongHandleI27InfoForResourceTypeVSound_tEC4E12ResourceId_t */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeVSound_t> *, const char  *); /* linkage=_ZN13CStrongHandleI27InfoForResourceTypeVSound_tEC4EPKc */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeVSound_t> *, class CStrongHandle<InfoForResourceTypeVSound_t> &); /* linkage=_ZN13CStrongHandleI27InfoForResourceTypeVSound_tEC4EOS1_ */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeVSound_t> *, const class CWeakHandle<InfoForResourceTypeVSound_t>  &); /* linkage=_ZN13CStrongHandleI27InfoForResourceTypeVSound_tEC4ERK11CWeakHandleIS0_E */
	void ~CStrongHandle(class CStrongHandle<InfoForResourceTypeVSound_t> *); /* linkage=_ZN13CStrongHandleI27InfoForResourceTypeVSound_tED4Ev */
	/* <26a5895> ../public/resourcesystem/stronghandle.h:547 */
	void Init(class CStrongHandle<InfoForResourceTypeVSound_t> *, ResourceHandleTyped_t); /* linkage=_ZN13CStrongHandleI27InfoForResourceTypeVSound_tE4InitEPK17ResourceBinding_tIS0_E */
	void Init(class CStrongHandle<InfoForResourceTypeVSound_t> *, class ResourceId_t); /* linkage=_ZN13CStrongHandleI27InfoForResourceTypeVSound_tE4InitE12ResourceId_t */
	void Init(class CStrongHandle<InfoForResourceTypeVSound_t> *, const class CResourceName  &); /* linkage=_ZN13CStrongHandleI27InfoForResourceTypeVSound_tE4InitERK13CResourceName */
	void Init(class CStrongHandle<InfoForResourceTypeVSound_t> *, const class CWeakHandle<InfoForResourceTypeVSound_t>  &); /* linkage=_ZN13CStrongHandleI27InfoForResourceTypeVSound_tE4InitERK11CWeakHandleIS0_E */
	void Init(class CStrongHandle<InfoForResourceTypeVSound_t> *, const class CStrongHandle<InfoForResourceTypeVSound_t>  &); /* linkage=_ZN13CStrongHandleI27InfoForResourceTypeVSound_tE4InitERKS1_ */
	void Shutdown(class CStrongHandle<InfoForResourceTypeVSound_t> *); /* linkage=_ZN13CStrongHandleI27InfoForResourceTypeVSound_tE8ShutdownEv */
	class CStrongHandle<InfoForResourceTypeVSound_t> & operator=(class CStrongHandle<InfoForResourceTypeVSound_t> *, ResourceHandleTyped_t); /* linkage=_ZN13CStrongHandleI27InfoForResourceTypeVSound_tEaSEPK17ResourceBinding_tIS0_E */
	class CStrongHandle<InfoForResourceTypeVSound_t> & operator=(class CStrongHandle<InfoForResourceTypeVSound_t> *, const class CStrongHandle<InfoForResourceTypeVSound_t>  &); /* linkage=_ZN13CStrongHandleI27InfoForResourceTypeVSound_tEaSERKS1_ */
	class CStrongHandle<InfoForResourceTypeVSound_t> & operator=(class CStrongHandle<InfoForResourceTypeVSound_t> *, const class CWeakHandle<InfoForResourceTypeVSound_t>  &); /* linkage=_ZN13CStrongHandleI27InfoForResourceTypeVSound_tEaSERK11CWeakHandleIS0_E */
	bool HasHandle(const class CStrongHandle<InfoForResourceTypeVSound_t>  *); /* linkage=_ZNK13CStrongHandleI27InfoForResourceTypeVSound_tE9HasHandleEv */
	bool HasIdentity(const class CStrongHandle<InfoForResourceTypeVSound_t>  *); /* linkage=_ZNK13CStrongHandleI27InfoForResourceTypeVSound_tE11HasIdentityEv */
	bool HasData(const class CStrongHandle<InfoForResourceTypeVSound_t>  *); /* linkage=_ZNK13CStrongHandleI27InfoForResourceTypeVSound_tE7HasDataEv */
	bool IsLoaded(const class CStrongHandle<InfoForResourceTypeVSound_t>  *); /* linkage=_ZNK13CStrongHandleI27InfoForResourceTypeVSound_tE8IsLoadedEv */
	bool IsError(const class CStrongHandle<InfoForResourceTypeVSound_t>  *); /* linkage=_ZNK13CStrongHandleI27InfoForResourceTypeVSound_tE7IsErrorEv */
	const RuntimeClass_t  * operator const ResourceHandleInfo_t<InfoForResourceTypeVSound_t>::RuntimeClass_t*(const class CStrongHandle<InfoForResourceTypeVSound_t>  *); /* linkage=_ZNK13CStrongHandleI27InfoForResourceTypeVSound_tEcvPK8VSound_tEv */
	const RuntimeClass_t  * operator->(const class CStrongHandle<InfoForResourceTypeVSound_t>  *); /* linkage=_ZNK13CStrongHandleI27InfoForResourceTypeVSound_tEptEv */
	ResourceHandleTyped_t operator CStrongHandle<InfoForResourceTypeVSound_t>::ResourceHandleTyped_t(const class CStrongHandle<InfoForResourceTypeVSound_t>  *); /* linkage=_ZNK13CStrongHandleI27InfoForResourceTypeVSound_tEcvPK17ResourceBinding_tIS0_EEv */
	ResourceHandle_t operator ResourceHandle_t(const class CStrongHandle<InfoForResourceTypeVSound_t>  *); /* linkage=_ZNK13CStrongHandleI27InfoForResourceTypeVSound_tEcvPK21ResourceBindingBase_tEv */
	class CWeakHandle<InfoForResourceTypeVSound_t> operator CWeakHandle<InfoForResourceTypeVSound_t>(const class CStrongHandle<InfoForResourceTypeVSound_t>  *); /* linkage=_ZNK13CStrongHandleI27InfoForResourceTypeVSound_tEcv11CWeakHandleIS0_EEv */
	const class CWeakHandle<InfoForResourceTypeVSound_t>  GetHandle(const class CStrongHandle<InfoForResourceTypeVSound_t>  *); /* linkage=_ZNK13CStrongHandleI27InfoForResourceTypeVSound_tE9GetHandleEv */
	const class ResourceBinding_t<InfoForResourceTypeVSound_t>  * GetBinding(const class CStrongHandle<InfoForResourceTypeVSound_t>  *); /* linkage=_ZNK13CStrongHandleI27InfoForResourceTypeVSound_tE10GetBindingEv */
	const RuntimeClass_t  * GetData(const class CStrongHandle<InfoForResourceTypeVSound_t>  *); /* linkage=_ZNK13CStrongHandleI27InfoForResourceTypeVSound_tE7GetDataEv */
	bool operator==(const class CStrongHandle<InfoForResourceTypeVSound_t>  *, ResourceHandle_t); /* linkage=_ZNK13CStrongHandleI27InfoForResourceTypeVSound_tEeqEPK21ResourceBindingBase_t */
	bool operator==(const class CStrongHandle<InfoForResourceTypeVSound_t>  *, ResourceHandleTyped_t); /* linkage=_ZNK13CStrongHandleI27InfoForResourceTypeVSound_tEeqEPK17ResourceBinding_tIS0_E */
	bool operator==(const class CStrongHandle<InfoForResourceTypeVSound_t>  *, const class CStrongHandle<InfoForResourceTypeVSound_t>  &); /* linkage=_ZNK13CStrongHandleI27InfoForResourceTypeVSound_tEeqERKS1_ */
	bool operator==(const class CStrongHandle<InfoForResourceTypeVSound_t>  *, const class CWeakHandle<InfoForResourceTypeVSound_t>  &); /* linkage=_ZNK13CStrongHandleI27InfoForResourceTypeVSound_tEeqERK11CWeakHandleIS0_E */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeVSound_t>  *, ResourceHandle_t); /* linkage=_ZNK13CStrongHandleI27InfoForResourceTypeVSound_tEneEPK21ResourceBindingBase_t */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeVSound_t>  *, ResourceHandleTyped_t); /* linkage=_ZNK13CStrongHandleI27InfoForResourceTypeVSound_tEneEPK17ResourceBinding_tIS0_E */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeVSound_t>  *, const class CStrongHandle<InfoForResourceTypeVSound_t>  &); /* linkage=_ZNK13CStrongHandleI27InfoForResourceTypeVSound_tEneERKS1_ */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeVSound_t>  *, const class CWeakHandle<InfoForResourceTypeVSound_t>  &); /* linkage=_ZNK13CStrongHandleI27InfoForResourceTypeVSound_tEneERK11CWeakHandleIS0_E */
	bool operator!(const class CStrongHandle<InfoForResourceTypeVSound_t>  *); /* linkage=_ZNK13CStrongHandleI27InfoForResourceTypeVSound_tEntEv */
	int GetRefCount(const class CStrongHandle<InfoForResourceTypeVSound_t>  *); /* linkage=_ZNK13CStrongHandleI27InfoForResourceTypeVSound_tE11GetRefCountEv */
	int GetReloadCounter(const class CStrongHandle<InfoForResourceTypeVSound_t>  *); /* linkage=_ZNK13CStrongHandleI27InfoForResourceTypeVSound_tE16GetReloadCounterEv */
	void GetResourceName(const class CStrongHandle<InfoForResourceTypeVSound_t>  *, class CBufferString *, bool); /* linkage=_ZNK13CStrongHandleI27InfoForResourceTypeVSound_tE15GetResourceNameEP13CBufferStringb */
	void GetResourceName(const class CStrongHandle<InfoForResourceTypeVSound_t>  *, class CResourceName *); /* linkage=_ZNK13CStrongHandleI27InfoForResourceTypeVSound_tE15GetResourceNameEP13CResourceName */
	ResourceType_t GetResourceType(void); /* linkage=_ZN13CStrongHandleI27InfoForResourceTypeVSound_tE15GetResourceTypeEv */
	void Move(class CStrongHandle<InfoForResourceTypeVSound_t> *, class CStrongHandle<InfoForResourceTypeVSound_t> &); /* linkage=_ZN13CStrongHandleI27InfoForResourceTypeVSound_tE4MoveEOS1_ */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeVSound_t> *, const class CStrongHandle<InfoForResourceTypeVSound_t>  &); /* linkage=_ZN13CStrongHandleI27InfoForResourceTypeVSound_tEC4ERKS1_ */
};

// <01152BF1> ../public/resourcesystem/stronghandle.h:87
// member functions: 90
// member variable: 1
// class size: 8
class CStrongHandle<InfoForResourceTypeIAnimationGraph> : public CStrongHandleBase {
public:
	/* class CStrongHandleBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcesystem/stronghandle.h:438 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeIAnimationGraph>* );
	/* ../public/resourcesystem/stronghandle.h:459 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeIAnimationGraph>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:90 */
	typedef const class ResourceBinding_t<InfoForResourceTypeIAnimationGraph> * ResourceHandleTyped_t;
	/* ../public/resourcesystem/stronghandle.h:451 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeIAnimationGraph>* , ResourceId_t);
	/* ../public/resourcesystem/stronghandle.h:444 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeIAnimationGraph>* , const char* );
	/* ../public/resourcesystem/stronghandle.h:466 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeIAnimationGraph>* , CStrongHandle<InfoForResourceTypeIAnimationGraph>& );
	/* ../public/resourcesystem/stronghandle.h:473 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeIAnimationGraph>* , const CWeakHandle<InfoForResourceTypeIAnimationGraph>& );
	/* ../public/resourcesystem/stronghandle.h:480 */
	void ~CStrongHandle(CStrongHandle<InfoForResourceTypeIAnimationGraph>* );
	/* ../public/resourcesystem/stronghandle.h:547 */
	void Init(CStrongHandle<InfoForResourceTypeIAnimationGraph>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:490 */
	void Init(CStrongHandle<InfoForResourceTypeIAnimationGraph>* , ResourceId_t);
	/* ../public/resourcesystem/stronghandle.h:518 */
	void Init(CStrongHandle<InfoForResourceTypeIAnimationGraph>* , const CResourceName& );
	/* ../public/resourcesystem/stronghandle.h:575 */
	void Init(CStrongHandle<InfoForResourceTypeIAnimationGraph>* , const CWeakHandle<InfoForResourceTypeIAnimationGraph>& );
	/* ../public/resourcesystem/stronghandle.h:581 */
	void Init(CStrongHandle<InfoForResourceTypeIAnimationGraph>* , const CStrongHandle<InfoForResourceTypeIAnimationGraph>& );
	/* ../public/resourcesystem/stronghandle.h:609 */
	void Shutdown(CStrongHandle<InfoForResourceTypeIAnimationGraph>* );
	/* ../public/resourcesystem/stronghandle.h:657 */
	CStrongHandle<InfoForResourceTypeIAnimationGraph>& operator=(CStrongHandle<InfoForResourceTypeIAnimationGraph>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:664 */
	CStrongHandle<InfoForResourceTypeIAnimationGraph>& operator=(CStrongHandle<InfoForResourceTypeIAnimationGraph>* , const CStrongHandle<InfoForResourceTypeIAnimationGraph>& );
	/* ../public/resourcesystem/stronghandle.h:671 */
	CStrongHandle<InfoForResourceTypeIAnimationGraph>& operator=(CStrongHandle<InfoForResourceTypeIAnimationGraph>* , const CWeakHandle<InfoForResourceTypeIAnimationGraph>& );
	/* ../public/resourcesystem/stronghandle.h:851 */
	bool HasHandle(const CStrongHandle<InfoForResourceTypeIAnimationGraph>* );
	/* ../public/resourcesystem/stronghandle.h:857 */
	bool HasIdentity(const CStrongHandle<InfoForResourceTypeIAnimationGraph>* );
	/* ../public/resourcesystem/stronghandle.h:867 */
	bool HasData(const CStrongHandle<InfoForResourceTypeIAnimationGraph>* );
	/* ../public/resourcesystem/stronghandle.h:877 */
	bool IsLoaded(const CStrongHandle<InfoForResourceTypeIAnimationGraph>* );
	/* ../public/resourcesystem/stronghandle.h:887 */
	bool IsError(const CStrongHandle<InfoForResourceTypeIAnimationGraph>* );
	/* ../public/resourcesystem/stronghandle.h:731 */
	const RuntimeClass_t* operator const ResourceHandleInfo_t<InfoForResourceTypeIAnimationGraph>::RuntimeClass_t*(const CStrongHandle<InfoForResourceTypeIAnimationGraph>* );
	/* ../public/resourcesystem/stronghandle.h:738 */
	const RuntimeClass_t* operator->(const CStrongHandle<InfoForResourceTypeIAnimationGraph>* );
	/* ../public/resourcesystem/stronghandle.h:745 */
	ResourceHandleTyped_t operator CStrongHandle<InfoForResourceTypeIAnimationGraph>::ResourceHandleTyped_t(const CStrongHandle<InfoForResourceTypeIAnimationGraph>* );
	/* ../public/resourcesystem/stronghandle.h:758 */
	ResourceHandle_t operator ResourceHandle_t(const CStrongHandle<InfoForResourceTypeIAnimationGraph>* );
	/* ../public/resourcesystem/stronghandle.h:752 */
	CWeakHandle<InfoForResourceTypeIAnimationGraph> operator CWeakHandle<InfoForResourceTypeIAnimationGraph>(const CStrongHandle<InfoForResourceTypeIAnimationGraph>* );
	/* ../public/resourcesystem/stronghandle.h:708 */
	const CWeakHandle<InfoForResourceTypeIAnimationGraph> GetHandle(const CStrongHandle<InfoForResourceTypeIAnimationGraph>* );
	/* ../public/resourcesystem/stronghandle.h:716 */
	const ResourceBinding_t<InfoForResourceTypeIAnimationGraph>* GetBinding(const CStrongHandle<InfoForResourceTypeIAnimationGraph>* );
	/* ../public/resourcesystem/stronghandle.h:724 */
	const RuntimeClass_t* GetData(const CStrongHandle<InfoForResourceTypeIAnimationGraph>* );
	/* ../public/resourcesystem/stronghandle.h:791 */
	bool operator==(const CStrongHandle<InfoForResourceTypeIAnimationGraph>* , ResourceHandle_t);
	/* ../public/resourcesystem/stronghandle.h:798 */
	bool operator==(const CStrongHandle<InfoForResourceTypeIAnimationGraph>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:805 */
	bool operator==(const CStrongHandle<InfoForResourceTypeIAnimationGraph>* , const CStrongHandle<InfoForResourceTypeIAnimationGraph>& );
	/* ../public/resourcesystem/stronghandle.h:812 */
	bool operator==(const CStrongHandle<InfoForResourceTypeIAnimationGraph>* , const CWeakHandle<InfoForResourceTypeIAnimationGraph>& );
	/* ../public/resourcesystem/stronghandle.h:819 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeIAnimationGraph>* , ResourceHandle_t);
	/* ../public/resourcesystem/stronghandle.h:826 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeIAnimationGraph>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:833 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeIAnimationGraph>* , const CStrongHandle<InfoForResourceTypeIAnimationGraph>& );
	/* ../public/resourcesystem/stronghandle.h:840 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeIAnimationGraph>* , const CWeakHandle<InfoForResourceTypeIAnimationGraph>& );
	/* ../public/resourcesystem/stronghandle.h:179 */
	bool operator!(const CStrongHandle<InfoForResourceTypeIAnimationGraph>* );
	/* ../public/resourcesystem/stronghandle.h:769 */
	int GetRefCount(const CStrongHandle<InfoForResourceTypeIAnimationGraph>* );
	/* ../public/resourcesystem/stronghandle.h:780 */
	int GetReloadCounter(const CStrongHandle<InfoForResourceTypeIAnimationGraph>* );
	/* ../public/resourcesystem/stronghandle.h:895 */
	void GetResourceName(const CStrongHandle<InfoForResourceTypeIAnimationGraph>* , CBufferString* , bool);
	/* ../public/resourcesystem/stronghandle.h:904 */
	void GetResourceName(const CStrongHandle<InfoForResourceTypeIAnimationGraph>* , CResourceName* );
	/* ../public/resourcesystem/stronghandle.h:428 */
	ResourceType_t GetResourceType(void);
	/* ../public/resourcesystem/stronghandle.h:683 */
	void Move(CStrongHandle<InfoForResourceTypeIAnimationGraph>* , CStrongHandle<InfoForResourceTypeIAnimationGraph>& );
private:
	/* ../public/resourcesystem/stronghandle.h:201 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeIAnimationGraph>* , const CStrongHandle<InfoForResourceTypeIAnimationGraph>& );
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeIAnimationGraph> *); /* linkage=_ZN13CStrongHandleI34InfoForResourceTypeIAnimationGraphEC4Ev */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeIAnimationGraph> *, ResourceHandleTyped_t); /* linkage=_ZN13CStrongHandleI34InfoForResourceTypeIAnimationGraphEC4EPK17ResourceBinding_tIS0_E */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeIAnimationGraph> *, class ResourceId_t); /* linkage=_ZN13CStrongHandleI34InfoForResourceTypeIAnimationGraphEC4E12ResourceId_t */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeIAnimationGraph> *, const char  *); /* linkage=_ZN13CStrongHandleI34InfoForResourceTypeIAnimationGraphEC4EPKc */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeIAnimationGraph> *, class CStrongHandle<InfoForResourceTypeIAnimationGraph> &); /* linkage=_ZN13CStrongHandleI34InfoForResourceTypeIAnimationGraphEC4EOS1_ */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeIAnimationGraph> *, const class CWeakHandle<InfoForResourceTypeIAnimationGraph>  &); /* linkage=_ZN13CStrongHandleI34InfoForResourceTypeIAnimationGraphEC4ERK11CWeakHandleIS0_E */
	void ~CStrongHandle(class CStrongHandle<InfoForResourceTypeIAnimationGraph> *); /* linkage=_ZN13CStrongHandleI34InfoForResourceTypeIAnimationGraphED4Ev */
	/* <136af5a> ../public/resourcesystem/stronghandle.h:547 */
	void Init(class CStrongHandle<InfoForResourceTypeIAnimationGraph> *, ResourceHandleTyped_t); /* linkage=_ZN13CStrongHandleI34InfoForResourceTypeIAnimationGraphE4InitEPK17ResourceBinding_tIS0_E */
	void Init(class CStrongHandle<InfoForResourceTypeIAnimationGraph> *, class ResourceId_t); /* linkage=_ZN13CStrongHandleI34InfoForResourceTypeIAnimationGraphE4InitE12ResourceId_t */
	void Init(class CStrongHandle<InfoForResourceTypeIAnimationGraph> *, const class CResourceName  &); /* linkage=_ZN13CStrongHandleI34InfoForResourceTypeIAnimationGraphE4InitERK13CResourceName */
	void Init(class CStrongHandle<InfoForResourceTypeIAnimationGraph> *, const class CWeakHandle<InfoForResourceTypeIAnimationGraph>  &); /* linkage=_ZN13CStrongHandleI34InfoForResourceTypeIAnimationGraphE4InitERK11CWeakHandleIS0_E */
	void Init(class CStrongHandle<InfoForResourceTypeIAnimationGraph> *, const class CStrongHandle<InfoForResourceTypeIAnimationGraph>  &); /* linkage=_ZN13CStrongHandleI34InfoForResourceTypeIAnimationGraphE4InitERKS1_ */
	void Shutdown(class CStrongHandle<InfoForResourceTypeIAnimationGraph> *); /* linkage=_ZN13CStrongHandleI34InfoForResourceTypeIAnimationGraphE8ShutdownEv */
	class CStrongHandle<InfoForResourceTypeIAnimationGraph> & operator=(class CStrongHandle<InfoForResourceTypeIAnimationGraph> *, ResourceHandleTyped_t); /* linkage=_ZN13CStrongHandleI34InfoForResourceTypeIAnimationGraphEaSEPK17ResourceBinding_tIS0_E */
	class CStrongHandle<InfoForResourceTypeIAnimationGraph> & operator=(class CStrongHandle<InfoForResourceTypeIAnimationGraph> *, const class CStrongHandle<InfoForResourceTypeIAnimationGraph>  &); /* linkage=_ZN13CStrongHandleI34InfoForResourceTypeIAnimationGraphEaSERKS1_ */
	class CStrongHandle<InfoForResourceTypeIAnimationGraph> & operator=(class CStrongHandle<InfoForResourceTypeIAnimationGraph> *, const class CWeakHandle<InfoForResourceTypeIAnimationGraph>  &); /* linkage=_ZN13CStrongHandleI34InfoForResourceTypeIAnimationGraphEaSERK11CWeakHandleIS0_E */
	bool HasHandle(const class CStrongHandle<InfoForResourceTypeIAnimationGraph>  *); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeIAnimationGraphE9HasHandleEv */
	bool HasIdentity(const class CStrongHandle<InfoForResourceTypeIAnimationGraph>  *); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeIAnimationGraphE11HasIdentityEv */
	bool HasData(const class CStrongHandle<InfoForResourceTypeIAnimationGraph>  *); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeIAnimationGraphE7HasDataEv */
	bool IsLoaded(const class CStrongHandle<InfoForResourceTypeIAnimationGraph>  *); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeIAnimationGraphE8IsLoadedEv */
	bool IsError(const class CStrongHandle<InfoForResourceTypeIAnimationGraph>  *); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeIAnimationGraphE7IsErrorEv */
	const RuntimeClass_t  * operator const ResourceHandleInfo_t<InfoForResourceTypeIAnimationGraph>::RuntimeClass_t*(const class CStrongHandle<InfoForResourceTypeIAnimationGraph>  *); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeIAnimationGraphEcvPK15IAnimationGraphEv */
	const RuntimeClass_t  * operator->(const class CStrongHandle<InfoForResourceTypeIAnimationGraph>  *); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeIAnimationGraphEptEv */
	ResourceHandleTyped_t operator CStrongHandle<InfoForResourceTypeIAnimationGraph>::ResourceHandleTyped_t(const class CStrongHandle<InfoForResourceTypeIAnimationGraph>  *); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeIAnimationGraphEcvPK17ResourceBinding_tIS0_EEv */
	ResourceHandle_t operator ResourceHandle_t(const class CStrongHandle<InfoForResourceTypeIAnimationGraph>  *); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeIAnimationGraphEcvPK21ResourceBindingBase_tEv */
	class CWeakHandle<InfoForResourceTypeIAnimationGraph> operator CWeakHandle<InfoForResourceTypeIAnimationGraph>(const class CStrongHandle<InfoForResourceTypeIAnimationGraph>  *); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeIAnimationGraphEcv11CWeakHandleIS0_EEv */
	const class CWeakHandle<InfoForResourceTypeIAnimationGraph>  GetHandle(const class CStrongHandle<InfoForResourceTypeIAnimationGraph>  *); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeIAnimationGraphE9GetHandleEv */
	const class ResourceBinding_t<InfoForResourceTypeIAnimationGraph>  * GetBinding(const class CStrongHandle<InfoForResourceTypeIAnimationGraph>  *); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeIAnimationGraphE10GetBindingEv */
	const RuntimeClass_t  * GetData(const class CStrongHandle<InfoForResourceTypeIAnimationGraph>  *); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeIAnimationGraphE7GetDataEv */
	bool operator==(const class CStrongHandle<InfoForResourceTypeIAnimationGraph>  *, ResourceHandle_t); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeIAnimationGraphEeqEPK21ResourceBindingBase_t */
	bool operator==(const class CStrongHandle<InfoForResourceTypeIAnimationGraph>  *, ResourceHandleTyped_t); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeIAnimationGraphEeqEPK17ResourceBinding_tIS0_E */
	bool operator==(const class CStrongHandle<InfoForResourceTypeIAnimationGraph>  *, const class CStrongHandle<InfoForResourceTypeIAnimationGraph>  &); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeIAnimationGraphEeqERKS1_ */
	bool operator==(const class CStrongHandle<InfoForResourceTypeIAnimationGraph>  *, const class CWeakHandle<InfoForResourceTypeIAnimationGraph>  &); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeIAnimationGraphEeqERK11CWeakHandleIS0_E */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeIAnimationGraph>  *, ResourceHandle_t); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeIAnimationGraphEneEPK21ResourceBindingBase_t */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeIAnimationGraph>  *, ResourceHandleTyped_t); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeIAnimationGraphEneEPK17ResourceBinding_tIS0_E */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeIAnimationGraph>  *, const class CStrongHandle<InfoForResourceTypeIAnimationGraph>  &); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeIAnimationGraphEneERKS1_ */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeIAnimationGraph>  *, const class CWeakHandle<InfoForResourceTypeIAnimationGraph>  &); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeIAnimationGraphEneERK11CWeakHandleIS0_E */
	bool operator!(const class CStrongHandle<InfoForResourceTypeIAnimationGraph>  *); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeIAnimationGraphEntEv */
	int GetRefCount(const class CStrongHandle<InfoForResourceTypeIAnimationGraph>  *); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeIAnimationGraphE11GetRefCountEv */
	int GetReloadCounter(const class CStrongHandle<InfoForResourceTypeIAnimationGraph>  *); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeIAnimationGraphE16GetReloadCounterEv */
	void GetResourceName(const class CStrongHandle<InfoForResourceTypeIAnimationGraph>  *, class CBufferString *, bool); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeIAnimationGraphE15GetResourceNameEP13CBufferStringb */
	void GetResourceName(const class CStrongHandle<InfoForResourceTypeIAnimationGraph>  *, class CResourceName *); /* linkage=_ZNK13CStrongHandleI34InfoForResourceTypeIAnimationGraphE15GetResourceNameEP13CResourceName */
	ResourceType_t GetResourceType(void); /* linkage=_ZN13CStrongHandleI34InfoForResourceTypeIAnimationGraphE15GetResourceTypeEv */
	void Move(class CStrongHandle<InfoForResourceTypeIAnimationGraph> *, class CStrongHandle<InfoForResourceTypeIAnimationGraph> &); /* linkage=_ZN13CStrongHandleI34InfoForResourceTypeIAnimationGraphE4MoveEOS1_ */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeIAnimationGraph> *, const class CStrongHandle<InfoForResourceTypeIAnimationGraph>  &); /* linkage=_ZN13CStrongHandleI34InfoForResourceTypeIAnimationGraphEC4ERKS1_ */
};

// <01154475> ../public/resourcesystem/stronghandle.h:87
// member functions: 90
// member variable: 1
// class size: 8
class CStrongHandle<InfoForResourceTypeCVfx> : public CStrongHandleBase {
public:
	/* class CStrongHandleBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcesystem/stronghandle.h:438 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCVfx>* );
	/* ../public/resourcesystem/stronghandle.h:459 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCVfx>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:90 */
	typedef const class ResourceBinding_t<InfoForResourceTypeCVfx> * ResourceHandleTyped_t;
	/* ../public/resourcesystem/stronghandle.h:451 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCVfx>* , ResourceId_t);
	/* ../public/resourcesystem/stronghandle.h:444 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCVfx>* , const char* );
	/* ../public/resourcesystem/stronghandle.h:466 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCVfx>* , CStrongHandle<InfoForResourceTypeCVfx>& );
	/* ../public/resourcesystem/stronghandle.h:473 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCVfx>* , const CWeakHandle<InfoForResourceTypeCVfx>& );
	/* ../public/resourcesystem/stronghandle.h:480 */
	void ~CStrongHandle(CStrongHandle<InfoForResourceTypeCVfx>* );
	/* ../public/resourcesystem/stronghandle.h:547 */
	void Init(CStrongHandle<InfoForResourceTypeCVfx>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:490 */
	void Init(CStrongHandle<InfoForResourceTypeCVfx>* , ResourceId_t);
	/* ../public/resourcesystem/stronghandle.h:518 */
	void Init(CStrongHandle<InfoForResourceTypeCVfx>* , const CResourceName& );
	/* ../public/resourcesystem/stronghandle.h:575 */
	void Init(CStrongHandle<InfoForResourceTypeCVfx>* , const CWeakHandle<InfoForResourceTypeCVfx>& );
	/* ../public/resourcesystem/stronghandle.h:581 */
	void Init(CStrongHandle<InfoForResourceTypeCVfx>* , const CStrongHandle<InfoForResourceTypeCVfx>& );
	/* ../public/resourcesystem/stronghandle.h:609 */
	void Shutdown(CStrongHandle<InfoForResourceTypeCVfx>* );
	/* ../public/resourcesystem/stronghandle.h:657 */
	CStrongHandle<InfoForResourceTypeCVfx>& operator=(CStrongHandle<InfoForResourceTypeCVfx>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:664 */
	CStrongHandle<InfoForResourceTypeCVfx>& operator=(CStrongHandle<InfoForResourceTypeCVfx>* , const CStrongHandle<InfoForResourceTypeCVfx>& );
	/* ../public/resourcesystem/stronghandle.h:671 */
	CStrongHandle<InfoForResourceTypeCVfx>& operator=(CStrongHandle<InfoForResourceTypeCVfx>* , const CWeakHandle<InfoForResourceTypeCVfx>& );
	/* ../public/resourcesystem/stronghandle.h:851 */
	bool HasHandle(const CStrongHandle<InfoForResourceTypeCVfx>* );
	/* ../public/resourcesystem/stronghandle.h:857 */
	bool HasIdentity(const CStrongHandle<InfoForResourceTypeCVfx>* );
	/* ../public/resourcesystem/stronghandle.h:867 */
	bool HasData(const CStrongHandle<InfoForResourceTypeCVfx>* );
	/* ../public/resourcesystem/stronghandle.h:877 */
	bool IsLoaded(const CStrongHandle<InfoForResourceTypeCVfx>* );
	/* ../public/resourcesystem/stronghandle.h:887 */
	bool IsError(const CStrongHandle<InfoForResourceTypeCVfx>* );
	/* ../public/resourcesystem/stronghandle.h:731 */
	const RuntimeClass_t* operator const ResourceHandleInfo_t<InfoForResourceTypeCVfx>::RuntimeClass_t*(const CStrongHandle<InfoForResourceTypeCVfx>* );
	/* ../public/resourcesystem/stronghandle.h:738 */
	const RuntimeClass_t* operator->(const CStrongHandle<InfoForResourceTypeCVfx>* );
	/* ../public/resourcesystem/stronghandle.h:745 */
	ResourceHandleTyped_t operator CStrongHandle<InfoForResourceTypeCVfx>::ResourceHandleTyped_t(const CStrongHandle<InfoForResourceTypeCVfx>* );
	/* ../public/resourcesystem/stronghandle.h:758 */
	ResourceHandle_t operator ResourceHandle_t(const CStrongHandle<InfoForResourceTypeCVfx>* );
	/* ../public/resourcesystem/stronghandle.h:752 */
	CWeakHandle<InfoForResourceTypeCVfx> operator CWeakHandle<InfoForResourceTypeCVfx>(const CStrongHandle<InfoForResourceTypeCVfx>* );
	/* ../public/resourcesystem/stronghandle.h:708 */
	const CWeakHandle<InfoForResourceTypeCVfx> GetHandle(const CStrongHandle<InfoForResourceTypeCVfx>* );
	/* ../public/resourcesystem/stronghandle.h:716 */
	const ResourceBinding_t<InfoForResourceTypeCVfx>* GetBinding(const CStrongHandle<InfoForResourceTypeCVfx>* );
	/* ../public/resourcesystem/stronghandle.h:724 */
	const RuntimeClass_t* GetData(const CStrongHandle<InfoForResourceTypeCVfx>* );
	/* ../public/resourcesystem/stronghandle.h:791 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCVfx>* , ResourceHandle_t);
	/* ../public/resourcesystem/stronghandle.h:798 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCVfx>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:805 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCVfx>* , const CStrongHandle<InfoForResourceTypeCVfx>& );
	/* ../public/resourcesystem/stronghandle.h:812 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCVfx>* , const CWeakHandle<InfoForResourceTypeCVfx>& );
	/* ../public/resourcesystem/stronghandle.h:819 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCVfx>* , ResourceHandle_t);
	/* ../public/resourcesystem/stronghandle.h:826 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCVfx>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:833 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCVfx>* , const CStrongHandle<InfoForResourceTypeCVfx>& );
	/* ../public/resourcesystem/stronghandle.h:840 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCVfx>* , const CWeakHandle<InfoForResourceTypeCVfx>& );
	/* ../public/resourcesystem/stronghandle.h:179 */
	bool operator!(const CStrongHandle<InfoForResourceTypeCVfx>* );
	/* ../public/resourcesystem/stronghandle.h:769 */
	int GetRefCount(const CStrongHandle<InfoForResourceTypeCVfx>* );
	/* ../public/resourcesystem/stronghandle.h:780 */
	int GetReloadCounter(const CStrongHandle<InfoForResourceTypeCVfx>* );
	/* ../public/resourcesystem/stronghandle.h:895 */
	void GetResourceName(const CStrongHandle<InfoForResourceTypeCVfx>* , CBufferString* , bool);
	/* ../public/resourcesystem/stronghandle.h:904 */
	void GetResourceName(const CStrongHandle<InfoForResourceTypeCVfx>* , CResourceName* );
	/* ../public/resourcesystem/stronghandle.h:428 */
	ResourceType_t GetResourceType(void);
	/* ../public/resourcesystem/stronghandle.h:683 */
	void Move(CStrongHandle<InfoForResourceTypeCVfx>* , CStrongHandle<InfoForResourceTypeCVfx>& );
private:
	/* ../public/resourcesystem/stronghandle.h:201 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCVfx>* , const CStrongHandle<InfoForResourceTypeCVfx>& );
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCVfx> *); /* linkage=_ZN13CStrongHandleI23InfoForResourceTypeCVfxEC4Ev */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCVfx> *, ResourceHandleTyped_t); /* linkage=_ZN13CStrongHandleI23InfoForResourceTypeCVfxEC4EPK17ResourceBinding_tIS0_E */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCVfx> *, class ResourceId_t); /* linkage=_ZN13CStrongHandleI23InfoForResourceTypeCVfxEC4E12ResourceId_t */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCVfx> *, const char  *); /* linkage=_ZN13CStrongHandleI23InfoForResourceTypeCVfxEC4EPKc */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCVfx> *, class CStrongHandle<InfoForResourceTypeCVfx> &); /* linkage=_ZN13CStrongHandleI23InfoForResourceTypeCVfxEC4EOS1_ */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCVfx> *, const class CWeakHandle<InfoForResourceTypeCVfx>  &); /* linkage=_ZN13CStrongHandleI23InfoForResourceTypeCVfxEC4ERK11CWeakHandleIS0_E */
	void ~CStrongHandle(class CStrongHandle<InfoForResourceTypeCVfx> *); /* linkage=_ZN13CStrongHandleI23InfoForResourceTypeCVfxED4Ev */
	/* <136add6> ../public/resourcesystem/stronghandle.h:547 */
	void Init(class CStrongHandle<InfoForResourceTypeCVfx> *, ResourceHandleTyped_t); /* linkage=_ZN13CStrongHandleI23InfoForResourceTypeCVfxE4InitEPK17ResourceBinding_tIS0_E */
	void Init(class CStrongHandle<InfoForResourceTypeCVfx> *, class ResourceId_t); /* linkage=_ZN13CStrongHandleI23InfoForResourceTypeCVfxE4InitE12ResourceId_t */
	void Init(class CStrongHandle<InfoForResourceTypeCVfx> *, const class CResourceName  &); /* linkage=_ZN13CStrongHandleI23InfoForResourceTypeCVfxE4InitERK13CResourceName */
	void Init(class CStrongHandle<InfoForResourceTypeCVfx> *, const class CWeakHandle<InfoForResourceTypeCVfx>  &); /* linkage=_ZN13CStrongHandleI23InfoForResourceTypeCVfxE4InitERK11CWeakHandleIS0_E */
	void Init(class CStrongHandle<InfoForResourceTypeCVfx> *, const class CStrongHandle<InfoForResourceTypeCVfx>  &); /* linkage=_ZN13CStrongHandleI23InfoForResourceTypeCVfxE4InitERKS1_ */
	void Shutdown(class CStrongHandle<InfoForResourceTypeCVfx> *); /* linkage=_ZN13CStrongHandleI23InfoForResourceTypeCVfxE8ShutdownEv */
	class CStrongHandle<InfoForResourceTypeCVfx> & operator=(class CStrongHandle<InfoForResourceTypeCVfx> *, ResourceHandleTyped_t); /* linkage=_ZN13CStrongHandleI23InfoForResourceTypeCVfxEaSEPK17ResourceBinding_tIS0_E */
	class CStrongHandle<InfoForResourceTypeCVfx> & operator=(class CStrongHandle<InfoForResourceTypeCVfx> *, const class CStrongHandle<InfoForResourceTypeCVfx>  &); /* linkage=_ZN13CStrongHandleI23InfoForResourceTypeCVfxEaSERKS1_ */
	class CStrongHandle<InfoForResourceTypeCVfx> & operator=(class CStrongHandle<InfoForResourceTypeCVfx> *, const class CWeakHandle<InfoForResourceTypeCVfx>  &); /* linkage=_ZN13CStrongHandleI23InfoForResourceTypeCVfxEaSERK11CWeakHandleIS0_E */
	bool HasHandle(const class CStrongHandle<InfoForResourceTypeCVfx>  *); /* linkage=_ZNK13CStrongHandleI23InfoForResourceTypeCVfxE9HasHandleEv */
	bool HasIdentity(const class CStrongHandle<InfoForResourceTypeCVfx>  *); /* linkage=_ZNK13CStrongHandleI23InfoForResourceTypeCVfxE11HasIdentityEv */
	bool HasData(const class CStrongHandle<InfoForResourceTypeCVfx>  *); /* linkage=_ZNK13CStrongHandleI23InfoForResourceTypeCVfxE7HasDataEv */
	bool IsLoaded(const class CStrongHandle<InfoForResourceTypeCVfx>  *); /* linkage=_ZNK13CStrongHandleI23InfoForResourceTypeCVfxE8IsLoadedEv */
	bool IsError(const class CStrongHandle<InfoForResourceTypeCVfx>  *); /* linkage=_ZNK13CStrongHandleI23InfoForResourceTypeCVfxE7IsErrorEv */
	const RuntimeClass_t  * operator const ResourceHandleInfo_t<InfoForResourceTypeCVfx>::RuntimeClass_t*(const class CStrongHandle<InfoForResourceTypeCVfx>  *); /* linkage=_ZNK13CStrongHandleI23InfoForResourceTypeCVfxEcvPK4CVfxEv */
	const RuntimeClass_t  * operator->(const class CStrongHandle<InfoForResourceTypeCVfx>  *); /* linkage=_ZNK13CStrongHandleI23InfoForResourceTypeCVfxEptEv */
	ResourceHandleTyped_t operator CStrongHandle<InfoForResourceTypeCVfx>::ResourceHandleTyped_t(const class CStrongHandle<InfoForResourceTypeCVfx>  *); /* linkage=_ZNK13CStrongHandleI23InfoForResourceTypeCVfxEcvPK17ResourceBinding_tIS0_EEv */
	ResourceHandle_t operator ResourceHandle_t(const class CStrongHandle<InfoForResourceTypeCVfx>  *); /* linkage=_ZNK13CStrongHandleI23InfoForResourceTypeCVfxEcvPK21ResourceBindingBase_tEv */
	class CWeakHandle<InfoForResourceTypeCVfx> operator CWeakHandle<InfoForResourceTypeCVfx>(const class CStrongHandle<InfoForResourceTypeCVfx>  *); /* linkage=_ZNK13CStrongHandleI23InfoForResourceTypeCVfxEcv11CWeakHandleIS0_EEv */
	const class CWeakHandle<InfoForResourceTypeCVfx>  GetHandle(const class CStrongHandle<InfoForResourceTypeCVfx>  *); /* linkage=_ZNK13CStrongHandleI23InfoForResourceTypeCVfxE9GetHandleEv */
	const class ResourceBinding_t<InfoForResourceTypeCVfx>  * GetBinding(const class CStrongHandle<InfoForResourceTypeCVfx>  *); /* linkage=_ZNK13CStrongHandleI23InfoForResourceTypeCVfxE10GetBindingEv */
	const RuntimeClass_t  * GetData(const class CStrongHandle<InfoForResourceTypeCVfx>  *); /* linkage=_ZNK13CStrongHandleI23InfoForResourceTypeCVfxE7GetDataEv */
	bool operator==(const class CStrongHandle<InfoForResourceTypeCVfx>  *, ResourceHandle_t); /* linkage=_ZNK13CStrongHandleI23InfoForResourceTypeCVfxEeqEPK21ResourceBindingBase_t */
	bool operator==(const class CStrongHandle<InfoForResourceTypeCVfx>  *, ResourceHandleTyped_t); /* linkage=_ZNK13CStrongHandleI23InfoForResourceTypeCVfxEeqEPK17ResourceBinding_tIS0_E */
	bool operator==(const class CStrongHandle<InfoForResourceTypeCVfx>  *, const class CStrongHandle<InfoForResourceTypeCVfx>  &); /* linkage=_ZNK13CStrongHandleI23InfoForResourceTypeCVfxEeqERKS1_ */
	bool operator==(const class CStrongHandle<InfoForResourceTypeCVfx>  *, const class CWeakHandle<InfoForResourceTypeCVfx>  &); /* linkage=_ZNK13CStrongHandleI23InfoForResourceTypeCVfxEeqERK11CWeakHandleIS0_E */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeCVfx>  *, ResourceHandle_t); /* linkage=_ZNK13CStrongHandleI23InfoForResourceTypeCVfxEneEPK21ResourceBindingBase_t */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeCVfx>  *, ResourceHandleTyped_t); /* linkage=_ZNK13CStrongHandleI23InfoForResourceTypeCVfxEneEPK17ResourceBinding_tIS0_E */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeCVfx>  *, const class CStrongHandle<InfoForResourceTypeCVfx>  &); /* linkage=_ZNK13CStrongHandleI23InfoForResourceTypeCVfxEneERKS1_ */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeCVfx>  *, const class CWeakHandle<InfoForResourceTypeCVfx>  &); /* linkage=_ZNK13CStrongHandleI23InfoForResourceTypeCVfxEneERK11CWeakHandleIS0_E */
	bool operator!(const class CStrongHandle<InfoForResourceTypeCVfx>  *); /* linkage=_ZNK13CStrongHandleI23InfoForResourceTypeCVfxEntEv */
	int GetRefCount(const class CStrongHandle<InfoForResourceTypeCVfx>  *); /* linkage=_ZNK13CStrongHandleI23InfoForResourceTypeCVfxE11GetRefCountEv */
	int GetReloadCounter(const class CStrongHandle<InfoForResourceTypeCVfx>  *); /* linkage=_ZNK13CStrongHandleI23InfoForResourceTypeCVfxE16GetReloadCounterEv */
	void GetResourceName(const class CStrongHandle<InfoForResourceTypeCVfx>  *, class CBufferString *, bool); /* linkage=_ZNK13CStrongHandleI23InfoForResourceTypeCVfxE15GetResourceNameEP13CBufferStringb */
	void GetResourceName(const class CStrongHandle<InfoForResourceTypeCVfx>  *, class CResourceName *); /* linkage=_ZNK13CStrongHandleI23InfoForResourceTypeCVfxE15GetResourceNameEP13CResourceName */
	ResourceType_t GetResourceType(void); /* linkage=_ZN13CStrongHandleI23InfoForResourceTypeCVfxE15GetResourceTypeEv */
	void Move(class CStrongHandle<InfoForResourceTypeCVfx> *, class CStrongHandle<InfoForResourceTypeCVfx> &); /* linkage=_ZN13CStrongHandleI23InfoForResourceTypeCVfxE4MoveEOS1_ */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCVfx> *, const class CStrongHandle<InfoForResourceTypeCVfx>  &); /* linkage=_ZN13CStrongHandleI23InfoForResourceTypeCVfxEC4ERKS1_ */
};

// <017BC3B8> ../public/resourcesystem/stronghandle.h:87
// member functions: 90
// member variable: 1
// class size: 8
class CStrongHandle<InfoForResourceTypeCSequenceGroupData> : public CStrongHandleBase {
public:
	/* class CStrongHandleBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcesystem/stronghandle.h:438 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCSequenceGroupData>* );
	/* ../public/resourcesystem/stronghandle.h:459 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCSequenceGroupData>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:90 */
	typedef const class ResourceBinding_t<InfoForResourceTypeCSequenceGroupData> * ResourceHandleTyped_t;
	/* ../public/resourcesystem/stronghandle.h:451 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCSequenceGroupData>* , ResourceId_t);
	/* ../public/resourcesystem/stronghandle.h:444 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCSequenceGroupData>* , const char* );
	/* ../public/resourcesystem/stronghandle.h:466 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCSequenceGroupData>* , CStrongHandle<InfoForResourceTypeCSequenceGroupData>& );
	/* ../public/resourcesystem/stronghandle.h:473 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCSequenceGroupData>* , const CWeakHandle<InfoForResourceTypeCSequenceGroupData>& );
	/* ../public/resourcesystem/stronghandle.h:480 */
	void ~CStrongHandle(CStrongHandle<InfoForResourceTypeCSequenceGroupData>* );
	/* ../public/resourcesystem/stronghandle.h:547 */
	void Init(CStrongHandle<InfoForResourceTypeCSequenceGroupData>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:490 */
	void Init(CStrongHandle<InfoForResourceTypeCSequenceGroupData>* , ResourceId_t);
	/* ../public/resourcesystem/stronghandle.h:518 */
	void Init(CStrongHandle<InfoForResourceTypeCSequenceGroupData>* , const CResourceName& );
	/* ../public/resourcesystem/stronghandle.h:575 */
	void Init(CStrongHandle<InfoForResourceTypeCSequenceGroupData>* , const CWeakHandle<InfoForResourceTypeCSequenceGroupData>& );
	/* ../public/resourcesystem/stronghandle.h:581 */
	void Init(CStrongHandle<InfoForResourceTypeCSequenceGroupData>* , const CStrongHandle<InfoForResourceTypeCSequenceGroupData>& );
	/* ../public/resourcesystem/stronghandle.h:609 */
	void Shutdown(CStrongHandle<InfoForResourceTypeCSequenceGroupData>* );
	/* ../public/resourcesystem/stronghandle.h:657 */
	CStrongHandle<InfoForResourceTypeCSequenceGroupData>& operator=(CStrongHandle<InfoForResourceTypeCSequenceGroupData>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:664 */
	CStrongHandle<InfoForResourceTypeCSequenceGroupData>& operator=(CStrongHandle<InfoForResourceTypeCSequenceGroupData>* , const CStrongHandle<InfoForResourceTypeCSequenceGroupData>& );
	/* ../public/resourcesystem/stronghandle.h:671 */
	CStrongHandle<InfoForResourceTypeCSequenceGroupData>& operator=(CStrongHandle<InfoForResourceTypeCSequenceGroupData>* , const CWeakHandle<InfoForResourceTypeCSequenceGroupData>& );
	/* ../public/resourcesystem/stronghandle.h:851 */
	bool HasHandle(const CStrongHandle<InfoForResourceTypeCSequenceGroupData>* );
	/* ../public/resourcesystem/stronghandle.h:857 */
	bool HasIdentity(const CStrongHandle<InfoForResourceTypeCSequenceGroupData>* );
	/* ../public/resourcesystem/stronghandle.h:867 */
	bool HasData(const CStrongHandle<InfoForResourceTypeCSequenceGroupData>* );
	/* ../public/resourcesystem/stronghandle.h:877 */
	bool IsLoaded(const CStrongHandle<InfoForResourceTypeCSequenceGroupData>* );
	/* ../public/resourcesystem/stronghandle.h:887 */
	bool IsError(const CStrongHandle<InfoForResourceTypeCSequenceGroupData>* );
	/* ../public/resourcesystem/stronghandle.h:731 */
	const RuntimeClass_t* operator const ResourceHandleInfo_t<InfoForResourceTypeCSequenceGroupData>::RuntimeClass_t*(const CStrongHandle<InfoForResourceTypeCSequenceGroupData>* );
	/* ../public/resourcesystem/stronghandle.h:738 */
	const RuntimeClass_t* operator->(const CStrongHandle<InfoForResourceTypeCSequenceGroupData>* );
	/* ../public/resourcesystem/stronghandle.h:745 */
	ResourceHandleTyped_t operator CStrongHandle<InfoForResourceTypeCSequenceGroupData>::ResourceHandleTyped_t(const CStrongHandle<InfoForResourceTypeCSequenceGroupData>* );
	/* ../public/resourcesystem/stronghandle.h:758 */
	ResourceHandle_t operator ResourceHandle_t(const CStrongHandle<InfoForResourceTypeCSequenceGroupData>* );
	/* ../public/resourcesystem/stronghandle.h:752 */
	CWeakHandle<InfoForResourceTypeCSequenceGroupData> operator CWeakHandle<InfoForResourceTypeCSequenceGroupData>(const CStrongHandle<InfoForResourceTypeCSequenceGroupData>* );
	/* ../public/resourcesystem/stronghandle.h:708 */
	const CWeakHandle<InfoForResourceTypeCSequenceGroupData> GetHandle(const CStrongHandle<InfoForResourceTypeCSequenceGroupData>* );
	/* ../public/resourcesystem/stronghandle.h:716 */
	const ResourceBinding_t<InfoForResourceTypeCSequenceGroupData>* GetBinding(const CStrongHandle<InfoForResourceTypeCSequenceGroupData>* );
	/* ../public/resourcesystem/stronghandle.h:724 */
	const RuntimeClass_t* GetData(const CStrongHandle<InfoForResourceTypeCSequenceGroupData>* );
	/* ../public/resourcesystem/stronghandle.h:791 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCSequenceGroupData>* , ResourceHandle_t);
	/* ../public/resourcesystem/stronghandle.h:798 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCSequenceGroupData>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:805 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCSequenceGroupData>* , const CStrongHandle<InfoForResourceTypeCSequenceGroupData>& );
	/* ../public/resourcesystem/stronghandle.h:812 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCSequenceGroupData>* , const CWeakHandle<InfoForResourceTypeCSequenceGroupData>& );
	/* ../public/resourcesystem/stronghandle.h:819 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCSequenceGroupData>* , ResourceHandle_t);
	/* ../public/resourcesystem/stronghandle.h:826 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCSequenceGroupData>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:833 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCSequenceGroupData>* , const CStrongHandle<InfoForResourceTypeCSequenceGroupData>& );
	/* ../public/resourcesystem/stronghandle.h:840 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCSequenceGroupData>* , const CWeakHandle<InfoForResourceTypeCSequenceGroupData>& );
	/* ../public/resourcesystem/stronghandle.h:179 */
	bool operator!(const CStrongHandle<InfoForResourceTypeCSequenceGroupData>* );
	/* ../public/resourcesystem/stronghandle.h:769 */
	int GetRefCount(const CStrongHandle<InfoForResourceTypeCSequenceGroupData>* );
	/* ../public/resourcesystem/stronghandle.h:780 */
	int GetReloadCounter(const CStrongHandle<InfoForResourceTypeCSequenceGroupData>* );
	/* ../public/resourcesystem/stronghandle.h:895 */
	void GetResourceName(const CStrongHandle<InfoForResourceTypeCSequenceGroupData>* , CBufferString* , bool);
	/* ../public/resourcesystem/stronghandle.h:904 */
	void GetResourceName(const CStrongHandle<InfoForResourceTypeCSequenceGroupData>* , CResourceName* );
	/* ../public/resourcesystem/stronghandle.h:428 */
	ResourceType_t GetResourceType(void);
	/* ../public/resourcesystem/stronghandle.h:683 */
	void Move(CStrongHandle<InfoForResourceTypeCSequenceGroupData>* , CStrongHandle<InfoForResourceTypeCSequenceGroupData>& );
private:
	/* ../public/resourcesystem/stronghandle.h:201 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCSequenceGroupData>* , const CStrongHandle<InfoForResourceTypeCSequenceGroupData>& );
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCSequenceGroupData> *); /* linkage=_ZN13CStrongHandleI37InfoForResourceTypeCSequenceGroupDataEC4Ev */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCSequenceGroupData> *, ResourceHandleTyped_t); /* linkage=_ZN13CStrongHandleI37InfoForResourceTypeCSequenceGroupDataEC4EPK17ResourceBinding_tIS0_E */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCSequenceGroupData> *, class ResourceId_t); /* linkage=_ZN13CStrongHandleI37InfoForResourceTypeCSequenceGroupDataEC4E12ResourceId_t */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCSequenceGroupData> *, const char  *); /* linkage=_ZN13CStrongHandleI37InfoForResourceTypeCSequenceGroupDataEC4EPKc */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCSequenceGroupData> *, class CStrongHandle<InfoForResourceTypeCSequenceGroupData> &); /* linkage=_ZN13CStrongHandleI37InfoForResourceTypeCSequenceGroupDataEC4EOS1_ */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCSequenceGroupData> *, const class CWeakHandle<InfoForResourceTypeCSequenceGroupData>  &); /* linkage=_ZN13CStrongHandleI37InfoForResourceTypeCSequenceGroupDataEC4ERK11CWeakHandleIS0_E */
	void ~CStrongHandle(class CStrongHandle<InfoForResourceTypeCSequenceGroupData> *); /* linkage=_ZN13CStrongHandleI37InfoForResourceTypeCSequenceGroupDataED4Ev */
	void Init(class CStrongHandle<InfoForResourceTypeCSequenceGroupData> *, ResourceHandleTyped_t); /* linkage=_ZN13CStrongHandleI37InfoForResourceTypeCSequenceGroupDataE4InitEPK17ResourceBinding_tIS0_E */
	void Init(class CStrongHandle<InfoForResourceTypeCSequenceGroupData> *, class ResourceId_t); /* linkage=_ZN13CStrongHandleI37InfoForResourceTypeCSequenceGroupDataE4InitE12ResourceId_t */
	void Init(class CStrongHandle<InfoForResourceTypeCSequenceGroupData> *, const class CResourceName  &); /* linkage=_ZN13CStrongHandleI37InfoForResourceTypeCSequenceGroupDataE4InitERK13CResourceName */
	void Init(class CStrongHandle<InfoForResourceTypeCSequenceGroupData> *, const class CWeakHandle<InfoForResourceTypeCSequenceGroupData>  &); /* linkage=_ZN13CStrongHandleI37InfoForResourceTypeCSequenceGroupDataE4InitERK11CWeakHandleIS0_E */
	void Init(class CStrongHandle<InfoForResourceTypeCSequenceGroupData> *, const class CStrongHandle<InfoForResourceTypeCSequenceGroupData>  &); /* linkage=_ZN13CStrongHandleI37InfoForResourceTypeCSequenceGroupDataE4InitERKS1_ */
	void Shutdown(class CStrongHandle<InfoForResourceTypeCSequenceGroupData> *); /* linkage=_ZN13CStrongHandleI37InfoForResourceTypeCSequenceGroupDataE8ShutdownEv */
	class CStrongHandle<InfoForResourceTypeCSequenceGroupData> & operator=(class CStrongHandle<InfoForResourceTypeCSequenceGroupData> *, ResourceHandleTyped_t); /* linkage=_ZN13CStrongHandleI37InfoForResourceTypeCSequenceGroupDataEaSEPK17ResourceBinding_tIS0_E */
	class CStrongHandle<InfoForResourceTypeCSequenceGroupData> & operator=(class CStrongHandle<InfoForResourceTypeCSequenceGroupData> *, const class CStrongHandle<InfoForResourceTypeCSequenceGroupData>  &); /* linkage=_ZN13CStrongHandleI37InfoForResourceTypeCSequenceGroupDataEaSERKS1_ */
	class CStrongHandle<InfoForResourceTypeCSequenceGroupData> & operator=(class CStrongHandle<InfoForResourceTypeCSequenceGroupData> *, const class CWeakHandle<InfoForResourceTypeCSequenceGroupData>  &); /* linkage=_ZN13CStrongHandleI37InfoForResourceTypeCSequenceGroupDataEaSERK11CWeakHandleIS0_E */
	bool HasHandle(const class CStrongHandle<InfoForResourceTypeCSequenceGroupData>  *); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCSequenceGroupDataE9HasHandleEv */
	bool HasIdentity(const class CStrongHandle<InfoForResourceTypeCSequenceGroupData>  *); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCSequenceGroupDataE11HasIdentityEv */
	bool HasData(const class CStrongHandle<InfoForResourceTypeCSequenceGroupData>  *); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCSequenceGroupDataE7HasDataEv */
	bool IsLoaded(const class CStrongHandle<InfoForResourceTypeCSequenceGroupData>  *); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCSequenceGroupDataE8IsLoadedEv */
	bool IsError(const class CStrongHandle<InfoForResourceTypeCSequenceGroupData>  *); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCSequenceGroupDataE7IsErrorEv */
	const RuntimeClass_t  * operator const ResourceHandleInfo_t<InfoForResourceTypeCSequenceGroupData>::RuntimeClass_t*(const class CStrongHandle<InfoForResourceTypeCSequenceGroupData>  *); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCSequenceGroupDataEcvPK18CSequenceGroupDataEv */
	const RuntimeClass_t  * operator->(const class CStrongHandle<InfoForResourceTypeCSequenceGroupData>  *); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCSequenceGroupDataEptEv */
	ResourceHandleTyped_t operator CStrongHandle<InfoForResourceTypeCSequenceGroupData>::ResourceHandleTyped_t(const class CStrongHandle<InfoForResourceTypeCSequenceGroupData>  *); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCSequenceGroupDataEcvPK17ResourceBinding_tIS0_EEv */
	ResourceHandle_t operator ResourceHandle_t(const class CStrongHandle<InfoForResourceTypeCSequenceGroupData>  *); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCSequenceGroupDataEcvPK21ResourceBindingBase_tEv */
	class CWeakHandle<InfoForResourceTypeCSequenceGroupData> operator CWeakHandle<InfoForResourceTypeCSequenceGroupData>(const class CStrongHandle<InfoForResourceTypeCSequenceGroupData>  *); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCSequenceGroupDataEcv11CWeakHandleIS0_EEv */
	const class CWeakHandle<InfoForResourceTypeCSequenceGroupData>  GetHandle(const class CStrongHandle<InfoForResourceTypeCSequenceGroupData>  *); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCSequenceGroupDataE9GetHandleEv */
	const class ResourceBinding_t<InfoForResourceTypeCSequenceGroupData>  * GetBinding(const class CStrongHandle<InfoForResourceTypeCSequenceGroupData>  *); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCSequenceGroupDataE10GetBindingEv */
	const RuntimeClass_t  * GetData(const class CStrongHandle<InfoForResourceTypeCSequenceGroupData>  *); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCSequenceGroupDataE7GetDataEv */
	bool operator==(const class CStrongHandle<InfoForResourceTypeCSequenceGroupData>  *, ResourceHandle_t); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCSequenceGroupDataEeqEPK21ResourceBindingBase_t */
	bool operator==(const class CStrongHandle<InfoForResourceTypeCSequenceGroupData>  *, ResourceHandleTyped_t); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCSequenceGroupDataEeqEPK17ResourceBinding_tIS0_E */
	bool operator==(const class CStrongHandle<InfoForResourceTypeCSequenceGroupData>  *, const class CStrongHandle<InfoForResourceTypeCSequenceGroupData>  &); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCSequenceGroupDataEeqERKS1_ */
	bool operator==(const class CStrongHandle<InfoForResourceTypeCSequenceGroupData>  *, const class CWeakHandle<InfoForResourceTypeCSequenceGroupData>  &); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCSequenceGroupDataEeqERK11CWeakHandleIS0_E */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeCSequenceGroupData>  *, ResourceHandle_t); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCSequenceGroupDataEneEPK21ResourceBindingBase_t */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeCSequenceGroupData>  *, ResourceHandleTyped_t); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCSequenceGroupDataEneEPK17ResourceBinding_tIS0_E */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeCSequenceGroupData>  *, const class CStrongHandle<InfoForResourceTypeCSequenceGroupData>  &); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCSequenceGroupDataEneERKS1_ */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeCSequenceGroupData>  *, const class CWeakHandle<InfoForResourceTypeCSequenceGroupData>  &); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCSequenceGroupDataEneERK11CWeakHandleIS0_E */
	bool operator!(const class CStrongHandle<InfoForResourceTypeCSequenceGroupData>  *); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCSequenceGroupDataEntEv */
	int GetRefCount(const class CStrongHandle<InfoForResourceTypeCSequenceGroupData>  *); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCSequenceGroupDataE11GetRefCountEv */
	int GetReloadCounter(const class CStrongHandle<InfoForResourceTypeCSequenceGroupData>  *); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCSequenceGroupDataE16GetReloadCounterEv */
	void GetResourceName(const class CStrongHandle<InfoForResourceTypeCSequenceGroupData>  *, class CBufferString *, bool); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCSequenceGroupDataE15GetResourceNameEP13CBufferStringb */
	void GetResourceName(const class CStrongHandle<InfoForResourceTypeCSequenceGroupData>  *, class CResourceName *); /* linkage=_ZNK13CStrongHandleI37InfoForResourceTypeCSequenceGroupDataE15GetResourceNameEP13CResourceName */
	ResourceType_t GetResourceType(void); /* linkage=_ZN13CStrongHandleI37InfoForResourceTypeCSequenceGroupDataE15GetResourceTypeEv */
	void Move(class CStrongHandle<InfoForResourceTypeCSequenceGroupData> *, class CStrongHandle<InfoForResourceTypeCSequenceGroupData> &); /* linkage=_ZN13CStrongHandleI37InfoForResourceTypeCSequenceGroupDataE4MoveEOS1_ */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCSequenceGroupData> *, const class CStrongHandle<InfoForResourceTypeCSequenceGroupData>  &); /* linkage=_ZN13CStrongHandleI37InfoForResourceTypeCSequenceGroupDataEC4ERKS1_ */
};

// <03DD43D1> ../public/resourcesystem/stronghandle.h:87
// member functions: 90
// member variable: 1
// class size: 8
class CStrongHandle<InfoForResourceTypeCAnimData> : public CStrongHandleBase {
public:
	/* class CStrongHandleBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcesystem/stronghandle.h:438 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCAnimData>* );
	/* ../public/resourcesystem/stronghandle.h:459 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCAnimData>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:90 */
	typedef const class ResourceBinding_t<InfoForResourceTypeCAnimData> * ResourceHandleTyped_t;
	/* ../public/resourcesystem/stronghandle.h:451 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCAnimData>* , ResourceId_t);
	/* ../public/resourcesystem/stronghandle.h:444 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCAnimData>* , const char* );
	/* ../public/resourcesystem/stronghandle.h:466 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCAnimData>* , CStrongHandle<InfoForResourceTypeCAnimData>& );
	/* ../public/resourcesystem/stronghandle.h:473 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCAnimData>* , const CWeakHandle<InfoForResourceTypeCAnimData>& );
	/* ../public/resourcesystem/stronghandle.h:480 */
	void ~CStrongHandle(CStrongHandle<InfoForResourceTypeCAnimData>* );
	/* ../public/resourcesystem/stronghandle.h:547 */
	void Init(CStrongHandle<InfoForResourceTypeCAnimData>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:490 */
	void Init(CStrongHandle<InfoForResourceTypeCAnimData>* , ResourceId_t);
	/* ../public/resourcesystem/stronghandle.h:518 */
	void Init(CStrongHandle<InfoForResourceTypeCAnimData>* , const CResourceName& );
	/* ../public/resourcesystem/stronghandle.h:575 */
	void Init(CStrongHandle<InfoForResourceTypeCAnimData>* , const CWeakHandle<InfoForResourceTypeCAnimData>& );
	/* ../public/resourcesystem/stronghandle.h:581 */
	void Init(CStrongHandle<InfoForResourceTypeCAnimData>* , const CStrongHandle<InfoForResourceTypeCAnimData>& );
	/* ../public/resourcesystem/stronghandle.h:609 */
	void Shutdown(CStrongHandle<InfoForResourceTypeCAnimData>* );
	/* ../public/resourcesystem/stronghandle.h:657 */
	CStrongHandle<InfoForResourceTypeCAnimData>& operator=(CStrongHandle<InfoForResourceTypeCAnimData>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:664 */
	CStrongHandle<InfoForResourceTypeCAnimData>& operator=(CStrongHandle<InfoForResourceTypeCAnimData>* , const CStrongHandle<InfoForResourceTypeCAnimData>& );
	/* ../public/resourcesystem/stronghandle.h:671 */
	CStrongHandle<InfoForResourceTypeCAnimData>& operator=(CStrongHandle<InfoForResourceTypeCAnimData>* , const CWeakHandle<InfoForResourceTypeCAnimData>& );
	/* ../public/resourcesystem/stronghandle.h:851 */
	bool HasHandle(const CStrongHandle<InfoForResourceTypeCAnimData>* );
	/* ../public/resourcesystem/stronghandle.h:857 */
	bool HasIdentity(const CStrongHandle<InfoForResourceTypeCAnimData>* );
	/* ../public/resourcesystem/stronghandle.h:867 */
	bool HasData(const CStrongHandle<InfoForResourceTypeCAnimData>* );
	/* ../public/resourcesystem/stronghandle.h:877 */
	bool IsLoaded(const CStrongHandle<InfoForResourceTypeCAnimData>* );
	/* ../public/resourcesystem/stronghandle.h:887 */
	bool IsError(const CStrongHandle<InfoForResourceTypeCAnimData>* );
	/* ../public/resourcesystem/stronghandle.h:731 */
	const RuntimeClass_t* operator const ResourceHandleInfo_t<InfoForResourceTypeCAnimData>::RuntimeClass_t*(const CStrongHandle<InfoForResourceTypeCAnimData>* );
	/* ../public/resourcesystem/stronghandle.h:738 */
	const RuntimeClass_t* operator->(const CStrongHandle<InfoForResourceTypeCAnimData>* );
	/* ../public/resourcesystem/stronghandle.h:745 */
	ResourceHandleTyped_t operator CStrongHandle<InfoForResourceTypeCAnimData>::ResourceHandleTyped_t(const CStrongHandle<InfoForResourceTypeCAnimData>* );
	/* ../public/resourcesystem/stronghandle.h:758 */
	ResourceHandle_t operator ResourceHandle_t(const CStrongHandle<InfoForResourceTypeCAnimData>* );
	/* ../public/resourcesystem/stronghandle.h:752 */
	CWeakHandle<InfoForResourceTypeCAnimData> operator CWeakHandle<InfoForResourceTypeCAnimData>(const CStrongHandle<InfoForResourceTypeCAnimData>* );
	/* ../public/resourcesystem/stronghandle.h:708 */
	const CWeakHandle<InfoForResourceTypeCAnimData> GetHandle(const CStrongHandle<InfoForResourceTypeCAnimData>* );
	/* ../public/resourcesystem/stronghandle.h:716 */
	const ResourceBinding_t<InfoForResourceTypeCAnimData>* GetBinding(const CStrongHandle<InfoForResourceTypeCAnimData>* );
	/* ../public/resourcesystem/stronghandle.h:724 */
	const RuntimeClass_t* GetData(const CStrongHandle<InfoForResourceTypeCAnimData>* );
	/* ../public/resourcesystem/stronghandle.h:791 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCAnimData>* , ResourceHandle_t);
	/* ../public/resourcesystem/stronghandle.h:798 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCAnimData>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:805 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCAnimData>* , const CStrongHandle<InfoForResourceTypeCAnimData>& );
	/* ../public/resourcesystem/stronghandle.h:812 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCAnimData>* , const CWeakHandle<InfoForResourceTypeCAnimData>& );
	/* ../public/resourcesystem/stronghandle.h:819 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCAnimData>* , ResourceHandle_t);
	/* ../public/resourcesystem/stronghandle.h:826 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCAnimData>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:833 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCAnimData>* , const CStrongHandle<InfoForResourceTypeCAnimData>& );
	/* ../public/resourcesystem/stronghandle.h:840 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCAnimData>* , const CWeakHandle<InfoForResourceTypeCAnimData>& );
	/* ../public/resourcesystem/stronghandle.h:179 */
	bool operator!(const CStrongHandle<InfoForResourceTypeCAnimData>* );
	/* ../public/resourcesystem/stronghandle.h:769 */
	int GetRefCount(const CStrongHandle<InfoForResourceTypeCAnimData>* );
	/* ../public/resourcesystem/stronghandle.h:780 */
	int GetReloadCounter(const CStrongHandle<InfoForResourceTypeCAnimData>* );
	/* ../public/resourcesystem/stronghandle.h:895 */
	void GetResourceName(const CStrongHandle<InfoForResourceTypeCAnimData>* , CBufferString* , bool);
	/* ../public/resourcesystem/stronghandle.h:904 */
	void GetResourceName(const CStrongHandle<InfoForResourceTypeCAnimData>* , CResourceName* );
	/* ../public/resourcesystem/stronghandle.h:428 */
	ResourceType_t GetResourceType(void);
	/* ../public/resourcesystem/stronghandle.h:683 */
	void Move(CStrongHandle<InfoForResourceTypeCAnimData>* , CStrongHandle<InfoForResourceTypeCAnimData>& );
private:
	/* ../public/resourcesystem/stronghandle.h:201 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCAnimData>* , const CStrongHandle<InfoForResourceTypeCAnimData>& );
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCAnimData> *); /* linkage=_ZN13CStrongHandleI28InfoForResourceTypeCAnimDataEC4Ev */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCAnimData> *, ResourceHandleTyped_t); /* linkage=_ZN13CStrongHandleI28InfoForResourceTypeCAnimDataEC4EPK17ResourceBinding_tIS0_E */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCAnimData> *, class ResourceId_t); /* linkage=_ZN13CStrongHandleI28InfoForResourceTypeCAnimDataEC4E12ResourceId_t */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCAnimData> *, const char  *); /* linkage=_ZN13CStrongHandleI28InfoForResourceTypeCAnimDataEC4EPKc */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCAnimData> *, class CStrongHandle<InfoForResourceTypeCAnimData> &); /* linkage=_ZN13CStrongHandleI28InfoForResourceTypeCAnimDataEC4EOS1_ */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCAnimData> *, const class CWeakHandle<InfoForResourceTypeCAnimData>  &); /* linkage=_ZN13CStrongHandleI28InfoForResourceTypeCAnimDataEC4ERK11CWeakHandleIS0_E */
	void ~CStrongHandle(class CStrongHandle<InfoForResourceTypeCAnimData> *); /* linkage=_ZN13CStrongHandleI28InfoForResourceTypeCAnimDataED4Ev */
	void Init(class CStrongHandle<InfoForResourceTypeCAnimData> *, ResourceHandleTyped_t); /* linkage=_ZN13CStrongHandleI28InfoForResourceTypeCAnimDataE4InitEPK17ResourceBinding_tIS0_E */
	void Init(class CStrongHandle<InfoForResourceTypeCAnimData> *, class ResourceId_t); /* linkage=_ZN13CStrongHandleI28InfoForResourceTypeCAnimDataE4InitE12ResourceId_t */
	void Init(class CStrongHandle<InfoForResourceTypeCAnimData> *, const class CResourceName  &); /* linkage=_ZN13CStrongHandleI28InfoForResourceTypeCAnimDataE4InitERK13CResourceName */
	void Init(class CStrongHandle<InfoForResourceTypeCAnimData> *, const class CWeakHandle<InfoForResourceTypeCAnimData>  &); /* linkage=_ZN13CStrongHandleI28InfoForResourceTypeCAnimDataE4InitERK11CWeakHandleIS0_E */
	void Init(class CStrongHandle<InfoForResourceTypeCAnimData> *, const class CStrongHandle<InfoForResourceTypeCAnimData>  &); /* linkage=_ZN13CStrongHandleI28InfoForResourceTypeCAnimDataE4InitERKS1_ */
	void Shutdown(class CStrongHandle<InfoForResourceTypeCAnimData> *); /* linkage=_ZN13CStrongHandleI28InfoForResourceTypeCAnimDataE8ShutdownEv */
	class CStrongHandle<InfoForResourceTypeCAnimData> & operator=(class CStrongHandle<InfoForResourceTypeCAnimData> *, ResourceHandleTyped_t); /* linkage=_ZN13CStrongHandleI28InfoForResourceTypeCAnimDataEaSEPK17ResourceBinding_tIS0_E */
	class CStrongHandle<InfoForResourceTypeCAnimData> & operator=(class CStrongHandle<InfoForResourceTypeCAnimData> *, const class CStrongHandle<InfoForResourceTypeCAnimData>  &); /* linkage=_ZN13CStrongHandleI28InfoForResourceTypeCAnimDataEaSERKS1_ */
	class CStrongHandle<InfoForResourceTypeCAnimData> & operator=(class CStrongHandle<InfoForResourceTypeCAnimData> *, const class CWeakHandle<InfoForResourceTypeCAnimData>  &); /* linkage=_ZN13CStrongHandleI28InfoForResourceTypeCAnimDataEaSERK11CWeakHandleIS0_E */
	bool HasHandle(const class CStrongHandle<InfoForResourceTypeCAnimData>  *); /* linkage=_ZNK13CStrongHandleI28InfoForResourceTypeCAnimDataE9HasHandleEv */
	bool HasIdentity(const class CStrongHandle<InfoForResourceTypeCAnimData>  *); /* linkage=_ZNK13CStrongHandleI28InfoForResourceTypeCAnimDataE11HasIdentityEv */
	bool HasData(const class CStrongHandle<InfoForResourceTypeCAnimData>  *); /* linkage=_ZNK13CStrongHandleI28InfoForResourceTypeCAnimDataE7HasDataEv */
	bool IsLoaded(const class CStrongHandle<InfoForResourceTypeCAnimData>  *); /* linkage=_ZNK13CStrongHandleI28InfoForResourceTypeCAnimDataE8IsLoadedEv */
	bool IsError(const class CStrongHandle<InfoForResourceTypeCAnimData>  *); /* linkage=_ZNK13CStrongHandleI28InfoForResourceTypeCAnimDataE7IsErrorEv */
	const RuntimeClass_t  * operator const ResourceHandleInfo_t<InfoForResourceTypeCAnimData>::RuntimeClass_t*(const class CStrongHandle<InfoForResourceTypeCAnimData>  *); /* linkage=_ZNK13CStrongHandleI28InfoForResourceTypeCAnimDataEcvPK9CAnimDataEv */
	const RuntimeClass_t  * operator->(const class CStrongHandle<InfoForResourceTypeCAnimData>  *); /* linkage=_ZNK13CStrongHandleI28InfoForResourceTypeCAnimDataEptEv */
	ResourceHandleTyped_t operator CStrongHandle<InfoForResourceTypeCAnimData>::ResourceHandleTyped_t(const class CStrongHandle<InfoForResourceTypeCAnimData>  *); /* linkage=_ZNK13CStrongHandleI28InfoForResourceTypeCAnimDataEcvPK17ResourceBinding_tIS0_EEv */
	ResourceHandle_t operator ResourceHandle_t(const class CStrongHandle<InfoForResourceTypeCAnimData>  *); /* linkage=_ZNK13CStrongHandleI28InfoForResourceTypeCAnimDataEcvPK21ResourceBindingBase_tEv */
	class CWeakHandle<InfoForResourceTypeCAnimData> operator CWeakHandle<InfoForResourceTypeCAnimData>(const class CStrongHandle<InfoForResourceTypeCAnimData>  *); /* linkage=_ZNK13CStrongHandleI28InfoForResourceTypeCAnimDataEcv11CWeakHandleIS0_EEv */
	const class CWeakHandle<InfoForResourceTypeCAnimData>  GetHandle(const class CStrongHandle<InfoForResourceTypeCAnimData>  *); /* linkage=_ZNK13CStrongHandleI28InfoForResourceTypeCAnimDataE9GetHandleEv */
	const class ResourceBinding_t<InfoForResourceTypeCAnimData>  * GetBinding(const class CStrongHandle<InfoForResourceTypeCAnimData>  *); /* linkage=_ZNK13CStrongHandleI28InfoForResourceTypeCAnimDataE10GetBindingEv */
	const RuntimeClass_t  * GetData(const class CStrongHandle<InfoForResourceTypeCAnimData>  *); /* linkage=_ZNK13CStrongHandleI28InfoForResourceTypeCAnimDataE7GetDataEv */
	bool operator==(const class CStrongHandle<InfoForResourceTypeCAnimData>  *, ResourceHandle_t); /* linkage=_ZNK13CStrongHandleI28InfoForResourceTypeCAnimDataEeqEPK21ResourceBindingBase_t */
	bool operator==(const class CStrongHandle<InfoForResourceTypeCAnimData>  *, ResourceHandleTyped_t); /* linkage=_ZNK13CStrongHandleI28InfoForResourceTypeCAnimDataEeqEPK17ResourceBinding_tIS0_E */
	bool operator==(const class CStrongHandle<InfoForResourceTypeCAnimData>  *, const class CStrongHandle<InfoForResourceTypeCAnimData>  &); /* linkage=_ZNK13CStrongHandleI28InfoForResourceTypeCAnimDataEeqERKS1_ */
	bool operator==(const class CStrongHandle<InfoForResourceTypeCAnimData>  *, const class CWeakHandle<InfoForResourceTypeCAnimData>  &); /* linkage=_ZNK13CStrongHandleI28InfoForResourceTypeCAnimDataEeqERK11CWeakHandleIS0_E */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeCAnimData>  *, ResourceHandle_t); /* linkage=_ZNK13CStrongHandleI28InfoForResourceTypeCAnimDataEneEPK21ResourceBindingBase_t */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeCAnimData>  *, ResourceHandleTyped_t); /* linkage=_ZNK13CStrongHandleI28InfoForResourceTypeCAnimDataEneEPK17ResourceBinding_tIS0_E */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeCAnimData>  *, const class CStrongHandle<InfoForResourceTypeCAnimData>  &); /* linkage=_ZNK13CStrongHandleI28InfoForResourceTypeCAnimDataEneERKS1_ */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeCAnimData>  *, const class CWeakHandle<InfoForResourceTypeCAnimData>  &); /* linkage=_ZNK13CStrongHandleI28InfoForResourceTypeCAnimDataEneERK11CWeakHandleIS0_E */
	bool operator!(const class CStrongHandle<InfoForResourceTypeCAnimData>  *); /* linkage=_ZNK13CStrongHandleI28InfoForResourceTypeCAnimDataEntEv */
	int GetRefCount(const class CStrongHandle<InfoForResourceTypeCAnimData>  *); /* linkage=_ZNK13CStrongHandleI28InfoForResourceTypeCAnimDataE11GetRefCountEv */
	int GetReloadCounter(const class CStrongHandle<InfoForResourceTypeCAnimData>  *); /* linkage=_ZNK13CStrongHandleI28InfoForResourceTypeCAnimDataE16GetReloadCounterEv */
	void GetResourceName(const class CStrongHandle<InfoForResourceTypeCAnimData>  *, class CBufferString *, bool); /* linkage=_ZNK13CStrongHandleI28InfoForResourceTypeCAnimDataE15GetResourceNameEP13CBufferStringb */
	void GetResourceName(const class CStrongHandle<InfoForResourceTypeCAnimData>  *, class CResourceName *); /* linkage=_ZNK13CStrongHandleI28InfoForResourceTypeCAnimDataE15GetResourceNameEP13CResourceName */
	ResourceType_t GetResourceType(void); /* linkage=_ZN13CStrongHandleI28InfoForResourceTypeCAnimDataE15GetResourceTypeEv */
	void Move(class CStrongHandle<InfoForResourceTypeCAnimData> *, class CStrongHandle<InfoForResourceTypeCAnimData> &); /* linkage=_ZN13CStrongHandleI28InfoForResourceTypeCAnimDataE4MoveEOS1_ */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCAnimData> *, const class CStrongHandle<InfoForResourceTypeCAnimData>  &); /* linkage=_ZN13CStrongHandleI28InfoForResourceTypeCAnimDataEC4ERKS1_ */
};

// <04C61ACD> ../public/resourcesystem/stronghandle.h:87
// member functions: 45
// member variable: 1
// class size: 8
class CStrongHandle<InfoForResourceTypeCMorphSetData> : public CStrongHandleBase {
public:
	/* class CStrongHandleBase <ancestor>; */ /* 0 8 */
	/* ../public/resourcesystem/stronghandle.h:438 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCMorphSetData>* );
	/* ../public/resourcesystem/stronghandle.h:459 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCMorphSetData>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:90 */
	typedef const class ResourceBinding_t<InfoForResourceTypeCMorphSetData> * ResourceHandleTyped_t;
	/* ../public/resourcesystem/stronghandle.h:451 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCMorphSetData>* , ResourceId_t);
	/* ../public/resourcesystem/stronghandle.h:444 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCMorphSetData>* , const char* );
	/* ../public/resourcesystem/stronghandle.h:466 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCMorphSetData>* , CStrongHandle<InfoForResourceTypeCMorphSetData>& );
	/* ../public/resourcesystem/stronghandle.h:473 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCMorphSetData>* , const CWeakHandle<InfoForResourceTypeCMorphSetData>& );
	/* ../public/resourcesystem/stronghandle.h:480 */
	void ~CStrongHandle(CStrongHandle<InfoForResourceTypeCMorphSetData>* );
	/* ../public/resourcesystem/stronghandle.h:547 */
	void Init(CStrongHandle<InfoForResourceTypeCMorphSetData>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:490 */
	void Init(CStrongHandle<InfoForResourceTypeCMorphSetData>* , ResourceId_t);
	/* ../public/resourcesystem/stronghandle.h:518 */
	void Init(CStrongHandle<InfoForResourceTypeCMorphSetData>* , const CResourceName& );
	/* ../public/resourcesystem/stronghandle.h:575 */
	void Init(CStrongHandle<InfoForResourceTypeCMorphSetData>* , const CWeakHandle<InfoForResourceTypeCMorphSetData>& );
	/* ../public/resourcesystem/stronghandle.h:581 */
	void Init(CStrongHandle<InfoForResourceTypeCMorphSetData>* , const CStrongHandle<InfoForResourceTypeCMorphSetData>& );
	/* ../public/resourcesystem/stronghandle.h:609 */
	void Shutdown(CStrongHandle<InfoForResourceTypeCMorphSetData>* );
	/* ../public/resourcesystem/stronghandle.h:657 */
	CStrongHandle<InfoForResourceTypeCMorphSetData>& operator=(CStrongHandle<InfoForResourceTypeCMorphSetData>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:664 */
	CStrongHandle<InfoForResourceTypeCMorphSetData>& operator=(CStrongHandle<InfoForResourceTypeCMorphSetData>* , const CStrongHandle<InfoForResourceTypeCMorphSetData>& );
	/* ../public/resourcesystem/stronghandle.h:671 */
	CStrongHandle<InfoForResourceTypeCMorphSetData>& operator=(CStrongHandle<InfoForResourceTypeCMorphSetData>* , const CWeakHandle<InfoForResourceTypeCMorphSetData>& );
	/* ../public/resourcesystem/stronghandle.h:851 */
	bool HasHandle(const CStrongHandle<InfoForResourceTypeCMorphSetData>* );
	/* ../public/resourcesystem/stronghandle.h:857 */
	bool HasIdentity(const CStrongHandle<InfoForResourceTypeCMorphSetData>* );
	/* ../public/resourcesystem/stronghandle.h:867 */
	bool HasData(const CStrongHandle<InfoForResourceTypeCMorphSetData>* );
	/* ../public/resourcesystem/stronghandle.h:877 */
	bool IsLoaded(const CStrongHandle<InfoForResourceTypeCMorphSetData>* );
	/* ../public/resourcesystem/stronghandle.h:887 */
	bool IsError(const CStrongHandle<InfoForResourceTypeCMorphSetData>* );
	/* ../public/resourcesystem/stronghandle.h:731 */
	const RuntimeClass_t* operator const ResourceHandleInfo_t<InfoForResourceTypeCMorphSetData>::RuntimeClass_t*(const CStrongHandle<InfoForResourceTypeCMorphSetData>* );
	/* ../public/resourcesystem/stronghandle.h:738 */
	const RuntimeClass_t* operator->(const CStrongHandle<InfoForResourceTypeCMorphSetData>* );
	/* ../public/resourcesystem/stronghandle.h:745 */
	ResourceHandleTyped_t operator CStrongHandle<InfoForResourceTypeCMorphSetData>::ResourceHandleTyped_t(const CStrongHandle<InfoForResourceTypeCMorphSetData>* );
	/* ../public/resourcesystem/stronghandle.h:758 */
	ResourceHandle_t operator ResourceHandle_t(const CStrongHandle<InfoForResourceTypeCMorphSetData>* );
	/* ../public/resourcesystem/stronghandle.h:752 */
	CWeakHandle<InfoForResourceTypeCMorphSetData> operator CWeakHandle<InfoForResourceTypeCMorphSetData>(const CStrongHandle<InfoForResourceTypeCMorphSetData>* );
	/* ../public/resourcesystem/stronghandle.h:708 */
	const CWeakHandle<InfoForResourceTypeCMorphSetData> GetHandle(const CStrongHandle<InfoForResourceTypeCMorphSetData>* );
	/* ../public/resourcesystem/stronghandle.h:716 */
	const ResourceBinding_t<InfoForResourceTypeCMorphSetData>* GetBinding(const CStrongHandle<InfoForResourceTypeCMorphSetData>* );
	/* ../public/resourcesystem/stronghandle.h:724 */
	const RuntimeClass_t* GetData(const CStrongHandle<InfoForResourceTypeCMorphSetData>* );
	/* ../public/resourcesystem/stronghandle.h:791 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCMorphSetData>* , ResourceHandle_t);
	/* ../public/resourcesystem/stronghandle.h:798 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCMorphSetData>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:805 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCMorphSetData>* , const CStrongHandle<InfoForResourceTypeCMorphSetData>& );
	/* ../public/resourcesystem/stronghandle.h:812 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCMorphSetData>* , const CWeakHandle<InfoForResourceTypeCMorphSetData>& );
	/* ../public/resourcesystem/stronghandle.h:819 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCMorphSetData>* , ResourceHandle_t);
	/* ../public/resourcesystem/stronghandle.h:826 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCMorphSetData>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:833 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCMorphSetData>* , const CStrongHandle<InfoForResourceTypeCMorphSetData>& );
	/* ../public/resourcesystem/stronghandle.h:840 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCMorphSetData>* , const CWeakHandle<InfoForResourceTypeCMorphSetData>& );
	/* ../public/resourcesystem/stronghandle.h:179 */
	bool operator!(const CStrongHandle<InfoForResourceTypeCMorphSetData>* );
	/* ../public/resourcesystem/stronghandle.h:769 */
	int GetRefCount(const CStrongHandle<InfoForResourceTypeCMorphSetData>* );
	/* ../public/resourcesystem/stronghandle.h:780 */
	int GetReloadCounter(const CStrongHandle<InfoForResourceTypeCMorphSetData>* );
	/* ../public/resourcesystem/stronghandle.h:895 */
	void GetResourceName(const CStrongHandle<InfoForResourceTypeCMorphSetData>* , CBufferString* , bool);
	/* ../public/resourcesystem/stronghandle.h:904 */
	void GetResourceName(const CStrongHandle<InfoForResourceTypeCMorphSetData>* , CResourceName* );
	/* ../public/resourcesystem/stronghandle.h:428 */
	ResourceType_t GetResourceType(void);
	/* ../public/resourcesystem/stronghandle.h:683 */
	void Move(CStrongHandle<InfoForResourceTypeCMorphSetData>* , CStrongHandle<InfoForResourceTypeCMorphSetData>& );
private:
	/* ../public/resourcesystem/stronghandle.h:201 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCMorphSetData>* , const CStrongHandle<InfoForResourceTypeCMorphSetData>& );
};

// <00027BB1> ../../public/resourcesystem/stronghandle.h:87
// member functions: 90
// member variable: 1
// class size: 8
class CStrongHandle<ResourceBindingVoid_t> : public CStrongHandleBase {
public:
	/* class CStrongHandleBase <ancestor>; */ /* 0 8 */
	/* ../../public/resourcesystem/stronghandle.h:94 */
	void CStrongHandle(CStrongHandle<ResourceBindingVoid_t>* );
	/* ../../public/resourcesystem/stronghandle.h:95 */
	void CStrongHandle(CStrongHandle<ResourceBindingVoid_t>* , ResourceHandleTyped_t);
	/* ../../public/resourcesystem/stronghandle.h:90 */
	typedef const class ResourceBinding_t<ResourceBindingVoid_t> * ResourceHandleTyped_t;
	/* ../../public/resourcesystem/stronghandle.h:96 */
	void CStrongHandle(CStrongHandle<ResourceBindingVoid_t>* , ResourceId_t);
	/* ../../public/resourcesystem/stronghandle.h:97 */
	void CStrongHandle(CStrongHandle<ResourceBindingVoid_t>* , const char* );
	/* ../../public/resourcesystem/stronghandle.h:98 */
	void CStrongHandle(CStrongHandle<ResourceBindingVoid_t>* , CStrongHandle<ResourceBindingVoid_t>& );
	/* ../../public/resourcesystem/stronghandle.h:99 */
	void CStrongHandle(CStrongHandle<ResourceBindingVoid_t>* , const CWeakHandle<ResourceBindingVoid_t>& );
	/* ../../public/resourcesystem/stronghandle.h:100 */
	void ~CStrongHandle(CStrongHandle<ResourceBindingVoid_t>* );
	/* ../../public/resourcesystem/stronghandle.h:103 */
	void Init(CStrongHandle<ResourceBindingVoid_t>* , ResourceHandleTyped_t);
	/* ../../public/resourcesystem/stronghandle.h:104 */
	void Init(CStrongHandle<ResourceBindingVoid_t>* , ResourceId_t);
	/* ../../public/resourcesystem/stronghandle.h:105 */
	void Init(CStrongHandle<ResourceBindingVoid_t>* , const CResourceName& );
	/* ../../public/resourcesystem/stronghandle.h:106 */
	void Init(CStrongHandle<ResourceBindingVoid_t>* , const CWeakHandle<ResourceBindingVoid_t>& );
	/* ../../public/resourcesystem/stronghandle.h:107 */
	void Init(CStrongHandle<ResourceBindingVoid_t>* , const CStrongHandle<ResourceBindingVoid_t>& );
	/* ../../public/resourcesystem/stronghandle.h:108 */
	void Shutdown(CStrongHandle<ResourceBindingVoid_t>* );
	/* ../../public/resourcesystem/stronghandle.h:111 */
	CStrongHandle<ResourceBindingVoid_t>& operator=(CStrongHandle<ResourceBindingVoid_t>* , ResourceHandleTyped_t);
	/* ../../public/resourcesystem/stronghandle.h:112 */
	CStrongHandle<ResourceBindingVoid_t>& operator=(CStrongHandle<ResourceBindingVoid_t>* , const CStrongHandle<ResourceBindingVoid_t>& );
	/* ../../public/resourcesystem/stronghandle.h:113 */
	CStrongHandle<ResourceBindingVoid_t>& operator=(CStrongHandle<ResourceBindingVoid_t>* , const CWeakHandle<ResourceBindingVoid_t>& );
	/* ../../public/resourcesystem/stronghandle.h:143 */
	bool HasHandle(const CStrongHandle<ResourceBindingVoid_t>* );
	/* ../../public/resourcesystem/stronghandle.h:144 */
	bool HasIdentity(const CStrongHandle<ResourceBindingVoid_t>* );
	/* ../../public/resourcesystem/stronghandle.h:145 */
	bool HasData(const CStrongHandle<ResourceBindingVoid_t>* );
	/* ../../public/resourcesystem/stronghandle.h:148 */
	bool IsLoaded(const CStrongHandle<ResourceBindingVoid_t>* );
	/* ../../public/resourcesystem/stronghandle.h:151 */
	bool IsError(const CStrongHandle<ResourceBindingVoid_t>* );
	/* ../../public/resourcesystem/stronghandle.h:91 */
	typedef void ResourceDataTyped_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../../public/resourcesystem/stronghandle.h:154 */
	const ResourceDataTyped_t* operator const CStrongHandle<ResourceBindingVoid_t>::ResourceDataTyped_t*(const CStrongHandle<ResourceBindingVoid_t>* );
	/* ../../public/resourcesystem/stronghandle.h:155 */
	const ResourceDataTyped_t* operator->(const CStrongHandle<ResourceBindingVoid_t>* );
	/* ../../public/resourcesystem/stronghandle.h:156 */
	ResourceHandleTyped_t operator CStrongHandle<ResourceBindingVoid_t>::ResourceHandleTyped_t(const CStrongHandle<ResourceBindingVoid_t>* );
	/* ../../public/resourcesystem/stronghandle.h:157 */
	ResourceHandle_t operator ResourceHandle_t(const CStrongHandle<ResourceBindingVoid_t>* );
	/* ../../public/resourcesystem/stronghandle.h:158 */
	CWeakHandle<ResourceBindingVoid_t> operator CWeakHandle<ResourceBindingVoid_t>(const CStrongHandle<ResourceBindingVoid_t>* );
	/* ../../public/resourcesystem/stronghandle.h:160 */
	const CWeakHandle<ResourceBindingVoid_t> GetHandle(const CStrongHandle<ResourceBindingVoid_t>* );
	/* ../../public/resourcesystem/stronghandle.h:161 */
	const ResourceBinding_t<ResourceBindingVoid_t>* GetBinding(const CStrongHandle<ResourceBindingVoid_t>* );
	/* ../../public/resourcesystem/stronghandle.h:164 */
	const ResourceDataTyped_t* GetData(const CStrongHandle<ResourceBindingVoid_t>* );
	/* ../../public/resourcesystem/stronghandle.h:167 */
	bool operator==(const CStrongHandle<ResourceBindingVoid_t>* , ResourceHandle_t);
	/* ../../public/resourcesystem/stronghandle.h:168 */
	bool operator==(const CStrongHandle<ResourceBindingVoid_t>* , ResourceHandleTyped_t);
	/* ../../public/resourcesystem/stronghandle.h:169 */
	bool operator==(const CStrongHandle<ResourceBindingVoid_t>* , const CStrongHandle<ResourceBindingVoid_t>& );
	/* ../../public/resourcesystem/stronghandle.h:170 */
	bool operator==(const CStrongHandle<ResourceBindingVoid_t>* , const CWeakHandle<ResourceBindingVoid_t>& );
	/* ../../public/resourcesystem/stronghandle.h:172 */
	bool operator!=(const CStrongHandle<ResourceBindingVoid_t>* , ResourceHandle_t);
	/* ../../public/resourcesystem/stronghandle.h:173 */
	bool operator!=(const CStrongHandle<ResourceBindingVoid_t>* , ResourceHandleTyped_t);
	/* ../../public/resourcesystem/stronghandle.h:174 */
	bool operator!=(const CStrongHandle<ResourceBindingVoid_t>* , const CStrongHandle<ResourceBindingVoid_t>& );
	/* ../../public/resourcesystem/stronghandle.h:175 */
	bool operator!=(const CStrongHandle<ResourceBindingVoid_t>* , const CWeakHandle<ResourceBindingVoid_t>& );
	/* ../../public/resourcesystem/stronghandle.h:179 */
	bool operator!(const CStrongHandle<ResourceBindingVoid_t>* );
	/* ../../public/resourcesystem/stronghandle.h:186 */
	int GetRefCount(const CStrongHandle<ResourceBindingVoid_t>* );
	/* ../../public/resourcesystem/stronghandle.h:188 */
	int GetReloadCounter(const CStrongHandle<ResourceBindingVoid_t>* );
	/* ../../public/resourcesystem/stronghandle.h:190 */
	void GetResourceName(const CStrongHandle<ResourceBindingVoid_t>* , CBufferString* , bool);
	/* ../../public/resourcesystem/stronghandle.h:191 */
	void GetResourceName(const CStrongHandle<ResourceBindingVoid_t>* , CResourceName* );
	/* ../../public/resourcesystem/stronghandle.h:193 */
	ResourceType_t GetResourceType(void);
	/* ../../public/resourcesystem/stronghandle.h:195 */
	void Move(CStrongHandle<ResourceBindingVoid_t>* , CStrongHandle<ResourceBindingVoid_t>& );
private:
	/* ../../public/resourcesystem/stronghandle.h:201 */
	void CStrongHandle(CStrongHandle<ResourceBindingVoid_t>* , const CStrongHandle<ResourceBindingVoid_t>& );
	void CStrongHandle(class CStrongHandle<ResourceBindingVoid_t> *); /* linkage=_ZN13CStrongHandleI21ResourceBindingVoid_tEC4Ev */
	void CStrongHandle(class CStrongHandle<ResourceBindingVoid_t> *, ResourceHandleTyped_t); /* linkage=_ZN13CStrongHandleI21ResourceBindingVoid_tEC4EPK17ResourceBinding_tIS0_E */
	void CStrongHandle(class CStrongHandle<ResourceBindingVoid_t> *, class ResourceId_t); /* linkage=_ZN13CStrongHandleI21ResourceBindingVoid_tEC4E12ResourceId_t */
	void CStrongHandle(class CStrongHandle<ResourceBindingVoid_t> *, const char  *); /* linkage=_ZN13CStrongHandleI21ResourceBindingVoid_tEC4EPKc */
	void CStrongHandle(class CStrongHandle<ResourceBindingVoid_t> *, class CStrongHandle<ResourceBindingVoid_t> &); /* linkage=_ZN13CStrongHandleI21ResourceBindingVoid_tEC4EOS1_ */
	void CStrongHandle(class CStrongHandle<ResourceBindingVoid_t> *, const class CWeakHandle<ResourceBindingVoid_t>  &); /* linkage=_ZN13CStrongHandleI21ResourceBindingVoid_tEC4ERK11CWeakHandleIS0_E */
	void ~CStrongHandle(class CStrongHandle<ResourceBindingVoid_t> *); /* linkage=_ZN13CStrongHandleI21ResourceBindingVoid_tED4Ev */
	void Init(class CStrongHandle<ResourceBindingVoid_t> *, ResourceHandleTyped_t); /* linkage=_ZN13CStrongHandleI21ResourceBindingVoid_tE4InitEPK17ResourceBinding_tIS0_E */
	void Init(class CStrongHandle<ResourceBindingVoid_t> *, class ResourceId_t); /* linkage=_ZN13CStrongHandleI21ResourceBindingVoid_tE4InitE12ResourceId_t */
	void Init(class CStrongHandle<ResourceBindingVoid_t> *, const class CResourceName  &); /* linkage=_ZN13CStrongHandleI21ResourceBindingVoid_tE4InitERK13CResourceName */
	void Init(class CStrongHandle<ResourceBindingVoid_t> *, const class CWeakHandle<ResourceBindingVoid_t>  &); /* linkage=_ZN13CStrongHandleI21ResourceBindingVoid_tE4InitERK11CWeakHandleIS0_E */
	void Init(class CStrongHandle<ResourceBindingVoid_t> *, const class CStrongHandle<ResourceBindingVoid_t>  &); /* linkage=_ZN13CStrongHandleI21ResourceBindingVoid_tE4InitERKS1_ */
	void Shutdown(class CStrongHandle<ResourceBindingVoid_t> *); /* linkage=_ZN13CStrongHandleI21ResourceBindingVoid_tE8ShutdownEv */
	class CStrongHandle<ResourceBindingVoid_t> & operator=(class CStrongHandle<ResourceBindingVoid_t> *, ResourceHandleTyped_t); /* linkage=_ZN13CStrongHandleI21ResourceBindingVoid_tEaSEPK17ResourceBinding_tIS0_E */
	class CStrongHandle<ResourceBindingVoid_t> & operator=(class CStrongHandle<ResourceBindingVoid_t> *, const class CStrongHandle<ResourceBindingVoid_t>  &); /* linkage=_ZN13CStrongHandleI21ResourceBindingVoid_tEaSERKS1_ */
	class CStrongHandle<ResourceBindingVoid_t> & operator=(class CStrongHandle<ResourceBindingVoid_t> *, const class CWeakHandle<ResourceBindingVoid_t>  &); /* linkage=_ZN13CStrongHandleI21ResourceBindingVoid_tEaSERK11CWeakHandleIS0_E */
	bool HasHandle(const class CStrongHandle<ResourceBindingVoid_t>  *); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tE9HasHandleEv */
	bool HasIdentity(const class CStrongHandle<ResourceBindingVoid_t>  *); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tE11HasIdentityEv */
	bool HasData(const class CStrongHandle<ResourceBindingVoid_t>  *); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tE7HasDataEv */
	bool IsLoaded(const class CStrongHandle<ResourceBindingVoid_t>  *); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tE8IsLoadedEv */
	bool IsError(const class CStrongHandle<ResourceBindingVoid_t>  *); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tE7IsErrorEv */
	const ResourceDataTyped_t  * operator const CStrongHandle<ResourceBindingVoid_t>::ResourceDataTyped_t*(const class CStrongHandle<ResourceBindingVoid_t>  *); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tEcvPKvEv */
	const ResourceDataTyped_t  * operator->(const class CStrongHandle<ResourceBindingVoid_t>  *); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tEptEv */
	ResourceHandleTyped_t operator CStrongHandle<ResourceBindingVoid_t>::ResourceHandleTyped_t(const class CStrongHandle<ResourceBindingVoid_t>  *); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tEcvPK17ResourceBinding_tIS0_EEv */
	ResourceHandle_t operator ResourceHandle_t(const class CStrongHandle<ResourceBindingVoid_t>  *); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tEcvPK21ResourceBindingBase_tEv */
	class CWeakHandle<ResourceBindingVoid_t> operator CWeakHandle<ResourceBindingVoid_t>(const class CStrongHandle<ResourceBindingVoid_t>  *); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tEcv11CWeakHandleIS0_EEv */
	const class CWeakHandle<ResourceBindingVoid_t>  GetHandle(const class CStrongHandle<ResourceBindingVoid_t>  *); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tE9GetHandleEv */
	const class ResourceBinding_t<ResourceBindingVoid_t>  * GetBinding(const class CStrongHandle<ResourceBindingVoid_t>  *); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tE10GetBindingEv */
	const ResourceDataTyped_t  * GetData(const class CStrongHandle<ResourceBindingVoid_t>  *); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tE7GetDataEv */
	bool operator==(const class CStrongHandle<ResourceBindingVoid_t>  *, ResourceHandle_t); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tEeqEPK21ResourceBindingBase_t */
	bool operator==(const class CStrongHandle<ResourceBindingVoid_t>  *, ResourceHandleTyped_t); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tEeqEPK17ResourceBinding_tIS0_E */
	bool operator==(const class CStrongHandle<ResourceBindingVoid_t>  *, const class CStrongHandle<ResourceBindingVoid_t>  &); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tEeqERKS1_ */
	bool operator==(const class CStrongHandle<ResourceBindingVoid_t>  *, const class CWeakHandle<ResourceBindingVoid_t>  &); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tEeqERK11CWeakHandleIS0_E */
	bool operator!=(const class CStrongHandle<ResourceBindingVoid_t>  *, ResourceHandle_t); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tEneEPK21ResourceBindingBase_t */
	bool operator!=(const class CStrongHandle<ResourceBindingVoid_t>  *, ResourceHandleTyped_t); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tEneEPK17ResourceBinding_tIS0_E */
	bool operator!=(const class CStrongHandle<ResourceBindingVoid_t>  *, const class CStrongHandle<ResourceBindingVoid_t>  &); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tEneERKS1_ */
	bool operator!=(const class CStrongHandle<ResourceBindingVoid_t>  *, const class CWeakHandle<ResourceBindingVoid_t>  &); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tEneERK11CWeakHandleIS0_E */
	bool operator!(const class CStrongHandle<ResourceBindingVoid_t>  *); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tEntEv */
	int GetRefCount(const class CStrongHandle<ResourceBindingVoid_t>  *); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tE11GetRefCountEv */
	int GetReloadCounter(const class CStrongHandle<ResourceBindingVoid_t>  *); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tE16GetReloadCounterEv */
	void GetResourceName(const class CStrongHandle<ResourceBindingVoid_t>  *, class CBufferString *, bool); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tE15GetResourceNameEP13CBufferStringb */
	void GetResourceName(const class CStrongHandle<ResourceBindingVoid_t>  *, class CResourceName *); /* linkage=_ZNK13CStrongHandleI21ResourceBindingVoid_tE15GetResourceNameEP13CResourceName */
	ResourceType_t GetResourceType(void); /* linkage=_ZN13CStrongHandleI21ResourceBindingVoid_tE15GetResourceTypeEv */
	void Move(class CStrongHandle<ResourceBindingVoid_t> *, class CStrongHandle<ResourceBindingVoid_t> &); /* linkage=_ZN13CStrongHandleI21ResourceBindingVoid_tE4MoveEOS1_ */
	void CStrongHandle(class CStrongHandle<ResourceBindingVoid_t> *, const class CStrongHandle<ResourceBindingVoid_t>  &); /* linkage=_ZN13CStrongHandleI21ResourceBindingVoid_tEC4ERKS1_ */
};

// <001E3BC3> ../../public/resourcesystem/stronghandle.h:87
// member functions: 90
// member variable: 1
// class size: 8
class CStrongHandle<InfoForResourceTypeCTextureBase> : public CStrongHandleBase {
public:
	/* class CStrongHandleBase <ancestor>; */ /* 0 8 */
	/* ../../public/resourcesystem/stronghandle.h:438 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCTextureBase>* );
	/* ../../public/resourcesystem/stronghandle.h:459 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCTextureBase>* , ResourceHandleTyped_t);
	/* ../../public/resourcesystem/stronghandle.h:90 */
	typedef const class ResourceBinding_t<InfoForResourceTypeCTextureBase> * ResourceHandleTyped_t;
	/* ../../public/resourcesystem/stronghandle.h:451 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCTextureBase>* , ResourceId_t);
	/* ../../public/resourcesystem/stronghandle.h:444 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCTextureBase>* , const char* );
	/* ../../public/resourcesystem/stronghandle.h:466 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCTextureBase>* , CStrongHandle<InfoForResourceTypeCTextureBase>& );
	/* ../../public/resourcesystem/stronghandle.h:473 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCTextureBase>* , const CWeakHandle<InfoForResourceTypeCTextureBase>& );
	/* ../../public/resourcesystem/stronghandle.h:480 */
	void ~CStrongHandle(CStrongHandle<InfoForResourceTypeCTextureBase>* );
	/* ../../public/resourcesystem/stronghandle.h:547 */
	void Init(CStrongHandle<InfoForResourceTypeCTextureBase>* , ResourceHandleTyped_t);
	/* ../../public/resourcesystem/stronghandle.h:490 */
	void Init(CStrongHandle<InfoForResourceTypeCTextureBase>* , ResourceId_t);
	/* ../../public/resourcesystem/stronghandle.h:518 */
	void Init(CStrongHandle<InfoForResourceTypeCTextureBase>* , const CResourceName& );
	/* ../../public/resourcesystem/stronghandle.h:575 */
	void Init(CStrongHandle<InfoForResourceTypeCTextureBase>* , const CWeakHandle<InfoForResourceTypeCTextureBase>& );
	/* ../../public/resourcesystem/stronghandle.h:581 */
	void Init(CStrongHandle<InfoForResourceTypeCTextureBase>* , const CStrongHandle<InfoForResourceTypeCTextureBase>& );
	/* ../../public/resourcesystem/stronghandle.h:609 */
	void Shutdown(CStrongHandle<InfoForResourceTypeCTextureBase>* );
	/* ../../public/resourcesystem/stronghandle.h:657 */
	CStrongHandle<InfoForResourceTypeCTextureBase>& operator=(CStrongHandle<InfoForResourceTypeCTextureBase>* , ResourceHandleTyped_t);
	/* ../../public/resourcesystem/stronghandle.h:664 */
	CStrongHandle<InfoForResourceTypeCTextureBase>& operator=(CStrongHandle<InfoForResourceTypeCTextureBase>* , const CStrongHandle<InfoForResourceTypeCTextureBase>& );
	/* ../../public/resourcesystem/stronghandle.h:671 */
	CStrongHandle<InfoForResourceTypeCTextureBase>& operator=(CStrongHandle<InfoForResourceTypeCTextureBase>* , const CWeakHandle<InfoForResourceTypeCTextureBase>& );
	/* ../../public/resourcesystem/stronghandle.h:851 */
	bool HasHandle(const CStrongHandle<InfoForResourceTypeCTextureBase>* );
	/* ../../public/resourcesystem/stronghandle.h:857 */
	bool HasIdentity(const CStrongHandle<InfoForResourceTypeCTextureBase>* );
	/* ../../public/resourcesystem/stronghandle.h:867 */
	bool HasData(const CStrongHandle<InfoForResourceTypeCTextureBase>* );
	/* ../../public/resourcesystem/stronghandle.h:877 */
	bool IsLoaded(const CStrongHandle<InfoForResourceTypeCTextureBase>* );
	/* ../../public/resourcesystem/stronghandle.h:887 */
	bool IsError(const CStrongHandle<InfoForResourceTypeCTextureBase>* );
	/* ../../public/resourcesystem/stronghandle.h:731 */
	const RuntimeClass_t* operator const ResourceHandleInfo_t<InfoForResourceTypeCTextureBase>::RuntimeClass_t*(const CStrongHandle<InfoForResourceTypeCTextureBase>* );
	/* ../../public/resourcesystem/stronghandle.h:738 */
	const RuntimeClass_t* operator->(const CStrongHandle<InfoForResourceTypeCTextureBase>* );
	/* ../../public/resourcesystem/stronghandle.h:745 */
	ResourceHandleTyped_t operator CStrongHandle<InfoForResourceTypeCTextureBase>::ResourceHandleTyped_t(const CStrongHandle<InfoForResourceTypeCTextureBase>* );
	/* ../../public/resourcesystem/stronghandle.h:758 */
	ResourceHandle_t operator ResourceHandle_t(const CStrongHandle<InfoForResourceTypeCTextureBase>* );
	/* ../../public/resourcesystem/stronghandle.h:752 */
	CWeakHandle<InfoForResourceTypeCTextureBase> operator CWeakHandle<InfoForResourceTypeCTextureBase>(const CStrongHandle<InfoForResourceTypeCTextureBase>* );
	/* ../../public/resourcesystem/stronghandle.h:708 */
	const CWeakHandle<InfoForResourceTypeCTextureBase> GetHandle(const CStrongHandle<InfoForResourceTypeCTextureBase>* );
	/* ../../public/resourcesystem/stronghandle.h:716 */
	const ResourceBinding_t<InfoForResourceTypeCTextureBase>* GetBinding(const CStrongHandle<InfoForResourceTypeCTextureBase>* );
	/* ../../public/resourcesystem/stronghandle.h:724 */
	const RuntimeClass_t* GetData(const CStrongHandle<InfoForResourceTypeCTextureBase>* );
	/* ../../public/resourcesystem/stronghandle.h:791 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCTextureBase>* , ResourceHandle_t);
	/* ../../public/resourcesystem/stronghandle.h:798 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCTextureBase>* , ResourceHandleTyped_t);
	/* ../../public/resourcesystem/stronghandle.h:805 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCTextureBase>* , const CStrongHandle<InfoForResourceTypeCTextureBase>& );
	/* ../../public/resourcesystem/stronghandle.h:812 */
	bool operator==(const CStrongHandle<InfoForResourceTypeCTextureBase>* , const CWeakHandle<InfoForResourceTypeCTextureBase>& );
	/* ../../public/resourcesystem/stronghandle.h:819 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCTextureBase>* , ResourceHandle_t);
	/* ../../public/resourcesystem/stronghandle.h:826 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCTextureBase>* , ResourceHandleTyped_t);
	/* ../../public/resourcesystem/stronghandle.h:833 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCTextureBase>* , const CStrongHandle<InfoForResourceTypeCTextureBase>& );
	/* ../../public/resourcesystem/stronghandle.h:840 */
	bool operator!=(const CStrongHandle<InfoForResourceTypeCTextureBase>* , const CWeakHandle<InfoForResourceTypeCTextureBase>& );
	/* ../../public/resourcesystem/stronghandle.h:179 */
	bool operator!(const CStrongHandle<InfoForResourceTypeCTextureBase>* );
	/* ../../public/resourcesystem/stronghandle.h:769 */
	int GetRefCount(const CStrongHandle<InfoForResourceTypeCTextureBase>* );
	/* ../../public/resourcesystem/stronghandle.h:780 */
	int GetReloadCounter(const CStrongHandle<InfoForResourceTypeCTextureBase>* );
	/* ../../public/resourcesystem/stronghandle.h:895 */
	void GetResourceName(const CStrongHandle<InfoForResourceTypeCTextureBase>* , CBufferString* , bool);
	/* ../../public/resourcesystem/stronghandle.h:904 */
	void GetResourceName(const CStrongHandle<InfoForResourceTypeCTextureBase>* , CResourceName* );
	/* ../../public/resourcesystem/stronghandle.h:428 */
	ResourceType_t GetResourceType(void);
	/* ../../public/resourcesystem/stronghandle.h:683 */
	void Move(CStrongHandle<InfoForResourceTypeCTextureBase>* , CStrongHandle<InfoForResourceTypeCTextureBase>& );
private:
	/* ../../public/resourcesystem/stronghandle.h:201 */
	void CStrongHandle(CStrongHandle<InfoForResourceTypeCTextureBase>* , const CStrongHandle<InfoForResourceTypeCTextureBase>& );
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCTextureBase> *); /* linkage=_ZN13CStrongHandleI31InfoForResourceTypeCTextureBaseEC4Ev */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCTextureBase> *, ResourceHandleTyped_t); /* linkage=_ZN13CStrongHandleI31InfoForResourceTypeCTextureBaseEC4EPK17ResourceBinding_tIS0_E */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCTextureBase> *, class ResourceId_t); /* linkage=_ZN13CStrongHandleI31InfoForResourceTypeCTextureBaseEC4E12ResourceId_t */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCTextureBase> *, const char  *); /* linkage=_ZN13CStrongHandleI31InfoForResourceTypeCTextureBaseEC4EPKc */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCTextureBase> *, class CStrongHandle<InfoForResourceTypeCTextureBase> &); /* linkage=_ZN13CStrongHandleI31InfoForResourceTypeCTextureBaseEC4EOS1_ */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCTextureBase> *, const class CWeakHandle<InfoForResourceTypeCTextureBase>  &); /* linkage=_ZN13CStrongHandleI31InfoForResourceTypeCTextureBaseEC4ERK11CWeakHandleIS0_E */
	void ~CStrongHandle(class CStrongHandle<InfoForResourceTypeCTextureBase> *); /* linkage=_ZN13CStrongHandleI31InfoForResourceTypeCTextureBaseED4Ev */
	/* <39fd6dd> ../public/resourcesystem/stronghandle.h:547 */
	void Init(class CStrongHandle<InfoForResourceTypeCTextureBase> *, ResourceHandleTyped_t); /* linkage=_ZN13CStrongHandleI31InfoForResourceTypeCTextureBaseE4InitEPK17ResourceBinding_tIS0_E */
	void Init(class CStrongHandle<InfoForResourceTypeCTextureBase> *, class ResourceId_t); /* linkage=_ZN13CStrongHandleI31InfoForResourceTypeCTextureBaseE4InitE12ResourceId_t */
	void Init(class CStrongHandle<InfoForResourceTypeCTextureBase> *, const class CResourceName  &); /* linkage=_ZN13CStrongHandleI31InfoForResourceTypeCTextureBaseE4InitERK13CResourceName */
	void Init(class CStrongHandle<InfoForResourceTypeCTextureBase> *, const class CWeakHandle<InfoForResourceTypeCTextureBase>  &); /* linkage=_ZN13CStrongHandleI31InfoForResourceTypeCTextureBaseE4InitERK11CWeakHandleIS0_E */
	void Init(class CStrongHandle<InfoForResourceTypeCTextureBase> *, const class CStrongHandle<InfoForResourceTypeCTextureBase>  &); /* linkage=_ZN13CStrongHandleI31InfoForResourceTypeCTextureBaseE4InitERKS1_ */
	void Shutdown(class CStrongHandle<InfoForResourceTypeCTextureBase> *); /* linkage=_ZN13CStrongHandleI31InfoForResourceTypeCTextureBaseE8ShutdownEv */
	class CStrongHandle<InfoForResourceTypeCTextureBase> & operator=(class CStrongHandle<InfoForResourceTypeCTextureBase> *, ResourceHandleTyped_t); /* linkage=_ZN13CStrongHandleI31InfoForResourceTypeCTextureBaseEaSEPK17ResourceBinding_tIS0_E */
	class CStrongHandle<InfoForResourceTypeCTextureBase> & operator=(class CStrongHandle<InfoForResourceTypeCTextureBase> *, const class CStrongHandle<InfoForResourceTypeCTextureBase>  &); /* linkage=_ZN13CStrongHandleI31InfoForResourceTypeCTextureBaseEaSERKS1_ */
	class CStrongHandle<InfoForResourceTypeCTextureBase> & operator=(class CStrongHandle<InfoForResourceTypeCTextureBase> *, const class CWeakHandle<InfoForResourceTypeCTextureBase>  &); /* linkage=_ZN13CStrongHandleI31InfoForResourceTypeCTextureBaseEaSERK11CWeakHandleIS0_E */
	bool HasHandle(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseE9HasHandleEv */
	bool HasIdentity(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseE11HasIdentityEv */
	bool HasData(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseE7HasDataEv */
	bool IsLoaded(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseE8IsLoadedEv */
	bool IsError(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseE7IsErrorEv */
	const RuntimeClass_t  * operator const ResourceHandleInfo_t<InfoForResourceTypeCTextureBase>::RuntimeClass_t*(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseEcvPK12CTextureBaseEv */
	const RuntimeClass_t  * operator->(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseEptEv */
	ResourceHandleTyped_t operator CStrongHandle<InfoForResourceTypeCTextureBase>::ResourceHandleTyped_t(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseEcvPK17ResourceBinding_tIS0_EEv */
	ResourceHandle_t operator ResourceHandle_t(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseEcvPK21ResourceBindingBase_tEv */
	class CWeakHandle<InfoForResourceTypeCTextureBase> operator CWeakHandle<InfoForResourceTypeCTextureBase>(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseEcv11CWeakHandleIS0_EEv */
	const class CWeakHandle<InfoForResourceTypeCTextureBase>  GetHandle(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseE9GetHandleEv */
	const class ResourceBinding_t<InfoForResourceTypeCTextureBase>  * GetBinding(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseE10GetBindingEv */
	const RuntimeClass_t  * GetData(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseE7GetDataEv */
	bool operator==(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *, ResourceHandle_t); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseEeqEPK21ResourceBindingBase_t */
	bool operator==(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *, ResourceHandleTyped_t); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseEeqEPK17ResourceBinding_tIS0_E */
	bool operator==(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *, const class CStrongHandle<InfoForResourceTypeCTextureBase>  &); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseEeqERKS1_ */
	bool operator==(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *, const class CWeakHandle<InfoForResourceTypeCTextureBase>  &); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseEeqERK11CWeakHandleIS0_E */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *, ResourceHandle_t); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseEneEPK21ResourceBindingBase_t */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *, ResourceHandleTyped_t); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseEneEPK17ResourceBinding_tIS0_E */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *, const class CStrongHandle<InfoForResourceTypeCTextureBase>  &); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseEneERKS1_ */
	bool operator!=(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *, const class CWeakHandle<InfoForResourceTypeCTextureBase>  &); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseEneERK11CWeakHandleIS0_E */
	bool operator!(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseEntEv */
	int GetRefCount(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseE11GetRefCountEv */
	int GetReloadCounter(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseE16GetReloadCounterEv */
	void GetResourceName(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *, class CBufferString *, bool); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseE15GetResourceNameEP13CBufferStringb */
	void GetResourceName(const class CStrongHandle<InfoForResourceTypeCTextureBase>  *, class CResourceName *); /* linkage=_ZNK13CStrongHandleI31InfoForResourceTypeCTextureBaseE15GetResourceNameEP13CResourceName */
	ResourceType_t GetResourceType(void); /* linkage=_ZN13CStrongHandleI31InfoForResourceTypeCTextureBaseE15GetResourceTypeEv */
	void Move(class CStrongHandle<InfoForResourceTypeCTextureBase> *, class CStrongHandle<InfoForResourceTypeCTextureBase> &); /* linkage=_ZN13CStrongHandleI31InfoForResourceTypeCTextureBaseE4MoveEOS1_ */
	void CStrongHandle(class CStrongHandle<InfoForResourceTypeCTextureBase> *, const class CStrongHandle<InfoForResourceTypeCTextureBase>  &); /* linkage=_ZN13CStrongHandleI31InfoForResourceTypeCTextureBaseEC4ERKS1_ */
};

// <054D9E4D> ../public/resourcesystem/stronghandle.h:204
inline void Get(ISchemaSystemTypeScope* pTypeScope)
{
} /* size: 0 */

// <0413004B> ../public/resourcesystem/stronghandle.h:204
// member function: 1
// class size: 1
class CSchemaTypeOf<CStrongHandle<InfoForResourceTypeCModel> > {
	/* ../public/resourcesystem/stronghandle.h:204 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0413007C> ../public/resourcesystem/stronghandle.h:204
// member function: 1
// class size: 1
class CSchemaTypeOf<CStrongHandle<InfoForResourceTypeIMaterial2> > {
	/* ../public/resourcesystem/stronghandle.h:204 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <041321D7> ../public/resourcesystem/stronghandle.h:204
// member function: 1
// class size: 1
class CSchemaTypeOf<CStrongHandle<InfoForResourceTypeCTextureBase> > {
	/* ../public/resourcesystem/stronghandle.h:204 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <0421E682> ../public/resourcesystem/stronghandle.h:204
// member function: 1
// class size: 1
class CSchemaTypeOf<CStrongHandle<InfoForResourceTypeCRenderMesh> > {
	/* ../public/resourcesystem/stronghandle.h:204 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F9A9C1> ../public/resourcesystem/stronghandle.h:204
// member function: 1
// class size: 1
class CSchemaTypeOf<CStrongHandle<InfoForResourceTypeCPhysAggregateData> > {
	/* ../public/resourcesystem/stronghandle.h:204 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F9AA10> ../public/resourcesystem/stronghandle.h:204
// member function: 1
// class size: 1
class CSchemaTypeOf<CStrongHandle<InfoForResourceTypeCAnimationGroup> > {
	/* ../public/resourcesystem/stronghandle.h:204 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <04F9AA5F> ../public/resourcesystem/stronghandle.h:204
// member function: 1
// class size: 1
class CSchemaTypeOf<CStrongHandle<InfoForResourceTypeCSequenceGroupData> > {
	/* ../public/resourcesystem/stronghandle.h:204 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <054C413B> ../public/resourcesystem/stronghandle.h:204
// member function: 1
// class size: 1
class CSchemaTypeOf<CStrongHandle<InfoForResourceTypeCAnimData> > {
	/* ../public/resourcesystem/stronghandle.h:204 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <06E2A3C4> ../../public/resourcesystem/stronghandle.h:211
void CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::~CStrongHandleCopyable()
{
} /* size: 0 */

// <06E2A3A8> ../../public/resourcesystem/stronghandle.h:211
inline void CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::~CStrongHandleCopyable()
{
} /* size: 0 */

// <04D2417A> ../public/resourcesystem/stronghandle.h:211
void CStrongHandleCopyable<InfoForResourceTypeIMaterial2>::~CStrongHandleCopyable()
{
} /* size: 0 */

// <04D2415D> ../public/resourcesystem/stronghandle.h:211
inline void CStrongHandleCopyable<InfoForResourceTypeIMaterial2>::~CStrongHandleCopyable()
{
} /* size: 0 */

// <042DFA74> ../public/resourcesystem/stronghandle.h:211
void CStrongHandleCopyable<InfoForResourceTypeCEntityLump>::~CStrongHandleCopyable()
{
} /* size: 0 */

// <042DFA58> ../public/resourcesystem/stronghandle.h:211
inline void CStrongHandleCopyable<InfoForResourceTypeCEntityLump>::~CStrongHandleCopyable()
{
} /* size: 0 */

// <00E44FC6> ../public/resourcesystem/stronghandle.h:211
void CStrongHandleCopyable<InfoForResourceTypeCModel>::~CStrongHandleCopyable()
{
} /* size: 0 */

// <00E44FAA> ../public/resourcesystem/stronghandle.h:211
inline void CStrongHandleCopyable<InfoForResourceTypeCModel>::~CStrongHandleCopyable()
{
} /* size: 0 */

// <0018352E> ../public/resourcesystem/stronghandle.h:211
void CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>::~CStrongHandleCopyable()
{
} /* size: 0 */

// <00183512> ../public/resourcesystem/stronghandle.h:211
inline void CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>::~CStrongHandleCopyable()
{
} /* size: 0 */

// <0009105F> ../public/resourcesystem/stronghandle.h:211
// member functions: 27
// member variable: 1
// class size: 8
class CStrongHandleCopyable<InfoForResourceTypeIMaterial2> : public CStrongHandle<InfoForResourceTypeIMaterial2> {
public:
	/* class CStrongHandle<InfoForResourceTypeIMaterial2> <ancestor>; */ /* 0 8 */
	/* ../public/resourcesystem/stronghandle.h:217 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeIMaterial2>* );
	/* ../public/resourcesystem/stronghandle.h:218 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeIMaterial2>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:215 */
	typedef ResourceHandleTyped_t ResourceHandleTyped_t;
	/* ../public/resourcesystem/stronghandle.h:219 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeIMaterial2>* , ResourceId_t);
	/* ../public/resourcesystem/stronghandle.h:220 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeIMaterial2>* , const char* );
	/* ../public/resourcesystem/stronghandle.h:221 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeIMaterial2>* , const CStrongHandleCopyable<InfoForResourceTypeIMaterial2>& );
	/* ../public/resourcesystem/stronghandle.h:222 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeIMaterial2>* , const CStrongHandle<InfoForResourceTypeIMaterial2>& );
	/* ../public/resourcesystem/stronghandle.h:223 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeIMaterial2>* , const CWeakHandle<InfoForResourceTypeIMaterial2>& );
	/* ../public/resourcesystem/stronghandle.h:224 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeIMaterial2>* , CStrongHandleCopyable<InfoForResourceTypeIMaterial2>& );
	/* ../public/resourcesystem/stronghandle.h:227 */
	CStrongHandleCopyable<InfoForResourceTypeIMaterial2>& operator=(CStrongHandleCopyable<InfoForResourceTypeIMaterial2>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:232 */
	CStrongHandleCopyable<InfoForResourceTypeIMaterial2>& operator=(CStrongHandleCopyable<InfoForResourceTypeIMaterial2>* , const CStrongHandle<InfoForResourceTypeIMaterial2>& );
	/* ../public/resourcesystem/stronghandle.h:237 */
	CStrongHandleCopyable<InfoForResourceTypeIMaterial2>& operator=(CStrongHandleCopyable<InfoForResourceTypeIMaterial2>* , const CWeakHandle<InfoForResourceTypeIMaterial2>& );
	/* ../public/resourcesystem/stronghandle.h:242 */
	CStrongHandleCopyable<InfoForResourceTypeIMaterial2>& operator=(CStrongHandleCopyable<InfoForResourceTypeIMaterial2>* , const CStrongHandleCopyable<InfoForResourceTypeIMaterial2>& );
	/* ../public/resourcesystem/stronghandle.h:248 */
	CStrongHandleCopyable<InfoForResourceTypeIMaterial2>& operator=(CStrongHandleCopyable<InfoForResourceTypeIMaterial2>* , CStrongHandleCopyable<InfoForResourceTypeIMaterial2>& );
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeIMaterial2> *); /* linkage=_ZN21CStrongHandleCopyableI29InfoForResourceTypeIMaterial2EC4Ev */
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeIMaterial2> *, ResourceHandleTyped_t); /* linkage=_ZN21CStrongHandleCopyableI29InfoForResourceTypeIMaterial2EC4EPK17ResourceBinding_tIS0_E */
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeIMaterial2> *, class ResourceId_t); /* linkage=_ZN21CStrongHandleCopyableI29InfoForResourceTypeIMaterial2EC4E12ResourceId_t */
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeIMaterial2> *, const char  *); /* linkage=_ZN21CStrongHandleCopyableI29InfoForResourceTypeIMaterial2EC4EPKc */
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeIMaterial2> *, const class CStrongHandleCopyable<InfoForResourceTypeIMaterial2>  &); /* linkage=_ZN21CStrongHandleCopyableI29InfoForResourceTypeIMaterial2EC4ERKS1_ */
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeIMaterial2> *, const class CStrongHandle<InfoForResourceTypeIMaterial2>  &); /* linkage=_ZN21CStrongHandleCopyableI29InfoForResourceTypeIMaterial2EC4ERK13CStrongHandleIS0_E */
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeIMaterial2> *, const class CWeakHandle<InfoForResourceTypeIMaterial2>  &); /* linkage=_ZN21CStrongHandleCopyableI29InfoForResourceTypeIMaterial2EC4ERK11CWeakHandleIS0_E */
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeIMaterial2> *, class CStrongHandleCopyable<InfoForResourceTypeIMaterial2> &); /* linkage=_ZN21CStrongHandleCopyableI29InfoForResourceTypeIMaterial2EC4EOS1_ */
	class CStrongHandleCopyable<InfoForResourceTypeIMaterial2> & operator=(class CStrongHandleCopyable<InfoForResourceTypeIMaterial2> *, ResourceHandleTyped_t); /* linkage=_ZN21CStrongHandleCopyableI29InfoForResourceTypeIMaterial2EaSEPK17ResourceBinding_tIS0_E */
	class CStrongHandleCopyable<InfoForResourceTypeIMaterial2> & operator=(class CStrongHandleCopyable<InfoForResourceTypeIMaterial2> *, const class CStrongHandle<InfoForResourceTypeIMaterial2>  &); /* linkage=_ZN21CStrongHandleCopyableI29InfoForResourceTypeIMaterial2EaSERK13CStrongHandleIS0_E */
	class CStrongHandleCopyable<InfoForResourceTypeIMaterial2> & operator=(class CStrongHandleCopyable<InfoForResourceTypeIMaterial2> *, const class CWeakHandle<InfoForResourceTypeIMaterial2>  &); /* linkage=_ZN21CStrongHandleCopyableI29InfoForResourceTypeIMaterial2EaSERK11CWeakHandleIS0_E */
	class CStrongHandleCopyable<InfoForResourceTypeIMaterial2> & operator=(class CStrongHandleCopyable<InfoForResourceTypeIMaterial2> *, const class CStrongHandleCopyable<InfoForResourceTypeIMaterial2>  &); /* linkage=_ZN21CStrongHandleCopyableI29InfoForResourceTypeIMaterial2EaSERKS1_ */
	class CStrongHandleCopyable<InfoForResourceTypeIMaterial2> & operator=(class CStrongHandleCopyable<InfoForResourceTypeIMaterial2> *, class CStrongHandleCopyable<InfoForResourceTypeIMaterial2> &); /* linkage=_ZN21CStrongHandleCopyableI29InfoForResourceTypeIMaterial2EaSEOS1_ */
	void ~CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeIMaterial2> *); /* linkage=_ZN21CStrongHandleCopyableI29InfoForResourceTypeIMaterial2ED4Ev */
};

// <00092DE5> ../public/resourcesystem/stronghandle.h:211
// member functions: 28
// member variable: 1
// class size: 8
class CStrongHandleCopyable<InfoForResourceTypeCTextureBase> : public CStrongHandle<InfoForResourceTypeCTextureBase> {
public:
	/* class CStrongHandle<InfoForResourceTypeCTextureBase> <ancestor>; */ /* 0 8 */
	/* ../public/resourcesystem/stronghandle.h:217 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCTextureBase>* );
	/* ../public/resourcesystem/stronghandle.h:218 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCTextureBase>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:215 */
	typedef ResourceHandleTyped_t ResourceHandleTyped_t;
	/* ../public/resourcesystem/stronghandle.h:219 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCTextureBase>* , ResourceId_t);
	/* ../public/resourcesystem/stronghandle.h:220 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCTextureBase>* , const char* );
	/* ../public/resourcesystem/stronghandle.h:221 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCTextureBase>* , const CStrongHandleCopyable<InfoForResourceTypeCTextureBase>& );
	/* ../public/resourcesystem/stronghandle.h:222 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCTextureBase>* , const CStrongHandle<InfoForResourceTypeCTextureBase>& );
	/* ../public/resourcesystem/stronghandle.h:223 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCTextureBase>* , const CWeakHandle<InfoForResourceTypeCTextureBase>& );
	/* ../public/resourcesystem/stronghandle.h:224 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCTextureBase>* , CStrongHandleCopyable<InfoForResourceTypeCTextureBase>& );
	/* ../public/resourcesystem/stronghandle.h:227 */
	CStrongHandleCopyable<InfoForResourceTypeCTextureBase>& operator=(CStrongHandleCopyable<InfoForResourceTypeCTextureBase>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:232 */
	CStrongHandleCopyable<InfoForResourceTypeCTextureBase>& operator=(CStrongHandleCopyable<InfoForResourceTypeCTextureBase>* , const CStrongHandle<InfoForResourceTypeCTextureBase>& );
	/* ../public/resourcesystem/stronghandle.h:237 */
	CStrongHandleCopyable<InfoForResourceTypeCTextureBase>& operator=(CStrongHandleCopyable<InfoForResourceTypeCTextureBase>* , const CWeakHandle<InfoForResourceTypeCTextureBase>& );
	/* ../public/resourcesystem/stronghandle.h:242 */
	CStrongHandleCopyable<InfoForResourceTypeCTextureBase>& operator=(CStrongHandleCopyable<InfoForResourceTypeCTextureBase>* , const CStrongHandleCopyable<InfoForResourceTypeCTextureBase>& );
	/* ../public/resourcesystem/stronghandle.h:248 */
	CStrongHandleCopyable<InfoForResourceTypeCTextureBase>& operator=(CStrongHandleCopyable<InfoForResourceTypeCTextureBase>* , CStrongHandleCopyable<InfoForResourceTypeCTextureBase>& );
	void ~CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCTextureBase>* );
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeCTextureBase> *); /* linkage=_ZN21CStrongHandleCopyableI31InfoForResourceTypeCTextureBaseEC4Ev */
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeCTextureBase> *, ResourceHandleTyped_t); /* linkage=_ZN21CStrongHandleCopyableI31InfoForResourceTypeCTextureBaseEC4EPK17ResourceBinding_tIS0_E */
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeCTextureBase> *, class ResourceId_t); /* linkage=_ZN21CStrongHandleCopyableI31InfoForResourceTypeCTextureBaseEC4E12ResourceId_t */
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeCTextureBase> *, const char  *); /* linkage=_ZN21CStrongHandleCopyableI31InfoForResourceTypeCTextureBaseEC4EPKc */
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeCTextureBase> *, const class CStrongHandleCopyable<InfoForResourceTypeCTextureBase>  &); /* linkage=_ZN21CStrongHandleCopyableI31InfoForResourceTypeCTextureBaseEC4ERKS1_ */
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeCTextureBase> *, const class CStrongHandle<InfoForResourceTypeCTextureBase>  &); /* linkage=_ZN21CStrongHandleCopyableI31InfoForResourceTypeCTextureBaseEC4ERK13CStrongHandleIS0_E */
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeCTextureBase> *, const class CWeakHandle<InfoForResourceTypeCTextureBase>  &); /* linkage=_ZN21CStrongHandleCopyableI31InfoForResourceTypeCTextureBaseEC4ERK11CWeakHandleIS0_E */
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeCTextureBase> *, class CStrongHandleCopyable<InfoForResourceTypeCTextureBase> &); /* linkage=_ZN21CStrongHandleCopyableI31InfoForResourceTypeCTextureBaseEC4EOS1_ */
	class CStrongHandleCopyable<InfoForResourceTypeCTextureBase> & operator=(class CStrongHandleCopyable<InfoForResourceTypeCTextureBase> *, ResourceHandleTyped_t); /* linkage=_ZN21CStrongHandleCopyableI31InfoForResourceTypeCTextureBaseEaSEPK17ResourceBinding_tIS0_E */
	class CStrongHandleCopyable<InfoForResourceTypeCTextureBase> & operator=(class CStrongHandleCopyable<InfoForResourceTypeCTextureBase> *, const class CStrongHandle<InfoForResourceTypeCTextureBase>  &); /* linkage=_ZN21CStrongHandleCopyableI31InfoForResourceTypeCTextureBaseEaSERK13CStrongHandleIS0_E */
	class CStrongHandleCopyable<InfoForResourceTypeCTextureBase> & operator=(class CStrongHandleCopyable<InfoForResourceTypeCTextureBase> *, const class CWeakHandle<InfoForResourceTypeCTextureBase>  &); /* linkage=_ZN21CStrongHandleCopyableI31InfoForResourceTypeCTextureBaseEaSERK11CWeakHandleIS0_E */
	class CStrongHandleCopyable<InfoForResourceTypeCTextureBase> & operator=(class CStrongHandleCopyable<InfoForResourceTypeCTextureBase> *, const class CStrongHandleCopyable<InfoForResourceTypeCTextureBase>  &); /* linkage=_ZN21CStrongHandleCopyableI31InfoForResourceTypeCTextureBaseEaSERKS1_ */
	class CStrongHandleCopyable<InfoForResourceTypeCTextureBase> & operator=(class CStrongHandleCopyable<InfoForResourceTypeCTextureBase> *, class CStrongHandleCopyable<InfoForResourceTypeCTextureBase> &); /* linkage=_ZN21CStrongHandleCopyableI31InfoForResourceTypeCTextureBaseEaSEOS1_ */
	void ~CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeCTextureBase> *); /* linkage=_ZN21CStrongHandleCopyableI31InfoForResourceTypeCTextureBaseED4Ev */
};

// <006BB914> ../public/resourcesystem/stronghandle.h:211
// member functions: 27
// member variable: 1
// class size: 8
class CStrongHandleCopyable<InfoForResourceTypeCModel> : public CStrongHandle<InfoForResourceTypeCModel> {
public:
	/* class CStrongHandle<InfoForResourceTypeCModel> <ancestor>; */ /* 0 8 */
	/* ../public/resourcesystem/stronghandle.h:217 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCModel>* );
	/* ../public/resourcesystem/stronghandle.h:218 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCModel>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:215 */
	typedef ResourceHandleTyped_t ResourceHandleTyped_t;
	/* ../public/resourcesystem/stronghandle.h:219 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCModel>* , ResourceId_t);
	/* ../public/resourcesystem/stronghandle.h:220 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCModel>* , const char* );
	/* ../public/resourcesystem/stronghandle.h:221 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCModel>* , const CStrongHandleCopyable<InfoForResourceTypeCModel>& );
	/* ../public/resourcesystem/stronghandle.h:222 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCModel>* , const CStrongHandle<InfoForResourceTypeCModel>& );
	/* ../public/resourcesystem/stronghandle.h:223 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCModel>* , const CWeakHandle<InfoForResourceTypeCModel>& );
	/* ../public/resourcesystem/stronghandle.h:224 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCModel>* , CStrongHandleCopyable<InfoForResourceTypeCModel>& );
	/* ../public/resourcesystem/stronghandle.h:227 */
	CStrongHandleCopyable<InfoForResourceTypeCModel>& operator=(CStrongHandleCopyable<InfoForResourceTypeCModel>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:232 */
	CStrongHandleCopyable<InfoForResourceTypeCModel>& operator=(CStrongHandleCopyable<InfoForResourceTypeCModel>* , const CStrongHandle<InfoForResourceTypeCModel>& );
	/* ../public/resourcesystem/stronghandle.h:237 */
	CStrongHandleCopyable<InfoForResourceTypeCModel>& operator=(CStrongHandleCopyable<InfoForResourceTypeCModel>* , const CWeakHandle<InfoForResourceTypeCModel>& );
	/* ../public/resourcesystem/stronghandle.h:242 */
	CStrongHandleCopyable<InfoForResourceTypeCModel>& operator=(CStrongHandleCopyable<InfoForResourceTypeCModel>* , const CStrongHandleCopyable<InfoForResourceTypeCModel>& );
	/* ../public/resourcesystem/stronghandle.h:248 */
	CStrongHandleCopyable<InfoForResourceTypeCModel>& operator=(CStrongHandleCopyable<InfoForResourceTypeCModel>* , CStrongHandleCopyable<InfoForResourceTypeCModel>& );
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeCModel> *); /* linkage=_ZN21CStrongHandleCopyableI25InfoForResourceTypeCModelEC4Ev */
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeCModel> *, ResourceHandleTyped_t); /* linkage=_ZN21CStrongHandleCopyableI25InfoForResourceTypeCModelEC4EPK17ResourceBinding_tIS0_E */
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeCModel> *, class ResourceId_t); /* linkage=_ZN21CStrongHandleCopyableI25InfoForResourceTypeCModelEC4E12ResourceId_t */
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeCModel> *, const char  *); /* linkage=_ZN21CStrongHandleCopyableI25InfoForResourceTypeCModelEC4EPKc */
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeCModel> *, const class CStrongHandleCopyable<InfoForResourceTypeCModel>  &); /* linkage=_ZN21CStrongHandleCopyableI25InfoForResourceTypeCModelEC4ERKS1_ */
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeCModel> *, const class CStrongHandle<InfoForResourceTypeCModel>  &); /* linkage=_ZN21CStrongHandleCopyableI25InfoForResourceTypeCModelEC4ERK13CStrongHandleIS0_E */
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeCModel> *, const class CWeakHandle<InfoForResourceTypeCModel>  &); /* linkage=_ZN21CStrongHandleCopyableI25InfoForResourceTypeCModelEC4ERK11CWeakHandleIS0_E */
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeCModel> *, class CStrongHandleCopyable<InfoForResourceTypeCModel> &); /* linkage=_ZN21CStrongHandleCopyableI25InfoForResourceTypeCModelEC4EOS1_ */
	class CStrongHandleCopyable<InfoForResourceTypeCModel> & operator=(class CStrongHandleCopyable<InfoForResourceTypeCModel> *, ResourceHandleTyped_t); /* linkage=_ZN21CStrongHandleCopyableI25InfoForResourceTypeCModelEaSEPK17ResourceBinding_tIS0_E */
	class CStrongHandleCopyable<InfoForResourceTypeCModel> & operator=(class CStrongHandleCopyable<InfoForResourceTypeCModel> *, const class CStrongHandle<InfoForResourceTypeCModel>  &); /* linkage=_ZN21CStrongHandleCopyableI25InfoForResourceTypeCModelEaSERK13CStrongHandleIS0_E */
	class CStrongHandleCopyable<InfoForResourceTypeCModel> & operator=(class CStrongHandleCopyable<InfoForResourceTypeCModel> *, const class CWeakHandle<InfoForResourceTypeCModel>  &); /* linkage=_ZN21CStrongHandleCopyableI25InfoForResourceTypeCModelEaSERK11CWeakHandleIS0_E */
	class CStrongHandleCopyable<InfoForResourceTypeCModel> & operator=(class CStrongHandleCopyable<InfoForResourceTypeCModel> *, const class CStrongHandleCopyable<InfoForResourceTypeCModel>  &); /* linkage=_ZN21CStrongHandleCopyableI25InfoForResourceTypeCModelEaSERKS1_ */
	class CStrongHandleCopyable<InfoForResourceTypeCModel> & operator=(class CStrongHandleCopyable<InfoForResourceTypeCModel> *, class CStrongHandleCopyable<InfoForResourceTypeCModel> &); /* linkage=_ZN21CStrongHandleCopyableI25InfoForResourceTypeCModelEaSEOS1_ */
	void ~CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeCModel> *); /* linkage=_ZN21CStrongHandleCopyableI25InfoForResourceTypeCModelED4Ev */
};

// <00E114AA> ../public/resourcesystem/stronghandle.h:211
// member functions: 28
// member variable: 1
// class size: 8
class CStrongHandleCopyable<InfoForResourceTypeCEntityLump> : public CStrongHandle<InfoForResourceTypeCEntityLump> {
public:
	/* class CStrongHandle<InfoForResourceTypeCEntityLump> <ancestor>; */ /* 0 8 */
	/* ../public/resourcesystem/stronghandle.h:217 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCEntityLump>* );
	/* ../public/resourcesystem/stronghandle.h:218 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCEntityLump>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:215 */
	typedef ResourceHandleTyped_t ResourceHandleTyped_t;
	/* ../public/resourcesystem/stronghandle.h:219 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCEntityLump>* , ResourceId_t);
	/* ../public/resourcesystem/stronghandle.h:220 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCEntityLump>* , const char* );
	/* ../public/resourcesystem/stronghandle.h:221 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCEntityLump>* , const CStrongHandleCopyable<InfoForResourceTypeCEntityLump>& );
	/* ../public/resourcesystem/stronghandle.h:222 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCEntityLump>* , const CStrongHandle<InfoForResourceTypeCEntityLump>& );
	/* ../public/resourcesystem/stronghandle.h:223 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCEntityLump>* , const CWeakHandle<InfoForResourceTypeCEntityLump>& );
	/* ../public/resourcesystem/stronghandle.h:224 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCEntityLump>* , CStrongHandleCopyable<InfoForResourceTypeCEntityLump>& );
	/* ../public/resourcesystem/stronghandle.h:227 */
	CStrongHandleCopyable<InfoForResourceTypeCEntityLump>& operator=(CStrongHandleCopyable<InfoForResourceTypeCEntityLump>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:232 */
	CStrongHandleCopyable<InfoForResourceTypeCEntityLump>& operator=(CStrongHandleCopyable<InfoForResourceTypeCEntityLump>* , const CStrongHandle<InfoForResourceTypeCEntityLump>& );
	/* ../public/resourcesystem/stronghandle.h:237 */
	CStrongHandleCopyable<InfoForResourceTypeCEntityLump>& operator=(CStrongHandleCopyable<InfoForResourceTypeCEntityLump>* , const CWeakHandle<InfoForResourceTypeCEntityLump>& );
	/* ../public/resourcesystem/stronghandle.h:242 */
	CStrongHandleCopyable<InfoForResourceTypeCEntityLump>& operator=(CStrongHandleCopyable<InfoForResourceTypeCEntityLump>* , const CStrongHandleCopyable<InfoForResourceTypeCEntityLump>& );
	/* ../public/resourcesystem/stronghandle.h:248 */
	CStrongHandleCopyable<InfoForResourceTypeCEntityLump>& operator=(CStrongHandleCopyable<InfoForResourceTypeCEntityLump>* , CStrongHandleCopyable<InfoForResourceTypeCEntityLump>& );
	void ~CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCEntityLump>* );
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeCEntityLump> *); /* linkage=_ZN21CStrongHandleCopyableI30InfoForResourceTypeCEntityLumpEC4Ev */
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeCEntityLump> *, ResourceHandleTyped_t); /* linkage=_ZN21CStrongHandleCopyableI30InfoForResourceTypeCEntityLumpEC4EPK17ResourceBinding_tIS0_E */
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeCEntityLump> *, class ResourceId_t); /* linkage=_ZN21CStrongHandleCopyableI30InfoForResourceTypeCEntityLumpEC4E12ResourceId_t */
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeCEntityLump> *, const char  *); /* linkage=_ZN21CStrongHandleCopyableI30InfoForResourceTypeCEntityLumpEC4EPKc */
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeCEntityLump> *, const class CStrongHandleCopyable<InfoForResourceTypeCEntityLump>  &); /* linkage=_ZN21CStrongHandleCopyableI30InfoForResourceTypeCEntityLumpEC4ERKS1_ */
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeCEntityLump> *, const class CStrongHandle<InfoForResourceTypeCEntityLump>  &); /* linkage=_ZN21CStrongHandleCopyableI30InfoForResourceTypeCEntityLumpEC4ERK13CStrongHandleIS0_E */
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeCEntityLump> *, const class CWeakHandle<InfoForResourceTypeCEntityLump>  &); /* linkage=_ZN21CStrongHandleCopyableI30InfoForResourceTypeCEntityLumpEC4ERK11CWeakHandleIS0_E */
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeCEntityLump> *, class CStrongHandleCopyable<InfoForResourceTypeCEntityLump> &); /* linkage=_ZN21CStrongHandleCopyableI30InfoForResourceTypeCEntityLumpEC4EOS1_ */
	class CStrongHandleCopyable<InfoForResourceTypeCEntityLump> & operator=(class CStrongHandleCopyable<InfoForResourceTypeCEntityLump> *, ResourceHandleTyped_t); /* linkage=_ZN21CStrongHandleCopyableI30InfoForResourceTypeCEntityLumpEaSEPK17ResourceBinding_tIS0_E */
	class CStrongHandleCopyable<InfoForResourceTypeCEntityLump> & operator=(class CStrongHandleCopyable<InfoForResourceTypeCEntityLump> *, const class CStrongHandle<InfoForResourceTypeCEntityLump>  &); /* linkage=_ZN21CStrongHandleCopyableI30InfoForResourceTypeCEntityLumpEaSERK13CStrongHandleIS0_E */
	class CStrongHandleCopyable<InfoForResourceTypeCEntityLump> & operator=(class CStrongHandleCopyable<InfoForResourceTypeCEntityLump> *, const class CWeakHandle<InfoForResourceTypeCEntityLump>  &); /* linkage=_ZN21CStrongHandleCopyableI30InfoForResourceTypeCEntityLumpEaSERK11CWeakHandleIS0_E */
	class CStrongHandleCopyable<InfoForResourceTypeCEntityLump> & operator=(class CStrongHandleCopyable<InfoForResourceTypeCEntityLump> *, const class CStrongHandleCopyable<InfoForResourceTypeCEntityLump>  &); /* linkage=_ZN21CStrongHandleCopyableI30InfoForResourceTypeCEntityLumpEaSERKS1_ */
	class CStrongHandleCopyable<InfoForResourceTypeCEntityLump> & operator=(class CStrongHandleCopyable<InfoForResourceTypeCEntityLump> *, class CStrongHandleCopyable<InfoForResourceTypeCEntityLump> &); /* linkage=_ZN21CStrongHandleCopyableI30InfoForResourceTypeCEntityLumpEaSEOS1_ */
	void ~CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeCEntityLump> *); /* linkage=_ZN21CStrongHandleCopyableI30InfoForResourceTypeCEntityLumpED4Ev */
};

// <0114DB86> ../public/resourcesystem/stronghandle.h:211
// member functions: 13
// member variable: 1
// class size: 8
class CStrongHandleCopyable<InfoForResourceTypeCRenderMesh> : public CStrongHandle<InfoForResourceTypeCRenderMesh> {
public:
	/* class CStrongHandle<InfoForResourceTypeCRenderMesh> <ancestor>; */ /* 0 8 */
	/* ../public/resourcesystem/stronghandle.h:217 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCRenderMesh>* );
	/* ../public/resourcesystem/stronghandle.h:218 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCRenderMesh>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:215 */
	typedef ResourceHandleTyped_t ResourceHandleTyped_t;
	/* ../public/resourcesystem/stronghandle.h:219 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCRenderMesh>* , ResourceId_t);
	/* ../public/resourcesystem/stronghandle.h:220 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCRenderMesh>* , const char* );
	/* ../public/resourcesystem/stronghandle.h:221 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCRenderMesh>* , const CStrongHandleCopyable<InfoForResourceTypeCRenderMesh>& );
	/* ../public/resourcesystem/stronghandle.h:222 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCRenderMesh>* , const CStrongHandle<InfoForResourceTypeCRenderMesh>& );
	/* ../public/resourcesystem/stronghandle.h:223 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCRenderMesh>* , const CWeakHandle<InfoForResourceTypeCRenderMesh>& );
	/* ../public/resourcesystem/stronghandle.h:224 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCRenderMesh>* , CStrongHandleCopyable<InfoForResourceTypeCRenderMesh>& );
	/* ../public/resourcesystem/stronghandle.h:227 */
	CStrongHandleCopyable<InfoForResourceTypeCRenderMesh>& operator=(CStrongHandleCopyable<InfoForResourceTypeCRenderMesh>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:232 */
	CStrongHandleCopyable<InfoForResourceTypeCRenderMesh>& operator=(CStrongHandleCopyable<InfoForResourceTypeCRenderMesh>* , const CStrongHandle<InfoForResourceTypeCRenderMesh>& );
	/* ../public/resourcesystem/stronghandle.h:237 */
	CStrongHandleCopyable<InfoForResourceTypeCRenderMesh>& operator=(CStrongHandleCopyable<InfoForResourceTypeCRenderMesh>* , const CWeakHandle<InfoForResourceTypeCRenderMesh>& );
	/* ../public/resourcesystem/stronghandle.h:242 */
	CStrongHandleCopyable<InfoForResourceTypeCRenderMesh>& operator=(CStrongHandleCopyable<InfoForResourceTypeCRenderMesh>* , const CStrongHandleCopyable<InfoForResourceTypeCRenderMesh>& );
	/* ../public/resourcesystem/stronghandle.h:248 */
	CStrongHandleCopyable<InfoForResourceTypeCRenderMesh>& operator=(CStrongHandleCopyable<InfoForResourceTypeCRenderMesh>* , CStrongHandleCopyable<InfoForResourceTypeCRenderMesh>& );
};

// <01151725> ../public/resourcesystem/stronghandle.h:211
// member functions: 13
// member variable: 1
// class size: 8
class CStrongHandleCopyable<InfoForResourceTypeVSound_t> : public CStrongHandle<InfoForResourceTypeVSound_t> {
public:
	/* class CStrongHandle<InfoForResourceTypeVSound_t> <ancestor>; */ /* 0 8 */
	/* ../public/resourcesystem/stronghandle.h:217 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeVSound_t>* );
	/* ../public/resourcesystem/stronghandle.h:218 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeVSound_t>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:215 */
	typedef ResourceHandleTyped_t ResourceHandleTyped_t;
	/* ../public/resourcesystem/stronghandle.h:219 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeVSound_t>* , ResourceId_t);
	/* ../public/resourcesystem/stronghandle.h:220 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeVSound_t>* , const char* );
	/* ../public/resourcesystem/stronghandle.h:221 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeVSound_t>* , const CStrongHandleCopyable<InfoForResourceTypeVSound_t>& );
	/* ../public/resourcesystem/stronghandle.h:222 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeVSound_t>* , const CStrongHandle<InfoForResourceTypeVSound_t>& );
	/* ../public/resourcesystem/stronghandle.h:223 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeVSound_t>* , const CWeakHandle<InfoForResourceTypeVSound_t>& );
	/* ../public/resourcesystem/stronghandle.h:224 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeVSound_t>* , CStrongHandleCopyable<InfoForResourceTypeVSound_t>& );
	/* ../public/resourcesystem/stronghandle.h:227 */
	CStrongHandleCopyable<InfoForResourceTypeVSound_t>& operator=(CStrongHandleCopyable<InfoForResourceTypeVSound_t>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:232 */
	CStrongHandleCopyable<InfoForResourceTypeVSound_t>& operator=(CStrongHandleCopyable<InfoForResourceTypeVSound_t>* , const CStrongHandle<InfoForResourceTypeVSound_t>& );
	/* ../public/resourcesystem/stronghandle.h:237 */
	CStrongHandleCopyable<InfoForResourceTypeVSound_t>& operator=(CStrongHandleCopyable<InfoForResourceTypeVSound_t>* , const CWeakHandle<InfoForResourceTypeVSound_t>& );
	/* ../public/resourcesystem/stronghandle.h:242 */
	CStrongHandleCopyable<InfoForResourceTypeVSound_t>& operator=(CStrongHandleCopyable<InfoForResourceTypeVSound_t>* , const CStrongHandleCopyable<InfoForResourceTypeVSound_t>& );
	/* ../public/resourcesystem/stronghandle.h:248 */
	CStrongHandleCopyable<InfoForResourceTypeVSound_t>& operator=(CStrongHandleCopyable<InfoForResourceTypeVSound_t>* , CStrongHandleCopyable<InfoForResourceTypeVSound_t>& );
};

// <0115324C> ../public/resourcesystem/stronghandle.h:211
// member functions: 27
// member variable: 1
// class size: 8
class CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> : public CStrongHandle<InfoForResourceTypeIAnimationGraph> {
public:
	/* class CStrongHandle<InfoForResourceTypeIAnimationGraph> <ancestor>; */ /* 0 8 */
	/* ../public/resourcesystem/stronghandle.h:217 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>* );
	/* ../public/resourcesystem/stronghandle.h:218 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:215 */
	typedef ResourceHandleTyped_t ResourceHandleTyped_t;
	/* ../public/resourcesystem/stronghandle.h:219 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>* , ResourceId_t);
	/* ../public/resourcesystem/stronghandle.h:220 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>* , const char* );
	/* ../public/resourcesystem/stronghandle.h:221 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>* , const CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>& );
	/* ../public/resourcesystem/stronghandle.h:222 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>* , const CStrongHandle<InfoForResourceTypeIAnimationGraph>& );
	/* ../public/resourcesystem/stronghandle.h:223 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>* , const CWeakHandle<InfoForResourceTypeIAnimationGraph>& );
	/* ../public/resourcesystem/stronghandle.h:224 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>* , CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>& );
	/* ../public/resourcesystem/stronghandle.h:227 */
	CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>& operator=(CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:232 */
	CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>& operator=(CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>* , const CStrongHandle<InfoForResourceTypeIAnimationGraph>& );
	/* ../public/resourcesystem/stronghandle.h:237 */
	CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>& operator=(CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>* , const CWeakHandle<InfoForResourceTypeIAnimationGraph>& );
	/* ../public/resourcesystem/stronghandle.h:242 */
	CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>& operator=(CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>* , const CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>& );
	/* ../public/resourcesystem/stronghandle.h:248 */
	CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>& operator=(CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>* , CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>& );
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> *); /* linkage=_ZN21CStrongHandleCopyableI34InfoForResourceTypeIAnimationGraphEC4Ev */
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> *, ResourceHandleTyped_t); /* linkage=_ZN21CStrongHandleCopyableI34InfoForResourceTypeIAnimationGraphEC4EPK17ResourceBinding_tIS0_E */
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> *, class ResourceId_t); /* linkage=_ZN21CStrongHandleCopyableI34InfoForResourceTypeIAnimationGraphEC4E12ResourceId_t */
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> *, const char  *); /* linkage=_ZN21CStrongHandleCopyableI34InfoForResourceTypeIAnimationGraphEC4EPKc */
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> *, const class CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>  &); /* linkage=_ZN21CStrongHandleCopyableI34InfoForResourceTypeIAnimationGraphEC4ERKS1_ */
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> *, const class CStrongHandle<InfoForResourceTypeIAnimationGraph>  &); /* linkage=_ZN21CStrongHandleCopyableI34InfoForResourceTypeIAnimationGraphEC4ERK13CStrongHandleIS0_E */
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> *, const class CWeakHandle<InfoForResourceTypeIAnimationGraph>  &); /* linkage=_ZN21CStrongHandleCopyableI34InfoForResourceTypeIAnimationGraphEC4ERK11CWeakHandleIS0_E */
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> *, class CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> &); /* linkage=_ZN21CStrongHandleCopyableI34InfoForResourceTypeIAnimationGraphEC4EOS1_ */
	class CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> & operator=(class CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> *, ResourceHandleTyped_t); /* linkage=_ZN21CStrongHandleCopyableI34InfoForResourceTypeIAnimationGraphEaSEPK17ResourceBinding_tIS0_E */
	class CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> & operator=(class CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> *, const class CStrongHandle<InfoForResourceTypeIAnimationGraph>  &); /* linkage=_ZN21CStrongHandleCopyableI34InfoForResourceTypeIAnimationGraphEaSERK13CStrongHandleIS0_E */
	class CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> & operator=(class CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> *, const class CWeakHandle<InfoForResourceTypeIAnimationGraph>  &); /* linkage=_ZN21CStrongHandleCopyableI34InfoForResourceTypeIAnimationGraphEaSERK11CWeakHandleIS0_E */
	class CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> & operator=(class CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> *, const class CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>  &); /* linkage=_ZN21CStrongHandleCopyableI34InfoForResourceTypeIAnimationGraphEaSERKS1_ */
	class CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> & operator=(class CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> *, class CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> &); /* linkage=_ZN21CStrongHandleCopyableI34InfoForResourceTypeIAnimationGraphEaSEOS1_ */
	void ~CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> *); /* linkage=_ZN21CStrongHandleCopyableI34InfoForResourceTypeIAnimationGraphED4Ev */
};

// <01154AD0> ../public/resourcesystem/stronghandle.h:211
// member functions: 13
// member variable: 1
// class size: 8
class CStrongHandleCopyable<InfoForResourceTypeCVfx> : public CStrongHandle<InfoForResourceTypeCVfx> {
public:
	/* class CStrongHandle<InfoForResourceTypeCVfx> <ancestor>; */ /* 0 8 */
	/* ../public/resourcesystem/stronghandle.h:217 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCVfx>* );
	/* ../public/resourcesystem/stronghandle.h:218 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCVfx>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:215 */
	typedef ResourceHandleTyped_t ResourceHandleTyped_t;
	/* ../public/resourcesystem/stronghandle.h:219 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCVfx>* , ResourceId_t);
	/* ../public/resourcesystem/stronghandle.h:220 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCVfx>* , const char* );
	/* ../public/resourcesystem/stronghandle.h:221 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCVfx>* , const CStrongHandleCopyable<InfoForResourceTypeCVfx>& );
	/* ../public/resourcesystem/stronghandle.h:222 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCVfx>* , const CStrongHandle<InfoForResourceTypeCVfx>& );
	/* ../public/resourcesystem/stronghandle.h:223 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCVfx>* , const CWeakHandle<InfoForResourceTypeCVfx>& );
	/* ../public/resourcesystem/stronghandle.h:224 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCVfx>* , CStrongHandleCopyable<InfoForResourceTypeCVfx>& );
	/* ../public/resourcesystem/stronghandle.h:227 */
	CStrongHandleCopyable<InfoForResourceTypeCVfx>& operator=(CStrongHandleCopyable<InfoForResourceTypeCVfx>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:232 */
	CStrongHandleCopyable<InfoForResourceTypeCVfx>& operator=(CStrongHandleCopyable<InfoForResourceTypeCVfx>* , const CStrongHandle<InfoForResourceTypeCVfx>& );
	/* ../public/resourcesystem/stronghandle.h:237 */
	CStrongHandleCopyable<InfoForResourceTypeCVfx>& operator=(CStrongHandleCopyable<InfoForResourceTypeCVfx>* , const CWeakHandle<InfoForResourceTypeCVfx>& );
	/* ../public/resourcesystem/stronghandle.h:242 */
	CStrongHandleCopyable<InfoForResourceTypeCVfx>& operator=(CStrongHandleCopyable<InfoForResourceTypeCVfx>* , const CStrongHandleCopyable<InfoForResourceTypeCVfx>& );
	/* ../public/resourcesystem/stronghandle.h:248 */
	CStrongHandleCopyable<InfoForResourceTypeCVfx>& operator=(CStrongHandleCopyable<InfoForResourceTypeCVfx>* , CStrongHandleCopyable<InfoForResourceTypeCVfx>& );
};

// <00D7392A> ../public/resourcesystem/stronghandle.h:211
// member functions: 28
// member variable: 1
// class size: 8
class CStrongHandleCopyable<InfoForResourceTypeCModel> : public CStrongHandle<InfoForResourceTypeCModel> {
public:
	/* class CStrongHandle<InfoForResourceTypeCModel> <ancestor>; */ /* 0 8 */
	/* ../public/resourcesystem/stronghandle.h:217 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCModel>* );
	/* ../public/resourcesystem/stronghandle.h:218 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCModel>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:215 */
	typedef ResourceHandleTyped_t ResourceHandleTyped_t;
	/* ../public/resourcesystem/stronghandle.h:219 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCModel>* , ResourceId_t);
	/* ../public/resourcesystem/stronghandle.h:220 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCModel>* , const char* );
	/* ../public/resourcesystem/stronghandle.h:221 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCModel>* , const CStrongHandleCopyable<InfoForResourceTypeCModel>& );
	/* ../public/resourcesystem/stronghandle.h:222 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCModel>* , const CStrongHandle<InfoForResourceTypeCModel>& );
	/* ../public/resourcesystem/stronghandle.h:223 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCModel>* , const CWeakHandle<InfoForResourceTypeCModel>& );
	/* ../public/resourcesystem/stronghandle.h:224 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCModel>* , CStrongHandleCopyable<InfoForResourceTypeCModel>& );
	/* ../public/resourcesystem/stronghandle.h:227 */
	CStrongHandleCopyable<InfoForResourceTypeCModel>& operator=(CStrongHandleCopyable<InfoForResourceTypeCModel>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:232 */
	CStrongHandleCopyable<InfoForResourceTypeCModel>& operator=(CStrongHandleCopyable<InfoForResourceTypeCModel>* , const CStrongHandle<InfoForResourceTypeCModel>& );
	/* ../public/resourcesystem/stronghandle.h:237 */
	CStrongHandleCopyable<InfoForResourceTypeCModel>& operator=(CStrongHandleCopyable<InfoForResourceTypeCModel>* , const CWeakHandle<InfoForResourceTypeCModel>& );
	/* ../public/resourcesystem/stronghandle.h:242 */
	CStrongHandleCopyable<InfoForResourceTypeCModel>& operator=(CStrongHandleCopyable<InfoForResourceTypeCModel>* , const CStrongHandleCopyable<InfoForResourceTypeCModel>& );
	/* ../public/resourcesystem/stronghandle.h:248 */
	CStrongHandleCopyable<InfoForResourceTypeCModel>& operator=(CStrongHandleCopyable<InfoForResourceTypeCModel>* , CStrongHandleCopyable<InfoForResourceTypeCModel>& );
	void ~CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCModel>* );
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeCModel> *); /* linkage=_ZN21CStrongHandleCopyableI25InfoForResourceTypeCModelEC4Ev */
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeCModel> *, ResourceHandleTyped_t); /* linkage=_ZN21CStrongHandleCopyableI25InfoForResourceTypeCModelEC4EPK17ResourceBinding_tIS0_E */
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeCModel> *, class ResourceId_t); /* linkage=_ZN21CStrongHandleCopyableI25InfoForResourceTypeCModelEC4E12ResourceId_t */
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeCModel> *, const char  *); /* linkage=_ZN21CStrongHandleCopyableI25InfoForResourceTypeCModelEC4EPKc */
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeCModel> *, const class CStrongHandleCopyable<InfoForResourceTypeCModel>  &); /* linkage=_ZN21CStrongHandleCopyableI25InfoForResourceTypeCModelEC4ERKS1_ */
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeCModel> *, const class CStrongHandle<InfoForResourceTypeCModel>  &); /* linkage=_ZN21CStrongHandleCopyableI25InfoForResourceTypeCModelEC4ERK13CStrongHandleIS0_E */
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeCModel> *, const class CWeakHandle<InfoForResourceTypeCModel>  &); /* linkage=_ZN21CStrongHandleCopyableI25InfoForResourceTypeCModelEC4ERK11CWeakHandleIS0_E */
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeCModel> *, class CStrongHandleCopyable<InfoForResourceTypeCModel> &); /* linkage=_ZN21CStrongHandleCopyableI25InfoForResourceTypeCModelEC4EOS1_ */
	class CStrongHandleCopyable<InfoForResourceTypeCModel> & operator=(class CStrongHandleCopyable<InfoForResourceTypeCModel> *, ResourceHandleTyped_t); /* linkage=_ZN21CStrongHandleCopyableI25InfoForResourceTypeCModelEaSEPK17ResourceBinding_tIS0_E */
	class CStrongHandleCopyable<InfoForResourceTypeCModel> & operator=(class CStrongHandleCopyable<InfoForResourceTypeCModel> *, const class CStrongHandle<InfoForResourceTypeCModel>  &); /* linkage=_ZN21CStrongHandleCopyableI25InfoForResourceTypeCModelEaSERK13CStrongHandleIS0_E */
	class CStrongHandleCopyable<InfoForResourceTypeCModel> & operator=(class CStrongHandleCopyable<InfoForResourceTypeCModel> *, const class CWeakHandle<InfoForResourceTypeCModel>  &); /* linkage=_ZN21CStrongHandleCopyableI25InfoForResourceTypeCModelEaSERK11CWeakHandleIS0_E */
	class CStrongHandleCopyable<InfoForResourceTypeCModel> & operator=(class CStrongHandleCopyable<InfoForResourceTypeCModel> *, const class CStrongHandleCopyable<InfoForResourceTypeCModel>  &); /* linkage=_ZN21CStrongHandleCopyableI25InfoForResourceTypeCModelEaSERKS1_ */
	class CStrongHandleCopyable<InfoForResourceTypeCModel> & operator=(class CStrongHandleCopyable<InfoForResourceTypeCModel> *, class CStrongHandleCopyable<InfoForResourceTypeCModel> &); /* linkage=_ZN21CStrongHandleCopyableI25InfoForResourceTypeCModelEaSEOS1_ */
	void ~CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeCModel> *); /* linkage=_ZN21CStrongHandleCopyableI25InfoForResourceTypeCModelED4Ev */
};

// <000BC34A> ../public/resourcesystem/stronghandle.h:211
// member functions: 28
// member variable: 1
// class size: 8
class CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> : public CStrongHandle<InfoForResourceTypeIAnimationGraph> {
public:
	/* class CStrongHandle<InfoForResourceTypeIAnimationGraph> <ancestor>; */ /* 0 8 */
	/* ../public/resourcesystem/stronghandle.h:217 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>* );
	/* ../public/resourcesystem/stronghandle.h:218 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:215 */
	typedef ResourceHandleTyped_t ResourceHandleTyped_t;
	/* ../public/resourcesystem/stronghandle.h:219 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>* , ResourceId_t);
	/* ../public/resourcesystem/stronghandle.h:220 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>* , const char* );
	/* ../public/resourcesystem/stronghandle.h:221 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>* , const CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>& );
	/* ../public/resourcesystem/stronghandle.h:222 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>* , const CStrongHandle<InfoForResourceTypeIAnimationGraph>& );
	/* ../public/resourcesystem/stronghandle.h:223 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>* , const CWeakHandle<InfoForResourceTypeIAnimationGraph>& );
	/* ../public/resourcesystem/stronghandle.h:224 */
	void CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>* , CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>& );
	/* ../public/resourcesystem/stronghandle.h:227 */
	CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>& operator=(CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:232 */
	CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>& operator=(CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>* , const CStrongHandle<InfoForResourceTypeIAnimationGraph>& );
	/* ../public/resourcesystem/stronghandle.h:237 */
	CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>& operator=(CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>* , const CWeakHandle<InfoForResourceTypeIAnimationGraph>& );
	/* ../public/resourcesystem/stronghandle.h:242 */
	CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>& operator=(CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>* , const CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>& );
	/* ../public/resourcesystem/stronghandle.h:248 */
	CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>& operator=(CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>* , CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>& );
	void ~CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>* );
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> *); /* linkage=_ZN21CStrongHandleCopyableI34InfoForResourceTypeIAnimationGraphEC4Ev */
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> *, ResourceHandleTyped_t); /* linkage=_ZN21CStrongHandleCopyableI34InfoForResourceTypeIAnimationGraphEC4EPK17ResourceBinding_tIS0_E */
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> *, class ResourceId_t); /* linkage=_ZN21CStrongHandleCopyableI34InfoForResourceTypeIAnimationGraphEC4E12ResourceId_t */
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> *, const char  *); /* linkage=_ZN21CStrongHandleCopyableI34InfoForResourceTypeIAnimationGraphEC4EPKc */
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> *, const class CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>  &); /* linkage=_ZN21CStrongHandleCopyableI34InfoForResourceTypeIAnimationGraphEC4ERKS1_ */
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> *, const class CStrongHandle<InfoForResourceTypeIAnimationGraph>  &); /* linkage=_ZN21CStrongHandleCopyableI34InfoForResourceTypeIAnimationGraphEC4ERK13CStrongHandleIS0_E */
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> *, const class CWeakHandle<InfoForResourceTypeIAnimationGraph>  &); /* linkage=_ZN21CStrongHandleCopyableI34InfoForResourceTypeIAnimationGraphEC4ERK11CWeakHandleIS0_E */
	void CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> *, class CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> &); /* linkage=_ZN21CStrongHandleCopyableI34InfoForResourceTypeIAnimationGraphEC4EOS1_ */
	class CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> & operator=(class CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> *, ResourceHandleTyped_t); /* linkage=_ZN21CStrongHandleCopyableI34InfoForResourceTypeIAnimationGraphEaSEPK17ResourceBinding_tIS0_E */
	class CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> & operator=(class CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> *, const class CStrongHandle<InfoForResourceTypeIAnimationGraph>  &); /* linkage=_ZN21CStrongHandleCopyableI34InfoForResourceTypeIAnimationGraphEaSERK13CStrongHandleIS0_E */
	class CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> & operator=(class CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> *, const class CWeakHandle<InfoForResourceTypeIAnimationGraph>  &); /* linkage=_ZN21CStrongHandleCopyableI34InfoForResourceTypeIAnimationGraphEaSERK11CWeakHandleIS0_E */
	class CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> & operator=(class CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> *, const class CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>  &); /* linkage=_ZN21CStrongHandleCopyableI34InfoForResourceTypeIAnimationGraphEaSERKS1_ */
	class CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> & operator=(class CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> *, class CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> &); /* linkage=_ZN21CStrongHandleCopyableI34InfoForResourceTypeIAnimationGraphEaSEOS1_ */
	void ~CStrongHandleCopyable(class CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph> *); /* linkage=_ZN21CStrongHandleCopyableI34InfoForResourceTypeIAnimationGraphED4Ev */
};

// <06316F7D> ../public/resourcesystem/stronghandle.h:217
void CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::CStrongHandleCopyable()
{
} /* size: 0 */

// <06316F64> ../public/resourcesystem/stronghandle.h:217
inline void CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::CStrongHandleCopyable()
{
} /* size: 0 */

// <04D2341E> ../public/resourcesystem/stronghandle.h:217
void CStrongHandleCopyable<InfoForResourceTypeIMaterial2>::CStrongHandleCopyable()
{
} /* size: 0 */

// <04D23405> ../public/resourcesystem/stronghandle.h:217
inline void CStrongHandleCopyable<InfoForResourceTypeIMaterial2>::CStrongHandleCopyable()
{
} /* size: 0 */

// <042DE328> ../public/resourcesystem/stronghandle.h:217
void CStrongHandleCopyable<InfoForResourceTypeCEntityLump>::CStrongHandleCopyable()
{
} /* size: 0 */

// <042DE30F> ../public/resourcesystem/stronghandle.h:217
inline void CStrongHandleCopyable<InfoForResourceTypeCEntityLump>::CStrongHandleCopyable()
{
} /* size: 0 */

// <00E0DFCC> ../public/resourcesystem/stronghandle.h:218
void CStrongHandleCopyable<InfoForResourceTypeCModel>::CStrongHandleCopyable(ResourceHandleTyped_t hResource)
{
} /* size: 0 */

// <00E0DFA7> ../public/resourcesystem/stronghandle.h:218
inline void CStrongHandleCopyable<InfoForResourceTypeCModel>::CStrongHandleCopyable(ResourceHandleTyped_t hResource)
{
} /* size: 0 */

// <062E91C1> ../public/resourcesystem/stronghandle.h:221
void CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::CStrongHandleCopyable(const CStrongHandleCopyable<InfoForResourceTypeCTextureBase>& src)
{
} /* size: 0 */

// <062E919C> ../public/resourcesystem/stronghandle.h:221
inline void CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::CStrongHandleCopyable(const CStrongHandleCopyable<InfoForResourceTypeCTextureBase>& src)
{
} /* size: 0 */

// <04D20241> ../public/resourcesystem/stronghandle.h:221
void CStrongHandleCopyable<InfoForResourceTypeIMaterial2>::CStrongHandleCopyable(const CStrongHandleCopyable<InfoForResourceTypeIMaterial2>& src)
{
} /* size: 0 */

// <04D2021C> ../public/resourcesystem/stronghandle.h:221
inline void CStrongHandleCopyable<InfoForResourceTypeIMaterial2>::CStrongHandleCopyable(const CStrongHandleCopyable<InfoForResourceTypeIMaterial2>& src)
{
} /* size: 0 */

// <012796D0> ../public/resourcesystem/stronghandle.h:222
void CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::CStrongHandleCopyable(const CStrongHandle<InfoForResourceTypeCTextureBase>& src)
{
} /* size: 0 */

// <012796AB> ../public/resourcesystem/stronghandle.h:222
inline void CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::CStrongHandleCopyable(const CStrongHandle<InfoForResourceTypeCTextureBase>& src)
{
} /* size: 0 */

// <0127917C> ../public/resourcesystem/stronghandle.h:222
void CStrongHandleCopyable<InfoForResourceTypeVSound_t>::CStrongHandleCopyable(const CStrongHandle<InfoForResourceTypeVSound_t>& src)
{
} /* size: 0 */

// <01279157> ../public/resourcesystem/stronghandle.h:222
inline void CStrongHandleCopyable<InfoForResourceTypeVSound_t>::CStrongHandleCopyable(const CStrongHandle<InfoForResourceTypeVSound_t>& src)
{
} /* size: 0 */

// <01277C98> ../public/resourcesystem/stronghandle.h:222
void CStrongHandleCopyable<InfoForResourceTypeCRenderMesh>::CStrongHandleCopyable(const CStrongHandle<InfoForResourceTypeCRenderMesh>& src)
{
} /* size: 0 */

// <01277C73> ../public/resourcesystem/stronghandle.h:222
inline void CStrongHandleCopyable<InfoForResourceTypeCRenderMesh>::CStrongHandleCopyable(const CStrongHandle<InfoForResourceTypeCRenderMesh>& src)
{
} /* size: 0 */

// <06312E65> ../public/resourcesystem/stronghandle.h:223
void CStrongHandleCopyable<InfoForResourceTypeIMaterial2>::CStrongHandleCopyable(const CWeakHandle<InfoForResourceTypeIMaterial2>& src)
{
} /* size: 0 */

// <06312E40> ../public/resourcesystem/stronghandle.h:223
inline void CStrongHandleCopyable<InfoForResourceTypeIMaterial2>::CStrongHandleCopyable(const CWeakHandle<InfoForResourceTypeIMaterial2>& src)
{
} /* size: 0 */

// <01279711> ../public/resourcesystem/stronghandle.h:223
void CStrongHandleCopyable<InfoForResourceTypeCModel>::CStrongHandleCopyable(const CWeakHandle<InfoForResourceTypeCModel>& src)
{
} /* size: 0 */

// <012796EC> ../public/resourcesystem/stronghandle.h:223
inline void CStrongHandleCopyable<InfoForResourceTypeCModel>::CStrongHandleCopyable(const CWeakHandle<InfoForResourceTypeCModel>& src)
{
} /* size: 0 */

// <01279625> ../public/resourcesystem/stronghandle.h:223
void CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::CStrongHandleCopyable(const CWeakHandle<InfoForResourceTypeCTextureBase>& src)
{
} /* size: 0 */

// <01279600> ../public/resourcesystem/stronghandle.h:223
inline void CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::CStrongHandleCopyable(const CWeakHandle<InfoForResourceTypeCTextureBase>& src)
{
} /* size: 0 */

// <0127950C> ../public/resourcesystem/stronghandle.h:223
void CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>::CStrongHandleCopyable(const CWeakHandle<InfoForResourceTypeIAnimationGraph>& src)
{
} /* size: 0 */

// <012794E7> ../public/resourcesystem/stronghandle.h:223
inline void CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>::CStrongHandleCopyable(const CWeakHandle<InfoForResourceTypeIAnimationGraph>& src)
{
} /* size: 0 */

// <01278759> ../public/resourcesystem/stronghandle.h:223
void CStrongHandleCopyable<InfoForResourceTypeCVfx>::CStrongHandleCopyable(const CWeakHandle<InfoForResourceTypeCVfx>& src)
{
} /* size: 0 */

// <01278734> ../public/resourcesystem/stronghandle.h:223
inline void CStrongHandleCopyable<InfoForResourceTypeCVfx>::CStrongHandleCopyable(const CWeakHandle<InfoForResourceTypeCVfx>& src)
{
} /* size: 0 */

// <00167343> ../public/resourcesystem/stronghandle.h:224
void CStrongHandleCopyable<InfoForResourceTypeCModel>::CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCModel>& src)
{
} /* size: 0 */

// <0016731E> ../public/resourcesystem/stronghandle.h:224
inline void CStrongHandleCopyable<InfoForResourceTypeCModel>::CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeCModel>& src)
{
} /* size: 0 */

// <00167260> ../public/resourcesystem/stronghandle.h:224
void CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>::CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>& src)
{
} /* size: 0 */

// <0016723B> ../public/resourcesystem/stronghandle.h:224
inline void CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>::CStrongHandleCopyable(CStrongHandleCopyable<InfoForResourceTypeIAnimationGraph>& src)
{
} /* size: 0 */

// <06316F0F> ../public/resourcesystem/stronghandle.h:227
inline void CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::operator=(ResourceHandleTyped_t hResource)
{
} /* size: 0 */

// <04D235BA> ../public/resourcesystem/stronghandle.h:227
inline void CStrongHandleCopyable<InfoForResourceTypeIMaterial2>::operator=(ResourceHandleTyped_t hResource)
{
} /* size: 0 */

// <04D20547> ../public/resourcesystem/stronghandle.h:237
inline void CStrongHandleCopyable<InfoForResourceTypeIMaterial2>::operator=(const CWeakHandle<InfoForResourceTypeIMaterial2>& src)
{
} /* size: 0 */

// <03129E23> ../public/resourcesystem/stronghandle.h:237
inline void CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::operator=(const CWeakHandle<InfoForResourceTypeCTextureBase>& src)
{
} /* size: 0 */

// <00E72250> ../public/resourcesystem/stronghandle.h:237
inline void CStrongHandleCopyable<InfoForResourceTypeCEntityLump>::operator=(const CWeakHandle<InfoForResourceTypeCEntityLump>& src)
{
} /* size: 0 */

// <0074497A> ../public/resourcesystem/stronghandle.h:237
inline void CStrongHandleCopyable<InfoForResourceTypeCModel>::operator=(const CWeakHandle<InfoForResourceTypeCModel>& src)
{
} /* size: 0 */

// <0590B3B0> ../../public/resourcesystem/stronghandle.h:242
inline void CStrongHandleCopyable<InfoForResourceTypeCTextureBase>::operator=(const CStrongHandleCopyable<InfoForResourceTypeCTextureBase>& src)
{
} /* size: 0 */

// <042DFC4C> ../public/resourcesystem/stronghandle.h:242
inline void CStrongHandleCopyable<InfoForResourceTypeCEntityLump>::operator=(const CStrongHandleCopyable<InfoForResourceTypeCEntityLump>& src)
{
} /* size: 0 */

// <035352EC> ../public/resourcesystem/stronghandle.h:242
inline void CStrongHandleCopyable<InfoForResourceTypeIMaterial2>::operator=(const CStrongHandleCopyable<InfoForResourceTypeIMaterial2>& src)
{
} /* size: 0 */

// <041A438C> ../public/resourcesystem/stronghandle.h:255
// member function: 1
// class size: 1
class CSchemaTypeOf<CStrongHandleCopyable<InfoForResourceTypeCEntityLump> > {
	/* ../public/resourcesystem/stronghandle.h:255 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
};

// <06970C0E> ../public/resourcesystem/stronghandle.h:262
void CStrongHandleVoid::~CStrongHandleVoid()
{
} /* size: 0 */

// <06970BF1> ../public/resourcesystem/stronghandle.h:262
inline void CStrongHandleVoid::~CStrongHandleVoid()
{
} /* size: 0 */

// <0038F4B6> ../public/resourcesystem/stronghandle.h:262
// member functions: 9
// member variable: 1
// class size: 8
class CStrongHandleVoid : public CStrongHandle<ResourceBindingVoid_t> {
public:
	/* class CStrongHandle<ResourceBindingVoid_t> <ancestor>; */ /* 0 8 */
	/* ../public/resourcesystem/stronghandle.h:266 */
	void CStrongHandleVoid(CStrongHandleVoid* );
	/* ../public/resourcesystem/stronghandle.h:268 */
	void CStrongHandleVoid(CStrongHandleVoid* , ResourceHandle_t);
	/* ../public/resourcesystem/stronghandle.h:273 */
	CStrongHandleVoid& operator=(CStrongHandleVoid* , ResourceHandle_t);
	/* ../public/resourcesystem/stronghandle.h:279 */
	CStrongHandleVoid& operator=(CStrongHandleVoid* , CStrongHandleVoid& );
	void CStrongHandleVoid(class CStrongHandleVoid *); /* linkage=_ZN17CStrongHandleVoidC4Ev */
	void CStrongHandleVoid(class CStrongHandleVoid *, ResourceHandle_t); /* linkage=_ZN17CStrongHandleVoidC4EPK21ResourceBindingBase_t */
	class CStrongHandleVoid & operator=(class CStrongHandleVoid *, ResourceHandle_t); /* linkage=_ZN17CStrongHandleVoidaSEPK21ResourceBindingBase_t */
	class CStrongHandleVoid & operator=(class CStrongHandleVoid *, class CStrongHandleVoid &); /* linkage=_ZN17CStrongHandleVoidaSERS_ */
	void ~CStrongHandleVoid(class CStrongHandleVoid *); /* linkage=_ZN17CStrongHandleVoidD4Ev */
};

// <01527340> ../public/resourcesystem/stronghandle.h:262
// member functions: 10
// member variable: 1
// class size: 8
class CStrongHandleVoid : public CStrongHandle<ResourceBindingVoid_t> {
public:
	/* class CStrongHandle<ResourceBindingVoid_t> <ancestor>; */ /* 0 8 */
	/* ../public/resourcesystem/stronghandle.h:266 */
	void CStrongHandleVoid(CStrongHandleVoid* );
	/* ../public/resourcesystem/stronghandle.h:268 */
	void CStrongHandleVoid(CStrongHandleVoid* , ResourceHandle_t);
	/* ../public/resourcesystem/stronghandle.h:273 */
	CStrongHandleVoid& operator=(CStrongHandleVoid* , ResourceHandle_t);
	/* ../public/resourcesystem/stronghandle.h:279 */
	CStrongHandleVoid& operator=(CStrongHandleVoid* , CStrongHandleVoid& );
	void ~CStrongHandleVoid(CStrongHandleVoid* );
	void CStrongHandleVoid(class CStrongHandleVoid *); /* linkage=_ZN17CStrongHandleVoidC4Ev */
	void CStrongHandleVoid(class CStrongHandleVoid *, ResourceHandle_t); /* linkage=_ZN17CStrongHandleVoidC4EPK21ResourceBindingBase_t */
	class CStrongHandleVoid & operator=(class CStrongHandleVoid *, ResourceHandle_t); /* linkage=_ZN17CStrongHandleVoidaSEPK21ResourceBindingBase_t */
	class CStrongHandleVoid & operator=(class CStrongHandleVoid *, class CStrongHandleVoid &); /* linkage=_ZN17CStrongHandleVoidaSERS_ */
	void ~CStrongHandleVoid(class CStrongHandleVoid *); /* linkage=_ZN17CStrongHandleVoidD4Ev */
};

// <00028213> ../../public/resourcesystem/stronghandle.h:262
// member functions: 9
// member variable: 1
// class size: 8
class CStrongHandleVoid : public CStrongHandle<ResourceBindingVoid_t> {
public:
	/* class CStrongHandle<ResourceBindingVoid_t> <ancestor>; */ /* 0 8 */
	/* ../../public/resourcesystem/stronghandle.h:266 */
	void CStrongHandleVoid(CStrongHandleVoid* );
	/* ../../public/resourcesystem/stronghandle.h:268 */
	void CStrongHandleVoid(CStrongHandleVoid* , ResourceHandle_t);
	/* ../../public/resourcesystem/stronghandle.h:273 */
	CStrongHandleVoid& operator=(CStrongHandleVoid* , ResourceHandle_t);
	/* ../../public/resourcesystem/stronghandle.h:279 */
	CStrongHandleVoid& operator=(CStrongHandleVoid* , CStrongHandleVoid& );
	void CStrongHandleVoid(class CStrongHandleVoid *); /* linkage=_ZN17CStrongHandleVoidC4Ev */
	void CStrongHandleVoid(class CStrongHandleVoid *, ResourceHandle_t); /* linkage=_ZN17CStrongHandleVoidC4EPK21ResourceBindingBase_t */
	class CStrongHandleVoid & operator=(class CStrongHandleVoid *, ResourceHandle_t); /* linkage=_ZN17CStrongHandleVoidaSEPK21ResourceBindingBase_t */
	class CStrongHandleVoid & operator=(class CStrongHandleVoid *, class CStrongHandleVoid &); /* linkage=_ZN17CStrongHandleVoidaSERS_ */
	void ~CStrongHandleVoid(class CStrongHandleVoid *); /* linkage=_ZN17CStrongHandleVoidD4Ev */
};

// <06971C6F> ../public/resourcesystem/stronghandle.h:266
void CStrongHandleVoid::CStrongHandleVoid()
{
} /* size: 0 */

// <06971C56> ../public/resourcesystem/stronghandle.h:266
inline void CStrongHandleVoid::CStrongHandleVoid()
{
} /* size: 0 */

// <06713BD1> ../public/resourcesystem/stronghandle.h:273
inline void CStrongHandleVoid::operator=(ResourceHandle_t hResource)
{
} /* size: 0 */

// <00E44F93> ../public/resourcesystem/stronghandle.h:295
void CStrongHandleVolatile<InfoForResourceTypeCModel>::~CStrongHandleVolatile()
{
} /* size: 0 */

// <00E44F75> ../public/resourcesystem/stronghandle.h:295
inline void CStrongHandleVolatile<InfoForResourceTypeCModel>::~CStrongHandleVolatile()
{
} /* size: 0 */

// <00D73B4B> ../public/resourcesystem/stronghandle.h:295
// member functions: 48
// member variables: 4
// class size: 24
class CStrongHandleVolatile<InfoForResourceTypeCModel> : public CStrongHandleCopyable<InfoForResourceTypeCModel> {
public:
	/* class CStrongHandleCopyable<InfoForResourceTypeCModel> <ancestor>; */ /* 0 8 */
	/* ../public/resourcesystem/stronghandle.h:303 */
	void CStrongHandleVolatile(CStrongHandleVolatile<InfoForResourceTypeCModel>* );
	/* ../public/resourcesystem/stronghandle.h:304 */
	void CStrongHandleVolatile(CStrongHandleVolatile<InfoForResourceTypeCModel>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:299 */
	typedef ResourceHandleTyped_t ResourceHandleTyped_t;
	/* ../public/resourcesystem/stronghandle.h:305 */
	void CStrongHandleVolatile(CStrongHandleVolatile<InfoForResourceTypeCModel>* , ResourceId_t);
	/* ../public/resourcesystem/stronghandle.h:306 */
	void CStrongHandleVolatile(CStrongHandleVolatile<InfoForResourceTypeCModel>* , const char* );
	/* ../public/resourcesystem/stronghandle.h:307 */
	void CStrongHandleVolatile(CStrongHandleVolatile<InfoForResourceTypeCModel>* , const CStrongHandleVolatile<InfoForResourceTypeCModel>& );
	/* ../public/resourcesystem/stronghandle.h:308 */
	void CStrongHandleVolatile(CStrongHandleVolatile<InfoForResourceTypeCModel>* , const CStrongHandle<InfoForResourceTypeCModel>& );
	/* ../public/resourcesystem/stronghandle.h:309 */
	void CStrongHandleVolatile(CStrongHandleVolatile<InfoForResourceTypeCModel>* , const CWeakHandle<InfoForResourceTypeCModel>& );
	/* ../public/resourcesystem/stronghandle.h:300 */
	typedef ResourceDataTyped_t ResourceDataTyped_t;
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/resourcesystem/stronghandle.h:312 */
	const ResourceDataTyped_t* operator->(const CStrongHandleVolatile<InfoForResourceTypeCModel>* );
	/* ../public/resourcesystem/stronghandle.h:317 */
	ResourceHandleTyped_t operator CStrongHandleVolatile<InfoForResourceTypeCModel>::ResourceHandleTyped_t(const CStrongHandleVolatile<InfoForResourceTypeCModel>* );
	/* ../public/resourcesystem/stronghandle.h:322 */
	ResourceHandle_t operator ResourceHandle_t(const CStrongHandleVolatile<InfoForResourceTypeCModel>* );
	/* ../public/resourcesystem/stronghandle.h:328 */
	const CWeakHandle<InfoForResourceTypeCModel> GetHandle(const CStrongHandleVolatile<InfoForResourceTypeCModel>* );
	/* ../public/resourcesystem/stronghandle.h:334 */
	const ResourceDataTyped_t* GetData(const CStrongHandleVolatile<InfoForResourceTypeCModel>* );
	/* ../public/resourcesystem/stronghandle.h:341 */
	const ResourceDataTyped_t* GetHandleUnchecked(const CStrongHandleVolatile<InfoForResourceTypeCModel>* );
	/* ../public/resourcesystem/stronghandle.h:347 */
	const ResourceDataTyped_t* GetDataUnchecked(const CStrongHandleVolatile<InfoForResourceTypeCModel>* );
	/* ../public/resourcesystem/stronghandle.h:353 */
	CStrongHandleVolatile<InfoForResourceTypeCModel>& operator=(CStrongHandleVolatile<InfoForResourceTypeCModel>* , ResourceHandleTyped_t);
	/* ../public/resourcesystem/stronghandle.h:361 */
	CStrongHandleVolatile<InfoForResourceTypeCModel>& operator=(CStrongHandleVolatile<InfoForResourceTypeCModel>* , const CStrongHandle<InfoForResourceTypeCModel>& );
	/* ../public/resourcesystem/stronghandle.h:369 */
	CStrongHandleVolatile<InfoForResourceTypeCModel>& operator=(CStrongHandleVolatile<InfoForResourceTypeCModel>* , const CStrongHandleVolatile<InfoForResourceTypeCModel>& );
	/* ../public/resourcesystem/stronghandle.h:377 */
	CStrongHandleVolatile<InfoForResourceTypeCModel>& operator=(CStrongHandleVolatile<InfoForResourceTypeCModel>* , const CWeakHandle<InfoForResourceTypeCModel>& );
	/* ../public/resourcesystem/stronghandle.h:382 */
	bool WasReloaded(const CStrongHandleVolatile<InfoForResourceTypeCModel>* );
	/* ../public/resourcesystem/stronghandle.h:389 */
	void InitReloadCounter(CStrongHandleVolatile<InfoForResourceTypeCModel>* );
	/* ../public/resourcesystem/stronghandle.h:394 */
	void EnableVolatileCheck(CStrongHandleVolatile<InfoForResourceTypeCModel>* , bool, bool);
	/* ../public/resourcesystem/stronghandle.h:403 */
	void EnableVolatileAssertDbg(CStrongHandleVolatile<InfoForResourceTypeCModel>* , bool);
private:
	/* ../public/resourcesystem/stronghandle.h:410 */
	void InitVolatile(CStrongHandleVolatile<InfoForResourceTypeCModel>* );
	bool m_bCheckReloads; /* 8 1 */
	int m_nCurrentReloadCount; /* 12 4 */
	bool m_bSuppressVolatileAssertDbg; /* 16 1 */
	void ~CStrongHandleVolatile(CStrongHandleVolatile<InfoForResourceTypeCModel>* );
	void CStrongHandleVolatile(class CStrongHandleVolatile<InfoForResourceTypeCModel> *); /* linkage=_ZN21CStrongHandleVolatileI25InfoForResourceTypeCModelEC4Ev */
	void CStrongHandleVolatile(class CStrongHandleVolatile<InfoForResourceTypeCModel> *, ResourceHandleTyped_t); /* linkage=_ZN21CStrongHandleVolatileI25InfoForResourceTypeCModelEC4EPK17ResourceBinding_tIS0_E */
	void CStrongHandleVolatile(class CStrongHandleVolatile<InfoForResourceTypeCModel> *, class ResourceId_t); /* linkage=_ZN21CStrongHandleVolatileI25InfoForResourceTypeCModelEC4E12ResourceId_t */
	void CStrongHandleVolatile(class CStrongHandleVolatile<InfoForResourceTypeCModel> *, const char  *); /* linkage=_ZN21CStrongHandleVolatileI25InfoForResourceTypeCModelEC4EPKc */
	void CStrongHandleVolatile(class CStrongHandleVolatile<InfoForResourceTypeCModel> *, const class CStrongHandleVolatile<InfoForResourceTypeCModel>  &); /* linkage=_ZN21CStrongHandleVolatileI25InfoForResourceTypeCModelEC4ERKS1_ */
	void CStrongHandleVolatile(class CStrongHandleVolatile<InfoForResourceTypeCModel> *, const class CStrongHandle<InfoForResourceTypeCModel>  &); /* linkage=_ZN21CStrongHandleVolatileI25InfoForResourceTypeCModelEC4ERK13CStrongHandleIS0_E */
	void CStrongHandleVolatile(class CStrongHandleVolatile<InfoForResourceTypeCModel> *, const class CWeakHandle<InfoForResourceTypeCModel>  &); /* linkage=_ZN21CStrongHandleVolatileI25InfoForResourceTypeCModelEC4ERK11CWeakHandleIS0_E */
	const ResourceDataTyped_t  * operator->(const class CStrongHandleVolatile<InfoForResourceTypeCModel>  *); /* linkage=_ZNK21CStrongHandleVolatileI25InfoForResourceTypeCModelEptEv */
	ResourceHandleTyped_t operator CStrongHandleVolatile<InfoForResourceTypeCModel>::ResourceHandleTyped_t(const class CStrongHandleVolatile<InfoForResourceTypeCModel>  *); /* linkage=_ZNK21CStrongHandleVolatileI25InfoForResourceTypeCModelEcvPK17ResourceBinding_tIS0_EEv */
	ResourceHandle_t operator ResourceHandle_t(const class CStrongHandleVolatile<InfoForResourceTypeCModel>  *); /* linkage=_ZNK21CStrongHandleVolatileI25InfoForResourceTypeCModelEcvPK21ResourceBindingBase_tEv */
	const class CWeakHandle<InfoForResourceTypeCModel>  GetHandle(const class CStrongHandleVolatile<InfoForResourceTypeCModel>  *); /* linkage=_ZNK21CStrongHandleVolatileI25InfoForResourceTypeCModelE9GetHandleEv */
	const ResourceDataTyped_t  * GetData(const class CStrongHandleVolatile<InfoForResourceTypeCModel>  *); /* linkage=_ZNK21CStrongHandleVolatileI25InfoForResourceTypeCModelE7GetDataEv */
	const ResourceDataTyped_t  * GetHandleUnchecked(const class CStrongHandleVolatile<InfoForResourceTypeCModel>  *); /* linkage=_ZNK21CStrongHandleVolatileI25InfoForResourceTypeCModelE18GetHandleUncheckedEv */
	const ResourceDataTyped_t  * GetDataUnchecked(const class CStrongHandleVolatile<InfoForResourceTypeCModel>  *); /* linkage=_ZNK21CStrongHandleVolatileI25InfoForResourceTypeCModelE16GetDataUncheckedEv */
	class CStrongHandleVolatile<InfoForResourceTypeCModel> & operator=(class CStrongHandleVolatile<InfoForResourceTypeCModel> *, ResourceHandleTyped_t); /* linkage=_ZN21CStrongHandleVolatileI25InfoForResourceTypeCModelEaSEPK17ResourceBinding_tIS0_E */
	class CStrongHandleVolatile<InfoForResourceTypeCModel> & operator=(class CStrongHandleVolatile<InfoForResourceTypeCModel> *, const class CStrongHandle<InfoForResourceTypeCModel>  &); /* linkage=_ZN21CStrongHandleVolatileI25InfoForResourceTypeCModelEaSERK13CStrongHandleIS0_E */
	class CStrongHandleVolatile<InfoForResourceTypeCModel> & operator=(class CStrongHandleVolatile<InfoForResourceTypeCModel> *, const class CStrongHandleVolatile<InfoForResourceTypeCModel>  &); /* linkage=_ZN21CStrongHandleVolatileI25InfoForResourceTypeCModelEaSERKS1_ */
	class CStrongHandleVolatile<InfoForResourceTypeCModel> & operator=(class CStrongHandleVolatile<InfoForResourceTypeCModel> *, const class CWeakHandle<InfoForResourceTypeCModel>  &); /* linkage=_ZN21CStrongHandleVolatileI25InfoForResourceTypeCModelEaSERK11CWeakHandleIS0_E */
	bool WasReloaded(const class CStrongHandleVolatile<InfoForResourceTypeCModel>  *); /* linkage=_ZNK21CStrongHandleVolatileI25InfoForResourceTypeCModelE11WasReloadedEv */
	void InitReloadCounter(class CStrongHandleVolatile<InfoForResourceTypeCModel> *); /* linkage=_ZN21CStrongHandleVolatileI25InfoForResourceTypeCModelE17InitReloadCounterEv */
	void EnableVolatileCheck(class CStrongHandleVolatile<InfoForResourceTypeCModel> *, bool, bool); /* linkage=_ZN21CStrongHandleVolatileI25InfoForResourceTypeCModelE19EnableVolatileCheckEbb */
	void EnableVolatileAssertDbg(class CStrongHandleVolatile<InfoForResourceTypeCModel> *, bool); /* linkage=_ZN21CStrongHandleVolatileI25InfoForResourceTypeCModelE23EnableVolatileAssertDbgEb */
	void InitVolatile(class CStrongHandleVolatile<InfoForResourceTypeCModel> *); /* linkage=_ZN21CStrongHandleVolatileI25InfoForResourceTypeCModelE12InitVolatileEv */
	void ~CStrongHandleVolatile(class CStrongHandleVolatile<InfoForResourceTypeCModel> *); /* linkage=_ZN21CStrongHandleVolatileI25InfoForResourceTypeCModelED4Ev */
};

// <00E224AB> ../public/resourcesystem/stronghandle.h:309
void CStrongHandleVolatile<InfoForResourceTypeCModel>::CStrongHandleVolatile(const CWeakHandle<InfoForResourceTypeCModel>& src)
{
} /* size: 0 */

// <00E22485> ../public/resourcesystem/stronghandle.h:309
inline void CStrongHandleVolatile<InfoForResourceTypeCModel>::CStrongHandleVolatile(const CWeakHandle<InfoForResourceTypeCModel>& src)
{
} /* size: 0 */

// <00E2243C> ../public/resourcesystem/stronghandle.h:334
inline void CStrongHandleVolatile<InfoForResourceTypeCModel>::GetData()
{
} /* size: 0 */

// <00E22423> ../public/resourcesystem/stronghandle.h:389
inline void CStrongHandleVolatile<InfoForResourceTypeCModel>::InitReloadCounter()
{
} /* size: 0 */

// <068FD0BC> ../public/resourcesystem/stronghandle.h:438
void CStrongHandle<ResourceBindingVoid_t>::CStrongHandle()
{
} /* size: 0 */

// <068FD0A0> ../public/resourcesystem/stronghandle.h:438
inline void CStrongHandle<ResourceBindingVoid_t>::CStrongHandle()
{
} /* size: 0 */

// <06314F82> ../public/resourcesystem/stronghandle.h:438
void CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle()
{
} /* size: 0 */

// <06314F69> ../public/resourcesystem/stronghandle.h:438
inline void CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle()
{
} /* size: 0 */

// <054DB73C> ../public/resourcesystem/stronghandle.h:438
void CStrongHandle<InfoForResourceTypeCSequenceGroupData>::CStrongHandle()
{
} /* size: 0 */

// <054DB723> ../public/resourcesystem/stronghandle.h:438
inline void CStrongHandle<InfoForResourceTypeCSequenceGroupData>::CStrongHandle()
{
} /* size: 0 */

// <054D056F> ../public/resourcesystem/stronghandle.h:438
void CStrongHandle<InfoForResourceTypeCAnimData>::CStrongHandle()
{
} /* size: 0 */

// <054D0556> ../public/resourcesystem/stronghandle.h:438
inline void CStrongHandle<InfoForResourceTypeCAnimData>::CStrongHandle()
{
} /* size: 0 */

// <054D0500> ../public/resourcesystem/stronghandle.h:438
void CStrongHandle<InfoForResourceTypeCAnimationGroup>::CStrongHandle()
{
} /* size: 0 */

// <054D04E7> ../public/resourcesystem/stronghandle.h:438
inline void CStrongHandle<InfoForResourceTypeCAnimationGroup>::CStrongHandle()
{
} /* size: 0 */

// <0516D601> ../public/resourcesystem/stronghandle.h:438
void CStrongHandle<InfoForResourceTypeCModel>::CStrongHandle()
{
} /* size: 0 */

// <0516D5E8> ../public/resourcesystem/stronghandle.h:438
inline void CStrongHandle<InfoForResourceTypeCModel>::CStrongHandle()
{
} /* size: 0 */

// <0515B50E> ../public/resourcesystem/stronghandle.h:438
void CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle()
{
} /* size: 0 */

// <0515B4F5> ../public/resourcesystem/stronghandle.h:438
inline void CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle()
{
} /* size: 0 */

// <0515B2D4> ../public/resourcesystem/stronghandle.h:438
void CStrongHandle<InfoForResourceTypeCRenderMesh>::CStrongHandle()
{
} /* size: 0 */

// <0515B2BB> ../public/resourcesystem/stronghandle.h:438
inline void CStrongHandle<InfoForResourceTypeCRenderMesh>::CStrongHandle()
{
} /* size: 0 */

// <0515B265> ../public/resourcesystem/stronghandle.h:438
void CStrongHandle<InfoForResourceTypeCPhysAggregateData>::CStrongHandle()
{
} /* size: 0 */

// <0515B24C> ../public/resourcesystem/stronghandle.h:438
inline void CStrongHandle<InfoForResourceTypeCPhysAggregateData>::CStrongHandle()
{
} /* size: 0 */

// <04CC1553> ../public/resourcesystem/stronghandle.h:438
void CStrongHandle<InfoForResourceTypeCMorphSetData>::CStrongHandle()
{
} /* size: 0 */

// <04CC153A> ../public/resourcesystem/stronghandle.h:438
inline void CStrongHandle<InfoForResourceTypeCMorphSetData>::CStrongHandle()
{
} /* size: 0 */

// <042DE100> ../public/resourcesystem/stronghandle.h:438
void CStrongHandle<InfoForResourceTypeCEntityLump>::CStrongHandle()
{
} /* size: 0 */

// <042DE0E7> ../public/resourcesystem/stronghandle.h:438
inline void CStrongHandle<InfoForResourceTypeCEntityLump>::CStrongHandle()
{
} /* size: 0 */

// <0269ED0C> ../public/resourcesystem/stronghandle.h:438
void CStrongHandle<InfoForResourceTypeVSound_t>::CStrongHandle()
{
} /* size: 0 */

// <0269ECF3> ../public/resourcesystem/stronghandle.h:438
inline void CStrongHandle<InfoForResourceTypeVSound_t>::CStrongHandle()
{
} /* size: 0 */

// <01007C94> ../public/resourcesystem/stronghandle.h:438
void CStrongHandle<InfoForResourceTypeWorld_t>::CStrongHandle()
{
} /* size: 0 */

// <01007C7B> ../public/resourcesystem/stronghandle.h:438
inline void CStrongHandle<InfoForResourceTypeWorld_t>::CStrongHandle()
{
} /* size: 0 */

// <01007851> ../public/resourcesystem/stronghandle.h:438
void CStrongHandle<InfoForResourceTypeCWorldNode>::CStrongHandle()
{
} /* size: 0 */

// <01007838> ../public/resourcesystem/stronghandle.h:438
inline void CStrongHandle<InfoForResourceTypeCWorldNode>::CStrongHandle()
{
} /* size: 0 */

// <00F2B3A5> ../public/resourcesystem/stronghandle.h:438
void CStrongHandle<InfoForResourceTypeCVoxelVisibility>::CStrongHandle()
{
} /* size: 0 */

// <00F2B38C> ../public/resourcesystem/stronghandle.h:438
inline void CStrongHandle<InfoForResourceTypeCVoxelVisibility>::CStrongHandle()
{
} /* size: 0 */

// <00C6C284> ../public/resourcesystem/stronghandle.h:438
void CStrongHandle<InfoForResourceTypeIAnimationGraph>::CStrongHandle()
{
} /* size: 0 */

// <00C6C26B> ../public/resourcesystem/stronghandle.h:438
inline void CStrongHandle<InfoForResourceTypeIAnimationGraph>::CStrongHandle()
{
} /* size: 0 */

// <0630F0F9> ../public/resourcesystem/stronghandle.h:459
void CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(ResourceHandleTyped_t hResource)
{
} /* size: 0 */

// <0630F0D3> ../public/resourcesystem/stronghandle.h:459
inline void CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(ResourceHandleTyped_t hResource)
{
} /* size: 0 */

// <06286D27> ../public/resourcesystem/stronghandle.h:459
void CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(ResourceHandleTyped_t hResource)
{
} /* size: 0 */

// <06286D01> ../public/resourcesystem/stronghandle.h:459
inline void CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(ResourceHandleTyped_t hResource)
{
} /* size: 0 */

// <0126BBD3> ../public/resourcesystem/stronghandle.h:459
void CStrongHandle<InfoForResourceTypeCModel>::CStrongHandle(ResourceHandleTyped_t hResource)
{
} /* size: 0 */

// <0126BBAD> ../public/resourcesystem/stronghandle.h:459
inline void CStrongHandle<InfoForResourceTypeCModel>::CStrongHandle(ResourceHandleTyped_t hResource)
{
} /* size: 0 */

// <0126BAF4> ../public/resourcesystem/stronghandle.h:459
void CStrongHandle<InfoForResourceTypeIAnimationGraph>::CStrongHandle(ResourceHandleTyped_t hResource)
{
} /* size: 0 */

// <0126BACE> ../public/resourcesystem/stronghandle.h:459
inline void CStrongHandle<InfoForResourceTypeIAnimationGraph>::CStrongHandle(ResourceHandleTyped_t hResource)
{
} /* size: 0 */

// <0126B83B> ../public/resourcesystem/stronghandle.h:459
void CStrongHandle<InfoForResourceTypeVSound_t>::CStrongHandle(ResourceHandleTyped_t hResource)
{
} /* size: 0 */

// <0126B815> ../public/resourcesystem/stronghandle.h:459
inline void CStrongHandle<InfoForResourceTypeVSound_t>::CStrongHandle(ResourceHandleTyped_t hResource)
{
} /* size: 0 */

// <0126B1F7> ../public/resourcesystem/stronghandle.h:459
inline void CStrongHandle<InfoForResourceTypeCVfx>::CStrongHandle(ResourceHandleTyped_t hResource)
{
} /* size: 0 */

// <0126A98D> ../public/resourcesystem/stronghandle.h:459
void CStrongHandle<InfoForResourceTypeCRenderMesh>::CStrongHandle(ResourceHandleTyped_t hResource)
{
} /* size: 0 */

// <0126A967> ../public/resourcesystem/stronghandle.h:459
inline void CStrongHandle<InfoForResourceTypeCRenderMesh>::CStrongHandle(ResourceHandleTyped_t hResource)
{
} /* size: 0 */

// <0185A06D> ../public/resourcesystem/stronghandle.h:466
void CStrongHandle<InfoForResourceTypeCRenderMesh>::CStrongHandle(CStrongHandle<InfoForResourceTypeCRenderMesh>& moveSrc)
{
} /* size: 0 */

// <0185A047> ../public/resourcesystem/stronghandle.h:466
inline void CStrongHandle<InfoForResourceTypeCRenderMesh>::CStrongHandle(CStrongHandle<InfoForResourceTypeCRenderMesh>& moveSrc)
{
} /* size: 0 */

// <06091F1F> ../public/resourcesystem/stronghandle.h:473
void CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(const CWeakHandle<InfoForResourceTypeIMaterial2>& src)
{
} /* size: 0 */

// <06091EF9> ../public/resourcesystem/stronghandle.h:473
inline void CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle(const CWeakHandle<InfoForResourceTypeIMaterial2>& src)
{
} /* size: 0 */

// <04BB8626> ../public/resourcesystem/stronghandle.h:473
void CStrongHandle<InfoForResourceTypeCRenderMesh>::CStrongHandle(const CWeakHandle<InfoForResourceTypeCRenderMesh>& src)
{
} /* size: 0 */

// <04BB8600> ../public/resourcesystem/stronghandle.h:473
inline void CStrongHandle<InfoForResourceTypeCRenderMesh>::CStrongHandle(const CWeakHandle<InfoForResourceTypeCRenderMesh>& src)
{
} /* size: 0 */

// <040B055A> ../public/resourcesystem/stronghandle.h:473
void CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(const CWeakHandle<InfoForResourceTypeCTextureBase>& src)
{
} /* size: 0 */

// <040B0534> ../public/resourcesystem/stronghandle.h:473
inline void CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle(const CWeakHandle<InfoForResourceTypeCTextureBase>& src)
{
} /* size: 0 */

// <018594B4> ../public/resourcesystem/stronghandle.h:473
void CStrongHandle<InfoForResourceTypeCModel>::CStrongHandle(const CWeakHandle<InfoForResourceTypeCModel>& src)
{
} /* size: 0 */

// <0185948E> ../public/resourcesystem/stronghandle.h:473
inline void CStrongHandle<InfoForResourceTypeCModel>::CStrongHandle(const CWeakHandle<InfoForResourceTypeCModel>& src)
{
} /* size: 0 */

// <01278806> ../public/resourcesystem/stronghandle.h:473
void CStrongHandle<InfoForResourceTypeCVfx>::CStrongHandle(const CWeakHandle<InfoForResourceTypeCVfx>& src)
{
} /* size: 0 */

// <012787E0> ../public/resourcesystem/stronghandle.h:473
inline void CStrongHandle<InfoForResourceTypeCVfx>::CStrongHandle(const CWeakHandle<InfoForResourceTypeCVfx>& src)
{
} /* size: 0 */

// <012781A5> ../public/resourcesystem/stronghandle.h:473
void CStrongHandle<InfoForResourceTypeIAnimationGraph>::CStrongHandle(const CWeakHandle<InfoForResourceTypeIAnimationGraph>& src)
{
} /* size: 0 */

// <0127817F> ../public/resourcesystem/stronghandle.h:473
inline void CStrongHandle<InfoForResourceTypeIAnimationGraph>::CStrongHandle(const CWeakHandle<InfoForResourceTypeIAnimationGraph>& src)
{
} /* size: 0 */

// <0127794A> ../public/resourcesystem/stronghandle.h:473
void CStrongHandle<InfoForResourceTypeVSound_t>::CStrongHandle(const CWeakHandle<InfoForResourceTypeVSound_t>& src)
{
} /* size: 0 */

// <01277924> ../public/resourcesystem/stronghandle.h:473
inline void CStrongHandle<InfoForResourceTypeVSound_t>::CStrongHandle(const CWeakHandle<InfoForResourceTypeVSound_t>& src)
{
} /* size: 0 */

// <06E27DDC> ../../public/resourcesystem/stronghandle.h:480
void CStrongHandle<InfoForResourceTypeCTextureBase>::~CStrongHandle()
{
} /* size: 0 */

// <068FD089> ../public/resourcesystem/stronghandle.h:480
void CStrongHandle<ResourceBindingVoid_t>::~CStrongHandle()
{
} /* size: 0 */

// <06091EE2> ../public/resourcesystem/stronghandle.h:480
void CStrongHandle<InfoForResourceTypeIMaterial2>::~CStrongHandle()
{
} /* size: 0 */

// <054DCAC9> ../public/resourcesystem/stronghandle.h:480
void CStrongHandle<InfoForResourceTypeCSequenceGroupData>::~CStrongHandle()
{
} /* size: 0 */

// <054D3A92> ../public/resourcesystem/stronghandle.h:480
void CStrongHandle<InfoForResourceTypeCAnimData>::~CStrongHandle()
{
} /* size: 0 */

// <054D3A25> ../public/resourcesystem/stronghandle.h:480
void CStrongHandle<InfoForResourceTypeCAnimationGroup>::~CStrongHandle()
{
} /* size: 0 */

// <0516D5D1> ../public/resourcesystem/stronghandle.h:480
void CStrongHandle<InfoForResourceTypeCModel>::~CStrongHandle()
{
} /* size: 0 */

// <0515F264> ../public/resourcesystem/stronghandle.h:480
void CStrongHandle<InfoForResourceTypeCRenderMesh>::~CStrongHandle()
{
} /* size: 0 */

// <0515F1BA> ../public/resourcesystem/stronghandle.h:480
void CStrongHandle<InfoForResourceTypeCPhysAggregateData>::~CStrongHandle()
{
} /* size: 0 */

// <04CC1523> ../public/resourcesystem/stronghandle.h:480
void CStrongHandle<InfoForResourceTypeCMorphSetData>::~CStrongHandle()
{
} /* size: 0 */

// <042DF14C> ../public/resourcesystem/stronghandle.h:480
void CStrongHandle<InfoForResourceTypeCEntityLump>::~CStrongHandle()
{
} /* size: 0 */

// <02474CD2> ../public/resourcesystem/stronghandle.h:480
void CStrongHandle<InfoForResourceTypeVSound_t>::~CStrongHandle()
{
} /* size: 0 */

// <01278886> ../public/resourcesystem/stronghandle.h:480
void CStrongHandle<InfoForResourceTypeCVfx>::~CStrongHandle()
{
} /* size: 0 */

// <01278225> ../public/resourcesystem/stronghandle.h:480
void CStrongHandle<InfoForResourceTypeIAnimationGraph>::~CStrongHandle()
{
} /* size: 0 */

// <01007C64> ../public/resourcesystem/stronghandle.h:480
void CStrongHandle<InfoForResourceTypeWorld_t>::~CStrongHandle()
{
} /* size: 0 */

// <010077B5> ../public/resourcesystem/stronghandle.h:480
void CStrongHandle<InfoForResourceTypeCWorldNode>::~CStrongHandle()
{
} /* size: 0 */

// <00F2B375> ../public/resourcesystem/stronghandle.h:480
void CStrongHandle<InfoForResourceTypeCVoxelVisibility>::~CStrongHandle()
{
} /* size: 0 */

// <0670E7C7> ../public/resourcesystem/stronghandle.h:547
void CStrongHandle<ResourceBindingVoid_t>::Init(ResourceHandleTyped_t hResource)
{
} /* size: 0 */

// <0631152E> ../public/resourcesystem/stronghandle.h:547
void CStrongHandle<InfoForResourceTypeCTextureBase>::Init(ResourceHandleTyped_t hResource)
{
} /* size: 0 */

// <06311438> ../public/resourcesystem/stronghandle.h:547
// function calls: 2
void CStrongHandle<InfoForResourceTypeIMaterial2>::Init(ResourceHandleTyped_t hResource)
{
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 570
} /* size: 93, inline expansions: 2 (10 bytes) */

// <060848CB> ../public/resourcesystem/stronghandle.h:547
void CStrongHandle<InfoForResourceTypeIMaterial2>::Init(ResourceHandleTyped_t hResource)
{
} /* size: 0 */

// <04CB8C6A> ../public/resourcesystem/stronghandle.h:547
void CStrongHandle<InfoForResourceTypeCMorphSetData>::Init(ResourceHandleTyped_t hResource)
{
} /* size: 0 */

// <04BAE979> ../public/resourcesystem/stronghandle.h:547
void CStrongHandle<InfoForResourceTypeCRenderMesh>::Init(ResourceHandleTyped_t hResource)
{
} /* size: 0 */

// <04BABC0A> ../public/resourcesystem/stronghandle.h:547
void CStrongHandle<InfoForResourceTypeCPhysAggregateData>::Init(ResourceHandleTyped_t hResource)
{
} /* size: 0 */

// <04BABB18> ../public/resourcesystem/stronghandle.h:547
void CStrongHandle<InfoForResourceTypeCAnimationGroup>::Init(ResourceHandleTyped_t hResource)
{
} /* size: 0 */

// <049A6069> ../public/resourcesystem/stronghandle.h:547
// function calls: 2
void CStrongHandle<InfoForResourceTypeCModel>::Init(ResourceHandleTyped_t hResource)
{
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 570
} /* size: 93, inline expansions: 2 (10 bytes) */

// <049994A5> ../public/resourcesystem/stronghandle.h:547
void CStrongHandle<InfoForResourceTypeCModel>::Init(ResourceHandleTyped_t hResource)
{
} /* size: 0 */

// <042DE9B1> ../public/resourcesystem/stronghandle.h:547
// function calls: 2
void CStrongHandle<InfoForResourceTypeCEntityLump>::Init(ResourceHandleTyped_t hResource)
{
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 570
} /* size: 93, inline expansions: 2 (10 bytes) */

// <039FD6DD> ../public/resourcesystem/stronghandle.h:547
// function calls: 2
void CStrongHandle<InfoForResourceTypeCTextureBase>::Init(ResourceHandleTyped_t hResource)
{
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 570
} /* size: 93, inline expansions: 2 (10 bytes) */

// <026A5895> ../public/resourcesystem/stronghandle.h:547
// function calls: 2
void CStrongHandle<InfoForResourceTypeVSound_t>::Init(ResourceHandleTyped_t hResource)
{
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 570
} /* size: 93, inline expansions: 2 (10 bytes) */

// <0269DE12> ../public/resourcesystem/stronghandle.h:547
void CStrongHandle<InfoForResourceTypeVSound_t>::Init(ResourceHandleTyped_t hResource)
{
} /* size: 0 */

// <0136AF5A> ../public/resourcesystem/stronghandle.h:547
// function calls: 2
void CStrongHandle<InfoForResourceTypeIAnimationGraph>::Init(ResourceHandleTyped_t hResource)
{
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 570
} /* size: 93, inline expansions: 2 (10 bytes) */

// <0136ADD6> ../public/resourcesystem/stronghandle.h:547
// function calls: 2
void CStrongHandle<InfoForResourceTypeCVfx>::Init(ResourceHandleTyped_t hResource)
{
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 570
} /* size: 93, inline expansions: 2 (10 bytes) */

// <0126B239> ../public/resourcesystem/stronghandle.h:547
void CStrongHandle<InfoForResourceTypeCVfx>::Init(ResourceHandleTyped_t hResource)
{
} /* size: 0 */

// <0126ABC3> ../public/resourcesystem/stronghandle.h:547
void CStrongHandle<InfoForResourceTypeIAnimationGraph>::Init(ResourceHandleTyped_t hResource)
{
} /* size: 0 */

// <01004147> ../public/resourcesystem/stronghandle.h:547
void CStrongHandle<InfoForResourceTypeWorld_t>::Init(ResourceHandleTyped_t hResource)
{
} /* size: 0 */

// <01004094> ../public/resourcesystem/stronghandle.h:547
void CStrongHandle<InfoForResourceTypeCWorldNode>::Init(ResourceHandleTyped_t hResource)
{
} /* size: 0 */

// <00F28041> ../public/resourcesystem/stronghandle.h:547
void CStrongHandle<InfoForResourceTypeCVoxelVisibility>::Init(ResourceHandleTyped_t hResource)
{
} /* size: 0 */

// <00E6F9B7> ../public/resourcesystem/stronghandle.h:547
void CStrongHandle<InfoForResourceTypeCEntityLump>::Init(ResourceHandleTyped_t hResource)
{
} /* size: 0 */

// <05D38802> ../public/resourcesystem/stronghandle.h:581
// function calls: 2
void CStrongHandle<InfoForResourceTypeCTextureBase>::Init(const CStrongHandle<InfoForResourceTypeCTextureBase>& src)
{
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 604
} /* size: 93, inline expansions: 2 (10 bytes) */

// <054C6FEB> ../public/resourcesystem/stronghandle.h:581
// function calls: 2
void CStrongHandle<InfoForResourceTypeCAnimationGroup>::Init(const CStrongHandle<InfoForResourceTypeCAnimationGroup>& src)
{
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 604
} /* size: 93, inline expansions: 2 (10 bytes) */

// <054C6ECD> ../public/resourcesystem/stronghandle.h:581
// function calls: 2
void CStrongHandle<InfoForResourceTypeCAnimData>::Init(const CStrongHandle<InfoForResourceTypeCAnimData>& src)
{
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 604
} /* size: 0, inline expansions: 2 (0 bytes) */

// <0516B1AF> ../public/resourcesystem/stronghandle.h:581
// function calls: 2
void CStrongHandle<InfoForResourceTypeCModel>::Init(const CStrongHandle<InfoForResourceTypeCModel>& src)
{
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 604
} /* size: 93, inline expansions: 2 (10 bytes) */

// <0515EEFE> ../public/resourcesystem/stronghandle.h:581
void CStrongHandle<InfoForResourceTypeIMaterial2>::Init(const CStrongHandle<InfoForResourceTypeIMaterial2>& src)
{
} /* size: 0 */

// <0515E4DD> ../public/resourcesystem/stronghandle.h:581
void CStrongHandle<InfoForResourceTypeCRenderMesh>::Init(const CStrongHandle<InfoForResourceTypeCRenderMesh>& src)
{
} /* size: 0 */

// <0515E405> ../public/resourcesystem/stronghandle.h:581
void CStrongHandle<InfoForResourceTypeCPhysAggregateData>::Init(const CStrongHandle<InfoForResourceTypeCPhysAggregateData>& src)
{
} /* size: 0 */

// <0515E386> ../public/resourcesystem/stronghandle.h:581
void CStrongHandle<InfoForResourceTypeCAnimationGroup>::Init(const CStrongHandle<InfoForResourceTypeCAnimationGroup>& src)
{
} /* size: 0 */

// <0515E307> ../public/resourcesystem/stronghandle.h:581
void CStrongHandle<InfoForResourceTypeCSequenceGroupData>::Init(const CStrongHandle<InfoForResourceTypeCSequenceGroupData>& src)
{
} /* size: 0 */

// <04FACC3A> ../public/resourcesystem/stronghandle.h:581
// function calls: 2
void CStrongHandle<InfoForResourceTypeCSequenceGroupData>::Init(const CStrongHandle<InfoForResourceTypeCSequenceGroupData>& src)
{
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 604
} /* size: 93, inline expansions: 2 (10 bytes) */

// <04FAC80E> ../public/resourcesystem/stronghandle.h:581
// function calls: 2
void CStrongHandle<InfoForResourceTypeCPhysAggregateData>::Init(const CStrongHandle<InfoForResourceTypeCPhysAggregateData>& src)
{
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 604
} /* size: 93, inline expansions: 2 (10 bytes) */

// <04FAC4DF> ../public/resourcesystem/stronghandle.h:581
// function calls: 2
void CStrongHandle<InfoForResourceTypeCRenderMesh>::Init(const CStrongHandle<InfoForResourceTypeCRenderMesh>& src)
{
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 604
} /* size: 93, inline expansions: 2 (10 bytes) */

// <04FABD95> ../public/resourcesystem/stronghandle.h:581
// function calls: 2
void CStrongHandle<InfoForResourceTypeIMaterial2>::Init(const CStrongHandle<InfoForResourceTypeIMaterial2>& src)
{
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 604
} /* size: 93, inline expansions: 2 (10 bytes) */

// <049992F6> ../public/resourcesystem/stronghandle.h:581
void CStrongHandle<InfoForResourceTypeCModel>::Init(const CStrongHandle<InfoForResourceTypeCModel>& src)
{
} /* size: 0 */

// <042DF280> ../public/resourcesystem/stronghandle.h:581
void CStrongHandle<InfoForResourceTypeCTextureBase>::Init(const CStrongHandle<InfoForResourceTypeCTextureBase>& src)
{
} /* size: 0 */

// <0015EAD6> ../public/resourcesystem/stronghandle.h:581
// function calls: 2
void CStrongHandle<InfoForResourceTypeCVfx>::Init(const CStrongHandle<InfoForResourceTypeCVfx>& src)
{
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 604
} /* size: 93, inline expansions: 2 (10 bytes) */

// <06E27706> ../../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 58889
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <068F266A> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<ResourceBindingVoid_t>::Shutdown()
{
	const char   __FUNCTION__; // 62476
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 426, variables: 1 */

// <0678C83F> ../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 14184
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <0670E7F0> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<ResourceBindingVoid_t>::Shutdown()
{
	const char   __FUNCTION__; // 56677
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 426, variables: 1 */

// <06618583> ../public/resourcesystem/stronghandle.h:609
// variable: 1
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	{
		int nRefCount; // 633
	}
} /* size: 0 */

// <064C992D> ../public/resourcesystem/stronghandle.h:609
// variable: 1
void CStrongHandle<ResourceBindingVoid_t>::Shutdown()
{
	{
		int nRefCount; // 633
	}
} /* size: 0 */

// <0631514E> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 4824
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <06311152> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown()
{
	const char   __FUNCTION__; // 4824
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <0608B06A> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 11844
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <060845E4> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown()
{
	const char   __FUNCTION__; // 11844
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <05D384A0> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 33988
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <05BB5E89> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<ResourceBindingVoid_t>::Shutdown()
{
	const char   __FUNCTION__; // 39320
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <05BA9ABD> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 39320
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <0590AFC5> ../../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 64756
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <058F5EDC> ../../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 52550
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <054DAACB> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCSequenceGroupData>::Shutdown()
{
	const char   __FUNCTION__; // 18160
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <054D2051> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCAnimData>::Shutdown()
{
	const char   __FUNCTION__; // 18160
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <054D1D68> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCAnimationGroup>::Shutdown()
{
	const char   __FUNCTION__; // 18160
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <052E1A0E> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 27927
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <0516AEC6> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCModel>::Shutdown()
{
	const char   __FUNCTION__; // 25178
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <05162609> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown()
{
	const char   __FUNCTION__; // 25178
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <0515D4DB> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCRenderMesh>::Shutdown()
{
	const char   __FUNCTION__; // 25178
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <0515D1F2> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCPhysAggregateData>::Shutdown()
{
	const char   __FUNCTION__; // 25178
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <0515CF09> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCAnimationGroup>::Shutdown()
{
	const char   __FUNCTION__; // 25178
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <0515CC20> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCSequenceGroupData>::Shutdown()
{
	const char   __FUNCTION__; // 25178
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <05017982> ../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 34485
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <050152D2> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCModel>::Shutdown()
{
	const char   __FUNCTION__; // 34485
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <05014D7F> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown()
{
	const char   __FUNCTION__; // 34485
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <0500CDBE> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCRenderMesh>::Shutdown()
{
	const char   __FUNCTION__; // 34485
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <0500CAD4> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCPhysAggregateData>::Shutdown()
{
	const char   __FUNCTION__; // 34485
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <0500C7EA> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCAnimationGroup>::Shutdown()
{
	const char   __FUNCTION__; // 34485
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <0500C500> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCSequenceGroupData>::Shutdown()
{
	const char   __FUNCTION__; // 34485
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <04E3764C> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown()
{
	const char   __FUNCTION__; // 39522
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 426, variables: 1 */

// <04D70349> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCSequenceGroupData>::Shutdown()
{
	const char   __FUNCTION__; // 53470
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <04D6C767> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCAnimData>::Shutdown()
{
	const char   __FUNCTION__; // 53470
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <04D6C480> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCAnimationGroup>::Shutdown()
{
	const char   __FUNCTION__; // 53470
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <04D20585> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown()
{
	const char   __FUNCTION__; // 62181
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 426, variables: 1 */

// <04CBA8BF> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCMorphSetData>::Shutdown()
{
	const char   __FUNCTION__; // 15472
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <04CB9CD3> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown()
{
	const char   __FUNCTION__; // 15472
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <04BAE693> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCRenderMesh>::Shutdown()
{
	const char   __FUNCTION__; // 28672
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <04BADC41> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCSequenceGroupData>::Shutdown()
{
	const char   __FUNCTION__; // 28672
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <04BABF5D> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCPhysAggregateData>::Shutdown()
{
	const char   __FUNCTION__; // 28672
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <04BA87FC> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown()
{
	const char   __FUNCTION__; // 28672
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <04BA5C63> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCAnimationGroup>::Shutdown()
{
	const char   __FUNCTION__; // 28672
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <04B9F6C7> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCAnimData>::Shutdown()
{
	const char   __FUNCTION__; // 28672
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <04AB1EC1> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 35601
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <04AB0D29> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCSequenceGroupData>::Shutdown()
{
	const char   __FUNCTION__; // 35601
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <04AA80F2> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown()
{
	const char   __FUNCTION__; // 35601
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <04AA4D24> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCAnimData>::Shutdown()
{
	const char   __FUNCTION__; // 35601
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <04AA4A3C> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCAnimationGroup>::Shutdown()
{
	const char   __FUNCTION__; // 35601
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <049994E4> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<InfoForResourceTypeCModel>::Shutdown()
{
	const char   __FUNCTION__; // 48085
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <0440D74C> ../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 59291
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <042E2CD3> ../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<ResourceBindingVoid_t>::Shutdown()
{
	const char   __FUNCTION__; // 46611
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <042DE6C7> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCEntityLump>::Shutdown()
{
	const char   __FUNCTION__; // 46611
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <04240F1F> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 22152
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <0423E145> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown()
{
	const char   __FUNCTION__; // 22152
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <0423DE5C> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCModel>::Shutdown()
{
	const char   __FUNCTION__; // 22152
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <0423DB73> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCRenderMesh>::Shutdown()
{
	const char   __FUNCTION__; // 22152
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <041B14BF> ../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<ResourceBindingVoid_t>::Shutdown()
{
	const char   __FUNCTION__; // 38927
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <041AD4E4> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<InfoForResourceTypeCEntityLump>::Shutdown()
{
	const char   __FUNCTION__; // 38927
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <0414352D> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 32532
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <040B01A8> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 49838
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <04009A58> ../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 46549
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <03F3858A> ../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 9688
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <03F36BE0> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown()
{
	const char   __FUNCTION__; // 9688
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 426, variables: 1 */

// <03E82440> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCSequenceGroupData>::Shutdown()
{
	const char   __FUNCTION__; // 29845
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <03E760CB> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCAnimData>::Shutdown()
{
	const char   __FUNCTION__; // 29845
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <03E75DE3> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCAnimationGroup>::Shutdown()
{
	const char   __FUNCTION__; // 29845
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <03D014EE> ../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 40324
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <03C87747> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown()
{
	const char   __FUNCTION__; // 25474
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 426, variables: 1 */

// <03C1DE80> ../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 59371
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <03C1B92E> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown()
{
	const char   __FUNCTION__; // 59371
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 426, variables: 1 */

// <03B8E896> ../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 45222
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <03B8BFAC> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCModel>::Shutdown()
{
	const char   __FUNCTION__; // 45222
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <03AE8E8D> ../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 15926
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <03A4C35E> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown()
{
	const char   __FUNCTION__; // 11935
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 426, variables: 1 */

// <039D7A6D> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 28904
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <0392C604> ../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 61914
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <0387C6B9> ../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 6269
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <037E05ED> ../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 40235
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <037DE8C7> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown()
{
	const char   __FUNCTION__; // 40235
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 426, variables: 1 */

// <0373B26E> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 13824
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <036A8560> ../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 30080
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <036A74E5> ../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown()
{
	const char   __FUNCTION__; // 30080
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <03620045> ../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 37345
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <03536EF0> ../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 20331
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <03533939> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown()
{
	const char   __FUNCTION__; // 20331
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 426, variables: 1 */

// <0346A6D0> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 27348
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <032FF45C> ../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 64498
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <032FD42A> ../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown()
{
	const char   __FUNCTION__; // 64498
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <0312AC05> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 38811
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <03060E59> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 36361
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <02FC047D> ../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 59198
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <02EB336A> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 63385
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <02C2D7F2> ../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown()
{
	const char   __FUNCTION__; // 18471
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <02B7D34C> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 8985
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <028BAC0E> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown()
{
	const char   __FUNCTION__; // 33284
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 426, variables: 1 */

// <027A32E3> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 33841
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <0269E43C> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<InfoForResourceTypeVSound_t>::Shutdown()
{
	const char   __FUNCTION__; // 228
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <02668487> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<InfoForResourceTypeVSound_t>::Shutdown()
{
	const char   __FUNCTION__; // 9366
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <02612CA0> ../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown()
{
	const char   __FUNCTION__; // 23163
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <0247477D> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<InfoForResourceTypeVSound_t>::Shutdown()
{
	const char   __FUNCTION__; // 54214
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <023EA398> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<ResourceBindingVoid_t>::Shutdown()
{
	const char   __FUNCTION__; // 59000
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 426, variables: 1 */

// <02355BE8> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 10
void CStrongHandle<ResourceBindingVoid_t>::Shutdown()
{
	const char   __FUNCTION__; // 58402
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		CResourceSystem::ResourceReferenceLeakTracking_Release(
							ResourceHandle_t hResource,
							ResourceLeakTrackingGroup_t trackingGroup,
							uintp nOptionalRefPairingUniqueID);  // 629
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <021CFDBC> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<ResourceBindingVoid_t>::Shutdown()
{
	const char   __FUNCTION__; // 43914
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 426, variables: 1 */

// <0218E7AB> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<ResourceBindingVoid_t>::Shutdown()
{
	const char   __FUNCTION__; // 14859
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 426, variables: 1 */

// <01F4DE43> ../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown()
{
	const char   __FUNCTION__; // 34420
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <01E82B4B> ../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 58795
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <01E80FFD> ../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown()
{
	const char   __FUNCTION__; // 58795
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <01D9F8C3> ../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown()
{
	const char   __FUNCTION__; // 44952
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <01CCB343> ../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown()
{
	const char   __FUNCTION__; // 39150
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <01C0DE43> ../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 38969
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <01C0C41F> ../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown()
{
	const char   __FUNCTION__; // 38969
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <01A01998> ../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown()
{
	const char   __FUNCTION__; // 65335
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <019347C9> ../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown()
{
	const char   __FUNCTION__; // 55250
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <01876DD0> ../public/resourcesystem/stronghandle.h:609
// variable: 1
// function calls: 9
void CStrongHandle<InfoForResourceTypeCRenderMesh>::Shutdown()
{
	{
		int nRefCount; // 633
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		{
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349 */

// <01857E70> ../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<InfoForResourceTypeCRenderMesh>::Shutdown()
{
	const char   __FUNCTION__; // 48501
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <01857337> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCModel>::Shutdown()
{
	const char   __FUNCTION__; // 48501
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <01856DEA> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCPhysAggregateData>::Shutdown()
{
	const char   __FUNCTION__; // 48501
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <018518AC> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCAnimationGroup>::Shutdown()
{
	const char   __FUNCTION__; // 48501
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <018515C3> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCSequenceGroupData>::Shutdown()
{
	const char   __FUNCTION__; // 48501
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <017173E6> ../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 8241
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <01715955> ../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown()
{
	const char   __FUNCTION__; // 8241
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <016553EE> ../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 9776
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <016539CB> ../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown()
{
	const char   __FUNCTION__; // 9776
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <01596758> ../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 9274
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <01594BCD> ../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown()
{
	const char   __FUNCTION__; // 9274
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <014D3A29> ../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown()
{
	const char   __FUNCTION__; // 9419
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <0127E087> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 46727
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <0126FE4D> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCModel>::Shutdown()
{
	const char   __FUNCTION__; // 46727
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <0126F5B9> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown()
{
	const char   __FUNCTION__; // 46727
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <0126DC8F> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCRenderMesh>::Shutdown()
{
	const char   __FUNCTION__; // 46727
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <0126D6C6> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeVSound_t>::Shutdown()
{
	const char   __FUNCTION__; // 46727
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <0126B278> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCVfx>::Shutdown()
{
	const char   __FUNCTION__; // 46727
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <0126ABE9> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeIAnimationGraph>::Shutdown()
{
	const char   __FUNCTION__; // 46727
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <010F8530> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<ResourceBindingVoid_t>::Shutdown()
{
	const char   __FUNCTION__; // 54360
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <010F7CBA> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCRenderMesh>::Shutdown()
{
	const char   __FUNCTION__; // 54360
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <010071BB> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCWorldNode>::Shutdown()
{
	const char   __FUNCTION__; // 21703
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <01004D73> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeWorld_t>::Shutdown()
{
	const char   __FUNCTION__; // 21703
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <00F2A541> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<ResourceBindingVoid_t>::Shutdown()
{
	const char   __FUNCTION__; // 52378
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <00F2931F> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCEntityLump>::Shutdown()
{
	const char   __FUNCTION__; // 52378
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <00F28D94> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeWorld_t>::Shutdown()
{
	const char   __FUNCTION__; // 52378
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <00F28AAD> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCVoxelVisibility>::Shutdown()
{
	const char   __FUNCTION__; // 52378
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <00C61F0D> ../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 47630
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <00C604E9> ../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown()
{
	const char   __FUNCTION__; // 47630
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <00B14409> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown()
{
	const char   __FUNCTION__; // 61400
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 426, variables: 1 */

// <009F2986> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<ResourceBindingVoid_t>::Shutdown()
{
	const char   __FUNCTION__; // 57510
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 426, variables: 1 */

// <008AB004> ../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown()
{
	const char   __FUNCTION__; // 25196
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <007CFE16> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown()
{
	const char   __FUNCTION__; // 7868
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 426, variables: 1 */

// <00746018> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 52384
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <00743D17> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCModel>::Shutdown()
{
	const char   __FUNCTION__; // 52384
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <005994ED> ../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 21385
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <005974D1> ../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown()
{
	const char   __FUNCTION__; // 21385
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <03256701> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCSequenceGroupData>::Shutdown()
{
	const char   __FUNCTION__; // 44464
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <03253F49> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCAnimData>::Shutdown()
{
	const char   __FUNCTION__; // 44464
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <03253C5E> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCAnimationGroup>::Shutdown()
{
	const char   __FUNCTION__; // 44464
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <03159A06> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<ResourceBindingVoid_t>::Shutdown()
{
	const char   __FUNCTION__; // 24176
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <02CF73D1> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<ResourceBindingVoid_t>::Shutdown()
{
	const char   __FUNCTION__; // 32213
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <02CEB005> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 32213
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <027EF2B7> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCSequenceGroupData>::Shutdown()
{
	const char   __FUNCTION__; // 21452
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <027EB6B8> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCAnimData>::Shutdown()
{
	const char   __FUNCTION__; // 21452
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <027EB3D0> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCAnimationGroup>::Shutdown()
{
	const char   __FUNCTION__; // 21452
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <02786597> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCSequenceGroupData>::Shutdown()
{
	const char   __FUNCTION__; // 48329
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <0278404F> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCAnimData>::Shutdown()
{
	const char   __FUNCTION__; // 48329
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <02783D64> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCAnimationGroup>::Shutdown()
{
	const char   __FUNCTION__; // 48329
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <0272C831> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCSequenceGroupData>::Shutdown()
{
	const char   __FUNCTION__; // 8687
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <02727B22> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCAnimData>::Shutdown()
{
	const char   __FUNCTION__; // 8687
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <0272783B> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCAnimationGroup>::Shutdown()
{
	const char   __FUNCTION__; // 8687
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <02695ED8> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCAnimData>::Shutdown()
{
	const char   __FUNCTION__; // 51372
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <02620DB9> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCAnimData>::Shutdown()
{
	const char   __FUNCTION__; // 64158
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <0232ED4A> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCSequenceGroupData>::Shutdown()
{
	const char   __FUNCTION__; // 45507
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <0232B0D5> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCAnimData>::Shutdown()
{
	const char   __FUNCTION__; // 45507
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <0232ADEA> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCAnimationGroup>::Shutdown()
{
	const char   __FUNCTION__; // 45507
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <021EDAD0> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown()
{
	const char   __FUNCTION__; // 52699
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <021267CD> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCSequenceGroupData>::Shutdown()
{
	const char   __FUNCTION__; // 1111
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <02122BEB> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCAnimData>::Shutdown()
{
	const char   __FUNCTION__; // 1111
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <02122904> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCAnimationGroup>::Shutdown()
{
	const char   __FUNCTION__; // 1111
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <020653F3> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown()
{
	const char   __FUNCTION__; // 4168
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <01FFF72D> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCMorphSetData>::Shutdown()
{
	const char   __FUNCTION__; // 22995
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <01FFEB41> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown()
{
	const char   __FUNCTION__; // 22995
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <01DF6D2F> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 43124
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <01DECF60> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown()
{
	const char   __FUNCTION__; // 43124
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <01CDE352> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<InfoForResourceTypeCModel>::Shutdown()
{
	const char   __FUNCTION__; // 55608
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <01CB4C90> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCSequenceGroupData>::Shutdown()
{
	const char   __FUNCTION__; // 21302
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <01CB2745> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCAnimData>::Shutdown()
{
	const char   __FUNCTION__; // 21302
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <01CB245B> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCAnimationGroup>::Shutdown()
{
	const char   __FUNCTION__; // 21302
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <0158005A> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCSequenceGroupData>::Shutdown()
{
	const char   __FUNCTION__; // 35220
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <0156D0EA> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCAnimData>::Shutdown()
{
	const char   __FUNCTION__; // 35220
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <0156CE03> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCAnimationGroup>::Shutdown()
{
	const char   __FUNCTION__; // 35220
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <013E973D> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCAnimData>::Shutdown()
{
	const char   __FUNCTION__; // 45626
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <0126C255> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCSequenceGroupData>::Shutdown()
{
	const char   __FUNCTION__; // 9770
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <0125FCC1> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCAnimData>::Shutdown()
{
	const char   __FUNCTION__; // 9770
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <0125F9DA> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCAnimationGroup>::Shutdown()
{
	const char   __FUNCTION__; // 9770
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <00E13589> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCSequenceGroupData>::Shutdown()
{
	const char   __FUNCTION__; // 10212
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <00E0DCC0> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCModel>::Shutdown()
{
	const char   __FUNCTION__; // 10212
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <00E00D9A> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCAnimData>::Shutdown()
{
	const char   __FUNCTION__; // 10212
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <00E00AB3> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCAnimationGroup>::Shutdown()
{
	const char   __FUNCTION__; // 10212
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <00C669CB> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<ResourceBindingVoid_t>::Shutdown()
{
	const char   __FUNCTION__; // 21871
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <00C64C61> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCModel>::Shutdown()
{
	const char   __FUNCTION__; // 21871
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <00C5AB8E> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeIAnimationGraph>::Shutdown()
{
	const char   __FUNCTION__; // 21871
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <003325F0> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCSequenceGroupData>::Shutdown()
{
	const char   __FUNCTION__; // 10766
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <00328FB5> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCAnimData>::Shutdown()
{
	const char   __FUNCTION__; // 10766
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <00328CCB> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCAnimationGroup>::Shutdown()
{
	const char   __FUNCTION__; // 10766
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <0158F2EC> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<ResourceBindingVoid_t>::Shutdown()
{
	const char   __FUNCTION__; // 42817
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <00DE4445> ../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 21052
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <00B75277> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 26743
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 426, variables: 1 */

// <004A8B63> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 3411
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 426, variables: 1 */

// <00175A2B> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 2442
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 426, variables: 1 */

// <00459B89> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<ResourceBindingVoid_t>::Shutdown()
{
	const char   __FUNCTION__; // 43323
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <006D5134> ../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 47556
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <001ECBE9> ../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 83
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <01588B95> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 38942
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <014E1009> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<ResourceBindingVoid_t>::Shutdown()
{
	const char   __FUNCTION__; // 22397
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <01398D9B> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCSequenceGroupData>::Shutdown()
{
	const char   __FUNCTION__; // 48
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <013969B3> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCAnimData>::Shutdown()
{
	const char   __FUNCTION__; // 48
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <013966C7> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCAnimationGroup>::Shutdown()
{
	const char   __FUNCTION__; // 48
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <0107FE33> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCPhysAggregateData>::Shutdown()
{
	const char   __FUNCTION__; // 39680
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <00F3A5C3> ../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 48987
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <00F37F13> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCModel>::Shutdown()
{
	const char   __FUNCTION__; // 48987
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <00F379C0> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown()
{
	const char   __FUNCTION__; // 48987
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <00F2F9FF> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCRenderMesh>::Shutdown()
{
	const char   __FUNCTION__; // 48987
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <00F2F715> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCPhysAggregateData>::Shutdown()
{
	const char   __FUNCTION__; // 48987
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <00F2F42B> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCAnimationGroup>::Shutdown()
{
	const char   __FUNCTION__; // 48987
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <00F2F141> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCSequenceGroupData>::Shutdown()
{
	const char   __FUNCTION__; // 48987
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <00D5A28D> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown()
{
	const char   __FUNCTION__; // 54024
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <00C92F8A> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCSequenceGroupData>::Shutdown()
{
	const char   __FUNCTION__; // 2436
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <00C8F3A8> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCAnimData>::Shutdown()
{
	const char   __FUNCTION__; // 2436
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <00C8F0C1> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCAnimationGroup>::Shutdown()
{
	const char   __FUNCTION__; // 2436
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <00BDD500> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCMorphSetData>::Shutdown()
{
	const char   __FUNCTION__; // 29974
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <00BDC914> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown()
{
	const char   __FUNCTION__; // 29974
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <00B26DA0> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCPhysAggregateData>::Shutdown()
{
	const char   __FUNCTION__; // 10920
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <00A2CD04> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 17849
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <00A2BB6C> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCSequenceGroupData>::Shutdown()
{
	const char   __FUNCTION__; // 17849
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <00A22F35> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown()
{
	const char   __FUNCTION__; // 17849
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <00A1FB67> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCAnimData>::Shutdown()
{
	const char   __FUNCTION__; // 17849
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <00A1F87F> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCAnimationGroup>::Shutdown()
{
	const char   __FUNCTION__; // 17849
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <00914327> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<InfoForResourceTypeCModel>::Shutdown()
{
	const char   __FUNCTION__; // 30333
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 426, variables: 1 */

// <004D5CCC> ../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 3645
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <0040B16E> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 50281
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <00409CED> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<ResourceBindingVoid_t>::Shutdown()
{
	const char   __FUNCTION__; // 50281
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <00405327> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCRenderMesh>::Shutdown()
{
	const char   __FUNCTION__; // 50281
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <00353D25> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<ResourceBindingVoid_t>::Shutdown()
{
	const char   __FUNCTION__; // 27357
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <0021E06E> ../public/resourcesystem/stronghandle.h:609
// variables: 3
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 6271
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
		}
	}
} /* size: 0, variables: 1 */

// <0021AF75> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown()
{
	const char   __FUNCTION__; // 6271
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <0016B1B4> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeIAnimationGraph>::Shutdown()
{
	const char   __FUNCTION__; // 13284
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <0007951D> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<InfoForResourceTypeCModel>::Shutdown()
{
	const char   __FUNCTION__; // 32105
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 426, variables: 1 */

// <00285A50> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 29886
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 426, variables: 1 */

// <00173AA5> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 31817
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 426, variables: 1 */

// <00CF214C> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<ResourceBindingVoid_t>::Shutdown()
{
	const char   __FUNCTION__; // 48806
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <007ADF9B> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<ResourceBindingVoid_t>::Shutdown()
{
	const char   __FUNCTION__; // 21794
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <006C49A7> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 61872
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <00681CC0> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 57895
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <00443929> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 57855
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <0043B587> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown()
{
	const char   __FUNCTION__; // 57855
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <0039DD84> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 11
void CStrongHandle<InfoForResourceTypeCVfx>::Shutdown()
{
	const char   __FUNCTION__; // 46606
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CUtlSymbolLarge::String(); // 160
			ResourceGetName(ResourceNameHandle_t hResourceName,
					CResourceName* pTarget);  // 201
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 0, variables: 1 */

// <00346A16> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 64879
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <003463E0> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown()
{
	const char   __FUNCTION__; // 64879
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <0015E70D> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCVfx>::Shutdown()
{
	const char   __FUNCTION__; // 62782
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <000910CA> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown()
{
	const char   __FUNCTION__; // 55995
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <0008F843> ../public/resourcesystem/stronghandle.h:609
// variables: 3
// function calls: 9
void CStrongHandle<InfoForResourceTypeCVfx>::Shutdown()
{
	const char   __FUNCTION__; // 55995
	{
		int nRefCount; // 633
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
			CResourceNameGetter::CResourceNameGetter(
						ResourceNameHandle_t hResourceName);  // 638
			CResourceName::Get(); // 638
			CBufferString::~CBufferString(); // 587
			CBufferStringN<200>::~CBufferStringN(); // 318
			CResourceName::~CResourceName(); // 191
			CResourceNameGetter::~CResourceNameGetter(); // 638
		}
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 633
		CInterlockedIntT<int, 4>::operator==(
				int rhs);  // 643
	}
} /* size: 349, variables: 1 */

// <0670F09D> ../public/resourcesystem/stronghandle.h:657
inline void CStrongHandle<ResourceBindingVoid_t>::operator=(ResourceHandleTyped_t hResource)
{
} /* size: 0 */

// <06312856> ../public/resourcesystem/stronghandle.h:657
inline void CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(ResourceHandleTyped_t hResource)
{
} /* size: 0 */

// <04D209CB> ../public/resourcesystem/stronghandle.h:657
inline void CStrongHandle<InfoForResourceTypeIMaterial2>::operator=(ResourceHandleTyped_t hResource)
{
} /* size: 0 */

// <042DF1CF> ../public/resourcesystem/stronghandle.h:657
inline void CStrongHandle<InfoForResourceTypeCEntityLump>::operator=(ResourceHandleTyped_t hResource)
{
} /* size: 0 */

// <00168CCA> ../public/resourcesystem/stronghandle.h:657
inline void CStrongHandle<InfoForResourceTypeCVfx>::operator=(ResourceHandleTyped_t hResource)
{
} /* size: 0 */

// <05D39432> ../public/resourcesystem/stronghandle.h:664
inline void CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(const CStrongHandle<InfoForResourceTypeCTextureBase>& src)
{
} /* size: 0 */

// <054C72EF> ../public/resourcesystem/stronghandle.h:664
inline void CStrongHandle<InfoForResourceTypeCAnimationGroup>::operator=(const CStrongHandle<InfoForResourceTypeCAnimationGroup>& src)
{
} /* size: 0 */

// <054C7289> ../public/resourcesystem/stronghandle.h:664
inline void CStrongHandle<InfoForResourceTypeCAnimData>::operator=(const CStrongHandle<InfoForResourceTypeCAnimData>& src)
{
} /* size: 0 */

// <0516D618> ../public/resourcesystem/stronghandle.h:664
inline void CStrongHandle<InfoForResourceTypeCModel>::operator=(const CStrongHandle<InfoForResourceTypeCModel>& src)
{
} /* size: 0 */

// <05161B61> ../public/resourcesystem/stronghandle.h:664
inline void CStrongHandle<InfoForResourceTypeIMaterial2>::operator=(const CStrongHandle<InfoForResourceTypeIMaterial2>& src)
{
} /* size: 0 */

// <05160A93> ../public/resourcesystem/stronghandle.h:664
inline void CStrongHandle<InfoForResourceTypeCRenderMesh>::operator=(const CStrongHandle<InfoForResourceTypeCRenderMesh>& src)
{
} /* size: 0 */

// <05160989> ../public/resourcesystem/stronghandle.h:664
inline void CStrongHandle<InfoForResourceTypeCPhysAggregateData>::operator=(const CStrongHandle<InfoForResourceTypeCPhysAggregateData>& src)
{
} /* size: 0 */

// <05160859> ../public/resourcesystem/stronghandle.h:664
inline void CStrongHandle<InfoForResourceTypeCSequenceGroupData>::operator=(const CStrongHandle<InfoForResourceTypeCSequenceGroupData>& src)
{
} /* size: 0 */

// <00168EEE> ../public/resourcesystem/stronghandle.h:664
inline void CStrongHandle<InfoForResourceTypeCVfx>::operator=(const CStrongHandle<InfoForResourceTypeCVfx>& src)
{
} /* size: 0 */

// <04E3D5C5> ../public/resourcesystem/stronghandle.h:671
inline void CStrongHandle<InfoForResourceTypeIMaterial2>::operator=(const CWeakHandle<InfoForResourceTypeIMaterial2>& src)
{
} /* size: 0 */

// <04CBF376> ../public/resourcesystem/stronghandle.h:671
inline void CStrongHandle<InfoForResourceTypeCMorphSetData>::operator=(const CWeakHandle<InfoForResourceTypeCMorphSetData>& src)
{
} /* size: 0 */

// <04BB2266> ../public/resourcesystem/stronghandle.h:671
inline void CStrongHandle<InfoForResourceTypeCRenderMesh>::operator=(const CWeakHandle<InfoForResourceTypeCRenderMesh>& src)
{
} /* size: 0 */

// <04BB21C6> ../public/resourcesystem/stronghandle.h:671
inline void CStrongHandle<InfoForResourceTypeCPhysAggregateData>::operator=(const CWeakHandle<InfoForResourceTypeCPhysAggregateData>& src)
{
} /* size: 0 */

// <04BB2156> ../public/resourcesystem/stronghandle.h:671
inline void CStrongHandle<InfoForResourceTypeCAnimationGroup>::operator=(const CWeakHandle<InfoForResourceTypeCAnimationGroup>& src)
{
} /* size: 0 */

// <04999EA2> ../public/resourcesystem/stronghandle.h:671
inline void CStrongHandle<InfoForResourceTypeCModel>::operator=(const CWeakHandle<InfoForResourceTypeCModel>& src)
{
} /* size: 0 */

// <039D6B97> ../public/resourcesystem/stronghandle.h:671
inline void CStrongHandle<InfoForResourceTypeCTextureBase>::operator=(const CWeakHandle<InfoForResourceTypeCTextureBase>& src)
{
} /* size: 0 */

// <0269E937> ../public/resourcesystem/stronghandle.h:671
inline void CStrongHandle<InfoForResourceTypeVSound_t>::operator=(const CWeakHandle<InfoForResourceTypeVSound_t>& src)
{
} /* size: 0 */

// <010078E5> ../public/resourcesystem/stronghandle.h:671
inline void CStrongHandle<InfoForResourceTypeWorld_t>::operator=(const CWeakHandle<InfoForResourceTypeWorld_t>& src)
{
} /* size: 0 */

// <0100780B> ../public/resourcesystem/stronghandle.h:671
inline void CStrongHandle<InfoForResourceTypeCWorldNode>::operator=(const CWeakHandle<InfoForResourceTypeCWorldNode>& src)
{
} /* size: 0 */

// <00F2ABE1> ../public/resourcesystem/stronghandle.h:671
inline void CStrongHandle<InfoForResourceTypeCVoxelVisibility>::operator=(const CWeakHandle<InfoForResourceTypeCVoxelVisibility>& src)
{
} /* size: 0 */

// <00E70B1B> ../public/resourcesystem/stronghandle.h:671
inline void CStrongHandle<InfoForResourceTypeCEntityLump>::operator=(const CWeakHandle<InfoForResourceTypeCEntityLump>& src)
{
} /* size: 0 */

// <00C6D491> ../public/resourcesystem/stronghandle.h:671
inline void CStrongHandle<InfoForResourceTypeIAnimationGraph>::operator=(const CWeakHandle<InfoForResourceTypeIAnimationGraph>& src)
{
} /* size: 0 */

// <00168C46> ../public/resourcesystem/stronghandle.h:671
inline void CStrongHandle<InfoForResourceTypeCVfx>::operator=(const CWeakHandle<InfoForResourceTypeCVfx>& src)
{
} /* size: 0 */

// <018572D2> ../public/resourcesystem/stronghandle.h:683
void CStrongHandle<InfoForResourceTypeCRenderMesh>::Move(CStrongHandle<InfoForResourceTypeCRenderMesh>& moveSrc)
{
} /* size: 0 */

// <00164CD7> ../public/resourcesystem/stronghandle.h:683
void CStrongHandle<InfoForResourceTypeCModel>::Move(CStrongHandle<InfoForResourceTypeCModel>& moveSrc)
{
} /* size: 0 */

// <00164C36> ../public/resourcesystem/stronghandle.h:683
void CStrongHandle<InfoForResourceTypeIAnimationGraph>::Move(CStrongHandle<InfoForResourceTypeIAnimationGraph>& moveSrc)
{
} /* size: 0 */

// <04E3EF19> ../public/resourcesystem/stronghandle.h:708
inline void CStrongHandle<InfoForResourceTypeCRenderMesh>::GetHandle()
{
} /* size: 0 */

// <04E3E443> ../public/resourcesystem/stronghandle.h:708
inline void CStrongHandle<InfoForResourceTypeCPhysAggregateData>::GetHandle()
{
} /* size: 0 */

// <04E3E17E> ../public/resourcesystem/stronghandle.h:708
inline void CStrongHandle<InfoForResourceTypeCAnimationGroup>::GetHandle()
{
} /* size: 0 */

// <04E3D5EB> ../public/resourcesystem/stronghandle.h:708
inline void CStrongHandle<InfoForResourceTypeIMaterial2>::GetHandle()
{
} /* size: 0 */

// <039D6AE3> ../public/resourcesystem/stronghandle.h:708
inline void CStrongHandle<InfoForResourceTypeCTextureBase>::GetHandle()
{
} /* size: 0 */

// <01279924> ../public/resourcesystem/stronghandle.h:708
inline void CStrongHandle<InfoForResourceTypeCModel>::GetHandle()
{
} /* size: 0 */

// <0127990B> ../public/resourcesystem/stronghandle.h:708
inline void CStrongHandle<InfoForResourceTypeIAnimationGraph>::GetHandle()
{
} /* size: 0 */

// <012798D2> ../public/resourcesystem/stronghandle.h:708
inline void CStrongHandle<InfoForResourceTypeCVfx>::GetHandle()
{
} /* size: 0 */

// <01277966> ../public/resourcesystem/stronghandle.h:708
inline void CStrongHandle<InfoForResourceTypeVSound_t>::GetHandle()
{
} /* size: 0 */

// <01008732> ../public/resourcesystem/stronghandle.h:708
inline void CStrongHandle<InfoForResourceTypeCEntityLump>::GetHandle()
{
} /* size: 0 */

// <0373A40C> ../public/resourcesystem/stronghandle.h:716
inline void CStrongHandle<InfoForResourceTypeCTextureBase>::GetBinding()
{
} /* size: 0 */

// <0127955A> ../public/resourcesystem/stronghandle.h:716
inline void CStrongHandle<InfoForResourceTypeCModel>::GetBinding()
{
} /* size: 0 */

// <01279247> ../public/resourcesystem/stronghandle.h:716
inline void CStrongHandle<InfoForResourceTypeCRenderMesh>::GetBinding()
{
} /* size: 0 */

// <012787C7> ../public/resourcesystem/stronghandle.h:716
inline void CStrongHandle<InfoForResourceTypeCVfx>::GetBinding()
{
} /* size: 0 */

// <01278166> ../public/resourcesystem/stronghandle.h:716
inline void CStrongHandle<InfoForResourceTypeIAnimationGraph>::GetBinding()
{
} /* size: 0 */

// <01277E21> ../public/resourcesystem/stronghandle.h:716
inline void CStrongHandle<InfoForResourceTypeIMaterial2>::GetBinding()
{
} /* size: 0 */

// <0127790B> ../public/resourcesystem/stronghandle.h:716
inline void CStrongHandle<InfoForResourceTypeVSound_t>::GetBinding()
{
} /* size: 0 */

// <04CBF35D> ../public/resourcesystem/stronghandle.h:724
void CStrongHandle<InfoForResourceTypeCMorphSetData>::GetData()
{
} /* size: 0 */

// <03B8D0F2> ../public/resourcesystem/stronghandle.h:724
void CStrongHandle<InfoForResourceTypeCModel>::GetData()
{
} /* size: 0 */

// <0392B73E> ../public/resourcesystem/stronghandle.h:724
void CStrongHandle<InfoForResourceTypeIMaterial2>::GetData()
{
} /* size: 0 */

// <0127871B> ../public/resourcesystem/stronghandle.h:724
void CStrongHandle<InfoForResourceTypeCVfx>::GetData()
{
} /* size: 0 */

// <0127814D> ../public/resourcesystem/stronghandle.h:724
void CStrongHandle<InfoForResourceTypeIAnimationGraph>::GetData()
{
} /* size: 0 */

// <012778F2> ../public/resourcesystem/stronghandle.h:724
void CStrongHandle<InfoForResourceTypeVSound_t>::GetData()
{
} /* size: 0 */

// <010078CC> ../public/resourcesystem/stronghandle.h:724
void CStrongHandle<InfoForResourceTypeWorld_t>::GetData()
{
} /* size: 0 */

// <010076FD> ../public/resourcesystem/stronghandle.h:724
void CStrongHandle<InfoForResourceTypeCWorldNode>::GetData()
{
} /* size: 0 */

// <00F2ABAF> ../public/resourcesystem/stronghandle.h:724
void CStrongHandle<InfoForResourceTypeCVoxelVisibility>::GetData()
{
} /* size: 0 */

// <00C82890> ../public/resourcesystem/stronghandle.h:724
void CStrongHandle<InfoForResourceTypeCSequenceGroupData>::GetData()
{
} /* size: 0 */

// <0499A1FD> ../public/resourcesystem/stronghandle.h:731
inline void operator const CStrongHandle<InfoForResourceTypeCModel>::ResourceHandleInfo_t<InfoForResourceTypeCModel>::RuntimeClass_t*()
{
} /* size: 0 */

// <04009BB3> ../public/resourcesystem/stronghandle.h:731
inline void operator const CStrongHandle<InfoForResourceTypeIMaterial2>::ResourceHandleInfo_t<InfoForResourceTypeIMaterial2>::RuntimeClass_t*()
{
} /* size: 0 */

// <0269EAB0> ../public/resourcesystem/stronghandle.h:731
inline void operator const CStrongHandle<InfoForResourceTypeVSound_t>::ResourceHandleInfo_t<InfoForResourceTypeVSound_t>::RuntimeClass_t*()
{
} /* size: 0 */

// <06E26548> ../../public/resourcesystem/stronghandle.h:738
inline void CStrongHandle<InfoForResourceTypeCModel>::operator->()
{
} /* size: 0 */

// <06091E84> ../public/resourcesystem/stronghandle.h:738
inline void CStrongHandle<InfoForResourceTypeIMaterial2>::operator->()
{
} /* size: 0 */

// <0254D83B> ../public/resourcesystem/stronghandle.h:738
inline void CStrongHandle<InfoForResourceTypeVSound_t>::operator->()
{
} /* size: 0 */

// <0631287C> ../public/resourcesystem/stronghandle.h:745
inline void operator CStrongHandle<InfoForResourceTypeCTextureBase>::CStrongHandle<InfoForResourceTypeCTextureBase>::ResourceHandleTyped_t()
{
} /* size: 0 */

// <04D20154> ../public/resourcesystem/stronghandle.h:745
inline void operator CStrongHandle<InfoForResourceTypeIMaterial2>::CStrongHandle<InfoForResourceTypeIMaterial2>::ResourceHandleTyped_t()
{
} /* size: 0 */

// <042DF1F5> ../public/resourcesystem/stronghandle.h:745
inline void operator CStrongHandle<InfoForResourceTypeCEntityLump>::CStrongHandle<InfoForResourceTypeCEntityLump>::ResourceHandleTyped_t()
{
} /* size: 0 */

// <0126B857> ../public/resourcesystem/stronghandle.h:745
inline void operator CStrongHandle<InfoForResourceTypeVSound_t>::CStrongHandle<InfoForResourceTypeVSound_t>::ResourceHandleTyped_t()
{
} /* size: 0 */

// <0126A9A9> ../public/resourcesystem/stronghandle.h:745
inline void operator CStrongHandle<InfoForResourceTypeCRenderMesh>::CStrongHandle<InfoForResourceTypeCRenderMesh>::ResourceHandleTyped_t()
{
} /* size: 0 */

// <06A6E1C9> ../public/resourcesystem/stronghandle.h:752
inline void operator CStrongHandle<InfoForResourceTypeCTextureBase>::CWeakHandle<InfoForResourceTypeCTextureBase>()
{
} /* size: 0 */

// <04CC045B> ../public/resourcesystem/stronghandle.h:752
inline void operator CStrongHandle<InfoForResourceTypeIMaterial2>::CWeakHandle<InfoForResourceTypeIMaterial2>()
{
} /* size: 0 */

// <0499A1E4> ../public/resourcesystem/stronghandle.h:752
inline void operator CStrongHandle<InfoForResourceTypeCModel>::CWeakHandle<InfoForResourceTypeCModel>()
{
} /* size: 0 */

// <00F2AC48> ../public/resourcesystem/stronghandle.h:752
inline void operator CStrongHandle<InfoForResourceTypeWorld_t>::CWeakHandle<InfoForResourceTypeWorld_t>()
{
} /* size: 0 */

// <00E72398> ../public/resourcesystem/stronghandle.h:752
inline void operator CStrongHandle<InfoForResourceTypeCEntityLump>::CWeakHandle<InfoForResourceTypeCEntityLump>()
{
} /* size: 0 */

// <00C82EFB> ../public/resourcesystem/stronghandle.h:752
inline void operator CStrongHandle<InfoForResourceTypeCAnimData>::CWeakHandle<InfoForResourceTypeCAnimData>()
{
} /* size: 0 */

// <00C6D4B7> ../public/resourcesystem/stronghandle.h:752
inline void operator CStrongHandle<InfoForResourceTypeIAnimationGraph>::CWeakHandle<InfoForResourceTypeIAnimationGraph>()
{
} /* size: 0 */

// <04006EFB> ../public/resourcesystem/stronghandle.h:758
inline void operator CStrongHandle<InfoForResourceTypeIMaterial2>::ResourceHandle_t()
{
} /* size: 0 */

// <0305F691> ../public/resourcesystem/stronghandle.h:758
inline void operator CStrongHandle<InfoForResourceTypeCTextureBase>::ResourceHandle_t()
{
} /* size: 0 */

// <023EB52E> ../public/resourcesystem/stronghandle.h:758
inline void operator CStrongHandle<ResourceBindingVoid_t>::ResourceHandle_t()
{
} /* size: 0 */

// <00F2B317> ../public/resourcesystem/stronghandle.h:758
inline void operator CStrongHandle<InfoForResourceTypeWorld_t>::ResourceHandle_t()
{
} /* size: 0 */

// <00168C14> ../public/resourcesystem/stronghandle.h:758
inline void operator CStrongHandle<InfoForResourceTypeCVfx>::ResourceHandle_t()
{
} /* size: 0 */

// <00E0DC8E> ../public/resourcesystem/stronghandle.h:780
inline void CStrongHandle<InfoForResourceTypeCModel>::GetReloadCounter()
{
} /* size: 0 */

// <023EA72C> ../public/resourcesystem/stronghandle.h:791
inline void CStrongHandle<ResourceBindingVoid_t>::operator==(ResourceHandle_t hResource)
{
} /* size: 0 */

// <0016A705> ../public/resourcesystem/stronghandle.h:805
inline void CStrongHandle<InfoForResourceTypeCModel>::operator==(const CStrongHandle<InfoForResourceTypeCModel>& hResource)
{
} /* size: 0 */

// <00167969> ../public/resourcesystem/stronghandle.h:805
inline void CStrongHandle<InfoForResourceTypeIAnimationGraph>::operator==(const CStrongHandle<InfoForResourceTypeIAnimationGraph>& hResource)
{
} /* size: 0 */

// <0127CCFF> ../public/resourcesystem/stronghandle.h:812
inline void CStrongHandle<InfoForResourceTypeCModel>::operator==(const CWeakHandle<InfoForResourceTypeCModel>& hResource)
{
} /* size: 0 */

// <00F2B330> ../public/resourcesystem/stronghandle.h:812
inline void CStrongHandle<InfoForResourceTypeWorld_t>::operator==(const CWeakHandle<InfoForResourceTypeWorld_t>& hResource)
{
} /* size: 0 */

// <00B7507E> ../public/resourcesystem/stronghandle.h:812
inline void CStrongHandle<InfoForResourceTypeCTextureBase>::operator==(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource)
{
} /* size: 0 */

// <0040ACBF> ../public/resourcesystem/stronghandle.h:812
inline void CStrongHandle<InfoForResourceTypeCRenderMesh>::operator==(const CWeakHandle<InfoForResourceTypeCRenderMesh>& hResource)
{
} /* size: 0 */

// <0039E320> ../public/resourcesystem/stronghandle.h:812
inline void CStrongHandle<InfoForResourceTypeCVfx>::operator==(const CWeakHandle<InfoForResourceTypeCVfx>& hResource)
{
} /* size: 0 */

// <003470B3> ../public/resourcesystem/stronghandle.h:812
inline void CStrongHandle<InfoForResourceTypeIMaterial2>::operator==(const CWeakHandle<InfoForResourceTypeIMaterial2>& hResource)
{
} /* size: 0 */

// <0499A1BE> ../public/resourcesystem/stronghandle.h:833
inline void CStrongHandle<InfoForResourceTypeCModel>::operator!=(const CStrongHandle<InfoForResourceTypeCModel>& hResource)
{
} /* size: 0 */

// <0057D453> ../public/resourcesystem/stronghandle.h:833
inline void CStrongHandle<InfoForResourceTypeCTextureBase>::operator!=(const CStrongHandle<InfoForResourceTypeCTextureBase>& hResource)
{
} /* size: 0 */

// <04999EC8> ../public/resourcesystem/stronghandle.h:840
inline void CStrongHandle<InfoForResourceTypeCModel>::operator!=(const CWeakHandle<InfoForResourceTypeCModel>& hResource)
{
} /* size: 0 */

// <03C1CB11> ../public/resourcesystem/stronghandle.h:840
inline void CStrongHandle<InfoForResourceTypeIMaterial2>::operator!=(const CWeakHandle<InfoForResourceTypeIMaterial2>& hResource)
{
} /* size: 0 */

// <039D7D8A> ../public/resourcesystem/stronghandle.h:840
inline void CStrongHandle<InfoForResourceTypeCTextureBase>::operator!=(const CWeakHandle<InfoForResourceTypeCTextureBase>& hResource)
{
} /* size: 0 */

// <010074A2> ../public/resourcesystem/stronghandle.h:840
inline void CStrongHandle<InfoForResourceTypeCWorldNode>::operator!=(const CWeakHandle<InfoForResourceTypeCWorldNode>& hResource)
{
} /* size: 0 */

// <04BB13FC> ../public/resourcesystem/stronghandle.h:851
inline void CStrongHandle<InfoForResourceTypeCPhysAggregateData>::HasHandle()
{
} /* size: 0 */

// <03B8D01D> ../public/resourcesystem/stronghandle.h:851
inline void CStrongHandle<InfoForResourceTypeIMaterial2>::HasHandle()
{
} /* size: 0 */

// <02EB0008> ../public/resourcesystem/stronghandle.h:851
inline void CStrongHandle<InfoForResourceTypeCTextureBase>::HasHandle()
{
} /* size: 0 */

// <02474CA0> ../public/resourcesystem/stronghandle.h:851
inline void CStrongHandle<InfoForResourceTypeVSound_t>::HasHandle()
{
} /* size: 0 */

// <0218ED6B> ../public/resourcesystem/stronghandle.h:851
inline void CStrongHandle<ResourceBindingVoid_t>::HasHandle()
{
} /* size: 0 */

// <04E3E45C> ../public/resourcesystem/stronghandle.h:857
inline void CStrongHandle<InfoForResourceTypeCPhysAggregateData>::HasIdentity()
{
} /* size: 0 */

// <02EA7448> ../public/resourcesystem/stronghandle.h:857
inline void CStrongHandle<InfoForResourceTypeCTextureBase>::HasIdentity()
{
} /* size: 0 */

// <06E26561> ../../public/resourcesystem/stronghandle.h:867
inline void CStrongHandle<InfoForResourceTypeCModel>::HasData()
{
} /* size: 0 */

// <03C87CDD> ../public/resourcesystem/stronghandle.h:867
inline void CStrongHandle<InfoForResourceTypeIMaterial2>::HasData()
{
} /* size: 0 */

// <02C2F720> ../public/resourcesystem/stronghandle.h:867
inline void CStrongHandle<InfoForResourceTypeCTextureBase>::HasData()
{
} /* size: 0 */

// <024B940C> ../public/resourcesystem/stronghandle.h:867
inline void CStrongHandle<InfoForResourceTypeVSound_t>::HasData()
{
} /* size: 0 */

// <01279292> ../public/resourcesystem/stronghandle.h:867
inline void CStrongHandle<InfoForResourceTypeCRenderMesh>::HasData()
{
} /* size: 0 */

// <01278854> ../public/resourcesystem/stronghandle.h:867
inline void CStrongHandle<InfoForResourceTypeCVfx>::HasData()
{
} /* size: 0 */

// <012781F3> ../public/resourcesystem/stronghandle.h:867
inline void CStrongHandle<InfoForResourceTypeIAnimationGraph>::HasData()
{
} /* size: 0 */

// <00F2ABC8> ../public/resourcesystem/stronghandle.h:867
inline void CStrongHandle<InfoForResourceTypeCVoxelVisibility>::HasData()
{
} /* size: 0 */

// <02C2F8A4> ../public/resourcesystem/stronghandle.h:877
inline void CStrongHandle<InfoForResourceTypeCTextureBase>::IsLoaded()
{
} /* size: 0 */

// <012795B5> ../public/resourcesystem/stronghandle.h:877
inline void CStrongHandle<InfoForResourceTypeCModel>::IsLoaded()
{
} /* size: 0 */

// <01279260> ../public/resourcesystem/stronghandle.h:877
inline void CStrongHandle<InfoForResourceTypeCRenderMesh>::IsLoaded()
{
} /* size: 0 */

// <01278822> ../public/resourcesystem/stronghandle.h:877
inline void CStrongHandle<InfoForResourceTypeCVfx>::IsLoaded()
{
} /* size: 0 */

// <012781C1> ../public/resourcesystem/stronghandle.h:877
inline void CStrongHandle<InfoForResourceTypeIAnimationGraph>::IsLoaded()
{
} /* size: 0 */

// <01277E3A> ../public/resourcesystem/stronghandle.h:877
inline void CStrongHandle<InfoForResourceTypeIMaterial2>::IsLoaded()
{
} /* size: 0 */

// <0127797F> ../public/resourcesystem/stronghandle.h:877
inline void CStrongHandle<InfoForResourceTypeVSound_t>::IsLoaded()
{
} /* size: 0 */

// <01007716> ../public/resourcesystem/stronghandle.h:877
inline void CStrongHandle<InfoForResourceTypeCWorldNode>::IsLoaded()
{
} /* size: 0 */

// <02C30244> ../public/resourcesystem/stronghandle.h:887
void CStrongHandle<InfoForResourceTypeCTextureBase>::IsError()
{
} /* size: 0 */

// <012795CE> ../public/resourcesystem/stronghandle.h:887
void CStrongHandle<InfoForResourceTypeCModel>::IsError()
{
} /* size: 0 */

// <01279279> ../public/resourcesystem/stronghandle.h:887
void CStrongHandle<InfoForResourceTypeCRenderMesh>::IsError()
{
} /* size: 0 */

// <0127883B> ../public/resourcesystem/stronghandle.h:887
void CStrongHandle<InfoForResourceTypeCVfx>::IsError()
{
} /* size: 0 */

// <012781DA> ../public/resourcesystem/stronghandle.h:887
void CStrongHandle<InfoForResourceTypeIAnimationGraph>::IsError()
{
} /* size: 0 */

// <01277E53> ../public/resourcesystem/stronghandle.h:887
void CStrongHandle<InfoForResourceTypeIMaterial2>::IsError()
{
} /* size: 0 */

// <01277998> ../public/resourcesystem/stronghandle.h:887
void CStrongHandle<InfoForResourceTypeVSound_t>::IsError()
{
} /* size: 0 */

// <010089AE> ../public/resourcesystem/stronghandle.h:895
inline void CStrongHandle<InfoForResourceTypeCTextureBase>::GetResourceName(CBufferString* pOutName, bool bAppend)
{
} /* size: 0 */

// <00C64829> ../public/resourcesystem/stronghandle.h:904
inline void CStrongHandle<InfoForResourceTypeCSequenceGroupData>::GetResourceName(CResourceName* pOutName)
{
} /* size: 0 */

