
//
// src/verstable.h
//
//	referenced by: libengine2.so
//
//	functions: 90
//	structs: 14
//

// <06CF4AA1> src/verstable.h:468
inline uint16_t vt_hashfrag(uint64_t hash)
{
} /* size: 0 */

// <06CF4A81> src/verstable.h:476
inline size_t vt_quadratic(uint16_t displacement)
{
} /* size: 0 */

// <06BB1AE2> src/verstable.h:550
inline uint64_t vt_hash_integer(uint64_t key)
{
} /* size: 0 */

// <06CF4A4B> src/verstable.h:564
// variable: 1
inline void vt_wymum(uint64_t* a, uint64_t* b)
{
	__int128 unsigned r; // 567
} /* size: 0, variables: 1 */

// <06CF4A22> src/verstable.h:592
inline uint64_t vt_wymix(uint64_t a, uint64_t b)
{
} /* size: 0 */

// <06CF49F9> src/verstable.h:598
// variable: 1
inline uint64_t vt_wyr8(const unsigned char* p)
{
	uint64_t v; // 600
} /* size: 0, variables: 1 */

// <06CF49D0> src/verstable.h:605
// variable: 1
inline uint64_t vt_wyr4(const unsigned char* p)
{
	uint32_t v; // 607
} /* size: 0, variables: 1 */

// <06CF49A7> src/verstable.h:612
inline uint64_t vt_wyr3(const unsigned char* p, size_t k)
{
} /* size: 0 */

// <06CF5C77> src/verstable.h:617
// variables: 7
// function calls: 40
size_t vt_wyhash(const void* key, size_t len)
{
	const unsigned char* p; // 619
	uint64_t seed; // 620
	uint64_t a; // 621
	uint64_t b; // 622
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 608
	vt_wyr4(const unsigned char* p); // 627
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 608
	vt_wyr4(const unsigned char* p); // 628
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 608
	vt_wyr4(const unsigned char* p); // 627
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 608
	vt_wyr4(const unsigned char* p); // 628
	{
		size_t i; // 643
		{
			uint64_t see1; // 646
			uint64_t see2; // 647
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 601
			vt_wyr8(const unsigned char* p); // 649
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 601
			vt_wyr8(const unsigned char* p); // 649
			vt_wymum(uint64_t* a,
				uint64_t* b);  // 594
			vt_wymix(uint64_t a,
				uint64_t b);  // 649
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 601
			vt_wyr8(const unsigned char* p); // 650
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 601
			vt_wyr8(const unsigned char* p); // 650
			vt_wymum(uint64_t* a,
				uint64_t* b);  // 594
			vt_wymix(uint64_t a,
				uint64_t b);  // 650
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 601
			vt_wyr8(const unsigned char* p); // 651
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 601
			vt_wyr8(const unsigned char* p); // 651
			vt_wymum(uint64_t* a,
				uint64_t* b);  // 594
			vt_wymix(uint64_t a,
				uint64_t b);  // 651
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 601
		vt_wyr8(const unsigned char* p); // 661
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 601
		vt_wyr8(const unsigned char* p); // 661
		vt_wymum(uint64_t* a,
			uint64_t* b);  // 594
		vt_wymix(uint64_t a,
			uint64_t b);  // 661
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 601
		vt_wyr8(const unsigned char* p); // 666
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 601
		vt_wyr8(const unsigned char* p); // 667
	}
	vt_wyr3(const unsigned char* p,
		size_t k);  // 632
	vt_wymum(uint64_t* a,
		uint64_t* b);  // 672
	vt_wymum(uint64_t* a,
		uint64_t* b);  // 594
	vt_wymix(uint64_t a,
		uint64_t b);  // 673
} /* size: 0, variables: 4, inline expansions: 12 (0 bytes) */

// <06CF491D> src/verstable.h:617
// variables: 7
inline size_t vt_wyhash(const void* key, size_t len)
{
	const unsigned char* p; // 619
	uint64_t seed; // 620
	uint64_t a; // 621
	uint64_t b; // 622
	{
		size_t i; // 643
		{
			uint64_t see1; // 646
			uint64_t see2; // 647
		}
	}
} /* size: 0, variables: 4 */

// <06B9FF5D> src/verstable.h:832
// member variables: 2
// struct size: 16
typedef struct {
	uint64_t key; /* 0 8 */
	int val; /* 8 4 */
} b3VertexMap_bucket;

// <06CEED0F> src/verstable.h:832
// member variables: 2
// struct size: 16
typedef struct {
	const b3Hull * key; /* 0 8 */
	int val; /* 8 4 */
} b3HullMap_bucket;

// <06CEEE0E> src/verstable.h:832
// member variables: 2
// struct size: 16
typedef struct {
	const b3MeshData * key; /* 0 8 */
	int val; /* 8 4 */
} b3MeshMap_bucket;

// <06CEEF0D> src/verstable.h:832
// member variables: 2
// struct size: 16
typedef struct {
	const b3SurfaceMaterial * key; /* 0 8 */
	int val; /* 8 4 */
} b3MaterialMap_bucket;

// <06B9FF99> src/verstable.h:840
// member variables: 4
// struct size: 32
typedef struct {
	b3VertexMap_bucket * data; /* 0 8 */
	uint16_t * metadatum; /* 8 8 */
	uint16_t * metadata_end; /* 16 8 */
	size_t home_bucket; /* 24 8 */
} b3VertexMap_itr;

// <06BA16B4> src/verstable.h:840
// member variables: 4
// struct size: 32
typedef struct {
	b3EdgeMap_bucket * data; /* 0 8 */
	uint16_t * metadatum; /* 8 8 */
	uint16_t * metadata_end; /* 16 8 */
	size_t home_bucket; /* 24 8 */
} b3EdgeMap_itr;

// <06CEED4B> src/verstable.h:840
// member variables: 4
// struct size: 32
typedef struct {
	b3HullMap_bucket * data; /* 0 8 */
	uint16_t * metadatum; /* 8 8 */
	uint16_t * metadata_end; /* 16 8 */
	size_t home_bucket; /* 24 8 */
} b3HullMap_itr;

// <06CEEE4A> src/verstable.h:840
// member variables: 4
// struct size: 32
typedef struct {
	b3MeshMap_bucket * data; /* 0 8 */
	uint16_t * metadatum; /* 8 8 */
	uint16_t * metadata_end; /* 16 8 */
	size_t home_bucket; /* 24 8 */
} b3MeshMap_itr;

// <06CEEF49> src/verstable.h:840
// member variables: 4
// struct size: 32
typedef struct {
	b3MaterialMap_bucket * data; /* 0 8 */
	uint16_t * metadatum; /* 8 8 */
	uint16_t * metadata_end; /* 16 8 */
	size_t home_bucket; /* 24 8 */
} b3MaterialMap_itr;

// <06B9FFFB> src/verstable.h:851
// member variables: 4
// struct size: 32
typedef struct {
	size_t key_count; /* 0 8 */
	size_t buckets_mask; /* 8 8 */
	b3VertexMap_bucket * buckets; /* 16 8 */
	uint16_t * metadata; /* 24 8 */
} b3VertexMap;

// <06BA1716> src/verstable.h:851
// member variables: 4
// struct size: 32
typedef struct {
	size_t key_count; /* 0 8 */
	size_t buckets_mask; /* 8 8 */
	b3EdgeMap_bucket * buckets; /* 16 8 */
	uint16_t * metadata; /* 24 8 */
} b3EdgeMap;

// <06CEEDAD> src/verstable.h:851
// member variables: 4
// struct size: 32
typedef struct {
	size_t key_count; /* 0 8 */
	size_t buckets_mask; /* 8 8 */
	b3HullMap_bucket * buckets; /* 16 8 */
	uint16_t * metadata; /* 24 8 */
} b3HullMap;

// <06CEEEAC> src/verstable.h:851
// member variables: 4
// struct size: 32
typedef struct {
	size_t key_count; /* 0 8 */
	size_t buckets_mask; /* 8 8 */
	b3MeshMap_bucket * buckets; /* 16 8 */
	uint16_t * metadata; /* 24 8 */
} b3MeshMap;

// <06CEEFAB> src/verstable.h:851
// member variables: 4
// struct size: 32
typedef struct {
	size_t key_count; /* 0 8 */
	size_t buckets_mask; /* 8 8 */
	b3MaterialMap_bucket * buckets; /* 16 8 */
	uint16_t * metadata; /* 24 8 */
} b3MaterialMap;

// <06CF4901> src/verstable.h:1031
inline void b3HullMap_init(b3HullMap* table)
{
} /* size: 0 */

// <06CF4228> src/verstable.h:1031
inline void b3MeshMap_init(b3MeshMap* table)
{
} /* size: 0 */

// <06CF3B49> src/verstable.h:1031
inline void b3MaterialMap_init(b3MaterialMap* table)
{
} /* size: 0 */

// <06BB1A99> src/verstable.h:1031
inline void b3VertexMap_init(b3VertexMap* table)
{
} /* size: 0 */

// <06BAE939> src/verstable.h:1031
inline void b3EdgeMap_init(b3EdgeMap* table)
{
} /* size: 0 */

// <06CF48E1> src/verstable.h:1057
inline size_t b3HullMap_metadata_offset(b3HullMap* table)
{
} /* size: 0 */

// <06CF4208> src/verstable.h:1057
inline size_t b3MeshMap_metadata_offset(b3MeshMap* table)
{
} /* size: 0 */

// <06CF3B29> src/verstable.h:1057
inline size_t b3MaterialMap_metadata_offset(b3MaterialMap* table)
{
} /* size: 0 */

// <06BB1A79> src/verstable.h:1057
inline size_t b3VertexMap_metadata_offset(b3VertexMap* table)
{
} /* size: 0 */

// <06BAE919> src/verstable.h:1057
inline size_t b3EdgeMap_metadata_offset(b3EdgeMap* table)
{
} /* size: 0 */

// <06CF48C1> src/verstable.h:1066
inline size_t b3HullMap_total_alloc_size(b3HullMap* table)
{
} /* size: 0 */

// <06CF41E8> src/verstable.h:1066
inline size_t b3MeshMap_total_alloc_size(b3MeshMap* table)
{
} /* size: 0 */

// <06CF3B09> src/verstable.h:1066
inline size_t b3MaterialMap_total_alloc_size(b3MaterialMap* table)
{
} /* size: 0 */

// <06BB1A59> src/verstable.h:1066
inline size_t b3VertexMap_total_alloc_size(b3VertexMap* table)
{
} /* size: 0 */

// <06BAE8F9> src/verstable.h:1066
inline size_t b3EdgeMap_total_alloc_size(b3EdgeMap* table)
{
} /* size: 0 */

// <06CF489B> src/verstable.h:1114
inline size_t b3HullMap_bucket_count(const b3HullMap* table)
{
} /* size: 0 */

// <06CF41C2> src/verstable.h:1114
inline size_t b3MeshMap_bucket_count(const b3MeshMap* table)
{
} /* size: 0 */

// <06CF3AE3> src/verstable.h:1114
inline size_t b3MaterialMap_bucket_count(const b3MaterialMap* table)
{
} /* size: 0 */

// <06BB1A39> src/verstable.h:1114
inline size_t b3VertexMap_bucket_count(const b3VertexMap* table)
{
} /* size: 0 */

// <06BAE8D9> src/verstable.h:1114
inline size_t b3EdgeMap_bucket_count(const b3EdgeMap* table)
{
} /* size: 0 */

// <06CF487B> src/verstable.h:1121
inline bool b3HullMap_is_end(b3HullMap_itr itr)
{
} /* size: 0 */

// <06CF41A2> src/verstable.h:1121
inline bool b3MeshMap_is_end(b3MeshMap_itr itr)
{
} /* size: 0 */

// <06CF3AC3> src/verstable.h:1121
inline bool b3MaterialMap_is_end(b3MaterialMap_itr itr)
{
} /* size: 0 */

// <06BB1A19> src/verstable.h:1121
inline bool b3VertexMap_is_end(b3VertexMap_itr itr)
{
} /* size: 0 */

// <06BAE8B9> src/verstable.h:1121
inline bool b3EdgeMap_is_end(b3EdgeMap_itr itr)
{
} /* size: 0 */

// <06CF4827> src/verstable.h:1132
// variable: 1
inline bool b3HullMap_find_first_empty(b3HullMap* table, size_t home_bucket, size_t* empty, uint16_t* displacement)
{
	size_t linear_dispacement; // 1140
} /* size: 0, variables: 1 */

// <06CF414E> src/verstable.h:1132
// variable: 1
inline bool b3MeshMap_find_first_empty(b3MeshMap* table, size_t home_bucket, size_t* empty, uint16_t* displacement)
{
	size_t linear_dispacement; // 1140
} /* size: 0, variables: 1 */

// <06CF3A69> src/verstable.h:1132
// variable: 1
inline bool b3MaterialMap_find_first_empty(b3MaterialMap* table, size_t home_bucket, size_t* empty, uint16_t* displacement)
{
	size_t linear_dispacement; // 1140
} /* size: 0, variables: 1 */

// <06BB19C5> src/verstable.h:1132
// variable: 1
inline bool b3VertexMap_find_first_empty(b3VertexMap* table, size_t home_bucket, size_t* empty, uint16_t* displacement)
{
	size_t linear_dispacement; // 1140
} /* size: 0, variables: 1 */

// <06BAE85F> src/verstable.h:1132
// variable: 1
inline bool b3EdgeMap_find_first_empty(b3EdgeMap* table, size_t home_bucket, size_t* empty, uint16_t* displacement)
{
	size_t linear_dispacement; // 1140
} /* size: 0, variables: 1 */

// <06CF47D1> src/verstable.h:1159
// variables: 2
inline size_t b3HullMap_find_insert_location_in_chain(b3HullMap* table, size_t home_bucket, uint16_t displacement_to_empty)
{
	size_t candidate; // 1165
	{
		uint16_t displacement; // 1168
	}
} /* size: 0, variables: 1 */

// <06CF40F8> src/verstable.h:1159
// variables: 2
inline size_t b3MeshMap_find_insert_location_in_chain(b3MeshMap* table, size_t home_bucket, uint16_t displacement_to_empty)
{
	size_t candidate; // 1165
	{
		uint16_t displacement; // 1168
	}
} /* size: 0, variables: 1 */

// <06CF3A13> src/verstable.h:1159
// variables: 2
inline size_t b3MaterialMap_find_insert_location_in_chain(b3MaterialMap* table, size_t home_bucket, uint16_t displacement_to_empty)
{
	size_t candidate; // 1165
	{
		uint16_t displacement; // 1168
	}
} /* size: 0, variables: 1 */

// <06BB196F> src/verstable.h:1159
// variables: 2
inline size_t b3VertexMap_find_insert_location_in_chain(b3VertexMap* table, size_t home_bucket, uint16_t displacement_to_empty)
{
	size_t candidate; // 1165
	{
		uint16_t displacement; // 1168
	}
} /* size: 0, variables: 1 */

// <06BAE809> src/verstable.h:1159
// variables: 2
inline size_t b3EdgeMap_find_insert_location_in_chain(b3EdgeMap* table, size_t home_bucket, uint16_t displacement_to_empty)
{
	size_t candidate; // 1165
	{
		uint16_t displacement; // 1168
	}
} /* size: 0, variables: 1 */

// <06CF4761> src/verstable.h:1188
// variables: 5
inline bool b3HullMap_evict(b3HullMap* table, size_t bucket)
{
	size_t home_bucket; // 1191
	size_t prev; // 1192
	size_t empty; // 1209
	uint16_t displacement; // 1210
	{
		size_t next; // 1195
	}
} /* size: 0, variables: 4 */

// <06CF4088> src/verstable.h:1188
// variables: 5
inline bool b3MeshMap_evict(b3MeshMap* table, size_t bucket)
{
	size_t home_bucket; // 1191
	size_t prev; // 1192
	size_t empty; // 1209
	uint16_t displacement; // 1210
	{
		size_t next; // 1195
	}
} /* size: 0, variables: 4 */

// <06CF39A3> src/verstable.h:1188
// variables: 5
inline bool b3MaterialMap_evict(b3MaterialMap* table, size_t bucket)
{
	size_t home_bucket; // 1191
	size_t prev; // 1192
	size_t empty; // 1209
	uint16_t displacement; // 1210
	{
		size_t next; // 1195
	}
} /* size: 0, variables: 4 */

// <06BB18FF> src/verstable.h:1188
// variables: 5
inline bool b3VertexMap_evict(b3VertexMap* table, size_t bucket)
{
	size_t home_bucket; // 1191
	size_t prev; // 1192
	size_t empty; // 1209
	uint16_t displacement; // 1210
	{
		size_t next; // 1195
	}
} /* size: 0, variables: 4 */

// <06BAE799> src/verstable.h:1188
// variables: 5
inline bool b3EdgeMap_evict(b3EdgeMap* table, size_t bucket)
{
	size_t home_bucket; // 1191
	size_t prev; // 1192
	size_t empty; // 1209
	uint16_t displacement; // 1210
	{
		size_t next; // 1195
	}
} /* size: 0, variables: 4 */

// <06CF4741> src/verstable.h:1230
// variable: 1
inline b3HullMap_itr b3HullMap_end_itr(void)
{
	b3HullMap_itr itr; // 1232
} /* size: 0, variables: 1 */

// <06CF4068> src/verstable.h:1230
// variable: 1
inline b3MeshMap_itr b3MeshMap_end_itr(void)
{
	b3MeshMap_itr itr; // 1232
} /* size: 0, variables: 1 */

// <06CF3983> src/verstable.h:1230
// variable: 1
inline b3MaterialMap_itr b3MaterialMap_end_itr(void)
{
	b3MaterialMap_itr itr; // 1232
} /* size: 0, variables: 1 */

// <06BB18DF> src/verstable.h:1230
// variable: 1
inline b3VertexMap_itr b3VertexMap_end_itr(void)
{
	b3VertexMap_itr itr; // 1232
} /* size: 0, variables: 1 */

// <06BAE779> src/verstable.h:1230
// variable: 1
inline b3EdgeMap_itr b3EdgeMap_end_itr(void)
{
	b3EdgeMap_itr itr; // 1232
} /* size: 0, variables: 1 */

// <06CF709D> src/verstable.h:1251
// variables: 16
// function calls: 40
b3MaterialMap_itr b3MaterialMap_insert_raw(b3MaterialMap* table, const b3SurfaceMaterial* key, int* val, bool unique, bool replace)
{
	uint64_t hash; // 1261
	uint16_t hashfrag; // 1262
	size_t home_bucket; // 1263
	size_t empty; // 1341
	uint16_t displacement; // 1342
	size_t prev; // 1355
	b3MaterialMap_itr itr; // 1366
	{
		size_t i; // 643
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 601
		vt_wyr8(const unsigned char* p); // 661
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 601
		vt_wyr8(const unsigned char* p); // 661
		vt_wymum(uint64_t* a,
			uint64_t* b);  // 594
		vt_wymix(uint64_t a,
			uint64_t b);  // 661
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 601
		vt_wyr8(const unsigned char* p); // 667
	}
	vt_wymum(uint64_t* a,
		uint64_t* b);  // 672
	vt_wymum(uint64_t* a,
		uint64_t* b);  // 594
	vt_wymix(uint64_t a,
		uint64_t b);  // 673
	vt_wyhash(const void* key,
			size_t len);  // 259
	b3HashMaterial(const b3SurfaceMaterial* material); // 1261
	{
		b3MaterialMap_itr itr; // 1287
		b3MaterialMap_bucket_count(const b3MaterialMap* table); // 1273
		{
			size_t i; // 643
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 601
			vt_wyr8(const unsigned char* p); // 661
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 601
			vt_wyr8(const unsigned char* p); // 661
			vt_wymum(uint64_t* a,
				uint64_t* b);  // 594
			vt_wymix(uint64_t a,
				uint64_t b);  // 661
			memcpy(void* __dest,
				const void* __src,
				size_t __len);  // 601
			vt_wyr8(const unsigned char* p); // 667
		}
		vt_wymum(uint64_t* a,
			uint64_t* b);  // 672
		vt_wymum(uint64_t* a,
			uint64_t* b);  // 594
		vt_wymix(uint64_t a,
			uint64_t b);  // 673
		vt_wyhash(const void* key,
				size_t len);  // 259
		b3HashMaterial(const b3SurfaceMaterial* material); // 1191
		{
			size_t next; // 1195
			vt_quadratic(uint16_t displacement); // 1195
		}
		b3MaterialMap_find_first_empty(b3MaterialMap* table,
						size_t home_bucket,
						size_t* empty,
						uint16_t* displacement);  // 1211
		{
			uint16_t displacement; // 1168
			vt_quadratic(uint16_t displacement); // 1173
		}
		b3MaterialMap_find_insert_location_in_chain(b3MaterialMap* table,
								size_t home_bucket,
								uint16_t displacement_to_empty);  // 1215
		b3MaterialMap_evict(b3MaterialMap* table,
					size_t bucket);  // 1275
		b3MaterialMap_end_itr(void); // 1277
	}
	vt_hashfrag(uint64_t hash); // 1262
	{
		size_t bucket; // 1301
		{
			uint16_t displacement; // 1333
			b3CompareMaterials(const b3SurfaceMaterial* mat1,
						const b3SurfaceMaterial* mat2);  // 1306
			{
				b3MaterialMap_itr itr; // 1324
			}
			vt_quadratic(uint16_t displacement); // 1337
		}
	}
	b3MaterialMap_bucket_count(const b3MaterialMap* table); // 1344
	b3MaterialMap_find_first_empty(b3MaterialMap* table,
					size_t home_bucket,
					size_t* empty,
					uint16_t* displacement);  // 1344
	{
		uint16_t displacement; // 1168
		vt_quadratic(uint16_t displacement); // 1173
	}
	b3MaterialMap_find_insert_location_in_chain(b3MaterialMap* table,
							size_t home_bucket,
							uint16_t displacement_to_empty);  // 1355
} /* size: 0, variables: 7, inline expansions: 9 (0 bytes) */

// <06CF6BA4> src/verstable.h:1251
// variables: 14
// function calls: 16
b3MeshMap_itr b3MeshMap_insert_raw(b3MeshMap* table, const b3MeshData* key, int* val, bool unique, bool replace)
{
	uint64_t hash; // 1261
	uint16_t hashfrag; // 1262
	size_t home_bucket; // 1263
	size_t empty; // 1341
	uint16_t displacement; // 1342
	size_t prev; // 1355
	b3MeshMap_itr itr; // 1366
	b3HashMesh(const b3MeshData* mesh); // 1261
	vt_hashfrag(uint64_t hash); // 1262
	{
		b3MeshMap_itr itr; // 1287
		b3MeshMap_bucket_count(const b3MeshMap* table); // 1273
		b3HashMesh(const b3MeshData* mesh); // 1191
		{
			size_t next; // 1195
			vt_quadratic(uint16_t displacement); // 1195
		}
		b3MeshMap_find_first_empty(b3MeshMap* table,
						size_t home_bucket,
						size_t* empty,
						uint16_t* displacement);  // 1211
		{
			uint16_t displacement; // 1168
			vt_quadratic(uint16_t displacement); // 1173
		}
		b3MeshMap_find_insert_location_in_chain(b3MeshMap* table,
							size_t home_bucket,
							uint16_t displacement_to_empty);  // 1215
		b3MeshMap_evict(b3MeshMap* table,
				size_t bucket);  // 1275
		b3MeshMap_end_itr(void); // 1277
	}
	{
		size_t bucket; // 1301
		{
			uint16_t displacement; // 1333
			b3CompareMeshes(const b3MeshData* mesh1,
					const b3MeshData* mesh2);  // 1306
			{
				b3MeshMap_itr itr; // 1324
			}
			vt_quadratic(uint16_t displacement); // 1337
		}
	}
	b3MeshMap_bucket_count(const b3MeshMap* table); // 1344
	b3MeshMap_find_first_empty(b3MeshMap* table,
					size_t home_bucket,
					size_t* empty,
					uint16_t* displacement);  // 1344
	{
		uint16_t displacement; // 1168
		vt_quadratic(uint16_t displacement); // 1173
	}
	b3MeshMap_find_insert_location_in_chain(b3MeshMap* table,
						size_t home_bucket,
						uint16_t displacement_to_empty);  // 1355
} /* size: 0, variables: 7, inline expansions: 5 (0 bytes) */

// <06CF66AB> src/verstable.h:1251
// variables: 14
// function calls: 16
b3HullMap_itr b3HullMap_insert_raw(b3HullMap* table, const b3Hull* key, int* val, bool unique, bool replace)
{
	uint64_t hash; // 1261
	uint16_t hashfrag; // 1262
	size_t home_bucket; // 1263
	size_t empty; // 1341
	uint16_t displacement; // 1342
	size_t prev; // 1355
	b3HullMap_itr itr; // 1366
	b3HashHull(const b3Hull* hull); // 1261
	vt_hashfrag(uint64_t hash); // 1262
	{
		b3HullMap_itr itr; // 1287
		b3HullMap_bucket_count(const b3HullMap* table); // 1273
		b3HashHull(const b3Hull* hull); // 1191
		{
			size_t next; // 1195
			vt_quadratic(uint16_t displacement); // 1195
		}
		b3HullMap_find_first_empty(b3HullMap* table,
						size_t home_bucket,
						size_t* empty,
						uint16_t* displacement);  // 1211
		{
			uint16_t displacement; // 1168
			vt_quadratic(uint16_t displacement); // 1173
		}
		b3HullMap_find_insert_location_in_chain(b3HullMap* table,
							size_t home_bucket,
							uint16_t displacement_to_empty);  // 1215
		b3HullMap_evict(b3HullMap* table,
				size_t bucket);  // 1275
		b3HullMap_end_itr(void); // 1277
	}
	{
		size_t bucket; // 1301
		{
			uint16_t displacement; // 1333
			b3CompareHulls(const b3Hull* hull1,
					const b3Hull* hull2);  // 1306
			{
				b3HullMap_itr itr; // 1324
			}
			vt_quadratic(uint16_t displacement); // 1337
		}
	}
	b3HullMap_bucket_count(const b3HullMap* table); // 1344
	b3HullMap_find_first_empty(b3HullMap* table,
					size_t home_bucket,
					size_t* empty,
					uint16_t* displacement);  // 1344
	{
		uint16_t displacement; // 1168
		vt_quadratic(uint16_t displacement); // 1173
	}
	b3HullMap_find_insert_location_in_chain(b3HullMap* table,
						size_t home_bucket,
						uint16_t displacement_to_empty);  // 1355
} /* size: 0, variables: 7, inline expansions: 5 (0 bytes) */

// <06CF4652> src/verstable.h:1251
// variables: 11
inline b3HullMap_itr b3HullMap_insert_raw(b3HullMap* table, const b3Hull* key, int* val, bool unique, bool replace)
{
	uint64_t hash; // 1261
	uint16_t hashfrag; // 1262
	size_t home_bucket; // 1263
	size_t empty; // 1341
	uint16_t displacement; // 1342
	size_t prev; // 1355
	b3HullMap_itr itr; // 1366
	{
		b3HullMap_itr itr; // 1287
	}
	{
		size_t bucket; // 1301
		{
			uint16_t displacement; // 1333
			{
				b3HullMap_itr itr; // 1324
			}
		}
	}
} /* size: 0, variables: 7 */

// <06CF3F79> src/verstable.h:1251
// variables: 11
inline b3MeshMap_itr b3MeshMap_insert_raw(b3MeshMap* table, const b3MeshData* key, int* val, bool unique, bool replace)
{
	uint64_t hash; // 1261
	uint16_t hashfrag; // 1262
	size_t home_bucket; // 1263
	size_t empty; // 1341
	uint16_t displacement; // 1342
	size_t prev; // 1355
	b3MeshMap_itr itr; // 1366
	{
		b3MeshMap_itr itr; // 1287
	}
	{
		size_t bucket; // 1301
		{
			uint16_t displacement; // 1333
			{
				b3MeshMap_itr itr; // 1324
			}
		}
	}
} /* size: 0, variables: 7 */

// <06CF3894> src/verstable.h:1251
// variables: 11
inline b3MaterialMap_itr b3MaterialMap_insert_raw(b3MaterialMap* table, const b3SurfaceMaterial* key, int* val, bool unique, bool replace)
{
	uint64_t hash; // 1261
	uint16_t hashfrag; // 1262
	size_t home_bucket; // 1263
	size_t empty; // 1341
	uint16_t displacement; // 1342
	size_t prev; // 1355
	b3MaterialMap_itr itr; // 1366
	{
		b3MaterialMap_itr itr; // 1287
	}
	{
		size_t bucket; // 1301
		{
			uint16_t displacement; // 1333
			{
				b3MaterialMap_itr itr; // 1324
			}
		}
	}
} /* size: 0, variables: 7 */

// <06BB13DB> src/verstable.h:1251
// variables: 14
// function calls: 15
b3VertexMap_itr b3VertexMap_insert_raw(b3VertexMap* table, uint64_t key, int* val, bool unique, bool replace)
{
	uint64_t hash; // 1261
	uint16_t hashfrag; // 1262
	size_t home_bucket; // 1263
	size_t empty; // 1341
	uint16_t displacement; // 1342
	size_t prev; // 1355
	b3VertexMap_itr itr; // 1366
	{
		b3VertexMap_itr itr; // 1287
		b3VertexMap_bucket_count(const b3VertexMap* table); // 1273
		vt_hash_integer(uint64_t key); // 1191
		{
			size_t next; // 1195
			vt_quadratic(uint16_t displacement); // 1195
		}
		b3VertexMap_find_first_empty(b3VertexMap* table,
						size_t home_bucket,
						size_t* empty,
						uint16_t* displacement);  // 1211
		{
			uint16_t displacement; // 1168
			vt_quadratic(uint16_t displacement); // 1173
		}
		b3VertexMap_find_insert_location_in_chain(b3VertexMap* table,
								size_t home_bucket,
								uint16_t displacement_to_empty);  // 1215
		b3VertexMap_evict(b3VertexMap* table,
					size_t bucket);  // 1275
		b3VertexMap_end_itr(void); // 1277
	}
	{
		size_t bucket; // 1301
		{
			uint16_t displacement; // 1333
			{
				b3VertexMap_itr itr; // 1324
			}
			vt_quadratic(uint16_t displacement); // 1337
		}
	}
	vt_hash_integer(uint64_t key); // 1261
	vt_hashfrag(uint64_t hash); // 1262
	b3VertexMap_bucket_count(const b3VertexMap* table); // 1344
	b3VertexMap_find_first_empty(b3VertexMap* table,
					size_t home_bucket,
					size_t* empty,
					uint16_t* displacement);  // 1344
	{
		uint16_t displacement; // 1168
		vt_quadratic(uint16_t displacement); // 1173
	}
	b3VertexMap_find_insert_location_in_chain(b3VertexMap* table,
							size_t home_bucket,
							uint16_t displacement_to_empty);  // 1355
} /* size: 1538, variables: 7, inline expansions: 5 (302 bytes) */

// <06BAE275> src/verstable.h:1251
// variables: 14
// function calls: 15
b3EdgeMap_itr b3EdgeMap_insert_raw(b3EdgeMap* table, uint64_t key, int* val, bool unique, bool replace)
{
	uint64_t hash; // 1261
	uint16_t hashfrag; // 1262
	size_t home_bucket; // 1263
	size_t empty; // 1341
	uint16_t displacement; // 1342
	size_t prev; // 1355
	b3EdgeMap_itr itr; // 1366
	{
		b3EdgeMap_itr itr; // 1287
		b3EdgeMap_bucket_count(const b3EdgeMap* table); // 1273
		vt_hash_integer(uint64_t key); // 1191
		{
			size_t next; // 1195
			vt_quadratic(uint16_t displacement); // 1195
		}
		b3EdgeMap_find_first_empty(b3EdgeMap* table,
						size_t home_bucket,
						size_t* empty,
						uint16_t* displacement);  // 1211
		{
			uint16_t displacement; // 1168
			vt_quadratic(uint16_t displacement); // 1173
		}
		b3EdgeMap_find_insert_location_in_chain(b3EdgeMap* table,
							size_t home_bucket,
							uint16_t displacement_to_empty);  // 1215
		b3EdgeMap_evict(b3EdgeMap* table,
				size_t bucket);  // 1275
		b3EdgeMap_end_itr(void); // 1277
	}
	{
		size_t bucket; // 1301
		{
			uint16_t displacement; // 1333
			{
				b3EdgeMap_itr itr; // 1324
			}
			vt_quadratic(uint16_t displacement); // 1337
		}
	}
	vt_hash_integer(uint64_t key); // 1261
	vt_hashfrag(uint64_t hash); // 1262
	b3EdgeMap_bucket_count(const b3EdgeMap* table); // 1344
	b3EdgeMap_find_first_empty(b3EdgeMap* table,
					size_t home_bucket,
					size_t* empty,
					uint16_t* displacement);  // 1344
	{
		uint16_t displacement; // 1168
		vt_quadratic(uint16_t displacement); // 1173
	}
	b3EdgeMap_find_insert_location_in_chain(b3EdgeMap* table,
						size_t home_bucket,
						uint16_t displacement_to_empty);  // 1355
} /* size: 1538, variables: 7, inline expansions: 5 (302 bytes) */

// <06CF436A> src/verstable.h:1391
// variables: 4
// function calls: 9
bool b3HullMap_rehash(b3HullMap* table, size_t bucket_count)
{
	{
		b3HullMap new_table; // 1397
		void* allocation; // 1407
		{
			size_t bucket; // 1425
			{
				b3HullMap_itr itr; // 1428
				b3HullMap_is_end(b3HullMap_itr itr); // 1438
			}
			b3HullMap_bucket_count(const b3HullMap* table); // 1425
		}
		b3HullMap_metadata_offset(b3HullMap* table); // 1068
		b3HullMap_total_alloc_size(b3HullMap* table); // 1407
		memset(void* __dest,
			int __ch,
			size_t __len);  // 1420
		b3HullMap_metadata_offset(b3HullMap* table); // 1068
		b3HullMap_total_alloc_size(b3HullMap* table); // 1458
		b3HullMap_metadata_offset(b3HullMap* table); // 1068
		b3HullMap_total_alloc_size(b3HullMap* table); // 1445
	}
} /* size: 0 */

// <06CF3C91> src/verstable.h:1391
// variables: 4
// function calls: 9
bool b3MeshMap_rehash(b3MeshMap* table, size_t bucket_count)
{
	{
		b3MeshMap new_table; // 1397
		void* allocation; // 1407
		{
			size_t bucket; // 1425
			{
				b3MeshMap_itr itr; // 1428
				b3MeshMap_is_end(b3MeshMap_itr itr); // 1438
			}
			b3MeshMap_bucket_count(const b3MeshMap* table); // 1425
		}
		b3MeshMap_metadata_offset(b3MeshMap* table); // 1068
		b3MeshMap_total_alloc_size(b3MeshMap* table); // 1407
		memset(void* __dest,
			int __ch,
			size_t __len);  // 1420
		b3MeshMap_metadata_offset(b3MeshMap* table); // 1068
		b3MeshMap_total_alloc_size(b3MeshMap* table); // 1458
		b3MeshMap_metadata_offset(b3MeshMap* table); // 1068
		b3MeshMap_total_alloc_size(b3MeshMap* table); // 1445
	}
} /* size: 0 */

// <06CF35AC> src/verstable.h:1391
// variables: 4
// function calls: 9
bool b3MaterialMap_rehash(b3MaterialMap* table, size_t bucket_count)
{
	{
		b3MaterialMap new_table; // 1397
		void* allocation; // 1407
		{
			size_t bucket; // 1425
			{
				b3MaterialMap_itr itr; // 1428
				b3MaterialMap_is_end(b3MaterialMap_itr itr); // 1438
			}
			b3MaterialMap_bucket_count(const b3MaterialMap* table); // 1425
		}
		b3MaterialMap_metadata_offset(b3MaterialMap* table); // 1068
		b3MaterialMap_total_alloc_size(b3MaterialMap* table); // 1407
		memset(void* __dest,
			int __ch,
			size_t __len);  // 1420
		b3MaterialMap_metadata_offset(b3MaterialMap* table); // 1068
		b3MaterialMap_total_alloc_size(b3MaterialMap* table); // 1458
		b3MaterialMap_metadata_offset(b3MaterialMap* table); // 1068
		b3MaterialMap_total_alloc_size(b3MaterialMap* table); // 1445
	}
} /* size: 0 */

// <06BB10F5> src/verstable.h:1391
// variables: 4
// function calls: 9
bool b3VertexMap_rehash(b3VertexMap* table, size_t bucket_count)
{
	{
		b3VertexMap new_table; // 1397
		void* allocation; // 1407
		{
			size_t bucket; // 1425
			{
				b3VertexMap_itr itr; // 1428
				b3VertexMap_is_end(b3VertexMap_itr itr); // 1438
			}
			b3VertexMap_bucket_count(const b3VertexMap* table); // 1425
		}
		b3VertexMap_metadata_offset(b3VertexMap* table); // 1068
		b3VertexMap_total_alloc_size(b3VertexMap* table); // 1407
		memset(void* __dest,
			int __ch,
			size_t __len);  // 1420
		b3VertexMap_metadata_offset(b3VertexMap* table); // 1068
		b3VertexMap_total_alloc_size(b3VertexMap* table); // 1458
		b3VertexMap_metadata_offset(b3VertexMap* table); // 1068
		b3VertexMap_total_alloc_size(b3VertexMap* table); // 1445
	}
} /* size: 469 */

// <06BADF8F> src/verstable.h:1391
// variables: 4
// function calls: 9
bool b3EdgeMap_rehash(b3EdgeMap* table, size_t bucket_count)
{
	{
		b3EdgeMap new_table; // 1397
		void* allocation; // 1407
		{
			size_t bucket; // 1425
			{
				b3EdgeMap_itr itr; // 1428
				b3EdgeMap_is_end(b3EdgeMap_itr itr); // 1438
			}
			b3EdgeMap_bucket_count(const b3EdgeMap* table); // 1425
		}
		b3EdgeMap_metadata_offset(b3EdgeMap* table); // 1068
		b3EdgeMap_total_alloc_size(b3EdgeMap* table); // 1407
		memset(void* __dest,
			int __ch,
			size_t __len);  // 1420
		b3EdgeMap_metadata_offset(b3EdgeMap* table); // 1068
		b3EdgeMap_total_alloc_size(b3EdgeMap* table); // 1458
		b3EdgeMap_metadata_offset(b3EdgeMap* table); // 1068
		b3EdgeMap_total_alloc_size(b3EdgeMap* table); // 1445
	}
} /* size: 469 */

// <06BB10AC> src/verstable.h:1478
// variable: 1
inline b3VertexMap_itr b3VertexMap_insert(b3VertexMap* table, uint64_t key, int val)
{
	{
		b3VertexMap_itr itr; // 1488
	}
} /* size: 0 */

// <06BADF46> src/verstable.h:1478
// variable: 1
inline b3EdgeMap_itr b3EdgeMap_insert(b3EdgeMap* table, uint64_t key, int val)
{
	{
		b3EdgeMap_itr itr; // 1488
	}
} /* size: 0 */

// <06CF4321> src/verstable.h:1514
// variable: 1
inline b3HullMap_itr b3HullMap_get_or_insert(b3HullMap* table, const b3Hull* key, int val)
{
	{
		b3HullMap_itr itr; // 1524
	}
} /* size: 0 */

// <06CF3C48> src/verstable.h:1514
// variable: 1
inline b3MeshMap_itr b3MeshMap_get_or_insert(b3MeshMap* table, const b3MeshData* key, int val)
{
	{
		b3MeshMap_itr itr; // 1524
	}
} /* size: 0 */

// <06CF3563> src/verstable.h:1514
// variable: 1
inline b3MaterialMap_itr b3MaterialMap_get_or_insert(b3MaterialMap* table, const b3SurfaceMaterial* key, int val)
{
	{
		b3MaterialMap_itr itr; // 1524
	}
} /* size: 0 */

// <06BB1027> src/verstable.h:1549
// variables: 6
inline b3VertexMap_itr b3VertexMap_get(const b3VertexMap* table, uint64_t key)
{
	uint64_t hash; // 1551
	size_t home_bucket; // 1552
	uint16_t hashfrag; // 1561
	size_t bucket; // 1562
	{
		uint16_t displacement; // 1579
		{
			b3VertexMap_itr itr; // 1570
		}
	}
} /* size: 0, variables: 4 */

// <06BADEC1> src/verstable.h:1549
// variables: 6
inline b3EdgeMap_itr b3EdgeMap_get(const b3EdgeMap* table, uint64_t key)
{
	uint64_t hash; // 1551
	size_t home_bucket; // 1552
	uint16_t hashfrag; // 1561
	size_t bucket; // 1562
	{
		uint16_t displacement; // 1579
		{
			b3EdgeMap_itr itr; // 1570
		}
	}
} /* size: 0, variables: 4 */

// <06CF42F4> src/verstable.h:1731
// variable: 1
inline size_t b3HullMap_min_bucket_count_for_size(size_t size)
{
	size_t bucket_count; // 1737
} /* size: 0, variables: 1 */

// <06CF3C1B> src/verstable.h:1731
// variable: 1
inline size_t b3MeshMap_min_bucket_count_for_size(size_t size)
{
	size_t bucket_count; // 1737
} /* size: 0, variables: 1 */

// <06CF3536> src/verstable.h:1731
// variable: 1
inline size_t b3MaterialMap_min_bucket_count_for_size(size_t size)
{
	size_t bucket_count; // 1737
} /* size: 0, variables: 1 */

// <06BB0FFA> src/verstable.h:1731
// variable: 1
inline size_t b3VertexMap_min_bucket_count_for_size(size_t size)
{
	size_t bucket_count; // 1737
} /* size: 0, variables: 1 */

// <06BADE94> src/verstable.h:1731
// variable: 1
inline size_t b3EdgeMap_min_bucket_count_for_size(size_t size)
{
	size_t bucket_count; // 1737
} /* size: 0, variables: 1 */

// <06CF42BA> src/verstable.h:1744
// variable: 1
inline bool b3HullMap_reserve(b3HullMap* table, size_t size)
{
	size_t bucket_count; // 1746
} /* size: 0, variables: 1 */

// <06CF3BE1> src/verstable.h:1744
// variable: 1
inline bool b3MeshMap_reserve(b3MeshMap* table, size_t size)
{
	size_t bucket_count; // 1746
} /* size: 0, variables: 1 */

// <06CF34FC> src/verstable.h:1744
// variable: 1
inline bool b3MaterialMap_reserve(b3MaterialMap* table, size_t size)
{
	size_t bucket_count; // 1746
} /* size: 0, variables: 1 */

// <06BB0FC0> src/verstable.h:1744
// variable: 1
inline bool b3VertexMap_reserve(b3VertexMap* table, size_t size)
{
	size_t bucket_count; // 1746
} /* size: 0, variables: 1 */

// <06BADE5A> src/verstable.h:1744
// variable: 1
inline bool b3EdgeMap_reserve(b3EdgeMap* table, size_t size)
{
	size_t bucket_count; // 1746
} /* size: 0, variables: 1 */

// <06CF4298> src/verstable.h:1812
inline void b3HullMap_cleanup(b3HullMap* table)
{
} /* size: 0 */

// <06CF3BBF> src/verstable.h:1812
inline void b3MeshMap_cleanup(b3MeshMap* table)
{
} /* size: 0 */

// <06CF34DA> src/verstable.h:1812
inline void b3MaterialMap_cleanup(b3MaterialMap* table)
{
} /* size: 0 */

// <06BB0F9E> src/verstable.h:1812
inline void b3VertexMap_cleanup(b3VertexMap* table)
{
} /* size: 0 */

// <06BADE38> src/verstable.h:1812
inline void b3EdgeMap_cleanup(b3EdgeMap* table)
{
} /* size: 0 */

