
//
// public/modellib/modelenums.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 4
//	class: 1
//	structs: 3
//

// <04AE3670> ../public/modellib/modelenums.h:13
void AttachmentHandle_t::AttachmentHandle_t(uint8 value)
{
} /* size: 0 */

// <04AE364B> ../public/modellib/modelenums.h:13
inline void AttachmentHandle_t::AttachmentHandle_t(uint8 value)
{
} /* size: 0 */

// <04AE3632> ../public/modellib/modelenums.h:13
inline void AttachmentHandle_t::GetRaw()
{
} /* size: 0 */

// <0134B284> ../public/modellib/modelenums.h:13
inline void AttachmentHandle_t::operator==(const AttachmentHandle_t& other)
{
} /* size: 0 */

// <000E847C> ../public/modellib/modelenums.h:13
// member functions: 30
// member variable: 1
// static member variables: 2
// class size: 1
class AttachmentHandle_t {
	static const enum TypeSafeIntCheckFlag_t CheckValue; /* 0 0 */
	static const bool IS_TYPESAFE_INTEGER = 1; /* 0 0 */
	/* ../public/modellib/modelenums.h:13 */
	const char* GetTypeName(void);
	/* ../public/modellib/modelenums.h:13 */
	void AttachmentHandle_t(AttachmentHandle_t* );
	/* ../public/modellib/modelenums.h:13 */
	void AttachmentHandle_t(AttachmentHandle_t* , uint8);
	/* ../public/modellib/modelenums.h:13 */
	void SetRaw(AttachmentHandle_t* , uint8);
	/* ../public/modellib/modelenums.h:13 */
	uint8 GetRaw(const AttachmentHandle_t* );
	/* ../public/modellib/modelenums.h:13 */
	uint8& GetRawRef(AttachmentHandle_t* );
	/* ../public/modellib/modelenums.h:13 */
	const uint8& GetRawRef(const AttachmentHandle_t* );
	/* ../public/modellib/modelenums.h:13 */
	uint8* GetRawPtrForWrite(AttachmentHandle_t* );
	/* ../public/modellib/modelenums.h:13 */
	bool operator==(const AttachmentHandle_t* , const AttachmentHandle_t& );
	/* ../public/modellib/modelenums.h:13 */
	strong_ordering operator<=>(const AttachmentHandle_t* , const AttachmentHandle_t& );
	/* ../public/modellib/modelenums.h:13 */
	AttachmentHandle_t& operator++(AttachmentHandle_t* );
	/* ../public/modellib/modelenums.h:13 */
	AttachmentHandle_t operator++(AttachmentHandle_t* , int);
	/* ../public/modellib/modelenums.h:13 */
	AttachmentHandle_t& operator--(AttachmentHandle_t* );
	/* ../public/modellib/modelenums.h:13 */
	AttachmentHandle_t operator--(AttachmentHandle_t* , int);
private:
	uint8 m_Value; /* 0 1 */
	/* ../public/modellib/modelenums.h:13 */
	AttachmentHandle_t& operator=(AttachmentHandle_t* , uint8);
	const char  * GetTypeName(void); /* linkage=_ZN18AttachmentHandle_t11GetTypeNameEv */
	void AttachmentHandle_t(class AttachmentHandle_t *); /* linkage=_ZN18AttachmentHandle_tC4Ev */
	void AttachmentHandle_t(class AttachmentHandle_t *, uint8); /* linkage=_ZN18AttachmentHandle_tC4Eh */
	void SetRaw(class AttachmentHandle_t *, uint8); /* linkage=_ZN18AttachmentHandle_t6SetRawEh */
	uint8 GetRaw(const class AttachmentHandle_t  *); /* linkage=_ZNK18AttachmentHandle_t6GetRawEv */
	uint8 & GetRawRef(class AttachmentHandle_t *); /* linkage=_ZN18AttachmentHandle_t9GetRawRefEv */
	const uint8  & GetRawRef(const class AttachmentHandle_t  *); /* linkage=_ZNK18AttachmentHandle_t9GetRawRefEv */
	uint8 * GetRawPtrForWrite(class AttachmentHandle_t *); /* linkage=_ZN18AttachmentHandle_t17GetRawPtrForWriteEv */
	bool operator==(const class AttachmentHandle_t  *, const class AttachmentHandle_t  &); /* linkage=_ZNK18AttachmentHandle_teqERKS_ */
	class strong_ordering operator<=>(const class AttachmentHandle_t  *, const class AttachmentHandle_t  &); /* linkage=_ZNK18AttachmentHandle_tssERKS_ */
	class AttachmentHandle_t & operator++(class AttachmentHandle_t *); /* linkage=_ZN18AttachmentHandle_tppEv */
	class AttachmentHandle_t operator++(class AttachmentHandle_t *, int); /* linkage=_ZN18AttachmentHandle_tppEi */
	class AttachmentHandle_t & operator--(class AttachmentHandle_t *); /* linkage=_ZN18AttachmentHandle_tmmEv */
	class AttachmentHandle_t operator--(class AttachmentHandle_t *, int); /* linkage=_ZN18AttachmentHandle_tmmEi */
	class AttachmentHandle_t & operator=(class AttachmentHandle_t *, uint8); /* linkage=_ZN18AttachmentHandle_taSEh */
};

// <0118D00D> ../public/modellib/modelenums.h:49
// struct size: 1
struct AnimationStateTypeTraits_t<(AnimationStateType_t)0> {
	/* ../public/modellib/modelenums.h:49 */
	typedef struct CTransform DataType_t;
};

// <0118D033> ../public/modellib/modelenums.h:50
// struct size: 1
struct AnimationStateTypeTraits_t<(AnimationStateType_t)1> {
	/* ../public/modellib/modelenums.h:50 */
	typedef float DataType_t;
};

// <00AFF5EF> ../public/modellib/modelenums.h:51
// struct size: 1
struct AnimationStateTypeTraits_t<(AnimationStateType_t)2> {
	/* ../public/modellib/modelenums.h:51 */
	typedef void DataType_t;
};

