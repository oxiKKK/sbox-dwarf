
//
// kv3lib/keyvalues3_text.h
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

// <056C1029> kv3lib/keyvalues3_text.h:51
void CMetadataParseHelper::~CMetadataParseHelper()
{
} /* size: 0 */

// <056C100D> kv3lib/keyvalues3_text.h:51
inline void CMetadataParseHelper::~CMetadataParseHelper()
{
} /* size: 0 */

// <055DDC07> kv3lib/keyvalues3_text.h:51
// member functions: 10
// member variables: 3
// class size: 184
class CMetadataParseHelper {
	/* kv3lib/keyvalues3_text.h:54 */
	void CMetadataParseHelper(CMetadataParseHelper* , bool);
	/* kv3lib/keyvalues3_text.h:59 */
	void CopyPreamble(CMetadataParseHelper* , CUtlTokenizer* );
	/* kv3lib/keyvalues3_text.h:70 */
	void CopyPostamble(CMetadataParseHelper* , CUtlTokenizer* );
	/* kv3lib/keyvalues3_text.h:80 */
	void ApplyMetadata(CMetadataParseHelper* , KeyValues3* );
private:
	bool m_bEnabled; /* 0 1 */
	CBufferStringN<80> m_PreambleText; /* 8 88 */
	CBufferStringN<80> m_PostambleText; /* 96 88 */
	void ~CMetadataParseHelper(CMetadataParseHelper* );
	void CMetadataParseHelper(class CMetadataParseHelper *, bool); /* linkage=_ZN20CMetadataParseHelperC4Eb */
	void CopyPreamble(class CMetadataParseHelper *, class CUtlTokenizer *); /* linkage=_ZN20CMetadataParseHelper12CopyPreambleEP13CUtlTokenizer */
	void CopyPostamble(class CMetadataParseHelper *, class CUtlTokenizer *); /* linkage=_ZN20CMetadataParseHelper13CopyPostambleEP13CUtlTokenizer */
	void ApplyMetadata(class CMetadataParseHelper *, class KeyValues3 *); /* linkage=_ZN20CMetadataParseHelper13ApplyMetadataEP10KeyValues3 */
	void ~CMetadataParseHelper(class CMetadataParseHelper *); /* linkage=_ZN20CMetadataParseHelperD4Ev */
};

// <056C5726> kv3lib/keyvalues3_text.h:54
void CMetadataParseHelper::CMetadataParseHelper(bool bEnabled)
{
} /* size: 0 */

// <056C5701> kv3lib/keyvalues3_text.h:54
inline void CMetadataParseHelper::CMetadataParseHelper(bool bEnabled)
{
} /* size: 0 */

// <056C56DC> kv3lib/keyvalues3_text.h:59
inline void CMetadataParseHelper::CopyPreamble(CUtlTokenizer* pTokenizer)
{
} /* size: 0 */

// <056C56B7> kv3lib/keyvalues3_text.h:70
inline void CMetadataParseHelper::CopyPostamble(CUtlTokenizer* pTokenizer)
{
} /* size: 0 */

// <056C5692> kv3lib/keyvalues3_text.h:80
inline void CMetadataParseHelper::ApplyMetadata(KeyValues3* pTarget)
{
} /* size: 0 */

