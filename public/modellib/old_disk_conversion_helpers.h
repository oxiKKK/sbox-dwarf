
//
// public/modellib/old_disk_conversion_helpers.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 5
//	struct: 1
//

// <04B250B4> ../public/modellib/old_disk_conversion_helpers.h:16
// member functions: 3
// member variable: 1
// struct size: 32
struct CConvertOldDiskCtx {
	/* ../public/modellib/old_disk_conversion_helpers.h:19 */
	void CConvertOldDiskCtx(CConvertOldDiskCtx* );
	/* ../public/modellib/old_disk_conversion_helpers.h:23 */
	void ~CConvertOldDiskCtx(CConvertOldDiskCtx* );
	/* ../public/modellib/old_disk_conversion_helpers.h:29 */
	bool RegisterNewSubresource(CConvertOldDiskCtx* , ResourceHandle_t);
private:
	CUtlHashtable<const ResourceBindingBase_t*, empty_t, DefaultHashFunctor<const ResourceBindingBase_t*>, DefaultEqualFunctor<const ResourceBindingBase_t*>, undefined_t, CUtlMemory<CUtlHashtableEntry<const ResourceBindingBase_t*, empty_t>, int> > m_HandledSubResources; /* 0 32 */
};

// <0036ED0D> ../public/modellib/old_disk_conversion_helpers.h:19
void CConvertOldDiskCtx::CConvertOldDiskCtx()
{
} /* size: 0 */

// <0036ECF4> ../public/modellib/old_disk_conversion_helpers.h:19
inline void CConvertOldDiskCtx::CConvertOldDiskCtx()
{
} /* size: 0 */

// <0036ECDD> ../public/modellib/old_disk_conversion_helpers.h:23
void CConvertOldDiskCtx::~CConvertOldDiskCtx()
{
} /* size: 0 */

// <0036ECC4> ../public/modellib/old_disk_conversion_helpers.h:23
inline void CConvertOldDiskCtx::~CConvertOldDiskCtx()
{
} /* size: 0 */

// <04E48DB6> ../public/modellib/old_disk_conversion_helpers.h:29
inline void CConvertOldDiskCtx::RegisterNewSubresource(ResourceHandle_t hResource)
{
} /* size: 0 */

