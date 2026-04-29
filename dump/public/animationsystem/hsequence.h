
//
// public/animationsystem/hsequence.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//
//	functions: 7
//	class: 1
//

// <04D7CB77> ../public/animationsystem/hsequence.h:14
void HSequence::HSequence()
{
} /* size: 0 */

// <04D7CB5E> ../public/animationsystem/hsequence.h:14
inline void HSequence::HSequence()
{
} /* size: 0 */

// <04D7CB45> ../public/animationsystem/hsequence.h:14
inline void HSequence::GetRaw()
{
} /* size: 0 */

// <04AE08A8> ../public/animationsystem/hsequence.h:14
void HSequence::HSequence(int32 value)
{
} /* size: 0 */

// <04AE0883> ../public/animationsystem/hsequence.h:14
inline void HSequence::HSequence(int32 value)
{
} /* size: 0 */

// <01345F0F> ../public/animationsystem/hsequence.h:14
inline void HSequence::operator==(const HSequence& other)
{
} /* size: 0 */

// <018637C0> ../public/animationsystem/hsequence.h:14
inline void HSequence::SetRaw(int32 other)
{
} /* size: 0 */

// <000E8014> ../public/animationsystem/hsequence.h:14
// member functions: 30
// member variable: 1
// static member variables: 2
// class size: 4
class HSequence {
	static const enum TypeSafeIntCheckFlag_t CheckValue; /* 0 0 */
	static const bool IS_TYPESAFE_INTEGER = 1; /* 0 0 */
	/* ../public/animationsystem/hsequence.h:14 */
	const char* GetTypeName(void);
	/* ../public/animationsystem/hsequence.h:14 */
	void HSequence(HSequence* );
	/* ../public/animationsystem/hsequence.h:14 */
	void HSequence(HSequence* , int32);
	/* ../public/animationsystem/hsequence.h:14 */
	void SetRaw(HSequence* , int32);
	/* ../public/animationsystem/hsequence.h:14 */
	int32 GetRaw(const HSequence* );
	/* ../public/animationsystem/hsequence.h:14 */
	int32& GetRawRef(HSequence* );
	/* ../public/animationsystem/hsequence.h:14 */
	const int32& GetRawRef(const HSequence* );
	/* ../public/animationsystem/hsequence.h:14 */
	int32* GetRawPtrForWrite(HSequence* );
	/* ../public/animationsystem/hsequence.h:14 */
	bool operator==(const HSequence* , const HSequence& );
	/* ../public/animationsystem/hsequence.h:14 */
	strong_ordering operator<=>(const HSequence* , const HSequence& );
	/* ../public/animationsystem/hsequence.h:14 */
	HSequence& operator++(HSequence* );
	/* ../public/animationsystem/hsequence.h:14 */
	HSequence operator++(HSequence* , int);
	/* ../public/animationsystem/hsequence.h:14 */
	HSequence& operator--(HSequence* );
	/* ../public/animationsystem/hsequence.h:14 */
	HSequence operator--(HSequence* , int);
private:
	int32 m_Value; /* 0 4 */
	/* ../public/animationsystem/hsequence.h:14 */
	HSequence& operator=(HSequence* , int32);
	const char  * GetTypeName(void); /* linkage=_ZN9HSequence11GetTypeNameEv */
	void HSequence(class HSequence *); /* linkage=_ZN9HSequenceC4Ev */
	void HSequence(class HSequence *, int32); /* linkage=_ZN9HSequenceC4Ei */
	void SetRaw(class HSequence *, int32); /* linkage=_ZN9HSequence6SetRawEi */
	int32 GetRaw(const class HSequence  *); /* linkage=_ZNK9HSequence6GetRawEv */
	int32 & GetRawRef(class HSequence *); /* linkage=_ZN9HSequence9GetRawRefEv */
	const int32  & GetRawRef(const class HSequence  *); /* linkage=_ZNK9HSequence9GetRawRefEv */
	int32 * GetRawPtrForWrite(class HSequence *); /* linkage=_ZN9HSequence17GetRawPtrForWriteEv */
	bool operator==(const class HSequence  *, const class HSequence  &); /* linkage=_ZNK9HSequenceeqERKS_ */
	class strong_ordering operator<=>(const class HSequence  *, const class HSequence  &); /* linkage=_ZNK9HSequencessERKS_ */
	class HSequence & operator++(class HSequence *); /* linkage=_ZN9HSequenceppEv */
	class HSequence operator++(class HSequence *, int); /* linkage=_ZN9HSequenceppEi */
	class HSequence & operator--(class HSequence *); /* linkage=_ZN9HSequencemmEv */
	class HSequence operator--(class HSequence *, int); /* linkage=_ZN9HSequencemmEi */
	class HSequence & operator=(class HSequence *, int32); /* linkage=_ZN9HSequenceaSEi */
};

