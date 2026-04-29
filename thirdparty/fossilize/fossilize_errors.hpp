
//
// thirdparty/fossilize/fossilize_errors.hpp
//
//	referenced by: librendersystemvulkan.so
//
//	functions: 12
//

// <019A1C41> thirdparty/fossilize/fossilize_errors.hpp:81
// variables: 4
// function calls: 109
void log_error_pnext_chain(string what, const void* pNext)
{
	basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 422
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_check_length(
			size_type __n1,
			size_type __n2,
			const char* __s);  // 1584
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 1279
	basic_string<char, std::char_traits<char>, std::allocator<char> >::capacity(); // 449
	copy(char_type* __s1,
		const char_type* __s2,
		size_t __n);  // 453
	_S_copy(char* __d,
		const char* __s,
		size_type __n);  // 448
	_S_copy(char* __d,
		const char* __s,
		size_type __n);  // 452
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
			size_type __length);  // 272
	assign(char_type& __c1,
		const char_type& __c2);  // 273
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
			size_type __n);  // 457
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_append(
			const char* __s,
			size_type __n);  // 1585
	basic_string<char, std::char_traits<char>, std::allocator<char> >::append(
		const char* __s);  // 1488
	basic_string<char, std::char_traits<char>, std::allocator<char> >::operator+=(
			const char* __s);  // 83
	{
		const VkBaseInStructure* next; // 86
		__to_chars_len<unsigned int>(unsigned int __value,
						int __base);  // 4537
		{
			const unsigned int  __num; // 98
		}
		{
			const unsigned int  __num; // 106
		}
		__to_chars_10_impl<unsigned int>(char* __first,
						unsigned int __len,
						unsigned int __val);  // 4541
		operator()(const class* __closure,
				char* __p,
				size_t __n); // 633
		__new_allocator<char>::allocate(
			size_type __n,
			const void  *);  // 203
		allocator<char>::allocate(
			size_t __n);  // 614
		allocate(allocator_type& __a,
			size_type __n);  // 142
		_S_allocate(_Char_alloc_type& __a,
				size_type __n);  // 164
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_create(
				size_type& __capacity,
				size_type __old_capacity);  // 346
		assign(char_type& __c1,
			const char_type& __c2);  // 451
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 347
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_capacity(
				size_type __capacity);  // 350
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(
			pointer __p);  // 349
		basic_string<char, std::char_traits<char>, std::allocator<char> >::reserve(
			size_type __res);  // 621
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 272
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 628
		_Terminator::~_Terminator(); // 644
		basic_string<char, std::char_traits<char>, std::allocator<char> >::__resize_and_overwrite<std::__cxx11::to_string(
													const size_type  __n,
													 __op);  // 4539
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 590
		__new_allocator<char>::__new_allocator(
				const __new_allocator<char>  &);  // 173
		allocator<char>::allocator(
				const allocator<char>& __a);  // 209
		_Alloc_hider::_Alloc_hider(
				pointer __dat,
				allocator<char>& __a);  // 590
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 593
		allocator<char>::~allocator(); // 590
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_init_local_buf(); // 592
		basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string(); // 4538
		to_string(int __val); // 87
		basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 1536
		basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 422
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_check_length(
				size_type __n1,
				size_type __n2,
				const char* __s);  // 1569
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 1279
		basic_string<char, std::char_traits<char>, std::allocator<char> >::capacity(); // 449
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 453
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 448
		assign(char_type& __c1,
			const char_type& __c2);  // 451
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 452
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 272
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 457
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_append(
				const char* __s,
				size_type __n);  // 1570
		basic_string<char, std::char_traits<char>, std::allocator<char> >::append(
			const char* __s,
			size_type __n);  // 1536
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 1536
		basic_string<char, std::char_traits<char>, std::allocator<char> >::append(
			const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 1478
		basic_string<char, std::char_traits<char>, std::allocator<char> >::operator+=(
				const basic_string<char, std::char_traits<char>, std::allocator<char> >& __str);  // 87
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_local_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 298
		__new_allocator<char>::deallocate(
				char* __p,
				size_type __n);  // 215
		allocator<char>::deallocate(
				char* __p,
				size_t __n);  // 649
		deallocate(allocator_type& __a,
				pointer __p,
				size_type __n);  // 305
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_destroy(
				size_type __size);  // 299
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_dispose(); // 896
		allocator<char>::~allocator(); // 197
		_Alloc_hider::~_Alloc_hider(); // 896
		basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string(); // 87
		basic_string<char, std::char_traits<char>, std::allocator<char> >::size(); // 422
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_check_length(
				size_type __n1,
				size_type __n2,
				const char* __s);  // 1584
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 1279
		basic_string<char, std::char_traits<char>, std::allocator<char> >::capacity(); // 449
		copy(char_type* __s1,
			const char_type* __s2,
			size_t __n);  // 453
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 448
		_S_copy(char* __d,
			const char* __s,
			size_type __n);  // 452
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
				size_type __length);  // 272
		assign(char_type& __c1,
			const char_type& __c2);  // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
				size_type __n);  // 457
		basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_append(
				const char* __s,
				size_type __n);  // 1585
		basic_string<char, std::char_traits<char>, std::allocator<char> >::append(
			const char* __s);  // 1488
		basic_string<char, std::char_traits<char>, std::allocator<char> >::operator+=(
				const char* __s);  // 90
	}
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_check_length(
			size_type __n1,
			size_type __n2,
			const char* __s);  // 1584
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 280
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_is_local(); // 1279
	basic_string<char, std::char_traits<char>, std::allocator<char> >::capacity(); // 449
	copy(char_type* __s1,
		const char_type* __s2,
		size_t __n);  // 453
	_S_copy(char* __d,
		const char* __s,
		size_type __n);  // 448
	_S_copy(char* __d,
		const char* __s,
		size_type __n);  // 452
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_length(
			size_type __length);  // 272
	assign(char_type& __c1,
		const char_type& __c2);  // 273
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 273
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_set_length(
			size_type __n);  // 457
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_append(
			const char* __s,
			size_type __n);  // 1585
	basic_string<char, std::char_traits<char>, std::allocator<char> >::append(
		const char* __s);  // 1488
	basic_string<char, std::char_traits<char>, std::allocator<char> >::operator+=(
			const char* __s);  // 92
	get_thread_log_level(void); // 93
	basic_string<char, std::char_traits<char>, std::allocator<char> >::_M_data(); // 2874
	basic_string<char, std::char_traits<char>, std::allocator<char> >::c_str(); // 93
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 93
	log_error_pnext_chain(string what,
				const void* pNext);  // 81
} /* size: 0, inline expansions: 35 (1417 bytes) */

// <0198A114> thirdparty/fossilize/fossilize_errors.hpp:81
// variable: 1
inline void log_error_pnext_chain(string what, const void* pNext)
{
	{
		const VkBaseInStructure* next; // 86
	}
} /* size: 0 */

// <01992121> thirdparty/fossilize/fossilize_errors.hpp:96
// function calls: 3
void log_missing_resource(const char* type, Hash hash)
{
	get_thread_log_level(void); // 98
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 98
	log_missing_resource(const char* type,
				Hash hash);  // 96
} /* size: 116, inline expansions: 3 (75 bytes) */

// <0198A0F1> thirdparty/fossilize/fossilize_errors.hpp:96
inline void log_missing_resource(const char* type, Hash hash)
{
} /* size: 0 */

// <01992238> thirdparty/fossilize/fossilize_errors.hpp:107
// function calls: 3
void log_invalid_resource(const char* type, Hash hash)
{
	get_thread_log_level(void); // 109
	fprintf(FILE* __stream,
		const char* __fmt, ...);  // 109
	log_invalid_resource(const char* type,
				Hash hash);  // 107
} /* size: 116, inline expansions: 3 (75 bytes) */

// <0198A0CE> thirdparty/fossilize/fossilize_errors.hpp:107
inline void log_invalid_resource(const char* type, Hash hash)
{
} /* size: 0 */

// <018CBBEF> thirdparty/fossilize/fossilize_errors.hpp:116
inline void log_failed_hash<VkPipeline_T*>(const char* type, VkPipeline_T* object)
{
} /* size: 0 */

// <018CBB3B> thirdparty/fossilize/fossilize_errors.hpp:116
inline void log_failed_hash<VkSampler_T*>(const char* type, VkSampler_T* object)
{
} /* size: 0 */

// <018CBA87> thirdparty/fossilize/fossilize_errors.hpp:116
void log_failed_hash<VkShaderModule_T*>(const char* type, VkShaderModule_T* object)
{
} /* size: 0 */

// <018CB9D3> thirdparty/fossilize/fossilize_errors.hpp:116
void log_failed_hash<VkPipelineLayout_T*>(const char* type, VkPipelineLayout_T* object)
{
} /* size: 0 */

// <018CB91F> thirdparty/fossilize/fossilize_errors.hpp:116
void log_failed_hash<VkDescriptorSetLayout_T*>(const char* type, VkDescriptorSetLayout_T* object)
{
} /* size: 0 */

// <018CB86B> thirdparty/fossilize/fossilize_errors.hpp:116
void log_failed_hash<VkRenderPass_T*>(const char* type, VkRenderPass_T* object)
{
} /* size: 0 */

