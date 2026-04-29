
//
// animgraph/choreoupdatenode.cpp
//
//	referenced by: libanimationsystem.so
//
//	functions: 102
//

// <0183EEDC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:12
void GetBaseMap(void)
{
} /* size: 0 */

// <0183EE2E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:12
// variables: 2
datamap_t* DataMapInit<CAnimationLayer>(CAnimationLayer *)
{
	const char* pDataMapInit_className; // 12
	typedescription_t dataDesc; // 12
} /* size: 207, variables: 2 */

// <0183EDC2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:28
// variables: 2
datamap_t* DataMapInit<CChoreoInstanceData>(CChoreoInstanceData *)
{
	const char* pDataMapInit_className; // 28
	typedescription_t dataDesc; // 28
} /* size: 0, variables: 2 */

// <0183ED70> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:34
// function call: 1
void CAnimationLayer::CAnimationLayer()
{
	CAnimationLayer::Init(); // 36
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0183ED54> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:34
void CAnimationLayer::CAnimationLayer()
{
} /* size: 0 */

// <0186B2A3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:39
void CAnimationLayer::Init()
{
} /* size: 0 */

// <0186B2CC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:55
void CAnimationLayer::IsActive()
{
} /* size: 12 */

// <0186B2F5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:60
void CAnimationLayer::IsAutokill()
{
} /* size: 0 */

// <0186B31E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:65
void CAnimationLayer::IsKillMe()
{
} /* size: 0 */

// <0186B347> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:70
// function call: 1
void CAnimationLayer::KillMe()
{
	CAnimationLayer::SetFlags(
		int fFlagsToSet);  // 72
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0183ECC8> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:70
void CAnimationLayer::KillMe()
{
} /* size: 0 */

// <0186B3AD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:75
// function call: 1
void CAnimationLayer::Dying()
{
	CAnimationLayer::SetFlags(
		int fFlagsToSet);  // 77
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0183ECAC> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:75
void CAnimationLayer::Dying()
{
} /* size: 0 */

// <0186B413> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:80
void CAnimationLayer::IsDying()
{
} /* size: 0 */

// <0186B43C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:85
// function call: 1
void CAnimationLayer::Dead()
{
	CAnimationLayer::ClearFlags(
			int fFlagsToClear);  // 87
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0183EC74> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:85
void CAnimationLayer::Dead()
{
} /* size: 0 */

// <0186B4A2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:90
void CAnimationLayer::GetKillDelay()
{
} /* size: 0 */

// <0186B4CB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:95
void CAnimationLayer::SetKillDelay(float flKillDelay)
{
} /* size: 0 */

// <0186B4FB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:100
void CAnimationLayer::GetKillRate()
{
} /* size: 0 */

// <0186B524> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:105
void CAnimationLayer::SetKillRate(float flKillRate)
{
} /* size: 0 */

// <0186B554> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:110
void CAnimationLayer::MarkActive()
{
} /* size: 0 */

// <0186B57D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:116
void CAnimationLayer::SetFlags(int fFlagsToSet)
{
} /* size: 0 */

// <0186B5AD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:121
void CAnimationLayer::ClearFlags(int fFlagsToClear)
{
} /* size: 0 */

// <0186B5E3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:126
void CAnimationLayer::ClearFlags()
{
} /* size: 0 */

// <0186B60C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:131
void CAnimationLayer::GetCycle()
{
} /* size: 0 */

// <0186B635> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:136
void CAnimationLayer::SetCycle(float flCycle)
{
	{
	}
} /* size: 0 */

// <0183EAE2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:136
// variables: 2
void CAnimationLayer::SetCycle(float flCycle)
{
	const char   __FUNCTION__; // 32579
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 138
	}
} /* size: 0, variables: 1 */

// <0186B671> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:142
void CAnimationLayer::GetPrevCycle()
{
} /* size: 0 */

// <0186B69A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:147
void CAnimationLayer::SetPrevCycle(float flCycle)
{
} /* size: 0 */

// <0186B6CA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:152
void CAnimationLayer::GetWeight()
{
} /* size: 0 */

// <0186B6F3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:157
void CAnimationLayer::SetWeight(float flWeight)
{
} /* size: 0 */

// <0186B723> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:163
// function call: 1
void CAnimationLayer::GetSequence()
{
	HSequence::HSequence(
			int32 value);  // 165
} /* size: 0, inline expansions: 1 (0 bytes) */

// <0183EA3E> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:163
void CAnimationLayer::GetSequence()
{
} /* size: 0 */

// <0186B781> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:168
// variables: 2
// function calls: 4
void CAnimationLayer::SetSequence(HSequence hSequence, bool bResetCycle)
{
	HSequence hOldSequence; // 170
	bool bChanged; // 171
	HSequence::HSequence(
			int32 value);  // 165
	CAnimationLayer::GetSequence(); // 170
	HSequence::operator==(
			const HSequence& other);  // 171
	CAnimationLayer::SetSequence(
			HSequence hSequence,
			bool bResetCycle);  // 168
} /* size: 0, variables: 2, inline expansions: 4 (0 bytes) */

// <0183E9F2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:168
// variables: 2
void CAnimationLayer::SetSequence(HSequence hSequence, bool bResetCycle)
{
	HSequence hOldSequence; // 170
	bool bChanged; // 171
} /* size: 0, variables: 2 */

// <0186B8CE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:188
void CAnimationLayer::IsSequenceFinished()
{
} /* size: 0 */

// <0186B8F7> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:193
void CAnimationLayer::SetSequenceFinished(bool bFinished)
{
} /* size: 0 */

// <0186B927> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:198
void CAnimationLayer::IsLooping()
{
} /* size: 0 */

// <0186B950> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:203
void CAnimationLayer::SetLooping(bool bLooping)
{
} /* size: 0 */

// <0186B980> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:208
void CAnimationLayer::GetOrder()
{
} /* size: 8 */

// <0186B9A9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:213
void CAnimationLayer::SetOrder(int nOrder)
{
} /* size: 0 */

// <0186B9D9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:218
void CAnimationLayer::GetPriority()
{
} /* size: 0 */

// <0186BA02> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:223
void CAnimationLayer::SetPriority(int nPriority)
{
} /* size: 0 */

// <0183E6D0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:228
// variables: 5
// function calls: 2
void CAnimationLayer::GetOperation(CAnimationDecodeOp* pOp, const CModel* pModel)
{
	{
		const ISequence* pSeqDesc; // 243
		{
			float flDuration; // 246
			float flElapsedTime; // 247
			{
				float flBlendAmount; // 252
			}
			{
				float flBlendAmount; // 258
				SimpleSpline(float value); // 259
			}
		}
	}
	HSequence::SetRaw(
		int32 other);  // 232
} /* size: 379, inline expansions: 1 (3 bytes) */

// <0183E67D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:267
void CAnimationLayer::OnCycleChanged(CAnimGraphUpdateContext& context, float flNewCycle)
{
} /* size: 0 */

// <0183E62A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:274
void CAnimationLayer::OnSequenceChanged(CAnimGraphUpdateContext& context, int32 newSequence)
{
} /* size: 0 */

// <0183E551> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:286
// variables: 2
// function calls: 3
void CChoreoInstanceData::CChoreoInstanceData()
{
	{
		int i; // 288
	}
	CAnimationLayer::Init(); // 36
	CAnimationLayer::CAnimationLayer(); // 286
	{
		int i; // 288
		CAnimationLayer::Init(); // 290
	}
} /* size: 257, inline expansions: 2 (110 bytes) */

// <0183E527> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:286
// variable: 1
void CChoreoInstanceData::CChoreoInstanceData()
{
	{
		int i; // 288
	}
} /* size: 0 */

// <0183DD8D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:295
// variables: 7
// function calls: 34
void CChoreoInstanceData::AnimationFrameAdvance(CAnimGraphUpdateContext& context)
{
	float flAdvance; // 297
	int nCount; // 299
	{
		int i; // 300
		{
			CAnimationLayer* pLayer; // 302
			{
				float flKillDelay; // 308
				{
					float flWeight; // 317
					CAnimationLayer::GetKillRate(); // 318
					clamp<float, float>(const float& val,
								const float& minVal,
								const float& maxVal);  // 319
					CAnimationLayer::SetWeight(
							float flWeight);  // 319
				}
				CAnimationLayer::GetKillDelay(); // 308
				clamp<float, float>(const float& val,
							const float& minVal,
							const float& maxVal);  // 312
				CAnimationLayer::SetKillDelay(
						float flKillDelay);  // 313
				CAnimationLayer::GetWeight(); // 315
				CChoreoInstanceData::FastRemoveLayer(
						CAnimGraphUpdateContext& context,
						int iLayer);  // 324
				CAnimationLayer::SetFlags(
					int fFlagsToSet);  // 77
				CAnimationLayer::Dying(); // 326
			}
			{
				float flPlaybackDirection; // 350
				CAnimationLayer::IsLooping(); // 351
				CAnimationLayer::GetPrevCycle(); // 351
				CAnimationLayer::GetCycle(); // 351
				HSequence::HSequence(
						int32 value);  // 165
				CAnimationLayer::GetSequence(); // 351
				CAnimationLayer::GetPrevCycle(); // 353
				CAnimationLayer::GetCycle(); // 353
				HSequence::HSequence(
						int32 value);  // 165
				CAnimationLayer::GetSequence(); // 353
			}
			CAnimationLayer::IsKillMe(); // 306
			CAnimationLayer::IsSequenceFinished(); // 331
			CAnimationLayer::IsAutokill(); // 331
			CAnimationLayer::SetWeight(
					float flWeight);  // 333
			CAnimationLayer::SetFlags(
				int fFlagsToSet);  // 72
			CAnimationLayer::KillMe(); // 334
			CAnimationLayer::IsActive(); // 304
			CAnimationLayer::IsDying(); // 337
			CAnimationLayer::GetWeight(); // 341
			CAnimationLayer::Init(); // 343
			CAnimationLayer::SetFlags(
				int fFlagsToSet);  // 77
			CAnimationLayer::Dying(); // 344
			CAnimationLayer::ClearFlags(
					int fFlagsToClear);  // 87
			CAnimationLayer::Dead(); // 339
			CAnimationLayer::GetWeight(); // 348
		}
	}
} /* size: 500, variables: 2 */

// <0183D98D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:359
// variables: 2
// function calls: 13
void CChoreoInstanceData::AddLayeredSequence(CAnimGraphUpdateContext& context, HSequence hSequence, int iPriority)
{
	int i; // 361
	{
		CAnimationLayer* pLayer; // 365
		CAnimationLayer::SetPrevCycle(
				float flCycle);  // 368
		HSequence::HSequence(
				int32 value);  // 165
		CAnimationLayer::GetSequence(); // 170
		HSequence::operator==(
				const HSequence& other);  // 171
		CAnimationLayer::SetSequence(
				HSequence hSequence,
				bool bResetCycle);  // 168
		CAnimationLayer::SetSequence(
				HSequence hSequence,
				bool bResetCycle);  // 369
		CAnimationLayer::SetWeight(
				float flWeight);  // 370
		CAnimationLayer::SetSequenceFinished(
					bool bFinished);  // 371
		CChoreoInstanceData::GetAnimOverlay(
				int iIndex);  // 365
		CAnimationLayer::SetLooping(
				bool bLooping);  // 372
	}
	CChoreoInstanceData::GetAnimOverlay(
			int iIndex);  // 428
	CAnimationLayer::IsActive(); // 428
	CChoreoInstanceData::IsValidLayer(
			const CAnimGraphUpdateContext& context,
			int iLayer);  // 363
} /* size: 123, variables: 1, inline expansions: 3 (26 bytes) */

// <0186BA32> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:381
// variable: 1
// function calls: 11
void CChoreoInstanceData::RemoveLayer(CAnimGraphUpdateContext& context, int iLayer, float flKillRate, float flKillDelay)
{
	CAnimationLayer* pLayer; // 386
	CChoreoInstanceData::GetAnimOverlay(
			int iIndex);  // 428
	CAnimationLayer::IsActive(); // 428
	CChoreoInstanceData::IsValidLayer(
			const CAnimGraphUpdateContext& context,
			int iLayer);  // 383
	CChoreoInstanceData::GetAnimOverlay(
			int iIndex);  // 386
	CAnimationLayer::GetWeight(); // 389
	CAnimationLayer::SetKillRate(
			float flKillRate);  // 389
	CAnimationLayer::SetFlags(
		int fFlagsToSet);  // 72
	CAnimationLayer::KillMe(); // 398
	CAnimationLayer::SetKillDelay(
			float flKillDelay);  // 396
	CAnimationLayer::SetKillRate(
			float flKillRate);  // 393
	CChoreoInstanceData::RemoveLayer(
			CAnimGraphUpdateContext& context,
			int iLayer,
			float flKillRate,
			float flKillDelay);  // 381
} /* size: 0, variables: 1, inline expansions: 11 (0 bytes) */

// <0183D92F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:381
// variable: 1
void CChoreoInstanceData::RemoveLayer(CAnimGraphUpdateContext& context, int iLayer, float flKillRate, float flKillDelay)
{
	CAnimationLayer* pLayer; // 386
} /* size: 0, variables: 1 */

// <0186BD18> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:402
// variable: 1
// function calls: 3
void CChoreoInstanceData::FastRemoveLayer(CAnimGraphUpdateContext& context, int iLayer)
{
	CAnimationLayer* pRemoveLayer; // 408
	CChoreoInstanceData::GetAnimOverlay(
			int iIndex);  // 428
	CAnimationLayer::IsActive(); // 428
	CChoreoInstanceData::IsValidLayer(
			const CAnimGraphUpdateContext& context,
			int iLayer);  // 404
} /* size: 0, variables: 1, inline expansions: 3 (0 bytes) */

// <01866138> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:402
// variables: 4
// function calls: 5
void CChoreoInstanceData::FastRemoveLayer(int iLayer, CAnimGraphUpdateContext& context)
{
	CAnimationLayer* pRemoveLayer; // 408
	CChoreoInstanceData::GetAnimOverlay(
			int iIndex);  // 408
	{
		int nCount; // 410
		{
			int j; // 411
			{
				CAnimationLayer* pThisLayer; // 413
				CAnimationLayer::GetOrder(); // 414
				CAnimationLayer::IsActive(); // 414
				CAnimationLayer::SetOrder(
					int nOrder);  // 416
			}
		}
	}
	CAnimationLayer::Init(); // 420
} /* size: 123, variables: 1, inline expansions: 2 (71 bytes) */

// <0183D8C0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:402
// variables: 4
void CChoreoInstanceData::FastRemoveLayer(CAnimGraphUpdateContext& context, int iLayer)
{
	CAnimationLayer* pRemoveLayer; // 408
	{
		int nCount; // 410
		{
			int j; // 411
			{
				CAnimationLayer* pThisLayer; // 413
			}
		}
	}
} /* size: 0, variables: 1 */

// <0186BE3D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:426
// function calls: 2
void CChoreoInstanceData::IsValidLayer(const CAnimGraphUpdateContext& context, int iLayer)
{
	CChoreoInstanceData::GetAnimOverlay(
			int iIndex);  // 428
	CAnimationLayer::IsActive(); // 428
} /* size: 0, inline expansions: 2 (0 bytes) */

// <0183D889> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:426
void CChoreoInstanceData::IsValidLayer(const CAnimGraphUpdateContext& context, int iLayer)
{
} /* size: 0 */

// <0186BEED> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:432
// variables: 7
// function calls: 15
void CChoreoInstanceData::SetLayerPriority(CAnimGraphUpdateContext& context, int iLayer, int iPriority)
{
	CAnimationLayer* pLayer; // 439
	CChoreoInstanceData::GetAnimOverlay(
			int iIndex);  // 428
	CAnimationLayer::IsActive(); // 428
	CChoreoInstanceData::IsValidLayer(
			const CAnimGraphUpdateContext& context,
			int iLayer);  // 434
	CChoreoInstanceData::GetAnimOverlay(
			int iIndex);  // 439
	CAnimationLayer::GetPriority(); // 440
	{
		int i; // 447
		int nCount; // 448
		int iNewOrder; // 461
		{
			CAnimationLayer* pThisLayer; // 451
			CAnimationLayer::IsActive(); // 452
			CAnimationLayer::GetOrder(); // 454
			CAnimationLayer::SetOrder(
				int nOrder);  // 456
		}
		{
			CAnimationLayer* pThisLayer; // 464
			CAnimationLayer::IsActive(); // 465
			CAnimationLayer::GetPriority(); // 467
		}
		{
			CAnimationLayer* pThisLayer; // 476
			CAnimationLayer::IsActive(); // 477
			CAnimationLayer::SetOrder(
				int nOrder);  // 481
		}
		CAnimationLayer::SetOrder(
			int nOrder);  // 486
	}
	CAnimationLayer::SetPriority(
			int nPriority);  // 488
	CChoreoInstanceData::SetLayerPriority(
			CAnimGraphUpdateContext& context,
			int iLayer,
			int iPriority);  // 432
} /* size: 191, variables: 1, inline expansions: 7 (194 bytes) */

// <0183D7DA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:432
// variables: 7
void CChoreoInstanceData::SetLayerPriority(CAnimGraphUpdateContext& context, int iLayer, int iPriority)
{
	CAnimationLayer* pLayer; // 439
	{
		int i; // 447
		int nCount; // 448
		int iNewOrder; // 461
		{
			CAnimationLayer* pThisLayer; // 451
		}
		{
			CAnimationLayer* pThisLayer; // 464
		}
		{
			CAnimationLayer* pThisLayer; // 476
		}
	}
} /* size: 0, variables: 1 */

// <0186C337> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:495
// variable: 1
// function calls: 5
void CChoreoInstanceData::GetLayerWeight(const CAnimGraphUpdateContext& context, int iLayer)
{
	const CAnimationLayer* pLayer; // 500
	CChoreoInstanceData::GetAnimOverlay(
			int iIndex);  // 428
	CAnimationLayer::IsActive(); // 428
	CChoreoInstanceData::IsValidLayer(
			const CAnimGraphUpdateContext& context,
			int iLayer);  // 497
	CChoreoInstanceData::GetAnimOverlay(
			int iIndex);  // 500
	CAnimationLayer::GetWeight(); // 501
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <0183D796> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:495
// variable: 1
void CChoreoInstanceData::GetLayerWeight(const CAnimGraphUpdateContext& context, int iLayer)
{
	const CAnimationLayer* pLayer; // 500
} /* size: 0, variables: 1 */

// <0186C4B0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:505
// variable: 1
// function calls: 7
void CChoreoInstanceData::SetLayerWeight(CAnimGraphUpdateContext& context, int iLayer, float flWeight)
{
	CAnimationLayer* pLayer; // 512
	CChoreoInstanceData::GetAnimOverlay(
			int iIndex);  // 428
	CAnimationLayer::IsActive(); // 428
	CChoreoInstanceData::IsValidLayer(
			const CAnimGraphUpdateContext& context,
			int iLayer);  // 507
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 510
	CChoreoInstanceData::GetAnimOverlay(
			int iIndex);  // 512
	CAnimationLayer::SetWeight(
			float flWeight);  // 513
	CChoreoInstanceData::SetLayerWeight(
			CAnimGraphUpdateContext& context,
			int iLayer,
			float flWeight);  // 505
} /* size: 0, variables: 1, inline expansions: 7 (0 bytes) */

// <0183D745> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:505
// variable: 1
void CChoreoInstanceData::SetLayerWeight(CAnimGraphUpdateContext& context, int iLayer, float flWeight)
{
	CAnimationLayer* pLayer; // 512
} /* size: 0, variables: 1 */

// <0186C6D3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:518
// variable: 1
// function calls: 5
void CChoreoInstanceData::IsLayerLooping(const CAnimGraphUpdateContext& context, int iLayer)
{
	const CAnimationLayer* pLayer; // 523
	CChoreoInstanceData::GetAnimOverlay(
			int iIndex);  // 428
	CAnimationLayer::IsActive(); // 428
	CChoreoInstanceData::IsValidLayer(
			const CAnimGraphUpdateContext& context,
			int iLayer);  // 520
	CChoreoInstanceData::GetAnimOverlay(
			int iIndex);  // 523
	CAnimationLayer::IsLooping(); // 524
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <0183D701> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:518
// variable: 1
void CChoreoInstanceData::IsLayerLooping(const CAnimGraphUpdateContext& context, int iLayer)
{
	const CAnimationLayer* pLayer; // 523
} /* size: 0, variables: 1 */

// <0186C84C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:528
// variable: 1
// function calls: 5
void CChoreoInstanceData::SetLayerLooping(CAnimGraphUpdateContext& context, int iLayer, bool bLooping)
{
	CAnimationLayer* pLayer; // 533
	CChoreoInstanceData::GetAnimOverlay(
			int iIndex);  // 428
	CAnimationLayer::IsActive(); // 428
	CChoreoInstanceData::IsValidLayer(
			const CAnimGraphUpdateContext& context,
			int iLayer);  // 530
	CChoreoInstanceData::GetAnimOverlay(
			int iIndex);  // 533
	CAnimationLayer::SetLooping(
			bool bLooping);  // 534
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <0183D6B0> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:528
// variable: 1
void CChoreoInstanceData::SetLayerLooping(CAnimGraphUpdateContext& context, int iLayer, bool bLooping)
{
	CAnimationLayer* pLayer; // 533
} /* size: 0, variables: 1 */

// <0186C9D3> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:538
// variable: 1
// function calls: 6
void CChoreoInstanceData::SetLayerNoRestore(CAnimGraphUpdateContext& context, int iLayer, bool bNoRestore)
{
	CAnimationLayer* pLayer; // 543
	CChoreoInstanceData::GetAnimOverlay(
			int iIndex);  // 428
	CAnimationLayer::IsActive(); // 428
	CChoreoInstanceData::IsValidLayer(
			const CAnimGraphUpdateContext& context,
			int iLayer);  // 540
	CChoreoInstanceData::GetAnimOverlay(
			int iIndex);  // 543
	CAnimationLayer::SetFlags(
		int fFlagsToSet);  // 546
	CChoreoInstanceData::SetLayerNoRestore(
				CAnimGraphUpdateContext& context,
				int iLayer,
				bool bNoRestore);  // 538
} /* size: 0, variables: 1, inline expansions: 6 (0 bytes) */

// <0183D65F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:538
// variable: 1
void CChoreoInstanceData::SetLayerNoRestore(CAnimGraphUpdateContext& context, int iLayer, bool bNoRestore)
{
	CAnimationLayer* pLayer; // 543
} /* size: 0, variables: 1 */

// <0186CBA4> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:555
// variable: 1
// function calls: 5
void CChoreoInstanceData::GetLayerCycle(const CAnimGraphUpdateContext& context, int iLayer)
{
	const CAnimationLayer* pLayer; // 560
	CChoreoInstanceData::GetAnimOverlay(
			int iIndex);  // 428
	CAnimationLayer::IsActive(); // 428
	CChoreoInstanceData::IsValidLayer(
			const CAnimGraphUpdateContext& context,
			int iLayer);  // 557
	CChoreoInstanceData::GetAnimOverlay(
			int iIndex);  // 560
	CAnimationLayer::GetCycle(); // 561
} /* size: 0, variables: 1, inline expansions: 5 (0 bytes) */

// <0183D61B> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:555
// variable: 1
void CChoreoInstanceData::GetLayerCycle(const CAnimGraphUpdateContext& context, int iLayer)
{
	const CAnimationLayer* pLayer; // 560
} /* size: 0, variables: 1 */

// <0186CD1D> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:565
// variable: 1
// function calls: 8
void CChoreoInstanceData::SetLayerCycle(CAnimGraphUpdateContext& context, int iLayer, float flCycle)
{
	CAnimationLayer* pLayer; // 570
	CChoreoInstanceData::GetAnimOverlay(
			int iIndex);  // 428
	CAnimationLayer::IsActive(); // 428
	CChoreoInstanceData::IsValidLayer(
			const CAnimGraphUpdateContext& context,
			int iLayer);  // 567
	CChoreoInstanceData::GetAnimOverlay(
			int iIndex);  // 570
	CAnimationLayer::IsLooping(); // 571
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 573
	{
	}
	CAnimationLayer::SetCycle(
		float flCycle);  // 576
	CChoreoInstanceData::SetLayerCycle(
			CAnimGraphUpdateContext& context,
			int iLayer,
			float flCycle);  // 565
} /* size: 0, variables: 1, inline expansions: 8 (0 bytes) */

// <0183D5CA> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:565
// variable: 1
void CChoreoInstanceData::SetLayerCycle(CAnimGraphUpdateContext& context, int iLayer, float flCycle)
{
	CAnimationLayer* pLayer; // 570
} /* size: 0, variables: 1 */

// <0186CF8A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:581
// variable: 1
// function calls: 10
void CChoreoInstanceData::SetLayerCycle(CAnimGraphUpdateContext& context, int iLayer, float flCycle, float flPrevCycle)
{
	CAnimationLayer* pLayer; // 586
	CChoreoInstanceData::GetAnimOverlay(
			int iIndex);  // 428
	CAnimationLayer::IsActive(); // 428
	CChoreoInstanceData::IsValidLayer(
			const CAnimGraphUpdateContext& context,
			int iLayer);  // 583
	CChoreoInstanceData::GetAnimOverlay(
			int iIndex);  // 586
	CAnimationLayer::IsLooping(); // 587
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 589
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 590
	{
	}
	CAnimationLayer::SetCycle(
		float flCycle);  // 593
	CAnimationLayer::SetPrevCycle(
			float flCycle);  // 594
	CChoreoInstanceData::SetLayerCycle(
			CAnimGraphUpdateContext& context,
			int iLayer,
			float flCycle,
			float flPrevCycle);  // 581
} /* size: 0, variables: 1, inline expansions: 10 (0 bytes) */

// <0183D56C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:581
// variable: 1
void CChoreoInstanceData::SetLayerCycle(CAnimGraphUpdateContext& context, int iLayer, float flCycle, float flPrevCycle)
{
	CAnimationLayer* pLayer; // 586
} /* size: 0, variables: 1 */

// <0186D286> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:599
void CChoreoInstanceData::GetPoseHandle()
{
} /* size: 0 */

// <0186D2AF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:605
void CChoreoInstanceData::SetPoseHandle(PoseHandle hPose)
{
} /* size: 0 */

// <0183D1AD> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:611
// variables: 11
// function calls: 9
void CChoreoInstanceData::AllocateLayer(CAnimGraphUpdateContext& context, int iPriority)
{
	int iNewOrder; // 614
	int iOpenLayer; // 615
	int nCount; // 617
	const char   __FUNCTION__; // 32714
	CAnimationLayer* pLayer; // 651
	{
		int i; // 618
		{
			CAnimationLayer* pLayer; // 620
			CAnimationLayer::GetPriority(); // 623
			CAnimationLayer::IsActive(); // 621
			CAnimationLayer::IsDying(); // 628
		}
	}
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 638
	}
	{
		int i; // 641
		{
			CAnimationLayer* pLayer; // 643
			int nOrder; // 644
			CAnimationLayer::GetOrder(); // 644
			CAnimationLayer::SetOrder(
				int nOrder);  // 647
		}
	}
	CChoreoInstanceData::GetAnimOverlay(
			int iIndex);  // 651
	CAnimationLayer::SetFlags(
		int fFlagsToSet);  // 654
	CAnimationLayer::SetOrder(
		int nOrder);  // 655
	CAnimationLayer::SetPriority(
			int nPriority);  // 656
} /* size: 0, variables: 5, inline expansions: 4 (47 bytes) */

// <0186D2DF> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:665
void CChoreoInstanceData::GetNumAnimOverlays()
{
} /* size: 10 */

// <0186D308> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:671
void CChoreoInstanceData::GetAnimOverlay(int iIndex)
{
} /* size: 0 */

// <0183D11F> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:688
void CChoreoInstanceData::VerifyOrder()
{
} /* size: 0 */

// <0183CFE2> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:720
// function calls: 2
void CChoreoInstanceData::SequenceDuration(const CModel* pModel, HSequence hSequence)
{
	HSequence::operator==(
			const HSequence& other);  // 722
	HSequence::GetRaw(); // 729
} /* size: 0, inline expansions: 2 (0 bytes) */

// <0183CE6C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:739
// function calls: 4
void CChoreoUpdateNode::CChoreoUpdateNode(CAnimGraphInitContext& initContext)
{
	PackedHandleID::PackedHandleID(); // 22
	CPackedHandle<CChoreoInstanceData>::CPackedHandle(); // 740
	PackedHandleID::operator=(
			uint32 id);  // 127
	CPackedDataT<true>::AddItem<CChoreoInstanceData>(
					CPackedHandle<CChoreoInstanceData>* handleOut);  // 742
} /* size: 90, inline expansions: 4 (47 bytes) */

// <0183CE46> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:739
void CChoreoUpdateNode::CChoreoUpdateNode(CAnimGraphInitContext& initContext)
{
} /* size: 0 */

// <0183CCA1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:746
// function calls: 5
void CChoreoUpdateNode::Update(CAnimGraphUpdateContext& context)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 748
} /* size: 103, inline expansions: 5 (76 bytes) */

// <0183C8AE> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:752
// variables: 5
// function calls: 12
void CChoreoUpdateNode::CreatePoseOp(CAnimGraphUpdateContext& context)
{
	PoseHandle hPose; // 754
	CChoreoInstanceData* pInstData; // 756
	bool bAnyActiveLayers; // 759
	{
		int i; // 760
		CAnimationLayer::IsActive(); // 762
	}
	{
		PoseHandle hChildPoseHandle; // 771
		CRelativeOffset<const CAnimUpdateNodeBase>::IsValid(); // 772
		CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
		CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 774
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 756
	CRelativeOffset<const CAnimUpdateNodeBase>::Get(); // 45
	CRelativeOffset<const CAnimUpdateNodeBase>::operator->(); // 784
	CChoreoInstanceData::SetPoseHandle(
			PoseHandle hPose);  // 788
} /* size: 252, variables: 3, inline expansions: 8 (101 bytes) */

// <0183C520> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:792
// variables: 2
// function calls: 12
void CChoreoUpdateNode::GetPoseHandle(const CAnimGraphUpdateContext& context)
{
	const char   __FUNCTION__; // 32714
	{
		const _AssertCompileTimeConstantStruct_t  _assertionConstants; // 794
	}
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 77
	CAnimGraphInstanceData::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<NodeInfo_t>(
				const CPackedHandle<NodeInfo_t>& handle);  // 66
	CAnimUpdateNodeBase::GetLastUpdateID(
			const CAnimGraphUpdateContext& context);  // 794
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 795
	CChoreoInstanceData::GetPoseHandle(); // 795
} /* size: 0, variables: 1, inline expansions: 12 (176 bytes) */

// <0183C343> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:799
// variable: 1
// function calls: 5
void CChoreoUpdateNode::OnSave(const CAnimGraphUpdateContext& context, ISave* pSave)
{
	const CChoreoInstanceData* pInstData; // 801
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 60
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 801
} /* size: 131, variables: 1, inline expansions: 5 (76 bytes) */

// <0183C166> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:806
// variable: 1
// function calls: 5
void CChoreoUpdateNode::OnRestore(CAnimGraphUpdateContext& context, IRestore* pRestore)
{
	CChoreoInstanceData* pInstData; // 808
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 808
} /* size: 131, variables: 1, inline expansions: 5 (76 bytes) */

// <0183BFE1> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:813
// function calls: 4
void CChoreoUpdateNode::AddLayeredSequence(CAnimGraphUpdateContext& context, HSequence hSequence, int iPriority)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 815
} /* size: 115, inline expansions: 4 (89 bytes) */

// <0183BB7A> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:818
// function calls: 16
void CChoreoUpdateNode::RemoveLayer(CAnimGraphUpdateContext& context, int iLayer, float flKillRate, float flKillDelay)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 820
	CChoreoInstanceData::GetAnimOverlay(
			int iIndex);  // 428
	CAnimationLayer::IsActive(); // 428
	CChoreoInstanceData::IsValidLayer(
			const CAnimGraphUpdateContext& context,
			int iLayer);  // 383
	CChoreoInstanceData::GetAnimOverlay(
			int iIndex);  // 386
	CAnimationLayer::GetWeight(); // 389
	CAnimationLayer::SetKillRate(
			float flKillRate);  // 389
	CAnimationLayer::SetFlags(
		int fFlagsToSet);  // 72
	CAnimationLayer::KillMe(); // 398
	CAnimationLayer::SetKillDelay(
			float flKillDelay);  // 396
	CAnimationLayer::SetKillRate(
			float flKillRate);  // 393
	CChoreoInstanceData::RemoveLayer(
			CAnimGraphUpdateContext& context,
			int iLayer,
			float flKillRate,
			float flKillDelay);  // 381
	CChoreoInstanceData::RemoveLayer(
			CAnimGraphUpdateContext& context,
			int iLayer,
			float flKillRate,
			float flKillDelay);  // 820
} /* size: 191, inline expansions: 16 (292 bytes) */

// <0183B8B6> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:823
// function calls: 9
void CChoreoUpdateNode::FastRemoveLayer(CAnimGraphUpdateContext& context, int iLayer)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 825
	CChoreoInstanceData::GetAnimOverlay(
			int iIndex);  // 428
	CAnimationLayer::IsActive(); // 428
	CChoreoInstanceData::IsValidLayer(
			const CAnimGraphUpdateContext& context,
			int iLayer);  // 404
	CChoreoInstanceData::FastRemoveLayer(
			CAnimGraphUpdateContext& context,
			int iLayer);  // 825
} /* size: 148, inline expansions: 9 (146 bytes) */

// <0183B6BB> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:828
// function calls: 7
void CChoreoUpdateNode::IsValidLayer(const CAnimGraphUpdateContext& context, int iLayer)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 830
	CChoreoInstanceData::GetAnimOverlay(
			int iIndex);  // 428
	CAnimationLayer::IsActive(); // 428
	CChoreoInstanceData::IsValidLayer(
			const CAnimGraphUpdateContext& context,
			int iLayer);  // 830
} /* size: 115, inline expansions: 7 (114 bytes) */

// <0183B538> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:833
// function calls: 4
void CChoreoUpdateNode::SetLayerPriority(CAnimGraphUpdateContext& context, int iLayer, int iPriority)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 835
} /* size: 115, inline expansions: 4 (89 bytes) */

// <0183B292> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:838
// function calls: 10
void CChoreoUpdateNode::GetLayerWeight(const CAnimGraphUpdateContext& context, int iLayer)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 840
	CChoreoInstanceData::GetAnimOverlay(
			int iIndex);  // 428
	CAnimationLayer::IsActive(); // 428
	CChoreoInstanceData::IsValidLayer(
			const CAnimGraphUpdateContext& context,
			int iLayer);  // 497
	CChoreoInstanceData::GetAnimOverlay(
			int iIndex);  // 500
	CAnimationLayer::GetWeight(); // 501
	CChoreoInstanceData::GetLayerWeight(
			const CAnimGraphUpdateContext& context,
			int iLayer);  // 840
} /* size: 129, inline expansions: 10 (148 bytes) */

// <0183AF09> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:843
// function calls: 12
void CChoreoUpdateNode::SetLayerWeight(CAnimGraphUpdateContext& context, int iLayer, float flWeight)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 845
	CChoreoInstanceData::GetAnimOverlay(
			int iIndex);  // 428
	CAnimationLayer::IsActive(); // 428
	CChoreoInstanceData::IsValidLayer(
			const CAnimGraphUpdateContext& context,
			int iLayer);  // 507
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 510
	CChoreoInstanceData::GetAnimOverlay(
			int iIndex);  // 512
	CAnimationLayer::SetWeight(
			float flWeight);  // 513
	CChoreoInstanceData::SetLayerWeight(
			CAnimGraphUpdateContext& context,
			int iLayer,
			float flWeight);  // 505
	CChoreoInstanceData::SetLayerWeight(
			CAnimGraphUpdateContext& context,
			int iLayer,
			float flWeight);  // 845
} /* size: 171, inline expansions: 12 (272 bytes) */

// <0183AC63> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:848
// function calls: 10
void CChoreoUpdateNode::IsLayerLooping(const CAnimGraphUpdateContext& context, int iLayer)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 850
	CChoreoInstanceData::GetAnimOverlay(
			int iIndex);  // 428
	CAnimationLayer::IsActive(); // 428
	CChoreoInstanceData::IsValidLayer(
			const CAnimGraphUpdateContext& context,
			int iLayer);  // 520
	CChoreoInstanceData::GetAnimOverlay(
			int iIndex);  // 523
	CAnimationLayer::IsLooping(); // 524
	CChoreoInstanceData::IsLayerLooping(
			const CAnimGraphUpdateContext& context,
			int iLayer);  // 850
} /* size: 128, inline expansions: 10 (153 bytes) */

// <0183A91C> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:853
// function calls: 11
void CChoreoUpdateNode::SetLayerLooping(CAnimGraphUpdateContext& context, int iLayer, bool bLooping)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 855
	CChoreoInstanceData::GetAnimOverlay(
			int iIndex);  // 428
	CAnimationLayer::IsActive(); // 428
	CChoreoInstanceData::IsValidLayer(
			const CAnimGraphUpdateContext& context,
			int iLayer);  // 530
	CChoreoInstanceData::GetAnimOverlay(
			int iIndex);  // 533
	CAnimationLayer::SetLooping(
			bool bLooping);  // 534
	CChoreoInstanceData::SetLayerLooping(
			CAnimGraphUpdateContext& context,
			int iLayer,
			bool bLooping);  // 855
} /* size: 127, inline expansions: 11 (118 bytes) */

// <0183A5A9> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:858
// function calls: 12
void CChoreoUpdateNode::SetLayerNoRestore(CAnimGraphUpdateContext& context, int iLayer, bool bNoRestore)
{
	CSmartPtr<CAnimGraphInstanceContext, CRefCountAccessor>::operator->(); // 59
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 860
	CChoreoInstanceData::GetAnimOverlay(
			int iIndex);  // 428
	CAnimationLayer::IsActive(); // 428
	CChoreoInstanceData::IsValidLayer(
			const CAnimGraphUpdateContext& context,
			int iLayer);  // 540
	CChoreoInstanceData::GetAnimOverlay(
			int iIndex);  // 543
	CAnimationLayer::SetFlags(
		int fFlagsToSet);  // 546
	CChoreoInstanceData::SetLayerNoRestore(
				CAnimGraphUpdateContext& context,
				int iLayer,
				bool bNoRestore);  // 538
	CChoreoInstanceData::SetLayerNoRestore(
				CAnimGraphUpdateContext& context,
				int iLayer,
				bool bNoRestore);  // 860
} /* size: 144, inline expansions: 12 (179 bytes) */

// <0183A303> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:863
// function calls: 10
void CChoreoUpdateNode::GetLayerCycle(const CAnimGraphUpdateContext& context, int iLayer)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 60
	CAnimGraphUpdateContext::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 865
	CChoreoInstanceData::GetAnimOverlay(
			int iIndex);  // 428
	CAnimationLayer::IsActive(); // 428
	CChoreoInstanceData::IsValidLayer(
			const CAnimGraphUpdateContext& context,
			int iLayer);  // 557
	CChoreoInstanceData::GetAnimOverlay(
			int iIndex);  // 560
	CAnimationLayer::GetCycle(); // 561
	CChoreoInstanceData::GetLayerCycle(
			const CAnimGraphUpdateContext& context,
			int iLayer);  // 865
} /* size: 129, inline expansions: 10 (148 bytes) */

// <01839F44> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:868
// function calls: 13
void CChoreoUpdateNode::SetLayerCycle(CAnimGraphUpdateContext& context, int iLayer, float flCycle)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 870
	CChoreoInstanceData::GetAnimOverlay(
			int iIndex);  // 428
	CAnimationLayer::IsActive(); // 428
	CChoreoInstanceData::IsValidLayer(
			const CAnimGraphUpdateContext& context,
			int iLayer);  // 567
	CChoreoInstanceData::GetAnimOverlay(
			int iIndex);  // 570
	CAnimationLayer::IsLooping(); // 571
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 573
	{
	}
	CAnimationLayer::SetCycle(
		float flCycle);  // 576
	CChoreoInstanceData::SetLayerCycle(
			CAnimGraphUpdateContext& context,
			int iLayer,
			float flCycle);  // 565
	CChoreoInstanceData::SetLayerCycle(
			CAnimGraphUpdateContext& context,
			int iLayer,
			float flCycle);  // 870
} /* size: 0, inline expansions: 13 (534 bytes) */

// <01839AD5> _vpc_/unity_animationsystem/linuxsteamrt64/../../../animgraph/choreoupdatenode.cpp:873
// function calls: 15
void CChoreoUpdateNode::SetLayerCycle(CAnimGraphUpdateContext& context, int iLayer, float flCycle, float flPrevCycle)
{
	PackedHandleID::PackedHandleID(
			const PackedHandleID& rhs);  // 260
	CPackedDataBase::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 77
	CAnimGraphInstanceData::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 59
	CAnimGraphUpdateContext::operator[]<CChoreoInstanceData>(
					const CPackedHandle<CChoreoInstanceData>& handle);  // 875
	CChoreoInstanceData::GetAnimOverlay(
			int iIndex);  // 428
	CAnimationLayer::IsActive(); // 428
	CChoreoInstanceData::IsValidLayer(
			const CAnimGraphUpdateContext& context,
			int iLayer);  // 583
	CChoreoInstanceData::GetAnimOverlay(
			int iIndex);  // 586
	CAnimationLayer::IsLooping(); // 587
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 589
	clamp<float, float>(const float& val,
				const float& minVal,
				const float& maxVal);  // 590
	{
	}
	CAnimationLayer::SetCycle(
		float flCycle);  // 593
	CAnimationLayer::SetPrevCycle(
			float flCycle);  // 594
	CChoreoInstanceData::SetLayerCycle(
			CAnimGraphUpdateContext& context,
			int iLayer,
			float flCycle,
			float flPrevCycle);  // 581
	CChoreoInstanceData::SetLayerCycle(
			CAnimGraphUpdateContext& context,
			int iLayer,
			float flCycle,
			float flPrevCycle);  // 875
} /* size: 0, inline expansions: 15 (874 bytes) */

