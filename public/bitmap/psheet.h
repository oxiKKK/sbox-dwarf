
//
// public/bitmap/psheet.h
//
//	referenced by: librendersystemempty.so
//				   librendersystemvulkan.so
//
//	functions: 3
//	classes: 2
//	structs: 3
//

// <0029BF2D> ../public/bitmap/psheet.h:30
// member variables: 2
// struct size: 64
struct SequenceSampleTextureCoords_t {
	/* ../public/bitmap/psheet.h:32 */
	struct FrameRect_t {
		float m_fLeft_U; /* 0 4 */
		float m_fTop_V; /* 4 4 */
		float m_fRight_U; /* 8 4 */
		float m_fBottom_V; /* 12 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* ../public/bitmap/psheet.h:40 */
	struct Frame_t {
		FrameRect_t m_cropped; /* 0 16 */
		FrameRect_t m_uncropped; /* 16 16 */
	};
	Frame_t m_frame0; /* 0 32 */
	Frame_t m_frame1; /* 32 32 */
};

// <00F40627> ../public/bitmap/psheet.h:30
// member variables: 2
// struct size: 64
struct SequenceSampleTextureCoords_t {
	/* ../public/bitmap/psheet.h:32 */
	struct FrameRect_t {
		float m_fLeft_U; /* 0 4 */
		float m_fTop_V; /* 4 4 */
		float m_fRight_U; /* 8 4 */
		float m_fBottom_V; /* 12 4 */
	};
	/* ../public/bitmap/psheet.h:40 */
	struct Frame_t {
		FrameRect_t m_cropped; /* 0 16 */
		FrameRect_t m_uncropped; /* 16 16 */
	};
	Frame_t m_frame0; /* 0 32 */
	Frame_t m_frame1; /* 32 32 */
};

// <0029BFD4> ../public/bitmap/psheet.h:50
// member function: 1
// member variables: 3
// struct size: 136
struct SheetSequenceSample_t {
	SequenceSampleTextureCoords_t m_TextureCoordData[2]; /* 0 128 */
	float m_fBlendFactor; /* 128 4 */
	int m_nStartFrameNumber; /* 132 4 */
	/* ../public/bitmap/psheet.h:59 */
	void CopyFirstFrameToOthers(SheetSequenceSample_t* );
};

// <00F4B7DF> ../public/bitmap/psheet.h:59
// variable: 1
inline void SheetSequenceSample_t::CopyFirstFrameToOthers()
{
	{
		int i; // 62
	}
} /* size: 0 */

// <0029C5A7> ../public/bitmap/psheet.h:78
// member functions: 12
// member variables: 2
// class size: 40
class CSheet {
	/* ../public/bitmap/psheet.h:93 */
	struct SheetInfo_t {
		SheetSequenceSample_t * m_pSamples; /* 0 8 */
		uint8 m_SeqFlags; /* 8 1 */
		bool m_bSequenceIsCopyOfAnotherSequence; /* 9 1 */
		int16 m_nNumFrames; /* 10 2 */
		float m_flFrameSpan; /* 12 4 */
	};
	/* tag__fprintf: const_type tag not supported! */;
private:
	CUtlReferenceList<CSheet> m_References; /* 0 8 */
	/* ../public/bitmap/psheet.h:84 */
	void CSheet(CSheet* , CUtlBuffer& );
	/* ../public/bitmap/psheet.h:85 */
	void CSheet(CSheet* , const Sheet_t* );
	/* ../public/bitmap/psheet.h:86 */
	void CSheet(CSheet* );
	/* ../public/bitmap/psheet.h:87 */
	void ~CSheet(CSheet* );
	/* ../public/bitmap/psheet.h:89 */
	const SheetSequenceSample_t* GetSampleForSequence(CSheet* , float, float, int, bool);
	/* ../public/bitmap/psheet.h:91 */
	bool HasAnyReferences(CSheet* );
	CUtlVector<CSheet::SheetInfo_t, CUtlMemory<CSheet::SheetInfo_t, int> > m_SheetInfo; /* 8 32 */
	void CSheet(class CSheet *, class CUtlBuffer &); /* linkage=_ZN6CSheetC4ER10CUtlBuffer */
	void CSheet(class CSheet *, const class Sheet_t  *); /* linkage=_ZN6CSheetC4EPK7Sheet_t */
	void CSheet(class CSheet *); /* linkage=_ZN6CSheetC4Ev */
	void ~CSheet(class CSheet *); /* linkage=_ZN6CSheetD4Ev */
	/* <f4c086> bitmap/psheet.cpp:349 */
	const class SheetSequenceSample_t  * GetSampleForSequence(class CSheet *, float, float, int, bool); /* linkage=_ZN6CSheet20GetSampleForSequenceEffib */
	bool HasAnyReferences(class CSheet *); /* linkage=_ZN6CSheet16HasAnyReferencesEv */
};

// <002A0DBD> ../public/bitmap/psheet.h:85
void CSheet::CSheet(const Sheet_t* pSheet)
{
} /* size: 0 */

// <002A0D24> ../public/bitmap/psheet.h:87
void CSheet::~CSheet()
{
} /* size: 0 */

// <00F429D4> ../public/bitmap/psheet.h:112
// member functions: 28
// member variable: 1
// class size: 8
class CSheetExtended {
	/* ../public/bitmap/psheet.h:115 */
	void CSheetExtended(CSheetExtended* , HMaterial);
	/* ../public/bitmap/psheet.h:116 */
	void ~CSheetExtended(CSheetExtended* );
	/* ../public/bitmap/psheet.h:118 */
	int GetSheetSequenceCount(CSheetExtended* );
	/* ../public/bitmap/psheet.h:119 */
	int GetNthSequenceIndex(CSheetExtended* , int);
	/* ../public/bitmap/psheet.h:120 */
	const SheetSequenceSample_t* GetSampleForSequence(CSheetExtended* , float, float, int, bool);
	/* ../public/bitmap/psheet.h:121 */
	float GetSequenceTimeSpan(CSheetExtended* , int);
	/* ../public/bitmap/psheet.h:123 */
	void DrawSheet(CSheetExtended* , IMesh* , const Vector& , float, int, float, float, bool, int, bool);
	/* ../public/bitmap/psheet.h:125 */
	bool ValidSheetData(CSheetExtended* );
	/* ../public/bitmap/psheet.h:127 */
	bool SequenceHasAlphaData(CSheetExtended* , int);
	/* ../public/bitmap/psheet.h:128 */
	bool SequenceHasColorData(CSheetExtended* , int);
	/* ../public/bitmap/psheet.h:131 */
	bool IsMaterialSeparateAlphaColorMaterial(HMaterial);
	/* ../public/bitmap/psheet.h:132 */
	bool IsMaterialDualSequence(HMaterial);
private:
	/* ../public/bitmap/psheet.h:135 */
	void LoadFromBuffer(CSheetExtended* , CUtlBuffer& );
	/* ../public/bitmap/psheet.h:136 */
	void LoadFromMaterial(CSheetExtended* , HMaterial);
	CSheet * m_pSheetData; /* 0 8 */
	void CSheetExtended(class CSheetExtended *, HMaterial); /* linkage=_ZN14CSheetExtendedC4E11CWeakHandleI29InfoForResourceTypeIMaterial2E */
	void ~CSheetExtended(class CSheetExtended *); /* linkage=_ZN14CSheetExtendedD4Ev */
	int GetSheetSequenceCount(class CSheetExtended *); /* linkage=_ZN14CSheetExtended21GetSheetSequenceCountEv */
	int GetNthSequenceIndex(class CSheetExtended *, int); /* linkage=_ZN14CSheetExtended19GetNthSequenceIndexEi */
	const class SheetSequenceSample_t  * GetSampleForSequence(class CSheetExtended *, float, float, int, bool); /* linkage=_ZN14CSheetExtended20GetSampleForSequenceEffib */
	float GetSequenceTimeSpan(class CSheetExtended *, int); /* linkage=_ZN14CSheetExtended19GetSequenceTimeSpanEi */
	void DrawSheet(class CSheetExtended *, class IMesh *, const class Vector  &, float, int, float, float, bool, int, bool); /* linkage=_ZN14CSheetExtended9DrawSheetEP5IMeshRK6Vectorfiffbib */
	bool ValidSheetData(class CSheetExtended *); /* linkage=_ZN14CSheetExtended14ValidSheetDataEv */
	bool SequenceHasAlphaData(class CSheetExtended *, int); /* linkage=_ZN14CSheetExtended20SequenceHasAlphaDataEi */
	bool SequenceHasColorData(class CSheetExtended *, int); /* linkage=_ZN14CSheetExtended20SequenceHasColorDataEi */
	bool IsMaterialSeparateAlphaColorMaterial(HMaterial); /* linkage=_ZN14CSheetExtended36IsMaterialSeparateAlphaColorMaterialE11CWeakHandleI29InfoForResourceTypeIMaterial2E */
	bool IsMaterialDualSequence(HMaterial); /* linkage=_ZN14CSheetExtended22IsMaterialDualSequenceE11CWeakHandleI29InfoForResourceTypeIMaterial2E */
	void LoadFromBuffer(class CSheetExtended *, class CUtlBuffer &); /* linkage=_ZN14CSheetExtended14LoadFromBufferER10CUtlBuffer */
	/* <f4c14f> bitmap/psheet.cpp:388 */
	void LoadFromMaterial(class CSheetExtended *, HMaterial); /* linkage=_ZN14CSheetExtended16LoadFromMaterialE11CWeakHandleI29InfoForResourceTypeIMaterial2E */
};

