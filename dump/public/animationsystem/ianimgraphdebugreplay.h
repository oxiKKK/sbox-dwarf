
//
// public/animationsystem/ianimgraphdebugreplay.h
//
//	referenced by: libanimationsystem.so
//
//	functions: 17
//	class: 1
//

// <015CF85C> ../public/animationsystem/ianimgraphdebugreplay.h:19
void IAnimReplayListener::ReplayFrameRecorded()
{
} /* size: 5 */

// <015CDF6D> ../public/animationsystem/ianimgraphdebugreplay.h:19
inline void IAnimReplayListener::ReplayFrameRecorded()
{
} /* size: 0 */

// <015CF885> ../public/animationsystem/ianimgraphdebugreplay.h:20
void IAnimReplayListener::ReplayFrameChanged(int newFrameIndex)
{
} /* size: 5 */

// <015CDF48> ../public/animationsystem/ianimgraphdebugreplay.h:20
inline void IAnimReplayListener::ReplayFrameChanged(int newFrameIndex)
{
} /* size: 0 */

// <015CF8B5> ../public/animationsystem/ianimgraphdebugreplay.h:21
void IAnimReplayListener::ReplayRecordingStarted()
{
} /* size: 5 */

// <015CDF2F> ../public/animationsystem/ianimgraphdebugreplay.h:21
inline void IAnimReplayListener::ReplayRecordingStarted()
{
} /* size: 0 */

// <015CF8DE> ../public/animationsystem/ianimgraphdebugreplay.h:22
void IAnimReplayListener::ReplayRecordingStopped()
{
} /* size: 5 */

// <015CDF16> ../public/animationsystem/ianimgraphdebugreplay.h:22
inline void IAnimReplayListener::ReplayRecordingStopped()
{
} /* size: 0 */

// <015CF907> ../public/animationsystem/ianimgraphdebugreplay.h:23
void IAnimReplayListener::ReplayPlaybackStarted()
{
} /* size: 5 */

// <015CDEFD> ../public/animationsystem/ianimgraphdebugreplay.h:23
inline void IAnimReplayListener::ReplayPlaybackStarted()
{
} /* size: 0 */

// <015CF930> ../public/animationsystem/ianimgraphdebugreplay.h:24
void IAnimReplayListener::ReplayPlaybackStopped()
{
} /* size: 5 */

// <015CDEE4> ../public/animationsystem/ianimgraphdebugreplay.h:24
inline void IAnimReplayListener::ReplayPlaybackStopped()
{
} /* size: 0 */

// <015CA341> ../public/animationsystem/ianimgraphdebugreplay.h:30
void IAnimGraphDebugReplay::IAnimGraphDebugReplay()
{
} /* size: 0 */

// <015CA325> ../public/animationsystem/ianimgraphdebugreplay.h:30
inline void IAnimGraphDebugReplay::IAnimGraphDebugReplay()
{
} /* size: 0 */

// <003A23C5> ../public/animationsystem/ianimgraphdebugreplay.h:30
inline void IAnimGraphDebugReplay::operator=(const IAnimGraphDebugReplay &)
{
} /* size: 0 */

// <003A238D> ../public/animationsystem/ianimgraphdebugreplay.h:30
void IAnimGraphDebugReplay::~IAnimGraphDebugReplay()
{
} /* size: 0 */

// <003A235A> ../public/animationsystem/ianimgraphdebugreplay.h:30
inline void IAnimGraphDebugReplay::~IAnimGraphDebugReplay()
{
} /* size: 0 */

// <00395957> ../public/animationsystem/ianimgraphdebugreplay.h:30
// member functions: 54
// member variable: 1
// vtable entries: 21
// class size: 16
class IAnimGraphDebugReplay : public CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > {
public:
	/* class CMutableRefCounted<CMutableRefCountBase<true, CRefMT> > <ancestor>; */ /* 0 16 */
	void IAnimGraphDebugReplay(IAnimGraphDebugReplay* , IAnimGraphDebugReplay& );
	void IAnimGraphDebugReplay(IAnimGraphDebugReplay* , const IAnimGraphDebugReplay& );
	void IAnimGraphDebugReplay(IAnimGraphDebugReplay* );
	IAnimGraphDebugReplay& operator=(IAnimGraphDebugReplay* , IAnimGraphDebugReplay& );
	IAnimGraphDebugReplay& operator=(IAnimGraphDebugReplay* , const IAnimGraphDebugReplay& );
	/* ../public/animationsystem/ianimgraphdebugreplay.h:34 */
	virtual CReceiptPtr AddListener(IAnimGraphDebugReplay* , IAnimReplayListener* );
	/* ../public/animationsystem/ianimgraphdebugreplay.h:39 */
	virtual IAnimationGraphBuilder* GetAnimGraph(const IAnimGraphDebugReplay* );
	/* ../public/animationsystem/ianimgraphdebugreplay.h:40 */
	virtual void SetAnimGraph(IAnimGraphDebugReplay* , IAnimationGraphBuilder* );
	/* ../public/animationsystem/ianimgraphdebugreplay.h:43 */
	virtual bool IsRecording(const IAnimGraphDebugReplay* );
	/* ../public/animationsystem/ianimgraphdebugreplay.h:47 */
	virtual void StartRecording(IAnimGraphDebugReplay* );
	/* ../public/animationsystem/ianimgraphdebugreplay.h:50 */
	virtual void StopRecording(IAnimGraphDebugReplay* );
	/* ../public/animationsystem/ianimgraphdebugreplay.h:53 */
	virtual CTransform GetFrameLocalToWorldTransform(const IAnimGraphDebugReplay* );
	/* ../public/animationsystem/ianimgraphdebugreplay.h:57 */
	virtual void SetFrameLocalToWorldTransform(IAnimGraphDebugReplay* , const CTransform& );
	/* ../public/animationsystem/ianimgraphdebugreplay.h:60 */
	virtual int GetMaxFrameCount(const IAnimGraphDebugReplay* );
	/* ../public/animationsystem/ianimgraphdebugreplay.h:61 */
	virtual void SetMaxFrameCount(IAnimGraphDebugReplay* , int);
	/* ../public/animationsystem/ianimgraphdebugreplay.h:64 */
	virtual bool IsPlaying(const IAnimGraphDebugReplay* );
	/* ../public/animationsystem/ianimgraphdebugreplay.h:67 */
	virtual void StartPlayback(IAnimGraphDebugReplay* );
	/* ../public/animationsystem/ianimgraphdebugreplay.h:70 */
	virtual void StopPlayback(IAnimGraphDebugReplay* );
	/* ../public/animationsystem/ianimgraphdebugreplay.h:73 */
	virtual bool IsPlaybackPaused(const IAnimGraphDebugReplay* );
	/* ../public/animationsystem/ianimgraphdebugreplay.h:76 */
	virtual void SetPlaybackPaused(IAnimGraphDebugReplay* , bool);
	/* ../public/animationsystem/ianimgraphdebugreplay.h:80 */
	virtual void ReRunFrame(IAnimGraphDebugReplay* );
	/* ../public/animationsystem/ianimgraphdebugreplay.h:83 */
	virtual int GetFrameCount(const IAnimGraphDebugReplay* );
	/* ../public/animationsystem/ianimgraphdebugreplay.h:86 */
	virtual int GetCurrentFrame(const IAnimGraphDebugReplay* );
	/* ../public/animationsystem/ianimgraphdebugreplay.h:89 */
	virtual void SetCurrentFrame(IAnimGraphDebugReplay* , int);
	/* ../public/animationsystem/ianimgraphdebugreplay.h:92 */
	virtual float GetFrameTime(const IAnimGraphDebugReplay* , int);
	/* ../public/animationsystem/ianimgraphdebugreplay.h:95 */
	virtual float GetDuration(const IAnimGraphDebugReplay* );
	virtual void ~IAnimGraphDebugReplay(IAnimGraphDebugReplay* );
	void IAnimGraphDebugReplay(class IAnimGraphDebugReplay *, class IAnimGraphDebugReplay &); /* linkage=_ZN21IAnimGraphDebugReplayC4EOS_ */
	void IAnimGraphDebugReplay(class IAnimGraphDebugReplay *, const class IAnimGraphDebugReplay  &); /* linkage=_ZN21IAnimGraphDebugReplayC4ERKS_ */
	void IAnimGraphDebugReplay(class IAnimGraphDebugReplay *); /* linkage=_ZN21IAnimGraphDebugReplayC4Ev */
	class IAnimGraphDebugReplay & operator=(class IAnimGraphDebugReplay *, class IAnimGraphDebugReplay &); /* linkage=_ZN21IAnimGraphDebugReplayaSEOS_ */
	class IAnimGraphDebugReplay & operator=(class IAnimGraphDebugReplay *, const class IAnimGraphDebugReplay  &); /* linkage=_ZN21IAnimGraphDebugReplayaSERKS_ */
	virtual CReceiptPtr AddListener(class IAnimGraphDebugReplay *, class IAnimReplayListener *); /* linkage=_ZN21IAnimGraphDebugReplay11AddListenerEP19IAnimReplayListener */
	virtual class IAnimationGraphBuilder * GetAnimGraph(const class IAnimGraphDebugReplay  *); /* linkage=_ZNK21IAnimGraphDebugReplay12GetAnimGraphEv */
	virtual void SetAnimGraph(class IAnimGraphDebugReplay *, class IAnimationGraphBuilder *); /* linkage=_ZN21IAnimGraphDebugReplay12SetAnimGraphEP22IAnimationGraphBuilder */
	virtual bool IsRecording(const class IAnimGraphDebugReplay  *); /* linkage=_ZNK21IAnimGraphDebugReplay11IsRecordingEv */
	virtual void StartRecording(class IAnimGraphDebugReplay *); /* linkage=_ZN21IAnimGraphDebugReplay14StartRecordingEv */
	virtual void StopRecording(class IAnimGraphDebugReplay *); /* linkage=_ZN21IAnimGraphDebugReplay13StopRecordingEv */
	virtual class CTransform GetFrameLocalToWorldTransform(const class IAnimGraphDebugReplay  *); /* linkage=_ZNK21IAnimGraphDebugReplay29GetFrameLocalToWorldTransformEv */
	virtual void SetFrameLocalToWorldTransform(class IAnimGraphDebugReplay *, const class CTransform  &); /* linkage=_ZN21IAnimGraphDebugReplay29SetFrameLocalToWorldTransformERK10CTransform */
	virtual int GetMaxFrameCount(const class IAnimGraphDebugReplay  *); /* linkage=_ZNK21IAnimGraphDebugReplay16GetMaxFrameCountEv */
	virtual void SetMaxFrameCount(class IAnimGraphDebugReplay *, int); /* linkage=_ZN21IAnimGraphDebugReplay16SetMaxFrameCountEi */
	virtual bool IsPlaying(const class IAnimGraphDebugReplay  *); /* linkage=_ZNK21IAnimGraphDebugReplay9IsPlayingEv */
	virtual void StartPlayback(class IAnimGraphDebugReplay *); /* linkage=_ZN21IAnimGraphDebugReplay13StartPlaybackEv */
	virtual void StopPlayback(class IAnimGraphDebugReplay *); /* linkage=_ZN21IAnimGraphDebugReplay12StopPlaybackEv */
	virtual bool IsPlaybackPaused(const class IAnimGraphDebugReplay  *); /* linkage=_ZNK21IAnimGraphDebugReplay16IsPlaybackPausedEv */
	virtual void SetPlaybackPaused(class IAnimGraphDebugReplay *, bool); /* linkage=_ZN21IAnimGraphDebugReplay17SetPlaybackPausedEb */
	virtual void ReRunFrame(class IAnimGraphDebugReplay *); /* linkage=_ZN21IAnimGraphDebugReplay10ReRunFrameEv */
	virtual int GetFrameCount(const class IAnimGraphDebugReplay  *); /* linkage=_ZNK21IAnimGraphDebugReplay13GetFrameCountEv */
	virtual int GetCurrentFrame(const class IAnimGraphDebugReplay  *); /* linkage=_ZNK21IAnimGraphDebugReplay15GetCurrentFrameEv */
	virtual void SetCurrentFrame(class IAnimGraphDebugReplay *, int); /* linkage=_ZN21IAnimGraphDebugReplay15SetCurrentFrameEi */
	virtual float GetFrameTime(const class IAnimGraphDebugReplay  *, int); /* linkage=_ZNK21IAnimGraphDebugReplay12GetFrameTimeEi */
	virtual float GetDuration(const class IAnimGraphDebugReplay  *); /* linkage=_ZNK21IAnimGraphDebugReplay11GetDurationEv */
	virtual void ~IAnimGraphDebugReplay(class IAnimGraphDebugReplay *); /* linkage=_ZN21IAnimGraphDebugReplayD4Ev */
};

