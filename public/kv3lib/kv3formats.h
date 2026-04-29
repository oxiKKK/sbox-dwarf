
//
// public/kv3lib/kv3formats.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libfilesystem_stdio.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//				   libvfx_vulkan.so
//
//	functions: 6
//	structs: 2
//

// <0000B60F> ../public/kv3lib/kv3formats.h:29
// member functions: 7
// member variables: 2
// struct size: 24
struct KV3ID_t {
	/* ../public/kv3lib/kv3formats.h:31 */
	void KV3ID_t(KV3ID_t* );
	/* ../public/kv3lib/kv3formats.h:37 */
	void KV3ID_t(KV3ID_t* , const char* , const V_uuid_t& );
	/* ../public/kv3lib/kv3formats.h:43 */
	void KV3ID_t(KV3ID_t* , const KV3ID_t& );
	/* ../public/kv3lib/kv3formats.h:49 */
	void KV3ID_t(KV3ID_t* , KV3ID_t& );
	/* ../public/kv3lib/kv3formats.h:55 */
	bool operator==(const KV3ID_t* , const KV3ID_t& );
	/* ../public/kv3lib/kv3formats.h:60 */
	KV3ID_t& operator=(KV3ID_t* , const KV3ID_t& );
	/* ../public/kv3lib/kv3formats.h:67 */
	bool operator!=(const KV3ID_t* , const KV3ID_t& );
	const char * m_pName; /* 0 8 */
	V_uuid_t m_UUID; /* 8 16 */
};

// <057F6323> ../../public/kv3lib/kv3formats.h:29
// member functions: 7
// member variables: 2
// struct size: 24
struct KV3ID_t {
	/* ../../public/kv3lib/kv3formats.h:31 */
	void KV3ID_t(KV3ID_t* );
	/* ../../public/kv3lib/kv3formats.h:37 */
	void KV3ID_t(KV3ID_t* , const char* , const V_uuid_t& );
	/* ../../public/kv3lib/kv3formats.h:43 */
	void KV3ID_t(KV3ID_t* , const KV3ID_t& );
	/* ../../public/kv3lib/kv3formats.h:49 */
	void KV3ID_t(KV3ID_t* , KV3ID_t& );
	/* ../../public/kv3lib/kv3formats.h:55 */
	bool operator==(const KV3ID_t* , const KV3ID_t& );
	/* ../../public/kv3lib/kv3formats.h:60 */
	KV3ID_t& operator=(KV3ID_t* , const KV3ID_t& );
	/* ../../public/kv3lib/kv3formats.h:67 */
	bool operator!=(const KV3ID_t* , const KV3ID_t& );
	const char * m_pName; /* 0 8 */
	V_uuid_t m_UUID; /* 8 16 */
};

// <06F2EB7C> ../../public/kv3lib/kv3formats.h:37
void KV3ID_t::KV3ID_t(const char* pName, const V_uuid_t& id)
{
} /* size: 0 */

// <06F2EB4C> ../../public/kv3lib/kv3formats.h:37
inline void KV3ID_t::KV3ID_t(const char* pName, const V_uuid_t& id)
{
} /* size: 0 */

// <057A5B01> ../public/kv3lib/kv3formats.h:43
void KV3ID_t::KV3ID_t(const KV3ID_t& other)
{
} /* size: 0 */

// <057A5ADC> ../public/kv3lib/kv3formats.h:43
inline void KV3ID_t::KV3ID_t(const KV3ID_t& other)
{
} /* size: 0 */

// <0125A1BE> ../public/kv3lib/kv3formats.h:55
inline void KV3ID_t::operator==(const KV3ID_t& rhs)
{
} /* size: 0 */

// <05698467> ../public/kv3lib/kv3formats.h:60
inline void KV3ID_t::operator=(const KV3ID_t& rhs)
{
} /* size: 0 */

