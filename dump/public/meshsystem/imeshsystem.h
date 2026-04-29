
//
// public/meshsystem/imeshsystem.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//
//	functions: 47
//	classes: 14
//

// <03EA6055> ../public/meshsystem/imeshsystem.h:38
void CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >::CModelMeshHandleBase()
{
} /* size: 0 */

// <03EA6039> ../public/meshsystem/imeshsystem.h:38
inline void CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >::CModelMeshHandleBase()
{
} /* size: 0 */

// <03E8FED2> ../public/meshsystem/imeshsystem.h:38
inline void CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >::operator=(const CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > &)
{
} /* size: 0 */

// <0008141D> ../public/meshsystem/imeshsystem.h:38
void CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::CModelMeshHandleBase()
{
} /* size: 0 */

// <00081401> ../public/meshsystem/imeshsystem.h:38
inline void CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::CModelMeshHandleBase()
{
} /* size: 0 */

// <000813EA> ../public/meshsystem/imeshsystem.h:38
void CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::~CModelMeshHandleBase()
{
} /* size: 0 */

// <000813CE> ../public/meshsystem/imeshsystem.h:38
inline void CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::~CModelMeshHandleBase()
{
} /* size: 0 */

// <00081241> ../public/meshsystem/imeshsystem.h:38
inline void CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::operator=(const CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > &)
{
} /* size: 0 */

// <000FB5F2> ../public/meshsystem/imeshsystem.h:38
// member functions: 26
// member variables: 2
// class size: 16
class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > {
	/* ../public/meshsystem/imeshsystem.h:41 */
	CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >& operator=(CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* , const CModelMeshHandle& );
	/* ../public/meshsystem/imeshsystem.h:47 */
	CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >& operator=(CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* , const CModelMeshHandleStrong& );
	/* ../public/meshsystem/imeshsystem.h:53 */
	void Clear(CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* );
	/* ../public/meshsystem/imeshsystem.h:59 */
	void Assign(CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* , const CModelMeshHandle& );
	/* ../public/meshsystem/imeshsystem.h:60 */
	void Assign(CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* , const CModelMeshHandleStrong& );
	/* ../public/meshsystem/imeshsystem.h:62 */
	const CRenderMesh* GetData(const CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* );
	/* ../public/meshsystem/imeshsystem.h:70 */
	bool IsValid(const CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* );
	/* ../public/meshsystem/imeshsystem.h:100 */
	HModel GetModelHandle(const CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* );
	/* ../public/meshsystem/imeshsystem.h:101 */
	const CModel* GetModelData(const CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* );
	/* ../public/meshsystem/imeshsystem.h:102 */
	int GetMeshIndex(const CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* );
	/* ../public/meshsystem/imeshsystem.h:104 */
	void GetMeshName(const CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* , CBufferString* );
protected:
	CWeakHandle<InfoForResourceTypeCModel> m_hModel; /* 0 8 */
	int m_iMesh; /* 8 4 */
	class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > & operator=(class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *, const class CModelMeshHandle  &); /* linkage=_ZN20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEEaSERK16CModelMeshHandle */
	class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > & operator=(class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *, const class CModelMeshHandleStrong  &); /* linkage=_ZN20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEEaSERK22CModelMeshHandleStrong */
	void Clear(class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *); /* linkage=_ZN20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEE5ClearEv */
	void Assign(class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *, const class CModelMeshHandle  &); /* linkage=_ZN20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEE6AssignERK16CModelMeshHandle */
	void Assign(class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *, const class CModelMeshHandleStrong  &); /* linkage=_ZN20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEE6AssignERK22CModelMeshHandleStrong */
	const class CRenderMesh  * GetData(const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  *); /* linkage=_ZNK20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEE7GetDataEv */
	bool IsValid(const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  *); /* linkage=_ZNK20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEE7IsValidEv */
	HModel GetModelHandle(const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  *); /* linkage=_ZNK20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEE14GetModelHandleEv */
	const class CModel  * GetModelData(const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  *); /* linkage=_ZNK20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEE12GetModelDataEv */
	int GetMeshIndex(const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  *); /* linkage=_ZNK20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEE12GetMeshIndexEv */
	void GetMeshName(const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  *, class CBufferString *); /* linkage=_ZNK20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEE11GetMeshNameEP13CBufferString */
	void CModelMeshHandleBase(class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *); /* linkage=_ZN20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEEC4Ev */
	class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > & operator=(class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *, const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  &); /* linkage=_ZN20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEEaSERKS3_ */
	bool operator< <CWeakHandle<InfoForResourceTypeCModel> >(class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *, const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  &); /* linkage=_ZN20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEEltIS2_EEbRKS_IT_E */
	bool operator!=<CWeakHandle<InfoForResourceTypeCModel> >(const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  *, const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  &); /* linkage=_ZNK20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEEneIS2_EEbRKS_IT_E */
};

// <000FB92B> ../public/meshsystem/imeshsystem.h:38
// member functions: 26
// member variables: 2
// class size: 16
class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > {
	/* ../public/meshsystem/imeshsystem.h:41 */
	CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >& operator=(CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >* , const CModelMeshHandle& );
	/* ../public/meshsystem/imeshsystem.h:47 */
	CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >& operator=(CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >* , const CModelMeshHandleStrong& );
	/* ../public/meshsystem/imeshsystem.h:53 */
	void Clear(CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >* );
	/* ../public/meshsystem/imeshsystem.h:59 */
	void Assign(CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >* , const CModelMeshHandle& );
	/* ../public/meshsystem/imeshsystem.h:60 */
	void Assign(CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >* , const CModelMeshHandleStrong& );
	/* ../public/meshsystem/imeshsystem.h:62 */
	const CRenderMesh* GetData(const CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >* );
	/* ../public/meshsystem/imeshsystem.h:70 */
	bool IsValid(const CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >* );
	/* ../public/meshsystem/imeshsystem.h:100 */
	HModel GetModelHandle(const CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >* );
	/* ../public/meshsystem/imeshsystem.h:101 */
	const CModel* GetModelData(const CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >* );
	/* ../public/meshsystem/imeshsystem.h:102 */
	int GetMeshIndex(const CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >* );
	/* ../public/meshsystem/imeshsystem.h:104 */
	void GetMeshName(const CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >* , CBufferString* );
protected:
	CStrongHandle<InfoForResourceTypeCModel> m_hModel; /* 0 8 */
	int m_iMesh; /* 8 4 */
	class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > & operator=(class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > *, const class CModelMeshHandle  &); /* linkage=_ZN20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEEaSERK16CModelMeshHandle */
	class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > & operator=(class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > *, const class CModelMeshHandleStrong  &); /* linkage=_ZN20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEEaSERK22CModelMeshHandleStrong */
	void Clear(class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > *); /* linkage=_ZN20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEE5ClearEv */
	void Assign(class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > *, const class CModelMeshHandle  &); /* linkage=_ZN20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEE6AssignERK16CModelMeshHandle */
	void Assign(class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > *, const class CModelMeshHandleStrong  &); /* linkage=_ZN20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEE6AssignERK22CModelMeshHandleStrong */
	const class CRenderMesh  * GetData(const class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >  *); /* linkage=_ZNK20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEE7GetDataEv */
	bool IsValid(const class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >  *); /* linkage=_ZNK20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEE7IsValidEv */
	HModel GetModelHandle(const class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >  *); /* linkage=_ZNK20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEE14GetModelHandleEv */
	const class CModel  * GetModelData(const class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >  *); /* linkage=_ZNK20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEE12GetModelDataEv */
	int GetMeshIndex(const class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >  *); /* linkage=_ZNK20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEE12GetMeshIndexEv */
	void GetMeshName(const class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >  *, class CBufferString *); /* linkage=_ZNK20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEE11GetMeshNameEP13CBufferString */
	class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > & operator=(class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > *, const class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >  &); /* linkage=_ZN20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEEaSERKS3_ */
	void ~CModelMeshHandleBase(class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > *); /* linkage=_ZN20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEED4Ev */
	void CModelMeshHandleBase(class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > *); /* linkage=_ZN20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEEC4Ev */
	bool operator!=<CWeakHandle<InfoForResourceTypeCModel> >(const class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >  *, const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  &); /* linkage=_ZNK20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEEneI11CWeakHandleIS1_EEEbRKS_IT_E */
};

// <01096845> ../public/meshsystem/imeshsystem.h:38
// member functions: 28
// member variables: 2
// class size: 16
class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > {
	/* ../public/meshsystem/imeshsystem.h:41 */
	CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >& operator=(CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* , const CModelMeshHandle& );
	/* ../public/meshsystem/imeshsystem.h:47 */
	CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >& operator=(CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* , const CModelMeshHandleStrong& );
	/* ../public/meshsystem/imeshsystem.h:53 */
	void Clear(CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* );
	/* ../public/meshsystem/imeshsystem.h:59 */
	void Assign(CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* , const CModelMeshHandle& );
	/* ../public/meshsystem/imeshsystem.h:60 */
	void Assign(CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* , const CModelMeshHandleStrong& );
	/* ../public/meshsystem/imeshsystem.h:62 */
	const CRenderMesh* GetData(const CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* );
	/* ../public/meshsystem/imeshsystem.h:70 */
	bool IsValid(const CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* );
	/* ../public/meshsystem/imeshsystem.h:100 */
	HModel GetModelHandle(const CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* );
	/* ../public/meshsystem/imeshsystem.h:101 */
	const CModel* GetModelData(const CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* );
	/* ../public/meshsystem/imeshsystem.h:102 */
	int GetMeshIndex(const CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* );
	/* ../public/meshsystem/imeshsystem.h:104 */
	void GetMeshName(const CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* , CBufferString* );
protected:
	CWeakHandle<InfoForResourceTypeCModel> m_hModel; /* 0 8 */
	int m_iMesh; /* 8 4 */
	CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >& operator=(CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* , const CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >& );
	void CModelMeshHandleBase(CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* );
	class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > & operator=(class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *, const class CModelMeshHandle  &); /* linkage=_ZN20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEEaSERK16CModelMeshHandle */
	class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > & operator=(class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *, const class CModelMeshHandleStrong  &); /* linkage=_ZN20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEEaSERK22CModelMeshHandleStrong */
	void Clear(class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *); /* linkage=_ZN20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEE5ClearEv */
	void Assign(class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *, const class CModelMeshHandle  &); /* linkage=_ZN20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEE6AssignERK16CModelMeshHandle */
	void Assign(class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *, const class CModelMeshHandleStrong  &); /* linkage=_ZN20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEE6AssignERK22CModelMeshHandleStrong */
	const class CRenderMesh  * GetData(const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  *); /* linkage=_ZNK20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEE7GetDataEv */
	bool IsValid(const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  *); /* linkage=_ZNK20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEE7IsValidEv */
	HModel GetModelHandle(const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  *); /* linkage=_ZNK20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEE14GetModelHandleEv */
	const class CModel  * GetModelData(const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  *); /* linkage=_ZNK20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEE12GetModelDataEv */
	int GetMeshIndex(const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  *); /* linkage=_ZNK20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEE12GetMeshIndexEv */
	void GetMeshName(const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  *, class CBufferString *); /* linkage=_ZNK20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEE11GetMeshNameEP13CBufferString */
	void CModelMeshHandleBase(class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *); /* linkage=_ZN20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEEC4Ev */
	class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > & operator=(class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *, const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  &); /* linkage=_ZN20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEEaSERKS3_ */
	bool operator< <CWeakHandle<InfoForResourceTypeCModel> >(class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *, const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  &); /* linkage=_ZN20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEEltIS2_EEbRKS_IT_E */
	bool operator!=<CWeakHandle<InfoForResourceTypeCModel> >(const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  *, const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  &); /* linkage=_ZNK20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEEneIS2_EEbRKS_IT_E */
};

// <01096BDA> ../public/meshsystem/imeshsystem.h:38
// member functions: 27
// member variables: 2
// class size: 16
class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > {
	/* ../public/meshsystem/imeshsystem.h:41 */
	CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >& operator=(CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >* , const CModelMeshHandle& );
	/* ../public/meshsystem/imeshsystem.h:47 */
	CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >& operator=(CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >* , const CModelMeshHandleStrong& );
	/* ../public/meshsystem/imeshsystem.h:53 */
	void Clear(CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >* );
	/* ../public/meshsystem/imeshsystem.h:59 */
	void Assign(CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >* , const CModelMeshHandle& );
	/* ../public/meshsystem/imeshsystem.h:60 */
	void Assign(CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >* , const CModelMeshHandleStrong& );
	/* ../public/meshsystem/imeshsystem.h:62 */
	const CRenderMesh* GetData(const CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >* );
	/* ../public/meshsystem/imeshsystem.h:70 */
	bool IsValid(const CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >* );
	/* ../public/meshsystem/imeshsystem.h:100 */
	HModel GetModelHandle(const CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >* );
	/* ../public/meshsystem/imeshsystem.h:101 */
	const CModel* GetModelData(const CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >* );
	/* ../public/meshsystem/imeshsystem.h:102 */
	int GetMeshIndex(const CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >* );
	/* ../public/meshsystem/imeshsystem.h:104 */
	void GetMeshName(const CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >* , CBufferString* );
protected:
	CStrongHandle<InfoForResourceTypeCModel> m_hModel; /* 0 8 */
	int m_iMesh; /* 8 4 */
	/* ../public/meshsystem/imeshsystem.h:95 */
	bool operator!=<CWeakHandle<InfoForResourceTypeCModel> >(const CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >* , const CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >& );
	class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > & operator=(class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > *, const class CModelMeshHandle  &); /* linkage=_ZN20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEEaSERK16CModelMeshHandle */
	class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > & operator=(class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > *, const class CModelMeshHandleStrong  &); /* linkage=_ZN20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEEaSERK22CModelMeshHandleStrong */
	void Clear(class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > *); /* linkage=_ZN20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEE5ClearEv */
	void Assign(class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > *, const class CModelMeshHandle  &); /* linkage=_ZN20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEE6AssignERK16CModelMeshHandle */
	void Assign(class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > *, const class CModelMeshHandleStrong  &); /* linkage=_ZN20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEE6AssignERK22CModelMeshHandleStrong */
	const class CRenderMesh  * GetData(const class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >  *); /* linkage=_ZNK20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEE7GetDataEv */
	bool IsValid(const class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >  *); /* linkage=_ZNK20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEE7IsValidEv */
	HModel GetModelHandle(const class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >  *); /* linkage=_ZNK20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEE14GetModelHandleEv */
	const class CModel  * GetModelData(const class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >  *); /* linkage=_ZNK20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEE12GetModelDataEv */
	int GetMeshIndex(const class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >  *); /* linkage=_ZNK20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEE12GetMeshIndexEv */
	void GetMeshName(const class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >  *, class CBufferString *); /* linkage=_ZNK20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEE11GetMeshNameEP13CBufferString */
	class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > & operator=(class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > *, const class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >  &); /* linkage=_ZN20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEEaSERKS3_ */
	void ~CModelMeshHandleBase(class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > *); /* linkage=_ZN20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEED4Ev */
	void CModelMeshHandleBase(class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > *); /* linkage=_ZN20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEEC4Ev */
	bool operator!=<CWeakHandle<InfoForResourceTypeCModel> >(const class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >  *, const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  &); /* linkage=_ZNK20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEEneI11CWeakHandleIS1_EEEbRKS_IT_E */
};

// <02D66081> ../public/meshsystem/imeshsystem.h:38
// member functions: 29
// member variables: 2
// class size: 16
class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > {
	/* ../public/meshsystem/imeshsystem.h:41 */
	CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >& operator=(CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* , const CModelMeshHandle& );
	/* ../public/meshsystem/imeshsystem.h:47 */
	CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >& operator=(CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* , const CModelMeshHandleStrong& );
	/* ../public/meshsystem/imeshsystem.h:53 */
	void Clear(CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* );
	/* ../public/meshsystem/imeshsystem.h:59 */
	void Assign(CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* , const CModelMeshHandle& );
	/* ../public/meshsystem/imeshsystem.h:60 */
	void Assign(CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* , const CModelMeshHandleStrong& );
	/* ../public/meshsystem/imeshsystem.h:62 */
	const CRenderMesh* GetData(const CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* );
	/* ../public/meshsystem/imeshsystem.h:70 */
	bool IsValid(const CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* );
	/* ../public/meshsystem/imeshsystem.h:100 */
	HModel GetModelHandle(const CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* );
	/* ../public/meshsystem/imeshsystem.h:101 */
	const CModel* GetModelData(const CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* );
	/* ../public/meshsystem/imeshsystem.h:102 */
	int GetMeshIndex(const CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* );
	/* ../public/meshsystem/imeshsystem.h:104 */
	void GetMeshName(const CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* , CBufferString* );
protected:
	CWeakHandle<InfoForResourceTypeCModel> m_hModel; /* 0 8 */
	int m_iMesh; /* 8 4 */
	/* ../public/meshsystem/imeshsystem.h:79 */
	bool operator< <CWeakHandle<InfoForResourceTypeCModel> >(CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* , const CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >& );
	/* ../public/meshsystem/imeshsystem.h:95 */
	bool operator!=<CWeakHandle<InfoForResourceTypeCModel> >(const CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* , const CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >& );
	void CModelMeshHandleBase(CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* );
	class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > & operator=(class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *, const class CModelMeshHandle  &); /* linkage=_ZN20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEEaSERK16CModelMeshHandle */
	class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > & operator=(class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *, const class CModelMeshHandleStrong  &); /* linkage=_ZN20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEEaSERK22CModelMeshHandleStrong */
	void Clear(class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *); /* linkage=_ZN20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEE5ClearEv */
	void Assign(class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *, const class CModelMeshHandle  &); /* linkage=_ZN20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEE6AssignERK16CModelMeshHandle */
	void Assign(class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *, const class CModelMeshHandleStrong  &); /* linkage=_ZN20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEE6AssignERK22CModelMeshHandleStrong */
	const class CRenderMesh  * GetData(const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  *); /* linkage=_ZNK20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEE7GetDataEv */
	bool IsValid(const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  *); /* linkage=_ZNK20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEE7IsValidEv */
	HModel GetModelHandle(const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  *); /* linkage=_ZNK20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEE14GetModelHandleEv */
	const class CModel  * GetModelData(const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  *); /* linkage=_ZNK20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEE12GetModelDataEv */
	int GetMeshIndex(const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  *); /* linkage=_ZNK20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEE12GetMeshIndexEv */
	void GetMeshName(const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  *, class CBufferString *); /* linkage=_ZNK20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEE11GetMeshNameEP13CBufferString */
	void CModelMeshHandleBase(class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *); /* linkage=_ZN20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEEC4Ev */
	class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > & operator=(class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *, const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  &); /* linkage=_ZN20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEEaSERKS3_ */
	bool operator< <CWeakHandle<InfoForResourceTypeCModel> >(class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *, const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  &); /* linkage=_ZN20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEEltIS2_EEbRKS_IT_E */
	bool operator!=<CWeakHandle<InfoForResourceTypeCModel> >(const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  *, const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  &); /* linkage=_ZNK20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEEneIS2_EEbRKS_IT_E */
};

// <058D2DEB> ../../public/meshsystem/imeshsystem.h:38
// member functions: 26
// member variables: 2
// class size: 16
class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > {
	/* ../../public/meshsystem/imeshsystem.h:41 */
	CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >& operator=(CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* , const CModelMeshHandle& );
	/* ../../public/meshsystem/imeshsystem.h:47 */
	CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >& operator=(CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* , const CModelMeshHandleStrong& );
	/* ../../public/meshsystem/imeshsystem.h:53 */
	void Clear(CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* );
	/* ../../public/meshsystem/imeshsystem.h:59 */
	void Assign(CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* , const CModelMeshHandle& );
	/* ../../public/meshsystem/imeshsystem.h:60 */
	void Assign(CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* , const CModelMeshHandleStrong& );
	/* ../../public/meshsystem/imeshsystem.h:62 */
	const CRenderMesh* GetData(const CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* );
	/* ../../public/meshsystem/imeshsystem.h:70 */
	bool IsValid(const CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* );
	/* ../../public/meshsystem/imeshsystem.h:100 */
	HModel GetModelHandle(const CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* );
	/* ../../public/meshsystem/imeshsystem.h:101 */
	const CModel* GetModelData(const CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* );
	/* ../../public/meshsystem/imeshsystem.h:102 */
	int GetMeshIndex(const CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* );
	/* ../../public/meshsystem/imeshsystem.h:104 */
	void GetMeshName(const CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* , CBufferString* );
protected:
	CWeakHandle<InfoForResourceTypeCModel> m_hModel; /* 0 8 */
	int m_iMesh; /* 8 4 */
	class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > & operator=(class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *, const class CModelMeshHandle  &); /* linkage=_ZN20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEEaSERK16CModelMeshHandle */
	class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > & operator=(class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *, const class CModelMeshHandleStrong  &); /* linkage=_ZN20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEEaSERK22CModelMeshHandleStrong */
	void Clear(class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *); /* linkage=_ZN20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEE5ClearEv */
	void Assign(class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *, const class CModelMeshHandle  &); /* linkage=_ZN20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEE6AssignERK16CModelMeshHandle */
	void Assign(class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *, const class CModelMeshHandleStrong  &); /* linkage=_ZN20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEE6AssignERK22CModelMeshHandleStrong */
	const class CRenderMesh  * GetData(const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  *); /* linkage=_ZNK20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEE7GetDataEv */
	bool IsValid(const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  *); /* linkage=_ZNK20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEE7IsValidEv */
	HModel GetModelHandle(const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  *); /* linkage=_ZNK20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEE14GetModelHandleEv */
	const class CModel  * GetModelData(const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  *); /* linkage=_ZNK20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEE12GetModelDataEv */
	int GetMeshIndex(const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  *); /* linkage=_ZNK20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEE12GetMeshIndexEv */
	void GetMeshName(const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  *, class CBufferString *); /* linkage=_ZNK20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEE11GetMeshNameEP13CBufferString */
	void CModelMeshHandleBase(class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *); /* linkage=_ZN20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEEC4Ev */
	class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > & operator=(class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *, const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  &); /* linkage=_ZN20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEEaSERKS3_ */
	bool operator< <CWeakHandle<InfoForResourceTypeCModel> >(class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *, const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  &); /* linkage=_ZN20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEEltIS2_EEbRKS_IT_E */
	bool operator!=<CWeakHandle<InfoForResourceTypeCModel> >(const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  *, const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  &); /* linkage=_ZNK20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEEneIS2_EEbRKS_IT_E */
};

// <058D312A> ../../public/meshsystem/imeshsystem.h:38
// member functions: 26
// member variables: 2
// class size: 16
class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > {
	/* ../../public/meshsystem/imeshsystem.h:41 */
	CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >& operator=(CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >* , const CModelMeshHandle& );
	/* ../../public/meshsystem/imeshsystem.h:47 */
	CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >& operator=(CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >* , const CModelMeshHandleStrong& );
	/* ../../public/meshsystem/imeshsystem.h:53 */
	void Clear(CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >* );
	/* ../../public/meshsystem/imeshsystem.h:59 */
	void Assign(CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >* , const CModelMeshHandle& );
	/* ../../public/meshsystem/imeshsystem.h:60 */
	void Assign(CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >* , const CModelMeshHandleStrong& );
	/* ../../public/meshsystem/imeshsystem.h:62 */
	const CRenderMesh* GetData(const CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >* );
	/* ../../public/meshsystem/imeshsystem.h:70 */
	bool IsValid(const CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >* );
	/* ../../public/meshsystem/imeshsystem.h:100 */
	HModel GetModelHandle(const CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >* );
	/* ../../public/meshsystem/imeshsystem.h:101 */
	const CModel* GetModelData(const CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >* );
	/* ../../public/meshsystem/imeshsystem.h:102 */
	int GetMeshIndex(const CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >* );
	/* ../../public/meshsystem/imeshsystem.h:104 */
	void GetMeshName(const CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >* , CBufferString* );
protected:
	CStrongHandle<InfoForResourceTypeCModel> m_hModel; /* 0 8 */
	int m_iMesh; /* 8 4 */
	class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > & operator=(class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > *, const class CModelMeshHandle  &); /* linkage=_ZN20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEEaSERK16CModelMeshHandle */
	class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > & operator=(class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > *, const class CModelMeshHandleStrong  &); /* linkage=_ZN20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEEaSERK22CModelMeshHandleStrong */
	void Clear(class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > *); /* linkage=_ZN20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEE5ClearEv */
	void Assign(class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > *, const class CModelMeshHandle  &); /* linkage=_ZN20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEE6AssignERK16CModelMeshHandle */
	void Assign(class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > *, const class CModelMeshHandleStrong  &); /* linkage=_ZN20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEE6AssignERK22CModelMeshHandleStrong */
	const class CRenderMesh  * GetData(const class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >  *); /* linkage=_ZNK20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEE7GetDataEv */
	bool IsValid(const class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >  *); /* linkage=_ZNK20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEE7IsValidEv */
	HModel GetModelHandle(const class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >  *); /* linkage=_ZNK20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEE14GetModelHandleEv */
	const class CModel  * GetModelData(const class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >  *); /* linkage=_ZNK20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEE12GetModelDataEv */
	int GetMeshIndex(const class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >  *); /* linkage=_ZNK20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEE12GetMeshIndexEv */
	void GetMeshName(const class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >  *, class CBufferString *); /* linkage=_ZNK20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEE11GetMeshNameEP13CBufferString */
	class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > & operator=(class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > *, const class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >  &); /* linkage=_ZN20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEEaSERKS3_ */
	void ~CModelMeshHandleBase(class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > *); /* linkage=_ZN20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEED4Ev */
	void CModelMeshHandleBase(class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > *); /* linkage=_ZN20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEEC4Ev */
	bool operator!=<CWeakHandle<InfoForResourceTypeCModel> >(const class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >  *, const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  &); /* linkage=_ZNK20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEEneI11CWeakHandleIS1_EEEbRKS_IT_E */
};

// <0004B32D> ../public/meshsystem/imeshsystem.h:38
// member functions: 27
// member variables: 2
// class size: 16
class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > {
	/* ../public/meshsystem/imeshsystem.h:41 */
	CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >& operator=(CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* , const CModelMeshHandle& );
	/* ../public/meshsystem/imeshsystem.h:47 */
	CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >& operator=(CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* , const CModelMeshHandleStrong& );
	/* ../public/meshsystem/imeshsystem.h:53 */
	void Clear(CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* );
	/* ../public/meshsystem/imeshsystem.h:59 */
	void Assign(CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* , const CModelMeshHandle& );
	/* ../public/meshsystem/imeshsystem.h:60 */
	void Assign(CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* , const CModelMeshHandleStrong& );
	/* ../public/meshsystem/imeshsystem.h:62 */
	const CRenderMesh* GetData(const CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* );
	/* ../public/meshsystem/imeshsystem.h:70 */
	bool IsValid(const CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* );
	/* ../public/meshsystem/imeshsystem.h:100 */
	HModel GetModelHandle(const CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* );
	/* ../public/meshsystem/imeshsystem.h:101 */
	const CModel* GetModelData(const CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* );
	/* ../public/meshsystem/imeshsystem.h:102 */
	int GetMeshIndex(const CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* );
	/* ../public/meshsystem/imeshsystem.h:104 */
	void GetMeshName(const CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* , CBufferString* );
protected:
	CWeakHandle<InfoForResourceTypeCModel> m_hModel; /* 0 8 */
	int m_iMesh; /* 8 4 */
	void CModelMeshHandleBase(CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >* );
	class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > & operator=(class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *, const class CModelMeshHandle  &); /* linkage=_ZN20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEEaSERK16CModelMeshHandle */
	class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > & operator=(class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *, const class CModelMeshHandleStrong  &); /* linkage=_ZN20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEEaSERK22CModelMeshHandleStrong */
	void Clear(class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *); /* linkage=_ZN20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEE5ClearEv */
	void Assign(class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *, const class CModelMeshHandle  &); /* linkage=_ZN20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEE6AssignERK16CModelMeshHandle */
	void Assign(class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *, const class CModelMeshHandleStrong  &); /* linkage=_ZN20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEE6AssignERK22CModelMeshHandleStrong */
	const class CRenderMesh  * GetData(const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  *); /* linkage=_ZNK20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEE7GetDataEv */
	bool IsValid(const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  *); /* linkage=_ZNK20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEE7IsValidEv */
	HModel GetModelHandle(const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  *); /* linkage=_ZNK20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEE14GetModelHandleEv */
	const class CModel  * GetModelData(const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  *); /* linkage=_ZNK20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEE12GetModelDataEv */
	int GetMeshIndex(const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  *); /* linkage=_ZNK20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEE12GetMeshIndexEv */
	void GetMeshName(const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  *, class CBufferString *); /* linkage=_ZNK20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEE11GetMeshNameEP13CBufferString */
	void CModelMeshHandleBase(class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *); /* linkage=_ZN20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEEC4Ev */
	class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > & operator=(class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *, const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  &); /* linkage=_ZN20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEEaSERKS3_ */
	bool operator< <CWeakHandle<InfoForResourceTypeCModel> >(class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > *, const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  &); /* linkage=_ZN20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEEltIS2_EEbRKS_IT_E */
	bool operator!=<CWeakHandle<InfoForResourceTypeCModel> >(const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  *, const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  &); /* linkage=_ZNK20CModelMeshHandleBaseI11CWeakHandleI25InfoForResourceTypeCModelEEneIS2_EEbRKS_IT_E */
};

// <0004B6E1> ../public/meshsystem/imeshsystem.h:38
// member functions: 29
// member variables: 2
// class size: 16
class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > {
	/* ../public/meshsystem/imeshsystem.h:41 */
	CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >& operator=(CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >* , const CModelMeshHandle& );
	/* ../public/meshsystem/imeshsystem.h:47 */
	CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >& operator=(CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >* , const CModelMeshHandleStrong& );
	/* ../public/meshsystem/imeshsystem.h:53 */
	void Clear(CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >* );
	/* ../public/meshsystem/imeshsystem.h:59 */
	void Assign(CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >* , const CModelMeshHandle& );
	/* ../public/meshsystem/imeshsystem.h:60 */
	void Assign(CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >* , const CModelMeshHandleStrong& );
	/* ../public/meshsystem/imeshsystem.h:62 */
	const CRenderMesh* GetData(const CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >* );
	/* ../public/meshsystem/imeshsystem.h:70 */
	bool IsValid(const CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >* );
	/* ../public/meshsystem/imeshsystem.h:100 */
	HModel GetModelHandle(const CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >* );
	/* ../public/meshsystem/imeshsystem.h:101 */
	const CModel* GetModelData(const CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >* );
	/* ../public/meshsystem/imeshsystem.h:102 */
	int GetMeshIndex(const CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >* );
	/* ../public/meshsystem/imeshsystem.h:104 */
	void GetMeshName(const CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >* , CBufferString* );
protected:
	CStrongHandle<InfoForResourceTypeCModel> m_hModel; /* 0 8 */
	int m_iMesh; /* 8 4 */
	CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >& operator=(CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >* , const CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >& );
	void ~CModelMeshHandleBase(CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >* );
	void CModelMeshHandleBase(CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >* );
	class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > & operator=(class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > *, const class CModelMeshHandle  &); /* linkage=_ZN20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEEaSERK16CModelMeshHandle */
	class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > & operator=(class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > *, const class CModelMeshHandleStrong  &); /* linkage=_ZN20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEEaSERK22CModelMeshHandleStrong */
	void Clear(class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > *); /* linkage=_ZN20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEE5ClearEv */
	void Assign(class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > *, const class CModelMeshHandle  &); /* linkage=_ZN20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEE6AssignERK16CModelMeshHandle */
	void Assign(class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > *, const class CModelMeshHandleStrong  &); /* linkage=_ZN20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEE6AssignERK22CModelMeshHandleStrong */
	const class CRenderMesh  * GetData(const class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >  *); /* linkage=_ZNK20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEE7GetDataEv */
	bool IsValid(const class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >  *); /* linkage=_ZNK20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEE7IsValidEv */
	HModel GetModelHandle(const class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >  *); /* linkage=_ZNK20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEE14GetModelHandleEv */
	const class CModel  * GetModelData(const class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >  *); /* linkage=_ZNK20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEE12GetModelDataEv */
	int GetMeshIndex(const class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >  *); /* linkage=_ZNK20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEE12GetMeshIndexEv */
	void GetMeshName(const class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >  *, class CBufferString *); /* linkage=_ZNK20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEE11GetMeshNameEP13CBufferString */
	class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > & operator=(class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > *, const class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >  &); /* linkage=_ZN20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEEaSERKS3_ */
	void ~CModelMeshHandleBase(class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > *); /* linkage=_ZN20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEED4Ev */
	void CModelMeshHandleBase(class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > *); /* linkage=_ZN20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEEC4Ev */
	bool operator!=<CWeakHandle<InfoForResourceTypeCModel> >(const class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >  *, const class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >  &); /* linkage=_ZNK20CModelMeshHandleBaseI13CStrongHandleI25InfoForResourceTypeCModelEEneI11CWeakHandleIS1_EEEbRKS_IT_E */
};

// <03E89B8D> ../public/meshsystem/imeshsystem.h:53
inline void CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >::Clear()
{
} /* size: 0 */

// <06E277BD> ../../public/meshsystem/imeshsystem.h:62
void CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::GetData()
{
} /* size: 0 */

// <04007F66> ../public/meshsystem/imeshsystem.h:62
inline void CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::GetData()
{
} /* size: 0 */

// <02EA602F> ../public/meshsystem/imeshsystem.h:62
inline void CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >::GetData()
{
} /* size: 0 */

// <06E277A5> ../../public/meshsystem/imeshsystem.h:70
void CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::IsValid()
{
} /* size: 0 */

// <04007F4D> ../public/meshsystem/imeshsystem.h:70
inline void CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::IsValid()
{
} /* size: 0 */

// <02E9734C> ../public/meshsystem/imeshsystem.h:79
inline void operator< <CWeakHandle<InfoForResourceTypeCModel> CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >::>(const CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >& rhs)
{
} /* size: 0 */

// <02E97378> ../public/meshsystem/imeshsystem.h:95
inline void operator!=<CWeakHandle<InfoForResourceTypeCModel> CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >::>(const CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >& rhs)
{
} /* size: 0 */

// <010F9898> ../public/meshsystem/imeshsystem.h:95
inline void operator!=<CWeakHandle<InfoForResourceTypeCModel> CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::>(const CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >& rhs)
{
} /* size: 0 */

// <03E838A6> ../public/meshsystem/imeshsystem.h:100
inline void CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::GetModelHandle()
{
} /* size: 0 */

// <02E9C654> ../public/meshsystem/imeshsystem.h:100
inline void CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >::GetModelHandle()
{
} /* size: 0 */

// <0127DE10> ../public/meshsystem/imeshsystem.h:101
inline void CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::GetModelData()
{
} /* size: 0 */

// <03E8388D> ../public/meshsystem/imeshsystem.h:102
inline void CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::GetMeshIndex()
{
} /* size: 0 */

// <02E9C63B> ../public/meshsystem/imeshsystem.h:102
inline void CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >::GetMeshIndex()
{
} /* size: 0 */

// <03E8FEAB> ../public/meshsystem/imeshsystem.h:124
inline void CModelMeshHandle::operator=(const CModelMeshHandle &)
{
} /* size: 0 */

// <000FB7C5> ../public/meshsystem/imeshsystem.h:124
// member functions: 9
// member variable: 1
// class size: 16
class CModelMeshHandle : public CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > {
public:
	/* class CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> > <ancestor>; */ /* 0 16 */
	/* ../public/meshsystem/imeshsystem.h:127 */
	void CModelMeshHandle(CModelMeshHandle* );
	/* ../public/meshsystem/imeshsystem.h:130 */
	void CModelMeshHandle(CModelMeshHandle* , HModel, int);
	/* ../public/meshsystem/imeshsystem.h:136 */
	void CModelMeshHandle(CModelMeshHandle* , const CModelMeshHandle& );
	/* ../public/meshsystem/imeshsystem.h:141 */
	void CModelMeshHandle(CModelMeshHandle* , const CModelMeshHandleStrong& );
	void CModelMeshHandle(class CModelMeshHandle *); /* linkage=_ZN16CModelMeshHandleC4Ev */
	void CModelMeshHandle(class CModelMeshHandle *, HModel, int); /* linkage=_ZN16CModelMeshHandleC4E11CWeakHandleI25InfoForResourceTypeCModelEi */
	void CModelMeshHandle(class CModelMeshHandle *, const class CModelMeshHandle  &); /* linkage=_ZN16CModelMeshHandleC4ERKS_ */
	void CModelMeshHandle(class CModelMeshHandle *, const class CModelMeshHandleStrong  &); /* linkage=_ZN16CModelMeshHandleC4ERK22CModelMeshHandleStrong */
	class CModelMeshHandle & operator=(class CModelMeshHandle *, const class CModelMeshHandle  &); /* linkage=_ZN16CModelMeshHandleaSERKS_ */
};

// <03EA6022> ../public/meshsystem/imeshsystem.h:127
void CModelMeshHandle::CModelMeshHandle()
{
} /* size: 0 */

// <03EA6009> ../public/meshsystem/imeshsystem.h:127
inline void CModelMeshHandle::CModelMeshHandle()
{
} /* size: 0 */

// <004E9BCB> ../public/meshsystem/imeshsystem.h:130
void CModelMeshHandle::CModelMeshHandle(HModel hModel, int iMesh)
{
} /* size: 0 */

// <004E9B9A> ../public/meshsystem/imeshsystem.h:130
inline void CModelMeshHandle::CModelMeshHandle(HModel hModel, int iMesh)
{
} /* size: 0 */

// <004E9B7E> ../public/meshsystem/imeshsystem.h:136
void CModelMeshHandle::CModelMeshHandle(const CModelMeshHandle& h)
{
} /* size: 0 */

// <004E9B5B> ../public/meshsystem/imeshsystem.h:136
inline void CModelMeshHandle::CModelMeshHandle(const CModelMeshHandle& h)
{
} /* size: 0 */

// <03EA5FED> ../public/meshsystem/imeshsystem.h:141
void CModelMeshHandle::CModelMeshHandle(const CModelMeshHandleStrong& h)
{
} /* size: 0 */

// <03EA5FCA> ../public/meshsystem/imeshsystem.h:141
inline void CModelMeshHandle::CModelMeshHandle(const CModelMeshHandleStrong& h)
{
} /* size: 0 */

// <000812AE> ../public/meshsystem/imeshsystem.h:151
void CModelMeshHandleStrong::~CModelMeshHandleStrong()
{
} /* size: 0 */

// <00081292> ../public/meshsystem/imeshsystem.h:151
inline void CModelMeshHandleStrong::~CModelMeshHandleStrong()
{
} /* size: 0 */

// <0008121A> ../public/meshsystem/imeshsystem.h:151
inline void CModelMeshHandleStrong::operator=(const CModelMeshHandleStrong &)
{
} /* size: 0 */

// <000FB872> ../public/meshsystem/imeshsystem.h:151
// member functions: 10
// member variable: 1
// class size: 16
class CModelMeshHandleStrong : public CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > {
public:
	/* class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > <ancestor>; */ /* 0 16 */
	/* ../public/meshsystem/imeshsystem.h:154 */
	void CModelMeshHandleStrong(CModelMeshHandleStrong* );
	/* ../public/meshsystem/imeshsystem.h:157 */
	void CModelMeshHandleStrong(CModelMeshHandleStrong* , HModel, int);
	/* ../public/meshsystem/imeshsystem.h:163 */
	void CModelMeshHandleStrong(CModelMeshHandleStrong* , const CModelMeshHandle& );
	/* ../public/meshsystem/imeshsystem.h:168 */
	void CModelMeshHandleStrong(CModelMeshHandleStrong* , const CModelMeshHandleStrong& );
	void CModelMeshHandleStrong(class CModelMeshHandleStrong *); /* linkage=_ZN22CModelMeshHandleStrongC4Ev */
	void CModelMeshHandleStrong(class CModelMeshHandleStrong *, HModel, int); /* linkage=_ZN22CModelMeshHandleStrongC4E11CWeakHandleI25InfoForResourceTypeCModelEi */
	void CModelMeshHandleStrong(class CModelMeshHandleStrong *, const class CModelMeshHandle  &); /* linkage=_ZN22CModelMeshHandleStrongC4ERK16CModelMeshHandle */
	void CModelMeshHandleStrong(class CModelMeshHandleStrong *, const class CModelMeshHandleStrong  &); /* linkage=_ZN22CModelMeshHandleStrongC4ERKS_ */
	class CModelMeshHandleStrong & operator=(class CModelMeshHandleStrong *, const class CModelMeshHandleStrong  &); /* linkage=_ZN22CModelMeshHandleStrongaSERKS_ */
	void ~CModelMeshHandleStrong(class CModelMeshHandleStrong *); /* linkage=_ZN22CModelMeshHandleStrongD4Ev */
};

// <0004B5B6> ../public/meshsystem/imeshsystem.h:151
// member functions: 12
// member variable: 1
// class size: 16
class CModelMeshHandleStrong : public CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > {
public:
	/* class CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> > <ancestor>; */ /* 0 16 */
	/* ../public/meshsystem/imeshsystem.h:154 */
	void CModelMeshHandleStrong(CModelMeshHandleStrong* );
	/* ../public/meshsystem/imeshsystem.h:157 */
	void CModelMeshHandleStrong(CModelMeshHandleStrong* , HModel, int);
	/* ../public/meshsystem/imeshsystem.h:163 */
	void CModelMeshHandleStrong(CModelMeshHandleStrong* , const CModelMeshHandle& );
	/* ../public/meshsystem/imeshsystem.h:168 */
	void CModelMeshHandleStrong(CModelMeshHandleStrong* , const CModelMeshHandleStrong& );
	CModelMeshHandleStrong& operator=(CModelMeshHandleStrong* , const CModelMeshHandleStrong& );
	void ~CModelMeshHandleStrong(CModelMeshHandleStrong* );
	void CModelMeshHandleStrong(class CModelMeshHandleStrong *); /* linkage=_ZN22CModelMeshHandleStrongC4Ev */
	void CModelMeshHandleStrong(class CModelMeshHandleStrong *, HModel, int); /* linkage=_ZN22CModelMeshHandleStrongC4E11CWeakHandleI25InfoForResourceTypeCModelEi */
	void CModelMeshHandleStrong(class CModelMeshHandleStrong *, const class CModelMeshHandle  &); /* linkage=_ZN22CModelMeshHandleStrongC4ERK16CModelMeshHandle */
	void CModelMeshHandleStrong(class CModelMeshHandleStrong *, const class CModelMeshHandleStrong  &); /* linkage=_ZN22CModelMeshHandleStrongC4ERKS_ */
	class CModelMeshHandleStrong & operator=(class CModelMeshHandleStrong *, const class CModelMeshHandleStrong  &); /* linkage=_ZN22CModelMeshHandleStrongaSERKS_ */
	void ~CModelMeshHandleStrong(class CModelMeshHandleStrong *); /* linkage=_ZN22CModelMeshHandleStrongD4Ev */
};

// <000813B7> ../public/meshsystem/imeshsystem.h:154
void CModelMeshHandleStrong::CModelMeshHandleStrong()
{
} /* size: 0 */

// <0008139E> ../public/meshsystem/imeshsystem.h:154
inline void CModelMeshHandleStrong::CModelMeshHandleStrong()
{
} /* size: 0 */

// <00081382> ../public/meshsystem/imeshsystem.h:163
void CModelMeshHandleStrong::CModelMeshHandleStrong(const CModelMeshHandle& h)
{
} /* size: 0 */

// <0008135F> ../public/meshsystem/imeshsystem.h:163
inline void CModelMeshHandleStrong::CModelMeshHandleStrong(const CModelMeshHandle& h)
{
} /* size: 0 */

// <004D6518> ../public/meshsystem/imeshsystem.h:178
void CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >::Assign(const CModelMeshHandle& h)
{
} /* size: 0 */

// <0007A31E> ../public/meshsystem/imeshsystem.h:178
void CModelMeshHandleBase<CStrongHandle<InfoForResourceTypeCModel> >::Assign(const CModelMeshHandle& h)
{
} /* size: 0 */

// <03E8B4BC> ../public/meshsystem/imeshsystem.h:186
void CModelMeshHandleBase<CWeakHandle<InfoForResourceTypeCModel> >::Assign(const CModelMeshHandleStrong& h)
{
} /* size: 0 */

// <004136D8> ../public/meshsystem/imeshsystem.h:194
void IMeshRayTrace::IMeshRayTrace()
{
} /* size: 0 */

// <004136BC> ../public/meshsystem/imeshsystem.h:194
inline void IMeshRayTrace::IMeshRayTrace()
{
} /* size: 0 */

// <004136A5> ../public/meshsystem/imeshsystem.h:194
void IMeshRayTrace::~IMeshRayTrace()
{
} /* size: 0 */

// <00413672> ../public/meshsystem/imeshsystem.h:194
inline void IMeshRayTrace::~IMeshRayTrace()
{
} /* size: 0 */

// <003FB63E> ../public/meshsystem/imeshsystem.h:194
// member functions: 14
// member variable: 1
// vtable entries: 3
// class size: 8
class IMeshRayTrace : public IRefCounted {
public:
	/* class IRefCounted <ancestor>; */ /* 0 8 */
	void IMeshRayTrace(IMeshRayTrace* , IMeshRayTrace& );
	void IMeshRayTrace(IMeshRayTrace* , const IMeshRayTrace& );
	void IMeshRayTrace(IMeshRayTrace* );
	/* ../public/meshsystem/imeshsystem.h:198 */
	virtual RayTracingEnvironment& GetRayTracingEnvironment(IMeshRayTrace* );
	/* ../public/meshsystem/imeshsystem.h:199 */
	virtual const TraceDataForDraw_t* GetMeshTraceData(const IMeshRayTrace* , int);
	/* ../public/meshsystem/imeshsystem.h:200 */
	virtual bool IsOutOfDate(const IMeshRayTrace* );
	virtual void ~IMeshRayTrace(IMeshRayTrace* );
	void IMeshRayTrace(class IMeshRayTrace *, class IMeshRayTrace &); /* linkage=_ZN13IMeshRayTraceC4EOS_ */
	void IMeshRayTrace(class IMeshRayTrace *, const class IMeshRayTrace  &); /* linkage=_ZN13IMeshRayTraceC4ERKS_ */
	void IMeshRayTrace(class IMeshRayTrace *); /* linkage=_ZN13IMeshRayTraceC4Ev */
	virtual class RayTracingEnvironment & GetRayTracingEnvironment(class IMeshRayTrace *); /* linkage=_ZN13IMeshRayTrace24GetRayTracingEnvironmentEv */
	virtual const class TraceDataForDraw_t  * GetMeshTraceData(const class IMeshRayTrace  *, int); /* linkage=_ZNK13IMeshRayTrace16GetMeshTraceDataEi */
	virtual bool IsOutOfDate(const class IMeshRayTrace  *); /* linkage=_ZNK13IMeshRayTrace11IsOutOfDateEv */
	virtual void ~IMeshRayTrace(class IMeshRayTrace *); /* linkage=_ZN13IMeshRayTraceD4Ev */
};

// <0016DE1A> ../public/meshsystem/imeshsystem.h:208
void IMeshSystem::IMeshSystem()
{
} /* size: 0 */

// <0016DDFE> ../public/meshsystem/imeshsystem.h:208
inline void IMeshSystem::IMeshSystem()
{
} /* size: 0 */

// <0009659B> ../public/meshsystem/imeshsystem.h:208
// member functions: 58
// member variable: 1
// vtable entries: 25
// class size: 8
class IMeshSystem : public IAppSystem {
public:
	/* class IAppSystem <ancestor>; */ /* 0 8 */
	void IMeshSystem(IMeshSystem* , IMeshSystem& );
	void IMeshSystem(IMeshSystem* , const IMeshSystem& );
	void IMeshSystem(IMeshSystem* );
	void ~IMeshSystem(IMeshSystem* );
	/* ../public/meshsystem/imeshsystem.h:211 */
	virtual void PrepareRenderMesh(IMeshSystem* , CRenderMesh* );
	/* ../public/meshsystem/imeshsystem.h:212 */
	virtual HModel FindOrCreateProceduralModel(IMeshSystem* , const char* , bool, CModelBuilder* );
	/* ../public/meshsystem/imeshsystem.h:213 */
	virtual void DrawRenderable(IMeshSystem* , IRenderContext* , HModel, RenderShaderHandle_t, RenderShaderHandle_t, int);
	/* ../public/meshsystem/imeshsystem.h:215 */
	virtual CMeshInstance* CreateMeshInstance(IMeshSystem* , ISceneObjectDesc* , uint32);
	/* ../public/meshsystem/imeshsystem.h:216 */
	virtual void DestroyMeshInstance(IMeshSystem* , CMeshInstance* );
	/* ../public/meshsystem/imeshsystem.h:219 */
	virtual CSceneObject* CreateSceneObject(IMeshSystem* , HModel, const matrix3x4_t& , const char* , ESceneObjectFlags, ESceneObjectTypeFlags, ISceneWorld* , SceneObjectCreationFlags_t, int);
	/* ../public/meshsystem/imeshsystem.h:220 */
	virtual bool CreateSceneObjects(IMeshSystem* , HModel, ESceneObjectFlags, ISceneWorld* , CUtlVector<CSceneObject*, CUtlMemory<CSceneObject*, int> >* , SceneObjectCreationFlags_t, int);
	/* ../public/meshsystem/imeshsystem.h:221 */
	virtual CSceneObject* CreateSceneObjectForSceneObjectData(IMeshSystem* , CModelMeshHandle, int, ESceneObjectFlags, ISceneWorld* , SceneObjectCreationFlags_t, ISceneObjectDesc* , int);
	/* ../public/meshsystem/imeshsystem.h:222 */
	virtual uint RemoveUnusedMeshGroups(IMeshSystem* , CSceneObject* , MeshGroupMask_t);
	/* ../public/meshsystem/imeshsystem.h:223 */
	virtual void ChangeModel(IMeshSystem* , CSceneObject* , HModel);
	/* ../public/meshsystem/imeshsystem.h:226 */
	virtual void EnableTraceLines(IMeshSystem* );
	/* ../public/meshsystem/imeshsystem.h:228 */
	virtual void GetModelBounds(IMeshSystem* , HModel, Vector& , Vector& );
	/* ../public/meshsystem/imeshsystem.h:230 */
	virtual ESceneObjectFlags ComputeSceneObjectTranslucencyFlags(IMeshSystem* , RenderMeshTranslucencyType_t, ESceneObjectFlags);
	/* ../public/meshsystem/imeshsystem.h:232 */
	virtual void UpdateTranslucencyFlagsOnMaterialChange(IMeshSystem* , CSceneObject* );
	/* ../public/meshsystem/imeshsystem.h:234 */
	virtual void ClearHighWaterMarks(IMeshSystem* );
	/* ../public/meshsystem/imeshsystem.h:237 */
	virtual void GetRenderableBounds(IMeshSystem* , const CRenderMesh* , Vector& , Vector& );
	/* ../public/meshsystem/imeshsystem.h:238 */
	virtual CMeshInstance* CreateMeshInstance(IMeshSystem* , ISceneObjectDesc* , uint32, CModelMeshHandle, int, ESceneObjectFlags, CSceneObject* , MeshGroupMask_t, LODGroupMask_t, const int16* );
	/* ../public/meshsystem/imeshsystem.h:240 */
	virtual bool CreateSceneObjectsFromMesh(IMeshSystem* , CModelMeshHandle, ESceneObjectFlags, ISceneWorld* , CUtlVector<CSceneObject*, CUtlMemory<CSceneObject*, int> >* , SceneObjectCreationFlags_t, int);
	/* ../public/meshsystem/imeshsystem.h:241 */
	virtual ESceneObjectFlags ComputeSceneObjectTranslucencyFlags(IMeshSystem* , const CRenderMesh* , ESceneObjectFlags);
	/* ../public/meshsystem/imeshsystem.h:242 */
	virtual IMeshRayTrace* FindOrCreateMeshRayTrace(IMeshSystem* , const CRenderMesh* );
	/* ../public/meshsystem/imeshsystem.h:243 */
	virtual void GetToolsGeometryInfo(IMeshSystem* , const CRenderMesh* , const CUtlVector<TraceDataForDraw_t, CUtlMemory<TraceDataForDraw_t, int> >** );
	/* ../public/meshsystem/imeshsystem.h:245 */
	virtual CSmartPtr<CRenderMesh, CRefCountAccessor> CreateRenderMesh(const IMeshSystem* , const char* );
	/* ../public/meshsystem/imeshsystem.h:246 */
	virtual void InvalidateMeshRayTrace(const IMeshSystem* , CRenderMesh* );
	/* ../public/meshsystem/imeshsystem.h:247 */
	virtual CSceneObject* CreateSceneObject(IMeshSystem* , HModel, const CTransform& , const char* , ESceneObjectFlags, ESceneObjectTypeFlags, ISceneWorld* , SceneObjectCreationFlags_t, int);
	/* ../public/meshsystem/imeshsystem.h:252 */
	virtual HRenderMesh_Internal FindOrCreateProceduralMesh(IMeshSystem* , const char* , bool);
	void IMeshSystem(class IMeshSystem *, class IMeshSystem &); /* linkage=_ZN11IMeshSystemC4EOS_ */
	void IMeshSystem(class IMeshSystem *, const class IMeshSystem  &); /* linkage=_ZN11IMeshSystemC4ERKS_ */
	void IMeshSystem(class IMeshSystem *); /* linkage=_ZN11IMeshSystemC4Ev */
	void ~IMeshSystem(class IMeshSystem *); /* linkage=_ZN11IMeshSystemD4Ev */
	virtual void PrepareRenderMesh(class IMeshSystem *, class CRenderMesh *); /* linkage=_ZN11IMeshSystem17PrepareRenderMeshEP11CRenderMesh */
	virtual HModel FindOrCreateProceduralModel(class IMeshSystem *, const char  *, bool, class CModelBuilder *); /* linkage=_ZN11IMeshSystem27FindOrCreateProceduralModelEPKcbP13CModelBuilder */
	virtual void DrawRenderable(class IMeshSystem *, class IRenderContext *, HModel, RenderShaderHandle_t, RenderShaderHandle_t, int); /* linkage=_ZN11IMeshSystem14DrawRenderableEP14IRenderContext11CWeakHandleI25InfoForResourceTypeCModelEP22RenderShaderHandle_t__S6_i */
	virtual class CMeshInstance * CreateMeshInstance(class IMeshSystem *, class ISceneObjectDesc *, uint32); /* linkage=_ZN11IMeshSystem18CreateMeshInstanceEP16ISceneObjectDescj */
	virtual void DestroyMeshInstance(class IMeshSystem *, class CMeshInstance *); /* linkage=_ZN11IMeshSystem19DestroyMeshInstanceEP13CMeshInstance */
	virtual class CSceneObject * CreateSceneObject(class IMeshSystem *, HModel, const class matrix3x4_t  &, const char  *, enum ESceneObjectFlags, enum ESceneObjectTypeFlags, class ISceneWorld *, SceneObjectCreationFlags_t, int); /* linkage=_ZN11IMeshSystem17CreateSceneObjectE11CWeakHandleI25InfoForResourceTypeCModelERK11matrix3x4_tPKc17ESceneObjectFlags21ESceneObjectTypeFlagsP11ISceneWorldji */
	virtual bool CreateSceneObjects(class IMeshSystem *, HModel, enum ESceneObjectFlags, class ISceneWorld *, class CUtlVector<CSceneObject*, CUtlMemory<CSceneObject*, int> > *, SceneObjectCreationFlags_t, int); /* linkage=_ZN11IMeshSystem18CreateSceneObjectsE11CWeakHandleI25InfoForResourceTypeCModelE17ESceneObjectFlagsP11ISceneWorldP10CUtlVectorIP12CSceneObject10CUtlMemoryIS8_iEEji */
	virtual class CSceneObject * CreateSceneObjectForSceneObjectData(class IMeshSystem *, class CModelMeshHandle, int, enum ESceneObjectFlags, class ISceneWorld *, SceneObjectCreationFlags_t, class ISceneObjectDesc *, int); /* linkage=_ZN11IMeshSystem35CreateSceneObjectForSceneObjectDataE16CModelMeshHandlei17ESceneObjectFlagsP11ISceneWorldjP16ISceneObjectDesci */
	virtual uint RemoveUnusedMeshGroups(class IMeshSystem *, class CSceneObject *, MeshGroupMask_t); /* linkage=_ZN11IMeshSystem22RemoveUnusedMeshGroupsEP12CSceneObjecty */
	virtual void ChangeModel(class IMeshSystem *, class CSceneObject *, HModel); /* linkage=_ZN11IMeshSystem11ChangeModelEP12CSceneObject11CWeakHandleI25InfoForResourceTypeCModelE */
	virtual void EnableTraceLines(class IMeshSystem *); /* linkage=_ZN11IMeshSystem16EnableTraceLinesEv */
	virtual void GetModelBounds(class IMeshSystem *, HModel, class Vector &, class Vector &); /* linkage=_ZN11IMeshSystem14GetModelBoundsE11CWeakHandleI25InfoForResourceTypeCModelER6VectorS4_ */
	virtual enum ESceneObjectFlags ComputeSceneObjectTranslucencyFlags(class IMeshSystem *, enum RenderMeshTranslucencyType_t, enum ESceneObjectFlags); /* linkage=_ZN11IMeshSystem35ComputeSceneObjectTranslucencyFlagsE28RenderMeshTranslucencyType_t17ESceneObjectFlags */
	virtual void UpdateTranslucencyFlagsOnMaterialChange(class IMeshSystem *, class CSceneObject *); /* linkage=_ZN11IMeshSystem39UpdateTranslucencyFlagsOnMaterialChangeEP12CSceneObject */
	virtual void ClearHighWaterMarks(class IMeshSystem *); /* linkage=_ZN11IMeshSystem19ClearHighWaterMarksEv */
	virtual void GetRenderableBounds(class IMeshSystem *, const class CRenderMesh  *, class Vector &, class Vector &); /* linkage=_ZN11IMeshSystem19GetRenderableBoundsEPK11CRenderMeshR6VectorS4_ */
	virtual class CMeshInstance * CreateMeshInstance(class IMeshSystem *, class ISceneObjectDesc *, uint32, class CModelMeshHandle, int, enum ESceneObjectFlags, class CSceneObject *, MeshGroupMask_t, LODGroupMask_t, const int16  *); /* linkage=_ZN11IMeshSystem18CreateMeshInstanceEP16ISceneObjectDescj16CModelMeshHandlei17ESceneObjectFlagsP12CSceneObjectyhPKs */
	virtual bool CreateSceneObjectsFromMesh(class IMeshSystem *, class CModelMeshHandle, enum ESceneObjectFlags, class ISceneWorld *, class CUtlVector<CSceneObject*, CUtlMemory<CSceneObject*, int> > *, SceneObjectCreationFlags_t, int); /* linkage=_ZN11IMeshSystem26CreateSceneObjectsFromMeshE16CModelMeshHandle17ESceneObjectFlagsP11ISceneWorldP10CUtlVectorIP12CSceneObject10CUtlMemoryIS6_iEEji */
	virtual enum ESceneObjectFlags ComputeSceneObjectTranslucencyFlags(class IMeshSystem *, const class CRenderMesh  *, enum ESceneObjectFlags); /* linkage=_ZN11IMeshSystem35ComputeSceneObjectTranslucencyFlagsEPK11CRenderMesh17ESceneObjectFlags */
	virtual class IMeshRayTrace * FindOrCreateMeshRayTrace(class IMeshSystem *, const class CRenderMesh  *); /* linkage=_ZN11IMeshSystem24FindOrCreateMeshRayTraceEPK11CRenderMesh */
	virtual void GetToolsGeometryInfo(class IMeshSystem *, const class CRenderMesh  *, const class CUtlVector<TraceDataForDraw_t, CUtlMemory<TraceDataForDraw_t, int> >  * *); /* linkage=_ZN11IMeshSystem20GetToolsGeometryInfoEPK11CRenderMeshPPK10CUtlVectorI18TraceDataForDraw_t10CUtlMemoryIS4_iEE */
	virtual class CSmartPtr<CRenderMesh, CRefCountAccessor> CreateRenderMesh(const class IMeshSystem  *, const char  *); /* linkage=_ZNK11IMeshSystem16CreateRenderMeshEPKc */
	virtual void InvalidateMeshRayTrace(const class IMeshSystem  *, class CRenderMesh *); /* linkage=_ZNK11IMeshSystem22InvalidateMeshRayTraceEP11CRenderMesh */
	virtual class CSceneObject * CreateSceneObject(class IMeshSystem *, HModel, const class CTransform  &, const char  *, enum ESceneObjectFlags, enum ESceneObjectTypeFlags, class ISceneWorld *, SceneObjectCreationFlags_t, int); /* linkage=_ZN11IMeshSystem17CreateSceneObjectE11CWeakHandleI25InfoForResourceTypeCModelERK10CTransformPKc17ESceneObjectFlags21ESceneObjectTypeFlagsP11ISceneWorldji */
	virtual HRenderMesh_Internal FindOrCreateProceduralMesh(class IMeshSystem *, const char  *, bool); /* linkage=_ZN11IMeshSystem26FindOrCreateProceduralMeshEPKcb */
};

