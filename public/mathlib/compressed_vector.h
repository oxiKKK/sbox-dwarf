
//
// public/mathlib/compressed_vector.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 21
//	classes: 6
//

// <001A8A82> ../public/mathlib/compressed_vector.h:317
// member functions: 14
// member variables: 6
// class size: 6
class Quaternion48S {
	/* ../public/mathlib/compressed_vector.h:321 */
	void Quaternion48S(Quaternion48S* );
	/* ../public/mathlib/compressed_vector.h:322 */
	void Quaternion48S(Quaternion48S* , vec_t, vec_t, vec_t);
	/* ../public/mathlib/compressed_vector.h:323 */
	void Quaternion48S(Quaternion48S* , const Quaternion& );
	/* ../public/mathlib/compressed_vector.h:327 */
	Quaternion48S& operator=(Quaternion48S* , const Quaternion& );
	/* ../public/mathlib/compressed_vector.h:328 */
	bool operator==(const Quaternion48S* , const Quaternion& );
	/* ../public/mathlib/compressed_vector.h:329 */
	bool operator!=(const Quaternion48S* , const Quaternion& );
	/* ../public/mathlib/compressed_vector.h:330 */
	Quaternion operator Quaternion(const Quaternion48S* );
	short unsigned int a:15; /* 0: 0 2 */
	short unsigned int offsetH:1; /* 0:15 2 */
	short unsigned int b:15; /* 2: 0 2 */
	short unsigned int offsetL:1; /* 2:15 2 */
	short unsigned int c:15; /* 4: 0 2 */
	short unsigned int dneg:1; /* 4:15 2 */
	void Quaternion48S(class Quaternion48S *); /* linkage=_ZN13Quaternion48SC4Ev */
	void Quaternion48S(class Quaternion48S *, vec_t, vec_t, vec_t); /* linkage=_ZN13Quaternion48SC4Efff */
	void Quaternion48S(class Quaternion48S *, const class Quaternion  &); /* linkage=_ZN13Quaternion48SC4ERK10Quaternion */
	class Quaternion48S & operator=(class Quaternion48S *, const class Quaternion  &); /* linkage=_ZN13Quaternion48SaSERK10Quaternion */
	bool operator==(const class Quaternion48S  *, const class Quaternion  &); /* linkage=_ZNK13Quaternion48SeqERK10Quaternion */
	bool operator!=(const class Quaternion48S  *, const class Quaternion  &); /* linkage=_ZNK13Quaternion48SneERK10Quaternion */
	class Quaternion operator Quaternion(const class Quaternion48S  *); /* linkage=_ZNK13Quaternion48Scv10QuaternionEv */
};

// <025DE553> ../public/mathlib/compressed_vector.h:323
void Quaternion48S::Quaternion48S(const Quaternion& vOther)
{
} /* size: 0 */

// <025DE52D> ../public/mathlib/compressed_vector.h:323
inline void Quaternion48S::Quaternion48S(const Quaternion& vOther)
{
} /* size: 0 */

// <025DE3E3> ../public/mathlib/compressed_vector.h:347
// variables: 6
// function call: 1
void operator Quaternion48S::Quaternion()
{
	Quaternion tmp; // 349
	float* ptmp; // 353
	int ia; // 354
	int ib; // 355
	int ic; // 356
	int id; // 357
	Quaternion::Quaternion(); // 349
} /* size: 323, variables: 6, inline expansions: 1 (0 bytes) */

// <025E0303> ../public/mathlib/compressed_vector.h:368
// variables: 3
// function calls: 3
void Quaternion48S::operator=(const Quaternion& vOther)
{
	const float* ptmp; // 372
	int i; // 375
	int offset; // 389
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 392
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 393
	clamp<int, int>(const int& val,
			const int& minVal,
			const int& maxVal);  // 394
} /* size: 429, variables: 3, inline expansions: 3 (61 bytes) */

// <025DE395> ../public/mathlib/compressed_vector.h:368
// variables: 3
inline void Quaternion48S::operator=(const Quaternion& vOther)
{
	const float* ptmp; // 372
	int i; // 375
	int offset; // 389
} /* size: 0, variables: 3 */

// <00D21DA0> ../public/mathlib/compressed_vector.h:368
// variables: 3
void Quaternion48S::operator=(const Quaternion& vOther)
{
	const float* ptmp; // 372
	int i; // 375
	int offset; // 389
} /* size: 0, variables: 3 */

// <0114566A> ../public/mathlib/compressed_vector.h:460
// member functions: 24
// member variable: 1
// class size: 2
class float16 {
	/* ../public/mathlib/compressed_vector.h:500 */
	union float32bits {
		float rawFloat; /* 0 4 */
		struct {
			unsigned int mantissa:23; /* 0: 0 4 */
			unsigned int biased_exponent:8; /* 0:23 4 */
			unsigned int sign:1; /* 0:31 4 */
		} bits; /* 0 4 */
	};
	/* ../public/mathlib/compressed_vector.h:511 */
	union float16bits {
		short unsigned int rawWord; /* 0 2 */
		struct {
			short unsigned int mantissa:10; /* 0: 0 2 */
			short unsigned int biased_exponent:5; /* 0:10 2 */
			short unsigned int sign:1; /* 0:15 2 */
		} bits; /* 0 2 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/mathlib/compressed_vector.h:466 */
	void Init(float16* );
	/* ../public/mathlib/compressed_vector.h:471 */
	short unsigned int GetBits(const float16* );
	/* ../public/mathlib/compressed_vector.h:475 */
	float GetFloat(const float16* );
	/* ../public/mathlib/compressed_vector.h:479 */
	void SetFloat(float16* , float);
	/* ../public/mathlib/compressed_vector.h:484 */
	bool IsInfinity(const float16* );
	/* ../public/mathlib/compressed_vector.h:488 */
	bool IsNaN(const float16* );
	/* ../public/mathlib/compressed_vector.h:493 */
	bool operator==(const float16* , float16);
	/* ../public/mathlib/compressed_vector.h:494 */
	bool operator!=(const float16* , float16);
protected:
	/* ../public/mathlib/compressed_vector.h:522 */
	bool IsNaN(union float16bits);
	/* ../public/mathlib/compressed_vector.h:526 */
	bool IsInfinity(union float16bits);
	/* ../public/mathlib/compressed_vector.h:533 */
	short unsigned int ConvertFloatTo16bits(float);
	/* ../public/mathlib/compressed_vector.h:626 */
	float Convert16bitFloatTo32bits(short unsigned int);
	union float16bits m_storage; /* 0 2 */
	void Init(class float16 *); /* linkage=_ZN7float164InitEv */
	short unsigned int GetBits(const class float16  *); /* linkage=_ZNK7float167GetBitsEv */
	float GetFloat(const class float16  *); /* linkage=_ZNK7float168GetFloatEv */
	void SetFloat(class float16 *, float); /* linkage=_ZN7float168SetFloatEf */
	bool IsInfinity(const class float16  *); /* linkage=_ZNK7float1610IsInfinityEv */
	bool IsNaN(const class float16  *); /* linkage=_ZNK7float165IsNaNEv */
	bool operator==(const class float16  *, class float16); /* linkage=_ZNK7float16eqES_ */
	bool operator!=(const class float16  *, class float16); /* linkage=_ZNK7float16neES_ */
	bool IsNaN(union float16bits); /* linkage=_ZN7float165IsNaNENS_11float16bitsE */
	bool IsInfinity(union float16bits); /* linkage=_ZN7float1610IsInfinityENS_11float16bitsE */
	/* <25e0c17> ../public/mathlib/compressed_vector.h:533 */
	short unsigned int ConvertFloatTo16bits(float); /* linkage=_ZN7float1620ConvertFloatTo16bitsEf */
	float Convert16bitFloatTo32bits(short unsigned int); /* linkage=_ZN7float1625Convert16bitFloatTo32bitsEt */
};

// <02B0B756> ../public/mathlib/compressed_vector.h:460
// member functions: 24
// member variable: 1
// class size: 2
class float16 {
	/* ../public/mathlib/compressed_vector.h:500 */
	union float32bits {
		float rawFloat; /* 0 4 */
		struct {
			unsigned int mantissa:23; /* 0: 0 4 */
			unsigned int biased_exponent:8; /* 0:23 4 */
			unsigned int sign:1; /* 0:31 4 */
		} bits; /* 0 4 */
	};
	/* ../public/mathlib/compressed_vector.h:511 */
	union float16bits {
		short unsigned int rawWord; /* 0 2 */
		struct {
			short unsigned int mantissa:10; /* 0: 0 2 */
			short unsigned int biased_exponent:5; /* 0:10 2 */
			short unsigned int sign:1; /* 0:15 2 */
		} bits; /* 0 2 */
	};
	/* ../public/mathlib/compressed_vector.h:466 */
	void Init(float16* );
	/* ../public/mathlib/compressed_vector.h:471 */
	short unsigned int GetBits(const float16* );
	/* ../public/mathlib/compressed_vector.h:475 */
	float GetFloat(const float16* );
	/* ../public/mathlib/compressed_vector.h:479 */
	void SetFloat(float16* , float);
	/* ../public/mathlib/compressed_vector.h:484 */
	bool IsInfinity(const float16* );
	/* ../public/mathlib/compressed_vector.h:488 */
	bool IsNaN(const float16* );
	/* ../public/mathlib/compressed_vector.h:493 */
	bool operator==(const float16* , float16);
	/* ../public/mathlib/compressed_vector.h:494 */
	bool operator!=(const float16* , float16);
protected:
	/* ../public/mathlib/compressed_vector.h:522 */
	bool IsNaN(union float16bits);
	/* ../public/mathlib/compressed_vector.h:526 */
	bool IsInfinity(union float16bits);
	/* ../public/mathlib/compressed_vector.h:533 */
	short unsigned int ConvertFloatTo16bits(float);
	/* ../public/mathlib/compressed_vector.h:626 */
	float Convert16bitFloatTo32bits(short unsigned int);
	union float16bits m_storage; /* 0 2 */
	void Init(class float16 *); /* linkage=_ZN7float164InitEv */
	short unsigned int GetBits(const class float16  *); /* linkage=_ZNK7float167GetBitsEv */
	float GetFloat(const class float16  *); /* linkage=_ZNK7float168GetFloatEv */
	void SetFloat(class float16 *, float); /* linkage=_ZN7float168SetFloatEf */
	bool IsInfinity(const class float16  *); /* linkage=_ZNK7float1610IsInfinityEv */
	bool IsNaN(const class float16  *); /* linkage=_ZNK7float165IsNaNEv */
	bool operator==(const class float16  *, class float16); /* linkage=_ZNK7float16eqES_ */
	bool operator!=(const class float16  *, class float16); /* linkage=_ZNK7float16neES_ */
	bool IsNaN(union float16bits); /* linkage=_ZN7float165IsNaNENS_11float16bitsE */
	bool IsInfinity(union float16bits); /* linkage=_ZN7float1610IsInfinityENS_11float16bitsE */
	/* <25e0c17> ../public/mathlib/compressed_vector.h:533 */
	short unsigned int ConvertFloatTo16bits(float); /* linkage=_ZN7float1620ConvertFloatTo16bitsEf */
	float Convert16bitFloatTo32bits(short unsigned int); /* linkage=_ZN7float1625Convert16bitFloatTo32bitsEt */
};

// <02FF2209> ../public/mathlib/compressed_vector.h:460
// member functions: 24
// member variable: 1
// class size: 2
class float16 {
	/* ../public/mathlib/compressed_vector.h:511 */
	union float16bits {
		short unsigned int rawWord; /* 0 2 */
		struct {
			short unsigned int mantissa:10; /* 0: 0 2 */
			short unsigned int biased_exponent:5; /* 0:10 2 */
			short unsigned int sign:1; /* 0:15 2 */
		} bits; /* 0 2 */
	};
	/* ../public/mathlib/compressed_vector.h:466 */
	void Init(float16* );
	/* ../public/mathlib/compressed_vector.h:471 */
	short unsigned int GetBits(const float16* );
	/* ../public/mathlib/compressed_vector.h:475 */
	float GetFloat(const float16* );
	/* ../public/mathlib/compressed_vector.h:479 */
	void SetFloat(float16* , float);
	/* ../public/mathlib/compressed_vector.h:484 */
	bool IsInfinity(const float16* );
	/* ../public/mathlib/compressed_vector.h:488 */
	bool IsNaN(const float16* );
	/* ../public/mathlib/compressed_vector.h:493 */
	bool operator==(const float16* , float16);
	/* ../public/mathlib/compressed_vector.h:494 */
	bool operator!=(const float16* , float16);
protected:
	/* ../public/mathlib/compressed_vector.h:522 */
	bool IsNaN(union float16bits);
	/* ../public/mathlib/compressed_vector.h:526 */
	bool IsInfinity(union float16bits);
	/* ../public/mathlib/compressed_vector.h:533 */
	short unsigned int ConvertFloatTo16bits(float);
	/* ../public/mathlib/compressed_vector.h:626 */
	float Convert16bitFloatTo32bits(short unsigned int);
	union float16bits m_storage; /* 0 2 */
	void Init(class float16 *); /* linkage=_ZN7float164InitEv */
	short unsigned int GetBits(const class float16  *); /* linkage=_ZNK7float167GetBitsEv */
	float GetFloat(const class float16  *); /* linkage=_ZNK7float168GetFloatEv */
	void SetFloat(class float16 *, float); /* linkage=_ZN7float168SetFloatEf */
	bool IsInfinity(const class float16  *); /* linkage=_ZNK7float1610IsInfinityEv */
	bool IsNaN(const class float16  *); /* linkage=_ZNK7float165IsNaNEv */
	bool operator==(const class float16  *, class float16); /* linkage=_ZNK7float16eqES_ */
	bool operator!=(const class float16  *, class float16); /* linkage=_ZNK7float16neES_ */
	bool IsNaN(union float16bits); /* linkage=_ZN7float165IsNaNENS_11float16bitsE */
	bool IsInfinity(union float16bits); /* linkage=_ZN7float1610IsInfinityENS_11float16bitsE */
	/* <25e0c17> ../public/mathlib/compressed_vector.h:533 */
	short unsigned int ConvertFloatTo16bits(float); /* linkage=_ZN7float1620ConvertFloatTo16bitsEf */
	float Convert16bitFloatTo32bits(short unsigned int); /* linkage=_ZN7float1625Convert16bitFloatTo32bitsEt */
};

// <0469160E> ../public/mathlib/compressed_vector.h:475
inline void float16::GetFloat()
{
} /* size: 0 */

// <047034CE> ../public/mathlib/compressed_vector.h:479
inline void float16::SetFloat(float in)
{
} /* size: 0 */

// <04D24DD6> ../public/mathlib/compressed_vector.h:522
inline void IsNaN(union float16bits in)
{
} /* size: 0 */

// <04D24DBE> ../public/mathlib/compressed_vector.h:526
inline void IsInfinity(union float16bits in)
{
} /* size: 0 */

// <05AE488A> ../public/mathlib/compressed_vector.h:533
// variables: 4
inline void ConvertFloatTo16bits(float input)
{
	union float16bits output; // 540
	union float32bits inFloat; // 541
	{
		int new_exp; // 586
		{
			unsigned int exp_val; // 599
		}
	}
} /* size: 0, variables: 2 */

// <047033FF> ../public/mathlib/compressed_vector.h:533
// variables: 4
void ConvertFloatTo16bits(float input)
{
	union float16bits output; // 540
	union float32bits inFloat; // 541
	{
		int new_exp; // 586
		{
			unsigned int exp_val; // 599
		}
	}
} /* size: 216, variables: 2 */

// <04D24D2E> ../public/mathlib/compressed_vector.h:626
// variables: 8
inline void Convert16bitFloatTo32bits(short unsigned int input)
{
	union float32bits output; // 628
	const union float16bits& inFloat; // 629
	{
		const float  half_denorm; // 642
		float mantissa; // 643
		float sgn; // 644
	}
	{
		unsigned int mantissa; // 650
		unsigned int biased_exponent; // 651
		unsigned int sign; // 652
	}
} /* size: 0, variables: 2 */

// <00D21C34> ../public/mathlib/compressed_vector.h:626
// variables: 8
void Convert16bitFloatTo32bits(short unsigned int input)
{
	union float32bits output; // 628
	const union float16bits& inFloat; // 629
	{
		const float  half_denorm; // 642
		float mantissa; // 643
		float sgn; // 644
	}
	{
		unsigned int mantissa; // 650
		unsigned int biased_exponent; // 651
		unsigned int sign; // 652
	}
} /* size: 0, variables: 2 */

// <046AE8C2> ../public/mathlib/compressed_vector.h:667
// member functions: 10
// member variable: 1
// class size: 2
class float16_with_assign : public float16 {
public:
	/* class float16 <ancestor>; */ /* 0 2 */
	/* ../public/mathlib/compressed_vector.h:670 */
	void float16_with_assign(float16_with_assign* );
	/* ../public/mathlib/compressed_vector.h:671 */
	void float16_with_assign(float16_with_assign* , float);
	/* ../public/mathlib/compressed_vector.h:673 */
	float16& operator=(float16_with_assign* , const float16& );
	/* ../public/mathlib/compressed_vector.h:674 */
	float16& operator=(float16_with_assign* , const float& );
	/* ../public/mathlib/compressed_vector.h:676 */
	float operator float(const float16_with_assign* );
	void float16_with_assign(class float16_with_assign *); /* linkage=_ZN19float16_with_assignC4Ev */
	void float16_with_assign(class float16_with_assign *, float); /* linkage=_ZN19float16_with_assignC4Ef */
	class float16 & operator=(class float16_with_assign *, const class float16  &); /* linkage=_ZN19float16_with_assignaSERK7float16 */
	class float16 & operator=(class float16_with_assign *, const float  &); /* linkage=_ZN19float16_with_assignaSERKf */
	float operator float(const class float16_with_assign  *); /* linkage=_ZNK19float16_with_assigncvfEv */
};

// <04703358> ../public/mathlib/compressed_vector.h:676
inline void operator float16_with_assign::float()
{
} /* size: 0 */

// <001A8E72> ../public/mathlib/compressed_vector.h:683
// member functions: 12
// member variables: 3
// class size: 6
class Vector48 {
	/* ../public/mathlib/compressed_vector.h:687 */
	void Vector48(Vector48* );
	/* ../public/mathlib/compressed_vector.h:688 */
	void Vector48(Vector48* , const Vector& );
	/* ../public/mathlib/compressed_vector.h:689 */
	void Vector48(Vector48* , vec_t, vec_t, vec_t);
	/* ../public/mathlib/compressed_vector.h:692 */
	Vector48& operator=(Vector48* , const Vector& );
	/* ../public/mathlib/compressed_vector.h:693 */
	Vector operator Vector(const Vector48* );
	/* ../public/mathlib/compressed_vector.h:695 */
	const float operator[](const Vector48* , int);
	float16 x; /* 0 2 */
	float16 y; /* 2 2 */
	float16 z; /* 4 2 */
	void Vector48(class Vector48 *); /* linkage=_ZN8Vector48C4Ev */
	void Vector48(class Vector48 *, const class Vector  &); /* linkage=_ZN8Vector48C4ERK6Vector */
	void Vector48(class Vector48 *, vec_t, vec_t, vec_t); /* linkage=_ZN8Vector48C4Efff */
	class Vector48 & operator=(class Vector48 *, const class Vector  &); /* linkage=_ZN8Vector48aSERK6Vector */
	class Vector operator Vector(const class Vector48  *); /* linkage=_ZNK8Vector48cv6VectorEv */
	const float  operator[](const class Vector48  *, int); /* linkage=_ZNK8Vector48ixEi */
};

// <025DE233> ../public/mathlib/compressed_vector.h:687
void Vector48::Vector48()
{
} /* size: 0 */

// <025DE21A> ../public/mathlib/compressed_vector.h:687
inline void Vector48::Vector48()
{
} /* size: 0 */

// <025DE1F1> ../public/mathlib/compressed_vector.h:702
inline void Vector48::operator=(const Vector& vOther)
{
} /* size: 0 */

// <00D21BD9> ../public/mathlib/compressed_vector.h:702
void Vector48::operator=(const Vector& vOther)
{
} /* size: 0 */

// <025DE1C8> ../public/mathlib/compressed_vector.h:713
// variable: 1
inline void operator Vector48::Vector()
{
	Vector tmp; // 715
} /* size: 0, variables: 1 */

// <00D21BAE> ../public/mathlib/compressed_vector.h:713
// variable: 1
void operator Vector48::Vector()
{
	Vector tmp; // 715
} /* size: 0, variables: 1 */

