
//
// common/binaryproperties.h
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
//				   libtier0.so
//				   libvfx_vulkan.so
//
//	structs: 2
//

// <000024BE> ../common/binaryproperties.h:34
// member function: 1
// member variables: 2
// struct size: 16
struct _BinaryProperties_Value_t {
	/* ../common/binaryproperties.h:37 */
	union {
		const char * pString; /* 0 8 */
		int64 nInt64; /* 0 8 */
		double flDouble; /* 0 8 */
	};
	union {
		const char * pString; /* 0 8 */
		int64 nInt64; /* 0 8 */
		double flDouble; /* 0 8 */
	} val; /* 0 8 */
	BinaryProperties_ValueType_t valueType; /* 8 4 */
	/* ../common/binaryproperties.h:46 */
	bool GetBool(const _BinaryProperties_Value_t* );
};

// <000024BE> ../../common/binaryproperties.h:34
// member function: 1
// member variables: 2
// struct size: 16
struct _BinaryProperties_Value_t {
	/* ../../common/binaryproperties.h:37 */
	union {
		const char * pString; /* 0 8 */
		int64 nInt64; /* 0 8 */
		double flDouble; /* 0 8 */
	};
	union {
		const char * pString; /* 0 8 */
		int64 nInt64; /* 0 8 */
		double flDouble; /* 0 8 */
	} val; /* 0 8 */
	BinaryProperties_ValueType_t valueType; /* 8 4 */
	/* ../../common/binaryproperties.h:46 */
	bool GetBool(const _BinaryProperties_Value_t* );
};

