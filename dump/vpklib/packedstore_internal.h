
//
// vpklib/packedstore_internal.h
//
//	referenced by: libfilesystem_stdio.so
//
//	functions: 19
//	classes: 3
//	struct: 1
//

// <001FC937> vpklib/packedstore_internal.h:15
// member functions: 8
// member variable: 1
// class size: 4
class CPackedInt<int> {
	/* vpklib/packedstore_internal.h:17 */
	enum {
		TYPE_SIZE = 4,
	};
	/* vpklib/packedstore_internal.h:22 */
	void CPackedInt(CPackedInt<int>* );
	/* vpklib/packedstore_internal.h:24 */
	void CPackedInt(CPackedInt<int>* , int);
	/* vpklib/packedstore_internal.h:27 */
	int operator int(const CPackedInt<int>* );
	/* vpklib/packedstore_internal.h:28 */
	CPackedInt<int>& operator=(CPackedInt<int>* , int);
private:
	uint8 m_nBytes[4]; /* 0 4 */
	void CPackedInt(class CPackedInt<int> *); /* linkage=_ZN10CPackedIntIiEC4Ev */
	void CPackedInt(class CPackedInt<int> *, int); /* linkage=_ZN10CPackedIntIiEC4Ei */
	int operator int(const class CPackedInt<int>  *); /* linkage=_ZNK10CPackedIntIiEcviEv */
	class CPackedInt<int> & operator=(class CPackedInt<int> *, int); /* linkage=_ZN10CPackedIntIiEaSEi */
};

// <00202D02> vpklib/packedstore_internal.h:15
// member functions: 8
// member variable: 1
// class size: 2
class CPackedInt<short unsigned int> {
	/* vpklib/packedstore_internal.h:22 */
	void CPackedInt(CPackedInt<short unsigned int>* );
	/* vpklib/packedstore_internal.h:24 */
	void CPackedInt(CPackedInt<short unsigned int>* , short unsigned int);
	/* vpklib/packedstore_internal.h:27 */
	short unsigned int operator short unsigned int(const CPackedInt<short unsigned int>* );
	/* vpklib/packedstore_internal.h:28 */
	CPackedInt<short unsigned int>& operator=(CPackedInt<short unsigned int>* , short unsigned int);
private:
	uint8 m_nBytes[2]; /* 0 2 */
	void CPackedInt(class CPackedInt<short unsigned int> *); /* linkage=_ZN10CPackedIntItEC4Ev */
	void CPackedInt(class CPackedInt<short unsigned int> *, short unsigned int); /* linkage=_ZN10CPackedIntItEC4Et */
	short unsigned int operator short unsigned int(const class CPackedInt<short unsigned int>  *); /* linkage=_ZNK10CPackedIntItEcvtEv */
	class CPackedInt<short unsigned int> & operator=(class CPackedInt<short unsigned int> *, short unsigned int); /* linkage=_ZN10CPackedIntItEaSEt */
};

// <00202DDE> vpklib/packedstore_internal.h:15
// member functions: 8
// member variable: 1
// class size: 4
class CPackedInt<unsigned int> {
	/* vpklib/packedstore_internal.h:22 */
	void CPackedInt(CPackedInt<unsigned int>* );
	/* vpklib/packedstore_internal.h:24 */
	void CPackedInt(CPackedInt<unsigned int>* , unsigned int);
	/* vpklib/packedstore_internal.h:27 */
	unsigned int operator unsigned int(const CPackedInt<unsigned int>* );
	/* vpklib/packedstore_internal.h:28 */
	CPackedInt<unsigned int>& operator=(CPackedInt<unsigned int>* , unsigned int);
private:
	uint8 m_nBytes[4]; /* 0 4 */
	void CPackedInt(class CPackedInt<unsigned int> *); /* linkage=_ZN10CPackedIntIjEC4Ev */
	void CPackedInt(class CPackedInt<unsigned int> *, unsigned int); /* linkage=_ZN10CPackedIntIjEC4Ej */
	unsigned int operator unsigned int(const class CPackedInt<unsigned int>  *); /* linkage=_ZNK10CPackedIntIjEcvjEv */
	class CPackedInt<unsigned int> & operator=(class CPackedInt<unsigned int> *, unsigned int); /* linkage=_ZN10CPackedIntIjEaSEj */
};

// <0021B7BA> vpklib/packedstore_internal.h:22
void CPackedInt<int>::CPackedInt()
{
} /* size: 0 */

// <0021B7A1> vpklib/packedstore_internal.h:22
inline void CPackedInt<int>::CPackedInt()
{
} /* size: 0 */

// <00219520> vpklib/packedstore_internal.h:22
void CPackedInt<short unsigned int>::CPackedInt()
{
} /* size: 0 */

// <00219507> vpklib/packedstore_internal.h:22
inline void CPackedInt<short unsigned int>::CPackedInt()
{
} /* size: 0 */

// <002194F0> vpklib/packedstore_internal.h:22
void CPackedInt<unsigned int>::CPackedInt()
{
} /* size: 0 */

// <002194D7> vpklib/packedstore_internal.h:22
inline void CPackedInt<unsigned int>::CPackedInt()
{
} /* size: 0 */

// <0021959D> vpklib/packedstore_internal.h:24
void CPackedInt<unsigned int>::CPackedInt(unsigned int val)
{
} /* size: 0 */

// <00219578> vpklib/packedstore_internal.h:24
inline void CPackedInt<unsigned int>::CPackedInt(unsigned int val)
{
} /* size: 0 */

// <0021955C> vpklib/packedstore_internal.h:24
void CPackedInt<short unsigned int>::CPackedInt(short unsigned int val)
{
} /* size: 0 */

// <00219537> vpklib/packedstore_internal.h:24
inline void CPackedInt<short unsigned int>::CPackedInt(short unsigned int val)
{
} /* size: 0 */

// <0021B763> vpklib/packedstore_internal.h:27
inline void operator CPackedInt<int>::int()
{
} /* size: 0 */

// <0021B695> vpklib/packedstore_internal.h:27
inline void operator short unsigned CPackedInt<short unsigned int>::int()
{
} /* size: 0 */

// <0021B67C> vpklib/packedstore_internal.h:27
inline void operator unsigned CPackedInt<unsigned int>::int()
{
} /* size: 0 */

// <0021B77C> vpklib/packedstore_internal.h:28
inline void CPackedInt<int>::operator=(int val)
{
} /* size: 0 */

// <002194B2> vpklib/packedstore_internal.h:28
inline void CPackedInt<unsigned int>::operator=(unsigned int val)
{
} /* size: 0 */

// <0021948D> vpklib/packedstore_internal.h:28
inline void CPackedInt<short unsigned int>::operator=(short unsigned int val)
{
} /* size: 0 */

// <001FCA19> vpklib/packedstore_internal.h:45
// member functions: 2
// member variables: 7
// struct size: 28
struct VPKDirHeader_t {
	CPackedInt<int> m_nHeaderMarker; /* 0 4 */
	CPackedInt<int> m_nVersion; /* 4 4 */
	CPackedInt<int> m_nDirectorySize; /* 8 4 */
	CPackedInt<int> m_nEmbeddedChunkSize; /* 12 4 */
	CPackedInt<int> m_nChunkHashesSize; /* 16 4 */
	CPackedInt<int> m_nSelfHashesSize; /* 20 4 */
	CPackedInt<int> m_nSignatureSize; /* 24 4 */
	/* vpklib/packedstore_internal.h:55 */
	void VPKDirHeader_t(VPKDirHeader_t* );
	/* vpklib/packedstore_internal.h:66 */
	uint32 ComputeSizeofSignedDataAfterHeader(const VPKDirHeader_t* );
};

// <00239127> vpklib/packedstore_internal.h:55
void VPKDirHeader_t::VPKDirHeader_t()
{
} /* size: 0 */

// <0023910E> vpklib/packedstore_internal.h:55
inline void VPKDirHeader_t::VPKDirHeader_t()
{
} /* size: 0 */

// <002390F5> vpklib/packedstore_internal.h:66
inline void VPKDirHeader_t::ComputeSizeofSignedDataAfterHeader()
{
} /* size: 0 */

