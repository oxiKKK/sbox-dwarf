
//
// public/soundsystem/ivsound_manager.h
//
//	referenced by: libengine2.so
//
//	functions: 4
//	class: 1
//

// <026A285E> ../public/soundsystem/ivsound_manager.h:23
void IVSoundManager::IVSoundManager()
{
} /* size: 0 */

// <026A2841> ../public/soundsystem/ivsound_manager.h:23
inline void IVSoundManager::IVSoundManager()
{
} /* size: 0 */

// <02422DF5> ../public/soundsystem/ivsound_manager.h:23
// member functions: 18
// member variable: 1
// vtable entries: 7
// class size: 8
class IVSoundManager : public IResourceTypeManager {
public:
	/* class IResourceTypeManager <ancestor>; */ /* 0 8 */
	/* ../public/soundsystem/ivsound_manager.h:26 */
	virtual void ~IVSoundManager(IVSoundManager* );
	/* ../public/soundsystem/ivsound_manager.h:28 */
	virtual vsnds_id_t AddVsnd(IVSoundManager* , const char* );
	/* ../public/soundsystem/ivsound_manager.h:29 */
	virtual const char* GetVsndPath(const IVSoundManager* , vsnds_id_t);
	/* ../public/soundsystem/ivsound_manager.h:30 */
	virtual float GetVSndDuration(const IVSoundManager* , const char* , float);
	/* ../public/soundsystem/ivsound_manager.h:32 */
	virtual CSfxTable* GetSfx(IVSoundManager* , vsnds_id_t, VMIX_MEMTYPE);
	/* ../public/soundsystem/ivsound_manager.h:33 */
	virtual CSfxTable* GetSfx(IVSoundManager* , const char* , bool, VMIX_MEMTYPE);
	/* ../public/soundsystem/ivsound_manager.h:34 */
	virtual bool ToolLoadVSnd(IVSoundManager* , CSimplePCMWaveData* , const char* );
	/* ../public/soundsystem/ivsound_manager.h:36 */
	virtual CSfxTable* CreateSfx(IVSoundManager* , const char* , int, int, int, int, float, bool, void* , int);
	void IVSoundManager(class IVSoundManager *, const class IVSoundManager  &); /* linkage=_ZN14IVSoundManagerC4ERKS_ */
	void IVSoundManager(class IVSoundManager *); /* linkage=_ZN14IVSoundManagerC4Ev */
	virtual void ~IVSoundManager(class IVSoundManager *); /* linkage=_ZN14IVSoundManagerD4Ev */
	virtual vsnds_id_t AddVsnd(class IVSoundManager *, const char  *); /* linkage=_ZN14IVSoundManager7AddVsndEPKc */
	virtual const char  * GetVsndPath(const class IVSoundManager  *, vsnds_id_t); /* linkage=_ZNK14IVSoundManager11GetVsndPathE10CUtlSymbol */
	virtual float GetVSndDuration(const class IVSoundManager  *, const char  *, float); /* linkage=_ZNK14IVSoundManager15GetVSndDurationEPKcf */
	virtual class CSfxTable * GetSfx(class IVSoundManager *, vsnds_id_t, enum VMIX_MEMTYPE); /* linkage=_ZN14IVSoundManager6GetSfxE10CUtlSymbol12VMIX_MEMTYPE */
	virtual class CSfxTable * GetSfx(class IVSoundManager *, const char  *, bool, enum VMIX_MEMTYPE); /* linkage=_ZN14IVSoundManager6GetSfxEPKcb12VMIX_MEMTYPE */
	virtual bool ToolLoadVSnd(class IVSoundManager *, class CSimplePCMWaveData *, const char  *); /* linkage=_ZN14IVSoundManager12ToolLoadVSndEP18CSimplePCMWaveDataPKc */
	virtual class CSfxTable * CreateSfx(class IVSoundManager *, const char  *, int, int, int, int, float, bool, void *, int); /* linkage=_ZN14IVSoundManager9CreateSfxEPKciiiifbPvi */
};

// <026A385F> ../public/soundsystem/ivsound_manager.h:26
void IVSoundManager::~IVSoundManager()
{
} /* size: 0 */

// <026A382F> ../public/soundsystem/ivsound_manager.h:26
inline void IVSoundManager::~IVSoundManager()
{
} /* size: 0 */

