
//
// vulkan/vmaimpl.cpp
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 8
//	class: 1
//

// <00CF1C5B> vulkan/vmaimpl.cpp:11
void CVMAThreadRWLock::CVMAThreadRWLock()
{
} /* size: 0 */

// <00CF1C3E> vulkan/vmaimpl.cpp:11
inline void CVMAThreadRWLock::CVMAThreadRWLock()
{
} /* size: 0 */

// <00CF1C27> vulkan/vmaimpl.cpp:11
void CVMAThreadRWLock::~CVMAThreadRWLock()
{
} /* size: 0 */

// <00CF1C0A> vulkan/vmaimpl.cpp:11
inline void CVMAThreadRWLock::~CVMAThreadRWLock()
{
} /* size: 0 */

// <00CAEB17> vulkan/vmaimpl.cpp:11
// member functions: 12
// member variable: 1
// class size: 344
class CVMAThreadRWLock : public CThreadRWLock {
public:
	/* class CThreadRWLock <ancestor>; */ /* 0 344 */
	/* vulkan/vmaimpl.cpp:14 */
	void LockRead(CVMAThreadRWLock* );
	/* vulkan/vmaimpl.cpp:19 */
	void UnlockRead(CVMAThreadRWLock* );
	/* vulkan/vmaimpl.cpp:24 */
	void LockWrite(CVMAThreadRWLock* );
	/* vulkan/vmaimpl.cpp:29 */
	void UnlockWrite(CVMAThreadRWLock* );
	void ~CVMAThreadRWLock(CVMAThreadRWLock* );
	void CVMAThreadRWLock(CVMAThreadRWLock* );
	void LockRead(class CVMAThreadRWLock *); /* linkage=_ZN16CVMAThreadRWLock8LockReadEv */
	void UnlockRead(class CVMAThreadRWLock *); /* linkage=_ZN16CVMAThreadRWLock10UnlockReadEv */
	void LockWrite(class CVMAThreadRWLock *); /* linkage=_ZN16CVMAThreadRWLock9LockWriteEv */
	void UnlockWrite(class CVMAThreadRWLock *); /* linkage=_ZN16CVMAThreadRWLock11UnlockWriteEv */
	void ~CVMAThreadRWLock(class CVMAThreadRWLock *); /* linkage=_ZN16CVMAThreadRWLockD4Ev */
	void CVMAThreadRWLock(class CVMAThreadRWLock *); /* linkage=_ZN16CVMAThreadRWLockC4Ev */
};

// <00CF49AC> vulkan/vmaimpl.cpp:14
inline void CVMAThreadRWLock::LockRead()
{
} /* size: 0 */

// <00CF4993> vulkan/vmaimpl.cpp:19
inline void CVMAThreadRWLock::UnlockRead()
{
} /* size: 0 */

// <00CF497A> vulkan/vmaimpl.cpp:24
inline void CVMAThreadRWLock::LockWrite()
{
} /* size: 0 */

// <00CF4961> vulkan/vmaimpl.cpp:29
inline void CVMAThreadRWLock::UnlockWrite()
{
} /* size: 0 */

