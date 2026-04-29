
//
// thirdparty/json_parser/json_parser.c
//
//	referenced by: libtier0.so
//
//	functions: 12
//	struct: 1
//

// <00524EB4> ../thirdparty/json_parser/json_parser.c:123
// member variables: 24
// struct size: 3,728
struct JSON_parser_struct {
	JSON_parser_callback callback; /* 0 8 */
	void * ctx; /* 8 8 */
	signed char state; /* 16 1 */
	signed char before_comment_state; /* 17 1 */
	signed char type; /* 18 1 */
	signed char escaped; /* 19 1 */
	signed char comment; /* 20 1 */
	signed char allow_comments; /* 21 1 */
	signed char handle_floats_manually; /* 22 1 */
	signed char error; /* 23 1 */
	char decimal_point; /* 24 1 */
	UTF16 utf16_high_surrogate; /* 26 2 */
	int current_char; /* 28 4 */
	int depth; /* 32 4 */
	int top; /* 36 4 */
	int stack_capacity; /* 40 4 */
	signed char * stack; /* 48 8 */
	char * parse_buffer; /* 56 8 */
	size_t parse_buffer_capacity; /* 64 8 */
	size_t parse_buffer_count; /* 72 8 */
	signed char static_stack[128]; /* 80 128 */
	char static_parse_buffer[3500]; /* 208 3500 */
	JSON_malloc_t malloc; /* 3712 8 */
	JSON_free_t free; /* 3720 8 */
};

// <00527293> ../thirdparty/json_parser/json_parser.c:335
void set_error(JSON_parser jc)
{
} /* size: 186 */

// <00527172> ../thirdparty/json_parser/json_parser.c:379
// variables: 4
// function call: 1
int push(JSON_parser jc, int mode)
{
	{
		const size_t  bytes_to_copy; // 388
		const size_t  new_capacity; // 389
		const size_t  bytes_to_allocate; // 390
		void* mem; // 391
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 397
	}
} /* size: 232 */

// <00527146> ../thirdparty/json_parser/json_parser.c:415
int pop(JSON_parser jc, int mode)
{
} /* size: 0 */

// <0052707C> ../thirdparty/json_parser/json_parser.c:457
// variable: 1
int JSON_parser_reset(JSON_parser jc)
{
	{
		const size_t  bytes_to_alloc; // 475
	}
} /* size: 195 */

// <00526E0C> ../thirdparty/json_parser/json_parser.c:556
// variables: 4
int parse_buffer_grow(JSON_parser jc)
{
	const size_t  bytes_to_copy; // 558
	const size_t  new_capacity; // 559
	const size_t  bytes_to_allocate; // 560
	void* mem; // 561
} /* size: 0, variables: 4 */

// <00526CEA> ../thirdparty/json_parser/json_parser.c:581
// function calls: 2
int parse_buffer_reserve_for(JSON_parser jc, unsigned int chars)
{
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 569
	parse_buffer_grow(JSON_parser jc); // 584
} /* size: 180, inline expansions: 2 (89 bytes) */

// <00526C34> ../thirdparty/json_parser/json_parser.c:613
// variables: 2
int parse_parse_buffer(JSON_parser jc)
{
	{
		JSON_value value; // 616
		JSON_value* arg; // 616
	}
} /* size: 278 */

// <00526BD9> ../thirdparty/json_parser/json_parser.c:659
// variables: 5
int decode_unicode_char(JSON_parser jc)
{
	int i; // 661
	unsigned int uc; // 662
	char* p; // 663
	int trail_bytes; // 664
	{
		unsigned int x; // 671
	}
} /* size: 0, variables: 4 */

// <00526BAD> ../thirdparty/json_parser/json_parser.c:728
int add_escaped_char_to_parse_buffer(JSON_parser jc, int next_char)
{
} /* size: 0 */

// <00526B74> ../thirdparty/json_parser/json_parser.c:771
int add_char_to_parse_buffer(JSON_parser jc, int next_char, int next_class)
{
} /* size: 0 */

// <00526551> ../thirdparty/json_parser/json_parser.c:1186
// variables: 2
int JSON_parser_is_legal_white_space_string(const char* s)
{
	int c; // 1188
	int char_class; // 1188
} /* size: 0, variables: 2 */

// <0052651C> ../thirdparty/json_parser/json_parser.c:1211
int JSON_parser_get_last_error(JSON_parser jc)
{
} /* size: 0 */

