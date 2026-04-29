
//
// public/tier0/icommandline.h
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
//	functions: 3
//	class: 1
//

// <000A43A1> ../public/tier0/icommandline.h:18
void ICommandLine::ICommandLine()
{
} /* size: 0 */

// <000A4384> ../public/tier0/icommandline.h:18
inline void ICommandLine::ICommandLine()
{
} /* size: 0 */

// <0009C312> ../public/tier0/icommandline.h:18
// member functions: 48
// member variable: 1
// vtable entries: 20
// class size: 8
class ICommandLine {
	void ICommandLine(ICommandLine* , ICommandLine& );
	void ICommandLine(ICommandLine* , const ICommandLine& );
	void ICommandLine(ICommandLine* );
	void ~ICommandLine(ICommandLine* );
	int ()(void) * * _vptr.ICommandLine; /* 0 8 */
	/* ../public/tier0/icommandline.h:21 */
	virtual void CreateCmdLine(ICommandLine* , const char* );
	/* ../public/tier0/icommandline.h:22 */
	virtual void CreateCmdLine(ICommandLine* , int, const char* const* );
	/* ../public/tier0/icommandline.h:23 */
	virtual const char* GetCmdLine(const ICommandLine* );
	/* ../public/tier0/icommandline.h:26 */
	virtual const char* CheckParm(const ICommandLine* , const char* , const char** );
	/* ../public/tier0/icommandline.h:28 */
	virtual bool HasParm(const ICommandLine* , const char* );
	/* ../public/tier0/icommandline.h:29 */
	virtual void RemoveParm(ICommandLine* , const char* );
	/* ../public/tier0/icommandline.h:30 */
	virtual void AppendParm(ICommandLine* , const char* , const char* );
	/* ../public/tier0/icommandline.h:33 */
	virtual int ParmCount(const ICommandLine* );
	/* ../public/tier0/icommandline.h:34 */
	virtual int FindParm(const ICommandLine* , const char* , int);
	/* ../public/tier0/icommandline.h:35 */
	virtual const char* GetParm(const ICommandLine* , int);
	/* ../public/tier0/icommandline.h:38 */
	virtual const char* ParmValue(const ICommandLine* , const char* , const char* );
	/* ../public/tier0/icommandline.h:39 */
	virtual int ParmValue(const ICommandLine* , const char* , int);
	/* ../public/tier0/icommandline.h:40 */
	virtual float ParmValue(const ICommandLine* , const char* , float);
	/* ../public/tier0/icommandline.h:42 */
	virtual bool ParmValue(ICommandLine* , const char* , const char* , CBufferString* );
	/* ../public/tier0/icommandline.h:43 */
	virtual const char* ParmValueByIndex(const ICommandLine* , int, const char* );
	/* ../public/tier0/icommandline.h:47 */
	virtual void SetParm(ICommandLine* , int, const char* );
	/* ../public/tier0/icommandline.h:49 */
	virtual void RemoveParmByIndex(ICommandLine* , int);
	/* ../public/tier0/icommandline.h:53 */
	virtual void CreateCmdLinePrependAppName(ICommandLine* , const char* );
	/* ../public/tier0/icommandline.h:56 */
	virtual const char* * GetParms(const ICommandLine* );
	/* ../public/tier0/icommandline.h:62 */
	virtual bool IsWellInitialized(const ICommandLine* );
	void ICommandLine(class ICommandLine *, class ICommandLine &); /* linkage=_ZN12ICommandLineC4EOS_ */
	void ICommandLine(class ICommandLine *, const class ICommandLine  &); /* linkage=_ZN12ICommandLineC4ERKS_ */
	void ICommandLine(class ICommandLine *); /* linkage=_ZN12ICommandLineC4Ev */
	void ~ICommandLine(class ICommandLine *); /* linkage=_ZN12ICommandLineD4Ev */
	virtual void CreateCmdLine(class ICommandLine *, const char  *); /* linkage=_ZN12ICommandLine13CreateCmdLineEPKc */
	virtual void CreateCmdLine(class ICommandLine *, int, const char  * const *); /* linkage=_ZN12ICommandLine13CreateCmdLineEiPKPKc */
	virtual const char  * GetCmdLine(const class ICommandLine  *); /* linkage=_ZNK12ICommandLine10GetCmdLineEv */
	virtual const char  * CheckParm(const class ICommandLine  *, const char  *, const char  * *); /* linkage=_ZNK12ICommandLine9CheckParmEPKcPS1_ */
	virtual bool HasParm(const class ICommandLine  *, const char  *); /* linkage=_ZNK12ICommandLine7HasParmEPKc */
	virtual void RemoveParm(class ICommandLine *, const char  *); /* linkage=_ZN12ICommandLine10RemoveParmEPKc */
	virtual void AppendParm(class ICommandLine *, const char  *, const char  *); /* linkage=_ZN12ICommandLine10AppendParmEPKcS1_ */
	virtual int ParmCount(const class ICommandLine  *); /* linkage=_ZNK12ICommandLine9ParmCountEv */
	virtual int FindParm(const class ICommandLine  *, const char  *, int); /* linkage=_ZNK12ICommandLine8FindParmEPKci */
	virtual const char  * GetParm(const class ICommandLine  *, int); /* linkage=_ZNK12ICommandLine7GetParmEi */
	virtual const char  * ParmValue(const class ICommandLine  *, const char  *, const char  *); /* linkage=_ZNK12ICommandLine9ParmValueEPKcS1_ */
	virtual int ParmValue(const class ICommandLine  *, const char  *, int); /* linkage=_ZNK12ICommandLine9ParmValueEPKci */
	virtual float ParmValue(const class ICommandLine  *, const char  *, float); /* linkage=_ZNK12ICommandLine9ParmValueEPKcf */
	virtual bool ParmValue(class ICommandLine *, const char  *, const char  *, class CBufferString *); /* linkage=_ZN12ICommandLine9ParmValueEPKcS1_P13CBufferString */
	virtual const char  * ParmValueByIndex(const class ICommandLine  *, int, const char  *); /* linkage=_ZNK12ICommandLine16ParmValueByIndexEiPKc */
	virtual void SetParm(class ICommandLine *, int, const char  *); /* linkage=_ZN12ICommandLine7SetParmEiPKc */
	virtual void RemoveParmByIndex(class ICommandLine *, int); /* linkage=_ZN12ICommandLine17RemoveParmByIndexEi */
	virtual void CreateCmdLinePrependAppName(class ICommandLine *, const char  *); /* linkage=_ZN12ICommandLine27CreateCmdLinePrependAppNameEPKc */
	virtual const char  * * GetParms(const class ICommandLine  *); /* linkage=_ZNK12ICommandLine8GetParmsEv */
	virtual bool IsWellInitialized(const class ICommandLine  *); /* linkage=_ZNK12ICommandLine17IsWellInitializedEv */
};

// <00128C67> ../public/tier0/icommandline.h:68
ICommandLine* CommandLine(void)
{
} /* size: 0 */

