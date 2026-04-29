
//
// public/constexpr/murmurhash_constexpr.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//				   libschemasystem.so
//				   libtier0.so
//
//	classes: 6
//

// <04312D4F> ../public/constexpr/murmurhash_constexpr.h:17
// member functions: 10
// class size: 1
class CMurmurHash2_ConstExpr<ConstExprHash_Byte_Abstractions<char> > {
	/* ../public/constexpr/murmurhash_constexpr.h:21 */
	enum Constants_t {
		M_VAL = 1540483477,
		R_VAL = 24,
	} __attribute__((__packed__));
	/* ../public/constexpr/murmurhash_constexpr.h:27 */
	uint32 LT4(PointerType_t, size_t, uint32);
	/* ../public/constexpr/murmurhash_constexpr.h:20 */
	typedef PointerType_t PointerType_t;
	/* ../public/constexpr/murmurhash_constexpr.h:50 */
	uint32 Finalize_Step1(uint32);
	/* ../public/constexpr/murmurhash_constexpr.h:61 */
	uint32 Finalize_Step2(uint32);
	/* ../public/constexpr/murmurhash_constexpr.h:67 */
	uint32 PostLoop(PointerType_t, size_t, uint32);
	/* ../public/constexpr/murmurhash_constexpr.h:74 */
	uint32 GE4_Step1(PointerType_t);
	/* ../public/constexpr/murmurhash_constexpr.h:81 */
	uint32 GE4_Step2(PointerType_t, uint32, uint32);
	/* ../public/constexpr/murmurhash_constexpr.h:97 */
	uint32 GE4(PointerType_t, uint32);
	/* ../public/constexpr/murmurhash_constexpr.h:104 */
	uint32 Loop(PointerType_t, size_t, uint32);
	/* ../public/constexpr/murmurhash_constexpr.h:113 */
	uint32 EntryPoint(PointerType_t, size_t, uint32);
};

// <0037D968> ../public/constexpr/murmurhash_constexpr.h:122
// member functions: 10
// class size: 1
class CMurmurHash64_ConstExpr<ConstExprHash_Byte_Abstractions<char> > {
	/* ../public/constexpr/murmurhash_constexpr.h:126 */
	enum Constants_t {
		M_VAL = 1540483477,
		R_VAL = 24,
	} __attribute__((__packed__));
	/* ../public/constexpr/murmurhash_constexpr.h:132 */
	uint32 Finalize_Mix(uint32, uint32, uint32);
	/* ../public/constexpr/murmurhash_constexpr.h:141 */
	uint64 Finalize_Step4(uint64, uint64);
	/* ../public/constexpr/murmurhash_constexpr.h:148 */
	uint64 Finalize_Step3(uint32, uint32);
	/* ../public/constexpr/murmurhash_constexpr.h:154 */
	uint64 Finalize_Step2(uint32, uint32);
	/* ../public/constexpr/murmurhash_constexpr.h:160 */
	uint64 Finalize_Step1(uint32, uint32);
	/* ../public/constexpr/murmurhash_constexpr.h:166 */
	uint64 Finalize(uint32, uint32);
	/* ../public/constexpr/murmurhash_constexpr.h:172 */
	uint64 PostLoop(PointerType_t, size_t, uint32, uint32);
	/* ../public/constexpr/murmurhash_constexpr.h:125 */
	typedef PointerType_t PointerType_t;
	/* ../public/constexpr/murmurhash_constexpr.h:180 */
	uint64 Loop(PointerType_t, size_t, uint32, uint32);
	/* ../public/constexpr/murmurhash_constexpr.h:189 */
	uint64 EntryPoint(PointerType_t, size_t, uint32);
};

// <066EBC1C> ../public/constexpr/murmurhash_constexpr.h:196
// member functions: 3
// class size: 1
class ConstExprHash_LowerCase_String_Abstractions {
	/* ../public/constexpr/murmurhash_constexpr.h:200 */
	enum Constants_t {
		M_VAL = 1540483477,
	};
	/* ../public/constexpr/murmurhash_constexpr.h:205 */
	uint32 LowerCase(char);
	/* ../public/constexpr/murmurhash_constexpr.h:211 */
	uint32 ReadByte(PointerType_t);
	/* ../public/constexpr/murmurhash_constexpr.h:199 */
	typedef const char * PointerType_t;
	/* ../public/constexpr/murmurhash_constexpr.h:216 */
	uint32 ReadLittleDWORD(PointerType_t);
};

// <04312CF6> ../public/constexpr/murmurhash_constexpr.h:224
// member functions: 2
// class size: 1
class ConstExprHash_Byte_Abstractions<char> {
	/* ../public/constexpr/murmurhash_constexpr.h:233 */
	uint32 ReadByte(PointerType_t);
	/* ../public/constexpr/murmurhash_constexpr.h:227 */
	typedef const char * PointerType_t;
	/* ../public/constexpr/murmurhash_constexpr.h:238 */
	uint32 ReadLittleDWORD(PointerType_t);
};

// <066EBD18> ../public/constexpr/murmurhash_constexpr.h:224
// member functions: 2
// class size: 1
class ConstExprHash_Byte_Abstractions<unsigned char> {
	/* ../public/constexpr/murmurhash_constexpr.h:228 */
	enum Constants_t {
		M_VAL = 1540483477,
	};
	/* ../public/constexpr/murmurhash_constexpr.h:233 */
	uint32 ReadByte(PointerType_t);
	/* ../public/constexpr/murmurhash_constexpr.h:227 */
	typedef const unsigned char * PointerType_t;
	/* ../public/constexpr/murmurhash_constexpr.h:238 */
	uint32 ReadLittleDWORD(PointerType_t);
};

// <0037D700> ../public/constexpr/murmurhash_constexpr.h:224
// member functions: 2
// class size: 1
class ConstExprHash_Byte_Abstractions<char> {
	/* ../public/constexpr/murmurhash_constexpr.h:228 */
	enum Constants_t {
		M_VAL = 1540483477,
	};
	/* ../public/constexpr/murmurhash_constexpr.h:233 */
	uint32 ReadByte(PointerType_t);
	/* ../public/constexpr/murmurhash_constexpr.h:227 */
	typedef const char * PointerType_t;
	/* ../public/constexpr/murmurhash_constexpr.h:238 */
	uint32 ReadLittleDWORD(PointerType_t);
};

