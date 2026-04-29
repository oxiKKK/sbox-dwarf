
//
// public/tier0/kvpacker.h
//
//	referenced by: libtier0.so
//
//	class: 1
//

// <00271A07> ../public/tier0/kvpacker.h:21
// member functions: 2
// class size: 1
class KVPacker {
	/* ../public/tier0/kvpacker.h:31 */
	enum EPackType {
		PACKTYPE_NONE = 0,
		PACKTYPE_STRING = 1,
		PACKTYPE_INT = 2,
		PACKTYPE_FLOAT = 3,
		PACKTYPE_PTR = 4,
		PACKTYPE_WSTRING = 5,
		PACKTYPE_COLOR = 6,
		PACKTYPE_UINT64 = 7,
		PACKTYPE_NULLMARKER = 8,
	};
	/* ../public/tier0/kvpacker.h:24 */
	bool WriteAsBinary(KVPacker* , KeyValues* , CUtlBuffer& );
	/* ../public/tier0/kvpacker.h:25 */
	bool ReadAsBinary(KVPacker* , KeyValues* , CUtlBuffer& );
};

