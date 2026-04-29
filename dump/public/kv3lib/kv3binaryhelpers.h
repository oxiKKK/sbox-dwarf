
//
// public/kv3lib/kv3binaryhelpers.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//
//	functions: 7
//	class: 1
//

// <0561AA7E> ../public/kv3lib/kv3binaryhelpers.h:15
// member functions: 7
// class size: 1
class CKV3ExternalDataWriter {
	/* ../public/kv3lib/kv3binaryhelpers.h:19 */
	void AimAtExternalString(KeyValues3* , const char* );
	/* ../public/kv3lib/kv3binaryhelpers.h:25 */
	void AimAtExternalBinaryBlob(KeyValues3* , byte* , int);
	/* ../public/kv3lib/kv3binaryhelpers.h:32 */
	void TakeOwnershipOfBinaryBlob(KeyValues3* , byte* , int);
	/* ../public/kv3lib/kv3binaryhelpers.h:38 */
	KeyValues3* FindOrCreateMemberAimedAtExternalName(KeyValues3* , CKV3MemberName);
	/* ../public/kv3lib/kv3binaryhelpers.h:44 */
	void SetValueExternalDoubleArray(KeyValues3* , int, const double* );
	/* ../public/kv3lib/kv3binaryhelpers.h:50 */
	void SetValueExternalInt32Array(KeyValues3* , int, const int32* );
	/* ../public/kv3lib/kv3binaryhelpers.h:56 */
	CUtlBuffer* GetBinarySerializationBuffer(CKeyValues3Context* );
};

// <056705C9> ../public/kv3lib/kv3binaryhelpers.h:19
inline void AimAtExternalString(KeyValues3* pTarget, const char* pString)
{
} /* size: 0 */

// <05648F5F> ../public/kv3lib/kv3binaryhelpers.h:25
inline void AimAtExternalBinaryBlob(KeyValues3* pTarget, byte* pData, int nSize)
{
} /* size: 0 */

// <0567059A> ../public/kv3lib/kv3binaryhelpers.h:32
inline void TakeOwnershipOfBinaryBlob(KeyValues3* pTarget, byte* pData, int nSize)
{
} /* size: 0 */

// <05670577> ../public/kv3lib/kv3binaryhelpers.h:38
inline void FindOrCreateMemberAimedAtExternalName(KeyValues3* pTarget, CKV3MemberName memberNameAndHash)
{
} /* size: 0 */

// <05670548> ../public/kv3lib/kv3binaryhelpers.h:44
inline void SetValueExternalDoubleArray(KeyValues3* pTarget, int nFloatsInArray, const double* pValues)
{
} /* size: 0 */

// <05670519> ../public/kv3lib/kv3binaryhelpers.h:50
inline void SetValueExternalInt32Array(KeyValues3* pTarget, int nValues, const int32* pValues)
{
} /* size: 0 */

// <05670502> ../public/kv3lib/kv3binaryhelpers.h:56
inline void GetBinarySerializationBuffer(CKeyValues3Context* pContext)
{
} /* size: 0 */

