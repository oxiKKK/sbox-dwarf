
//
// public/animationsystem/iblend2danimnodeinstance.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 5
//	class: 1
//	struct: 1
//

// <0100B33A> ../public/animationsystem/iblend2danimnodeinstance.h:12
// member function: 1
// member variables: 3
// static member variable: 1
// struct size: 52
struct Blend2DWeights_t {
	static const int MAX_ENTRIES = 6; /* 0 0 */
	int m_indices[6]; /* 0 24 */
	float m_weights[6]; /* 24 24 */
	int m_numEntries; /* 48 4 */
	/* ../public/animationsystem/iblend2danimnodeinstance.h:20 */
	void Blend2DWeights_t(Blend2DWeights_t* );
};

// <0185CA31> ../public/animationsystem/iblend2danimnodeinstance.h:20
// variable: 1
void Blend2DWeights_t::Blend2DWeights_t()
{
	{
		int i; // 22
	}
} /* size: 0 */

// <0185CA0C> ../public/animationsystem/iblend2danimnodeinstance.h:20
// variable: 1
inline void Blend2DWeights_t::Blend2DWeights_t()
{
	{
		int i; // 22
	}
} /* size: 0 */

// <0107E056> ../public/animationsystem/iblend2danimnodeinstance.h:34
void IBlend2DAnimNodeInstance::IBlend2DAnimNodeInstance()
{
} /* size: 0 */

// <0107E03A> ../public/animationsystem/iblend2danimnodeinstance.h:34
inline void IBlend2DAnimNodeInstance::IBlend2DAnimNodeInstance()
{
} /* size: 0 */

// <0100BE7D> ../public/animationsystem/iblend2danimnodeinstance.h:34
// member functions: 34
// member variable: 1
// static member variable: 1
// vtable entries: 11
// class size: 8
class IBlend2DAnimNodeInstance {
	void IBlend2DAnimNodeInstance(IBlend2DAnimNodeInstance* , IBlend2DAnimNodeInstance& );
	void IBlend2DAnimNodeInstance(IBlend2DAnimNodeInstance* , const IBlend2DAnimNodeInstance& );
	void IBlend2DAnimNodeInstance(IBlend2DAnimNodeInstance* );
	void ~IBlend2DAnimNodeInstance(IBlend2DAnimNodeInstance* );
	int ()(void) * * _vptr.IBlend2DAnimNodeInstance; /* 0 8 */
private:
	static class CClassInfoT<IBlend2DAnimNodeInstance> m_classInfoIBlend2DAnimNodeInstance; /* 0 0 */
	/* ../public/animationsystem/iblend2danimnodeinstance.h:36 */
	const ClassID MyTypeID(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:9 */
	const CClassInfo& MyTypeInfo(void);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:9 */
	virtual const CClassInfo& GetTypeInfo(const IBlend2DAnimNodeInstance* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:9 */
	virtual void* CastToBase(IBlend2DAnimNodeInstance* , ClassID);
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:9 */
	virtual const void* CastToBase(const IBlend2DAnimNodeInstance* , ClassID);
	/* ../public/animationsystem/iblend2danimnodeinstance.h:42 */
	virtual bool IsManualModeEnabled(const IBlend2DAnimNodeInstance* );
	/* ../public/animationsystem/iblend2danimnodeinstance.h:43 */
	virtual void SetManualModeEnable(IBlend2DAnimNodeInstance* , bool);
	/* ../public/animationsystem/iblend2danimnodeinstance.h:46 */
	virtual Vector2D GetTargetBlendValue(const IBlend2DAnimNodeInstance* );
	/* ../public/animationsystem/iblend2danimnodeinstance.h:47 */
	virtual void SetTargetBlendValue(IBlend2DAnimNodeInstance* , const Vector2D& );
	/* ../public/animationsystem/iblend2danimnodeinstance.h:51 */
	virtual Vector2D GetCurrentBlendValue(const IBlend2DAnimNodeInstance* );
	/* ../public/animationsystem/iblend2danimnodeinstance.h:54 */
	virtual void SetCycle(IBlend2DAnimNodeInstance* , float);
	/* ../public/animationsystem/iblend2danimnodeinstance.h:57 */
	virtual void SetPlaybackRate(IBlend2DAnimNodeInstance* , float);
	/* ../public/animationsystem/iblend2danimnodeinstance.h:60 */
	virtual const Blend2DWeights_t& GetWeights(const IBlend2DAnimNodeInstance* );
	void IBlend2DAnimNodeInstance(class IBlend2DAnimNodeInstance *, class IBlend2DAnimNodeInstance &); /* linkage=_ZN24IBlend2DAnimNodeInstanceC4EOS_ */
	void IBlend2DAnimNodeInstance(class IBlend2DAnimNodeInstance *, const class IBlend2DAnimNodeInstance  &); /* linkage=_ZN24IBlend2DAnimNodeInstanceC4ERKS_ */
	void IBlend2DAnimNodeInstance(class IBlend2DAnimNodeInstance *); /* linkage=_ZN24IBlend2DAnimNodeInstanceC4Ev */
	void ~IBlend2DAnimNodeInstance(class IBlend2DAnimNodeInstance *); /* linkage=_ZN24IBlend2DAnimNodeInstanceD4Ev */
	const class ClassID  MyTypeID(void); /* linkage=_ZN24IBlend2DAnimNodeInstance8MyTypeIDEv */
	/* <1095414> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/blend2danimnodeinstance.cpp:9 */
	const class CClassInfo  & MyTypeInfo(void); /* linkage=_ZN24IBlend2DAnimNodeInstance10MyTypeInfoEv */
	virtual const class CClassInfo  & GetTypeInfo(const class IBlend2DAnimNodeInstance  *); /* linkage=_ZNK24IBlend2DAnimNodeInstance11GetTypeInfoEv */
	virtual void * CastToBase(class IBlend2DAnimNodeInstance *, class ClassID); /* linkage=_ZN24IBlend2DAnimNodeInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual const void  * CastToBase(const class IBlend2DAnimNodeInstance  *, class ClassID); /* linkage=_ZNK24IBlend2DAnimNodeInstance10CastToBaseEN10Reflection7ClassIDE */
	virtual bool IsManualModeEnabled(const class IBlend2DAnimNodeInstance  *); /* linkage=_ZNK24IBlend2DAnimNodeInstance19IsManualModeEnabledEv */
	virtual void SetManualModeEnable(class IBlend2DAnimNodeInstance *, bool); /* linkage=_ZN24IBlend2DAnimNodeInstance19SetManualModeEnableEb */
	virtual class Vector2D GetTargetBlendValue(const class IBlend2DAnimNodeInstance  *); /* linkage=_ZNK24IBlend2DAnimNodeInstance19GetTargetBlendValueEv */
	virtual void SetTargetBlendValue(class IBlend2DAnimNodeInstance *, const class Vector2D  &); /* linkage=_ZN24IBlend2DAnimNodeInstance19SetTargetBlendValueERK8Vector2D */
	virtual class Vector2D GetCurrentBlendValue(const class IBlend2DAnimNodeInstance  *); /* linkage=_ZNK24IBlend2DAnimNodeInstance20GetCurrentBlendValueEv */
	virtual void SetCycle(class IBlend2DAnimNodeInstance *, float); /* linkage=_ZN24IBlend2DAnimNodeInstance8SetCycleEf */
	virtual void SetPlaybackRate(class IBlend2DAnimNodeInstance *, float); /* linkage=_ZN24IBlend2DAnimNodeInstance15SetPlaybackRateEf */
	virtual const class Blend2DWeights_t  & GetWeights(const class IBlend2DAnimNodeInstance  *); /* linkage=_ZNK24IBlend2DAnimNodeInstance10GetWeightsEv */
};

// <01085225> ../public/animationsystem/iblend2danimnodeinstance.h:36
// variables: 2
inline void MyTypeID(void)
{
	ClassID sID; // 36
	const char   __PRETTY_FUNCTION__; // 21289
} /* size: 0, variables: 2 */

