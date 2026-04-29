
//
// public/meshutils/modelstream.h
//
//	referenced by: libengine2.so
//
//	functions: 83
//	classes: 6
//	struct: 1
//

// <05FC0CCC> ../public/meshutils/modelstream.h:103
// member functions: 2
// member variables: 2
// struct size: 8
struct ModelMeshIntFloat_t {
	int m_intValue; /* 0 4 */
	float m_floatValue; /* 4 4 */
	/* ../public/meshutils/modelstream.h:108 */
	bool operator==(const ModelMeshIntFloat_t* , const ModelMeshIntFloat_t& );
	/* ../public/meshutils/modelstream.h:113 */
	bool operator!=(const ModelMeshIntFloat_t* , const ModelMeshIntFloat_t& );
};

// <060E1BA2> ../public/meshutils/modelstream.h:128
inline ModelStreamDataType_t GetModelStreamDataTypeForValueType<int>(void)
{
} /* size: 0 */

// <060E1B81> ../public/meshutils/modelstream.h:129
inline ModelStreamDataType_t GetModelStreamDataTypeForValueType<float>(void)
{
} /* size: 0 */

// <060E1B60> ../public/meshutils/modelstream.h:130
inline ModelStreamDataType_t GetModelStreamDataTypeForValueType<ModelMeshIntFloat_t>(void)
{
} /* size: 0 */

// <060E1B3F> ../public/meshutils/modelstream.h:131
inline ModelStreamDataType_t GetModelStreamDataTypeForValueType<Vector2D>(void)
{
} /* size: 0 */

// <05C7E125> ../public/meshutils/modelstream.h:132
inline ModelStreamDataType_t GetModelStreamDataTypeForValueType<Vector>(void)
{
} /* size: 0 */

// <060E1AFD> ../public/meshutils/modelstream.h:133
inline ModelStreamDataType_t GetModelStreamDataTypeForValueType<Vector4D>(void)
{
} /* size: 0 */

// <060E1ADC> ../public/meshutils/modelstream.h:134
inline ModelStreamDataType_t GetModelStreamDataTypeForValueType<Quaternion>(void)
{
} /* size: 0 */

// <060E1ABB> ../public/meshutils/modelstream.h:135
inline ModelStreamDataType_t GetModelStreamDataTypeForValueType<CTransform>(void)
{
} /* size: 0 */

// <05C7E101> ../public/meshutils/modelstream.h:170
inline ModelStreamDataType_t GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType)
{
} /* size: 0 */

// <05FB400A> ../public/meshutils/modelstream.h:207
inline const char* GetModelStreamTypeName(ModelStreamType_t nStreamType)
{
} /* size: 0 */

// <05FDA729> ../public/meshutils/modelstream.h:215
// variable: 1
inline ModelStreamType_t FindModelStreamTypeFromTypeName(const char* pTypeName)
{
	{
		int i; // 217
	}
} /* size: 0 */

// <060E1A72> ../public/meshutils/modelstream.h:315
inline int GetNumComponentsForModelStreamDataType(ModelStreamDataType_t nDataType)
{
} /* size: 0 */

// <05FA187A> ../public/meshutils/modelstream.h:326
inline int GetNumComponentsForModelStreamType(ModelStreamType_t nStreamType)
{
} /* size: 0 */

// <05C3ADBE> ../public/meshutils/modelstream.h:345
// member functions: 56
// member variables: 5
// class size: 80
class CModelStream {
	/* ../public/meshutils/modelstream.h:348 */
	void CModelStream(CModelStream* , const char* , ModelStreamType_t, const void* );
	/* ../public/meshutils/modelstream.h:349 */
	void CModelStream(CModelStream* , const CModelStream& );
	/* ../public/meshutils/modelstream.h:350 */
	void ~CModelStream(CModelStream* );
	/* ../public/meshutils/modelstream.h:352 */
	void SetName(CModelStream* , const char* );
	/* ../public/meshutils/modelstream.h:354 */
	int Count(const CModelStream* );
	/* ../public/meshutils/modelstream.h:355 */
	void SetCount(CModelStream* , int);
	/* ../public/meshutils/modelstream.h:356 */
	void EnsureCapacity(CModelStream* , int);
	/* ../public/meshutils/modelstream.h:358 */
	int AddToTail(CModelStream* );
	/* ../public/meshutils/modelstream.h:359 */
	void AddMultipleToTail(CModelStream* , int);
	/* ../public/meshutils/modelstream.h:360 */
	int InsertBefore(CModelStream* , int);
	/* ../public/meshutils/modelstream.h:361 */
	void RemoveAll(CModelStream* );
	/* ../public/meshutils/modelstream.h:362 */
	void Remove(CModelStream* , int);
	/* ../public/meshutils/modelstream.h:363 */
	void RemoveBySwapWithLast(CModelStream* , int);
	/* ../public/meshutils/modelstream.h:365 */
	bool CopyValuesFromStream(CModelStream* , int, const CModelStream* , const int* , int);
	/* ../public/meshutils/modelstream.h:366 */
	bool CopyValueFromStream(CModelStream* , int, const CModelStream* , int);
	/* ../public/meshutils/modelstream.h:368 */
	void SetValue(CModelStream* , int, const void* );
	/* ../public/meshutils/modelstream.h:369 */
	void SetValues(CModelStream* , int, const int* , const void* );
	/* ../public/meshutils/modelstream.h:370 */
	void SetValues(CModelStream* , int, const void* );
	/* ../public/meshutils/modelstream.h:371 */
	void GetValues(const CModelStream* , int, const int* , void* );
	/* ../public/meshutils/modelstream.h:373 */
	void WriteRawValuesToBuffer(const CModelStream* , int, uint32* & );
	/* ../public/meshutils/modelstream.h:375 */
	uint32* GetValuesBase(CModelStream* );
	/* ../public/meshutils/modelstream.h:376 */
	const uint32* GetValuesBase(const CModelStream* );
	/* ../public/meshutils/modelstream.h:377 */
	const uint32* GetDefaultValue(const CModelStream* );
	/* ../public/meshutils/modelstream.h:379 */
	const char* GetName(const CModelStream* );
	/* ../public/meshutils/modelstream.h:380 */
	const char* GetTypeName(const CModelStream* );
	/* ../public/meshutils/modelstream.h:381 */
	ModelStreamType_t GetStreamType(const CModelStream* );
	/* ../public/meshutils/modelstream.h:382 */
	ModelStreamDataType_t GetStreamDataType(const CModelStream* );
private:
	/* ../public/meshutils/modelstream.h:387 */
	CModelStream& operator=(CModelStream* , const CModelStream& );
	CUtlString m_Name; /* 0 8 */
	uint32 m_DefaultValue[8]; /* 8 32 */
	const enum ModelStreamType_t m_StreamType; /* 40 4 */
	const int m_nComponentsPerValue; /* 44 4 */
	CUtlVector<unsigned int, CUtlMemory<unsigned int, int> > m_Data; /* 48 32 */
	void CModelStream(class CModelStream *, const char  *, enum ModelStreamType_t, const void  *); /* linkage=_ZN12CModelStreamC4EPKc17ModelStreamType_tPKv */
	void CModelStream(class CModelStream *, const class CModelStream  &); /* linkage=_ZN12CModelStreamC4ERKS_ */
	void ~CModelStream(class CModelStream *); /* linkage=_ZN12CModelStreamD4Ev */
	/* <5fb4356> meshutils/modelstream.cpp:46 */
	void SetName(class CModelStream *, const char  *); /* linkage=_ZN12CModelStream7SetNameEPKc */
	/* <5fb43af> meshutils/modelstream.cpp:54 */
	int Count(const class CModelStream  *); /* linkage=_ZNK12CModelStream5CountEv */
	void SetCount(class CModelStream *, int); /* linkage=_ZN12CModelStream8SetCountEi */
	void EnsureCapacity(class CModelStream *, int); /* linkage=_ZN12CModelStream14EnsureCapacityEi */
	int AddToTail(class CModelStream *); /* linkage=_ZN12CModelStream9AddToTailEv */
	void AddMultipleToTail(class CModelStream *, int); /* linkage=_ZN12CModelStream17AddMultipleToTailEi */
	int InsertBefore(class CModelStream *, int); /* linkage=_ZN12CModelStream12InsertBeforeEi */
	void RemoveAll(class CModelStream *); /* linkage=_ZN12CModelStream9RemoveAllEv */
	void Remove(class CModelStream *, int); /* linkage=_ZN12CModelStream6RemoveEi */
	void RemoveBySwapWithLast(class CModelStream *, int); /* linkage=_ZN12CModelStream20RemoveBySwapWithLastEi */
	bool CopyValuesFromStream(class CModelStream *, int, const class CModelStream  *, const int  *, int); /* linkage=_ZN12CModelStream20CopyValuesFromStreamEiPKS_PKii */
	bool CopyValueFromStream(class CModelStream *, int, const class CModelStream  *, int); /* linkage=_ZN12CModelStream19CopyValueFromStreamEiPKS_i */
	void SetValue(class CModelStream *, int, const void  *); /* linkage=_ZN12CModelStream8SetValueEiPKv */
	void SetValues(class CModelStream *, int, const int  *, const void  *); /* linkage=_ZN12CModelStream9SetValuesEiPKiPKv */
	void SetValues(class CModelStream *, int, const void  *); /* linkage=_ZN12CModelStream9SetValuesEiPKv */
	void GetValues(const class CModelStream  *, int, const int  *, void *); /* linkage=_ZNK12CModelStream9GetValuesEiPKiPv */
	void WriteRawValuesToBuffer(const class CModelStream  *, int, uint32 * &); /* linkage=_ZNK12CModelStream22WriteRawValuesToBufferEiRPj */
	/* <5fb44ad> meshutils/modelstream.cpp:414 */
	uint32 * GetValuesBase(class CModelStream *); /* linkage=_ZN12CModelStream13GetValuesBaseEv */
	const uint32  * GetValuesBase(const class CModelStream  *); /* linkage=_ZNK12CModelStream13GetValuesBaseEv */
	const uint32  * GetDefaultValue(const class CModelStream  *); /* linkage=_ZNK12CModelStream15GetDefaultValueEv */
	const char  * GetName(const class CModelStream  *); /* linkage=_ZNK12CModelStream7GetNameEv */
	const char  * GetTypeName(const class CModelStream  *); /* linkage=_ZNK12CModelStream11GetTypeNameEv */
	enum ModelStreamType_t GetStreamType(const class CModelStream  *); /* linkage=_ZNK12CModelStream13GetStreamTypeEv */
	enum ModelStreamDataType_t GetStreamDataType(const class CModelStream  *); /* linkage=_ZNK12CModelStream17GetStreamDataTypeEv */
	class CModelStream & operator=(class CModelStream *, const class CModelStream  &); /* linkage=_ZN12CModelStreamaSERKS_ */
};

// <05FD1B4A> ../public/meshutils/modelstream.h:348
void CModelStream::CModelStream(const char* pName, ModelStreamType_t nStreamType, const void* pDefaultValue)
{
} /* size: 0 */

// <05FD1C77> ../public/meshutils/modelstream.h:349
void CModelStream::CModelStream(const CModelStream& src)
{
} /* size: 0 */

// <05FD1C0D> ../public/meshutils/modelstream.h:350
void CModelStream::~CModelStream()
{
} /* size: 0 */

// <05C3B273> ../public/meshutils/modelstream.h:404
// member functions: 36
// member variable: 1
// class size: 8
class CModelStreamReader {
	/* ../public/meshutils/modelstream.h:409 */
	void CModelStreamReader(CModelStreamReader* , CModelStream& );
	/* ../public/meshutils/modelstream.h:411 */
	int Count(const CModelStreamReader* );
	/* ../public/meshutils/modelstream.h:412 */
	const char* GetName(const CModelStreamReader* );
	/* ../public/meshutils/modelstream.h:413 */
	const char* GetTypeName(const CModelStreamReader* );
	/* ../public/meshutils/modelstream.h:414 */
	ModelStreamType_t GetStreamType(const CModelStreamReader* );
	/* ../public/meshutils/modelstream.h:415 */
	ModelStreamDataType_t GetStreamDataType(const CModelStreamReader* );
	/* ../public/meshutils/modelstream.h:436 */
	void WriteRawValuesToBuffer(const CModelStreamReader* , int, uint32* & );
	/* ../public/meshutils/modelstream.h:438 */
	const uint32* GetValuesRaw(const CModelStreamReader* , int* );
protected:
	CModelStream & m_Stream; /* 0 8 */
	/* ../public/meshutils/modelstream.h:564 */
	bool GetValues<Vector>(const CModelStreamReader* , int, const int* , Vector* );
	/* ../public/meshutils/modelstream.h:513 */
	bool GetAllValues<Vector>(const CModelStreamReader* , CUtlVector<Vector, CUtlMemory<Vector, int> >* );
	void CModelStreamReader(class CModelStreamReader *, class CModelStream &); /* linkage=_ZN18CModelStreamReaderC4ER12CModelStream */
	int Count(const class CModelStreamReader  *); /* linkage=_ZNK18CModelStreamReader5CountEv */
	const char  * GetName(const class CModelStreamReader  *); /* linkage=_ZNK18CModelStreamReader7GetNameEv */
	const char  * GetTypeName(const class CModelStreamReader  *); /* linkage=_ZNK18CModelStreamReader11GetTypeNameEv */
	enum ModelStreamType_t GetStreamType(const class CModelStreamReader  *); /* linkage=_ZNK18CModelStreamReader13GetStreamTypeEv */
	enum ModelStreamDataType_t GetStreamDataType(const class CModelStreamReader  *); /* linkage=_ZNK18CModelStreamReader17GetStreamDataTypeEv */
	void WriteRawValuesToBuffer(const class CModelStreamReader  *, int, uint32 * &); /* linkage=_ZNK18CModelStreamReader22WriteRawValuesToBufferEiRPj */
	const uint32  * GetValuesRaw(const class CModelStreamReader  *, int *); /* linkage=_ZNK18CModelStreamReader12GetValuesRawEPi */
	bool GetValues<Vector>(const class CModelStreamReader  *, int, const int  *, class Vector *); /* linkage=_ZNK18CModelStreamReader9GetValuesI6VectorEEbiPKiPT_ */
	bool GetAllValues<Vector>(const class CModelStreamReader  *, class CUtlVector<Vector, CUtlMemory<Vector, int> > *); /* linkage=_ZNK18CModelStreamReader12GetAllValuesI6VectorEEbP10CUtlVectorIT_10CUtlMemoryIS3_iEE */
	const class CTransform  & GetValue<CTransform>(const class CModelStreamReader  *, int); /* linkage=_ZNK18CModelStreamReader8GetValueI10CTransformEERKT_i */
	const class Quaternion  & GetValue<Quaternion>(const class CModelStreamReader  *, int); /* linkage=_ZNK18CModelStreamReader8GetValueI10QuaternionEERKT_i */
	const class Vector4D  & GetValue<Vector4D>(const class CModelStreamReader  *, int); /* linkage=_ZNK18CModelStreamReader8GetValueI8Vector4DEERKT_i */
	const class Vector2D  & GetValue<Vector2D>(const class CModelStreamReader  *, int); /* linkage=_ZNK18CModelStreamReader8GetValueI8Vector2DEERKT_i */
	const float  & GetValue<float>(const class CModelStreamReader  *, int); /* linkage=_ZNK18CModelStreamReader8GetValueIfEERKT_i */
	const class ModelMeshIntFloat_t  & GetValue<ModelMeshIntFloat_t>(const class CModelStreamReader  *, int); /* linkage=_ZNK18CModelStreamReader8GetValueI19ModelMeshIntFloat_tEERKT_i */
	bool GetValues<CTransform>(const class CModelStreamReader  *, int, const int  *, class CTransform *); /* linkage=_ZNK18CModelStreamReader9GetValuesI10CTransformEEbiPKiPT_ */
	bool GetValues<Quaternion>(const class CModelStreamReader  *, int, const int  *, class Quaternion *); /* linkage=_ZNK18CModelStreamReader9GetValuesI10QuaternionEEbiPKiPT_ */
	bool GetValues<Vector4D>(const class CModelStreamReader  *, int, const int  *, class Vector4D *); /* linkage=_ZNK18CModelStreamReader9GetValuesI8Vector4DEEbiPKiPT_ */
	bool GetValues<Vector2D>(const class CModelStreamReader  *, int, const int  *, class Vector2D *); /* linkage=_ZNK18CModelStreamReader9GetValuesI8Vector2DEEbiPKiPT_ */
	bool GetValues<ModelMeshIntFloat_t>(const class CModelStreamReader  *, int, const int  *, class ModelMeshIntFloat_t *); /* linkage=_ZNK18CModelStreamReader9GetValuesI19ModelMeshIntFloat_tEEbiPKiPT_ */
	bool GetValues<float>(const class CModelStreamReader  *, int, const int  *, float *); /* linkage=_ZNK18CModelStreamReader9GetValuesIfEEbiPKiPT_ */
	bool GetValues<int>(const class CModelStreamReader  *, int, const int  *, int *); /* linkage=_ZNK18CModelStreamReader9GetValuesIiEEbiPKiPT_ */
	const int  & GetValue<int>(const class CModelStreamReader  *, int); /* linkage=_ZNK18CModelStreamReader8GetValueIiEERKT_i */
	const class Vector  & GetValue<Vector>(const class CModelStreamReader  *, int); /* linkage=_ZNK18CModelStreamReader8GetValueI6VectorEERKT_i */
	const class Vector  * GetValuesBase<Vector>(const class CModelStreamReader  *); /* linkage=_ZNK18CModelStreamReader13GetValuesBaseI6VectorEEPKT_v */
};

// <05F226B6> ../public/meshutils/modelstream.h:404
// member functions: 34
// member variable: 1
// class size: 8
class CModelStreamReader {
	/* ../public/meshutils/modelstream.h:409 */
	void CModelStreamReader(CModelStreamReader* , CModelStream& );
	/* ../public/meshutils/modelstream.h:411 */
	int Count(const CModelStreamReader* );
	/* ../public/meshutils/modelstream.h:412 */
	const char* GetName(const CModelStreamReader* );
	/* ../public/meshutils/modelstream.h:413 */
	const char* GetTypeName(const CModelStreamReader* );
	/* ../public/meshutils/modelstream.h:414 */
	ModelStreamType_t GetStreamType(const CModelStreamReader* );
	/* ../public/meshutils/modelstream.h:415 */
	ModelStreamDataType_t GetStreamDataType(const CModelStreamReader* );
	/* ../public/meshutils/modelstream.h:436 */
	void WriteRawValuesToBuffer(const CModelStreamReader* , int, uint32* & );
	/* ../public/meshutils/modelstream.h:438 */
	const uint32* GetValuesRaw(const CModelStreamReader* , int* );
protected:
	CModelStream & m_Stream; /* 0 8 */
	void CModelStreamReader(class CModelStreamReader *, class CModelStream &); /* linkage=_ZN18CModelStreamReaderC4ER12CModelStream */
	int Count(const class CModelStreamReader  *); /* linkage=_ZNK18CModelStreamReader5CountEv */
	const char  * GetName(const class CModelStreamReader  *); /* linkage=_ZNK18CModelStreamReader7GetNameEv */
	const char  * GetTypeName(const class CModelStreamReader  *); /* linkage=_ZNK18CModelStreamReader11GetTypeNameEv */
	enum ModelStreamType_t GetStreamType(const class CModelStreamReader  *); /* linkage=_ZNK18CModelStreamReader13GetStreamTypeEv */
	enum ModelStreamDataType_t GetStreamDataType(const class CModelStreamReader  *); /* linkage=_ZNK18CModelStreamReader17GetStreamDataTypeEv */
	void WriteRawValuesToBuffer(const class CModelStreamReader  *, int, uint32 * &); /* linkage=_ZNK18CModelStreamReader22WriteRawValuesToBufferEiRPj */
	const uint32  * GetValuesRaw(const class CModelStreamReader  *, int *); /* linkage=_ZNK18CModelStreamReader12GetValuesRawEPi */
	bool GetValues<Vector>(const class CModelStreamReader  *, int, const int  *, class Vector *); /* linkage=_ZNK18CModelStreamReader9GetValuesI6VectorEEbiPKiPT_ */
	bool GetAllValues<Vector>(const class CModelStreamReader  *, class CUtlVector<Vector, CUtlMemory<Vector, int> > *); /* linkage=_ZNK18CModelStreamReader12GetAllValuesI6VectorEEbP10CUtlVectorIT_10CUtlMemoryIS3_iEE */
	const class CTransform  & GetValue<CTransform>(const class CModelStreamReader  *, int); /* linkage=_ZNK18CModelStreamReader8GetValueI10CTransformEERKT_i */
	const class Quaternion  & GetValue<Quaternion>(const class CModelStreamReader  *, int); /* linkage=_ZNK18CModelStreamReader8GetValueI10QuaternionEERKT_i */
	const class Vector4D  & GetValue<Vector4D>(const class CModelStreamReader  *, int); /* linkage=_ZNK18CModelStreamReader8GetValueI8Vector4DEERKT_i */
	const class Vector2D  & GetValue<Vector2D>(const class CModelStreamReader  *, int); /* linkage=_ZNK18CModelStreamReader8GetValueI8Vector2DEERKT_i */
	const float  & GetValue<float>(const class CModelStreamReader  *, int); /* linkage=_ZNK18CModelStreamReader8GetValueIfEERKT_i */
	const class ModelMeshIntFloat_t  & GetValue<ModelMeshIntFloat_t>(const class CModelStreamReader  *, int); /* linkage=_ZNK18CModelStreamReader8GetValueI19ModelMeshIntFloat_tEERKT_i */
	bool GetValues<CTransform>(const class CModelStreamReader  *, int, const int  *, class CTransform *); /* linkage=_ZNK18CModelStreamReader9GetValuesI10CTransformEEbiPKiPT_ */
	bool GetValues<Quaternion>(const class CModelStreamReader  *, int, const int  *, class Quaternion *); /* linkage=_ZNK18CModelStreamReader9GetValuesI10QuaternionEEbiPKiPT_ */
	bool GetValues<Vector4D>(const class CModelStreamReader  *, int, const int  *, class Vector4D *); /* linkage=_ZNK18CModelStreamReader9GetValuesI8Vector4DEEbiPKiPT_ */
	bool GetValues<Vector2D>(const class CModelStreamReader  *, int, const int  *, class Vector2D *); /* linkage=_ZNK18CModelStreamReader9GetValuesI8Vector2DEEbiPKiPT_ */
	bool GetValues<ModelMeshIntFloat_t>(const class CModelStreamReader  *, int, const int  *, class ModelMeshIntFloat_t *); /* linkage=_ZNK18CModelStreamReader9GetValuesI19ModelMeshIntFloat_tEEbiPKiPT_ */
	bool GetValues<float>(const class CModelStreamReader  *, int, const int  *, float *); /* linkage=_ZNK18CModelStreamReader9GetValuesIfEEbiPKiPT_ */
	bool GetValues<int>(const class CModelStreamReader  *, int, const int  *, int *); /* linkage=_ZNK18CModelStreamReader9GetValuesIiEEbiPKiPT_ */
	const int  & GetValue<int>(const class CModelStreamReader  *, int); /* linkage=_ZNK18CModelStreamReader8GetValueIiEERKT_i */
	const class Vector  & GetValue<Vector>(const class CModelStreamReader  *, int); /* linkage=_ZNK18CModelStreamReader8GetValueI6VectorEERKT_i */
	const class Vector  * GetValuesBase<Vector>(const class CModelStreamReader  *); /* linkage=_ZNK18CModelStreamReader13GetValuesBaseI6VectorEEPKT_v */
};

// <05FEAAD0> ../public/meshutils/modelstream.h:404
// member functions: 52
// member variable: 1
// class size: 8
class CModelStreamReader {
	/* ../public/meshutils/modelstream.h:409 */
	void CModelStreamReader(CModelStreamReader* , CModelStream& );
	/* ../public/meshutils/modelstream.h:411 */
	int Count(const CModelStreamReader* );
	/* ../public/meshutils/modelstream.h:412 */
	const char* GetName(const CModelStreamReader* );
	/* ../public/meshutils/modelstream.h:413 */
	const char* GetTypeName(const CModelStreamReader* );
	/* ../public/meshutils/modelstream.h:414 */
	ModelStreamType_t GetStreamType(const CModelStreamReader* );
	/* ../public/meshutils/modelstream.h:415 */
	ModelStreamDataType_t GetStreamDataType(const CModelStreamReader* );
	/* ../public/meshutils/modelstream.h:436 */
	void WriteRawValuesToBuffer(const CModelStreamReader* , int, uint32* & );
	/* ../public/meshutils/modelstream.h:438 */
	const uint32* GetValuesRaw(const CModelStreamReader* , int* );
protected:
	CModelStream & m_Stream; /* 0 8 */
	/* ../public/meshutils/modelstream.h:531 */
	const CTransform& GetValue<CTransform>(const CModelStreamReader* , int);
	/* ../public/meshutils/modelstream.h:531 */
	const Quaternion& GetValue<Quaternion>(const CModelStreamReader* , int);
	/* ../public/meshutils/modelstream.h:531 */
	const Vector4D& GetValue<Vector4D>(const CModelStreamReader* , int);
	/* ../public/meshutils/modelstream.h:531 */
	const Vector2D& GetValue<Vector2D>(const CModelStreamReader* , int);
	/* ../public/meshutils/modelstream.h:531 */
	const float& GetValue<float>(const CModelStreamReader* , int);
	/* ../public/meshutils/modelstream.h:531 */
	const ModelMeshIntFloat_t& GetValue<ModelMeshIntFloat_t>(const CModelStreamReader* , int);
	/* ../public/meshutils/modelstream.h:564 */
	bool GetValues<CTransform>(const CModelStreamReader* , int, const int* , CTransform* );
	/* ../public/meshutils/modelstream.h:564 */
	bool GetValues<Quaternion>(const CModelStreamReader* , int, const int* , Quaternion* );
	/* ../public/meshutils/modelstream.h:564 */
	bool GetValues<Vector4D>(const CModelStreamReader* , int, const int* , Vector4D* );
	/* ../public/meshutils/modelstream.h:564 */
	bool GetValues<Vector2D>(const CModelStreamReader* , int, const int* , Vector2D* );
	/* ../public/meshutils/modelstream.h:564 */
	bool GetValues<ModelMeshIntFloat_t>(const CModelStreamReader* , int, const int* , ModelMeshIntFloat_t* );
	/* ../public/meshutils/modelstream.h:564 */
	bool GetValues<float>(const CModelStreamReader* , int, const int* , float* );
	/* ../public/meshutils/modelstream.h:564 */
	bool GetValues<int>(const CModelStreamReader* , int, const int* , int* );
	/* ../public/meshutils/modelstream.h:564 */
	bool GetValues<Vector>(const CModelStreamReader* , int, const int* , Vector* );
	/* ../public/meshutils/modelstream.h:531 */
	const int& GetValue<int>(const CModelStreamReader* , int);
	/* ../public/meshutils/modelstream.h:531 */
	const Vector& GetValue<Vector>(const CModelStreamReader* , int);
	/* ../public/meshutils/modelstream.h:496 */
	const Vector* GetValuesBase<Vector>(const CModelStreamReader* );
	/* ../public/meshutils/modelstream.h:513 */
	bool GetAllValues<Vector>(const CModelStreamReader* , CUtlVector<Vector, CUtlMemory<Vector, int> >* );
	void CModelStreamReader(class CModelStreamReader *, class CModelStream &); /* linkage=_ZN18CModelStreamReaderC4ER12CModelStream */
	int Count(const class CModelStreamReader  *); /* linkage=_ZNK18CModelStreamReader5CountEv */
	const char  * GetName(const class CModelStreamReader  *); /* linkage=_ZNK18CModelStreamReader7GetNameEv */
	const char  * GetTypeName(const class CModelStreamReader  *); /* linkage=_ZNK18CModelStreamReader11GetTypeNameEv */
	enum ModelStreamType_t GetStreamType(const class CModelStreamReader  *); /* linkage=_ZNK18CModelStreamReader13GetStreamTypeEv */
	enum ModelStreamDataType_t GetStreamDataType(const class CModelStreamReader  *); /* linkage=_ZNK18CModelStreamReader17GetStreamDataTypeEv */
	void WriteRawValuesToBuffer(const class CModelStreamReader  *, int, uint32 * &); /* linkage=_ZNK18CModelStreamReader22WriteRawValuesToBufferEiRPj */
	const uint32  * GetValuesRaw(const class CModelStreamReader  *, int *); /* linkage=_ZNK18CModelStreamReader12GetValuesRawEPi */
	bool GetValues<Vector>(const class CModelStreamReader  *, int, const int  *, class Vector *); /* linkage=_ZNK18CModelStreamReader9GetValuesI6VectorEEbiPKiPT_ */
	bool GetAllValues<Vector>(const class CModelStreamReader  *, class CUtlVector<Vector, CUtlMemory<Vector, int> > *); /* linkage=_ZNK18CModelStreamReader12GetAllValuesI6VectorEEbP10CUtlVectorIT_10CUtlMemoryIS3_iEE */
	const class CTransform  & GetValue<CTransform>(const class CModelStreamReader  *, int); /* linkage=_ZNK18CModelStreamReader8GetValueI10CTransformEERKT_i */
	const class Quaternion  & GetValue<Quaternion>(const class CModelStreamReader  *, int); /* linkage=_ZNK18CModelStreamReader8GetValueI10QuaternionEERKT_i */
	const class Vector4D  & GetValue<Vector4D>(const class CModelStreamReader  *, int); /* linkage=_ZNK18CModelStreamReader8GetValueI8Vector4DEERKT_i */
	const class Vector2D  & GetValue<Vector2D>(const class CModelStreamReader  *, int); /* linkage=_ZNK18CModelStreamReader8GetValueI8Vector2DEERKT_i */
	const float  & GetValue<float>(const class CModelStreamReader  *, int); /* linkage=_ZNK18CModelStreamReader8GetValueIfEERKT_i */
	const class ModelMeshIntFloat_t  & GetValue<ModelMeshIntFloat_t>(const class CModelStreamReader  *, int); /* linkage=_ZNK18CModelStreamReader8GetValueI19ModelMeshIntFloat_tEERKT_i */
	bool GetValues<CTransform>(const class CModelStreamReader  *, int, const int  *, class CTransform *); /* linkage=_ZNK18CModelStreamReader9GetValuesI10CTransformEEbiPKiPT_ */
	bool GetValues<Quaternion>(const class CModelStreamReader  *, int, const int  *, class Quaternion *); /* linkage=_ZNK18CModelStreamReader9GetValuesI10QuaternionEEbiPKiPT_ */
	bool GetValues<Vector4D>(const class CModelStreamReader  *, int, const int  *, class Vector4D *); /* linkage=_ZNK18CModelStreamReader9GetValuesI8Vector4DEEbiPKiPT_ */
	bool GetValues<Vector2D>(const class CModelStreamReader  *, int, const int  *, class Vector2D *); /* linkage=_ZNK18CModelStreamReader9GetValuesI8Vector2DEEbiPKiPT_ */
	bool GetValues<ModelMeshIntFloat_t>(const class CModelStreamReader  *, int, const int  *, class ModelMeshIntFloat_t *); /* linkage=_ZNK18CModelStreamReader9GetValuesI19ModelMeshIntFloat_tEEbiPKiPT_ */
	bool GetValues<float>(const class CModelStreamReader  *, int, const int  *, float *); /* linkage=_ZNK18CModelStreamReader9GetValuesIfEEbiPKiPT_ */
	bool GetValues<int>(const class CModelStreamReader  *, int, const int  *, int *); /* linkage=_ZNK18CModelStreamReader9GetValuesIiEEbiPKiPT_ */
	const int  & GetValue<int>(const class CModelStreamReader  *, int); /* linkage=_ZNK18CModelStreamReader8GetValueIiEERKT_i */
	const class Vector  & GetValue<Vector>(const class CModelStreamReader  *, int); /* linkage=_ZNK18CModelStreamReader8GetValueI6VectorEERKT_i */
	const class Vector  * GetValuesBase<Vector>(const class CModelStreamReader  *); /* linkage=_ZNK18CModelStreamReader13GetValuesBaseI6VectorEEPKT_v */
};

// <061A0820> ../public/meshutils/modelstream.h:404
// member functions: 36
// member variable: 1
// class size: 8
class CModelStreamReader {
	/* ../public/meshutils/modelstream.h:409 */
	void CModelStreamReader(CModelStreamReader* , CModelStream& );
	/* ../public/meshutils/modelstream.h:411 */
	int Count(const CModelStreamReader* );
	/* ../public/meshutils/modelstream.h:412 */
	const char* GetName(const CModelStreamReader* );
	/* ../public/meshutils/modelstream.h:413 */
	const char* GetTypeName(const CModelStreamReader* );
	/* ../public/meshutils/modelstream.h:414 */
	ModelStreamType_t GetStreamType(const CModelStreamReader* );
	/* ../public/meshutils/modelstream.h:415 */
	ModelStreamDataType_t GetStreamDataType(const CModelStreamReader* );
	/* ../public/meshutils/modelstream.h:436 */
	void WriteRawValuesToBuffer(const CModelStreamReader* , int, uint32* & );
	/* ../public/meshutils/modelstream.h:438 */
	const uint32* GetValuesRaw(const CModelStreamReader* , int* );
protected:
	CModelStream & m_Stream; /* 0 8 */
	/* ../public/meshutils/modelstream.h:564 */
	bool GetValues<Vector2D>(const CModelStreamReader* , int, const int* , Vector2D* );
	/* ../public/meshutils/modelstream.h:564 */
	bool GetValues<Vector>(const CModelStreamReader* , int, const int* , Vector* );
	void CModelStreamReader(class CModelStreamReader *, class CModelStream &); /* linkage=_ZN18CModelStreamReaderC4ER12CModelStream */
	int Count(const class CModelStreamReader  *); /* linkage=_ZNK18CModelStreamReader5CountEv */
	const char  * GetName(const class CModelStreamReader  *); /* linkage=_ZNK18CModelStreamReader7GetNameEv */
	const char  * GetTypeName(const class CModelStreamReader  *); /* linkage=_ZNK18CModelStreamReader11GetTypeNameEv */
	enum ModelStreamType_t GetStreamType(const class CModelStreamReader  *); /* linkage=_ZNK18CModelStreamReader13GetStreamTypeEv */
	enum ModelStreamDataType_t GetStreamDataType(const class CModelStreamReader  *); /* linkage=_ZNK18CModelStreamReader17GetStreamDataTypeEv */
	void WriteRawValuesToBuffer(const class CModelStreamReader  *, int, uint32 * &); /* linkage=_ZNK18CModelStreamReader22WriteRawValuesToBufferEiRPj */
	const uint32  * GetValuesRaw(const class CModelStreamReader  *, int *); /* linkage=_ZNK18CModelStreamReader12GetValuesRawEPi */
	bool GetValues<Vector>(const class CModelStreamReader  *, int, const int  *, class Vector *); /* linkage=_ZNK18CModelStreamReader9GetValuesI6VectorEEbiPKiPT_ */
	bool GetAllValues<Vector>(const class CModelStreamReader  *, class CUtlVector<Vector, CUtlMemory<Vector, int> > *); /* linkage=_ZNK18CModelStreamReader12GetAllValuesI6VectorEEbP10CUtlVectorIT_10CUtlMemoryIS3_iEE */
	const class CTransform  & GetValue<CTransform>(const class CModelStreamReader  *, int); /* linkage=_ZNK18CModelStreamReader8GetValueI10CTransformEERKT_i */
	const class Quaternion  & GetValue<Quaternion>(const class CModelStreamReader  *, int); /* linkage=_ZNK18CModelStreamReader8GetValueI10QuaternionEERKT_i */
	const class Vector4D  & GetValue<Vector4D>(const class CModelStreamReader  *, int); /* linkage=_ZNK18CModelStreamReader8GetValueI8Vector4DEERKT_i */
	const class Vector2D  & GetValue<Vector2D>(const class CModelStreamReader  *, int); /* linkage=_ZNK18CModelStreamReader8GetValueI8Vector2DEERKT_i */
	const float  & GetValue<float>(const class CModelStreamReader  *, int); /* linkage=_ZNK18CModelStreamReader8GetValueIfEERKT_i */
	const class ModelMeshIntFloat_t  & GetValue<ModelMeshIntFloat_t>(const class CModelStreamReader  *, int); /* linkage=_ZNK18CModelStreamReader8GetValueI19ModelMeshIntFloat_tEERKT_i */
	bool GetValues<CTransform>(const class CModelStreamReader  *, int, const int  *, class CTransform *); /* linkage=_ZNK18CModelStreamReader9GetValuesI10CTransformEEbiPKiPT_ */
	bool GetValues<Quaternion>(const class CModelStreamReader  *, int, const int  *, class Quaternion *); /* linkage=_ZNK18CModelStreamReader9GetValuesI10QuaternionEEbiPKiPT_ */
	bool GetValues<Vector4D>(const class CModelStreamReader  *, int, const int  *, class Vector4D *); /* linkage=_ZNK18CModelStreamReader9GetValuesI8Vector4DEEbiPKiPT_ */
	bool GetValues<Vector2D>(const class CModelStreamReader  *, int, const int  *, class Vector2D *); /* linkage=_ZNK18CModelStreamReader9GetValuesI8Vector2DEEbiPKiPT_ */
	bool GetValues<ModelMeshIntFloat_t>(const class CModelStreamReader  *, int, const int  *, class ModelMeshIntFloat_t *); /* linkage=_ZNK18CModelStreamReader9GetValuesI19ModelMeshIntFloat_tEEbiPKiPT_ */
	bool GetValues<float>(const class CModelStreamReader  *, int, const int  *, float *); /* linkage=_ZNK18CModelStreamReader9GetValuesIfEEbiPKiPT_ */
	bool GetValues<int>(const class CModelStreamReader  *, int, const int  *, int *); /* linkage=_ZNK18CModelStreamReader9GetValuesIiEEbiPKiPT_ */
	const int  & GetValue<int>(const class CModelStreamReader  *, int); /* linkage=_ZNK18CModelStreamReader8GetValueIiEERKT_i */
	const class Vector  & GetValue<Vector>(const class CModelStreamReader  *, int); /* linkage=_ZNK18CModelStreamReader8GetValueI6VectorEERKT_i */
	const class Vector  * GetValuesBase<Vector>(const class CModelStreamReader  *); /* linkage=_ZNK18CModelStreamReader13GetValuesBaseI6VectorEEPKT_v */
};

// <05FDA70D> ../public/meshutils/modelstream.h:409
void CModelStreamReader::CModelStreamReader(CModelStream& stream)
{
} /* size: 0 */

// <05FDA6E7> ../public/meshutils/modelstream.h:409
inline void CModelStreamReader::CModelStreamReader(CModelStream& stream)
{
} /* size: 0 */

// <060E1A59> ../public/meshutils/modelstream.h:411
inline void CModelStreamReader::Count()
{
} /* size: 0 */

// <05FA1861> ../public/meshutils/modelstream.h:412
inline void CModelStreamReader::GetName()
{
} /* size: 0 */

// <05FA1848> ../public/meshutils/modelstream.h:413
inline void CModelStreamReader::GetTypeName()
{
} /* size: 0 */

// <061D5FD3> ../public/meshutils/modelstream.h:414
inline void CModelStreamReader::GetStreamType()
{
} /* size: 0 */

// <060E1A27> ../public/meshutils/modelstream.h:415
inline void CModelStreamReader::GetStreamDataType()
{
} /* size: 0 */

// <05C3B42B> ../public/meshutils/modelstream.h:451
// member functions: 22
// member variable: 1
// class size: 8
class CModelStreamAccessor : public CModelStreamReader {
public:
	/* class CModelStreamReader <ancestor>; */ /* 0 8 */
	/* ../public/meshutils/modelstream.h:455 */
	void CModelStreamAccessor(CModelStreamAccessor* , CModelStream& );
	/* ../public/meshutils/modelstream.h:478 */
	void CopyValueFromStream(CModelStreamAccessor* , int, const CModelStreamReader& , int);
	void CModelStreamAccessor(class CModelStreamAccessor *, class CModelStream &); /* linkage=_ZN20CModelStreamAccessorC4ER12CModelStream */
	void CopyValueFromStream(class CModelStreamAccessor *, int, const class CModelStreamReader  &, int); /* linkage=_ZN20CModelStreamAccessor19CopyValueFromStreamEiRK18CModelStreamReaderi */
	bool SetValues<CTransform>(class CModelStreamAccessor *, int, const int  *, const class CTransform  *); /* linkage=_ZN20CModelStreamAccessor9SetValuesI10CTransformEEbiPKiPKT_ */
	bool SetValues<Quaternion>(class CModelStreamAccessor *, int, const int  *, const class Quaternion  *); /* linkage=_ZN20CModelStreamAccessor9SetValuesI10QuaternionEEbiPKiPKT_ */
	bool SetValues<Vector4D>(class CModelStreamAccessor *, int, const int  *, const class Vector4D  *); /* linkage=_ZN20CModelStreamAccessor9SetValuesI8Vector4DEEbiPKiPKT_ */
	bool SetValues<Vector>(class CModelStreamAccessor *, int, const int  *, const class Vector  *); /* linkage=_ZN20CModelStreamAccessor9SetValuesI6VectorEEbiPKiPKT_ */
	bool SetValues<Vector2D>(class CModelStreamAccessor *, int, const int  *, const class Vector2D  *); /* linkage=_ZN20CModelStreamAccessor9SetValuesI8Vector2DEEbiPKiPKT_ */
	bool SetValues<float>(class CModelStreamAccessor *, int, const int  *, const float  *); /* linkage=_ZN20CModelStreamAccessor9SetValuesIfEEbiPKiPKT_ */
	bool SetValues<int>(class CModelStreamAccessor *, int, const int  *, const int  *); /* linkage=_ZN20CModelStreamAccessor9SetValuesIiEEbiPKiPKT_ */
	bool SetValues<ModelMeshIntFloat_t>(class CModelStreamAccessor *, int, const int  *, const class ModelMeshIntFloat_t  *); /* linkage=_ZN20CModelStreamAccessor9SetValuesI19ModelMeshIntFloat_tEEbiPKiPKT_ */
	bool SetValue<CTransform>(class CModelStreamAccessor *, int, const class CTransform  &); /* linkage=_ZN20CModelStreamAccessor8SetValueI10CTransformEEbiRKT_ */
	bool SetValue<Quaternion>(class CModelStreamAccessor *, int, const class Quaternion  &); /* linkage=_ZN20CModelStreamAccessor8SetValueI10QuaternionEEbiRKT_ */
	bool SetValue<Vector4D>(class CModelStreamAccessor *, int, const class Vector4D  &); /* linkage=_ZN20CModelStreamAccessor8SetValueI8Vector4DEEbiRKT_ */
	bool SetValue<Vector2D>(class CModelStreamAccessor *, int, const class Vector2D  &); /* linkage=_ZN20CModelStreamAccessor8SetValueI8Vector2DEEbiRKT_ */
	bool SetValue<ModelMeshIntFloat_t>(class CModelStreamAccessor *, int, const class ModelMeshIntFloat_t  &); /* linkage=_ZN20CModelStreamAccessor8SetValueI19ModelMeshIntFloat_tEEbiRKT_ */
	bool SetValue<float>(class CModelStreamAccessor *, int, const float  &); /* linkage=_ZN20CModelStreamAccessor8SetValueIfEEbiRKT_ */
	bool SetValue<int>(class CModelStreamAccessor *, int, const int  &); /* linkage=_ZN20CModelStreamAccessor8SetValueIiEEbiRKT_ */
	bool SetValue<Vector>(class CModelStreamAccessor *, int, const class Vector  &); /* linkage=_ZN20CModelStreamAccessor8SetValueI6VectorEEbiRKT_ */
	class Vector4D * GetValuesBase<Vector4D>(class CModelStreamAccessor *); /* linkage=_ZN20CModelStreamAccessor13GetValuesBaseI8Vector4DEEPT_v */
	class Vector * GetValuesBase<Vector>(class CModelStreamAccessor *); /* linkage=_ZN20CModelStreamAccessor13GetValuesBaseI6VectorEEPT_v */
};

// <05FDA6CB> ../public/meshutils/modelstream.h:455
void CModelStreamAccessor::CModelStreamAccessor(CModelStream& stream)
{
} /* size: 0 */

// <05FDA6A5> ../public/meshutils/modelstream.h:455
inline void CModelStreamAccessor::CModelStreamAccessor(CModelStream& stream)
{
} /* size: 0 */

// <060E2C89> ../public/meshutils/modelstream.h:496
// variables: 3
void CModelStreamReader::GetValuesBase<Vector>()
{
	ModelStreamDataType_t nValueDataType; // 498
	ModelStreamDataType_t nStreamDataType; // 499
	const uint32* pRawValues; // 505
	{
	}
} /* size: 0, variables: 3 */

// <06094ADD> ../public/meshutils/modelstream.h:496
// variables: 5
void CModelStreamReader::GetValuesBase<Vector>()
{
	const char   __FUNCTION__; // 11974
	ModelStreamDataType_t nValueDataType; // 498
	ModelStreamDataType_t nStreamDataType; // 499
	const uint32* pRawValues; // 505
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 501
	}
} /* size: 0, variables: 4 */

// <06094CD8> ../public/meshutils/modelstream.h:513
// variables: 3
void CModelStreamReader::GetAllValues<Vector>(CUtlVector<Vector, CUtlMemory<Vector, int> >* pOutValues)
{
	ModelStreamDataType_t nValueDataType; // 515
	ModelStreamDataType_t nStreamDataType; // 516
	const uint32* pRawValues; // 521
} /* size: 0, variables: 3 */

// <05C7E968> ../public/meshutils/modelstream.h:513
// variables: 4
// function calls: 15
void CModelStreamReader::GetAllValues<Vector>(CUtlVector<Vector, CUtlMemory<Vector, int> >* pOutValues)
{
	ModelStreamDataType_t nValueDataType; // 515
	ModelStreamDataType_t nStreamDataType; // 516
	const uint32* pRawValues; // 521
	CModelStreamReader::GetStreamType(); // 516
	GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 516
	CUtlMemory<Vector, int>::NumAllocated(); // 782
	CUtlMemory<Vector, int>::Base(); // 112
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Base(); // 368
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::ResetDbgInfo(); // 824
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowMemory(
			int num);  // 784
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::GrowVector(
			int num);  // 1484
	{
		int i; // 1500
		CUtlMemory<Vector, int>::operator[](
				int i);  // 602
		CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::Element(
			int i);  // 1502
		CopyConstruct<Vector>(Vector* pMemory,
					const Vector& src);  // 1502
	}
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::InsertMultipleBefore(
				int elem,
				int num,
				const Vector* pToInsert);  // 1476
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::InsertMultipleBefore(
				int elem,
				int num,
				const Vector* pToInsert);  // 1303
	CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::AddMultipleToTail(
				int num,
				const Vector* pToCopy);  // 522
	CModelStreamReader::GetAllValues<Vector>(
				CUtlVector<Vector, CUtlMemory<Vector, int> >* pOutValues);  // 513
} /* size: 0, variables: 3, inline expansions: 12 (0 bytes) */

// <06091A75> ../public/meshutils/modelstream.h:531
// variables: 8
// function calls: 3
void CModelStreamReader::GetValue<Vector>(int nValueIndex)
{
	const char   __FUNCTION__; // 11844
	const byte   s_defaultValueBuf; // 534
	const Vector* pDefaultValue; // 539
	ModelStreamDataType_t nValueDataType; // 544
	ModelStreamDataType_t nStreamDataType; // 545
	const uint32* pRawValuesBase; // 554
	const Vector* pValuesBase; // 555
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 547
	}
	CModelStreamReader::GetStreamType(); // 545
	GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 545
	CModelStreamReader::Count(); // 551
} /* size: 0, variables: 7, inline expansions: 3 (0 bytes) */

// <0609184A> ../public/meshutils/modelstream.h:531
// variables: 8
// function calls: 3
void CModelStreamReader::GetValue<int>(int nValueIndex)
{
	const char   __FUNCTION__; // 11844
	const byte   s_defaultValueBuf; // 534
	const int* pDefaultValue; // 539
	ModelStreamDataType_t nValueDataType; // 544
	ModelStreamDataType_t nStreamDataType; // 545
	const uint32* pRawValuesBase; // 554
	const int* pValuesBase; // 555
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 547
	}
	CModelStreamReader::GetStreamType(); // 545
	GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 545
	CModelStreamReader::Count(); // 551
} /* size: 0, variables: 7, inline expansions: 3 (0 bytes) */

// <06081A42> ../public/meshutils/modelstream.h:531
// variables: 8
// function calls: 3
void CModelStreamReader::GetValue<ModelMeshIntFloat_t>(int nValueIndex)
{
	const char   __FUNCTION__; // 11844
	const byte   s_defaultValueBuf; // 534
	const ModelMeshIntFloat_t* pDefaultValue; // 539
	ModelStreamDataType_t nValueDataType; // 544
	ModelStreamDataType_t nStreamDataType; // 545
	const uint32* pRawValuesBase; // 554
	const ModelMeshIntFloat_t* pValuesBase; // 555
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 547
	}
	CModelStreamReader::GetStreamType(); // 545
	GetModelStreamDataTypeForStreamType(ModelStreamType_t nStreamType); // 545
	CModelStreamReader::Count(); // 551
} /* size: 0, variables: 7, inline expansions: 3 (0 bytes) */

// <060813E8> ../public/meshutils/modelstream.h:531
// variables: 8
void CModelStreamReader::GetValue<float>(int nValueIndex)
{
	const char   __FUNCTION__; // 11844
	const byte   s_defaultValueBuf; // 534
	const float* pDefaultValue; // 539
	ModelStreamDataType_t nValueDataType; // 544
	ModelStreamDataType_t nStreamDataType; // 545
	const uint32* pRawValuesBase; // 554
	const float* pValuesBase; // 555
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 547
	}
} /* size: 0, variables: 7 */

// <0608130F> ../public/meshutils/modelstream.h:531
// variables: 8
void CModelStreamReader::GetValue<Vector2D>(int nValueIndex)
{
	const char   __FUNCTION__; // 11844
	const byte   s_defaultValueBuf; // 534
	const Vector2D* pDefaultValue; // 539
	ModelStreamDataType_t nValueDataType; // 544
	ModelStreamDataType_t nStreamDataType; // 545
	const uint32* pRawValuesBase; // 554
	const Vector2D* pValuesBase; // 555
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 547
	}
} /* size: 0, variables: 7 */

// <0608124B> ../public/meshutils/modelstream.h:531
// variables: 8
void CModelStreamReader::GetValue<Vector4D>(int nValueIndex)
{
	const char   __FUNCTION__; // 11844
	const byte   s_defaultValueBuf; // 534
	const Vector4D* pDefaultValue; // 539
	ModelStreamDataType_t nValueDataType; // 544
	ModelStreamDataType_t nStreamDataType; // 545
	const uint32* pRawValuesBase; // 554
	const Vector4D* pValuesBase; // 555
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 547
	}
} /* size: 0, variables: 7 */

// <0608117B> ../public/meshutils/modelstream.h:531
// variables: 8
void CModelStreamReader::GetValue<Quaternion>(int nValueIndex)
{
	const char   __FUNCTION__; // 11844
	const byte   s_defaultValueBuf; // 534
	const Quaternion* pDefaultValue; // 539
	ModelStreamDataType_t nValueDataType; // 544
	ModelStreamDataType_t nStreamDataType; // 545
	const uint32* pRawValuesBase; // 554
	const Quaternion* pValuesBase; // 555
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 547
	}
} /* size: 0, variables: 7 */

// <060810AB> ../public/meshutils/modelstream.h:531
// variables: 8
void CModelStreamReader::GetValue<CTransform>(int nValueIndex)
{
	const char   __FUNCTION__; // 11844
	const byte   s_defaultValueBuf; // 534
	const CTransform* pDefaultValue; // 539
	ModelStreamDataType_t nValueDataType; // 544
	ModelStreamDataType_t nStreamDataType; // 545
	const uint32* pRawValuesBase; // 554
	const CTransform* pValuesBase; // 555
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 547
	}
} /* size: 0, variables: 7 */

// <061D6309> ../public/meshutils/modelstream.h:564
// variables: 2
// function calls: 2
void Vector::GetValues<Vector>()
{
	ModelStreamDataType_t nValueDataType; // 566
	ModelStreamDataType_t nStreamDataType; // 567
	{
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 67
	V_memset(void* dest,
		int fill,
		size_t count);  // 572
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <061D284E> ../public/meshutils/modelstream.h:564
// variables: 4
void CModelStreamReader::GetValues<Vector>(int nNumValues, const int* pValueIndices, Vector* pOutValues)
{
	const char   __FUNCTION__; // 28159
	ModelStreamDataType_t nValueDataType; // 566
	ModelStreamDataType_t nStreamDataType; // 567
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 569
	}
} /* size: 0, variables: 3 */

// <061D2783> ../public/meshutils/modelstream.h:564
// variables: 4
void CModelStreamReader::GetValues<Vector2D>(int nNumValues, const int* pValueIndices, Vector2D* pOutValues)
{
	const char   __FUNCTION__; // 28159
	ModelStreamDataType_t nValueDataType; // 566
	ModelStreamDataType_t nStreamDataType; // 567
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 569
	}
} /* size: 0, variables: 3 */

// <060E4840> ../public/meshutils/modelstream.h:564
// variables: 2
void CTransform::GetValues<CTransform>()
{
	ModelStreamDataType_t nValueDataType; // 566
	ModelStreamDataType_t nStreamDataType; // 567
	{
	}
} /* size: 0, variables: 2 */

// <060E4784> ../public/meshutils/modelstream.h:564
// variables: 2
void Quaternion::GetValues<Quaternion>()
{
	ModelStreamDataType_t nValueDataType; // 566
	ModelStreamDataType_t nStreamDataType; // 567
	{
	}
} /* size: 0, variables: 2 */

// <060E46C8> ../public/meshutils/modelstream.h:564
// variables: 2
void Vector4D::GetValues<Vector4D>()
{
	ModelStreamDataType_t nValueDataType; // 566
	ModelStreamDataType_t nStreamDataType; // 567
	{
	}
} /* size: 0, variables: 2 */

// <060E460C> ../public/meshutils/modelstream.h:564
// variables: 2
void Vector2D::GetValues<Vector2D>()
{
	ModelStreamDataType_t nValueDataType; // 566
	ModelStreamDataType_t nStreamDataType; // 567
	{
	}
} /* size: 0, variables: 2 */

// <060E4550> ../public/meshutils/modelstream.h:564
// variables: 2
void ModelMeshIntFloat_t::GetValues<ModelMeshIntFloat_t>()
{
	ModelStreamDataType_t nValueDataType; // 566
	ModelStreamDataType_t nStreamDataType; // 567
	{
	}
} /* size: 0, variables: 2 */

// <060E4494> ../public/meshutils/modelstream.h:564
// variables: 2
void CModelStreamReader::GetValues<float>()
{
	ModelStreamDataType_t nValueDataType; // 566
	ModelStreamDataType_t nStreamDataType; // 567
	{
	}
} /* size: 0, variables: 2 */

// <060E43D8> ../public/meshutils/modelstream.h:564
// variables: 2
void CModelStreamReader::GetValues<int>()
{
	ModelStreamDataType_t nValueDataType; // 566
	ModelStreamDataType_t nStreamDataType; // 567
	{
	}
} /* size: 0, variables: 2 */

// <060E431C> ../public/meshutils/modelstream.h:564
// variables: 2
void Vector::GetValues<Vector>()
{
	ModelStreamDataType_t nValueDataType; // 566
	ModelStreamDataType_t nStreamDataType; // 567
	{
	}
} /* size: 0, variables: 2 */

// <06088BF8> ../public/meshutils/modelstream.h:564
// variables: 4
void CModelStreamReader::GetValues<Vector>(int nNumValues, const int* pValueIndices, Vector* pOutValues)
{
	const char   __FUNCTION__; // 11871
	ModelStreamDataType_t nValueDataType; // 566
	ModelStreamDataType_t nStreamDataType; // 567
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 569
	}
} /* size: 0, variables: 3 */

// <06084492> ../public/meshutils/modelstream.h:564
// variables: 4
void CModelStreamReader::GetValues<int>(int nNumValues, const int* pValueIndices, int* pOutValues)
{
	const char   __FUNCTION__; // 11871
	ModelStreamDataType_t nValueDataType; // 566
	ModelStreamDataType_t nStreamDataType; // 567
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 569
	}
} /* size: 0, variables: 3 */

// <060840F4> ../public/meshutils/modelstream.h:564
// variables: 4
void CModelStreamReader::GetValues<float>(int nNumValues, const int* pValueIndices, float* pOutValues)
{
	const char   __FUNCTION__; // 11871
	ModelStreamDataType_t nValueDataType; // 566
	ModelStreamDataType_t nStreamDataType; // 567
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 569
	}
} /* size: 0, variables: 3 */

// <06083BC6> ../public/meshutils/modelstream.h:564
// variables: 4
void CModelStreamReader::GetValues<ModelMeshIntFloat_t>(int nNumValues, const int* pValueIndices, ModelMeshIntFloat_t* pOutValues)
{
	const char   __FUNCTION__; // 11871
	ModelStreamDataType_t nValueDataType; // 566
	ModelStreamDataType_t nStreamDataType; // 567
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 569
	}
} /* size: 0, variables: 3 */

// <060836D4> ../public/meshutils/modelstream.h:564
// variables: 4
void CModelStreamReader::GetValues<Vector2D>(int nNumValues, const int* pValueIndices, Vector2D* pOutValues)
{
	const char   __FUNCTION__; // 11871
	ModelStreamDataType_t nValueDataType; // 566
	ModelStreamDataType_t nStreamDataType; // 567
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 569
	}
} /* size: 0, variables: 3 */

// <06083193> ../public/meshutils/modelstream.h:564
// variables: 4
void CModelStreamReader::GetValues<Vector4D>(int nNumValues, const int* pValueIndices, Vector4D* pOutValues)
{
	const char   __FUNCTION__; // 11871
	ModelStreamDataType_t nValueDataType; // 566
	ModelStreamDataType_t nStreamDataType; // 567
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 569
	}
} /* size: 0, variables: 3 */

// <06082D33> ../public/meshutils/modelstream.h:564
// variables: 4
void CModelStreamReader::GetValues<Quaternion>(int nNumValues, const int* pValueIndices, Quaternion* pOutValues)
{
	const char   __FUNCTION__; // 11871
	ModelStreamDataType_t nValueDataType; // 566
	ModelStreamDataType_t nStreamDataType; // 567
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 569
	}
} /* size: 0, variables: 3 */

// <060827F1> ../public/meshutils/modelstream.h:564
// variables: 4
void CModelStreamReader::GetValues<CTransform>(int nNumValues, const int* pValueIndices, CTransform* pOutValues)
{
	const char   __FUNCTION__; // 11871
	ModelStreamDataType_t nValueDataType; // 566
	ModelStreamDataType_t nStreamDataType; // 567
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 569
	}
} /* size: 0, variables: 3 */

// <05C77B94> ../public/meshutils/modelstream.h:564
// variables: 4
void CModelStreamReader::GetValues<Vector>(int nNumValues, const int* pValueIndices, Vector* pOutValues)
{
	const char   __FUNCTION__; // 11137
	ModelStreamDataType_t nValueDataType; // 566
	ModelStreamDataType_t nStreamDataType; // 567
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 569
	}
} /* size: 0, variables: 3 */

// <05FA181E> ../public/meshutils/modelstream.h:592
inline void CModelStreamReader::GetValuesRaw(int* pOutNumUInt32s)
{
} /* size: 0 */

// <060E2C29> ../public/meshutils/modelstream.h:615
// variables: 3
void CModelStreamAccessor::GetValuesBase<Vector>()
{
	ModelStreamDataType_t nValueDataType; // 617
	ModelStreamDataType_t nStreamDataType; // 618
	uint32* pRawValues; // 624
	{
	}
} /* size: 0, variables: 3 */

// <06095344> ../public/meshutils/modelstream.h:615
// variables: 5
void CModelStreamAccessor::GetValuesBase<Vector>()
{
	const char   __FUNCTION__; // 11974
	ModelStreamDataType_t nValueDataType; // 617
	ModelStreamDataType_t nStreamDataType; // 618
	uint32* pRawValues; // 624
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 620
	}
} /* size: 0, variables: 4 */

// <060952D2> ../public/meshutils/modelstream.h:615
// variables: 5
void CModelStreamAccessor::GetValuesBase<Vector4D>()
{
	const char   __FUNCTION__; // 11974
	ModelStreamDataType_t nValueDataType; // 617
	ModelStreamDataType_t nStreamDataType; // 618
	uint32* pRawValues; // 624
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 620
	}
} /* size: 0, variables: 4 */

// <060E2E6F> ../public/meshutils/modelstream.h:632
// variables: 2
void Vector& value, int nIndex, const CModelStreamAccessor::SetValue<Vector>()
{
	const ModelStreamDataType_t  nValueDataType; // 634
	const ModelStreamDataType_t  nStreamDataType; // 635
	{
	}
} /* size: 0, variables: 2 */

// <06091DA3> ../public/meshutils/modelstream.h:632
// variables: 4
void CModelStreamAccessor::SetValue<Vector>(int nIndex, const Vector& value)
{
	const char   __FUNCTION__; // 11844
	const ModelStreamDataType_t  nValueDataType; // 634
	const ModelStreamDataType_t  nStreamDataType; // 635
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 637
	}
} /* size: 0, variables: 3 */

// <06091D24> ../public/meshutils/modelstream.h:632
// variables: 4
void CModelStreamAccessor::SetValue<int>(int nIndex, const int& value)
{
	const char   __FUNCTION__; // 11844
	const ModelStreamDataType_t  nValueDataType; // 634
	const ModelStreamDataType_t  nStreamDataType; // 635
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 637
	}
} /* size: 0, variables: 3 */

// <06084026> ../public/meshutils/modelstream.h:632
// variables: 4
void CModelStreamAccessor::SetValue<float>(int nIndex, const float& value)
{
	const char   __FUNCTION__; // 11844
	const ModelStreamDataType_t  nValueDataType; // 634
	const ModelStreamDataType_t  nStreamDataType; // 635
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 637
	}
} /* size: 0, variables: 3 */

// <06083B47> ../public/meshutils/modelstream.h:632
// variables: 4
void CModelStreamAccessor::SetValue<ModelMeshIntFloat_t>(int nIndex, const ModelMeshIntFloat_t& value)
{
	const char   __FUNCTION__; // 11844
	const ModelStreamDataType_t  nValueDataType; // 634
	const ModelStreamDataType_t  nStreamDataType; // 635
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 637
	}
} /* size: 0, variables: 3 */

// <06083606> ../public/meshutils/modelstream.h:632
// variables: 4
void CModelStreamAccessor::SetValue<Vector2D>(int nIndex, const Vector2D& value)
{
	const char   __FUNCTION__; // 11844
	const ModelStreamDataType_t  nValueDataType; // 634
	const ModelStreamDataType_t  nStreamDataType; // 635
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 637
	}
} /* size: 0, variables: 3 */

// <060830C5> ../public/meshutils/modelstream.h:632
// variables: 4
void CModelStreamAccessor::SetValue<Vector4D>(int nIndex, const Vector4D& value)
{
	const char   __FUNCTION__; // 11844
	const ModelStreamDataType_t  nValueDataType; // 634
	const ModelStreamDataType_t  nStreamDataType; // 635
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 637
	}
} /* size: 0, variables: 3 */

// <06082C65> ../public/meshutils/modelstream.h:632
// variables: 4
void CModelStreamAccessor::SetValue<Quaternion>(int nIndex, const Quaternion& value)
{
	const char   __FUNCTION__; // 11844
	const ModelStreamDataType_t  nValueDataType; // 634
	const ModelStreamDataType_t  nStreamDataType; // 635
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 637
	}
} /* size: 0, variables: 3 */

// <06082723> ../public/meshutils/modelstream.h:632
// variables: 4
void CModelStreamAccessor::SetValue<CTransform>(int nIndex, const CTransform& value)
{
	const char   __FUNCTION__; // 11844
	const ModelStreamDataType_t  nValueDataType; // 634
	const ModelStreamDataType_t  nStreamDataType; // 635
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 637
	}
} /* size: 0, variables: 3 */

// <061D26F7> ../public/meshutils/modelstream.h:650
// variables: 4
void CModelStreamAccessor::SetValues<Vector4D>(int nNumValues, const int* pValueIndices, const Vector4D* pValues)
{
	const char   __FUNCTION__; // 28159
	ModelStreamDataType_t nValueDataType; // 652
	ModelStreamDataType_t nStreamDataType; // 653
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 655
	}
} /* size: 0, variables: 3 */

// <060E2DED> ../public/meshutils/modelstream.h:650
// variables: 2
void ModelMeshIntFloat_t::SetValues<ModelMeshIntFloat_t>()
{
	ModelStreamDataType_t nValueDataType; // 652
	ModelStreamDataType_t nStreamDataType; // 653
	{
	}
} /* size: 0, variables: 2 */

// <060E2D6B> ../public/meshutils/modelstream.h:650
// variables: 2
void Vector::SetValues<Vector>()
{
	ModelStreamDataType_t nValueDataType; // 652
	ModelStreamDataType_t nStreamDataType; // 653
	{
	}
} /* size: 0, variables: 2 */

// <060E2CE9> ../public/meshutils/modelstream.h:650
// variables: 2
void Vector4D::SetValues<Vector4D>()
{
	ModelStreamDataType_t nValueDataType; // 652
	ModelStreamDataType_t nStreamDataType; // 653
	{
	}
} /* size: 0, variables: 2 */

// <06081F58> ../public/meshutils/modelstream.h:650
// variables: 4
void CModelStreamAccessor::SetValues<ModelMeshIntFloat_t>(int nNumValues, const int* pValueIndices, const ModelMeshIntFloat_t* pValues)
{
	const char   __FUNCTION__; // 11871
	ModelStreamDataType_t nValueDataType; // 652
	ModelStreamDataType_t nStreamDataType; // 653
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 655
	}
} /* size: 0, variables: 3 */

// <0608196E> ../public/meshutils/modelstream.h:650
// variables: 4
void CModelStreamAccessor::SetValues<int>(int nNumValues, const int* pValueIndices, const int* pValues)
{
	const char   __FUNCTION__; // 11871
	ModelStreamDataType_t nValueDataType; // 652
	ModelStreamDataType_t nStreamDataType; // 653
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 655
	}
} /* size: 0, variables: 3 */

// <060818AF> ../public/meshutils/modelstream.h:650
// variables: 4
void CModelStreamAccessor::SetValues<float>(int nNumValues, const int* pValueIndices, const float* pValues)
{
	const char   __FUNCTION__; // 11871
	ModelStreamDataType_t nValueDataType; // 652
	ModelStreamDataType_t nStreamDataType; // 653
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 655
	}
} /* size: 0, variables: 3 */

// <060817BD> ../public/meshutils/modelstream.h:650
// variables: 4
void CModelStreamAccessor::SetValues<Vector2D>(int nNumValues, const int* pValueIndices, const Vector2D* pValues)
{
	const char   __FUNCTION__; // 11871
	ModelStreamDataType_t nValueDataType; // 652
	ModelStreamDataType_t nStreamDataType; // 653
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 655
	}
} /* size: 0, variables: 3 */

// <060816FE> ../public/meshutils/modelstream.h:650
// variables: 4
void CModelStreamAccessor::SetValues<Vector>(int nNumValues, const int* pValueIndices, const Vector* pValues)
{
	const char   __FUNCTION__; // 11871
	ModelStreamDataType_t nValueDataType; // 652
	ModelStreamDataType_t nStreamDataType; // 653
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 655
	}
} /* size: 0, variables: 3 */

// <0608163F> ../public/meshutils/modelstream.h:650
// variables: 4
void CModelStreamAccessor::SetValues<Vector4D>(int nNumValues, const int* pValueIndices, const Vector4D* pValues)
{
	const char   __FUNCTION__; // 11871
	ModelStreamDataType_t nValueDataType; // 652
	ModelStreamDataType_t nStreamDataType; // 653
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 655
	}
} /* size: 0, variables: 3 */

// <06081580> ../public/meshutils/modelstream.h:650
// variables: 4
void CModelStreamAccessor::SetValues<Quaternion>(int nNumValues, const int* pValueIndices, const Quaternion* pValues)
{
	const char   __FUNCTION__; // 11871
	ModelStreamDataType_t nValueDataType; // 652
	ModelStreamDataType_t nStreamDataType; // 653
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 655
	}
} /* size: 0, variables: 3 */

// <060814C1> ../public/meshutils/modelstream.h:650
// variables: 4
void CModelStreamAccessor::SetValues<CTransform>(int nNumValues, const int* pValueIndices, const CTransform* pValues)
{
	const char   __FUNCTION__; // 11871
	ModelStreamDataType_t nValueDataType; // 652
	ModelStreamDataType_t nStreamDataType; // 653
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 655
	}
} /* size: 0, variables: 3 */

// <060E19E4> ../public/meshutils/modelstream.h:690
inline void CModelStreamAccessor::CopyValueFromStream(int nDstIndex, const CModelStreamReader& srcStream, int nSrcIndex)
{
} /* size: 0 */

