
//
// public/tier0/checksum_md5.h
//
//	referenced by: libengine2.so
//				   libfilesystem_stdio.so
//				   libmaterialsystem2.so
//				   librendersystemvulkan.so
//				   libtier0.so
//				   libvfx_vulkan.so
//
//	functions: 4
//	structs: 2
//

// <000621DE> ../public/tier0/checksum_md5.h:17
// member functions: 4
// member variable: 1
// struct size: 16
struct MD5Value_t {
	unsigned char bits[16]; /* 0 16 */
	/* ../public/tier0/checksum_md5.h:21 */
	void Zero(MD5Value_t* );
	/* ../public/tier0/checksum_md5.h:22 */
	bool IsZero(const MD5Value_t* );
	/* ../public/tier0/checksum_md5.h:24 */
	bool operator==(const MD5Value_t* , const MD5Value_t& );
	/* ../public/tier0/checksum_md5.h:25 */
	bool operator!=(const MD5Value_t* , const MD5Value_t& );
};

// <068765A5> ../public/tier0/checksum_md5.h:30
// member variables: 3
// struct size: 88
typedef struct {
	unsigned int buf[4]; /* 0 16 */
	unsigned int bits[2]; /* 16 8 */
	unsigned char in[64]; /* 24 64 */
} MD5Context_t;

// <068DB964> ../public/tier0/checksum_md5.h:36
void MD5Init(MD5Context_t *)
{
} /* size: 0 */

// <068DB945> ../public/tier0/checksum_md5.h:37
void MD5Update(MD5Context_t *, const unsigned char *, unsigned int)
{
} /* size: 0 */

// <068DB925> ../public/tier0/checksum_md5.h:38
void MD5Final(unsigned char *, MD5Context_t *)
{
} /* size: 0 */

// <0020D143> ../public/tier0/checksum_md5.h:44
void MD5_ProcessSingleBuffer(const void *, int, MD5Value_t &)
{
} /* size: 0 */

