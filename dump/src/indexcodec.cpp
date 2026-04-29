
//
// src/indexcodec.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 19
//

// <0639B236> src/indexcodec.cpp:27
void rotateTriangle(unsigned int a, unsigned int b, unsigned int c, unsigned int next)
{
} /* size: 0 */

// <0639B1C5> src/indexcodec.cpp:34
// variables: 4
void getEdgeFifo(unsigned int* fifo, unsigned int a, unsigned int b, unsigned int c, size_t offset)
{
	{
		int i; // 36
		{
			size_t index; // 38
			unsigned int e0; // 40
			unsigned int e1; // 41
		}
	}
} /* size: 0 */

// <0639B18E> src/indexcodec.cpp:54
void pushEdgeFifo(unsigned int* fifo, unsigned int a, unsigned int b, size_t& offset)
{
} /* size: 0 */

// <0639B141> src/indexcodec.cpp:61
// variables: 2
void getVertexFifo(unsigned int* fifo, unsigned int v, size_t offset)
{
	{
		int i; // 63
		{
			size_t index; // 65
		}
	}
} /* size: 0 */

// <0639B108> src/indexcodec.cpp:74
void pushVertexFifo(unsigned int* fifo, unsigned int v, size_t& offset, int cond)
{
} /* size: 0 */

// <0639B0DB> src/indexcodec.cpp:80
void encodeVByte(unsigned char *& data, unsigned int v)
{
} /* size: 0 */

// <0639B086> src/indexcodec.cpp:90
// variables: 5
void decodeVByte(const unsigned char *& data)
{
	unsigned char lead; // 92
	unsigned int result; // 100
	unsigned int shift; // 101
	{
		int i; // 103
		{
			unsigned char group; // 105
		}
	}
} /* size: 0, variables: 3 */

// <0639B043> src/indexcodec.cpp:116
// variables: 2
void encodeIndex(unsigned char *& data, unsigned int index, unsigned int last)
{
	unsigned int d; // 118
	unsigned int v; // 119
} /* size: 0, variables: 2 */

// <0639AF4E> src/indexcodec.cpp:124
// variables: 4
// function call: 1
void decodeIndex(const unsigned char *& data, unsigned int last)
{
	unsigned int v; // 126
	unsigned int d; // 127
	{
		int i; // 103
		{
			unsigned char group; // 105
		}
	}
	decodeVByte(const unsigned char *& data); // 126
} /* size: 0, variables: 2, inline expansions: 1 (0 bytes) */

// <0639AF1B> src/indexcodec.cpp:132
// variable: 1
void getCodeAuxIndex(unsigned char v, const unsigned char* table)
{
	{
		int i; // 134
	}
} /* size: 0 */

// <0639B2A3> src/indexcodec.cpp:141
// function call: 1
void writeTriangle(void* destination, size_t offset, size_t index_size, unsigned int a, unsigned int b, unsigned int c)
{
	writeTriangle(void* destination,
			size_t offset,
			size_t index_size,
			unsigned int a,
			unsigned int b,
			unsigned int c);  // 141
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0639AECE> src/indexcodec.cpp:141
void writeTriangle(void* destination, size_t offset, size_t index_size, unsigned int a, unsigned int b, unsigned int c)
{
} /* size: 0 */

// <0639A2D0> src/indexcodec.cpp:159
// variables: 47
// function calls: 25
size_t meshopt_encodeIndexBuffer(unsigned char* buffer, size_t buffer_size, const unsigned int* indices, size_t index_count)
{
	int version; // 169
	EdgeFifo edgefifo; // 173
	VertexFifo vertexfifo; // 176
	size_t edgefifooffset; // 179
	size_t vertexfifooffset; // 180
	unsigned int next; // 182
	unsigned int last; // 183
	unsigned char* code; // 185
	unsigned char* data; // 186
	unsigned char* data_safe_end; // 187
	int fecmax; // 189
	const int   rotations; // 191
	const unsigned char* codeaux_table; // 195
	{
		size_t i; // 197
		{
			int fer; // 205
			{
				const int* order; // 210
				unsigned int a; // 212
				unsigned int b; // 212
				unsigned int c; // 212
				int fe; // 215
				int fc; // 216
				int fec; // 218
				{
					int i; // 63
					{
						size_t index; // 65
					}
				}
				getVertexFifo(unsigned int* fifo,
						unsigned int v,
						size_t offset);  // 216
				encodeVByte(unsigned char *& data,
						unsigned int v);  // 121
				encodeIndex(unsigned char *& data,
						unsigned int index,
						unsigned int last);  // 233
				pushVertexFifo(unsigned int* fifo,
						unsigned int v,
						size_t& offset,
						int cond);  // 237
				pushEdgeFifo(unsigned int* fifo,
						unsigned int a,
						unsigned int b,
						size_t& offset);  // 240
			}
			{
				int rotation; // 245
				const int* order; // 246
				unsigned int a; // 248
				unsigned int b; // 248
				unsigned int c; // 248
				bool reset; // 251
				int fb; // 263
				int fc; // 264
				int fea; // 268
				int feb; // 269
				int fec; // 270
				unsigned char codeaux; // 273
				int codeauxindex; // 274
				rotateTriangle(unsigned int a,
						unsigned int b,
						unsigned int c,
						unsigned int next);  // 245
				{
					int i; // 63
					{
						size_t index; // 65
					}
				}
				getVertexFifo(unsigned int* fifo,
						unsigned int v,
						size_t offset);  // 263
				{
					int i; // 63
					{
						size_t index; // 65
					}
				}
				getVertexFifo(unsigned int* fifo,
						unsigned int v,
						size_t offset);  // 264
				{
					int i; // 134
				}
				getCodeAuxIndex(unsigned char v,
						const unsigned char* table);  // 274
				pushVertexFifo(unsigned int* fifo,
						unsigned int v,
						size_t& offset,
						int cond);  // 299
				pushVertexFifo(unsigned int* fifo,
						unsigned int v,
						size_t& offset,
						int cond);  // 302
				pushVertexFifo(unsigned int* fifo,
						unsigned int v,
						size_t& offset,
						int cond);  // 305
				pushEdgeFifo(unsigned int* fifo,
						unsigned int a,
						unsigned int b,
						size_t& offset);  // 308
				pushEdgeFifo(unsigned int* fifo,
						unsigned int a,
						unsigned int b,
						size_t& offset);  // 309
				pushEdgeFifo(unsigned int* fifo,
						unsigned int a,
						unsigned int b,
						size_t& offset);  // 310
				encodeVByte(unsigned char *& data,
						unsigned int v);  // 121
				encodeIndex(unsigned char *& data,
						unsigned int index,
						unsigned int last);  // 292
				encodeVByte(unsigned char *& data,
						unsigned int v);  // 121
				encodeIndex(unsigned char *& data,
						unsigned int index,
						unsigned int last);  // 295
				encodeVByte(unsigned char *& data,
						unsigned int v);  // 121
				encodeIndex(unsigned char *& data,
						unsigned int index,
						unsigned int last);  // 289
				memset(void* __dest,
					int __ch,
					size_t __len);  // 260
			}
			{
				int i; // 36
				{
					size_t index; // 38
					unsigned int e0; // 40
					unsigned int e1; // 41
				}
			}
			getEdgeFifo(unsigned int* fifo,
					unsigned int a,
					unsigned int b,
					unsigned int c,
					size_t offset);  // 205
		}
	}
	{
		size_t i; // 321
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 174
	memset(void* __dest,
		int __ch,
		size_t __len);  // 177
} /* size: 0, variables: 13, inline expansions: 2 (0 bytes) */

// <0639A25D> src/indexcodec.cpp:338
// variables: 2
size_t meshopt_encodeIndexBufferBound(size_t index_count, size_t vertex_count)
{
	unsigned int vertex_bits; // 343
	unsigned int vertex_groups; // 349
} /* size: 0, variables: 2 */

// <0639A22B> src/indexcodec.cpp:354
void meshopt_encodeIndexVersion(int version)
{
} /* size: 0 */

// <0639A1BC> src/indexcodec.cpp:361
// variables: 2
int meshopt_decodeIndexVersion(const unsigned char* buffer, size_t buffer_size)
{
	unsigned char header; // 366
	int version; // 371
} /* size: 0, variables: 2 */

// <06399544> src/indexcodec.cpp:559
// variables: 11
// function call: 1
size_t meshopt_encodeIndexSequence(unsigned char* buffer, size_t buffer_size, const unsigned int* indices, size_t index_count)
{
	int version; // 567
	unsigned int last; // 571
	unsigned int current; // 572
	unsigned char* data; // 574
	unsigned char* data_safe_end; // 575
	{
		size_t i; // 577
		{
			unsigned int index; // 585
			int cd; // 590
			unsigned int d; // 594
			unsigned int v; // 595
			encodeVByte(unsigned char *& data,
					unsigned int v);  // 598
		}
	}
	{
		int k; // 608
	}
} /* size: 0, variables: 5 */

// <063994D7> src/indexcodec.cpp:614
// variables: 2
size_t meshopt_encodeIndexSequenceBound(size_t index_count, size_t vertex_count)
{
	unsigned int vertex_bits; // 617
	unsigned int vertex_groups; // 623
} /* size: 0, variables: 2 */

// <063992D2> src/indexcodec.cpp:628
// variables: 11
// function call: 1
int meshopt_decodeIndexSequence(void* destination, size_t index_count, size_t index_size, const unsigned char* buffer, size_t buffer_size)
{
	int version; // 639
	const unsigned char* data; // 643
	const unsigned char* data_safe_end; // 644
	unsigned int last; // 646
	{
		size_t i; // 648
		{
			unsigned int v; // 656
			unsigned int current; // 659
			unsigned int d; // 663
			unsigned int index; // 664
			{
				int i; // 103
				{
					unsigned char group; // 105
				}
			}
			decodeVByte(const unsigned char *& data); // 656
		}
	}
} /* size: 0, variables: 4 */

