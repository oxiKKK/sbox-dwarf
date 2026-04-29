
//
// thirdparty/minivorbis/minivorbis.h
//
//	referenced by: libengine2.so
//
//	functions: 378
//	structs: 44
//

// <020C9599> ../thirdparty/minivorbis/minivorbis.h:47
// member functions: 35
// member variable: 1
// struct size: 8
struct _OggAutocastPtr {
	void * p; /* 0 8 */
	/* ../thirdparty/minivorbis/minivorbis.h:49 */
	void _OggAutocastPtr(_OggAutocastPtr* , void* );
	/* ../thirdparty/minivorbis/minivorbis.h:51 */
	void* operator void*(const _OggAutocastPtr* );
	/* ../thirdparty/minivorbis/minivorbis.h:50 */
	vorbis_comment* operator vorbis_comment*<vorbis_comment>(const _OggAutocastPtr* );
	/* ../thirdparty/minivorbis/minivorbis.h:50 */
	vorbis_info* operator vorbis_info*<vorbis_info>(const _OggAutocastPtr* );
	/* ../thirdparty/minivorbis/minivorbis.h:50 */
	unsigned int* operator unsigned int*<unsigned int>(const _OggAutocastPtr* );
	/* ../thirdparty/minivorbis/minivorbis.h:50 */
	static_codebook* operator static_codebook*<static_codebook>(const _OggAutocastPtr* );
	/* ../thirdparty/minivorbis/minivorbis.h:50 */
	int*** operator int***<int**>(const _OggAutocastPtr* );
	/* ../thirdparty/minivorbis/minivorbis.h:50 */
	vorbis_info_mapping0* operator vorbis_info_mapping0*<vorbis_info_mapping0>(const _OggAutocastPtr* );
	/* ../thirdparty/minivorbis/minivorbis.h:50 */
	long int** operator long int**<long int*>(const _OggAutocastPtr* );
	/* ../thirdparty/minivorbis/minivorbis.h:50 */
	codebook** operator codebook**<codebook*>(const _OggAutocastPtr* );
	/* ../thirdparty/minivorbis/minivorbis.h:50 */
	codebook*** operator codebook***<codebook**>(const _OggAutocastPtr* );
	/* ../thirdparty/minivorbis/minivorbis.h:50 */
	vorbis_look_residue0* operator vorbis_look_residue0*<vorbis_look_residue0>(const _OggAutocastPtr* );
	/* ../thirdparty/minivorbis/minivorbis.h:50 */
	vorbis_info_residue0* operator vorbis_info_residue0*<vorbis_info_residue0>(const _OggAutocastPtr* );
	/* ../thirdparty/minivorbis/minivorbis.h:50 */
	int** operator int**<int*>(const _OggAutocastPtr* );
	/* ../thirdparty/minivorbis/minivorbis.h:50 */
	vorbis_look_floor0* operator vorbis_look_floor0*<vorbis_look_floor0>(const _OggAutocastPtr* );
	/* ../thirdparty/minivorbis/minivorbis.h:50 */
	vorbis_info_floor0* operator vorbis_info_floor0*<vorbis_info_floor0>(const _OggAutocastPtr* );
	/* ../thirdparty/minivorbis/minivorbis.h:50 */
	vorbis_look_floor1* operator vorbis_look_floor1*<vorbis_look_floor1>(const _OggAutocastPtr* );
	/* ../thirdparty/minivorbis/minivorbis.h:50 */
	vorbis_info_floor1* operator vorbis_info_floor1*<vorbis_info_floor1>(const _OggAutocastPtr* );
	/* ../thirdparty/minivorbis/minivorbis.h:50 */
	vorbis_info_mode* operator vorbis_info_mode*<vorbis_info_mode>(const _OggAutocastPtr* );
	/* ../thirdparty/minivorbis/minivorbis.h:50 */
	char* operator char*<char>(const _OggAutocastPtr* );
	/* ../thirdparty/minivorbis/minivorbis.h:50 */
	char** operator char**<char*>(const _OggAutocastPtr* );
	/* ../thirdparty/minivorbis/minivorbis.h:50 */
	float*** operator float***<float**>(const _OggAutocastPtr* );
	/* ../thirdparty/minivorbis/minivorbis.h:50 */
	vorbis_look_psy_global* operator vorbis_look_psy_global*<vorbis_look_psy_global>(const _OggAutocastPtr* );
	/* ../thirdparty/minivorbis/minivorbis.h:50 */
	envelope_filter_state* operator envelope_filter_state*<envelope_filter_state>(const _OggAutocastPtr* );
	/* ../thirdparty/minivorbis/minivorbis.h:50 */
	envelope_lookup* operator envelope_lookup*<envelope_lookup>(const _OggAutocastPtr* );
	/* ../thirdparty/minivorbis/minivorbis.h:50 */
	float** operator float**<float*>(const _OggAutocastPtr* );
	/* ../thirdparty/minivorbis/minivorbis.h:50 */
	vorbis_look_psy* operator vorbis_look_psy*<vorbis_look_psy>(const _OggAutocastPtr* );
	/* ../thirdparty/minivorbis/minivorbis.h:50 */
	codebook* operator codebook*<codebook>(const _OggAutocastPtr* );
	/* ../thirdparty/minivorbis/minivorbis.h:50 */
	void** operator void**<void*>(const _OggAutocastPtr* );
	/* ../thirdparty/minivorbis/minivorbis.h:50 */
	alloc_chain* operator alloc_chain*<alloc_chain>(const _OggAutocastPtr* );
	/* ../thirdparty/minivorbis/minivorbis.h:50 */
	oggpack_buffer* operator oggpack_buffer*<oggpack_buffer>(const _OggAutocastPtr* );
	/* ../thirdparty/minivorbis/minivorbis.h:50 */
	float* operator float*<float>(const _OggAutocastPtr* );
	/* ../thirdparty/minivorbis/minivorbis.h:50 */
	long int* operator long int*<long int>(const _OggAutocastPtr* );
	/* ../thirdparty/minivorbis/minivorbis.h:50 */
	int* operator int*<int>(const _OggAutocastPtr* );
	/* ../thirdparty/minivorbis/minivorbis.h:50 */
	unsigned char* operator unsigned char*<unsigned char>(const _OggAutocastPtr* );
};

// <020EAD8F> ../thirdparty/minivorbis/minivorbis.h:49
void _OggAutocastPtr::_OggAutocastPtr(void* pp)
{
} /* size: 0 */

// <020EAD6B> ../thirdparty/minivorbis/minivorbis.h:49
inline void _OggAutocastPtr::_OggAutocastPtr(void* pp)
{
} /* size: 0 */

// <020CD68F> ../thirdparty/minivorbis/minivorbis.h:50
inline void operator unsigned char*<unsigned _OggAutocastPtr::char>()
{
} /* size: 0 */

// <020CD66F> ../thirdparty/minivorbis/minivorbis.h:50
inline void operator _OggAutocastPtr::int*<int>()
{
} /* size: 0 */

// <020CD64F> ../thirdparty/minivorbis/minivorbis.h:50
inline void operator long int*<long _OggAutocastPtr::int>()
{
} /* size: 0 */

// <020CD62F> ../thirdparty/minivorbis/minivorbis.h:50
inline void operator _OggAutocastPtr::float*<float>()
{
} /* size: 0 */

// <020CD60F> ../thirdparty/minivorbis/minivorbis.h:50
inline void operator _OggAutocastPtr::oggpack_buffer*<oggpack_buffer>()
{
} /* size: 0 */

// <020CD5EF> ../thirdparty/minivorbis/minivorbis.h:50
inline void operator _OggAutocastPtr::alloc_chain*<alloc_chain>()
{
} /* size: 0 */

// <020CD5CA> ../thirdparty/minivorbis/minivorbis.h:50
inline void** operator _OggAutocastPtr::void**<void*>()
{
} /* size: 0 */

// <020CD5AA> ../thirdparty/minivorbis/minivorbis.h:50
inline void operator _OggAutocastPtr::codebook*<codebook>()
{
} /* size: 0 */

// <020CD58A> ../thirdparty/minivorbis/minivorbis.h:50
inline void operator _OggAutocastPtr::vorbis_look_psy*<vorbis_look_psy>()
{
} /* size: 0 */

// <020CD56A> ../thirdparty/minivorbis/minivorbis.h:50
inline void operator _OggAutocastPtr::float**<float*>()
{
} /* size: 0 */

// <020CD54A> ../thirdparty/minivorbis/minivorbis.h:50
inline void operator _OggAutocastPtr::envelope_lookup*<envelope_lookup>()
{
} /* size: 0 */

// <020CD52A> ../thirdparty/minivorbis/minivorbis.h:50
inline void operator _OggAutocastPtr::envelope_filter_state*<envelope_filter_state>()
{
} /* size: 0 */

// <020CD50A> ../thirdparty/minivorbis/minivorbis.h:50
inline void operator _OggAutocastPtr::vorbis_look_psy_global*<vorbis_look_psy_global>()
{
} /* size: 0 */

// <020CD4EA> ../thirdparty/minivorbis/minivorbis.h:50
inline void operator _OggAutocastPtr::float***<float**>()
{
} /* size: 0 */

// <020CD4CA> ../thirdparty/minivorbis/minivorbis.h:50
inline void operator _OggAutocastPtr::char**<char*>()
{
} /* size: 0 */

// <020CD4AA> ../thirdparty/minivorbis/minivorbis.h:50
inline void operator _OggAutocastPtr::char*<char>()
{
} /* size: 0 */

// <020CD48A> ../thirdparty/minivorbis/minivorbis.h:50
inline void operator _OggAutocastPtr::vorbis_info_mode*<vorbis_info_mode>()
{
} /* size: 0 */

// <020CD46A> ../thirdparty/minivorbis/minivorbis.h:50
inline void operator _OggAutocastPtr::vorbis_info_floor1*<vorbis_info_floor1>()
{
} /* size: 0 */

// <020CD44A> ../thirdparty/minivorbis/minivorbis.h:50
inline void operator _OggAutocastPtr::vorbis_look_floor1*<vorbis_look_floor1>()
{
} /* size: 0 */

// <020CD424> ../thirdparty/minivorbis/minivorbis.h:50
inline void operator _OggAutocastPtr::vorbis_info_floor0*<vorbis_info_floor0>()
{
} /* size: 0 */

// <020CD404> ../thirdparty/minivorbis/minivorbis.h:50
inline void operator _OggAutocastPtr::vorbis_look_floor0*<vorbis_look_floor0>()
{
} /* size: 0 */

// <020CD3DE> ../thirdparty/minivorbis/minivorbis.h:50
inline void operator _OggAutocastPtr::int**<int*>()
{
} /* size: 0 */

// <020CD3BE> ../thirdparty/minivorbis/minivorbis.h:50
inline void operator _OggAutocastPtr::vorbis_info_residue0*<vorbis_info_residue0>()
{
} /* size: 0 */

// <020CD398> ../thirdparty/minivorbis/minivorbis.h:50
inline void operator _OggAutocastPtr::vorbis_look_residue0*<vorbis_look_residue0>()
{
} /* size: 0 */

// <020CD372> ../thirdparty/minivorbis/minivorbis.h:50
inline void operator _OggAutocastPtr::codebook***<codebook**>()
{
} /* size: 0 */

// <020CD34C> ../thirdparty/minivorbis/minivorbis.h:50
inline void operator _OggAutocastPtr::codebook**<codebook*>()
{
} /* size: 0 */

// <020CD320> ../thirdparty/minivorbis/minivorbis.h:50
inline void operator long int**<long _OggAutocastPtr::int*>()
{
} /* size: 0 */

// <020CD300> ../thirdparty/minivorbis/minivorbis.h:50
inline void operator _OggAutocastPtr::vorbis_info_mapping0*<vorbis_info_mapping0>()
{
} /* size: 0 */

// <020CD2DA> ../thirdparty/minivorbis/minivorbis.h:50
inline void operator _OggAutocastPtr::int***<int**>()
{
} /* size: 0 */

// <020CD2B4> ../thirdparty/minivorbis/minivorbis.h:50
inline void operator _OggAutocastPtr::static_codebook*<static_codebook>()
{
} /* size: 0 */

// <020CD28E> ../thirdparty/minivorbis/minivorbis.h:50
inline void operator unsigned int*<unsigned _OggAutocastPtr::int>()
{
} /* size: 0 */

// <020CD26E> ../thirdparty/minivorbis/minivorbis.h:50
inline void operator _OggAutocastPtr::vorbis_info*<vorbis_info>()
{
} /* size: 0 */

// <020CD248> ../thirdparty/minivorbis/minivorbis.h:50
inline void operator _OggAutocastPtr::vorbis_comment*<vorbis_comment>()
{
} /* size: 0 */

// <020EAD4D> ../thirdparty/minivorbis/minivorbis.h:51
inline void* operator _OggAutocastPtr::void*()
{
} /* size: 0 */

// <020C9B78> ../thirdparty/minivorbis/minivorbis.h:229
// member variables: 2
// struct size: 16
typedef struct {
	void * iov_base; /* 0 8 */
	size_t iov_len; /* 8 8 */
} ogg_iovec_t;

// <020BFD40> ../thirdparty/minivorbis/minivorbis.h:234
// member variables: 5
// struct size: 40
typedef struct {
	long int endbyte; /* 0 8 */
	int endbit; /* 8 4 */
	unsigned char * buffer; /* 16 8 */
	unsigned char * ptr; /* 24 8 */
	long int storage; /* 32 8 */
} oggpack_buffer;

// <020C9C15> ../thirdparty/minivorbis/minivorbis.h:245
// member variables: 4
// struct size: 32
typedef struct {
	unsigned char * header; /* 0 8 */
	long int header_len; /* 8 8 */
	unsigned char * body; /* 16 8 */
	long int body_len; /* 24 8 */
} ogg_page;

// <020BFDA5> ../thirdparty/minivorbis/minivorbis.h:255
// member variables: 18
// struct size: 408
typedef struct {
	unsigned char * body_data; /* 0 8 */
	long int body_storage; /* 8 8 */
	long int body_fill; /* 16 8 */
	long int body_returned; /* 24 8 */
	int * lacing_vals; /* 32 8 */
	ogg_int64_t * granule_vals; /* 40 8 */
	long int lacing_storage; /* 48 8 */
	long int lacing_fill; /* 56 8 */
	long int lacing_packet; /* 64 8 */
	long int lacing_returned; /* 72 8 */
	unsigned char header[282]; /* 80 282 */
	int header_fill; /* 364 4 */
	int e_o_s; /* 368 4 */
	int b_o_s; /* 372 4 */
	long int serialno; /* 376 8 */
	long int pageno; /* 384 8 */
	ogg_int64_t packetno; /* 392 8 */
	ogg_int64_t granulepos; /* 400 8 */
} ogg_stream_state;

// <020C9DCB> ../thirdparty/minivorbis/minivorbis.h:292
// member variables: 6
// struct size: 48
typedef struct {
	unsigned char * packet; /* 0 8 */
	long int bytes; /* 8 8 */
	long int b_o_s; /* 16 8 */
	long int e_o_s; /* 24 8 */
	ogg_int64_t granulepos; /* 32 8 */
	ogg_int64_t packetno; /* 40 8 */
} ogg_packet;

// <020BFF00> ../thirdparty/minivorbis/minivorbis.h:307
// member variables: 7
// struct size: 32
typedef struct {
	unsigned char * data; /* 0 8 */
	int storage; /* 8 4 */
	int fill; /* 12 4 */
	int returned; /* 16 4 */
	int unsynced; /* 20 4 */
	int headerbytes; /* 24 4 */
	int bodybytes; /* 28 4 */
} ogg_sync_state;

// <020BFF8C> ../thirdparty/minivorbis/minivorbis.h:439
// member variables: 8
// struct size: 56
struct vorbis_info {
	int version; /* 0 4 */
	int channels; /* 4 4 */
	long int rate; /* 8 8 */
	long int bitrate_upper; /* 16 8 */
	long int bitrate_nominal; /* 24 8 */
	long int bitrate_lower; /* 32 8 */
	long int bitrate_window; /* 40 8 */
	void * codec_setup; /* 48 8 */
};

// <020C0028> ../thirdparty/minivorbis/minivorbis.h:470
// member variables: 20
// struct size: 144
struct vorbis_dsp_state {
	int analysisp; /* 0 4 */
	vorbis_info * vi; /* 8 8 */
	float * * pcm; /* 16 8 */
	float * * pcmret; /* 24 8 */
	int pcm_storage; /* 32 4 */
	int pcm_current; /* 36 4 */
	int pcm_returned; /* 40 4 */
	int preextrapolate; /* 44 4 */
	int eofflag; /* 48 4 */
	long int lW; /* 56 8 */
	long int W; /* 64 8 */
	long int nW; /* 72 8 */
	long int centerW; /* 80 8 */
	ogg_int64_t granulepos; /* 88 8 */
	ogg_int64_t sequence; /* 96 8 */
	ogg_int64_t glue_bits; /* 104 8 */
	ogg_int64_t time_bits; /* 112 8 */
	ogg_int64_t floor_bits; /* 120 8 */
	ogg_int64_t res_bits; /* 128 8 */
	void * backend_state; /* 136 8 */
};

// <020C018D> ../thirdparty/minivorbis/minivorbis.h:499
// member variables: 21
// struct size: 192
struct vorbis_block {
	float * * pcm; /* 0 8 */
	oggpack_buffer opb; /* 8 40 */
	long int lW; /* 48 8 */
	long int W; /* 56 8 */
	long int nW; /* 64 8 */
	int pcmend; /* 72 4 */
	int mode; /* 76 4 */
	int eofflag; /* 80 4 */
	ogg_int64_t granulepos; /* 88 8 */
	ogg_int64_t sequence; /* 96 8 */
	vorbis_dsp_state * vd; /* 104 8 */
	void * localstore; /* 112 8 */
	long int localtop; /* 120 8 */
	long int localalloc; /* 128 8 */
	long int totaluse; /* 136 8 */
	alloc_chain * reap; /* 144 8 */
	long int glue_bits; /* 152 8 */
	long int time_bits; /* 160 8 */
	long int floor_bits; /* 168 8 */
	long int res_bits; /* 176 8 */
	void * internal; /* 184 8 */
};

// <020C02F5> ../thirdparty/minivorbis/minivorbis.h:538
// member variables: 2
// struct size: 16
struct alloc_chain {
	void * ptr; /* 0 8 */
	alloc_chain * next; /* 8 8 */
};

// <020C0337> ../thirdparty/minivorbis/minivorbis.h:551
// member variables: 4
// struct size: 32
struct vorbis_comment {
	char * * user_comments; /* 0 8 */
	int * comment_lengths; /* 8 8 */
	int comments; /* 16 4 */
	char * vendor; /* 24 8 */
};

// <020C0393> ../thirdparty/minivorbis/minivorbis.h:692
// member functions: 4
// member variables: 4
// struct size: 32
typedef struct {
	size_t (*read_func)(void* , size_t, size_t, void* ); /* 0 8* /
	int (*seek_func)(void* , ogg_int64_t, int); /* 8 8* /
	int (*close_func)(void* ); /* 16 8* /
	long int (*tell_func)(void* ); /* 24 8* /
} ov_callbacks;

// <020C0481> ../thirdparty/minivorbis/minivorbis.h:764
// member variables: 22
// struct size: 944
struct OggVorbis_File {
	void * datasource; /* 0 8 */
	int seekable; /* 8 4 */
	ogg_int64_t offset; /* 16 8 */
	ogg_int64_t end; /* 24 8 */
	ogg_sync_state oy; /* 32 32 */
	int links; /* 64 4 */
	ogg_int64_t * offsets; /* 72 8 */
	ogg_int64_t * dataoffsets; /* 80 8 */
	long int * serialnos; /* 88 8 */
	ogg_int64_t * pcmlengths; /* 96 8 */
	vorbis_info * vi; /* 104 8 */
	vorbis_comment * vc; /* 112 8 */
	ogg_int64_t pcm_offset; /* 120 8 */
	int ready_state; /* 128 4 */
	long int current_serialno; /* 136 8 */
	int current_link; /* 144 4 */
	double bittrack; /* 152 8 */
	double samptrack; /* 160 8 */
	ogg_stream_state os; /* 168 408 */
	vorbis_dsp_state vd; /* 576 144 */
	vorbis_block vb; /* 720 192 */
	ov_callbacks callbacks; /* 912 32 */
};

// <020C164A> ../thirdparty/minivorbis/minivorbis.h:802
int ov_clear(OggVorbis_File *)
{
} /* size: 0 */

// <020C1690> ../thirdparty/minivorbis/minivorbis.h:805
int ov_open_callbacks(void *, OggVorbis_File *, const char *, long int, ov_callbacks)
{
} /* size: 0 */

// <020C15AD> ../thirdparty/minivorbis/minivorbis.h:820
ogg_int64_t ov_pcm_total(OggVorbis_File *, int)
{
} /* size: 0 */

// <020C158F> ../thirdparty/minivorbis/minivorbis.h:821
double ov_time_total(OggVorbis_File *, int)
{
} /* size: 0 */

// <020C1503> ../thirdparty/minivorbis/minivorbis.h:826
int ov_time_seek(OggVorbis_File *, double)
{
} /* size: 0 */

// <020C1576> ../thirdparty/minivorbis/minivorbis.h:836
ogg_int64_t ov_pcm_tell(OggVorbis_File *)
{
} /* size: 0 */

// <020C15CB> ../thirdparty/minivorbis/minivorbis.h:839
vorbis_info* ov_info(OggVorbis_File *, int)
{
} /* size: 0 */

// <020C1527> ../thirdparty/minivorbis/minivorbis.h:847
long int ov_read(OggVorbis_File *, char *, int, int, int, int, int *)
{
} /* size: 0 */

// <020EAD32> ../thirdparty/minivorbis/minivorbis.h:902
void oggpack_writeinit(oggpack_buffer* b)
{
} /* size: 0 */

// <020EAC44> ../thirdparty/minivorbis/minivorbis.h:909
// function calls: 3
void oggpackB_writeinit(oggpack_buffer* b)
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 903
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 904
	oggpack_writeinit(oggpack_buffer* b); // 910
} /* size: 0, inline expansions: 3 (0 bytes) */

// <020EAC25> ../thirdparty/minivorbis/minivorbis.h:913
int oggpack_writecheck(oggpack_buffer* b)
{
} /* size: 0 */

// <020EABC0> ../thirdparty/minivorbis/minivorbis.h:918
// function call: 1
int oggpackB_writecheck(oggpack_buffer* b)
{
	oggpack_writecheck(oggpack_buffer* b); // 919
} /* size: 0, inline expansions: 1 (0 bytes) */

// <020EAB8B> ../thirdparty/minivorbis/minivorbis.h:922
// variable: 1
void oggpack_writetrunc(oggpack_buffer* b, long int bits)
{
	long int bytes; // 923
} /* size: 0, variables: 1 */

// <020EAB31> ../thirdparty/minivorbis/minivorbis.h:933
// variable: 1
void oggpackB_writetrunc(oggpack_buffer* b, long int bits)
{
	long int bytes; // 934
} /* size: 0, variables: 1 */

// <020EA9CB> ../thirdparty/minivorbis/minivorbis.h:945
// variable: 1
// function calls: 3
void oggpack_write(oggpack_buffer* b, long unsigned int value, int bits)
{

err: // 983
	{
		void* ret; // 948
		_OggAutocastPtr::_OggAutocastPtr(
				void* pp);  // 951
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1114
	oggpack_writeclear(oggpack_buffer* b); // 984
} /* size: 388, goto labels: 1, inline expansions: 2 (100 bytes) */

// <020EA865> ../thirdparty/minivorbis/minivorbis.h:988
// variable: 1
// function calls: 3
void oggpackB_write(oggpack_buffer* b, long unsigned int value, int bits)
{

err: // 1026
	{
		void* ret; // 991
		_OggAutocastPtr::_OggAutocastPtr(
				void* pp);  // 994
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1114
	oggpack_writeclear(oggpack_buffer* b); // 1027
} /* size: 0, goto labels: 1, inline expansions: 2 (0 bytes) */

// <020EA806> ../thirdparty/minivorbis/minivorbis.h:1030
// variable: 1
void oggpack_writealign(oggpack_buffer* b)
{
	int bits; // 1031
} /* size: 0, variables: 1 */

// <020EA7A7> ../thirdparty/minivorbis/minivorbis.h:1036
// variable: 1
void oggpackB_writealign(oggpack_buffer* b)
{
	int bits; // 1037
} /* size: 0, variables: 1 */

// <020EA4FE> ../thirdparty/minivorbis/minivorbis.h:1042
// variables: 5
// function calls: 4
void oggpack_writecopy_helper(oggpack_buffer* b, void* source, long int bits, void (*w)(oggpack_buffer *, long unsigned int, int), int msb)
{

err: // 1089
	unsigned char* ptr; // 1049
	long int bytes; // 1051
	long int pbytes; // 1052
	{
		void* ret; // 1057
		_OggAutocastPtr::_OggAutocastPtr(
				void* pp);  // 1061
	}
	{
		int i; // 1069
	}
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 1075
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1114
	oggpack_writeclear(oggpack_buffer* b); // 1090
} /* size: 0, variables: 3, goto labels: 1, inline expansions: 3 (0 bytes) */

// <020EA468> ../thirdparty/minivorbis/minivorbis.h:1093
void oggpack_writecopy(oggpack_buffer* b, void* source, long int bits)
{
} /* size: 0 */

// <020EA3D2> ../thirdparty/minivorbis/minivorbis.h:1097
void oggpackB_writecopy(oggpack_buffer* b, void* source, long int bits)
{
} /* size: 0 */

// <020EA3B7> ../thirdparty/minivorbis/minivorbis.h:1101
void oggpack_reset(oggpack_buffer* b)
{
} /* size: 0 */

// <020EA39C> ../thirdparty/minivorbis/minivorbis.h:1108
void oggpackB_reset(oggpack_buffer* b)
{
} /* size: 0 */

// <020EA381> ../thirdparty/minivorbis/minivorbis.h:1112
void oggpack_writeclear(oggpack_buffer* b)
{
} /* size: 0 */

// <020EA2C9> ../thirdparty/minivorbis/minivorbis.h:1117
// function calls: 2
void oggpackB_writeclear(oggpack_buffer* b)
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1114
	oggpack_writeclear(oggpack_buffer* b); // 1118
} /* size: 0, inline expansions: 2 (0 bytes) */

// <020EA294> ../thirdparty/minivorbis/minivorbis.h:1121
void oggpack_readinit(oggpack_buffer* b, unsigned char* buf, int bytes)
{
} /* size: 0 */

// <020EA1BC> ../thirdparty/minivorbis/minivorbis.h:1127
// function calls: 2
void oggpackB_readinit(oggpack_buffer* b, unsigned char* buf, int bytes)
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1122
	oggpack_readinit(oggpack_buffer* b,
			unsigned char* buf,
			int bytes);  // 1128
} /* size: 0, inline expansions: 2 (0 bytes) */

// <020EA145> ../thirdparty/minivorbis/minivorbis.h:1132
// variables: 2
long int oggpack_look(oggpack_buffer* b, int bits)
{
	long unsigned int ret; // 1133
	long unsigned int m; // 1134
} /* size: 224, variables: 2 */

// <020EA0CE> ../thirdparty/minivorbis/minivorbis.h:1164
// variables: 2
long int oggpackB_look(oggpack_buffer* b, int bits)
{
	long unsigned int ret; // 1165
	int m; // 1166
} /* size: 0, variables: 2 */

// <020EA09A> ../thirdparty/minivorbis/minivorbis.h:1194
long int oggpack_look1(oggpack_buffer* b)
{
} /* size: 0 */

// <020EA066> ../thirdparty/minivorbis/minivorbis.h:1199
long int oggpackB_look1(oggpack_buffer* b)
{
} /* size: 0 */

// <020EA02D> ../thirdparty/minivorbis/minivorbis.h:1204
void oggpack_adv(oggpack_buffer* b, int bits)
{

overflow: // 1214
} /* size: 0, goto labels: 1 */

// <020E9FA9> ../thirdparty/minivorbis/minivorbis.h:1220
// function call: 1
void oggpackB_adv(oggpack_buffer* b, int bits)
{

overflow: // 1214
	oggpack_adv(oggpack_buffer* b,
			int bits);  // 1221
} /* size: 0, goto labels: 1, inline expansions: 1 (0 bytes) */

// <020E9F8E> ../thirdparty/minivorbis/minivorbis.h:1224
void oggpack_adv1(oggpack_buffer* b)
{
} /* size: 0 */

// <020E9EFC> ../thirdparty/minivorbis/minivorbis.h:1232
// function calls: 2
void oggpackB_adv1(oggpack_buffer* b)
{
	oggpack_adv1(oggpack_buffer* b); // 1224
	oggpack_adv1(oggpack_buffer* b); // 1233
} /* size: 0, inline expansions: 2 (0 bytes) */

// <020E9E61> ../thirdparty/minivorbis/minivorbis.h:1237
// variables: 2
long int oggpack_read(oggpack_buffer* b, int bits)
{

overflow: // 1272

err: // 1273
	long int ret; // 1238
	long unsigned int m; // 1239
} /* size: 291, variables: 2, goto labels: 2 */

// <020E9DC6> ../thirdparty/minivorbis/minivorbis.h:1281
// variables: 2
long int oggpackB_read(oggpack_buffer* b, int bits)
{

overflow: // 1315

err: // 1316
	long int ret; // 1282
	long int m; // 1283
} /* size: 0, variables: 2, goto labels: 2 */

// <020E9D6C> ../thirdparty/minivorbis/minivorbis.h:1323
// variable: 1
long int oggpack_read1(oggpack_buffer* b)
{

overflow: // 1337
	long int ret; // 1324
} /* size: 0, variables: 1, goto labels: 1 */

// <020E9D12> ../thirdparty/minivorbis/minivorbis.h:1344
// variable: 1
long int oggpackB_read1(oggpack_buffer* b)
{

overflow: // 1358
	long int ret; // 1345
} /* size: 0, variables: 1, goto labels: 1 */

// <020E9CF3> ../thirdparty/minivorbis/minivorbis.h:1365
long int oggpack_bytes(oggpack_buffer* b)
{
} /* size: 0 */

// <020E9CD4> ../thirdparty/minivorbis/minivorbis.h:1369
long int oggpack_bits(oggpack_buffer* b)
{
} /* size: 0 */

// <020E9CB5> ../thirdparty/minivorbis/minivorbis.h:1373
long int oggpackB_bytes(oggpack_buffer* b)
{
} /* size: 0 */

// <020E9C96> ../thirdparty/minivorbis/minivorbis.h:1377
long int oggpackB_bits(oggpack_buffer* b)
{
} /* size: 0 */

// <020E9C77> ../thirdparty/minivorbis/minivorbis.h:1381
unsigned char* oggpack_get_buffer(oggpack_buffer* b)
{
} /* size: 0 */

// <020E9C58> ../thirdparty/minivorbis/minivorbis.h:1385
unsigned char* oggpackB_get_buffer(oggpack_buffer* b)
{
} /* size: 0 */

// <020E9C38> ../thirdparty/minivorbis/minivorbis.h:1983
int ogg_page_version(const ogg_page* og)
{
} /* size: 0 */

// <020E9C18> ../thirdparty/minivorbis/minivorbis.h:1987
int ogg_page_continued(const ogg_page* og)
{
} /* size: 0 */

// <020E9BF8> ../thirdparty/minivorbis/minivorbis.h:1991
int ogg_page_bos(const ogg_page* og)
{
} /* size: 0 */

// <020E9BD8> ../thirdparty/minivorbis/minivorbis.h:1995
int ogg_page_eos(const ogg_page* og)
{
} /* size: 0 */

// <020E9B79> ../thirdparty/minivorbis/minivorbis.h:1999
// variables: 2
ogg_int64_t ogg_page_granulepos(const ogg_page* og)
{
	unsigned char* page; // 2000
	ogg_uint64_t granulepos; // 2001
} /* size: 12, variables: 2 */

// <020E9B59> ../thirdparty/minivorbis/minivorbis.h:2012
int ogg_page_serialno(const ogg_page* og)
{
} /* size: 0 */

// <020E9B39> ../thirdparty/minivorbis/minivorbis.h:2019
long int ogg_page_pageno(const ogg_page* og)
{
} /* size: 0 */

// <020E9ABD> ../thirdparty/minivorbis/minivorbis.h:2045
// variables: 3
int ogg_page_packets(const ogg_page* og)
{
	int i; // 2046
	int n; // 2046
	int count; // 2046
} /* size: 0, variables: 3 */

// <020E991C> ../thirdparty/minivorbis/minivorbis.h:2361
// function calls: 4
int ogg_stream_init(ogg_stream_state* os, int serialno)
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 2363
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 2367
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 2368
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 2369
} /* size: 163, inline expansions: 4 (10 bytes) */

// <020E98FC> ../thirdparty/minivorbis/minivorbis.h:2384
int ogg_stream_check(ogg_stream_state* os)
{
} /* size: 0 */

// <020E984A> ../thirdparty/minivorbis/minivorbis.h:2390
// function call: 1
int ogg_stream_clear(ogg_stream_state* os)
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 2396
} /* size: 91, inline expansions: 1 (13 bytes) */

// <020E97E0> ../thirdparty/minivorbis/minivorbis.h:2401
int ogg_stream_destroy(ogg_stream_state* os)
{
} /* size: 0 */

// <020E9700> ../thirdparty/minivorbis/minivorbis.h:2412
// variables: 2
// function call: 1
int _os_body_expand(ogg_stream_state* os, long int needed)
{
	{
		long int body_storage; // 2414
		void* ret; // 2415
		_OggAutocastPtr::_OggAutocastPtr(
				void* pp);  // 2422
	}
} /* size: 135 */

// <020E95C4> ../thirdparty/minivorbis/minivorbis.h:2433
// variables: 2
// function calls: 2
int _os_lacing_expand(ogg_stream_state* os, long int needed)
{
	{
		long int lacing_storage; // 2435
		void* ret; // 2436
		_OggAutocastPtr::_OggAutocastPtr(
				void* pp);  // 2443
		_OggAutocastPtr::_OggAutocastPtr(
				void* pp);  // 2449
	}
} /* size: 157 */

// <020E955E> ../thirdparty/minivorbis/minivorbis.h:2465
ogg_uint32_t _os_update_crc(ogg_uint32_t crc, unsigned char* buffer, int size)
{
} /* size: 257 */

// <020E94D5> ../thirdparty/minivorbis/minivorbis.h:2483
// variable: 1
void ogg_page_checksum_set(ogg_page* og)
{
	{
		ogg_uint32_t crc_reg; // 2485
	}
} /* size: 121 */

// <020E92F3> ../thirdparty/minivorbis/minivorbis.h:2504
// variables: 3
// function calls: 3
int ogg_stream_iovecin(ogg_stream_state* os, ogg_iovec_t* iov, int count, long int e_o_s, ogg_int64_t granulepos)
{
	long int bytes; // 2507
	long int lacing_vals; // 2507
	int i; // 2508
	ogg_stream_check(ogg_stream_state* os); // 2510
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 2542
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 2527
} /* size: 0, variables: 3, inline expansions: 3 (0 bytes) */

// <020E9262> ../thirdparty/minivorbis/minivorbis.h:2567
// variable: 1
int ogg_stream_packetin(ogg_stream_state* os, ogg_packet* op)
{
	ogg_iovec_t iov; // 2568
} /* size: 0, variables: 1 */

// <020E8FCB> ../thirdparty/minivorbis/minivorbis.h:2577
// variables: 10
// function calls: 4
int ogg_stream_flush_i(ogg_stream_state* os, ogg_page* og, int force, int nfill)
{
	int i; // 2578
	int vals; // 2579
	int maxvals; // 2580
	int bytes; // 2581
	long int acc; // 2582
	ogg_int64_t granule_pos; // 2583
	{
		int packets_done; // 2612
		int packet_just_done; // 2613
	}
	{
		long int serialno; // 2654
	}
	{
		long int pageno; // 2669
	}
	ogg_stream_check(ogg_stream_state* os); // 2585
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 2632
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 2696
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 2697
} /* size: 0, variables: 6, inline expansions: 4 (0 bytes) */

// <020E8F53> ../thirdparty/minivorbis/minivorbis.h:2722
int ogg_stream_flush(ogg_stream_state* os, ogg_page* og)
{
} /* size: 0 */

// <020E8EC6> ../thirdparty/minivorbis/minivorbis.h:2730
int ogg_stream_flush_fill(ogg_stream_state* os, ogg_page* og, int nfill)
{
} /* size: 0 */

// <020E8DFC> ../thirdparty/minivorbis/minivorbis.h:2738
// variable: 1
// function call: 1
int ogg_stream_pageout(ogg_stream_state* os, ogg_page* og)
{
	int force; // 2739
	ogg_stream_check(ogg_stream_state* os); // 2740
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <020E8D3C> ../thirdparty/minivorbis/minivorbis.h:2753
// variable: 1
// function call: 1
int ogg_stream_pageout_fill(ogg_stream_state* os, ogg_page* og, int nfill)
{
	int force; // 2754
	ogg_stream_check(ogg_stream_state* os); // 2755
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <020E8CD6> ../thirdparty/minivorbis/minivorbis.h:2764
// function call: 1
int ogg_stream_eos(ogg_stream_state* os)
{
	ogg_stream_check(ogg_stream_state* os); // 2765
} /* size: 0, inline expansions: 1 (0 bytes) */

// <020E8CB6> ../thirdparty/minivorbis/minivorbis.h:2785
int ogg_sync_init(ogg_sync_state* oy)
{
} /* size: 0 */

// <020E8C96> ../thirdparty/minivorbis/minivorbis.h:2794
int ogg_sync_clear(ogg_sync_state* oy)
{
} /* size: 0 */

// <020E8C17> ../thirdparty/minivorbis/minivorbis.h:2802
// function call: 1
int ogg_sync_destroy(ogg_sync_state* oy)
{
	ogg_sync_clear(ogg_sync_state* oy); // 2804
} /* size: 0, inline expansions: 1 (0 bytes) */

// <020E8BF7> ../thirdparty/minivorbis/minivorbis.h:2810
int ogg_sync_check(ogg_sync_state* oy)
{
} /* size: 0 */

// <020E8A3B> ../thirdparty/minivorbis/minivorbis.h:2815
// variables: 2
// function calls: 4
char* ogg_sync_buffer(ogg_sync_state* oy, long int size)
{
	{
		long int newsize; // 2828
		void* ret; // 2829
		_OggAutocastPtr::_OggAutocastPtr(
				void* pp);  // 2832
		_OggAutocastPtr::_OggAutocastPtr(
				void* pp);  // 2834
	}
	ogg_sync_check(ogg_sync_state* oy); // 2816
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 2822
} /* size: 196, inline expansions: 2 (16 bytes) */

// <020E8A0E> ../thirdparty/minivorbis/minivorbis.h:2847
int ogg_sync_wrote(ogg_sync_state* oy, long int bytes)
{
} /* size: 0 */

// <020E8799> ../thirdparty/minivorbis/minivorbis.h:2864
// variables: 7
// function calls: 5
long int ogg_sync_pageseek(ogg_sync_state* oy, ogg_page* og)
{

sync_fail: // 2936
	unsigned char* page; // 2865
	unsigned char* next; // 2866
	long int bytes; // 2867
	{
		int headerbytes; // 2872
		int i; // 2872
	}
	{
		char chksum; // 2893
		ogg_page log; // 2894
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 2896
		memset(void* __dest,
			int __ch,
			size_t __len);  // 2897
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 2911
	}
	ogg_sync_check(ogg_sync_state* oy); // 2869
	memchr(void* __s,
		int __c,
		size_t __n);  // 2942
} /* size: 494, variables: 3, goto labels: 1, inline expansions: 2 (28 bytes) */

// <020E86DF> ../thirdparty/minivorbis/minivorbis.h:2961
// variable: 1
// function call: 1
int ogg_sync_pageout(ogg_sync_state* oy, ogg_page* og)
{
	{
		long int ret; // 2970
	}
	ogg_sync_check(ogg_sync_state* oy); // 2963
} /* size: 0, inline expansions: 1 (0 bytes) */

// <020E8264> ../thirdparty/minivorbis/minivorbis.h:2994
// variables: 18
// function calls: 10
int ogg_stream_pagein(ogg_stream_state* os, ogg_page* og)
{
	unsigned char* header; // 2995
	unsigned char* body; // 2996
	long int bodysize; // 2997
	int segptr; // 2998
	int version; // 3000
	int continued; // 3001
	int bos; // 3002
	int eos; // 3003
	ogg_int64_t granulepos; // 3004
	int serialno; // 3005
	long int pageno; // 3006
	int segments; // 3007
	{
		long int lr; // 3013
		long int br; // 3014
		memmove(void* __dest,
			const void* __src,
			size_t __len);  // 3027
		memmove(void* __dest,
			const void* __src,
			size_t __len);  // 3029
		memmove(void* __dest,
			const void* __src,
			size_t __len);  // 3020
	}
	{
		int i; // 3046
	}
	{
		int val; // 3068
	}
	{
		int saved; // 3086
		{
			int val; // 3088
		}
	}
	ogg_page_version(const ogg_page* og); // 3000
	ogg_page_continued(const ogg_page* og); // 3001
	ogg_page_bos(const ogg_page* og); // 3002
	ogg_page_serialno(const ogg_page* og); // 3005
	ogg_page_pageno(const ogg_page* og); // 3006
	ogg_stream_check(ogg_stream_state* os); // 3009
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 3081
} /* size: 1000, variables: 12, inline expansions: 7 (67 bytes) */

// <020E823E> ../thirdparty/minivorbis/minivorbis.h:3124
int ogg_sync_reset(ogg_sync_state* oy)
{
} /* size: 0 */

// <020E821E> ../thirdparty/minivorbis/minivorbis.h:3135
int ogg_stream_reset(ogg_stream_state* os)
{
} /* size: 0 */

// <020E81F1> ../thirdparty/minivorbis/minivorbis.h:3156
int ogg_stream_reset_serialno(ogg_stream_state* os, int serialno)
{
} /* size: 0 */

// <020E8109> ../thirdparty/minivorbis/minivorbis.h:3163
// variables: 6
int _packetout(ogg_stream_state* os, ogg_packet* op, int adv)
{
	int ptr; // 3169
	{
		int size; // 3187
		long int bytes; // 3188
		int eos; // 3189
		int bos; // 3190
		{
			int val; // 3193
		}
	}
} /* size: 332, variables: 1 */

// <020E80DD> ../thirdparty/minivorbis/minivorbis.h:3217
int ogg_stream_packetout(ogg_stream_state* os, ogg_packet* op)
{
} /* size: 0 */

// <020E80AB> ../thirdparty/minivorbis/minivorbis.h:3222
int ogg_stream_packetpeek(ogg_stream_state* os, ogg_packet* op)
{
} /* size: 0 */

// <020E8017> ../thirdparty/minivorbis/minivorbis.h:3227
// function call: 1
void ogg_packet_clear(ogg_packet* op)
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 3229
} /* size: 0, inline expansions: 1 (0 bytes) */

// <020E7FF9> ../thirdparty/minivorbis/minivorbis.h:4561
inline int vorbis_ftoi(double f)
{
} /* size: 0 */

// <020E7FD7> ../thirdparty/minivorbis/minivorbis.h:4565
inline void vorbis_fpu_setround(vorbis_fpu_control* fpu)
{
} /* size: 0 */

// <020E7FBB> ../thirdparty/minivorbis/minivorbis.h:4569
inline void vorbis_fpu_restore(vorbis_fpu_control fpu)
{
} /* size: 0 */

// <020CA5B7> ../thirdparty/minivorbis/minivorbis.h:4650
// member variables: 5
// struct size: 32
typedef struct {
	int n; /* 0 4 */
	int log2n; /* 4 4 */
	float * trig; /* 8 8 */
	int * bitrev; /* 16 8 */
	float scale; /* 24 4 */
} mdct_lookup;

// <020CA621> ../thirdparty/minivorbis/minivorbis.h:4698
// member variables: 6
// struct size: 144
typedef struct {
	float ampbuf[17]; /* 0 68 */
	int ampptr; /* 68 4 */
	float nearDC[15]; /* 72 60 */
	float nearDC_acc; /* 132 4 */
	float nearDC_partialacc; /* 136 4 */
	int nearptr; /* 140 4 */
} envelope_filter_state;

// <020CA6C0> ../thirdparty/minivorbis/minivorbis.h:4709
// member variables: 4
// struct size: 24
typedef struct {
	int begin; /* 0 4 */
	int end; /* 4 4 */
	float * window; /* 8 8 */
	float total; /* 16 4 */
} envelope_band;

// <020CA71C> ../thirdparty/minivorbis/minivorbis.h:4716
// member variables: 14
// struct size: 280
typedef struct {
	int ch; /* 0 4 */
	int winlength; /* 4 4 */
	int searchstep; /* 8 4 */
	float minenergy; /* 12 4 */
	mdct_lookup mdct; /* 16 32 */
	float * mdct_win; /* 48 8 */
	envelope_band band[7]; /* 56 168 */
	envelope_filter_state * filter; /* 224 8 */
	int stretch; /* 232 4 */
	int * mark; /* 240 8 */
	long int storage; /* 248 8 */
	long int current; /* 256 8 */
	long int curmark; /* 264 8 */
	long int cursor; /* 272 8 */
} envelope_lookup;

// <020CA836> ../thirdparty/minivorbis/minivorbis.h:4779
// member variables: 10
// struct size: 72
struct static_codebook {
	long int dim; /* 0 8 */
	long int entries; /* 8 8 */
	char * lengthlist; /* 16 8 */
	int maptype; /* 24 4 */
	long int q_min; /* 32 8 */
	long int q_delta; /* 40 8 */
	int q_quant; /* 48 4 */
	int q_sequencep; /* 52 4 */
	long int * quantlist; /* 56 8 */
	int allocedp; /* 64 4 */
};

// <020CA8F7> ../thirdparty/minivorbis/minivorbis.h:4801
// member variables: 14
// struct size: 96
struct codebook {
	long int dim; /* 0 8 */
	long int entries; /* 8 8 */
	long int used_entries; /* 16 8 */
	const static_codebook * c; /* 24 8 */
	float * valuelist; /* 32 8 */
	ogg_uint32_t * codelist; /* 40 8 */
	int * dec_index; /* 48 8 */
	char * dec_codelengths; /* 56 8 */
	ogg_uint32_t * dec_firsttable; /* 64 8 */
	int dec_firsttablen; /* 72 4 */
	int dec_maxlength; /* 76 4 */
	int quantvals; /* 80 4 */
	int minval; /* 84 4 */
	int delta; /* 88 4 */
};

// <020CA9FD> ../thirdparty/minivorbis/minivorbis.h:4883
// member variables: 3
// struct size: 24
typedef struct {
	int n; /* 0 4 */
	float * trigcache; /* 8 8 */
	int * splitcache; /* 16 8 */
} drft_lookup;

// <020CAA47> ../thirdparty/minivorbis/minivorbis.h:4924
// member variables: 4
// struct size: 136
struct vorbis_block_internal {
	float * * pcmdelay; /* 0 8 */
	float ampmax; /* 8 4 */
	int blocktype; /* 12 4 */
	oggpack_buffer * packetblob[15]; /* 16 120 */
};

// <020CAAD4> ../thirdparty/minivorbis/minivorbis.h:4940
// member variables: 4
// struct size: 16
typedef struct {
	int blockflag; /* 0 4 */
	int windowtype; /* 4 4 */
	int transformtype; /* 8 4 */
	int mapping; /* 12 4 */
} vorbis_info_mode;

// <020CAB4B> ../thirdparty/minivorbis/minivorbis.h:5001
// member functions: 7
// member variables: 7
// struct size: 56
typedef struct {
	void (*pack)(vorbis_info_floor* , oggpack_buffer* ); /* 0 8* /
	vorbis_info_floor* (*unpack)(vorbis_info* , oggpack_buffer* ); /* 8 8* /
	vorbis_look_floor* (*look)(vorbis_dsp_state* , vorbis_info_floor* ); /* 16 8* /
	void (*free_info)(vorbis_info_floor* ); /* 24 8* /
	void (*free_look)(vorbis_look_floor* ); /* 32 8* /
	void* (*inverse1)(vorbis_block* , vorbis_look_floor* ); /* 40 8* /
	int (*inverse2)(vorbis_block* , vorbis_look_floor* , void* , float* ); /* 48 8* /
} vorbis_func_floor;

// <020CAC98> ../thirdparty/minivorbis/minivorbis.h:5012
// member variables: 9
// struct size: 112
typedef struct {
	int order; /* 0 4 */
	long int rate; /* 8 8 */
	long int barkmap; /* 16 8 */
	int ampbits; /* 24 4 */
	int ampdB; /* 28 4 */
	int numbooks; /* 32 4 */
	int books[16]; /* 36 64 */
	float lessthan; /* 100 4 */
	float greaterthan; /* 104 4 */
} vorbis_info_floor0;

// <020CAD44> ../thirdparty/minivorbis/minivorbis.h:5032
// member variables: 14
// struct size: 1,120
typedef struct {
	int partitions; /* 0 4 */
	int partitionclass[31]; /* 4 124 */
	int class_dim[16]; /* 128 64 */
	int class_subs[16]; /* 192 64 */
	int class_book[16]; /* 256 64 */
	int class_subbook[16][8]; /* 320 512 */
	int mult; /* 832 4 */
	int postlist[65]; /* 836 260 */
	float maxover; /* 1096 4 */
	float maxunder; /* 1100 4 */
	float maxerr; /* 1104 4 */
	float twofitweight; /* 1108 4 */
	float twofitatten; /* 1112 4 */
	int n; /* 1116 4 */
} vorbis_info_floor1;

// <020CAE82> ../thirdparty/minivorbis/minivorbis.h:5059
// member functions: 8
// member variables: 8
// struct size: 64
typedef struct {
	void (*pack)(vorbis_info_residue* , oggpack_buffer* ); /* 0 8* /
	vorbis_info_residue* (*unpack)(vorbis_info* , oggpack_buffer* ); /* 8 8* /
	vorbis_look_residue* (*look)(vorbis_dsp_state* , vorbis_info_residue* ); /* 16 8* /
	void (*free_info)(vorbis_info_residue* ); /* 24 8* /
	void (*free_look)(vorbis_look_residue* ); /* 32 8* /
	long int** (*_vorbis_class_)(vorbis_block* , vorbis_look_residue* , int** , int* , int); /* 40 8* /
	int (*forward)(oggpack_buffer* , vorbis_block* , vorbis_look_residue* , int** , int* , int, long int** , int); /* 48 8* /
	int (*inverse)(vorbis_block* , vorbis_look_residue* , float** , int* , int); /* 56 8* /
} vorbis_func_residue;

// <020CB02B> ../thirdparty/minivorbis/minivorbis.h:5075
// member variables: 10
// struct size: 2,848
struct vorbis_info_residue0 {
	long int begin; /* 0 8 */
	long int end; /* 8 8 */
	int grouping; /* 16 4 */
	int partitions; /* 20 4 */
	int partvals; /* 24 4 */
	int groupbook; /* 28 4 */
	int secondstages[64]; /* 32 256 */
	int booklist[512]; /* 288 2048 */
	const const int classmetric1[64]; /* 2336 256 */
	const const int classmetric2[64]; /* 2592 256 */
};

// <020CB121> ../thirdparty/minivorbis/minivorbis.h:5093
// member functions: 5
// member variables: 5
// struct size: 40
typedef struct {
	void (*pack)(vorbis_info* , vorbis_info_mapping* , oggpack_buffer* ); /* 0 8* /
	vorbis_info_mapping* (*unpack)(vorbis_info* , oggpack_buffer* ); /* 8 8* /
	void (*free_info)(vorbis_info_mapping* ); /* 16 8* /
	int (*forward)(vorbis_block* ); /* 24 8* /
	int (*inverse)(vorbis_block* , vorbis_info_mapping* ); /* 32 8* /
} vorbis_func_mapping;

// <020CB20D> ../thirdparty/minivorbis/minivorbis.h:5102
// member variables: 7
// struct size: 3,208
struct vorbis_info_mapping0 {
	int submaps; /* 0 4 */
	int chmuxlist[256]; /* 4 1024 */
	int floorsubmap[16]; /* 1028 64 */
	int residuesubmap[16]; /* 1092 64 */
	int coupling_steps; /* 1156 4 */
	int coupling_mag[256]; /* 1160 1024 */
	int coupling_ang[256]; /* 2184 1024 */
};

// <020CB2AF> ../thirdparty/minivorbis/minivorbis.h:5129
// member variables: 22
// struct size: 520
struct vorbis_info_psy {
	int blockflag; /* 0 4 */
	float ath_adjatt; /* 4 4 */
	float ath_maxatt; /* 8 4 */
	float tone_masteratt[3]; /* 12 12 */
	float tone_centerboost; /* 24 4 */
	float tone_decay; /* 28 4 */
	float tone_abs_limit; /* 32 4 */
	float toneatt[17]; /* 36 68 */
	int noisemaskp; /* 104 4 */
	float noisemaxsupp; /* 108 4 */
	float noisewindowlo; /* 112 4 */
	float noisewindowhi; /* 116 4 */
	int noisewindowlomin; /* 120 4 */
	int noisewindowhimin; /* 124 4 */
	int noisewindowfixed; /* 128 4 */
	float noiseoff[3][17]; /* 132 204 */
	float noisecompand[40]; /* 336 160 */
	float max_curve_dB; /* 496 4 */
	int normal_p; /* 500 4 */
	int normal_start; /* 504 4 */
	int normal_partition; /* 508 4 */
	double normal_thresh; /* 512 8 */
};

// <020CB45A> ../thirdparty/minivorbis/minivorbis.h:5159
// member variables: 11
// struct size: 492
typedef struct {
	int eighth_octave_lines; /* 0 4 */
	float preecho_thresh[7]; /* 4 28 */
	float postecho_thresh[7]; /* 32 28 */
	float stretch_penalty; /* 60 4 */
	float preecho_minenergy; /* 64 4 */
	float ampmax_att_per_sec; /* 68 4 */
	int coupling_pkHz[15]; /* 72 60 */
	int coupling_pointlimit[2][15]; /* 132 120 */
	int coupling_prepointamp[15]; /* 252 60 */
	int coupling_postpointamp[15]; /* 312 60 */
	int sliding_lowpass[2][15]; /* 372 120 */
} vorbis_info_psy_global;

// <020CB562> ../thirdparty/minivorbis/minivorbis.h:5179
// member variables: 4
// struct size: 40
typedef struct {
	float ampmax; /* 0 4 */
	int channels; /* 4 4 */
	vorbis_info_psy_global * gi; /* 8 8 */
	int coupling_pointlimit[2][3]; /* 16 24 */
} vorbis_look_psy_global;

// <020CB5D9> ../thirdparty/minivorbis/minivorbis.h:5188
// member variables: 13
// struct size: 96
typedef struct {
	int n; /* 0 4 */
	vorbis_info_psy * vi; /* 8 8 */
	float * * * tonecurves; /* 16 8 */
	float * * noiseoffset; /* 24 8 */
	float * ath; /* 32 8 */
	long int * octave; /* 40 8 */
	long int * bark; /* 48 8 */
	long int firstoc; /* 56 8 */
	long int shiftoc; /* 64 8 */
	int eighth_octave_lines; /* 72 4 */
	int total_octave_lines; /* 76 4 */
	long int rate; /* 80 8 */
	float m_val; /* 88 4 */
} vorbis_look_psy;

// <020CB6CE> ../thirdparty/minivorbis/minivorbis.h:5273
// member variables: 10
// struct size: 80
struct bitrate_manager_state {
	int managed; /* 0 4 */
	long int avg_reservoir; /* 8 8 */
	long int minmax_reservoir; /* 16 8 */
	long int avg_bitsper; /* 24 8 */
	long int min_bitsper; /* 32 8 */
	long int max_bitsper; /* 40 8 */
	long int short_per_long; /* 48 8 */
	double avgfloat; /* 56 8 */
	vorbis_block * vb; /* 64 8 */
	int choice; /* 72 4 */
};

// <020CB78F> ../thirdparty/minivorbis/minivorbis.h:5289
// member variables: 6
// struct size: 48
struct bitrate_manager_info {
	long int avg_rate; /* 0 8 */
	long int min_rate; /* 8 8 */
	long int max_rate; /* 16 8 */
	long int reservoir_bits; /* 24 8 */
	double reservoir_bias; /* 32 8 */
	double slew_damp; /* 40 8 */
};

// <020CB80B> ../thirdparty/minivorbis/minivorbis.h:5308
// member variables: 14
// struct size: 232
struct private_state {
	envelope_lookup * ve; /* 0 8 */
	int window[2]; /* 8 8 */
	vorbis_look_transform * * transform[2]; /* 16 16 */
	drft_lookup fft_look[2]; /* 32 48 */
	int modebits; /* 80 4 */
	vorbis_look_floor * * flr; /* 88 8 */
	vorbis_look_residue * * residue; /* 96 8 */
	vorbis_look_psy * psy; /* 104 8 */
	vorbis_look_psy_global * psy_g_look; /* 112 8 */
	unsigned char * header; /* 120 8 */
	unsigned char * header1; /* 128 8 */
	unsigned char * header2; /* 136 8 */
	bitrate_manager_state bms; /* 144 80 */
	ogg_int64_t sample_count; /* 224 8 */
};

// <020CB954> ../thirdparty/minivorbis/minivorbis.h:5357
// member variables: 4
// struct size: 32
struct highlevel_byblocktype {
	double tone_mask_setting; /* 0 8 */
	double tone_peaklimit_setting; /* 8 8 */
	double noise_bias_setting; /* 16 8 */
	double noise_compand_setting; /* 24 8 */
};

// <020CB9B0> ../thirdparty/minivorbis/minivorbis.h:5364
// member variables: 23
// struct size: 288
struct highlevel_encode_setup {
	int set_in_stone; /* 0 4 */
	const void * setup; /* 8 8 */
	double base_setting; /* 16 8 */
	double impulse_noisetune; /* 24 8 */
	float req; /* 32 4 */
	int managed; /* 36 4 */
	long int bitrate_min; /* 40 8 */
	long int bitrate_av; /* 48 8 */
	double bitrate_av_damp; /* 56 8 */
	long int bitrate_max; /* 64 8 */
	long int bitrate_reservoir; /* 72 8 */
	double bitrate_reservoir_bias; /* 80 8 */
	int impulse_block_p; /* 88 4 */
	int noise_normalize_p; /* 92 4 */
	int coupling_p; /* 96 4 */
	double stereo_point_setting; /* 104 8 */
	double lowpass_kHz; /* 112 8 */
	int lowpass_altered; /* 120 4 */
	double ath_floating_dB; /* 128 8 */
	double ath_absolute_dB; /* 136 8 */
	double amplitude_track_dBpersec; /* 144 8 */
	double trigger_setting; /* 152 8 */
	highlevel_byblocktype block[4]; /* 160 128 */
};

// <020CBB52> ../thirdparty/minivorbis/minivorbis.h:5398
// member variables: 21
// struct size: 5,784
struct codec_setup_info {
	long int blocksizes[2]; /* 0 16 */
	int modes; /* 16 4 */
	int maps; /* 20 4 */
	int floors; /* 24 4 */
	int residues; /* 28 4 */
	int books; /* 32 4 */
	int psys; /* 36 4 */
	vorbis_info_mode * mode_param[64]; /* 40 512 */
	int map_type[64]; /* 552 256 */
	vorbis_info_mapping * map_param[64]; /* 808 512 */
	int floor_type[64]; /* 1320 256 */
	vorbis_info_floor * floor_param[64]; /* 1576 512 */
	int residue_type[64]; /* 2088 256 */
	vorbis_info_residue * residue_param[64]; /* 2344 512 */
	static_codebook * book_param[256]; /* 2856 2048 */
	codebook * fullbooks; /* 4904 8 */
	vorbis_info_psy * psy_param[4]; /* 4912 32 */
	vorbis_info_psy_global psy_g_param; /* 4944 492 */
	bitrate_manager_info bi; /* 5440 48 */
	highlevel_encode_setup hi; /* 5488 288 */
	int halfrate_flag; /* 5776 4 */
};

// <020CBD52> ../thirdparty/minivorbis/minivorbis.h:5442
// member variables: 12
// struct size: 1,328
typedef struct {
	int sorted_index[65]; /* 0 260 */
	int forward_index[65]; /* 260 260 */
	int reverse_index[65]; /* 520 260 */
	int hineighbor[63]; /* 780 252 */
	int loneighbor[63]; /* 1032 252 */
	int posts; /* 1284 4 */
	int n; /* 1288 4 */
	int quant_q; /* 1292 4 */
	vorbis_info_floor1 * vi; /* 1296 8 */
	long int phrasebits; /* 1304 8 */
	long int postbits; /* 1312 8 */
	long int frames; /* 1320 8 */
} vorbis_look_floor1;

// <020E7EF4> ../thirdparty/minivorbis/minivorbis.h:6595
// variable: 1
inline float unitnorm(float x)
{
	union  ix; // 6599
} /* size: 0, variables: 1 */

// <020E7E2D> ../thirdparty/minivorbis/minivorbis.h:6606
// variable: 1
inline float todB(const float* x)
{
	union  ix; // 6610
} /* size: 0, variables: 1 */

// <020E7B7C> ../thirdparty/minivorbis/minivorbis.h:6728
// variables: 10
// function calls: 4
void mdct_init(mdct_lookup* lookup, int n)
{
	int* bitrev; // 6729
	float* T; // 6730
	int i; // 6732
	int n2; // 6733
	int log2n; // 6734
	{
		int mask; // 6755
		int i; // 6755
		int j; // 6755
		int msb; // 6756
		{
			int acc; // 6758
		}
	}
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 6729
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 6730
	log(float __x); // 6734
	rint(float __x); // 6734
} /* size: 773, variables: 5, inline expansions: 4 (60 bytes) */

// <020E7B32> ../thirdparty/minivorbis/minivorbis.h:6770
// variables: 4
inline void mdct_butterfly_8(float* x)
{
	float r0; // 6771
	float r1; // 6772
	float r2; // 6773
	float r3; // 6774
} /* size: 0, variables: 4 */

// <020E7A24> ../thirdparty/minivorbis/minivorbis.h:6794
// variables: 2
// function calls: 2
void mdct_butterfly_16(float* x)
{
	float r0; // 6795
	float r1; // 6796
	mdct_butterfly_8(float* x); // 6824
	mdct_butterfly_8(float* x); // 6825
} /* size: 551, variables: 2, inline expansions: 2 (296 bytes) */

// <020E7999> ../thirdparty/minivorbis/minivorbis.h:6829
// variables: 2
void mdct_butterfly_32(float* x)
{
	float r0; // 6830
	float r1; // 6831
} /* size: 903, variables: 2 */

// <020E78EB> ../thirdparty/minivorbis/minivorbis.h:6893
// variables: 4
void mdct_butterfly_first(float* T, float* x, int points)
{
	float* x1; // 6897
	float* x2; // 6898
	float r0; // 6899
	float r1; // 6900
} /* size: 434, variables: 4 */

// <020E782E> ../thirdparty/minivorbis/minivorbis.h:6940
// variables: 4
void mdct_butterfly_generic(float* T, float* x, int points, int trigint)
{
	float* x1; // 6945
	float* x2; // 6946
	float r0; // 6947
	float r1; // 6948
} /* size: 460, variables: 4 */

// <020E77CC> ../thirdparty/minivorbis/minivorbis.h:6993
// variables: 4
inline void mdct_butterflies(mdct_lookup* init, float* x, int points)
{
	float* T; // 6997
	int stages; // 6998
	int i; // 6999
	int j; // 6999
} /* size: 0, variables: 4 */

// <020E772C> ../thirdparty/minivorbis/minivorbis.h:7015
// function call: 1
void mdct_clear(mdct_lookup* l)
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 7019
} /* size: 97, inline expansions: 1 (31 bytes) */

// <020E7600> ../thirdparty/minivorbis/minivorbis.h:7023
// variables: 11
void mdct__bitreverse(mdct_lookup* init, float* x)
{
	int n; // 7025
	int* bit; // 7026
	float* w0; // 7027
	float* w1; // 7028
	float* T; // 7029
	{
		float* x0; // 7032
		float* x1; // 7033
		float r0; // 7035
		float r1; // 7036
		float r2; // 7037
		float r3; // 7038
	}
} /* size: 392, variables: 5 */

// <020E73E7> ../thirdparty/minivorbis/minivorbis.h:7073
// variables: 9
// function call: 1
void mdct_backward(mdct_lookup* init, float* in, float* out)
{
	int n; // 7074
	int n2; // 7075
	int n4; // 7076
	float* iX; // 7080
	float* oX; // 7081
	float* T; // 7082
	{
		float* oX1; // 7114
		float* oX2; // 7115
		float* iX; // 7116
	}
	mdct_butterflies(mdct_lookup* init,
			float* x,
			int points);  // 7108
} /* size: 1232, variables: 6, inline expansions: 1 (259 bytes) */

// <020E7164> ../thirdparty/minivorbis/minivorbis.h:7169
// variables: 12
// function call: 1
void mdct_forward(mdct_lookup* init, float* in, float* out)
{
	int n; // 7170
	int n2; // 7171
	int n4; // 7172
	int n8; // 7173
	float* w; // 7174
	float* w2; // 7175
	float r0; // 7181
	float r1; // 7182
	float* x0; // 7183
	float* x1; // 7184
	float* T; // 7185
	int i; // 7187
	mdct_butterflies(mdct_lookup* init,
			float* x,
			int points);  // 7224
} /* size: 0, variables: 12, inline expansions: 1 (0 bytes) */

// <020E6FD5> ../thirdparty/minivorbis/minivorbis.h:7276
// variables: 24
void drfti1(int n, float* wa, int* ifac)
{

L107: // 7311

L104: // 7294

L101: // 7287
	int ntryh; // 7277
	float tpi; // 7278
	float arg; // 7279
	float argh; // 7279
	float argld; // 7279
	float fi; // 7279
	int ntry; // 7280
	int i; // 7280
	int j; // 7280
	int k1; // 7281
	int l1; // 7281
	int l2; // 7281
	int ib; // 7281
	int ld; // 7282
	int ii; // 7282
	int ip; // 7282
	int is; // 7282
	int nq; // 7282
	int nr; // 7282
	int ido; // 7283
	int ipm; // 7283
	int nfm1; // 7283
	int nl; // 7284
	int nf; // 7285
} /* size: 0, variables: 24, goto labels: 3 */

// <020E6FA1> ../thirdparty/minivorbis/minivorbis.h:7346
void fdrffti(int n, float* wsave, int* ifac)
{
} /* size: 0 */

// <020E6E33> ../thirdparty/minivorbis/minivorbis.h:7352
// variables: 11
void dradf2(int ido, int l1, float* cc, float* ch, float* wa1)
{

L105: // 7395
	int i; // 7353
	int k; // 7353
	float ti2; // 7354
	float tr2; // 7354
	int t0; // 7355
	int t1; // 7355
	int t2; // 7355
	int t3; // 7355
	int t4; // 7355
	int t5; // 7355
	int t6; // 7355
} /* size: 0, variables: 11, goto labels: 1 */

// <020E6BCA> ../thirdparty/minivorbis/minivorbis.h:7407
// variables: 24
void dradf4(int ido, int l1, float* cc, float* ch, float* wa1, float* wa2, float* wa3)
{

L105: // 7484
	float hsqt2; // 7409
	int i; // 7410
	int k; // 7410
	int t0; // 7410
	int t1; // 7410
	int t2; // 7410
	int t3; // 7410
	int t4; // 7410
	int t5; // 7410
	int t6; // 7410
	float ci2; // 7411
	float ci3; // 7411
	float ci4; // 7411
	float cr2; // 7411
	float cr3; // 7411
	float cr4; // 7411
	float ti1; // 7411
	float ti2; // 7411
	float ti3; // 7411
	float ti4; // 7411
	float tr1; // 7411
	float tr2; // 7411
	float tr3; // 7411
	float tr4; // 7411
} /* size: 0, variables: 24, goto labels: 1 */

// <020E67BF> ../thirdparty/minivorbis/minivorbis.h:7509
// variables: 35
// function calls: 2
void dradfg(int ido, int ip, int l1, int idl1, float* cc, float* c1, float* c2, float* ch, float* ch2, float* wa)
{

L141: // 7781

L135: // 7725

L132: // 7714

L119: // 7628
	float tpi; // 7512
	int idij; // 7513
	int ipph; // 7513
	int i; // 7513
	int j; // 7513
	int k; // 7513
	int l; // 7513
	int ic; // 7513
	int ik; // 7513
	int is; // 7513
	int t0; // 7514
	int t1; // 7514
	int t2; // 7514
	int t3; // 7514
	int t4; // 7514
	int t5; // 7514
	int t6; // 7514
	int t7; // 7514
	int t8; // 7514
	int t9; // 7514
	int t10; // 7514
	float dc2; // 7515
	float ai1; // 7515
	float ai2; // 7515
	float ar1; // 7515
	float ar2; // 7515
	float ds2; // 7515
	int nbd; // 7516
	float dcp; // 7517
	float arg; // 7517
	float dsp; // 7517
	float ar1h; // 7517
	float ar2h; // 7517
	int idp2; // 7518
	int ipp2; // 7518
	cos(float __x); // 7521
	sin(float __x); // 7522
} /* size: 0, variables: 35, goto labels: 4, inline expansions: 2 (0 bytes) */

// <020E6511> ../thirdparty/minivorbis/minivorbis.h:7811
// variables: 13
void drftf1(int n, float* c, float* ch, float* wa, int* ifac)
{

L109: // 7859

L103: // 7847

L104: // 7851

L110: // 7863

L102: // 7840
	int i; // 7812
	int k1; // 7812
	int l1; // 7812
	int l2; // 7812
	int na; // 7813
	int kh; // 7813
	int nf; // 7813
	int ip; // 7814
	int iw; // 7814
	int ido; // 7814
	int idl1; // 7814
	int ix2; // 7814
	int ix3; // 7814
} /* size: 0, variables: 13, goto labels: 5 */

// <020E63A9> ../thirdparty/minivorbis/minivorbis.h:7872
// variables: 11
void dradb2(int ido, int l1, float* cc, float* ch, float* wa1)
{

L105: // 7913
	int i; // 7873
	int k; // 7873
	int t0; // 7873
	int t1; // 7873
	int t2; // 7873
	int t3; // 7873
	int t4; // 7873
	int t5; // 7873
	int t6; // 7873
	float ti2; // 7874
	float tr2; // 7874
} /* size: 0, variables: 11, goto labels: 1 */

// <020E611E> ../thirdparty/minivorbis/minivorbis.h:7924
// variables: 25
void dradb3(int ido, int l1, float* cc, float* ch, float* wa1, float* wa2)
{
	float taur; // 7926
	float taui; // 7927
	int i; // 7928
	int k; // 7928
	int t0; // 7928
	int t1; // 7928
	int t2; // 7928
	int t3; // 7928
	int t4; // 7928
	int t5; // 7928
	int t6; // 7928
	int t7; // 7928
	int t8; // 7928
	int t9; // 7928
	int t10; // 7928
	float ci2; // 7929
	float ci3; // 7929
	float di2; // 7929
	float di3; // 7929
	float cr2; // 7929
	float cr3; // 7929
	float dr2; // 7929
	float dr3; // 7929
	float ti2; // 7929
	float tr2; // 7929
} /* size: 0, variables: 25 */

// <020E5E5D> ../thirdparty/minivorbis/minivorbis.h:7987
// variables: 26
void dradb4(int ido, int l1, float* cc, float* ch, float* wa1, float* wa2, float* wa3)
{

L105: // 8055
	float sqrt2; // 7989
	int i; // 7990
	int k; // 7990
	int t0; // 7990
	int t1; // 7990
	int t2; // 7990
	int t3; // 7990
	int t4; // 7990
	int t5; // 7990
	int t6; // 7990
	int t7; // 7990
	int t8; // 7990
	float ci2; // 7991
	float ci3; // 7991
	float ci4; // 7991
	float cr2; // 7991
	float cr3; // 7991
	float cr4; // 7991
	float ti1; // 7991
	float ti2; // 7991
	float ti3; // 7991
	float ti4; // 7991
	float tr1; // 7991
	float tr2; // 7991
	float tr3; // 7991
	float tr4; // 7991
} /* size: 0, variables: 26, goto labels: 1 */

// <020E59FE> ../thirdparty/minivorbis/minivorbis.h:8078
// variables: 35
// function calls: 2
void dradbg(int ido, int ip, int l1, int idl1, float* cc, float* c1, float* c2, float* ch, float* ch2, float* wa)
{

L139: // 8371

L128: // 8311

L132: // 8335

L112: // 8182

L116: // 8216

L106: // 8126

L103: // 8113
	float tpi; // 8080
	int idij; // 8081
	int ipph; // 8081
	int i; // 8081
	int j; // 8081
	int k; // 8081
	int l; // 8081
	int ik; // 8081
	int is; // 8081
	int t0; // 8081
	int t1; // 8081
	int t2; // 8081
	int t3; // 8081
	int t4; // 8081
	int t5; // 8081
	int t6; // 8081
	int t7; // 8081
	int t8; // 8081
	int t9; // 8081
	int t10; // 8081
	int t11; // 8082
	int t12; // 8082
	float dc2; // 8083
	float ai1; // 8083
	float ai2; // 8083
	float ar1; // 8083
	float ar2; // 8083
	float ds2; // 8083
	int nbd; // 8084
	float dcp; // 8085
	float arg; // 8085
	float dsp; // 8085
	float ar1h; // 8085
	float ar2h; // 8085
	int ipp2; // 8086
	cos(float __x); // 8091
	sin(float __x); // 8092
} /* size: 0, variables: 35, goto labels: 7, inline expansions: 2 (0 bytes) */

// <020E58FD> ../thirdparty/minivorbis/minivorbis.h:8392
// variables: 12
void drftb1(int n, float* c, float* ch, float* wa, int* ifac)
{

L109: // 8439

L106: // 8428

L115: // 8460

L103: // 8418
	int i; // 8393
	int k1; // 8393
	int l1; // 8393
	int l2; // 8393
	int na; // 8394
	int nf; // 8395
	int ip; // 8395
	int iw; // 8395
	int ix2; // 8395
	int ix3; // 8395
	int ido; // 8395
	int idl1; // 8395
} /* size: 0, variables: 12, goto labels: 4 */

// <020E58D5> ../thirdparty/minivorbis/minivorbis.h:8470
void drft_forward(drft_lookup* l, float* data)
{
} /* size: 0 */

// <020E567E> ../thirdparty/minivorbis/minivorbis.h:8475
// function call: 1
void drft_backward(drft_lookup* l, float* data)
{

L109: // 8439

L106: // 8428

L115: // 8460

L103: // 8418
	drftb1(int n,
		float* c,
		float* ch,
		float* wa,
		int* ifac);  // 8477
} /* size: 0, goto labels: 4, inline expansions: 1 (0 bytes) */

// <020E52E2> ../thirdparty/minivorbis/minivorbis.h:8480
// function calls: 6
void drft_init(drft_lookup* l, int n)
{
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 8482
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 8483

L107: // 7311

L104: // 7294

L101: // 7287
	cos(float __x); // 7337
	sin(float __x); // 7338
	drfti1(int n,
		float* wa,
		int* ifac);  // 7349
	fdrffti(int n,
		float* wsave,
		int* ifac);  // 8484
} /* size: 787, goto labels: 3, inline expansions: 6 (1346 bytes) */

// <020E523C> ../thirdparty/minivorbis/minivorbis.h:8487
// function call: 1
void drft_clear(drft_lookup* l)
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 8491
} /* size: 81, inline expansions: 1 (23 bytes) */

// <020E51F7> ../thirdparty/minivorbis/minivorbis.h:8570
// variables: 2
int vorbis_block_init(vorbis_dsp_state* v, vorbis_block* vb)
{
	int i; // 8571
	{
		vorbis_block_internal* vbi; // 8577
	}
} /* size: 0, variables: 1 */

// <020E5093> ../thirdparty/minivorbis/minivorbis.h:8596
// variables: 2
// function calls: 3
_OggAutocastPtr _vorbis_block_alloc(vorbis_block* vb, long int bytes)
{
	{
		alloc_chain* link; // 8604
		_OggAutocastPtr::_OggAutocastPtr(
				void* pp);  // 8604
	}
	{
		void* ret; // 8616
		_OggAutocastPtr::_OggAutocastPtr(
				void* pp);  // 8618
	}
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 8612
} /* size: 149, inline expansions: 1 (0 bytes) */

// <020E4FB3> ../thirdparty/minivorbis/minivorbis.h:8630
// variables: 2
// function call: 1
void _vorbis_block_ripcord(vorbis_block* vb)
{
	alloc_chain* reap; // 8632
	{
		alloc_chain* next; // 8634
	}
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 8642
} /* size: 159, variables: 1, inline expansions: 1 (0 bytes) */

// <020E4E41> ../thirdparty/minivorbis/minivorbis.h:8652
// variables: 2
// function calls: 3
int vorbis_block_clear(vorbis_block* vb)
{
	int i; // 8653
	vorbis_block_internal* vbi; // 8654
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1114
	oggpack_writeclear(oggpack_buffer* b); // 8661
	memset(void* __dest,
		int __ch,
		size_t __len);  // 8666
} /* size: 184, variables: 2, inline expansions: 3 (105 bytes) */

// <020E4646> ../thirdparty/minivorbis/minivorbis.h:8674
// variables: 5
// function calls: 21
int _vds_shared_init(vorbis_dsp_state* v, vorbis_info* vi, int encp)
{

abort_books: // 8787
	int i; // 8675
	codec_setup_info* ci; // 8676
	private_state* b; // 8677
	int hs; // 8678
	{
		int i; // 8759
		_OggAutocastPtr::_OggAutocastPtr(
				void* pp);  // 8761
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 8688
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 8689
	ov_ilog(ogg_uint32_t v); // 8692
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 8694
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 8695
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 8699
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 8700
	ov_ilog(ogg_uint32_t v); // 8711
	ov_ilog(ogg_uint32_t v); // 8712
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 8756
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 8757
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 8775
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 8776
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 8727
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 8740
	vorbis_staticbook_destroy(static_codebook* b); // 18649
	vorbis_staticbook_destroy(static_codebook* b); // 8747
	vorbis_staticbook_destroy(static_codebook* b); // 18649
	vorbis_staticbook_destroy(static_codebook* b); // 8790
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 8722
} /* size: 1263, variables: 4, goto labels: 1, inline expansions: 20 (216 bytes) */

// <020E4494> ../thirdparty/minivorbis/minivorbis.h:8799
// variable: 1
// function calls: 3
int vorbis_analysis_init(vorbis_dsp_state* v, vorbis_info* vi)
{
	private_state* b; // 8800
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 13008
	_vp_global_look(vorbis_info* vi); // 8804
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 8807
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <020E418F> ../thirdparty/minivorbis/minivorbis.h:8819
// variables: 4
// function calls: 4
void vorbis_dsp_clear(vorbis_dsp_state* v)
{
	int i; // 8820
	{
		vorbis_info* vi; // 8822
		codec_setup_info* ci; // 8823
		private_state* b; // 8824
		_vp_global_free(vorbis_look_psy_global* look); // 8865
		memset(void* __dest,
			int __ch,
			size_t __len);  // 19130
		vorbis_bitrate_clear(bitrate_manager_state* bm); // 8866
		memset(void* __dest,
			int __ch,
			size_t __len);  // 8889
	}
} /* size: 859, variables: 1 */

// <020E4097> ../thirdparty/minivorbis/minivorbis.h:8893
// variables: 3
// function call: 1
float** vorbis_analysis_buffer(vorbis_dsp_state* v, int vals)
{
	int i; // 8894
	vorbis_info* vi; // 8895
	private_state* b; // 8896
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 8910
} /* size: 0, variables: 3, inline expansions: 1 (0 bytes) */

// <020E3F1E> ../thirdparty/minivorbis/minivorbis.h:8920
// variables: 5
void _preextrapolate_helper(vorbis_dsp_state* v)
{
	int i; // 8921
	int order; // 8922
	float* lpc; // 8923
	float* work; // 8924
	long int j; // 8925
} /* size: 0, variables: 5 */

// <020E3D39> ../thirdparty/minivorbis/minivorbis.h:8964
// variables: 6
// function call: 1
int vorbis_analysis_wrote(vorbis_dsp_state* v, int vals)
{
	vorbis_info* vi; // 8965
	codec_setup_info* ci; // 8966
	{
		int order; // 8969
		int i; // 8970
		float* lpc; // 8971
		{
			long int n; // 8990
		}
		memset(void* __dest,
			int __ch,
			size_t __len);  // 9004
	}
} /* size: 0, variables: 2 */

// <020E39A7> ../thirdparty/minivorbis/minivorbis.h:9028
// variables: 12
// function calls: 6
int vorbis_analysis_blockout(vorbis_dsp_state* v, vorbis_block* vb)
{
	int i; // 9029
	vorbis_info* vi; // 9030
	codec_setup_info* ci; // 9031
	private_state* b; // 9032
	vorbis_look_psy_global* g; // 9033
	long int beginW; // 9034
	long int centerNext; // 9034
	vorbis_block_internal* vbi; // 9035
	{
		long int bp; // 9051
	}
	{
		long int blockbound; // 9071
	}
	{
		int new_centerNext; // 9153
		int movementW; // 9154
		memmove(void* __dest,
			const void* __src,
			size_t __len);  // 9162
	}
	_vp_ampmax_decay(float amp,
			vorbis_dsp_state* vd);  // 9121
	_OggAutocastPtr::operator float**<float*>(); // 9124
	_OggAutocastPtr::operator float**<float*>(); // 9125
	_OggAutocastPtr::operator float*<float>(); // 9128
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 9129
} /* size: 0, variables: 8, inline expansions: 5 (0 bytes) */

// <020E3937> ../thirdparty/minivorbis/minivorbis.h:9189
// variables: 3
int vorbis_synthesis_restart(vorbis_dsp_state* v)
{
	vorbis_info* vi; // 9190
	codec_setup_info* ci; // 9191
	int hs; // 9192
} /* size: 118, variables: 3 */

// <020E390C> ../thirdparty/minivorbis/minivorbis.h:9212
int vorbis_synthesis_init(vorbis_dsp_state* v, vorbis_info* vi)
{
} /* size: 0 */

// <020E367D> ../thirdparty/minivorbis/minivorbis.h:9225
// variables: 27
// function calls: 2
int vorbis_synthesis_blockin(vorbis_dsp_state* v, vorbis_block* vb)
{
	vorbis_info* vi; // 9226
	codec_setup_info* ci; // 9227
	private_state* b; // 9228
	int hs; // 9229
	int i; // 9230
	int j; // 9230
	{
		int n; // 9249
		int n0; // 9250
		int n1; // 9251
		int thisCenter; // 9253
		int prevCenter; // 9254
		{
			const float* w; // 9278
			float* pcm; // 9279
			float* p; // 9280
			_vorbis_window_get(int n); // 9278
		}
		{
			const float* w; // 9285
			float* pcm; // 9286
			float* p; // 9287
			_vorbis_window_get(int n); // 9285
		}
		{
			const float* w; // 9294
			float* pcm; // 9295
			float* p; // 9296
		}
		{
			const float* w; // 9303
			float* pcm; // 9304
			float* p; // 9305
		}
		{
			float* pcm; // 9313
			float* p; // 9314
		}
	}
	{
		long int extra; // 9367
	}
	{
		long int extra; // 9405
	}
} /* size: 1778, variables: 6 */

// <020E3638> ../thirdparty/minivorbis/minivorbis.h:9441
// variables: 2
int vorbis_synthesis_pcmout(vorbis_dsp_state* v, float*** pcm)
{
	vorbis_info* vi; // 9442
	{
		int i; // 9446
	}
} /* size: 0, variables: 1 */

// <020E360E> ../thirdparty/minivorbis/minivorbis.h:9456
int vorbis_synthesis_read(vorbis_dsp_state* v, int n)
{
} /* size: 0 */

// <020E346E> ../thirdparty/minivorbis/minivorbis.h:9467
// variables: 15
int vorbis_synthesis_lapout(vorbis_dsp_state* v, float*** pcm)
{
	vorbis_info* vi; // 9468
	codec_setup_info* ci; // 9469
	int hs; // 9470
	int n; // 9472
	int n0; // 9473
	int n1; // 9474
	int i; // 9475
	int j; // 9475
	{
		float* p; // 9493
		{
			float temp; // 9495
		}
	}
	{
		float* s; // 9510
		float* d; // 9511
	}
	{
		float* s; // 9521
		float* d; // 9522
	}
	{
		int i; // 9532
	}
} /* size: 0, variables: 8 */

// <020E3415> ../thirdparty/minivorbis/minivorbis.h:9542
// variables: 4
const float* vorbis_window(vorbis_dsp_state* v, int W)
{
	vorbis_info* vi; // 9543
	codec_setup_info* ci; // 9544
	int hs; // 9545
	private_state* b; // 9546
} /* size: 0, variables: 4 */

// <020E31C2> ../thirdparty/minivorbis/minivorbis.h:9581
// variables: 6
// function calls: 4
void _ve_envelope_init(envelope_lookup* e, vorbis_info* vi)
{
	codec_setup_info* ci; // 9582
	vorbis_info_psy_global* gi; // 9583
	int ch; // 9584
	int i; // 9585
	int j; // 9585
	int n; // 9586
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 9593
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 9612
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 9620
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 9621
} /* size: 0, variables: 6, inline expansions: 4 (0 bytes) */

// <020E30DD> ../thirdparty/minivorbis/minivorbis.h:9625
// variable: 1
// function call: 1
void _ve_envelope_clear(envelope_lookup* e)
{
	int i; // 9626
	memset(void* __dest,
		int __ch,
		size_t __len);  // 9633
} /* size: 125, variables: 1, inline expansions: 1 (13 bytes) */

// <020E2DF0> ../thirdparty/minivorbis/minivorbis.h:9639
// variables: 21
// function calls: 2
int _ve_amp(envelope_lookup* ve, vorbis_info_psy_global* gi, float* data, envelope_band* bands, envelope_filter_state* filters)
{
	long int n; // 9644
	int ret; // 9645
	long int i; // 9646
	long int j; // 9646
	float decay; // 9647
	float minV; // 9653
	float* vec; // 9654
	int stretch; // 9658
	float penalty; // 9659
	{
		float temp; // 9676
		int ptr; // 9677
		todB(const float* x); // 9694
	}
	{
		float val; // 9701
		todB(const float* x); // 9702
	}
	{
		float acc; // 9713
		float valmax; // 9714
		float valmin; // 9714
		{
			int p; // 9724
			int _vorbis_this_; // 9724
			float postmax; // 9725
			float postmin; // 9725
			float premax; // 9725
			float premin; // 9725
		}
	}
} /* size: 0, variables: 9 */

// <020E2C28> ../thirdparty/minivorbis/minivorbis.h:9765
// variables: 12
// function call: 1
long int _ve_envelope_search(vorbis_dsp_state* v)
{
	vorbis_info* vi; // 9766
	codec_setup_info* ci; // 9767
	vorbis_info_psy_global* gi; // 9768
	envelope_lookup* ve; // 9769
	long int i; // 9770
	long int j; // 9770
	int first; // 9772
	int last; // 9773
	{
		int ret; // 9783
		{
			float* pcm; // 9790
		}
	}
	{
		long int centerW; // 9811
		long int testW; // 9812
	}
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 9779
} /* size: 0, variables: 8, inline expansions: 1 (0 bytes) */

// <020E2B24> ../thirdparty/minivorbis/minivorbis.h:9879
// variables: 9
int _ve_envelope_mark(vorbis_dsp_state* v)
{
	envelope_lookup* ve; // 9880
	vorbis_info* vi; // 9881
	codec_setup_info* ci; // 9882
	long int centerW; // 9883
	long int beginW; // 9884
	long int endW; // 9885
	{
		long int first; // 9896
		long int last; // 9897
		long int i; // 9898
	}
} /* size: 0, variables: 6 */

// <020E2A72> ../thirdparty/minivorbis/minivorbis.h:9905
// variables: 2
// function call: 1
void _ve_envelope_shift(envelope_lookup* e, long int shift)
{
	int smallsize; // 9906
	int smallshift; // 9908
	memmove(void* __dest,
		const void* __src,
		size_t __len);  // 9910
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <020E2A53> ../thirdparty/minivorbis/minivorbis.h:12022
const float* _vorbis_window_get(int n)
{
} /* size: 0 */

// <020E289D> ../thirdparty/minivorbis/minivorbis.h:12026
// variables: 11
void _vorbis_apply_window(float* d, int* winno, long int* blocksizes, int lW, int W, int nW)
{
	{
		const float* windowLW; // 12032
		const float* windowNW; // 12033
		long int n; // 12035
		long int ln; // 12036
		long int rn; // 12037
		long int leftbegin; // 12039
		long int leftend; // 12040
		long int rightbegin; // 12042
		long int rightend; // 12043
		int i; // 12045
		int p; // 12045
	}
} /* size: 0 */

// <020E2675> ../thirdparty/minivorbis/minivorbis.h:12307
// variables: 7
// function calls: 4
void vorbis_lsp_to_curve(float* curve, int* map, int n, int ln, float* lsp, int m, float amp, float ampoffset)
{
	int i; // 12309
	float wdel; // 12310
	{
		int j; // 12315
		int k; // 12315
		float p; // 12316
		float q; // 12317
		float w; // 12318
		cos(float __x); // 12318
		sqrt(float __x); // 12335
		exp(float __x); // 12335
	}
	cos(float __x); // 12311
} /* size: 599, variables: 2, inline expansions: 1 (11 bytes) */

// <020E2604> ../thirdparty/minivorbis/minivorbis.h:12345
// variables: 2
void cheby(float* g, int ord)
{
	int i; // 12346
	int j; // 12346
} /* size: 0, variables: 2 */

// <020E25C4> ../thirdparty/minivorbis/minivorbis.h:12357
int comp(const void* a, const void* b)
{
} /* size: 0 */

// <020E248F> ../thirdparty/minivorbis/minivorbis.h:12369
// variables: 9
int Laguerre_With_Deflation(float* a, int ord, float* r)
{
	int i; // 12370
	int m; // 12370
	double* defl; // 12371
	{
		double _vorbis_new_; // 12375
		double delta; // 12375
		{
			double p; // 12379
			double pp; // 12379
			double ppp; // 12379
			double denom; // 12379
		}
	}
} /* size: 0, variables: 3 */

// <020EB6E6> ../thirdparty/minivorbis/minivorbis.h:12423
// variables: 9
int Newton_Raphson(float* a, int ord, float* r)
{
	int i; // 12424
	int k; // 12424
	int count; // 12424
	double error; // 12425
	double* root; // 12426
	{
		double pp; // 12434
		double delta; // 12434
		double rooti; // 12435
		double p; // 12436
	}
} /* size: 0, variables: 5 */

// <020E2133> ../thirdparty/minivorbis/minivorbis.h:12462
// variables: 8
// function calls: 2
int vorbis_lpc_to_lsp(float* lpc, float* lsp, int m)
{
	int order2; // 12463
	int g1_order; // 12464
	int g2_order; // 12464
	float* g1; // 12465
	float* g2; // 12466
	float* g1r; // 12467
	float* g2r; // 12468
	int i; // 12469
	acos(float __x); // 12508
	acos(float __x); // 12511
} /* size: 0, variables: 8, inline expansions: 2 (0 bytes) */

// <020E1F45> ../thirdparty/minivorbis/minivorbis.h:12573
// variables: 11
// function call: 1
float vorbis_lpc_from_data(float* data, float* lpci, int n, int m)
{

done: // 12625
	double* aut; // 12574
	double* lpc; // 12575
	double error; // 12576
	double epsilon; // 12577
	int i; // 12578
	int j; // 12578
	{
		double d; // 12583
	}
	{
		double r; // 12595
		{
			double tmp; // 12614
		}
		memset(void* __dest,
			int __ch,
			size_t __len);  // 12598
	}
	{
		double g; // 12629
		double damp; // 12630
	}
} /* size: 0, variables: 6, goto labels: 1 */

// <020E1DF2> ../thirdparty/minivorbis/minivorbis.h:12645
// variables: 6
void vorbis_lpc_predict(float* coeff, float* prime, int m, float* data, long int n)
{
	long int i; // 12652
	long int j; // 12652
	long int o; // 12652
	long int p; // 12652
	float y; // 12653
	float* work; // 12654
} /* size: 0, variables: 6 */

// <020E1C5E> ../thirdparty/minivorbis/minivorbis.h:12701
// variables: 3
// function calls: 4
int vorbis_analysis(vorbis_block* vb, ogg_packet* op)
{
	int ret; // 12702
	int i; // 12702
	vorbis_block_internal* vbi; // 12703
	oggpack_reset(oggpack_buffer* b); // 12712
	vorbis_bitrate_managed(vorbis_block* vb); // 12722
	oggpack_get_buffer(oggpack_buffer* b); // 12727
	oggpack_bytes(oggpack_buffer* b); // 12728
} /* size: 0, variables: 3, inline expansions: 4 (0 bytes) */

// <020E19C3> ../thirdparty/minivorbis/minivorbis.h:12816
// variables: 8
// function calls: 4
int vorbis_synthesis(vorbis_block* vb, ogg_packet* op)
{
	vorbis_dsp_state* vd; // 12817
	private_state* b; // 12818
	vorbis_info* vi; // 12819
	codec_setup_info* ci; // 12820
	oggpack_buffer* opb; // 12821
	int type; // 12822
	int mode; // 12822
	int i; // 12822
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1122
	oggpack_readinit(oggpack_buffer* b,
			unsigned char* buf,
			int bytes);  // 12830
	_OggAutocastPtr::operator float**<float*>(); // 12871
	_OggAutocastPtr::operator float*<float>(); // 12873
} /* size: 501, variables: 8, inline expansions: 4 (47 bytes) */

// <020E17F5> ../thirdparty/minivorbis/minivorbis.h:12884
// variables: 6
// function calls: 2
int vorbis_synthesis_trackonly(vorbis_block* vb, ogg_packet* op)
{
	vorbis_dsp_state* vd; // 12885
	private_state* b; // 12886
	vorbis_info* vi; // 12887
	codec_setup_info* ci; // 12888
	oggpack_buffer* opb; // 12889
	int mode; // 12890
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1122
	oggpack_readinit(oggpack_buffer* b,
			unsigned char* buf,
			int bytes);  // 12894
} /* size: 311, variables: 6, inline expansions: 2 (46 bytes) */

// <020E166F> ../thirdparty/minivorbis/minivorbis.h:12933
// variables: 3
// function calls: 3
long int vorbis_packet_blocksize(vorbis_info* vi, ogg_packet* op)
{
	codec_setup_info* ci; // 12934
	oggpack_buffer opb; // 12935
	int mode; // 12936
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1122
	oggpack_readinit(oggpack_buffer* b,
			unsigned char* buf,
			int bytes);  // 12943
	ov_ilog(ogg_uint32_t v); // 12952
} /* size: 220, variables: 3, inline expansions: 3 (63 bytes) */

// <020E1636> ../thirdparty/minivorbis/minivorbis.h:12957
// variable: 1
int vorbis_synthesis_halfrate(vorbis_info* vi, int flag)
{
	codec_setup_info* ci; // 12959
} /* size: 0, variables: 1 */

// <020E160A> ../thirdparty/minivorbis/minivorbis.h:12967
// variable: 1
int vorbis_synthesis_halfrate_p(vorbis_info* vi)
{
	codec_setup_info* ci; // 12968
} /* size: 0, variables: 1 */

// <020E15C5> ../thirdparty/minivorbis/minivorbis.h:13005
// variables: 3
vorbis_look_psy_global* _vp_global_look(vorbis_info* vi)
{
	codec_setup_info* ci; // 13006
	vorbis_info_psy_global* gi; // 13007
	vorbis_look_psy_global* look; // 13008
} /* size: 0, variables: 3 */

// <020E15A8> ../thirdparty/minivorbis/minivorbis.h:13017
void _vp_global_free(vorbis_look_psy_global* look)
{
} /* size: 0 */

// <020E158D> ../thirdparty/minivorbis/minivorbis.h:13024
void _vi_gpsy_free(vorbis_info_psy_global* i)
{
} /* size: 0 */

// <020E1572> ../thirdparty/minivorbis/minivorbis.h:13031
void _vi_psy_free(vorbis_info_psy* i)
{
} /* size: 0 */

// <020E1541> ../thirdparty/minivorbis/minivorbis.h:13038
// variable: 1
void min_curve(float* c, float* c2)
{
	int i; // 13040
} /* size: 0, variables: 1 */

// <020E1510> ../thirdparty/minivorbis/minivorbis.h:13043
// variable: 1
void max_curve(float* c, float* c2)
{
	int i; // 13045
} /* size: 0, variables: 1 */

// <020E14DE> ../thirdparty/minivorbis/minivorbis.h:13049
// variable: 1
void attenuate_curve(float* c, float att)
{
	int i; // 13050
} /* size: 0, variables: 1 */

// <020E0BBE> ../thirdparty/minivorbis/minivorbis.h:13055
// variables: 22
// function calls: 17
float*** setup_tone_curves(float* curveatt_dB, float binHz, int n, float center_boost, float center_decay_rate)
{
	int i; // 13057
	int j; // 13057
	int k; // 13057
	int m; // 13057
	float ath; // 13058
	float workc; // 13059
	float athc; // 13060
	float* brute_buffer; // 13061
	float*** ret; // 13063
	{
		int ath_offset; // 13074
		{
			float min; // 13076
		}
		{
			float adj; // 13096
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 13089
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 13090
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 13091
		attenuate_curve(float* c,
				float att);  // 13106
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 13107
		attenuate_curve(float* c,
				float att);  // 13108
		max_curve(float* c,
				float* c2);  // 13109
		min_curve(float* c,
				float* c2);  // 13123
		min_curve(float* c,
				float* c2);  // 13124
	}
	{
		int hi_curve; // 13129
		int lo_curve; // 13129
		int bin; // 13129
		{
			int l; // 13158
			{
				int lo_bin; // 13161
				int hi_bin; // 13162
			}
		}
		{
			int l; // 13183
			{
				int lo_bin; // 13186
				int hi_bin; // 13187
			}
		}
		{
			int bin; // 13208
		}
		_OggAutocastPtr::_OggAutocastPtr(
				void* pp);  // 13150
		_OggAutocastPtr::_OggAutocastPtr(
				void* pp);  // 13130
		log(float __x); // 13143
		ceil(float __x); // 13143
		log(float __x); // 13144
		floor(float __x); // 13144
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 13065
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 13063
} /* size: 3542, variables: 9, inline expansions: 2 (56 bytes) */

// <020E05AA> ../thirdparty/minivorbis/minivorbis.h:13236
// variables: 12
// function calls: 14
void _vp_psy_init(vorbis_look_psy* p, vorbis_info_psy* vi, vorbis_info_psy_global* gi, int n, long int rate)
{
	long int i; // 13238
	long int j; // 13238
	long int lo; // 13238
	long int hi; // 13238
	long int maxoc; // 13239
	{
		int endpos; // 13265
		float base; // 13266
		{
			float delta; // 13268
		}
	}
	{
		float bark; // 13281
		atan(float __x); // 13281
		atan(float __x); // 13281
		atan(float __x); // 13284
		atan(float __x); // 13284
		atan(float __x); // 13287
		atan(float __x); // 13287
	}
	{
		float halfoc; // 13305
		int inthalfoc; // 13306
		float del; // 13307
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 13240
	log(float __x); // 13243
	rint(float __x); // 13243
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 13248
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 13250
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 13251
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 13300
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 13302
} /* size: 2402, variables: 5, inline expansions: 8 (74 bytes) */

// <020E0496> ../thirdparty/minivorbis/minivorbis.h:13330
// variables: 2
// function call: 1
void _vp_psy_clear(vorbis_look_psy* p)
{
	int i; // 13331
	int j; // 13331
	memset(void* __dest,
		int __ch,
		size_t __len);  // 13351
} /* size: 218, variables: 2, inline expansions: 1 (13 bytes) */

// <020E03D4> ../thirdparty/minivorbis/minivorbis.h:13356
// variables: 7
void seed_curve(float* seed, const float ** curves, float amp, int oc, int n, int linesper, float dBoffset)
{
	int i; // 13361
	int post1; // 13361
	int seedptr; // 13362
	const float* posts; // 13363
	const float* curve; // 13363
	int choice; // 13365
	{
		float lin; // 13375
	}
} /* size: 0, variables: 6 */

// <020E0325> ../thirdparty/minivorbis/minivorbis.h:13383
// variables: 6
void seed_loop(vorbis_look_psy* p, const float *** curves, const float* f, const float* flr, float* seed, float specmax)
{
	vorbis_info_psy* vi; // 13389
	long int n; // 13390
	long int i; // 13390
	float dBoffset; // 13391
	{
		float max; // 13396
		long int oc; // 13397
	}
} /* size: 0, variables: 4 */

// <020E0232> ../thirdparty/minivorbis/minivorbis.h:13420
// variables: 6
void seed_chase(float* seeds, int linesper, long int n)
{
	long int* posstack; // 13421
	float* ampstack; // 13422
	long int stack; // 13423
	long int pos; // 13424
	long int i; // 13425
	{
		long int endpos; // 13459
	}
} /* size: 0, variables: 5 */

// <020E019D> ../thirdparty/minivorbis/minivorbis.h:13478
// variables: 7
void max_seeds(vorbis_look_psy* p, float* seed, float* flr)
{
	long int n; // 13481
	int linesper; // 13482
	long int linpos; // 13483
	long int pos; // 13484
	{
		float minV; // 13491
		long int end; // 13492
	}
	{
		float minV; // 13506
	}
} /* size: 0, variables: 4 */

// <020DFF68> ../thirdparty/minivorbis/minivorbis.h:13513
// variables: 20
void bark_noise_hybridmp(int n, const long int* b, const float* f, float* noise, const float offset, const int fixed)
{
	float* N; // 13519
	float* X; // 13520
	float* XX; // 13521
	float* Y; // 13522
	float* XY; // 13523
	float tN; // 13525
	float tX; // 13525
	float tXX; // 13525
	float tY; // 13525
	float tXY; // 13525
	int i; // 13526
	int lo; // 13528
	int hi; // 13528
	float R; // 13529
	float A; // 13530
	float B; // 13531
	float D; // 13532
	float w; // 13533
	float x; // 13533
	float y; // 13533
} /* size: 0, variables: 20 */

// <020DFDD0> ../thirdparty/minivorbis/minivorbis.h:13672
// variables: 4
void _vp_noisemask(vorbis_look_psy* p, float* logmdct, float* logmask)
{
	int i; // 13676
	int n; // 13676
	float* work; // 13677
	{
		int dB; // 13712
	}
} /* size: 0, variables: 3 */

// <020DFA82> ../thirdparty/minivorbis/minivorbis.h:13720
// variables: 10
// function calls: 3
void _vp_tonemask(vorbis_look_psy* p, float* logfft, float* logmask, float global_specmax, float local_specmax)
{
	int i; // 13726
	int n; // 13726
	float* seed; // 13728
	float att; // 13729
	{
		float max; // 13396
		long int oc; // 13397
		{
			float lin; // 13375
		}
		seed_curve(float* seed,
				const float ** curves,
				float amp,
				int oc,
				int n,
				int linesper,
				float dBoffset);  // 13409
	}
	seed_loop(vorbis_look_psy* p,
			const float *** curves,
			const float* f,
			const float* flr,
			float* seed,
			float specmax);  // 13740
	{
		float minV; // 13491
		long int end; // 13492
	}
	{
		float minV; // 13506
	}
	max_seeds(vorbis_look_psy* p,
			float* seed,
			float* flr);  // 13741
} /* size: 0, variables: 4, inline expansions: 2 (0 bytes) */

// <020DF94C> ../thirdparty/minivorbis/minivorbis.h:13745
// variables: 7
void _vp_offset_and_mix(vorbis_look_psy* p, float* noise, float* tone, int offset_select, float* logmask, float* mdct, float* logmdct)
{
	int i; // 13752
	int n; // 13752
	float de; // 13753
	float coeffi; // 13753
	float cx; // 13753
	float toneatt; // 13754
	{
		float val; // 13759
	}
} /* size: 0, variables: 6 */

// <020DF8E3> ../thirdparty/minivorbis/minivorbis.h:13803
// variables: 5
float _vp_ampmax_decay(float amp, vorbis_dsp_state* vd)
{
	vorbis_info* vi; // 13804
	codec_setup_info* ci; // 13805
	vorbis_info_psy_global* gi; // 13806
	int n; // 13808
	float secs; // 13809
} /* size: 0, variables: 5 */

// <020DF87B> ../thirdparty/minivorbis/minivorbis.h:13884
// variables: 2
int apsort(const void* a, const void* b)
{
	float f1; // 13885
	float f2; // 13886
} /* size: 0, variables: 2 */

// <020DF7E2> ../thirdparty/minivorbis/minivorbis.h:13890
// variables: 3
void flag_lossless(int limit, float prepoint, float postpoint, float* mdct, float* floor, int* flag, int i, int jn)
{
	int j; // 13892
	{
		float point; // 13894
		float r; // 13895
	}
} /* size: 0, variables: 1 */

// <020EB3F6> ../thirdparty/minivorbis/minivorbis.h:13907
// variables: 8
// function calls: 9
float noise_normalize(int limit, float* r, float* q, float* f, int* flags, int i, int n, int* out, float acc, vorbis_look_psy* p)
{
	vorbis_info_psy* vi; // 13909
	float** sort; // 13910
	int j; // 13911
	int count; // 13911
	int start; // 13912
	{
		float ve; // 13924
		rint(float __x); // 13928
		rint(float __x); // 13926
		sqrt(float __x); // 13928
		sqrt(float __x); // 13926
	}
	{
		float ve; // 13937
		rint(float __x); // 13951
		rint(float __x); // 13949
		sqrt(float __x); // 13951
		sqrt(float __x); // 13949
	}
	{
		int k; // 13963
		unitnorm(float x); // 13965
	}
} /* size: 0, variables: 5 */

// <020DF6EA> ../thirdparty/minivorbis/minivorbis.h:13907
// variables: 8
float noise_normalize(vorbis_look_psy* p, int limit, float* r, float* q, float* f, int* flags, float acc, int i, int n, int* out)
{
	vorbis_info_psy* vi; // 13909
	float** sort; // 13910
	int j; // 13911
	int count; // 13911
	int start; // 13912
	{
		float ve; // 13924
	}
	{
		float ve; // 13937
	}
	{
		int k; // 13963
	}
} /* size: 0, variables: 5 */

// <020DF100> ../thirdparty/minivorbis/minivorbis.h:13980
// variables: 34
// function calls: 9
void _vp_couple_quantize_normalize(int blobno, vorbis_info_psy_global* g, vorbis_look_psy* p, vorbis_info_mapping0* vi, float** mdct, int** iwork, int* nonzero, int sliding_lowpass, int ch)
{
	int i; // 13990
	int n; // 13991
	int partition; // 13992
	int limit; // 13993
	float prepoint; // 13994
	float postpoint; // 13995
	float** raw; // 14004
	float** quant; // 14007
	float** floor; // 14010
	int** flag; // 14013
	int* nz; // 14016
	float* acc; // 14019
	{
		int k; // 14040
		int j; // 14040
		int jn; // 14040
		int step; // 14041
		int track; // 14041
		{
			int* iout; // 14048
			{
				float point; // 13894
				float r; // 13895
				fabs(float __x); // 13895
			}
			flag_lossless(int limit,
					float prepoint,
					float postpoint,
					float* mdct,
					float* floor,
					int* flag,
					int i,
					int jn);  // 14054
		}
		{
			int Mi; // 14079
			int Ai; // 14080
			int* iM; // 14081
			int* iA; // 14082
			float* reM; // 14083
			float* reA; // 14084
			float* qeM; // 14085
			float* qeA; // 14086
			float* floorM; // 14087
			float* floorA; // 14088
			int* fM; // 14089
			int* fA; // 14090
			{
				int A; // 14107
				int B; // 14108
			}
			fabs(float __x); // 14101
			fabs(float __x); // 14101
			fabs(float __x); // 14130
			fabs(float __x); // 14149
			fabs(float __x); // 14149
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 14043
		memset(void* __dest,
			int __ch,
			size_t __len);  // 14046
	}
} /* size: 0, variables: 12 */

// <020DF0CE> ../thirdparty/minivorbis/minivorbis.h:14215
void _v_writestring(oggpack_buffer* o, const char* s, int bytes)
{
} /* size: 0 */

// <020DF09A> ../thirdparty/minivorbis/minivorbis.h:14222
void _v_readstring(oggpack_buffer* o, char* buf, int bytes)
{
} /* size: 0 */

// <020DF07C> ../thirdparty/minivorbis/minivorbis.h:14228
int _v_toupper(int c)
{
} /* size: 0 */

// <020DF060> ../thirdparty/minivorbis/minivorbis.h:14232
void vorbis_comment_init(vorbis_comment* vc)
{
} /* size: 0 */

// <020DEEDC> ../thirdparty/minivorbis/minivorbis.h:14236
// function calls: 4
void vorbis_comment_add(vorbis_comment* vc, const char* comment)
{
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 14237
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 14239
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 14242
	strcpy(char* __dest,
		const char* __src);  // 14243
} /* size: 0, inline expansions: 4 (0 bytes) */

// <020DECB3> ../thirdparty/minivorbis/minivorbis.h:14248
// variable: 1
// function calls: 4
void vorbis_comment_add_tag(vorbis_comment* vc, const char* tag, const char* contents)
{
	char* comment; // 14250
	strcpy(char* __dest,
		const char* __src);  // 14251
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 14250
	strcat(char* __dest,
		const char* __src);  // 14252
	strcat(char* __dest,
		const char* __src);  // 14253
} /* size: 0, variables: 1, inline expansions: 4 (0 bytes) */

// <020DEC72> ../thirdparty/minivorbis/minivorbis.h:14260
// variable: 1
int tagcompare(const char* s1, const char* s2, int n)
{
	int c; // 14261
} /* size: 0, variables: 1 */

// <020DE9A0> ../thirdparty/minivorbis/minivorbis.h:14270
// variables: 4
// function calls: 6
char* vorbis_comment_query(vorbis_comment* vc, const char* tag, int count)
{
	long int i; // 14271
	int found; // 14272
	int taglen; // 14273
	char* fulltag; // 14274
	strcpy(char* __dest,
		const char* __src);  // 14276
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 14274
	strcat(char* __dest,
		const char* __src);  // 14277
	_v_toupper(int c); // 14263
	_v_toupper(int c); // 14263
	tagcompare(const char* s1,
			const char* s2,
			int n);  // 14280
} /* size: 0, variables: 4, inline expansions: 6 (0 bytes) */

// <020DE6FD> ../thirdparty/minivorbis/minivorbis.h:14294
// variables: 4
// function calls: 6
int vorbis_comment_query_count(vorbis_comment* vc, const char* tag)
{
	int i; // 14295
	int count; // 14295
	int taglen; // 14296
	char* fulltag; // 14297
	strcpy(char* __dest,
		const char* __src);  // 14298
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 14297
	strcat(char* __dest,
		const char* __src);  // 14299
	_v_toupper(int c); // 14263
	_v_toupper(int c); // 14263
	tagcompare(const char* s1,
			const char* s2,
			int n);  // 14302
} /* size: 0, variables: 4, inline expansions: 6 (0 bytes) */

// <020DE629> ../thirdparty/minivorbis/minivorbis.h:14310
// variable: 1
// function call: 1
void vorbis_comment_clear(vorbis_comment* vc)
{
	{
		long int i; // 14312
		memset(void* __dest,
			int __ch,
			size_t __len);  // 14320
	}
} /* size: 161 */

// <020DE5F1> ../thirdparty/minivorbis/minivorbis.h:14326
// variable: 1
int vorbis_info_blocksize(vorbis_info* vi, int zo)
{
	codec_setup_info* ci; // 14327
} /* size: 0, variables: 1 */

// <020DE5D5> ../thirdparty/minivorbis/minivorbis.h:14332
void vorbis_info_init(vorbis_info* vi)
{
} /* size: 0 */

// <020DE3D3> ../thirdparty/minivorbis/minivorbis.h:14337
// variables: 2
// function calls: 5
void vorbis_info_clear(vorbis_info* vi)
{
	codec_setup_info* ci; // 14338
	int i; // 14339
	_vi_psy_free(vorbis_info_psy* i); // 14350
	vorbis_staticbook_destroy(static_codebook* b); // 18649
	vorbis_staticbook_destroy(static_codebook* b); // 14367
	_vi_psy_free(vorbis_info_psy* i); // 14376
	memset(void* __dest,
		int __ch,
		size_t __len);  // 14381
} /* size: 420, variables: 2, inline expansions: 5 (108 bytes) */

// <020DE386> ../thirdparty/minivorbis/minivorbis.h:14386
// variables: 2
int _vorbis_unpack_info(vorbis_info* vi, oggpack_buffer* opb)
{

err_out: // 14417
	codec_setup_info* ci; // 14387
	int bs; // 14388
} /* size: 0, variables: 2, goto labels: 1 */

// <020DE32A> ../thirdparty/minivorbis/minivorbis.h:14422
// variables: 3
int _vorbis_unpack_comment(vorbis_comment* vc, oggpack_buffer* opb)
{

err_out: // 14447
	int i; // 14423
	int vendorlen; // 14424
	{
		int len; // 14437
	}
} /* size: 0, variables: 2, goto labels: 1 */

// <020DE2C0> ../thirdparty/minivorbis/minivorbis.h:14454
// variables: 4
int _vorbis_unpack_books(vorbis_info* vi, oggpack_buffer* opb)
{

err_out: // 14525
	codec_setup_info* ci; // 14455
	int i; // 14456
	{
		int times; // 14468
		{
			int test; // 14471
		}
	}
} /* size: 0, variables: 2, goto labels: 1 */

// <020DE0FE> ../thirdparty/minivorbis/minivorbis.h:14531
// variables: 2
// function calls: 4
int vorbis_synthesis_idheader(ogg_packet* op)
{
	oggpack_buffer opb; // 14532
	char buffer; // 14533
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1122
	oggpack_readinit(oggpack_buffer* b,
			unsigned char* buf,
			int bytes);  // 14536
	memset(void* __dest,
		int __ch,
		size_t __len);  // 14544
	_v_readstring(oggpack_buffer* o,
			char* buf,
			int bytes);  // 14545
} /* size: 225, variables: 2, inline expansions: 4 (98 bytes) */

// <020DD6D6> ../thirdparty/minivorbis/minivorbis.h:14560
// variables: 6
// function calls: 16
int vorbis_synthesis_headerin(vorbis_info* vi, vorbis_comment* vc, ogg_packet* op)
{
	oggpack_buffer opb; // 14561
	{
		char buffer; // 14569
		int packtype; // 14570
		memset(void* __dest,
			int __ch,
			size_t __len);  // 14571
		_v_readstring(oggpack_buffer* o,
				char* buf,
				int bytes);  // 14572

err_out: // 14417
		_vorbis_unpack_info(vorbis_info* vi,
					oggpack_buffer* opb);  // 14588

err_out: // 14525
		{
			int times; // 14468
			{
				int test; // 14471
			}
		}
		_OggAutocastPtr::_OggAutocastPtr(
				void* pp);  // 14510
		_vorbis_unpack_books(vorbis_info* vi,
					oggpack_buffer* opb);  // 14616

err_out: // 14447
		_v_readstring(oggpack_buffer* o,
				char* buf,
				int bytes);  // 14428
		_OggAutocastPtr::_OggAutocastPtr(
				void* pp);  // 14427
		oggpack_bytes(oggpack_buffer* b); // 14431
		_OggAutocastPtr::_OggAutocastPtr(
				void* pp);  // 14433
		_OggAutocastPtr::_OggAutocastPtr(
				void* pp);  // 14434
		{
			int len; // 14437
			oggpack_bytes(oggpack_buffer* b); // 14439
			_OggAutocastPtr::_OggAutocastPtr(
					void* pp);  // 14441
			_v_readstring(oggpack_buffer* o,
					char* buf,
					int bytes);  // 14442
		}
		_vorbis_unpack_comment(vorbis_comment* vc,
					oggpack_buffer* opb);  // 14600
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1122
	oggpack_readinit(oggpack_buffer* b,
			unsigned char* buf,
			int bytes);  // 14564
} /* size: 1822, variables: 1, inline expansions: 2 (62 bytes) */

// <020DD69E> ../thirdparty/minivorbis/minivorbis.h:14630
// variable: 1
int _vorbis_pack_info(oggpack_buffer* opb, vorbis_info* vi)
{
	codec_setup_info* ci; // 14631
} /* size: 0, variables: 1 */

// <020EB7B4> ../thirdparty/minivorbis/minivorbis.h:14658
// variables: 2
// function calls: 3
int _vorbis_pack_comment(oggpack_buffer* opb, vorbis_comment* vc)
{
	int bytes; // 14659
	_v_writestring(oggpack_buffer* o,
			const char* s,
			int bytes);  // 14663
	_v_writestring(oggpack_buffer* o,
			const char* s,
			int bytes);  // 14667
	{
		int i; // 14673
		_v_writestring(oggpack_buffer* o,
				const char* s,
				int bytes);  // 14677
	}
} /* size: 0, variables: 1, inline expansions: 2 (0 bytes) */

// <020DD658> ../thirdparty/minivorbis/minivorbis.h:14658
// variables: 2
int _vorbis_pack_comment(oggpack_buffer* opb, vorbis_comment* vc)
{
	int bytes; // 14659
	{
		int i; // 14673
	}
} /* size: 0, variables: 1 */

// <020DD60C> ../thirdparty/minivorbis/minivorbis.h:14688
// variables: 2
int _vorbis_pack_books(oggpack_buffer* opb, vorbis_info* vi)
{

err_out: // 14740
	codec_setup_info* ci; // 14689
	int i; // 14690
} /* size: 0, variables: 2, goto labels: 1 */

// <020DD399> ../thirdparty/minivorbis/minivorbis.h:14744
// variable: 1
// function calls: 7
int vorbis_commentheader_out(vorbis_comment* vc, ogg_packet* op)
{
	oggpack_buffer opb; // 14747
	memset(void* __dest,
		int __ch,
		size_t __len);  // 903
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 904
	oggpack_writeinit(oggpack_buffer* b); // 14749
	oggpack_bytes(oggpack_buffer* b); // 14755
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 14755
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 14756
	oggpack_writeclear(oggpack_buffer* b); // 14764
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <020DC81D> ../thirdparty/minivorbis/minivorbis.h:14768
// variables: 4
// function calls: 25
int vorbis_analysis_headerout(vorbis_dsp_state* v, vorbis_comment* vc, ogg_packet* op, ogg_packet* op_comm, ogg_packet* op_code)
{

err_out: // 14832
	int ret; // 14773
	vorbis_info* vi; // 14774
	oggpack_buffer opb; // 14775
	private_state* b; // 14776
	memset(void* __dest,
		int __ch,
		size_t __len);  // 14833
	memset(void* __dest,
		int __ch,
		size_t __len);  // 14834
	memset(void* __dest,
		int __ch,
		size_t __len);  // 14835
	memset(void* __dest,
		int __ch,
		size_t __len);  // 903
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 904
	oggpack_writeinit(oggpack_buffer* b); // 14786
	_v_writestring(oggpack_buffer* o,
			const char* s,
			int bytes);  // 14640
	ov_ilog(ogg_uint32_t v); // 14651
	ov_ilog(ogg_uint32_t v); // 14652
	_vorbis_pack_info(oggpack_buffer* opb,
				vorbis_info* vi);  // 14787
	oggpack_bytes(oggpack_buffer* b); // 14791
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 14791
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 14792
	oggpack_reset(oggpack_buffer* b); // 14802
	oggpack_bytes(oggpack_buffer* b); // 14806
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 14806
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 14807
	oggpack_reset(oggpack_buffer* b); // 14817

err_out: // 14740
	_v_writestring(oggpack_buffer* o,
			const char* s,
			int bytes);  // 14694
	_vorbis_pack_books(oggpack_buffer* opb,
				vorbis_info* vi);  // 14818
	oggpack_writeclear(oggpack_buffer* b); // 14838
	oggpack_bytes(oggpack_buffer* b); // 14821
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 14821
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 14822
	oggpack_writeclear(oggpack_buffer* b); // 14830
} /* size: 0, variables: 4, goto labels: 2, inline expansions: 25 (0 bytes) */

// <020DC7B3> ../thirdparty/minivorbis/minivorbis.h:14849
// variable: 1
double vorbis_granule_time(vorbis_dsp_state* v, ogg_int64_t granulepos)
{
	{
		ogg_int64_t granuleoff; // 14857
	}
} /* size: 0 */

// <020DC790> ../thirdparty/minivorbis/minivorbis.h:14864
const char* vorbis_version_string(void)
{
} /* size: 0 */

// <020CC10C> ../thirdparty/minivorbis/minivorbis.h:14898
// member variables: 14
// struct size: 56
struct lsfit_acc {
	int x0; /* 0 4 */
	int x1; /* 4 4 */
	int xa; /* 8 4 */
	int ya; /* 12 4 */
	int x2a; /* 16 4 */
	int y2a; /* 20 4 */
	int xya; /* 24 4 */
	int an; /* 28 4 */
	int xb; /* 32 4 */
	int yb; /* 36 4 */
	int x2b; /* 40 4 */
	int y2b; /* 44 4 */
	int xyb; /* 48 4 */
	int bn; /* 52 4 */
};

// <020DC769> ../thirdparty/minivorbis/minivorbis.h:14919
// variable: 1
void floor1_free_info(vorbis_info_floor* i)
{
	vorbis_info_floor1* info; // 14920
} /* size: 0, variables: 1 */

// <020DC742> ../thirdparty/minivorbis/minivorbis.h:14927
// variable: 1
void floor1_free_look(vorbis_look_floor* i)
{
	vorbis_look_floor1* look; // 14928
} /* size: 0, variables: 1 */

// <020DC4E0> ../thirdparty/minivorbis/minivorbis.h:14940
// variables: 7
// function calls: 2
void floor1_pack(vorbis_info_floor* i, oggpack_buffer* opb)
{
	vorbis_info_floor1* info; // 14941
	int j; // 14942
	int k; // 14942
	int count; // 14943
	int rangebits; // 14944
	int maxposit; // 14945
	int maxclass; // 14946
	ov_ilog(ogg_uint32_t v); // 14968
	ov_ilog(ogg_uint32_t v); // 14969
} /* size: 565, variables: 7, inline expansions: 2 (23 bytes) */

// <020DC4A0> ../thirdparty/minivorbis/minivorbis.h:14978
int icomp(const void* a, const void* b)
{
} /* size: 15 */

// <020DC158> ../thirdparty/minivorbis/minivorbis.h:14982
// variables: 9
// function calls: 2
vorbis_info_floor* floor1_unpack(vorbis_info* vi, oggpack_buffer* opb)
{

err_out: // 15041
	codec_setup_info* ci; // 14983
	int j; // 14984
	int k; // 14984
	int count; // 14984
	int maxclass; // 14984
	int rangebits; // 14984
	vorbis_info_floor1* info; // 14986
	{
		int t; // 15020
	}
	{
		int* sortpointer; // 15031
	}
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 14986
	floor1_free_info(vorbis_info_floor* i); // 15042
} /* size: 1098, variables: 7, goto labels: 1, inline expansions: 2 (8 bytes) */

// <020DBF3D> ../thirdparty/minivorbis/minivorbis.h:15046
// variables: 12
// function call: 1
vorbis_look_floor* floor1_look(vorbis_dsp_state* vd, vorbis_info_floor* in)
{
	int* sortpointer; // 15049
	vorbis_info_floor1* info; // 15050
	vorbis_look_floor1* look; // 15051
	int i; // 15052
	int j; // 15052
	int n; // 15052
	{
		int lo; // 15100
		int hi; // 15101
		int lx; // 15102
		int hx; // 15103
		int currentx; // 15104
		{
			int x; // 15106
		}
	}
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 15051
} /* size: 802, variables: 6, inline expansions: 1 (0 bytes) */

// <020DBEAD> ../thirdparty/minivorbis/minivorbis.h:15123
// variables: 5
int render_point(int x0, int x1, int y0, int y1, int x)
{
	{
		int dy; // 15128
		int adx; // 15129
		int ady; // 15130
		int err; // 15131
		int off; // 15133
	}
} /* size: 0 */

// <020DBE84> ../thirdparty/minivorbis/minivorbis.h:15139
// variable: 1
int vorbis_dBquant(const float* x)
{
	int i; // 15140
} /* size: 0, variables: 1 */

// <020DBDCD> ../thirdparty/minivorbis/minivorbis.h:15213
// variables: 8
void render_line(int n, int x0, int x1, int y0, int y1, float* d)
{
	int dy; // 15214
	int adx; // 15215
	int ady; // 15216
	int base; // 15217
	int sy; // 15218
	int x; // 15219
	int y; // 15220
	int err; // 15221
} /* size: 0, variables: 8 */

// <020DBD16> ../thirdparty/minivorbis/minivorbis.h:15242
// variables: 8
void render_line0(int n, int x0, int x1, int y0, int y1, int* d)
{
	int dy; // 15243
	int adx; // 15244
	int ady; // 15245
	int base; // 15246
	int sy; // 15247
	int x; // 15248
	int y; // 15249
	int err; // 15250
} /* size: 0, variables: 8 */

// <020DBAD4> ../thirdparty/minivorbis/minivorbis.h:15272
// variables: 14
// function calls: 2
int accumulate_fit(const float* flr, const float* mdct, int x0, int x1, lsfit_acc* a, int n, vorbis_info_floor1* info)
{
	long int i; // 15275
	int xa; // 15277
	int ya; // 15277
	int x2a; // 15277
	int y2a; // 15277
	int xya; // 15277
	int na; // 15277
	int xb; // 15277
	int yb; // 15277
	int x2b; // 15277
	int y2b; // 15277
	int xyb; // 15277
	int nb; // 15277
	{
		int quantized; // 15285
		vorbis_dBquant(const float* x); // 15285
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 15279
} /* size: 0, variables: 13, inline expansions: 1 (0 bytes) */

// <020EB2DA> ../thirdparty/minivorbis/minivorbis.h:15322
// variables: 13
int fit_line(lsfit_acc* a, int fits, int* y0, int* y1, vorbis_info_floor1* info)
{
	double xb; // 15324
	double yb; // 15324
	double x2b; // 15324
	double y2b; // 15324
	double xyb; // 15324
	double bn; // 15324
	int i; // 15325
	int x0; // 15326
	int x1; // 15327
	{
		double weight; // 15330
	}
	{
		double denom; // 15359
		{
			double a; // 15362
			double b; // 15363
		}
	}
} /* size: 0, variables: 9 */

// <020DB8E5> ../thirdparty/minivorbis/minivorbis.h:15382
// variables: 11
int inspect_error(int x0, int x1, int y0, int y1, const float* mask, const float* mdct, vorbis_info_floor1* info)
{
	int dy; // 15385
	int adx; // 15386
	int ady; // 15387
	int base; // 15388
	int sy; // 15389
	int x; // 15390
	int y; // 15391
	int err; // 15392
	int val; // 15393
	int mse; // 15394
	int n; // 15395
} /* size: 0, variables: 11 */

// <020DB8AF> ../thirdparty/minivorbis/minivorbis.h:15433
int post_Y(int* A, int* B, int pos)
{
} /* size: 0 */

// <020DAFE3> ../thirdparty/minivorbis/minivorbis.h:15442
// variables: 43
// function calls: 10
int* floor1_fit(vorbis_block* vb, vorbis_look_floor1* look, const float* logmdct, const float* logmask)
{
	long int i; // 15445
	long int j; // 15445
	vorbis_info_floor1* info; // 15446
	long int n; // 15447
	long int posts; // 15448
	long int nonzero; // 15449
	lsfit_acc fits; // 15450
	int fit_valueA; // 15451
	int fit_valueB; // 15452
	int loneighbor; // 15454
	int hineighbor; // 15455
	int* output; // 15456
	int memo; // 15457
	{
		int y0; // 15478
		int y1; // 15479
		{
			int sortpos; // 15492
			int ln; // 15493
			int hn; // 15494
			{
				int lsortpos; // 15499
				int hsortpos; // 15500
				{
					int lx; // 15505
					int hx; // 15506
					int ly; // 15507
					int hy; // 15508
					{
						int ly0; // 15516
						int ly1; // 15517
						int hy0; // 15518
						int hy1; // 15519
						int ret0; // 15520
						int ret1; // 15521
					}
					vorbis_dBquant(const float* x); // 15393
					vorbis_dBquant(const float* x); // 15416
					inspect_error(int x0,
							int x1,
							int y0,
							int y1,
							const float* mask,
							const float* mdct,
							vorbis_info_floor1* info);  // 15514
					post_Y(int* A,
						int* B,
						int pos);  // 15507
					post_Y(int* A,
						int* B,
						int pos);  // 15508
				}
			}
		}
		{
			int ln; // 15575
			int hn; // 15576
			int x0; // 15577
			int x1; // 15578
			int y0; // 15579
			int y1; // 15580
			int predicted; // 15582
			int vx; // 15583
			{
				int dy; // 15128
				int adx; // 15129
				int ady; // 15130
				int err; // 15131
				int off; // 15133
			}
			render_point(int x0,
					int x1,
					int y0,
					int y1,
					int x);  // 15582
			post_Y(int* A,
				int* B,
				int pos);  // 15583
		}
		post_Y(int* A,
			int* B,
			int pos);  // 15569
		post_Y(int* A,
			int* B,
			int pos);  // 15568
		_OggAutocastPtr::operator int*<int>(); // 15566
	}
} /* size: 0, variables: 13 */

// <020DAED0> ../thirdparty/minivorbis/minivorbis.h:15597
// variables: 3
// function call: 1
int* floor1_interpolate_fit(vorbis_block* vb, vorbis_look_floor1* look, int* A, int* B, int del)
{
	long int i; // 15601
	long int posts; // 15602
	int* output; // 15603
	_OggAutocastPtr::operator int*<int>(); // 15606
} /* size: 0, variables: 3, inline expansions: 1 (0 bytes) */

// <020DA7BE> ../thirdparty/minivorbis/minivorbis.h:15619
// variables: 42
// function calls: 6
int floor1_encode(oggpack_buffer* opb, vorbis_block* vb, vorbis_look_floor1* look, int* post, int* ilogmask)
{
	long int i; // 15623
	long int j; // 15623
	vorbis_info_floor1* info; // 15624
	long int posts; // 15625
	codec_setup_info* ci; // 15626
	int out; // 15627
	static_codebook** sbooks; // 15628
	codebook* books; // 15629
	{
		int val; // 15634
	}
	{
		int ln; // 15657
		int hn; // 15658
		int x0; // 15659
		int x1; // 15660
		int y0; // 15661
		int y1; // 15662
		int predicted; // 15664
		{
			int headroom; // 15671
			int val; // 15674
		}
		{
			int dy; // 15128
			int adx; // 15129
			int ady; // 15130
			int err; // 15131
			int off; // 15133
		}
		render_point(int x0,
				int x1,
				int y0,
				int y1,
				int x);  // 15664
	}
	{
		int _vorbis_class_; // 15712
		int cdim; // 15713
		int csubbits; // 15714
		int csub; // 15715
		int bookas; // 15716
		int cval; // 15717
		int cshift; // 15718
		int k; // 15719
		int l; // 15719
		{
			int maxval; // 15723
			{
				int booknum; // 15727
			}
			{
				int val; // 15736
			}
		}
		{
			int book; // 15764
		}
	}
	{
		int hx; // 15792
		int lx; // 15793
		int ly; // 15794
		int n; // 15795
		{
			int current; // 15798
			int hy; // 15799
			render_line0(int n,
					int x0,
					int x1,
					int y0,
					int y1,
					int* d);  // 15805
		}
	}
	ov_ilog(ogg_uint32_t v); // 15705
	ov_ilog(ogg_uint32_t v); // 15706
	ov_ilog(ogg_uint32_t v); // 15707
	memset(void* __dest,
		int __ch,
		size_t __len);  // 15816
} /* size: 0, variables: 8, inline expansions: 4 (0 bytes) */

// <020DA335> ../thirdparty/minivorbis/minivorbis.h:15821
// variables: 26
// function calls: 6
void* floor1_inverse1(vorbis_block* vb, vorbis_look_floor* in)
{

eop: // 15903
	vorbis_look_floor1* look; // 15822
	vorbis_info_floor1* info; // 15823
	codec_setup_info* ci; // 15824
	int i; // 15826
	int j; // 15826
	int k; // 15826
	codebook* books; // 15827
	{
		int* fit_value; // 15831
		{
			int _vorbis_class_; // 15838
			int cdim; // 15839
			int csubbits; // 15840
			int csub; // 15841
			int cval; // 15842
			{
				int book; // 15852
				{
					long int packed_entry; // 18278
				}
				vorbis_book_decode(codebook* book,
							oggpack_buffer* b);  // 15855
			}
			{
				long int packed_entry; // 18278
			}
			vorbis_book_decode(codebook* book,
						oggpack_buffer* b);  // 15846
		}
		{
			int predicted; // 15866
			int hiroom; // 15871
			int loroom; // 15872
			int room; // 15873
			int val; // 15874
			{
				int dy; // 15128
				int adx; // 15129
				int ady; // 15130
				int err; // 15131
				int off; // 15133
			}
			render_point(int x0,
					int x1,
					int y0,
					int y1,
					int x);  // 15866
		}
		ov_ilog(ogg_uint32_t v); // 15833
		_OggAutocastPtr::operator int*<int>(); // 15831
		ov_ilog(ogg_uint32_t v); // 15834
	}
} /* size: 968, variables: 7, goto labels: 1 */

// <020DA0A5> ../thirdparty/minivorbis/minivorbis.h:15907
// variables: 11
// function calls: 2
int floor1_inverse2(vorbis_block* vb, vorbis_look_floor* in, void* memo, float* out)
{
	vorbis_look_floor1* look; // 15909
	vorbis_info_floor1* info; // 15910
	codec_setup_info* ci; // 15912
	int n; // 15913
	int j; // 15914
	{
		int* fit_value; // 15918
		int hx; // 15919
		int lx; // 15920
		int ly; // 15921
		{
			int current; // 15926
			int hy; // 15927
			render_line(int n,
					int x0,
					int x1,
					int y0,
					int y1,
					float* d);  // 15935
		}
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 15944
} /* size: 755, variables: 5, inline expansions: 1 (11 bytes) */

// <020CC224> ../thirdparty/minivorbis/minivorbis.h:15986
// member variables: 7
// struct size: 48
typedef struct {
	int ln; /* 0 4 */
	int m; /* 4 4 */
	int * * linearmap; /* 8 8 */
	int n[2]; /* 16 8 */
	vorbis_info_floor0 * vi; /* 24 8 */
	long int bits; /* 32 8 */
	long int frames; /* 40 8 */
} vorbis_look_floor0;

// <020DA07E> ../thirdparty/minivorbis/minivorbis.h:16001
// variable: 1
void floor0_free_info(vorbis_info_floor* i)
{
	vorbis_info_floor0* info; // 16002
} /* size: 0, variables: 1 */

// <020D9FF6> ../thirdparty/minivorbis/minivorbis.h:16009
// variable: 1
void floor0_free_look(vorbis_look_floor* i)
{
	vorbis_look_floor0* look; // 16010
} /* size: 97, variables: 1 */

// <020D9E1F> ../thirdparty/minivorbis/minivorbis.h:16025
// variables: 3
// function calls: 2
vorbis_info_floor* floor0_unpack(vorbis_info* vi, oggpack_buffer* opb)
{

err_out: // 16050
	codec_setup_info* ci; // 16026
	int j; // 16027
	vorbis_info_floor0* info; // 16029
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 16029
	floor0_free_info(vorbis_info_floor* i); // 16051
} /* size: 284, variables: 3, goto labels: 1, inline expansions: 2 (8 bytes) */

// <020D9D7A> ../thirdparty/minivorbis/minivorbis.h:16063
// variables: 9
void floor0_map_lazy_init(vorbis_block* vb, vorbis_info_floor* infoX, vorbis_look_floor0* look)
{
	{
		vorbis_dsp_state* vd; // 16067
		vorbis_info* vi; // 16068
		codec_setup_info* ci; // 16069
		vorbis_info_floor0* info; // 16070
		int W; // 16071
		int n; // 16072
		int j; // 16072
		float scale; // 16077
		{
			int val; // 16087
		}
	}
} /* size: 0 */

// <020D9C59> ../thirdparty/minivorbis/minivorbis.h:16097
// variables: 2
// function calls: 2
vorbis_look_floor* floor0_look(vorbis_dsp_state* vd, vorbis_info_floor* i)
{
	vorbis_info_floor0* info; // 16099
	vorbis_look_floor0* look; // 16100
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 16100
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 16108
} /* size: 84, variables: 2, inline expansions: 2 (0 bytes) */

// <020D9A32> ../thirdparty/minivorbis/minivorbis.h:16113
// variables: 12
// function calls: 2
void* floor0_inverse1(vorbis_block* vb, vorbis_look_floor* i)
{

eop: // 16144
	vorbis_look_floor0* look; // 16114
	vorbis_info_floor0* info; // 16115
	int j; // 16116
	int k; // 16116
	int ampraw; // 16118
	{
		long int maxval; // 16120
		float amp; // 16121
		int booknum; // 16122
		{
			codec_setup_info* ci; // 16125
			codebook* b; // 16126
			float last; // 16127
			float* lsp; // 16132
			_OggAutocastPtr::operator float*<float>(); // 16132
		}
		ov_ilog(ogg_uint32_t v); // 16122
	}
} /* size: 405, variables: 5, goto labels: 1 */

// <020D966C> ../thirdparty/minivorbis/minivorbis.h:16148
// variables: 13
// function calls: 8
int floor0_inverse2(vorbis_block* vb, vorbis_look_floor* i, void* memo, float* out)
{
	vorbis_look_floor0* look; // 16150
	vorbis_info_floor0* info; // 16151
	{
		float* lsp; // 16156
		float amp; // 16157
	}
	{
		vorbis_dsp_state* vd; // 16067
		vorbis_info* vi; // 16068
		codec_setup_info* ci; // 16069
		vorbis_info_floor0* info; // 16070
		int W; // 16071
		int n; // 16072
		int j; // 16072
		float scale; // 16077
		atan(float __x); // 16077
		atan(float __x); // 16077
		_OggAutocastPtr::_OggAutocastPtr(
				void* pp);  // 16085
		{
			int val; // 16087
			atan(float __x); // 16087
			atan(float __x); // 16087
			floor(float __x); // 16087
		}
	}
	floor0_map_lazy_init(vorbis_block* vb,
				vorbis_info_floor* infoX,
				vorbis_look_floor0* look);  // 16153
	memset(void* __dest,
		int __ch,
		size_t __len);  // 16167
} /* size: 740, variables: 2, inline expansions: 2 (602 bytes) */

// <020CC2C7> ../thirdparty/minivorbis/minivorbis.h:16212
// member variables: 11
// struct size: 80
typedef struct {
	vorbis_info_residue0 * info; /* 0 8 */
	int parts; /* 8 4 */
	int stages; /* 12 4 */
	codebook * fullbooks; /* 16 8 */
	codebook * phrasebook; /* 24 8 */
	codebook * * * partbooks; /* 32 8 */
	int partvals; /* 40 4 */
	int * * decodemap; /* 48 8 */
	long int postbits; /* 56 8 */
	long int phrasebits; /* 64 8 */
	long int frames; /* 72 8 */
} vorbis_look_residue0;

// <020D9644> ../thirdparty/minivorbis/minivorbis.h:16240
// variable: 1
void res0_free_info(vorbis_info_residue* i)
{
	vorbis_info_residue0* info; // 16241
} /* size: 0, variables: 1 */

// <020D960F> ../thirdparty/minivorbis/minivorbis.h:16248
// variables: 2
void res0_free_look(vorbis_look_residue* i)
{
	int j; // 16249
	{
		vorbis_look_residue0* look; // 16252
	}
} /* size: 0, variables: 1 */

// <020D95E4> ../thirdparty/minivorbis/minivorbis.h:16326
// variable: 1
int icount(unsigned int v)
{
	int ret; // 16327
} /* size: 0, variables: 1 */

// <020D93BF> ../thirdparty/minivorbis/minivorbis.h:16336
// variables: 3
// function calls: 2
void res0_pack(vorbis_info_residue* vr, oggpack_buffer* opb)
{
	vorbis_info_residue0* info; // 16337
	int j; // 16338
	int acc; // 16338
	ov_ilog(ogg_uint32_t v); // 16351
	icount(unsigned int v); // 16358
} /* size: 370, variables: 3, inline expansions: 2 (40 bytes) */

// <020D9097> ../thirdparty/minivorbis/minivorbis.h:16366
// variables: 11
// function calls: 3
vorbis_info_residue* res0_unpack(vorbis_info* vi, oggpack_buffer* opb)
{

errout: // 16425
	int j; // 16367
	int acc; // 16367
	vorbis_info_residue0* info; // 16368
	codec_setup_info* ci; // 16369
	{
		int cascade; // 16381
		int cflag; // 16382
		{
			int c; // 16385
		}
		icount(unsigned int v); // 16391
	}
	{
		int book; // 16394
	}
	{
		int entries; // 16412
		int dim; // 16413
		int partvals; // 16414
	}
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 16368
	res0_free_info(vorbis_info_residue* i); // 16426
} /* size: 573, variables: 4, goto labels: 1, inline expansions: 2 (8 bytes) */

// <020D8D30> ../thirdparty/minivorbis/minivorbis.h:16430
// variables: 12
// function calls: 6
vorbis_look_residue* res0_look(vorbis_dsp_state* vd, vorbis_info_residue* vr)
{
	vorbis_info_residue0* info; // 16432
	vorbis_look_residue0* look; // 16433
	codec_setup_info* ci; // 16434
	int j; // 16436
	int k; // 16436
	int acc; // 16436
	int dim; // 16437
	int maxstage; // 16438
	{
		int stages; // 16449
		ov_ilog(ogg_uint32_t v); // 16449
		_OggAutocastPtr::_OggAutocastPtr(
				void* pp);  // 16452
	}
	{
		long int val; // 16471
		long int mult; // 16472
		{
			long int deco; // 16475
		}
		_OggAutocastPtr::_OggAutocastPtr(
				void* pp);  // 16473
	}
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 16433
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 16446
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 16469
} /* size: 772, variables: 8, inline expansions: 3 (0 bytes) */

// <020D8AE9> ../thirdparty/minivorbis/minivorbis.h:16491
// variables: 20
// function call: 1
int local_book_besterror(codebook* book, int* a)
{
	int dim; // 16492
	int i; // 16493
	int j; // 16493
	int o; // 16493
	int minval; // 16494
	int del; // 16495
	int qv; // 16496
	int ze; // 16497
	int index; // 16498
	int p; // 16500
	{
		int v; // 16504
		int m; // 16505
	}
	{
		int v; // 16511
		int m; // 16512
	}
	{
		const static_codebook* c; // 16519
		int best; // 16520
		int e; // 16522
		int maxval; // 16523
		{
			int _vorbis_this_; // 16526
			{
				int val; // 16528
			}
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 16532
		}
	}
} /* size: 1104, variables: 10 */

// <020EB9F0> ../thirdparty/minivorbis/minivorbis.h:16559
// variables: 5
// function call: 1
int _encodepart(oggpack_buffer* opb, int* vec, int n, codebook* book)
{
	int i; // 16562
	int bits; // 16562
	int dim; // 16563
	int step; // 16564
	{
		int entry; // 16567
		vorbis_book_encode(codebook* book,
					int a,
					oggpack_buffer* b);  // 16574
	}
} /* size: 0, variables: 4 */

// <020D8A49> ../thirdparty/minivorbis/minivorbis.h:16559
// variables: 5
int _encodepart(oggpack_buffer* opb, int* vec, int n, codebook* book)
{
	int i; // 16562
	int bits; // 16562
	int dim; // 16563
	int step; // 16564
	{
		int entry; // 16567
	}
} /* size: 0, variables: 4 */

// <020D8954> ../thirdparty/minivorbis/minivorbis.h:16581
// variables: 14
long int** _01class(vorbis_block* vb, vorbis_look_residue* vl, int** in, int ch)
{
	long int i; // 16583
	long int j; // 16583
	long int k; // 16583
	vorbis_look_residue0* look; // 16584
	vorbis_info_residue0* info; // 16585
	int samples_per_partition; // 16588
	int possible_partitions; // 16589
	int n; // 16590
	int partvals; // 16592
	long int** partword; // 16593
	float scale; // 16594
	{
		int offset; // 16606
		{
			int max; // 16608
			int ent; // 16609
		}
	}
} /* size: 0, variables: 11 */

// <020D8870> ../thirdparty/minivorbis/minivorbis.h:16648
// variables: 13
long int** _2class(vorbis_block* vb, vorbis_look_residue* vl, int** in, int ch)
{
	long int i; // 16650
	long int j; // 16650
	long int k; // 16650
	long int l; // 16650
	vorbis_look_residue0* look; // 16651
	vorbis_info_residue0* info; // 16652
	int samples_per_partition; // 16655
	int possible_partitions; // 16656
	int n; // 16657
	int partvals; // 16659
	long int** partword; // 16660
	{
		int magmax; // 16671
		int angmax; // 16672
	}
} /* size: 0, variables: 11 */

// <020ECCE6> ../thirdparty/minivorbis/minivorbis.h:16703
// variables: 18
// function calls: 3
int _01forward(oggpack_buffer* opb, vorbis_look_residue* vl, int** in, int ch, long int** partword, int (*encode)(oggpack_buffer *, int *, int, codebook *))
{
	long int i; // 16716
	long int j; // 16716
	long int k; // 16716
	long int s; // 16716
	vorbis_look_residue0* look; // 16717
	vorbis_info_residue0* info; // 16718
	int samples_per_partition; // 16725
	int possible_partitions; // 16726
	int partitions_per_word; // 16727
	int n; // 16728
	int partvals; // 16730
	long int resbits; // 16731
	long int resvals; // 16732
	memset(void* __dest,
		int __ch,
		size_t __len);  // 16742
	memset(void* __dest,
		int __ch,
		size_t __len);  // 16743
	{
		long int offset; // 16777
		{
			codebook* statebook; // 16782
			{
				int ret; // 16784
				{
					int entry; // 16567
				}
				_encodepart(oggpack_buffer* opb,
						int* vec,
						int n,
						codebook* book);  // 16801
			}
		}
	}
	{
		long int val; // 16757
	}
} /* size: 1250, variables: 13, inline expansions: 2 (38 bytes) */

// <020D86FF> ../thirdparty/minivorbis/minivorbis.h:16703
// variables: 17
int _01forward(oggpack_buffer* opb, vorbis_look_residue* vl, int** in, int ch, long int** partword, int (*encode)(oggpack_buffer *, int *, int, codebook *))
{
	long int i; // 16716
	long int j; // 16716
	long int k; // 16716
	long int s; // 16716
	vorbis_look_residue0* look; // 16717
	vorbis_info_residue0* info; // 16718
	int samples_per_partition; // 16725
	int possible_partitions; // 16726
	int partitions_per_word; // 16727
	int n; // 16728
	int partvals; // 16730
	long int resbits; // 16731
	long int resvals; // 16732
	{
		long int val; // 16757
	}
	{
		long int offset; // 16777
		{
			codebook* statebook; // 16782
			{
				int ret; // 16784
			}
		}
	}
} /* size: 0, variables: 13 */

// <020EC5BE> ../thirdparty/minivorbis/minivorbis.h:16818
// variables: 19
// function calls: 2
int _01inverse(vorbis_block* vb, vorbis_look_residue* vl, float** in, int ch, long int (*decodepart)(codebook *, float *, oggpack_buffer *, int))
{

errout: // 16873

eopbreak: // 16874
	long int i; // 16823
	long int j; // 16823
	long int k; // 16823
	long int l; // 16823
	long int s; // 16823
	vorbis_look_residue0* look; // 16824
	vorbis_info_residue0* info; // 16825
	int samples_per_partition; // 16828
	int partitions_per_word; // 16829
	int max; // 16830
	int end; // 16831
	int n; // 16832
	{
		int partvals; // 16835
		int partwords; // 16836
		int*** partword; // 16837
		_OggAutocastPtr::operator int**<int*>(); // 16840
		{
			int temp; // 16850
			{
				long int packed_entry; // 18278
			}
			vorbis_book_decode(codebook* book,
						oggpack_buffer* b);  // 16850
		}
		{
			long int offset; // 16861
			{
				codebook* stagebook; // 16863
			}
		}
	}
} /* size: 929, variables: 12, goto labels: 2 */

// <020D858F> ../thirdparty/minivorbis/minivorbis.h:16818
// variables: 18
int _01inverse(vorbis_block* vb, vorbis_look_residue* vl, float** in, int ch, long int (*decodepart)(codebook *, float *, oggpack_buffer *, int))
{

errout: // 16873

eopbreak: // 16874
	long int i; // 16823
	long int j; // 16823
	long int k; // 16823
	long int l; // 16823
	long int s; // 16823
	vorbis_look_residue0* look; // 16824
	vorbis_info_residue0* info; // 16825
	int samples_per_partition; // 16828
	int partitions_per_word; // 16829
	int max; // 16830
	int end; // 16831
	int n; // 16832
	{
		int partvals; // 16835
		int partwords; // 16836
		int*** partword; // 16837
		{
			int temp; // 16850
		}
		{
			long int offset; // 16861
			{
				codebook* stagebook; // 16863
			}
		}
	}
} /* size: 0, variables: 12, goto labels: 2 */

// <020D84BF> ../thirdparty/minivorbis/minivorbis.h:16878
// variables: 2
int res0_inverse(vorbis_block* vb, vorbis_look_residue* vl, float** in, int* nonzero, int ch)
{
	int i; // 16880
	int used; // 16880
} /* size: 99, variables: 2 */

// <020D83A7> ../thirdparty/minivorbis/minivorbis.h:16890
// variables: 2
int res1_forward(oggpack_buffer* opb, vorbis_block* vb, vorbis_look_residue* vl, int** in, int* nonzero, int ch, long int** partword, int submap)
{
	int i; // 16892
	int used; // 16892
} /* size: 91, variables: 2 */

// <020D80E6> ../thirdparty/minivorbis/minivorbis.h:16910
// variables: 5
// function calls: 4
long int** res1_class(vorbis_block* vb, vorbis_look_residue* vl, int** in, int* nonzero, int ch)
{
	int i; // 16912
	int used; // 16912
	_OggAutocastPtr::operator long int**<long int*>(); // 16593
	_OggAutocastPtr::operator long int*<long int>(); // 16601
	memset(void* __dest,
		int __ch,
		size_t __len);  // 16602
	{
		int offset; // 16606
		{
			int max; // 16608
			int ent; // 16609
		}
	}
	_01class(vorbis_block* vb,
		vorbis_look_residue* vl,
		int** in,
		int ch);  // 16917
} /* size: 560, variables: 2, inline expansions: 4 (446 bytes) */

// <020D8016> ../thirdparty/minivorbis/minivorbis.h:16922
// variables: 2
int res1_inverse(vorbis_block* vb, vorbis_look_residue* vl, float** in, int* nonzero, int ch)
{
	int i; // 16924
	int used; // 16924
} /* size: 99, variables: 2 */

// <020D7D7D> ../thirdparty/minivorbis/minivorbis.h:16934
// variables: 4
// function calls: 4
long int** res2_class(vorbis_block* vb, vorbis_look_residue* vl, int** in, int* nonzero, int ch)
{
	int i; // 16936
	int used; // 16936
	_OggAutocastPtr::operator long int**<long int*>(); // 16660
	_OggAutocastPtr::operator long int*<long int>(); // 16667
	memset(void* __dest,
		int __ch,
		size_t __len);  // 16668
	{
		int magmax; // 16671
		int angmax; // 16672
	}
	_2class(vorbis_block* vb,
		vorbis_look_residue* vl,
		int** in,
		int ch);  // 16940
} /* size: 488, variables: 2, inline expansions: 4 (405 bytes) */

// <020D7B87> ../thirdparty/minivorbis/minivorbis.h:16948
// variables: 7
// function call: 1
int res2_forward(oggpack_buffer* opb, vorbis_block* vb, vorbis_look_residue* vl, int** in, int* nonzero, int ch, long int** partword, int submap)
{
	long int i; // 16951
	long int j; // 16951
	long int k; // 16951
	long int n; // 16951
	long int used; // 16951
	int* work; // 16956
	{
		int* pcm; // 16958
	}
	_OggAutocastPtr::operator int*<int>(); // 16956
} /* size: 381, variables: 6, inline expansions: 1 (0 bytes) */

// <020D787E> ../thirdparty/minivorbis/minivorbis.h:16977
// variables: 17
// function calls: 2
int res2_inverse(vorbis_block* vb, vorbis_look_residue* vl, float** in, int* nonzero, int ch)
{

errout: // 17024

eopbreak: // 17025
	long int i; // 16979
	long int k; // 16979
	long int l; // 16979
	long int s; // 16979
	vorbis_look_residue0* look; // 16980
	vorbis_info_residue0* info; // 16981
	int samples_per_partition; // 16984
	int partitions_per_word; // 16985
	int max; // 16986
	int end; // 16987
	int n; // 16988
	{
		int partvals; // 16991
		int partwords; // 16992
		int** partword; // 16993
		{
			int temp; // 17003
			{
				long int packed_entry; // 18278
			}
			vorbis_book_decode(codebook* book,
						oggpack_buffer* b);  // 17003
		}
		{
			codebook* stagebook; // 17012
		}
		_OggAutocastPtr::operator int**<int*>(); // 16993
	}
} /* size: 745, variables: 11, goto labels: 2 */

// <020D7857> ../thirdparty/minivorbis/minivorbis.h:17100
// variable: 1
void mapping0_free_info(vorbis_info_mapping* i)
{
	vorbis_info_mapping0* info; // 17101
} /* size: 0, variables: 1 */

// <020D75D1> ../thirdparty/minivorbis/minivorbis.h:17108
// variables: 2
// function calls: 2
void mapping0_pack(vorbis_info* vi, vorbis_info_mapping* vm, oggpack_buffer* opb)
{
	int i; // 17110
	vorbis_info_mapping0* info; // 17111
	ov_ilog(ogg_uint32_t v); // 17131
	ov_ilog(ogg_uint32_t v); // 17132
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <020D7289> ../thirdparty/minivorbis/minivorbis.h:17152
// variables: 6
// function calls: 4
vorbis_info_mapping* mapping0_unpack(vorbis_info* vi, oggpack_buffer* opb)
{

err_out: // 17205
	int i; // 17153
	int b; // 17153
	vorbis_info_mapping0* info; // 17154
	codec_setup_info* ci; // 17155
	{
		int testM; // 17173
		int testA; // 17175
		ov_ilog(ogg_uint32_t v); // 17174
		ov_ilog(ogg_uint32_t v); // 17176
	}
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 17154
	mapping0_free_info(vorbis_info_mapping* i); // 17206
} /* size: 664, variables: 4, goto labels: 1, inline expansions: 2 (24 bytes) */

// <020D6747> ../thirdparty/minivorbis/minivorbis.h:17291
// variables: 39
// function calls: 17
int mapping0_forward(vorbis_block* vb)
{
	vorbis_dsp_state* vd; // 17292
	vorbis_info* vi; // 17293
	codec_setup_info* ci; // 17294
	private_state* b; // 17295
	vorbis_block_internal* vbi; // 17296
	int n; // 17297
	int i; // 17298
	int j; // 17298
	int k; // 17298
	int* nonzero; // 17300
	float** gmdct; // 17301
	int** iwork; // 17302
	int*** floor_posts; // 17303
	float global_ampmax; // 17305
	float* local_ampmax; // 17306
	int blocktype; // 17307
	int modenumber; // 17309
	vorbis_info_mapping0* info; // 17310
	vorbis_look_psy* psy_look; // 17311
	{
		float scale; // 17316
		float scale_dB; // 17317
		float* pcm; // 17319
		float* logfft; // 17320
		{
			float temp; // 17387
			todB(const float* x); // 17388
		}
		todB(const float* x); // 17325
		_OggAutocastPtr::operator int*<int>(); // 17322
		_OggAutocastPtr::operator float*<float>(); // 17323
		drft_forward(drft_lookup* l,
				float* data);  // 17370
		todB(const float* x); // 17371
	}
	{
		float* noise; // 17424
		float* tone; // 17425
		{
			int submap; // 17431
			float* mdct; // 17434
			float* logfft; // 17435
			float* logmdct; // 17437
			float* logmask; // 17438
			_OggAutocastPtr::operator int**<int*>(); // 17442
			memset(void* __dest,
				int __ch,
				size_t __len);  // 17443
			todB(const float* x); // 17446
			vorbis_bitrate_managed(vorbis_block* vb); // 17568
		}
		_OggAutocastPtr::operator float*<float>(); // 17424
		_OggAutocastPtr::operator float*<float>(); // 17425
	}
	{
		int** couple_bundle; // 17654
		int* zerobundle; // 17655
		{
			oggpack_buffer* opb; // 17660
			{
				int submap; // 17675
				int* ilogmask; // 17676
			}
			{
				int ch_in_bundle; // 17722
				long int** classifications; // 17723
				int resnum; // 17724
			}
		}
		vorbis_bitrate_managed(vorbis_block* vb); // 17657
		vorbis_bitrate_managed(vorbis_block* vb); // 17658
	}
	_OggAutocastPtr::operator float**<float*>(); // 17301
	_OggAutocastPtr::operator int**<int*>(); // 17302
	_OggAutocastPtr::operator int***<int**>(); // 17303
} /* size: 0, variables: 19, inline expansions: 3 (0 bytes) */

// <020D6457> ../thirdparty/minivorbis/minivorbis.h:17759
// variables: 21
// function call: 1
int mapping0_inverse(vorbis_block* vb, vorbis_info_mapping* l)
{
	vorbis_dsp_state* vd; // 17760
	vorbis_info* vi; // 17761
	codec_setup_info* ci; // 17762
	private_state* b; // 17763
	vorbis_info_mapping0* info; // 17764
	int i; // 17766
	int j; // 17766
	long int n; // 17767
	float** pcmbundle; // 17769
	int* zerobundle; // 17770
	int* nonzero; // 17772
	void** floormemo; // 17773
	{
		int submap; // 17777
		memset(void* __dest,
			int __ch,
			size_t __len);  // 17784
	}
	{
		int ch_in_bundle; // 17798
	}
	{
		float* pcmM; // 17816
		float* pcmA; // 17817
		{
			float mag; // 17820
			float ang; // 17821
		}
	}
	{
		float* pcm; // 17844
		int submap; // 17845
	}
	{
		float* pcm; // 17854
	}
} /* size: 1385, variables: 12 */

// <020D6075> ../thirdparty/minivorbis/minivorbis.h:17942
// variables: 7
// function calls: 2
int vorbis_staticbook_pack(const static_codebook* c, oggpack_buffer* opb)
{
	long int i; // 17943
	long int j; // 17943
	int ordered; // 17944
	{
		long int count; // 17963
		{
			char _vorbis_this_; // 17968
			char last; // 17969
			ov_ilog(ogg_uint32_t v); // 17972
		}
		ov_ilog(ogg_uint32_t v); // 17977
	}
	{
		int quantvals; // 18030
	}
} /* size: 0, variables: 3 */

// <020D5A45> ../thirdparty/minivorbis/minivorbis.h:18061
// variables: 9
// function calls: 11
static_codebook* vorbis_staticbook_unpack(oggpack_buffer* opb)
{

_errout: // 18179

_eofout: // 18180
	long int i; // 18062
	long int j; // 18062
	static_codebook* s; // 18063
	{
		long int unused; // 18079
		{
			long int num; // 18093
		}
		{
			long int num; // 18102
		}
		oggpack_bytes(oggpack_buffer* b); // 18082
		_OggAutocastPtr::_OggAutocastPtr(
				void* pp);  // 18085
	}
	{
		long int length; // 18113
		{
			long int num; // 18118
			ov_ilog(ogg_uint32_t v); // 18118
		}
		_OggAutocastPtr::_OggAutocastPtr(
				void* pp);  // 18115
	}
	{
		int quantvals; // 18152
		oggpack_bytes(oggpack_buffer* b); // 18163
		_OggAutocastPtr::_OggAutocastPtr(
				void* pp);  // 18165
	}
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 18063
	ov_ilog(ogg_uint32_t v); // 18074
	ov_ilog(ogg_uint32_t v); // 18074
	vorbis_staticbook_destroy(static_codebook* b); // 18649
	vorbis_staticbook_destroy(static_codebook* b); // 18181
} /* size: 1130, variables: 3, goto labels: 2, inline expansions: 5 (109 bytes) */

// <020D5A0E> ../thirdparty/minivorbis/minivorbis.h:18186
int vorbis_book_encode(codebook* book, int a, oggpack_buffer* b)
{
} /* size: 0 */

// <020D59D5> ../thirdparty/minivorbis/minivorbis.h:18200
ogg_uint32_t _bitreverse(ogg_uint32_t x)
{
} /* size: 67 */

// <020D57AA> ../thirdparty/minivorbis/minivorbis.h:18208
// variables: 8
// function calls: 3
long int decode_packed_entry_number(codebook* book, oggpack_buffer* b)
{
	int read; // 18209
	long int lo; // 18210
	long int hi; // 18210
	long int lok; // 18211
	{
		long int entry; // 18214

overflow: // 1214
		oggpack_adv(oggpack_buffer* b,
				int bits);  // 18219
	}
	{
		ogg_uint32_t testword; // 18241
		{
			long int p; // 18244
			long int test; // 18245
		}

overflow: // 1214
		oggpack_adv(oggpack_buffer* b,
				int bits);  // 18251
	}

overflow: // 1214
	oggpack_adv(oggpack_buffer* b,
			int bits);  // 18256
} /* size: 579, variables: 4, goto labels: 1, inline expansions: 1 (77 bytes) */

// <020D5754> ../thirdparty/minivorbis/minivorbis.h:18276
// variable: 1
long int vorbis_book_decode(codebook* book, oggpack_buffer* b)
{
	{
		long int packed_entry; // 18278
	}
} /* size: 0 */

// <020D5635> ../thirdparty/minivorbis/minivorbis.h:18289
// variables: 6
long int vorbis_book_decodevs_add(codebook* book, float* a, oggpack_buffer* b, int n)
{
	{
		int step; // 18291
		long int* entry; // 18292
		float** t; // 18293
		int i; // 18294
		int j; // 18294
		int o; // 18294
	}
} /* size: 497 */

// <020D5551> ../thirdparty/minivorbis/minivorbis.h:18309
// variables: 4
long int vorbis_book_decodev_add(codebook* book, float* a, oggpack_buffer* b, int n)
{
	{
		int i; // 18311
		int j; // 18311
		int entry; // 18311
		float* t; // 18312
	}
} /* size: 217 */

// <020D541D> ../thirdparty/minivorbis/minivorbis.h:18328
// variables: 5
long int vorbis_book_decodev_set(codebook* book, float* a, oggpack_buffer* b, int n)
{
	{
		int i; // 18330
		int j; // 18330
		int entry; // 18330
		float* t; // 18331
	}
	{
		int i; // 18342
	}
} /* size: 224 */

// <020D52DA> ../thirdparty/minivorbis/minivorbis.h:18351
// variables: 6
long int vorbis_book_decodevv_add(codebook* book, float** a, long int offset, int ch, oggpack_buffer* b, int n)
{
	long int i; // 18354
	long int j; // 18354
	long int entry; // 18354
	int chptr; // 18355
	{
		int m; // 18357
		{
			const float* t; // 18362
		}
	}
} /* size: 284, variables: 4 */

// <020D52AE> ../thirdparty/minivorbis/minivorbis.h:18404
// variable: 1
int ov_ilog(ogg_uint32_t v)
{
	int ret; // 18405
} /* size: 0, variables: 1 */

// <020D514F> ../thirdparty/minivorbis/minivorbis.h:18419
// variables: 3
// function calls: 3
long int _float32_pack(float val)
{
	int sign; // 18420
	long int exp; // 18421
	long int mant; // 18422
	log(float __x); // 18427
	ldexp(float __x,
		int __exp);  // 18428
	rint(float __x); // 18428
} /* size: 0, variables: 3, inline expansions: 3 (0 bytes) */

// <020D5107> ../thirdparty/minivorbis/minivorbis.h:18434
// variables: 3
float _float32_unpack(long int val)
{
	double mant; // 18435
	int sign; // 18436
	long int exp; // 18437
} /* size: 0, variables: 3 */

// <020D4F1E> ../thirdparty/minivorbis/minivorbis.h:18453
// variables: 8
// function calls: 2
ogg_uint32_t* _make_words(char* l, long int n, long int sparsecount)
{
	long int i; // 18454
	long int j; // 18454
	long int count; // 18454
	ogg_uint32_t marker; // 18455
	ogg_uint32_t* r; // 18456
	{
		long int length; // 18460
		{
			ogg_uint32_t entry; // 18462
		}
	}
	{
		ogg_uint32_t temp; // 18523
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 18457
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 18456
} /* size: 877, variables: 5, inline expansions: 2 (27 bytes) */

// <020D4E1F> ../thirdparty/minivorbis/minivorbis.h:18542
// variables: 4
// function calls: 2
long int _book_maptype1_quantvals(const static_codebook* b)
{
	long int vals; // 18543
	{
		long int acc; // 18558
		long int acc1; // 18559
		int i; // 18560
	}
	pow(float __x,
		float __y);  // 18547
	floor(float __x); // 18547
} /* size: 316, variables: 1, inline expansions: 2 (91 bytes) */

// <020D4B05> ../thirdparty/minivorbis/minivorbis.h:18584
// variables: 13
// function calls: 5
float* _book_unquantize(const static_codebook* b, int n, int* sparsemap)
{
	long int j; // 18585
	long int k; // 18585
	long int count; // 18585
	{
		int quantvals; // 18587
		float mindel; // 18588
		float delta; // 18589
		float* r; // 18590
		{
			float last; // 18606
			int indexdiv; // 18607
			{
				int index; // 18609
				float val; // 18610
				fabs(float __x); // 18611
			}
		}
		{
			float last; // 18627
			{
				float val; // 18630
				fabs(float __x); // 18631
			}
		}
		_float32_unpack(long int val); // 18588
		_float32_unpack(long int val); // 18589
		_OggAutocastPtr::_OggAutocastPtr(
				void* pp);  // 18590
	}
} /* size: 1028, variables: 3 */

// <020D4AEA> ../thirdparty/minivorbis/minivorbis.h:18649
void vorbis_staticbook_destroy(static_codebook* b)
{
} /* size: 0 */

// <020D4A23> ../thirdparty/minivorbis/minivorbis.h:18658
// function call: 1
void vorbis_book_clear(codebook* b)
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 18668
} /* size: 105, inline expansions: 1 (13 bytes) */

// <020D484F> ../thirdparty/minivorbis/minivorbis.h:18671
// function calls: 5
int vorbis_book_init_encode(codebook* c, const static_codebook* s)
{
	memset(void* __dest,
		int __ch,
		size_t __len);  // 18673
	_float32_unpack(long int val); // 18681
	rint(float __x); // 18681
	_float32_unpack(long int val); // 18682
	rint(float __x); // 18682
} /* size: 372, inline expansions: 5 (271 bytes) */

// <020D4831> ../thirdparty/minivorbis/minivorbis.h:18687
ogg_uint32_t bitreverse(ogg_uint32_t x)
{
} /* size: 0 */

// <020D47F1> ../thirdparty/minivorbis/minivorbis.h:18695
int sort32a(const void* a, const void* b)
{
} /* size: 27 */

// <020D4336> ../thirdparty/minivorbis/minivorbis.h:18701
// variables: 15
// function calls: 7
int vorbis_book_init_decode(codebook* c, const static_codebook* s)
{

err_out: // 18823
	int i; // 18702
	int j; // 18702
	int n; // 18702
	int tabn; // 18702
	int* sortindex; // 18703
	{
		ogg_uint32_t* codes; // 18728
		ogg_uint32_t** codep; // 18729
		{
			int position; // 18744
		}
		{
			ogg_uint32_t orig; // 18786
		}
		{
			ogg_uint32_t mask; // 18795
			long int lo; // 18796
			long int hi; // 18796
			{
				ogg_uint32_t word; // 18799
				{
					long unsigned int loval; // 18808
					long unsigned int hival; // 18809
				}
			}
		}
		_OggAutocastPtr::_OggAutocastPtr(
				void* pp);  // 18741
		_OggAutocastPtr::_OggAutocastPtr(
				void* pp);  // 18753
		_OggAutocastPtr::_OggAutocastPtr(
				void* pp);  // 18759
		ov_ilog(ogg_uint32_t v); // 18777
		_OggAutocastPtr::_OggAutocastPtr(
				void* pp);  // 18782
		_OggAutocastPtr::_OggAutocastPtr(
				void* pp);  // 18773
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 18705
} /* size: 1781, variables: 5, goto labels: 1, inline expansions: 1 (8 bytes) */

// <020D42F1> ../thirdparty/minivorbis/minivorbis.h:18828
long int vorbis_book_codeword(codebook* book, int entry)
{
} /* size: 0 */

// <020D42AC> ../thirdparty/minivorbis/minivorbis.h:18835
long int vorbis_book_codelen(codebook* book, int entry)
{
} /* size: 0 */

// <020D41B1> ../thirdparty/minivorbis/minivorbis.h:19099
// variables: 5
// function call: 1
void vorbis_bitrate_init(vorbis_info* vi, bitrate_manager_state* bm)
{
	codec_setup_info* ci; // 19100
	bitrate_manager_info* bi; // 19101
	{
		long int ratesamples; // 19106
		int halfsamples; // 19107
		{
			long int desired_fill; // 19121
		}
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 19103
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <020D4195> ../thirdparty/minivorbis/minivorbis.h:19129
void vorbis_bitrate_clear(bitrate_manager_state* bm)
{
} /* size: 0 */

// <020D4152> ../thirdparty/minivorbis/minivorbis.h:19134
// variables: 3
int vorbis_bitrate_managed(vorbis_block* vb)
{
	vorbis_dsp_state* vd; // 19135
	private_state* b; // 19136
	bitrate_manager_state* bm; // 19137
} /* size: 0, variables: 3 */

// <020D3D65> ../thirdparty/minivorbis/minivorbis.h:19144
// variables: 19
// function calls: 11
int vorbis_bitrate_addblock(vorbis_block* vb)
{
	vorbis_block_internal* vbi; // 19145
	vorbis_dsp_state* vd; // 19146
	private_state* b; // 19147
	bitrate_manager_state* bm; // 19148
	vorbis_info* vi; // 19149
	codec_setup_info* ci; // 19150
	bitrate_manager_info* bi; // 19151
	int choice; // 19153
	long int this_bits; // 19154
	long int min_target_bits; // 19155
	long int max_target_bits; // 19156
	int samples; // 19157
	long int desired_fill; // 19158
	{
		double slew; // 19173
		long int avg_target_bits; // 19174
		double slewlimit; // 19175
		oggpack_bytes(oggpack_buffer* b); // 19198
		oggpack_bytes(oggpack_buffer* b); // 19192
		oggpack_bytes(oggpack_buffer* b); // 19206
	}
	{
		long int maxsize; // 19241
		oggpack_bytes(oggpack_buffer* b); // 19244
		oggpack_writetrunc(oggpack_buffer* b,
					long int bits);  // 19246
		oggpack_bytes(oggpack_buffer* b); // 19247
	}
	{
		long int minsize; // 19250
		oggpack_bytes(oggpack_buffer* b); // 19257
		oggpack_bytes(oggpack_buffer* b); // 19259
	}
	{
		long int avg_target_bits; // 19293
	}
	oggpack_bytes(oggpack_buffer* b); // 19154
	oggpack_bytes(oggpack_buffer* b); // 19230
	oggpack_bytes(oggpack_buffer* b); // 19218
} /* size: 0, variables: 13, inline expansions: 3 (0 bytes) */

// <020D3BF5> ../thirdparty/minivorbis/minivorbis.h:19300
// variables: 5
// function calls: 3
int vorbis_bitrate_flushpacket(vorbis_dsp_state* vd, ogg_packet* op)
{
	private_state* b; // 19301
	bitrate_manager_state* bm; // 19302
	vorbis_block* vb; // 19303
	int choice; // 19304
	{
		vorbis_block_internal* vbi; // 19308
		vorbis_bitrate_managed(vorbis_block* vb); // 19310
		oggpack_get_buffer(oggpack_buffer* b); // 19313
		oggpack_bytes(oggpack_buffer* b); // 19314
	}
} /* size: 0, variables: 4 */

// <020D3BBA> ../thirdparty/minivorbis/minivorbis.h:19389
// variables: 2
long int _get_data(OggVorbis_File* vf)
{
	{
		char* buffer; // 19393
		long int bytes; // 19394
	}
} /* size: 0 */

// <020D3B06> ../thirdparty/minivorbis/minivorbis.h:19403
// function calls: 2
int _seek_helper(OggVorbis_File* vf, ogg_int64_t offset)
{
	ogg_sync_check(ogg_sync_state* oy); // 3125
	ogg_sync_reset(ogg_sync_state* oy); // 19411
} /* size: 121, inline expansions: 2 (29 bytes) */

// <020D393D> ../thirdparty/minivorbis/minivorbis.h:19433
// variables: 5
// function calls: 3
ogg_int64_t _get_next_page(OggVorbis_File* vf, ogg_page* og, ogg_int64_t boundary)
{
	{
		long int more; // 19437
		{
			long int ret; // 19450
			{
				char* buffer; // 19393
				long int bytes; // 19394
				ogg_sync_check(ogg_sync_state* oy); // 2848
				ogg_sync_wrote(ogg_sync_state* oy,
						long int bytes);  // 19395
			}
			_get_data(OggVorbis_File* vf); // 19450
		}
		{
			ogg_int64_t ret; // 19457
		}
	}
} /* size: 325 */

// <020D38DE> ../thirdparty/minivorbis/minivorbis.h:19470
// variables: 3
ogg_int64_t _get_prev_page(OggVorbis_File* vf, ogg_int64_t begin, ogg_page* og)
{
	ogg_int64_t end; // 19471
	ogg_int64_t ret; // 19472
	ogg_int64_t offset; // 19473
} /* size: 0, variables: 3 */

// <020D38A0> ../thirdparty/minivorbis/minivorbis.h:19511
// variable: 1
void _add_serialno(ogg_page* og, long int** serialno_list, int* n)
{
	long int s; // 19512
} /* size: 0, variables: 1 */

// <020D386A> ../thirdparty/minivorbis/minivorbis.h:19525
int _lookup_serialno(long int s, long int* serialno_list, int n)
{
} /* size: 0 */

// <020D3828> ../thirdparty/minivorbis/minivorbis.h:19535
// variable: 1
int _lookup_page_serialno(ogg_page* og, long int* serialno_list, int n)
{
	long int s; // 19536
} /* size: 0, variables: 1 */

// <020D35EF> ../thirdparty/minivorbis/minivorbis.h:19546
// variables: 7
// function calls: 3
ogg_int64_t _get_prev_page_serial(OggVorbis_File* vf, ogg_int64_t begin, long int* serial_list, int serial_n, int* serialno, ogg_int64_t* granpos)
{
	ogg_page og; // 19549
	ogg_int64_t end; // 19550
	ogg_int64_t ret; // 19551
	ogg_int64_t prefoffset; // 19553
	ogg_int64_t offset; // 19554
	ogg_int64_t ret_serialno; // 19555
	ogg_int64_t ret_gran; // 19556
	ogg_page_serialno(const ogg_page* og); // 19572
	_lookup_serialno(long int s,
			long int* serialno_list,
			int n);  // 19525
	_lookup_serialno(long int s,
			long int* serialno_list,
			int n);  // 19581
} /* size: 617, variables: 7, inline expansions: 3 (98 bytes) */

// <020D2D74> ../thirdparty/minivorbis/minivorbis.h:19607
// variables: 8
// function calls: 24
int _fetch_headers(OggVorbis_File* vf, vorbis_info* vi, vorbis_comment* vc, long int** serialno_list, int* serialno_n, ogg_page* og_ptr)
{

bail_header: // 19735
	ogg_page og; // 19610
	ogg_packet op; // 19611
	int i; // 19612
	int ret; // 19612
	int allbos; // 19613
	{
		ogg_int64_t llret; // 19616
	}
	{
		ogg_int64_t llret; // 19662
		ogg_page_serialno(const ogg_page* og); // 19674
	}
	{
		int result; // 19693
		ogg_stream_check(ogg_stream_state* os); // 3218
		ogg_stream_packetout(ogg_stream_state* os,
					ogg_packet* op);  // 19693
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 14333
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 14334
	vorbis_info_init(vorbis_info* vi); // 19622
	memset(void* __dest,
		int __ch,
		size_t __len);  // 14233
	vorbis_comment_init(vorbis_comment* vc); // 19623
	ogg_page_bos(const ogg_page* og); // 19629
	ogg_page_serialno(const ogg_page* og); // 19536
	_lookup_serialno(long int s,
			long int* serialno_list,
			int n);  // 19525
	_lookup_serialno(long int s,
			long int* serialno_list,
			int n);  // 19537
	_lookup_page_serialno(ogg_page* og,
				long int* serialno_list,
				int n);  // 19631
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 19516
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 19518
	_add_serialno(ogg_page* og,
			long int** serialno_list,
			int* n);  // 19640
	ogg_page_serialno(const ogg_page* og); // 19646
	ogg_stream_check(ogg_stream_state* os); // 3157
	ogg_stream_reset(ogg_stream_state* os); // 3158
	ogg_stream_reset_serialno(ogg_stream_state* os,
					int serialno);  // 19646
	ogg_stream_check(ogg_stream_state* os); // 3218
	ogg_stream_packetout(ogg_stream_state* os,
				ogg_packet* op);  // 19649
	ogg_page_serialno(const ogg_page* og); // 19713
	ogg_page_bos(const ogg_page* og); // 19720
} /* size: 1113, variables: 5, goto labels: 1, inline expansions: 21 (598 bytes) */

// <020D2B2C> ../thirdparty/minivorbis/minivorbis.h:19747
// variables: 7
// function calls: 4
ogg_int64_t _initial_pcmoffset(OggVorbis_File* vf, vorbis_info* vi)
{
	ogg_page og; // 19748
	ogg_int64_t accumulated; // 19749
	long int lastblock; // 19750
	int result; // 19751
	int serialno; // 19752
	{
		ogg_packet op; // 19755
		{
			long int thisblock; // 19766
		}
		ogg_page_bos(const ogg_page* og); // 19759
		ogg_page_serialno(const ogg_page* og); // 19760
		ogg_stream_check(ogg_stream_state* os); // 3218
		ogg_stream_packetout(ogg_stream_state* os,
					ogg_packet* op);  // 19764
	}
} /* size: 401, variables: 5 */

// <020D242A> ../thirdparty/minivorbis/minivorbis.h:19794
// variables: 15
// function calls: 12
int _bisect_forward_serialno(OggVorbis_File* vf, ogg_int64_t begin, ogg_int64_t searched, ogg_int64_t end, ogg_int64_t endgran, int endserial, long int* currentno_list, int currentnos, long int m)
{
	ogg_int64_t pcmoffset; // 19803
	ogg_int64_t dataoffset; // 19804
	ogg_int64_t endsearched; // 19805
	ogg_int64_t next; // 19806
	ogg_int64_t searchgran; // 19807
	ogg_page og; // 19808
	ogg_int64_t ret; // 19809
	ogg_int64_t last; // 19809
	int serialno; // 19810
	{
		long int* next_serialno_list; // 19853
		int next_serialnos; // 19854
		vorbis_info vi; // 19855
		vorbis_comment vc; // 19856
		int testserial; // 19857
		{
			ogg_int64_t bisect; // 19862
			ogg_page_serialno(const ogg_page* og); // 19536
			_lookup_serialno(long int s,
					long int* serialno_list,
					int n);  // 19525
			_lookup_serialno(long int s,
					long int* serialno_list,
					int n);  // 19537
			_lookup_page_serialno(ogg_page* og,
						long int* serialno_list,
						int n);  // 19875
		}
	}
	_lookup_serialno(long int s,
			long int* serialno_list,
			int n);  // 19525
	_lookup_serialno(long int s,
			long int* serialno_list,
			int n);  // 19819
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 19836
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 19837
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 19838
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 19839
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 19840
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 19841
} /* size: 1353, variables: 9, inline expansions: 8 (79 bytes) */

// <020D2337> ../thirdparty/minivorbis/minivorbis.h:19924
// function calls: 2
int _make_decode_ready(OggVorbis_File* vf)
{
	vorbis_synthesis_init(vorbis_dsp_state* v,
				vorbis_info* vi);  // 19928
	vorbis_synthesis_init(vorbis_dsp_state* v,
				vorbis_info* vi);  // 19931
} /* size: 179, inline expansions: 2 (27 bytes) */

// <020EDCB8> ../thirdparty/minivorbis/minivorbis.h:19941
// variables: 6
int _open_seekable2(OggVorbis_File* vf)
{
	ogg_int64_t dataoffset; // 19942
	ogg_int64_t end; // 19942
	ogg_int64_t endgran; // 19942
	int endserial; // 19943
	int serialno; // 19944
	ogg_int64_t pcmoffset; // 19950
} /* size: 407, variables: 6 */

// <020D22AF> ../thirdparty/minivorbis/minivorbis.h:19984
void _decode_clear(OggVorbis_File* vf)
{
} /* size: 0 */

// <020ED410> ../thirdparty/minivorbis/minivorbis.h:20001
// variables: 15
// function calls: 13
int _fetch_and_process_packet(OggVorbis_File* vf, int spanp, int readp, ogg_packet* op_in)
{
	ogg_page og; // 20005
	{
		int link; // 20153
		{
			int ret; // 20180
		}
		{
			long int serialno; // 20157
			ogg_page_serialno(const ogg_page* og); // 20157
			ogg_stream_check(ogg_stream_state* os); // 3157
			ogg_stream_reset(ogg_stream_state* os); // 3158
			ogg_stream_reset_serialno(ogg_stream_state* os,
							int serialno);  // 20173
		}
	}
	{
		int ret; // 20012
	}
	{
		int hs; // 20019
		vorbis_synthesis_halfrate_p(vorbis_info* vi); // 20019
		{
			ogg_packet op; // 20022
			ogg_packet* op_ptr; // 20023
			int result; // 20024
			ogg_int64_t granulepos; // 20025
			ogg_stream_check(ogg_stream_state* os); // 3218
			ogg_stream_packetout(ogg_stream_state* os,
						ogg_packet* op);  // 20024
			{
				int oldsamples; // 20042
				vorbis_synthesis_pcmout(vorbis_dsp_state* v,
							float*** pcm);  // 20042
				vorbis_synthesis_pcmout(vorbis_dsp_state* v,
							float*** pcm);  // 20048
			}
			{
				int link; // 20054
				int i; // 20055
				int samples; // 20055
				vorbis_synthesis_pcmout(vorbis_dsp_state* v,
							float*** pcm);  // 20077
			}
		}
	}
	{
		ogg_int64_t ret; // 20093
		ogg_page_serialno(const ogg_page* og); // 20112
		ogg_page_bos(const ogg_page* og); // 20118
		_decode_clear(OggVorbis_File* vf); // 20123
	}
} /* size: 1218, variables: 1 */

// <020D217F> ../thirdparty/minivorbis/minivorbis.h:20001
// variables: 15
int _fetch_and_process_packet(OggVorbis_File* vf, ogg_packet* op_in, int readp, int spanp)
{
	ogg_page og; // 20005
	{
		int ret; // 20012
	}
	{
		int hs; // 20019
		{
			ogg_packet op; // 20022
			ogg_packet* op_ptr; // 20023
			int result; // 20024
			ogg_int64_t granulepos; // 20025
			{
				int oldsamples; // 20042
			}
			{
				int link; // 20054
				int i; // 20055
				int samples; // 20055
			}
		}
	}
	{
		ogg_int64_t ret; // 20093
	}
	{
		int link; // 20153
		{
			long int serialno; // 20157
		}
		{
			int ret; // 20180
		}
	}
} /* size: 0, variables: 1 */

// <020D20F8> ../thirdparty/minivorbis/minivorbis.h:20198
int _fseek64_wrap(FILE* f, ogg_int64_t off, int whence)
{
} /* size: 0 */

// <020D1AEB> ../thirdparty/minivorbis/minivorbis.h:20203
// variables: 5
// function calls: 14
int _ov_open1(void* f, OggVorbis_File* vf, const char* initial, long int ibytes, ov_callbacks callbacks)
{
	int offsettest; // 20205
	long int* serialno_list; // 20206
	int serialno_list_size; // 20207
	int ret; // 20208
	{
		char* buffer; // 20222
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 20223
		ogg_sync_check(ogg_sync_state* oy); // 2848
		ogg_sync_wrote(ogg_sync_state* oy,
				long int bytes);  // 20224
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 20210
	memset(void* __dest,
		int __ch,
		size_t __len);  // 2788
	ogg_sync_init(ogg_sync_state* oy); // 2785
	ogg_sync_init(ogg_sync_state* oy); // 20215
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 20233
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 20234
	ov_clear(OggVorbis_File* vf); // 20241
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 20246
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 20249
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 20251
	_OggAutocastPtr::_OggAutocastPtr(
			void* pp);  // 20252
} /* size: 736, variables: 4, inline expansions: 11 (66 bytes) */

// <020D1ABD> ../thirdparty/minivorbis/minivorbis.h:20262
// variable: 1
int _ov_open2(OggVorbis_File* vf)
{
	{
		int ret; // 20266
	}
} /* size: 0 */

// <020D184B> ../thirdparty/minivorbis/minivorbis.h:20325
// variables: 2
// function calls: 4
int ov_open(FILE* f, OggVorbis_File* vf, const char* initial, long int ibytes)
{
	ov_callbacks callbacks; // 20326
	{
		int ret; // 20266
		ov_clear(OggVorbis_File* vf); // 20269
	}
	_ov_open2(OggVorbis_File* vf); // 20262
	_ov_open2(OggVorbis_File* vf); // 20322
	ov_open_callbacks(void* f,
				OggVorbis_File* vf,
				const char* initial,
				long int ibytes,
				ov_callbacks callbacks);  // 20333
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <020D1770> ../thirdparty/minivorbis/minivorbis.h:20336
// variables: 2
int ov_fopen(const char* path, OggVorbis_File* vf)
{
	int ret; // 20337
	FILE* f; // 20338
} /* size: 0, variables: 2 */

// <020D15AC> ../thirdparty/minivorbis/minivorbis.h:20350
// variables: 2
// function calls: 2
int ov_halfrate(OggVorbis_File* vf, int flag)
{
	int i; // 20351
	{
		ogg_int64_t pos; // 20360
		ov_pcm_seek(OggVorbis_File* vf,
				ogg_int64_t pos);  // 20362
	}
	vorbis_synthesis_halfrate(vorbis_info* vi,
					int flag);  // 20367
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <020D158C> ../thirdparty/minivorbis/minivorbis.h:20375
int ov_halfrate_p(OggVorbis_File* vf)
{
} /* size: 0 */

// <020D153A> ../thirdparty/minivorbis/minivorbis.h:20389
int ov_test_callbacks(void* f, OggVorbis_File* vf, const char* initial, long int ibytes, ov_callbacks callbacks)
{
} /* size: 0 */

// <020D1422> ../thirdparty/minivorbis/minivorbis.h:20395
// variable: 1
// function call: 1
int ov_test(FILE* f, OggVorbis_File* vf, const char* initial, long int ibytes)
{
	ov_callbacks callbacks; // 20396
	ov_test_callbacks(void* f,
				OggVorbis_File* vf,
				const char* initial,
				long int ibytes,
				ov_callbacks callbacks);  // 20403
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <020D1334> ../thirdparty/minivorbis/minivorbis.h:20406
// variable: 1
// function calls: 3
int ov_test_open(OggVorbis_File* vf)
{
	{
		int ret; // 20266
		ov_clear(OggVorbis_File* vf); // 20269
	}
	_ov_open2(OggVorbis_File* vf); // 20262
	_ov_open2(OggVorbis_File* vf); // 20408
} /* size: 0, inline expansions: 2 (0 bytes) */

// <020D12FF> ../thirdparty/minivorbis/minivorbis.h:20412
long int ov_streams(OggVorbis_File* vf)
{
} /* size: 0 */

// <020D12CA> ../thirdparty/minivorbis/minivorbis.h:20417
long int ov_seekable(OggVorbis_File* vf)
{
} /* size: 0 */

// <020D116E> ../thirdparty/minivorbis/minivorbis.h:20430
// variables: 5
// function calls: 3
long int ov_bitrate(OggVorbis_File* vf, int i)
{
	{
		ogg_int64_t bits; // 20435
		int i; // 20436
		float br; // 20437
		{
			double acc; // 20541
			int i; // 20542
		}
		ov_time_total(OggVorbis_File* vf,
				int i);  // 20537
		ov_time_total(OggVorbis_File* vf,
				int i);  // 20444
		rint(float __x); // 20445
	}
} /* size: 0 */

// <020D110F> ../thirdparty/minivorbis/minivorbis.h:20472
// variables: 2
long int ov_bitrate_instant(OggVorbis_File* vf)
{
	int link; // 20473
	long int ret; // 20474
} /* size: 0, variables: 2 */

// <020D10C7> ../thirdparty/minivorbis/minivorbis.h:20484
long int ov_serialnumber(OggVorbis_File* vf, int i)
{
} /* size: 0 */

// <020D1082> ../thirdparty/minivorbis/minivorbis.h:20499
// variables: 2
ogg_int64_t ov_raw_total(OggVorbis_File* vf, int i)
{
	{
		ogg_int64_t acc; // 20503
		int i; // 20504
	}
} /* size: 0 */

// <020D06F0> ../thirdparty/minivorbis/minivorbis.h:20558
// variables: 15
// function calls: 26
int ov_raw_seek(OggVorbis_File* vf, ogg_int64_t pos)
{
	ogg_stream_state work_os; // 20559
	{
		ogg_page og; // 20605
		ogg_packet op; // 20606
		int lastblock; // 20607
		int accblock; // 20608
		int thisblock; // 20609
		int lastflag; // 20610
		int firstflag; // 20611
		ogg_int64_t pagepos; // 20612
		{
			int result; // 20622
			{
				int i; // 20647
				int link; // 20647
				ogg_int64_t granulepos; // 20648
			}
			ogg_stream_check(ogg_stream_state* os); // 3218
			ogg_stream_packetout(ogg_stream_state* os,
						ogg_packet* op);  // 20622
			ogg_stream_check(ogg_stream_state* os); // 3218
			ogg_stream_packetout(ogg_stream_state* os,
						ogg_packet* op);  // 20629
			ogg_stream_check(ogg_stream_state* os); // 3218
			ogg_stream_packetout(ogg_stream_state* os,
						ogg_packet* op);  // 20641
			ogg_stream_check(ogg_stream_state* os); // 3218
			ogg_stream_packetout(ogg_stream_state* os,
						ogg_packet* op);  // 20660
		}
		{
			int link; // 20693
			long int serialno; // 20694
			ogg_page_serialno(const ogg_page* og); // 20694
			ogg_stream_check(ogg_stream_state* os); // 3157
			ogg_stream_reset(ogg_stream_state* os); // 3158
			ogg_stream_reset_serialno(ogg_stream_state* os,
							int serialno);  // 20704
			ogg_stream_check(ogg_stream_state* os); // 3157
			ogg_stream_reset(ogg_stream_state* os); // 3158
			ogg_stream_reset_serialno(ogg_stream_state* os,
							int serialno);  // 20705
		}
		ogg_stream_check(ogg_stream_state* os); // 3136
		ogg_stream_reset(ogg_stream_state* os); // 20615
		ogg_page_eos(const ogg_page* og); // 20712
		ogg_page_serialno(const ogg_page* og); // 20678
		ogg_page_bos(const ogg_page* og); // 20684
		_decode_clear(OggVorbis_File* vf); // 20686
	}
	_decode_clear(OggVorbis_File* vf); // 20570
	ogg_stream_check(ogg_stream_state* os); // 3157
	ogg_stream_reset(ogg_stream_state* os); // 3158
	ogg_stream_reset_serialno(ogg_stream_state* os,
					int serialno);  // 20578
	_decode_clear(OggVorbis_File* vf); // 20585
} /* size: 1782, variables: 1, inline expansions: 5 (291 bytes) */

// <020CFE61> ../thirdparty/minivorbis/minivorbis.h:20729
// variables: 15
// function calls: 19
int ov_pcm_seek_page(OggVorbis_File* vf, ogg_int64_t pos)
{

seek_error: // 20990
	int link; // 20730
	ogg_int64_t result; // 20731
	ogg_int64_t total; // 20732
	{
		ogg_int64_t end; // 20758
		ogg_int64_t begin; // 20759
		ogg_int64_t begintime; // 20760
		ogg_int64_t endtime; // 20761
		ogg_int64_t target; // 20762
		ogg_int64_t best; // 20763
		int got_page; // 20764
		ogg_page og; // 20766
		{
			ogg_int64_t bisect; // 20781
			{
				ogg_int64_t granulepos; // 20821
				ogg_page_serialno(const ogg_page* og); // 20826
			}
		}
		{
			ogg_page og; // 20918
			ogg_packet op; // 20919
			_decode_clear(OggVorbis_File* vf); // 20930
			ogg_stream_check(ogg_stream_state* os); // 3157
			ogg_stream_reset(ogg_stream_state* os); // 3158
			ogg_stream_reset_serialno(ogg_stream_state* os,
							int serialno);  // 20940
			ogg_stream_check(ogg_stream_state* os); // 3223
			ogg_stream_packetpeek(ogg_stream_state* os,
						ogg_packet* op);  // 20945
			ogg_stream_check(ogg_stream_state* os); // 3218
			ogg_stream_packetout(ogg_stream_state* os,
						ogg_packet* op);  // 20976
			memset(void* __dest,
				int __ch,
				size_t __len);  // 19484
			_get_prev_page(OggVorbis_File* vf,
					ogg_int64_t begin,
					ogg_page* og);  // 20957
			ogg_page_serialno(const ogg_page* og); // 20959
			ogg_page_continued(const ogg_page* og); // 20961
		}
		ogg_page_serialno(const ogg_page* og); // 20887
		_decode_clear(OggVorbis_File* vf); // 20897
		ogg_stream_check(ogg_stream_state* os); // 3157
		ogg_stream_reset(ogg_stream_state* os); // 3158
		ogg_stream_reset_serialno(ogg_stream_state* os,
						int serialno);  // 20907
	}
	_decode_clear(OggVorbis_File* vf); // 20993
} /* size: 2849, variables: 3, goto labels: 1, inline expansions: 1 (30 bytes) */

// <020CFD8B> ../thirdparty/minivorbis/minivorbis.h:21000
// variables: 12
int ov_pcm_seek(OggVorbis_File* vf, ogg_int64_t pos)
{
	int thisblock; // 21001
	int lastblock; // 21001
	int ret; // 21002
	{
		ogg_packet op; // 21010
		ogg_page og; // 21011
		int ret; // 21013
		{
			int i; // 21036
		}
		{
			long int serialno; // 21054
			int link; // 21055
		}
	}
	{
		int hs; // 21081
		{
			ogg_int64_t target; // 21083
			long int samples; // 21084
		}
	}
} /* size: 0, variables: 3 */

// <020CFA91> ../thirdparty/minivorbis/minivorbis.h:21130
// variables: 5
// function calls: 2
int ov_time_seek_page(OggVorbis_File* vf, double seconds)
{
	int link; // 21133
	ogg_int64_t pcm_total; // 21134
	double time_total; // 21135
	{
		double addsec; // 21143
		ov_time_total(OggVorbis_File* vf,
				int i);  // 20537
		ov_time_total(OggVorbis_File* vf,
				int i);  // 21143
	}
	{
		ogg_int64_t target; // 21153
	}
} /* size: 0, variables: 3 */

// <020CFA5C> ../thirdparty/minivorbis/minivorbis.h:21160
ogg_int64_t ov_raw_tell(OggVorbis_File* vf)
{
} /* size: 0 */

// <020CF84A> ../thirdparty/minivorbis/minivorbis.h:21172
// variables: 7
// function calls: 6
double ov_time_tell(OggVorbis_File* vf)
{
	int link; // 21173
	ogg_int64_t pcm_total; // 21174
	double time_total; // 21175
	{
		ogg_int64_t acc; // 20522
		int i; // 20523
	}
	ov_pcm_total(OggVorbis_File* vf,
			int i);  // 20518
	ov_pcm_total(OggVorbis_File* vf,
			int i);  // 21179
	{
		double acc; // 20541
		int i; // 20542
	}
	ov_time_total(OggVorbis_File* vf,
			int i);  // 20537
	ov_time_total(OggVorbis_File* vf,
			int i);  // 21180
	ov_time_total(OggVorbis_File* vf,
			int i);  // 20537
	ov_time_total(OggVorbis_File* vf,
			int i);  // 21185
} /* size: 0, variables: 3, inline expansions: 6 (0 bytes) */

// <020CF7D9> ../thirdparty/minivorbis/minivorbis.h:21219
vorbis_comment* ov_comment(OggVorbis_File* vf, int link)
{
} /* size: 0 */

// <020CF7AC> ../thirdparty/minivorbis/minivorbis.h:21236
// variables: 2
int host_is_big_endian(void)
{
	ogg_int32_t pattern; // 21237
	unsigned char* bytewise; // 21238
} /* size: 0, variables: 2 */

// <020CF1CF> ../thirdparty/minivorbis/minivorbis.h:21279
// variables: 18
// function calls: 16
long int ov_read_filter(OggVorbis_File* vf, char* buffer, int length, int bigendianp, int word, int sgned, int* bitstream, void (*filter)(float* *, long int, long int, void *), void* filter_param)
{
	int i; // 21282
	int j; // 21282
	int host_endian; // 21283
	int hs; // 21284
	float** pcm; // 21286
	long int samples; // 21287
	{
		int ret; // 21300
	}
	{
		long int channels; // 21313
		long int bytespersample; // 21314
		vorbis_fpu_control fpu; // 21315
		{
			int val; // 21329
			{
				int off; // 21331
				_mm_load_sd(const double* __P); // 4562
				_mm_cvtsd_si32(__m128d __A); // 4562
				vorbis_ftoi(double f); // 21335
			}
			{
				int off; // 21342
				{
					float* src; // 21349
					short int* dest; // 21350
					_mm_load_sd(const double* __P); // 4562
					_mm_cvtsd_si32(__m128d __A); // 4562
					vorbis_ftoi(double f); // 21352
				}
				{
					float* src; // 21365
					short int* dest; // 21366
					_mm_load_sd(const double* __P); // 4562
					_mm_cvtsd_si32(__m128d __A); // 4562
					vorbis_ftoi(double f); // 21368
				}
				{
					int val; // 21393
				}
				_mm_load_sd(const double* __P); // 4562
				_mm_cvtsd_si32(__m128d __A); // 4562
				vorbis_ftoi(double f); // 21383
			}
		}
		ov_info(OggVorbis_File* vf,
			int link);  // 21201
		ov_info(OggVorbis_File* vf,
			int link);  // 21313
		vorbis_synthesis_read(vorbis_dsp_state* v,
					int n);  // 21410
		vorbis_synthesis_halfrate_p(vorbis_info* vi); // 21411
	}
} /* size: 1122, variables: 6 */

// <020CEF43> ../thirdparty/minivorbis/minivorbis.h:21439
// variables: 4
// function calls: 2
long int ov_read_float(OggVorbis_File* vf, float*** pcm_channels, int length, int* bitstream)
{
	{
		float** pcm; // 21446
		long int samples; // 21447
		{
			int hs; // 21449
			vorbis_synthesis_halfrate_p(vorbis_info* vi); // 21449
			vorbis_synthesis_read(vorbis_dsp_state* v,
						int n);  // 21452
		}
	}
	{
		int ret; // 21462
	}
} /* size: 0 */

// <020CED99> ../thirdparty/minivorbis/minivorbis.h:21472
// variables: 10
void _ov_splice(float** pcm, float** lappcm, int n1, int n2, int ch1, int ch2, const float* w1, const float* w2)
{
	int i; // 21476
	int j; // 21476
	const float* w; // 21477
	int n; // 21478
	{
		float* s; // 21487
		float* d; // 21488
		{
			float wd; // 21491
			float ws; // 21492
		}
	}
	{
		float* d; // 21498
		{
			float wd; // 21500
		}
	}
} /* size: 0, variables: 4 */

// <020CED6B> ../thirdparty/minivorbis/minivorbis.h:21508
// variable: 1
int _ov_initset(OggVorbis_File* vf)
{
	{
		int ret; // 21513
	}
} /* size: 0 */

// <020CEC7F> ../thirdparty/minivorbis/minivorbis.h:21523
// variables: 2
// function call: 1
int _ov_initprime(OggVorbis_File* vf)
{
	vorbis_dsp_state* vd; // 21524
	{
		int ret; // 21531
	}
	vorbis_synthesis_pcmout(vorbis_dsp_state* v,
				float*** pcm);  // 21527
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <020CE99E> ../thirdparty/minivorbis/minivorbis.h:21541
// variables: 6
// function calls: 4
void _ov_getlap(OggVorbis_File* vf, vorbis_info* vi, vorbis_dsp_state* vd, float** lappcm, int lapsize)
{
	int lapcount; // 21543
	int i; // 21543
	float** pcm; // 21544
	{
		int samples; // 21548
		{
			int ret; // 21557
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 21552
		vorbis_synthesis_read(vorbis_dsp_state* v,
					int n);  // 21554
	}
	{
		int samples; // 21565
		memset(void* __dest,
			int __ch,
			size_t __len);  // 21568
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 21573
	}
} /* size: 0, variables: 3 */

// <020CE409> ../thirdparty/minivorbis/minivorbis.h:21581
// variables: 13
// function calls: 15
int ov_crosslap(OggVorbis_File* vf1, OggVorbis_File* vf2)
{
	vorbis_info* vi1; // 21582
	vorbis_info* vi2; // 21582
	float** lappcm; // 21583
	float** pcm; // 21584
	const float* w1; // 21585
	const float* w2; // 21585
	int n1; // 21586
	int n2; // 21586
	int i; // 21586
	int ret; // 21586
	int hs1; // 21586
	int hs2; // 21586
	{
		int ret; // 21513
	}
	_ov_initset(OggVorbis_File* vf); // 21596
	ov_info(OggVorbis_File* vf,
		int link);  // 21201
	ov_info(OggVorbis_File* vf,
		int link);  // 21601
	ov_info(OggVorbis_File* vf,
		int link);  // 21201
	ov_info(OggVorbis_File* vf,
		int link);  // 21602
	vorbis_synthesis_halfrate_p(vorbis_info* vi); // 20377
	ov_halfrate_p(OggVorbis_File* vf); // 21603
	vorbis_synthesis_halfrate_p(vorbis_info* vi); // 20377
	ov_halfrate_p(OggVorbis_File* vf); // 21604
	vorbis_info_blocksize(vorbis_info* vi,
				int zo);  // 21607
	vorbis_info_blocksize(vorbis_info* vi,
				int zo);  // 21608
	_vorbis_window_get(int n); // 9549
	vorbis_window(vorbis_dsp_state* v,
			int W);  // 21609
	_vorbis_window_get(int n); // 9549
	vorbis_window(vorbis_dsp_state* v,
			int W);  // 21610
} /* size: 0, variables: 12, inline expansions: 15 (0 bytes) */

// <020CDE93> ../thirdparty/minivorbis/minivorbis.h:21634
// variables: 13
// function calls: 13
int _ov_64_seek_lap(OggVorbis_File* vf, ogg_int64_t pos, int (*localseek)(OggVorbis_File *, ogg_int64_t))
{
	vorbis_info* vi; // 21636
	float** lappcm; // 21637
	float** pcm; // 21638
	const float* w1; // 21639
	const float* w2; // 21639
	int n1; // 21640
	int n2; // 21640
	int ch1; // 21640
	int ch2; // 21640
	int hs; // 21640
	int i; // 21641
	int ret; // 21641
	{
		int ret; // 21513
	}
	_ov_initset(OggVorbis_File* vf); // 21644
	ov_info(OggVorbis_File* vf,
		int link);  // 21201
	ov_info(OggVorbis_File* vf,
		int link);  // 21646
	vorbis_synthesis_halfrate_p(vorbis_info* vi); // 20377
	ov_halfrate_p(OggVorbis_File* vf); // 21647
	vorbis_info_blocksize(vorbis_info* vi,
				int zo);  // 21650
	_vorbis_window_get(int n); // 9549
	vorbis_window(vorbis_dsp_state* v,
			int W);  // 21651
	ov_info(OggVorbis_File* vf,
		int link);  // 21201
	ov_info(OggVorbis_File* vf,
		int link);  // 21668
	vorbis_info_blocksize(vorbis_info* vi,
				int zo);  // 21670
	_vorbis_window_get(int n); // 9549
	vorbis_window(vorbis_dsp_state* v,
			int W);  // 21671
} /* size: 0, variables: 12, inline expansions: 13 (0 bytes) */

// <020CDE19> ../thirdparty/minivorbis/minivorbis.h:21683
int ov_raw_seek_lap(OggVorbis_File* vf, ogg_int64_t pos)
{
} /* size: 0 */

// <020CDD9F> ../thirdparty/minivorbis/minivorbis.h:21687
int ov_pcm_seek_lap(OggVorbis_File* vf, ogg_int64_t pos)
{
} /* size: 0 */

// <020CDD25> ../thirdparty/minivorbis/minivorbis.h:21691
int ov_pcm_seek_page_lap(OggVorbis_File* vf, ogg_int64_t pos)
{
} /* size: 0 */

// <020CD7AD> ../thirdparty/minivorbis/minivorbis.h:21695
// variables: 13
// function calls: 13
int _ov_d_seek_lap(OggVorbis_File* vf, double pos, int (*localseek)(OggVorbis_File *, double))
{
	vorbis_info* vi; // 21697
	float** lappcm; // 21698
	float** pcm; // 21699
	const float* w1; // 21700
	const float* w2; // 21700
	int n1; // 21701
	int n2; // 21701
	int ch1; // 21701
	int ch2; // 21701
	int hs; // 21701
	int i; // 21702
	int ret; // 21702
	{
		int ret; // 21513
	}
	_ov_initset(OggVorbis_File* vf); // 21705
	ov_info(OggVorbis_File* vf,
		int link);  // 21201
	ov_info(OggVorbis_File* vf,
		int link);  // 21707
	vorbis_synthesis_halfrate_p(vorbis_info* vi); // 20377
	ov_halfrate_p(OggVorbis_File* vf); // 21708
	vorbis_info_blocksize(vorbis_info* vi,
				int zo);  // 21711
	_vorbis_window_get(int n); // 9549
	vorbis_window(vorbis_dsp_state* v,
			int W);  // 21712
	ov_info(OggVorbis_File* vf,
		int link);  // 21201
	ov_info(OggVorbis_File* vf,
		int link);  // 21729
	vorbis_info_blocksize(vorbis_info* vi,
				int zo);  // 21731
	_vorbis_window_get(int n); // 9549
	vorbis_window(vorbis_dsp_state* v,
			int W);  // 21732
} /* size: 0, variables: 12, inline expansions: 13 (0 bytes) */

// <020CD731> ../thirdparty/minivorbis/minivorbis.h:21744
int ov_time_seek_lap(OggVorbis_File* vf, double pos)
{
} /* size: 0 */

// <020CD6AF> ../thirdparty/minivorbis/minivorbis.h:21748
int ov_time_seek_page_lap(OggVorbis_File* vf, double pos)
{
} /* size: 0 */

