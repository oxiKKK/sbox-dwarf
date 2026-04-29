
//
// public/animationsystem/ianimvrproxy.h
//
//	referenced by: libanimationsystem.so
//
//	function: 1
//	classes: 3
//

// <005E74CE> ../public/animationsystem/ianimvrproxy.h:17
inline void Get(ISchemaSystemTypeScope* pTypeScope)
{
} /* size: 0 */

// <0025EF34> ../public/animationsystem/ianimvrproxy.h:17
// member functions: 2
// class size: 1
class CSchemaTypeOf<AnimVRHandMotionRange_t> {
	/* ../public/animationsystem/ianimvrproxy.h:17 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
	/* ../public/animationsystem/ianimvrproxy.h:17 */
	const char* GetEnumName(void);
};

// <0025EF96> ../public/animationsystem/ianimvrproxy.h:35
// member functions: 2
// class size: 1
class CSchemaTypeOf<AnimVrBoneTransformSource_t> {
	/* ../public/animationsystem/ianimvrproxy.h:35 */
	CSchemaType* Get(ISchemaSystemTypeScope* );
	/* ../public/animationsystem/ianimvrproxy.h:35 */
	const char* GetEnumName(void);
};

// <00DDDF9A> ../public/animationsystem/ianimvrproxy.h:45
// member functions: 30
// member variable: 1
// vtable entries: 11
// class size: 8
class IAnimVRProxy {
	int ()(void) * * _vptr.IAnimVRProxy; /* 0 8 */
private:
	/* ../public/animationsystem/ianimvrproxy.h:47 */
	CClassInfoT<IAnimVRProxy>& MyTypeInfoInternal(void);
	/* ../public/animationsystem/ianimvrproxy.h:47 */
	const ClassID MyTypeID(void);
	/* ../public/animationsystem/ianimvrproxy.h:47 */
	const CClassInfo& MyTypeInfo(void);
	/* ../public/animationsystem/ianimvrproxy.h:47 */
	virtual const CClassInfo& GetTypeInfo(const IAnimVRProxy* );
	/* ../public/animationsystem/ianimvrproxy.h:47 */
	virtual void* CastToBase(IAnimVRProxy* , ClassID);
	/* ../public/animationsystem/ianimvrproxy.h:47 */
	virtual const void* CastToBase(const IAnimVRProxy* , ClassID);
	/* ../public/animationsystem/ianimvrproxy.h:49 */
	virtual void ~IAnimVRProxy(IAnimVRProxy* );
	/* ../public/animationsystem/ianimvrproxy.h:51 */
	virtual bool IsSkeletonActive(const IAnimVRProxy* );
	/* ../public/animationsystem/ianimvrproxy.h:52 */
	virtual bool GetSkeletalBoneData(const IAnimVRProxy* , AnimVRHandMotionRange_t, CTransform* , int);
	/* ../public/animationsystem/ianimvrproxy.h:53 */
	virtual bool GetGripLimitBoneData(const IAnimVRProxy* , CTransform* , int);
	/* ../public/animationsystem/ianimvrproxy.h:55 */
	virtual float GetFingerCurl(const IAnimVRProxy* , AnimVRFinger_t);
	/* ../public/animationsystem/ianimvrproxy.h:56 */
	virtual float GetFingerSplay(const IAnimVRProxy* , AnimVrFingerSplay_t);
	/* ../public/animationsystem/ianimvrproxy.h:61 */
	virtual void UpdateDefaultActionState(const IAnimVRProxy* );
	/* ../public/animationsystem/ianimvrproxy.h:63 */
	virtual const CVrSkeletalInputSettings& GetSkeletalSettings(const IAnimVRProxy* );
	/* ../public/animationsystem/ianimvrproxy.h:64 */
	virtual void SetSkeletalSettings(IAnimVRProxy* , const CVrSkeletalInputSettings& );
	class CClassInfoT<IAnimVRProxy> & MyTypeInfoInternal(void); /* linkage=_ZN12IAnimVRProxy18MyTypeInfoInternalEv */
	const class ClassID  MyTypeID(void); /* linkage=_ZN12IAnimVRProxy8MyTypeIDEv */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN12IAnimVRProxy10MyTypeInfoEv */
	virtual const class CClassInfo  & GetTypeInfo(const class IAnimVRProxy  *); /* linkage=_ZNK12IAnimVRProxy11GetTypeInfoEv */
	virtual void * CastToBase(class IAnimVRProxy *, class ClassID); /* linkage=_ZN12IAnimVRProxy10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class IAnimVRProxy  *, class ClassID); /* linkage=_ZNK12IAnimVRProxy10CastToBaseEN10Reflection7ClassIDE */
	virtual void ~IAnimVRProxy(class IAnimVRProxy *); /* linkage=_ZN12IAnimVRProxyD4Ev */
	virtual bool IsSkeletonActive(const class IAnimVRProxy  *); /* linkage=_ZNK12IAnimVRProxy16IsSkeletonActiveEv */
	virtual bool GetSkeletalBoneData(const class IAnimVRProxy  *, enum AnimVRHandMotionRange_t, class CTransform *, int); /* linkage=_ZNK12IAnimVRProxy19GetSkeletalBoneDataE23AnimVRHandMotionRange_tP10CTransformi */
	virtual bool GetGripLimitBoneData(const class IAnimVRProxy  *, class CTransform *, int); /* linkage=_ZNK12IAnimVRProxy20GetGripLimitBoneDataEP10CTransformi */
	virtual float GetFingerCurl(const class IAnimVRProxy  *, enum AnimVRFinger_t); /* linkage=_ZNK12IAnimVRProxy13GetFingerCurlE14AnimVRFinger_t */
	virtual float GetFingerSplay(const class IAnimVRProxy  *, enum AnimVrFingerSplay_t); /* linkage=_ZNK12IAnimVRProxy14GetFingerSplayE19AnimVrFingerSplay_t */
	virtual void UpdateDefaultActionState(const class IAnimVRProxy  *); /* linkage=_ZNK12IAnimVRProxy24UpdateDefaultActionStateEv */
	virtual const class CVrSkeletalInputSettings  & GetSkeletalSettings(const class IAnimVRProxy  *); /* linkage=_ZNK12IAnimVRProxy19GetSkeletalSettingsEv */
	virtual void SetSkeletalSettings(class IAnimVRProxy *, const class CVrSkeletalInputSettings  &); /* linkage=_ZN12IAnimVRProxy19SetSkeletalSettingsERK24CVrSkeletalInputSettings */
};

