
//
// public/tier0/bitbuf.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//
//	functions: 27
//	classes: 2
//

// <0001EB98> ../public/tier0/bitbuf.h:80
void SetBitBufErrorHandler(BitBufErrorHandler)
{
} /* size: 0 */

// <00C8F2C4> ../public/tier0/bitbuf.h:87
inline int BitByte(int bits)
{
} /* size: 0 */

// <04421A4B> ../public/tier0/bitbuf.h:132
inline void ZigZagEncode32(int32 n)
{
} /* size: 0 */

// <00C8F29A> ../public/tier0/bitbuf.h:138
inline void ZigZagDecode32(uint32 n)
{
} /* size: 0 */

// <04421A35> ../public/tier0/bitbuf.h:143
inline void ZigZagEncode64(int64 n)
{
} /* size: 0 */

// <04416E4F> ../public/tier0/bitbuf.h:162
// member functions: 104
// member variables: 7
// class size: 40
class bf_write {
	/* ../public/tier0/bitbuf.h:165 */
	void bf_write(bf_write* );
	/* ../public/tier0/bitbuf.h:169 */
	void bf_write(bf_write* , void* , int, int);
	/* ../public/tier0/bitbuf.h:170 */
	void bf_write(bf_write* , const char* , void* , int, int);
	/* ../public/tier0/bitbuf.h:184 */
	void StartWriting(bf_write* , void* , int, int, int);
	/* ../public/tier0/bitbuf.h:196 */
	void Reset(bf_write* );
	/* ../public/tier0/bitbuf.h:199 */
	unsigned char* GetBasePointer(bf_write* );
	/* ../public/tier0/bitbuf.h:203 */
	void SetAssertOnOverflow(bf_write* , bool);
	/* ../public/tier0/bitbuf.h:204 */
	bool GetAssertOnOverflow(const bf_write* );
	/* ../public/tier0/bitbuf.h:207 */
	const char* GetDebugName(const bf_write* );
	/* ../public/tier0/bitbuf.h:208 */
	void SetDebugName(bf_write* , const char* );
	/* ../public/tier0/bitbuf.h:211 */
	void SeekToBit(bf_write* , int);
	/* ../public/tier0/bitbuf.h:214 */
	void WriteOneBit(bf_write* , int);
	/* ../public/tier0/bitbuf.h:215 */
	void WriteOneBitNoCheck(bf_write* , int);
	/* ../public/tier0/bitbuf.h:216 */
	void WriteOneBitAt(bf_write* , int, int);
	/* ../public/tier0/bitbuf.h:219 */
	void WriteUBitLong(bf_write* , unsigned int, int, bool);
	/* ../public/tier0/bitbuf.h:220 */
	void WriteSBitLong(bf_write* , int, int);
	/* ../public/tier0/bitbuf.h:224 */
	void WriteBitLong(bf_write* , unsigned int, int, bool);
	/* ../public/tier0/bitbuf.h:227 */
	bool WriteBits(bf_write* , const void* , int);
	/* ../public/tier0/bitbuf.h:230 */
	void WriteUBitVar(bf_write* , unsigned int);
	/* ../public/tier0/bitbuf.h:233 */
	void WriteVarInt32(bf_write* , uint32);
	/* ../public/tier0/bitbuf.h:234 */
	void WriteVarInt64(bf_write* , uint64);
	/* ../public/tier0/bitbuf.h:235 */
	void WriteSignedVarInt32(bf_write* , int32);
	/* ../public/tier0/bitbuf.h:236 */
	void WriteSignedVarInt64(bf_write* , int64);
	/* ../public/tier0/bitbuf.h:237 */
	int ByteSizeVarInt32(uint32);
	/* ../public/tier0/bitbuf.h:238 */
	int ByteSizeVarInt64(uint64);
	/* ../public/tier0/bitbuf.h:239 */
	int ByteSizeSignedVarInt32(int32);
	/* ../public/tier0/bitbuf.h:240 */
	int ByteSizeSignedVarInt64(int64);
	/* ../public/tier0/bitbuf.h:244 */
	bool WriteBitsFromBuffer(bf_write* , bf_read* , int);
	/* ../public/tier0/bitbuf.h:246 */
	void WriteBitAngle(bf_write* , float, int);
	/* ../public/tier0/bitbuf.h:247 */
	void WriteBitFloat(bf_write* , float);
	/* ../public/tier0/bitbuf.h:259 */
	void WriteChar(bf_write* , int);
	/* ../public/tier0/bitbuf.h:260 */
	void WriteByte(bf_write* , uint);
	/* ../public/tier0/bitbuf.h:261 */
	void WriteShort(bf_write* , int);
	/* ../public/tier0/bitbuf.h:262 */
	void WriteWord(bf_write* , uint);
	/* ../public/tier0/bitbuf.h:263 */
	void WriteLong(bf_write* , int32);
	/* ../public/tier0/bitbuf.h:264 */
	void WriteLongLong(bf_write* , int64);
	/* ../public/tier0/bitbuf.h:265 */
	void WriteFloat(bf_write* , float);
	/* ../public/tier0/bitbuf.h:266 */
	bool WriteBytes(bf_write* , const void* , int);
	/* ../public/tier0/bitbuf.h:269 */
	bool WriteString(bf_write* , const char* );
	/* ../public/tier0/bitbuf.h:270 */
	bool WriteString(bf_write* , const wchar_t* );
	/* ../public/tier0/bitbuf.h:277 */
	int GetNumBytesWritten(const bf_write* );
	/* ../public/tier0/bitbuf.h:278 */
	int GetNumBitsWritten(const bf_write* );
	/* ../public/tier0/bitbuf.h:279 */
	int GetMaxNumBits(bf_write* );
	/* ../public/tier0/bitbuf.h:280 */
	int GetNumBitsLeft(bf_write* );
	/* ../public/tier0/bitbuf.h:281 */
	int GetNumBytesLeft(bf_write* );
	/* ../public/tier0/bitbuf.h:282 */
	unsigned char* GetData(bf_write* );
	/* ../public/tier0/bitbuf.h:283 */
	const unsigned char* GetData(const bf_write* );
	/* ../public/tier0/bitbuf.h:286 */
	int GetBitCount(const bf_write* );
	/* ../public/tier0/bitbuf.h:292 */
	bool CheckForOverflow(bf_write* , int);
	/* ../public/tier0/bitbuf.h:293 */
	bool IsOverflowed(const bf_write* );
	/* ../public/tier0/bitbuf.h:295 */
	void SetOverflowFlag(bf_write* );
	/* ../public/tier0/bitbuf.h:296 */
	void ClearOverflowFlag(bf_write* );
	uint32 * m_pData; /* 0 8 */
	int m_nDataBytes; /* 8 4 */
	int m_nDataBits; /* 12 4 */
	int m_iCurBit; /* 16 4 */
private:
	const char * m_pDebugName; /* 24 8 */
	bool m_bOverflow; /* 32 1 */
	bool m_bAssertOnOverflow; /* 33 1 */
	void bf_write(class bf_write *); /* linkage=_ZN8bf_writeC4Ev */
	void bf_write(class bf_write *, void *, int, int); /* linkage=_ZN8bf_writeC4EPvii */
	void bf_write(class bf_write *, const char  *, void *, int, int); /* linkage=_ZN8bf_writeC4EPKcPvii */
	/* <4422876> tier0_perproject/bitbuf.cpp:63 */
	void StartWriting(class bf_write *, void *, int, int, int); /* linkage=_ZN8bf_write12StartWritingEPviii */
	void Reset(class bf_write *); /* linkage=_ZN8bf_write5ResetEv */
	unsigned char * GetBasePointer(class bf_write *); /* linkage=_ZN8bf_write14GetBasePointerEv */
	void SetAssertOnOverflow(class bf_write *, bool); /* linkage=_ZN8bf_write19SetAssertOnOverflowEb */
	bool GetAssertOnOverflow(const class bf_write  *); /* linkage=_ZNK8bf_write19GetAssertOnOverflowEv */
	const char  * GetDebugName(const class bf_write  *); /* linkage=_ZNK8bf_write12GetDebugNameEv */
	void SetDebugName(class bf_write *, const char  *); /* linkage=_ZN8bf_write12SetDebugNameEPKc */
	void SeekToBit(class bf_write *, int); /* linkage=_ZN8bf_write9SeekToBitEi */
	void WriteOneBit(class bf_write *, int); /* linkage=_ZN8bf_write11WriteOneBitEi */
	void WriteOneBitNoCheck(class bf_write *, int); /* linkage=_ZN8bf_write18WriteOneBitNoCheckEi */
	void WriteOneBitAt(class bf_write *, int, int); /* linkage=_ZN8bf_write13WriteOneBitAtEii */
	void WriteUBitLong(class bf_write *, unsigned int, int, bool); /* linkage=_ZN8bf_write13WriteUBitLongEjib */
	/* <442290d> tier0_perproject/bitbuf.cpp:133 */
	void WriteSBitLong(class bf_write *, int, int); /* linkage=_ZN8bf_write13WriteSBitLongEii */
	void WriteBitLong(class bf_write *, unsigned int, int, bool); /* linkage=_ZN8bf_write12WriteBitLongEjib */
	/* <4422c78> tier0_perproject/bitbuf.cpp:371 */
	bool WriteBits(class bf_write *, const void  *, int); /* linkage=_ZN8bf_write9WriteBitsEPKvi */
	void WriteUBitVar(class bf_write *, unsigned int); /* linkage=_ZN8bf_write12WriteUBitVarEj */
	void WriteVarInt32(class bf_write *, uint32); /* linkage=_ZN8bf_write13WriteVarInt32Ej */
	void WriteVarInt64(class bf_write *, uint64); /* linkage=_ZN8bf_write13WriteVarInt64Ey */
	void WriteSignedVarInt32(class bf_write *, int32); /* linkage=_ZN8bf_write19WriteSignedVarInt32Ei */
	void WriteSignedVarInt64(class bf_write *, int64); /* linkage=_ZN8bf_write19WriteSignedVarInt64Ex */
	/* <4422bfe> tier0_perproject/bitbuf.cpp:333 */
	int ByteSizeVarInt32(uint32); /* linkage=_ZN8bf_write16ByteSizeVarInt32Ej */
	/* <4422c3b> tier0_perproject/bitbuf.cpp:343 */
	int ByteSizeVarInt64(uint64); /* linkage=_ZN8bf_write16ByteSizeVarInt64Ey */
	int ByteSizeSignedVarInt32(int32); /* linkage=_ZN8bf_write22ByteSizeSignedVarInt32Ei */
	int ByteSizeSignedVarInt64(int64); /* linkage=_ZN8bf_write22ByteSizeSignedVarInt64Ex */
	bool WriteBitsFromBuffer(class bf_write *, class bf_read *, int); /* linkage=_ZN8bf_write19WriteBitsFromBufferEP7bf_readi */
	void WriteBitAngle(class bf_write *, float, int); /* linkage=_ZN8bf_write13WriteBitAngleEfi */
	void WriteBitFloat(class bf_write *, float); /* linkage=_ZN8bf_write13WriteBitFloatEf */
	void WriteChar(class bf_write *, int); /* linkage=_ZN8bf_write9WriteCharEi */
	void WriteByte(class bf_write *, uint); /* linkage=_ZN8bf_write9WriteByteEj */
	void WriteShort(class bf_write *, int); /* linkage=_ZN8bf_write10WriteShortEi */
	void WriteWord(class bf_write *, uint); /* linkage=_ZN8bf_write9WriteWordEj */
	void WriteLong(class bf_write *, int32); /* linkage=_ZN8bf_write9WriteLongEi */
	void WriteLongLong(class bf_write *, int64); /* linkage=_ZN8bf_write13WriteLongLongEx */
	void WriteFloat(class bf_write *, float); /* linkage=_ZN8bf_write10WriteFloatEf */
	bool WriteBytes(class bf_write *, const void  *, int); /* linkage=_ZN8bf_write10WriteBytesEPKvi */
	bool WriteString(class bf_write *, const char  *); /* linkage=_ZN8bf_write11WriteStringEPKc */
	bool WriteString(class bf_write *, const wchar_t  *); /* linkage=_ZN8bf_write11WriteStringEPKw */
	int GetNumBytesWritten(const class bf_write  *); /* linkage=_ZNK8bf_write18GetNumBytesWrittenEv */
	int GetNumBitsWritten(const class bf_write  *); /* linkage=_ZNK8bf_write17GetNumBitsWrittenEv */
	int GetMaxNumBits(class bf_write *); /* linkage=_ZN8bf_write13GetMaxNumBitsEv */
	int GetNumBitsLeft(class bf_write *); /* linkage=_ZN8bf_write14GetNumBitsLeftEv */
	int GetNumBytesLeft(class bf_write *); /* linkage=_ZN8bf_write15GetNumBytesLeftEv */
	unsigned char * GetData(class bf_write *); /* linkage=_ZN8bf_write7GetDataEv */
	const unsigned char  * GetData(const class bf_write  *); /* linkage=_ZNK8bf_write7GetDataEv */
	int GetBitCount(const class bf_write  *); /* linkage=_ZNK8bf_write11GetBitCountEv */
	bool CheckForOverflow(class bf_write *, int); /* linkage=_ZN8bf_write16CheckForOverflowEi */
	bool IsOverflowed(const class bf_write  *); /* linkage=_ZNK8bf_write12IsOverflowedEv */
	void SetOverflowFlag(class bf_write *); /* linkage=_ZN8bf_write15SetOverflowFlagEv */
	void ClearOverflowFlag(class bf_write *); /* linkage=_ZN8bf_write17ClearOverflowFlagEv */
};

// <00C137F4> ../public/tier0/bitbuf.h:169
void bf_write::bf_write(void* pData, int nBytes, int nMaxBits)
{
} /* size: 0 */

// <04421A0F> ../public/tier0/bitbuf.h:259
inline void bf_write::WriteChar(int val)
{
} /* size: 0 */

// <044219E9> ../public/tier0/bitbuf.h:261
inline void bf_write::WriteShort(int val)
{
} /* size: 0 */

// <044219D0> ../public/tier0/bitbuf.h:293
inline void bf_write::IsOverflowed()
{
} /* size: 0 */

// <00C8F27E> ../public/tier0/bitbuf.h:319
inline void bf_write::GetNumBytesWritten()
{
} /* size: 0 */

// <044219B4> ../public/tier0/bitbuf.h:334
inline void bf_write::GetNumBitsLeft()
{
} /* size: 0 */

// <0442196E> ../public/tier0/bitbuf.h:364
// variables: 2
inline void bf_write::SetOverflowFlag()
{
	const char   __FUNCTION__; // 29151
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 369
	}
} /* size: 0, variables: 1 */

// <01BEB24F> ../public/tier0/bitbuf.h:364
// variables: 2
inline void bf_write::SetOverflowFlag()
{
	const char   __FUNCTION__; // 55733
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 369
	}
} /* size: 0, variables: 1 */

// <00C8F21C> ../public/tier0/bitbuf.h:364
// variables: 2
inline void bf_write::SetOverflowFlag()
{
	const char   __FUNCTION__; // 22060
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 369
	}
} /* size: 0, variables: 1 */

// <04421945> ../public/tier0/bitbuf.h:382
inline void bf_write::WriteOneBitNoCheck(int nValue)
{
} /* size: 0 */

// <0442191C> ../public/tier0/bitbuf.h:399
inline void bf_write::WriteOneBit(int nValue)
{
} /* size: 0 */

// <0442183C> ../public/tier0/bitbuf.h:431
// variables: 11
inline void bf_write::WriteUBitLong(unsigned int curData, int numbits, bool bCheckRange)
{
	const char   __FUNCTION__; // 41809
	int iCurBitMasked; // 452
	int iDWord; // 453
	uint32* pOut; // 458
	unsigned int temp; // 464
	unsigned int mask1; // 465
	unsigned int mask2; // 466
	int i; // 469
	uint32 dword1; // 470
	uint32 dword2; // 471
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 433
	}
} /* size: 0, variables: 10 */

// <01BEB11D> ../public/tier0/bitbuf.h:431
// variables: 11
inline void bf_write::WriteUBitLong(unsigned int curData, int numbits, bool bCheckRange)
{
	const char   __FUNCTION__; // 2855
	int iCurBitMasked; // 452
	int iDWord; // 453
	uint32* pOut; // 458
	unsigned int temp; // 464
	unsigned int mask1; // 465
	unsigned int mask2; // 466
	int i; // 469
	uint32 dword1; // 470
	uint32 dword2; // 471
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 433
	}
} /* size: 0, variables: 10 */

// <00C8F0F4> ../public/tier0/bitbuf.h:431
// variables: 11
inline void bf_write::WriteUBitLong(unsigned int curData, int numbits, bool bCheckRange)
{
	const char   __FUNCTION__; // 22006
	int iCurBitMasked; // 452
	int iDWord; // 453
	uint32* pOut; // 458
	unsigned int temp; // 464
	unsigned int mask1; // 465
	unsigned int mask2; // 466
	int i; // 469
	uint32 dword1; // 470
	uint32 dword2; // 471
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 433
	}
} /* size: 0, variables: 10 */

// <04417634> ../public/tier0/bitbuf.h:612
// member functions: 102
// member variables: 7
// class size: 40
class bf_read {
	/* ../public/tier0/bitbuf.h:615 */
	void bf_read(bf_read* );
	/* ../public/tier0/bitbuf.h:619 */
	void bf_read(bf_read* , const void* , int, int);
	/* ../public/tier0/bitbuf.h:620 */
	void bf_read(bf_read* , const char* , const void* , int, int);
	/* ../public/tier0/bitbuf.h:635 */
	void StartReading(bf_read* , const void* , int, int, int);
	/* ../public/tier0/bitbuf.h:647 */
	void Reset(bf_read* );
	/* ../public/tier0/bitbuf.h:651 */
	void SetAssertOnOverflow(bf_read* , bool);
	/* ../public/tier0/bitbuf.h:652 */
	bool GetAssertOnOverflow(const bf_read* );
	/* ../public/tier0/bitbuf.h:655 */
	const char* GetDebugName(const bf_read* );
	/* ../public/tier0/bitbuf.h:656 */
	void SetDebugName(bf_read* , const char* );
	/* ../public/tier0/bitbuf.h:658 */
	void ExciseBits(bf_read* , int, int);
	/* ../public/tier0/bitbuf.h:664 */
	bool ReadOneBit(bf_read* );
protected:
	/* ../public/tier0/bitbuf.h:671 */
	unsigned int CheckReadUBitLong(bf_read* , int);
	/* ../public/tier0/bitbuf.h:672 */
	bool ReadOneBitNoCheck(bf_read* );
	/* ../public/tier0/bitbuf.h:673 */
	bool CheckForOverflow(bf_read* , int);
	/* ../public/tier0/bitbuf.h:679 */
	const unsigned char* GetBasePointer(bf_read* );
	/* ../public/tier0/bitbuf.h:681 */
	int TotalBytesAvailable(const bf_read* );
	/* ../public/tier0/bitbuf.h:687 */
	void ReadBits(bf_read* , void* , int);
	/* ../public/tier0/bitbuf.h:689 */
	float ReadBitAngle(bf_read* , int);
	/* ../public/tier0/bitbuf.h:691 */
	unsigned int ReadUBitLong(bf_read* , int);
	/* ../public/tier0/bitbuf.h:692 */
	unsigned int ReadUBitLongNoInline(bf_read* , int);
	/* ../public/tier0/bitbuf.h:693 */
	unsigned int PeekUBitLong(bf_read* , int);
	/* ../public/tier0/bitbuf.h:694 */
	int ReadSBitLong(bf_read* , int);
	/* ../public/tier0/bitbuf.h:697 */
	unsigned int ReadUBitVar(bf_read* );
	/* ../public/tier0/bitbuf.h:698 */
	unsigned int ReadUBitVarInternal(bf_read* , int);
	/* ../public/tier0/bitbuf.h:701 */
	uint32 ReadVarInt32(bf_read* );
	/* ../public/tier0/bitbuf.h:702 */
	uint64 ReadVarInt64(bf_read* );
	/* ../public/tier0/bitbuf.h:703 */
	int32 ReadSignedVarInt32(bf_read* );
	/* ../public/tier0/bitbuf.h:704 */
	int64 ReadSignedVarInt64(bf_read* );
	/* ../public/tier0/bitbuf.h:708 */
	unsigned int ReadBitLong(bf_read* , int, bool);
	/* ../public/tier0/bitbuf.h:709 */
	float ReadBitFloat(bf_read* );
	/* ../public/tier0/bitbuf.h:722 */
	char ReadChar(bf_read* );
	/* ../public/tier0/bitbuf.h:723 */
	uint8 ReadByte(bf_read* );
	/* ../public/tier0/bitbuf.h:724 */
	int16 ReadShort(bf_read* );
	/* ../public/tier0/bitbuf.h:725 */
	uint16 ReadWord(bf_read* );
	/* ../public/tier0/bitbuf.h:726 */
	int32 ReadLong(bf_read* );
	/* ../public/tier0/bitbuf.h:727 */
	int64 ReadLongLong(bf_read* );
	/* ../public/tier0/bitbuf.h:728 */
	float ReadFloat(bf_read* );
	/* ../public/tier0/bitbuf.h:729 */
	bool ReadBytes(bf_read* , void* , int);
	/* ../public/tier0/bitbuf.h:744 */
	bool ReadString(bf_read* , CBufferString* , bool, int* );
	/* ../public/tier0/bitbuf.h:747 */
	void ReadMemString(bf_read* , CUtlMemory<char, int>* );
	/* ../public/tier0/bitbuf.h:750 */
	int CompareBits(bf_read* , bf_read* , int);
	/* ../public/tier0/bitbuf.h:751 */
	int CompareBitsAt(bf_read* , int, bf_read* , int, int);
	/* ../public/tier0/bitbuf.h:755 */
	int GetNumBytesLeft(bf_read* );
	/* ../public/tier0/bitbuf.h:756 */
	int GetNumBytesRead(bf_read* );
	/* ../public/tier0/bitbuf.h:757 */
	int GetNumBitsLeft(bf_read* );
	/* ../public/tier0/bitbuf.h:758 */
	int GetNumBitsRead(const bf_read* );
	/* ../public/tier0/bitbuf.h:761 */
	int GetBitCount(const bf_read* );
	/* ../public/tier0/bitbuf.h:767 */
	bool IsOverflowed(const bf_read* );
	/* ../public/tier0/bitbuf.h:769 */
	bool Seek(bf_read* , int);
	/* ../public/tier0/bitbuf.h:770 */
	bool SeekRelative(bf_read* , int);
	/* ../public/tier0/bitbuf.h:773 */
	void SetOverflowFlag(bf_read* );
	const unsigned char * m_pData; /* 0 8 */
	int m_nDataBytes; /* 8 4 */
	int m_nDataBits; /* 12 4 */
	int m_iCurBit; /* 16 4 */
private:
	const char * m_pDebugName; /* 24 8 */
	bool m_bOverflow; /* 32 1 */
	bool m_bAssertOnOverflow; /* 33 1 */
	void bf_read(class bf_read *); /* linkage=_ZN7bf_readC4Ev */
	void bf_read(class bf_read *, const void  *, int, int); /* linkage=_ZN7bf_readC4EPKvii */
	void bf_read(class bf_read *, const char  *, const void  *, int, int); /* linkage=_ZN7bf_readC4EPKcPKvii */
	/* <4422d4f> tier0_perproject/bitbuf.cpp:571 */
	void StartReading(class bf_read *, const void  *, int, int, int); /* linkage=_ZN7bf_read12StartReadingEPKviii */
	void Reset(class bf_read *); /* linkage=_ZN7bf_read5ResetEv */
	void SetAssertOnOverflow(class bf_read *, bool); /* linkage=_ZN7bf_read19SetAssertOnOverflowEb */
	bool GetAssertOnOverflow(const class bf_read  *); /* linkage=_ZNK7bf_read19GetAssertOnOverflowEv */
	const char  * GetDebugName(const class bf_read  *); /* linkage=_ZNK7bf_read12GetDebugNameEv */
	void SetDebugName(class bf_read *, const char  *); /* linkage=_ZN7bf_read12SetDebugNameEPKc */
	void ExciseBits(class bf_read *, int, int); /* linkage=_ZN7bf_read10ExciseBitsEii */
	bool ReadOneBit(class bf_read *); /* linkage=_ZN7bf_read10ReadOneBitEv */
	unsigned int CheckReadUBitLong(class bf_read *, int); /* linkage=_ZN7bf_read17CheckReadUBitLongEi */
	bool ReadOneBitNoCheck(class bf_read *); /* linkage=_ZN7bf_read17ReadOneBitNoCheckEv */
	bool CheckForOverflow(class bf_read *, int); /* linkage=_ZN7bf_read16CheckForOverflowEi */
	const unsigned char  * GetBasePointer(class bf_read *); /* linkage=_ZN7bf_read14GetBasePointerEv */
	int TotalBytesAvailable(const class bf_read  *); /* linkage=_ZNK7bf_read19TotalBytesAvailableEv */
	void ReadBits(class bf_read *, void *, int); /* linkage=_ZN7bf_read8ReadBitsEPvi */
	float ReadBitAngle(class bf_read *, int); /* linkage=_ZN7bf_read12ReadBitAngleEi */
	unsigned int ReadUBitLong(class bf_read *, int); /* linkage=_ZN7bf_read12ReadUBitLongEi */
	unsigned int ReadUBitLongNoInline(class bf_read *, int); /* linkage=_ZN7bf_read20ReadUBitLongNoInlineEi */
	unsigned int PeekUBitLong(class bf_read *, int); /* linkage=_ZN7bf_read12PeekUBitLongEi */
	/* <4422dea> tier0_perproject/bitbuf.cpp:737 */
	int ReadSBitLong(class bf_read *, int); /* linkage=_ZN7bf_read12ReadSBitLongEi */
	unsigned int ReadUBitVar(class bf_read *); /* linkage=_ZN7bf_read11ReadUBitVarEv */
	unsigned int ReadUBitVarInternal(class bf_read *, int); /* linkage=_ZN7bf_read19ReadUBitVarInternalEi */
	uint32 ReadVarInt32(class bf_read *); /* linkage=_ZN7bf_read12ReadVarInt32Ev */
	uint64 ReadVarInt64(class bf_read *); /* linkage=_ZN7bf_read12ReadVarInt64Ev */
	int32 ReadSignedVarInt32(class bf_read *); /* linkage=_ZN7bf_read18ReadSignedVarInt32Ev */
	int64 ReadSignedVarInt64(class bf_read *); /* linkage=_ZN7bf_read18ReadSignedVarInt64Ev */
	unsigned int ReadBitLong(class bf_read *, int, bool); /* linkage=_ZN7bf_read11ReadBitLongEib */
	float ReadBitFloat(class bf_read *); /* linkage=_ZN7bf_read12ReadBitFloatEv */
	char ReadChar(class bf_read *); /* linkage=_ZN7bf_read8ReadCharEv */
	uint8 ReadByte(class bf_read *); /* linkage=_ZN7bf_read8ReadByteEv */
	int16 ReadShort(class bf_read *); /* linkage=_ZN7bf_read9ReadShortEv */
	uint16 ReadWord(class bf_read *); /* linkage=_ZN7bf_read8ReadWordEv */
	int32 ReadLong(class bf_read *); /* linkage=_ZN7bf_read8ReadLongEv */
	int64 ReadLongLong(class bf_read *); /* linkage=_ZN7bf_read12ReadLongLongEv */
	float ReadFloat(class bf_read *); /* linkage=_ZN7bf_read9ReadFloatEv */
	bool ReadBytes(class bf_read *, void *, int); /* linkage=_ZN7bf_read9ReadBytesEPvi */
	bool ReadString(class bf_read *, class CBufferString *, bool, int *); /* linkage=_ZN7bf_read10ReadStringEP13CBufferStringbPi */
	void ReadMemString(class bf_read *, class CUtlMemory<char, int> *); /* linkage=_ZN7bf_read13ReadMemStringEP10CUtlMemoryIciE */
	int CompareBits(class bf_read *, class bf_read *, int); /* linkage=_ZN7bf_read11CompareBitsEPS_i */
	int CompareBitsAt(class bf_read *, int, class bf_read *, int, int); /* linkage=_ZN7bf_read13CompareBitsAtEiPS_ii */
	int GetNumBytesLeft(class bf_read *); /* linkage=_ZN7bf_read15GetNumBytesLeftEv */
	int GetNumBytesRead(class bf_read *); /* linkage=_ZN7bf_read15GetNumBytesReadEv */
	int GetNumBitsLeft(class bf_read *); /* linkage=_ZN7bf_read14GetNumBitsLeftEv */
	int GetNumBitsRead(const class bf_read  *); /* linkage=_ZNK7bf_read14GetNumBitsReadEv */
	int GetBitCount(const class bf_read  *); /* linkage=_ZNK7bf_read11GetBitCountEv */
	bool IsOverflowed(const class bf_read  *); /* linkage=_ZNK7bf_read12IsOverflowedEv */
	bool Seek(class bf_read *, int); /* linkage=_ZN7bf_read4SeekEi */
	bool SeekRelative(class bf_read *, int); /* linkage=_ZN7bf_read12SeekRelativeEi */
	/* <4422dbc> tier0_perproject/bitbuf.cpp:611 */
	void SetOverflowFlag(class bf_read *); /* linkage=_ZN7bf_read15SetOverflowFlagEv */
};

// <00C13790> ../public/tier0/bitbuf.h:619
void bf_read::bf_read(const void* pData, int nBytes, int nBits)
{
} /* size: 0 */

// <04421823> ../public/tier0/bitbuf.h:722
inline void bf_read::ReadChar()
{
} /* size: 0 */

// <0442180A> ../public/tier0/bitbuf.h:767
inline void bf_read::IsOverflowed()
{
} /* size: 0 */

// <044217EE> ../public/tier0/bitbuf.h:800
inline void bf_read::GetNumBitsLeft()
{
} /* size: 0 */

// <044217C5> ../public/tier0/bitbuf.h:815
inline void bf_read::Seek(int iBit)
{
} /* size: 0 */

// <0442179C> ../public/tier0/bitbuf.h:846
// variable: 1
inline void bf_read::ReadOneBitNoCheck()
{
	unsigned int value; // 849
} /* size: 0, variables: 1 */

// <04421780> ../public/tier0/bitbuf.h:857
inline void bf_read::ReadOneBit()
{
} /* size: 0 */

// <044216FC> ../public/tier0/bitbuf.h:904
// variables: 7
inline void bf_read::ReadUBitLong(int numbits)
{
	unsigned int iStartBit; // 915
	int iLastBit; // 916
	unsigned int iWordOffset1; // 917
	unsigned int iWordOffset2; // 918
	unsigned int bitmask; // 922
	unsigned int dw1; // 928
	unsigned int dw2; // 929
} /* size: 0, variables: 7 */

