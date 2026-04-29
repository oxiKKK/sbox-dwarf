
//
// public/isaverestore.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 9
//	classes: 4
//	structs: 2
//

// <00DB232E> ../public/isaverestore.h:32
// member variables: 2
// struct size: 4
struct SaveRestoreRecordHeader_t {
	short unsigned int size; /* 0 2 */
	short unsigned int symbol; /* 2 2 */
};

// <00DABFF3> ../public/isaverestore.h:95
// member functions: 178
// member variable: 1
// vtable entries: 88
// class size: 8
class ISave {
	int ()(void) * * _vptr.ISave; /* 0 8 */
	/* ../public/isaverestore.h:99 */
	virtual void StartLogging(ISave* , const char* );
	/* ../public/isaverestore.h:100 */
	virtual void EndLogging(ISave* );
	/* ../public/isaverestore.h:103 */
	virtual bool IsAsync(ISave* );
	/* ../public/isaverestore.h:106 */
	virtual int GetWritePos(const ISave* );
	/* ../public/isaverestore.h:107 */
	virtual void SetWritePos(ISave* , int);
	/* ../public/isaverestore.h:113 */
	virtual int WriteAll(ISave* , const void* , datamap_t* );
	/* ../public/isaverestore.h:114 */
	virtual int WriteFields(ISave* , const char* , const void* , datamap_t* , typedescription_t* , int);
	/* ../public/isaverestore.h:129 */
	virtual void StartBlock(ISave* , const char* );
	/* ../public/isaverestore.h:130 */
	virtual void StartBlock(ISave* );
	/* ../public/isaverestore.h:131 */
	virtual void EndBlock(ISave* );
	/* ../public/isaverestore.h:137 */
	virtual void WriteShort(ISave* , const short int* , int);
	/* ../public/isaverestore.h:138 */
	virtual void WriteInt(ISave* , const int* , int);
	/* ../public/isaverestore.h:139 */
	virtual void WriteUInt32(ISave* , const uint32* , int);
	/* ../public/isaverestore.h:140 */
	virtual void WriteInt64(ISave* , const int64* , int);
	/* ../public/isaverestore.h:141 */
	virtual void WriteUInt64(ISave* , const uint64* , int);
	/* ../public/isaverestore.h:142 */
	virtual void WriteBool(ISave* , const bool* , int);
	/* ../public/isaverestore.h:143 */
	virtual void WriteFloat(ISave* , const float* , int);
	/* ../public/isaverestore.h:144 */
	virtual void WriteFloat64(ISave* , const float64* , int);
	/* ../public/isaverestore.h:145 */
	virtual void WriteData(ISave* , const char* , int);
	/* ../public/isaverestore.h:146 */
	virtual void WriteString(ISave* , const char* );
	/* ../public/isaverestore.h:147 */
	virtual void WriteString(ISave* , const string_t* , int);
	/* ../public/isaverestore.h:148 */
	virtual void WriteString(ISave* , const CUtlString* , int);
	/* ../public/isaverestore.h:149 */
	virtual void WriteVector(ISave* , const Vector& );
	/* ../public/isaverestore.h:150 */
	virtual void WriteVector(ISave* , const Vector* , int);
	/* ../public/isaverestore.h:151 */
	virtual void WriteVector2D(ISave* , const Vector2D& );
	/* ../public/isaverestore.h:152 */
	virtual void WriteVector2D(ISave* , const Vector2D* , int);
	/* ../public/isaverestore.h:153 */
	virtual void WriteVector4D(ISave* , const Vector4D& );
	/* ../public/isaverestore.h:154 */
	virtual void WriteVector4D(ISave* , const Vector4D* , int);
	/* ../public/isaverestore.h:155 */
	virtual void WriteQuaternion(ISave* , const Quaternion& );
	/* ../public/isaverestore.h:156 */
	virtual void WriteQuaternion(ISave* , const Quaternion* , int);
	/* ../public/isaverestore.h:157 */
	virtual void WriteVMatrix(ISave* , const VMatrix* , int);
	/* ../public/isaverestore.h:158 */
	virtual void WriteTransform(ISave* , const CTransform* , int);
	/* ../public/isaverestore.h:159 */
	virtual void WriteMotionTransform(ISave* , const CMotionTransform* , int);
	/* ../public/isaverestore.h:163 */
	virtual void WriteShort(ISave* , const char* , const short int* , int);
	/* ../public/isaverestore.h:164 */
	virtual void WriteInt(ISave* , const char* , const int* , int);
	/* ../public/isaverestore.h:165 */
	virtual void WriteUInt32(ISave* , const char* , const uint32* , int);
	/* ../public/isaverestore.h:166 */
	virtual void WriteInt64(ISave* , const char* , const int64* , int);
	/* ../public/isaverestore.h:167 */
	virtual void WriteUInt64(ISave* , const char* , const uint64* , int);
	/* ../public/isaverestore.h:168 */
	virtual void WriteBool(ISave* , const char* , const bool* , int);
	/* ../public/isaverestore.h:169 */
	virtual void WriteFloat(ISave* , const char* , const float* , int);
	/* ../public/isaverestore.h:170 */
	virtual void WriteFloat64(ISave* , const char* , const float64* , int);
	/* ../public/isaverestore.h:171 */
	virtual void WriteData(ISave* , const char* , int, const char* );
	/* ../public/isaverestore.h:172 */
	virtual void WriteString(ISave* , const char* , const char* );
	/* ../public/isaverestore.h:173 */
	virtual void WriteString(ISave* , const char* , const string_t* , int);
	/* ../public/isaverestore.h:174 */
	virtual void WriteString(ISave* , const char* , const CUtlString* , int);
	/* ../public/isaverestore.h:175 */
	virtual void WriteVector(ISave* , const char* , const Vector& );
	/* ../public/isaverestore.h:176 */
	virtual void WriteVector(ISave* , const char* , const Vector* , int);
	/* ../public/isaverestore.h:177 */
	virtual void WriteVector2D(ISave* , const char* , const Vector2D& );
	/* ../public/isaverestore.h:178 */
	virtual void WriteVector2D(ISave* , const char* , const Vector2D* , int);
	/* ../public/isaverestore.h:179 */
	virtual void WriteVector4D(ISave* , const char* , const Vector4D& );
	/* ../public/isaverestore.h:180 */
	virtual void WriteVector4D(ISave* , const char* , const Vector4D* , int);
	/* ../public/isaverestore.h:181 */
	virtual void WriteQuaternion(ISave* , const char* , const Quaternion& );
	/* ../public/isaverestore.h:182 */
	virtual void WriteQuaternion(ISave* , const char* , const Quaternion* , int);
	/* ../public/isaverestore.h:183 */
	virtual void WriteVMatrix(ISave* , const char* , const VMatrix* , int);
	/* ../public/isaverestore.h:184 */
	virtual void WriteTransform(ISave* , const char* , const CTransform* , int);
	/* ../public/isaverestore.h:185 */
	virtual void WriteMotionTransform(ISave* , const char* , const CMotionTransform* , int);
	/* ../public/isaverestore.h:191 */
	virtual void WriteTime(ISave* , const char* , const float* , int);
	/* ../public/isaverestore.h:192 */
	virtual void WriteTick(ISave* , const char* , const int* , int);
	/* ../public/isaverestore.h:193 */
	virtual void WritePositionVector(ISave* , const char* , const Vector& );
	/* ../public/isaverestore.h:194 */
	virtual void WritePositionVector(ISave* , const char* , const Vector* , int);
	/* ../public/isaverestore.h:196 */
	virtual void WriteTime(ISave* , const float* , int);
	/* ../public/isaverestore.h:197 */
	virtual void WriteTick(ISave* , const int* , int);
	/* ../public/isaverestore.h:198 */
	virtual void WritePositionVector(ISave* , const Vector& );
	/* ../public/isaverestore.h:199 */
	virtual void WritePositionVector(ISave* , const Vector* , int);
	/* ../public/isaverestore.h:201 */
	virtual void WriteVMatrixWorldspace(ISave* , const char* , const VMatrix* , int);
	/* ../public/isaverestore.h:202 */
	virtual void WriteVMatrixWorldspace(ISave* , const VMatrix* , int);
	/* ../public/isaverestore.h:204 */
	virtual void WriteMatrix3x4(ISave* , const matrix3x4_t* , int);
	/* ../public/isaverestore.h:205 */
	virtual void WriteMatrix3x4(ISave* , const char* , const matrix3x4_t* , int);
	/* ../public/isaverestore.h:207 */
	virtual void WriteMatrix3x4Worldspace(ISave* , const matrix3x4_t* , int);
	/* ../public/isaverestore.h:208 */
	virtual void WriteMatrix3x4Worldspace(ISave* , const char* , const matrix3x4_t* , int);
	/* ../public/isaverestore.h:210 */
	virtual void WriteTransformWorldspace(ISave* , const CTransform* , int);
	/* ../public/isaverestore.h:211 */
	virtual void WriteTransformWorldspace(ISave* , const char* , const CTransform* , int);
	/* ../public/isaverestore.h:213 */
	virtual void WriteMotionTransformWorldspace(ISave* , const CMotionTransform* , int);
	/* ../public/isaverestore.h:214 */
	virtual void WriteMotionTransformWorldspace(ISave* , const char* , const CMotionTransform* , int);
	/* ../public/isaverestore.h:216 */
	virtual void WriteInterval(ISave* , const interval_t* , int);
	/* ../public/isaverestore.h:217 */
	virtual void WriteInterval(ISave* , const char* , const interval_t* , int);
	/* ../public/isaverestore.h:219 */
	virtual void WriteNetworkQuantizedFloat(ISave* , const CNetworkedQuantizedFloat* , int);
	/* ../public/isaverestore.h:220 */
	virtual void WriteNetworkQuantizedFloat(ISave* , const char* , const CNetworkedQuantizedFloat* , int);
	/* ../public/isaverestore.h:225 */
	virtual CGameSaveRestoreInfo* GetGameSaveRestoreInfo(ISave* );
	/* ../public/isaverestore.h:226 */
	virtual CSaveRestoreLoggingInfo* GetSaveRestoreLogging(ISave* );
	/* ../public/isaverestore.h:229 */
	virtual void FlushDetailedSpew(ISave* , bool, const char* );
	/* ../public/isaverestore.h:230 */
	virtual void SetPreventDetailedSpew(ISave* , bool);
	/* ../public/isaverestore.h:232 */
	virtual void SetServerNetworked(ISave* , bool);
	/* ../public/isaverestore.h:233 */
	virtual bool IsServerNetworked(const ISave* );
	/* ../public/isaverestore.h:235 */
	virtual void AddIgnoreFieldByTypedescription(ISave* , const typedescription_t* );
	/* ../public/isaverestore.h:236 */
	virtual void RemoveIgnoreFieldByTypedescription(ISave* , const typedescription_t* );
	/* ../public/isaverestore.h:238 */
	virtual int IncrementFlushScope(ISave* );
	/* ../public/isaverestore.h:239 */
	virtual int DecrementFlushScope(ISave* );
protected:
	/* ../public/isaverestore.h:241 */
	virtual void ~ISave(ISave* );
	virtual void StartLogging(class ISave *, const char  *); /* linkage=_ZN5ISave12StartLoggingEPKc */
	virtual void EndLogging(class ISave *); /* linkage=_ZN5ISave10EndLoggingEv */
	virtual bool IsAsync(class ISave *); /* linkage=_ZN5ISave7IsAsyncEv */
	virtual int GetWritePos(const class ISave  *); /* linkage=_ZNK5ISave11GetWritePosEv */
	virtual void SetWritePos(class ISave *, int); /* linkage=_ZN5ISave11SetWritePosEi */
	virtual int WriteAll(class ISave *, const void  *, class datamap_t *); /* linkage=_ZN5ISave8WriteAllEPKvP9datamap_t */
	virtual int WriteFields(class ISave *, const char  *, const void  *, class datamap_t *, class typedescription_t *, int); /* linkage=_ZN5ISave11WriteFieldsEPKcPKvP9datamap_tP17typedescription_ti */
	virtual void StartBlock(class ISave *, const char  *); /* linkage=_ZN5ISave10StartBlockEPKc */
	virtual void StartBlock(class ISave *); /* linkage=_ZN5ISave10StartBlockEv */
	virtual void EndBlock(class ISave *); /* linkage=_ZN5ISave8EndBlockEv */
	virtual void WriteShort(class ISave *, const short int  *, int); /* linkage=_ZN5ISave10WriteShortEPKsi */
	virtual void WriteInt(class ISave *, const int  *, int); /* linkage=_ZN5ISave8WriteIntEPKii */
	virtual void WriteUInt32(class ISave *, const uint32  *, int); /* linkage=_ZN5ISave11WriteUInt32EPKji */
	virtual void WriteInt64(class ISave *, const int64  *, int); /* linkage=_ZN5ISave10WriteInt64EPKxi */
	virtual void WriteUInt64(class ISave *, const uint64  *, int); /* linkage=_ZN5ISave11WriteUInt64EPKyi */
	virtual void WriteBool(class ISave *, const bool  *, int); /* linkage=_ZN5ISave9WriteBoolEPKbi */
	virtual void WriteFloat(class ISave *, const float  *, int); /* linkage=_ZN5ISave10WriteFloatEPKfi */
	virtual void WriteFloat64(class ISave *, const float64  *, int); /* linkage=_ZN5ISave12WriteFloat64EPKdi */
	virtual void WriteData(class ISave *, const char  *, int); /* linkage=_ZN5ISave9WriteDataEPKci */
	virtual void WriteString(class ISave *, const char  *); /* linkage=_ZN5ISave11WriteStringEPKc */
	virtual void WriteString(class ISave *, const string_t  *, int); /* linkage=_ZN5ISave11WriteStringEPK15CUtlSymbolLargei */
	virtual void WriteString(class ISave *, const class CUtlString  *, int); /* linkage=_ZN5ISave11WriteStringEPK10CUtlStringi */
	virtual void WriteVector(class ISave *, const class Vector  &); /* linkage=_ZN5ISave11WriteVectorERK6Vector */
	virtual void WriteVector(class ISave *, const class Vector  *, int); /* linkage=_ZN5ISave11WriteVectorEPK6Vectori */
	virtual void WriteVector2D(class ISave *, const class Vector2D  &); /* linkage=_ZN5ISave13WriteVector2DERK8Vector2D */
	virtual void WriteVector2D(class ISave *, const class Vector2D  *, int); /* linkage=_ZN5ISave13WriteVector2DEPK8Vector2Di */
	virtual void WriteVector4D(class ISave *, const class Vector4D  &); /* linkage=_ZN5ISave13WriteVector4DERK8Vector4D */
	virtual void WriteVector4D(class ISave *, const class Vector4D  *, int); /* linkage=_ZN5ISave13WriteVector4DEPK8Vector4Di */
	virtual void WriteQuaternion(class ISave *, const class Quaternion  &); /* linkage=_ZN5ISave15WriteQuaternionERK10Quaternion */
	virtual void WriteQuaternion(class ISave *, const class Quaternion  *, int); /* linkage=_ZN5ISave15WriteQuaternionEPK10Quaternioni */
	virtual void WriteVMatrix(class ISave *, const class VMatrix  *, int); /* linkage=_ZN5ISave12WriteVMatrixEPK7VMatrixi */
	virtual void WriteTransform(class ISave *, const class CTransform  *, int); /* linkage=_ZN5ISave14WriteTransformEPK10CTransformi */
	virtual void WriteMotionTransform(class ISave *, const class CMotionTransform  *, int); /* linkage=_ZN5ISave20WriteMotionTransformEPK16CMotionTransformi */
	virtual void WriteShort(class ISave *, const char  *, const short int  *, int); /* linkage=_ZN5ISave10WriteShortEPKcPKsi */
	virtual void WriteInt(class ISave *, const char  *, const int  *, int); /* linkage=_ZN5ISave8WriteIntEPKcPKii */
	virtual void WriteUInt32(class ISave *, const char  *, const uint32  *, int); /* linkage=_ZN5ISave11WriteUInt32EPKcPKji */
	virtual void WriteInt64(class ISave *, const char  *, const int64  *, int); /* linkage=_ZN5ISave10WriteInt64EPKcPKxi */
	virtual void WriteUInt64(class ISave *, const char  *, const uint64  *, int); /* linkage=_ZN5ISave11WriteUInt64EPKcPKyi */
	virtual void WriteBool(class ISave *, const char  *, const bool  *, int); /* linkage=_ZN5ISave9WriteBoolEPKcPKbi */
	virtual void WriteFloat(class ISave *, const char  *, const float  *, int); /* linkage=_ZN5ISave10WriteFloatEPKcPKfi */
	virtual void WriteFloat64(class ISave *, const char  *, const float64  *, int); /* linkage=_ZN5ISave12WriteFloat64EPKcPKdi */
	virtual void WriteData(class ISave *, const char  *, int, const char  *); /* linkage=_ZN5ISave9WriteDataEPKciS1_ */
	virtual void WriteString(class ISave *, const char  *, const char  *); /* linkage=_ZN5ISave11WriteStringEPKcS1_ */
	virtual void WriteString(class ISave *, const char  *, const string_t  *, int); /* linkage=_ZN5ISave11WriteStringEPKcPK15CUtlSymbolLargei */
	virtual void WriteString(class ISave *, const char  *, const class CUtlString  *, int); /* linkage=_ZN5ISave11WriteStringEPKcPK10CUtlStringi */
	virtual void WriteVector(class ISave *, const char  *, const class Vector  &); /* linkage=_ZN5ISave11WriteVectorEPKcRK6Vector */
	virtual void WriteVector(class ISave *, const char  *, const class Vector  *, int); /* linkage=_ZN5ISave11WriteVectorEPKcPK6Vectori */
	virtual void WriteVector2D(class ISave *, const char  *, const class Vector2D  &); /* linkage=_ZN5ISave13WriteVector2DEPKcRK8Vector2D */
	virtual void WriteVector2D(class ISave *, const char  *, const class Vector2D  *, int); /* linkage=_ZN5ISave13WriteVector2DEPKcPK8Vector2Di */
	virtual void WriteVector4D(class ISave *, const char  *, const class Vector4D  &); /* linkage=_ZN5ISave13WriteVector4DEPKcRK8Vector4D */
	virtual void WriteVector4D(class ISave *, const char  *, const class Vector4D  *, int); /* linkage=_ZN5ISave13WriteVector4DEPKcPK8Vector4Di */
	virtual void WriteQuaternion(class ISave *, const char  *, const class Quaternion  &); /* linkage=_ZN5ISave15WriteQuaternionEPKcRK10Quaternion */
	virtual void WriteQuaternion(class ISave *, const char  *, const class Quaternion  *, int); /* linkage=_ZN5ISave15WriteQuaternionEPKcPK10Quaternioni */
	virtual void WriteVMatrix(class ISave *, const char  *, const class VMatrix  *, int); /* linkage=_ZN5ISave12WriteVMatrixEPKcPK7VMatrixi */
	virtual void WriteTransform(class ISave *, const char  *, const class CTransform  *, int); /* linkage=_ZN5ISave14WriteTransformEPKcPK10CTransformi */
	virtual void WriteMotionTransform(class ISave *, const char  *, const class CMotionTransform  *, int); /* linkage=_ZN5ISave20WriteMotionTransformEPKcPK16CMotionTransformi */
	virtual void WriteTime(class ISave *, const char  *, const float  *, int); /* linkage=_ZN5ISave9WriteTimeEPKcPKfi */
	virtual void WriteTick(class ISave *, const char  *, const int  *, int); /* linkage=_ZN5ISave9WriteTickEPKcPKii */
	virtual void WritePositionVector(class ISave *, const char  *, const class Vector  &); /* linkage=_ZN5ISave19WritePositionVectorEPKcRK6Vector */
	virtual void WritePositionVector(class ISave *, const char  *, const class Vector  *, int); /* linkage=_ZN5ISave19WritePositionVectorEPKcPK6Vectori */
	virtual void WriteTime(class ISave *, const float  *, int); /* linkage=_ZN5ISave9WriteTimeEPKfi */
	virtual void WriteTick(class ISave *, const int  *, int); /* linkage=_ZN5ISave9WriteTickEPKii */
	virtual void WritePositionVector(class ISave *, const class Vector  &); /* linkage=_ZN5ISave19WritePositionVectorERK6Vector */
	virtual void WritePositionVector(class ISave *, const class Vector  *, int); /* linkage=_ZN5ISave19WritePositionVectorEPK6Vectori */
	virtual void WriteVMatrixWorldspace(class ISave *, const char  *, const class VMatrix  *, int); /* linkage=_ZN5ISave22WriteVMatrixWorldspaceEPKcPK7VMatrixi */
	virtual void WriteVMatrixWorldspace(class ISave *, const class VMatrix  *, int); /* linkage=_ZN5ISave22WriteVMatrixWorldspaceEPK7VMatrixi */
	virtual void WriteMatrix3x4(class ISave *, const class matrix3x4_t  *, int); /* linkage=_ZN5ISave14WriteMatrix3x4EPK11matrix3x4_ti */
	virtual void WriteMatrix3x4(class ISave *, const char  *, const class matrix3x4_t  *, int); /* linkage=_ZN5ISave14WriteMatrix3x4EPKcPK11matrix3x4_ti */
	virtual void WriteMatrix3x4Worldspace(class ISave *, const class matrix3x4_t  *, int); /* linkage=_ZN5ISave24WriteMatrix3x4WorldspaceEPK11matrix3x4_ti */
	virtual void WriteMatrix3x4Worldspace(class ISave *, const char  *, const class matrix3x4_t  *, int); /* linkage=_ZN5ISave24WriteMatrix3x4WorldspaceEPKcPK11matrix3x4_ti */
	virtual void WriteTransformWorldspace(class ISave *, const class CTransform  *, int); /* linkage=_ZN5ISave24WriteTransformWorldspaceEPK10CTransformi */
	virtual void WriteTransformWorldspace(class ISave *, const char  *, const class CTransform  *, int); /* linkage=_ZN5ISave24WriteTransformWorldspaceEPKcPK10CTransformi */
	virtual void WriteMotionTransformWorldspace(class ISave *, const class CMotionTransform  *, int); /* linkage=_ZN5ISave30WriteMotionTransformWorldspaceEPK16CMotionTransformi */
	virtual void WriteMotionTransformWorldspace(class ISave *, const char  *, const class CMotionTransform  *, int); /* linkage=_ZN5ISave30WriteMotionTransformWorldspaceEPKcPK16CMotionTransformi */
	virtual void WriteInterval(class ISave *, const class interval_t  *, int); /* linkage=_ZN5ISave13WriteIntervalEPK10interval_ti */
	virtual void WriteInterval(class ISave *, const char  *, const class interval_t  *, int); /* linkage=_ZN5ISave13WriteIntervalEPKcPK10interval_ti */
	virtual void WriteNetworkQuantizedFloat(class ISave *, const class CNetworkedQuantizedFloat  *, int); /* linkage=_ZN5ISave26WriteNetworkQuantizedFloatEPK24CNetworkedQuantizedFloati */
	virtual void WriteNetworkQuantizedFloat(class ISave *, const char  *, const class CNetworkedQuantizedFloat  *, int); /* linkage=_ZN5ISave26WriteNetworkQuantizedFloatEPKcPK24CNetworkedQuantizedFloati */
	virtual class CGameSaveRestoreInfo * GetGameSaveRestoreInfo(class ISave *); /* linkage=_ZN5ISave22GetGameSaveRestoreInfoEv */
	virtual class CSaveRestoreLoggingInfo * GetSaveRestoreLogging(class ISave *); /* linkage=_ZN5ISave21GetSaveRestoreLoggingEv */
	virtual void FlushDetailedSpew(class ISave *, bool, const char  *); /* linkage=_ZN5ISave17FlushDetailedSpewEbPKc */
	virtual void SetPreventDetailedSpew(class ISave *, bool); /* linkage=_ZN5ISave22SetPreventDetailedSpewEb */
	virtual void SetServerNetworked(class ISave *, bool); /* linkage=_ZN5ISave18SetServerNetworkedEb */
	virtual bool IsServerNetworked(const class ISave  *); /* linkage=_ZNK5ISave17IsServerNetworkedEv */
	virtual void AddIgnoreFieldByTypedescription(class ISave *, const class typedescription_t  *); /* linkage=_ZN5ISave31AddIgnoreFieldByTypedescriptionEPK17typedescription_t */
	virtual void RemoveIgnoreFieldByTypedescription(class ISave *, const class typedescription_t  *); /* linkage=_ZN5ISave34RemoveIgnoreFieldByTypedescriptionEPK17typedescription_t */
	virtual int IncrementFlushScope(class ISave *); /* linkage=_ZN5ISave19IncrementFlushScopeEv */
	virtual int DecrementFlushScope(class ISave *); /* linkage=_ZN5ISave19DecrementFlushScopeEv */
	virtual void ~ISave(class ISave *); /* linkage=_ZN5ISaveD4Ev */
};

// <00DAD0E4> ../public/isaverestore.h:250
// member functions: 130
// member variable: 1
// vtable entries: 64
// class size: 8
class IRestore {
	int ()(void) * * _vptr.IRestore; /* 0 8 */
	/* ../public/isaverestore.h:254 */
	virtual void StartLogging(IRestore* , const char* );
	/* ../public/isaverestore.h:255 */
	virtual void EndLogging(IRestore* );
	/* ../public/isaverestore.h:258 */
	virtual int GetReadPos(const IRestore* );
	/* ../public/isaverestore.h:259 */
	virtual void SetReadPos(IRestore* , int);
	/* ../public/isaverestore.h:265 */
	virtual int ReadAll(IRestore* , void* , datamap_t* );
	/* ../public/isaverestore.h:267 */
	virtual int ReadFields(IRestore* , const char* , void* , datamap_t* , typedescription_t* , int);
	/* ../public/isaverestore.h:268 */
	virtual void EmptyFields(IRestore* , void* , typedescription_t* , int);
	/* ../public/isaverestore.h:280 */
	virtual void StartBlock(IRestore* , SaveRestoreRecordHeader_t* );
	/* ../public/isaverestore.h:281 */
	virtual void StartBlock(IRestore* , char* );
	/* ../public/isaverestore.h:282 */
	virtual void StartBlock(IRestore* );
	/* ../public/isaverestore.h:283 */
	virtual void EndBlock(IRestore* );
	/* ../public/isaverestore.h:289 */
	virtual void ReadHeader(IRestore* , SaveRestoreRecordHeader_t* );
	/* ../public/isaverestore.h:290 */
	virtual int SkipHeader(IRestore* );
	/* ../public/isaverestore.h:291 */
	virtual const char* StringFromHeaderSymbol(IRestore* , int);
	/* ../public/isaverestore.h:297 */
	virtual short int ReadShort(IRestore* );
	/* ../public/isaverestore.h:298 */
	virtual int ReadInt(IRestore* );
	/* ../public/isaverestore.h:299 */
	virtual uint32 ReadUInt32(IRestore* );
	/* ../public/isaverestore.h:300 */
	virtual int64 ReadInt64(IRestore* );
	/* ../public/isaverestore.h:301 */
	virtual uint64 ReadUInt64(IRestore* );
	/* ../public/isaverestore.h:302 */
	virtual int ReadVector(IRestore* , Vector* );
	/* ../public/isaverestore.h:303 */
	virtual int ReadVector2D(IRestore* , Vector2D* );
	/* ../public/isaverestore.h:304 */
	virtual int ReadVector4D(IRestore* , Vector4D* );
	/* ../public/isaverestore.h:305 */
	virtual int ReadQuaternion(IRestore* , Quaternion* );
	/* ../public/isaverestore.h:306 */
	virtual int ReadPositionVector(IRestore* , Vector* );
	/* ../public/isaverestore.h:307 */
	virtual void ReadString(IRestore* , char* , int, int);
	/* ../public/isaverestore.h:309 */
	virtual int ReadShort(IRestore* , short int* , int, int);
	/* ../public/isaverestore.h:310 */
	virtual int ReadInt(IRestore* , int* , int, int);
	/* ../public/isaverestore.h:311 */
	virtual uint32 ReadUInt32(IRestore* , uint32* , int, int);
	/* ../public/isaverestore.h:312 */
	virtual int64 ReadInt64(IRestore* , const char* , int64* , int, int);
	/* ../public/isaverestore.h:313 */
	virtual uint64 ReadUInt64(IRestore* , const char* , uint64* , int, int);
	/* ../public/isaverestore.h:314 */
	virtual int ReadBool(IRestore* , bool* , int, int);
	/* ../public/isaverestore.h:315 */
	virtual int ReadFloat(IRestore* , float* , int, int);
	/* ../public/isaverestore.h:316 */
	virtual int ReadFloat64(IRestore* , float64* , int, int);
	/* ../public/isaverestore.h:317 */
	virtual int ReadData(IRestore* , const char* , char* , int, int);
	/* ../public/isaverestore.h:318 */
	virtual int ReadString(IRestore* , string_t* , int, int);
	/* ../public/isaverestore.h:319 */
	virtual int ReadString(IRestore* , const char* , CUtlString* , int, int);
	/* ../public/isaverestore.h:320 */
	virtual int ReadVector(IRestore* , const char* , Vector* , int, int);
	/* ../public/isaverestore.h:321 */
	virtual int ReadVector2D(IRestore* , const char* , Vector2D* , int, int);
	/* ../public/isaverestore.h:322 */
	virtual int ReadVector4D(IRestore* , const char* , Vector4D* , int, int);
	/* ../public/isaverestore.h:323 */
	virtual int ReadQuaternion(IRestore* , const char* , Quaternion* , int, int);
	/* ../public/isaverestore.h:329 */
	virtual int ReadTime(IRestore* , const char* , float* , int, int);
	/* ../public/isaverestore.h:330 */
	virtual int ReadTick(IRestore* , const char* , int* , int, int);
	/* ../public/isaverestore.h:331 */
	virtual int ReadPositionVector(IRestore* , const char* , Vector* , int, int);
	/* ../public/isaverestore.h:333 */
	virtual int ReadVMatrix(IRestore* , const char* , VMatrix* , int, int);
	/* ../public/isaverestore.h:334 */
	virtual int ReadVMatrixWorldspace(IRestore* , const char* , VMatrix* , int, int);
	/* ../public/isaverestore.h:335 */
	virtual int ReadMatrix3x4(IRestore* , const char* , matrix3x4_t* , int, int);
	/* ../public/isaverestore.h:336 */
	virtual int ReadMatrix3x4Worldspace(IRestore* , const char* , matrix3x4_t* , int, int);
	/* ../public/isaverestore.h:337 */
	virtual int ReadTransform(IRestore* , const char* , CTransform* , int, int);
	/* ../public/isaverestore.h:338 */
	virtual int ReadTransformWorldspace(IRestore* , const char* , CTransform* , int, int);
	/* ../public/isaverestore.h:339 */
	virtual int ReadMotionTransform(IRestore* , const char* , CMotionTransform* , int, int);
	/* ../public/isaverestore.h:340 */
	virtual int ReadMotionTransformWorldspace(IRestore* , const char* , CMotionTransform* , int, int);
	/* ../public/isaverestore.h:341 */
	virtual int ReadInterval(IRestore* , const char* , interval_t* , int, int);
	/* ../public/isaverestore.h:342 */
	virtual int ReadNetworkQuantizedFloat(IRestore* , const char* , CNetworkedQuantizedFloat* , int, int);
	/* ../public/isaverestore.h:343 */
	virtual int ReadQAngleWorldspace(IRestore* , const char* , QAngle* , int, int);
	/* ../public/isaverestore.h:345 */
	virtual void SkipEntityData(IRestore* );
	/* ../public/isaverestore.h:349 */
	virtual bool GetPrecacheMode(IRestore* );
	/* ../public/isaverestore.h:353 */
	virtual CGameSaveRestoreInfo* GetGameSaveRestoreInfo(IRestore* );
	/* ../public/isaverestore.h:354 */
	virtual CSaveRestoreLoggingInfo* GetSaveRestoreLogging(IRestore* );
	/* ../public/isaverestore.h:357 */
	virtual void FlushDetailedSpew(IRestore* , bool, const char* );
	/* ../public/isaverestore.h:358 */
	virtual void SetPreventDetailedSpew(IRestore* , bool);
	/* ../public/isaverestore.h:360 */
	virtual void SetServerNetworked(IRestore* , bool);
	/* ../public/isaverestore.h:361 */
	virtual bool IsServerNetworked(const IRestore* );
	/* ../public/isaverestore.h:363 */
	virtual int IncrementFlushScope(IRestore* );
	/* ../public/isaverestore.h:364 */
	virtual int DecrementFlushScope(IRestore* );
protected:
	/* ../public/isaverestore.h:367 */
	virtual void ~IRestore(IRestore* );
	virtual void StartLogging(class IRestore *, const char  *); /* linkage=_ZN8IRestore12StartLoggingEPKc */
	virtual void EndLogging(class IRestore *); /* linkage=_ZN8IRestore10EndLoggingEv */
	virtual int GetReadPos(const class IRestore  *); /* linkage=_ZNK8IRestore10GetReadPosEv */
	virtual void SetReadPos(class IRestore *, int); /* linkage=_ZN8IRestore10SetReadPosEi */
	virtual int ReadAll(class IRestore *, void *, class datamap_t *); /* linkage=_ZN8IRestore7ReadAllEPvP9datamap_t */
	virtual int ReadFields(class IRestore *, const char  *, void *, class datamap_t *, class typedescription_t *, int); /* linkage=_ZN8IRestore10ReadFieldsEPKcPvP9datamap_tP17typedescription_ti */
	virtual void EmptyFields(class IRestore *, void *, class typedescription_t *, int); /* linkage=_ZN8IRestore11EmptyFieldsEPvP17typedescription_ti */
	virtual void StartBlock(class IRestore *, class SaveRestoreRecordHeader_t *); /* linkage=_ZN8IRestore10StartBlockEP25SaveRestoreRecordHeader_t */
	virtual void StartBlock(class IRestore *, char *); /* linkage=_ZN8IRestore10StartBlockEPc */
	virtual void StartBlock(class IRestore *); /* linkage=_ZN8IRestore10StartBlockEv */
	virtual void EndBlock(class IRestore *); /* linkage=_ZN8IRestore8EndBlockEv */
	virtual void ReadHeader(class IRestore *, class SaveRestoreRecordHeader_t *); /* linkage=_ZN8IRestore10ReadHeaderEP25SaveRestoreRecordHeader_t */
	virtual int SkipHeader(class IRestore *); /* linkage=_ZN8IRestore10SkipHeaderEv */
	virtual const char  * StringFromHeaderSymbol(class IRestore *, int); /* linkage=_ZN8IRestore22StringFromHeaderSymbolEi */
	virtual short int ReadShort(class IRestore *); /* linkage=_ZN8IRestore9ReadShortEv */
	virtual int ReadInt(class IRestore *); /* linkage=_ZN8IRestore7ReadIntEv */
	virtual uint32 ReadUInt32(class IRestore *); /* linkage=_ZN8IRestore10ReadUInt32Ev */
	virtual int64 ReadInt64(class IRestore *); /* linkage=_ZN8IRestore9ReadInt64Ev */
	virtual uint64 ReadUInt64(class IRestore *); /* linkage=_ZN8IRestore10ReadUInt64Ev */
	virtual int ReadVector(class IRestore *, class Vector *); /* linkage=_ZN8IRestore10ReadVectorEP6Vector */
	virtual int ReadVector2D(class IRestore *, class Vector2D *); /* linkage=_ZN8IRestore12ReadVector2DEP8Vector2D */
	virtual int ReadVector4D(class IRestore *, class Vector4D *); /* linkage=_ZN8IRestore12ReadVector4DEP8Vector4D */
	virtual int ReadQuaternion(class IRestore *, class Quaternion *); /* linkage=_ZN8IRestore14ReadQuaternionEP10Quaternion */
	virtual int ReadPositionVector(class IRestore *, class Vector *); /* linkage=_ZN8IRestore18ReadPositionVectorEP6Vector */
	virtual void ReadString(class IRestore *, char *, int, int); /* linkage=_ZN8IRestore10ReadStringEPcii */
	virtual int ReadShort(class IRestore *, short int *, int, int); /* linkage=_ZN8IRestore9ReadShortEPsii */
	virtual int ReadInt(class IRestore *, int *, int, int); /* linkage=_ZN8IRestore7ReadIntEPiii */
	virtual uint32 ReadUInt32(class IRestore *, uint32 *, int, int); /* linkage=_ZN8IRestore10ReadUInt32EPjii */
	virtual int64 ReadInt64(class IRestore *, const char  *, int64 *, int, int); /* linkage=_ZN8IRestore9ReadInt64EPKcPxii */
	virtual uint64 ReadUInt64(class IRestore *, const char  *, uint64 *, int, int); /* linkage=_ZN8IRestore10ReadUInt64EPKcPyii */
	virtual int ReadBool(class IRestore *, bool *, int, int); /* linkage=_ZN8IRestore8ReadBoolEPbii */
	virtual int ReadFloat(class IRestore *, float *, int, int); /* linkage=_ZN8IRestore9ReadFloatEPfii */
	virtual int ReadFloat64(class IRestore *, float64 *, int, int); /* linkage=_ZN8IRestore11ReadFloat64EPdii */
	virtual int ReadData(class IRestore *, const char  *, char *, int, int); /* linkage=_ZN8IRestore8ReadDataEPKcPcii */
	virtual int ReadString(class IRestore *, string_t *, int, int); /* linkage=_ZN8IRestore10ReadStringEP15CUtlSymbolLargeii */
	virtual int ReadString(class IRestore *, const char  *, class CUtlString *, int, int); /* linkage=_ZN8IRestore10ReadStringEPKcP10CUtlStringii */
	virtual int ReadVector(class IRestore *, const char  *, class Vector *, int, int); /* linkage=_ZN8IRestore10ReadVectorEPKcP6Vectorii */
	virtual int ReadVector2D(class IRestore *, const char  *, class Vector2D *, int, int); /* linkage=_ZN8IRestore12ReadVector2DEPKcP8Vector2Dii */
	virtual int ReadVector4D(class IRestore *, const char  *, class Vector4D *, int, int); /* linkage=_ZN8IRestore12ReadVector4DEPKcP8Vector4Dii */
	virtual int ReadQuaternion(class IRestore *, const char  *, class Quaternion *, int, int); /* linkage=_ZN8IRestore14ReadQuaternionEPKcP10Quaternionii */
	virtual int ReadTime(class IRestore *, const char  *, float *, int, int); /* linkage=_ZN8IRestore8ReadTimeEPKcPfii */
	virtual int ReadTick(class IRestore *, const char  *, int *, int, int); /* linkage=_ZN8IRestore8ReadTickEPKcPiii */
	virtual int ReadPositionVector(class IRestore *, const char  *, class Vector *, int, int); /* linkage=_ZN8IRestore18ReadPositionVectorEPKcP6Vectorii */
	virtual int ReadVMatrix(class IRestore *, const char  *, class VMatrix *, int, int); /* linkage=_ZN8IRestore11ReadVMatrixEPKcP7VMatrixii */
	virtual int ReadVMatrixWorldspace(class IRestore *, const char  *, class VMatrix *, int, int); /* linkage=_ZN8IRestore21ReadVMatrixWorldspaceEPKcP7VMatrixii */
	virtual int ReadMatrix3x4(class IRestore *, const char  *, class matrix3x4_t *, int, int); /* linkage=_ZN8IRestore13ReadMatrix3x4EPKcP11matrix3x4_tii */
	virtual int ReadMatrix3x4Worldspace(class IRestore *, const char  *, class matrix3x4_t *, int, int); /* linkage=_ZN8IRestore23ReadMatrix3x4WorldspaceEPKcP11matrix3x4_tii */
	virtual int ReadTransform(class IRestore *, const char  *, class CTransform *, int, int); /* linkage=_ZN8IRestore13ReadTransformEPKcP10CTransformii */
	virtual int ReadTransformWorldspace(class IRestore *, const char  *, class CTransform *, int, int); /* linkage=_ZN8IRestore23ReadTransformWorldspaceEPKcP10CTransformii */
	virtual int ReadMotionTransform(class IRestore *, const char  *, class CMotionTransform *, int, int); /* linkage=_ZN8IRestore19ReadMotionTransformEPKcP16CMotionTransformii */
	virtual int ReadMotionTransformWorldspace(class IRestore *, const char  *, class CMotionTransform *, int, int); /* linkage=_ZN8IRestore29ReadMotionTransformWorldspaceEPKcP16CMotionTransformii */
	virtual int ReadInterval(class IRestore *, const char  *, class interval_t *, int, int); /* linkage=_ZN8IRestore12ReadIntervalEPKcP10interval_tii */
	virtual int ReadNetworkQuantizedFloat(class IRestore *, const char  *, class CNetworkedQuantizedFloat *, int, int); /* linkage=_ZN8IRestore25ReadNetworkQuantizedFloatEPKcP24CNetworkedQuantizedFloatii */
	virtual int ReadQAngleWorldspace(class IRestore *, const char  *, class QAngle *, int, int); /* linkage=_ZN8IRestore20ReadQAngleWorldspaceEPKcP6QAngleii */
	virtual void SkipEntityData(class IRestore *); /* linkage=_ZN8IRestore14SkipEntityDataEv */
	virtual bool GetPrecacheMode(class IRestore *); /* linkage=_ZN8IRestore15GetPrecacheModeEv */
	virtual class CGameSaveRestoreInfo * GetGameSaveRestoreInfo(class IRestore *); /* linkage=_ZN8IRestore22GetGameSaveRestoreInfoEv */
	virtual class CSaveRestoreLoggingInfo * GetSaveRestoreLogging(class IRestore *); /* linkage=_ZN8IRestore21GetSaveRestoreLoggingEv */
	virtual void FlushDetailedSpew(class IRestore *, bool, const char  *); /* linkage=_ZN8IRestore17FlushDetailedSpewEbPKc */
	virtual void SetPreventDetailedSpew(class IRestore *, bool); /* linkage=_ZN8IRestore22SetPreventDetailedSpewEb */
	virtual void SetServerNetworked(class IRestore *, bool); /* linkage=_ZN8IRestore18SetServerNetworkedEb */
	virtual bool IsServerNetworked(const class IRestore  *); /* linkage=_ZNK8IRestore17IsServerNetworkedEv */
	virtual int IncrementFlushScope(class IRestore *); /* linkage=_ZN8IRestore19IncrementFlushScopeEv */
	virtual int DecrementFlushScope(class IRestore *); /* linkage=_ZN8IRestore19DecrementFlushScopeEv */
	virtual void ~IRestore(class IRestore *); /* linkage=_ZN8IRestoreD4Ev */
};

// <018D3402> ../public/isaverestore.h:375
// member variables: 3
// struct size: 24
struct SaveRestoreFieldInfo_t {
	void * pField; /* 0 8 */
	void * pOwner; /* 8 8 */
	typedescription_t * pTypeDesc; /* 16 8 */
};

// <0191B9CF> ../public/isaverestore.h:385
void ISaveRestoreOps::ISaveRestoreOps()
{
} /* size: 0 */

// <0191B9B1> ../public/isaverestore.h:385
inline void ISaveRestoreOps::ISaveRestoreOps()
{
} /* size: 0 */

// <018A1103> ../public/isaverestore.h:385
// member functions: 28
// member variable: 1
// vtable entries: 5
// class size: 8
class ISaveRestoreOps {
	void ~ISaveRestoreOps(ISaveRestoreOps* );
	void ISaveRestoreOps(ISaveRestoreOps* , ISaveRestoreOps& );
	void ISaveRestoreOps(ISaveRestoreOps* , const ISaveRestoreOps& );
	void ISaveRestoreOps(ISaveRestoreOps* );
	int ()(void) * * _vptr.ISaveRestoreOps; /* 0 8 */
	/* ../public/isaverestore.h:389 */
	virtual void Save(ISaveRestoreOps* , const SaveRestoreFieldInfo_t& , ISave* );
	/* ../public/isaverestore.h:390 */
	virtual void Restore(ISaveRestoreOps* , const SaveRestoreFieldInfo_t& , IRestore* );
	/* ../public/isaverestore.h:392 */
	virtual bool IsEmpty(ISaveRestoreOps* , const SaveRestoreFieldInfo_t& );
	/* ../public/isaverestore.h:393 */
	virtual void MakeEmpty(ISaveRestoreOps* , const SaveRestoreFieldInfo_t& );
	/* ../public/isaverestore.h:394 */
	virtual bool Parse(ISaveRestoreOps* , const SaveRestoreFieldInfo_t& , const char* );
	/* ../public/isaverestore.h:398 */
	void Save(ISaveRestoreOps* , void* , ISave* );
	/* ../public/isaverestore.h:399 */
	void Restore(ISaveRestoreOps* , void* , IRestore* );
	/* ../public/isaverestore.h:401 */
	bool IsEmpty(ISaveRestoreOps* , void* );
	/* ../public/isaverestore.h:402 */
	void MakeEmpty(ISaveRestoreOps* , void* );
	/* ../public/isaverestore.h:403 */
	bool Parse(ISaveRestoreOps* , void* , const char* );
	void ~ISaveRestoreOps(class ISaveRestoreOps *); /* linkage=_ZN15ISaveRestoreOpsD4Ev */
	void ISaveRestoreOps(class ISaveRestoreOps *, class ISaveRestoreOps &); /* linkage=_ZN15ISaveRestoreOpsC4EOS_ */
	void ISaveRestoreOps(class ISaveRestoreOps *, const class ISaveRestoreOps  &); /* linkage=_ZN15ISaveRestoreOpsC4ERKS_ */
	void ISaveRestoreOps(class ISaveRestoreOps *); /* linkage=_ZN15ISaveRestoreOpsC4Ev */
	virtual void Save(class ISaveRestoreOps *, const class SaveRestoreFieldInfo_t  &, class ISave *); /* linkage=_ZN15ISaveRestoreOps4SaveERK22SaveRestoreFieldInfo_tP5ISave */
	virtual void Restore(class ISaveRestoreOps *, const class SaveRestoreFieldInfo_t  &, class IRestore *); /* linkage=_ZN15ISaveRestoreOps7RestoreERK22SaveRestoreFieldInfo_tP8IRestore */
	virtual bool IsEmpty(class ISaveRestoreOps *, const class SaveRestoreFieldInfo_t  &); /* linkage=_ZN15ISaveRestoreOps7IsEmptyERK22SaveRestoreFieldInfo_t */
	virtual void MakeEmpty(class ISaveRestoreOps *, const class SaveRestoreFieldInfo_t  &); /* linkage=_ZN15ISaveRestoreOps9MakeEmptyERK22SaveRestoreFieldInfo_t */
	virtual bool Parse(class ISaveRestoreOps *, const class SaveRestoreFieldInfo_t  &, const char  *); /* linkage=_ZN15ISaveRestoreOps5ParseERK22SaveRestoreFieldInfo_tPKc */
	void Save(class ISaveRestoreOps *, void *, class ISave *); /* linkage=_ZN15ISaveRestoreOps4SaveEPvP5ISave */
	void Restore(class ISaveRestoreOps *, void *, class IRestore *); /* linkage=_ZN15ISaveRestoreOps7RestoreEPvP8IRestore */
	bool IsEmpty(class ISaveRestoreOps *, void *); /* linkage=_ZN15ISaveRestoreOps7IsEmptyEPv */
	void MakeEmpty(class ISaveRestoreOps *, void *); /* linkage=_ZN15ISaveRestoreOps9MakeEmptyEPv */
	bool Parse(class ISaveRestoreOps *, void *, const char  *); /* linkage=_ZN15ISaveRestoreOps5ParseEPvPKc */
};

// <0191B99A> ../public/isaverestore.h:408
void CDefSaveRestoreOps::CDefSaveRestoreOps()
{
} /* size: 0 */

// <0191B97C> ../public/isaverestore.h:408
inline void CDefSaveRestoreOps::CDefSaveRestoreOps()
{
} /* size: 0 */

// <0190F418> ../public/isaverestore.h:408
// member functions: 18
// member variable: 1
// vtable entries: 5
// class size: 8
class CDefSaveRestoreOps : public ISaveRestoreOps {
public:
	/* class ISaveRestoreOps <ancestor>; */ /* 0 8 */
	void ~CDefSaveRestoreOps(CDefSaveRestoreOps* );
	void CDefSaveRestoreOps(CDefSaveRestoreOps* , CDefSaveRestoreOps& );
	void CDefSaveRestoreOps(CDefSaveRestoreOps* , const CDefSaveRestoreOps& );
	void CDefSaveRestoreOps(CDefSaveRestoreOps* );
	/* ../public/isaverestore.h:412 */
	virtual void Save(CDefSaveRestoreOps* , const SaveRestoreFieldInfo_t& , ISave* );
	/* ../public/isaverestore.h:413 */
	virtual void Restore(CDefSaveRestoreOps* , const SaveRestoreFieldInfo_t& , IRestore* );
	/* ../public/isaverestore.h:415 */
	virtual bool IsEmpty(CDefSaveRestoreOps* , const SaveRestoreFieldInfo_t& );
	/* ../public/isaverestore.h:416 */
	virtual void MakeEmpty(CDefSaveRestoreOps* , const SaveRestoreFieldInfo_t& );
	/* ../public/isaverestore.h:417 */
	virtual bool Parse(CDefSaveRestoreOps* , const SaveRestoreFieldInfo_t& , const char* );
	void ~CDefSaveRestoreOps(class CDefSaveRestoreOps *); /* linkage=_ZN18CDefSaveRestoreOpsD4Ev */
	void CDefSaveRestoreOps(class CDefSaveRestoreOps *, class CDefSaveRestoreOps &); /* linkage=_ZN18CDefSaveRestoreOpsC4EOS_ */
	void CDefSaveRestoreOps(class CDefSaveRestoreOps *, const class CDefSaveRestoreOps  &); /* linkage=_ZN18CDefSaveRestoreOpsC4ERKS_ */
	void CDefSaveRestoreOps(class CDefSaveRestoreOps *); /* linkage=_ZN18CDefSaveRestoreOpsC4Ev */
	virtual void Save(class CDefSaveRestoreOps *, const class SaveRestoreFieldInfo_t  &, class ISave *); /* linkage=_ZN18CDefSaveRestoreOps4SaveERK22SaveRestoreFieldInfo_tP5ISave */
	virtual void Restore(class CDefSaveRestoreOps *, const class SaveRestoreFieldInfo_t  &, class IRestore *); /* linkage=_ZN18CDefSaveRestoreOps7RestoreERK22SaveRestoreFieldInfo_tP8IRestore */
	virtual bool IsEmpty(class CDefSaveRestoreOps *, const class SaveRestoreFieldInfo_t  &); /* linkage=_ZN18CDefSaveRestoreOps7IsEmptyERK22SaveRestoreFieldInfo_t */
	virtual void MakeEmpty(class CDefSaveRestoreOps *, const class SaveRestoreFieldInfo_t  &); /* linkage=_ZN18CDefSaveRestoreOps9MakeEmptyERK22SaveRestoreFieldInfo_t */
	virtual bool Parse(class CDefSaveRestoreOps *, const class SaveRestoreFieldInfo_t  &, const char  *); /* linkage=_ZN18CDefSaveRestoreOps5ParseERK22SaveRestoreFieldInfo_tPKc */
};

// <0197102F> ../public/isaverestore.h:412
void CDefSaveRestoreOps::Save(const SaveRestoreFieldInfo_t& fieldInfo, ISave* pSave)
{
} /* size: 0 */

// <01970FFC> ../public/isaverestore.h:413
void CDefSaveRestoreOps::Restore(const SaveRestoreFieldInfo_t& fieldInfo, IRestore* pRestore)
{
} /* size: 0 */

// <01970FD6> ../public/isaverestore.h:415
void CDefSaveRestoreOps::IsEmpty(const SaveRestoreFieldInfo_t& fieldInfo)
{
} /* size: 0 */

// <01970FB0> ../public/isaverestore.h:416
void CDefSaveRestoreOps::MakeEmpty(const SaveRestoreFieldInfo_t& fieldInfo)
{
} /* size: 0 */

// <01970F62> ../public/isaverestore.h:417
void CDefSaveRestoreOps::Parse(const SaveRestoreFieldInfo_t& fieldInfo, const char* szValue)
{
} /* size: 7 */

