
//
// public/datamap.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libfilesystem_stdio.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libtier0.so
//				   libvfx_vulkan.so
//
//	functions: 19
//	classes: 21
//	structs: 2
//

// <00344F9E> ../public/datamap.h:133
inline void Get(ISchemaSystemTypeScope* pTypeScope)
{
} /* size: 0 */

// <0018751C> ../public/datamap.h:133
// member functions: 2
// class size: 1
class CSchemaTypeOf<fieldtype_t> {
	/* ../public/datamap.h:133 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
	/* ../public/datamap.h:133 */
	const char* GetEnumName(void);
};

// <01971BC4> ../public/datamap.h:245
inline void FieldSize(void)
{
} /* size: 0 */

// <018A0FDD> ../public/datamap.h:245
// member function: 1
// class size: 1
class CDatamapFieldSizeDeducer<1> {
	/* ../public/datamap.h:245 */
	int FieldSize(void);
	/* ../public/datamap.h:245 */
	enum {
		SIZE = 4,
	};
};

// <0583E39D> ../../public/datamap.h:318
// member functions: 4
// class size: 1
class CFieldSizeValidator<5, 1> {
	/* ../../public/datamap.h:321 */
	int ComputeFieldSize<LightSourceShape_t>(LightSourceShape_t& );
	/* ../../public/datamap.h:321 */
	int ComputeFieldSize<float>(float& );
	/* ../../public/datamap.h:321 */
	int ComputeFieldSize<int>(int& );
	/* ../../public/datamap.h:321 */
	int ComputeFieldSize<LightType_t>(LightType_t& );
};

// <0583E458> ../../public/datamap.h:318
// member function: 1
// class size: 1
class CFieldSizeValidator<3, 1> {
	/* ../../public/datamap.h:321 */
	int ComputeFieldSize<Vector>(Vector& );
};

// <0583E4A1> ../../public/datamap.h:318
// member function: 1
// class size: 1
class CFieldSizeValidator<1, 1> {
	/* ../../public/datamap.h:321 */
	int ComputeFieldSize<float>(float& );
};

// <0583E4EA> ../../public/datamap.h:318
// member function: 1
// class size: 1
class CFieldSizeValidator<52, 1> {
	/* ../../public/datamap.h:321 */
	int ComputeFieldSize<CStrongHandleCopyable<InfoForResourceTypeCTextureBase> >(CStrongHandleCopyable<InfoForResourceTypeCTextureBase>& );
};

// <0583E533> ../../public/datamap.h:318
// member function: 1
// class size: 1
class CFieldSizeValidator<6, 1> {
	/* ../../public/datamap.h:321 */
	int ComputeFieldSize<bool>(bool& );
};

// <0015F992> ../public/datamap.h:318
// member function: 1
// class size: 1
class CFieldSizeValidator<1, 1> {
	/* ../public/datamap.h:321 */
	int ComputeFieldSize<float>(float& );
};

// <0015F9DB> ../public/datamap.h:318
// member function: 1
// class size: 1
class CFieldSizeValidator<55, 1> {
	/* ../public/datamap.h:321 */
	int ComputeFieldSize<short unsigned int>(short unsigned int& );
};

// <00DF0557> ../public/datamap.h:318
// member function: 1
// class size: 1
class CFieldSizeValidator<25, 1> {
	/* ../public/datamap.h:321 */
	int ComputeFieldSize<Vector2D>(Vector2D& );
};

// <00DF05E8> ../public/datamap.h:318
// member function: 1
// class size: 1
class CFieldSizeValidator<3, 1> {
	/* ../public/datamap.h:321 */
	int ComputeFieldSize<Vector>(Vector& );
};

// <00F2E3FF> ../public/datamap.h:318
// member function: 1
// class size: 1
class CFieldSizeValidator<61, 1> {
	/* ../public/datamap.h:321 */
	int ComputeFieldSize<CMotionTransform>(CMotionTransform& );
};

// <01561AF7> ../public/datamap.h:318
// member function: 1
// class size: 1
class CFieldSizeValidator<57, 1> {
	/* ../public/datamap.h:321 */
	int ComputeFieldSize<CTransform>(CTransform& );
};

// <01561B40> ../public/datamap.h:318
// member functions: 2
// class size: 1
class CFieldSizeValidator<5, 1> {
	/* ../public/datamap.h:321 */
	int ComputeFieldSize<FacingMode>(FacingMode& );
	/* ../public/datamap.h:321 */
	int ComputeFieldSize<int>(int& );
};

// <01561BF8> ../public/datamap.h:318
// member function: 1
// class size: 1
class CFieldSizeValidator<15, 1> {
	/* ../public/datamap.h:321 */
	int ComputeFieldSize<float>(float& );
};

// <01561C41> ../public/datamap.h:318
// member function: 1
// class size: 1
class CFieldSizeValidator<6, 1> {
	/* ../public/datamap.h:321 */
	int ComputeFieldSize<bool>(bool& );
};

// <017D7B1B> ../public/datamap.h:318
// member function: 1
// class size: 1
class CFieldSizeValidator<1, 4> {
	/* ../public/datamap.h:321 */
	int ComputeFieldSize<float [4]>(float& );
};

// <017D7B64> ../public/datamap.h:318
// member function: 1
// class size: 1
class CFieldSizeValidator<37, 1> {
	/* ../public/datamap.h:321 */
	int ComputeFieldSize<unsigned int>(unsigned int& );
};

// <018D90B8> ../public/datamap.h:318
// member function: 1
// class size: 1
class CFieldSizeValidator<54, 1> {
	/* ../public/datamap.h:321 */
	int ComputeFieldSize<unsigned char>(unsigned char& );
};

// <00153BA7> ../public/datamap.h:318
// member function: 1
// class size: 1
class CFieldSizeValidator<5, 1> {
	/* ../public/datamap.h:321 */
	int ComputeFieldSize<unsigned int>(unsigned int& );
};

// <00153BF2> ../public/datamap.h:318
// member function: 1
// class size: 1
class CFieldSizeValidator<7, 1> {
	/* ../public/datamap.h:321 */
	int ComputeFieldSize<short unsigned int>(short unsigned int& );
};

// <0583EB11> ../../public/datamap.h:321
inline void ComputeFieldSize<LightType_t>(LightType_t& t)
{
} /* size: 0 */

// <0583EAEC> ../../public/datamap.h:321
inline void ComputeFieldSize<Vector>(Vector& t)
{
} /* size: 0 */

// <0583EACD> ../../public/datamap.h:321
inline void ComputeFieldSize<float>(float& t)
{
} /* size: 0 */

// <0583EAAE> ../../public/datamap.h:321
inline void ComputeFieldSize<CStrongHandleCopyable<InfoForResourceTypeCTextureBase> >(CStrongHandleCopyable<InfoForResourceTypeCTextureBase>& t)
{
} /* size: 0 */

// <0583EA8F> ../../public/datamap.h:321
inline void ComputeFieldSize<bool>(bool& t)
{
} /* size: 0 */

// <0583EA70> ../../public/datamap.h:321
inline void ComputeFieldSize<int>(int& t)
{
} /* size: 0 */

// <0583EA32> ../../public/datamap.h:321
inline void ComputeFieldSize<LightSourceShape_t>(LightSourceShape_t& t)
{
} /* size: 0 */

// <0191EDB8> ../public/datamap.h:321
inline void ComputeFieldSize<short unsigned int>(short unsigned int& t)
{
} /* size: 0 */

// <0191E596> ../public/datamap.h:321
inline void ComputeFieldSize<CRotation>(CRotation& t)
{
} /* size: 0 */

// <0191DDAC> ../public/datamap.h:321
inline void ComputeFieldSize<unsigned char>(unsigned char& t)
{
} /* size: 0 */

// <017EF5E0> ../public/datamap.h:321
inline void ComputeFieldSize<HSequence>(HSequence& t)
{
} /* size: 0 */

// <017EF5A0> ../public/datamap.h:321
inline void ComputeFieldSize<float [4]>(float& t)
{
} /* size: 0 */

// <017EF57A> ../public/datamap.h:321
inline void ComputeFieldSize<unsigned int>(unsigned int& t)
{
} /* size: 0 */

// <01583599> ../public/datamap.h:321
inline void ComputeFieldSize<CTransform>(CTransform& t)
{
} /* size: 0 */

// <0158237B> ../public/datamap.h:321
inline void ComputeFieldSize<FacingMode>(FacingMode& t)
{
} /* size: 0 */

// <00F55762> ../public/datamap.h:321
inline void ComputeFieldSize<CMotionTransform>(CMotionTransform& t)
{
} /* size: 0 */

// <00E214D6> ../public/datamap.h:321
inline void ComputeFieldSize<Vector2D>(Vector2D& t)
{
} /* size: 0 */

// <0001594E> ../public/datamap.h:523
// member functions: 5
// member variables: 14
// struct size: 88
struct typedescription_t {
	fieldtype_t fieldType; /* 0 1 */
	CheckTypeDescriptionDecls_t CHECK_TDD_Field; /* 4 4 */
	const char * fieldName; /* 8 8 */
	int32 fieldOffset; /* 16 4 */
	uint16 fieldSize; /* 20 2 */
	ETypeDescFlags flags; /* 24 4 */
	const char * externalName; /* 32 8 */
	ISaveRestoreOps * pSaveRestoreOps; /* 40 8 */
	void * inputFunc; /* 48 8 */
	datamap_t * td; /* 56 8 */
	int32 fieldSizeInBytes; /* 64 4 */
	float32 fieldTolerance; /* 68 4 */
	int32 flatOffset[2]; /* 72 8 */
	uint16 flatGroup; /* 80 2 */
	/* ../public/datamap.h:552 */
	bool IsMutated(const typedescription_t* , const typedescription_t& );
	/* ../public/datamap.h:554 */
	const char* GetEnumTypeName(const typedescription_t* );
	/* ../public/datamap.h:560 */
	bool HasFlag(const typedescription_t* , ETypeDescFlags);
	/* ../public/datamap.h:567 */
	int GetFieldByteSize(const typedescription_t* );
	/* ../public/datamap.h:573 */
	int GetElementByteSize(const typedescription_t* );
};

// <00015AF7> ../public/datamap.h:583
// member functions: 3
// member variables: 7
// struct size: 56
struct datamap_t {
	typedescription_t * dataDesc; /* 0 8 */
	int32 dataNumFields; /* 8 4 */
	const char * dataClassName; /* 16 8 */
	datamap_t * baseMap; /* 24 8 */
	int32 m_nPackedSize; /* 32 4 */
	optimized_datamap_t * m_pOptimizedDataMap; /* 40 8 */
	datamap_t * m_pChain; /* 48 8 */
	/* ../public/datamap.h:596 */
	void Clear(datamap_t* );
	/* ../public/datamap.h:600 */
	void CopyFrom(datamap_t* , const datamap_t* );
	/* ../public/datamap.h:601 */
	bool IsMutated(const datamap_t* , const datamap_t& );
};

