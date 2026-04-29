
//
// common/modfmt/modfmt_elf.h
//
//	referenced by: libtier0.so
//
//	structs: 8
//

// <004186B6> ../common/modfmt/modfmt_elf.h:70
// member variables: 14
// struct size: 52
typedef struct {
	unsigned char e_ident[16]; /* 0 16 */
	Elf32_Half e_type; /* 16 2 */
	Elf32_Half e_machine; /* 18 2 */
	Elf32_Word e_version; /* 20 4 */
	Elf32_Addr e_entry; /* 24 4 */
	Elf32_Off e_phoff; /* 28 4 */
	Elf32_Off e_shoff; /* 32 4 */
	Elf32_Word e_flags; /* 36 4 */
	Elf32_Half e_ehsize; /* 40 2 */
	Elf32_Half e_phentsize; /* 42 2 */
	Elf32_Half e_phnum; /* 44 2 */
	Elf32_Half e_shentsize; /* 46 2 */
	Elf32_Half e_shnum; /* 48 2 */
	Elf32_Half e_shstrndx; /* 50 2 */
} Elf32_Ehdr;

// <004187B2> ../common/modfmt/modfmt_elf.h:88
// member variables: 14
// struct size: 64
typedef struct {
	unsigned char e_ident[16]; /* 0 16 */
	Elf64_Half e_type; /* 16 2 */
	Elf64_Half e_machine; /* 18 2 */
	Elf64_Word e_version; /* 20 4 */
	Elf64_Addr e_entry; /* 24 8 */
	Elf64_Off e_phoff; /* 32 8 */
	Elf64_Off e_shoff; /* 40 8 */
	Elf64_Word e_flags; /* 48 4 */
	Elf64_Half e_ehsize; /* 52 2 */
	Elf64_Half e_phentsize; /* 54 2 */
	Elf64_Half e_phnum; /* 56 2 */
	Elf64_Half e_shentsize; /* 58 2 */
	Elf64_Half e_shnum; /* 60 2 */
	Elf64_Half e_shstrndx; /* 62 2 */
} Elf64_Ehdr;

// <00427D67> ../common/modfmt/modfmt_elf.h:276
// member variables: 10
// struct size: 40
typedef struct {
	Elf32_Word sh_name; /* 0 4 */
	Elf32_Word sh_type; /* 4 4 */
	Elf32_Word sh_flags; /* 8 4 */
	Elf32_Addr sh_addr; /* 12 4 */
	Elf32_Off sh_offset; /* 16 4 */
	Elf32_Word sh_size; /* 20 4 */
	Elf32_Word sh_link; /* 24 4 */
	Elf32_Word sh_info; /* 28 4 */
	Elf32_Word sh_addralign; /* 32 4 */
	Elf32_Word sh_entsize; /* 36 4 */
} Elf32_Shdr;

// <00427E28> ../common/modfmt/modfmt_elf.h:290
// member variables: 10
// struct size: 64
typedef struct {
	Elf64_Word sh_name; /* 0 4 */
	Elf64_Word sh_type; /* 4 4 */
	Elf64_Xword sh_flags; /* 8 8 */
	Elf64_Addr sh_addr; /* 16 8 */
	Elf64_Off sh_offset; /* 24 8 */
	Elf64_Xword sh_size; /* 32 8 */
	Elf64_Word sh_link; /* 40 4 */
	Elf64_Word sh_info; /* 44 4 */
	Elf64_Xword sh_addralign; /* 48 8 */
	Elf64_Xword sh_entsize; /* 56 8 */
} Elf64_Shdr;

// <00427EE9> ../common/modfmt/modfmt_elf.h:410
// member variables: 6
// struct size: 16
typedef struct {
	Elf32_Word st_name; /* 0 4 */
	Elf32_Addr st_value; /* 4 4 */
	Elf32_Word st_size; /* 8 4 */
	unsigned char st_info; /* 12 1 */
	unsigned char st_other; /* 13 1 */
	Elf32_Section st_shndx; /* 14 2 */
} Elf32_Sym;

// <00427F65> ../common/modfmt/modfmt_elf.h:420
// member variables: 6
// struct size: 24
typedef struct {
	Elf64_Word st_name; /* 0 4 */
	unsigned char st_info; /* 4 1 */
	unsigned char st_other; /* 5 1 */
	Elf64_Section st_shndx; /* 6 2 */
	Elf64_Addr st_value; /* 8 8 */
	Elf64_Xword st_size; /* 16 8 */
} Elf64_Sym;

// <00427FE1> ../common/modfmt/modfmt_elf.h:570
// member variables: 8
// struct size: 32
typedef struct {
	Elf32_Word p_type; /* 0 4 */
	Elf32_Off p_offset; /* 4 4 */
	Elf32_Addr p_vaddr; /* 8 4 */
	Elf32_Addr p_paddr; /* 12 4 */
	Elf32_Word p_filesz; /* 16 4 */
	Elf32_Word p_memsz; /* 20 4 */
	Elf32_Word p_flags; /* 24 4 */
	Elf32_Word p_align; /* 28 4 */
} Elf32_Phdr;

// <0041889E> ../common/modfmt/modfmt_elf.h:582
// member variables: 8
// struct size: 56
typedef struct {
	Elf64_Word p_type; /* 0 4 */
	Elf64_Word p_flags; /* 4 4 */
	Elf64_Off p_offset; /* 8 8 */
	Elf64_Addr p_vaddr; /* 16 8 */
	Elf64_Addr p_paddr; /* 24 8 */
	Elf64_Xword p_filesz; /* 32 8 */
	Elf64_Xword p_memsz; /* 40 8 */
	Elf64_Xword p_align; /* 48 8 */
} Elf64_Phdr;

