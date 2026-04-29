
//
// public/tier0/keyvaluesjson.h
//
//	referenced by: libtier0.so
//
//	class: 1
//

// <0022D0CC> ../public/tier0/keyvaluesjson.h:20
// member functions: 24
// member variables: 6
// class size: 2,112
class KeyValuesJSONParser {
	/* ../public/tier0/keyvaluesjson.h:47 */
	enum {
		kToken_Err = -2,
		kToken_EOF = -1,
		kToken_String = 1,
		kToken_NumberInt = 2,
		kToken_NumberFloat = 3,
		kToken_True = 4,
		kToken_False = 5,
		kToken_Null = 6,
	};
	/* ../public/tier0/keyvaluesjson.h:23 */
	void KeyValuesJSONParser(KeyValuesJSONParser* , const CUtlBuffer& );
	/* ../public/tier0/keyvaluesjson.h:24 */
	void KeyValuesJSONParser(KeyValuesJSONParser* , const char* , int);
	/* ../public/tier0/keyvaluesjson.h:25 */
	void ~KeyValuesJSONParser(KeyValuesJSONParser* );
	/* ../public/tier0/keyvaluesjson.h:28 */
	KeyValues* ParseFile(KeyValuesJSONParser* );
	char m_szErrMsg[1024]; /* 0 1024 */
	int m_nLine; /* 1024 4 */
private:
	/* ../public/tier0/keyvaluesjson.h:38 */
	bool ParseObject(KeyValuesJSONParser* , KeyValues* );
	/* ../public/tier0/keyvaluesjson.h:39 */
	bool ParseArray(KeyValuesJSONParser* , KeyValues* );
	/* ../public/tier0/keyvaluesjson.h:40 */
	bool ParseValue(KeyValuesJSONParser* , KeyValues* );
	/* ../public/tier0/keyvaluesjson.h:41 */
	void Init(KeyValuesJSONParser* , const char* , int);
	const char * m_cur; /* 1032 8 */
	const char * m_end; /* 1040 8 */
	int m_eToken; /* 1048 4 */
	CUtlVectorFixedGrowable<char, 1024> m_vecTokenChars __attribute__((__aligned__(8))); /* 1056 1056 */
	/* ../public/tier0/keyvaluesjson.h:61 */
	void NextToken(KeyValuesJSONParser* );
	/* ../public/tier0/keyvaluesjson.h:62 */
	void ParseNumberToken(KeyValuesJSONParser* );
	/* ../public/tier0/keyvaluesjson.h:63 */
	void ParseStringToken(KeyValuesJSONParser* );
	/* ../public/tier0/keyvaluesjson.h:64 */
	const char* GetTokenDebugText(KeyValuesJSONParser* );
	void KeyValuesJSONParser(class KeyValuesJSONParser *, const class CUtlBuffer  &); /* linkage=_ZN19KeyValuesJSONParserC4ERK10CUtlBuffer */
	void KeyValuesJSONParser(class KeyValuesJSONParser *, const char  *, int); /* linkage=_ZN19KeyValuesJSONParserC4EPKci */
	void ~KeyValuesJSONParser(class KeyValuesJSONParser *); /* linkage=_ZN19KeyValuesJSONParserD4Ev */
	class KeyValues * ParseFile(class KeyValuesJSONParser *); /* linkage=_ZN19KeyValuesJSONParser9ParseFileEv */
	bool ParseObject(class KeyValuesJSONParser *, class KeyValues *); /* linkage=_ZN19KeyValuesJSONParser11ParseObjectEP9KeyValues */
	bool ParseArray(class KeyValuesJSONParser *, class KeyValues *); /* linkage=_ZN19KeyValuesJSONParser10ParseArrayEP9KeyValues */
	bool ParseValue(class KeyValuesJSONParser *, class KeyValues *); /* linkage=_ZN19KeyValuesJSONParser10ParseValueEP9KeyValues */
	/* <23fa00> tier0/keyvaluesjson.cpp:29 */
	void Init(class KeyValuesJSONParser *, const char  *, int); /* linkage=_ZN19KeyValuesJSONParser4InitEPKci */
	/* <23f9ba> tier0/keyvaluesjson.cpp:285 */
	void NextToken(class KeyValuesJSONParser *); /* linkage=_ZN19KeyValuesJSONParser9NextTokenEv */
	void ParseNumberToken(class KeyValuesJSONParser *); /* linkage=_ZN19KeyValuesJSONParser16ParseNumberTokenEv */
	void ParseStringToken(class KeyValuesJSONParser *); /* linkage=_ZN19KeyValuesJSONParser16ParseStringTokenEv */
	const char  * GetTokenDebugText(class KeyValuesJSONParser *); /* linkage=_ZN19KeyValuesJSONParser17GetTokenDebugTextEv */
} __attribute__((__aligned__(8)));

