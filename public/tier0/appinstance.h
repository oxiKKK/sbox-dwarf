
//
// public/tier0/appinstance.h
//
//	referenced by: libtier0.so
//
//	class: 1
//

// <00015467> ../public/tier0/appinstance.h:38
// member functions: 14
// member variables: 2
// class size: 16
class CSingleAppInstance {
	/* ../public/tier0/appinstance.h:41 */
	void CSingleAppInstance(CSingleAppInstance* , const char* , bool, bool);
	/* ../public/tier0/appinstance.h:42 */
	void ~CSingleAppInstance(CSingleAppInstance* );
	/* ../public/tier0/appinstance.h:44 */
	bool CheckForOtherRunningInstances(CSingleAppInstance* , bool, bool);
	/* ../public/tier0/appinstance.h:45 */
	void ShutdownInstance(CSingleAppInstance* );
	/* ../public/tier0/appinstance.h:47 */
	bool CheckForRunningInstance(const char* );
	/* ../public/tier0/appinstance.h:49 */
	bool IsUniqueInstance(CSingleAppInstance* );
private:
	/* ../public/tier0/appinstance.h:52 */
	void CSingleAppInstance(CSingleAppInstance* );
	HANDLE m_hMutex; /* 0 8 */
	bool m_isUniqueInstance; /* 8 1 */
	void CSingleAppInstance(class CSingleAppInstance *, const char  *, bool, bool); /* linkage=_ZN18CSingleAppInstanceC4EPKcbb */
	void ~CSingleAppInstance(class CSingleAppInstance *); /* linkage=_ZN18CSingleAppInstanceD4Ev */
	bool CheckForOtherRunningInstances(class CSingleAppInstance *, bool, bool); /* linkage=_ZN18CSingleAppInstance29CheckForOtherRunningInstancesEbb */
	void ShutdownInstance(class CSingleAppInstance *); /* linkage=_ZN18CSingleAppInstance16ShutdownInstanceEv */
	bool CheckForRunningInstance(const char  *); /* linkage=_ZN18CSingleAppInstance23CheckForRunningInstanceEPKc */
	bool IsUniqueInstance(class CSingleAppInstance *); /* linkage=_ZN18CSingleAppInstance16IsUniqueInstanceEv */
	void CSingleAppInstance(class CSingleAppInstance *); /* linkage=_ZN18CSingleAppInstanceC4Ev */
};

