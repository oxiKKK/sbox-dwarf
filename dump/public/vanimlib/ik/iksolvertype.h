
//
// public/vanimlib/ik/iksolvertype.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 2
//	class: 1
//	struct: 1
//

// <004E130F> ../public/vanimlib/ik/iksolvertype.h:17
inline void Get(ISchemaSystemTypeScope* pTypeScope)
{
} /* size: 0 */

// <0022F74D> ../public/vanimlib/ik/iksolvertype.h:17
// member functions: 2
// class size: 1
class CSchemaTypeOf<IKSolverType> {
	/* ../public/vanimlib/ik/iksolvertype.h:17 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
	/* ../public/vanimlib/ik/iksolvertype.h:17 */
	const char* GetEnumName(void);
};

// <0337EF9E> ../public/vanimlib/ik/iksolvertype.h:20
// variable: 1
inline void Pairs(void)
{
	KV3Transfer_EnumHelpers_StringPair_t<IKSolverType> s_Elements; // 20
} /* size: 0, variables: 1 */

// <03275199> ../public/vanimlib/ik/iksolvertype.h:20
// member function: 1
// static member variables: 3
// struct size: 1
struct KV3Transfer_EnumHelpers_t<IKSolverType> {
	static const bool is_present = 1; /* 0 0 */
	static const enum IKSolverType ENUM_COUNT = 5; /* 0 0 */
	static const enum IKSolverType ENUM_DEFAULT = 1; /* 0 0 */
	/* ../public/vanimlib/ik/iksolvertype.h:20 */
	KV3Transfer_EnumHelpers_StringPairList_t<IKSolverType> Pairs(void);
};

