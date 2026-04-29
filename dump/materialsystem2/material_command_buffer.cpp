
//
// materialsystem2/material_command_buffer.cpp
//
//	referenced by: libmaterialsystem2.so
//
//	functions: 9
//	class: 1
//	struct: 1
//

// <0027C187> materialsystem2/material_command_buffer.cpp:218
void DebugPrintMaterialCommandBuffer(const uint8* pCmdBuf)
{
} /* size: 0 */

// <0027C168> materialsystem2/material_command_buffer.cpp:224
inline int FindLSBSetNonZero(uint64 nMask)
{
} /* size: 0 */

// <0027C079> materialsystem2/material_command_buffer.cpp:248
void CConstantBufferState::CConstantBufferState()
{
} /* size: 0 */

// <0027C05C> materialsystem2/material_command_buffer.cpp:248
inline void CConstantBufferState::CConstantBufferState()
{
} /* size: 0 */

// <0023EAF3> materialsystem2/material_command_buffer.cpp:248
// member functions: 12
// member variables: 5
// class size: 264
class CConstantBufferState {
	ConstantBufferHandle_t m_handle[16]; /* 0 128 */
	uint32 m_nView[16]; /* 128 64 */
	CUtlStringToken m_nName[16]; /* 192 64 */
	int32 m_nHighestBoundCB; /* 256 4 */
	uint32 m_nCBBoundBits; /* 260 4 */
	/* materialsystem2/material_command_buffer.cpp:257 */
	ConstantBufferHandle_t GetHandleForSlot(const CConstantBufferState* , int);
	/* materialsystem2/material_command_buffer.cpp:258 */
	uint32 GetViewForSlot(const CConstantBufferState* , int);
	/* materialsystem2/material_command_buffer.cpp:259 */
	CUtlStringToken GetNameForSlot(const CConstantBufferState* , int);
	/* materialsystem2/material_command_buffer.cpp:261 */
	void Clear(CConstantBufferState* );
	/* materialsystem2/material_command_buffer.cpp:267 */
	void Bind(CConstantBufferState* , int, ConstantBufferHandle_t, CUtlStringToken, uint32);
	void CConstantBufferState(CConstantBufferState* );
	ConstantBufferHandle_t GetHandleForSlot(const class CConstantBufferState  *, int); /* linkage=_ZNK20CConstantBufferState16GetHandleForSlotEi */
	uint32 GetViewForSlot(const class CConstantBufferState  *, int); /* linkage=_ZNK20CConstantBufferState14GetViewForSlotEi */
	class CUtlStringToken GetNameForSlot(const class CConstantBufferState  *, int); /* linkage=_ZNK20CConstantBufferState14GetNameForSlotEi */
	void Clear(class CConstantBufferState *); /* linkage=_ZN20CConstantBufferState5ClearEv */
	void Bind(class CConstantBufferState *, int, ConstantBufferHandle_t, class CUtlStringToken, uint32); /* linkage=_ZN20CConstantBufferState4BindEiP24ConstantBufferHandle_t__15CUtlStringTokenj */
	void CConstantBufferState(class CConstantBufferState *); /* linkage=_ZN20CConstantBufferStateC4Ev */
};

// <0027C142> materialsystem2/material_command_buffer.cpp:257
inline void CConstantBufferState::GetHandleForSlot(int nSlot)
{
} /* size: 0 */

// <0027C11C> materialsystem2/material_command_buffer.cpp:258
inline void CConstantBufferState::GetViewForSlot(int nSlot)
{
} /* size: 0 */

// <0027C0F6> materialsystem2/material_command_buffer.cpp:259
inline void CConstantBufferState::GetNameForSlot(int nSlot)
{
} /* size: 0 */

// <0027C0DD> materialsystem2/material_command_buffer.cpp:261
inline void CConstantBufferState::Clear()
{
} /* size: 0 */

// <0027C090> materialsystem2/material_command_buffer.cpp:267
inline void CConstantBufferState::Bind(int nSlot, ConstantBufferHandle_t hHandle, CUtlStringToken nName, uint32 nCBView)
{
} /* size: 0 */

// <0023EC79> materialsystem2/material_command_buffer.cpp:284
// member variable: 1
// struct size: 48
struct GlobalsBDAPushConstant_t {
	uint64_t nGlobalsBDAPerStage[6]; /* 0 48 */
};

