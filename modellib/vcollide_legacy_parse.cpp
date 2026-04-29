
//
// modellib/vcollide_legacy_parse.cpp
//
//	referenced by: libengine2.so
//				   libmeshsystem.so
//
//	functions: 17
//	classes: 3
//

// <04EC3AB3> modellib/vcollide_legacy_parse.cpp:15
// member functions: 12
// member variable: 1
// vtable entries: 2
// class size: 8
class IVPhysicsLegacyKeyHandler {
	void ~IVPhysicsLegacyKeyHandler(IVPhysicsLegacyKeyHandler* );
	void IVPhysicsLegacyKeyHandler(IVPhysicsLegacyKeyHandler* , IVPhysicsLegacyKeyHandler& );
	void IVPhysicsLegacyKeyHandler(IVPhysicsLegacyKeyHandler* , const IVPhysicsLegacyKeyHandler& );
	void IVPhysicsLegacyKeyHandler(IVPhysicsLegacyKeyHandler* );
	int ()(void) * * _vptr.IVPhysicsLegacyKeyHandler; /* 0 8 */
	/* modellib/vcollide_legacy_parse.cpp:18 */
	virtual void ParseKeyValue(IVPhysicsLegacyKeyHandler* , void* , const char* , const char* );
	/* modellib/vcollide_legacy_parse.cpp:19 */
	virtual void SetDefaults(IVPhysicsLegacyKeyHandler* , void* );
	void ~IVPhysicsLegacyKeyHandler(class IVPhysicsLegacyKeyHandler *); /* linkage=_ZN25IVPhysicsLegacyKeyHandlerD4Ev */
	void IVPhysicsLegacyKeyHandler(class IVPhysicsLegacyKeyHandler *, class IVPhysicsLegacyKeyHandler &); /* linkage=_ZN25IVPhysicsLegacyKeyHandlerC4EOS_ */
	void IVPhysicsLegacyKeyHandler(class IVPhysicsLegacyKeyHandler *, const class IVPhysicsLegacyKeyHandler  &); /* linkage=_ZN25IVPhysicsLegacyKeyHandlerC4ERKS_ */
	void IVPhysicsLegacyKeyHandler(class IVPhysicsLegacyKeyHandler *); /* linkage=_ZN25IVPhysicsLegacyKeyHandlerC4Ev */
	virtual void ParseKeyValue(class IVPhysicsLegacyKeyHandler *, void *, const char  *, const char  *); /* linkage=_ZN25IVPhysicsLegacyKeyHandler13ParseKeyValueEPvPKcS2_ */
	/* <4ec6a3b> modellib/vcollide_legacy_parse.cpp:19 */
	virtual void SetDefaults(class IVPhysicsLegacyKeyHandler *, void *); /* linkage=_ZN25IVPhysicsLegacyKeyHandler11SetDefaultsEPv */
};

// <04EC6A3B> modellib/vcollide_legacy_parse.cpp:19
void IVPhysicsLegacyKeyHandler::SetDefaults(void* pData)
{
} /* size: 5 */

// <04EC5FDB> modellib/vcollide_legacy_parse.cpp:19
inline void IVPhysicsLegacyKeyHandler::SetDefaults(void* pData)
{
} /* size: 0 */

// <04EC5FB6> modellib/vcollide_legacy_parse.cpp:28
// variable: 1
void VCollideLegacy_InitializeCharacterSets(void)
{
	bool s_CharacterSetInitialized; // 30
} /* size: 0, variables: 1 */

// <04EC5E76> modellib/vcollide_legacy_parse.cpp:39
// variables: 4
// function call: 1
const char* VCollideLegacy_ParseFile(const char* pFileBytes, char* pToken, bool* pWasQuoted, characterset_t* pCharSet)
{

skipwhite: // 58
	bool com_ignorecolons; // 50
	characterset_t& breaks; // 51
	int c; // 53
	int len; // 54
	VCollideLegacy_InitializeCharacterSets(void); // 47
} /* size: 594, variables: 4, goto labels: 1, inline expansions: 1 (95 bytes) */

// <04EC5C69> modellib/vcollide_legacy_parse.cpp:143
// variable: 1
// function calls: 3
const char* VCollideLegacy_ParseKeyValue(const char* pBuffer, char* key, char* value)
{
	char com_token; // 145
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 150
	V_strcmp(const char* s1,
		const char* s2);  // 154
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 163
} /* size: 201, variables: 1, inline expansions: 3 (46 bytes) */

// <04EC398B> modellib/vcollide_legacy_parse.cpp:173
// member functions: 14
// member variables: 2
// class size: 1,032
class CVPhysicsLegacyParse {
	/* modellib/vcollide_legacy_parse.cpp:176 */
	void ~CVPhysicsLegacyParse(CVPhysicsLegacyParse* );
	/* modellib/vcollide_legacy_parse.cpp:177 */
	void CVPhysicsLegacyParse(CVPhysicsLegacyParse* , const char* );
	/* modellib/vcollide_legacy_parse.cpp:179 */
	void NextBlock(CVPhysicsLegacyParse* );
	/* modellib/vcollide_legacy_parse.cpp:181 */
	const char* GetCurrentBlockName(CVPhysicsLegacyParse* );
	/* modellib/vcollide_legacy_parse.cpp:182 */
	bool Finished(CVPhysicsLegacyParse* );
	/* modellib/vcollide_legacy_parse.cpp:183 */
	void ParseCustom(CVPhysicsLegacyParse* , void* , IVPhysicsLegacyKeyHandler* );
	/* modellib/vcollide_legacy_parse.cpp:184 */
	void SkipBlock(CVPhysicsLegacyParse* );
private:
	const char * m_pText; /* 0 8 */
	char m_blockName[1024]; /* 8 1024 */
	void ~CVPhysicsLegacyParse(class CVPhysicsLegacyParse *); /* linkage=_ZN20CVPhysicsLegacyParseD4Ev */
	void CVPhysicsLegacyParse(class CVPhysicsLegacyParse *, const char  *); /* linkage=_ZN20CVPhysicsLegacyParseC4EPKc */
	void NextBlock(class CVPhysicsLegacyParse *); /* linkage=_ZN20CVPhysicsLegacyParse9NextBlockEv */
	/* <4ec6dbb> modellib/vcollide_legacy_parse.cpp:213 */
	const char  * GetCurrentBlockName(class CVPhysicsLegacyParse *); /* linkage=_ZN20CVPhysicsLegacyParse19GetCurrentBlockNameEv */
	/* <4ec6dea> modellib/vcollide_legacy_parse.cpp:222 */
	bool Finished(class CVPhysicsLegacyParse *); /* linkage=_ZN20CVPhysicsLegacyParse8FinishedEv */
	void ParseCustom(class CVPhysicsLegacyParse *, void *, class IVPhysicsLegacyKeyHandler *); /* linkage=_ZN20CVPhysicsLegacyParse11ParseCustomEPvP25IVPhysicsLegacyKeyHandler */
	void SkipBlock(class CVPhysicsLegacyParse *); /* linkage=_ZN20CVPhysicsLegacyParse9SkipBlockEv */
};

// <04EC5C52> modellib/vcollide_legacy_parse.cpp:176
void CVPhysicsLegacyParse::~CVPhysicsLegacyParse()
{
} /* size: 0 */

// <04EC5C39> modellib/vcollide_legacy_parse.cpp:176
inline void CVPhysicsLegacyParse::~CVPhysicsLegacyParse()
{
} /* size: 0 */

// <04EC5C20> modellib/vcollide_legacy_parse.cpp:184
inline void CVPhysicsLegacyParse::SkipBlock()
{
} /* size: 0 */

// <04EC5BCA> modellib/vcollide_legacy_parse.cpp:192
void CVPhysicsLegacyParse::CVPhysicsLegacyParse(const char* pKeyData)
{
} /* size: 0 */

// <04EC5A50> modellib/vcollide_legacy_parse.cpp:198
// variables: 2
// function calls: 3
void CVPhysicsLegacyParse::NextBlock()
{
	char key; // 200
	char value; // 200
	V_strcmp(const char* s1,
		const char* s2);  // 204
	strcpy(char* __dest,
		const char* __src);  // 124
	V_strcpy(char* dest,
		const char* src);  // 206
} /* size: 134, variables: 2, inline expansions: 3 (42 bytes) */

// <04EC6DBB> modellib/vcollide_legacy_parse.cpp:213
void CVPhysicsLegacyParse::GetCurrentBlockName()
{
} /* size: 0 */

// <04EC6DEA> modellib/vcollide_legacy_parse.cpp:222
void CVPhysicsLegacyParse::Finished()
{
} /* size: 0 */

// <04EC58FC> modellib/vcollide_legacy_parse.cpp:230
// variables: 3
void CVPhysicsLegacyParse::ParseCustom(void* pCustom, IVPhysicsLegacyKeyHandler* unknownKeyHandler)
{
	char key; // 232
	char value; // 232
	int indent; // 235
} /* size: 353, variables: 3 */

// <04EC6A6B> modellib/vcollide_legacy_parse.cpp:284
// variables: 2
// function calls: 6
const char* FixupModelName(char* pOut, const char* pModelNameIn, int sizeOut)
{
	char tmp; // 286
	int len; // 297
	V_strcpy_safe<1024>(char& pDest,
				const char* pSrc);  // 288
	V_strnicmp_fast<int>(const char* s1,
				const char* s2,
				int n);  // 289
	V_strnicmp_fast<int>(const char* s1,
				const char* s2,
				int n);  // 289
	V_strncpy<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars);  // 295
	V_strlen(const char* str); // 297
	V_strncat<int>(char* pDest,
			const char* pSrc,
			int maxLenInChars,
			int nMaxCharsToCopy);  // 300
} /* size: 271, variables: 2, inline expansions: 6 (121 bytes) */

// <04EC58A7> modellib/vcollide_legacy_parse.cpp:284
// variables: 2
const char* FixupModelName(char* pOut, int sizeOut, const char* pModelNameIn)
{
	char tmp; // 286
	int len; // 297
} /* size: 0, variables: 2 */

// <04EC3BBC> modellib/vcollide_legacy_parse.cpp:309
// member functions: 12
// member variable: 1
// vtable entry: 1
// class size: 8
class CBreakLegacyParser : public IVPhysicsLegacyKeyHandler {
public:
	/* class IVPhysicsLegacyKeyHandler <ancestor>; */ /* 0 8 */
	void ~CBreakLegacyParser(CBreakLegacyParser* );
	void CBreakLegacyParser(CBreakLegacyParser* , CBreakLegacyParser& );
	void CBreakLegacyParser(CBreakLegacyParser* , const CBreakLegacyParser& );
	void CBreakLegacyParser(CBreakLegacyParser* );
	/* modellib/vcollide_legacy_parse.cpp:312 */
	void ParseModelName(CBreakLegacyParser* , KeyValues3* , const char* );
	/* modellib/vcollide_legacy_parse.cpp:319 */
	virtual void ParseKeyValue(CBreakLegacyParser* , void* , const char* , const char* );
	void ~CBreakLegacyParser(class CBreakLegacyParser *); /* linkage=_ZN18CBreakLegacyParserD4Ev */
	void CBreakLegacyParser(class CBreakLegacyParser *, class CBreakLegacyParser &); /* linkage=_ZN18CBreakLegacyParserC4EOS_ */
	void CBreakLegacyParser(class CBreakLegacyParser *, const class CBreakLegacyParser  &); /* linkage=_ZN18CBreakLegacyParserC4ERKS_ */
	void CBreakLegacyParser(class CBreakLegacyParser *); /* linkage=_ZN18CBreakLegacyParserC4Ev */
	void ParseModelName(class CBreakLegacyParser *, class KeyValues3 *, const char  *); /* linkage=_ZN18CBreakLegacyParser14ParseModelNameEP10KeyValues3PKc */
	virtual void ParseKeyValue(class CBreakLegacyParser *, void *, const char  *, const char  *); /* linkage=_ZN18CBreakLegacyParser13ParseKeyValueEPvPKcS2_ */
};

// <04EC5855> modellib/vcollide_legacy_parse.cpp:312
// variable: 1
inline void CBreakLegacyParser::ParseModelName(KeyValues3* pBreak, const char* pValue)
{
	char pModelName; // 314
} /* size: 0, variables: 1 */

// <04EC4B07> modellib/vcollide_legacy_parse.cpp:319
// variables: 22
// function calls: 26
void CBreakLegacyParser::ParseKeyValue(void* pData, const char* pKey, const char* pValue)
{
	KeyValues3* pBreak; // 321
	{
		Vector vOffset; // 337
		Vector::operator[](
				int i);  // 338
		Vector::operator[](
				int i);  // 338
		CUtlStringToken::CUtlStringToken(
				const char& str);  // 13
		CKV3MemberName::CKV3MemberName<7>(
					const char& str);  // 339
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 862
		KeyValues3::SetMemberVector(
				CKV3MemberName memberName,
				const Vector& value);  // 339
	}
	{
		const uint32  m; // 80
		uint32 h; // 81
		uint32 k; // 82
		const int  r; // 83
	}
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<6>(
				const char& str);  // 316
	CBreakLegacyParser::ParseModelName(
			KeyValues3* pBreak,
			const char* pValue);  // 324
	{
		const uint32  m; // 80
		uint32 h; // 81
		uint32 k; // 82
		const int  r; // 83
	}
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<6>(
				const char& str);  // 316
	CBreakLegacyParser::ParseModelName(
			KeyValues3* pBreak,
			const char* pValue);  // 328
	{
		const uint32  m; // 123
		uint32 h; // 124
		uint32 k; // 125
		const int  r; // 126
	}
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<8>(
				const char& str);  // 329
	{
		const uint32  m; // 101
		uint32 h; // 102
		uint32 k; // 103
		const int  r; // 104
	}
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<7>(
				const char& str);  // 343
	{
		const uint32  m; // 146
		uint32 h; // 147
		uint32 k; // 148
		const int  r; // 149
	}
	CUtlStringToken::CUtlStringToken(
			const char& str);  // 13
	CKV3MemberName::CKV3MemberName<9>(
				const char& str);  // 347
	CKV3MemberName::CKV3MemberName<12>(
				const char& str);  // 351
	CKV3MemberName::CKV3MemberName<15>(
				const char& str);  // 374
	CKV3MemberName::CKV3MemberName<12>(
				const char& str);  // 355
	CKV3MemberName::CKV3MemberName<25>(
				const char& str);  // 361
	CKV3MemberName::CKV3MemberName<6>(
				const char& str);  // 370
	CKV3MemberName::CKV3MemberName<25>(
				const char& str);  // 365
	CKV3MemberName::CKV3MemberName<14>(
				const char& str);  // 378
	CKV3MemberName::CKV3MemberName<20>(
				const char& str);  // 382
} /* size: 1230, variables: 1, inline expansions: 20 (538 bytes) */

