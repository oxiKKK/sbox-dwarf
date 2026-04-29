
//
// thirdparty/mimalloc/src/stats.c
//
//	referenced by: libtier0.so
//
//	functions: 76
//	structs: 3
//

// <0033BB40> ../thirdparty/mimalloc/src/stats.c:23
// variable: 1
// function calls: 11
void mi_stat_update_mt(mi_stat_count_t* stat, int64_t amount)
{
	int64_t current; // 26
	__atomic_base<long int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1502
	atomic_fetch_add_explicit<long int>(atomic<long int>* __a,
						__atomic_diff_t __i,
						memory_order __m);  // 136
	mi_atomic_addi64_relaxed(volatile int64_t* p,
				int64_t add);  // 26
	__atomic_base<long int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long int>(const atomic<long int>* __a,
					memory_order __m);  // 145
	__atomic_base<long int>::compare_exchange_weak(
				__int_type& __i1,
				__int_type __i2,
				memory_order __m1,
				memory_order __m2);  // 1362
	atomic_compare_exchange_weak_explicit<long int>(atomic<long int>* __a,
							__atomic_val_t* __i1,
							__atomic_val_t __i2,
							memory_order __m1,
							memory_order __m2);  // 146
	mi_atomic_maxi64_relaxed(volatile int64_t* p,
				int64_t x);  // 27
	__atomic_base<long int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1502
	atomic_fetch_add_explicit<long int>(atomic<long int>* __a,
						__atomic_diff_t __i,
						memory_order __m);  // 136
	mi_atomic_addi64_relaxed(volatile int64_t* p,
				int64_t add);  // 29
} /* size: 53, variables: 1, inline expansions: 11 (94 bytes) */

// <002DA079> ../thirdparty/mimalloc/src/stats.c:23
// variable: 1
void mi_stat_update_mt(mi_stat_count_t* stat, int64_t amount)
{
	int64_t current; // 26
} /* size: 0, variables: 1 */

// <002DA053> ../thirdparty/mimalloc/src/stats.c:33
void mi_stat_update(mi_stat_count_t* stat, int64_t amount)
{
} /* size: 0 */

// <002DA028> ../thirdparty/mimalloc/src/stats.c:42
void __mi_stat_counter_increase_mt(mi_stat_counter_t* stat, size_t amount)
{
} /* size: 0 */

// <002D9FFD> ../thirdparty/mimalloc/src/stats.c:46
void __mi_stat_counter_increase(mi_stat_counter_t* stat, size_t amount)
{
} /* size: 0 */

// <002D9FD2> ../thirdparty/mimalloc/src/stats.c:50
void __mi_stat_increase_mt(mi_stat_count_t* stat, size_t amount)
{
} /* size: 0 */

// <002D9FA7> ../thirdparty/mimalloc/src/stats.c:53
void __mi_stat_increase(mi_stat_count_t* stat, size_t amount)
{
} /* size: 0 */

// <002D9F7C> ../thirdparty/mimalloc/src/stats.c:57
void __mi_stat_decrease_mt(mi_stat_count_t* stat, size_t amount)
{
} /* size: 0 */

// <002D9F51> ../thirdparty/mimalloc/src/stats.c:60
void __mi_stat_decrease(mi_stat_count_t* stat, size_t amount)
{
} /* size: 0 */

// <002D9F2B> ../thirdparty/mimalloc/src/stats.c:68
void mi_stat_adjust_mt(mi_stat_count_t* stat, int64_t amount)
{
} /* size: 0 */

// <002D9F05> ../thirdparty/mimalloc/src/stats.c:75
void mi_stat_adjust(mi_stat_count_t* stat, int64_t amount)
{
} /* size: 0 */

// <002D9EDA> ../thirdparty/mimalloc/src/stats.c:81
void __mi_stat_adjust_increase_mt(mi_stat_count_t* stat, size_t amount)
{
} /* size: 0 */

// <002D9E1B> ../thirdparty/mimalloc/src/stats.c:84
// function calls: 2
void __mi_stat_adjust_increase(mi_stat_count_t* stat, size_t amount)
{
	mi_stat_adjust(mi_stat_count_t* stat,
			int64_t amount);  // 75
	mi_stat_adjust(mi_stat_count_t* stat,
			int64_t amount);  // 85
} /* size: 0, inline expansions: 2 (0 bytes) */

// <002D9DF0> ../thirdparty/mimalloc/src/stats.c:87
void __mi_stat_adjust_decrease_mt(mi_stat_count_t* stat, size_t amount)
{
} /* size: 0 */

// <002D9DC5> ../thirdparty/mimalloc/src/stats.c:90
void __mi_stat_adjust_decrease(mi_stat_count_t* stat, size_t amount)
{
} /* size: 0 */

// <0033BE75> ../thirdparty/mimalloc/src/stats.c:96
// variable: 1
// function calls: 13
void mi_stat_count_add_mt(mi_stat_count_t* stat, const mi_stat_count_t* src)
{
	const int64_t  prev_current; // 99
	__atomic_base<long int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long int>(const atomic<long int>* __a,
					memory_order __m);  // 139
	__atomic_base<long int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1502
	atomic_fetch_add_explicit<long int>(atomic<long int>* __a,
						__atomic_diff_t __i,
						memory_order __m);  // 141
	mi_atomic_void_addi64_relaxed(volatile int64_t* p,
					volatile const int64_t* padd);  // 98
	__atomic_base<long int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1502
	atomic_fetch_add_explicit<long int>(atomic<long int>* __a,
						__atomic_diff_t __i,
						memory_order __m);  // 136
	mi_atomic_addi64_relaxed(volatile int64_t* p,
				int64_t add);  // 99
	__atomic_base<long int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long int>(const atomic<long int>* __a,
					memory_order __m);  // 145
	__atomic_base<long int>::compare_exchange_weak(
				__int_type& __i1,
				__int_type __i2,
				memory_order __m1,
				memory_order __m2);  // 1362
	atomic_compare_exchange_weak_explicit<long int>(atomic<long int>* __a,
							__atomic_val_t* __i1,
							__atomic_val_t __i2,
							memory_order __m1,
							memory_order __m2);  // 146
	mi_atomic_maxi64_relaxed(volatile int64_t* p,
				int64_t x);  // 107
} /* size: 54, variables: 1, inline expansions: 13 (106 bytes) */

// <002D9D93> ../thirdparty/mimalloc/src/stats.c:96
// variable: 1
void mi_stat_count_add_mt(mi_stat_count_t* stat, const mi_stat_count_t* src)
{
	const int64_t  prev_current; // 99
} /* size: 0, variables: 1 */

// <002D9D6D> ../thirdparty/mimalloc/src/stats.c:110
void mi_stat_counter_add_mt(mi_stat_counter_t* stat, const mi_stat_counter_t* src)
{
} /* size: 0 */

// <002D7606> ../thirdparty/mimalloc/src/stats.c:119
// variable: 1
// function calls: 142
void mi_stats_add(mi_stats_t* stats, const mi_stats_t* src)
{
	{
		size_t i; // 130
		mi_stat_count_add_mt(mi_stat_count_t* stat,
					const mi_stat_count_t* src);  // 131
	}
	mi_stat_count_add_mt(mi_stat_count_t* stat,
				const mi_stat_count_t* src);  // 123
	mi_stat_count_add_mt(mi_stat_count_t* stat,
				const mi_stat_count_t* src);  // 123
	mi_stat_count_add_mt(mi_stat_count_t* stat,
				const mi_stat_count_t* src);  // 123
	__atomic_base<long int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long int>(const atomic<long int>* __a,
					memory_order __m);  // 139
	__atomic_base<long int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1502
	atomic_fetch_add_explicit<long int>(atomic<long int>* __a,
						__atomic_diff_t __i,
						memory_order __m);  // 141
	mi_atomic_void_addi64_relaxed(volatile int64_t* p,
					volatile const int64_t* padd);  // 112
	mi_stat_counter_add_mt(mi_stat_counter_t* stat,
				const mi_stat_counter_t* src);  // 123
	__atomic_base<long int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long int>(const atomic<long int>* __a,
					memory_order __m);  // 139
	__atomic_base<long int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1502
	atomic_fetch_add_explicit<long int>(atomic<long int>* __a,
						__atomic_diff_t __i,
						memory_order __m);  // 141
	mi_atomic_void_addi64_relaxed(volatile int64_t* p,
					volatile const int64_t* padd);  // 112
	mi_stat_counter_add_mt(mi_stat_counter_t* stat,
				const mi_stat_counter_t* src);  // 123
	mi_stat_count_add_mt(mi_stat_count_t* stat,
				const mi_stat_count_t* src);  // 123
	mi_stat_count_add_mt(mi_stat_count_t* stat,
				const mi_stat_count_t* src);  // 123
	mi_stat_count_add_mt(mi_stat_count_t* stat,
				const mi_stat_count_t* src);  // 123
	mi_stat_count_add_mt(mi_stat_count_t* stat,
				const mi_stat_count_t* src);  // 123
	mi_stat_count_add_mt(mi_stat_count_t* stat,
				const mi_stat_count_t* src);  // 123
	mi_stat_count_add_mt(mi_stat_count_t* stat,
				const mi_stat_count_t* src);  // 123
	__atomic_base<long int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long int>(const atomic<long int>* __a,
					memory_order __m);  // 139
	__atomic_base<long int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1502
	atomic_fetch_add_explicit<long int>(atomic<long int>* __a,
						__atomic_diff_t __i,
						memory_order __m);  // 141
	mi_atomic_void_addi64_relaxed(volatile int64_t* p,
					volatile const int64_t* padd);  // 112
	mi_stat_counter_add_mt(mi_stat_counter_t* stat,
				const mi_stat_counter_t* src);  // 123
	__atomic_base<long int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long int>(const atomic<long int>* __a,
					memory_order __m);  // 139
	__atomic_base<long int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1502
	atomic_fetch_add_explicit<long int>(atomic<long int>* __a,
						__atomic_diff_t __i,
						memory_order __m);  // 141
	mi_atomic_void_addi64_relaxed(volatile int64_t* p,
					volatile const int64_t* padd);  // 112
	mi_stat_counter_add_mt(mi_stat_counter_t* stat,
				const mi_stat_counter_t* src);  // 123
	__atomic_base<long int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long int>(const atomic<long int>* __a,
					memory_order __m);  // 139
	__atomic_base<long int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1502
	atomic_fetch_add_explicit<long int>(atomic<long int>* __a,
						__atomic_diff_t __i,
						memory_order __m);  // 141
	mi_atomic_void_addi64_relaxed(volatile int64_t* p,
					volatile const int64_t* padd);  // 112
	mi_stat_counter_add_mt(mi_stat_counter_t* stat,
				const mi_stat_counter_t* src);  // 123
	__atomic_base<long int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long int>(const atomic<long int>* __a,
					memory_order __m);  // 139
	__atomic_base<long int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1502
	atomic_fetch_add_explicit<long int>(atomic<long int>* __a,
						__atomic_diff_t __i,
						memory_order __m);  // 141
	mi_atomic_void_addi64_relaxed(volatile int64_t* p,
					volatile const int64_t* padd);  // 112
	mi_stat_counter_add_mt(mi_stat_counter_t* stat,
				const mi_stat_counter_t* src);  // 123
	__atomic_base<long int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long int>(const atomic<long int>* __a,
					memory_order __m);  // 139
	__atomic_base<long int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1502
	atomic_fetch_add_explicit<long int>(atomic<long int>* __a,
						__atomic_diff_t __i,
						memory_order __m);  // 141
	mi_atomic_void_addi64_relaxed(volatile int64_t* p,
					volatile const int64_t* padd);  // 112
	mi_stat_counter_add_mt(mi_stat_counter_t* stat,
				const mi_stat_counter_t* src);  // 123
	__atomic_base<long int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long int>(const atomic<long int>* __a,
					memory_order __m);  // 139
	__atomic_base<long int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1502
	atomic_fetch_add_explicit<long int>(atomic<long int>* __a,
						__atomic_diff_t __i,
						memory_order __m);  // 141
	mi_atomic_void_addi64_relaxed(volatile int64_t* p,
					volatile const int64_t* padd);  // 112
	mi_stat_counter_add_mt(mi_stat_counter_t* stat,
				const mi_stat_counter_t* src);  // 123
	__atomic_base<long int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long int>(const atomic<long int>* __a,
					memory_order __m);  // 139
	__atomic_base<long int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1502
	atomic_fetch_add_explicit<long int>(atomic<long int>* __a,
						__atomic_diff_t __i,
						memory_order __m);  // 141
	mi_atomic_void_addi64_relaxed(volatile int64_t* p,
					volatile const int64_t* padd);  // 112
	mi_stat_counter_add_mt(mi_stat_counter_t* stat,
				const mi_stat_counter_t* src);  // 123
	__atomic_base<long int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long int>(const atomic<long int>* __a,
					memory_order __m);  // 139
	__atomic_base<long int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1502
	atomic_fetch_add_explicit<long int>(atomic<long int>* __a,
						__atomic_diff_t __i,
						memory_order __m);  // 141
	mi_atomic_void_addi64_relaxed(volatile int64_t* p,
					volatile const int64_t* padd);  // 112
	mi_stat_counter_add_mt(mi_stat_counter_t* stat,
				const mi_stat_counter_t* src);  // 123
	__atomic_base<long int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long int>(const atomic<long int>* __a,
					memory_order __m);  // 139
	__atomic_base<long int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1502
	atomic_fetch_add_explicit<long int>(atomic<long int>* __a,
						__atomic_diff_t __i,
						memory_order __m);  // 141
	mi_atomic_void_addi64_relaxed(volatile int64_t* p,
					volatile const int64_t* padd);  // 112
	mi_stat_counter_add_mt(mi_stat_counter_t* stat,
				const mi_stat_counter_t* src);  // 123
	__atomic_base<long int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long int>(const atomic<long int>* __a,
					memory_order __m);  // 139
	__atomic_base<long int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1502
	atomic_fetch_add_explicit<long int>(atomic<long int>* __a,
						__atomic_diff_t __i,
						memory_order __m);  // 141
	mi_atomic_void_addi64_relaxed(volatile int64_t* p,
					volatile const int64_t* padd);  // 112
	mi_stat_counter_add_mt(mi_stat_counter_t* stat,
				const mi_stat_counter_t* src);  // 123
	__atomic_base<long int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long int>(const atomic<long int>* __a,
					memory_order __m);  // 139
	__atomic_base<long int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1502
	atomic_fetch_add_explicit<long int>(atomic<long int>* __a,
						__atomic_diff_t __i,
						memory_order __m);  // 141
	mi_atomic_void_addi64_relaxed(volatile int64_t* p,
					volatile const int64_t* padd);  // 112
	mi_stat_counter_add_mt(mi_stat_counter_t* stat,
				const mi_stat_counter_t* src);  // 123
	__atomic_base<long int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long int>(const atomic<long int>* __a,
					memory_order __m);  // 139
	__atomic_base<long int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1502
	atomic_fetch_add_explicit<long int>(atomic<long int>* __a,
						__atomic_diff_t __i,
						memory_order __m);  // 141
	mi_atomic_void_addi64_relaxed(volatile int64_t* p,
					volatile const int64_t* padd);  // 112
	mi_stat_counter_add_mt(mi_stat_counter_t* stat,
				const mi_stat_counter_t* src);  // 123
	__atomic_base<long int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long int>(const atomic<long int>* __a,
					memory_order __m);  // 139
	__atomic_base<long int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1502
	atomic_fetch_add_explicit<long int>(atomic<long int>* __a,
						__atomic_diff_t __i,
						memory_order __m);  // 141
	mi_atomic_void_addi64_relaxed(volatile int64_t* p,
					volatile const int64_t* padd);  // 112
	mi_stat_counter_add_mt(mi_stat_counter_t* stat,
				const mi_stat_counter_t* src);  // 123
	__atomic_base<long int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long int>(const atomic<long int>* __a,
					memory_order __m);  // 139
	__atomic_base<long int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1502
	atomic_fetch_add_explicit<long int>(atomic<long int>* __a,
						__atomic_diff_t __i,
						memory_order __m);  // 141
	mi_atomic_void_addi64_relaxed(volatile int64_t* p,
					volatile const int64_t* padd);  // 112
	mi_stat_counter_add_mt(mi_stat_counter_t* stat,
				const mi_stat_counter_t* src);  // 123
	mi_stat_count_add_mt(mi_stat_count_t* stat,
				const mi_stat_count_t* src);  // 123
	mi_stat_count_add_mt(mi_stat_count_t* stat,
				const mi_stat_count_t* src);  // 123
	mi_stat_count_add_mt(mi_stat_count_t* stat,
				const mi_stat_count_t* src);  // 123
	mi_stat_count_add_mt(mi_stat_count_t* stat,
				const mi_stat_count_t* src);  // 123
	mi_stat_count_add_mt(mi_stat_count_t* stat,
				const mi_stat_count_t* src);  // 123
	mi_stat_count_add_mt(mi_stat_count_t* stat,
				const mi_stat_count_t* src);  // 123
	__atomic_base<long int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long int>(const atomic<long int>* __a,
					memory_order __m);  // 139
	__atomic_base<long int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1502
	atomic_fetch_add_explicit<long int>(atomic<long int>* __a,
						__atomic_diff_t __i,
						memory_order __m);  // 141
	mi_atomic_void_addi64_relaxed(volatile int64_t* p,
					volatile const int64_t* padd);  // 112
	mi_stat_counter_add_mt(mi_stat_counter_t* stat,
				const mi_stat_counter_t* src);  // 123
	__atomic_base<long int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long int>(const atomic<long int>* __a,
					memory_order __m);  // 139
	__atomic_base<long int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1502
	atomic_fetch_add_explicit<long int>(atomic<long int>* __a,
						__atomic_diff_t __i,
						memory_order __m);  // 141
	mi_atomic_void_addi64_relaxed(volatile int64_t* p,
					volatile const int64_t* padd);  // 112
	mi_stat_counter_add_mt(mi_stat_counter_t* stat,
				const mi_stat_counter_t* src);  // 123
	__atomic_base<long int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long int>(const atomic<long int>* __a,
					memory_order __m);  // 139
	__atomic_base<long int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1502
	atomic_fetch_add_explicit<long int>(atomic<long int>* __a,
						__atomic_diff_t __i,
						memory_order __m);  // 141
	mi_atomic_void_addi64_relaxed(volatile int64_t* p,
					volatile const int64_t* padd);  // 112
	mi_stat_counter_add_mt(mi_stat_counter_t* stat,
				const mi_stat_counter_t* src);  // 123
	__atomic_base<long int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long int>(const atomic<long int>* __a,
					memory_order __m);  // 139
	__atomic_base<long int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1502
	atomic_fetch_add_explicit<long int>(atomic<long int>* __a,
						__atomic_diff_t __i,
						memory_order __m);  // 141
	mi_atomic_void_addi64_relaxed(volatile int64_t* p,
					volatile const int64_t* padd);  // 112
	mi_stat_counter_add_mt(mi_stat_counter_t* stat,
				const mi_stat_counter_t* src);  // 123
	__atomic_base<long int>::load(
		memory_order __m);  // 1334
	atomic_load_explicit<long int>(const atomic<long int>* __a,
					memory_order __m);  // 139
	__atomic_base<long int>::fetch_add(
			__int_type __i,
			memory_order __m);  // 1502
	atomic_fetch_add_explicit<long int>(atomic<long int>* __a,
						__atomic_diff_t __i,
						memory_order __m);  // 141
	mi_atomic_void_addi64_relaxed(volatile int64_t* p,
					volatile const int64_t* padd);  // 112
	mi_stat_counter_add_mt(mi_stat_counter_t* stat,
				const mi_stat_counter_t* src);  // 123
} /* size: 1002, inline expansions: 141 (2043 bytes) */

// <002D7384> ../thirdparty/mimalloc/src/stats.c:145
// variables: 11
// function call: 1
void mi_printf_amount(int64_t n, int64_t unit, mi_output_fun* out, void* arg, const char* fmt)
{
	char buf; // 146
	int len; // 147
	const char* suffix; // 148
	const int64_t  base; // 149
	const int64_t  pos; // 152
	{
		int64_t divider; // 159
		const char* magnitude; // 160
		const int64_t  tens; // 163
		const long int  whole; // 164
		const long int  frac1; // 165
		char unitdesc; // 166
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 146
} /* size: 1162, variables: 5, inline expansions: 1 (32 bytes) */

// <002D7348> ../thirdparty/mimalloc/src/stats.c:174
void mi_print_amount(int64_t n, int64_t unit, mi_output_fun* out, void* arg)
{
} /* size: 0 */

// <002D730C> ../thirdparty/mimalloc/src/stats.c:178
void mi_print_count(int64_t n, int64_t unit, mi_output_fun* out, void* arg)
{
} /* size: 0 */

// <0033F75B> ../thirdparty/mimalloc/src/stats.c:183
// function calls: 12
void mi_stat_print_ex(const mi_stat_count_t* stat, const char* msg, int64_t unit, void* arg, const char* notok, mi_output_fun* out)
{
	mi_print_amount(int64_t n,
			int64_t unit,
			mi_output_fun* out,
			void* arg);  // 187
	mi_print_amount(int64_t n,
			int64_t unit,
			mi_output_fun* out,
			void* arg);  // 188
	mi_print_amount(int64_t n,
			int64_t unit,
			mi_output_fun* out,
			void* arg);  // 190
	mi_print_amount(int64_t n,
			int64_t unit,
			mi_output_fun* out,
			void* arg);  // 191
	mi_print_count(int64_t n,
			int64_t unit,
			mi_output_fun* out,
			void* arg);  // 178
	mi_print_count(int64_t n,
			int64_t unit,
			mi_output_fun* out,
			void* arg);  // 192
	mi_print_amount(int64_t n,
			int64_t unit,
			mi_output_fun* out,
			void* arg);  // 195
	mi_print_amount(int64_t n,
			int64_t unit,
			mi_output_fun* out,
			void* arg);  // 196
	mi_print_amount(int64_t n,
			int64_t unit,
			mi_output_fun* out,
			void* arg);  // 198
	mi_print_amount(int64_t n,
			int64_t unit,
			mi_output_fun* out,
			void* arg);  // 217
	mi_print_amount(int64_t n,
			int64_t unit,
			mi_output_fun* out,
			void* arg);  // 218
	mi_print_amount(int64_t n,
			int64_t unit,
			mi_output_fun* out,
			void* arg);  // 219
} /* size: 493, inline expansions: 12 (300 bytes) */

// <002D72B6> ../thirdparty/mimalloc/src/stats.c:183
void mi_stat_print_ex(const mi_stat_count_t* stat, const char* msg, int64_t unit, mi_output_fun* out, void* arg, const char* notok)
{
} /* size: 0 */

// <002D7266> ../thirdparty/mimalloc/src/stats.c:224
void mi_stat_print(const mi_stat_count_t* stat, const char* msg, int64_t unit, mi_output_fun* out, void* arg)
{
} /* size: 0 */

// <002D7228> ../thirdparty/mimalloc/src/stats.c:237
void mi_stat_counter_print(const mi_stat_counter_t* stat, const char* msg, mi_output_fun* out, void* arg)
{
} /* size: 0 */

// <002D71E4> ../thirdparty/mimalloc/src/stats.c:243
void mi_stat_counter_print_size(const mi_stat_counter_t* stat, const char* msg, mi_output_fun* out, void* arg)
{
} /* size: 0 */

// <002D7176> ../thirdparty/mimalloc/src/stats.c:249
// variables: 3
void mi_stat_average_print(int64_t count, int64_t total, const char* msg, mi_output_fun* out, void* arg)
{
	const int64_t  avg_tens; // 250
	const int64_t  avg_whole; // 251
	const int64_t  avg_frac1; // 252
} /* size: 0, variables: 3 */

// <002D7140> ../thirdparty/mimalloc/src/stats.c:257
void mi_print_header(const char* name, mi_output_fun* out, void* arg)
{
} /* size: 0 */

// <002C4DFF> ../thirdparty/mimalloc/src/stats.c:290
// member variables: 5
// struct size: 40
struct buffered_s {
	mi_output_fun * out; /* 0 8 */
	void * arg; /* 8 8 */
	char * buf; /* 16 8 */
	size_t used; /* 24 8 */
	size_t count; /* 32 8 */
};

// <002D7124> ../thirdparty/mimalloc/src/stats.c:298
void mi_buffered_flush(buffered_t* buf)
{
} /* size: 0 */

// <00340A66> ../thirdparty/mimalloc/src/stats.c:304
// variables: 3
// function calls: 3
void mi_buffered_out(const char* msg, void* arg)
{
	buffered_t* buf; // 305
	{
		const char* src; // 307
		{
			char c; // 308
			mi_buffered_flush(buffered_t* buf); // 309
			mi_buffered_flush(buffered_t* buf); // 312
		}
	}
	mi_buffered_out(const char* msg,
			void* arg);  // 304
} /* size: 0, variables: 1, inline expansions: 1 (210 bytes) */

// <002D70AC> ../thirdparty/mimalloc/src/stats.c:304
// variables: 4
void mi_buffered_out(const char* msg, void* arg)
{
	buffered_t* buf; // 305
	const char   __func__; // 44947
	{
		const char* src; // 307
		{
			char c; // 308
		}
	}
} /* size: 0, variables: 2 */

// <002D6E5E> ../thirdparty/mimalloc/src/stats.c:320
// variables: 8
void mi_process_info_print_out(mi_output_fun* out, void* arg)
{
	size_t elapsed; // 322
	size_t user_time; // 323
	size_t sys_time; // 324
	size_t current_rss; // 325
	size_t peak_rss; // 326
	size_t current_commit; // 327
	size_t peak_commit; // 328
	size_t page_faults; // 329
} /* size: 389, variables: 8 */

// <002D4E75> ../thirdparty/mimalloc/src/stats.c:342
// variables: 5
// function calls: 43
void _mi_stats_print(const char* name, size_t id, mi_stats_t* stats, mi_output_fun* out0, void* arg0)
{
	char buf; // 344
	buffered_t buffer; // 345
	mi_output_fun* out; // 347
	void* arg; // 348
	{
		mi_stat_count_t total; // 361
		mi_stat_print(const mi_stat_count_t* stat,
				const char* msg,
				int64_t unit,
				mi_output_fun* out,
				void* arg);  // 359
		mi_stat_print(const mi_stat_count_t* stat,
				const char* msg,
				int64_t unit,
				mi_output_fun* out,
				void* arg);  // 360
		mi_stat_count_add_mt(mi_stat_count_t* stat,
					const mi_stat_count_t* src);  // 362
		mi_stat_count_add_mt(mi_stat_count_t* stat,
					const mi_stat_count_t* src);  // 363
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 344
	mi_print_header(const char* name,
			mi_output_fun* out,
			void* arg);  // 391
	mi_print_amount(int64_t n,
			int64_t unit,
			mi_output_fun* out,
			void* arg);  // 245
	mi_stat_counter_print_size(const mi_stat_counter_t* stat,
					const char* msg,
					mi_output_fun* out,
					void* arg);  // 394
	mi_print_amount(int64_t n,
			int64_t unit,
			mi_output_fun* out,
			void* arg);  // 245
	mi_stat_counter_print_size(const mi_stat_counter_t* stat,
					const char* msg,
					mi_output_fun* out,
					void* arg);  // 395
	mi_print_amount(int64_t n,
			int64_t unit,
			mi_output_fun* out,
			void* arg);  // 239
	mi_stat_counter_print(const mi_stat_counter_t* stat,
				const char* msg,
				mi_output_fun* out,
				void* arg);  // 397
	mi_print_amount(int64_t n,
			int64_t unit,
			mi_output_fun* out,
			void* arg);  // 239
	mi_stat_counter_print(const mi_stat_counter_t* stat,
				const char* msg,
				mi_output_fun* out,
				void* arg);  // 398
	mi_print_amount(int64_t n,
			int64_t unit,
			mi_output_fun* out,
			void* arg);  // 239
	mi_stat_counter_print(const mi_stat_counter_t* stat,
				const char* msg,
				mi_output_fun* out,
				void* arg);  // 399
	mi_print_amount(int64_t n,
			int64_t unit,
			mi_output_fun* out,
			void* arg);  // 239
	mi_stat_counter_print(const mi_stat_counter_t* stat,
				const char* msg,
				mi_output_fun* out,
				void* arg);  // 400
	mi_print_amount(int64_t n,
			int64_t unit,
			mi_output_fun* out,
			void* arg);  // 239
	mi_stat_counter_print(const mi_stat_counter_t* stat,
				const char* msg,
				mi_output_fun* out,
				void* arg);  // 401
	mi_print_amount(int64_t n,
			int64_t unit,
			mi_output_fun* out,
			void* arg);  // 239
	mi_stat_counter_print(const mi_stat_counter_t* stat,
				const char* msg,
				mi_output_fun* out,
				void* arg);  // 402
	mi_print_amount(int64_t n,
			int64_t unit,
			mi_output_fun* out,
			void* arg);  // 239
	mi_stat_counter_print(const mi_stat_counter_t* stat,
				const char* msg,
				mi_output_fun* out,
				void* arg);  // 403
	mi_print_amount(int64_t n,
			int64_t unit,
			mi_output_fun* out,
			void* arg);  // 239
	mi_stat_counter_print(const mi_stat_counter_t* stat,
				const char* msg,
				mi_output_fun* out,
				void* arg);  // 406
	mi_print_header(const char* name,
			mi_output_fun* out,
			void* arg);  // 409
	mi_print_header(const char* name,
			mi_output_fun* out,
			void* arg);  // 373
	mi_stat_print(const mi_stat_count_t* stat,
			const char* msg,
			int64_t unit,
			mi_output_fun* out,
			void* arg);  // 378
	mi_stat_print(const mi_stat_count_t* stat,
			const char* msg,
			int64_t unit,
			mi_output_fun* out,
			void* arg);  // 379
	mi_print_amount(int64_t n,
			int64_t unit,
			mi_output_fun* out,
			void* arg);  // 239
	mi_stat_counter_print(const mi_stat_counter_t* stat,
				const char* msg,
				mi_output_fun* out,
				void* arg);  // 380
	mi_print_amount(int64_t n,
			int64_t unit,
			mi_output_fun* out,
			void* arg);  // 239
	mi_stat_counter_print(const mi_stat_counter_t* stat,
				const char* msg,
				mi_output_fun* out,
				void* arg);  // 381
	mi_print_amount(int64_t n,
			int64_t unit,
			mi_output_fun* out,
			void* arg);  // 239
	mi_stat_counter_print(const mi_stat_counter_t* stat,
				const char* msg,
				mi_output_fun* out,
				void* arg);  // 382
	mi_print_amount(int64_t n,
			int64_t unit,
			mi_output_fun* out,
			void* arg);  // 239
	mi_stat_counter_print(const mi_stat_counter_t* stat,
				const char* msg,
				mi_output_fun* out,
				void* arg);  // 383
	mi_print_amount(int64_t n,
			int64_t unit,
			mi_output_fun* out,
			void* arg);  // 239
	mi_stat_counter_print(const mi_stat_counter_t* stat,
				const char* msg,
				mi_output_fun* out,
				void* arg);  // 384
	mi_print_amount(int64_t n,
			int64_t unit,
			mi_output_fun* out,
			void* arg);  // 239
	mi_stat_counter_print(const mi_stat_counter_t* stat,
				const char* msg,
				mi_output_fun* out,
				void* arg);  // 385
	mi_stat_average_print(int64_t count,
				int64_t total,
				const char* msg,
				mi_output_fun* out,
				void* arg);  // 386
} /* size: 2757, variables: 4, inline expansions: 39 (2435 bytes) */

// <002D4E65> ../thirdparty/mimalloc/src/stats.c:421
void _mi_stats_init(void)
{
} /* size: 0 */

// <003408C1> ../thirdparty/mimalloc/src/stats.c:425
void mi_stats_add_into(mi_stats_t* from, mi_stats_t* to)
{
} /* size: 0 */

// <002D4E32> ../thirdparty/mimalloc/src/stats.c:425
// variable: 1
void mi_stats_add_into(mi_stats_t* to, mi_stats_t* from)
{
	const char   __func__; // 8149
} /* size: 0, variables: 1 */

// <002D4DFA> ../thirdparty/mimalloc/src/stats.c:431
// variable: 1
void _mi_stats_merge_into(mi_stats_t* to, mi_stats_t* from)
{
	const char   __func__; // 65207
} /* size: 0, variables: 1 */

// <002D4DC0> ../thirdparty/mimalloc/src/stats.c:438
// variables: 2
mi_stats_t* mi_stats_merge_theap_to_heap(mi_theap_t* theap)
{
	mi_stats_t* stats; // 439
	mi_stats_t* heap_stats; // 440
} /* size: 0, variables: 2 */

// <002D49BF> ../thirdparty/mimalloc/src/stats.c:445
// variable: 1
// function calls: 15
mi_stats_t* mi_heap_get_stats(mi_heap_t* heap)
{
	mi_theap_t* theap; // 447
	_mi_theap_cached(void); // 516
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 520
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 525
	_mi_heap_theap_peek(const mi_heap_t* heap); // 447
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 440
	mi_stats_merge_theap_to_heap(mi_theap_t* theap); // 449
} /* size: 0, variables: 1, inline expansions: 15 (0 bytes) */

// <002D47EB> ../thirdparty/mimalloc/src/stats.c:453
// function calls: 7
void mi_stats_reset(void)
{
	_mi_theap_default(void); // 454
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 575
	mi_theap_is_initialized(const mi_theap_t* theap); // 454
	mi_heap_stats_merge_to_subproc(mi_heap_t* heap); // 456
} /* size: 0, inline expansions: 7 (0 bytes) */

// <002D47B3> ../thirdparty/mimalloc/src/stats.c:460
void mi_heap_stats_print_out(mi_heap_t* heap, mi_output_fun* out, void* arg)
{
} /* size: 0 */

// <002C4E85> ../thirdparty/mimalloc/src/stats.c:465
// member variables: 2
// struct size: 16
struct mi_heap_print_visit_info_s {
	mi_output_fun * out; /* 0 8 */
	void * out_arg; /* 8 8 */
};

// <002D4773> ../thirdparty/mimalloc/src/stats.c:470
// variable: 1
bool mi_heap_print_visitor(mi_heap_t* heap, void* arg)
{
	mi_heap_print_visit_info_t* vinfo; // 471
} /* size: 0, variables: 1 */

// <002D4475> ../thirdparty/mimalloc/src/stats.c:478
// variables: 4
// function calls: 6
void mi_subproc_heap_stats_print_out(mi_subproc_id_t subproc_id, mi_output_fun* out, void* arg)
{
	mi_subproc_t* subproc; // 479
	mi_heap_print_visit_info_t vinfo; // 481
	_mi_subproc_from_id(mi_subproc_id_t subproc_id); // 479
	{
		bool _mi_go; // 579
		mi_lock_acquire(mi_lock_t* lock); // 579
		{
			mi_heap_t* heap; // 580
			mi_heap_stats_print_out(mi_heap_t* heap,
						mi_output_fun* out,
						void* arg);  // 472
			mi_heap_print_visitor(mi_heap_t* heap,
						void* arg);  // 581
		}
		mi_lock_release(mi_lock_t* lock); // 579
	}
	mi_subproc_visit_heaps(mi_subproc_id_t subproc_id,
				mi_heap_visit_fun* visitor,
				void* arg);  // 482
} /* size: 0, variables: 2, inline expansions: 2 (0 bytes) */

// <002D3F76> ../thirdparty/mimalloc/src/stats.c:488
// variables: 4
// function calls: 14
void mi_subproc_stats_print_out(mi_subproc_id_t subproc_id, mi_output_fun* out, void* arg)
{
	mi_subproc_t* subproc; // 489
	mi_stats_t stats; // 491
	_mi_subproc_from_id(mi_subproc_id_t subproc_id); // 612
	mi_rep_stosb(void* dst,
			uint8_t val,
			size_t n);  // 1218
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1221
	_mi_memset(void* dst,
			int val,
			size_t n);  // 1216
	_mi_memset(void* dst,
			int val,
			size_t n);  // 1274
	_mi_memzero(void* dst,
			size_t n);  // 614
	{
		bool _mi_go; // 579
		mi_lock_acquire(mi_lock_t* lock); // 579
		{
			mi_heap_t* heap; // 580
			mi_stats_add_into(mi_stats_t* to,
						mi_stats_t* from);  // 607
			mi_heap_aggregate_visitor(mi_heap_t* heap,
							void* arg);  // 581
		}
		mi_lock_release(mi_lock_t* lock); // 579
	}
	mi_subproc_visit_heaps(mi_subproc_id_t subproc_id,
				mi_heap_visit_fun* visitor,
				void* arg);  // 617
	mi_stats_add_into(mi_stats_t* to,
				mi_stats_t* from);  // 618
	mi_subproc_stats_get(mi_subproc_id_t subproc_id,
				mi_stats_t* stats);  // 492
	_mi_subproc_from_id(mi_subproc_id_t subproc_id); // 489
} /* size: 369, variables: 2, inline expansions: 10 (515 bytes) */

// <002D3F4B> ../thirdparty/mimalloc/src/stats.c:497
void mi_stats_print_out(mi_output_fun* out, void* arg)
{
} /* size: 0 */

// <002D3F2D> ../thirdparty/mimalloc/src/stats.c:502
void mi_stats_print(void* out)
{
} /* size: 0 */

// <002D3B52> ../thirdparty/mimalloc/src/stats.c:508
// variable: 1
// function calls: 16
void mi_thread_stats_print_out(mi_output_fun* out, void* arg)
{
	mi_theap_t* theap; // 509
	_mi_theap_default(void); // 509
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 575
	mi_theap_is_initialized(const mi_theap_t* theap); // 510
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 511
	_mi_theap_default(void); // 512
	__atomic_base<mi_heap_s::load(
		memory_order __m);  // 587
	atomic<mi_heap_s::load(
		memory_order __m);  // 1334
	atomic_load_explicit<mi_heap_s*>(const atomic<mi_heap_s*>* __a,
					memory_order __m);  // 571
	_mi_theap_heap(const mi_theap_t* theap); // 440
	mi_stats_merge_theap_to_heap(mi_theap_t* theap); // 512
} /* size: 0, variables: 1, inline expansions: 16 (0 bytes) */

// <002D3B3E> ../thirdparty/mimalloc/src/stats.c:522
mi_msecs_t _mi_clock_now(void)
{
} /* size: 0 */

// <002D3B18> ../thirdparty/mimalloc/src/stats.c:526
// variable: 1
mi_msecs_t _mi_clock_start(void)
{
	{
		mi_msecs_t t0; // 528
	}
} /* size: 0 */

// <002D3AE6> ../thirdparty/mimalloc/src/stats.c:534
// variable: 1
mi_msecs_t _mi_clock_end(mi_msecs_t start)
{
	mi_msecs_t end; // 535
} /* size: 0, variables: 1 */

// <002D3799> ../thirdparty/mimalloc/src/stats.c:544
// variables: 2
// function calls: 11
void mi_process_info(size_t* elapsed_msecs, size_t* user_msecs, size_t* system_msecs, size_t* current_rss, size_t* peak_rss, size_t* current_commit, size_t* peak_commit, size_t* page_faults)
{
	mi_process_info_t pinfo; // 546
	{
		const mi_subproc_t* subproc; // 549
		__atomic_base<long int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long int>(const atomic<long int>* __a,
						memory_order __m);  // 551
		__atomic_base<long int>::load(
			memory_order __m);  // 1334
		atomic_load_explicit<long int>(const atomic<long int>* __a,
						memory_order __m);  // 552
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 547
	_mi_prim_clock_now(void); // 523
	_mi_clock_now(void); // 535
	_mi_clock_end(mi_msecs_t start); // 548
	timeval_secs(const timeval* tv); // 746
	timeval_secs(const timeval* tv); // 747
	_mi_prim_process_info(mi_process_info_t* pinfo); // 561
} /* size: 571, variables: 1, inline expansions: 7 (500 bytes) */

// <002D375C> ../thirdparty/mimalloc/src/stats.c:573
void mi_process_info_print(void)
{
} /* size: 0 */

// <002D373B> ../thirdparty/mimalloc/src/stats.c:582
size_t mi_stats_get_bin_size(size_t bin)
{
} /* size: 0 */

// <002D3708> ../thirdparty/mimalloc/src/stats.c:587
bool _mi_stats_get(const mi_stats_t* stats_in, mi_stats_t* stats_out)
{
} /* size: 0 */

// <002D34ED> ../thirdparty/mimalloc/src/stats.c:594
// variable: 1
// function calls: 7
bool mi_subproc_stats_get_exclusive(mi_subproc_id_t subproc_id, mi_stats_t* stats)
{
	const mi_subproc_t* subproc; // 595
	_mi_subproc_from_id(mi_subproc_id_t subproc_id); // 595
	mi_rep_movsb(void* dst,
			const void* src,
			size_t n);  // 1209
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 1212
	_mi_memcpy(void* dst,
			const void* src,
			size_t n);  // 1207
	_mi_memcpy(void* dst,
			const void* src,
			size_t n);  // 590
	_mi_stats_get(const mi_stats_t* stats_in,
			mi_stats_t* stats_out);  // 587
	_mi_stats_get(const mi_stats_t* stats_in,
			mi_stats_t* stats_out);  // 597
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <002D32E3> ../thirdparty/mimalloc/src/stats.c:600
// function calls: 6
bool mi_heap_stats_get(mi_heap_t* heap, mi_stats_t* stats)
{
	mi_rep_movsb(void* dst,
			const void* src,
			size_t n);  // 1209
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 1212
	_mi_memcpy(void* dst,
			const void* src,
			size_t n);  // 1207
	_mi_memcpy(void* dst,
			const void* src,
			size_t n);  // 590
	_mi_stats_get(const mi_stats_t* stats_in,
			mi_stats_t* stats_out);  // 587
	_mi_stats_get(const mi_stats_t* stats_in,
			mi_stats_t* stats_out);  // 601
} /* size: 0, inline expansions: 6 (0 bytes) */

// <002D32A9> ../thirdparty/mimalloc/src/stats.c:605
// variable: 1
bool mi_heap_aggregate_visitor(mi_heap_t* heap, void* arg)
{
	mi_stats_t* stats; // 606
} /* size: 0, variables: 1 */

// <002D326E> ../thirdparty/mimalloc/src/stats.c:611
// variable: 1
bool mi_subproc_stats_get(mi_subproc_id_t subproc_id, mi_stats_t* stats)
{
	mi_subproc_t* subproc; // 612
} /* size: 0, variables: 1 */

// <002D31C3> ../thirdparty/mimalloc/src/stats.c:622
// function calls: 3
bool mi_stats_get(mi_stats_t* stats)
{
	_mi_theap_default(void); // 429
	_mi_subproc(void); // 472
	mi_subproc_current(void); // 623
} /* size: 0, inline expansions: 3 (0 bytes) */

// <002C4ED9> ../thirdparty/mimalloc/src/stats.c:631
// member variables: 4
// struct size: 32
struct mi_json_buf_s {
	char * buf; /* 0 8 */
	size_t size; /* 8 8 */
	size_t used; /* 16 8 */
	bool can_realloc; /* 24 1 */
};

// <002D2FF0> ../thirdparty/mimalloc/src/stats.c:638
// variables: 2
// function calls: 6
bool mi_json_buf_expand(mi_json_buf_t* hbuf)
{
	const size_t  newsize; // 644
	const char* newbuf; // 645
	_mi_bin_size(size_t bin); // 116
	mi_good_size(size_t size); // 114
	mi_good_size(size_t size); // 644
	_mi_theap_default(void); // 454
	mi_theap_rezalloc(mi_theap_t* theap,
				void* p,
				size_t newsize);  // 454
	mi_rezalloc(void* p,
			size_t newsize);  // 645
} /* size: 0, variables: 2, inline expansions: 6 (0 bytes) */

// <00355FC0> ../thirdparty/mimalloc/src/stats.c:652
// variables: 2
// function call: 1
void mi_json_buf_print(mi_json_buf_t* hbuf, const char* msg)
{
	{
		const char* src; // 655
		{
			char c; // 656
		}
	}
	mi_json_buf_print(mi_json_buf_t* hbuf,
				const char* msg);  // 652
} /* size: 0, inline expansions: 1 (0 bytes) */

// <002D2FA0> ../thirdparty/mimalloc/src/stats.c:652
// variables: 3
void mi_json_buf_print(mi_json_buf_t* hbuf, const char* msg)
{
	const char   __func__; // 8149
	{
		const char* src; // 655
		{
			char c; // 656
		}
	}
} /* size: 0, variables: 1 */

// <003560C8> ../thirdparty/mimalloc/src/stats.c:667
// variables: 3
// function calls: 2
void mi_json_buf_print_count_bin(mi_json_buf_t* hbuf, mi_stat_count_t* stat, size_t bin, bool add_comma, const char* prefix)
{
	const size_t  binsize; // 668
	const size_t  pagesize; // 669
	char buf; // 672
	_mi_bin_size(size_t bin); // 584
	mi_stats_get_bin_size(size_t bin); // 668
} /* size: 0, variables: 3, inline expansions: 2 (0 bytes) */

// <002D2F29> ../thirdparty/mimalloc/src/stats.c:667
// variables: 3
void mi_json_buf_print_count_bin(mi_json_buf_t* hbuf, const char* prefix, mi_stat_count_t* stat, size_t bin, bool add_comma)
{
	const size_t  binsize; // 668
	const size_t  pagesize; // 669
	char buf; // 672
} /* size: 0, variables: 3 */

// <002D2EBF> ../thirdparty/mimalloc/src/stats.c:678
// variables: 2
void mi_json_buf_print_count_cbin(mi_json_buf_t* hbuf, const char* prefix, mi_stat_count_t* stat, mi_chunkbin_t bin, bool add_comma)
{
	const char* cbin; // 679
	char buf; // 688
} /* size: 0, variables: 2 */

// <002D2E6F> ../thirdparty/mimalloc/src/stats.c:694
// variable: 1
void mi_json_buf_print_count(mi_json_buf_t* hbuf, const char* prefix, mi_stat_count_t* stat, bool add_comma)
{
	char buf; // 695
} /* size: 0, variables: 1 */

// <002D2CDC> ../thirdparty/mimalloc/src/stats.c:701
// variable: 1
// function call: 1
void mi_json_buf_print_count_value(mi_json_buf_t* hbuf, const char* name, mi_stat_count_t* stat)
{
	char buf; // 702
	mi_json_buf_print_count(mi_json_buf_t* hbuf,
				const char* prefix,
				mi_stat_count_t* stat,
				bool add_comma);  // 706
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <002D2C99> ../thirdparty/mimalloc/src/stats.c:709
// variable: 1
void mi_json_buf_print_value(mi_json_buf_t* hbuf, const char* name, int64_t val)
{
	char buf; // 710
} /* size: 0, variables: 1 */

// <002D2C49> ../thirdparty/mimalloc/src/stats.c:716
// variable: 1
void mi_json_buf_print_size(mi_json_buf_t* hbuf, const char* name, size_t val, bool add_comma)
{
	char buf; // 717
} /* size: 0, variables: 1 */

// <002D2C07> ../thirdparty/mimalloc/src/stats.c:723
void mi_json_buf_print_counter_value(mi_json_buf_t* hbuf, const char* name, mi_stat_counter_t* stat)
{
} /* size: 0 */

// <002D0770> ../thirdparty/mimalloc/src/stats.c:730
// variables: 12
// function calls: 58
char* mi_stats_get_json_from(mi_stats_t* stats, size_t output_size, char* output_buf)
{
	mi_json_buf_t hbuf; // 732
	size_t elapsed; // 748
	size_t user_time; // 749
	size_t sys_time; // 750
	size_t current_rss; // 751
	size_t peak_rss; // 752
	size_t current_commit; // 753
	size_t peak_commit; // 754
	size_t page_faults; // 755
	{
		size_t i; // 772
	}
	{
		size_t i; // 777
	}
	{
		size_t i; // 782
		mi_json_buf_print_count_cbin(mi_json_buf_t* hbuf,
						const char* prefix,
						mi_stat_count_t* stat,
						mi_chunkbin_t bin,
						bool add_comma);  // 783
	}
	mi_rep_stosb(void* dst,
			uint8_t val,
			size_t n);  // 1218
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1221
	_mi_memset(void* dst,
			int val,
			size_t n);  // 1216
	_mi_memset(void* dst,
			int val,
			size_t n);  // 1274
	_mi_memzero(void* dst,
			size_t n);  // 734
	mi_json_buf_print_value(mi_json_buf_t* hbuf,
				const char* name,
				int64_t val);  // 743
	mi_json_buf_print_value(mi_json_buf_t* hbuf,
				const char* name,
				int64_t val);  // 744
	mi_json_buf_print_size(mi_json_buf_t* hbuf,
				const char* name,
				size_t val,
				bool add_comma);  // 757
	mi_json_buf_print_size(mi_json_buf_t* hbuf,
				const char* name,
				size_t val,
				bool add_comma);  // 758
	mi_json_buf_print_size(mi_json_buf_t* hbuf,
				const char* name,
				size_t val,
				bool add_comma);  // 759
	mi_json_buf_print_size(mi_json_buf_t* hbuf,
				const char* name,
				size_t val,
				bool add_comma);  // 760
	mi_json_buf_print_size(mi_json_buf_t* hbuf,
				const char* name,
				size_t val,
				bool add_comma);  // 761
	mi_json_buf_print_size(mi_json_buf_t* hbuf,
				const char* name,
				size_t val,
				bool add_comma);  // 762
	mi_json_buf_print_size(mi_json_buf_t* hbuf,
				const char* name,
				size_t val,
				bool add_comma);  // 763
	mi_json_buf_print_size(mi_json_buf_t* hbuf,
				const char* name,
				size_t val,
				bool add_comma);  // 764
	mi_json_buf_print_value(mi_json_buf_t* hbuf,
				const char* name,
				int64_t val);  // 724
	mi_json_buf_print_counter_value(mi_json_buf_t* hbuf,
					const char* name,
					mi_stat_counter_t* stat);  // 768
	mi_json_buf_print_value(mi_json_buf_t* hbuf,
				const char* name,
				int64_t val);  // 724
	mi_json_buf_print_counter_value(mi_json_buf_t* hbuf,
					const char* name,
					mi_stat_counter_t* stat);  // 768
	mi_json_buf_print_value(mi_json_buf_t* hbuf,
				const char* name,
				int64_t val);  // 724
	mi_json_buf_print_counter_value(mi_json_buf_t* hbuf,
					const char* name,
					mi_stat_counter_t* stat);  // 768
	mi_json_buf_print_value(mi_json_buf_t* hbuf,
				const char* name,
				int64_t val);  // 724
	mi_json_buf_print_counter_value(mi_json_buf_t* hbuf,
					const char* name,
					mi_stat_counter_t* stat);  // 768
	mi_json_buf_print_value(mi_json_buf_t* hbuf,
				const char* name,
				int64_t val);  // 724
	mi_json_buf_print_counter_value(mi_json_buf_t* hbuf,
					const char* name,
					mi_stat_counter_t* stat);  // 768
	mi_json_buf_print_value(mi_json_buf_t* hbuf,
				const char* name,
				int64_t val);  // 724
	mi_json_buf_print_counter_value(mi_json_buf_t* hbuf,
					const char* name,
					mi_stat_counter_t* stat);  // 768
	mi_json_buf_print_value(mi_json_buf_t* hbuf,
				const char* name,
				int64_t val);  // 724
	mi_json_buf_print_counter_value(mi_json_buf_t* hbuf,
					const char* name,
					mi_stat_counter_t* stat);  // 768
	mi_json_buf_print_value(mi_json_buf_t* hbuf,
				const char* name,
				int64_t val);  // 724
	mi_json_buf_print_counter_value(mi_json_buf_t* hbuf,
					const char* name,
					mi_stat_counter_t* stat);  // 768
	mi_json_buf_print_value(mi_json_buf_t* hbuf,
				const char* name,
				int64_t val);  // 724
	mi_json_buf_print_counter_value(mi_json_buf_t* hbuf,
					const char* name,
					mi_stat_counter_t* stat);  // 768
	mi_json_buf_print_value(mi_json_buf_t* hbuf,
				const char* name,
				int64_t val);  // 724
	mi_json_buf_print_counter_value(mi_json_buf_t* hbuf,
					const char* name,
					mi_stat_counter_t* stat);  // 768
	mi_json_buf_print_value(mi_json_buf_t* hbuf,
				const char* name,
				int64_t val);  // 724
	mi_json_buf_print_counter_value(mi_json_buf_t* hbuf,
					const char* name,
					mi_stat_counter_t* stat);  // 768
	mi_json_buf_print_value(mi_json_buf_t* hbuf,
				const char* name,
				int64_t val);  // 724
	mi_json_buf_print_counter_value(mi_json_buf_t* hbuf,
					const char* name,
					mi_stat_counter_t* stat);  // 768
	mi_json_buf_print_value(mi_json_buf_t* hbuf,
				const char* name,
				int64_t val);  // 724
	mi_json_buf_print_counter_value(mi_json_buf_t* hbuf,
					const char* name,
					mi_stat_counter_t* stat);  // 768
	mi_json_buf_print_value(mi_json_buf_t* hbuf,
				const char* name,
				int64_t val);  // 724
	mi_json_buf_print_counter_value(mi_json_buf_t* hbuf,
					const char* name,
					mi_stat_counter_t* stat);  // 768
	mi_json_buf_print_value(mi_json_buf_t* hbuf,
				const char* name,
				int64_t val);  // 724
	mi_json_buf_print_counter_value(mi_json_buf_t* hbuf,
					const char* name,
					mi_stat_counter_t* stat);  // 768
	mi_json_buf_print_value(mi_json_buf_t* hbuf,
				const char* name,
				int64_t val);  // 724
	mi_json_buf_print_counter_value(mi_json_buf_t* hbuf,
					const char* name,
					mi_stat_counter_t* stat);  // 768
	mi_json_buf_print_value(mi_json_buf_t* hbuf,
				const char* name,
				int64_t val);  // 724
	mi_json_buf_print_counter_value(mi_json_buf_t* hbuf,
					const char* name,
					mi_stat_counter_t* stat);  // 768
	mi_json_buf_print_value(mi_json_buf_t* hbuf,
				const char* name,
				int64_t val);  // 724
	mi_json_buf_print_counter_value(mi_json_buf_t* hbuf,
					const char* name,
					mi_stat_counter_t* stat);  // 768
	mi_json_buf_print_value(mi_json_buf_t* hbuf,
				const char* name,
				int64_t val);  // 724
	mi_json_buf_print_counter_value(mi_json_buf_t* hbuf,
					const char* name,
					mi_stat_counter_t* stat);  // 768
	mi_json_buf_print_value(mi_json_buf_t* hbuf,
				const char* name,
				int64_t val);  // 724
	mi_json_buf_print_counter_value(mi_json_buf_t* hbuf,
					const char* name,
					mi_stat_counter_t* stat);  // 768
	mi_json_buf_print_value(mi_json_buf_t* hbuf,
				const char* name,
				int64_t val);  // 724
	mi_json_buf_print_counter_value(mi_json_buf_t* hbuf,
					const char* name,
					mi_stat_counter_t* stat);  // 768
} /* size: 0, variables: 9, inline expansions: 57 (0 bytes) */

// <002D0294> ../thirdparty/mimalloc/src/stats.c:797
// variables: 4
// function calls: 13
char* mi_subproc_stats_get_json(mi_subproc_id_t subproc_id, size_t buf_size, char* buf)
{
	mi_subproc_t* subproc; // 798
	mi_stats_t stats; // 800
	_mi_subproc_from_id(mi_subproc_id_t subproc_id); // 612
	mi_rep_stosb(void* dst,
			uint8_t val,
			size_t n);  // 1218
	memset(void* __dest,
		int __ch,
		size_t __len);  // 1221
	_mi_memset(void* dst,
			int val,
			size_t n);  // 1216
	_mi_memset(void* dst,
			int val,
			size_t n);  // 1274
	_mi_memzero(void* dst,
			size_t n);  // 614
	{
		bool _mi_go; // 579
		mi_lock_acquire(mi_lock_t* lock); // 579
		{
			mi_heap_t* heap; // 580
			mi_stats_add_into(mi_stats_t* to,
						mi_stats_t* from);  // 607
			mi_heap_aggregate_visitor(mi_heap_t* heap,
							void* arg);  // 581
		}
		mi_lock_release(mi_lock_t* lock); // 579
	}
	mi_subproc_visit_heaps(mi_subproc_id_t subproc_id,
				mi_heap_visit_fun* visitor,
				void* arg);  // 617
	mi_stats_add_into(mi_stats_t* to,
				mi_stats_t* from);  // 618
	mi_subproc_stats_get(mi_subproc_id_t subproc_id,
				mi_stats_t* stats);  // 801
} /* size: 0, variables: 2, inline expansions: 9 (0 bytes) */

// <002D01F6> ../thirdparty/mimalloc/src/stats.c:805
char* mi_heap_stats_get_json(mi_heap_t* heap, size_t buf_size, char* buf)
{
} /* size: 0 */

// <002D012F> ../thirdparty/mimalloc/src/stats.c:809
// function calls: 3
char* mi_stats_get_json(size_t buf_size, char* buf)
{
	_mi_theap_default(void); // 429
	_mi_subproc(void); // 472
	mi_subproc_current(void); // 810
} /* size: 0, inline expansions: 3 (0 bytes) */

// <002D009E> ../thirdparty/mimalloc/src/stats.c:813
char* mi_stats_as_json(mi_stats_t* stats, size_t buf_size, char* buf)
{
} /* size: 0 */

