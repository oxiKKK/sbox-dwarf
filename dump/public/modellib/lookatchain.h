
//
// public/modellib/lookatchain.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 8
//	classes: 4
//

// <04D983EC> ../public/modellib/lookatchain.h:16
void CLookAtChainItem::~CLookAtChainItem()
{
} /* size: 0 */

// <04D983D0> ../public/modellib/lookatchain.h:16
inline void CLookAtChainItem::~CLookAtChainItem()
{
} /* size: 0 */

// <04D97C00> ../public/modellib/lookatchain.h:16
inline void CLookAtChainItem::operator=(const CLookAtChainItem &)
{
} /* size: 0 */

// <04A8EBCA> ../public/modellib/lookatchain.h:16
// member functions: 17
// member variables: 2
// class size: 16
class CLookAtChainItem {
	/* ../public/modellib/lookatchain.h:23 */
	void CLookAtChainItem(CLookAtChainItem* );
	/* ../public/modellib/lookatchain.h:25 */
	const CUtlString& GetBoneName(const CLookAtChainItem* );
	/* ../public/modellib/lookatchain.h:26 */
	void SetBoneName(CLookAtChainItem* , const CUtlString& );
	/* ../public/modellib/lookatchain.h:28 */
	float GetWeight(const CLookAtChainItem* );
	/* ../public/modellib/lookatchain.h:29 */
	void SetWeight(CLookAtChainItem* , float);
	/* ../public/modellib/lookatchain.h:31 */
	void KV3TransferSave(const CLookAtChainItem* , CKV3TransferSaveContext* );
	/* ../public/modellib/lookatchain.h:32 */
	void KV3TransferLoad(CLookAtChainItem* , CKV3TransferLoadContext* );
private:
	CUtlString m_sBoneName; /* 0 8 */
	float m_flWeight; /* 8 4 */
	void ~CLookAtChainItem(CLookAtChainItem* );
	void CLookAtChainItem(class CLookAtChainItem *); /* linkage=_ZN16CLookAtChainItemC4Ev */
	const class CUtlString  & GetBoneName(const class CLookAtChainItem  *); /* linkage=_ZNK16CLookAtChainItem11GetBoneNameEv */
	void SetBoneName(class CLookAtChainItem *, const class CUtlString  &); /* linkage=_ZN16CLookAtChainItem11SetBoneNameERK10CUtlString */
	float GetWeight(const class CLookAtChainItem  *); /* linkage=_ZNK16CLookAtChainItem9GetWeightEv */
	void SetWeight(class CLookAtChainItem *, float); /* linkage=_ZN16CLookAtChainItem9SetWeightEf */
	void KV3TransferSave(const class CLookAtChainItem  *, class CKV3TransferSaveContext *); /* linkage=_ZNK16CLookAtChainItem15KV3TransferSaveEP23CKV3TransferSaveContext */
	void KV3TransferLoad(class CLookAtChainItem *, class CKV3TransferLoadContext *); /* linkage=_ZN16CLookAtChainItem15KV3TransferLoadEP23CKV3TransferLoadContext */
	void ~CLookAtChainItem(class CLookAtChainItem *); /* linkage=_ZN16CLookAtChainItemD4Ev */
	class CLookAtChainItem & operator=(class CLookAtChainItem *, const class CLookAtChainItem  &); /* linkage=_ZN16CLookAtChainItemaSERKS_ */
};

// <04D85615> ../public/modellib/lookatchain.h:16
// member functions: 18
// member variables: 2
// class size: 16
class CLookAtChainItem {
	/* ../public/modellib/lookatchain.h:19 */
	enum {
		KV3TRANSFER_BEHAVIOR = 1,
	};
	/* ../public/modellib/lookatchain.h:23 */
	void CLookAtChainItem(CLookAtChainItem* );
	/* ../public/modellib/lookatchain.h:25 */
	const CUtlString& GetBoneName(const CLookAtChainItem* );
	/* ../public/modellib/lookatchain.h:26 */
	void SetBoneName(CLookAtChainItem* , const CUtlString& );
	/* ../public/modellib/lookatchain.h:28 */
	float GetWeight(const CLookAtChainItem* );
	/* ../public/modellib/lookatchain.h:29 */
	void SetWeight(CLookAtChainItem* , float);
	/* ../public/modellib/lookatchain.h:31 */
	void KV3TransferSave(const CLookAtChainItem* , CKV3TransferSaveContext* );
	/* ../public/modellib/lookatchain.h:32 */
	void KV3TransferLoad(CLookAtChainItem* , CKV3TransferLoadContext* );
private:
	CUtlString m_sBoneName; /* 0 8 */
	float m_flWeight; /* 8 4 */
	CLookAtChainItem& operator=(CLookAtChainItem* , const CLookAtChainItem& );
	void ~CLookAtChainItem(CLookAtChainItem* );
	void CLookAtChainItem(class CLookAtChainItem *); /* linkage=_ZN16CLookAtChainItemC4Ev */
	const class CUtlString  & GetBoneName(const class CLookAtChainItem  *); /* linkage=_ZNK16CLookAtChainItem11GetBoneNameEv */
	void SetBoneName(class CLookAtChainItem *, const class CUtlString  &); /* linkage=_ZN16CLookAtChainItem11SetBoneNameERK10CUtlString */
	float GetWeight(const class CLookAtChainItem  *); /* linkage=_ZNK16CLookAtChainItem9GetWeightEv */
	void SetWeight(class CLookAtChainItem *, float); /* linkage=_ZN16CLookAtChainItem9SetWeightEf */
	void KV3TransferSave(const class CLookAtChainItem  *, class CKV3TransferSaveContext *); /* linkage=_ZNK16CLookAtChainItem15KV3TransferSaveEP23CKV3TransferSaveContext */
	void KV3TransferLoad(class CLookAtChainItem *, class CKV3TransferLoadContext *); /* linkage=_ZN16CLookAtChainItem15KV3TransferLoadEP23CKV3TransferLoadContext */
	void ~CLookAtChainItem(class CLookAtChainItem *); /* linkage=_ZN16CLookAtChainItemD4Ev */
	class CLookAtChainItem & operator=(class CLookAtChainItem *, const class CLookAtChainItem  &); /* linkage=_ZN16CLookAtChainItemaSERKS_ */
};

// <04D9D53C> ../public/modellib/lookatchain.h:23
void CLookAtChainItem::CLookAtChainItem()
{
} /* size: 0 */

// <04D9D523> ../public/modellib/lookatchain.h:23
inline void CLookAtChainItem::CLookAtChainItem()
{
} /* size: 0 */

// <04AA8EBF> ../public/modellib/lookatchain.h:42
void CLookAtChain::~CLookAtChain()
{
} /* size: 0 */

// <04AA8EA3> ../public/modellib/lookatchain.h:42
inline void CLookAtChain::~CLookAtChain()
{
} /* size: 0 */

// <04A8ED0C> ../public/modellib/lookatchain.h:42
// member functions: 30
// member variables: 2
// class size: 40
class CLookAtChain {
	/* ../public/modellib/lookatchain.h:47 */
	void CLookAtChain(CLookAtChain* );
	/* ../public/modellib/lookatchain.h:48 */
	void CLookAtChain(CLookAtChain* , const CLookAtChain& );
	/* ../public/modellib/lookatchain.h:49 */
	void CLookAtChain(CLookAtChain* , CLookAtChain& );
	/* ../public/modellib/lookatchain.h:51 */
	const CUtlString& GetName(const CLookAtChain* );
	/* ../public/modellib/lookatchain.h:52 */
	void SetName(CLookAtChain* , const CUtlString& );
	/* ../public/modellib/lookatchain.h:54 */
	CLookAtChain& operator=(CLookAtChain* , const CLookAtChain& );
	/* ../public/modellib/lookatchain.h:55 */
	CLookAtChain& operator=(CLookAtChain* , CLookAtChain& );
	/* ../public/modellib/lookatchain.h:57 */
	CLookAtChainItem& operator[](CLookAtChain* , int);
	/* ../public/modellib/lookatchain.h:58 */
	const CLookAtChainItem& operator[](const CLookAtChain* , int);
	/* ../public/modellib/lookatchain.h:60 */
	int GetBoneCount(const CLookAtChain* );
	/* ../public/modellib/lookatchain.h:61 */
	void AddBone(CLookAtChain* );
	/* ../public/modellib/lookatchain.h:62 */
	void RemoveBone(CLookAtChain* , int);
	/* ../public/modellib/lookatchain.h:64 */
	void KV3TransferSave(const CLookAtChain* , CKV3TransferSaveContext* );
	/* ../public/modellib/lookatchain.h:65 */
	void KV3TransferLoad(CLookAtChain* , CKV3TransferLoadContext* );
private:
	CUtlVector<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> > m_bones; /* 0 32 */
	CUtlString m_name; /* 32 8 */
	void ~CLookAtChain(CLookAtChain* );
	void CLookAtChain(class CLookAtChain *); /* linkage=_ZN12CLookAtChainC4Ev */
	void CLookAtChain(class CLookAtChain *, const class CLookAtChain  &); /* linkage=_ZN12CLookAtChainC4ERKS_ */
	void CLookAtChain(class CLookAtChain *, class CLookAtChain &); /* linkage=_ZN12CLookAtChainC4EOS_ */
	const class CUtlString  & GetName(const class CLookAtChain  *); /* linkage=_ZNK12CLookAtChain7GetNameEv */
	void SetName(class CLookAtChain *, const class CUtlString  &); /* linkage=_ZN12CLookAtChain7SetNameERK10CUtlString */
	class CLookAtChain & operator=(class CLookAtChain *, const class CLookAtChain  &); /* linkage=_ZN12CLookAtChainaSERKS_ */
	class CLookAtChain & operator=(class CLookAtChain *, class CLookAtChain &); /* linkage=_ZN12CLookAtChainaSEOS_ */
	/* <4d9d83b> modellib/lookatchain.cpp:101 */
	class CLookAtChainItem & operator[](class CLookAtChain *, int); /* linkage=_ZN12CLookAtChainixEi */
	const class CLookAtChainItem  & operator[](const class CLookAtChain  *, int); /* linkage=_ZNK12CLookAtChainixEi */
	int GetBoneCount(const class CLookAtChain  *); /* linkage=_ZNK12CLookAtChain12GetBoneCountEv */
	void AddBone(class CLookAtChain *); /* linkage=_ZN12CLookAtChain7AddBoneEv */
	void RemoveBone(class CLookAtChain *, int); /* linkage=_ZN12CLookAtChain10RemoveBoneEi */
	void KV3TransferSave(const class CLookAtChain  *, class CKV3TransferSaveContext *); /* linkage=_ZNK12CLookAtChain15KV3TransferSaveEP23CKV3TransferSaveContext */
	void KV3TransferLoad(class CLookAtChain *, class CKV3TransferLoadContext *); /* linkage=_ZN12CLookAtChain15KV3TransferLoadEP23CKV3TransferLoadContext */
	void ~CLookAtChain(class CLookAtChain *); /* linkage=_ZN12CLookAtChainD4Ev */
};

// <04D85798> ../public/modellib/lookatchain.h:42
// member functions: 29
// member variables: 2
// class size: 40
class CLookAtChain {
	/* ../public/modellib/lookatchain.h:47 */
	void CLookAtChain(CLookAtChain* );
	/* ../public/modellib/lookatchain.h:48 */
	void CLookAtChain(CLookAtChain* , const CLookAtChain& );
	/* ../public/modellib/lookatchain.h:49 */
	void CLookAtChain(CLookAtChain* , CLookAtChain& );
	/* ../public/modellib/lookatchain.h:51 */
	const CUtlString& GetName(const CLookAtChain* );
	/* ../public/modellib/lookatchain.h:52 */
	void SetName(CLookAtChain* , const CUtlString& );
	/* ../public/modellib/lookatchain.h:54 */
	CLookAtChain& operator=(CLookAtChain* , const CLookAtChain& );
	/* ../public/modellib/lookatchain.h:55 */
	CLookAtChain& operator=(CLookAtChain* , CLookAtChain& );
	/* ../public/modellib/lookatchain.h:57 */
	CLookAtChainItem& operator[](CLookAtChain* , int);
	/* ../public/modellib/lookatchain.h:58 */
	const CLookAtChainItem& operator[](const CLookAtChain* , int);
	/* ../public/modellib/lookatchain.h:60 */
	int GetBoneCount(const CLookAtChain* );
	/* ../public/modellib/lookatchain.h:61 */
	void AddBone(CLookAtChain* );
	/* ../public/modellib/lookatchain.h:62 */
	void RemoveBone(CLookAtChain* , int);
	/* ../public/modellib/lookatchain.h:64 */
	void KV3TransferSave(const CLookAtChain* , CKV3TransferSaveContext* );
	/* ../public/modellib/lookatchain.h:65 */
	void KV3TransferLoad(CLookAtChain* , CKV3TransferLoadContext* );
private:
	CUtlVector<CLookAtChainItem, CUtlMemory<CLookAtChainItem, int> > m_bones; /* 0 32 */
	CUtlString m_name; /* 32 8 */
	void CLookAtChain(class CLookAtChain *); /* linkage=_ZN12CLookAtChainC4Ev */
	void CLookAtChain(class CLookAtChain *, const class CLookAtChain  &); /* linkage=_ZN12CLookAtChainC4ERKS_ */
	void CLookAtChain(class CLookAtChain *, class CLookAtChain &); /* linkage=_ZN12CLookAtChainC4EOS_ */
	const class CUtlString  & GetName(const class CLookAtChain  *); /* linkage=_ZNK12CLookAtChain7GetNameEv */
	void SetName(class CLookAtChain *, const class CUtlString  &); /* linkage=_ZN12CLookAtChain7SetNameERK10CUtlString */
	class CLookAtChain & operator=(class CLookAtChain *, const class CLookAtChain  &); /* linkage=_ZN12CLookAtChainaSERKS_ */
	class CLookAtChain & operator=(class CLookAtChain *, class CLookAtChain &); /* linkage=_ZN12CLookAtChainaSEOS_ */
	/* <4d9d83b> modellib/lookatchain.cpp:101 */
	class CLookAtChainItem & operator[](class CLookAtChain *, int); /* linkage=_ZN12CLookAtChainixEi */
	const class CLookAtChainItem  & operator[](const class CLookAtChain  *, int); /* linkage=_ZNK12CLookAtChainixEi */
	int GetBoneCount(const class CLookAtChain  *); /* linkage=_ZNK12CLookAtChain12GetBoneCountEv */
	void AddBone(class CLookAtChain *); /* linkage=_ZN12CLookAtChain7AddBoneEv */
	void RemoveBone(class CLookAtChain *, int); /* linkage=_ZN12CLookAtChain10RemoveBoneEi */
	void KV3TransferSave(const class CLookAtChain  *, class CKV3TransferSaveContext *); /* linkage=_ZNK12CLookAtChain15KV3TransferSaveEP23CKV3TransferSaveContext */
	void KV3TransferLoad(class CLookAtChain *, class CKV3TransferLoadContext *); /* linkage=_ZN12CLookAtChain15KV3TransferLoadEP23CKV3TransferLoadContext */
	void ~CLookAtChain(class CLookAtChain *); /* linkage=_ZN12CLookAtChainD4Ev */
};

// <04AA2FFB> ../public/modellib/lookatchain.h:47
void CLookAtChain::CLookAtChain()
{
} /* size: 0 */

