
//
// public/vphysx/vphysx_interface_params.h
//
//	referenced by: libengine2.so
//
//	structs: 2
//

// <00994E0F> ../public/vphysx/vphysx_interface_params.h:23
// member function: 1
// member variables: 11
// struct size: 48
struct DebugMeshParams_t {
	/* ../public/vphysx/vphysx_interface_params.h:40 */
	enum FlagEnum_t {
		FLAG_APPEND_ENTITY_BONE = 1,
		FLAG_SHOW_ONLY_ACOUSTIC_GEOMETRY = 2,
	};
	/* ../public/vphysx/vphysx_interface_params.h:25 */
	void DebugMeshParams_t(DebugMeshParams_t* );
	const class CModelSkeleton * m_pMasterSkeleton; /* 0 8 */
	CPhysAggregateDataHandle m_pCollisionMesh; /* 8 8 */
	float m_flConstraintScale; /* 16 4 */
	int m_nSelectedConstraint; /* 20 4 */
	int m_nSelectedPart; /* 24 4 */
	uint8 m_nConstraintAlpha; /* 28 1 */
	uint8 m_nSelectedConstraintAlpha; /* 29 1 */
	VertexColor_t m_vColorCollision; /* 32 4 */
	VertexColor_t m_vColorSelectedCollision; /* 36 4 */
	VertexColor_t m_vColorStaticCollision; /* 40 4 */
	uint m_nFlags; /* 44 4 */
};

// <009955EC> ../public/vphysx/vphysx_interface_params.h:77
// member function: 1
// member variables: 5
// struct size: 80
struct DebugSceneObjectParams_t : public DebugMeshParams_t {
public:
	/* struct DebugMeshParams_t <ancestor>; */ /* 0 48 */
	/* ../public/vphysx/vphysx_interface_params.h:79 */
	void DebugSceneObjectParams_t(DebugSceneObjectParams_t* );
	Vector m_vecSortDir; /* 48 12 */
	uint m_nSortPoseCount; /* 60 4 */
	CTransform * m_pSortPose; /* 64 8 */
	Vector * m_pScaleVector; /* 72 8 */
};

