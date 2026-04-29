
//
// thirdparty/json_parser/json_parser.h
//
//	referenced by: libtier0.so
//
//	functions: 6
//	structs: 2
//

// <0023578B> ../thirdparty/json_parser/json_parser.h:78
// member variable: 1
// struct size: 16
struct JSON_value_struct {
	/* ../thirdparty/json_parser/json_parser.h:79 */
	union {
		JSON_int_t integer_value; /* 0 8 */
		double float_value; /* 0 8 */
		struct {
			const char * value; /* 0 8 */
			size_t length; /* 8 8 */
		} str; /* 0 16 */
	};
	union {
		JSON_int_t integer_value; /* 0 8 */
		double float_value; /* 0 8 */
		struct {
			const char * value; /* 0 8 */
			size_t length; /* 8 8 */
		} str; /* 0 16 */
	} vu; /* 0 16 */
};

// <0023587B> ../thirdparty/json_parser/json_parser.h:118
// member variables: 7
// struct size: 48
typedef struct {
	JSON_parser_callback callback; /* 0 8 */
	void * callback_ctx; /* 8 8 */
	int depth; /* 16 4 */
	int allow_comments; /* 20 4 */
	int handle_floats_manually; /* 24 4 */
	JSON_malloc_t malloc; /* 32 8 */
	JSON_free_t free; /* 40 8 */
} JSON_config;

// <00237241> ../thirdparty/json_parser/json_parser.h:175
void init_JSON_config(JSON_config *)
{
} /* size: 0 */

// <0023720B> ../thirdparty/json_parser/json_parser.h:187
JSON_parser new_JSON_parser(const JSON_config *)
{
} /* size: 0 */

// <002371A0> ../thirdparty/json_parser/json_parser.h:190
void delete_JSON_parser(JSON_parser)
{
} /* size: 0 */

// <002371EE> ../thirdparty/json_parser/json_parser.h:196
int JSON_parser_char(JSON_parser, int)
{
} /* size: 0 */

// <002371CC> ../thirdparty/json_parser/json_parser.h:202
int JSON_parser_string(JSON_parser, const char *, int)
{
} /* size: 0 */

// <002371B4> ../thirdparty/json_parser/json_parser.h:210
int JSON_parser_done(JSON_parser)
{
} /* size: 0 */

