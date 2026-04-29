
//
// public/tier0/perftrace.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//				   libtier0.so
//
//	functions: 4
//	classes: 2
//

// <000A6086> ../public/tier0/perftrace.h:4
// member functions: 4
// static member variables: 5
// class size: 1
class PerformanceTrace {
	/* ../public/tier0/perftrace.h:21 */
	struct Scope {
		/* ../public/tier0/perftrace.h:23 */
		void Scope(Scope* , const char* , const char* , uint32);
		/* ../public/tier0/perftrace.h:28 */
		void ~Scope(Scope* );
	};
	/* ../public/tier0/perftrace.h:8 */
	void BeginEvent(const char* , const char* , uint32);
	/* ../public/tier0/perftrace.h:9 */
	void EndEvent(void);
	static const uint32 ColorOrange = 4290652415; /* 0 0 */
	static const uint32 ColorRed = 4282793215; /* 0 0 */
	static const uint32 ColorYellow = 4293934335; /* 0 0 */
	static const uint32 ColorGreen = 1861250815; /* 0 0 */
	static const uint32 ColorBlue = 1017839615; /* 0 0 */
};

// <003721B2> ../public/tier0/perftrace.h:4
// member functions: 2
// static member variables: 5
// class size: 1
class PerformanceTrace {
	/* ../public/tier0/perftrace.h:8 */
	void BeginEvent(const char* , const char* , uint32);
	/* ../public/tier0/perftrace.h:9 */
	void EndEvent(void);
	static const uint32 ColorOrange = 4290652415; /* 0 0 */
	static const uint32 ColorRed = 4282793215; /* 0 0 */
	static const uint32 ColorYellow = 4293934335; /* 0 0 */
	static const uint32 ColorGreen = 1861250815; /* 0 0 */
	static const uint32 ColorBlue = 1017839615; /* 0 0 */
};

// <035643D5> ../public/tier0/perftrace.h:23
void Scope::Scope(const char* name, const char* data, uint32 color)
{
} /* size: 0 */

// <03564398> ../public/tier0/perftrace.h:23
inline void Scope::Scope(const char* name, const char* data, uint32 color)
{
} /* size: 0 */

// <03564381> ../public/tier0/perftrace.h:28
void Scope::~Scope()
{
} /* size: 0 */

// <03564368> ../public/tier0/perftrace.h:28
inline void Scope::~Scope()
{
} /* size: 0 */

