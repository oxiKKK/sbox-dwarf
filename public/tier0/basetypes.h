
//
// public/tier0/basetypes.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//
//	functions: 2
//	classes: 3
//

// <0006BBA9> ../public/tier0/basetypes.h:14
// member functions: 15
// member variable: 1
// static member variables: 2
// class size: 4
class CEntityIndex {
	static const enum TypeSafeIntCheckFlag_t CheckValue; /* 0 0 */
	static const bool IS_TYPESAFE_INTEGER = 1; /* 0 0 */
	/* ../public/tier0/basetypes.h:14 */
	const char* GetTypeName(void);
	/* ../public/tier0/basetypes.h:14 */
	void CEntityIndex(CEntityIndex* );
	/* ../public/tier0/basetypes.h:14 */
	void CEntityIndex(CEntityIndex* , int32);
	/* ../public/tier0/basetypes.h:14 */
	void SetRaw(CEntityIndex* , int32);
	/* ../public/tier0/basetypes.h:14 */
	int32 GetRaw(const CEntityIndex* );
	/* ../public/tier0/basetypes.h:14 */
	int32& GetRawRef(CEntityIndex* );
	/* ../public/tier0/basetypes.h:14 */
	const int32& GetRawRef(const CEntityIndex* );
	/* ../public/tier0/basetypes.h:14 */
	int32* GetRawPtrForWrite(CEntityIndex* );
	/* ../public/tier0/basetypes.h:14 */
	bool operator==(const CEntityIndex* , const CEntityIndex& );
	/* ../public/tier0/basetypes.h:14 */
	strong_ordering operator<=>(const CEntityIndex* , const CEntityIndex& );
	/* ../public/tier0/basetypes.h:14 */
	CEntityIndex& operator++(CEntityIndex* );
	/* ../public/tier0/basetypes.h:14 */
	CEntityIndex operator++(CEntityIndex* , int);
	/* ../public/tier0/basetypes.h:14 */
	CEntityIndex& operator--(CEntityIndex* );
	/* ../public/tier0/basetypes.h:14 */
	CEntityIndex operator--(CEntityIndex* , int);
private:
	int32 m_Value; /* 0 4 */
	/* ../public/tier0/basetypes.h:14 */
	CEntityIndex& operator=(CEntityIndex* , int32);
};

// <05881C98> ../../public/tier0/basetypes.h:14
// member functions: 15
// member variable: 1
// static member variables: 2
// class size: 4
class CEntityIndex {
	static const enum TypeSafeIntCheckFlag_t CheckValue; /* 0 0 */
	static const bool IS_TYPESAFE_INTEGER = 1; /* 0 0 */
	/* ../../public/tier0/basetypes.h:14 */
	const char* GetTypeName(void);
	/* ../../public/tier0/basetypes.h:14 */
	void CEntityIndex(CEntityIndex* );
	/* ../../public/tier0/basetypes.h:14 */
	void CEntityIndex(CEntityIndex* , int32);
	/* ../../public/tier0/basetypes.h:14 */
	void SetRaw(CEntityIndex* , int32);
	/* ../../public/tier0/basetypes.h:14 */
	int32 GetRaw(const CEntityIndex* );
	/* ../../public/tier0/basetypes.h:14 */
	int32& GetRawRef(CEntityIndex* );
	/* ../../public/tier0/basetypes.h:14 */
	const int32& GetRawRef(const CEntityIndex* );
	/* ../../public/tier0/basetypes.h:14 */
	int32* GetRawPtrForWrite(CEntityIndex* );
	/* ../../public/tier0/basetypes.h:14 */
	bool operator==(const CEntityIndex* , const CEntityIndex& );
	/* ../../public/tier0/basetypes.h:14 */
	strong_ordering operator<=>(const CEntityIndex* , const CEntityIndex& );
	/* ../../public/tier0/basetypes.h:14 */
	CEntityIndex& operator++(CEntityIndex* );
	/* ../../public/tier0/basetypes.h:14 */
	CEntityIndex operator++(CEntityIndex* , int);
	/* ../../public/tier0/basetypes.h:14 */
	CEntityIndex& operator--(CEntityIndex* );
	/* ../../public/tier0/basetypes.h:14 */
	CEntityIndex operator--(CEntityIndex* , int);
private:
	int32 m_Value; /* 0 4 */
	/* ../../public/tier0/basetypes.h:14 */
	CEntityIndex& operator=(CEntityIndex* , int32);
};

// <02476E91> ../public/tier0/basetypes.h:19
inline void SoundGuid_t::SetRaw(int32 other)
{
} /* size: 0 */

// <02476E78> ../public/tier0/basetypes.h:19
inline void SoundGuid_t::GetRaw()
{
} /* size: 0 */

// <005B8636> ../public/tier0/basetypes.h:19
// member functions: 30
// member variable: 1
// static member variables: 2
// class size: 4
class SoundGuid_t {
	static const enum TypeSafeIntCheckFlag_t CheckValue; /* 0 0 */
	static const bool IS_TYPESAFE_INTEGER = 1; /* 0 0 */
	/* ../public/tier0/basetypes.h:19 */
	const char* GetTypeName(void);
	/* ../public/tier0/basetypes.h:19 */
	void SoundGuid_t(SoundGuid_t* );
	/* ../public/tier0/basetypes.h:19 */
	void SoundGuid_t(SoundGuid_t* , int32);
	/* ../public/tier0/basetypes.h:19 */
	void SetRaw(SoundGuid_t* , int32);
	/* ../public/tier0/basetypes.h:19 */
	int32 GetRaw(const SoundGuid_t* );
	/* ../public/tier0/basetypes.h:19 */
	int32& GetRawRef(SoundGuid_t* );
	/* ../public/tier0/basetypes.h:19 */
	const int32& GetRawRef(const SoundGuid_t* );
	/* ../public/tier0/basetypes.h:19 */
	int32* GetRawPtrForWrite(SoundGuid_t* );
	/* ../public/tier0/basetypes.h:19 */
	bool operator==(const SoundGuid_t* , const SoundGuid_t& );
	/* ../public/tier0/basetypes.h:19 */
	strong_ordering operator<=>(const SoundGuid_t* , const SoundGuid_t& );
	/* ../public/tier0/basetypes.h:19 */
	SoundGuid_t& operator++(SoundGuid_t* );
	/* ../public/tier0/basetypes.h:19 */
	SoundGuid_t operator++(SoundGuid_t* , int);
	/* ../public/tier0/basetypes.h:19 */
	SoundGuid_t& operator--(SoundGuid_t* );
	/* ../public/tier0/basetypes.h:19 */
	SoundGuid_t operator--(SoundGuid_t* , int);
private:
	int32 m_Value; /* 0 4 */
	/* ../public/tier0/basetypes.h:19 */
	SoundGuid_t& operator=(SoundGuid_t* , int32);
	const char  * GetTypeName(void); /* linkage=_ZN11SoundGuid_t11GetTypeNameEv */
	void SoundGuid_t(class SoundGuid_t *); /* linkage=_ZN11SoundGuid_tC4Ev */
	void SoundGuid_t(class SoundGuid_t *, int32); /* linkage=_ZN11SoundGuid_tC4Ei */
	void SetRaw(class SoundGuid_t *, int32); /* linkage=_ZN11SoundGuid_t6SetRawEi */
	int32 GetRaw(const class SoundGuid_t  *); /* linkage=_ZNK11SoundGuid_t6GetRawEv */
	int32 & GetRawRef(class SoundGuid_t *); /* linkage=_ZN11SoundGuid_t9GetRawRefEv */
	const int32  & GetRawRef(const class SoundGuid_t  *); /* linkage=_ZNK11SoundGuid_t9GetRawRefEv */
	int32 * GetRawPtrForWrite(class SoundGuid_t *); /* linkage=_ZN11SoundGuid_t17GetRawPtrForWriteEv */
	bool operator==(const class SoundGuid_t  *, const class SoundGuid_t  &); /* linkage=_ZNK11SoundGuid_teqERKS_ */
	class strong_ordering operator<=>(const class SoundGuid_t  *, const class SoundGuid_t  &); /* linkage=_ZNK11SoundGuid_tssERKS_ */
	class SoundGuid_t & operator++(class SoundGuid_t *); /* linkage=_ZN11SoundGuid_tppEv */
	class SoundGuid_t operator++(class SoundGuid_t *, int); /* linkage=_ZN11SoundGuid_tppEi */
	class SoundGuid_t & operator--(class SoundGuid_t *); /* linkage=_ZN11SoundGuid_tmmEv */
	class SoundGuid_t operator--(class SoundGuid_t *, int); /* linkage=_ZN11SoundGuid_tmmEi */
	class SoundGuid_t & operator=(class SoundGuid_t *, int32); /* linkage=_ZN11SoundGuid_taSEi */
};

