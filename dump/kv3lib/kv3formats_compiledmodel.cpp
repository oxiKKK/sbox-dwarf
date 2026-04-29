
//
// kv3lib/kv3formats_compiledmodel.cpp
//
//	referenced by: libanimationsystem.so
//				   libengine2.so
//				   liblocalize.so
//				   libmaterialsystem2.so
//				   libmeshsystem.so
//				   librendersystemvulkan.so
//				   libschemasystem.so
//
//	functions: 19
//

// <05789CDA> kv3lib/kv3formats_compiledmodel.cpp:22
// variables: 9
// function calls: 19
KV3FormatConversionResult_t KV3Convert_KV3_FORMAT_GENERIC_To_COMPILED_MODEL_KEYS_FORMAT0(KV3FormatConversionContext_t& conversionCtx)
{
	{
		KeyValues3* pPropData; // 24
		{
			int n_carry_type; // 26
			const char* p_explosion_type; // 33
			float fl_explosive_damage; // 34
			float fl_explosive_radius; // 35
			float fl_explosion_delay; // 36
			const char* p_explosion_buildup; // 37
			{
				KeyValues3* pVRCarryType; // 29
				CKV3MemberName::CKV3MemberName<14>(
							const char& str);  // 29
				CKV3MemberName::CKV3MemberName<11>(
							const char& str);  // 30
			}
			{
				KeyValues3* pExplosionBehavior; // 44
				CKV3MemberName::CKV3MemberName<19>(
							const char& str);  // 44
				CKV3MemberName::CKV3MemberName<15>(
							const char& str);  // 45
				CKV3MemberName::CKV3MemberName<17>(
							const char& str);  // 46
				CKV3MemberName::CKV3MemberName<17>(
							const char& str);  // 47
				CKV3MemberName::CKV3MemberName<16>(
							const char& str);  // 48
				CKV3MemberName::CKV3MemberName<18>(
							const char& str);  // 49
			}
			CKV3MemberName::CKV3MemberName<11>(
						const char& str);  // 26
			CKV3MemberName::CKV3MemberName<15>(
						const char& str);  // 33
			CKV3MemberName::CKV3MemberName<17>(
						const char& str);  // 34
			CKV3MemberName::CKV3MemberName<17>(
						const char& str);  // 35
			CKV3MemberName::CKV3MemberName<16>(
						const char& str);  // 36
			CKV3MemberName::CKV3MemberName<18>(
						const char& str);  // 37
			V_isempty(const char* pszString); // 38
			V_isempty(const char* pszString); // 42
		}
		CKV3MemberName::CKV3MemberName<10>(
					const char& str);  // 24
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 96
		KeyValues3::FindMember(
				CKV3MemberName memberName,
				KeyValues3* pDefaultValue);  // 24
	}
} /* size: 914 */

// <057891C1> kv3lib/kv3formats_compiledmodel.cpp:58
// variables: 27
// function calls: 32
KV3FormatConversionResult_t KV3Convert_COMPILED_MODEL_KEYS_FORMAT0_To_COMPILED_MODEL_KEYS_FORMAT1(KV3FormatConversionContext_t& conversionCtx)
{
	{
		KeyValues3* pIKRig; // 60
		{
			KeyValues3* pRoot; // 79
			KeyValues3* pIkData; // 81
			KeyValues3* pControlRigData; // 83
			{
				KeyValues3* pChainData; // 63
				{
					KeyValues3* pChainDatum; // 65
					CKV3ArrayIteratorView<false>& __for_range; // 3524
					iterator __for_begin; // 60225
					iterator __for_end; // 60225
					{
						KeyValues3* pJointConstraintPairs; // 67
						{
							KeyValues3* pJointConstraint; // 69
							CKV3ArrayIteratorView<false>& __for_range; // 3524
							iterator __for_begin; // 60225
							iterator __for_end; // 60225
							{
								KeyValues3* pBone; // 71
								{
								}
								iterator::operator*(); // 69
								{
									const uint32  m; // 101
									uint32 h; // 102
									uint32 k; // 103
									const int  r; // 104
								}
								CUtlStringToken::CUtlStringToken(
										const char& str);  // 13
								CKV3MemberName::CKV3MemberName<7>(
											const char& str);  // 71
								CKV3MemberName::CKV3MemberName<12>(
											const char& str);  // 72
								{
									const uint32  m; // 101
									uint32 h; // 102
									uint32 k; // 103
									const int  r; // 104
								}
								CUtlStringToken::CUtlStringToken(
										const char& str);  // 13
								CKV3MemberName::CKV3MemberName<7>(
											const char& str);  // 72
							}
							KeyValues3::IterateArray(); // 69
							iterator::iterator(
								const KV3Pointer_t* pArrayElements,
								int nStartingIndex,
								int nArrayElementCount);  // 396
							CKV3ArrayIteratorView<false>::begin(); // 69
							iterator::iterator(
								const KV3Pointer_t* pArrayElements,
								int nStartingIndex,
								int nArrayElementCount);  // 401
							CKV3ArrayIteratorView<false>::end(); // 69
							iterator::operator!=(
									const iterator& rhs);  // 69
						}
						CKV3MemberName::CKV3MemberName<23>(
									const char& str);  // 67
						CKV3MemberName::CKV3MemberName(
								const CKV3MemberName& rhs);  // 96
						KeyValues3::FindMember(
								CKV3MemberName memberName,
								KeyValues3* pDefaultValue);  // 67
					}
					KeyValues3::IterateArray(); // 65
					iterator::iterator(
						const KV3Pointer_t* pArrayElements,
						int nStartingIndex,
						int nArrayElementCount);  // 396
					CKV3ArrayIteratorView<false>::begin(); // 65
					iterator::iterator(
						const KV3Pointer_t* pArrayElements,
						int nStartingIndex,
						int nArrayElementCount);  // 401
					CKV3ArrayIteratorView<false>::end(); // 65
					iterator::operator!=(
							const iterator& rhs);  // 65
					{
					}
					iterator::operator*(); // 65
				}
				CKV3MemberName::CKV3MemberName<12>(
							const char& str);  // 63
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 96
				KeyValues3::FindMember(
						CKV3MemberName memberName,
						KeyValues3* pDefaultValue);  // 63
			}
			{
				const uint32  m; // 101
				uint32 h; // 102
				uint32 k; // 103
				const int  r; // 104
			}
			CUtlStringToken::CUtlStringToken(
					const char& str);  // 13
			CKV3MemberName::CKV3MemberName<7>(
						const char& str);  // 81
			CKV3MemberName::CKV3MemberName<17>(
						const char& str);  // 83
		}
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 96
		KeyValues3::FindMember(
				CKV3MemberName memberName,
				KeyValues3* pDefaultValue);  // 60
		CUtlStringToken::CUtlStringToken(
				const char& str);  // 13
		CKV3MemberName::CKV3MemberName<6>(
					const char& str);  // 60
	}
} /* size: 0 */

// <02AC98CE> kv3lib/kv3formats_compiledmodel.cpp:58
// variables: 27
// function calls: 32
KV3FormatConversionResult_t KV3Convert_COMPILED_MODEL_KEYS_FORMAT0_To_COMPILED_MODEL_KEYS_FORMAT1(KV3FormatConversionContext_t& conversionCtx)
{
	{
		KeyValues3* pIKRig; // 60
		{
			KeyValues3* pRoot; // 79
			KeyValues3* pIkData; // 81
			KeyValues3* pControlRigData; // 83
			{
				KeyValues3* pChainData; // 63
				{
					KeyValues3* pChainDatum; // 65
					CKV3ArrayIteratorView<false>& __for_range; // 58310
					iterator __for_begin; // 49475
					iterator __for_end; // 49475
					{
						KeyValues3* pJointConstraintPairs; // 67
						{
							KeyValues3* pJointConstraint; // 69
							CKV3ArrayIteratorView<false>& __for_range; // 58310
							iterator __for_begin; // 49475
							iterator __for_end; // 49475
							{
								KeyValues3* pBone; // 71
								{
								}
								iterator::operator*(); // 69
								{
									const uint32  m; // 101
									uint32 h; // 102
									uint32 k; // 103
									const int  r; // 104
								}
								CUtlStringToken::CUtlStringToken(
										const char& str);  // 13
								CKV3MemberName::CKV3MemberName<7>(
											const char& str);  // 71
								CKV3MemberName::CKV3MemberName<12>(
											const char& str);  // 72
								{
									const uint32  m; // 101
									uint32 h; // 102
									uint32 k; // 103
									const int  r; // 104
								}
								CUtlStringToken::CUtlStringToken(
										const char& str);  // 13
								CKV3MemberName::CKV3MemberName<7>(
											const char& str);  // 72
							}
							KeyValues3::IterateArray(); // 69
							iterator::iterator(
								const KV3Pointer_t* pArrayElements,
								int nStartingIndex,
								int nArrayElementCount);  // 396
							CKV3ArrayIteratorView<false>::begin(); // 69
							iterator::iterator(
								const KV3Pointer_t* pArrayElements,
								int nStartingIndex,
								int nArrayElementCount);  // 401
							CKV3ArrayIteratorView<false>::end(); // 69
							iterator::operator!=(
									const iterator& rhs);  // 69
						}
						CKV3MemberName::CKV3MemberName<23>(
									const char& str);  // 67
						CKV3MemberName::CKV3MemberName(
								const CKV3MemberName& rhs);  // 96
						KeyValues3::FindMember(
								CKV3MemberName memberName,
								KeyValues3* pDefaultValue);  // 67
					}
					KeyValues3::IterateArray(); // 65
					iterator::iterator(
						const KV3Pointer_t* pArrayElements,
						int nStartingIndex,
						int nArrayElementCount);  // 396
					CKV3ArrayIteratorView<false>::begin(); // 65
					iterator::iterator(
						const KV3Pointer_t* pArrayElements,
						int nStartingIndex,
						int nArrayElementCount);  // 401
					CKV3ArrayIteratorView<false>::end(); // 65
					iterator::operator!=(
							const iterator& rhs);  // 65
					{
					}
					iterator::operator*(); // 65
				}
				CKV3MemberName::CKV3MemberName<12>(
							const char& str);  // 63
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 96
				KeyValues3::FindMember(
						CKV3MemberName memberName,
						KeyValues3* pDefaultValue);  // 63
			}
			{
				const uint32  m; // 101
				uint32 h; // 102
				uint32 k; // 103
				const int  r; // 104
			}
			CUtlStringToken::CUtlStringToken(
					const char& str);  // 13
			CKV3MemberName::CKV3MemberName<7>(
						const char& str);  // 81
			CKV3MemberName::CKV3MemberName<17>(
						const char& str);  // 83
		}
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 96
		KeyValues3::FindMember(
				CKV3MemberName memberName,
				KeyValues3* pDefaultValue);  // 60
		CUtlStringToken::CUtlStringToken(
				const char& str);  // 13
		CKV3MemberName::CKV3MemberName<6>(
					const char& str);  // 60
	}
} /* size: 0 */

// <013D189E> kv3lib/kv3formats_compiledmodel.cpp:58
// variables: 27
// function calls: 32
KV3FormatConversionResult_t KV3Convert_COMPILED_MODEL_KEYS_FORMAT0_To_COMPILED_MODEL_KEYS_FORMAT1(KV3FormatConversionContext_t& conversionCtx)
{
	{
		KeyValues3* pIKRig; // 60
		{
			KeyValues3* pRoot; // 79
			KeyValues3* pIkData; // 81
			KeyValues3* pControlRigData; // 83
			{
				KeyValues3* pChainData; // 63
				{
					KeyValues3* pChainDatum; // 65
					CKV3ArrayIteratorView<false>& __for_range; // 31572
					iterator __for_begin; // 22737
					iterator __for_end; // 22737
					{
						KeyValues3* pJointConstraintPairs; // 67
						{
							KeyValues3* pJointConstraint; // 69
							CKV3ArrayIteratorView<false>& __for_range; // 31572
							iterator __for_begin; // 22737
							iterator __for_end; // 22737
							{
								KeyValues3* pBone; // 71
								{
								}
								iterator::operator*(); // 69
								{
									const uint32  m; // 101
									uint32 h; // 102
									uint32 k; // 103
									const int  r; // 104
								}
								CUtlStringToken::CUtlStringToken(
										const char& str);  // 13
								CKV3MemberName::CKV3MemberName<7>(
											const char& str);  // 71
								CKV3MemberName::CKV3MemberName<12>(
											const char& str);  // 72
								{
									const uint32  m; // 101
									uint32 h; // 102
									uint32 k; // 103
									const int  r; // 104
								}
								CUtlStringToken::CUtlStringToken(
										const char& str);  // 13
								CKV3MemberName::CKV3MemberName<7>(
											const char& str);  // 72
							}
							KeyValues3::IterateArray(); // 69
							iterator::iterator(
								const KV3Pointer_t* pArrayElements,
								int nStartingIndex,
								int nArrayElementCount);  // 396
							CKV3ArrayIteratorView<false>::begin(); // 69
							iterator::iterator(
								const KV3Pointer_t* pArrayElements,
								int nStartingIndex,
								int nArrayElementCount);  // 401
							CKV3ArrayIteratorView<false>::end(); // 69
							iterator::operator!=(
									const iterator& rhs);  // 69
						}
						CKV3MemberName::CKV3MemberName<23>(
									const char& str);  // 67
						CKV3MemberName::CKV3MemberName(
								const CKV3MemberName& rhs);  // 96
						KeyValues3::FindMember(
								CKV3MemberName memberName,
								KeyValues3* pDefaultValue);  // 67
					}
					KeyValues3::IterateArray(); // 65
					iterator::iterator(
						const KV3Pointer_t* pArrayElements,
						int nStartingIndex,
						int nArrayElementCount);  // 396
					CKV3ArrayIteratorView<false>::begin(); // 65
					iterator::iterator(
						const KV3Pointer_t* pArrayElements,
						int nStartingIndex,
						int nArrayElementCount);  // 401
					CKV3ArrayIteratorView<false>::end(); // 65
					iterator::operator!=(
							const iterator& rhs);  // 65
					{
					}
					iterator::operator*(); // 65
				}
				CKV3MemberName::CKV3MemberName<12>(
							const char& str);  // 63
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 96
				KeyValues3::FindMember(
						CKV3MemberName memberName,
						KeyValues3* pDefaultValue);  // 63
			}
			{
				const uint32  m; // 101
				uint32 h; // 102
				uint32 k; // 103
				const int  r; // 104
			}
			CUtlStringToken::CUtlStringToken(
					const char& str);  // 13
			CKV3MemberName::CKV3MemberName<7>(
						const char& str);  // 81
			CKV3MemberName::CKV3MemberName<17>(
						const char& str);  // 83
		}
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 96
		KeyValues3::FindMember(
				CKV3MemberName memberName,
				KeyValues3* pDefaultValue);  // 60
		CUtlStringToken::CUtlStringToken(
				const char& str);  // 13
		CKV3MemberName::CKV3MemberName<6>(
					const char& str);  // 60
	}
} /* size: 0 */

// <0044D063> kv3lib/kv3formats_compiledmodel.cpp:58
// variables: 27
// function calls: 32
KV3FormatConversionResult_t KV3Convert_COMPILED_MODEL_KEYS_FORMAT0_To_COMPILED_MODEL_KEYS_FORMAT1(KV3FormatConversionContext_t& conversionCtx)
{
	{
		KeyValues3* pIKRig; // 60
		{
			KeyValues3* pRoot; // 79
			KeyValues3* pIkData; // 81
			KeyValues3* pControlRigData; // 83
			{
				KeyValues3* pChainData; // 63
				{
					KeyValues3* pChainDatum; // 65
					CKV3ArrayIteratorView<false>& __for_range; // 17739
					iterator __for_begin; // 8904
					iterator __for_end; // 8904
					{
						KeyValues3* pJointConstraintPairs; // 67
						{
							KeyValues3* pJointConstraint; // 69
							CKV3ArrayIteratorView<false>& __for_range; // 17739
							iterator __for_begin; // 8904
							iterator __for_end; // 8904
							{
								KeyValues3* pBone; // 71
								{
								}
								iterator::operator*(); // 69
								{
									const uint32  m; // 101
									uint32 h; // 102
									uint32 k; // 103
									const int  r; // 104
								}
								CUtlStringToken::CUtlStringToken(
										const char& str);  // 13
								CKV3MemberName::CKV3MemberName<7>(
											const char& str);  // 71
								CKV3MemberName::CKV3MemberName<12>(
											const char& str);  // 72
								{
									const uint32  m; // 101
									uint32 h; // 102
									uint32 k; // 103
									const int  r; // 104
								}
								CUtlStringToken::CUtlStringToken(
										const char& str);  // 13
								CKV3MemberName::CKV3MemberName<7>(
											const char& str);  // 72
							}
							KeyValues3::IterateArray(); // 69
							iterator::iterator(
								const KV3Pointer_t* pArrayElements,
								int nStartingIndex,
								int nArrayElementCount);  // 396
							CKV3ArrayIteratorView<false>::begin(); // 69
							iterator::iterator(
								const KV3Pointer_t* pArrayElements,
								int nStartingIndex,
								int nArrayElementCount);  // 401
							CKV3ArrayIteratorView<false>::end(); // 69
							iterator::operator!=(
									const iterator& rhs);  // 69
						}
						CKV3MemberName::CKV3MemberName<23>(
									const char& str);  // 67
						CKV3MemberName::CKV3MemberName(
								const CKV3MemberName& rhs);  // 96
						KeyValues3::FindMember(
								CKV3MemberName memberName,
								KeyValues3* pDefaultValue);  // 67
					}
					KeyValues3::IterateArray(); // 65
					iterator::iterator(
						const KV3Pointer_t* pArrayElements,
						int nStartingIndex,
						int nArrayElementCount);  // 396
					CKV3ArrayIteratorView<false>::begin(); // 65
					iterator::iterator(
						const KV3Pointer_t* pArrayElements,
						int nStartingIndex,
						int nArrayElementCount);  // 401
					CKV3ArrayIteratorView<false>::end(); // 65
					iterator::operator!=(
							const iterator& rhs);  // 65
					{
					}
					iterator::operator*(); // 65
				}
				CKV3MemberName::CKV3MemberName<12>(
							const char& str);  // 63
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 96
				KeyValues3::FindMember(
						CKV3MemberName memberName,
						KeyValues3* pDefaultValue);  // 63
			}
			{
				const uint32  m; // 101
				uint32 h; // 102
				uint32 k; // 103
				const int  r; // 104
			}
			CUtlStringToken::CUtlStringToken(
					const char& str);  // 13
			CKV3MemberName::CKV3MemberName<7>(
						const char& str);  // 81
			CKV3MemberName::CKV3MemberName<17>(
						const char& str);  // 83
		}
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 96
		KeyValues3::FindMember(
				CKV3MemberName memberName,
				KeyValues3* pDefaultValue);  // 60
		CUtlStringToken::CUtlStringToken(
				const char& str);  // 13
		CKV3MemberName::CKV3MemberName<6>(
					const char& str);  // 60
	}
} /* size: 0 */

// <00BA5197> kv3lib/kv3formats_compiledmodel.cpp:58
// variables: 27
// function calls: 32
KV3FormatConversionResult_t KV3Convert_COMPILED_MODEL_KEYS_FORMAT0_To_COMPILED_MODEL_KEYS_FORMAT1(KV3FormatConversionContext_t& conversionCtx)
{
	{
		KeyValues3* pIKRig; // 60
		{
			KeyValues3* pRoot; // 79
			KeyValues3* pIkData; // 81
			KeyValues3* pControlRigData; // 83
			{
				KeyValues3* pChainData; // 63
				{
					KeyValues3* pChainDatum; // 65
					CKV3ArrayIteratorView<false>& __for_range; // 30079
					iterator __for_begin; // 21244
					iterator __for_end; // 21244
					{
						KeyValues3* pJointConstraintPairs; // 67
						{
							KeyValues3* pJointConstraint; // 69
							CKV3ArrayIteratorView<false>& __for_range; // 30079
							iterator __for_begin; // 21244
							iterator __for_end; // 21244
							{
								KeyValues3* pBone; // 71
								{
								}
								iterator::operator*(); // 69
								{
									const uint32  m; // 101
									uint32 h; // 102
									uint32 k; // 103
									const int  r; // 104
								}
								CUtlStringToken::CUtlStringToken(
										const char& str);  // 13
								CKV3MemberName::CKV3MemberName<7>(
											const char& str);  // 71
								CKV3MemberName::CKV3MemberName<12>(
											const char& str);  // 72
								{
									const uint32  m; // 101
									uint32 h; // 102
									uint32 k; // 103
									const int  r; // 104
								}
								CUtlStringToken::CUtlStringToken(
										const char& str);  // 13
								CKV3MemberName::CKV3MemberName<7>(
											const char& str);  // 72
							}
							KeyValues3::IterateArray(); // 69
							iterator::iterator(
								const KV3Pointer_t* pArrayElements,
								int nStartingIndex,
								int nArrayElementCount);  // 396
							CKV3ArrayIteratorView<false>::begin(); // 69
							iterator::iterator(
								const KV3Pointer_t* pArrayElements,
								int nStartingIndex,
								int nArrayElementCount);  // 401
							CKV3ArrayIteratorView<false>::end(); // 69
							iterator::operator!=(
									const iterator& rhs);  // 69
						}
						CKV3MemberName::CKV3MemberName<23>(
									const char& str);  // 67
						CKV3MemberName::CKV3MemberName(
								const CKV3MemberName& rhs);  // 96
						KeyValues3::FindMember(
								CKV3MemberName memberName,
								KeyValues3* pDefaultValue);  // 67
					}
					KeyValues3::IterateArray(); // 65
					iterator::iterator(
						const KV3Pointer_t* pArrayElements,
						int nStartingIndex,
						int nArrayElementCount);  // 396
					CKV3ArrayIteratorView<false>::begin(); // 65
					iterator::iterator(
						const KV3Pointer_t* pArrayElements,
						int nStartingIndex,
						int nArrayElementCount);  // 401
					CKV3ArrayIteratorView<false>::end(); // 65
					iterator::operator!=(
							const iterator& rhs);  // 65
					{
					}
					iterator::operator*(); // 65
				}
				CKV3MemberName::CKV3MemberName<12>(
							const char& str);  // 63
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 96
				KeyValues3::FindMember(
						CKV3MemberName memberName,
						KeyValues3* pDefaultValue);  // 63
			}
			{
				const uint32  m; // 101
				uint32 h; // 102
				uint32 k; // 103
				const int  r; // 104
			}
			CUtlStringToken::CUtlStringToken(
					const char& str);  // 13
			CKV3MemberName::CKV3MemberName<7>(
						const char& str);  // 81
			CKV3MemberName::CKV3MemberName<17>(
						const char& str);  // 83
		}
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 96
		KeyValues3::FindMember(
				CKV3MemberName memberName,
				KeyValues3* pDefaultValue);  // 60
		CUtlStringToken::CUtlStringToken(
				const char& str);  // 13
		CKV3MemberName::CKV3MemberName<6>(
					const char& str);  // 60
	}
} /* size: 0 */

// <00296A6D> kv3lib/kv3formats_compiledmodel.cpp:58
// variables: 27
// function calls: 32
KV3FormatConversionResult_t KV3Convert_COMPILED_MODEL_KEYS_FORMAT0_To_COMPILED_MODEL_KEYS_FORMAT1(KV3FormatConversionContext_t& conversionCtx)
{
	{
		KeyValues3* pIKRig; // 60
		{
			KeyValues3* pRoot; // 79
			KeyValues3* pIkData; // 81
			KeyValues3* pControlRigData; // 83
			{
				KeyValues3* pChainData; // 63
				{
					KeyValues3* pChainDatum; // 65
					CKV3ArrayIteratorView<false>& __for_range; // 42373
					iterator __for_begin; // 33538
					iterator __for_end; // 33538
					{
						KeyValues3* pJointConstraintPairs; // 67
						{
							KeyValues3* pJointConstraint; // 69
							CKV3ArrayIteratorView<false>& __for_range; // 42373
							iterator __for_begin; // 33538
							iterator __for_end; // 33538
							{
								KeyValues3* pBone; // 71
								{
								}
								iterator::operator*(); // 69
								{
									const uint32  m; // 101
									uint32 h; // 102
									uint32 k; // 103
									const int  r; // 104
								}
								CUtlStringToken::CUtlStringToken(
										const char& str);  // 13
								CKV3MemberName::CKV3MemberName<7>(
											const char& str);  // 71
								CKV3MemberName::CKV3MemberName<12>(
											const char& str);  // 72
								{
									const uint32  m; // 101
									uint32 h; // 102
									uint32 k; // 103
									const int  r; // 104
								}
								CUtlStringToken::CUtlStringToken(
										const char& str);  // 13
								CKV3MemberName::CKV3MemberName<7>(
											const char& str);  // 72
							}
							KeyValues3::IterateArray(); // 69
							iterator::iterator(
								const KV3Pointer_t* pArrayElements,
								int nStartingIndex,
								int nArrayElementCount);  // 396
							CKV3ArrayIteratorView<false>::begin(); // 69
							iterator::iterator(
								const KV3Pointer_t* pArrayElements,
								int nStartingIndex,
								int nArrayElementCount);  // 401
							CKV3ArrayIteratorView<false>::end(); // 69
							iterator::operator!=(
									const iterator& rhs);  // 69
						}
						CKV3MemberName::CKV3MemberName<23>(
									const char& str);  // 67
						CKV3MemberName::CKV3MemberName(
								const CKV3MemberName& rhs);  // 96
						KeyValues3::FindMember(
								CKV3MemberName memberName,
								KeyValues3* pDefaultValue);  // 67
					}
					KeyValues3::IterateArray(); // 65
					iterator::iterator(
						const KV3Pointer_t* pArrayElements,
						int nStartingIndex,
						int nArrayElementCount);  // 396
					CKV3ArrayIteratorView<false>::begin(); // 65
					iterator::iterator(
						const KV3Pointer_t* pArrayElements,
						int nStartingIndex,
						int nArrayElementCount);  // 401
					CKV3ArrayIteratorView<false>::end(); // 65
					iterator::operator!=(
							const iterator& rhs);  // 65
					{
					}
					iterator::operator*(); // 65
				}
				CKV3MemberName::CKV3MemberName<12>(
							const char& str);  // 63
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 96
				KeyValues3::FindMember(
						CKV3MemberName memberName,
						KeyValues3* pDefaultValue);  // 63
			}
			{
				const uint32  m; // 101
				uint32 h; // 102
				uint32 k; // 103
				const int  r; // 104
			}
			CUtlStringToken::CUtlStringToken(
					const char& str);  // 13
			CKV3MemberName::CKV3MemberName<7>(
						const char& str);  // 81
			CKV3MemberName::CKV3MemberName<17>(
						const char& str);  // 83
		}
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 96
		KeyValues3::FindMember(
				CKV3MemberName memberName,
				KeyValues3* pDefaultValue);  // 60
		CUtlStringToken::CUtlStringToken(
				const char& str);  // 13
		CKV3MemberName::CKV3MemberName<6>(
					const char& str);  // 60
	}
} /* size: 0 */

// <057875AE> kv3lib/kv3formats_compiledmodel.cpp:95
// variables: 58
// function calls: 77
KV3FormatConversionResult_t KV3Convert_COMPILED_MODEL_KEYS_FORMAT1_To_COMPILED_MODEL_KEYS_FORMAT2(KV3FormatConversionContext_t& conversionCtx)
{
	{
		KeyValues3* pIKData; // 97
		{
			KeyValues3* pNewChainArray; // 100
			{
				KeyValues3* pNewChain; // 105
				CKV3ArrayIteratorView<false>& __for_range; // 3524
				iterator __for_begin; // 60225
				iterator __for_end; // 60225
				{
					KeyValues3* pDefaultSolverSettings; // 109
					CKV3MemberName::CKV3MemberName<24>(
								const char& str);  // 109
					CKV3MemberName::CKV3MemberName<13>(
								const char& str);  // 110
				}
				{
					KeyValues3* pDefaultTargetSettings; // 115
					KeyValues3* pBone; // 117
					KeyValues3* pJointArray; // 120
					KeyValues3* pLastJoint; // 121
					CKV3MemberName::CKV3MemberName<24>(
								const char& str);  // 115
					CKV3MemberName::CKV3MemberName<15>(
								const char& str);  // 116
					{
						const uint32  m; // 101
						uint32 h; // 102
						uint32 k; // 103
						const int  r; // 104
					}
					CUtlStringToken::CUtlStringToken(
							const char& str);  // 13
					CKV3MemberName::CKV3MemberName<7>(
								const char& str);  // 117
					CKV3MemberName::CKV3MemberName(
							const CKV3MemberName& rhs);  // 96
					KeyValues3::FindMember(
							CKV3MemberName memberName,
							KeyValues3* pDefaultValue);  // 120
					CUtlStringToken::CUtlStringToken(
							const char& str);  // 13
					CKV3MemberName::CKV3MemberName<9>(
								const char& str);  // 120
					CUtlStringToken::CUtlStringToken(
							const char& str);  // 13
					CKV3MemberName::CKV3MemberName<7>(
								const char& str);  // 123
					CKV3MemberName::CKV3MemberName(
							const CKV3MemberName& rhs);  // 96
					KeyValues3::FindMember(
							CKV3MemberName memberName,
							KeyValues3* pDefaultValue);  // 123
					{
						const uint32  m; // 101
						uint32 h; // 102
						uint32 k; // 103
						const int  r; // 104
					}
					CUtlStringToken::CUtlStringToken(
							const char& str);  // 13
					CKV3MemberName::CKV3MemberName<7>(
								const char& str);  // 123
					{
						const uint32  m; // 101
						uint32 h; // 102
						uint32 k; // 103
						const int  r; // 104
					}
					CUtlStringToken::CUtlStringToken(
							const char& str);  // 13
					CKV3MemberName::CKV3MemberName<7>(
								const char& str);  // 123
				}
				KeyValues3::IterateArray(); // 105
				iterator::iterator(
					const KV3Pointer_t* pArrayElements,
					int nStartingIndex,
					int nArrayElementCount);  // 396
				CKV3ArrayIteratorView<false>::begin(); // 105
				iterator::iterator(
					const KV3Pointer_t* pArrayElements,
					int nStartingIndex,
					int nArrayElementCount);  // 401
				CKV3ArrayIteratorView<false>::end(); // 105
				iterator::operator!=(
						const iterator& rhs);  // 105
				{
				}
				iterator::operator*(); // 105
			}
			{
				KeyValues3* pIKRig; // 134
				{
					KeyValues3* pChainArray; // 137
					{
						KeyValues3* pChainData; // 139
						CKV3ArrayIteratorView<false>& __for_range; // 3524
						iterator __for_begin; // 60225
						iterator __for_end; // 60225
						{
							KeyValues3* pNewChain; // 142
							{
								KeyValues3* pDefaultSolverSettings; // 149
								CKV3MemberName::CKV3MemberName<24>(
											const char& str);  // 149
								CKV3MemberName::CKV3MemberName<13>(
											const char& str);  // 150
								CKV3MemberName::CKV3MemberName<13>(
											const char& str);  // 150
							}
							{
								KeyValues3* pDefaultTargetSettings; // 155
								KeyValues3* pBone; // 157
								CUtlString targetBoneName; // 159
								CKV3MemberName::CKV3MemberName<24>(
											const char& str);  // 155
								CKV3MemberName::CKV3MemberName<15>(
											const char& str);  // 156
								{
									const uint32  m; // 101
									uint32 h; // 102
									uint32 k; // 103
									const int  r; // 104
								}
								CUtlStringToken::CUtlStringToken(
										const char& str);  // 13
								CKV3MemberName::CKV3MemberName<7>(
											const char& str);  // 157
								CKV3MemberName::CKV3MemberName<24>(
											const char& str);  // 159
								CKV3MemberName::CKV3MemberName(
										const CKV3MemberName& rhs);  // 96
								KeyValues3::FindMember(
										CKV3MemberName memberName,
										KeyValues3* pDefaultValue);  // 159
								{
									const uint32  m; // 101
									uint32 h; // 102
									uint32 k; // 103
									const int  r; // 104
								}
								CUtlStringToken::CUtlStringToken(
										const char& str);  // 13
								CKV3MemberName::CKV3MemberName<7>(
											const char& str);  // 159
								CUtlString::CUtlString(
										const char* pString);  // 159
								operator==(const CUtlString& utlString,
										const char* pString);  // 161
								CUtlString::Get(); // 99
								CUtlString::String(); // 166
								{
									const uint32  m; // 101
									uint32 h; // 102
									uint32 k; // 103
									const int  r; // 104
								}
								CUtlStringToken::CUtlStringToken(
										const char& str);  // 13
								CKV3MemberName::CKV3MemberName<7>(
											const char& str);  // 166
								CUtlString::~CUtlString(); // 167
								CKV3MemberName::CKV3MemberName<18>(
											const char& str);  // 163
								CKV3MemberName::CKV3MemberName(
										const CKV3MemberName& rhs);  // 96
								KeyValues3::FindMember(
										CKV3MemberName memberName,
										KeyValues3* pDefaultValue);  // 163
								{
									const uint32  m; // 101
									uint32 h; // 102
									uint32 k; // 103
									const int  r; // 104
								}
								CUtlStringToken::CUtlStringToken(
										const char& str);  // 13
								CKV3MemberName::CKV3MemberName<7>(
											const char& str);  // 163
								CUtlString::operator=(
										const char* src);  // 163
							}
							{
							}
							iterator::operator*(); // 139
							{
								const uint32  m; // 101
								uint32 h; // 102
								uint32 k; // 103
								const int  r; // 104
							}
							CUtlStringToken::CUtlStringToken(
									const char& str);  // 13
							CKV3MemberName::CKV3MemberName<7>(
										const char& str);  // 144
							{
								const uint32  m; // 101
								uint32 h; // 102
								uint32 k; // 103
								const int  r; // 104
							}
							CUtlStringToken::CUtlStringToken(
									const char& str);  // 13
							CKV3MemberName::CKV3MemberName<7>(
										const char& str);  // 144
							CKV3MemberName::CKV3MemberName<31>(
										const char& str);  // 145
							CKV3MemberName::CKV3MemberName<31>(
										const char& str);  // 145
						}
						KeyValues3::IterateArray(); // 139
						iterator::iterator(
							const KV3Pointer_t* pArrayElements,
							int nStartingIndex,
							int nArrayElementCount);  // 396
						CKV3ArrayIteratorView<false>::begin(); // 139
						iterator::iterator(
							const KV3Pointer_t* pArrayElements,
							int nStartingIndex,
							int nArrayElementCount);  // 401
						CKV3ArrayIteratorView<false>::end(); // 139
						iterator::operator!=(
								const iterator& rhs);  // 139
					}
					CKV3MemberName::CKV3MemberName<12>(
								const char& str);  // 137
					CKV3MemberName::CKV3MemberName(
							const CKV3MemberName& rhs);  // 96
					KeyValues3::FindMember(
							CKV3MemberName memberName,
							KeyValues3* pDefaultValue);  // 137
				}
				CKV3MemberName::CKV3MemberName<17>(
							const char& str);  // 134
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 96
				KeyValues3::FindMember(
						CKV3MemberName memberName,
						KeyValues3* pDefaultValue);  // 134
			}
			CKV3MemberName::CKV3MemberName<11>(
						const char& str);  // 100
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 96
			KeyValues3::FindMember(
					CKV3MemberName memberName,
					KeyValues3* pDefaultValue);  // 100
			CKV3MemberName::CKV3MemberName<11>(
						const char& str);  // 129
		}
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 96
		KeyValues3::FindMember(
				CKV3MemberName memberName,
				KeyValues3* pDefaultValue);  // 97
		CUtlStringToken::CUtlStringToken(
				const char& str);  // 13
		CKV3MemberName::CKV3MemberName<7>(
					const char& str);  // 97
	}
} /* size: 0 */

// <02AC7CBB> kv3lib/kv3formats_compiledmodel.cpp:95
// variables: 58
// function calls: 77
KV3FormatConversionResult_t KV3Convert_COMPILED_MODEL_KEYS_FORMAT1_To_COMPILED_MODEL_KEYS_FORMAT2(KV3FormatConversionContext_t& conversionCtx)
{
	{
		KeyValues3* pIKData; // 97
		{
			KeyValues3* pNewChainArray; // 100
			{
				KeyValues3* pNewChain; // 105
				CKV3ArrayIteratorView<false>& __for_range; // 58310
				iterator __for_begin; // 49475
				iterator __for_end; // 49475
				{
					KeyValues3* pDefaultSolverSettings; // 109
					CKV3MemberName::CKV3MemberName<24>(
								const char& str);  // 109
					CKV3MemberName::CKV3MemberName<13>(
								const char& str);  // 110
				}
				{
					KeyValues3* pDefaultTargetSettings; // 115
					KeyValues3* pBone; // 117
					KeyValues3* pJointArray; // 120
					KeyValues3* pLastJoint; // 121
					CKV3MemberName::CKV3MemberName<24>(
								const char& str);  // 115
					CKV3MemberName::CKV3MemberName<15>(
								const char& str);  // 116
					{
						const uint32  m; // 101
						uint32 h; // 102
						uint32 k; // 103
						const int  r; // 104
					}
					CUtlStringToken::CUtlStringToken(
							const char& str);  // 13
					CKV3MemberName::CKV3MemberName<7>(
								const char& str);  // 117
					CKV3MemberName::CKV3MemberName(
							const CKV3MemberName& rhs);  // 96
					KeyValues3::FindMember(
							CKV3MemberName memberName,
							KeyValues3* pDefaultValue);  // 120
					CUtlStringToken::CUtlStringToken(
							const char& str);  // 13
					CKV3MemberName::CKV3MemberName<9>(
								const char& str);  // 120
					CUtlStringToken::CUtlStringToken(
							const char& str);  // 13
					CKV3MemberName::CKV3MemberName<7>(
								const char& str);  // 123
					CKV3MemberName::CKV3MemberName(
							const CKV3MemberName& rhs);  // 96
					KeyValues3::FindMember(
							CKV3MemberName memberName,
							KeyValues3* pDefaultValue);  // 123
					{
						const uint32  m; // 101
						uint32 h; // 102
						uint32 k; // 103
						const int  r; // 104
					}
					CUtlStringToken::CUtlStringToken(
							const char& str);  // 13
					CKV3MemberName::CKV3MemberName<7>(
								const char& str);  // 123
					{
						const uint32  m; // 101
						uint32 h; // 102
						uint32 k; // 103
						const int  r; // 104
					}
					CUtlStringToken::CUtlStringToken(
							const char& str);  // 13
					CKV3MemberName::CKV3MemberName<7>(
								const char& str);  // 123
				}
				KeyValues3::IterateArray(); // 105
				iterator::iterator(
					const KV3Pointer_t* pArrayElements,
					int nStartingIndex,
					int nArrayElementCount);  // 396
				CKV3ArrayIteratorView<false>::begin(); // 105
				iterator::iterator(
					const KV3Pointer_t* pArrayElements,
					int nStartingIndex,
					int nArrayElementCount);  // 401
				CKV3ArrayIteratorView<false>::end(); // 105
				iterator::operator!=(
						const iterator& rhs);  // 105
				{
				}
				iterator::operator*(); // 105
			}
			{
				KeyValues3* pIKRig; // 134
				{
					KeyValues3* pChainArray; // 137
					{
						KeyValues3* pChainData; // 139
						CKV3ArrayIteratorView<false>& __for_range; // 58310
						iterator __for_begin; // 49475
						iterator __for_end; // 49475
						{
							KeyValues3* pNewChain; // 142
							{
								KeyValues3* pDefaultSolverSettings; // 149
								CKV3MemberName::CKV3MemberName<24>(
											const char& str);  // 149
								CKV3MemberName::CKV3MemberName<13>(
											const char& str);  // 150
								CKV3MemberName::CKV3MemberName<13>(
											const char& str);  // 150
							}
							{
								KeyValues3* pDefaultTargetSettings; // 155
								KeyValues3* pBone; // 157
								CUtlString targetBoneName; // 159
								CKV3MemberName::CKV3MemberName<24>(
											const char& str);  // 155
								CKV3MemberName::CKV3MemberName<15>(
											const char& str);  // 156
								{
									const uint32  m; // 101
									uint32 h; // 102
									uint32 k; // 103
									const int  r; // 104
								}
								CUtlStringToken::CUtlStringToken(
										const char& str);  // 13
								CKV3MemberName::CKV3MemberName<7>(
											const char& str);  // 157
								CKV3MemberName::CKV3MemberName<24>(
											const char& str);  // 159
								CKV3MemberName::CKV3MemberName(
										const CKV3MemberName& rhs);  // 96
								KeyValues3::FindMember(
										CKV3MemberName memberName,
										KeyValues3* pDefaultValue);  // 159
								{
									const uint32  m; // 101
									uint32 h; // 102
									uint32 k; // 103
									const int  r; // 104
								}
								CUtlStringToken::CUtlStringToken(
										const char& str);  // 13
								CKV3MemberName::CKV3MemberName<7>(
											const char& str);  // 159
								CUtlString::CUtlString(
										const char* pString);  // 159
								operator==(const CUtlString& utlString,
										const char* pString);  // 161
								CUtlString::Get(); // 99
								CUtlString::String(); // 166
								{
									const uint32  m; // 101
									uint32 h; // 102
									uint32 k; // 103
									const int  r; // 104
								}
								CUtlStringToken::CUtlStringToken(
										const char& str);  // 13
								CKV3MemberName::CKV3MemberName<7>(
											const char& str);  // 166
								CUtlString::~CUtlString(); // 167
								CKV3MemberName::CKV3MemberName<18>(
											const char& str);  // 163
								CKV3MemberName::CKV3MemberName(
										const CKV3MemberName& rhs);  // 96
								KeyValues3::FindMember(
										CKV3MemberName memberName,
										KeyValues3* pDefaultValue);  // 163
								{
									const uint32  m; // 101
									uint32 h; // 102
									uint32 k; // 103
									const int  r; // 104
								}
								CUtlStringToken::CUtlStringToken(
										const char& str);  // 13
								CKV3MemberName::CKV3MemberName<7>(
											const char& str);  // 163
								CUtlString::operator=(
										const char* src);  // 163
							}
							{
							}
							iterator::operator*(); // 139
							{
								const uint32  m; // 101
								uint32 h; // 102
								uint32 k; // 103
								const int  r; // 104
							}
							CUtlStringToken::CUtlStringToken(
									const char& str);  // 13
							CKV3MemberName::CKV3MemberName<7>(
										const char& str);  // 144
							{
								const uint32  m; // 101
								uint32 h; // 102
								uint32 k; // 103
								const int  r; // 104
							}
							CUtlStringToken::CUtlStringToken(
									const char& str);  // 13
							CKV3MemberName::CKV3MemberName<7>(
										const char& str);  // 144
							CKV3MemberName::CKV3MemberName<31>(
										const char& str);  // 145
							CKV3MemberName::CKV3MemberName<31>(
										const char& str);  // 145
						}
						KeyValues3::IterateArray(); // 139
						iterator::iterator(
							const KV3Pointer_t* pArrayElements,
							int nStartingIndex,
							int nArrayElementCount);  // 396
						CKV3ArrayIteratorView<false>::begin(); // 139
						iterator::iterator(
							const KV3Pointer_t* pArrayElements,
							int nStartingIndex,
							int nArrayElementCount);  // 401
						CKV3ArrayIteratorView<false>::end(); // 139
						iterator::operator!=(
								const iterator& rhs);  // 139
					}
					CKV3MemberName::CKV3MemberName<12>(
								const char& str);  // 137
					CKV3MemberName::CKV3MemberName(
							const CKV3MemberName& rhs);  // 96
					KeyValues3::FindMember(
							CKV3MemberName memberName,
							KeyValues3* pDefaultValue);  // 137
				}
				CKV3MemberName::CKV3MemberName<17>(
							const char& str);  // 134
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 96
				KeyValues3::FindMember(
						CKV3MemberName memberName,
						KeyValues3* pDefaultValue);  // 134
			}
			CKV3MemberName::CKV3MemberName<11>(
						const char& str);  // 100
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 96
			KeyValues3::FindMember(
					CKV3MemberName memberName,
					KeyValues3* pDefaultValue);  // 100
			CKV3MemberName::CKV3MemberName<11>(
						const char& str);  // 129
		}
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 96
		KeyValues3::FindMember(
				CKV3MemberName memberName,
				KeyValues3* pDefaultValue);  // 97
		CUtlStringToken::CUtlStringToken(
				const char& str);  // 13
		CKV3MemberName::CKV3MemberName<7>(
					const char& str);  // 97
	}
} /* size: 0 */

// <013CFC8B> kv3lib/kv3formats_compiledmodel.cpp:95
// variables: 58
// function calls: 77
KV3FormatConversionResult_t KV3Convert_COMPILED_MODEL_KEYS_FORMAT1_To_COMPILED_MODEL_KEYS_FORMAT2(KV3FormatConversionContext_t& conversionCtx)
{
	{
		KeyValues3* pIKData; // 97
		{
			KeyValues3* pNewChainArray; // 100
			{
				KeyValues3* pNewChain; // 105
				CKV3ArrayIteratorView<false>& __for_range; // 31572
				iterator __for_begin; // 22737
				iterator __for_end; // 22737
				{
					KeyValues3* pDefaultSolverSettings; // 109
					CKV3MemberName::CKV3MemberName<24>(
								const char& str);  // 109
					CKV3MemberName::CKV3MemberName<13>(
								const char& str);  // 110
				}
				{
					KeyValues3* pDefaultTargetSettings; // 115
					KeyValues3* pBone; // 117
					KeyValues3* pJointArray; // 120
					KeyValues3* pLastJoint; // 121
					CKV3MemberName::CKV3MemberName<24>(
								const char& str);  // 115
					CKV3MemberName::CKV3MemberName<15>(
								const char& str);  // 116
					{
						const uint32  m; // 101
						uint32 h; // 102
						uint32 k; // 103
						const int  r; // 104
					}
					CUtlStringToken::CUtlStringToken(
							const char& str);  // 13
					CKV3MemberName::CKV3MemberName<7>(
								const char& str);  // 117
					CKV3MemberName::CKV3MemberName(
							const CKV3MemberName& rhs);  // 96
					KeyValues3::FindMember(
							CKV3MemberName memberName,
							KeyValues3* pDefaultValue);  // 120
					CUtlStringToken::CUtlStringToken(
							const char& str);  // 13
					CKV3MemberName::CKV3MemberName<9>(
								const char& str);  // 120
					CUtlStringToken::CUtlStringToken(
							const char& str);  // 13
					CKV3MemberName::CKV3MemberName<7>(
								const char& str);  // 123
					CKV3MemberName::CKV3MemberName(
							const CKV3MemberName& rhs);  // 96
					KeyValues3::FindMember(
							CKV3MemberName memberName,
							KeyValues3* pDefaultValue);  // 123
					{
						const uint32  m; // 101
						uint32 h; // 102
						uint32 k; // 103
						const int  r; // 104
					}
					CUtlStringToken::CUtlStringToken(
							const char& str);  // 13
					CKV3MemberName::CKV3MemberName<7>(
								const char& str);  // 123
					{
						const uint32  m; // 101
						uint32 h; // 102
						uint32 k; // 103
						const int  r; // 104
					}
					CUtlStringToken::CUtlStringToken(
							const char& str);  // 13
					CKV3MemberName::CKV3MemberName<7>(
								const char& str);  // 123
				}
				KeyValues3::IterateArray(); // 105
				iterator::iterator(
					const KV3Pointer_t* pArrayElements,
					int nStartingIndex,
					int nArrayElementCount);  // 396
				CKV3ArrayIteratorView<false>::begin(); // 105
				iterator::iterator(
					const KV3Pointer_t* pArrayElements,
					int nStartingIndex,
					int nArrayElementCount);  // 401
				CKV3ArrayIteratorView<false>::end(); // 105
				iterator::operator!=(
						const iterator& rhs);  // 105
				{
				}
				iterator::operator*(); // 105
			}
			{
				KeyValues3* pIKRig; // 134
				{
					KeyValues3* pChainArray; // 137
					{
						KeyValues3* pChainData; // 139
						CKV3ArrayIteratorView<false>& __for_range; // 31572
						iterator __for_begin; // 22737
						iterator __for_end; // 22737
						{
							KeyValues3* pNewChain; // 142
							{
								KeyValues3* pDefaultSolverSettings; // 149
								CKV3MemberName::CKV3MemberName<24>(
											const char& str);  // 149
								CKV3MemberName::CKV3MemberName<13>(
											const char& str);  // 150
								CKV3MemberName::CKV3MemberName<13>(
											const char& str);  // 150
							}
							{
								KeyValues3* pDefaultTargetSettings; // 155
								KeyValues3* pBone; // 157
								CUtlString targetBoneName; // 159
								CKV3MemberName::CKV3MemberName<24>(
											const char& str);  // 155
								CKV3MemberName::CKV3MemberName<15>(
											const char& str);  // 156
								{
									const uint32  m; // 101
									uint32 h; // 102
									uint32 k; // 103
									const int  r; // 104
								}
								CUtlStringToken::CUtlStringToken(
										const char& str);  // 13
								CKV3MemberName::CKV3MemberName<7>(
											const char& str);  // 157
								CKV3MemberName::CKV3MemberName<24>(
											const char& str);  // 159
								CKV3MemberName::CKV3MemberName(
										const CKV3MemberName& rhs);  // 96
								KeyValues3::FindMember(
										CKV3MemberName memberName,
										KeyValues3* pDefaultValue);  // 159
								{
									const uint32  m; // 101
									uint32 h; // 102
									uint32 k; // 103
									const int  r; // 104
								}
								CUtlStringToken::CUtlStringToken(
										const char& str);  // 13
								CKV3MemberName::CKV3MemberName<7>(
											const char& str);  // 159
								CUtlString::CUtlString(
										const char* pString);  // 159
								operator==(const CUtlString& utlString,
										const char* pString);  // 161
								CUtlString::Get(); // 99
								CUtlString::String(); // 166
								{
									const uint32  m; // 101
									uint32 h; // 102
									uint32 k; // 103
									const int  r; // 104
								}
								CUtlStringToken::CUtlStringToken(
										const char& str);  // 13
								CKV3MemberName::CKV3MemberName<7>(
											const char& str);  // 166
								CUtlString::~CUtlString(); // 167
								CKV3MemberName::CKV3MemberName<18>(
											const char& str);  // 163
								CKV3MemberName::CKV3MemberName(
										const CKV3MemberName& rhs);  // 96
								KeyValues3::FindMember(
										CKV3MemberName memberName,
										KeyValues3* pDefaultValue);  // 163
								{
									const uint32  m; // 101
									uint32 h; // 102
									uint32 k; // 103
									const int  r; // 104
								}
								CUtlStringToken::CUtlStringToken(
										const char& str);  // 13
								CKV3MemberName::CKV3MemberName<7>(
											const char& str);  // 163
								CUtlString::operator=(
										const char* src);  // 163
							}
							{
							}
							iterator::operator*(); // 139
							{
								const uint32  m; // 101
								uint32 h; // 102
								uint32 k; // 103
								const int  r; // 104
							}
							CUtlStringToken::CUtlStringToken(
									const char& str);  // 13
							CKV3MemberName::CKV3MemberName<7>(
										const char& str);  // 144
							{
								const uint32  m; // 101
								uint32 h; // 102
								uint32 k; // 103
								const int  r; // 104
							}
							CUtlStringToken::CUtlStringToken(
									const char& str);  // 13
							CKV3MemberName::CKV3MemberName<7>(
										const char& str);  // 144
							CKV3MemberName::CKV3MemberName<31>(
										const char& str);  // 145
							CKV3MemberName::CKV3MemberName<31>(
										const char& str);  // 145
						}
						KeyValues3::IterateArray(); // 139
						iterator::iterator(
							const KV3Pointer_t* pArrayElements,
							int nStartingIndex,
							int nArrayElementCount);  // 396
						CKV3ArrayIteratorView<false>::begin(); // 139
						iterator::iterator(
							const KV3Pointer_t* pArrayElements,
							int nStartingIndex,
							int nArrayElementCount);  // 401
						CKV3ArrayIteratorView<false>::end(); // 139
						iterator::operator!=(
								const iterator& rhs);  // 139
					}
					CKV3MemberName::CKV3MemberName<12>(
								const char& str);  // 137
					CKV3MemberName::CKV3MemberName(
							const CKV3MemberName& rhs);  // 96
					KeyValues3::FindMember(
							CKV3MemberName memberName,
							KeyValues3* pDefaultValue);  // 137
				}
				CKV3MemberName::CKV3MemberName<17>(
							const char& str);  // 134
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 96
				KeyValues3::FindMember(
						CKV3MemberName memberName,
						KeyValues3* pDefaultValue);  // 134
			}
			CKV3MemberName::CKV3MemberName<11>(
						const char& str);  // 100
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 96
			KeyValues3::FindMember(
					CKV3MemberName memberName,
					KeyValues3* pDefaultValue);  // 100
			CKV3MemberName::CKV3MemberName<11>(
						const char& str);  // 129
		}
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 96
		KeyValues3::FindMember(
				CKV3MemberName memberName,
				KeyValues3* pDefaultValue);  // 97
		CUtlStringToken::CUtlStringToken(
				const char& str);  // 13
		CKV3MemberName::CKV3MemberName<7>(
					const char& str);  // 97
	}
} /* size: 0 */

// <0044B450> kv3lib/kv3formats_compiledmodel.cpp:95
// variables: 58
// function calls: 77
KV3FormatConversionResult_t KV3Convert_COMPILED_MODEL_KEYS_FORMAT1_To_COMPILED_MODEL_KEYS_FORMAT2(KV3FormatConversionContext_t& conversionCtx)
{
	{
		KeyValues3* pIKData; // 97
		{
			KeyValues3* pNewChainArray; // 100
			{
				KeyValues3* pNewChain; // 105
				CKV3ArrayIteratorView<false>& __for_range; // 17739
				iterator __for_begin; // 8904
				iterator __for_end; // 8904
				{
					KeyValues3* pDefaultSolverSettings; // 109
					CKV3MemberName::CKV3MemberName<24>(
								const char& str);  // 109
					CKV3MemberName::CKV3MemberName<13>(
								const char& str);  // 110
				}
				{
					KeyValues3* pDefaultTargetSettings; // 115
					KeyValues3* pBone; // 117
					KeyValues3* pJointArray; // 120
					KeyValues3* pLastJoint; // 121
					CKV3MemberName::CKV3MemberName<24>(
								const char& str);  // 115
					CKV3MemberName::CKV3MemberName<15>(
								const char& str);  // 116
					{
						const uint32  m; // 101
						uint32 h; // 102
						uint32 k; // 103
						const int  r; // 104
					}
					CUtlStringToken::CUtlStringToken(
							const char& str);  // 13
					CKV3MemberName::CKV3MemberName<7>(
								const char& str);  // 117
					CKV3MemberName::CKV3MemberName(
							const CKV3MemberName& rhs);  // 96
					KeyValues3::FindMember(
							CKV3MemberName memberName,
							KeyValues3* pDefaultValue);  // 120
					CUtlStringToken::CUtlStringToken(
							const char& str);  // 13
					CKV3MemberName::CKV3MemberName<9>(
								const char& str);  // 120
					CUtlStringToken::CUtlStringToken(
							const char& str);  // 13
					CKV3MemberName::CKV3MemberName<7>(
								const char& str);  // 123
					CKV3MemberName::CKV3MemberName(
							const CKV3MemberName& rhs);  // 96
					KeyValues3::FindMember(
							CKV3MemberName memberName,
							KeyValues3* pDefaultValue);  // 123
					{
						const uint32  m; // 101
						uint32 h; // 102
						uint32 k; // 103
						const int  r; // 104
					}
					CUtlStringToken::CUtlStringToken(
							const char& str);  // 13
					CKV3MemberName::CKV3MemberName<7>(
								const char& str);  // 123
					{
						const uint32  m; // 101
						uint32 h; // 102
						uint32 k; // 103
						const int  r; // 104
					}
					CUtlStringToken::CUtlStringToken(
							const char& str);  // 13
					CKV3MemberName::CKV3MemberName<7>(
								const char& str);  // 123
				}
				KeyValues3::IterateArray(); // 105
				iterator::iterator(
					const KV3Pointer_t* pArrayElements,
					int nStartingIndex,
					int nArrayElementCount);  // 396
				CKV3ArrayIteratorView<false>::begin(); // 105
				iterator::iterator(
					const KV3Pointer_t* pArrayElements,
					int nStartingIndex,
					int nArrayElementCount);  // 401
				CKV3ArrayIteratorView<false>::end(); // 105
				iterator::operator!=(
						const iterator& rhs);  // 105
				{
				}
				iterator::operator*(); // 105
			}
			{
				KeyValues3* pIKRig; // 134
				{
					KeyValues3* pChainArray; // 137
					{
						KeyValues3* pChainData; // 139
						CKV3ArrayIteratorView<false>& __for_range; // 17739
						iterator __for_begin; // 8904
						iterator __for_end; // 8904
						{
							KeyValues3* pNewChain; // 142
							{
								KeyValues3* pDefaultSolverSettings; // 149
								CKV3MemberName::CKV3MemberName<24>(
											const char& str);  // 149
								CKV3MemberName::CKV3MemberName<13>(
											const char& str);  // 150
								CKV3MemberName::CKV3MemberName<13>(
											const char& str);  // 150
							}
							{
								KeyValues3* pDefaultTargetSettings; // 155
								KeyValues3* pBone; // 157
								CUtlString targetBoneName; // 159
								CKV3MemberName::CKV3MemberName<24>(
											const char& str);  // 155
								CKV3MemberName::CKV3MemberName<15>(
											const char& str);  // 156
								{
									const uint32  m; // 101
									uint32 h; // 102
									uint32 k; // 103
									const int  r; // 104
								}
								CUtlStringToken::CUtlStringToken(
										const char& str);  // 13
								CKV3MemberName::CKV3MemberName<7>(
											const char& str);  // 157
								CKV3MemberName::CKV3MemberName<24>(
											const char& str);  // 159
								CKV3MemberName::CKV3MemberName(
										const CKV3MemberName& rhs);  // 96
								KeyValues3::FindMember(
										CKV3MemberName memberName,
										KeyValues3* pDefaultValue);  // 159
								{
									const uint32  m; // 101
									uint32 h; // 102
									uint32 k; // 103
									const int  r; // 104
								}
								CUtlStringToken::CUtlStringToken(
										const char& str);  // 13
								CKV3MemberName::CKV3MemberName<7>(
											const char& str);  // 159
								CUtlString::CUtlString(
										const char* pString);  // 159
								operator==(const CUtlString& utlString,
										const char* pString);  // 161
								CUtlString::Get(); // 99
								CUtlString::String(); // 166
								{
									const uint32  m; // 101
									uint32 h; // 102
									uint32 k; // 103
									const int  r; // 104
								}
								CUtlStringToken::CUtlStringToken(
										const char& str);  // 13
								CKV3MemberName::CKV3MemberName<7>(
											const char& str);  // 166
								CUtlString::~CUtlString(); // 167
								CKV3MemberName::CKV3MemberName<18>(
											const char& str);  // 163
								CKV3MemberName::CKV3MemberName(
										const CKV3MemberName& rhs);  // 96
								KeyValues3::FindMember(
										CKV3MemberName memberName,
										KeyValues3* pDefaultValue);  // 163
								{
									const uint32  m; // 101
									uint32 h; // 102
									uint32 k; // 103
									const int  r; // 104
								}
								CUtlStringToken::CUtlStringToken(
										const char& str);  // 13
								CKV3MemberName::CKV3MemberName<7>(
											const char& str);  // 163
								CUtlString::operator=(
										const char* src);  // 163
							}
							{
							}
							iterator::operator*(); // 139
							{
								const uint32  m; // 101
								uint32 h; // 102
								uint32 k; // 103
								const int  r; // 104
							}
							CUtlStringToken::CUtlStringToken(
									const char& str);  // 13
							CKV3MemberName::CKV3MemberName<7>(
										const char& str);  // 144
							{
								const uint32  m; // 101
								uint32 h; // 102
								uint32 k; // 103
								const int  r; // 104
							}
							CUtlStringToken::CUtlStringToken(
									const char& str);  // 13
							CKV3MemberName::CKV3MemberName<7>(
										const char& str);  // 144
							CKV3MemberName::CKV3MemberName<31>(
										const char& str);  // 145
							CKV3MemberName::CKV3MemberName<31>(
										const char& str);  // 145
						}
						KeyValues3::IterateArray(); // 139
						iterator::iterator(
							const KV3Pointer_t* pArrayElements,
							int nStartingIndex,
							int nArrayElementCount);  // 396
						CKV3ArrayIteratorView<false>::begin(); // 139
						iterator::iterator(
							const KV3Pointer_t* pArrayElements,
							int nStartingIndex,
							int nArrayElementCount);  // 401
						CKV3ArrayIteratorView<false>::end(); // 139
						iterator::operator!=(
								const iterator& rhs);  // 139
					}
					CKV3MemberName::CKV3MemberName<12>(
								const char& str);  // 137
					CKV3MemberName::CKV3MemberName(
							const CKV3MemberName& rhs);  // 96
					KeyValues3::FindMember(
							CKV3MemberName memberName,
							KeyValues3* pDefaultValue);  // 137
				}
				CKV3MemberName::CKV3MemberName<17>(
							const char& str);  // 134
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 96
				KeyValues3::FindMember(
						CKV3MemberName memberName,
						KeyValues3* pDefaultValue);  // 134
			}
			CKV3MemberName::CKV3MemberName<11>(
						const char& str);  // 100
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 96
			KeyValues3::FindMember(
					CKV3MemberName memberName,
					KeyValues3* pDefaultValue);  // 100
			CKV3MemberName::CKV3MemberName<11>(
						const char& str);  // 129
		}
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 96
		KeyValues3::FindMember(
				CKV3MemberName memberName,
				KeyValues3* pDefaultValue);  // 97
		CUtlStringToken::CUtlStringToken(
				const char& str);  // 13
		CKV3MemberName::CKV3MemberName<7>(
					const char& str);  // 97
	}
} /* size: 0 */

// <00BA3584> kv3lib/kv3formats_compiledmodel.cpp:95
// variables: 58
// function calls: 77
KV3FormatConversionResult_t KV3Convert_COMPILED_MODEL_KEYS_FORMAT1_To_COMPILED_MODEL_KEYS_FORMAT2(KV3FormatConversionContext_t& conversionCtx)
{
	{
		KeyValues3* pIKData; // 97
		{
			KeyValues3* pNewChainArray; // 100
			{
				KeyValues3* pNewChain; // 105
				CKV3ArrayIteratorView<false>& __for_range; // 30079
				iterator __for_begin; // 21244
				iterator __for_end; // 21244
				{
					KeyValues3* pDefaultSolverSettings; // 109
					CKV3MemberName::CKV3MemberName<24>(
								const char& str);  // 109
					CKV3MemberName::CKV3MemberName<13>(
								const char& str);  // 110
				}
				{
					KeyValues3* pDefaultTargetSettings; // 115
					KeyValues3* pBone; // 117
					KeyValues3* pJointArray; // 120
					KeyValues3* pLastJoint; // 121
					CKV3MemberName::CKV3MemberName<24>(
								const char& str);  // 115
					CKV3MemberName::CKV3MemberName<15>(
								const char& str);  // 116
					{
						const uint32  m; // 101
						uint32 h; // 102
						uint32 k; // 103
						const int  r; // 104
					}
					CUtlStringToken::CUtlStringToken(
							const char& str);  // 13
					CKV3MemberName::CKV3MemberName<7>(
								const char& str);  // 117
					CKV3MemberName::CKV3MemberName(
							const CKV3MemberName& rhs);  // 96
					KeyValues3::FindMember(
							CKV3MemberName memberName,
							KeyValues3* pDefaultValue);  // 120
					CUtlStringToken::CUtlStringToken(
							const char& str);  // 13
					CKV3MemberName::CKV3MemberName<9>(
								const char& str);  // 120
					CUtlStringToken::CUtlStringToken(
							const char& str);  // 13
					CKV3MemberName::CKV3MemberName<7>(
								const char& str);  // 123
					CKV3MemberName::CKV3MemberName(
							const CKV3MemberName& rhs);  // 96
					KeyValues3::FindMember(
							CKV3MemberName memberName,
							KeyValues3* pDefaultValue);  // 123
					{
						const uint32  m; // 101
						uint32 h; // 102
						uint32 k; // 103
						const int  r; // 104
					}
					CUtlStringToken::CUtlStringToken(
							const char& str);  // 13
					CKV3MemberName::CKV3MemberName<7>(
								const char& str);  // 123
					{
						const uint32  m; // 101
						uint32 h; // 102
						uint32 k; // 103
						const int  r; // 104
					}
					CUtlStringToken::CUtlStringToken(
							const char& str);  // 13
					CKV3MemberName::CKV3MemberName<7>(
								const char& str);  // 123
				}
				KeyValues3::IterateArray(); // 105
				iterator::iterator(
					const KV3Pointer_t* pArrayElements,
					int nStartingIndex,
					int nArrayElementCount);  // 396
				CKV3ArrayIteratorView<false>::begin(); // 105
				iterator::iterator(
					const KV3Pointer_t* pArrayElements,
					int nStartingIndex,
					int nArrayElementCount);  // 401
				CKV3ArrayIteratorView<false>::end(); // 105
				iterator::operator!=(
						const iterator& rhs);  // 105
				{
				}
				iterator::operator*(); // 105
			}
			{
				KeyValues3* pIKRig; // 134
				{
					KeyValues3* pChainArray; // 137
					{
						KeyValues3* pChainData; // 139
						CKV3ArrayIteratorView<false>& __for_range; // 30079
						iterator __for_begin; // 21244
						iterator __for_end; // 21244
						{
							KeyValues3* pNewChain; // 142
							{
								KeyValues3* pDefaultSolverSettings; // 149
								CKV3MemberName::CKV3MemberName<24>(
											const char& str);  // 149
								CKV3MemberName::CKV3MemberName<13>(
											const char& str);  // 150
								CKV3MemberName::CKV3MemberName<13>(
											const char& str);  // 150
							}
							{
								KeyValues3* pDefaultTargetSettings; // 155
								KeyValues3* pBone; // 157
								CUtlString targetBoneName; // 159
								CKV3MemberName::CKV3MemberName<24>(
											const char& str);  // 155
								CKV3MemberName::CKV3MemberName<15>(
											const char& str);  // 156
								{
									const uint32  m; // 101
									uint32 h; // 102
									uint32 k; // 103
									const int  r; // 104
								}
								CUtlStringToken::CUtlStringToken(
										const char& str);  // 13
								CKV3MemberName::CKV3MemberName<7>(
											const char& str);  // 157
								CKV3MemberName::CKV3MemberName<24>(
											const char& str);  // 159
								CKV3MemberName::CKV3MemberName(
										const CKV3MemberName& rhs);  // 96
								KeyValues3::FindMember(
										CKV3MemberName memberName,
										KeyValues3* pDefaultValue);  // 159
								{
									const uint32  m; // 101
									uint32 h; // 102
									uint32 k; // 103
									const int  r; // 104
								}
								CUtlStringToken::CUtlStringToken(
										const char& str);  // 13
								CKV3MemberName::CKV3MemberName<7>(
											const char& str);  // 159
								CUtlString::CUtlString(
										const char* pString);  // 159
								operator==(const CUtlString& utlString,
										const char* pString);  // 161
								CUtlString::Get(); // 99
								CUtlString::String(); // 166
								{
									const uint32  m; // 101
									uint32 h; // 102
									uint32 k; // 103
									const int  r; // 104
								}
								CUtlStringToken::CUtlStringToken(
										const char& str);  // 13
								CKV3MemberName::CKV3MemberName<7>(
											const char& str);  // 166
								CUtlString::~CUtlString(); // 167
								CKV3MemberName::CKV3MemberName<18>(
											const char& str);  // 163
								CKV3MemberName::CKV3MemberName(
										const CKV3MemberName& rhs);  // 96
								KeyValues3::FindMember(
										CKV3MemberName memberName,
										KeyValues3* pDefaultValue);  // 163
								{
									const uint32  m; // 101
									uint32 h; // 102
									uint32 k; // 103
									const int  r; // 104
								}
								CUtlStringToken::CUtlStringToken(
										const char& str);  // 13
								CKV3MemberName::CKV3MemberName<7>(
											const char& str);  // 163
								CUtlString::operator=(
										const char* src);  // 163
							}
							{
							}
							iterator::operator*(); // 139
							{
								const uint32  m; // 101
								uint32 h; // 102
								uint32 k; // 103
								const int  r; // 104
							}
							CUtlStringToken::CUtlStringToken(
									const char& str);  // 13
							CKV3MemberName::CKV3MemberName<7>(
										const char& str);  // 144
							{
								const uint32  m; // 101
								uint32 h; // 102
								uint32 k; // 103
								const int  r; // 104
							}
							CUtlStringToken::CUtlStringToken(
									const char& str);  // 13
							CKV3MemberName::CKV3MemberName<7>(
										const char& str);  // 144
							CKV3MemberName::CKV3MemberName<31>(
										const char& str);  // 145
							CKV3MemberName::CKV3MemberName<31>(
										const char& str);  // 145
						}
						KeyValues3::IterateArray(); // 139
						iterator::iterator(
							const KV3Pointer_t* pArrayElements,
							int nStartingIndex,
							int nArrayElementCount);  // 396
						CKV3ArrayIteratorView<false>::begin(); // 139
						iterator::iterator(
							const KV3Pointer_t* pArrayElements,
							int nStartingIndex,
							int nArrayElementCount);  // 401
						CKV3ArrayIteratorView<false>::end(); // 139
						iterator::operator!=(
								const iterator& rhs);  // 139
					}
					CKV3MemberName::CKV3MemberName<12>(
								const char& str);  // 137
					CKV3MemberName::CKV3MemberName(
							const CKV3MemberName& rhs);  // 96
					KeyValues3::FindMember(
							CKV3MemberName memberName,
							KeyValues3* pDefaultValue);  // 137
				}
				CKV3MemberName::CKV3MemberName<17>(
							const char& str);  // 134
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 96
				KeyValues3::FindMember(
						CKV3MemberName memberName,
						KeyValues3* pDefaultValue);  // 134
			}
			CKV3MemberName::CKV3MemberName<11>(
						const char& str);  // 100
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 96
			KeyValues3::FindMember(
					CKV3MemberName memberName,
					KeyValues3* pDefaultValue);  // 100
			CKV3MemberName::CKV3MemberName<11>(
						const char& str);  // 129
		}
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 96
		KeyValues3::FindMember(
				CKV3MemberName memberName,
				KeyValues3* pDefaultValue);  // 97
		CUtlStringToken::CUtlStringToken(
				const char& str);  // 13
		CKV3MemberName::CKV3MemberName<7>(
					const char& str);  // 97
	}
} /* size: 0 */

// <00294E5A> kv3lib/kv3formats_compiledmodel.cpp:95
// variables: 58
// function calls: 77
KV3FormatConversionResult_t KV3Convert_COMPILED_MODEL_KEYS_FORMAT1_To_COMPILED_MODEL_KEYS_FORMAT2(KV3FormatConversionContext_t& conversionCtx)
{
	{
		KeyValues3* pIKData; // 97
		{
			KeyValues3* pNewChainArray; // 100
			{
				KeyValues3* pNewChain; // 105
				CKV3ArrayIteratorView<false>& __for_range; // 42373
				iterator __for_begin; // 33538
				iterator __for_end; // 33538
				{
					KeyValues3* pDefaultSolverSettings; // 109
					CKV3MemberName::CKV3MemberName<24>(
								const char& str);  // 109
					CKV3MemberName::CKV3MemberName<13>(
								const char& str);  // 110
				}
				{
					KeyValues3* pDefaultTargetSettings; // 115
					KeyValues3* pBone; // 117
					KeyValues3* pJointArray; // 120
					KeyValues3* pLastJoint; // 121
					CKV3MemberName::CKV3MemberName<24>(
								const char& str);  // 115
					CKV3MemberName::CKV3MemberName<15>(
								const char& str);  // 116
					{
						const uint32  m; // 101
						uint32 h; // 102
						uint32 k; // 103
						const int  r; // 104
					}
					CUtlStringToken::CUtlStringToken(
							const char& str);  // 13
					CKV3MemberName::CKV3MemberName<7>(
								const char& str);  // 117
					CKV3MemberName::CKV3MemberName(
							const CKV3MemberName& rhs);  // 96
					KeyValues3::FindMember(
							CKV3MemberName memberName,
							KeyValues3* pDefaultValue);  // 120
					CUtlStringToken::CUtlStringToken(
							const char& str);  // 13
					CKV3MemberName::CKV3MemberName<9>(
								const char& str);  // 120
					CUtlStringToken::CUtlStringToken(
							const char& str);  // 13
					CKV3MemberName::CKV3MemberName<7>(
								const char& str);  // 123
					CKV3MemberName::CKV3MemberName(
							const CKV3MemberName& rhs);  // 96
					KeyValues3::FindMember(
							CKV3MemberName memberName,
							KeyValues3* pDefaultValue);  // 123
					{
						const uint32  m; // 101
						uint32 h; // 102
						uint32 k; // 103
						const int  r; // 104
					}
					CUtlStringToken::CUtlStringToken(
							const char& str);  // 13
					CKV3MemberName::CKV3MemberName<7>(
								const char& str);  // 123
					{
						const uint32  m; // 101
						uint32 h; // 102
						uint32 k; // 103
						const int  r; // 104
					}
					CUtlStringToken::CUtlStringToken(
							const char& str);  // 13
					CKV3MemberName::CKV3MemberName<7>(
								const char& str);  // 123
				}
				KeyValues3::IterateArray(); // 105
				iterator::iterator(
					const KV3Pointer_t* pArrayElements,
					int nStartingIndex,
					int nArrayElementCount);  // 396
				CKV3ArrayIteratorView<false>::begin(); // 105
				iterator::iterator(
					const KV3Pointer_t* pArrayElements,
					int nStartingIndex,
					int nArrayElementCount);  // 401
				CKV3ArrayIteratorView<false>::end(); // 105
				iterator::operator!=(
						const iterator& rhs);  // 105
				{
				}
				iterator::operator*(); // 105
			}
			{
				KeyValues3* pIKRig; // 134
				{
					KeyValues3* pChainArray; // 137
					{
						KeyValues3* pChainData; // 139
						CKV3ArrayIteratorView<false>& __for_range; // 42373
						iterator __for_begin; // 33538
						iterator __for_end; // 33538
						{
							KeyValues3* pNewChain; // 142
							{
								KeyValues3* pDefaultSolverSettings; // 149
								CKV3MemberName::CKV3MemberName<24>(
											const char& str);  // 149
								CKV3MemberName::CKV3MemberName<13>(
											const char& str);  // 150
								CKV3MemberName::CKV3MemberName<13>(
											const char& str);  // 150
							}
							{
								KeyValues3* pDefaultTargetSettings; // 155
								KeyValues3* pBone; // 157
								CUtlString targetBoneName; // 159
								CKV3MemberName::CKV3MemberName<24>(
											const char& str);  // 155
								CKV3MemberName::CKV3MemberName<15>(
											const char& str);  // 156
								{
									const uint32  m; // 101
									uint32 h; // 102
									uint32 k; // 103
									const int  r; // 104
								}
								CUtlStringToken::CUtlStringToken(
										const char& str);  // 13
								CKV3MemberName::CKV3MemberName<7>(
											const char& str);  // 157
								CKV3MemberName::CKV3MemberName<24>(
											const char& str);  // 159
								CKV3MemberName::CKV3MemberName(
										const CKV3MemberName& rhs);  // 96
								KeyValues3::FindMember(
										CKV3MemberName memberName,
										KeyValues3* pDefaultValue);  // 159
								{
									const uint32  m; // 101
									uint32 h; // 102
									uint32 k; // 103
									const int  r; // 104
								}
								CUtlStringToken::CUtlStringToken(
										const char& str);  // 13
								CKV3MemberName::CKV3MemberName<7>(
											const char& str);  // 159
								CUtlString::CUtlString(
										const char* pString);  // 159
								operator==(const CUtlString& utlString,
										const char* pString);  // 161
								CUtlString::Get(); // 99
								CUtlString::String(); // 166
								{
									const uint32  m; // 101
									uint32 h; // 102
									uint32 k; // 103
									const int  r; // 104
								}
								CUtlStringToken::CUtlStringToken(
										const char& str);  // 13
								CKV3MemberName::CKV3MemberName<7>(
											const char& str);  // 166
								CUtlString::~CUtlString(); // 167
								CKV3MemberName::CKV3MemberName<18>(
											const char& str);  // 163
								CKV3MemberName::CKV3MemberName(
										const CKV3MemberName& rhs);  // 96
								KeyValues3::FindMember(
										CKV3MemberName memberName,
										KeyValues3* pDefaultValue);  // 163
								{
									const uint32  m; // 101
									uint32 h; // 102
									uint32 k; // 103
									const int  r; // 104
								}
								CUtlStringToken::CUtlStringToken(
										const char& str);  // 13
								CKV3MemberName::CKV3MemberName<7>(
											const char& str);  // 163
								CUtlString::operator=(
										const char* src);  // 163
							}
							{
							}
							iterator::operator*(); // 139
							{
								const uint32  m; // 101
								uint32 h; // 102
								uint32 k; // 103
								const int  r; // 104
							}
							CUtlStringToken::CUtlStringToken(
									const char& str);  // 13
							CKV3MemberName::CKV3MemberName<7>(
										const char& str);  // 144
							{
								const uint32  m; // 101
								uint32 h; // 102
								uint32 k; // 103
								const int  r; // 104
							}
							CUtlStringToken::CUtlStringToken(
									const char& str);  // 13
							CKV3MemberName::CKV3MemberName<7>(
										const char& str);  // 144
							CKV3MemberName::CKV3MemberName<31>(
										const char& str);  // 145
							CKV3MemberName::CKV3MemberName<31>(
										const char& str);  // 145
						}
						KeyValues3::IterateArray(); // 139
						iterator::iterator(
							const KV3Pointer_t* pArrayElements,
							int nStartingIndex,
							int nArrayElementCount);  // 396
						CKV3ArrayIteratorView<false>::begin(); // 139
						iterator::iterator(
							const KV3Pointer_t* pArrayElements,
							int nStartingIndex,
							int nArrayElementCount);  // 401
						CKV3ArrayIteratorView<false>::end(); // 139
						iterator::operator!=(
								const iterator& rhs);  // 139
					}
					CKV3MemberName::CKV3MemberName<12>(
								const char& str);  // 137
					CKV3MemberName::CKV3MemberName(
							const CKV3MemberName& rhs);  // 96
					KeyValues3::FindMember(
							CKV3MemberName memberName,
							KeyValues3* pDefaultValue);  // 137
				}
				CKV3MemberName::CKV3MemberName<17>(
							const char& str);  // 134
				CKV3MemberName::CKV3MemberName(
						const CKV3MemberName& rhs);  // 96
				KeyValues3::FindMember(
						CKV3MemberName memberName,
						KeyValues3* pDefaultValue);  // 134
			}
			CKV3MemberName::CKV3MemberName<11>(
						const char& str);  // 100
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 96
			KeyValues3::FindMember(
					CKV3MemberName memberName,
					KeyValues3* pDefaultValue);  // 100
			CKV3MemberName::CKV3MemberName<11>(
						const char& str);  // 129
		}
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 96
		KeyValues3::FindMember(
				CKV3MemberName memberName,
				KeyValues3* pDefaultValue);  // 97
		CUtlStringToken::CUtlStringToken(
				const char& str);  // 13
		CKV3MemberName::CKV3MemberName<7>(
					const char& str);  // 97
	}
} /* size: 0 */

// <05786B5E> kv3lib/kv3formats_compiledmodel.cpp:183
// variables: 14
// function calls: 34
KV3FormatConversionResult_t KV3Convert_COMPILED_MODEL_KEYS_FORMAT2_To_COMPILED_MODEL_KEYS_FORMAT3(KV3FormatConversionContext_t& conversionCtx)
{
	{
		KeyValues3* pIKData; // 185
		{
			KeyValues3* pIKChains; // 187
			{
				KeyValues3* pIKChain; // 189
				CKV3ArrayIteratorView<false>& __for_range; // 3524
				iterator __for_begin; // 60225
				iterator __for_end; // 60225
				{
					KeyValues3* pIKJoints; // 191
					{
						KeyValues3* pJoint; // 193
						CKV3ArrayIteratorView<false>& __for_range; // 3524
						iterator __for_begin; // 60225
						iterator __for_end; // 60225
						{
							KeyValues3* pNewJointConstraintArray; // 195
							KeyValues3* pConstraint; // 196
							{
								KeyValues3* pNewEntry; // 200
							}
							{
							}
							iterator::operator*(); // 193
							CKV3MemberName::CKV3MemberName<22>(
										const char& str);  // 195
							CKV3MemberName::CKV3MemberName<23>(
										const char& str);  // 196
							CKV3MemberName::CKV3MemberName(
									const CKV3MemberName& rhs);  // 96
							KeyValues3::FindMember(
									CKV3MemberName memberName,
									KeyValues3* pDefaultValue);  // 196
							KeyValues3::Internal_Type(); // 90
							KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
							KeyValues3::GetType(); // 245
							KeyValues3::IsNull(); // 198
						}
						KeyValues3::IterateArray(); // 193
						iterator::iterator(
							const KV3Pointer_t* pArrayElements,
							int nStartingIndex,
							int nArrayElementCount);  // 396
						CKV3ArrayIteratorView<false>::begin(); // 193
						iterator::iterator(
							const KV3Pointer_t* pArrayElements,
							int nStartingIndex,
							int nArrayElementCount);  // 401
						CKV3ArrayIteratorView<false>::end(); // 193
						iterator::operator!=(
								const iterator& rhs);  // 193
					}
					CUtlStringToken::CUtlStringToken(
							const char& str);  // 13
					CKV3MemberName::CKV3MemberName<9>(
								const char& str);  // 191
					CKV3MemberName::CKV3MemberName(
							const CKV3MemberName& rhs);  // 96
					KeyValues3::FindMember(
							CKV3MemberName memberName,
							KeyValues3* pDefaultValue);  // 191
				}
				KeyValues3::IterateArray(); // 189
				iterator::iterator(
					const KV3Pointer_t* pArrayElements,
					int nStartingIndex,
					int nArrayElementCount);  // 396
				CKV3ArrayIteratorView<false>::begin(); // 189
				iterator::iterator(
					const KV3Pointer_t* pArrayElements,
					int nStartingIndex,
					int nArrayElementCount);  // 401
				CKV3ArrayIteratorView<false>::end(); // 189
				iterator::operator!=(
						const iterator& rhs);  // 189
				{
				}
				iterator::operator*(); // 189
			}
			CUtlStringToken::CUtlStringToken(
					const char& str);  // 13
			CKV3MemberName::CKV3MemberName<11>(
						const char& str);  // 187
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 96
			KeyValues3::FindMember(
					CKV3MemberName memberName,
					KeyValues3* pDefaultValue);  // 187
		}
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 96
		KeyValues3::FindMember(
				CKV3MemberName memberName,
				KeyValues3* pDefaultValue);  // 185
		CUtlStringToken::CUtlStringToken(
				const char& str);  // 13
		CKV3MemberName::CKV3MemberName<7>(
					const char& str);  // 185
	}
} /* size: 0 */

// <02AC726B> kv3lib/kv3formats_compiledmodel.cpp:183
// variables: 14
// function calls: 34
KV3FormatConversionResult_t KV3Convert_COMPILED_MODEL_KEYS_FORMAT2_To_COMPILED_MODEL_KEYS_FORMAT3(KV3FormatConversionContext_t& conversionCtx)
{
	{
		KeyValues3* pIKData; // 185
		{
			KeyValues3* pIKChains; // 187
			{
				KeyValues3* pIKChain; // 189
				CKV3ArrayIteratorView<false>& __for_range; // 58310
				iterator __for_begin; // 49475
				iterator __for_end; // 49475
				{
					KeyValues3* pIKJoints; // 191
					{
						KeyValues3* pJoint; // 193
						CKV3ArrayIteratorView<false>& __for_range; // 58310
						iterator __for_begin; // 49475
						iterator __for_end; // 49475
						{
							KeyValues3* pNewJointConstraintArray; // 195
							KeyValues3* pConstraint; // 196
							{
								KeyValues3* pNewEntry; // 200
							}
							{
							}
							iterator::operator*(); // 193
							CKV3MemberName::CKV3MemberName<22>(
										const char& str);  // 195
							CKV3MemberName::CKV3MemberName<23>(
										const char& str);  // 196
							CKV3MemberName::CKV3MemberName(
									const CKV3MemberName& rhs);  // 96
							KeyValues3::FindMember(
									CKV3MemberName memberName,
									KeyValues3* pDefaultValue);  // 196
							KeyValues3::Internal_Type(); // 90
							KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
							KeyValues3::GetType(); // 245
							KeyValues3::IsNull(); // 198
						}
						KeyValues3::IterateArray(); // 193
						iterator::iterator(
							const KV3Pointer_t* pArrayElements,
							int nStartingIndex,
							int nArrayElementCount);  // 396
						CKV3ArrayIteratorView<false>::begin(); // 193
						iterator::iterator(
							const KV3Pointer_t* pArrayElements,
							int nStartingIndex,
							int nArrayElementCount);  // 401
						CKV3ArrayIteratorView<false>::end(); // 193
						iterator::operator!=(
								const iterator& rhs);  // 193
					}
					CUtlStringToken::CUtlStringToken(
							const char& str);  // 13
					CKV3MemberName::CKV3MemberName<9>(
								const char& str);  // 191
					CKV3MemberName::CKV3MemberName(
							const CKV3MemberName& rhs);  // 96
					KeyValues3::FindMember(
							CKV3MemberName memberName,
							KeyValues3* pDefaultValue);  // 191
				}
				KeyValues3::IterateArray(); // 189
				iterator::iterator(
					const KV3Pointer_t* pArrayElements,
					int nStartingIndex,
					int nArrayElementCount);  // 396
				CKV3ArrayIteratorView<false>::begin(); // 189
				iterator::iterator(
					const KV3Pointer_t* pArrayElements,
					int nStartingIndex,
					int nArrayElementCount);  // 401
				CKV3ArrayIteratorView<false>::end(); // 189
				iterator::operator!=(
						const iterator& rhs);  // 189
				{
				}
				iterator::operator*(); // 189
			}
			CUtlStringToken::CUtlStringToken(
					const char& str);  // 13
			CKV3MemberName::CKV3MemberName<11>(
						const char& str);  // 187
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 96
			KeyValues3::FindMember(
					CKV3MemberName memberName,
					KeyValues3* pDefaultValue);  // 187
		}
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 96
		KeyValues3::FindMember(
				CKV3MemberName memberName,
				KeyValues3* pDefaultValue);  // 185
		CUtlStringToken::CUtlStringToken(
				const char& str);  // 13
		CKV3MemberName::CKV3MemberName<7>(
					const char& str);  // 185
	}
} /* size: 0 */

// <013CF23B> kv3lib/kv3formats_compiledmodel.cpp:183
// variables: 14
// function calls: 34
KV3FormatConversionResult_t KV3Convert_COMPILED_MODEL_KEYS_FORMAT2_To_COMPILED_MODEL_KEYS_FORMAT3(KV3FormatConversionContext_t& conversionCtx)
{
	{
		KeyValues3* pIKData; // 185
		{
			KeyValues3* pIKChains; // 187
			{
				KeyValues3* pIKChain; // 189
				CKV3ArrayIteratorView<false>& __for_range; // 31572
				iterator __for_begin; // 22737
				iterator __for_end; // 22737
				{
					KeyValues3* pIKJoints; // 191
					{
						KeyValues3* pJoint; // 193
						CKV3ArrayIteratorView<false>& __for_range; // 31572
						iterator __for_begin; // 22737
						iterator __for_end; // 22737
						{
							KeyValues3* pNewJointConstraintArray; // 195
							KeyValues3* pConstraint; // 196
							{
								KeyValues3* pNewEntry; // 200
							}
							{
							}
							iterator::operator*(); // 193
							CKV3MemberName::CKV3MemberName<22>(
										const char& str);  // 195
							CKV3MemberName::CKV3MemberName<23>(
										const char& str);  // 196
							CKV3MemberName::CKV3MemberName(
									const CKV3MemberName& rhs);  // 96
							KeyValues3::FindMember(
									CKV3MemberName memberName,
									KeyValues3* pDefaultValue);  // 196
							KeyValues3::Internal_Type(); // 90
							KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
							KeyValues3::GetType(); // 245
							KeyValues3::IsNull(); // 198
						}
						KeyValues3::IterateArray(); // 193
						iterator::iterator(
							const KV3Pointer_t* pArrayElements,
							int nStartingIndex,
							int nArrayElementCount);  // 396
						CKV3ArrayIteratorView<false>::begin(); // 193
						iterator::iterator(
							const KV3Pointer_t* pArrayElements,
							int nStartingIndex,
							int nArrayElementCount);  // 401
						CKV3ArrayIteratorView<false>::end(); // 193
						iterator::operator!=(
								const iterator& rhs);  // 193
					}
					CUtlStringToken::CUtlStringToken(
							const char& str);  // 13
					CKV3MemberName::CKV3MemberName<9>(
								const char& str);  // 191
					CKV3MemberName::CKV3MemberName(
							const CKV3MemberName& rhs);  // 96
					KeyValues3::FindMember(
							CKV3MemberName memberName,
							KeyValues3* pDefaultValue);  // 191
				}
				KeyValues3::IterateArray(); // 189
				iterator::iterator(
					const KV3Pointer_t* pArrayElements,
					int nStartingIndex,
					int nArrayElementCount);  // 396
				CKV3ArrayIteratorView<false>::begin(); // 189
				iterator::iterator(
					const KV3Pointer_t* pArrayElements,
					int nStartingIndex,
					int nArrayElementCount);  // 401
				CKV3ArrayIteratorView<false>::end(); // 189
				iterator::operator!=(
						const iterator& rhs);  // 189
				{
				}
				iterator::operator*(); // 189
			}
			CUtlStringToken::CUtlStringToken(
					const char& str);  // 13
			CKV3MemberName::CKV3MemberName<11>(
						const char& str);  // 187
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 96
			KeyValues3::FindMember(
					CKV3MemberName memberName,
					KeyValues3* pDefaultValue);  // 187
		}
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 96
		KeyValues3::FindMember(
				CKV3MemberName memberName,
				KeyValues3* pDefaultValue);  // 185
		CUtlStringToken::CUtlStringToken(
				const char& str);  // 13
		CKV3MemberName::CKV3MemberName<7>(
					const char& str);  // 185
	}
} /* size: 0 */

// <0044AA00> kv3lib/kv3formats_compiledmodel.cpp:183
// variables: 14
// function calls: 34
KV3FormatConversionResult_t KV3Convert_COMPILED_MODEL_KEYS_FORMAT2_To_COMPILED_MODEL_KEYS_FORMAT3(KV3FormatConversionContext_t& conversionCtx)
{
	{
		KeyValues3* pIKData; // 185
		{
			KeyValues3* pIKChains; // 187
			{
				KeyValues3* pIKChain; // 189
				CKV3ArrayIteratorView<false>& __for_range; // 17739
				iterator __for_begin; // 8904
				iterator __for_end; // 8904
				{
					KeyValues3* pIKJoints; // 191
					{
						KeyValues3* pJoint; // 193
						CKV3ArrayIteratorView<false>& __for_range; // 17739
						iterator __for_begin; // 8904
						iterator __for_end; // 8904
						{
							KeyValues3* pNewJointConstraintArray; // 195
							KeyValues3* pConstraint; // 196
							{
								KeyValues3* pNewEntry; // 200
							}
							{
							}
							iterator::operator*(); // 193
							CKV3MemberName::CKV3MemberName<22>(
										const char& str);  // 195
							CKV3MemberName::CKV3MemberName<23>(
										const char& str);  // 196
							CKV3MemberName::CKV3MemberName(
									const CKV3MemberName& rhs);  // 96
							KeyValues3::FindMember(
									CKV3MemberName memberName,
									KeyValues3* pDefaultValue);  // 196
							KeyValues3::Internal_Type(); // 90
							KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
							KeyValues3::GetType(); // 245
							KeyValues3::IsNull(); // 198
						}
						KeyValues3::IterateArray(); // 193
						iterator::iterator(
							const KV3Pointer_t* pArrayElements,
							int nStartingIndex,
							int nArrayElementCount);  // 396
						CKV3ArrayIteratorView<false>::begin(); // 193
						iterator::iterator(
							const KV3Pointer_t* pArrayElements,
							int nStartingIndex,
							int nArrayElementCount);  // 401
						CKV3ArrayIteratorView<false>::end(); // 193
						iterator::operator!=(
								const iterator& rhs);  // 193
					}
					CUtlStringToken::CUtlStringToken(
							const char& str);  // 13
					CKV3MemberName::CKV3MemberName<9>(
								const char& str);  // 191
					CKV3MemberName::CKV3MemberName(
							const CKV3MemberName& rhs);  // 96
					KeyValues3::FindMember(
							CKV3MemberName memberName,
							KeyValues3* pDefaultValue);  // 191
				}
				KeyValues3::IterateArray(); // 189
				iterator::iterator(
					const KV3Pointer_t* pArrayElements,
					int nStartingIndex,
					int nArrayElementCount);  // 396
				CKV3ArrayIteratorView<false>::begin(); // 189
				iterator::iterator(
					const KV3Pointer_t* pArrayElements,
					int nStartingIndex,
					int nArrayElementCount);  // 401
				CKV3ArrayIteratorView<false>::end(); // 189
				iterator::operator!=(
						const iterator& rhs);  // 189
				{
				}
				iterator::operator*(); // 189
			}
			CUtlStringToken::CUtlStringToken(
					const char& str);  // 13
			CKV3MemberName::CKV3MemberName<11>(
						const char& str);  // 187
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 96
			KeyValues3::FindMember(
					CKV3MemberName memberName,
					KeyValues3* pDefaultValue);  // 187
		}
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 96
		KeyValues3::FindMember(
				CKV3MemberName memberName,
				KeyValues3* pDefaultValue);  // 185
		CUtlStringToken::CUtlStringToken(
				const char& str);  // 13
		CKV3MemberName::CKV3MemberName<7>(
					const char& str);  // 185
	}
} /* size: 0 */

// <00BA2B34> kv3lib/kv3formats_compiledmodel.cpp:183
// variables: 14
// function calls: 34
KV3FormatConversionResult_t KV3Convert_COMPILED_MODEL_KEYS_FORMAT2_To_COMPILED_MODEL_KEYS_FORMAT3(KV3FormatConversionContext_t& conversionCtx)
{
	{
		KeyValues3* pIKData; // 185
		{
			KeyValues3* pIKChains; // 187
			{
				KeyValues3* pIKChain; // 189
				CKV3ArrayIteratorView<false>& __for_range; // 30079
				iterator __for_begin; // 21244
				iterator __for_end; // 21244
				{
					KeyValues3* pIKJoints; // 191
					{
						KeyValues3* pJoint; // 193
						CKV3ArrayIteratorView<false>& __for_range; // 30079
						iterator __for_begin; // 21244
						iterator __for_end; // 21244
						{
							KeyValues3* pNewJointConstraintArray; // 195
							KeyValues3* pConstraint; // 196
							{
								KeyValues3* pNewEntry; // 200
							}
							{
							}
							iterator::operator*(); // 193
							CKV3MemberName::CKV3MemberName<22>(
										const char& str);  // 195
							CKV3MemberName::CKV3MemberName<23>(
										const char& str);  // 196
							CKV3MemberName::CKV3MemberName(
									const CKV3MemberName& rhs);  // 96
							KeyValues3::FindMember(
									CKV3MemberName memberName,
									KeyValues3* pDefaultValue);  // 196
							KeyValues3::Internal_Type(); // 90
							KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
							KeyValues3::GetType(); // 245
							KeyValues3::IsNull(); // 198
						}
						KeyValues3::IterateArray(); // 193
						iterator::iterator(
							const KV3Pointer_t* pArrayElements,
							int nStartingIndex,
							int nArrayElementCount);  // 396
						CKV3ArrayIteratorView<false>::begin(); // 193
						iterator::iterator(
							const KV3Pointer_t* pArrayElements,
							int nStartingIndex,
							int nArrayElementCount);  // 401
						CKV3ArrayIteratorView<false>::end(); // 193
						iterator::operator!=(
								const iterator& rhs);  // 193
					}
					CUtlStringToken::CUtlStringToken(
							const char& str);  // 13
					CKV3MemberName::CKV3MemberName<9>(
								const char& str);  // 191
					CKV3MemberName::CKV3MemberName(
							const CKV3MemberName& rhs);  // 96
					KeyValues3::FindMember(
							CKV3MemberName memberName,
							KeyValues3* pDefaultValue);  // 191
				}
				KeyValues3::IterateArray(); // 189
				iterator::iterator(
					const KV3Pointer_t* pArrayElements,
					int nStartingIndex,
					int nArrayElementCount);  // 396
				CKV3ArrayIteratorView<false>::begin(); // 189
				iterator::iterator(
					const KV3Pointer_t* pArrayElements,
					int nStartingIndex,
					int nArrayElementCount);  // 401
				CKV3ArrayIteratorView<false>::end(); // 189
				iterator::operator!=(
						const iterator& rhs);  // 189
				{
				}
				iterator::operator*(); // 189
			}
			CUtlStringToken::CUtlStringToken(
					const char& str);  // 13
			CKV3MemberName::CKV3MemberName<11>(
						const char& str);  // 187
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 96
			KeyValues3::FindMember(
					CKV3MemberName memberName,
					KeyValues3* pDefaultValue);  // 187
		}
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 96
		KeyValues3::FindMember(
				CKV3MemberName memberName,
				KeyValues3* pDefaultValue);  // 185
		CUtlStringToken::CUtlStringToken(
				const char& str);  // 13
		CKV3MemberName::CKV3MemberName<7>(
					const char& str);  // 185
	}
} /* size: 0 */

// <0029440A> kv3lib/kv3formats_compiledmodel.cpp:183
// variables: 14
// function calls: 34
KV3FormatConversionResult_t KV3Convert_COMPILED_MODEL_KEYS_FORMAT2_To_COMPILED_MODEL_KEYS_FORMAT3(KV3FormatConversionContext_t& conversionCtx)
{
	{
		KeyValues3* pIKData; // 185
		{
			KeyValues3* pIKChains; // 187
			{
				KeyValues3* pIKChain; // 189
				CKV3ArrayIteratorView<false>& __for_range; // 42373
				iterator __for_begin; // 33538
				iterator __for_end; // 33538
				{
					KeyValues3* pIKJoints; // 191
					{
						KeyValues3* pJoint; // 193
						CKV3ArrayIteratorView<false>& __for_range; // 42373
						iterator __for_begin; // 33538
						iterator __for_end; // 33538
						{
							KeyValues3* pNewJointConstraintArray; // 195
							KeyValues3* pConstraint; // 196
							{
								KeyValues3* pNewEntry; // 200
							}
							{
							}
							iterator::operator*(); // 193
							CKV3MemberName::CKV3MemberName<22>(
										const char& str);  // 195
							CKV3MemberName::CKV3MemberName<23>(
										const char& str);  // 196
							CKV3MemberName::CKV3MemberName(
									const CKV3MemberName& rhs);  // 96
							KeyValues3::FindMember(
									CKV3MemberName memberName,
									KeyValues3* pDefaultValue);  // 196
							KeyValues3::Internal_Type(); // 90
							KV3InternalTypeToExternal(KeyValues3InternalType_t nType); // 90
							KeyValues3::GetType(); // 245
							KeyValues3::IsNull(); // 198
						}
						KeyValues3::IterateArray(); // 193
						iterator::iterator(
							const KV3Pointer_t* pArrayElements,
							int nStartingIndex,
							int nArrayElementCount);  // 396
						CKV3ArrayIteratorView<false>::begin(); // 193
						iterator::iterator(
							const KV3Pointer_t* pArrayElements,
							int nStartingIndex,
							int nArrayElementCount);  // 401
						CKV3ArrayIteratorView<false>::end(); // 193
						iterator::operator!=(
								const iterator& rhs);  // 193
					}
					CUtlStringToken::CUtlStringToken(
							const char& str);  // 13
					CKV3MemberName::CKV3MemberName<9>(
								const char& str);  // 191
					CKV3MemberName::CKV3MemberName(
							const CKV3MemberName& rhs);  // 96
					KeyValues3::FindMember(
							CKV3MemberName memberName,
							KeyValues3* pDefaultValue);  // 191
				}
				KeyValues3::IterateArray(); // 189
				iterator::iterator(
					const KV3Pointer_t* pArrayElements,
					int nStartingIndex,
					int nArrayElementCount);  // 396
				CKV3ArrayIteratorView<false>::begin(); // 189
				iterator::iterator(
					const KV3Pointer_t* pArrayElements,
					int nStartingIndex,
					int nArrayElementCount);  // 401
				CKV3ArrayIteratorView<false>::end(); // 189
				iterator::operator!=(
						const iterator& rhs);  // 189
				{
				}
				iterator::operator*(); // 189
			}
			CUtlStringToken::CUtlStringToken(
					const char& str);  // 13
			CKV3MemberName::CKV3MemberName<11>(
						const char& str);  // 187
			CKV3MemberName::CKV3MemberName(
					const CKV3MemberName& rhs);  // 96
			KeyValues3::FindMember(
					CKV3MemberName memberName,
					KeyValues3* pDefaultValue);  // 187
		}
		CKV3MemberName::CKV3MemberName(
				const CKV3MemberName& rhs);  // 96
		KeyValues3::FindMember(
				CKV3MemberName memberName,
				KeyValues3* pDefaultValue);  // 185
		CUtlStringToken::CUtlStringToken(
				const char& str);  // 13
		CKV3MemberName::CKV3MemberName<7>(
					const char& str);  // 185
	}
} /* size: 0 */

