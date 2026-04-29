
//
// public/tier0/iconvar.h
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
//	functions: 7
//	class: 1
//

// <01BF39DC> ../public/tier0/iconvar.h:49
inline ConVarFlags_t& operator&=(ConVarFlags_t& a, ConVarFlags_t b)
{
} /* size: 0 */

// <01BF39BB> ../public/tier0/iconvar.h:49
inline ConVarFlags_t operator~(ConVarFlags_t a)
{
} /* size: 0 */

// <000D6C57> ../public/tier0/iconvar.h:49
inline ConVarFlags_t operator|(ConVarFlags_t a, ConVarFlags_t b)
{
} /* size: 0 */

// <000D6C26> ../public/tier0/iconvar.h:49
inline ConVarFlags_t& operator|=(ConVarFlags_t& a, ConVarFlags_t b)
{
} /* size: 0 */

// <0008809A> ../public/tier0/iconvar.h:49
inline ConVarFlags_t operator&(ConVarFlags_t a, ConVarFlags_t b)
{
} /* size: 0 */

// <05E82801> ../public/tier0/iconvar.h:60
void IConVar::IConVar()
{
} /* size: 0 */

// <05E827E5> ../public/tier0/iconvar.h:60
inline void IConVar::IConVar()
{
} /* size: 0 */

// <0002A99A> ../public/tier0/iconvar.h:60
// member functions: 24
// member variable: 1
// vtable entries: 8
// class size: 8
class IConVar {
	void IConVar(IConVar* , IConVar& );
	void IConVar(IConVar* , const IConVar& );
	void IConVar(IConVar* );
	void ~IConVar(IConVar* );
	int ()(void) * * _vptr.IConVar; /* 0 8 */
	/* ../public/tier0/iconvar.h:64 */
	virtual void SetValue(IConVar* , const char* );
	/* ../public/tier0/iconvar.h:65 */
	virtual void SetValue(IConVar* , float);
	/* ../public/tier0/iconvar.h:66 */
	virtual void SetValue(IConVar* , int);
	/* ../public/tier0/iconvar.h:67 */
	virtual void SetValue(IConVar* , Color);
	/* ../public/tier0/iconvar.h:70 */
	virtual const char* GetName(const IConVar* );
	/* ../public/tier0/iconvar.h:73 */
	virtual const char* GetBaseName(const IConVar* );
	/* ../public/tier0/iconvar.h:77 */
	virtual bool IsFlagSet(const IConVar* , ConVarFlags_t);
	/* ../public/tier0/iconvar.h:79 */
	virtual void AddFlags(IConVar* , ConVarFlags_t);
	void IConVar(class IConVar *, class IConVar &); /* linkage=_ZN7IConVarC4EOS_ */
	void IConVar(class IConVar *, const class IConVar  &); /* linkage=_ZN7IConVarC4ERKS_ */
	void IConVar(class IConVar *); /* linkage=_ZN7IConVarC4Ev */
	void ~IConVar(class IConVar *); /* linkage=_ZN7IConVarD4Ev */
	virtual void SetValue(class IConVar *, const char  *); /* linkage=_ZN7IConVar8SetValueEPKc */
	virtual void SetValue(class IConVar *, float); /* linkage=_ZN7IConVar8SetValueEf */
	virtual void SetValue(class IConVar *, int); /* linkage=_ZN7IConVar8SetValueEi */
	virtual void SetValue(class IConVar *, class Color); /* linkage=_ZN7IConVar8SetValueE5Color */
	virtual const char  * GetName(const class IConVar  *); /* linkage=_ZNK7IConVar7GetNameEv */
	virtual const char  * GetBaseName(const class IConVar  *); /* linkage=_ZNK7IConVar11GetBaseNameEv */
	virtual bool IsFlagSet(const class IConVar  *, enum ConVarFlags_t); /* linkage=_ZNK7IConVar9IsFlagSetE13ConVarFlags_t */
	virtual void AddFlags(class IConVar *, enum ConVarFlags_t); /* linkage=_ZN7IConVar8AddFlagsE13ConVarFlags_t */
};

