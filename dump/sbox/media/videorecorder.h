
//
// sbox/media/videorecorder.h
//
//	referenced by: libengine2.so
//
//	functions: 19
//	class: 1
//

// <012E35BE> sbox/media/videorecorder.h:15
void CVideoRecorder::CVideoRecorder()
{
} /* size: 0 */

// <012E35A2> sbox/media/videorecorder.h:15
inline void CVideoRecorder::CVideoRecorder()
{
} /* size: 0 */

// <01FCBE51> sbox/media/videorecorder.h:15
// member functions: 46
// member variables: 49
// static member variable: 1
// vtable entries: 6
// class size: 7,560
class CVideoRecorder : public IVideoRecorder {
	/* sbox/media/videorecorder.h:42 */
	struct VideoFrameData {
		uint8_t * y; /* 0 8 */
		uint8_t * u; /* 8 8 */
		uint8_t * v; /* 16 8 */
		uint8_t * alpha; /* 24 8 */
		int y_stride; /* 32 4 */
		int uv_stride; /* 36 4 */
		int64_t pts_us; /* 40 8 */
		int64_t sequenceNum; /* 48 8 */
		bool inUse; /* 56 1 */
		bool isFixedRate; /* 57 1 */
	};
	/* sbox/media/videorecorder.h:53 */
	struct AudioSampleData {
		CUtlBuffer data; /* 0 80 */
		bool inUse; /* 80 1 */
		void ~AudioSampleData(AudioSampleData* );
	};
	/* sbox/media/videorecorder.h:131 */
	enum RecorderContainerFormat {
		RECORD_MP4 = 0,
		RECORD_WEBM = 1,
		RECORD_WEBP = 2,
	};
public:
	/* class IVideoRecorder <ancestor>; */ /* 0 8 */
	/* sbox/media/videorecorder.cpp:22 */
	virtual void ~CVideoRecorder(CVideoRecorder* );
	/* sbox/media/videorecorder.cpp:27 */
	virtual bool Initialize(CVideoRecorder* , const char* , int, int, int, int, int, int, const char* , const char* , int, const char* , bool);
	/* sbox/media/videorecorder.cpp:488 */
	virtual bool AddVideoFrame(CVideoRecorder* , const uint8* , int64);
	/* sbox/media/videorecorder.cpp:493 */
	virtual bool AddVideoFrame(CVideoRecorder* , const uint8* , ImageFormat, int, int, int, int64);
	/* sbox/media/videorecorder.cpp:668 */
	virtual bool AddAudioSamples(CVideoRecorder* , CAudioMixDeviceBuffers* );
	/* sbox/media/videorecorder.cpp:673 */
	virtual bool AddAudioSamples(CVideoRecorder* , const float* , const float* , int);
	/* sbox/media/videorecorder.cpp:906 */
	virtual bool Stop(CVideoRecorder* );
private:
	/* sbox/media/videorecorder.cpp:317 */
	bool SetupFramePools(CVideoRecorder* );
	/* sbox/media/videorecorder.cpp:358 */
	void VideoProcessingThread(CVideoRecorder* );
	/* sbox/media/videorecorder.cpp:447 */
	void AudioProcessingThread(CVideoRecorder* );
	/* sbox/media/videorecorder.cpp:724 */
	bool ProcessVideoFrame(CVideoRecorder* , VideoFrameData* );
	/* sbox/media/videorecorder.cpp:779 */
	bool ProcessAudioSamples(CVideoRecorder* , AudioSampleData* );
	/* sbox/media/videorecorder.cpp:854 */
	void WriteMuxVideoPacket(CVideoRecorder* , MediaPacket* , bool);
	/* sbox/media/videorecorder.cpp:876 */
	void WriteMuxVideoPacketWithAlpha(CVideoRecorder* , MediaPacket* , MediaPacket* , bool);
	/* sbox/media/videorecorder.cpp:890 */
	void WriteMuxAudioPacket(CVideoRecorder* , MediaPacket* );
	/* sbox/media/videorecorder.cpp:1014 */
	void CleanupResources(CVideoRecorder* );
	static const uint64 MAX_FRAME_QUEUE_SIZE = 16; /* 0 0 */
	VideoFrameData m_videoFramePool[16]; /* 8 1024 */
	AudioSampleData m_audioFramePool[16]; /* 1032 1408 */
	CUtlVector<CVideoRecorder::VideoFrameData*, CUtlMemory<CVideoRecorder::VideoFrameData*, int> > m_videoQueue; /* 2440 32 */
	CUtlVector<CVideoRecorder::AudioSampleData*, CUtlMemory<CVideoRecorder::AudioSampleData*, int> > m_audioQueue; /* 2472 32 */
	CUtlVector<CVideoRecorder::VideoFrameData*, CUtlMemory<CVideoRecorder::VideoFrameData*, int> > m_freeVideoFrames; /* 2504 32 */
	CUtlVector<CVideoRecorder::AudioSampleData*, CUtlMemory<CVideoRecorder::AudioSampleData*, int> > m_freeAudioFrames; /* 2536 32 */
	CThreadMutex m_videoQueueMutex; /* 2568 72 */
	CThreadEvent m_videoDataAvailableEvent; /* 2640 128 */
	/* sbox/media/videorecorder.h:80 */
	class CVideoWorkerThread : public CThread {
	public:
		/* class CThread <ancestor>; */ /* 0 0 */
		void CVideoWorkerThread(CVideoWorkerThread* , CVideoWorkerThread& );
		void CVideoWorkerThread(CVideoWorkerThread* , const CVideoWorkerThread& );
		/* sbox/media/videorecorder.h:83 */
		void CVideoWorkerThread(CVideoWorkerThread* );
		/* sbox/media/videorecorder.h:85 */
		void CVideoWorkerThread(CVideoWorkerThread* , CVideoRecorder* );
	protected:
		/* sbox/media/videorecorder.h:90 */
		virtual int Run(CVideoWorkerThread* );
	private:
		CVideoRecorder * m_pRecorder; /* 400 8 */
		virtual void ~CVideoWorkerThread(CVideoWorkerThread* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CVideoWorkerThread * m_pVideoWorkerThread; /* 2768 8 */
	CInterlockedInt m_videoThreadRunning __attribute__((__aligned__(4))); /* 2776 4 */
	CInterlockedInt m_videoInFlightCount __attribute__((__aligned__(4))); /* 2780 4 */
	int m_videoEncoderWarningCount; /* 2784 4 */
	CThreadMutex m_audioQueueMutex; /* 2792 72 */
	CThreadEvent m_audioDataAvailableEvent; /* 2864 128 */
	CThreadEvent m_audioQueueSpaceAvailableEvent; /* 2992 128 */
	/* sbox/media/videorecorder.h:106 */
	class CAudioWorkerThread : public CThread {
	public:
		/* class CThread <ancestor>; */ /* 0 0 */
		void CAudioWorkerThread(CAudioWorkerThread* , CAudioWorkerThread& );
		void CAudioWorkerThread(CAudioWorkerThread* , const CAudioWorkerThread& );
		/* sbox/media/videorecorder.h:109 */
		void CAudioWorkerThread(CAudioWorkerThread* );
		/* sbox/media/videorecorder.h:111 */
		void CAudioWorkerThread(CAudioWorkerThread* , CVideoRecorder* );
	protected:
		/* sbox/media/videorecorder.h:116 */
		virtual int Run(CAudioWorkerThread* );
	private:
		CVideoRecorder * m_pRecorder; /* 400 8 */
		virtual void ~CAudioWorkerThread(CAudioWorkerThread* );
	};
	/* tag__fprintf: const_type tag not supported! */;
	CAudioWorkerThread * m_pAudioWorkerThread; /* 3120 8 */
	CInterlockedInt m_audioThreadRunning __attribute__((__aligned__(4))); /* 3128 4 */
	CThreadMutex m_muxMutex; /* 3136 72 */
	RecorderContainerFormat m_containerFormat; /* 3208 4 */
	MediaVideoCodec m_videoCodec; /* 3212 4 */
	bool m_transparency; /* 3216 1 */
	Av1Encoder * m_pAv1Encoder; /* 3224 8 */
	Vp9Encoder * m_pVp9Encoder; /* 3232 8 */
	OpusEnc * m_pOpusEncoder; /* 3240 8 */
	Mp4Mux * m_pMp4Mux; /* 3248 8 */
	WebmMux * m_pWebmMux; /* 3256 8 */
	WebpEncoder * m_pWebpEncoder; /* 3264 8 */
	int m_videoTrack; /* 3272 4 */
	int m_audioTrack; /* 3276 4 */
	int m_targetFps; /* 3280 4 */
	int64 m_videoFrameIndex; /* 3288 8 */
	int64 m_lastMuxedVideoPts; /* 3296 8 */
	int64 m_nextCaptureSequence; /* 3304 8 */
	int64 m_nextExpectedSequence; /* 3312 8 */
	int64 m_audioPts; /* 3320 8 */
	CUtlBuffer m_audioBuffer; /* 3328 80 */
	int m_audioBufferSize; /* 3408 4 */
	int m_audioBufferIndex; /* 3412 4 */
	int m_audioSampleRate; /* 3416 4 */
	int m_audioChannels; /* 3420 4 */
	int m_audioInputFrameSamples; /* 3424 4 */
	float * m_audioResampleBuffer; /* 3432 8 */
	CInterlockedInt m_initialized __attribute__((__aligned__(4))); /* 3440 4 */
	int m_frameWidth; /* 3444 4 */
	int m_frameHeight; /* 3448 4 */
	int m_sourceWidth; /* 3452 4 */
	int m_sourceHeight; /* 3456 4 */
	char m_filename[4096]; /* 3460 4096 */
	virtual bool AddAudioSamples(class CVideoRecorder *, const float  *, const float  *, int); /* linkage=_ZN14CVideoRecorder15AddAudioSamplesEPKfS1_i */
	virtual bool AddVideoFrame(class CVideoRecorder *, const uint8  *, enum ImageFormat, int, int, int, int64); /* linkage=_ZN14CVideoRecorder13AddVideoFrameEPKh11ImageFormatiiix */
	virtual void ~CVideoRecorder(class CVideoRecorder *); /* linkage=_ZN14CVideoRecorderD4Ev */
	virtual bool Initialize(class CVideoRecorder *, const char  *, int, int, int, int, int, int, const char  *, const char  *, int, const char  *, bool); /* linkage=_ZN14CVideoRecorder10InitializeEPKciiiiiiS1_S1_iS1_b */
	virtual bool AddAudioSamples(class CVideoRecorder *, class CAudioMixDeviceBuffers *); /* linkage=_ZN14CVideoRecorder15AddAudioSamplesEP22CAudioMixDeviceBuffers */
	virtual bool AddVideoFrame(class CVideoRecorder *, const uint8  *, int64); /* linkage=_ZN14CVideoRecorder13AddVideoFrameEPKhx */
	/* <1fdbf68> sbox/media/videorecorder.cpp:906 */
	virtual bool Stop(class CVideoRecorder *); /* linkage=_ZN14CVideoRecorder4StopEv */
	void CVideoRecorder(class CVideoRecorder *); /* linkage=_ZN14CVideoRecorderC4Ev */
	bool SetupFramePools(class CVideoRecorder *); /* linkage=_ZN14CVideoRecorder15SetupFramePoolsEv */
	void VideoProcessingThread(class CVideoRecorder *); /* linkage=_ZN14CVideoRecorder21VideoProcessingThreadEv */
	void AudioProcessingThread(class CVideoRecorder *); /* linkage=_ZN14CVideoRecorder21AudioProcessingThreadEv */
	bool ProcessVideoFrame(class CVideoRecorder *, class VideoFrameData *); /* linkage=_ZN14CVideoRecorder17ProcessVideoFrameEPNS_14VideoFrameDataE */
	bool ProcessAudioSamples(class CVideoRecorder *, class AudioSampleData *); /* linkage=_ZN14CVideoRecorder19ProcessAudioSamplesEPNS_15AudioSampleDataE */
	void WriteMuxVideoPacket(class CVideoRecorder *, class MediaPacket *, bool); /* linkage=_ZN14CVideoRecorder19WriteMuxVideoPacketEP11MediaPacketb */
	void WriteMuxVideoPacketWithAlpha(class CVideoRecorder *, class MediaPacket *, class MediaPacket *, bool); /* linkage=_ZN14CVideoRecorder28WriteMuxVideoPacketWithAlphaEP11MediaPacketS1_b */
	void WriteMuxAudioPacket(class CVideoRecorder *, class MediaPacket *); /* linkage=_ZN14CVideoRecorder19WriteMuxAudioPacketEP11MediaPacket */
	void CleanupResources(class CVideoRecorder *); /* linkage=_ZN14CVideoRecorder16CleanupResourcesEv */
} __attribute__((__aligned__(8)));

// <01259B17> sbox/media/videorecorder.h:18
void CVideoRecorder::~CVideoRecorder()
{
} /* size: 0 */

// <01FDAAF0> sbox/media/videorecorder.h:53
void AudioSampleData::~AudioSampleData()
{
} /* size: 0 */

// <01FDAAD3> sbox/media/videorecorder.h:53
inline void AudioSampleData::~AudioSampleData()
{
} /* size: 0 */

// <012E35F1> sbox/media/videorecorder.h:53
void AudioSampleData::AudioSampleData()
{
} /* size: 0 */

// <012E35D5> sbox/media/videorecorder.h:53
inline void AudioSampleData::AudioSampleData()
{
} /* size: 0 */

// <01FD43B1> sbox/media/videorecorder.h:80
void CVideoWorkerThread::~CVideoWorkerThread()
{
} /* size: 19 */

// <01FD4322> sbox/media/videorecorder.h:80
// function call: 1
void CVideoWorkerThread::~CVideoWorkerThread()
{
	CVideoWorkerThread::~CVideoWorkerThread(); // 80
} /* size: 46, inline expansions: 1 (19 bytes) */

// <01FD4305> sbox/media/videorecorder.h:80
inline void CVideoWorkerThread::~CVideoWorkerThread()
{
} /* size: 0 */

// <01FDAC25> sbox/media/videorecorder.h:85
void CVideoWorkerThread::CVideoWorkerThread(CVideoRecorder* pRecorder)
{
} /* size: 0 */

// <01FDAC00> sbox/media/videorecorder.h:85
inline void CVideoWorkerThread::CVideoWorkerThread(CVideoRecorder* pRecorder)
{
} /* size: 0 */

// <01FDABBE> sbox/media/videorecorder.h:90
void CVideoWorkerThread::Run()
{
} /* size: 24 */

// <01FD42BB> sbox/media/videorecorder.h:106
void CAudioWorkerThread::~CAudioWorkerThread()
{
} /* size: 19 */

// <01FD422C> sbox/media/videorecorder.h:106
// function call: 1
void CAudioWorkerThread::~CAudioWorkerThread()
{
	CAudioWorkerThread::~CAudioWorkerThread(); // 106
} /* size: 46, inline expansions: 1 (19 bytes) */

// <01FD420F> sbox/media/videorecorder.h:106
inline void CAudioWorkerThread::~CAudioWorkerThread()
{
} /* size: 0 */

// <01FDABA2> sbox/media/videorecorder.h:111
void CAudioWorkerThread::CAudioWorkerThread(CVideoRecorder* pRecorder)
{
} /* size: 0 */

// <01FDAB7D> sbox/media/videorecorder.h:111
inline void CAudioWorkerThread::CAudioWorkerThread(CVideoRecorder* pRecorder)
{
} /* size: 0 */

// <01FDAB3B> sbox/media/videorecorder.h:116
void CAudioWorkerThread::Run()
{
} /* size: 24 */

