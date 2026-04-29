
//
// kv3lib/kv3format_manager.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//
//	functions: 12
//	classes: 3
//	struct: 1
//

// <0572F3FE> kv3lib/kv3format_manager.h:14
void KV3FormatConversionContext_t::KV3FormatConversionContext_t()
{
} /* size: 0 */

// <0572F3E2> kv3lib/kv3format_manager.h:14
inline void KV3FormatConversionContext_t::KV3FormatConversionContext_t()
{
} /* size: 0 */

// <0572F3CB> kv3lib/kv3format_manager.h:14
void KV3FormatConversionContext_t::~KV3FormatConversionContext_t()
{
} /* size: 0 */

// <0572F3AF> kv3lib/kv3format_manager.h:14
inline void KV3FormatConversionContext_t::~KV3FormatConversionContext_t()
{
} /* size: 0 */

// <05727632> kv3lib/kv3format_manager.h:14
// member functions: 2
// member variables: 2
// struct size: 16
struct KV3FormatConversionContext_t {
	CUtlString m_OutError; /* 0 8 */
	KeyValues3 * m_pRoot; /* 8 8 */
	void ~KV3FormatConversionContext_t(KV3FormatConversionContext_t* );
	void KV3FormatConversionContext_t(KV3FormatConversionContext_t* );
};

// <057276D7> kv3lib/kv3format_manager.h:31
// member functions: 15
// member variable: 1
// class size: 32
class CKV3FormatManager {
	/* kv3lib/kv3format_manager.h:42 */
	struct Conversion_t {
		/* kv3lib/kv3format_manager.h:44 */
		void Conversion_t(Conversion_t* , const KV3ID_t& , const KV3ID_t& , ConversionFn_t);
		ConversionFn_t m_pConversionFn; /* 0 8 */
		KV3ID_t m_FromFormat; /* 8 24 */
		KV3ID_t m_ToFormat; /* 32 24 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* kv3lib/kv3format_manager.h:34 */
	void CKV3FormatManager(CKV3FormatManager* );
	/* kv3lib/kv3format_manager.h:35 */
	void ~CKV3FormatManager(CKV3FormatManager* );
	/* kv3lib/kv3format_manager.h:36 */
	bool Convert(CKV3FormatManager* , KeyValues3* , const KV3ID_t& , const KV3ID_t& , CUtlString* );
private:
	/* kv3lib/kv3format_manager.h:39 */
	void HookUpRegisteredConversions(CKV3FormatManager* );
	/* kv3lib/kv3format_manager.h:40 */
	void RegisterFormatConversion(CKV3FormatManager* , const KV3ID_t& , const KV3ID_t& , ConversionFn_t);
	/* kv3lib/kv3format_manager.h:58 */
	bool FindConversionPath(const CKV3FormatManager* , ConversionPath_t* , const KV3ID_t& , const KV3ID_t& );
	/* kv3lib/kv3format_manager.h:56 */
	typedef struct CUtlVectorFixedGrowable<const CKV3FormatManager::Conversion_t*, 8> ConversionPath_t;
	/* kv3lib/kv3format_manager.h:59 */
	bool FindConversionPath_R(const CKV3FormatManager* , ConversionPath_t* , CUtlVector<int, CUtlMemory<int, int> >& , const KV3ID_t& , const KV3ID_t& );
	CUtlVector<CKV3FormatManager::Conversion_t*, CUtlMemory<CKV3FormatManager::Conversion_t*, int> > m_AllConversions; /* 0 32 */
	void CKV3FormatManager(class CKV3FormatManager *); /* linkage=_ZN17CKV3FormatManagerC4Ev */
	void ~CKV3FormatManager(class CKV3FormatManager *); /* linkage=_ZN17CKV3FormatManagerD4Ev */
	bool Convert(class CKV3FormatManager *, class KeyValues3 *, const class KV3ID_t  &, const class KV3ID_t  &, class CUtlString *); /* linkage=_ZN17CKV3FormatManager7ConvertEP10KeyValues3RK7KV3ID_tS4_P10CUtlString */
	void HookUpRegisteredConversions(class CKV3FormatManager *); /* linkage=_ZN17CKV3FormatManager27HookUpRegisteredConversionsEv */
	void RegisterFormatConversion(class CKV3FormatManager *, const class KV3ID_t  &, const class KV3ID_t  &, ConversionFn_t); /* linkage=_ZN17CKV3FormatManager24RegisterFormatConversionERK7KV3ID_tS2_PF27KV3FormatConversionResult_tR28KV3FormatConversionContext_tE */
	bool FindConversionPath(const class CKV3FormatManager  *, ConversionPath_t *, const class KV3ID_t  &, const class KV3ID_t  &); /* linkage=_ZNK17CKV3FormatManager18FindConversionPathEP23CUtlVectorFixedGrowableIPKNS_12Conversion_tELm8EERK7KV3ID_tS8_ */
	bool FindConversionPath_R(const class CKV3FormatManager  *, ConversionPath_t *, class CUtlVector<int, CUtlMemory<int, int> > &, const class KV3ID_t  &, const class KV3ID_t  &); /* linkage=_ZNK17CKV3FormatManager20FindConversionPath_REP23CUtlVectorFixedGrowableIPKNS_12Conversion_tELm8EER10CUtlVectorIi10CUtlMemoryIiiEERK7KV3ID_tSD_ */
};

// <05731EEF> kv3lib/kv3format_manager.h:44
void Conversion_t::Conversion_t(const KV3ID_t& fromFormat, const KV3ID_t& toFormat, ConversionFn_t pConversionFn)
{
} /* size: 0 */

// <05731EB2> kv3lib/kv3format_manager.h:44
inline void Conversion_t::Conversion_t(const KV3ID_t& fromFormat, const KV3ID_t& toFormat, ConversionFn_t pConversionFn)
{
} /* size: 0 */

// <057291CF> kv3lib/kv3format_manager.h:69
// member functions: 2
// member variables: 4
// static member variable: 1
// class size: 32
class CKV3FormatConversionRegistration {
	/* kv3lib/kv3format_manager.h:72 */
	void CKV3FormatConversionRegistration(CKV3FormatConversionRegistration* , const KV3ID_t& , const KV3ID_t& , ConversionFn_t);
	const class KV3ID_t & m_FromFormat; /* 0 8 */
	const class KV3ID_t & m_ToFormat; /* 8 8 */
	ConversionFn_t m_pConversionFn; /* 16 8 */
	CKV3FormatConversionRegistration * m_pNextUnhandledRegistration; /* 24 8 */
	static class CKV3FormatConversionRegistration * s_pUnhandledRegistration; /* 0 0 */
	void CKV3FormatConversionRegistration(class CKV3FormatConversionRegistration *, const class KV3ID_t  &, const class KV3ID_t  &, ConversionFn_t); /* linkage=_ZN32CKV3FormatConversionRegistrationC4ERK7KV3ID_tS2_PF27KV3FormatConversionResult_tR28KV3FormatConversionContext_tE */
};

// <057A594F> kv3lib/kv3format_manager.h:72
void CKV3FormatConversionRegistration::CKV3FormatConversionRegistration(const KV3ID_t& fromFormat, const KV3ID_t& toFormat, ConversionFn_t pConversionFn)
{
} /* size: 0 */

// <057A5912> kv3lib/kv3format_manager.h:72
inline void CKV3FormatConversionRegistration::CKV3FormatConversionRegistration(const KV3ID_t& fromFormat, const KV3ID_t& toFormat, ConversionFn_t pConversionFn)
{
} /* size: 0 */

// <0573FC94> kv3lib/kv3format_manager.h:104
// member functions: 2
// member variables: 3
// class size: 40
class KV3UpconverterInfo_t {
	/* kv3lib/kv3format_manager.h:107 */
	void KV3UpconverterInfo_t(KV3UpconverterInfo_t* , const KV3ID_t& , const char* , bool);
	KV3ID_t m_CurrentFormat; /* 0 24 */
	const char * m_pExtension; /* 24 8 */
	bool m_bSkipUpconversionFromGeneric; /* 32 1 */
	void KV3UpconverterInfo_t(class KV3UpconverterInfo_t *, const class KV3ID_t  &, const char  *, bool); /* linkage=_ZN20KV3UpconverterInfo_tC4ERK7KV3ID_tPKcb */
};

// <057A58EC> kv3lib/kv3format_manager.h:107
void KV3UpconverterInfo_t::KV3UpconverterInfo_t(const KV3ID_t& currentVersion, const char* pFileExt, bool bSkipUpconversionFromGeneric)
{
} /* size: 0 */

// <057A58AF> kv3lib/kv3format_manager.h:107
inline void KV3UpconverterInfo_t::KV3UpconverterInfo_t(const KV3ID_t& currentVersion, const char* pFileExt, bool bSkipUpconversionFromGeneric)
{
} /* size: 0 */

// <0575A229> kv3lib/kv3format_manager.h:134
// variables: 7
// function calls: 3
bool IsKV3InClassList<6>(const KeyValues3* pKV3, const char *& pClassList)
{
	const char* pKV3Class; // 136
	{
		int iClass; // 137
		{
			const char* pCheckClass; // 139
			V_strcmp(const char* s1,
				const char* s2);  // 140
		}
	}
	{
		const uint32  m; // 101
		uint32 h; // 102
		uint32 k; // 103
		const int  r; // 104
	}
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 136
} /* size: 140, variables: 1, inline expansions: 2 (25 bytes) */

// <0575A009> kv3lib/kv3format_manager.h:134
// variables: 3
bool IsKV3InClassList<5>(const KeyValues3* pKV3, const char *& pClassList)
{
	const char* pKV3Class; // 136
	{
		int iClass; // 137
		{
			const char* pCheckClass; // 139
		}
	}
} /* size: 0, variables: 1 */

