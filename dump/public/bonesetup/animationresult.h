
//
// public/bonesetup/animationresult.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 16
//	classes: 4
//	struct: 1
//

// <00B9C2F9> ../public/bonesetup/animationresult.h:15
// member functions: 89
// member variables: 7
// class size: 32
class CAnimationChannelResult {
	/* ../public/bonesetup/animationresult.h:31 */
	union {
		void * m_pGeneric; /* 0 8 */
		float * m_pFloat; /* 0 8 */
		Vector2D * m_pVector2; /* 0 8 */
		Vector * m_pVector3; /* 0 8 */
		Vector4D * m_pVector4; /* 0 8 */
		QuaternionAligned * m_pQuaternion; /* 0 8 */
		Color * m_pColor; /* 0 8 */
		int * m_pInt; /* 0 8 */
		bool * m_pBool; /* 0 8 */
	};
	/* ../public/bonesetup/animationresult.h:18 */
	void CAnimationChannelResult(CAnimationChannelResult* , const CAnimDataChannel* );
	/* ../public/bonesetup/animationresult.h:19 */
	void ~CAnimationChannelResult(CAnimationChannelResult* );
	/* ../public/bonesetup/animationresult.h:21 */
	void Init(CAnimationChannelResult* , const CAnimDataChannel* );
	bool m_bUsed; /* 0 1 */
	fieldtype_t m_nType; /* 1 1 */
	int m_nElementSize; /* 4 4 */
	int m_nCount; /* 8 4 */
	int m_nFlags; /* 12 4 */
	int m_nPool; /* 16 4 */
	union {
		void * m_pGeneric; /* 24 8 */
		float * m_pFloat; /* 24 8 */
		Vector2D * m_pVector2; /* 24 8 */
		Vector * m_pVector3; /* 24 8 */
		Vector4D * m_pVector4; /* 24 8 */
		QuaternionAligned * m_pQuaternion; /* 24 8 */
		Color * m_pColor; /* 24 8 */
		int * m_pInt; /* 24 8 */
		bool * m_pBool; /* 24 8 */
	} m_data; /* 24 8 */
	/* ../public/bonesetup/animationresult.h:43 */
	void CreateMap(CAnimationChannelResult* , int32* , int, const int* , const int32* );
	/* ../public/bonesetup/animationresult.h:45 */
	void ZeroData(CAnimationChannelResult* );
	/* ../public/bonesetup/animationresult.h:48 */
	void Blend(CAnimationChannelResult* , float, const Vector* , int, const int32* );
	/* ../public/bonesetup/animationresult.h:49 */
	void Blend(CAnimationChannelResult* , float, const QuaternionAligned* , int, const int32* );
	/* ../public/bonesetup/animationresult.h:50 */
	void Blend(CAnimationChannelResult* , float, const bool* , int, const int32* );
	/* ../public/bonesetup/animationresult.h:51 */
	void Blend(CAnimationChannelResult* , float, const Color* , int, const int32* );
	/* ../public/bonesetup/animationresult.h:55 */
	void Slerp(CAnimationChannelResult* , float, const Vector* , int, const int32* , const float* );
	/* ../public/bonesetup/animationresult.h:56 */
	void Slerp(CAnimationChannelResult* , float, const QuaternionAligned* , int, const int32* , const float* );
	/* ../public/bonesetup/animationresult.h:57 */
	void Slerp(CAnimationChannelResult* , float, const bool* , int, const int32* , const float* );
	/* ../public/bonesetup/animationresult.h:58 */
	void Slerp(CAnimationChannelResult* , float, const Color* , int, const int32* , const float* );
	/* ../public/bonesetup/animationresult.h:91 */
	void Add(CAnimationChannelResult* , float, const Vector* , int, const int32* , const float* );
	/* ../public/bonesetup/animationresult.h:92 */
	void Add(CAnimationChannelResult* , float, const QuaternionAligned* , int, const int32* , const float* );
	/* ../public/bonesetup/animationresult.h:93 */
	void Add(CAnimationChannelResult* , float, const bool* , int, const int32* , const float* );
	/* ../public/bonesetup/animationresult.h:94 */
	void Add(CAnimationChannelResult* , float, const Color* , int, const int32* , const float* );
	/* ../public/bonesetup/animationresult.h:98 */
	void Subtract(CAnimationChannelResult* , const Vector* , int, const int32* );
	/* ../public/bonesetup/animationresult.h:99 */
	void Subtract(CAnimationChannelResult* , const QuaternionAligned* , int, const int32* );
	/* ../public/bonesetup/animationresult.h:100 */
	void Subtract(CAnimationChannelResult* , const bool* , int, const int32* );
	/* ../public/bonesetup/animationresult.h:101 */
	void Subtract(CAnimationChannelResult* , const Color* , int, const int32* );
	/* ../public/bonesetup/animationresult.h:105 */
	void Copy(CAnimationChannelResult* , const CAnimationResult& , int, int, const int32* );
	/* ../public/bonesetup/animationresult.h:106 */
	void CopyAllElements(CAnimationChannelResult* , const CAnimationResult& , int, int);
	void CAnimationChannelResult(class CAnimationChannelResult *, const class CAnimDataChannel  *); /* linkage=_ZN23CAnimationChannelResultC4EPK16CAnimDataChannel */
	void ~CAnimationChannelResult(class CAnimationChannelResult *); /* linkage=_ZN23CAnimationChannelResultD4Ev */
	void Init(class CAnimationChannelResult *, const class CAnimDataChannel  *); /* linkage=_ZN23CAnimationChannelResult4InitEPK16CAnimDataChannel */
	void CreateMap(class CAnimationChannelResult *, int32 *, int, const int  *, const int32  *); /* linkage=_ZN23CAnimationChannelResult9CreateMapEPiiPKiS2_ */
	void ZeroData(class CAnimationChannelResult *); /* linkage=_ZN23CAnimationChannelResult8ZeroDataEv */
	void Blend(class CAnimationChannelResult *, float, const class Vector  *, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult5BlendEfPK6VectoriPKi */
	/* <28143b9> bonesetup/channel_operators.cpp:257 */
	void Blend(class CAnimationChannelResult *, float, const class QuaternionAligned  *, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult5BlendEfPK17QuaternionAlignediPKi */
	/* <28144dc> bonesetup/channel_operators.cpp:270 */
	void Blend(class CAnimationChannelResult *, float, const bool  *, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult5BlendEfPKbiPKi */
	void Blend(class CAnimationChannelResult *, float, const class Color  *, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult5BlendEfPK5ColoriPKi */
	void Slerp(class CAnimationChannelResult *, float, const class Vector  *, int, const int32  *, const float  *); /* linkage=_ZN23CAnimationChannelResult5SlerpEfPK6VectoriPKiPKf */
	void Slerp(class CAnimationChannelResult *, float, const class QuaternionAligned  *, int, const int32  *, const float  *); /* linkage=_ZN23CAnimationChannelResult5SlerpEfPK17QuaternionAlignediPKiPKf */
	void Slerp(class CAnimationChannelResult *, float, const bool  *, int, const int32  *, const float  *); /* linkage=_ZN23CAnimationChannelResult5SlerpEfPKbiPKiPKf */
	void Slerp(class CAnimationChannelResult *, float, const class Color  *, int, const int32  *, const float  *); /* linkage=_ZN23CAnimationChannelResult5SlerpEfPK5ColoriPKiPKf */
	void Add(class CAnimationChannelResult *, float, const class Vector  *, int, const int32  *, const float  *); /* linkage=_ZN23CAnimationChannelResult3AddEfPK6VectoriPKiPKf */
	/* <281462f> bonesetup/channel_operators.cpp:321 */
	void Add(class CAnimationChannelResult *, float, const class QuaternionAligned  *, int, const int32  *, const float  *); /* linkage=_ZN23CAnimationChannelResult3AddEfPK17QuaternionAlignediPKiPKf */
	void Add(class CAnimationChannelResult *, float, const bool  *, int, const int32  *, const float  *); /* linkage=_ZN23CAnimationChannelResult3AddEfPKbiPKiPKf */
	void Add(class CAnimationChannelResult *, float, const class Color  *, int, const int32  *, const float  *); /* linkage=_ZN23CAnimationChannelResult3AddEfPK5ColoriPKiPKf */
	void Subtract(class CAnimationChannelResult *, const class Vector  *, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult8SubtractEPK6VectoriPKi */
	/* <28146dc> bonesetup/channel_operators.cpp:393 */
	void Subtract(class CAnimationChannelResult *, const class QuaternionAligned  *, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult8SubtractEPK17QuaternionAlignediPKi */
	/* <281476f> bonesetup/channel_operators.cpp:416 */
	void Subtract(class CAnimationChannelResult *, const bool  *, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult8SubtractEPKbiPKi */
	void Subtract(class CAnimationChannelResult *, const class Color  *, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult8SubtractEPK5ColoriPKi */
	void Copy(class CAnimationChannelResult *, const class CAnimationResult  &, int, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult4CopyERK16CAnimationResultiiPKi */
	void CopyAllElements(class CAnimationChannelResult *, const class CAnimationResult  &, int, int); /* linkage=_ZN23CAnimationChannelResult15CopyAllElementsERK16CAnimationResultii */
	void Scale<Vector4D>(class CAnimationChannelResult *, class Vector4D *, float); /* linkage=_ZN23CAnimationChannelResult5ScaleI8Vector4DEEvPT_f */
	void Scale<Vector2D>(class CAnimationChannelResult *, class Vector2D *, float); /* linkage=_ZN23CAnimationChannelResult5ScaleI8Vector2DEEvPT_f */
	void Scale<int>(class CAnimationChannelResult *, int *, float); /* linkage=_ZN23CAnimationChannelResult5ScaleIiEEvPT_f */
	void Scale<float>(class CAnimationChannelResult *, float *, float); /* linkage=_ZN23CAnimationChannelResult5ScaleIfEEvPT_f */
	void Scale<Vector4D>(class CAnimationChannelResult *, float, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult5ScaleI8Vector4DEEvfiPKi */
	void Scale<Vector2D>(class CAnimationChannelResult *, float, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult5ScaleI8Vector2DEEvfiPKi */
	void Scale<Color>(class CAnimationChannelResult *, float, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult5ScaleI5ColorEEvfiPKi */
	void Scale<int>(class CAnimationChannelResult *, float, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult5ScaleIiEEvfiPKi */
	void Scale<float>(class CAnimationChannelResult *, float, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult5ScaleIfEEvfiPKi */
	void Subtract<Vector4D>(class CAnimationChannelResult *, const class Vector4D  *, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult8SubtractI8Vector4DEEvPKT_iPKi */
	void Subtract<Vector2D>(class CAnimationChannelResult *, const class Vector2D  *, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult8SubtractI8Vector2DEEvPKT_iPKi */
	void Subtract<int>(class CAnimationChannelResult *, const int  *, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult8SubtractIiEEvPKT_iPKi */
	void Subtract<float>(class CAnimationChannelResult *, const float  *, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult8SubtractIfEEvPKT_iPKi */
	void Add<Vector4D>(class CAnimationChannelResult *, float, const class Vector4D  *, int, const int32  *, const float  *); /* linkage=_ZN23CAnimationChannelResult3AddI8Vector4DEEvfPKT_iPKiPKf */
	void Add<Vector2D>(class CAnimationChannelResult *, float, const class Vector2D  *, int, const int32  *, const float  *); /* linkage=_ZN23CAnimationChannelResult3AddI8Vector2DEEvfPKT_iPKiPKf */
	void Add<int>(class CAnimationChannelResult *, float, const int  *, int, const int32  *, const float  *); /* linkage=_ZN23CAnimationChannelResult3AddIiEEvfPKT_iPKiPKf */
	void Add<float>(class CAnimationChannelResult *, float, const float  *, int, const int32  *, const float  *); /* linkage=_ZN23CAnimationChannelResult3AddIfEEvfPKT_iPKiPKf */
	void Slerp<Vector4D>(class CAnimationChannelResult *, float, const class Vector4D  *, int, const int32  *, const float  *); /* linkage=_ZN23CAnimationChannelResult5SlerpI8Vector4DEEvfPKT_iPKiPKf */
	void Slerp<Vector2D>(class CAnimationChannelResult *, float, const class Vector2D  *, int, const int32  *, const float  *); /* linkage=_ZN23CAnimationChannelResult5SlerpI8Vector2DEEvfPKT_iPKiPKf */
	void Slerp<int>(class CAnimationChannelResult *, float, const int  *, int, const int32  *, const float  *); /* linkage=_ZN23CAnimationChannelResult5SlerpIiEEvfPKT_iPKiPKf */
	void Slerp<float>(class CAnimationChannelResult *, float, const float  *, int, const int32  *, const float  *); /* linkage=_ZN23CAnimationChannelResult5SlerpIfEEvfPKT_iPKiPKf */
	void Blend<Vector4D>(class CAnimationChannelResult *, float, const class Vector4D  *, int, const int  *); /* linkage=_ZN23CAnimationChannelResult5BlendI8Vector4DEEvfPKT_iPKi */
	void Blend<Vector2D>(class CAnimationChannelResult *, float, const class Vector2D  *, int, const int  *); /* linkage=_ZN23CAnimationChannelResult5BlendI8Vector2DEEvfPKT_iPKi */
	void Blend<int>(class CAnimationChannelResult *, float, const int  *, int, const int  *); /* linkage=_ZN23CAnimationChannelResult5BlendIiEEvfPKT_iPKi */
	void Blend<float>(class CAnimationChannelResult *, float, const float  *, int, const int  *); /* linkage=_ZN23CAnimationChannelResult5BlendIfEEvfPKT_iPKi */
	bool IsValid<Vector4D>(const class CAnimationChannelResult  *, class Vector4D *, int); /* linkage=_ZNK23CAnimationChannelResult7IsValidI8Vector4DEEbPT_i */
	bool IsValid<Vector2D>(const class CAnimationChannelResult  *, class Vector2D *, int); /* linkage=_ZNK23CAnimationChannelResult7IsValidI8Vector2DEEbPT_i */
	bool IsValid<QuaternionAligned>(const class CAnimationChannelResult  *, class QuaternionAligned *, int); /* linkage=_ZNK23CAnimationChannelResult7IsValidI17QuaternionAlignedEEbPT_i */
	bool IsValid<Vector>(const class CAnimationChannelResult  *, class Vector *, int); /* linkage=_ZNK23CAnimationChannelResult7IsValidI6VectorEEbPT_i */
	void SlerpInternal<>(class CAnimationChannelResult *, float, const class QuaternionAligned  *, int, const int32  *, const float  *); /* linkage=_ZN23CAnimationChannelResult13SlerpInternalIL10ESIMDLevel20EEEvfPK17QuaternionAlignediPKiPKf */
	void Copy<Vector4D>(class CAnimationChannelResult *, const class Vector4D  *, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult4CopyI8Vector4DEEvPKT_iPKi */
	void Copy<Vector2D>(class CAnimationChannelResult *, const class Vector2D  *, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult4CopyI8Vector2DEEvPKT_iPKi */
	void Copy<Color>(class CAnimationChannelResult *, const class Color  *, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult4CopyI5ColorEEvPKT_iPKi */
	void Copy<bool>(class CAnimationChannelResult *, const bool  *, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult4CopyIbEEvPKT_iPKi */
	void Copy<int>(class CAnimationChannelResult *, const int  *, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult4CopyIiEEvPKT_iPKi */
	void Copy<QuaternionAligned>(class CAnimationChannelResult *, const class QuaternionAligned  *, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult4CopyI17QuaternionAlignedEEvPKT_iPKi */
	void Copy<Vector>(class CAnimationChannelResult *, const class Vector  *, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult4CopyI6VectorEEvPKT_iPKi */
	void Copy<float>(class CAnimationChannelResult *, const float  *, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult4CopyIfEEvPKT_iPKi */
	/* <2814be8> bonesetup/channel_operators.cpp:558 */
	void Scale<bool>(class CAnimationChannelResult *, float, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult5ScaleIbEEvfiPKi */
	void Scale<QuaternionAligned>(class CAnimationChannelResult *, float, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult5ScaleI17QuaternionAlignedEEvfiPKi */
	/* <2814a96> bonesetup/channel_operators.cpp:534 */
	void Scale<Vector>(class CAnimationChannelResult *, float, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult5ScaleI6VectorEEvfiPKi */
	/* <2814a59> bonesetup/channel_operators.cpp:516 */
	void Scale<Color>(class CAnimationChannelResult *, class Color *, float); /* linkage=_ZN23CAnimationChannelResult5ScaleI5ColorEEvPT_f */
	void Scale<QuaternionAligned>(class CAnimationChannelResult *, class QuaternionAligned *, float); /* linkage=_ZN23CAnimationChannelResult5ScaleI17QuaternionAlignedEEvPT_f */
};

// <027E1D89> ../public/bonesetup/animationresult.h:15
// member functions: 132
// member variables: 7
// class size: 32
class CAnimationChannelResult {
	/* ../public/bonesetup/animationresult.h:31 */
	union {
		void * m_pGeneric; /* 0 8 */
		float * m_pFloat; /* 0 8 */
		Vector2D * m_pVector2; /* 0 8 */
		Vector * m_pVector3; /* 0 8 */
		Vector4D * m_pVector4; /* 0 8 */
		QuaternionAligned * m_pQuaternion; /* 0 8 */
		Color * m_pColor; /* 0 8 */
		int * m_pInt; /* 0 8 */
		bool * m_pBool; /* 0 8 */
	};
	/* ../public/bonesetup/animationresult.h:18 */
	void CAnimationChannelResult(CAnimationChannelResult* , const CAnimDataChannel* );
	/* ../public/bonesetup/animationresult.h:19 */
	void ~CAnimationChannelResult(CAnimationChannelResult* );
	/* ../public/bonesetup/animationresult.h:21 */
	void Init(CAnimationChannelResult* , const CAnimDataChannel* );
	bool m_bUsed; /* 0 1 */
	fieldtype_t m_nType; /* 1 1 */
	int m_nElementSize; /* 4 4 */
	int m_nCount; /* 8 4 */
	int m_nFlags; /* 12 4 */
	int m_nPool; /* 16 4 */
	union {
		void * m_pGeneric; /* 24 8 */
		float * m_pFloat; /* 24 8 */
		Vector2D * m_pVector2; /* 24 8 */
		Vector * m_pVector3; /* 24 8 */
		Vector4D * m_pVector4; /* 24 8 */
		QuaternionAligned * m_pQuaternion; /* 24 8 */
		Color * m_pColor; /* 24 8 */
		int * m_pInt; /* 24 8 */
		bool * m_pBool; /* 24 8 */
	} m_data; /* 24 8 */
	/* ../public/bonesetup/animationresult.h:43 */
	void CreateMap(CAnimationChannelResult* , int32* , int, const int* , const int32* );
	/* ../public/bonesetup/animationresult.h:45 */
	void ZeroData(CAnimationChannelResult* );
	/* ../public/bonesetup/animationresult.h:48 */
	void Blend(CAnimationChannelResult* , float, const Vector* , int, const int32* );
	/* ../public/bonesetup/animationresult.h:49 */
	void Blend(CAnimationChannelResult* , float, const QuaternionAligned* , int, const int32* );
	/* ../public/bonesetup/animationresult.h:50 */
	void Blend(CAnimationChannelResult* , float, const bool* , int, const int32* );
	/* ../public/bonesetup/animationresult.h:51 */
	void Blend(CAnimationChannelResult* , float, const Color* , int, const int32* );
	/* ../public/bonesetup/animationresult.h:55 */
	void Slerp(CAnimationChannelResult* , float, const Vector* , int, const int32* , const float* );
	/* ../public/bonesetup/animationresult.h:56 */
	void Slerp(CAnimationChannelResult* , float, const QuaternionAligned* , int, const int32* , const float* );
	/* ../public/bonesetup/animationresult.h:57 */
	void Slerp(CAnimationChannelResult* , float, const bool* , int, const int32* , const float* );
	/* ../public/bonesetup/animationresult.h:58 */
	void Slerp(CAnimationChannelResult* , float, const Color* , int, const int32* , const float* );
	/* ../public/bonesetup/animationresult.h:91 */
	void Add(CAnimationChannelResult* , float, const Vector* , int, const int32* , const float* );
	/* ../public/bonesetup/animationresult.h:92 */
	void Add(CAnimationChannelResult* , float, const QuaternionAligned* , int, const int32* , const float* );
	/* ../public/bonesetup/animationresult.h:93 */
	void Add(CAnimationChannelResult* , float, const bool* , int, const int32* , const float* );
	/* ../public/bonesetup/animationresult.h:94 */
	void Add(CAnimationChannelResult* , float, const Color* , int, const int32* , const float* );
	/* ../public/bonesetup/animationresult.h:98 */
	void Subtract(CAnimationChannelResult* , const Vector* , int, const int32* );
	/* ../public/bonesetup/animationresult.h:99 */
	void Subtract(CAnimationChannelResult* , const QuaternionAligned* , int, const int32* );
	/* ../public/bonesetup/animationresult.h:100 */
	void Subtract(CAnimationChannelResult* , const bool* , int, const int32* );
	/* ../public/bonesetup/animationresult.h:101 */
	void Subtract(CAnimationChannelResult* , const Color* , int, const int32* );
	/* ../public/bonesetup/animationresult.h:105 */
	void Copy(CAnimationChannelResult* , const CAnimationResult& , int, int, const int32* );
	/* ../public/bonesetup/animationresult.h:106 */
	void CopyAllElements(CAnimationChannelResult* , const CAnimationResult& , int, int);
	/* bonesetup/channel_operators.cpp:504 */
	void Scale<Vector4D>(CAnimationChannelResult* , Vector4D* , float);
	/* bonesetup/channel_operators.cpp:504 */
	void Scale<Vector2D>(CAnimationChannelResult* , Vector2D* , float);
	/* bonesetup/channel_operators.cpp:504 */
	void Scale<int>(CAnimationChannelResult* , int* , float);
	/* bonesetup/channel_operators.cpp:504 */
	void Scale<float>(CAnimationChannelResult* , float* , float);
	/* bonesetup/channel_operators.cpp:524 */
	void Scale<Vector4D>(CAnimationChannelResult* , float, int, const int32* );
	/* bonesetup/channel_operators.cpp:524 */
	void Scale<Vector2D>(CAnimationChannelResult* , float, int, const int32* );
	/* bonesetup/channel_operators.cpp:524 */
	void Scale<Color>(CAnimationChannelResult* , float, int, const int32* );
	/* bonesetup/channel_operators.cpp:524 */
	void Scale<int>(CAnimationChannelResult* , float, int, const int32* );
	/* bonesetup/channel_operators.cpp:524 */
	void Scale<float>(CAnimationChannelResult* , float, int, const int32* );
	/* bonesetup/channel_operators.cpp:373 */
	void Subtract<Vector4D>(CAnimationChannelResult* , const Vector4D* , int, const int32* );
	/* bonesetup/channel_operators.cpp:373 */
	void Subtract<Vector2D>(CAnimationChannelResult* , const Vector2D* , int, const int32* );
	/* bonesetup/channel_operators.cpp:373 */
	void Subtract<int>(CAnimationChannelResult* , const int* , int, const int32* );
	/* bonesetup/channel_operators.cpp:373 */
	void Subtract<float>(CAnimationChannelResult* , const float* , int, const int32* );
	/* bonesetup/channel_operators.cpp:301 */
	void Add<Vector4D>(CAnimationChannelResult* , float, const Vector4D* , int, const int32* , const float* );
	/* bonesetup/channel_operators.cpp:301 */
	void Add<Vector2D>(CAnimationChannelResult* , float, const Vector2D* , int, const int32* , const float* );
	/* bonesetup/channel_operators.cpp:301 */
	void Add<int>(CAnimationChannelResult* , float, const int* , int, const int32* , const float* );
	/* bonesetup/channel_operators.cpp:301 */
	void Add<float>(CAnimationChannelResult* , float, const float* , int, const int32* , const float* );
	/* bonesetup/channel_operators.cpp:442 */
	void Slerp<Vector4D>(CAnimationChannelResult* , float, const Vector4D* , int, const int32* , const float* );
	/* bonesetup/channel_operators.cpp:442 */
	void Slerp<Vector2D>(CAnimationChannelResult* , float, const Vector2D* , int, const int32* , const float* );
	/* bonesetup/channel_operators.cpp:442 */
	void Slerp<int>(CAnimationChannelResult* , float, const int* , int, const int32* , const float* );
	/* bonesetup/channel_operators.cpp:442 */
	void Slerp<float>(CAnimationChannelResult* , float, const float* , int, const int32* , const float* );
	/* bonesetup/channel_operators.cpp:232 */
	void Blend<Vector4D>(CAnimationChannelResult* , float, const Vector4D* , int, const int* );
	/* bonesetup/channel_operators.cpp:232 */
	void Blend<Vector2D>(CAnimationChannelResult* , float, const Vector2D* , int, const int* );
	/* bonesetup/channel_operators.cpp:232 */
	void Blend<int>(CAnimationChannelResult* , float, const int* , int, const int* );
	/* bonesetup/channel_operators.cpp:232 */
	void Blend<float>(CAnimationChannelResult* , float, const float* , int, const int* );
	/* bonesetup/channel_operators.cpp:1325 */
	bool IsValid<Vector4D>(const CAnimationChannelResult* , Vector4D* , int);
	/* bonesetup/channel_operators.cpp:1325 */
	bool IsValid<Vector2D>(const CAnimationChannelResult* , Vector2D* , int);
	/* bonesetup/channel_operators.cpp:1325 */
	bool IsValid<QuaternionAligned>(const CAnimationChannelResult* , QuaternionAligned* , int);
	/* bonesetup/channel_operators.cpp:1325 */
	bool IsValid<Vector>(const CAnimationChannelResult* , Vector* , int);
	/* ../public/bonesetup/animationresult.h:63 */
	void SlerpInternal<>(CAnimationChannelResult* , float, const QuaternionAligned* , int, const int32* , const float* );
	/* bonesetup/channel_operators.cpp:137 */
	void Copy<Vector4D>(CAnimationChannelResult* , const Vector4D* , int, const int32* );
	/* bonesetup/channel_operators.cpp:137 */
	void Copy<Vector2D>(CAnimationChannelResult* , const Vector2D* , int, const int32* );
	/* bonesetup/channel_operators.cpp:137 */
	void Copy<Color>(CAnimationChannelResult* , const Color* , int, const int32* );
	/* bonesetup/channel_operators.cpp:137 */
	void Copy<bool>(CAnimationChannelResult* , const bool* , int, const int32* );
	/* bonesetup/channel_operators.cpp:137 */
	void Copy<int>(CAnimationChannelResult* , const int* , int, const int32* );
	/* bonesetup/channel_operators.cpp:137 */
	void Copy<QuaternionAligned>(CAnimationChannelResult* , const QuaternionAligned* , int, const int32* );
	/* bonesetup/channel_operators.cpp:137 */
	void Copy<Vector>(CAnimationChannelResult* , const Vector* , int, const int32* );
	/* bonesetup/channel_operators.cpp:137 */
	void Copy<float>(CAnimationChannelResult* , const float* , int, const int32* );
	/* bonesetup/channel_operators.cpp:558 */
	void Scale<bool>(CAnimationChannelResult* , float, int, const int32* );
	/* bonesetup/channel_operators.cpp:544 */
	void Scale<QuaternionAligned>(CAnimationChannelResult* , float, int, const int32* );
	/* bonesetup/channel_operators.cpp:534 */
	void Scale<Vector>(CAnimationChannelResult* , float, int, const int32* );
	/* bonesetup/channel_operators.cpp:516 */
	void Scale<Color>(CAnimationChannelResult* , Color* , float);
	/* bonesetup/channel_operators.cpp:509 */
	void Scale<QuaternionAligned>(CAnimationChannelResult* , QuaternionAligned* , float);
	void CAnimationChannelResult(class CAnimationChannelResult *, const class CAnimDataChannel  *); /* linkage=_ZN23CAnimationChannelResultC4EPK16CAnimDataChannel */
	void ~CAnimationChannelResult(class CAnimationChannelResult *); /* linkage=_ZN23CAnimationChannelResultD4Ev */
	void Init(class CAnimationChannelResult *, const class CAnimDataChannel  *); /* linkage=_ZN23CAnimationChannelResult4InitEPK16CAnimDataChannel */
	void CreateMap(class CAnimationChannelResult *, int32 *, int, const int  *, const int32  *); /* linkage=_ZN23CAnimationChannelResult9CreateMapEPiiPKiS2_ */
	void ZeroData(class CAnimationChannelResult *); /* linkage=_ZN23CAnimationChannelResult8ZeroDataEv */
	void Blend(class CAnimationChannelResult *, float, const class Vector  *, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult5BlendEfPK6VectoriPKi */
	/* <28143b9> bonesetup/channel_operators.cpp:257 */
	void Blend(class CAnimationChannelResult *, float, const class QuaternionAligned  *, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult5BlendEfPK17QuaternionAlignediPKi */
	/* <28144dc> bonesetup/channel_operators.cpp:270 */
	void Blend(class CAnimationChannelResult *, float, const bool  *, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult5BlendEfPKbiPKi */
	void Blend(class CAnimationChannelResult *, float, const class Color  *, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult5BlendEfPK5ColoriPKi */
	void Slerp(class CAnimationChannelResult *, float, const class Vector  *, int, const int32  *, const float  *); /* linkage=_ZN23CAnimationChannelResult5SlerpEfPK6VectoriPKiPKf */
	void Slerp(class CAnimationChannelResult *, float, const class QuaternionAligned  *, int, const int32  *, const float  *); /* linkage=_ZN23CAnimationChannelResult5SlerpEfPK17QuaternionAlignediPKiPKf */
	void Slerp(class CAnimationChannelResult *, float, const bool  *, int, const int32  *, const float  *); /* linkage=_ZN23CAnimationChannelResult5SlerpEfPKbiPKiPKf */
	void Slerp(class CAnimationChannelResult *, float, const class Color  *, int, const int32  *, const float  *); /* linkage=_ZN23CAnimationChannelResult5SlerpEfPK5ColoriPKiPKf */
	void Add(class CAnimationChannelResult *, float, const class Vector  *, int, const int32  *, const float  *); /* linkage=_ZN23CAnimationChannelResult3AddEfPK6VectoriPKiPKf */
	/* <281462f> bonesetup/channel_operators.cpp:321 */
	void Add(class CAnimationChannelResult *, float, const class QuaternionAligned  *, int, const int32  *, const float  *); /* linkage=_ZN23CAnimationChannelResult3AddEfPK17QuaternionAlignediPKiPKf */
	void Add(class CAnimationChannelResult *, float, const bool  *, int, const int32  *, const float  *); /* linkage=_ZN23CAnimationChannelResult3AddEfPKbiPKiPKf */
	void Add(class CAnimationChannelResult *, float, const class Color  *, int, const int32  *, const float  *); /* linkage=_ZN23CAnimationChannelResult3AddEfPK5ColoriPKiPKf */
	void Subtract(class CAnimationChannelResult *, const class Vector  *, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult8SubtractEPK6VectoriPKi */
	/* <28146dc> bonesetup/channel_operators.cpp:393 */
	void Subtract(class CAnimationChannelResult *, const class QuaternionAligned  *, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult8SubtractEPK17QuaternionAlignediPKi */
	/* <281476f> bonesetup/channel_operators.cpp:416 */
	void Subtract(class CAnimationChannelResult *, const bool  *, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult8SubtractEPKbiPKi */
	void Subtract(class CAnimationChannelResult *, const class Color  *, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult8SubtractEPK5ColoriPKi */
	void Copy(class CAnimationChannelResult *, const class CAnimationResult  &, int, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult4CopyERK16CAnimationResultiiPKi */
	void CopyAllElements(class CAnimationChannelResult *, const class CAnimationResult  &, int, int); /* linkage=_ZN23CAnimationChannelResult15CopyAllElementsERK16CAnimationResultii */
	void Scale<Vector4D>(class CAnimationChannelResult *, class Vector4D *, float); /* linkage=_ZN23CAnimationChannelResult5ScaleI8Vector4DEEvPT_f */
	void Scale<Vector2D>(class CAnimationChannelResult *, class Vector2D *, float); /* linkage=_ZN23CAnimationChannelResult5ScaleI8Vector2DEEvPT_f */
	void Scale<int>(class CAnimationChannelResult *, int *, float); /* linkage=_ZN23CAnimationChannelResult5ScaleIiEEvPT_f */
	void Scale<float>(class CAnimationChannelResult *, float *, float); /* linkage=_ZN23CAnimationChannelResult5ScaleIfEEvPT_f */
	void Scale<Vector4D>(class CAnimationChannelResult *, float, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult5ScaleI8Vector4DEEvfiPKi */
	void Scale<Vector2D>(class CAnimationChannelResult *, float, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult5ScaleI8Vector2DEEvfiPKi */
	void Scale<Color>(class CAnimationChannelResult *, float, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult5ScaleI5ColorEEvfiPKi */
	void Scale<int>(class CAnimationChannelResult *, float, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult5ScaleIiEEvfiPKi */
	void Scale<float>(class CAnimationChannelResult *, float, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult5ScaleIfEEvfiPKi */
	void Subtract<Vector4D>(class CAnimationChannelResult *, const class Vector4D  *, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult8SubtractI8Vector4DEEvPKT_iPKi */
	void Subtract<Vector2D>(class CAnimationChannelResult *, const class Vector2D  *, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult8SubtractI8Vector2DEEvPKT_iPKi */
	void Subtract<int>(class CAnimationChannelResult *, const int  *, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult8SubtractIiEEvPKT_iPKi */
	void Subtract<float>(class CAnimationChannelResult *, const float  *, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult8SubtractIfEEvPKT_iPKi */
	void Add<Vector4D>(class CAnimationChannelResult *, float, const class Vector4D  *, int, const int32  *, const float  *); /* linkage=_ZN23CAnimationChannelResult3AddI8Vector4DEEvfPKT_iPKiPKf */
	void Add<Vector2D>(class CAnimationChannelResult *, float, const class Vector2D  *, int, const int32  *, const float  *); /* linkage=_ZN23CAnimationChannelResult3AddI8Vector2DEEvfPKT_iPKiPKf */
	void Add<int>(class CAnimationChannelResult *, float, const int  *, int, const int32  *, const float  *); /* linkage=_ZN23CAnimationChannelResult3AddIiEEvfPKT_iPKiPKf */
	void Add<float>(class CAnimationChannelResult *, float, const float  *, int, const int32  *, const float  *); /* linkage=_ZN23CAnimationChannelResult3AddIfEEvfPKT_iPKiPKf */
	void Slerp<Vector4D>(class CAnimationChannelResult *, float, const class Vector4D  *, int, const int32  *, const float  *); /* linkage=_ZN23CAnimationChannelResult5SlerpI8Vector4DEEvfPKT_iPKiPKf */
	void Slerp<Vector2D>(class CAnimationChannelResult *, float, const class Vector2D  *, int, const int32  *, const float  *); /* linkage=_ZN23CAnimationChannelResult5SlerpI8Vector2DEEvfPKT_iPKiPKf */
	void Slerp<int>(class CAnimationChannelResult *, float, const int  *, int, const int32  *, const float  *); /* linkage=_ZN23CAnimationChannelResult5SlerpIiEEvfPKT_iPKiPKf */
	void Slerp<float>(class CAnimationChannelResult *, float, const float  *, int, const int32  *, const float  *); /* linkage=_ZN23CAnimationChannelResult5SlerpIfEEvfPKT_iPKiPKf */
	void Blend<Vector4D>(class CAnimationChannelResult *, float, const class Vector4D  *, int, const int  *); /* linkage=_ZN23CAnimationChannelResult5BlendI8Vector4DEEvfPKT_iPKi */
	void Blend<Vector2D>(class CAnimationChannelResult *, float, const class Vector2D  *, int, const int  *); /* linkage=_ZN23CAnimationChannelResult5BlendI8Vector2DEEvfPKT_iPKi */
	void Blend<int>(class CAnimationChannelResult *, float, const int  *, int, const int  *); /* linkage=_ZN23CAnimationChannelResult5BlendIiEEvfPKT_iPKi */
	void Blend<float>(class CAnimationChannelResult *, float, const float  *, int, const int  *); /* linkage=_ZN23CAnimationChannelResult5BlendIfEEvfPKT_iPKi */
	bool IsValid<Vector4D>(const class CAnimationChannelResult  *, class Vector4D *, int); /* linkage=_ZNK23CAnimationChannelResult7IsValidI8Vector4DEEbPT_i */
	bool IsValid<Vector2D>(const class CAnimationChannelResult  *, class Vector2D *, int); /* linkage=_ZNK23CAnimationChannelResult7IsValidI8Vector2DEEbPT_i */
	bool IsValid<QuaternionAligned>(const class CAnimationChannelResult  *, class QuaternionAligned *, int); /* linkage=_ZNK23CAnimationChannelResult7IsValidI17QuaternionAlignedEEbPT_i */
	bool IsValid<Vector>(const class CAnimationChannelResult  *, class Vector *, int); /* linkage=_ZNK23CAnimationChannelResult7IsValidI6VectorEEbPT_i */
	void SlerpInternal<>(class CAnimationChannelResult *, float, const class QuaternionAligned  *, int, const int32  *, const float  *); /* linkage=_ZN23CAnimationChannelResult13SlerpInternalIL10ESIMDLevel20EEEvfPK17QuaternionAlignediPKiPKf */
	void Copy<Vector4D>(class CAnimationChannelResult *, const class Vector4D  *, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult4CopyI8Vector4DEEvPKT_iPKi */
	void Copy<Vector2D>(class CAnimationChannelResult *, const class Vector2D  *, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult4CopyI8Vector2DEEvPKT_iPKi */
	void Copy<Color>(class CAnimationChannelResult *, const class Color  *, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult4CopyI5ColorEEvPKT_iPKi */
	void Copy<bool>(class CAnimationChannelResult *, const bool  *, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult4CopyIbEEvPKT_iPKi */
	void Copy<int>(class CAnimationChannelResult *, const int  *, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult4CopyIiEEvPKT_iPKi */
	void Copy<QuaternionAligned>(class CAnimationChannelResult *, const class QuaternionAligned  *, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult4CopyI17QuaternionAlignedEEvPKT_iPKi */
	void Copy<Vector>(class CAnimationChannelResult *, const class Vector  *, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult4CopyI6VectorEEvPKT_iPKi */
	void Copy<float>(class CAnimationChannelResult *, const float  *, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult4CopyIfEEvPKT_iPKi */
	/* <2814be8> bonesetup/channel_operators.cpp:558 */
	void Scale<bool>(class CAnimationChannelResult *, float, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult5ScaleIbEEvfiPKi */
	void Scale<QuaternionAligned>(class CAnimationChannelResult *, float, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult5ScaleI17QuaternionAlignedEEvfiPKi */
	/* <2814a96> bonesetup/channel_operators.cpp:534 */
	void Scale<Vector>(class CAnimationChannelResult *, float, int, const int32  *); /* linkage=_ZN23CAnimationChannelResult5ScaleI6VectorEEvfiPKi */
	/* <2814a59> bonesetup/channel_operators.cpp:516 */
	void Scale<Color>(class CAnimationChannelResult *, class Color *, float); /* linkage=_ZN23CAnimationChannelResult5ScaleI5ColorEEvPT_f */
	void Scale<QuaternionAligned>(class CAnimationChannelResult *, class QuaternionAligned *, float); /* linkage=_ZN23CAnimationChannelResult5ScaleI17QuaternionAlignedEEvPT_f */
};

// <028126AA> ../public/bonesetup/animationresult.h:63
// variables: 67
// function calls: 103
void QuaternionAligned::SlerpInternal<>()
{
	QuaternionAligned* pDst; // 66
	QuaternionAligned q3; // 67
	QuaternionAligned::QuaternionAligned(); // 67
	{
		int i; // 80
		{
			int k; // 82
			{
				fltx4 retVal; // 1134
				_mm_set1_ps(float __F); // 1135
			}
			ReplicateX4<>(float flValue); // 505
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 505
			{
				fltx4 retVal; // 1134
				_mm_set1_ps(float __F); // 1135
			}
			ReplicateX4<>(float flValue); // 505
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 505
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 505
			{
				fltx4 fl4Product; // 1725
				fltx4 fl4YXWZ; // 1727
				fltx4 fl4UUVV; // 1729
				fltx4 fl4VVUU; // 1731
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 1725
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1728
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 1730
				{
					fltx4 retVal; // 373
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 374
				}
				RotateLeft2<>(const fltx4& a); // 1732
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 1733
			}
			Dot4SIMD<>(const fltx4& a,
					const fltx4& b);  // 486
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 487
			{
				fltx4 fl4Q; // 509
				fltx4 fl4PScale; // 514
				fltx4 fl4QScale; // 515
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 516
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 516
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 516
			}
			QuaternionSlerpNoAlignSIMD<>(const fltx4& p,
							const fltx4& q,
							float t);  // 479
			QuaternionSlerpNoAlignSIMD<>(const fltx4& p,
							const fltx4& q,
							float t);  // 528
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 464
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 465
			{
				fltx4 fl4Product; // 1725
				fltx4 fl4YXWZ; // 1727
				fltx4 fl4UUVV; // 1729
				fltx4 fl4VVUU; // 1731
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 1725
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1728
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 1730
				{
					fltx4 retVal; // 373
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 374
				}
				RotateLeft2<>(const fltx4& a); // 1732
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 1733
			}
			Dot4SIMD<>(const fltx4& a,
					const fltx4& b);  // 466
			{
				fltx4 fl4Product; // 1725
				fltx4 fl4YXWZ; // 1727
				fltx4 fl4UUVV; // 1729
				fltx4 fl4VVUU; // 1731
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 1725
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1728
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 1730
				{
					fltx4 retVal; // 373
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 374
				}
				RotateLeft2<>(const fltx4& a); // 1732
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 1733
			}
			Dot4SIMD<>(const fltx4& a,
					const fltx4& b);  // 467
			{
				fltx4 retVal; // 1981
				_mm_cmpgt_ps(__m128 __A,
						__m128 __B);  // 1982
			}
			CmpGtSIMD<>(const fltx4& a,
					const fltx4& b);  // 468
			{
				fltx4 retVal; // 1616
				_mm_sub_ps(__m128 __A,
						__m128 __B);  // 1617
			}
			SubSIMD<>(const fltx4& a,
					const fltx4& b);  // 1797
			NegSIMD<>(const fltx4& a); // 469
			{
				fltx4 retVal; // 826
				_mm_xor_ps(__m128 __A,
						__m128 __B);  // 827
			}
			XorSIMD<>(const fltx4& a,
					const fltx4& b);  // 1259
			{
				fltx4 retVal; // 718
				_mm_and_ps(__m128 __A,
						__m128 __B);  // 719
			}
			AndSIMD<>(const fltx4& a,
					const fltx4& b);  // 1259
			{
				fltx4 retVal; // 826
				_mm_xor_ps(__m128 __A,
						__m128 __B);  // 827
			}
			XorSIMD<>(const fltx4& a,
					const fltx4& b);  // 1259
			MaskedAssign<>(const fltx4& ReplacementMask,
					const fltx4& a,
					const fltx4& b);  // 469
			QuaternionAlignSIMD<>(const fltx4& p,
						const fltx4& q);  // 527
			QuaternionSlerpSIMD<>(const fltx4& p,
						const fltx4& q,
						float t);  // 535
			QuaternionSlerp(const QuaternionAligned& p,
					const QuaternionAligned& q,
					float t,
					QuaternionAligned& qt);  // 83
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 84
		}
	}
	{
		int i; // 71
		{
			int k; // 73
			{
				fltx4 retVal; // 1134
				_mm_set1_ps(float __F); // 1135
			}
			ReplicateX4<>(float flValue); // 505
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 505
			{
				fltx4 retVal; // 1134
				_mm_set1_ps(float __F); // 1135
			}
			ReplicateX4<>(float flValue); // 505
			{
				fltx4 retVal; // 1639
				_mm_mul_ps(__m128 __A,
						__m128 __B);  // 1640
			}
			MulSIMD<>(const fltx4& a,
					const fltx4& b);  // 505
			{
				fltx4 retVal; // 1593
				_mm_add_ps(__m128 __A,
						__m128 __B);  // 1594
			}
			AddSIMD<>(const fltx4& a,
					const fltx4& b);  // 505
			{
				fltx4 fl4Product; // 1725
				fltx4 fl4YXWZ; // 1727
				fltx4 fl4UUVV; // 1729
				fltx4 fl4VVUU; // 1731
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 1725
				_mm_shuffle_ps(__m128 __A,
						__m128 __B,
						const int  __mask);  // 1728
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 1730
				{
					fltx4 retVal; // 373
					_mm_shuffle_ps(__m128 __A,
							__m128 __B,
							const int  __mask);  // 374
				}
				RotateLeft2<>(const fltx4& a); // 1732
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 1733
			}
			Dot4SIMD<>(const fltx4& a,
					const fltx4& b);  // 486
			_mm_cvtss_f32(__m128 __A); // 1496
			GetXSIMD<>(fltx4 a); // 487
			{
				fltx4 fl4Q; // 509
				fltx4 fl4PScale; // 514
				fltx4 fl4QScale; // 515
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 516
				{
					fltx4 retVal; // 1639
					_mm_mul_ps(__m128 __A,
							__m128 __B);  // 1640
				}
				MulSIMD<>(const fltx4& a,
						const fltx4& b);  // 516
				{
					fltx4 retVal; // 1593
					_mm_add_ps(__m128 __A,
							__m128 __B);  // 1594
				}
				AddSIMD<>(const fltx4& a,
						const fltx4& b);  // 516
			}
			QuaternionSlerpNoAlignSIMD<>(const fltx4& p,
							const fltx4& q,
							float t);  // 479
			QuaternionSlerpNoAlignSIMD<>(const fltx4& p,
							const fltx4& q,
							float t);  // 540
			QuaternionSlerpNoAlign(const QuaternionAligned& p,
						const QuaternionAligned& q,
						float t,
						QuaternionAligned& qt);  // 74
			QuaternionAligned::operator=(
					const QuaternionAligned& vOther);  // 75
		}
	}
} /* size: 1132, variables: 2, inline expansions: 1 (0 bytes) */

// <027F1258> ../public/bonesetup/animationresult.h:63
// variables: 6
inline void CAnimationChannelResult::SlerpInternal<>(float s, const QuaternionAligned* pSrc, int nCount, const int32* pElementIndex, const float* pWeight)
{
	QuaternionAligned* pDst; // 66
	QuaternionAligned q3; // 67
	{
		int i; // 71
		{
			int k; // 73
		}
	}
	{
		int i; // 80
		{
			int k; // 82
		}
	}
} /* size: 0, variables: 2 */

// <027EEB88> ../public/bonesetup/animationresult.h:117
void IKLocked_t::~IKLocked_t()
{
} /* size: 0 */

// <027EEB6C> ../public/bonesetup/animationresult.h:117
inline void IKLocked_t::~IKLocked_t()
{
} /* size: 0 */

// <027ECC30> ../public/bonesetup/animationresult.h:117
void IKLocked_t::IKLocked_t()
{
} /* size: 0 */

// <027ECC14> ../public/bonesetup/animationresult.h:117
inline void IKLocked_t::IKLocked_t()
{
} /* size: 0 */

// <00B9CF3B> ../public/bonesetup/animationresult.h:117
// member variables: 6
// struct size: 80
struct IKLocked_t {
	int m_nBone; /* 0 4 */
	float m_flPosWeight; /* 4 4 */
	float m_flAngleWeight; /* 8 4 */
	CTransform m_tLockedWorld __attribute__((__aligned__(16))); /* 16 32 */
	bool m_bBonesOrientedDownPositiveX; /* 48 1 */
	CVarBitVec m_subSkeleton; /* 56 24 */
} __attribute__((__aligned__(16)));

// <0280ADA9> ../public/bonesetup/animationresult.h:130
void CBoneBitList::~CBoneBitList()
{
} /* size: 0 */

// <0280AD8D> ../public/bonesetup/animationresult.h:130
inline void CBoneBitList::~CBoneBitList()
{
} /* size: 0 */

// <00B9D7A3> ../public/bonesetup/animationresult.h:130
// member functions: 7
// member variable: 1
// class size: 144
class CBoneBitList : public CVarBitVecT<short unsigned int, 1024> {
public:
	/* class CVarBitVecT<short unsigned int, 1024> <ancestor>; */ /* 0 144 */
	/* ../public/bonesetup/animationresult.h:133 */
	void CBoneBitList(CBoneBitList* , int);
	/* ../public/bonesetup/animationresult.h:138 */
	void MarkBone(CBoneBitList* , int);
	/* ../public/bonesetup/animationresult.h:143 */
	bool IsBoneMarked(CBoneBitList* , int);
	void CBoneBitList(class CBoneBitList *, int); /* linkage=_ZN12CBoneBitListC4Ei */
	void MarkBone(class CBoneBitList *, int); /* linkage=_ZN12CBoneBitList8MarkBoneEi */
	bool IsBoneMarked(class CBoneBitList *, int); /* linkage=_ZN12CBoneBitList12IsBoneMarkedEi */
	void ~CBoneBitList(class CBoneBitList *); /* linkage=_ZN12CBoneBitListD4Ev */
};

// <0280E155> ../public/bonesetup/animationresult.h:133
void CBoneBitList::CBoneBitList(int nMaxBones)
{
} /* size: 0 */

// <0280E130> ../public/bonesetup/animationresult.h:133
inline void CBoneBitList::CBoneBitList(int nMaxBones)
{
} /* size: 0 */

// <0280E10B> ../public/bonesetup/animationresult.h:138
inline void CBoneBitList::MarkBone(int iBone)
{
} /* size: 0 */

// <0280E0E6> ../public/bonesetup/animationresult.h:143
inline void CBoneBitList::IsBoneMarked(int iBone)
{
} /* size: 0 */

// <00B9C85C> ../public/bonesetup/animationresult.h:154
// member functions: 80
// member variables: 9
// class size: 5,712
class CAnimationResult {
	/* ../public/bonesetup/animationresult.h:157 */
	void CAnimationResult(CAnimationResult* );
	/* ../public/bonesetup/animationresult.h:158 */
	void CAnimationResult(CAnimationResult* , const CAnimationResult& );
	/* ../public/bonesetup/animationresult.h:159 */
	void CAnimationResult(CAnimationResult* , const CModel* , int);
	/* ../public/bonesetup/animationresult.h:160 */
	void ~CAnimationResult(CAnimationResult* );
	/* ../public/bonesetup/animationresult.h:162 */
	void Init(CAnimationResult* , const CModel* , int);
	/* ../public/bonesetup/animationresult.h:163 */
	void Clear(CAnimationResult* );
	/* ../public/bonesetup/animationresult.h:165 */
	void GetBones(const CAnimationResult* , int, CTransform* , const uint32* );
	/* ../public/bonesetup/animationresult.h:166 */
	void GetBones(const CAnimationResult* , const CUtlVector<int, CUtlMemory<int, int> >& , CTransform* );
	/* ../public/bonesetup/animationresult.h:167 */
	void SetBones(CAnimationResult* , int, const CTransform* );
	/* ../public/bonesetup/animationresult.h:168 */
	void SetBone(CAnimationResult* , int, const CTransform& );
	/* ../public/bonesetup/animationresult.h:169 */
	void SetBones(CAnimationResult* , const CUtlVector<int, CUtlMemory<int, int> >& , const CTransform* );
	/* ../public/bonesetup/animationresult.h:171 */
	void SetBoneTranslationDirect(CAnimationResult* , int, int, const VectorAligned& );
	/* ../public/bonesetup/animationresult.h:172 */
	void SetBoneRotationDirect(CAnimationResult* , int, int, const QuaternionAligned& );
	/* ../public/bonesetup/animationresult.h:173 */
	void SetMorphTargetDirect(CAnimationResult* , int, int, float);
	/* ../public/bonesetup/animationresult.h:175 */
	void GetMorphTargets(const CAnimationResult* , int, float* );
	/* ../public/bonesetup/animationresult.h:176 */
	void GetAllUserData(const CAnimationResult* , int, void* );
	/* ../public/bonesetup/animationresult.h:177 */
	bool GetUserDataElement(const CAnimationResult* , int, void* );
	/* ../public/bonesetup/animationresult.h:179 */
	bool GetBone(const CAnimationResult* , int, Vector& , Quaternion& );
	/* ../public/bonesetup/animationresult.h:181 */
	void* GetChannelData(const CAnimationResult* , int);
	/* ../public/bonesetup/animationresult.h:182 */
	bool IsChannelActive(const CAnimationResult* , int);
	/* ../public/bonesetup/animationresult.h:183 */
	void InitData(CAnimationResult* , int);
	/* ../public/bonesetup/animationresult.h:184 */
	void InitMissingData(CAnimationResult* , int, const CAnimDecodeSwizzle* );
	/* ../public/bonesetup/animationresult.h:185 */
	int GetChannelBufSize(const CAnimationResult* , int);
	/* ../public/bonesetup/animationresult.h:187 */
	void SetChannelRequestIndex(CAnimationResult* , int);
	/* ../public/bonesetup/animationresult.h:188 */
	void SetAllUnused(CAnimationResult* );
	/* ../public/bonesetup/animationresult.h:189 */
	void SetChannelUsed(CAnimationResult* , int);
	/* ../public/bonesetup/animationresult.h:190 */
	bool IsChannelUsed(const CAnimationResult* , int);
	/* ../public/bonesetup/animationresult.h:192 */
	void ZeroData(CAnimationResult* , int);
	/* ../public/bonesetup/animationresult.h:194 */
	bool IsValid(CAnimationResult* );
	/* ../public/bonesetup/animationresult.h:196 */
	void Blend(CAnimationResult* , const CAnimationResult& , float);
	/* ../public/bonesetup/animationresult.h:197 */
	void Scale(CAnimationResult* , float);
	/* ../public/bonesetup/animationresult.h:198 */
	void Copy(CAnimationResult* , const CAnimationResult& );
	/* ../public/bonesetup/animationresult.h:200 */
	void Slerp(CAnimationResult* , const ChannelWeightlist_t* , const CAnimationResult& , float);
	/* ../public/bonesetup/animationresult.h:201 */
	void Add(CAnimationResult* , const ChannelWeightlist_t* , const CAnimationResult& , float);
	/* ../public/bonesetup/animationresult.h:202 */
	void Subtract(CAnimationResult* , const ChannelWeightlist_t* , const CAnimationResult& , float);
	/* ../public/bonesetup/animationresult.h:203 */
	void WorldspaceSlerp(CAnimationResult* , const ChannelWeightlist_t* , const CAnimationResult& , float);
	/* ../public/bonesetup/animationresult.h:204 */
	void Transform(CAnimationResult* , const CAnimationResult& , const Vector& , const Quaternion& );
	/* ../public/bonesetup/animationresult.h:206 */
	void IKLockInPlace(CAnimationResult* , int, float, float, bool);
	/* ../public/bonesetup/animationresult.h:207 */
	void IKRestoreAll(CAnimationResult* );
	/* ../public/bonesetup/animationresult.h:209 */
	const CModel* GetModel(const CAnimationResult* );
	bool m_bInited; /* 0 1 */
private:
	const class CModel * m_pModel; /* 8 8 */
	int m_nRequestIndex; /* 16 4 */
	int m_nTick; /* 20 4 */
	CUtlVectorFixedGrowable<CAnimationChannelResult, 12> m_dataChannel __attribute__((__aligned__(8))); /* 24 416 */
	CUtlVectorFixedGrowable<IKLocked_t, 12> m_iklockArray __attribute__((__aligned__(16))); /* 448 992 */
	CUtlMemoryFixedGrowable<CTransform, 64, int> m_ikLockParentSpaceTransformsPre __attribute__((__aligned__(16))); /* 1440 2064 */
	CUtlMemoryFixedGrowable<CTransform, 64, int> m_ikLockWorldSpaceTransformsScratch __attribute__((__aligned__(16))); /* 3504 2064 */
	CBoneBitList m_iklockBoneComputed; /* 5568 144 */
	void CAnimationResult(class CAnimationResult *); /* linkage=_ZN16CAnimationResultC4Ev */
	void CAnimationResult(class CAnimationResult *, const class CAnimationResult  &); /* linkage=_ZN16CAnimationResultC4ERKS_ */
	void CAnimationResult(class CAnimationResult *, const class CModel  *, int); /* linkage=_ZN16CAnimationResultC4EPK6CModeli */
	void ~CAnimationResult(class CAnimationResult *); /* linkage=_ZN16CAnimationResultD4Ev */
	/* <28150f4> bonesetup/channel_operators.cpp:608 */
	void Init(class CAnimationResult *, const class CModel  *, int); /* linkage=_ZN16CAnimationResult4InitEPK6CModeli */
	void Clear(class CAnimationResult *); /* linkage=_ZN16CAnimationResult5ClearEv */
	void GetBones(const class CAnimationResult  *, int, class CTransform *, const uint32  *); /* linkage=_ZNK16CAnimationResult8GetBonesEiP10CTransformPKj */
	void GetBones(const class CAnimationResult  *, const class CUtlVector<int, CUtlMemory<int, int> >  &, class CTransform *); /* linkage=_ZNK16CAnimationResult8GetBonesERK10CUtlVectorIi10CUtlMemoryIiiEEP10CTransform */
	/* <2814c33> bonesetup/channel_operators.cpp:865 */
	void SetBones(class CAnimationResult *, int, const class CTransform  *); /* linkage=_ZN16CAnimationResult8SetBonesEiPK10CTransform */
	void SetBone(class CAnimationResult *, int, const class CTransform  &); /* linkage=_ZN16CAnimationResult7SetBoneEiRK10CTransform */
	void SetBones(class CAnimationResult *, const class CUtlVector<int, CUtlMemory<int, int> >  &, const class CTransform  *); /* linkage=_ZN16CAnimationResult8SetBonesERK10CUtlVectorIi10CUtlMemoryIiiEEPK10CTransform */
	void SetBoneTranslationDirect(class CAnimationResult *, int, int, const class VectorAligned  &); /* linkage=_ZN16CAnimationResult24SetBoneTranslationDirectEiiRK13VectorAligned */
	void SetBoneRotationDirect(class CAnimationResult *, int, int, const class QuaternionAligned  &); /* linkage=_ZN16CAnimationResult21SetBoneRotationDirectEiiRK17QuaternionAligned */
	void SetMorphTargetDirect(class CAnimationResult *, int, int, float); /* linkage=_ZN16CAnimationResult20SetMorphTargetDirectEiif */
	void GetMorphTargets(const class CAnimationResult  *, int, float *); /* linkage=_ZNK16CAnimationResult15GetMorphTargetsEiPf */
	void GetAllUserData(const class CAnimationResult  *, int, void *); /* linkage=_ZNK16CAnimationResult14GetAllUserDataEiPv */
	bool GetUserDataElement(const class CAnimationResult  *, int, void *); /* linkage=_ZNK16CAnimationResult18GetUserDataElementEiPv */
	bool GetBone(const class CAnimationResult  *, int, class Vector &, class Quaternion &); /* linkage=_ZNK16CAnimationResult7GetBoneEiR6VectorR10Quaternion */
	/* <2814d1e> bonesetup/channel_operators.cpp:1129 */
	void * GetChannelData(const class CAnimationResult  *, int); /* linkage=_ZNK16CAnimationResult14GetChannelDataEi */
	/* <2814e05> bonesetup/channel_operators.cpp:1155 */
	bool IsChannelActive(const class CAnimationResult  *, int); /* linkage=_ZNK16CAnimationResult15IsChannelActiveEi */
	/* <2814e66> bonesetup/channel_operators.cpp:1170 */
	void InitData(class CAnimationResult *, int); /* linkage=_ZN16CAnimationResult8InitDataEi */
	void InitMissingData(class CAnimationResult *, int, const class CAnimDecodeSwizzle  *); /* linkage=_ZN16CAnimationResult15InitMissingDataEiPK18CAnimDecodeSwizzle */
	int GetChannelBufSize(const class CAnimationResult  *, int); /* linkage=_ZNK16CAnimationResult17GetChannelBufSizeEi */
	void SetChannelRequestIndex(class CAnimationResult *, int); /* linkage=_ZN16CAnimationResult22SetChannelRequestIndexEi */
	void SetAllUnused(class CAnimationResult *); /* linkage=_ZN16CAnimationResult12SetAllUnusedEv */
	/* <2814ec5> bonesetup/channel_operators.cpp:1251 */
	void SetChannelUsed(class CAnimationResult *, int); /* linkage=_ZN16CAnimationResult14SetChannelUsedEi */
	/* <2814f77> bonesetup/channel_operators.cpp:1264 */
	bool IsChannelUsed(const class CAnimationResult  *, int); /* linkage=_ZNK16CAnimationResult13IsChannelUsedEi */
	/* <2815029> bonesetup/channel_operators.cpp:1275 */
	void ZeroData(class CAnimationResult *, int); /* linkage=_ZN16CAnimationResult8ZeroDataEi */
	bool IsValid(class CAnimationResult *); /* linkage=_ZN16CAnimationResult7IsValidEv */
	void Blend(class CAnimationResult *, const class CAnimationResult  &, float); /* linkage=_ZN16CAnimationResult5BlendERKS_f */
	void Scale(class CAnimationResult *, float); /* linkage=_ZN16CAnimationResult5ScaleEf */
	void Copy(class CAnimationResult *, const class CAnimationResult  &); /* linkage=_ZN16CAnimationResult4CopyERKS_ */
	void Slerp(class CAnimationResult *, const class ChannelWeightlist_t  *, const class CAnimationResult  &, float); /* linkage=_ZN16CAnimationResult5SlerpEPK19ChannelWeightlist_tRKS_f */
	void Add(class CAnimationResult *, const class ChannelWeightlist_t  *, const class CAnimationResult  &, float); /* linkage=_ZN16CAnimationResult3AddEPK19ChannelWeightlist_tRKS_f */
	void Subtract(class CAnimationResult *, const class ChannelWeightlist_t  *, const class CAnimationResult  &, float); /* linkage=_ZN16CAnimationResult8SubtractEPK19ChannelWeightlist_tRKS_f */
	void WorldspaceSlerp(class CAnimationResult *, const class ChannelWeightlist_t  *, const class CAnimationResult  &, float); /* linkage=_ZN16CAnimationResult15WorldspaceSlerpEPK19ChannelWeightlist_tRKS_f */
	void Transform(class CAnimationResult *, const class CAnimationResult  &, const class Vector  &, const class Quaternion  &); /* linkage=_ZN16CAnimationResult9TransformERKS_RK6VectorRK10Quaternion */
	void IKLockInPlace(class CAnimationResult *, int, float, float, bool); /* linkage=_ZN16CAnimationResult13IKLockInPlaceEiffb */
	void IKRestoreAll(class CAnimationResult *); /* linkage=_ZN16CAnimationResult12IKRestoreAllEv */
	const class CModel  * GetModel(const class CAnimationResult  *); /* linkage=_ZNK16CAnimationResult8GetModelEv */
} __attribute__((__aligned__(16)));

// <02726899> ../public/bonesetup/animationresult.h:157
void CAnimationResult::CAnimationResult()
{
} /* size: 0 */

// <025902B0> ../public/bonesetup/animationresult.h:158
void CAnimationResult::CAnimationResult(const CAnimationResult& animResult)
{
} /* size: 0 */

// <025905C9> ../public/bonesetup/animationresult.h:159
void CAnimationResult::CAnimationResult(const CModel* pModel, int nRequestIndex)
{
} /* size: 0 */

// <027268DC> ../public/bonesetup/animationresult.h:160
void CAnimationResult::~CAnimationResult()
{
} /* size: 0 */

