
//
// public/tier0/utltypesafeint.h
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
//	functions: 39
//	classes: 12
//

// <0003CF81> ../public/tier0/utltypesafeint.h:17
// member functions: 33
// member variable: 1
// class size: 2
class CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int> {
	/* ../public/tier0/utltypesafeint.h:20 */
	void CUtlTypesafeInt(CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* );
	/* ../public/tier0/utltypesafeint.h:21 */
	void CUtlTypesafeInt(CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* , short int);
	/* ../public/tier0/utltypesafeint.h:23 */
	void Set(CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* , short int);
	/* ../public/tier0/utltypesafeint.h:24 */
	short int Get(const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* );
	/* ../public/tier0/utltypesafeint.h:26 */
	void FromInt(CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* , short int);
	/* ../public/tier0/utltypesafeint.h:27 */
	short int ToInt(const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* );
	/* ../public/tier0/utltypesafeint.h:29 */
	short int* ToPtr(CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* );
	/* ../public/tier0/utltypesafeint.h:30 */
	const short int* ToPtr(const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* );
	/* ../public/tier0/utltypesafeint.h:33 */
	bool operator<(const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* , const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>& );
	/* ../public/tier0/utltypesafeint.h:34 */
	bool operator<=(const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* , const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>& );
	/* ../public/tier0/utltypesafeint.h:35 */
	bool operator>(const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* , const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>& );
	/* ../public/tier0/utltypesafeint.h:36 */
	bool operator>=(const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* , const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>& );
	/* ../public/tier0/utltypesafeint.h:37 */
	CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>& operator++(CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* );
	/* ../public/tier0/utltypesafeint.h:38 */
	CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>& operator--(CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* );
	/* ../public/tier0/utltypesafeint.h:39 */
	CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int> operator++(CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* , int);
	/* ../public/tier0/utltypesafeint.h:40 */
	CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int> operator--(CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* , int);
	/* ../public/tier0/utltypesafeint.h:41 */
	CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int> operator+(const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* , short int);
	/* ../public/tier0/utltypesafeint.h:42 */
	CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int> operator-(const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* , short int);
	/* ../public/tier0/utltypesafeint.h:43 */
	CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int> operator+(const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* , const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>& );
	/* ../public/tier0/utltypesafeint.h:44 */
	CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int> operator-(const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* , const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>& );
	/* ../public/tier0/utltypesafeint.h:45 */
	bool operator==(const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* , const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>& );
	/* ../public/tier0/utltypesafeint.h:46 */
	bool operator!=(const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* , const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>& );
	/* ../public/tier0/utltypesafeint.h:47 */
	CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int> operator|(const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* , const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>& );
	/* ../public/tier0/utltypesafeint.h:48 */
	CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int> operator&(const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* , const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>& );
	/* ../public/tier0/utltypesafeint.h:49 */
	CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int> operator^(const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* , const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>& );
	/* ../public/tier0/utltypesafeint.h:50 */
	CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int> operator<<(const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* , int);
	/* ../public/tier0/utltypesafeint.h:51 */
	CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int> operator>>(const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* , int);
	/* ../public/tier0/utltypesafeint.h:52 */
	CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>& operator|=(CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* , const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>& );
	/* ../public/tier0/utltypesafeint.h:53 */
	CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>& operator&=(CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* , const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>& );
	/* ../public/tier0/utltypesafeint.h:54 */
	CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>& operator^=(CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* , const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>& );
	/* ../public/tier0/utltypesafeint.h:55 */
	CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>& operator<<=(CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* , int);
	/* ../public/tier0/utltypesafeint.h:56 */
	CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>& operator>>=(CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* , int);
	/* ../public/tier0/utltypesafeint.h:57 */
	CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int> operator~(const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* );
private:
	short int m_nVal; /* 0 2 */
};

// <000DD16F> ../public/tier0/utltypesafeint.h:17
// member functions: 66
// member variable: 1
// class size: 1
class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char> {
	/* ../public/tier0/utltypesafeint.h:20 */
	void CUtlTypesafeInt(CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>* );
	/* ../public/tier0/utltypesafeint.h:21 */
	void CUtlTypesafeInt(CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>* , unsigned char);
	/* ../public/tier0/utltypesafeint.h:23 */
	void Set(CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>* , unsigned char);
	/* ../public/tier0/utltypesafeint.h:24 */
	unsigned char Get(const CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>* );
	/* ../public/tier0/utltypesafeint.h:26 */
	void FromInt(CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>* , unsigned char);
	/* ../public/tier0/utltypesafeint.h:27 */
	unsigned char ToInt(const CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>* );
	/* ../public/tier0/utltypesafeint.h:29 */
	unsigned char* ToPtr(CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>* );
	/* ../public/tier0/utltypesafeint.h:30 */
	const unsigned char* ToPtr(const CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>* );
	/* ../public/tier0/utltypesafeint.h:33 */
	bool operator<(const CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>* , const CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>& );
	/* ../public/tier0/utltypesafeint.h:34 */
	bool operator<=(const CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>* , const CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>& );
	/* ../public/tier0/utltypesafeint.h:35 */
	bool operator>(const CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>* , const CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>& );
	/* ../public/tier0/utltypesafeint.h:36 */
	bool operator>=(const CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>* , const CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>& );
	/* ../public/tier0/utltypesafeint.h:37 */
	CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>& operator++(CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>* );
	/* ../public/tier0/utltypesafeint.h:38 */
	CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>& operator--(CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>* );
	/* ../public/tier0/utltypesafeint.h:39 */
	CUtlTypesafeInt<EngineToolID_t_id*, unsigned char> operator++(CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>* , int);
	/* ../public/tier0/utltypesafeint.h:40 */
	CUtlTypesafeInt<EngineToolID_t_id*, unsigned char> operator--(CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>* , int);
	/* ../public/tier0/utltypesafeint.h:41 */
	CUtlTypesafeInt<EngineToolID_t_id*, unsigned char> operator+(const CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>* , unsigned char);
	/* ../public/tier0/utltypesafeint.h:42 */
	CUtlTypesafeInt<EngineToolID_t_id*, unsigned char> operator-(const CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>* , unsigned char);
	/* ../public/tier0/utltypesafeint.h:43 */
	CUtlTypesafeInt<EngineToolID_t_id*, unsigned char> operator+(const CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>* , const CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>& );
	/* ../public/tier0/utltypesafeint.h:44 */
	CUtlTypesafeInt<EngineToolID_t_id*, unsigned char> operator-(const CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>* , const CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>& );
	/* ../public/tier0/utltypesafeint.h:45 */
	bool operator==(const CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>* , const CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>& );
	/* ../public/tier0/utltypesafeint.h:46 */
	bool operator!=(const CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>* , const CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>& );
	/* ../public/tier0/utltypesafeint.h:47 */
	CUtlTypesafeInt<EngineToolID_t_id*, unsigned char> operator|(const CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>* , const CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>& );
	/* ../public/tier0/utltypesafeint.h:48 */
	CUtlTypesafeInt<EngineToolID_t_id*, unsigned char> operator&(const CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>* , const CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>& );
	/* ../public/tier0/utltypesafeint.h:49 */
	CUtlTypesafeInt<EngineToolID_t_id*, unsigned char> operator^(const CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>* , const CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>& );
	/* ../public/tier0/utltypesafeint.h:50 */
	CUtlTypesafeInt<EngineToolID_t_id*, unsigned char> operator<<(const CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>* , int);
	/* ../public/tier0/utltypesafeint.h:51 */
	CUtlTypesafeInt<EngineToolID_t_id*, unsigned char> operator>>(const CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>* , int);
	/* ../public/tier0/utltypesafeint.h:52 */
	CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>& operator|=(CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>* , const CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>& );
	/* ../public/tier0/utltypesafeint.h:53 */
	CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>& operator&=(CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>* , const CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>& );
	/* ../public/tier0/utltypesafeint.h:54 */
	CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>& operator^=(CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>* , const CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>& );
	/* ../public/tier0/utltypesafeint.h:55 */
	CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>& operator<<=(CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>* , int);
	/* ../public/tier0/utltypesafeint.h:56 */
	CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>& operator>>=(CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>* , int);
	/* ../public/tier0/utltypesafeint.h:57 */
	CUtlTypesafeInt<EngineToolID_t_id*, unsigned char> operator~(const CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>* );
private:
	unsigned char m_nVal; /* 0 1 */
	void CUtlTypesafeInt(class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char> *); /* linkage=_ZN15CUtlTypesafeIntIP17EngineToolID_t_idhEC4Ev */
	void CUtlTypesafeInt(class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char> *, unsigned char); /* linkage=_ZN15CUtlTypesafeIntIP17EngineToolID_t_idhEC4Eh */
	void Set(class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char> *, unsigned char); /* linkage=_ZN15CUtlTypesafeIntIP17EngineToolID_t_idhE3SetEh */
	unsigned char Get(const class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>  *); /* linkage=_ZNK15CUtlTypesafeIntIP17EngineToolID_t_idhE3GetEv */
	void FromInt(class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char> *, unsigned char); /* linkage=_ZN15CUtlTypesafeIntIP17EngineToolID_t_idhE7FromIntEh */
	unsigned char ToInt(const class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>  *); /* linkage=_ZNK15CUtlTypesafeIntIP17EngineToolID_t_idhE5ToIntEv */
	unsigned char * ToPtr(class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char> *); /* linkage=_ZN15CUtlTypesafeIntIP17EngineToolID_t_idhE5ToPtrEv */
	const unsigned char  * ToPtr(const class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>  *); /* linkage=_ZNK15CUtlTypesafeIntIP17EngineToolID_t_idhE5ToPtrEv */
	bool operator<(const class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>  *, const class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>  &); /* linkage=_ZNK15CUtlTypesafeIntIP17EngineToolID_t_idhEltERKS2_ */
	bool operator<=(const class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>  *, const class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>  &); /* linkage=_ZNK15CUtlTypesafeIntIP17EngineToolID_t_idhEleERKS2_ */
	bool operator>(const class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>  *, const class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>  &); /* linkage=_ZNK15CUtlTypesafeIntIP17EngineToolID_t_idhEgtERKS2_ */
	bool operator>=(const class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>  *, const class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>  &); /* linkage=_ZNK15CUtlTypesafeIntIP17EngineToolID_t_idhEgeERKS2_ */
	class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char> & operator++(class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char> *); /* linkage=_ZN15CUtlTypesafeIntIP17EngineToolID_t_idhEppEv */
	class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char> & operator--(class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char> *); /* linkage=_ZN15CUtlTypesafeIntIP17EngineToolID_t_idhEmmEv */
	class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char> operator++(class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char> *, int); /* linkage=_ZN15CUtlTypesafeIntIP17EngineToolID_t_idhEppEi */
	class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char> operator--(class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char> *, int); /* linkage=_ZN15CUtlTypesafeIntIP17EngineToolID_t_idhEmmEi */
	class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char> operator+(const class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>  *, unsigned char); /* linkage=_ZNK15CUtlTypesafeIntIP17EngineToolID_t_idhEplEh */
	class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char> operator-(const class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>  *, unsigned char); /* linkage=_ZNK15CUtlTypesafeIntIP17EngineToolID_t_idhEmiEh */
	class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char> operator+(const class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>  *, const class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>  &); /* linkage=_ZNK15CUtlTypesafeIntIP17EngineToolID_t_idhEplERKS2_ */
	class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char> operator-(const class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>  *, const class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>  &); /* linkage=_ZNK15CUtlTypesafeIntIP17EngineToolID_t_idhEmiERKS2_ */
	bool operator==(const class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>  *, const class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>  &); /* linkage=_ZNK15CUtlTypesafeIntIP17EngineToolID_t_idhEeqERKS2_ */
	bool operator!=(const class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>  *, const class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>  &); /* linkage=_ZNK15CUtlTypesafeIntIP17EngineToolID_t_idhEneERKS2_ */
	class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char> operator|(const class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>  *, const class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>  &); /* linkage=_ZNK15CUtlTypesafeIntIP17EngineToolID_t_idhEorERKS2_ */
	class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char> operator&(const class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>  *, const class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>  &); /* linkage=_ZNK15CUtlTypesafeIntIP17EngineToolID_t_idhEanERKS2_ */
	class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char> operator^(const class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>  *, const class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>  &); /* linkage=_ZNK15CUtlTypesafeIntIP17EngineToolID_t_idhEeoERKS2_ */
	class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char> operator<<(const class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>  *, int); /* linkage=_ZNK15CUtlTypesafeIntIP17EngineToolID_t_idhElsEi */
	class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char> operator>>(const class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>  *, int); /* linkage=_ZNK15CUtlTypesafeIntIP17EngineToolID_t_idhErsEi */
	class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char> & operator|=(class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char> *, const class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>  &); /* linkage=_ZN15CUtlTypesafeIntIP17EngineToolID_t_idhEoRERKS2_ */
	class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char> & operator&=(class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char> *, const class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>  &); /* linkage=_ZN15CUtlTypesafeIntIP17EngineToolID_t_idhEaNERKS2_ */
	class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char> & operator^=(class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char> *, const class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>  &); /* linkage=_ZN15CUtlTypesafeIntIP17EngineToolID_t_idhEeOERKS2_ */
	class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char> & operator<<=(class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char> *, int); /* linkage=_ZN15CUtlTypesafeIntIP17EngineToolID_t_idhElSEi */
	class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char> & operator>>=(class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char> *, int); /* linkage=_ZN15CUtlTypesafeIntIP17EngineToolID_t_idhErSEi */
	class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char> operator~(const class CUtlTypesafeInt<EngineToolID_t_id*, unsigned char>  *); /* linkage=_ZNK15CUtlTypesafeIntIP17EngineToolID_t_idhEcoEv */
};

// <0583AA2E> ../../public/tier0/utltypesafeint.h:17
// member functions: 33
// member variable: 1
// class size: 2
class CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int> {
	/* ../../public/tier0/utltypesafeint.h:20 */
	void CUtlTypesafeInt(CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* );
	/* ../../public/tier0/utltypesafeint.h:21 */
	void CUtlTypesafeInt(CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* , short int);
	/* ../../public/tier0/utltypesafeint.h:23 */
	void Set(CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* , short int);
	/* ../../public/tier0/utltypesafeint.h:24 */
	short int Get(const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* );
	/* ../../public/tier0/utltypesafeint.h:26 */
	void FromInt(CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* , short int);
	/* ../../public/tier0/utltypesafeint.h:27 */
	short int ToInt(const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* );
	/* ../../public/tier0/utltypesafeint.h:29 */
	short int* ToPtr(CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* );
	/* ../../public/tier0/utltypesafeint.h:30 */
	const short int* ToPtr(const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* );
	/* ../../public/tier0/utltypesafeint.h:33 */
	bool operator<(const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* , const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>& );
	/* ../../public/tier0/utltypesafeint.h:34 */
	bool operator<=(const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* , const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>& );
	/* ../../public/tier0/utltypesafeint.h:35 */
	bool operator>(const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* , const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>& );
	/* ../../public/tier0/utltypesafeint.h:36 */
	bool operator>=(const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* , const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>& );
	/* ../../public/tier0/utltypesafeint.h:37 */
	CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>& operator++(CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* );
	/* ../../public/tier0/utltypesafeint.h:38 */
	CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>& operator--(CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* );
	/* ../../public/tier0/utltypesafeint.h:39 */
	CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int> operator++(CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* , int);
	/* ../../public/tier0/utltypesafeint.h:40 */
	CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int> operator--(CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* , int);
	/* ../../public/tier0/utltypesafeint.h:41 */
	CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int> operator+(const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* , short int);
	/* ../../public/tier0/utltypesafeint.h:42 */
	CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int> operator-(const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* , short int);
	/* ../../public/tier0/utltypesafeint.h:43 */
	CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int> operator+(const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* , const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>& );
	/* ../../public/tier0/utltypesafeint.h:44 */
	CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int> operator-(const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* , const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>& );
	/* ../../public/tier0/utltypesafeint.h:45 */
	bool operator==(const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* , const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>& );
	/* ../../public/tier0/utltypesafeint.h:46 */
	bool operator!=(const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* , const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>& );
	/* ../../public/tier0/utltypesafeint.h:47 */
	CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int> operator|(const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* , const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>& );
	/* ../../public/tier0/utltypesafeint.h:48 */
	CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int> operator&(const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* , const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>& );
	/* ../../public/tier0/utltypesafeint.h:49 */
	CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int> operator^(const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* , const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>& );
	/* ../../public/tier0/utltypesafeint.h:50 */
	CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int> operator<<(const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* , int);
	/* ../../public/tier0/utltypesafeint.h:51 */
	CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int> operator>>(const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* , int);
	/* ../../public/tier0/utltypesafeint.h:52 */
	CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>& operator|=(CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* , const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>& );
	/* ../../public/tier0/utltypesafeint.h:53 */
	CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>& operator&=(CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* , const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>& );
	/* ../../public/tier0/utltypesafeint.h:54 */
	CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>& operator^=(CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* , const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>& );
	/* ../../public/tier0/utltypesafeint.h:55 */
	CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>& operator<<=(CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* , int);
	/* ../../public/tier0/utltypesafeint.h:56 */
	CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>& operator>>=(CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* , int);
	/* ../../public/tier0/utltypesafeint.h:57 */
	CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int> operator~(const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>* );
private:
	short int m_nVal; /* 0 2 */
};

// <05F39757> ../public/tier0/utltypesafeint.h:17
// member functions: 33
// member variable: 1
// class size: 4
class CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int> {
	/* ../public/tier0/utltypesafeint.h:20 */
	void CUtlTypesafeInt(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:21 */
	void CUtlTypesafeInt(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:23 */
	void Set(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:24 */
	int Get(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:26 */
	void FromInt(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:27 */
	int ToInt(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:29 */
	int* ToPtr(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:30 */
	const int* ToPtr(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:33 */
	bool operator<(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:34 */
	bool operator<=(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:35 */
	bool operator>(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:36 */
	bool operator>=(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:37 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>& operator++(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:38 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>& operator--(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:39 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int> operator++(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:40 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int> operator--(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:41 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int> operator+(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:42 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int> operator-(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:43 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int> operator+(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:44 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int> operator-(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:45 */
	bool operator==(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:46 */
	bool operator!=(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:47 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int> operator|(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:48 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int> operator&(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:49 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int> operator^(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:50 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int> operator<<(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:51 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int> operator>>(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:52 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>& operator|=(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:53 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>& operator&=(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:54 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>& operator^=(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:55 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>& operator<<=(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:56 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>& operator>>=(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:57 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int> operator~(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>* );
private:
	int m_nVal; /* 0 4 */
};

// <05F3F53F> ../public/tier0/utltypesafeint.h:17
// member functions: 33
// member variable: 1
// class size: 4
class CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int> {
	/* ../public/tier0/utltypesafeint.h:20 */
	void CUtlTypesafeInt(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:21 */
	void CUtlTypesafeInt(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:23 */
	void Set(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:24 */
	int Get(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:26 */
	void FromInt(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:27 */
	int ToInt(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:29 */
	int* ToPtr(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:30 */
	const int* ToPtr(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:33 */
	bool operator<(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:34 */
	bool operator<=(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:35 */
	bool operator>(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:36 */
	bool operator>=(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:37 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>& operator++(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:38 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>& operator--(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:39 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int> operator++(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:40 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int> operator--(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:41 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int> operator+(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:42 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int> operator-(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:43 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int> operator+(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:44 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int> operator-(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:45 */
	bool operator==(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:46 */
	bool operator!=(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:47 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int> operator|(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:48 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int> operator&(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:49 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int> operator^(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:50 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int> operator<<(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:51 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int> operator>>(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:52 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>& operator|=(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:53 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>& operator&=(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:54 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>& operator^=(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:55 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>& operator<<=(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:56 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>& operator>>=(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:57 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int> operator~(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>* );
private:
	int m_nVal; /* 0 4 */
};

// <05F45302> ../public/tier0/utltypesafeint.h:17
// member functions: 33
// member variable: 1
// class size: 4
class CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int> {
	/* ../public/tier0/utltypesafeint.h:20 */
	void CUtlTypesafeInt(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:21 */
	void CUtlTypesafeInt(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:23 */
	void Set(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:24 */
	int Get(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:26 */
	void FromInt(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:27 */
	int ToInt(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:29 */
	int* ToPtr(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:30 */
	const int* ToPtr(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:33 */
	bool operator<(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:34 */
	bool operator<=(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:35 */
	bool operator>(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:36 */
	bool operator>=(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:37 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>& operator++(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:38 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>& operator--(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:39 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int> operator++(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:40 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int> operator--(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:41 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int> operator+(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:42 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int> operator-(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:43 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int> operator+(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:44 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int> operator-(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:45 */
	bool operator==(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:46 */
	bool operator!=(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:47 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int> operator|(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:48 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int> operator&(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:49 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int> operator^(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:50 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int> operator<<(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:51 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int> operator>>(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:52 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>& operator|=(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:53 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>& operator&=(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:54 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>& operator^=(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:55 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>& operator<<=(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:56 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>& operator>>=(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:57 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int> operator~(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>* );
private:
	int m_nVal; /* 0 4 */
};

// <05F4B0CA> ../public/tier0/utltypesafeint.h:17
// member functions: 33
// member variable: 1
// class size: 4
class CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int> {
	/* ../public/tier0/utltypesafeint.h:20 */
	void CUtlTypesafeInt(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:21 */
	void CUtlTypesafeInt(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:23 */
	void Set(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:24 */
	int Get(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:26 */
	void FromInt(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:27 */
	int ToInt(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:29 */
	int* ToPtr(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:30 */
	const int* ToPtr(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:33 */
	bool operator<(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:34 */
	bool operator<=(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:35 */
	bool operator>(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:36 */
	bool operator>=(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:37 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>& operator++(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:38 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>& operator--(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:39 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int> operator++(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:40 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int> operator--(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:41 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int> operator+(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:42 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int> operator-(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:43 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int> operator+(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:44 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int> operator-(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:45 */
	bool operator==(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:46 */
	bool operator!=(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:47 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int> operator|(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:48 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int> operator&(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:49 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int> operator^(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:50 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int> operator<<(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:51 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int> operator>>(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:52 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>& operator|=(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:53 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>& operator&=(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:54 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>& operator^=(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:55 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>& operator<<=(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:56 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>& operator>>=(CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:57 */
	CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int> operator~(const CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>* );
private:
	int m_nVal; /* 0 4 */
};

// <05F4BF98> ../public/tier0/utltypesafeint.h:17
// member functions: 33
// member variable: 1
// class size: 4
class CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int> {
	/* ../public/tier0/utltypesafeint.h:20 */
	void CUtlTypesafeInt(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:21 */
	void CUtlTypesafeInt(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:23 */
	void Set(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:24 */
	int Get(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:26 */
	void FromInt(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:27 */
	int ToInt(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:29 */
	int* ToPtr(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:30 */
	const int* ToPtr(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:33 */
	bool operator<(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:34 */
	bool operator<=(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:35 */
	bool operator>(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:36 */
	bool operator>=(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:37 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>& operator++(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:38 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>& operator--(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:39 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int> operator++(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:40 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int> operator--(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:41 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int> operator+(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:42 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int> operator-(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:43 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int> operator+(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:44 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int> operator-(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:45 */
	bool operator==(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:46 */
	bool operator!=(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:47 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int> operator|(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:48 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int> operator&(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:49 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int> operator^(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:50 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int> operator<<(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:51 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int> operator>>(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:52 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>& operator|=(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:53 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>& operator&=(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:54 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>& operator^=(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:55 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>& operator<<=(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:56 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>& operator>>=(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:57 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int> operator~(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>* );
private:
	int m_nVal; /* 0 4 */
};

// <05F4C495> ../public/tier0/utltypesafeint.h:17
// member functions: 33
// member variable: 1
// class size: 4
class CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int> {
	/* ../public/tier0/utltypesafeint.h:20 */
	void CUtlTypesafeInt(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:21 */
	void CUtlTypesafeInt(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:23 */
	void Set(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:24 */
	int Get(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:26 */
	void FromInt(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:27 */
	int ToInt(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:29 */
	int* ToPtr(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:30 */
	const int* ToPtr(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:33 */
	bool operator<(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:34 */
	bool operator<=(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:35 */
	bool operator>(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:36 */
	bool operator>=(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:37 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>& operator++(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:38 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>& operator--(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:39 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int> operator++(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:40 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int> operator--(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:41 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int> operator+(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:42 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int> operator-(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:43 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int> operator+(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:44 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int> operator-(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:45 */
	bool operator==(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:46 */
	bool operator!=(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:47 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int> operator|(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:48 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int> operator&(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:49 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int> operator^(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:50 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int> operator<<(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:51 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int> operator>>(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:52 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>& operator|=(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:53 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>& operator&=(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:54 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>& operator^=(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:55 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>& operator<<=(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:56 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>& operator>>=(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:57 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int> operator~(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>* );
private:
	int m_nVal; /* 0 4 */
};

// <05F4C992> ../public/tier0/utltypesafeint.h:17
// member functions: 33
// member variable: 1
// class size: 4
class CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int> {
	/* ../public/tier0/utltypesafeint.h:20 */
	void CUtlTypesafeInt(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:21 */
	void CUtlTypesafeInt(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:23 */
	void Set(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:24 */
	int Get(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:26 */
	void FromInt(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:27 */
	int ToInt(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:29 */
	int* ToPtr(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:30 */
	const int* ToPtr(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:33 */
	bool operator<(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:34 */
	bool operator<=(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:35 */
	bool operator>(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:36 */
	bool operator>=(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:37 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>& operator++(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:38 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>& operator--(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:39 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int> operator++(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:40 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int> operator--(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:41 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int> operator+(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:42 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int> operator-(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:43 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int> operator+(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:44 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int> operator-(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:45 */
	bool operator==(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:46 */
	bool operator!=(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:47 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int> operator|(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:48 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int> operator&(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:49 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int> operator^(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:50 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int> operator<<(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:51 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int> operator>>(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:52 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>& operator|=(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:53 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>& operator&=(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:54 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>& operator^=(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:55 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>& operator<<=(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:56 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>& operator>>=(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:57 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int> operator~(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>* );
private:
	int m_nVal; /* 0 4 */
};

// <05F4CE8F> ../public/tier0/utltypesafeint.h:17
// member functions: 33
// member variable: 1
// class size: 4
class CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int> {
	/* ../public/tier0/utltypesafeint.h:20 */
	void CUtlTypesafeInt(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:21 */
	void CUtlTypesafeInt(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:23 */
	void Set(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:24 */
	int Get(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:26 */
	void FromInt(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:27 */
	int ToInt(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:29 */
	int* ToPtr(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:30 */
	const int* ToPtr(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:33 */
	bool operator<(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:34 */
	bool operator<=(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:35 */
	bool operator>(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:36 */
	bool operator>=(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:37 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>& operator++(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:38 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>& operator--(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>* );
	/* ../public/tier0/utltypesafeint.h:39 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int> operator++(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:40 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int> operator--(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:41 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int> operator+(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:42 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int> operator-(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:43 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int> operator+(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:44 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int> operator-(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:45 */
	bool operator==(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:46 */
	bool operator!=(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:47 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int> operator|(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:48 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int> operator&(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:49 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int> operator^(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:50 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int> operator<<(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:51 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int> operator>>(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:52 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>& operator|=(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:53 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>& operator&=(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:54 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>& operator^=(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>* , const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>& );
	/* ../public/tier0/utltypesafeint.h:55 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>& operator<<=(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:56 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>& operator>>=(CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>* , int);
	/* ../public/tier0/utltypesafeint.h:57 */
	CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int> operator~(const CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>* );
private:
	int m_nVal; /* 0 4 */
};

// <0123AD34> ../public/tier0/utltypesafeint.h:17
// member functions: 66
// member variable: 1
// class size: 4
class CUtlTypesafeInt<ModSearchIndex_t_id*, int> {
	/* ../public/tier0/utltypesafeint.h:20 */
	void CUtlTypesafeInt(CUtlTypesafeInt<ModSearchIndex_t_id*, int>* );
	/* ../public/tier0/utltypesafeint.h:21 */
	void CUtlTypesafeInt(CUtlTypesafeInt<ModSearchIndex_t_id*, int>* , int);
	/* ../public/tier0/utltypesafeint.h:23 */
	void Set(CUtlTypesafeInt<ModSearchIndex_t_id*, int>* , int);
	/* ../public/tier0/utltypesafeint.h:24 */
	int Get(const CUtlTypesafeInt<ModSearchIndex_t_id*, int>* );
	/* ../public/tier0/utltypesafeint.h:26 */
	void FromInt(CUtlTypesafeInt<ModSearchIndex_t_id*, int>* , int);
	/* ../public/tier0/utltypesafeint.h:27 */
	int ToInt(const CUtlTypesafeInt<ModSearchIndex_t_id*, int>* );
	/* ../public/tier0/utltypesafeint.h:29 */
	int* ToPtr(CUtlTypesafeInt<ModSearchIndex_t_id*, int>* );
	/* ../public/tier0/utltypesafeint.h:30 */
	const int* ToPtr(const CUtlTypesafeInt<ModSearchIndex_t_id*, int>* );
	/* ../public/tier0/utltypesafeint.h:33 */
	bool operator<(const CUtlTypesafeInt<ModSearchIndex_t_id*, int>* , const CUtlTypesafeInt<ModSearchIndex_t_id*, int>& );
	/* ../public/tier0/utltypesafeint.h:34 */
	bool operator<=(const CUtlTypesafeInt<ModSearchIndex_t_id*, int>* , const CUtlTypesafeInt<ModSearchIndex_t_id*, int>& );
	/* ../public/tier0/utltypesafeint.h:35 */
	bool operator>(const CUtlTypesafeInt<ModSearchIndex_t_id*, int>* , const CUtlTypesafeInt<ModSearchIndex_t_id*, int>& );
	/* ../public/tier0/utltypesafeint.h:36 */
	bool operator>=(const CUtlTypesafeInt<ModSearchIndex_t_id*, int>* , const CUtlTypesafeInt<ModSearchIndex_t_id*, int>& );
	/* ../public/tier0/utltypesafeint.h:37 */
	CUtlTypesafeInt<ModSearchIndex_t_id*, int>& operator++(CUtlTypesafeInt<ModSearchIndex_t_id*, int>* );
	/* ../public/tier0/utltypesafeint.h:38 */
	CUtlTypesafeInt<ModSearchIndex_t_id*, int>& operator--(CUtlTypesafeInt<ModSearchIndex_t_id*, int>* );
	/* ../public/tier0/utltypesafeint.h:39 */
	CUtlTypesafeInt<ModSearchIndex_t_id*, int> operator++(CUtlTypesafeInt<ModSearchIndex_t_id*, int>* , int);
	/* ../public/tier0/utltypesafeint.h:40 */
	CUtlTypesafeInt<ModSearchIndex_t_id*, int> operator--(CUtlTypesafeInt<ModSearchIndex_t_id*, int>* , int);
	/* ../public/tier0/utltypesafeint.h:41 */
	CUtlTypesafeInt<ModSearchIndex_t_id*, int> operator+(const CUtlTypesafeInt<ModSearchIndex_t_id*, int>* , int);
	/* ../public/tier0/utltypesafeint.h:42 */
	CUtlTypesafeInt<ModSearchIndex_t_id*, int> operator-(const CUtlTypesafeInt<ModSearchIndex_t_id*, int>* , int);
	/* ../public/tier0/utltypesafeint.h:43 */
	CUtlTypesafeInt<ModSearchIndex_t_id*, int> operator+(const CUtlTypesafeInt<ModSearchIndex_t_id*, int>* , const CUtlTypesafeInt<ModSearchIndex_t_id*, int>& );
	/* ../public/tier0/utltypesafeint.h:44 */
	CUtlTypesafeInt<ModSearchIndex_t_id*, int> operator-(const CUtlTypesafeInt<ModSearchIndex_t_id*, int>* , const CUtlTypesafeInt<ModSearchIndex_t_id*, int>& );
	/* ../public/tier0/utltypesafeint.h:45 */
	bool operator==(const CUtlTypesafeInt<ModSearchIndex_t_id*, int>* , const CUtlTypesafeInt<ModSearchIndex_t_id*, int>& );
	/* ../public/tier0/utltypesafeint.h:46 */
	bool operator!=(const CUtlTypesafeInt<ModSearchIndex_t_id*, int>* , const CUtlTypesafeInt<ModSearchIndex_t_id*, int>& );
	/* ../public/tier0/utltypesafeint.h:47 */
	CUtlTypesafeInt<ModSearchIndex_t_id*, int> operator|(const CUtlTypesafeInt<ModSearchIndex_t_id*, int>* , const CUtlTypesafeInt<ModSearchIndex_t_id*, int>& );
	/* ../public/tier0/utltypesafeint.h:48 */
	CUtlTypesafeInt<ModSearchIndex_t_id*, int> operator&(const CUtlTypesafeInt<ModSearchIndex_t_id*, int>* , const CUtlTypesafeInt<ModSearchIndex_t_id*, int>& );
	/* ../public/tier0/utltypesafeint.h:49 */
	CUtlTypesafeInt<ModSearchIndex_t_id*, int> operator^(const CUtlTypesafeInt<ModSearchIndex_t_id*, int>* , const CUtlTypesafeInt<ModSearchIndex_t_id*, int>& );
	/* ../public/tier0/utltypesafeint.h:50 */
	CUtlTypesafeInt<ModSearchIndex_t_id*, int> operator<<(const CUtlTypesafeInt<ModSearchIndex_t_id*, int>* , int);
	/* ../public/tier0/utltypesafeint.h:51 */
	CUtlTypesafeInt<ModSearchIndex_t_id*, int> operator>>(const CUtlTypesafeInt<ModSearchIndex_t_id*, int>* , int);
	/* ../public/tier0/utltypesafeint.h:52 */
	CUtlTypesafeInt<ModSearchIndex_t_id*, int>& operator|=(CUtlTypesafeInt<ModSearchIndex_t_id*, int>* , const CUtlTypesafeInt<ModSearchIndex_t_id*, int>& );
	/* ../public/tier0/utltypesafeint.h:53 */
	CUtlTypesafeInt<ModSearchIndex_t_id*, int>& operator&=(CUtlTypesafeInt<ModSearchIndex_t_id*, int>* , const CUtlTypesafeInt<ModSearchIndex_t_id*, int>& );
	/* ../public/tier0/utltypesafeint.h:54 */
	CUtlTypesafeInt<ModSearchIndex_t_id*, int>& operator^=(CUtlTypesafeInt<ModSearchIndex_t_id*, int>* , const CUtlTypesafeInt<ModSearchIndex_t_id*, int>& );
	/* ../public/tier0/utltypesafeint.h:55 */
	CUtlTypesafeInt<ModSearchIndex_t_id*, int>& operator<<=(CUtlTypesafeInt<ModSearchIndex_t_id*, int>* , int);
	/* ../public/tier0/utltypesafeint.h:56 */
	CUtlTypesafeInt<ModSearchIndex_t_id*, int>& operator>>=(CUtlTypesafeInt<ModSearchIndex_t_id*, int>* , int);
	/* ../public/tier0/utltypesafeint.h:57 */
	CUtlTypesafeInt<ModSearchIndex_t_id*, int> operator~(const CUtlTypesafeInt<ModSearchIndex_t_id*, int>* );
private:
	int m_nVal; /* 0 4 */
	void CUtlTypesafeInt(class CUtlTypesafeInt<ModSearchIndex_t_id*, int> *); /* linkage=_ZN15CUtlTypesafeIntIP19ModSearchIndex_t_idiEC4Ev */
	void CUtlTypesafeInt(class CUtlTypesafeInt<ModSearchIndex_t_id*, int> *, int); /* linkage=_ZN15CUtlTypesafeIntIP19ModSearchIndex_t_idiEC4Ei */
	void Set(class CUtlTypesafeInt<ModSearchIndex_t_id*, int> *, int); /* linkage=_ZN15CUtlTypesafeIntIP19ModSearchIndex_t_idiE3SetEi */
	int Get(const class CUtlTypesafeInt<ModSearchIndex_t_id*, int>  *); /* linkage=_ZNK15CUtlTypesafeIntIP19ModSearchIndex_t_idiE3GetEv */
	void FromInt(class CUtlTypesafeInt<ModSearchIndex_t_id*, int> *, int); /* linkage=_ZN15CUtlTypesafeIntIP19ModSearchIndex_t_idiE7FromIntEi */
	int ToInt(const class CUtlTypesafeInt<ModSearchIndex_t_id*, int>  *); /* linkage=_ZNK15CUtlTypesafeIntIP19ModSearchIndex_t_idiE5ToIntEv */
	int * ToPtr(class CUtlTypesafeInt<ModSearchIndex_t_id*, int> *); /* linkage=_ZN15CUtlTypesafeIntIP19ModSearchIndex_t_idiE5ToPtrEv */
	const int  * ToPtr(const class CUtlTypesafeInt<ModSearchIndex_t_id*, int>  *); /* linkage=_ZNK15CUtlTypesafeIntIP19ModSearchIndex_t_idiE5ToPtrEv */
	bool operator<(const class CUtlTypesafeInt<ModSearchIndex_t_id*, int>  *, const class CUtlTypesafeInt<ModSearchIndex_t_id*, int>  &); /* linkage=_ZNK15CUtlTypesafeIntIP19ModSearchIndex_t_idiEltERKS2_ */
	bool operator<=(const class CUtlTypesafeInt<ModSearchIndex_t_id*, int>  *, const class CUtlTypesafeInt<ModSearchIndex_t_id*, int>  &); /* linkage=_ZNK15CUtlTypesafeIntIP19ModSearchIndex_t_idiEleERKS2_ */
	bool operator>(const class CUtlTypesafeInt<ModSearchIndex_t_id*, int>  *, const class CUtlTypesafeInt<ModSearchIndex_t_id*, int>  &); /* linkage=_ZNK15CUtlTypesafeIntIP19ModSearchIndex_t_idiEgtERKS2_ */
	bool operator>=(const class CUtlTypesafeInt<ModSearchIndex_t_id*, int>  *, const class CUtlTypesafeInt<ModSearchIndex_t_id*, int>  &); /* linkage=_ZNK15CUtlTypesafeIntIP19ModSearchIndex_t_idiEgeERKS2_ */
	class CUtlTypesafeInt<ModSearchIndex_t_id*, int> & operator++(class CUtlTypesafeInt<ModSearchIndex_t_id*, int> *); /* linkage=_ZN15CUtlTypesafeIntIP19ModSearchIndex_t_idiEppEv */
	class CUtlTypesafeInt<ModSearchIndex_t_id*, int> & operator--(class CUtlTypesafeInt<ModSearchIndex_t_id*, int> *); /* linkage=_ZN15CUtlTypesafeIntIP19ModSearchIndex_t_idiEmmEv */
	class CUtlTypesafeInt<ModSearchIndex_t_id*, int> operator++(class CUtlTypesafeInt<ModSearchIndex_t_id*, int> *, int); /* linkage=_ZN15CUtlTypesafeIntIP19ModSearchIndex_t_idiEppEi */
	class CUtlTypesafeInt<ModSearchIndex_t_id*, int> operator--(class CUtlTypesafeInt<ModSearchIndex_t_id*, int> *, int); /* linkage=_ZN15CUtlTypesafeIntIP19ModSearchIndex_t_idiEmmEi */
	class CUtlTypesafeInt<ModSearchIndex_t_id*, int> operator+(const class CUtlTypesafeInt<ModSearchIndex_t_id*, int>  *, int); /* linkage=_ZNK15CUtlTypesafeIntIP19ModSearchIndex_t_idiEplEi */
	class CUtlTypesafeInt<ModSearchIndex_t_id*, int> operator-(const class CUtlTypesafeInt<ModSearchIndex_t_id*, int>  *, int); /* linkage=_ZNK15CUtlTypesafeIntIP19ModSearchIndex_t_idiEmiEi */
	class CUtlTypesafeInt<ModSearchIndex_t_id*, int> operator+(const class CUtlTypesafeInt<ModSearchIndex_t_id*, int>  *, const class CUtlTypesafeInt<ModSearchIndex_t_id*, int>  &); /* linkage=_ZNK15CUtlTypesafeIntIP19ModSearchIndex_t_idiEplERKS2_ */
	class CUtlTypesafeInt<ModSearchIndex_t_id*, int> operator-(const class CUtlTypesafeInt<ModSearchIndex_t_id*, int>  *, const class CUtlTypesafeInt<ModSearchIndex_t_id*, int>  &); /* linkage=_ZNK15CUtlTypesafeIntIP19ModSearchIndex_t_idiEmiERKS2_ */
	bool operator==(const class CUtlTypesafeInt<ModSearchIndex_t_id*, int>  *, const class CUtlTypesafeInt<ModSearchIndex_t_id*, int>  &); /* linkage=_ZNK15CUtlTypesafeIntIP19ModSearchIndex_t_idiEeqERKS2_ */
	bool operator!=(const class CUtlTypesafeInt<ModSearchIndex_t_id*, int>  *, const class CUtlTypesafeInt<ModSearchIndex_t_id*, int>  &); /* linkage=_ZNK15CUtlTypesafeIntIP19ModSearchIndex_t_idiEneERKS2_ */
	class CUtlTypesafeInt<ModSearchIndex_t_id*, int> operator|(const class CUtlTypesafeInt<ModSearchIndex_t_id*, int>  *, const class CUtlTypesafeInt<ModSearchIndex_t_id*, int>  &); /* linkage=_ZNK15CUtlTypesafeIntIP19ModSearchIndex_t_idiEorERKS2_ */
	class CUtlTypesafeInt<ModSearchIndex_t_id*, int> operator&(const class CUtlTypesafeInt<ModSearchIndex_t_id*, int>  *, const class CUtlTypesafeInt<ModSearchIndex_t_id*, int>  &); /* linkage=_ZNK15CUtlTypesafeIntIP19ModSearchIndex_t_idiEanERKS2_ */
	class CUtlTypesafeInt<ModSearchIndex_t_id*, int> operator^(const class CUtlTypesafeInt<ModSearchIndex_t_id*, int>  *, const class CUtlTypesafeInt<ModSearchIndex_t_id*, int>  &); /* linkage=_ZNK15CUtlTypesafeIntIP19ModSearchIndex_t_idiEeoERKS2_ */
	class CUtlTypesafeInt<ModSearchIndex_t_id*, int> operator<<(const class CUtlTypesafeInt<ModSearchIndex_t_id*, int>  *, int); /* linkage=_ZNK15CUtlTypesafeIntIP19ModSearchIndex_t_idiElsEi */
	class CUtlTypesafeInt<ModSearchIndex_t_id*, int> operator>>(const class CUtlTypesafeInt<ModSearchIndex_t_id*, int>  *, int); /* linkage=_ZNK15CUtlTypesafeIntIP19ModSearchIndex_t_idiErsEi */
	class CUtlTypesafeInt<ModSearchIndex_t_id*, int> & operator|=(class CUtlTypesafeInt<ModSearchIndex_t_id*, int> *, const class CUtlTypesafeInt<ModSearchIndex_t_id*, int>  &); /* linkage=_ZN15CUtlTypesafeIntIP19ModSearchIndex_t_idiEoRERKS2_ */
	class CUtlTypesafeInt<ModSearchIndex_t_id*, int> & operator&=(class CUtlTypesafeInt<ModSearchIndex_t_id*, int> *, const class CUtlTypesafeInt<ModSearchIndex_t_id*, int>  &); /* linkage=_ZN15CUtlTypesafeIntIP19ModSearchIndex_t_idiEaNERKS2_ */
	class CUtlTypesafeInt<ModSearchIndex_t_id*, int> & operator^=(class CUtlTypesafeInt<ModSearchIndex_t_id*, int> *, const class CUtlTypesafeInt<ModSearchIndex_t_id*, int>  &); /* linkage=_ZN15CUtlTypesafeIntIP19ModSearchIndex_t_idiEeOERKS2_ */
	class CUtlTypesafeInt<ModSearchIndex_t_id*, int> & operator<<=(class CUtlTypesafeInt<ModSearchIndex_t_id*, int> *, int); /* linkage=_ZN15CUtlTypesafeIntIP19ModSearchIndex_t_idiElSEi */
	class CUtlTypesafeInt<ModSearchIndex_t_id*, int> & operator>>=(class CUtlTypesafeInt<ModSearchIndex_t_id*, int> *, int); /* linkage=_ZN15CUtlTypesafeIntIP19ModSearchIndex_t_idiErSEi */
	class CUtlTypesafeInt<ModSearchIndex_t_id*, int> operator~(const class CUtlTypesafeInt<ModSearchIndex_t_id*, int>  *); /* linkage=_ZNK15CUtlTypesafeIntIP19ModSearchIndex_t_idiEcoEv */
};

// <02350403> ../public/tier0/utltypesafeint.h:20
void CUtlTypesafeInt<ResourceTypeIndex_t_id::CUtlTypesafeInt()
{
} /* size: 0 */

// <023503EA> ../public/tier0/utltypesafeint.h:20
inline void CUtlTypesafeInt<ResourceTypeIndex_t_id::CUtlTypesafeInt()
{
} /* size: 0 */

// <0607DF4A> ../public/tier0/utltypesafeint.h:21
void CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>::CUtlTypesafeInt(int nVal)
{
} /* size: 0 */

// <0607DF25> ../public/tier0/utltypesafeint.h:21
inline void CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>::CUtlTypesafeInt(int nVal)
{
} /* size: 0 */

// <0607D1A9> ../public/tier0/utltypesafeint.h:21
void CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>::CUtlTypesafeInt(int nVal)
{
} /* size: 0 */

// <0607D184> ../public/tier0/utltypesafeint.h:21
inline void CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>::CUtlTypesafeInt(int nVal)
{
} /* size: 0 */

// <0607C406> ../public/tier0/utltypesafeint.h:21
void CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>::CUtlTypesafeInt(int nVal)
{
} /* size: 0 */

// <0607C3E1> ../public/tier0/utltypesafeint.h:21
inline void CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>::CUtlTypesafeInt(int nVal)
{
} /* size: 0 */

// <0607B667> ../public/tier0/utltypesafeint.h:21
void CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>::CUtlTypesafeInt(int nVal)
{
} /* size: 0 */

// <0607B642> ../public/tier0/utltypesafeint.h:21
inline void CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>::CUtlTypesafeInt(int nVal)
{
} /* size: 0 */

// <060755D2> ../public/tier0/utltypesafeint.h:21
void CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>::CUtlTypesafeInt(int nVal)
{
} /* size: 0 */

// <060755AD> ../public/tier0/utltypesafeint.h:21
inline void CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>::CUtlTypesafeInt(int nVal)
{
} /* size: 0 */

// <0607483C> ../public/tier0/utltypesafeint.h:21
void CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>::CUtlTypesafeInt(int nVal)
{
} /* size: 0 */

// <06074817> ../public/tier0/utltypesafeint.h:21
inline void CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>::CUtlTypesafeInt(int nVal)
{
} /* size: 0 */

// <06073A69> ../public/tier0/utltypesafeint.h:21
void CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>::CUtlTypesafeInt(int nVal)
{
} /* size: 0 */

// <06073A44> ../public/tier0/utltypesafeint.h:21
inline void CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>::CUtlTypesafeInt(int nVal)
{
} /* size: 0 */

// <06072CD3> ../public/tier0/utltypesafeint.h:21
void CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>::CUtlTypesafeInt(int nVal)
{
} /* size: 0 */

// <06072CAE> ../public/tier0/utltypesafeint.h:21
inline void CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>::CUtlTypesafeInt(int nVal)
{
} /* size: 0 */

// <02358A6D> ../public/tier0/utltypesafeint.h:21
void CUtlTypesafeInt<ResourceTypeIndex_t_id::CUtlTypesafeInt(short int nVal)
{
} /* size: 0 */

// <02358A48> ../public/tier0/utltypesafeint.h:21
inline void CUtlTypesafeInt<ResourceTypeIndex_t_id::CUtlTypesafeInt(short int nVal)
{
} /* size: 0 */

// <001354A1> ../public/tier0/utltypesafeint.h:21
void CUtlTypesafeInt<EngineToolID_t_id::CUtlTypesafeInt(unsigned char nVal)
{
} /* size: 0 */

// <0013547C> ../public/tier0/utltypesafeint.h:21
inline void CUtlTypesafeInt<EngineToolID_t_id::CUtlTypesafeInt(unsigned char nVal)
{
} /* size: 0 */

// <01270968> ../public/tier0/utltypesafeint.h:21
void CUtlTypesafeInt<ModSearchIndex_t_id::CUtlTypesafeInt(int nVal)
{
} /* size: 0 */

// <01270943> ../public/tier0/utltypesafeint.h:21
inline void CUtlTypesafeInt<ModSearchIndex_t_id::CUtlTypesafeInt(int nVal)
{
} /* size: 0 */

// <0606E12C> ../public/tier0/utltypesafeint.h:24
inline void CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>::Get()
{
} /* size: 0 */

// <0606D244> ../public/tier0/utltypesafeint.h:24
inline void CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>::Get()
{
} /* size: 0 */

// <0606C338> ../public/tier0/utltypesafeint.h:24
inline void CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>::Get()
{
} /* size: 0 */

// <0606B450> ../public/tier0/utltypesafeint.h:24
inline void CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>::Get()
{
} /* size: 0 */

// <023583AD> ../public/tier0/utltypesafeint.h:24
inline void CUtlTypesafeInt<ResourceTypeIndex_t_id::Get()
{
} /* size: 0 */

// <06075DD4> ../public/tier0/utltypesafeint.h:27
inline void CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Vertex_t>::DeltaIndexTag_t, int>::ToInt()
{
} /* size: 0 */

// <0607503E> ../public/tier0/utltypesafeint.h:27
inline void CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::FaceVertex_t>::DeltaIndexTag_t, int>::ToInt()
{
} /* size: 0 */

// <0607428F> ../public/tier0/utltypesafeint.h:27
inline void CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Edge_t>::DeltaIndexTag_t, int>::ToInt()
{
} /* size: 0 */

// <060734D5> ../public/tier0/utltypesafeint.h:27
inline void CUtlTypesafeInt<CModelMeshDeltaSet<CModelMesh::Face_t>::DeltaIndexTag_t, int>::ToInt()
{
} /* size: 0 */

// <0606ECE1> ../public/tier0/utltypesafeint.h:27
inline void CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Vertex_t>::StreamIndexTag_t, int>::ToInt()
{
} /* size: 0 */

// <0606DDD5> ../public/tier0/utltypesafeint.h:27
inline void CUtlTypesafeInt<CModelMeshDelta<CModelMesh::FaceVertex_t>::StreamIndexTag_t, int>::ToInt()
{
} /* size: 0 */

// <0606CEC9> ../public/tier0/utltypesafeint.h:27
inline void CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Edge_t>::StreamIndexTag_t, int>::ToInt()
{
} /* size: 0 */

// <0606BFE1> ../public/tier0/utltypesafeint.h:27
inline void CUtlTypesafeInt<CModelMeshDelta<CModelMesh::Face_t>::StreamIndexTag_t, int>::ToInt()
{
} /* size: 0 */

// <02358602> ../public/tier0/utltypesafeint.h:45
inline void CUtlTypesafeInt<ResourceTypeIndex_t_id::operator==(const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>& other)
{
} /* size: 0 */

// <02357E43> ../public/tier0/utltypesafeint.h:46
inline void CUtlTypesafeInt<ResourceTypeIndex_t_id::operator!=(const CUtlTypesafeInt<ResourceTypeIndex_t_id*, short int>& other)
{
} /* size: 0 */

