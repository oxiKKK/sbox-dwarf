
//
// tier0_perproject/singletons.cpp
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
//	functions: 33
//	structs: 2
//

// <0444BF44> tier0_perproject/singletons.cpp:31
void CPostConnectCallback::CPostConnectCallback(int nPriority)
{
} /* size: 54 */

// <0444B402> tier0_perproject/singletons.cpp:116
// member variables: 2
// struct size: 16
struct InterfaceGlobals_t {
	const char * m_pInterfaceName; /* 0 8 */
	void * m_ppGlobal; /* 8 8 */
};

// <0444B474> tier0_perproject/singletons.cpp:196
// member variables: 2
// struct size: 16
struct ConnectionRegistration_t {
	void * m_ppGlobalStorage; /* 0 8 */
	int m_nConnectionPhase; /* 8 4 */
};

// <0444BEA1> tier0_perproject/singletons.cpp:205
// variables: 3
void RegisterInterface(CreateInterfaceFn factory, const char* pInterfaceName, void** ppGlobal)
{
	const char   __FUNCTION__; // 22326
	{
		ConnectionRegistration_t& reg; // 213
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 212
		}
	}
} /* size: 0, variables: 1 */

// <01C15782> tier0_perproject/singletons.cpp:205
// variables: 3
void RegisterInterface(CreateInterfaceFn factory, const char* pInterfaceName, void** ppGlobal)
{
	const char   __FUNCTION__; // 48908
	{
		ConnectionRegistration_t& reg; // 213
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 212
		}
	}
} /* size: 0, variables: 1 */

// <00E4EF6A> tier0_perproject/singletons.cpp:205
// variables: 3
void RegisterInterface(CreateInterfaceFn factory, const char* pInterfaceName, void** ppGlobal)
{
	const char   __FUNCTION__; // 28338
	{
		ConnectionRegistration_t& reg; // 213
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 212
		}
	}
} /* size: 0, variables: 1 */

// <0034B83F> tier0_perproject/singletons.cpp:205
// variables: 3
void RegisterInterface(CreateInterfaceFn factory, const char* pInterfaceName, void** ppGlobal)
{
	const char   __FUNCTION__; // 37092
	{
		ConnectionRegistration_t& reg; // 213
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 212
		}
	}
} /* size: 0, variables: 1 */

// <00642330> tier0_perproject/singletons.cpp:205
// variables: 3
void RegisterInterface(CreateInterfaceFn factory, const char* pInterfaceName, void** ppGlobal)
{
	const char   __FUNCTION__; // 25117
	{
		ConnectionRegistration_t& reg; // 213
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 212
		}
	}
} /* size: 0, variables: 1 */

// <0026BD8D> tier0_perproject/singletons.cpp:205
// variables: 3
void RegisterInterface(CreateInterfaceFn factory, const char* pInterfaceName, void** ppGlobal)
{
	const char   __FUNCTION__; // 20231
	{
		ConnectionRegistration_t& reg; // 213
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 212
		}
	}
} /* size: 0, variables: 1 */

// <005B46C3> tier0_perproject/singletons.cpp:205
// variables: 3
void RegisterInterface(CreateInterfaceFn factory, const char* pInterfaceName, void** ppGlobal)
{
	const char   __FUNCTION__; // 60349
	{
		ConnectionRegistration_t& reg; // 213
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 212
		}
	}
} /* size: 0, variables: 1 */

// <005009F7> tier0_perproject/singletons.cpp:205
// variables: 3
void RegisterInterface(CreateInterfaceFn factory, const char* pInterfaceName, void** ppGlobal)
{
	const char   __FUNCTION__; // 5228
	{
		ConnectionRegistration_t& reg; // 213
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 212
		}
	}
} /* size: 0, variables: 1 */

// <00710B45> tier0_perproject/singletons.cpp:205
// variables: 3
void RegisterInterface(CreateInterfaceFn factory, const char* pInterfaceName, void** ppGlobal)
{
	const char   __FUNCTION__; // 19391
	{
		ConnectionRegistration_t& reg; // 213
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 212
		}
	}
} /* size: 0, variables: 1 */

// <000A93D8> tier0_perproject/singletons.cpp:205
// variables: 3
void RegisterInterface(CreateInterfaceFn factory, const char* pInterfaceName, void** ppGlobal)
{
	const char   __FUNCTION__; // 60290
	{
		ConnectionRegistration_t& reg; // 213
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 212
		}
	}
} /* size: 0, variables: 1 */

// <0444BD18> tier0_perproject/singletons.cpp:220
// variables: 7
void ReconnectInterface(CreateInterfaceFn factory, const char* pInterfaceName, void** ppGlobal)
{
	bool bFound; // 224
	const char   __FUNCTION__; // 22194
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 225
	}
	{
		int i; // 226
		{
			ConnectionRegistration_t& reg; // 228
		}
	}
	{
		ConnectionRegistration_t& reg; // 239
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 238
		}
	}
} /* size: 0, variables: 2 */

// <01C155F9> tier0_perproject/singletons.cpp:220
// variables: 7
void ReconnectInterface(CreateInterfaceFn factory, const char* pInterfaceName, void** ppGlobal)
{
	bool bFound; // 224
	const char   __FUNCTION__; // 48776
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 225
	}
	{
		int i; // 226
		{
			ConnectionRegistration_t& reg; // 228
		}
	}
	{
		ConnectionRegistration_t& reg; // 239
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 238
		}
	}
} /* size: 0, variables: 2 */

// <0034B6B6> tier0_perproject/singletons.cpp:220
// variables: 7
void ReconnectInterface(CreateInterfaceFn factory, const char* pInterfaceName, void** ppGlobal)
{
	bool bFound; // 224
	const char   __FUNCTION__; // 36960
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 225
	}
	{
		int i; // 226
		{
			ConnectionRegistration_t& reg; // 228
		}
	}
	{
		ConnectionRegistration_t& reg; // 239
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 238
		}
	}
} /* size: 0, variables: 2 */

// <0026BC04> tier0_perproject/singletons.cpp:220
// variables: 7
void ReconnectInterface(CreateInterfaceFn factory, const char* pInterfaceName, void** ppGlobal)
{
	bool bFound; // 224
	const char   __FUNCTION__; // 20099
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 225
	}
	{
		int i; // 226
		{
			ConnectionRegistration_t& reg; // 228
		}
	}
	{
		ConnectionRegistration_t& reg; // 239
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 238
		}
	}
} /* size: 0, variables: 2 */

// <005B453A> tier0_perproject/singletons.cpp:220
// variables: 7
void ReconnectInterface(CreateInterfaceFn factory, const char* pInterfaceName, void** ppGlobal)
{
	bool bFound; // 224
	const char   __FUNCTION__; // 60217
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 225
	}
	{
		int i; // 226
		{
			ConnectionRegistration_t& reg; // 228
		}
	}
	{
		ConnectionRegistration_t& reg; // 239
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 238
		}
	}
} /* size: 0, variables: 2 */

// <0050086E> tier0_perproject/singletons.cpp:220
// variables: 7
void ReconnectInterface(CreateInterfaceFn factory, const char* pInterfaceName, void** ppGlobal)
{
	bool bFound; // 224
	const char   __FUNCTION__; // 5096
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 225
	}
	{
		int i; // 226
		{
			ConnectionRegistration_t& reg; // 228
		}
	}
	{
		ConnectionRegistration_t& reg; // 239
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 238
		}
	}
} /* size: 0, variables: 2 */

// <007109BC> tier0_perproject/singletons.cpp:220
// variables: 7
void ReconnectInterface(CreateInterfaceFn factory, const char* pInterfaceName, void** ppGlobal)
{
	bool bFound; // 224
	const char   __FUNCTION__; // 19259
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 225
	}
	{
		int i; // 226
		{
			ConnectionRegistration_t& reg; // 228
		}
	}
	{
		ConnectionRegistration_t& reg; // 239
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 238
		}
	}
} /* size: 0, variables: 2 */

// <00196B12> tier0_perproject/singletons.cpp:220
// variables: 7
void ReconnectInterface(CreateInterfaceFn factory, const char* pInterfaceName, void** ppGlobal)
{
	bool bFound; // 224
	const char   __FUNCTION__; // 46265
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 225
	}
	{
		int i; // 226
		{
			ConnectionRegistration_t& reg; // 228
		}
	}
	{
		ConnectionRegistration_t& reg; // 239
		{
			const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 238
		}
	}
} /* size: 0, variables: 2 */

// <0444BC8A> tier0_perproject/singletons.cpp:250
// variables: 2
int CompareConnectFunc(void* context, const void* _left, const void* _right)
{
	const CPostConnectCallback* left; // 252
	const CPostConnectCallback* right; // 253
} /* size: 56, variables: 2 */

// <0444BAC0> tier0_perproject/singletons.cpp:266
// variables: 8
void CallPostConnect(void)
{
	int nCount; // 268
	CPostConnectCallback** ppCallbacks; // 272
	int nIndex; // 274
	CPostConnectCallback* pCallback; // 275
	const char   __FUNCTION__; // 21665
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 281
	}
	{
		int i; // 288
		{
			PostConnectCallbackRetVal_t nRetVal; // 291
		}
	}
} /* size: 0, variables: 5 */

// <01C153A1> tier0_perproject/singletons.cpp:266
// variables: 8
void CallPostConnect(void)
{
	int nCount; // 268
	CPostConnectCallback** ppCallbacks; // 272
	int nIndex; // 274
	CPostConnectCallback* pCallback; // 275
	const char   __FUNCTION__; // 48247
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 281
	}
	{
		int i; // 288
		{
			PostConnectCallbackRetVal_t nRetVal; // 291
		}
	}
} /* size: 0, variables: 5 */

// <00E4EB89> tier0_perproject/singletons.cpp:266
// variables: 8
void CallPostConnect(void)
{
	int nCount; // 268
	CPostConnectCallback** ppCallbacks; // 272
	int nIndex; // 274
	CPostConnectCallback* pCallback; // 275
	const char   __FUNCTION__; // 27677
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 281
	}
	{
		int i; // 288
		{
			PostConnectCallbackRetVal_t nRetVal; // 291
		}
	}
} /* size: 0, variables: 5 */

// <0034B45E> tier0_perproject/singletons.cpp:266
// variables: 8
void CallPostConnect(void)
{
	int nCount; // 268
	CPostConnectCallback** ppCallbacks; // 272
	int nIndex; // 274
	CPostConnectCallback* pCallback; // 275
	const char   __FUNCTION__; // 36431
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 281
	}
	{
		int i; // 288
		{
			PostConnectCallbackRetVal_t nRetVal; // 291
		}
	}
} /* size: 0, variables: 5 */

// <00641F4F> tier0_perproject/singletons.cpp:266
// variables: 8
void CallPostConnect(void)
{
	int nCount; // 268
	CPostConnectCallback** ppCallbacks; // 272
	int nIndex; // 274
	CPostConnectCallback* pCallback; // 275
	const char   __FUNCTION__; // 24456
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 281
	}
	{
		int i; // 288
		{
			PostConnectCallbackRetVal_t nRetVal; // 291
		}
	}
} /* size: 0, variables: 5 */

// <0026B9AC> tier0_perproject/singletons.cpp:266
// variables: 8
void CallPostConnect(void)
{
	int nCount; // 268
	CPostConnectCallback** ppCallbacks; // 272
	int nIndex; // 274
	CPostConnectCallback* pCallback; // 275
	const char   __FUNCTION__; // 19570
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 281
	}
	{
		int i; // 288
		{
			PostConnectCallbackRetVal_t nRetVal; // 291
		}
	}
} /* size: 0, variables: 5 */

// <005B42E2> tier0_perproject/singletons.cpp:266
// variables: 8
void CallPostConnect(void)
{
	int nCount; // 268
	CPostConnectCallback** ppCallbacks; // 272
	int nIndex; // 274
	CPostConnectCallback* pCallback; // 275
	const char   __FUNCTION__; // 59688
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 281
	}
	{
		int i; // 288
		{
			PostConnectCallbackRetVal_t nRetVal; // 291
		}
	}
} /* size: 0, variables: 5 */

// <00500616> tier0_perproject/singletons.cpp:266
// variables: 8
void CallPostConnect(void)
{
	int nCount; // 268
	CPostConnectCallback** ppCallbacks; // 272
	int nIndex; // 274
	CPostConnectCallback* pCallback; // 275
	const char   __FUNCTION__; // 4567
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 281
	}
	{
		int i; // 288
		{
			PostConnectCallbackRetVal_t nRetVal; // 291
		}
	}
} /* size: 0, variables: 5 */

// <00710764> tier0_perproject/singletons.cpp:266
// variables: 8
void CallPostConnect(void)
{
	int nCount; // 268
	CPostConnectCallback** ppCallbacks; // 272
	int nIndex; // 274
	CPostConnectCallback* pCallback; // 275
	const char   __FUNCTION__; // 18730
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 281
	}
	{
		int i; // 288
		{
			PostConnectCallbackRetVal_t nRetVal; // 291
		}
	}
} /* size: 0, variables: 5 */

// <000A8FF7> tier0_perproject/singletons.cpp:266
// variables: 8
void CallPostConnect(void)
{
	int nCount; // 268
	CPostConnectCallback** ppCallbacks; // 272
	int nIndex; // 274
	CPostConnectCallback* pCallback; // 275
	const char   __FUNCTION__; // 59629
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 281
	}
	{
		int i; // 288
		{
			PostConnectCallbackRetVal_t nRetVal; // 291
		}
	}
} /* size: 0, variables: 5 */

// <0034B203> tier0_perproject/singletons.cpp:301
// variables: 6
// function calls: 2
void ConnectInterfaceSingletons(CreateInterfaceFn* pFactoryList, int nFactoryCount)
{
	const char   __FUNCTION__; // 35973
	{
		int* _pCrash; // 305
	}
	{
		int i; // 309
		{
			int j; // 311
			RegisterInterface(CreateInterfaceFn factory,
						const char* pInterfaceName,
						void** ppGlobal);  // 313
		}
	}
	{
		int i; // 319
		{
			int j; // 321
		}
	}
	LeafCodeInfo_t::LeafCodeInfo_t(
			const char* szFile,
			int nLine,
			const char* szFunction);  // 305
} /* size: 0, variables: 1, inline expansions: 1 (0 bytes) */

// <0034B172> tier0_perproject/singletons.cpp:333
// variables: 3
void DisconnectInterfaceSingletons(void)
{
	const char   __FUNCTION__; // 35370
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 335
	}
	{
		int i; // 339
	}
} /* size: 0, variables: 1 */

// <0034B08C> tier0_perproject/singletons.cpp:353
// variable: 1
// function call: 1
void ReconnectInterfaceSingletons(CreateInterfaceFn factory, const char* pInterfaceName)
{
	{
		int i; // 355
		V_strcmp(const char* s1,
			const char* s2);  // 357
	}
} /* size: 0 */

