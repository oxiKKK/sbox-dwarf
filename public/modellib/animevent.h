
//
// public/modellib/animevent.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	struct: 1
//

// <0120FED8> ../public/modellib/animevent.h:15
// member function: 1
// member variables: 8
// struct size: 48
struct animevent_t {
	int event; /* 0 4 */
	const class KeyValues3 * m_pEventData; /* 8 8 */
	float cycle; /* 16 4 */
	float eventtime; /* 20 4 */
	int type; /* 24 4 */
	CSkeletonInstance * pSource; /* 32 8 */
	int m_nOrder; /* 40 4 */
	bool m_bHandledByScript; /* 44 1 */
	/* ../public/modellib/animevent.h:26 */
	int Event(const animevent_t* );
};

