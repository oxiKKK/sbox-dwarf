
//
// common/modfmt/modfmt_macho.h
//
//	referenced by: libtier0.so
//
//	structs: 12
//

// <00428147> ../common/modfmt/modfmt_macho.h:376
// member variables: 5
// struct size: 12
struct nlist {
	/* ../common/modfmt/modfmt_macho.h:377 */
	union {
		int32_t n_strx; /* 0 4 */
	};
	union {
		int32_t n_strx; /* 0 4 */
	} n_un; /* 0 4 */
	uint8_t n_type; /* 4 1 */
	uint8_t n_sect; /* 5 1 */
	int16_t n_desc; /* 6 2 */
	uint32_t n_value; /* 8 4 */
};

// <004281BF> ../common/modfmt/modfmt_macho.h:389
// member variables: 5
// struct size: 16
struct nlist_64 {
	/* ../common/modfmt/modfmt_macho.h:390 */
	union {
		uint32_t n_strx; /* 0 4 */
	};
	union {
		uint32_t n_strx; /* 0 4 */
	} n_un; /* 0 4 */
	uint8_t n_type; /* 4 1 */
	uint8_t n_sect; /* 5 1 */
	uint16_t n_desc; /* 6 2 */
	uint64_t n_value; /* 8 8 */
};

// <00428237> ../common/modfmt/modfmt_macho.h:619
// member variables: 5
// struct size: 20
struct fat_arch {
	cpu_type_t cputype; /* 0 4 */
	cpu_subtype_t cpusubtype; /* 4 4 */
	uint32_t offset; /* 8 4 */
	uint32_t size; /* 12 4 */
	uint32_t align; /* 16 4 */
};

// <00418953> ../common/modfmt/modfmt_macho.h:631
// member variables: 7
// struct size: 28
struct mach_header {
	uint32_t magic; /* 0 4 */
	cpu_type_t cputype; /* 4 4 */
	cpu_subtype_t cpusubtype; /* 8 4 */
	uint32_t filetype; /* 12 4 */
	uint32_t ncmds; /* 16 4 */
	uint32_t sizeofcmds; /* 20 4 */
	uint32_t flags; /* 24 4 */
};

// <004189D2> ../common/modfmt/modfmt_macho.h:649
// member variables: 8
// struct size: 32
struct mach_header_64 {
	uint32_t magic; /* 0 4 */
	cpu_type_t cputype; /* 4 4 */
	cpu_subtype_t cpusubtype; /* 8 4 */
	uint32_t filetype; /* 12 4 */
	uint32_t ncmds; /* 16 4 */
	uint32_t sizeofcmds; /* 20 4 */
	uint32_t flags; /* 24 4 */
	uint32_t reserved; /* 28 4 */
};

// <004283A4> ../common/modfmt/modfmt_macho.h:804
// member variables: 2
// struct size: 8
struct load_command {
	uint32_t cmd; /* 0 4 */
	uint32_t cmdsize; /* 4 4 */
};

// <004283D3> ../common/modfmt/modfmt_macho.h:895
// member variables: 11
// struct size: 56
struct segment_command {
	uint32_t cmd; /* 0 4 */
	uint32_t cmdsize; /* 4 4 */
	char segname[16]; /* 8 16 */
	uint32_t vmaddr; /* 24 4 */
	uint32_t vmsize; /* 28 4 */
	uint32_t fileoff; /* 32 4 */
	uint32_t filesize; /* 36 4 */
	vm_prot_t maxprot; /* 40 4 */
	vm_prot_t initprot; /* 44 4 */
	uint32_t nsects; /* 48 4 */
	uint32_t flags; /* 52 4 */
};

// <004284A2> ../common/modfmt/modfmt_macho.h:915
// member variables: 11
// struct size: 72
struct segment_command_64 {
	uint32_t cmd; /* 0 4 */
	uint32_t cmdsize; /* 4 4 */
	char segname[16]; /* 8 16 */
	uint64_t vmaddr; /* 24 8 */
	uint64_t vmsize; /* 32 8 */
	uint64_t fileoff; /* 40 8 */
	uint64_t filesize; /* 48 8 */
	vm_prot_t maxprot; /* 56 4 */
	vm_prot_t initprot; /* 60 4 */
	uint32_t nsects; /* 64 4 */
	uint32_t flags; /* 68 4 */
};

// <00428561> ../common/modfmt/modfmt_macho.h:972
// member variables: 11
// struct size: 68
struct section {
	char sectname[16]; /* 0 16 */
	char segname[16]; /* 16 16 */
	uint32_t addr; /* 32 4 */
	uint32_t size; /* 36 4 */
	uint32_t offset; /* 40 4 */
	uint32_t align; /* 44 4 */
	uint32_t reloff; /* 48 4 */
	uint32_t nreloc; /* 52 4 */
	uint32_t flags; /* 56 4 */
	uint32_t reserved1; /* 60 4 */
	uint32_t reserved2; /* 64 4 */
};

// <00428620> ../common/modfmt/modfmt_macho.h:986
// member variables: 12
// struct size: 80
struct section_64 {
	char sectname[16]; /* 0 16 */
	char segname[16]; /* 16 16 */
	uint64_t addr; /* 32 8 */
	uint64_t size; /* 40 8 */
	uint32_t offset; /* 48 4 */
	uint32_t align; /* 52 4 */
	uint32_t reloff; /* 56 4 */
	uint32_t nreloc; /* 60 4 */
	uint32_t flags; /* 64 4 */
	uint32_t reserved1; /* 68 4 */
	uint32_t reserved2; /* 72 4 */
	uint32_t reserved3; /* 76 4 */
};

// <004286EF> ../common/modfmt/modfmt_macho.h:1400
// member variables: 6
// struct size: 24
struct symtab_command {
	uint32_t cmd; /* 0 4 */
	uint32_t cmdsize; /* 4 4 */
	uint32_t symoff; /* 8 4 */
	uint32_t nsyms; /* 12 4 */
	uint32_t stroff; /* 16 4 */
	uint32_t strsize; /* 20 4 */
};

// <0042875E> ../common/modfmt/modfmt_macho.h:1704
// member variables: 3
// struct size: 24
struct uuid_command {
	uint32_t cmd; /* 0 4 */
	uint32_t cmdsize; /* 4 4 */
	uint8_t uuid[16]; /* 8 16 */
};

