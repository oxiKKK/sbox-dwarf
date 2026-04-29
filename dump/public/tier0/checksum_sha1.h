
//
// public/tier0/checksum_sha1.h
//
//	referenced by: libtier0.so
//
//	class: 1
//	union: 1
//

// <00066652> ../public/tier0/checksum_sha1.h:35
typedef union {
	uint8 c[64]; /* 0 64 */
	uint32 l[16]; /* 0 64 */
} SHA1_WORKSPACE_BLOCK;

// <000666CA> ../public/tier0/checksum_sha1.h:48
// member functions: 18
// member variables: 7
// class size: 192
class CSHA1 {
	int ()(void) * * _vptr.CSHA1; /* 0 8 */
	/* ../public/tier0/checksum_sha1.h:63 */
	void CSHA1(CSHA1* );
	/* ../public/tier0/checksum_sha1.h:72 */
	virtual void ~CSHA1(CSHA1* );
	uint32 m_state[5]; /* 8 20 */
	uint32 m_count[2]; /* 28 8 */
	uint8 m_buffer[64]; /* 36 64 */
	uint8 m_digest[20]; /* 100 20 */
	/* tier0/checksum_sha1.cpp:62 */
	void Reset(CSHA1* );
	/* tier0/checksum_sha1.cpp:130 */
	void Update(CSHA1* , const void* , uint32);
	/* tier0/checksum_sha1.cpp:159 */
	bool HashFile(CSHA1* , const char* );
	/* tier0/checksum_sha1.cpp:217 */
	void Final(CSHA1* );
	/* ../public/tier0/checksum_sha1.h:96 */
	void GetHash(CSHA1* , uint8* );
	/* tier0/checksum_sha1.cpp:254 */
	void GetHashHex(CSHA1* , char* , int);
private:
	/* tier0/checksum_sha1.cpp:79 */
	void Transform(CSHA1* , uint32* , const uint8* );
	uint8 m_workspace[64]; /* 120 64 */
	SHA1_WORKSPACE_BLOCK * m_block; /* 184 8 */
	void CSHA1(class CSHA1 *); /* linkage=_ZN5CSHA1C4Ev */
	virtual void ~CSHA1(class CSHA1 *); /* linkage=_ZN5CSHA1D4Ev */
	void Reset(class CSHA1 *); /* linkage=_ZN5CSHA15ResetEv */
	void Update(class CSHA1 *, const void  *, uint32); /* linkage=_ZN5CSHA16UpdateEPKvj */
	bool HashFile(class CSHA1 *, const char  *); /* linkage=_ZN5CSHA18HashFileEPKc */
	void Final(class CSHA1 *); /* linkage=_ZN5CSHA15FinalEv */
	void GetHash(class CSHA1 *, uint8 *); /* linkage=_ZN5CSHA17GetHashEPh */
	void GetHashHex(class CSHA1 *, char *, int); /* linkage=_ZN5CSHA110GetHashHexEPci */
	void Transform(class CSHA1 *, uint32 *, const uint8  *); /* linkage=_ZN5CSHA19TransformEPjPKh */
};

