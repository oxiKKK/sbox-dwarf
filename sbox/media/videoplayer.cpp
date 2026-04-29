
//
// sbox/media/videoplayer.cpp
//
//	referenced by: libengine2.so
//
//	functions: 123
//	classes: 3
//	structs: 9
//

// <01FB34EA> sbox/media/videoplayer.cpp:25
// function call: 1
void LogAvError(const char* message)
{
	LogAvError(const char* message); // 25
} /* size: 81, inline expansions: 1 (28 bytes) */

// <01FB2DFA> sbox/media/videoplayer.cpp:25
void LogAvError(const char* message)
{
} /* size: 0 */

// <01FB2CED> sbox/media/videoplayer.cpp:50
void PacketEntry::PacketEntry()
{
} /* size: 0 */

// <01FB2CD1> sbox/media/videoplayer.cpp:50
inline void PacketEntry::PacketEntry()
{
} /* size: 0 */

// <01FA24E5> sbox/media/videoplayer.cpp:50
// member function: 1
// member variables: 2
// struct size: 104
struct PacketEntry {
	MediaPacket pkt; /* 0 96 */
	int serial; /* 96 4 */
	void PacketEntry(PacketEntry* );
};

// <01FACDA8> sbox/media/videoplayer.cpp:56
void PacketQueue::PacketQueue()
{
} /* size: 0 */

// <01FACD8C> sbox/media/videoplayer.cpp:56
inline void PacketQueue::PacketQueue()
{
} /* size: 0 */

// <01FACD75> sbox/media/videoplayer.cpp:56
void PacketQueue::~PacketQueue()
{
} /* size: 0 */

// <01FACD59> sbox/media/videoplayer.cpp:56
inline void PacketQueue::~PacketQueue()
{
} /* size: 0 */

// <01FA3C59> sbox/media/videoplayer.cpp:56
// member functions: 2
// member variables: 9
// struct size: 264
struct PacketQueue {
	CUtlVector<PacketEntry, CUtlMemory<PacketEntry, int> > entries; /* 0 32 */
	int headIdx; /* 32 4 */
	int nb_packets; /* 36 4 */
	int size; /* 40 4 */
	int64_t duration_us; /* 48 8 */
	int abort_request; /* 56 4 */
	int serial; /* 60 4 */
	CThreadMutex mutex; /* 64 72 */
	CThreadEvent cond; /* 136 128 */
	void ~PacketQueue(PacketQueue* );
	void PacketQueue(PacketQueue* );
};

// <01FA3D23> sbox/media/videoplayer.cpp:69
// member variables: 4
// struct size: 16
struct AudioParams {
	int freq; /* 0 4 */
	int channels; /* 4 4 */
	int frame_size; /* 8 4 */
	int bytes_per_sec; /* 12 4 */
};

// <01FA3D6D> sbox/media/videoplayer.cpp:77
// member variables: 7
// struct size: 48
struct Clock {
	double pts; /* 0 8 */
	double pts_drift; /* 8 8 */
	double last_updated; /* 16 8 */
	double speed; /* 24 8 */
	int serial; /* 32 4 */
	bool bPaused; /* 36 1 */
	int * queue_serial; /* 40 8 */
};

// <01FA3DE4> sbox/media/videoplayer.cpp:88
// member function: 1
// member variables: 17
// struct size: 120
struct Frame {
	uint8_t * planes[3]; /* 0 24 */
	int strides[3]; /* 24 12 */
	int width; /* 36 4 */
	int height; /* 40 4 */
	bool bFullRange; /* 44 1 */
	bool bBt709; /* 45 1 */
	bool bRGBA; /* 46 1 */
	void * free_ctx; /* 48 8 */
	void (*free_fn)(void* ); /* 56 8* /
	uint8_t * alpha_plane; /* 64 8 */
	int alpha_stride; /* 72 4 */
	int16_t * audioData; /* 80 8 */
	int nb_samples; /* 88 4 */
	int serial; /* 92 4 */
	double pts; /* 96 8 */
	double duration; /* 104 8 */
	bool bUploaded; /* 112 1 */
};

// <01FACE4E> sbox/media/videoplayer.cpp:110
void FrameQueue::FrameQueue()
{
} /* size: 0 */

// <01FACE32> sbox/media/videoplayer.cpp:110
inline void FrameQueue::FrameQueue()
{
} /* size: 0 */

// <01FACE1B> sbox/media/videoplayer.cpp:110
void FrameQueue::~FrameQueue()
{
} /* size: 0 */

// <01FACDFF> sbox/media/videoplayer.cpp:110
inline void FrameQueue::~FrameQueue()
{
} /* size: 0 */

// <01FA3EF1> sbox/media/videoplayer.cpp:110
// member functions: 2
// member variables: 9
// struct size: 2,152
struct FrameQueue {
	Frame queue[16]; /* 0 1920 */
	int rindex; /* 1920 4 */
	int windex; /* 1924 4 */
	int size; /* 1928 4 */
	int max_size; /* 1932 4 */
	int rindex_shown; /* 1936 4 */
	CThreadMutex mutex; /* 1944 72 */
	CThreadEvent cond; /* 2016 128 */
	PacketQueue * pktq; /* 2144 8 */
	void ~FrameQueue(FrameQueue* );
	void FrameQueue(FrameQueue* );
};

// <01FA4002> sbox/media/videoplayer.cpp:130
// member variables: 15
// struct size: 96
struct Decoder {
	PacketQueue * queue; /* 0 8 */
	Vp9Decoder * vp9dec; /* 8 8 */
	Av1Decoder * av1dec; /* 16 8 */
	OpusDec * opusdec; /* 24 8 */
	Mp3Dec * mp3dec; /* 32 8 */
	bool bPreDecoded; /* 40 1 */
	int pre_dec_channels; /* 44 4 */
	int video_width; /* 48 4 */
	int video_height; /* 52 4 */
	int pkt_serial; /* 56 4 */
	int finished; /* 60 4 */
	CThreadEvent * empty_queue_cond; /* 64 8 */
	int64_t start_pts; /* 72 8 */
	int64_t next_pts; /* 80 8 */
	CThread * pDecoderThread; /* 88 8 */
};

// <01FACD42> sbox/media/videoplayer.cpp:154
void FFTData::FFTData()
{
} /* size: 0 */

// <01FACD26> sbox/media/videoplayer.cpp:154
inline void FFTData::FFTData()
{
} /* size: 0 */

// <01FACD0F> sbox/media/videoplayer.cpp:154
void FFTData::~FFTData()
{
} /* size: 0 */

// <01FACCF3> sbox/media/videoplayer.cpp:154
inline void FFTData::~FFTData()
{
} /* size: 0 */

// <01FA412F> sbox/media/videoplayer.cpp:154
// member functions: 2
// member variables: 7
// struct size: 5,248
struct FFTData {
	float m_fftInput[512] __attribute__((__aligned__(32))); /* 0 2048 */
	float m_fftOutput[514] __attribute__((__aligned__(32))); /* 2048 2056 */
	float m_fftMagnitudes[257]; /* 4104 1028 */
	int m_fftSamplesBuffered; /* 5132 4 */
	float m_fftAmplitude; /* 5136 4 */
	CThreadMutex m_mutex; /* 5144 72 */
	CFFTPlan m_fftPlan; /* 5216 12 */
	void ~FFTData(FFTData* );
	void FFTData(FFTData* );
} __attribute__((__aligned__(32)));

// <01FA8585> sbox/media/videoplayer.cpp:167
void CAudioDecoderThread::~CAudioDecoderThread()
{
} /* size: 19 */

// <01FA84F7> sbox/media/videoplayer.cpp:167
// function call: 1
void CAudioDecoderThread::~CAudioDecoderThread()
{
	CAudioDecoderThread::~CAudioDecoderThread(); // 167
} /* size: 46, inline expansions: 1 (19 bytes) */

// <01FA84DB> sbox/media/videoplayer.cpp:167
inline void CAudioDecoderThread::~CAudioDecoderThread()
{
} /* size: 0 */

// <01FA6A9C> sbox/media/videoplayer.cpp:167
// member functions: 10
// member variables: 2
// vtable entry: 1
// class size: 408
class CAudioDecoderThread : public CThread {
public:
	/* class CThread <ancestor>; */ /* 0 0 */
	void CAudioDecoderThread(CAudioDecoderThread* , CAudioDecoderThread& );
	void CAudioDecoderThread(CAudioDecoderThread* , const CAudioDecoderThread& );
	/* sbox/media/videoplayer.cpp:170 */
	void CAudioDecoderThread(CAudioDecoderThread* , VideoState* );
protected:
	/* sbox/media/videoplayer.cpp:1228 */
	virtual int Run(CAudioDecoderThread* );
private:
	VideoState * m_pVideoState; /* 400 8 */
	virtual void ~CAudioDecoderThread(CAudioDecoderThread* );
	void CAudioDecoderThread(class CAudioDecoderThread *, class CAudioDecoderThread &); /* linkage=_ZN19CAudioDecoderThreadC4EOS_ */
	void CAudioDecoderThread(class CAudioDecoderThread *, const class CAudioDecoderThread  &); /* linkage=_ZN19CAudioDecoderThreadC4ERKS_ */
	void CAudioDecoderThread(class CAudioDecoderThread *, class VideoState *); /* linkage=_ZN19CAudioDecoderThreadC4EP10VideoState */
	virtual int Run(class CAudioDecoderThread *); /* linkage=_ZN19CAudioDecoderThread3RunEv */
	virtual void ~CAudioDecoderThread(class CAudioDecoderThread *); /* linkage=_ZN19CAudioDecoderThreadD4Ev */
};

// <01FB2DDE> sbox/media/videoplayer.cpp:170
void CAudioDecoderThread::CAudioDecoderThread(VideoState* pState)
{
} /* size: 0 */

// <01FB2DB9> sbox/media/videoplayer.cpp:170
inline void CAudioDecoderThread::CAudioDecoderThread(VideoState* pState)
{
} /* size: 0 */

// <01FA8679> sbox/media/videoplayer.cpp:177
void CVideoDecoderThread::~CVideoDecoderThread()
{
} /* size: 19 */

// <01FA85EB> sbox/media/videoplayer.cpp:177
// function call: 1
void CVideoDecoderThread::~CVideoDecoderThread()
{
	CVideoDecoderThread::~CVideoDecoderThread(); // 177
} /* size: 46, inline expansions: 1 (19 bytes) */

// <01FA85CF> sbox/media/videoplayer.cpp:177
inline void CVideoDecoderThread::~CVideoDecoderThread()
{
} /* size: 0 */

// <01FA69A6> sbox/media/videoplayer.cpp:177
// member functions: 10
// member variables: 2
// vtable entry: 1
// class size: 408
class CVideoDecoderThread : public CThread {
public:
	/* class CThread <ancestor>; */ /* 0 0 */
	void CVideoDecoderThread(CVideoDecoderThread* , CVideoDecoderThread& );
	void CVideoDecoderThread(CVideoDecoderThread* , const CVideoDecoderThread& );
	/* sbox/media/videoplayer.cpp:180 */
	void CVideoDecoderThread(CVideoDecoderThread* , VideoState* );
protected:
	/* sbox/media/videoplayer.cpp:1269 */
	virtual int Run(CVideoDecoderThread* );
private:
	VideoState * m_pVideoState; /* 400 8 */
	virtual void ~CVideoDecoderThread(CVideoDecoderThread* );
	void CVideoDecoderThread(class CVideoDecoderThread *, class CVideoDecoderThread &); /* linkage=_ZN19CVideoDecoderThreadC4EOS_ */
	void CVideoDecoderThread(class CVideoDecoderThread *, const class CVideoDecoderThread  &); /* linkage=_ZN19CVideoDecoderThreadC4ERKS_ */
	void CVideoDecoderThread(class CVideoDecoderThread *, class VideoState *); /* linkage=_ZN19CVideoDecoderThreadC4EP10VideoState */
	virtual int Run(class CVideoDecoderThread *); /* linkage=_ZN19CVideoDecoderThread3RunEv */
	virtual void ~CVideoDecoderThread(class CVideoDecoderThread *); /* linkage=_ZN19CVideoDecoderThreadD4Ev */
};

// <01FB2D9D> sbox/media/videoplayer.cpp:180
void CVideoDecoderThread::CVideoDecoderThread(VideoState* pState)
{
} /* size: 0 */

// <01FB2D78> sbox/media/videoplayer.cpp:180
inline void CVideoDecoderThread::CVideoDecoderThread(VideoState* pState)
{
} /* size: 0 */

// <01FA876D> sbox/media/videoplayer.cpp:187
void CReadWorkerThread::~CReadWorkerThread()
{
} /* size: 19 */

// <01FA86DF> sbox/media/videoplayer.cpp:187
// function call: 1
void CReadWorkerThread::~CReadWorkerThread()
{
	CReadWorkerThread::~CReadWorkerThread(); // 187
} /* size: 46, inline expansions: 1 (19 bytes) */

// <01FA86C3> sbox/media/videoplayer.cpp:187
inline void CReadWorkerThread::~CReadWorkerThread()
{
} /* size: 0 */

// <01FA68B0> sbox/media/videoplayer.cpp:187
// member functions: 10
// member variables: 2
// vtable entry: 1
// class size: 408
class CReadWorkerThread : public CThread {
public:
	/* class CThread <ancestor>; */ /* 0 0 */
	void CReadWorkerThread(CReadWorkerThread* , CReadWorkerThread& );
	void CReadWorkerThread(CReadWorkerThread* , const CReadWorkerThread& );
	/* sbox/media/videoplayer.cpp:190 */
	void CReadWorkerThread(CReadWorkerThread* , VideoState* );
protected:
	/* sbox/media/videoplayer.cpp:1471 */
	virtual int Run(CReadWorkerThread* );
private:
	VideoState * m_pVideoState; /* 400 8 */
	virtual void ~CReadWorkerThread(CReadWorkerThread* );
	void CReadWorkerThread(class CReadWorkerThread *, class CReadWorkerThread &); /* linkage=_ZN17CReadWorkerThreadC4EOS_ */
	void CReadWorkerThread(class CReadWorkerThread *, const class CReadWorkerThread  &); /* linkage=_ZN17CReadWorkerThreadC4ERKS_ */
	void CReadWorkerThread(class CReadWorkerThread *, class VideoState *); /* linkage=_ZN17CReadWorkerThreadC4EP10VideoState */
	virtual int Run(class CReadWorkerThread *); /* linkage=_ZN17CReadWorkerThread3RunEv */
	virtual void ~CReadWorkerThread(class CReadWorkerThread *); /* linkage=_ZN17CReadWorkerThreadD4Ev */
};

// <01FB2D5C> sbox/media/videoplayer.cpp:190
void CReadWorkerThread::CReadWorkerThread(VideoState* pState)
{
} /* size: 0 */

// <01FB2D37> sbox/media/videoplayer.cpp:190
inline void CReadWorkerThread::CReadWorkerThread(VideoState* pState)
{
} /* size: 0 */

// <01FACCD1> sbox/media/videoplayer.cpp:197
void VideoState::VideoState()
{
} /* size: 0 */

// <01FACCB5> sbox/media/videoplayer.cpp:197
inline void VideoState::VideoState()
{
} /* size: 0 */

// <01FAB861> sbox/media/videoplayer.cpp:197
void VideoState::~VideoState()
{
} /* size: 0 */

// <01FAB845> sbox/media/videoplayer.cpp:197
inline void VideoState::~VideoState()
{
} /* size: 0 */

// <01FA421D> sbox/media/videoplayer.cpp:197
// member functions: 2
// member variables: 53
// struct size: 10,944
struct VideoState {
	IVideoPlayerProvider * provider; /* 0 8 */
	Clock audclk; /* 8 48 */
	Clock vidclk; /* 56 48 */
	Clock extclk; /* 104 48 */
	FrameQueue pictq; /* 152 2152 */
	FrameQueue sampq; /* 2304 2152 */
	Decoder auddec; /* 4456 96 */
	Decoder viddec; /* 4552 96 */
	PacketQueue audioq; /* 4648 264 */
	PacketQueue videoq; /* 4912 264 */
	FFTData fft __attribute__((__aligned__(32))); /* 5184 5248 */
	CThread * m_pReadThread; /* 10432 8 */
	CThreadEvent m_readCond; /* 10440 128 */
	CInterlockedInt abort_request __attribute__((__aligned__(4))); /* 10568 4 */
	int force_refresh; /* 10572 4 */
	bool bPaused; /* 10576 1 */
	bool bStreamPaused; /* 10577 1 */
	bool bRepeat; /* 10578 1 */
	CInterlockedInt seek_req __attribute__((__aligned__(4))); /* 10580 4 */
	CInterlockedInt64 seek_pos __attribute__((__aligned__(8))); /* 10584 8 */
	MediaContainerFormat format; /* 10592 4 */
	Mp4Demux * mp4ctx; /* 10600 8 */
	WebmDemux * webmctx; /* 10608 8 */
	WebpDemux * webpctx; /* 10616 8 */
	Mp3Demux * mp3ctx; /* 10624 8 */
	WavDemux * wavctx; /* 10632 8 */
	OggDemux * oggctx; /* 10640 8 */
	int audio_stream; /* 10648 4 */
	int video_stream; /* 10652 4 */
	MediaStreamInfo audio_st; /* 10656 56 */
	MediaStreamInfo video_st; /* 10712 56 */
	int av_sync_type; /* 10768 4 */
	double audio_clock; /* 10776 8 */
	int audio_clock_serial; /* 10784 4 */
	int audio_hw_buf_size; /* 10788 4 */
	uint8_t * audio_buf; /* 10792 8 */
	unsigned int audio_buf_size; /* 10800 4 */
	int audio_buf_index; /* 10804 4 */
	int audio_write_buf_size; /* 10808 4 */
	bool muted; /* 10812 1 */
	AudioParams audio_src; /* 10816 16 */
	AudioParams audio_tgt; /* 10832 16 */
	double frame_timer; /* 10848 8 */
	double frame_last_scale_delay; /* 10856 8 */
	double max_frame_duration; /* 10864 8 */
	int eof; /* 10872 4 */
	char * filename; /* 10880 8 */
	char * pExt; /* 10888 8 */
	int step; /* 10896 4 */
	int64_t audio_callback_time; /* 10904 8 */
	double duration; /* 10912 8 */
	int framedrop; /* 10920 4 */
	HttpStreamSource * httpStream; /* 10928 8 */
	void ~VideoState(VideoState* );
	void VideoState(VideoState* );
} __attribute__((__aligned__(32)));

// <01FB2C9B> sbox/media/videoplayer.cpp:261
// variable: 1
int packet_queue_put_private(PacketQueue* q, MediaPacket* pkt)
{
	PacketEntry e; // 266
} /* size: 0, variables: 1 */

// <01FB3899> sbox/media/videoplayer.cpp:284
// variables: 2
// function calls: 23
int packet_queue_put(PacketQueue* q, MediaPacket* pkt)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_286; // 286
	int ret; // 287
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 286
	MediaPacket::MediaPacket(); // 50
	PacketEntry::PacketEntry(); // 266
	CUtlMemory<PacketEntry, int>::NumAllocated(); // 1196
	CUtlMemory<PacketEntry, int>::Base(); // 112
	CUtlVectorBase<PacketEntry, CUtlMemory<PacketEntry, int> >::Base(); // 368
	CUtlVectorBase<PacketEntry, CUtlMemory<PacketEntry, int> >::ResetDbgInfo(); // 824
	CUtlMemory<PacketEntry, int>::IsGrowable(); // 823
	CUtlMemory<PacketEntry, int>::IsExternallyAllocated(); // 859
	CUtlMemory<PacketEntry, int>::IsExternallyAllocated(); // 861
	CUtlMemory<PacketEntry, int>::Grow(
		int num);  // 806
	CUtlVectorBase<PacketEntry, CUtlMemory<PacketEntry, int> >::GrowMemory(
			int num);  // 1198
	CUtlMemory<PacketEntry, int>::operator[](
			int i);  // 602
	CUtlVectorBase<PacketEntry, CUtlMemory<PacketEntry, int> >::Element(
		int i);  // 1201
	CopyConstruct<PacketEntry>(PacketEntry* pMemory,
					const PacketEntry& src);  // 1201
	CUtlVectorBase<PacketEntry, CUtlMemory<PacketEntry, int> >::AddToTail(
			const PacketEntry& src);  // 276
	packet_queue_put_private(PacketQueue* q,
				MediaPacket* pkt);  // 287
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 291
	media_packet_free(MediaPacket* p); // 289
} /* size: 862, variables: 2, inline expansions: 23 (2122 bytes) */

// <01FB2C56> sbox/media/videoplayer.cpp:284
// variables: 2
int packet_queue_put(PacketQueue* q, MediaPacket* pkt)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_286; // 286
	int ret; // 287
} /* size: 0, variables: 2 */

// <01FB2C1E> sbox/media/videoplayer.cpp:293
// variable: 1
int packet_queue_put_nullpacket(PacketQueue* q, int stream_index)
{
	MediaPacket pkt; // 295
} /* size: 0, variables: 1 */

// <01FB2C00> sbox/media/videoplayer.cpp:301
int packet_queue_init(PacketQueue* q)
{
} /* size: 0 */

// <01FB28FF> sbox/media/videoplayer.cpp:312
// variables: 2
// function calls: 11
void packet_queue_flush(PacketQueue* q)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_314; // 314
	{
		int i; // 315
		CUtlVectorBase<PacketEntry, CUtlMemory<PacketEntry, int> >::Count(); // 315
		media_packet_free(MediaPacket* p); // 316
		CUtlMemory<PacketEntry, int>::operator[](
				int i);  // 588
		CUtlVectorBase<PacketEntry, CUtlMemory<PacketEntry, int> >::operator[](
				int i);  // 316
	}
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 314
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 323
	CUtlVectorBase<PacketEntry, CUtlMemory<PacketEntry, int> >::RemoveAll(); // 317
} /* size: 341, variables: 1, inline expansions: 7 (291 bytes) */

// <01FB28E5> sbox/media/videoplayer.cpp:325
void packet_queue_destroy(PacketQueue* q)
{
} /* size: 0 */

// <01FB26FA> sbox/media/videoplayer.cpp:330
// variable: 1
// function calls: 6
void packet_queue_abort(PacketQueue* q)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_332; // 332
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 332
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 335
} /* size: 103, variables: 1, inline expansions: 6 (210 bytes) */

// <01FB250B> sbox/media/videoplayer.cpp:337
// variable: 1
// function calls: 6
void packet_queue_start(PacketQueue* q)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_339; // 339
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 339
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 342
} /* size: 100, variables: 1, inline expansions: 6 (180 bytes) */

// <01FB24AC> sbox/media/videoplayer.cpp:344
// variables: 2
int packet_queue_get(PacketQueue* q, MediaPacket* pkt, int block, int* serial)
{
	int ret; // 346
	{
		PacketEntry& e; // 359
	}
} /* size: 0, variables: 1 */

// <01FB2474> sbox/media/videoplayer.cpp:402
int decoder_init(Decoder* d, PacketQueue* queue, CThreadEvent* empty_queue_cond)
{
} /* size: 0 */

// <01FB1B4C> sbox/media/videoplayer.cpp:426
// variables: 6
// function calls: 22
int decoder_decode_frame(Decoder* d, VideoFrame* vf, AudioFrame* af)
{
	{
		MediaPacket pkt; // 453
		int pktSerial; // 454
		int ret; // 488
		{
			VideoFrame pending; // 437
		}
		{
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_448; // 448
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 943
			Lock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 978
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
					const CThreadMutex& lock,
					const char* pFilename,
					int nLineNumber);  // 448
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 451
		}
		{
			PacketEntry& e; // 359
			CUtlMemory<PacketEntry, int>::operator[](
					int i);  // 588
			CUtlVectorBase<PacketEntry, CUtlMemory<PacketEntry, int> >::operator[](
					int i);  // 359
			CUtlMemory<PacketEntry, int>::operator[](
					int i);  // 602
			CUtlVectorBase<PacketEntry, CUtlMemory<PacketEntry, int> >::Element(
				int i);  // 1114
			memmove(void* __dest,
				const void* __src,
				size_t __len);  // 115
			V_memmove(void* dest,
					const void* src,
					size_t count);  // 1114
			CUtlVectorBase<PacketEntry, CUtlMemory<PacketEntry, int> >::ShiftElementsLeft(
						int elem,
						int num);  // 1661
			CUtlVectorBase<PacketEntry, CUtlMemory<PacketEntry, int> >::RemoveMultiple(
					int elem,
					int num);  // 377
		}
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 394
		CUtlVectorBase<PacketEntry, CUtlMemory<PacketEntry, int> >::Count(); // 357
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 392
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 347
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 398
		packet_queue_get(PacketQueue* q,
				MediaPacket* pkt,
				int block,
				int* serial);  // 455
		media_packet_free(MediaPacket* p); // 526
		media_packet_free(MediaPacket* p); // 484
	}
} /* size: 1837 */

// <01FB1AE2> sbox/media/videoplayer.cpp:533
void decoder_destroy(Decoder* d)
{
} /* size: 106 */

// <01FB3496> sbox/media/videoplayer.cpp:545
void frame_queue_unref_item(Frame* vp)
{
} /* size: 135 */

// <01FB1A4C> sbox/media/videoplayer.cpp:570
// variable: 1
void frame_queue_init(FrameQueue* f, PacketQueue* pktq, int max_size)
{
	{
		int i; // 579
	}
} /* size: 0 */

// <01FB1A25> sbox/media/videoplayer.cpp:583
// variable: 1
void frame_queue_destroy(FrameQueue* f)
{
	{
		int i; // 585
	}
} /* size: 0 */

// <01FB19FE> sbox/media/videoplayer.cpp:589
// variable: 1
void frame_queue_signal(FrameQueue* f)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_591; // 591
} /* size: 0, variables: 1 */

// <01FB19E0> sbox/media/videoplayer.cpp:595
Frame* frame_queue_peek(FrameQueue* f)
{
} /* size: 0 */

// <01FB19C2> sbox/media/videoplayer.cpp:600
Frame* frame_queue_peek_next(FrameQueue* f)
{
} /* size: 0 */

// <01FB19A4> sbox/media/videoplayer.cpp:605
Frame* frame_queue_peek_last(FrameQueue* f)
{
} /* size: 0 */

// <01FB179D> sbox/media/videoplayer.cpp:610
// variable: 1
// function calls: 4
Frame* frame_queue_peek_writable(FrameQueue* f)
{
	Frame* vp; // 612
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 613
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 619
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 617
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 623
} /* size: 349, variables: 1, inline expansions: 4 (198 bytes) */

// <01FB1773> sbox/media/videoplayer.cpp:627
// variable: 1
Frame* frame_queue_peek_readable(FrameQueue* f)
{
	Frame* vp; // 629
} /* size: 0, variables: 1 */

// <01FB159F> sbox/media/videoplayer.cpp:644
// variable: 1
// function calls: 6
void frame_queue_push(FrameQueue* f)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_648; // 648
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 648
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 651
} /* size: 149, variables: 1, inline expansions: 6 (288 bytes) */

// <01FB357A> sbox/media/videoplayer.cpp:653
// variables: 2
// function calls: 6
void frame_queue_next(FrameQueue* f)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_663; // 663
	bool bWasFull; // 667
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 663
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 671
} /* size: 261, variables: 2, inline expansions: 6 (408 bytes) */

// <01FB156B> sbox/media/videoplayer.cpp:653
// variables: 2
void frame_queue_next(FrameQueue* f)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_663; // 663
	bool bWasFull; // 667
} /* size: 0, variables: 2 */

// <01FB154D> sbox/media/videoplayer.cpp:673
int frame_queue_nb_remaining(FrameQueue* f)
{
} /* size: 0 */

// <01FB12D1> sbox/media/videoplayer.cpp:678
// function calls: 7
void decoder_abort(Decoder* d, FrameQueue* fq)
{
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 591
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 593
	frame_queue_signal(FrameQueue* f); // 681
} /* size: 200, inline expansions: 7 (376 bytes) */

// <01FB117A> sbox/media/videoplayer.cpp:693
// variable: 1
// function calls: 2
void stream_component_close(VideoState* is, int stream_index)
{
	{
		int i; // 585
		frame_queue_unref_item(Frame* vp); // 586
	}
	frame_queue_destroy(FrameQueue* f); // 709
} /* size: 558, inline expansions: 1 (162 bytes) */

// <01FB115F> sbox/media/videoplayer.cpp:716
void stream_close(VideoState* is)
{
} /* size: 0 */

// <01FB112A> sbox/media/videoplayer.cpp:794
// variables: 2
void video_display(VideoState* is)
{
	Frame* vp; // 799
	{
		bool ok; // 802
	}
} /* size: 0, variables: 1 */

// <01FB10FF> sbox/media/videoplayer.cpp:823
// variable: 1
double get_clock(Clock* c)
{
	double time; // 829
} /* size: 0, variables: 1 */

// <01FB10BE> sbox/media/videoplayer.cpp:833
void set_clock_at(Clock* c, double pts, int serial, double time)
{
} /* size: 0 */

// <01FB108A> sbox/media/videoplayer.cpp:841
void set_clock(Clock* c, double pts, int serial)
{
} /* size: 0 */

// <01FB1063> sbox/media/videoplayer.cpp:852
void init_clock(Clock* c, int* queue_serial)
{
} /* size: 0 */

// <01FB0DF3> sbox/media/videoplayer.cpp:860
// variables: 2
// function calls: 6
void sync_clock_to_slave(Clock* c, Clock* slave)
{
	double clock; // 862
	double slave_clock; // 863
	get_clock(Clock* c); // 823
	get_clock(Clock* c); // 862
	get_clock(Clock* c); // 823
	get_clock(Clock* c); // 863
	set_clock_at(Clock* c,
			double pts,
			int serial,
			double time);  // 843
	set_clock(Clock* c,
			double pts,
			int serial);  // 865
} /* size: 368, variables: 2, inline expansions: 6 (392 bytes) */

// <01FB0DD4> sbox/media/videoplayer.cpp:868
int get_master_sync_type(VideoState* is)
{
} /* size: 0 */

// <01FB0C2C> sbox/media/videoplayer.cpp:877
// function calls: 7
double get_master_clock(VideoState* is)
{
	get_master_sync_type(VideoState* is); // 879
	get_clock(Clock* c); // 823
	get_clock(Clock* c); // 883
	get_clock(Clock* c); // 823
	get_clock(Clock* c); // 882
	get_clock(Clock* c); // 823
	get_clock(Clock* c); // 881
} /* size: 325, inline expansions: 7 (392 bytes) */

// <01FB0C04> sbox/media/videoplayer.cpp:907
void stream_seek(VideoState* is, int64_t pos_us)
{
} /* size: 0 */

// <01FB0976> sbox/media/videoplayer.cpp:917
// function calls: 8
void stream_toggle_pause(VideoState* is)
{
	get_clock(Clock* c); // 823
	get_clock(Clock* c); // 925
	set_clock_at(Clock* c,
			double pts,
			int serial,
			double time);  // 843
	set_clock(Clock* c,
			double pts,
			int serial);  // 925
	get_clock(Clock* c); // 823
	get_clock(Clock* c); // 923
	set_clock_at(Clock* c,
			double pts,
			int serial,
			double time);  // 843
	set_clock(Clock* c,
			double pts,
			int serial);  // 923
} /* size: 354, inline expansions: 8 (400 bytes) */

// <01FB095B> sbox/media/videoplayer.cpp:929
void toggle_pause(VideoState* is)
{
} /* size: 0 */

// <01FB0940> sbox/media/videoplayer.cpp:936
void step_to_next_frame(VideoState* is)
{
} /* size: 0 */

// <01FB08BE> sbox/media/videoplayer.cpp:943
// variables: 2
double compute_target_delay(double delay, VideoState* is)
{
	{
		double diff; // 947
		double sync_threshold; // 948
	}
} /* size: 0 */

// <01FB0877> sbox/media/videoplayer.cpp:962
// variable: 1
double vp_duration(VideoState* is, Frame* vp, Frame* nextvp)
{
	{
		double duration; // 966
	}
} /* size: 0 */

// <01FB0842> sbox/media/videoplayer.cpp:974
void update_video_pts(VideoState* is, double pts, int serial)
{
} /* size: 0 */

// <01FB078A> sbox/media/videoplayer.cpp:980
// variables: 10
void video_refresh(void* opaque, double* remaining_time)
{
	VideoState* is; // 982
	double time; // 983
	{
		bool retry; // 987
		{
			Frame* lastvp; // 993
			Frame* vp; // 994
			{
				double last_duration; // 1009
				double delay; // 1010
				{
					CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_1025; // 1025
				}
				{
					Frame* nextvp; // 1032
					double duration; // 1033
				}
			}
		}
	}
} /* size: 0, variables: 2 */

// <01FB072B> sbox/media/videoplayer.cpp:1059
// variable: 1
int queue_picture(VideoState* is, VideoFrame* src, double pts, double duration, int serial)
{
	Frame* vp; // 1061
} /* size: 0, variables: 1 */

// <01FB06D9> sbox/media/videoplayer.cpp:1090
// variables: 4
int audio_decode_frame(VideoState* is)
{
	Frame* af; // 1095
	int nch; // 1106
	int freq; // 1107
	int data_size; // 1108
} /* size: 0, variables: 4 */

// <01FB05ED> sbox/media/videoplayer.cpp:1116
// variables: 12
void analyze_fft_from_samples(VideoState* is, const int16_t* samples, int sampleCount, int channels)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_1121; // 1121
	int samplesToProcess; // 1123
	const int16_t* currentSamples; // 1124
	{
		int samplesToCopy; // 1128
		{
			int i; // 1132
		}
		{
			int i; // 1137
			int j; // 1137
		}
		{
			const int  nouts; // 1156
			{
				int i; // 1157
				{
					float real; // 1159
					float imag; // 1160
					float mag; // 1161
				}
			}
		}
	}
} /* size: 0, variables: 3 */

// <01FAFB9A> sbox/media/videoplayer.cpp:1172
// variables: 17
// function calls: 26
void audio_callback(void* opaque, uint8* stream, int len)
{
	VideoState* is; // 1176
	int originalLen; // 1179
	uint8_t* pStreamStart; // 1180
	int bytes_copied; // 1207
	{
		int len1; // 1193
		{
			int audio_size; // 1186
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 630
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 636
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 634
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 640
			frame_queue_peek_readable(FrameQueue* f); // 1100
			CInterlockedIntT<int, 4>::operator int(); // 1092
			frame_queue_nb_remaining(FrameQueue* f); // 1098
			frame_queue_next(FrameQueue* f); // 1103
			audio_decode_frame(VideoState* is); // 1186
		}
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 75
		V_memcpy(void* dest,
			const void* src,
			int count);  // 1198
		memset(void* __dest,
			int __ch,
			size_t __len);  // 51
		V_memset(void* dest,
			int fill,
			int count);  // 1200
	}
	{
		const int16_t* samples; // 1210
		int sampleCount; // 1211
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 1121
		{
			int samplesToCopy; // 1128
			{
				int i; // 1137
				int j; // 1137
			}
			{
				int i; // 1132
			}
			{
				const int  nouts; // 1156
				{
					int i; // 1157
					{
						float real; // 1159
						float imag; // 1160
						float mag; // 1161
					}
				}
			}
		}
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 1170
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 1170
		analyze_fft_from_samples(VideoState* is,
					const int16_t* samples,
					int sampleCount,
					int channels);  // 1213
	}
	memset(void* __dest,
		int __ch,
		size_t __len);  // 51
	V_memset(void* dest,
		int fill,
		int count);  // 1174
	set_clock_at(Clock* c,
			double pts,
			int serial,
			double time);  // 1220
} /* size: 1929, variables: 4, inline expansions: 3 (81 bytes) */

// <01FAFA39> sbox/media/videoplayer.cpp:1228
// variables: 5
// function calls: 2
void CAudioDecoderThread::Run()
{
	VideoState* is; // 1230
	int ret; // 1231
	{
		AudioFrame af; // 1241
		Frame* frame; // 1248
		double freq; // 1257
		CInterlockedIntT<int, 4>::operator int(); // 1235
		audio_frame_free(AudioFrame* f); // 1251
	}
} /* size: 341, variables: 2 */

// <01FAF6F7> sbox/media/videoplayer.cpp:1269
// variables: 7
// function calls: 7
void CVideoDecoderThread::Run()
{
	VideoState* is; // 1271
	int ret; // 1272
	{
		VideoFrame vf; // 1282
		double pts; // 1316
		double duration; // 1317
		{
			double dpts; // 1299
			double diff; // 1300
			video_frame_free(VideoFrame* f); // 1306
		}
		CInterlockedIntT<int, 4>::operator int(); // 1276
		get_master_sync_type(VideoState* is); // 1295
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 1080
		queue_picture(VideoState* is,
				VideoFrame* src,
				double pts,
				double duration,
				int serial);  // 1319
		video_frame_free(VideoFrame* f); // 1320
	}
} /* size: 1086, variables: 2 */

// <01FB3E35> sbox/media/videoplayer.cpp:1328
// variables: 6
// function calls: 10
int stream_component_open(VideoState* is, int stream_index)
{
	MediaStreamInfo si; // 1330
	{
		bool bKnownCodec; // 1390
		int freq; // 1440
		int nch; // 1441
		{
			int freq; // 1417
			int nch; // 1418
		}
		decoder_init(Decoder* d,
				PacketQueue* queue,
				CThreadEvent* empty_queue_cond);  // 1404
		CAudioDecoderThread::CAudioDecoderThread(
					VideoState* pState);  // 1455
		LogAvError(const char* message); // 25
		LogAvError(const char* message); // 1397
	}
	decoder_init(Decoder* d,
			PacketQueue* queue,
			CThreadEvent* empty_queue_cond);  // 1341
	CVideoDecoderThread::CVideoDecoderThread(
				VideoState* pState);  // 1385
	LogAvError(const char* message); // 25
	LogAvError(const char* message); // 1371
	LogAvError(const char* message); // 25
	LogAvError(const char* message); // 1377
} /* size: 1568, variables: 1, inline expansions: 6 (346 bytes) */

// <01FAF63C> sbox/media/videoplayer.cpp:1328
// variables: 6
int stream_component_open(VideoState* is, int stream_index)
{
	MediaStreamInfo si; // 1330
	{
		bool bKnownCodec; // 1390
		int freq; // 1440
		int nch; // 1441
		{
			int freq; // 1417
			int nch; // 1418
		}
	}
} /* size: 0, variables: 1 */

// <01FAF60F> sbox/media/videoplayer.cpp:1462
bool stream_has_enough_packets(int stream_id, PacketQueue* queue)
{
} /* size: 0 */

// <01FACE65> sbox/media/videoplayer.cpp:1471
// variables: 45
// function calls: 98
void CReadWorkerThread::Run()
{
	VideoState* is; // 1473
	const char* ext; // 1476
	uint8_t probeBuf; // 1479
	bool bProbed; // 1480
	MediaContainerFormat detectedFormat; // 1497
	int nStreams; // 1986
	int videoIndex; // 1987
	int audioIndex; // 1987
	bool bLoaded; // 2018
	{
		FILE* fp; // 1489
		fread(void* __ptr,
			size_t __size,
			size_t __n,
			FILE* __stream);  // 1492
	}
	{
		int64_t dur_us; // 1541
		int loop_count; // 1545
		int loops_done; // 1546
		{
			VideoFrame vf; // 1576
			bool bGotFrame; // 1577
			Frame* fp; // 1601
			{
				bool bShouldLoop; // 1582
				CInterlockedIntT<int, 4>::operator!(); // 1596
			}
			CInterlockedIntT<int, 4>::operator int(); // 1550
			CInterlockedIntT<int, 4>::operator int(); // 1553
			frame_queue_nb_remaining(FrameQueue* f); // 1570
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 943
			Lock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 978
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
					const CThreadMutex& lock,
					const char* pFilename,
					int nLineNumber);  // 591
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 593
			frame_queue_signal(FrameQueue* f); // 1556
			ThreadInterlockedExchange(volatile int32* p,
							int32 value);  // 641
			CInterlockedIntT<int, 4>::operator=(
					int newValue);  // 1557
			video_frame_free(VideoFrame* f); // 1604
		}
	}
	{
		MediaStreamInfo si; // 1642
		int64_t dur_us; // 1646
		int freq; // 1657
		int nch; // 1658
		{
			MediaPacket pkt; // 1717
			int ret; // 1718
			{
				int64_t seek_target; // 1684
				ThreadInterlockedExchange(volatile int32* p,
								int32 value);  // 641
				CInterlockedIntT<int, 4>::operator=(
						int newValue);  // 1688
				CInterlockedIntT<long long int, 8>::operator long long int(); // 1684
				set_clock_at(Clock* c,
						double pts,
						int serial,
						double time);  // 843
				set_clock(Clock* c,
						double pts,
						int serial);  // 1687
				step_to_next_frame(VideoState* is); // 1691
			}
			CInterlockedIntT<int, 4>::operator int(); // 1679
			CInterlockedIntT<int, 4>::operator int(); // 1682
			stream_has_enough_packets(int stream_id,
							PacketQueue* queue);  // 1695
			packet_queue_put_nullpacket(PacketQueue* q,
							int stream_index);  // 1723
			frame_queue_nb_remaining(FrameQueue* f); // 1704
			CInterlockedIntT<int, 4>::operator!(); // 909
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 647
			CInterlockedIntT<long long int, 8>::operator=(
					long long int newValue);  // 911
			ThreadInterlockedExchange(volatile int32* p,
							int32 value);  // 641
			CInterlockedIntT<int, 4>::operator=(
					int newValue);  // 912
			stream_seek(VideoState* is,
					int64_t pos_us);  // 907
			stream_seek(VideoState* is,
					int64_t pos_us);  // 1709
		}
		decoder_init(Decoder* d,
				PacketQueue* queue,
				CThreadEvent* empty_queue_cond);  // 1653
		CAudioDecoderThread::CAudioDecoderThread(
					VideoState* pState);  // 1672
	}
	{
		MediaStreamInfo si; // 1751
		int64_t dur_us; // 1755
		int freq; // 1765
		int nch; // 1766
		{
			MediaPacket pkt; // 1825
			int ret; // 1826
			{
				int64_t seek_target; // 1792
				ThreadInterlockedExchange(volatile int32* p,
								int32 value);  // 641
				CInterlockedIntT<int, 4>::operator=(
						int newValue);  // 1796
				CInterlockedIntT<long long int, 8>::operator long long int(); // 1792
				set_clock_at(Clock* c,
						double pts,
						int serial,
						double time);  // 843
				set_clock(Clock* c,
						double pts,
						int serial);  // 1795
				step_to_next_frame(VideoState* is); // 1799
			}
			CInterlockedIntT<int, 4>::operator int(); // 1787
			CInterlockedIntT<int, 4>::operator int(); // 1790
			stream_has_enough_packets(int stream_id,
							PacketQueue* queue);  // 1803
			packet_queue_put_nullpacket(PacketQueue* q,
							int stream_index);  // 1831
			frame_queue_nb_remaining(FrameQueue* f); // 1812
			CInterlockedIntT<int, 4>::operator!(); // 909
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 647
			CInterlockedIntT<long long int, 8>::operator=(
					long long int newValue);  // 911
			ThreadInterlockedExchange(volatile int32* p,
							int32 value);  // 641
			CInterlockedIntT<int, 4>::operator=(
					int newValue);  // 912
			stream_seek(VideoState* is,
					int64_t pos_us);  // 907
			stream_seek(VideoState* is,
					int64_t pos_us);  // 1817
		}
		decoder_init(Decoder* d,
				PacketQueue* queue,
				CThreadEvent* empty_queue_cond);  // 1761
		CAudioDecoderThread::CAudioDecoderThread(
					VideoState* pState);  // 1780
	}
	{
		MediaStreamInfo si; // 1859
		int64_t dur_us; // 1863
		int freq; // 1873
		int nch; // 1874
		{
			MediaPacket pkt; // 1932
			int ret; // 1933
			{
				int64_t seek_target; // 1900
				ThreadInterlockedExchange(volatile int32* p,
								int32 value);  // 641
				CInterlockedIntT<int, 4>::operator=(
						int newValue);  // 1904
				CInterlockedIntT<long long int, 8>::operator long long int(); // 1900
				set_clock_at(Clock* c,
						double pts,
						int serial,
						double time);  // 843
				set_clock(Clock* c,
						double pts,
						int serial);  // 1903
				step_to_next_frame(VideoState* is); // 1907
			}
			CInterlockedIntT<int, 4>::operator int(); // 1895
			CInterlockedIntT<int, 4>::operator int(); // 1898
			stream_has_enough_packets(int stream_id,
							PacketQueue* queue);  // 1911
			packet_queue_put_nullpacket(PacketQueue* q,
							int stream_index);  // 1938
			frame_queue_nb_remaining(FrameQueue* f); // 1919
			CInterlockedIntT<int, 4>::operator!(); // 909
			ThreadInterlockedExchange64(volatile int64* p,
							int64 value);  // 647
			CInterlockedIntT<long long int, 8>::operator=(
					long long int newValue);  // 911
			ThreadInterlockedExchange(volatile int32* p,
							int32 value);  // 641
			CInterlockedIntT<int, 4>::operator=(
					int newValue);  // 912
			stream_seek(VideoState* is,
					int64_t pos_us);  // 907
			stream_seek(VideoState* is,
					int64_t pos_us);  // 1924
		}
		decoder_init(Decoder* d,
				PacketQueue* queue,
				CThreadEvent* empty_queue_cond);  // 1869
		CAudioDecoderThread::CAudioDecoderThread(
					VideoState* pState);  // 1888
	}
	{
		int i; // 1989
		{
			MediaStreamInfo si; // 1991
		}
	}
	{
		int64_t dur_us; // 2001
	}
	{
		bool bIsPlayingAudio; // 2071
		MediaPacket pkt; // 2087
		int ret; // 2088
		{
			int64_t seek_target; // 2043
			CInterlockedIntT<long long int, 8>::operator long long int(); // 2043
			set_clock_at(Clock* c,
					double pts,
					int serial,
					double time);  // 843
			set_clock(Clock* c,
					double pts,
					int serial);  // 2054
			ThreadInterlockedExchange(volatile int32* p,
							int32 value);  // 641
			CInterlockedIntT<int, 4>::operator=(
					int newValue);  // 2056
			step_to_next_frame(VideoState* is); // 2059
		}
		CInterlockedIntT<int, 4>::operator int(); // 2032
		CInterlockedIntT<int, 4>::operator int(); // 2041
		stream_has_enough_packets(int stream_id,
						PacketQueue* queue);  // 2063
		media_packet_free(MediaPacket* p); // 2120
		packet_queue_put_nullpacket(PacketQueue* q,
						int stream_index);  // 2102
		packet_queue_put_nullpacket(PacketQueue* q,
						int stream_index);  // 2103
		stream_has_enough_packets(int stream_id,
						PacketQueue* queue);  // 2064
		frame_queue_nb_remaining(FrameQueue* f); // 2074
		CInterlockedIntT<int, 4>::operator!(); // 909
		ThreadInterlockedExchange64(volatile int64* p,
						int64 value);  // 647
		CInterlockedIntT<long long int, 8>::operator=(
				long long int newValue);  // 911
		ThreadInterlockedExchange(volatile int32* p,
						int32 value);  // 641
		CInterlockedIntT<int, 4>::operator=(
				int newValue);  // 912
		stream_seek(VideoState* is,
				int64_t pos_us);  // 907
		stream_seek(VideoState* is,
				int64_t pos_us);  // 2079
		frame_queue_nb_remaining(FrameQueue* f); // 2073
	}
	media_detect_format(const uint8_t* buf,
				size_t len);  // 1497
} /* size: 8605, variables: 9, inline expansions: 1 (437 bytes) */

// <01FACC48> sbox/media/videoplayer.cpp:2126
// variable: 1
VideoState* stream_open(const char* filename, const char* pExt, bool bRepeat, bool bVideoOnly, IVideoPlayerProvider* pProvider, HttpStreamSource* httpStream)
{
	VideoState* is; // 2131
} /* size: 0, variables: 1 */

// <01FACA55> sbox/media/videoplayer.cpp:2163
// function calls: 6
void CVideoPlayer::CVideoPlayer(uint managedObject)
{
	IVideoPlayer::IVideoPlayer(); // 2169
	IAudioOutputStreamCallback::IAudioOutputStreamCallback(); // 2169
	VideoPlayer::VideoPlayer(
			unsigned int id);  // 2165
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 2171
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 2169
} /* size: 101, inline expansions: 6 (25 bytes) */

// <01FACA2F> sbox/media/videoplayer.cpp:2163
void CVideoPlayer::CVideoPlayer(uint managedObject)
{
} /* size: 0 */

// <01FAC9CB> sbox/media/videoplayer.cpp:2174
void CVideoPlayer::~CVideoPlayer()
{
} /* size: 62 */

// <01FAC8F1> sbox/media/videoplayer.cpp:2174
// function calls: 2
void CVideoPlayer::~CVideoPlayer()
{
	IVideoPlayer::~IVideoPlayer(); // 2177
	CVideoPlayer::~CVideoPlayer(); // 2177
} /* size: 75, inline expansions: 2 (41 bytes) */

// <01FAB878> sbox/media/videoplayer.cpp:2179
// variables: 3
// function calls: 47
void CVideoPlayer::Play(const char* pUrl, const char* pExt)
{
	HttpStreamSource* httpStream; // 2183
	V_strncmp<int>(const char* s1,
			const char* s2,
			int count);  // 2184
	V_strncmp<int>(const char* s1,
			const char* s2,
			int count);  // 2184
	CThreadMutex::CThreadMutex(
			const char* pName);  // 110
	FrameQueue::FrameQueue(); // 197
	CThreadMutex::CThreadMutex(
			const char* pName);  // 110
	FrameQueue::FrameQueue(); // 197
	CUtlMemory<PacketEntry, int>::ValidateGrowSize(); // 475
	CUtlMemory<PacketEntry, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<PacketEntry, CUtlMemory<PacketEntry, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<PacketEntry, CUtlMemory<PacketEntry, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<PacketEntry, CUtlMemory<PacketEntry, int> >::CUtlVector(); // 56
	CThreadMutex::CThreadMutex(
			const char* pName);  // 56
	PacketQueue::PacketQueue(); // 197
	CUtlMemory<PacketEntry, int>::ValidateGrowSize(); // 475
	CUtlMemory<PacketEntry, int>::CUtlMemory(
			int nGrowSize,
			int nInitAllocationCount);  // 527
	CUtlVectorBase<PacketEntry, CUtlMemory<PacketEntry, int> >::ResetDbgInfo(); // 530
	CUtlVectorBase<PacketEntry, CUtlMemory<PacketEntry, int> >::CUtlVectorBase(
			int growSize,
			int initCapacity);  // 418
	CUtlVector<PacketEntry, CUtlMemory<PacketEntry, int> >::CUtlVector(); // 56
	CThreadMutex::CThreadMutex(
			const char* pName);  // 56
	PacketQueue::PacketQueue(); // 197
	CThreadMutex::CThreadMutex(
			const char* pName);  // 154
	FFTData::FFTData(); // 197
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 197
	MediaStreamInfo::MediaStreamInfo(); // 197
	CInterlockedIntT<int, 4>::CInterlockedIntT(); // 197
	CInterlockedIntT<long long int, 8>::CInterlockedIntT(); // 197
	MediaStreamInfo::MediaStreamInfo(); // 197
	VideoState::VideoState(); // 2131
	{
		int i; // 579
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 580
	}
	frame_queue_init(FrameQueue* f,
			PacketQueue* pktq,
			int max_size);  // 2139
	{
		int i; // 579
		memset(void* __dest,
			int __ch,
			size_t __len);  // 67
		V_memset(void* dest,
			int fill,
			size_t count);  // 580
	}
	frame_queue_init(FrameQueue* f,
			PacketQueue* pktq,
			int max_size);  // 2140
	packet_queue_init(PacketQueue* q); // 2142
	set_clock_at(Clock* c,
			double pts,
			int serial,
			double time);  // 843
	set_clock(Clock* c,
			double pts,
			int serial);  // 857
	init_clock(Clock* c,
			int* queue_serial);  // 2145
	packet_queue_init(PacketQueue* q); // 2143
	set_clock_at(Clock* c,
			double pts,
			int serial,
			double time);  // 843
	set_clock(Clock* c,
			double pts,
			int serial);  // 857
	init_clock(Clock* c,
			int* queue_serial);  // 2146
	set_clock_at(Clock* c,
			double pts,
			int serial,
			double time);  // 843
	set_clock(Clock* c,
			double pts,
			int serial);  // 857
	init_clock(Clock* c,
			int* queue_serial);  // 2147
	CReadWorkerThread::CReadWorkerThread(
				VideoState* pState);  // 2157
	stream_open(const char* filename,
			const char* pExt,
			bool bRepeat,
			bool bVideoOnly,
			IVideoPlayerProvider* pProvider,
			HttpStreamSource* httpStream);  // 2194
} /* size: 1947, variables: 1, inline expansions: 43 (4847 bytes) */

// <01FAAC0C> sbox/media/videoplayer.cpp:2200
// variables: 3
// function calls: 47
void CVideoPlayer::Stop()
{
	VideoState* state; // 2205
	ThreadInterlockedAssignIf(volatile int32* p,
					int32 value,
					int32 comparand);  // 597
	CInterlockedIntT<int, 4>::AssignIf(
		int conditionValue,
		int newValue);  // 2202
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 719
	packet_queue_destroy(PacketQueue* q); // 774
	{
		int i; // 585
	}
	frame_queue_destroy(FrameQueue* f); // 776
	packet_queue_destroy(PacketQueue* q); // 775
	{
		int i; // 585
	}
	frame_queue_destroy(FrameQueue* f); // 777
	stream_close(VideoState* is); // 2210
	CThreadEvent::~CThreadEvent(); // 197
	CThreadMutex::~CThreadMutex(); // 154
	FFTData::~FFTData(); // 197
	CThreadEvent::~CThreadEvent(); // 56
	CThreadMutex::~CThreadMutex(); // 56
	CUtlVectorBase<PacketEntry, CUtlMemory<PacketEntry, int> >::RemoveAll(); // 1798
	CUtlMemory<PacketEntry, int>::IsExternallyAllocated(); // 905
	CUtlMemory<PacketEntry, int>::Purge(); // 903
	CUtlMemory<PacketEntry, int>::Purge(); // 1799
	CUtlVectorBase<PacketEntry, CUtlMemory<PacketEntry, int> >::Purge(); // 560
	ValidateAlignment<PacketEntry>(void); // 508
	CUtlMemory<PacketEntry, int>::Purge(); // 510
	CUtlMemory<PacketEntry, int>::~CUtlMemory(); // 562
	CUtlVectorBase<PacketEntry, CUtlMemory<PacketEntry, int> >::~CUtlVectorBase(); // 410
	CUtlVector<PacketEntry, CUtlMemory<PacketEntry, int> >::~CUtlVector(); // 56
	PacketQueue::~PacketQueue(); // 197
	CThreadEvent::~CThreadEvent(); // 56
	CThreadMutex::~CThreadMutex(); // 56
	CUtlVectorBase<PacketEntry, CUtlMemory<PacketEntry, int> >::RemoveAll(); // 1798
	CUtlMemory<PacketEntry, int>::IsExternallyAllocated(); // 905
	CUtlMemory<PacketEntry, int>::Purge(); // 903
	CUtlMemory<PacketEntry, int>::Purge(); // 1799
	CUtlVectorBase<PacketEntry, CUtlMemory<PacketEntry, int> >::Purge(); // 560
	ValidateAlignment<PacketEntry>(void); // 508
	CUtlMemory<PacketEntry, int>::Purge(); // 510
	CUtlMemory<PacketEntry, int>::~CUtlMemory(); // 562
	CUtlVectorBase<PacketEntry, CUtlMemory<PacketEntry, int> >::~CUtlVectorBase(); // 410
	CUtlVector<PacketEntry, CUtlMemory<PacketEntry, int> >::~CUtlVector(); // 56
	PacketQueue::~PacketQueue(); // 197
	CThreadEvent::~CThreadEvent(); // 110
	CThreadMutex::~CThreadMutex(); // 110
	FrameQueue::~FrameQueue(); // 197
	CThreadEvent::~CThreadEvent(); // 110
	CThreadMutex::~CThreadMutex(); // 110
	FrameQueue::~FrameQueue(); // 197
	VideoState::~VideoState(); // 2211
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 2214
} /* size: 1082, variables: 1, inline expansions: 47 (1869 bytes) */

// <01FAAB9D> sbox/media/videoplayer.cpp:2217
// function call: 1
void CVideoPlayer::Pause()
{
	toggle_pause(VideoState* is); // 2220
} /* size: 81, inline expansions: 1 (39 bytes) */

// <01FAAB2E> sbox/media/videoplayer.cpp:2223
// function call: 1
void CVideoPlayer::Resume()
{
	toggle_pause(VideoState* is); // 2226
} /* size: 81, inline expansions: 1 (39 bytes) */

// <01FAA1B4> sbox/media/videoplayer.cpp:2229
// variables: 13
// function calls: 29
void CVideoPlayer::Update()
{
	{
		bool retry; // 987
		frame_queue_nb_remaining(FrameQueue* f); // 991
		{
			Frame* lastvp; // 993
			Frame* vp; // 994
			frame_queue_peek_last(FrameQueue* f); // 993
			frame_queue_peek(FrameQueue* f); // 994
			frame_queue_next(FrameQueue* f); // 998
			{
				double last_duration; // 1009
				double delay; // 1010
				{
					double duration; // 966
				}
				vp_duration(VideoState* is,
						Frame* vp,
						Frame* nextvp);  // 962
				vp_duration(VideoState* is,
						Frame* vp,
						Frame* nextvp);  // 1009
				get_master_sync_type(VideoState* is); // 945
				{
					double diff; // 947
					double sync_threshold; // 948
					get_clock(Clock* c); // 823
					get_clock(Clock* c); // 947
				}
				compute_target_delay(double delay,
							VideoState* is);  // 1010
				{
					CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_1025; // 1025
					CThreadMutex::Lock(
						const char* pFileName,
						int nLineNumber);  // 943
					Lock(CThreadMutex& lock,
						const char* pFileName,
						int nLineNumber);  // 978
					CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
							const CThreadMutex& lock,
							const char* pFilename,
							int nLineNumber);  // 1025
					CThreadMutex::Unlock(
						const char* pFileName,
						int nLineNumber);  // 944
					Unlock(CThreadMutex& lock,
						const char* pFileName,
						int nLineNumber);  // 983
					CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 1028
					set_clock_at(Clock* c,
							double pts,
							int serial,
							double time);  // 843
					set_clock(Clock* c,
							double pts,
							int serial);  // 976
					update_video_pts(VideoState* is,
							double pts,
							int serial);  // 1027
				}
				frame_queue_nb_remaining(FrameQueue* f); // 1030
				{
					Frame* nextvp; // 1032
					double duration; // 1033
					frame_queue_peek_next(FrameQueue* f); // 1032
					{
						double duration; // 966
					}
					vp_duration(VideoState* is,
							Frame* vp,
							Frame* nextvp);  // 962
					vp_duration(VideoState* is,
							Frame* vp,
							Frame* nextvp);  // 1033
					frame_queue_next(FrameQueue* f); // 1038
					get_master_sync_type(VideoState* is); // 1035
				}
				frame_queue_next(FrameQueue* f); // 1043
			}
		}
		frame_queue_peek_last(FrameQueue* f); // 799
		{
			bool ok; // 802
		}
		video_display(VideoState* is); // 1053
	}
	video_refresh(void* opaque,
			double* remaining_time);  // 2232
} /* size: 2027, inline expansions: 1 (1971 bytes) */

// <01FAA186> sbox/media/videoplayer.cpp:2235
void CVideoPlayer::GetRepeat()
{
} /* size: 23 */

// <01FA9FAF> sbox/media/videoplayer.cpp:2240
// function calls: 7
void CVideoPlayer::Seek(double time)
{
	CInterlockedIntT<int, 4>::operator!(); // 909
	ThreadInterlockedExchange64(volatile int64* p,
					int64 value);  // 647
	CInterlockedIntT<long long int, 8>::operator=(
			long long int newValue);  // 911
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 912
	stream_seek(VideoState* is,
			int64_t pos_us);  // 907
	stream_seek(VideoState* is,
			int64_t pos_us);  // 2243
} /* size: 94, inline expansions: 7 (161 bytes) */

// <01FB378D> sbox/media/videoplayer.cpp:2246
void CVideoPlayer::ReadAudio(uint8* pData, int nLength)
{
} /* size: 35 */

// <01FA9F3E> sbox/media/videoplayer.cpp:2254
void CVideoPlayer::SetRepeat(bool bRepeat)
{
} /* size: 25 */

// <01FA9F10> sbox/media/videoplayer.cpp:2261
void CVideoPlayer::GetDuration()
{
} /* size: 30 */

// <01FA9E36> sbox/media/videoplayer.cpp:2266
// variable: 1
// function calls: 2
void CVideoPlayer::GetPlaybackTime()
{
	double time; // 2268
	get_clock(Clock* c); // 823
	get_clock(Clock* c); // 2268
} /* size: 165, variables: 1, inline expansions: 2 (151 bytes) */

// <01FA9E08> sbox/media/videoplayer.cpp:2272
void CVideoPlayer::IsPaused()
{
} /* size: 23 */

// <01FA9DDA> sbox/media/videoplayer.cpp:2277
void CVideoPlayer::GetWidth()
{
} /* size: 22 */

// <01FA9DAC> sbox/media/videoplayer.cpp:2282
void CVideoPlayer::GetHeight()
{
} /* size: 22 */

// <01FA9D7E> sbox/media/videoplayer.cpp:2287
void CVideoPlayer::IsMuted()
{
} /* size: 9 */

// <01FA9D40> sbox/media/videoplayer.cpp:2292
void CVideoPlayer::SetMuted(bool bMuted)
{
} /* size: 25 */

// <01FA9D12> sbox/media/videoplayer.cpp:2299
void CVideoPlayer::SetVideoOnly()
{
} /* size: 9 */

// <01FA9CD4> sbox/media/videoplayer.cpp:2304
void CVideoPlayer::GetMetadata(const char* pKey)
{
} /* size: 7 */

// <01FA9CA6> sbox/media/videoplayer.cpp:2309
void CVideoPlayer::HasAudioStream()
{
} /* size: 27 */

// <01FA963B> sbox/media/videoplayer.cpp:2314
// variables: 2
// function calls: 24
void CVideoPlayer::GetSpectrum(CUtlVector<float, CUtlMemory<float, int> >* pOutSpectrum)
{
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_2318; // 2318
		const int  spectrumSize; // 2319
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 2318
		CUtlMemory<float, int>::NumAllocated(); // 782
		CUtlMemory<float, int>::IsGrowable(); // 823
		CUtlMemory<float, int>::IsExternallyAllocated(); // 859
		CUtlMemory<float, int>::IsExternallyAllocated(); // 861
		CUtlMemory<float, int>::Grow(
			int num);  // 806
		CUtlVectorBase<float, CUtlMemory<float, int> >::ResetDbgInfo(); // 824
		CUtlVectorBase<float, CUtlMemory<float, int> >::GrowMemory(
				int num);  // 784
		CUtlVectorBase<float, CUtlMemory<float, int> >::GrowVector(
				int num);  // 1445
		CUtlVectorBase<float, CUtlMemory<float, int> >::ShiftElementsRight(
					int elem,
					int num);  // 1446
		CUtlVectorBase<float, CUtlMemory<float, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1437
		CUtlVectorBase<float, CUtlMemory<float, int> >::InsertMultipleBefore(
					int elem,
					int num);  // 1294
		CUtlVectorBase<float, CUtlMemory<float, int> >::AddMultipleToTail(
					int num);  // 1319
		CUtlVectorBase<float, CUtlMemory<float, int> >::RemoveMultipleFromTail(
					int num);  // 1323
		CUtlVectorBase<float, CUtlMemory<float, int> >::SetCount(
			int count);  // 2320
		CUtlMemory<float, int>::Base(); // 112
		CUtlVectorBase<float, CUtlMemory<float, int> >::Base(); // 2321
		memcpy(void* __dest,
			const void* __src,
			size_t __len);  // 91
		V_memcpy(void* dest,
			const void* src,
			size_t count);  // 2321
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 2322
	}
} /* size: 438 */

// <01FA9464> sbox/media/videoplayer.cpp:2325
// variable: 1
// function calls: 6
void CVideoPlayer::GetAmplitude()
{
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_2329; // 2329
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 2329
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 2331
	}
} /* size: 213 */

// <01FA9378> sbox/media/videoplayer.cpp:2340
void CVideoPlayer::OnTextureData(int nWidth, int nHeight, uint8* pData)
{
} /* size: 22 */

// <01FA92F4> sbox/media/videoplayer.cpp:2345
void CVideoPlayer::OnInitAudio(int nSampleRate, int nChannels)
{
} /* size: 13 */

// <01FA92A8> sbox/media/videoplayer.cpp:2350
void CVideoPlayer::OnFreeAudio()
{
} /* size: 13 */

// <01FA925C> sbox/media/videoplayer.cpp:2355
void CVideoPlayer::OnLoaded()
{
} /* size: 13 */

// <01FA9210> sbox/media/videoplayer.cpp:2360
void CVideoPlayer::OnFinished()
{
} /* size: 13 */

// <01FB37F4> sbox/media/videoplayer.cpp:2370
// function call: 1
void CVideoPlayer::UpdateMixerData(uint8* pData, int nLength)
{
	CVideoPlayer::ReadAudio(
			uint8* pData,
			int nLength);  // 2372
} /* size: 66, inline expansions: 1 (21 bytes) */

// <01FA9191> sbox/media/videoplayer.cpp:2370
void CVideoPlayer::UpdateMixerData(uint8* pData, int nLength)
{
} /* size: 0 */

