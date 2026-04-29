
//
// public/tier0/tier0_utils_base.h
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
//	functions: 81
//	classes: 14
//	struct: 1
//

// <00D471A1> ../public/tier0/tier0_utils_base.h:28
// member variables: 2
// struct size: 8
struct interval_t {
	float start; /* 0 4 */
	float range; /* 4 4 */
};

// <040B3426> ../public/tier0/tier0_utils_base.h:47
void IGenericInterface::IGenericInterface()
{
} /* size: 0 */

// <040B3409> ../public/tier0/tier0_utils_base.h:47
inline void IGenericInterface::IGenericInterface()
{
} /* size: 0 */

// <001238CA> ../public/tier0/tier0_utils_base.h:47
// member functions: 6
// member variable: 1
// class size: 8
class IGenericInterface {
	void IGenericInterface(IGenericInterface* , const IGenericInterface& );
	void IGenericInterface(IGenericInterface* );
	int ()(void) * * _vptr.IGenericInterface; /* 0 8 */
protected:
	/* ../public/tier0/tier0_utils_base.h:50 */
	virtual void ~IGenericInterface(IGenericInterface* );
	void IGenericInterface(class IGenericInterface *, const class IGenericInterface  &); /* linkage=_ZN17IGenericInterfaceC4ERKS_ */
	void IGenericInterface(class IGenericInterface *); /* linkage=_ZN17IGenericInterfaceC4Ev */
	virtual void ~IGenericInterface(class IGenericInterface *); /* linkage=_ZN17IGenericInterfaceD4Ev */
};

// <058F0B74> ../../public/tier0/tier0_utils_base.h:47
// member functions: 6
// member variable: 1
// class size: 8
class IGenericInterface {
	void IGenericInterface(IGenericInterface* , const IGenericInterface& );
	void IGenericInterface(IGenericInterface* );
	int ()(void) * * _vptr.IGenericInterface; /* 0 8 */
protected:
	/* ../../public/tier0/tier0_utils_base.h:50 */
	virtual void ~IGenericInterface(IGenericInterface* );
	void IGenericInterface(class IGenericInterface *, const class IGenericInterface  &); /* linkage=_ZN17IGenericInterfaceC4ERKS_ */
	void IGenericInterface(class IGenericInterface *); /* linkage=_ZN17IGenericInterfaceC4Ev */
	virtual void ~IGenericInterface(class IGenericInterface *); /* linkage=_ZN17IGenericInterfaceD4Ev */
};

// <06E2ACE3> ../../public/tier0/tier0_utils_base.h:50
void IGenericInterface::~IGenericInterface()
{
} /* size: 0 */

// <06E2ACB3> ../../public/tier0/tier0_utils_base.h:50
inline void IGenericInterface::~IGenericInterface()
{
} /* size: 0 */

// <05BB80AA> ../public/tier0/tier0_utils_base.h:56
// variable: 1
inline void Swap<unsigned int>(unsigned int& a, unsigned int& b)
{
	unsigned int temp; // 58
} /* size: 0, variables: 1 */

// <0554CA81> ../public/tier0/tier0_utils_base.h:56
// variable: 1
inline void Swap<KeyValues3*>(KeyValues3 *& a, KeyValues3 *& b)
{
	KeyValues3* temp; // 58
} /* size: 0, variables: 1 */

// <046C5EB4> ../public/tier0/tier0_utils_base.h:56
// variable: 1
inline void Swap<int>(int& a, int& b)
{
	int temp; // 58
} /* size: 0, variables: 1 */

// <044900F2> ../public/tier0/tier0_utils_base.h:56
// variable: 1
inline void Swap<float>(float& a, float& b)
{
	float temp; // 58
} /* size: 0, variables: 1 */

// <00D9D8C2> ../public/tier0/tier0_utils_base.h:56
// variable: 1
inline void Swap<long long unsigned int>(long long unsigned int& a, long long unsigned int& b)
{
	long long unsigned int temp; // 58
} /* size: 0, variables: 1 */

// <009F47CB> ../public/tier0/tier0_utils_base.h:56
// variable: 1
inline void Swap<const qhHalfEdge*>(const qhHalfEdge *& a, const qhHalfEdge *& b)
{
	const qhHalfEdge* temp; // 58
} /* size: 0, variables: 1 */

// <069E6FDE> ../public/tier0/tier0_utils_base.h:77
inline unsigned char Clamp<unsigned char>(const unsigned char& val, const unsigned char& minVal, const unsigned char& maxVal)
{
} /* size: 0 */

// <00B53313> ../public/tier0/tier0_utils_base.h:77
inline float Clamp<float>(const float& val, const float& minVal, const float& maxVal)
{
} /* size: 0 */

// <000610ED> ../public/tier0/tier0_utils_base.h:77
inline int Clamp<int>(const int& val, const int& minVal, const int& maxVal)
{
} /* size: 0 */

// <009E5B0B> ../public/tier0/tier0_utils_base.h:77
inline RenderDefragFlags_t Clamp<RenderDefragFlags_t>(const RenderDefragFlags_t& val, const RenderDefragFlags_t& minVal, const RenderDefragFlags_t& maxVal)
{
} /* size: 0 */

// <000AA682> ../public/tier0/tier0_utils_base.h:77
inline short unsigned int Clamp<short unsigned int>(const short unsigned int& val, const short unsigned int& minVal, const short unsigned int& maxVal)
{
} /* size: 0 */

// <000612A7> ../public/tier0/tier0_utils_base.h:115
inline int ClampFloatToInt<float>(float val, int minVal, int maxVal)
{
} /* size: 0 */

// <014BB95D> ../public/tier0/tier0_utils_base.h:115
inline int ClampFloatToInt<unsigned char>(unsigned char val, int minVal, int maxVal)
{
} /* size: 0 */

// <067D3EE1> ../public/tier0/tier0_utils_base.h:123
inline long long unsigned int clamp<long long unsigned int, long long unsigned int>(const long long unsigned int& val, const long long unsigned int& minVal, const long long unsigned int& maxVal)
{
} /* size: 0 */

// <0185B006> ../public/tier0/tier0_utils_base.h:123
inline double clamp<double, int>(const double& val, const int& minVal, const int& maxVal)
{
} /* size: 0 */

// <013465D5> ../public/tier0/tier0_utils_base.h:123
inline int clamp<int, int>(const int& val, const int& minVal, const int& maxVal)
{
} /* size: 0 */

// <007E0767> ../public/tier0/tier0_utils_base.h:123
inline float clamp<float, float>(const float& val, const float& minVal, const float& maxVal)
{
} /* size: 0 */

// <00305426> ../public/tier0/tier0_utils_base.h:123
inline int clamp<int, short int>(const int& val, const short int& minVal, const short int& maxVal)
{
} /* size: 0 */

// <002AB416> ../public/tier0/tier0_utils_base.h:123
inline unsigned int clamp<unsigned int, unsigned int>(const unsigned int& val, const unsigned int& minVal, const unsigned int& maxVal)
{
} /* size: 0 */

// <059DA7A6> ../public/tier0/tier0_utils_base.h:140
inline float Sqr(float f)
{
} /* size: 0 */

// <00BB1F44> ../public/tier0/tier0_utils_base.h:181
inline float Sign(float x)
{
} /* size: 0 */

// <04500968> ../public/tier0/tier0_utils_base.h:191
inline float RemapVal(float val, float A, float B, float C, float D)
{
} /* size: 0 */

// <02640D5F> ../public/tier0/tier0_utils_base.h:205
// variable: 1
inline float RemapValClamped(float val, float A, float B, float C, float D)
{
	float cVal; // 209
} /* size: 0, variables: 1 */

// <03AF82B4> ../public/tier0/tier0_utils_base.h:253
inline float FLerp(float f1, float f2, float i1, float i2, float x)
{
} /* size: 0 */

// <05CE12CD> ../public/tier0/tier0_utils_base.h:260
inline Vector2D Lerp<Vector2D>(float flPercent, const Vector2D& A, const Vector2D& B)
{
} /* size: 0 */

// <053F1EBD> ../public/tier0/tier0_utils_base.h:260
inline Vector Lerp<Vector>(float flPercent, const Vector& A, const Vector& B)
{
} /* size: 0 */

// <00F2AB6C> ../public/tier0/tier0_utils_base.h:260
inline float Lerp<float>(float flPercent, const float& A, const float& B)
{
} /* size: 0 */

// <017EFAF8> ../public/tier0/tier0_utils_base.h:260
inline CRootMotion Lerp<CRootMotion>(float flPercent, const CRootMotion& A, const CRootMotion& B)
{
} /* size: 0 */

// <0172211A> ../public/tier0/tier0_utils_base.h:260
inline VectorAligned Lerp<VectorAligned>(float flPercent, const VectorAligned& A, const VectorAligned& B)
{
} /* size: 0 */

// <01581121> ../public/tier0/tier0_utils_base.h:260
inline CMotionTransform Lerp<CMotionTransform>(float flPercent, const CMotionTransform& A, const CMotionTransform& B)
{
} /* size: 0 */

// <068DC2DD> ../public/tier0/tier0_utils_base.h:268
inline SerializeStaticCombosWorkUnit_t* Min<SerializeStaticCombosWorkUnit_t*>(SerializeStaticCombosWorkUnit_t* const& val1, SerializeStaticCombosWorkUnit_t* const& val2)
{
} /* size: 0 */

// <0618FC60> ../public/tier0/tier0_utils_base.h:268
inline BentNormalComputationJob_t* Min<BentNormalComputationJob_t*>(BentNormalComputationJob_t* const& val1, BentNormalComputationJob_t* const& val2)
{
} /* size: 0 */

// <05643A00> ../public/tier0/tier0_utils_base.h:268
inline const unsigned char* Min<unsigned char const*>(const unsigned char* const& val1, const unsigned char* const& val2)
{
} /* size: 0 */

// <0495CBDF> ../public/tier0/tier0_utils_base.h:268
inline long long int Min<long long int>(const long long int& val1, const long long int& val2)
{
} /* size: 0 */

// <046C2DBB> ../public/tier0/tier0_utils_base.h:268
inline int* Min<int*>(int* const& val1, int* const& val2)
{
} /* size: 0 */

// <0448BEB7> ../public/tier0/tier0_utils_base.h:268
inline KMeansQuantizationWorkUnit* Min<KMeansQuantizationWorkUnit*>(KMeansQuantizationWorkUnit* const& val1, KMeansQuantizationWorkUnit* const& val2)
{
} /* size: 0 */

// <033AED7A> ../public/tier0/tier0_utils_base.h:268
inline short unsigned int Min<short unsigned int>(const short unsigned int& val1, const short unsigned int& val2)
{
} /* size: 0 */

// <02E122A5> ../public/tier0/tier0_utils_base.h:268
inline CSceneObject** Min<CSceneObject**>(CSceneObject** const& val1, CSceneObject** const& val2)
{
} /* size: 0 */

// <020F775E> ../public/tier0/tier0_utils_base.h:268
inline long int Min<long int>(const long int& val1, const long int& val2)
{
} /* size: 0 */

// <01FB0906> ../public/tier0/tier0_utils_base.h:268
inline double Min<double>(const double& val1, const double& val2)
{
} /* size: 0 */

// <007D8B05> ../public/tier0/tier0_utils_base.h:268
inline unsigned int Min<unsigned int>(const unsigned int& val1, const unsigned int& val2)
{
} /* size: 0 */

// <004B00B7> ../public/tier0/tier0_utils_base.h:268
inline short int Min<short int>(const short int& val1, const short int& val2)
{
} /* size: 0 */

// <0015066F> ../public/tier0/tier0_utils_base.h:268
inline float Min<float>(const float& val1, const float& val2)
{
} /* size: 0 */

// <00135FA0> ../public/tier0/tier0_utils_base.h:268
inline int Min<int>(const int& val1, const int& val2)
{
} /* size: 0 */

// <0012A4FE> ../public/tier0/tier0_utils_base.h:268
inline CrashItem_t* Min<CrashItem_t*>(CrashItem_t* const& val1, CrashItem_t* const& val2)
{
} /* size: 0 */

// <00637B71> ../public/tier0/tier0_utils_base.h:268
inline PipelineWorkItem_t* Min<CFossilizeStateCreator::PipelineWorkItem_t*>(PipelineWorkItem_t* const& val1, PipelineWorkItem_t* const& val2)
{
} /* size: 0 */

// <0032A7A3> ../public/tier0/tier0_utils_base.h:268
inline long long unsigned int Min<long long unsigned int>(const long long unsigned int& val1, const long long unsigned int& val2)
{
} /* size: 0 */

// <004DF7B5> ../public/tier0/tier0_utils_base.h:268
inline long unsigned int Min<long unsigned int>(const long unsigned int& val1, const long unsigned int& val2)
{
} /* size: 0 */

// <0015809E> ../public/tier0/tier0_utils_base.h:268
inline unsigned int* Min<unsigned int*>(unsigned int* const& val1, unsigned int* const& val2)
{
} /* size: 0 */

// <0495CBA0> ../public/tier0/tier0_utils_base.h:288
inline long long int Max<long long int>(const long long int& val1, const long long int& val2)
{
} /* size: 0 */

// <032FDAE3> ../public/tier0/tier0_utils_base.h:288
inline short unsigned int Max<short unsigned int>(const short unsigned int& val1, const short unsigned int& val2)
{
} /* size: 0 */

// <02E88A63> ../public/tier0/tier0_utils_base.h:288
inline ERejectedReason_t Max<ERejectedReason_t>(const ERejectedReason_t& val1, const ERejectedReason_t& val2)
{
} /* size: 0 */

// <01FA8F43> ../public/tier0/tier0_utils_base.h:288
inline double Max<double>(const double& val1, const double& val2)
{
} /* size: 0 */

// <009F7DE3> ../public/tier0/tier0_utils_base.h:288
inline float Max<float>(const float& val1, const float& val2)
{
} /* size: 0 */

// <008AE7E2> ../public/tier0/tier0_utils_base.h:288
inline int Max<int>(const int& val1, const int& val2)
{
} /* size: 0 */

// <003DB5AE> ../public/tier0/tier0_utils_base.h:288
inline unsigned int Max<unsigned int>(const unsigned int& val1, const unsigned int& val2)
{
} /* size: 0 */

// <0083E062> ../public/tier0/tier0_utils_base.h:288
inline signed char Max<signed char>(const signed char& val1, const signed char& val2)
{
} /* size: 0 */

// <0070FCD3> ../public/tier0/tier0_utils_base.h:288
inline unsigned char Max<unsigned char>(const unsigned char& val1, const unsigned char& val2)
{
} /* size: 0 */

// <0039DDA8> ../public/tier0/tier0_utils_base.h:288
inline long unsigned int Max<long unsigned int>(const long unsigned int& val1, const long unsigned int& val2)
{
} /* size: 0 */

// <00398B42> ../public/tier0/tier0_utils_base.h:288
inline long long unsigned int Max<long long unsigned int>(const long long unsigned int& val1, const long long unsigned int& val2)
{
} /* size: 0 */

// <00306929> ../public/tier0/tier0_utils_base.h:288
inline short int Max<short int>(const short int& val1, const short int& val2)
{
} /* size: 0 */

// <001793FE> ../public/tier0/tier0_utils_base.h:288
inline unsigned char* Max<unsigned char*>(unsigned char* const& val1, unsigned char* const& val2)
{
} /* size: 0 */

// <003DBDDC> ../public/tier0/tier0_utils_base.h:327
inline float fpmin(float a, float b)
{
} /* size: 0 */

// <003DBDAE> ../public/tier0/tier0_utils_base.h:332
inline float fpmax(float a, float b)
{
} /* size: 0 */

// <00220C36> ../public/tier0/tier0_utils_base.h:358
// member functions: 4
// class size: 1
class CDefOps<short unsigned int> {
	/* ../public/tier0/tier0_utils_base.h:361 */
	bool LessFunc(const short unsigned int& , const short unsigned int& );
	/* ../public/tier0/tier0_utils_base.h:362 */
	bool LessFuncCtx(const short unsigned int& , const short unsigned int& , void* );
	/* ../public/tier0/tier0_utils_base.h:363 */
	int CompareFunc(const short unsigned int* , const short unsigned int* );
	/* ../public/tier0/tier0_utils_base.h:364 */
	int CompareFuncCtx(const short unsigned int* , const short unsigned int* , void* );
};

// <008DA319> ../public/tier0/tier0_utils_base.h:358
// member functions: 4
// class size: 1
class CDefOps<unsigned int> {
	/* ../public/tier0/tier0_utils_base.h:361 */
	bool LessFunc(const unsigned int& , const unsigned int& );
	/* ../public/tier0/tier0_utils_base.h:362 */
	bool LessFuncCtx(const unsigned int& , const unsigned int& , void* );
	/* ../public/tier0/tier0_utils_base.h:363 */
	int CompareFunc(const unsigned int* , const unsigned int* );
	/* ../public/tier0/tier0_utils_base.h:364 */
	int CompareFuncCtx(const unsigned int* , const unsigned int* , void* );
};

// <00FF7D2E> ../public/tier0/tier0_utils_base.h:358
// member functions: 4
// class size: 1
class CDefOps<long long unsigned int> {
	/* ../public/tier0/tier0_utils_base.h:361 */
	bool LessFunc(const long long unsigned int& , const long long unsigned int& );
	/* ../public/tier0/tier0_utils_base.h:362 */
	bool LessFuncCtx(const long long unsigned int& , const long long unsigned int& , void* );
	/* ../public/tier0/tier0_utils_base.h:363 */
	int CompareFunc(const long long unsigned int* , const long long unsigned int* );
	/* ../public/tier0/tier0_utils_base.h:364 */
	int CompareFuncCtx(const long long unsigned int* , const long long unsigned int* , void* );
};

// <00256090> ../public/tier0/tier0_utils_base.h:358
// member functions: 4
// class size: 1
class CDefOps<HKeySymbol> {
	/* ../public/tier0/tier0_utils_base.h:361 */
	bool LessFunc(const HKeySymbol& , const HKeySymbol& );
	/* ../public/tier0/tier0_utils_base.h:362 */
	bool LessFuncCtx(const HKeySymbol& , const HKeySymbol& , void* );
	/* ../public/tier0/tier0_utils_base.h:363 */
	int CompareFunc(const HKeySymbol* , const HKeySymbol* );
	/* ../public/tier0/tier0_utils_base.h:364 */
	int CompareFuncCtx(const HKeySymbol* , const HKeySymbol* , void* );
};

// <002A36D7> ../public/tier0/tier0_utils_base.h:358
// member functions: 4
// class size: 1
class CDefOps<void*> {
	/* ../public/tier0/tier0_utils_base.h:361 */
	bool LessFunc(void* const& , void* const& );
	/* ../public/tier0/tier0_utils_base.h:362 */
	bool LessFuncCtx(void* const& , void* const& , void* );
	/* ../public/tier0/tier0_utils_base.h:363 */
	int CompareFunc(void* const* , void* const* );
	/* ../public/tier0/tier0_utils_base.h:364 */
	int CompareFuncCtx(void* const* , void* const* , void* );
};

// <0006996C> ../public/tier0/tier0_utils_base.h:358
// member functions: 4
// class size: 1
class CDefOps<CSchemaType*> {
	/* ../public/tier0/tier0_utils_base.h:361 */
	bool LessFunc(CSchemaType* const& , CSchemaType* const& );
	/* ../public/tier0/tier0_utils_base.h:362 */
	bool LessFuncCtx(CSchemaType* const& , CSchemaType* const& , void* );
	/* ../public/tier0/tier0_utils_base.h:363 */
	int CompareFunc(CSchemaType* const* , CSchemaType* const* );
	/* ../public/tier0/tier0_utils_base.h:364 */
	int CompareFuncCtx(CSchemaType* const* , CSchemaType* const* , void* );
};

// <00069A1A> ../public/tier0/tier0_utils_base.h:358
// member functions: 4
// class size: 1
class CDefOps<int> {
	/* ../public/tier0/tier0_utils_base.h:361 */
	bool LessFunc(const int& , const int& );
	/* ../public/tier0/tier0_utils_base.h:362 */
	bool LessFuncCtx(const int& , const int& , void* );
	/* ../public/tier0/tier0_utils_base.h:363 */
	int CompareFunc(const int* , const int* );
	/* ../public/tier0/tier0_utils_base.h:364 */
	int CompareFuncCtx(const int* , const int* , void* );
};

// <00069AC2> ../public/tier0/tier0_utils_base.h:358
// member functions: 4
// class size: 1
class CDefOps<AtomicTypeInfo_T_t> {
	/* ../public/tier0/tier0_utils_base.h:361 */
	bool LessFunc(const AtomicTypeInfo_T_t& , const AtomicTypeInfo_T_t& );
	/* ../public/tier0/tier0_utils_base.h:362 */
	bool LessFuncCtx(const AtomicTypeInfo_T_t& , const AtomicTypeInfo_T_t& , void* );
	/* ../public/tier0/tier0_utils_base.h:363 */
	int CompareFunc(const AtomicTypeInfo_T_t* , const AtomicTypeInfo_T_t* );
	/* ../public/tier0/tier0_utils_base.h:364 */
	int CompareFuncCtx(const AtomicTypeInfo_T_t* , const AtomicTypeInfo_T_t* , void* );
};

// <00069B6A> ../public/tier0/tier0_utils_base.h:358
// member functions: 4
// class size: 1
class CDefOps<AtomicTypeInfo_TT_t> {
	/* ../public/tier0/tier0_utils_base.h:361 */
	bool LessFunc(const AtomicTypeInfo_TT_t& , const AtomicTypeInfo_TT_t& );
	/* ../public/tier0/tier0_utils_base.h:362 */
	bool LessFuncCtx(const AtomicTypeInfo_TT_t& , const AtomicTypeInfo_TT_t& , void* );
	/* ../public/tier0/tier0_utils_base.h:363 */
	int CompareFunc(const AtomicTypeInfo_TT_t* , const AtomicTypeInfo_TT_t* );
	/* ../public/tier0/tier0_utils_base.h:364 */
	int CompareFuncCtx(const AtomicTypeInfo_TT_t* , const AtomicTypeInfo_TT_t* , void* );
};

// <00069C12> ../public/tier0/tier0_utils_base.h:358
// member functions: 4
// class size: 1
class CDefOps<AtomicTypeInfo_I_t> {
	/* ../public/tier0/tier0_utils_base.h:361 */
	bool LessFunc(const AtomicTypeInfo_I_t& , const AtomicTypeInfo_I_t& );
	/* ../public/tier0/tier0_utils_base.h:362 */
	bool LessFuncCtx(const AtomicTypeInfo_I_t& , const AtomicTypeInfo_I_t& , void* );
	/* ../public/tier0/tier0_utils_base.h:363 */
	int CompareFunc(const AtomicTypeInfo_I_t* , const AtomicTypeInfo_I_t* );
	/* ../public/tier0/tier0_utils_base.h:364 */
	int CompareFuncCtx(const AtomicTypeInfo_I_t* , const AtomicTypeInfo_I_t* , void* );
};

// <00069D62> ../public/tier0/tier0_utils_base.h:358
// member functions: 4
// class size: 1
class CDefOps<TypeAndCountInfo_t> {
	/* ../public/tier0/tier0_utils_base.h:361 */
	bool LessFunc(const TypeAndCountInfo_t& , const TypeAndCountInfo_t& );
	/* ../public/tier0/tier0_utils_base.h:362 */
	bool LessFuncCtx(const TypeAndCountInfo_t& , const TypeAndCountInfo_t& , void* );
	/* ../public/tier0/tier0_utils_base.h:363 */
	int CompareFunc(const TypeAndCountInfo_t* , const TypeAndCountInfo_t* );
	/* ../public/tier0/tier0_utils_base.h:364 */
	int CompareFuncCtx(const TypeAndCountInfo_t* , const TypeAndCountInfo_t* , void* );
};

// <003F9536> ../public/tier0/tier0_utils_base.h:358
// member functions: 4
// class size: 1
class CDefOps<const CRenderMesh*> {
	/* ../public/tier0/tier0_utils_base.h:361 */
	bool LessFunc(const CRenderMesh* const& , const CRenderMesh* const& );
	/* ../public/tier0/tier0_utils_base.h:362 */
	bool LessFuncCtx(const CRenderMesh* const& , const CRenderMesh* const& , void* );
	/* ../public/tier0/tier0_utils_base.h:363 */
	int CompareFunc(const CRenderMesh* const* , const CRenderMesh* const* );
	/* ../public/tier0/tier0_utils_base.h:364 */
	int CompareFuncCtx(const CRenderMesh* const* , const CRenderMesh* const* , void* );
};

// <06AB22E6> ../public/tier0/tier0_utils_base.h:361
void LessFunc(const long long unsigned int& lhs, const long long unsigned int& rhs)
{
} /* size: 14 */

// <069E6DD8> ../public/tier0/tier0_utils_base.h:361
void LessFunc(const unsigned int& lhs, const unsigned int& rhs)
{
} /* size: 12 */

// <002A97B4> ../public/tier0/tier0_utils_base.h:361
void LessFunc(void* const& lhs, void* const& rhs)
{
} /* size: 14 */

// <0025EDE5> ../public/tier0/tier0_utils_base.h:361
// function calls: 2
void LessFunc(const HKeySymbol& lhs, const HKeySymbol& rhs)
{
	HKeySymbol::operator uint32(); // 361
	HKeySymbol::operator uint32(); // 361
} /* size: 12, inline expansions: 2 (0 bytes) */

// <000CF51D> ../public/tier0/tier0_utils_base.h:361
void LessFunc(CSchemaType* const& lhs, CSchemaType* const& rhs)
{
} /* size: 14 */

// <000CF454> ../public/tier0/tier0_utils_base.h:361
void LessFunc(const int& lhs, const int& rhs)
{
} /* size: 12 */

// <000CF34D> ../public/tier0/tier0_utils_base.h:361
// function call: 1
void LessFunc(const AtomicTypeInfo_T_t& lhs, const AtomicTypeInfo_T_t& rhs)
{
	AtomicTypeInfo_T_t::operator<(
			const AtomicTypeInfo_T_t& rhs);  // 361
} /* size: 29, inline expansions: 1 (22 bytes) */

// <000CF196> ../public/tier0/tier0_utils_base.h:361
// function calls: 2
void LessFunc(const AtomicTypeInfo_TT_t& lhs, const AtomicTypeInfo_TT_t& rhs)
{
	AtomicTypeInfo_TT_t::operator<(
			const AtomicTypeInfo_TT_t& rhs);  // 351
	AtomicTypeInfo_TT_t::operator<(
			const AtomicTypeInfo_TT_t& rhs);  // 361
} /* size: 52, inline expansions: 2 (65 bytes) */

// <000CF08F> ../public/tier0/tier0_utils_base.h:361
// function call: 1
void LessFunc(const AtomicTypeInfo_I_t& lhs, const AtomicTypeInfo_I_t& rhs)
{
	AtomicTypeInfo_I_t::operator<(
			const AtomicTypeInfo_I_t& rhs);  // 361
} /* size: 27, inline expansions: 1 (20 bytes) */

// <000CEDAB> ../public/tier0/tier0_utils_base.h:361
// function call: 1
void LessFunc(const TypeAndCountInfo_t& lhs, const TypeAndCountInfo_t& rhs)
{
	TypeAndCountInfo_t::operator<(
			const TypeAndCountInfo_t& rhs);  // 361
} /* size: 29, inline expansions: 1 (22 bytes) */

// <0040AEFB> ../public/tier0/tier0_utils_base.h:361
void LessFunc(const CRenderMesh* const& lhs, const CRenderMesh* const& rhs)
{
} /* size: 14 */

// <0024DD3F> ../public/tier0/tier0_utils_base.h:363
void CompareFunc(const short unsigned int* lhs, const short unsigned int* rhs)
{
} /* size: 29 */

// <002322D2> ../public/tier0/tier0_utils_base.h:363
inline void CompareFunc(const short unsigned int* lhs, const short unsigned int* rhs)
{
} /* size: 0 */

