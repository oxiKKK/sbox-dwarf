
//
// public/scenesystem/scenesystem_flags.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//
//	functions: 7
//	class: 1
//

// <01111612> ../public/scenesystem/scenesystem_flags.h:305
inline ESceneObjectFlags& operator&=(ESceneObjectFlags& a, ESceneObjectFlags b)
{
} /* size: 0 */

// <00B50C51> ../public/scenesystem/scenesystem_flags.h:305
inline ESceneObjectFlags operator|(ESceneObjectFlags a, ESceneObjectFlags b)
{
} /* size: 0 */

// <00B50C00> ../public/scenesystem/scenesystem_flags.h:305
inline ESceneObjectFlags operator~(ESceneObjectFlags a)
{
} /* size: 0 */

// <00B50BD2> ../public/scenesystem/scenesystem_flags.h:305
inline ESceneObjectFlags operator^(ESceneObjectFlags a, ESceneObjectFlags b)
{
} /* size: 0 */

// <0015C746> ../public/scenesystem/scenesystem_flags.h:305
inline ESceneObjectFlags operator&(ESceneObjectFlags a, ESceneObjectFlags b)
{
} /* size: 0 */

// <00045684> ../public/scenesystem/scenesystem_flags.h:374
// member functions: 6
// member variable: 1
// class size: 8
class CViewId {
	uint64 m_nViewId; /* 0 8 */
	/* ../public/scenesystem/scenesystem_flags.h:379 */
	void CViewId(CViewId* );
	/* ../public/scenesystem/scenesystem_flags.h:381 */
	bool operator==(const CViewId* , const CViewId& );
	/* ../public/scenesystem/scenesystem_flags.h:386 */
	bool operator<(const CViewId* , const CViewId& );
	void CViewId(class CViewId *); /* linkage=_ZN7CViewIdC4Ev */
	bool operator==(const class CViewId  *, const class CViewId  &); /* linkage=_ZNK7CViewIdeqERKS_ */
	bool operator<(const class CViewId  *, const class CViewId  &); /* linkage=_ZNK7CViewIdltERKS_ */
};

// <0389B77E> ../public/scenesystem/scenesystem_flags.h:379
void CViewId::CViewId()
{
} /* size: 0 */

// <0389B765> ../public/scenesystem/scenesystem_flags.h:379
inline void CViewId::CViewId()
{
} /* size: 0 */

