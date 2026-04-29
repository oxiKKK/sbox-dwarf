
//
// public/scenesystem/volumeculler.h
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//
//	functions: 8
//	classes: 3
//

// <000E8281> ../public/scenesystem/volumeculler.h:14
// member functions: 16
// member variables: 4
// class size: 304
class CVolumeCuller {
	/* ../public/scenesystem/volumeculler.h:17 */
	void CVolumeCuller(CVolumeCuller* );
	/* ../public/scenesystem/volumeculler.h:19 */
	void Clear(CVolumeCuller* );
	/* ../public/scenesystem/volumeculler.h:21 */
	bool IsValid(const CVolumeCuller* );
	/* ../public/scenesystem/volumeculler.h:24 */
	bool CheckBox(const CVolumeCuller* , const VectorAligned& , const VectorAligned& );
	/* ../public/scenesystem/volumeculler.h:34 */
	bool HasExclusionFrustum(const CVolumeCuller* );
	/* ../public/scenesystem/volumeculler.h:37 */
	void SetExclusionFrustumPlanes(CVolumeCuller* , const VPlane* );
	/* ../public/scenesystem/volumeculler.h:56 */
	bool HasInclusionVolume(const CVolumeCuller* );
	/* ../public/scenesystem/volumeculler.h:59 */
	void SetInclusionVolumePlanes(CVolumeCuller* , const VPlane* , uint);
private:
	fltx4 m_ExclusionFrustumPlanes[6]; /* 0 96 */
	fltx4 m_InclusionVolumePlanes[12]; /* 96 192 */
	uint m_nNumInclusionVolumePlanes; /* 288 4 */
	bool m_bHasExclusionFrustum:1; /* 292: 0 1 */
	void CVolumeCuller(class CVolumeCuller *); /* linkage=_ZN13CVolumeCullerC4Ev */
	void Clear(class CVolumeCuller *); /* linkage=_ZN13CVolumeCuller5ClearEv */
	bool IsValid(const class CVolumeCuller  *); /* linkage=_ZNK13CVolumeCuller7IsValidEv */
	bool CheckBox(const class CVolumeCuller  *, const class VectorAligned  &, const class VectorAligned  &); /* linkage=_ZNK13CVolumeCuller8CheckBoxERK13VectorAlignedS2_ */
	bool HasExclusionFrustum(const class CVolumeCuller  *); /* linkage=_ZNK13CVolumeCuller19HasExclusionFrustumEv */
	void SetExclusionFrustumPlanes(class CVolumeCuller *, const class VPlane  *); /* linkage=_ZN13CVolumeCuller25SetExclusionFrustumPlanesEPK6VPlane */
	bool HasInclusionVolume(const class CVolumeCuller  *); /* linkage=_ZNK13CVolumeCuller18HasInclusionVolumeEv */
	void SetInclusionVolumePlanes(class CVolumeCuller *, const class VPlane  *, uint); /* linkage=_ZN13CVolumeCuller24SetInclusionVolumePlanesEPK6VPlanej */
} __attribute__((__aligned__(16)));

// <02D65E6D> ../public/scenesystem/volumeculler.h:14
// member functions: 16
// member variables: 4
// class size: 304
class CVolumeCuller {
	/* ../public/scenesystem/volumeculler.h:27 */
	enum {
		cNumExclusionFrustumPlanes = 6,
		cMaxInclusionVolumePlanes = 12,
	};
	/* ../public/scenesystem/volumeculler.h:17 */
	void CVolumeCuller(CVolumeCuller* );
	/* ../public/scenesystem/volumeculler.h:19 */
	void Clear(CVolumeCuller* );
	/* ../public/scenesystem/volumeculler.h:21 */
	bool IsValid(const CVolumeCuller* );
	/* ../public/scenesystem/volumeculler.h:24 */
	bool CheckBox(const CVolumeCuller* , const VectorAligned& , const VectorAligned& );
	/* ../public/scenesystem/volumeculler.h:34 */
	bool HasExclusionFrustum(const CVolumeCuller* );
	/* ../public/scenesystem/volumeculler.h:37 */
	void SetExclusionFrustumPlanes(CVolumeCuller* , const VPlane* );
	/* ../public/scenesystem/volumeculler.h:56 */
	bool HasInclusionVolume(const CVolumeCuller* );
	/* ../public/scenesystem/volumeculler.h:59 */
	void SetInclusionVolumePlanes(CVolumeCuller* , const VPlane* , uint);
private:
	fltx4 m_ExclusionFrustumPlanes[6]; /* 0 96 */
	fltx4 m_InclusionVolumePlanes[12]; /* 96 192 */
	uint m_nNumInclusionVolumePlanes; /* 288 4 */
	bool m_bHasExclusionFrustum:1; /* 292: 0 1 */
	void CVolumeCuller(class CVolumeCuller *); /* linkage=_ZN13CVolumeCullerC4Ev */
	void Clear(class CVolumeCuller *); /* linkage=_ZN13CVolumeCuller5ClearEv */
	bool IsValid(const class CVolumeCuller  *); /* linkage=_ZNK13CVolumeCuller7IsValidEv */
	bool CheckBox(const class CVolumeCuller  *, const class VectorAligned  &, const class VectorAligned  &); /* linkage=_ZNK13CVolumeCuller8CheckBoxERK13VectorAlignedS2_ */
	bool HasExclusionFrustum(const class CVolumeCuller  *); /* linkage=_ZNK13CVolumeCuller19HasExclusionFrustumEv */
	void SetExclusionFrustumPlanes(class CVolumeCuller *, const class VPlane  *); /* linkage=_ZN13CVolumeCuller25SetExclusionFrustumPlanesEPK6VPlane */
	bool HasInclusionVolume(const class CVolumeCuller  *); /* linkage=_ZNK13CVolumeCuller18HasInclusionVolumeEv */
	void SetInclusionVolumePlanes(class CVolumeCuller *, const class VPlane  *, uint); /* linkage=_ZN13CVolumeCuller24SetInclusionVolumePlanesEPK6VPlanej */
} __attribute__((__aligned__(16)));

// <058C1FB7> ../../public/scenesystem/volumeculler.h:14
// member functions: 16
// member variables: 4
// class size: 304
class CVolumeCuller {
	/* ../../public/scenesystem/volumeculler.h:17 */
	void CVolumeCuller(CVolumeCuller* );
	/* ../../public/scenesystem/volumeculler.h:19 */
	void Clear(CVolumeCuller* );
	/* ../../public/scenesystem/volumeculler.h:21 */
	bool IsValid(const CVolumeCuller* );
	/* ../../public/scenesystem/volumeculler.h:24 */
	bool CheckBox(const CVolumeCuller* , const VectorAligned& , const VectorAligned& );
	/* ../../public/scenesystem/volumeculler.h:34 */
	bool HasExclusionFrustum(const CVolumeCuller* );
	/* ../../public/scenesystem/volumeculler.h:37 */
	void SetExclusionFrustumPlanes(CVolumeCuller* , const VPlane* );
	/* ../../public/scenesystem/volumeculler.h:56 */
	bool HasInclusionVolume(const CVolumeCuller* );
	/* ../../public/scenesystem/volumeculler.h:59 */
	void SetInclusionVolumePlanes(CVolumeCuller* , const VPlane* , uint);
private:
	fltx4 m_ExclusionFrustumPlanes[6]; /* 0 96 */
	fltx4 m_InclusionVolumePlanes[12]; /* 96 192 */
	uint m_nNumInclusionVolumePlanes; /* 288 4 */
	bool m_bHasExclusionFrustum:1; /* 292: 0 1 */
	void CVolumeCuller(class CVolumeCuller *); /* linkage=_ZN13CVolumeCullerC4Ev */
	void Clear(class CVolumeCuller *); /* linkage=_ZN13CVolumeCuller5ClearEv */
	bool IsValid(const class CVolumeCuller  *); /* linkage=_ZNK13CVolumeCuller7IsValidEv */
	bool CheckBox(const class CVolumeCuller  *, const class VectorAligned  &, const class VectorAligned  &); /* linkage=_ZNK13CVolumeCuller8CheckBoxERK13VectorAlignedS2_ */
	bool HasExclusionFrustum(const class CVolumeCuller  *); /* linkage=_ZNK13CVolumeCuller19HasExclusionFrustumEv */
	void SetExclusionFrustumPlanes(class CVolumeCuller *, const class VPlane  *); /* linkage=_ZN13CVolumeCuller25SetExclusionFrustumPlanesEPK6VPlane */
	bool HasInclusionVolume(const class CVolumeCuller  *); /* linkage=_ZNK13CVolumeCuller18HasInclusionVolumeEv */
	void SetInclusionVolumePlanes(class CVolumeCuller *, const class VPlane  *, uint); /* linkage=_ZN13CVolumeCuller24SetInclusionVolumePlanesEPK6VPlanej */
} __attribute__((__aligned__(16)));

// <03241048> ../public/scenesystem/volumeculler.h:17
void CVolumeCuller::CVolumeCuller()
{
} /* size: 0 */

// <0324102F> ../public/scenesystem/volumeculler.h:17
inline void CVolumeCuller::CVolumeCuller()
{
} /* size: 0 */

// <03241016> ../public/scenesystem/volumeculler.h:19
inline void CVolumeCuller::Clear()
{
} /* size: 0 */

// <02F24FA0> ../public/scenesystem/volumeculler.h:21
inline void CVolumeCuller::IsValid()
{
} /* size: 0 */

// <02F24F6F> ../public/scenesystem/volumeculler.h:37
// variable: 1
inline void CVolumeCuller::SetExclusionFrustumPlanes(const VPlane* pPlanes)
{
	{
		int i; // 47
	}
} /* size: 0 */

// <02F24E55> ../public/scenesystem/volumeculler.h:87
// variables: 19
inline bool AABBInsideFrustum(const fltx4* pPlanes, FLTX4 vCenter4, FLTX4 vDiagonal4)
{
	fltx4 mp0; // 89
	fltx4 mp1; // 90
	fltx4 mp2; // 91
	fltx4 mp3; // 92
	fltx4 mp4; // 93
	fltx4 mp5; // 94
	fltx4 np0; // 96
	fltx4 np1; // 97
	fltx4 np2; // 98
	fltx4 np3; // 99
	fltx4 np4; // 100
	fltx4 np5; // 101
	fltx4 s0; // 103
	fltx4 s1; // 104
	fltx4 s2; // 105
	fltx4 s3; // 106
	fltx4 s4; // 107
	fltx4 s5; // 108
	fltx4 minS; // 110
} /* size: 0, variables: 19 */

// <02F24DD3> ../public/scenesystem/volumeculler.h:124
// variables: 5
inline bool AABBTouchesOrInsideVolume(const fltx4* pPlanes, uint nNumPlanes, FLTX4 vCenter4, FLTX4 vDiagonal4)
{
	fltx4 minA; // 126
	{
		uint i; // 127
		{
			fltx4 np; // 129
			fltx4 mp; // 130
			fltx4 a; // 131
		}
	}
} /* size: 0, variables: 1 */

// <02F24D6F> ../public/scenesystem/volumeculler.h:141
// variables: 4
inline void CVolumeCuller::CheckBox(const VectorAligned& mins, const VectorAligned& maxs)
{
	fltx4 vMins4; // 143
	fltx4 vMaxs4; // 144
	fltx4 vCenter4; // 147
	fltx4 vDiagonal4; // 148
} /* size: 0, variables: 4 */

