
//
// public/engine2/isoundservice.h
//
//	referenced by: libengine2.so
//
//	functions: 4
//	class: 1
//

// <006767BA> ../public/engine2/isoundservice.h:9
void ISoundService::~ISoundService()
{
} /* size: 0 */

// <00676787> ../public/engine2/isoundservice.h:9
inline void ISoundService::~ISoundService()
{
} /* size: 0 */

// <006746DF> ../public/engine2/isoundservice.h:9
void ISoundService::ISoundService()
{
} /* size: 0 */

// <006746C3> ../public/engine2/isoundservice.h:9
inline void ISoundService::ISoundService()
{
} /* size: 0 */

// <005C2AA5> ../public/engine2/isoundservice.h:9
// member functions: 8
// member variable: 1
// class size: 8
class ISoundService : public IEngineService {
public:
	/* class IEngineService <ancestor>; */ /* 0 8 */
	void ISoundService(ISoundService* , ISoundService& );
	void ISoundService(ISoundService* , const ISoundService& );
	void ISoundService(ISoundService* );
	virtual void ~ISoundService(ISoundService* );
	void ISoundService(class ISoundService *, class ISoundService &); /* linkage=_ZN13ISoundServiceC4EOS_ */
	void ISoundService(class ISoundService *, const class ISoundService  &); /* linkage=_ZN13ISoundServiceC4ERKS_ */
	void ISoundService(class ISoundService *); /* linkage=_ZN13ISoundServiceC4Ev */
	virtual void ~ISoundService(class ISoundService *); /* linkage=_ZN13ISoundServiceD4Ev */
};

