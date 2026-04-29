
//
// soundsystem/vmix_voicelist.h
//
//	referenced by: libengine2.so
//
//	functions: 3
//	class: 1
//

// <0246E5F1> soundsystem/vmix_voicelist.h:36
// member functions: 20
// member variables: 3
// class size: 88
class CVMixMasterVoiceList {
private:
	CThreadFastMutex m_voiceStateMutex; /* 0 24 */
	CUtlVector<CSfxTable*, CUtlMemory<CSfxTable*, int> > m_asyncLoadQueue; /* 24 32 */
	CUtlVector<CVSndAsyncLoadRequest*, CUtlMemory<CVSndAsyncLoadRequest*, int> > m_asyncRequests; /* 56 32 */
	/* soundsystem/vmix_voicelist.h:44 */
	void ClearAsyncLoadQueue(CVMixMasterVoiceList* );
	/* soundsystem/vmix_voicelist.h:48 */
	void CVMixMasterVoiceList(CVMixMasterVoiceList* , int, const char* );
	/* soundsystem/vmix_voicelist.h:49 */
	void ~CVMixMasterVoiceList(CVMixMasterVoiceList* );
	/* soundsystem/vmix_voicelist.h:52 */
	CThreadFastMutex& GetMutex(CVMixMasterVoiceList* );
	/* soundsystem/vmix_voicelist.h:54 */
	void Lock(CVMixMasterVoiceList* );
	/* soundsystem/vmix_voicelist.h:59 */
	void Unlock(CVMixMasterVoiceList* );
	/* soundsystem/vmix_voicelist.h:64 */
	void QueueSfxForLoad(CVMixMasterVoiceList* , CSfxTable* , const char* );
	/* soundsystem/vmix_voicelist.h:65 */
	void OnSfxUnloaded(CVMixMasterVoiceList* , CSfxTable* );
	/* soundsystem/vmix_voicelist.h:66 */
	void NotifyFreeAudioCacheHandle(CVMixMasterVoiceList* , memhandle_t);
	/* soundsystem/vmix_voicelist.h:67 */
	void UpdateLoadQueue(CVMixMasterVoiceList* );
	/* <266c2cf> soundsystem/vmix_voicelist.cpp:182 */
	void ClearAsyncLoadQueue(class CVMixMasterVoiceList *); /* linkage=_ZN20CVMixMasterVoiceList19ClearAsyncLoadQueueEv */
	void CVMixMasterVoiceList(class CVMixMasterVoiceList *, int, const char  *); /* linkage=_ZN20CVMixMasterVoiceListC4EiPKc */
	void ~CVMixMasterVoiceList(class CVMixMasterVoiceList *); /* linkage=_ZN20CVMixMasterVoiceListD4Ev */
	class CThreadFastMutex & GetMutex(class CVMixMasterVoiceList *); /* linkage=_ZN20CVMixMasterVoiceList8GetMutexEv */
	void Lock(class CVMixMasterVoiceList *); /* linkage=_ZN20CVMixMasterVoiceList4LockEv */
	void Unlock(class CVMixMasterVoiceList *); /* linkage=_ZN20CVMixMasterVoiceList6UnlockEv */
	void QueueSfxForLoad(class CVMixMasterVoiceList *, class CSfxTable *, const char  *); /* linkage=_ZN20CVMixMasterVoiceList15QueueSfxForLoadEP9CSfxTablePKc */
	/* <266c721> soundsystem/vmix_voicelist.cpp:188 */
	void OnSfxUnloaded(class CVMixMasterVoiceList *, class CSfxTable *); /* linkage=_ZN20CVMixMasterVoiceList13OnSfxUnloadedEP9CSfxTable */
	void NotifyFreeAudioCacheHandle(class CVMixMasterVoiceList *, memhandle_t); /* linkage=_ZN20CVMixMasterVoiceList26NotifyFreeAudioCacheHandleEP13memhandle_t__ */
	void UpdateLoadQueue(class CVMixMasterVoiceList *); /* linkage=_ZN20CVMixMasterVoiceList15UpdateLoadQueueEv */
};

// <0264C912> soundsystem/vmix_voicelist.h:48
void CVMixMasterVoiceList::CVMixMasterVoiceList(int nVoiceCount, const char* pMainGraphName)
{
} /* size: 0 */

// <0264C8AF> soundsystem/vmix_voicelist.h:49
void CVMixMasterVoiceList::~CVMixMasterVoiceList()
{
} /* size: 0 */

// <026A3816> soundsystem/vmix_voicelist.h:52
inline void CVMixMasterVoiceList::GetMutex()
{
} /* size: 0 */

