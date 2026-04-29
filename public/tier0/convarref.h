
//
// public/tier0/convarref.h
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
//
//	functions: 12
//	class: 1
//

// <01373CA7> ../public/tier0/convarref.h:13
// member functions: 54
// member variable: 1
// class size: 8
class ConVarRef {
	/* ../public/tier0/convarref.h:16 */
	void ConVarRef(ConVarRef* , const char* );
	/* ../public/tier0/convarref.h:17 */
	void ConVarRef(ConVarRef* , const char* , bool);
	/* ../public/tier0/convarref.h:18 */
	void ConVarRef(ConVarRef* , ConVar* );
	/* ../public/tier0/convarref.h:19 */
	void ~ConVarRef(ConVarRef* );
	/* ../public/tier0/convarref.h:26 */
	void ConVarRef(ConVarRef* , IConVar* );
	/* ../public/tier0/convarref.h:28 */
	void Init(ConVarRef* , const char* , bool);
	/* ../public/tier0/convarref.h:29 */
	bool IsValid(const ConVarRef* );
	/* ../public/tier0/convarref.h:30 */
	bool IsFlagSet(const ConVarRef* , ConVarFlags_t);
	/* ../public/tier0/convarref.h:31 */
	ConVar* GetLinkedConVar(ConVarRef* );
	/* ../public/tier0/convarref.h:35 */
	bool DoCheckAccess(const ConVarRef* );
	/* ../public/tier0/convarref.h:38 */
	bool CheckAccess(const ConVarRef* );
	/* ../public/tier0/convarref.h:45 */
	float GetFloat(const ConVarRef* );
	/* ../public/tier0/convarref.h:46 */
	int GetInt(const ConVarRef* );
	/* ../public/tier0/convarref.h:47 */
	Color GetColor(const ConVarRef* );
	/* ../public/tier0/convarref.h:48 */
	bool GetBool(const ConVarRef* );
	/* ../public/tier0/convarref.h:49 */
	const char* GetString(const ConVarRef* );
	/* ../public/tier0/convarref.h:51 */
	void SetValue(ConVarRef* , const char* );
	/* ../public/tier0/convarref.h:52 */
	void SetValue(ConVarRef* , float);
	/* ../public/tier0/convarref.h:53 */
	void SetValue(ConVarRef* , int);
	/* ../public/tier0/convarref.h:54 */
	void SetValue(ConVarRef* , Color);
	/* ../public/tier0/convarref.h:55 */
	void SetValue(ConVarRef* , bool);
	/* ../public/tier0/convarref.h:57 */
	const char* GetName(const ConVarRef* );
	/* ../public/tier0/convarref.h:59 */
	const char* GetDefault(const ConVarRef* );
	/* ../public/tier0/convarref.h:61 */
	const char* GetBaseName(const ConVarRef* );
	/* ../public/tier0/convarref.h:64 */
	float GetFloatVirtualized(const ConVarRef* );
	/* ../public/tier0/convarref.h:70 */
	int GetIntVirtualized(const ConVarRef* );
	/* ../public/tier0/convarref.h:76 */
	bool GetBoolVirtualized(const ConVarRef* );
private:
	ConVar * m_pConVarState; /* 0 8 */
	void ConVarRef(class ConVarRef *, const char  *); /* linkage=_ZN9ConVarRefC4EPKc */
	void ConVarRef(class ConVarRef *, const char  *, bool); /* linkage=_ZN9ConVarRefC4EPKcb */
	void ConVarRef(class ConVarRef *, class ConVar *); /* linkage=_ZN9ConVarRefC4EP6ConVar */
	void ~ConVarRef(class ConVarRef *); /* linkage=_ZN9ConVarRefD4Ev */
	void ConVarRef(class ConVarRef *, class IConVar *); /* linkage=_ZN9ConVarRefC4EP7IConVar */
	void Init(class ConVarRef *, const char  *, bool); /* linkage=_ZN9ConVarRef4InitEPKcb */
	/* <44458a6> tier0_perproject/convarref.cpp:97 */
	bool IsValid(const class ConVarRef  *); /* linkage=_ZNK9ConVarRef7IsValidEv */
	bool IsFlagSet(const class ConVarRef  *, enum ConVarFlags_t); /* linkage=_ZNK9ConVarRef9IsFlagSetE13ConVarFlags_t */
	class ConVar * GetLinkedConVar(class ConVarRef *); /* linkage=_ZN9ConVarRef15GetLinkedConVarEv */
	bool DoCheckAccess(const class ConVarRef  *); /* linkage=_ZNK9ConVarRef13DoCheckAccessEv */
	bool CheckAccess(const class ConVarRef  *); /* linkage=_ZNK9ConVarRef11CheckAccessEv */
	float GetFloat(const class ConVarRef  *); /* linkage=_ZNK9ConVarRef8GetFloatEv */
	int GetInt(const class ConVarRef  *); /* linkage=_ZNK9ConVarRef6GetIntEv */
	class Color GetColor(const class ConVarRef  *); /* linkage=_ZNK9ConVarRef8GetColorEv */
	bool GetBool(const class ConVarRef  *); /* linkage=_ZNK9ConVarRef7GetBoolEv */
	const char  * GetString(const class ConVarRef  *); /* linkage=_ZNK9ConVarRef9GetStringEv */
	void SetValue(class ConVarRef *, const char  *); /* linkage=_ZN9ConVarRef8SetValueEPKc */
	void SetValue(class ConVarRef *, float); /* linkage=_ZN9ConVarRef8SetValueEf */
	void SetValue(class ConVarRef *, int); /* linkage=_ZN9ConVarRef8SetValueEi */
	void SetValue(class ConVarRef *, class Color); /* linkage=_ZN9ConVarRef8SetValueE5Color */
	void SetValue(class ConVarRef *, bool); /* linkage=_ZN9ConVarRef8SetValueEb */
	const char  * GetName(const class ConVarRef  *); /* linkage=_ZNK9ConVarRef7GetNameEv */
	const char  * GetDefault(const class ConVarRef  *); /* linkage=_ZNK9ConVarRef10GetDefaultEv */
	const char  * GetBaseName(const class ConVarRef  *); /* linkage=_ZNK9ConVarRef11GetBaseNameEv */
	float GetFloatVirtualized(const class ConVarRef  *); /* linkage=_ZNK9ConVarRef19GetFloatVirtualizedEv */
	int GetIntVirtualized(const class ConVarRef  *); /* linkage=_ZNK9ConVarRef17GetIntVirtualizedEv */
	bool GetBoolVirtualized(const class ConVarRef  *); /* linkage=_ZNK9ConVarRef18GetBoolVirtualizedEv */
};

// <0311A7FD> ../public/tier0/convarref.h:16
void ConVarRef::ConVarRef(const char* pName)
{
} /* size: 0 */

// <01411373> ../public/tier0/convarref.h:17
void ConVarRef::ConVarRef(const char* pName, bool bIgnoreMissing)
{
} /* size: 0 */

// <0311A7E1> ../public/tier0/convarref.h:19
void ConVarRef::~ConVarRef()
{
} /* size: 0 */

// <002F5AC8> ../public/tier0/convarref.h:26
void ConVarRef::ConVarRef(IConVar* pConVar)
{
} /* size: 0 */

// <03181640> ../public/tier0/convarref.h:38
inline void ConVarRef::CheckAccess()
{
} /* size: 0 */

// <000F8240> ../public/tier0/convarref.h:48
inline void ConVarRef::GetBool()
{
} /* size: 0 */

// <01427673> ../public/tier0/convarref.h:118
inline void ConVarRef::GetFloat()
{
} /* size: 0 */

// <03181624> ../public/tier0/convarref.h:127
inline void ConVarRef::GetInt()
{
} /* size: 0 */

// <0142763B> ../public/tier0/convarref.h:145
inline void ConVarRef::GetString()
{
} /* size: 0 */

// <01427613> ../public/tier0/convarref.h:152
inline void ConVarRef::SetValue(const char* pValue)
{
} /* size: 0 */

// <014275EB> ../public/tier0/convarref.h:158
inline void ConVarRef::SetValue(float flValue)
{
} /* size: 0 */

// <014275C3> ../public/tier0/convarref.h:164
inline void ConVarRef::SetValue(int nValue)
{
} /* size: 0 */

