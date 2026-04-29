
//
// animgraph/animnodeinstancefactory.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 88
//	classes: 2
//

// <00E72F66> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:14
void CAnimNodeInstanceFactory::~CAnimNodeInstanceFactory()
{
} /* size: 0 */

// <00E72F4A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:14
inline void CAnimNodeInstanceFactory::~CAnimNodeInstanceFactory()
{
} /* size: 0 */

// <00DDE63C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:14
// member functions: 8
// member variable: 1
// class size: 32
class CAnimNodeInstanceFactory {
	struct CFactoryMaker {
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:17 */
	void CAnimNodeInstanceFactory(CAnimNodeInstanceFactory* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:19 */
	CAnimNodeInstanceBasePtr CreateNodeInstance(CAnimNodeInstanceFactory* , const CAnimNodeBaseConstPtr& , const CAnimUpdateNodeBase* , const CAnimGraphUpdateContextPtr& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:21 */
	ClassID FindNodeTypeForInstanceType(const CAnimNodeInstanceFactory* , ClassID);
private:
	CUtlHashtable<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>, DefaultHashFunctor<Reflection::ClassID>, DefaultEqualFunctor<Reflection::ClassID>, undefined_t, CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor> >, int> > m_makers; /* 0 32 */
	void ~CAnimNodeInstanceFactory(CAnimNodeInstanceFactory* );
	void CAnimNodeInstanceFactory(class CAnimNodeInstanceFactory *); /* linkage=_ZN24CAnimNodeInstanceFactoryC4Ev */
	CAnimNodeInstanceBasePtr CreateNodeInstance(class CAnimNodeInstanceFactory *, const CAnimNodeBaseConstPtr  &, const class CAnimUpdateNodeBase  *, const CAnimGraphUpdateContextPtr  &); /* linkage=_ZN24CAnimNodeInstanceFactory18CreateNodeInstanceERK9CSmartPtrIK13CAnimNodeBase17CRefCountAccessorEPK19CAnimUpdateNodeBaseRKS0_I23CAnimGraphUpdateContextS3_E */
	class ClassID FindNodeTypeForInstanceType(const class CAnimNodeInstanceFactory  *, class ClassID); /* linkage=_ZNK24CAnimNodeInstanceFactory27FindNodeTypeForInstanceTypeEN10Reflection7ClassIDE */
	void ~CAnimNodeInstanceFactory(class CAnimNodeInstanceFactory *); /* linkage=_ZN24CAnimNodeInstanceFactoryD4Ev */
};

// <00EFB0DF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:14
// member functions: 86
// member variable: 1
// vtable entries: 3
// class size: 32
class CAnimNodeInstanceFactory {
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:26 */
	struct CFactoryMaker : public CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > {
	public:
		/* class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
		void CFactoryMaker(CFactoryMaker* , CFactoryMaker& );
		void CFactoryMaker(CFactoryMaker* , const CFactoryMaker& );
		void CFactoryMaker(CFactoryMaker* );
		/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:28 */
		virtual CAnimNodeInstanceBasePtr Make(const CFactoryMaker* , const CAnimNodeBaseConstPtr& , const CAnimUpdateNodeBase* , const CAnimGraphUpdateContextPtr& );
		/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:29 */
		virtual ClassID GetTypeID(const CFactoryMaker* );
		/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:30 */
		virtual bool IsDerivedFrom(const CFactoryMaker* , ClassID);
		virtual void ~CFactoryMaker(CFactoryMaker* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:17 */
	void CAnimNodeInstanceFactory(CAnimNodeInstanceFactory* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:19 */
	CAnimNodeInstanceBasePtr CreateNodeInstance(CAnimNodeInstanceFactory* , const CAnimNodeBaseConstPtr& , const CAnimUpdateNodeBase* , const CAnimGraphUpdateContextPtr& );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:21 */
	ClassID FindNodeTypeForInstanceType(const CAnimNodeInstanceFactory* , ClassID);
private:
	CUtlHashtable<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor>, DefaultHashFunctor<Reflection::ClassID>, DefaultEqualFunctor<Reflection::ClassID>, undefined_t, CUtlMemory<CUtlHashtableEntry<Reflection::ClassID, CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor> >, int> > m_makers; /* 0 32 */
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:32 */
	typedef struct CSmartPtr<CAnimNodeInstanceFactory::CFactoryMaker, CRefCountAccessor> CFactoryMakerPtr;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37 */
	struct CFactoryMakerT<CBlend2DAnimNodeInstance> : public CFactoryMaker {
	public:
		/* struct CFactoryMaker <ancestor>; */ /* 0 16 */
		void CFactoryMakerT(CFactoryMakerT<CBlend2DAnimNodeInstance>* , CFactoryMakerT<CBlend2DAnimNodeInstance>& );
		void CFactoryMakerT(CFactoryMakerT<CBlend2DAnimNodeInstance>* , const CFactoryMakerT<CBlend2DAnimNodeInstance>& );
		void CFactoryMakerT(CFactoryMakerT<CBlend2DAnimNodeInstance>* );
		/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:39 */
		virtual CAnimNodeInstanceBasePtr Make(const CFactoryMakerT<CBlend2DAnimNodeInstance>* , const CAnimNodeBaseConstPtr& , const CAnimUpdateNodeBase* , const CAnimGraphUpdateContextPtr& );
		/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:44 */
		virtual ClassID GetTypeID(const CFactoryMakerT<CBlend2DAnimNodeInstance>* );
		/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:49 */
		virtual bool IsDerivedFrom(const CFactoryMakerT<CBlend2DAnimNodeInstance>* , ClassID);
		virtual void ~CFactoryMakerT(CFactoryMakerT<CBlend2DAnimNodeInstance>* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37 */
	struct CFactoryMakerT<CInputStreamAnimNodeInstance> : public CFactoryMaker {
	public:
		/* struct CFactoryMaker <ancestor>; */ /* 0 16 */
		void CFactoryMakerT(CFactoryMakerT<CInputStreamAnimNodeInstance>* , CFactoryMakerT<CInputStreamAnimNodeInstance>& );
		void CFactoryMakerT(CFactoryMakerT<CInputStreamAnimNodeInstance>* , const CFactoryMakerT<CInputStreamAnimNodeInstance>& );
		void CFactoryMakerT(CFactoryMakerT<CInputStreamAnimNodeInstance>* );
		/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:39 */
		virtual CAnimNodeInstanceBasePtr Make(const CFactoryMakerT<CInputStreamAnimNodeInstance>* , const CAnimNodeBaseConstPtr& , const CAnimUpdateNodeBase* , const CAnimGraphUpdateContextPtr& );
		/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:44 */
		virtual ClassID GetTypeID(const CFactoryMakerT<CInputStreamAnimNodeInstance>* );
		/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:49 */
		virtual bool IsDerivedFrom(const CFactoryMakerT<CInputStreamAnimNodeInstance>* , ClassID);
		virtual void ~CFactoryMakerT(CFactoryMakerT<CInputStreamAnimNodeInstance>* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37 */
	struct CFactoryMakerT<CSolveIKChainAnimNodeInstance> : public CFactoryMaker {
	public:
		/* struct CFactoryMaker <ancestor>; */ /* 0 16 */
		void CFactoryMakerT(CFactoryMakerT<CSolveIKChainAnimNodeInstance>* , CFactoryMakerT<CSolveIKChainAnimNodeInstance>& );
		void CFactoryMakerT(CFactoryMakerT<CSolveIKChainAnimNodeInstance>* , const CFactoryMakerT<CSolveIKChainAnimNodeInstance>& );
		void CFactoryMakerT(CFactoryMakerT<CSolveIKChainAnimNodeInstance>* );
		/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:39 */
		virtual CAnimNodeInstanceBasePtr Make(const CFactoryMakerT<CSolveIKChainAnimNodeInstance>* , const CAnimNodeBaseConstPtr& , const CAnimUpdateNodeBase* , const CAnimGraphUpdateContextPtr& );
		/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:44 */
		virtual ClassID GetTypeID(const CFactoryMakerT<CSolveIKChainAnimNodeInstance>* );
		/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:49 */
		virtual bool IsDerivedFrom(const CFactoryMakerT<CSolveIKChainAnimNodeInstance>* , ClassID);
		virtual void ~CFactoryMakerT(CFactoryMakerT<CSolveIKChainAnimNodeInstance>* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37 */
	struct CFactoryMakerT<CMotionMatchingAnimNodeInstance> : public CFactoryMaker {
	public:
		/* struct CFactoryMaker <ancestor>; */ /* 0 16 */
		void CFactoryMakerT(CFactoryMakerT<CMotionMatchingAnimNodeInstance>* , CFactoryMakerT<CMotionMatchingAnimNodeInstance>& );
		void CFactoryMakerT(CFactoryMakerT<CMotionMatchingAnimNodeInstance>* , const CFactoryMakerT<CMotionMatchingAnimNodeInstance>& );
		void CFactoryMakerT(CFactoryMakerT<CMotionMatchingAnimNodeInstance>* );
		/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:39 */
		virtual CAnimNodeInstanceBasePtr Make(const CFactoryMakerT<CMotionMatchingAnimNodeInstance>* , const CAnimNodeBaseConstPtr& , const CAnimUpdateNodeBase* , const CAnimGraphUpdateContextPtr& );
		/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:44 */
		virtual ClassID GetTypeID(const CFactoryMakerT<CMotionMatchingAnimNodeInstance>* );
		/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:49 */
		virtual bool IsDerivedFrom(const CFactoryMakerT<CMotionMatchingAnimNodeInstance>* , ClassID);
		virtual void ~CFactoryMakerT(CFactoryMakerT<CMotionMatchingAnimNodeInstance>* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37 */
	struct CFactoryMakerT<CFootLockAnimNodeInstance> : public CFactoryMaker {
	public:
		/* struct CFactoryMaker <ancestor>; */ /* 0 16 */
		void CFactoryMakerT(CFactoryMakerT<CFootLockAnimNodeInstance>* , CFactoryMakerT<CFootLockAnimNodeInstance>& );
		void CFactoryMakerT(CFactoryMakerT<CFootLockAnimNodeInstance>* , const CFactoryMakerT<CFootLockAnimNodeInstance>& );
		void CFactoryMakerT(CFactoryMakerT<CFootLockAnimNodeInstance>* );
		/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:39 */
		virtual CAnimNodeInstanceBasePtr Make(const CFactoryMakerT<CFootLockAnimNodeInstance>* , const CAnimNodeBaseConstPtr& , const CAnimUpdateNodeBase* , const CAnimGraphUpdateContextPtr& );
		/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:44 */
		virtual ClassID GetTypeID(const CFactoryMakerT<CFootLockAnimNodeInstance>* );
		/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:49 */
		virtual bool IsDerivedFrom(const CFactoryMakerT<CFootLockAnimNodeInstance>* , ClassID);
		virtual void ~CFactoryMakerT(CFactoryMakerT<CFootLockAnimNodeInstance>* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37 */
	struct CFactoryMakerT<CStateMachineAnimNodeInstance> : public CFactoryMaker {
	public:
		/* struct CFactoryMaker <ancestor>; */ /* 0 16 */
		void CFactoryMakerT(CFactoryMakerT<CStateMachineAnimNodeInstance>* , CFactoryMakerT<CStateMachineAnimNodeInstance>& );
		void CFactoryMakerT(CFactoryMakerT<CStateMachineAnimNodeInstance>* , const CFactoryMakerT<CStateMachineAnimNodeInstance>& );
		void CFactoryMakerT(CFactoryMakerT<CStateMachineAnimNodeInstance>* );
		/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:39 */
		virtual CAnimNodeInstanceBasePtr Make(const CFactoryMakerT<CStateMachineAnimNodeInstance>* , const CAnimNodeBaseConstPtr& , const CAnimUpdateNodeBase* , const CAnimGraphUpdateContextPtr& );
		/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:44 */
		virtual ClassID GetTypeID(const CFactoryMakerT<CStateMachineAnimNodeInstance>* );
		/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:49 */
		virtual bool IsDerivedFrom(const CFactoryMakerT<CStateMachineAnimNodeInstance>* , ClassID);
		virtual void ~CFactoryMakerT(CFactoryMakerT<CStateMachineAnimNodeInstance>* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37 */
	struct CFactoryMakerT<CSequenceAnimNodeInstance> : public CFactoryMaker {
	public:
		/* struct CFactoryMaker <ancestor>; */ /* 0 16 */
		void CFactoryMakerT(CFactoryMakerT<CSequenceAnimNodeInstance>* , CFactoryMakerT<CSequenceAnimNodeInstance>& );
		void CFactoryMakerT(CFactoryMakerT<CSequenceAnimNodeInstance>* , const CFactoryMakerT<CSequenceAnimNodeInstance>& );
		void CFactoryMakerT(CFactoryMakerT<CSequenceAnimNodeInstance>* );
		/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:39 */
		virtual CAnimNodeInstanceBasePtr Make(const CFactoryMakerT<CSequenceAnimNodeInstance>* , const CAnimNodeBaseConstPtr& , const CAnimUpdateNodeBase* , const CAnimGraphUpdateContextPtr& );
		/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:44 */
		virtual ClassID GetTypeID(const CFactoryMakerT<CSequenceAnimNodeInstance>* );
		/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:49 */
		virtual bool IsDerivedFrom(const CFactoryMakerT<CSequenceAnimNodeInstance>* , ClassID);
		virtual void ~CFactoryMakerT(CFactoryMakerT<CSequenceAnimNodeInstance>* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37 */
	struct CFactoryMakerT<CDirectPlaybackAnimNodeInstance> : public CFactoryMaker {
	public:
		/* struct CFactoryMaker <ancestor>; */ /* 0 16 */
		void CFactoryMakerT(CFactoryMakerT<CDirectPlaybackAnimNodeInstance>* , CFactoryMakerT<CDirectPlaybackAnimNodeInstance>& );
		void CFactoryMakerT(CFactoryMakerT<CDirectPlaybackAnimNodeInstance>* , const CFactoryMakerT<CDirectPlaybackAnimNodeInstance>& );
		void CFactoryMakerT(CFactoryMakerT<CDirectPlaybackAnimNodeInstance>* );
		/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:39 */
		virtual CAnimNodeInstanceBasePtr Make(const CFactoryMakerT<CDirectPlaybackAnimNodeInstance>* , const CAnimNodeBaseConstPtr& , const CAnimUpdateNodeBase* , const CAnimGraphUpdateContextPtr& );
		/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:44 */
		virtual ClassID GetTypeID(const CFactoryMakerT<CDirectPlaybackAnimNodeInstance>* );
		/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:49 */
		virtual bool IsDerivedFrom(const CFactoryMakerT<CDirectPlaybackAnimNodeInstance>* , ClassID);
		virtual void ~CFactoryMakerT(CFactoryMakerT<CDirectPlaybackAnimNodeInstance>* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37 */
	struct CFactoryMakerT<CChoreoAnimNodeInstance> : public CFactoryMaker {
	public:
		/* struct CFactoryMaker <ancestor>; */ /* 0 16 */
		void CFactoryMakerT(CFactoryMakerT<CChoreoAnimNodeInstance>* , CFactoryMakerT<CChoreoAnimNodeInstance>& );
		void CFactoryMakerT(CFactoryMakerT<CChoreoAnimNodeInstance>* , const CFactoryMakerT<CChoreoAnimNodeInstance>& );
		void CFactoryMakerT(CFactoryMakerT<CChoreoAnimNodeInstance>* );
		/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:39 */
		virtual CAnimNodeInstanceBasePtr Make(const CFactoryMakerT<CChoreoAnimNodeInstance>* , const CAnimNodeBaseConstPtr& , const CAnimUpdateNodeBase* , const CAnimGraphUpdateContextPtr& );
		/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:44 */
		virtual ClassID GetTypeID(const CFactoryMakerT<CChoreoAnimNodeInstance>* );
		/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:49 */
		virtual bool IsDerivedFrom(const CFactoryMakerT<CChoreoAnimNodeInstance>* , ClassID);
		virtual void ~CFactoryMakerT(CFactoryMakerT<CChoreoAnimNodeInstance>* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:60 */
	void RegisterType<CBlend2DAnimNode, CBlend2DAnimNodeInstance>(CAnimNodeInstanceFactory* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:60 */
	void RegisterType<CInputStreamAnimNode, CInputStreamAnimNodeInstance>(CAnimNodeInstanceFactory* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:60 */
	void RegisterType<CSolveIKChainAnimNode, CSolveIKChainAnimNodeInstance>(CAnimNodeInstanceFactory* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:60 */
	void RegisterType<CMotionMatchingAnimNode, CMotionMatchingAnimNodeInstance>(CAnimNodeInstanceFactory* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:60 */
	void RegisterType<CFootLockAnimNode, CFootLockAnimNodeInstance>(CAnimNodeInstanceFactory* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:60 */
	void RegisterType<CStateMachineAnimNode, CStateMachineAnimNodeInstance>(CAnimNodeInstanceFactory* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:60 */
	void RegisterType<CSequenceAnimNode, CSequenceAnimNodeInstance>(CAnimNodeInstanceFactory* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:60 */
	void RegisterType<CDirectPlaybackAnimNode, CDirectPlaybackAnimNodeInstance>(CAnimNodeInstanceFactory* );
	/* _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:60 */
	void RegisterType<CChoreoAnimNode, CChoreoAnimNodeInstance>(CAnimNodeInstanceFactory* );
	void CAnimNodeInstanceFactory(class CAnimNodeInstanceFactory *); /* linkage=_ZN24CAnimNodeInstanceFactoryC4Ev */
	CAnimNodeInstanceBasePtr CreateNodeInstance(class CAnimNodeInstanceFactory *, const CAnimNodeBaseConstPtr  &, const class CAnimUpdateNodeBase  *, const CAnimGraphUpdateContextPtr  &); /* linkage=_ZN24CAnimNodeInstanceFactory18CreateNodeInstanceERK9CSmartPtrIK13CAnimNodeBase17CRefCountAccessorEPK19CAnimUpdateNodeBaseRKS0_I23CAnimGraphUpdateContextS3_E */
	class ClassID FindNodeTypeForInstanceType(const class CAnimNodeInstanceFactory  *, class ClassID); /* linkage=_ZNK24CAnimNodeInstanceFactory27FindNodeTypeForInstanceTypeEN10Reflection7ClassIDE */
	void ~CAnimNodeInstanceFactory(class CAnimNodeInstanceFactory *); /* linkage=_ZN24CAnimNodeInstanceFactoryD4Ev */
};

// <00DF50F1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:17
void CAnimNodeInstanceFactory::CAnimNodeInstanceFactory()
{
} /* size: 0 */

// <00F5F4B1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:26
void CFactoryMaker::CFactoryMaker()
{
} /* size: 0 */

// <00F5F495> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:26
inline void CFactoryMaker::CFactoryMaker()
{
} /* size: 0 */

// <00F5F47E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:26
void CFactoryMaker::~CFactoryMaker()
{
} /* size: 0 */

// <00F5F44B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:26
inline void CFactoryMaker::~CFactoryMaker()
{
} /* size: 0 */

// <00F5F434> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37
void CFactoryMakerT<CChoreoAnimNodeInstance>::CFactoryMakerT()
{
} /* size: 0 */

// <00F5F418> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37
inline void CFactoryMakerT<CChoreoAnimNodeInstance>::CFactoryMakerT()
{
} /* size: 0 */

// <00F5F3CA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37
void CFactoryMakerT<CDirectPlaybackAnimNodeInstance>::CFactoryMakerT()
{
} /* size: 0 */

// <00F5F3AE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37
inline void CFactoryMakerT<CDirectPlaybackAnimNodeInstance>::CFactoryMakerT()
{
} /* size: 0 */

// <00F5F360> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37
void CFactoryMakerT<CSequenceAnimNodeInstance>::CFactoryMakerT()
{
} /* size: 0 */

// <00F5F344> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37
inline void CFactoryMakerT<CSequenceAnimNodeInstance>::CFactoryMakerT()
{
} /* size: 0 */

// <00F5F2F6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37
void CFactoryMakerT<CStateMachineAnimNodeInstance>::CFactoryMakerT()
{
} /* size: 0 */

// <00F5F2DA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37
inline void CFactoryMakerT<CStateMachineAnimNodeInstance>::CFactoryMakerT()
{
} /* size: 0 */

// <00F5F28C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37
void CFactoryMakerT<CFootLockAnimNodeInstance>::CFactoryMakerT()
{
} /* size: 0 */

// <00F5F270> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37
inline void CFactoryMakerT<CFootLockAnimNodeInstance>::CFactoryMakerT()
{
} /* size: 0 */

// <00F5F222> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37
void CFactoryMakerT<CMotionMatchingAnimNodeInstance>::CFactoryMakerT()
{
} /* size: 0 */

// <00F5F206> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37
inline void CFactoryMakerT<CMotionMatchingAnimNodeInstance>::CFactoryMakerT()
{
} /* size: 0 */

// <00F5F1B8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37
void CFactoryMakerT<CSolveIKChainAnimNodeInstance>::CFactoryMakerT()
{
} /* size: 0 */

// <00F5F19C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37
inline void CFactoryMakerT<CSolveIKChainAnimNodeInstance>::CFactoryMakerT()
{
} /* size: 0 */

// <00F5F14E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37
void CFactoryMakerT<CInputStreamAnimNodeInstance>::CFactoryMakerT()
{
} /* size: 0 */

// <00F5F132> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37
inline void CFactoryMakerT<CInputStreamAnimNodeInstance>::CFactoryMakerT()
{
} /* size: 0 */

// <00F5F0E4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37
void CFactoryMakerT<CBlend2DAnimNodeInstance>::CFactoryMakerT()
{
} /* size: 0 */

// <00F5F0C8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37
inline void CFactoryMakerT<CBlend2DAnimNodeInstance>::CFactoryMakerT()
{
} /* size: 0 */

// <00F403F3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37
// function calls: 3
void CFactoryMakerT<CBlend2DAnimNodeInstance>::~CFactoryMakerT()
{
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 26
	CFactoryMaker::~CFactoryMaker(); // 37
} /* size: 5, inline expansions: 3 (0 bytes) */

// <00F402DF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37
// function calls: 4
void CFactoryMakerT<CBlend2DAnimNodeInstance>::~CFactoryMakerT()
{
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 26
	CFactoryMaker::~CFactoryMaker(); // 37
	CFactoryMakerT<CBlend2DAnimNodeInstance>::~CFactoryMakerT(); // 37
} /* size: 14, inline expansions: 4 (0 bytes) */

// <00F402C3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37
inline void CFactoryMakerT<CBlend2DAnimNodeInstance>::~CFactoryMakerT()
{
} /* size: 0 */

// <00F40204> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37
// function calls: 3
void CFactoryMakerT<CInputStreamAnimNodeInstance>::~CFactoryMakerT()
{
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 26
	CFactoryMaker::~CFactoryMaker(); // 37
} /* size: 5, inline expansions: 3 (0 bytes) */

// <00F400F0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37
// function calls: 4
void CFactoryMakerT<CInputStreamAnimNodeInstance>::~CFactoryMakerT()
{
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 26
	CFactoryMaker::~CFactoryMaker(); // 37
	CFactoryMakerT<CInputStreamAnimNodeInstance>::~CFactoryMakerT(); // 37
} /* size: 14, inline expansions: 4 (0 bytes) */

// <00F400D4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37
inline void CFactoryMakerT<CInputStreamAnimNodeInstance>::~CFactoryMakerT()
{
} /* size: 0 */

// <00F40015> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37
// function calls: 3
void CFactoryMakerT<CSolveIKChainAnimNodeInstance>::~CFactoryMakerT()
{
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 26
	CFactoryMaker::~CFactoryMaker(); // 37
} /* size: 5, inline expansions: 3 (0 bytes) */

// <00F3FF01> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37
// function calls: 4
void CFactoryMakerT<CSolveIKChainAnimNodeInstance>::~CFactoryMakerT()
{
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 26
	CFactoryMaker::~CFactoryMaker(); // 37
	CFactoryMakerT<CSolveIKChainAnimNodeInstance>::~CFactoryMakerT(); // 37
} /* size: 14, inline expansions: 4 (0 bytes) */

// <00F3FEE5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37
inline void CFactoryMakerT<CSolveIKChainAnimNodeInstance>::~CFactoryMakerT()
{
} /* size: 0 */

// <00F3FE26> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37
// function calls: 3
void CFactoryMakerT<CMotionMatchingAnimNodeInstance>::~CFactoryMakerT()
{
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 26
	CFactoryMaker::~CFactoryMaker(); // 37
} /* size: 5, inline expansions: 3 (0 bytes) */

// <00F3FD12> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37
// function calls: 4
void CFactoryMakerT<CMotionMatchingAnimNodeInstance>::~CFactoryMakerT()
{
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 26
	CFactoryMaker::~CFactoryMaker(); // 37
	CFactoryMakerT<CMotionMatchingAnimNodeInstance>::~CFactoryMakerT(); // 37
} /* size: 14, inline expansions: 4 (0 bytes) */

// <00F3FCF6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37
inline void CFactoryMakerT<CMotionMatchingAnimNodeInstance>::~CFactoryMakerT()
{
} /* size: 0 */

// <00F3FC37> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37
// function calls: 3
void CFactoryMakerT<CFootLockAnimNodeInstance>::~CFactoryMakerT()
{
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 26
	CFactoryMaker::~CFactoryMaker(); // 37
} /* size: 5, inline expansions: 3 (0 bytes) */

// <00F3FB23> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37
// function calls: 4
void CFactoryMakerT<CFootLockAnimNodeInstance>::~CFactoryMakerT()
{
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 26
	CFactoryMaker::~CFactoryMaker(); // 37
	CFactoryMakerT<CFootLockAnimNodeInstance>::~CFactoryMakerT(); // 37
} /* size: 14, inline expansions: 4 (0 bytes) */

// <00F3FB07> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37
inline void CFactoryMakerT<CFootLockAnimNodeInstance>::~CFactoryMakerT()
{
} /* size: 0 */

// <00F3FA48> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37
// function calls: 3
void CFactoryMakerT<CStateMachineAnimNodeInstance>::~CFactoryMakerT()
{
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 26
	CFactoryMaker::~CFactoryMaker(); // 37
} /* size: 5, inline expansions: 3 (0 bytes) */

// <00F3F934> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37
// function calls: 4
void CFactoryMakerT<CStateMachineAnimNodeInstance>::~CFactoryMakerT()
{
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 26
	CFactoryMaker::~CFactoryMaker(); // 37
	CFactoryMakerT<CStateMachineAnimNodeInstance>::~CFactoryMakerT(); // 37
} /* size: 14, inline expansions: 4 (0 bytes) */

// <00F3F918> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37
inline void CFactoryMakerT<CStateMachineAnimNodeInstance>::~CFactoryMakerT()
{
} /* size: 0 */

// <00F3F859> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37
// function calls: 3
void CFactoryMakerT<CSequenceAnimNodeInstance>::~CFactoryMakerT()
{
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 26
	CFactoryMaker::~CFactoryMaker(); // 37
} /* size: 5, inline expansions: 3 (0 bytes) */

// <00F3F745> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37
// function calls: 4
void CFactoryMakerT<CSequenceAnimNodeInstance>::~CFactoryMakerT()
{
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 26
	CFactoryMaker::~CFactoryMaker(); // 37
	CFactoryMakerT<CSequenceAnimNodeInstance>::~CFactoryMakerT(); // 37
} /* size: 14, inline expansions: 4 (0 bytes) */

// <00F3F729> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37
inline void CFactoryMakerT<CSequenceAnimNodeInstance>::~CFactoryMakerT()
{
} /* size: 0 */

// <00F3F66A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37
// function calls: 3
void CFactoryMakerT<CDirectPlaybackAnimNodeInstance>::~CFactoryMakerT()
{
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 26
	CFactoryMaker::~CFactoryMaker(); // 37
} /* size: 5, inline expansions: 3 (0 bytes) */

// <00F3F556> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37
// function calls: 4
void CFactoryMakerT<CDirectPlaybackAnimNodeInstance>::~CFactoryMakerT()
{
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 26
	CFactoryMaker::~CFactoryMaker(); // 37
	CFactoryMakerT<CDirectPlaybackAnimNodeInstance>::~CFactoryMakerT(); // 37
} /* size: 14, inline expansions: 4 (0 bytes) */

// <00F3F53A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37
inline void CFactoryMakerT<CDirectPlaybackAnimNodeInstance>::~CFactoryMakerT()
{
} /* size: 0 */

// <00F3F47B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37
// function calls: 3
void CFactoryMakerT<CChoreoAnimNodeInstance>::~CFactoryMakerT()
{
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 26
	CFactoryMaker::~CFactoryMaker(); // 37
} /* size: 5, inline expansions: 3 (0 bytes) */

// <00F3F367> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37
// function calls: 4
void CFactoryMakerT<CChoreoAnimNodeInstance>::~CFactoryMakerT()
{
	CMutableRefCountBase<true, CRefMT>::~CMutableRefCountBase(); // 342
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::~CMutableRefCounted(); // 26
	CFactoryMaker::~CFactoryMaker(); // 37
	CFactoryMakerT<CChoreoAnimNodeInstance>::~CFactoryMakerT(); // 37
} /* size: 14, inline expansions: 4 (0 bytes) */

// <00F3F34B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:37
inline void CFactoryMakerT<CChoreoAnimNodeInstance>::~CFactoryMakerT()
{
} /* size: 0 */

// <00F3711C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:39
// function calls: 13
void CFactoryMakerT<CBlend2DAnimNodeInstance>::Make(const CAnimNodeBaseConstPtr& pSrcNode, const CAnimUpdateNodeBase* pUpdateNode, const CAnimGraphUpdateContextPtr& pContext)
{
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimNodeInstanceBase>(CAnimNodeInstanceBase* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimNodeInstanceBase>(CAnimNodeInstanceBase* pObj); // 370
	CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>::operator=(
			CAnimNodeInstanceBase* pObj);  // 319
	CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>::CSmartPtr(
			CAnimNodeInstanceBase* pObj);  // 41
} /* size: 125, inline expansions: 13 (172 bytes) */

// <00F36CBA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:39
// function calls: 13
void CFactoryMakerT<CInputStreamAnimNodeInstance>::Make(const CAnimNodeBaseConstPtr& pSrcNode, const CAnimUpdateNodeBase* pUpdateNode, const CAnimGraphUpdateContextPtr& pContext)
{
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimNodeInstanceBase>(CAnimNodeInstanceBase* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimNodeInstanceBase>(CAnimNodeInstanceBase* pObj); // 370
	CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>::operator=(
			CAnimNodeInstanceBase* pObj);  // 319
	CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>::CSmartPtr(
			CAnimNodeInstanceBase* pObj);  // 41
} /* size: 125, inline expansions: 13 (172 bytes) */

// <00F36858> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:39
// function calls: 13
void CFactoryMakerT<CSolveIKChainAnimNodeInstance>::Make(const CAnimNodeBaseConstPtr& pSrcNode, const CAnimUpdateNodeBase* pUpdateNode, const CAnimGraphUpdateContextPtr& pContext)
{
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimNodeInstanceBase>(CAnimNodeInstanceBase* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimNodeInstanceBase>(CAnimNodeInstanceBase* pObj); // 370
	CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>::operator=(
			CAnimNodeInstanceBase* pObj);  // 319
	CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>::CSmartPtr(
			CAnimNodeInstanceBase* pObj);  // 41
} /* size: 125, inline expansions: 13 (172 bytes) */

// <00F363F6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:39
// function calls: 13
void CFactoryMakerT<CMotionMatchingAnimNodeInstance>::Make(const CAnimNodeBaseConstPtr& pSrcNode, const CAnimUpdateNodeBase* pUpdateNode, const CAnimGraphUpdateContextPtr& pContext)
{
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimNodeInstanceBase>(CAnimNodeInstanceBase* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimNodeInstanceBase>(CAnimNodeInstanceBase* pObj); // 370
	CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>::operator=(
			CAnimNodeInstanceBase* pObj);  // 319
	CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>::CSmartPtr(
			CAnimNodeInstanceBase* pObj);  // 41
} /* size: 125, inline expansions: 13 (172 bytes) */

// <00F35F94> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:39
// function calls: 13
void CFactoryMakerT<CFootLockAnimNodeInstance>::Make(const CAnimNodeBaseConstPtr& pSrcNode, const CAnimUpdateNodeBase* pUpdateNode, const CAnimGraphUpdateContextPtr& pContext)
{
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimNodeInstanceBase>(CAnimNodeInstanceBase* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimNodeInstanceBase>(CAnimNodeInstanceBase* pObj); // 370
	CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>::operator=(
			CAnimNodeInstanceBase* pObj);  // 319
	CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>::CSmartPtr(
			CAnimNodeInstanceBase* pObj);  // 41
} /* size: 125, inline expansions: 13 (172 bytes) */

// <00F35B32> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:39
// function calls: 13
void CFactoryMakerT<CStateMachineAnimNodeInstance>::Make(const CAnimNodeBaseConstPtr& pSrcNode, const CAnimUpdateNodeBase* pUpdateNode, const CAnimGraphUpdateContextPtr& pContext)
{
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimNodeInstanceBase>(CAnimNodeInstanceBase* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimNodeInstanceBase>(CAnimNodeInstanceBase* pObj); // 370
	CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>::operator=(
			CAnimNodeInstanceBase* pObj);  // 319
	CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>::CSmartPtr(
			CAnimNodeInstanceBase* pObj);  // 41
} /* size: 125, inline expansions: 13 (172 bytes) */

// <00F356D0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:39
// function calls: 13
void CFactoryMakerT<CSequenceAnimNodeInstance>::Make(const CAnimNodeBaseConstPtr& pSrcNode, const CAnimUpdateNodeBase* pUpdateNode, const CAnimGraphUpdateContextPtr& pContext)
{
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimNodeInstanceBase>(CAnimNodeInstanceBase* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimNodeInstanceBase>(CAnimNodeInstanceBase* pObj); // 370
	CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>::operator=(
			CAnimNodeInstanceBase* pObj);  // 319
	CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>::CSmartPtr(
			CAnimNodeInstanceBase* pObj);  // 41
} /* size: 125, inline expansions: 13 (172 bytes) */

// <00F3526E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:39
// function calls: 13
void CFactoryMakerT<CDirectPlaybackAnimNodeInstance>::Make(const CAnimNodeBaseConstPtr& pSrcNode, const CAnimUpdateNodeBase* pUpdateNode, const CAnimGraphUpdateContextPtr& pContext)
{
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimNodeInstanceBase>(CAnimNodeInstanceBase* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimNodeInstanceBase>(CAnimNodeInstanceBase* pObj); // 370
	CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>::operator=(
			CAnimNodeInstanceBase* pObj);  // 319
	CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>::CSmartPtr(
			CAnimNodeInstanceBase* pObj);  // 41
} /* size: 125, inline expansions: 13 (172 bytes) */

// <00F34E0C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:39
// function calls: 13
void CFactoryMakerT<CChoreoAnimNodeInstance>::Make(const CAnimNodeBaseConstPtr& pSrcNode, const CAnimUpdateNodeBase* pUpdateNode, const CAnimGraphUpdateContextPtr& pContext)
{
	ThreadInterlockedIncrement(volatile int32* p); // 158
	Increment(int* p); // 290
	CMutableRefCountBase<true, CRefMT>::DoAddRef(); // 343
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::AddRef(); // 21
	AddRef<CAnimNodeInstanceBase>(CAnimNodeInstanceBase* pObj); // 366
	ThreadInterlockedDecrement(volatile int32* p); // 159
	Decrement(int* p); // 295
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 293
	CMutableRefCountBase<true, CRefMT>::DoRelease(); // 344
	CMutableRefCounted<CMutableRefCountBase<true, CRefMT> >::Release(); // 27
	Release<CAnimNodeInstanceBase>(CAnimNodeInstanceBase* pObj); // 370
	CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>::operator=(
			CAnimNodeInstanceBase* pObj);  // 319
	CSmartPtr<CAnimNodeInstanceBase, CRefCountAccessor>::CSmartPtr(
			CAnimNodeInstanceBase* pObj);  // 41
} /* size: 125, inline expansions: 13 (172 bytes) */

// <00F3706A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:44
// function call: 1
void CFactoryMakerT<CBlend2DAnimNodeInstance>::GetTypeID()
{
	MyTypeID(void); // 46
} /* size: 89, inline expansions: 1 (73 bytes) */

// <00F36C08> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:44
// function call: 1
void CFactoryMakerT<CInputStreamAnimNodeInstance>::GetTypeID()
{
	MyTypeID(void); // 46
} /* size: 89, inline expansions: 1 (73 bytes) */

// <00F367A6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:44
// function call: 1
void CFactoryMakerT<CSolveIKChainAnimNodeInstance>::GetTypeID()
{
	MyTypeID(void); // 46
} /* size: 89, inline expansions: 1 (73 bytes) */

// <00F36344> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:44
// function call: 1
void CFactoryMakerT<CMotionMatchingAnimNodeInstance>::GetTypeID()
{
	MyTypeID(void); // 46
} /* size: 89, inline expansions: 1 (73 bytes) */

// <00F35EE2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:44
// function call: 1
void CFactoryMakerT<CFootLockAnimNodeInstance>::GetTypeID()
{
	MyTypeID(void); // 46
} /* size: 89, inline expansions: 1 (73 bytes) */

// <00F35A80> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:44
// function call: 1
void CFactoryMakerT<CStateMachineAnimNodeInstance>::GetTypeID()
{
	MyTypeID(void); // 46
} /* size: 89, inline expansions: 1 (73 bytes) */

// <00F3561E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:44
// function call: 1
void CFactoryMakerT<CSequenceAnimNodeInstance>::GetTypeID()
{
	MyTypeID(void); // 46
} /* size: 89, inline expansions: 1 (73 bytes) */

// <00F351BC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:44
// function call: 1
void CFactoryMakerT<CDirectPlaybackAnimNodeInstance>::GetTypeID()
{
	MyTypeID(void); // 46
} /* size: 89, inline expansions: 1 (73 bytes) */

// <00F34D5A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:44
// function call: 1
void CFactoryMakerT<CChoreoAnimNodeInstance>::GetTypeID()
{
	MyTypeID(void); // 46
} /* size: 89, inline expansions: 1 (73 bytes) */

// <00F37006> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:49
void CFactoryMakerT<CBlend2DAnimNodeInstance>::IsDerivedFrom(ClassID baseID)
{
} /* size: 39 */

// <00F36BA4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:49
void CFactoryMakerT<CInputStreamAnimNodeInstance>::IsDerivedFrom(ClassID baseID)
{
} /* size: 39 */

// <00F36742> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:49
void CFactoryMakerT<CSolveIKChainAnimNodeInstance>::IsDerivedFrom(ClassID baseID)
{
} /* size: 39 */

// <00F362E0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:49
void CFactoryMakerT<CMotionMatchingAnimNodeInstance>::IsDerivedFrom(ClassID baseID)
{
} /* size: 39 */

// <00F35E7E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:49
void CFactoryMakerT<CFootLockAnimNodeInstance>::IsDerivedFrom(ClassID baseID)
{
} /* size: 39 */

// <00F35A1C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:49
void CFactoryMakerT<CStateMachineAnimNodeInstance>::IsDerivedFrom(ClassID baseID)
{
} /* size: 39 */

// <00F355BA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:49
void CFactoryMakerT<CSequenceAnimNodeInstance>::IsDerivedFrom(ClassID baseID)
{
} /* size: 39 */

// <00F35158> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:49
void CFactoryMakerT<CDirectPlaybackAnimNodeInstance>::IsDerivedFrom(ClassID baseID)
{
} /* size: 39 */

// <00F34CF6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:49
void CFactoryMakerT<CChoreoAnimNodeInstance>::IsDerivedFrom(ClassID baseID)
{
} /* size: 39 */

// <00F5F3E1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:60
// variable: 1
inline void RegisterType<CChoreoAnimNode, CAnimNodeInstanceFactory::CChoreoAnimNodeInstance>()
{
	CFactoryMakerPtr newMaker; // 62
} /* size: 0, variables: 1 */

// <00F5F377> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:60
// variable: 1
inline void RegisterType<CDirectPlaybackAnimNode, CAnimNodeInstanceFactory::CDirectPlaybackAnimNodeInstance>()
{
	CFactoryMakerPtr newMaker; // 62
} /* size: 0, variables: 1 */

// <00F5F30D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:60
// variable: 1
inline void RegisterType<CSequenceAnimNode, CAnimNodeInstanceFactory::CSequenceAnimNodeInstance>()
{
	CFactoryMakerPtr newMaker; // 62
} /* size: 0, variables: 1 */

// <00F5F2A3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:60
// variable: 1
inline void RegisterType<CStateMachineAnimNode, CAnimNodeInstanceFactory::CStateMachineAnimNodeInstance>()
{
	CFactoryMakerPtr newMaker; // 62
} /* size: 0, variables: 1 */

// <00F5F239> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:60
// variable: 1
inline void RegisterType<CFootLockAnimNode, CAnimNodeInstanceFactory::CFootLockAnimNodeInstance>()
{
	CFactoryMakerPtr newMaker; // 62
} /* size: 0, variables: 1 */

// <00F5F1CF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:60
// variable: 1
inline void RegisterType<CMotionMatchingAnimNode, CAnimNodeInstanceFactory::CMotionMatchingAnimNodeInstance>()
{
	CFactoryMakerPtr newMaker; // 62
} /* size: 0, variables: 1 */

// <00F5F165> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:60
// variable: 1
inline void RegisterType<CSolveIKChainAnimNode, CAnimNodeInstanceFactory::CSolveIKChainAnimNodeInstance>()
{
	CFactoryMakerPtr newMaker; // 62
} /* size: 0, variables: 1 */

// <00F5F0FB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:60
// variable: 1
inline void RegisterType<CInputStreamAnimNode, CAnimNodeInstanceFactory::CInputStreamAnimNodeInstance>()
{
	CFactoryMakerPtr newMaker; // 62
} /* size: 0, variables: 1 */

// <00F5F091> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/animnodeinstancefactory.h:60
// variable: 1
inline void RegisterType<CBlend2DAnimNode, CAnimNodeInstanceFactory::CBlend2DAnimNodeInstance>()
{
	CFactoryMakerPtr newMaker; // 62
} /* size: 0, variables: 1 */

