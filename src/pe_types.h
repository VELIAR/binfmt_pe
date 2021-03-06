#ifndef PE_TYPES_H
#define PE_TYPES_H

#ifdef __KERNEL__
#include <linux/types.h>
#else
#include <inttypes.h>
#endif

struct image_import_descriptor_t {
	uint32_t original_first_thunk;
	uint32_t time_date_stamp;
	uint32_t forwarder_chain;
	uint32_t name;
	uint32_t first_thunk;
};

/* list of machine types to be used in the characteristics field
 * in struct coff_section_header_t.
 */
#define IMAGE_SCN_RESERVED0					0x00000000
#define IMAGE_SCN_RESERVED1					0x00000001
#define IMAGE_SCN_RESERVED2					0x00000002
#define IMAGE_SCN_RESERVED3					0x00000004
#define IMAGE_SCN_TYPE_NO_PAD				0x00000008
#define IMAGE_SCN_RESERVED4					0x00000010
#define IMAGE_SCN_CNT_CODE					0x00000020
#define IMAGE_SCN_CNT_INITIALIZED_DATA		0x00000040
#define IMAGE_SCN_CNT_UNINITIALIZED_DATA	0x00000080
#define IMAGE_SCN_LNK_OTHER					0x00000100
#define IMAGE_SCN_LNK_INFO					0x00000200
#define IMAGE_SCN_RESERVED5					0x00000400
#define IMAGE_SCN_LNK_REMOVE				0x00000800
#define IMAGE_SCN_LNK_COMDAT				0x00001000
#define IMAGE_SCN_GPREL						0x00008000
#define IMAGE_SCN_MEM_PURGEABLE				0x00020000
#define IMAGE_SCN_MEM_16BIT					0x00020000
#define IMAGE_SCN_MEM_LOCKED				0x00040000 /* Reserved for future use. */
#define IMAGE_SCN_MEM_PRELOAD				0x00080000 /* Reserved for future use. */
#define IMAGE_SCN_ALIGN_1BYTES				0x00100000
#define IMAGE_SCN_ALIGN_2BYTES				0x00200000
#define IMAGE_SCN_ALIGN_4BYTES				0x00300000
#define IMAGE_SCN_ALIGN_8BYTES				0x00400000
#define IMAGE_SCN_ALIGN_16BYTES				0x00500000
#define IMAGE_SCN_ALIGN_32BYTES				0x00600000
#define IMAGE_SCN_ALIGN_64BYTES				0x00700000
#define IMAGE_SCN_ALIGN_128BYTES			0x00800000
#define IMAGE_SCN_ALIGN_256BYTES			0x00900000
#define IMAGE_SCN_ALIGN_512BYTES			0x00A00000
#define IMAGE_SCN_ALIGN_1024BYTES			0x00B00000
#define IMAGE_SCN_ALIGN_2048BYTES			0x00C00000
#define IMAGE_SCN_ALIGN_4096BYTES			0x00D00000
#define IMAGE_SCN_ALIGN_8192BYTES			0x00E00000
#define IMAGE_SCN_LNK_NRELOC_OVFL			0x01000000
#define IMAGE_SCN_MEM_DISCARDABLE			0x02000000
#define IMAGE_SCN_MEM_NOT_CACHED			0x04000000
#define IMAGE_SCN_MEM_NOT_PAGED				0x08000000
#define IMAGE_SCN_MEM_SHARED				0x10000000
#define IMAGE_SCN_MEM_EXECUTE				0x20000000
#define IMAGE_SCN_MEM_READ					0x40000000
#define IMAGE_SCN_MEM_WRITE					0x80000000



struct coff_section_header_t {
	char name[8];
	uint32_t virtual_size;
	uint32_t virtual_address;
	uint32_t size_of_raw_data;
	uint32_t pointer_to_raw_data;
	uint32_t pointer_to_relocations;
	uint32_t pointer_to_line_numbers;
	uint16_t number_of_relocations;
	uint16_t number_of_line_numbers;
	uint32_t characteristics;
};


/* list of machine types to be used in the machine field
 * in struct coff_header_t.
 */
#define IMAGE_FILE_MACHINE_UNKNOWN		0x0
#define IMAGE_FILE_MACHINE_AM33			0x1d3
#define IMAGE_FILE_MACHINE_AMD64		0x8664
#define IMAGE_FILE_MACHINE_ARM			0x1c0
#define IMAGE_FILE_MACHINE_ARMNT		0x1c4
#define IMAGE_FILE_MACHINE_ARM64		0xaa64
#define IMAGE_FILE_MACHINE_EBC			0xebc
#define IMAGE_FILE_MACHINE_I386			0x14c
#define IMAGE_FILE_MACHINE_IA64			0x200
#define IMAGE_FILE_MACHINE_M32R			0x9041
#define IMAGE_FILE_MACHINE_MIPS16		0x266
#define IMAGE_FILE_MACHINE_MIPSFPU		0x366
#define IMAGE_FILE_MACHINE_MIPSFPU16	0x466
#define IMAGE_FILE_MACHINE_POWERPC		0x1f0
#define IMAGE_FILE_MACHINE_POWERPCFP	0x1f1
#define IMAGE_FILE_MACHINE_R4000		0x166
#define IMAGE_FILE_MACHINE_SH3			0x1a2
#define IMAGE_FILE_MACHINE_SH3DSP		0x1a3
#define IMAGE_FILE_MACHINE_SH4			0x1a6
#define IMAGE_FILE_MACHINE_SH5			0x1a8
#define IMAGE_FILE_MACHINE_THUMB		0x1c2
#define IMAGE_FILE_MACHINE_WCEMIPSV2	0x169

/* list of flags to be used in the characteristics files
 * in struct coff_header_t.
 */
#define IMAGE_FILE_RELOCS_STRIPPED          0x0001
#define IMAGE_FILE_EXECUTABLE_IMAGE         0x0002
#define IMAGE_FILE_LINE_NUMS_STRIPPED       0x0004
#define IMAGE_FILE_LOCAL_SYMS_STRIPPED      0x0008
#define IMAGE_FILE_AGGRESSIVE_WS_TRIM       0x0010
#define IMAGE_FILE_LARGE_ADDRESS_AWARE      0x0020
#define IMAGE_FILE_RESERVED                 0x0040 /* not used */
#define IMAGE_FILE_BYTES_REVERSED_LO        0x0080
#define IMAGE_FILE_32BIT_MACHINE            0x0100
#define IMAGE_FILE_DEBUG_STRIPPED           0x0200
#define IMAGE_FILE_REMOVABLE_RUN_FROM_SWAP  0x0400
#define IMAGE_FILE_NET_RUN_FROM_SWAP        0x0800
#define IMAGE_FILE_SYSTEM                   0x1000
#define IMAGE_FILE_DLL                      0x2000
#define IMAGE_FILE_UP_SYSTEM_ONLY           0x4000
#define IMAGE_FILE_BYTES_REVERSED_HI        0x8000

/* list of flags to be used in the subsystem field
 * in struct coff_optional_header_pe32_t and
 * struct coff_optional_header_pe32plus_t
 */
#define IMAGE_SUBSYSTEM_UNKNOWN					0
#define IMAGE_SUBSYSTEM_NATIVE					1
#define IMAGE_SUBSYSTEM_WINDOWS_GUI				2
#define IMAGE_SUBSYSTEM_WINDOWS_CUI				3
#define IMAGE_SUBSYSTEM_POSIX_CUI				7
#define IMAGE_SUBSYSTEM_WINDOWS_CE_GUI			9
#define IMAGE_SUBSYSTEM_EFI_APPLICATION			10
#define IMAGE_SUBSYSTEM_EFI_BOOT_SERVICE_DRIVER	11
#define IMAGE_SUBSYSTEM_EFI_RUNTIME_DRIVER		12
#define IMAGE_SUBSYSTEM_EFI_ROM					13
#define IMAGE_SUBSYSTEM_XBOX					14

/* list of flags to be used in the dll_characteristics field
 * in struct coff_optional_header_pe32_t and
 * struct coff_optional_header_pe32plus_t
 */
#define IMAGE_DLL_CHARACTERISTICS_RESERVED_0			0x0001
#define IMAGE_DLL_CHARACTERISTICS_RESERVED_1			0x0002
#define IMAGE_DLL_CHARACTERISTICS_RESERVED_2			0x0004
#define IMAGE_DLL_CHARACTERISTICS_RESERVED_3			0x0008
#define IMAGE_DLL_CHARACTERISTICS_DYNAMIC_BASE			0x0040
#define IMAGE_DLL_CHARACTERISTICS_FORCE_INTEGRITY		0x0080
#define IMAGE_DLL_CHARACTERISTICS_NX_COMPAT				0x0100
#define IMAGE_DLL_CHARACTERISTICS_NO_ISOLATION			0x0200
#define IMAGE_DLL_CHARACTERISTICS_NO_SEH				0x0400
#define IMAGE_DLL_CHARACTERISTICS_NO_BIND				0x0800
#define IMAGE_DLL_CHARACTERISTICS_RESERVED_4			0x1000
#define IMAGE_DLL_CHARACTERISTICS_WDM_DRIVER			0x2000
#define IMAGE_DLL_CHARACTERISTICS_TERMINAL_SERVER_AWARE	0x8000

/* header value that identifiers the type of pe32
 * optional header that has been used
 */
#define IMAGE_OPTIONAL_MAGIC_EXE						0x10b
#define IMAGE_OPTIONAL_MAGIC_ROM						0x107
#define IMAGE_OPTIONAL_MAGIC_PE32PLUS_EXE				0x20b

#define DIRECTORY_EXPORT_TABLE							0x0
#define DIRECTORY_IMPORT_TABLE							0x1
#define DIRECTORY_RESOURCE_TABLE						0x2
#define DIRECTORY_EXCEPTION_TABLE						0x3
#define DIRECTORY_CERTIFICATE_TABLE						0x4
#define DIRECTORY_BASE_RELOCATION_TABLE					0x5
#define DIRECTORY_DEBUG									0x6
#define DIRECTORY_ARCHITECTURE							0x7
#define DIRECTORY_GLOBAL_POINTER						0x8
#define DIRECTORY_TLS_TABLE								0x9
#define DIRECTORY_LOAD_CONFIG_TABLE						0xa
#define DIRECTORY_BOUND_IMPORT							0xb
#define DIRECTORY_IAT									0xc
#define DIRECTORY_DELAY_IMPORT_DESCRIPTOR				0xd
#define DIRECTORY_CLR_RUNTIME_HEADER					0xe
#define DIRECTORY_RESERVED								0xf

#define IMAGE_NUMBEROF_DIRECTORY_ENTRIES 17

struct coff_data_directory_t {
	uint32_t virtual_address;
	uint32_t size;
};

#define COFF_OPTIONAL_HEADER(PE_NAME, PE_TYPE, LINE1)	\
struct coff_optional_header_ ## PE_NAME ## _t {			\
	uint16_t magic_number;								\
	struct {											\
		uint8_t major;									\
		uint8_t minor;									\
	} linker_version;									\
	uint32_t size_of_code;								\
	uint32_t size_of_initialized_data;					\
	uint32_t size_of_uninitialized_data;				\
	uint32_t size_of_entry_point;						\
	LINE1;												\
	uint32_t base_of_data;								\
	PE_TYPE image_base;									\
	uint32_t section_alignment;							\
	uint32_t file_alignment;							\
	struct {											\
		uint16_t major;									\
		uint16_t minor;									\
	} os_version;										\
	struct {											\
		uint16_t major;									\
		uint16_t minor;									\
	} image_version;									\
	struct {											\
		uint16_t major;									\
		uint16_t minor;									\
	} subsystem_version;								\
	uint32_t win32_version_value;	/* reserved */		\
	uint32_t size_of_image;								\
	uint32_t size_of_headers;							\
	uint32_t check_sum;									\
	uint16_t subsystem;									\
	uint16_t dll_characteristics;						\
	struct {											\
		PE_TYPE reserve;								\
		PE_TYPE commit;									\
	} size_of_stack;									\
	struct {											\
		PE_TYPE reserve;								\
		PE_TYPE commit;									\
	} size_of_heap;										\
	uint32_t loader_flags;		/* reserved, 0 */		\
	uint32_t number_of_rvas;							\
	struct coff_data_directory_t entry[IMAGE_NUMBEROF_DIRECTORY_ENTRIES];	\
};

COFF_OPTIONAL_HEADER(pe32, uint32_t, uint32_t base_of_code)
COFF_OPTIONAL_HEADER(pe32plus, uint64_t, )


#define DOS_MAGIC_NUMBER 0x5a4d

struct image_dos_header_t {	/* DOS .EXE header */
	uint16_t e_magic;		/* DOS_MAGIC_NUMBER */
	uint16_t e_cblp;		/* Bytes on last page of file */
	uint16_t e_cp;			/* Pages in file */
	uint16_t e_crlc;		/* Relocations */
	uint16_t e_cparhdr;		/* Size of header in paragraphs */
	uint16_t e_minalloc;	/* Minimum extra paragraphs needed */
	uint16_t e_maxalloc;	/* Maximum extra paragraphs needed */
	uint16_t e_ss;			/* Initial (relative) SS value */
	uint16_t e_sp;			/* Initial SP value */
	uint16_t e_csum;		/* Checksum */
	uint16_t e_ip;			/* Initial IP value */
	uint16_t e_cs;			/* Initial (relative) CS value */
	uint16_t e_lfarlc;		/* File address of relocation table */
	uint16_t e_ovno;		/* Overlay number */
	uint16_t e_res[4];		/* Reserved words */
	uint16_t e_oemid;		/* OEM identifier (for e_oeminfo) */
	uint16_t e_oeminfo;		/* OEM information; e_oemid specific */
	uint16_t e_res2[10];	/* Reserved words */
	uint32_t e_lfanew;		/* File address of new exe header */
};

/* magic number that has to be in the field e_magic in
 * struct image_dos_header_t to validate the executable
 * is a valid pe format.
 */
#define PE_SIGNATURE 0x4550

/**
 * @brief The coff_header_t struct sizeof() == 18
 */
struct coff_header_t {
	uint32_t pe_signature;				/* PE_SIGNATURE */
	uint16_t machine;					/* machine architecture enumeration */
	uint16_t number_of_sections;		/* size of section table following headers */
	uint32_t time_date_stamp;			/* low 32bits of the number of seconds since epoch */
	uint32_t pointer_to_symbol_table;	/* file offset of coff symbol table */
	uint32_t number_of_symbols;			/* number of entries in the symbol table */
	uint16_t size_of_optional_header;	
	uint16_t characteristics;
};



#endif // PE_TYPES_H
