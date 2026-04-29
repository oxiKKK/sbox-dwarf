
//
// sbox/media/videorecorder.cpp
//
//	referenced by: libengine2.so
//
//	functions: 19
//

// <01FD9E17> sbox/media/videorecorder.cpp:22
// function calls: 61
void CVideoRecorder::~CVideoRecorder()
{
	CInterlockedIntT<int, 4>::operator!(); // 908
	CVideoRecorder::Stop(); // 24
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 25
	CThreadMutex::~CThreadMutex(); // 25
	CThreadEvent::~CThreadEvent(); // 25
	CThreadEvent::~CThreadEvent(); // 25
	CThreadMutex::~CThreadMutex(); // 25
	CThreadEvent::~CThreadEvent(); // 25
	CThreadMutex::~CThreadMutex(); // 25
	CUtlVectorBase<CVideoRecorder::AudioSampleData::RemoveAll(); // 1798
	CUtlMemory<CVideoRecorder::AudioSampleData::IsExternallyAllocated(); // 905
	CUtlMemory<CVideoRecorder::AudioSampleData::Purge(); // 903
	CUtlMemory<CVideoRecorder::AudioSampleData::Purge(); // 1799
	CUtlVectorBase<CVideoRecorder::AudioSampleData::Purge(); // 560
	ValidateAlignment<CVideoRecorder::AudioSampleData*>(void); // 508
	CUtlMemory<CVideoRecorder::AudioSampleData::Purge(); // 510
	CUtlMemory<CVideoRecorder::AudioSampleData::~CUtlMemory(); // 562
	CUtlVectorBase<CVideoRecorder::AudioSampleData::~CUtlVectorBase(); // 410
	CUtlVector<CVideoRecorder::AudioSampleData::~CUtlVector(); // 25
	CUtlVectorBase<CVideoRecorder::VideoFrameData::RemoveAll(); // 1798
	CUtlMemory<CVideoRecorder::VideoFrameData::IsExternallyAllocated(); // 905
	CUtlMemory<CVideoRecorder::VideoFrameData::Purge(); // 903
	CUtlMemory<CVideoRecorder::VideoFrameData::Purge(); // 1799
	CUtlVectorBase<CVideoRecorder::VideoFrameData::Purge(); // 560
	ValidateAlignment<CVideoRecorder::VideoFrameData*>(void); // 508
	CUtlMemory<CVideoRecorder::VideoFrameData::Purge(); // 510
	CUtlMemory<CVideoRecorder::VideoFrameData::~CUtlMemory(); // 562
	CUtlVectorBase<CVideoRecorder::VideoFrameData::~CUtlVectorBase(); // 410
	CUtlVector<CVideoRecorder::VideoFrameData::~CUtlVector(); // 25
	CUtlVectorBase<CVideoRecorder::AudioSampleData::RemoveAll(); // 1798
	CUtlMemory<CVideoRecorder::AudioSampleData::IsExternallyAllocated(); // 905
	CUtlMemory<CVideoRecorder::AudioSampleData::Purge(); // 903
	CUtlMemory<CVideoRecorder::AudioSampleData::Purge(); // 1799
	CUtlVectorBase<CVideoRecorder::AudioSampleData::Purge(); // 560
	ValidateAlignment<CVideoRecorder::AudioSampleData*>(void); // 508
	CUtlMemory<CVideoRecorder::AudioSampleData::Purge(); // 510
	CUtlMemory<CVideoRecorder::AudioSampleData::~CUtlMemory(); // 562
	CUtlVectorBase<CVideoRecorder::AudioSampleData::~CUtlVectorBase(); // 410
	CUtlVector<CVideoRecorder::AudioSampleData::~CUtlVector(); // 25
	CUtlVectorBase<CVideoRecorder::VideoFrameData::RemoveAll(); // 1798
	CUtlMemory<CVideoRecorder::VideoFrameData::IsExternallyAllocated(); // 905
	CUtlMemory<CVideoRecorder::VideoFrameData::Purge(); // 903
	CUtlMemory<CVideoRecorder::VideoFrameData::Purge(); // 1799
	CUtlVectorBase<CVideoRecorder::VideoFrameData::Purge(); // 560
	ValidateAlignment<CVideoRecorder::VideoFrameData*>(void); // 508
	CUtlMemory<CVideoRecorder::VideoFrameData::Purge(); // 510
	CUtlMemory<CVideoRecorder::VideoFrameData::~CUtlMemory(); // 562
	CUtlVectorBase<CVideoRecorder::VideoFrameData::~CUtlVectorBase(); // 410
	CUtlVector<CVideoRecorder::VideoFrameData::~CUtlVector(); // 25
	ValidateAlignment<unsigned char>(void); // 508
	CUtlMemory<unsigned char, int>::IsExternallyAllocated(); // 905
	CUtlMemory<unsigned char, int>::Purge(); // 903
	CUtlMemory<unsigned char, int>::Purge(); // 510
	CUtlMemory<unsigned char, int>::~CUtlMemory(); // 53
	CUtlBuffer::~CUtlBuffer(); // 53
	AudioSampleData::~AudioSampleData(); // 22
} /* size: 412, inline expansions: 61 (1201 bytes) */

// <01FD9DAF> sbox/media/videorecorder.cpp:22
void CVideoRecorder::~CVideoRecorder()
{
} /* size: 36 */

// <01FD91BB> sbox/media/videorecorder.cpp:27
// variables: 15
// function calls: 11
void CVideoRecorder::Initialize(const char* filename, int width, int height, int fps, int bitRateMb, int audioSampleRate, int audioChannels, const char* videoCodec, const char* container, int encodingPreset, const char *, bool transparency)
{
	const char* ext; // 70
	char dirName; // 110
	int encoderPreset; // 116
	int bitrate_kbps; // 141
	{
		float quality; // 145
	}
	{
		int bytesPerInputFrame; // 282
		{
			const uint8_t* videoPrivate; // 200
			int videoPrivateSize; // 201
			uint8_t vp9CodecPrivate; // 203
			const uint8_t* audioPrivate; // 221
			int audioPrivateSize; // 222
		}
		{
			const uint8_t* videoPrivate; // 243
			int videoPrivateSize; // 244
			const uint8_t* audioPrivate; // 257
			int audioPrivateSize; // 258
		}
	}
	CInterlockedIntT<int, 4>::operator int(); // 31
	V_strncpy<long unsigned int>(char* pDest,
					const char* pSrc,
					long unsigned int maxLenInChars);  // 49
	V_ExtractFilePath<long unsigned int>(const char* path,
						char* dest,
						long unsigned int destSize);  // 111
	CVideoWorkerThread::CVideoWorkerThread(
				CVideoRecorder* pRecorder);  // 303
	CAudioWorkerThread::CAudioWorkerThread(
				CVideoRecorder* pRecorder);  // 304
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 306
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 307
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 313
} /* size: 2843, variables: 4, inline expansions: 11 (211 bytes) */

// <01FD8C89> sbox/media/videorecorder.cpp:317
// variables: 8
// function calls: 18
void CVideoRecorder::SetupFramePools()
{
	int ySize; // 319
	int uvSize; // 320
	int totalSize; // 321
	int alphaSize; // 324
	int audioCapacity; // 346
	{
		uint64 i; // 326
		{
			uint8_t* buffer; // 328
			CUtlMemory<CVideoRecorder::VideoFrameData::operator[](
					int i);  // 602
			CUtlVectorBase<CVideoRecorder::VideoFrameData::Element(
				int i);  // 1252
			Construct<CVideoRecorder::VideoFrameData*, CVideoRecorder::VideoFrameData*>(VideoFrameData** pMemory); // 1252
			CUtlMemory<CVideoRecorder::VideoFrameData::NumAllocated(); // 1247
			CUtlMemory<CVideoRecorder::VideoFrameData::Base(); // 112
			CUtlVectorBase<CVideoRecorder::VideoFrameData::Base(); // 368
			CUtlVectorBase<CVideoRecorder::VideoFrameData::ResetDbgInfo(); // 824
			CUtlVectorBase<CVideoRecorder::VideoFrameData::GrowMemory(
					int num);  // 1249
			CUtlVectorBase<CVideoRecorder::VideoFrameData::AddToTail(
					VideoFrameData *& src);  // 343
		}
	}
	{
		uint64 i; // 347
		CUtlMemory<CVideoRecorder::AudioSampleData::operator[](
				int i);  // 602
		CUtlVectorBase<CVideoRecorder::AudioSampleData::Element(
			int i);  // 1252
		Construct<CVideoRecorder::AudioSampleData*, CVideoRecorder::AudioSampleData*>(AudioSampleData** pMemory); // 1252
		CUtlMemory<CVideoRecorder::AudioSampleData::NumAllocated(); // 1247
		CUtlMemory<CVideoRecorder::AudioSampleData::Base(); // 112
		CUtlVectorBase<CVideoRecorder::AudioSampleData::Base(); // 368
		CUtlVectorBase<CVideoRecorder::AudioSampleData::ResetDbgInfo(); // 824
		CUtlVectorBase<CVideoRecorder::AudioSampleData::GrowMemory(
				int num);  // 1249
		CUtlVectorBase<CVideoRecorder::AudioSampleData::AddToTail(
				AudioSampleData *& src);  // 352
	}
} /* size: 573, variables: 5 */

// <01FD7A6D> sbox/media/videorecorder.cpp:358
// variables: 10
// function calls: 68
void CVideoRecorder::VideoProcessingThread()
{
	{
		VideoFrameData* videoData; // 362
		{
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_365; // 365
			{
				int i; // 382
				{
					int j; // 384
					{
						VideoFrameData* tmp; // 388
						CUtlMemory<CVideoRecorder::VideoFrameData::operator[](
								int i);  // 588
						CUtlVectorBase<CVideoRecorder::VideoFrameData::operator[](
								int i);  // 390
					}
					CUtlVectorBase<CVideoRecorder::VideoFrameData::Count(); // 384
					CUtlMemory<CVideoRecorder::VideoFrameData::operator[](
							int i);  // 588
					CUtlVectorBase<CVideoRecorder::VideoFrameData::operator[](
							int i);  // 386
					CUtlMemory<CVideoRecorder::VideoFrameData::operator[](
							int i);  // 588
					CUtlVectorBase<CVideoRecorder::VideoFrameData::operator[](
							int i);  // 386
				}
				CUtlVectorBase<CVideoRecorder::VideoFrameData::Count(); // 382
			}
			{
				int i; // 398
				CUtlMemory<CVideoRecorder::VideoFrameData::operator[](
						int i);  // 588
				CUtlVectorBase<CVideoRecorder::VideoFrameData::operator[](
						int i);  // 400
				CUtlVectorBase<CVideoRecorder::VideoFrameData::Remove(
					int elem);  // 403
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
					int nLineNumber);  // 365
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 372
			CUtlVectorBase<CVideoRecorder::VideoFrameData::Count(); // 367
			CInterlockedIntT<int, 4>::operator int(); // 367
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 370
			CInterlockedIntT<int, 4>::operator!(); // 378
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 417
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 417
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 413
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 415
		}
		{
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_427; // 427
			{
				int i; // 422
				CUtlMemory<CVideoRecorder::VideoFrameData::operator[](
						int i);  // 588
				CUtlVectorBase<CVideoRecorder::VideoFrameData::operator[](
						int i);  // 424
				CUtlMemory<CVideoRecorder::VideoFrameData::operator[](
						int i);  // 588
				CUtlVectorBase<CVideoRecorder::VideoFrameData::operator[](
						int i);  // 425
				CUtlVectorBase<CVideoRecorder::VideoFrameData::Count(); // 422
			}
			{
				int i; // 428
				CUtlVectorBase<CVideoRecorder::VideoFrameData::Count(); // 428
				CUtlMemory<CVideoRecorder::VideoFrameData::Base(); // 112
				CUtlVectorBase<CVideoRecorder::VideoFrameData::Base(); // 368
				CUtlVectorBase<CVideoRecorder::VideoFrameData::ResetDbgInfo(); // 824
				CUtlVectorBase<CVideoRecorder::VideoFrameData::GrowMemory(
						int num);  // 1198
				CUtlMemory<CVideoRecorder::VideoFrameData::operator[](
						int i);  // 602
				CUtlVectorBase<CVideoRecorder::VideoFrameData::Element(
					int i);  // 1201
				CopyConstruct<CVideoRecorder::VideoFrameData*>(VideoFrameData** pMemory,
										VideoFrameData* const& src);  // 1201
				CUtlMemory<CVideoRecorder::VideoFrameData::NumAllocated(); // 1196
				CUtlVectorBase<CVideoRecorder::VideoFrameData::AddToTail(
						VideoFrameData* const& src);  // 429
				CUtlMemory<CVideoRecorder::VideoFrameData::operator[](
						int i);  // 588
				CUtlVectorBase<CVideoRecorder::VideoFrameData::operator[](
						int i);  // 429
			}
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 432
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 943
			Lock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 978
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
					const CThreadMutex& lock,
					const char* pFilename,
					int nLineNumber);  // 427
			CUtlVectorBase<CVideoRecorder::VideoFrameData::RemoveAll(); // 430
		}
		{
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_440; // 440
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 943
			Lock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 978
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
					const CThreadMutex& lock,
					const char* pFilename,
					int nLineNumber);  // 440
			CUtlMemory<CVideoRecorder::VideoFrameData::NumAllocated(); // 1196
			CUtlMemory<CVideoRecorder::VideoFrameData::operator[](
					int i);  // 602
			CUtlVectorBase<CVideoRecorder::VideoFrameData::Element(
				int i);  // 1201
			CopyConstruct<CVideoRecorder::VideoFrameData*>(VideoFrameData** pMemory,
									VideoFrameData* const& src);  // 1201
			CUtlMemory<CVideoRecorder::VideoFrameData::Base(); // 112
			CUtlVectorBase<CVideoRecorder::VideoFrameData::Base(); // 368
			CUtlVectorBase<CVideoRecorder::VideoFrameData::ResetDbgInfo(); // 824
			CUtlVectorBase<CVideoRecorder::VideoFrameData::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<CVideoRecorder::VideoFrameData::AddToTail(
					VideoFrameData* const& src);  // 442
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 443
		}
		CInterlockedIntT<int, 4>::operator!(); // 420
		CUtlVectorBase<CVideoRecorder::VideoFrameData::Count(); // 420
	}
} /* size: 1273 */

// <01FD7183> sbox/media/videorecorder.cpp:447
// variables: 3
// function calls: 32
void CVideoRecorder::AudioProcessingThread()
{
	{
		AudioSampleData* audioData; // 451
		{
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_454; // 454
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 943
			Lock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 978
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
					const CThreadMutex& lock,
					const char* pFilename,
					int nLineNumber);  // 454
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 461
			CUtlVectorBase<CVideoRecorder::AudioSampleData::Count(); // 456
			CInterlockedIntT<int, 4>::operator int(); // 456
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 459
			CInterlockedIntT<int, 4>::operator!(); // 464
			CUtlMemory<CVideoRecorder::AudioSampleData::operator[](
					int i);  // 588
			CUtlVectorBase<CVideoRecorder::AudioSampleData::operator[](
					int i);  // 469
			CUtlVectorBase<CVideoRecorder::AudioSampleData::Remove(
				int elem);  // 470
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 472
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 472
		}
		{
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_481; // 481
			CThreadMutex::Lock(
				const char* pFileName,
				int nLineNumber);  // 943
			Lock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 978
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
					const CThreadMutex& lock,
					const char* pFilename,
					int nLineNumber);  // 481
			CUtlMemory<CVideoRecorder::AudioSampleData::NumAllocated(); // 1196
			CUtlMemory<CVideoRecorder::AudioSampleData::operator[](
					int i);  // 602
			CUtlVectorBase<CVideoRecorder::AudioSampleData::Element(
				int i);  // 1201
			CopyConstruct<CVideoRecorder::AudioSampleData*>(AudioSampleData** pMemory,
									AudioSampleData* const& src);  // 1201
			CUtlMemory<CVideoRecorder::AudioSampleData::Base(); // 112
			CUtlVectorBase<CVideoRecorder::AudioSampleData::Base(); // 368
			CUtlVectorBase<CVideoRecorder::AudioSampleData::ResetDbgInfo(); // 824
			CUtlVectorBase<CVideoRecorder::AudioSampleData::GrowMemory(
					int num);  // 1198
			CUtlVectorBase<CVideoRecorder::AudioSampleData::AddToTail(
					AudioSampleData* const& src);  // 483
			CThreadMutex::Unlock(
				const char* pFileName,
				int nLineNumber);  // 944
			Unlock(CThreadMutex& lock,
				const char* pFileName,
				int nLineNumber);  // 983
			CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 484
		}
	}
} /* size: 554 */

// <01FD7106> sbox/media/videorecorder.cpp:488
void CVideoRecorder::AddVideoFrame(const uint8* rgbData, int64 captureTimeMicroS)
{
} /* size: 44 */

// <01FD5DA7> sbox/media/videorecorder.cpp:493
// variables: 22
// function calls: 62
void CVideoRecorder::AddVideoFrame(const uint8* rgbData, ImageFormat format, int nWidth, int nHeight, int nPitchInBytes, int64 captureTimeMicroS)
{
	int64 encoderPts; // 542
	bool isFixedRate; // 543
	VideoFrameData* frameData; // 555
	const uint8* rgbaData; // 586
	int rgbaStride; // 587
	uint8* convertBuffer; // 588
	int ok; // 607
	{
		int timestamp_ms; // 504
		int rgbaStride; // 521
		uint8* rgbaBuffer; // 522
		int ret; // 526
		{
			int64 frameIndex; // 507
		}
	}
	{
		int64 frameIndex; // 547
		ThreadInterlockedExchangeAdd64(volatile int64* p,
						int64 value);  // 547
	}
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_559; // 559
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 583
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 559
		CInterlockedIntT<int, 4>::operator!(); // 561
		CUtlVectorBase<CVideoRecorder::VideoFrameData::Count(); // 567
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 576
		CUtlMemory<CVideoRecorder::VideoFrameData::operator[](
				int i);  // 588
		CUtlVectorBase<CVideoRecorder::VideoFrameData::operator[](
				int i);  // 580
		CUtlVectorBase<CVideoRecorder::VideoFrameData::Remove(
			int elem);  // 581
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 583
	}
	{
		const uint8* src; // 619
		uint8_t* dst; // 620
		{
			int row; // 621
			{
				const uint8* srcRow; // 623
				uint8_t* dstRow; // 624
				{
					int col; // 625
				}
			}
		}
	}
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_636; // 636
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 636
		CopyConstruct<CVideoRecorder::VideoFrameData*>(VideoFrameData** pMemory,
								VideoFrameData* const& src);  // 1201
		CUtlMemory<CVideoRecorder::VideoFrameData::operator[](
				int i);  // 602
		CUtlVectorBase<CVideoRecorder::VideoFrameData::Element(
			int i);  // 1201
		CUtlMemory<CVideoRecorder::VideoFrameData::Base(); // 112
		CUtlVectorBase<CVideoRecorder::VideoFrameData::Base(); // 368
		CUtlVectorBase<CVideoRecorder::VideoFrameData::ResetDbgInfo(); // 824
		CUtlVectorBase<CVideoRecorder::VideoFrameData::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<CVideoRecorder::VideoFrameData::AddToTail(
				VideoFrameData* const& src);  // 638
		ThreadInterlockedDecrement(volatile int32* p); // 586
		CInterlockedIntT<int, 4>::operator--(); // 639
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 641
	}
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_647; // 647
		CUtlMemory<CVideoRecorder::VideoFrameData::NumAllocated(); // 1196
		CUtlMemory<CVideoRecorder::VideoFrameData::operator[](
				int i);  // 602
		CUtlVectorBase<CVideoRecorder::VideoFrameData::Element(
			int i);  // 1201
		CUtlVectorBase<CVideoRecorder::VideoFrameData::AddToTail(
				VideoFrameData* const& src);  // 652
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 647
		CInterlockedIntT<int, 4>::operator!(); // 649
		ThreadInterlockedExchangeAdd64(volatile int64* p,
						int64 value);  // 659
		CUtlMemory<CVideoRecorder::VideoFrameData::NumAllocated(); // 1196
		CUtlMemory<CVideoRecorder::VideoFrameData::operator[](
				int i);  // 602
		CUtlVectorBase<CVideoRecorder::VideoFrameData::Element(
			int i);  // 1201
		CopyConstruct<CVideoRecorder::VideoFrameData*>(VideoFrameData** pMemory,
								VideoFrameData* const& src);  // 1201
		CUtlMemory<CVideoRecorder::VideoFrameData::Base(); // 112
		CUtlVectorBase<CVideoRecorder::VideoFrameData::Base(); // 368
		CUtlVectorBase<CVideoRecorder::VideoFrameData::ResetDbgInfo(); // 824
		CUtlVectorBase<CVideoRecorder::VideoFrameData::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<CVideoRecorder::VideoFrameData::AddToTail(
				VideoFrameData* const& src);  // 660
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 661
	}
	CInterlockedIntT<int, 4>::operator!(); // 495
	ThreadInterlockedIncrement(volatile int32* p); // 576
	CInterlockedIntT<int, 4>::operator++(); // 532
	CInterlockedIntT<int, 4>::operator!(); // 534
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 664
	ThreadInterlockedDecrement(volatile int32* p); // 586
	CInterlockedIntT<int, 4>::operator--(); // 536
} /* size: 1893, variables: 7, inline expansions: 8 (60 bytes) */

// <01FD5D30> sbox/media/videorecorder.cpp:668
void CVideoRecorder::AddAudioSamples(CAudioMixDeviceBuffers* buffers)
{
} /* size: 50 */

// <01FD5291> sbox/media/videorecorder.cpp:673
// variables: 6
// function calls: 36
void CVideoRecorder::AddAudioSamples(const float* pLeftData, const float* pRightData, int nSampleCount)
{
	AudioSampleData* sampleData; // 678
	const int  totalSamples; // 703
	float* pInterleavedData; // 707
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_681; // 681
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 681
		CUtlVectorBase<CVideoRecorder::AudioSampleData::Count(); // 683
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 688
		CInterlockedIntT<int, 4>::operator int(); // 683
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 686
		CInterlockedIntT<int, 4>::operator!(); // 691
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 700
		CUtlMemory<CVideoRecorder::AudioSampleData::operator[](
				int i);  // 588
		CUtlVectorBase<CVideoRecorder::AudioSampleData::operator[](
				int i);  // 697
		CUtlVectorBase<CVideoRecorder::AudioSampleData::Remove(
			int elem);  // 698
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 700
	}
	{
		int i; // 708
	}
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_716; // 716
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 716
		CUtlMemory<CVideoRecorder::AudioSampleData::NumAllocated(); // 1196
		CUtlMemory<CVideoRecorder::AudioSampleData::operator[](
				int i);  // 602
		CUtlVectorBase<CVideoRecorder::AudioSampleData::Element(
			int i);  // 1201
		CopyConstruct<CVideoRecorder::AudioSampleData*>(AudioSampleData** pMemory,
								AudioSampleData* const& src);  // 1201
		CUtlMemory<CVideoRecorder::AudioSampleData::Base(); // 112
		CUtlVectorBase<CVideoRecorder::AudioSampleData::Base(); // 368
		CUtlVectorBase<CVideoRecorder::AudioSampleData::ResetDbgInfo(); // 824
		CUtlVectorBase<CVideoRecorder::AudioSampleData::GrowMemory(
				int num);  // 1198
		CUtlVectorBase<CVideoRecorder::AudioSampleData::AddToTail(
				AudioSampleData* const& src);  // 717
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 718
	}
	CInterlockedIntT<int, 4>::operator!(); // 675
	CInterlockedIntT<int, 4>::operator!(); // 675
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 707
} /* size: 883, variables: 3, inline expansions: 4 (122 bytes) */

// <01FD505F> sbox/media/videorecorder.cpp:724
// variables: 5
// function calls: 2
void CVideoRecorder::ProcessVideoFrame(VideoFrameData* frameData)
{
	MediaPacket pkt; // 726
	int ret; // 727
	{
		bool keyframe; // 748
		{
			MediaPacket alpha_pkt; // 753
			int alpha_ret; // 754
			media_packet_free(MediaPacket* p); // 760
		}
		media_packet_free(MediaPacket* p); // 773
	}
} /* size: 709, variables: 2 */

// <01FD4A69> sbox/media/videorecorder.cpp:779
// variables: 18
// function calls: 16
void CVideoRecorder::ProcessAudioSamples(AudioSampleData* sampleData)
{
	const float* samples; // 784
	int sampleCount; // 785
	const int  bytesPerSample; // 787
	const int  bytesReceived; // 788
	const int  inputSamplesPerFrame; // 798
	const int  bytesPerInputFrame; // 799
	{
		const float* pcm; // 803
		MediaPacket pkt; // 827
		int ret; // 828
		{
			const int  inSamples; // 808
			const int  outSamples; // 809
			const double  ratio; // 810
			{
				int i; // 811
				{
					double pos; // 813
					int idx; // 814
					float frac; // 815
					int next; // 816
					{
						int ch; // 817
					}
				}
			}
		}
		memmove(void* __dest,
			const void* __src,
			size_t __len);  // 99
		V_memmove(void* dest,
				const void* src,
				int count);  // 831
		CUtlMemory<unsigned char, int>::Base(); // 1484
		CUtlBuffer::Base(); // 832
		CUtlMemory<unsigned char, int>::Base(); // 1484
		CUtlBuffer::Base(); // 803
		media_packet_free(MediaPacket* p); // 845
	}
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 784
	CUtlBuffer::TellPut(); // 785
	CUtlMemory<unsigned char, int>::NumAllocated(); // 1489
	CUtlBuffer::SizeAllocated(); // 791
	CUtlMemory<unsigned char, int>::Base(); // 1484
	CUtlBuffer::Base(); // 794
	memcpy(void* __dest,
		const void* __src,
		size_t __len);  // 75
	V_memcpy(void* dest,
		const void* src,
		int count);  // 794
} /* size: 886, variables: 6, inline expansions: 9 (39 bytes) */

// <01FD482C> sbox/media/videorecorder.cpp:854
// variables: 2
// function calls: 6
void CVideoRecorder::WriteMuxVideoPacket(MediaPacket* pkt, bool keyframe)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_856; // 856
	int64_t duration_us; // 859
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 856
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 874
} /* size: 319, variables: 2, inline expansions: 6 (375 bytes) */

// <01FD460A> sbox/media/videorecorder.cpp:876
// variable: 1
// function calls: 6
void CVideoRecorder::WriteMuxVideoPacketWithAlpha(MediaPacket* pkt, MediaPacket* alpha_pkt, bool keyframe)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_878; // 878
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 878
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 888
} /* size: 235, variables: 1, inline expansions: 6 (363 bytes) */

// <01FD43FB> sbox/media/videorecorder.cpp:890
// variable: 1
// function calls: 6
void CVideoRecorder::WriteMuxAudioPacket(MediaPacket* pkt)
{
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_892; // 892
	CThreadMutex::Lock(
		const char* pFileName,
		int nLineNumber);  // 943
	Lock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 978
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
			const CThreadMutex& lock,
			const char* pFilename,
			int nLineNumber);  // 892
	CThreadMutex::Unlock(
		const char* pFileName,
		int nLineNumber);  // 944
	Unlock(CThreadMutex& lock,
		const char* pFileName,
		int nLineNumber);  // 983
	CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 904
} /* size: 249, variables: 1, inline expansions: 6 (348 bytes) */

// <01FDBF68> sbox/media/videorecorder.cpp:906
// function call: 1
void CVideoRecorder::Stop()
{
	CInterlockedIntT<int, 4>::operator!(); // 908
} /* size: 27, inline expansions: 1 (6 bytes) */

// <01FDB3C7> sbox/media/videorecorder.cpp:906
// variables: 8
// function calls: 37
void CVideoRecorder::Stop()
{
	ThreadInterlockedExchange(volatile int32* p,
					int32 value);  // 641
	CInterlockedIntT<int, 4>::operator=(
			int newValue);  // 911
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_927; // 927
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 927
		ThreadInterlockedExchange(volatile int32* p,
						int32 value);  // 641
		CInterlockedIntT<int, 4>::operator=(
				int newValue);  // 928
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 930
	}
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_932; // 932
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 932
		ThreadInterlockedExchange(volatile int32* p,
						int32 value);  // 641
		CInterlockedIntT<int, 4>::operator=(
				int newValue);  // 933
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 935
	}
	{
		MediaPacket pkt; // 956
		{
			int ret; // 959
			media_packet_free(MediaPacket* p); // 968
		}
		{
			MediaPacket alpha_pkt; // 974
			media_packet_free(MediaPacket* p); // 976
		}
	}
	CInterlockedIntT<int, 4>::operator int(); // 984
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_989; // 989
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 989
		{
			uint64 i; // 990
		}
		CUtlVectorBase<CVideoRecorder::VideoFrameData::RemoveAll(); // 998
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 1000
		CUtlVectorBase<CVideoRecorder::VideoFrameData::RemoveAll(); // 999
	}
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_1003; // 1003
		CThreadMutex::Lock(
			const char* pFileName,
			int nLineNumber);  // 943
		Lock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 978
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::CAutoLockT(
				const CThreadMutex& lock,
				const char* pFilename,
				int nLineNumber);  // 1003
		CUtlVectorBase<CVideoRecorder::AudioSampleData::RemoveAll(); // 1004
		CUtlVectorBase<CVideoRecorder::AudioSampleData::RemoveAll(); // 1005
		CThreadMutex::Unlock(
			const char* pFileName,
			int nLineNumber);  // 944
		Unlock(CThreadMutex& lock,
			const char* pFileName,
			int nLineNumber);  // 983
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> >::~CAutoLockT(); // 1006
	}
} /* size: 1595, inline expansions: 3 (33 bytes) */

// <01FD4167> sbox/media/videorecorder.cpp:906
// variables: 8
void CVideoRecorder::Stop()
{
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_927; // 927
	}
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_932; // 932
	}
	{
		MediaPacket pkt; // 956
		{
			int ret; // 959
		}
		{
			MediaPacket alpha_pkt; // 974
		}
	}
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_989; // 989
		{
			uint64 i; // 990
		}
	}
	{
		CAutoLockT<CThreadMutex, CAutoLockMutexTrait<CThreadMutex> > generated_id_1003; // 1003
	}
} /* size: 0 */

// <01FD40E4> sbox/media/videorecorder.cpp:1014
void CVideoRecorder::CleanupResources()
{
} /* size: 201 */

