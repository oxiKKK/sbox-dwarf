
//
// thirdparty/yoga/YGNodeStyle.cpp
//
//	referenced by: libengine2.so
//
//	functions: 28
//

// <0292E3DE> ../thirdparty/yoga/YGNodeStyle.cpp:21
// variable: 1
void updateStyle<&facebook::yoga::Style::direction, &facebook::yoga::Style::setDirection, facebook::yoga::Direction>(YGNodeRef node, Direction value)
{
	Style& style; // 22
} /* size: 0, variables: 1 */

// <0292E359> ../thirdparty/yoga/YGNodeStyle.cpp:21
// variable: 1
void updateStyle<&facebook::yoga::Style::flexDirection, &facebook::yoga::Style::setFlexDirection, facebook::yoga::FlexDirection>(YGNodeRef node, FlexDirection value)
{
	Style& style; // 22
} /* size: 0, variables: 1 */

// <0292E2D4> ../thirdparty/yoga/YGNodeStyle.cpp:21
// variable: 1
void updateStyle<&facebook::yoga::Style::justifyContent, &facebook::yoga::Style::setJustifyContent, facebook::yoga::Justify>(YGNodeRef node, Justify value)
{
	Style& style; // 22
} /* size: 0, variables: 1 */

// <0292E24F> ../thirdparty/yoga/YGNodeStyle.cpp:21
// variable: 1
void updateStyle<&facebook::yoga::Style::alignContent, &facebook::yoga::Style::setAlignContent, facebook::yoga::Align>(YGNodeRef node, Align value)
{
	Style& style; // 22
} /* size: 0, variables: 1 */

// <0292E205> ../thirdparty/yoga/YGNodeStyle.cpp:21
// variable: 1
void updateStyle<&facebook::yoga::Style::alignItems, &facebook::yoga::Style::setAlignItems, facebook::yoga::Align>(YGNodeRef node, Align value)
{
	Style& style; // 22
} /* size: 0, variables: 1 */

// <0292E1BB> ../thirdparty/yoga/YGNodeStyle.cpp:21
// variable: 1
void updateStyle<&facebook::yoga::Style::alignSelf, &facebook::yoga::Style::setAlignSelf, facebook::yoga::Align>(YGNodeRef node, Align value)
{
	Style& style; // 22
} /* size: 0, variables: 1 */

// <0292E136> ../thirdparty/yoga/YGNodeStyle.cpp:21
// variable: 1
void updateStyle<&facebook::yoga::Style::positionType, &facebook::yoga::Style::setPositionType, facebook::yoga::PositionType>(YGNodeRef node, PositionType value)
{
	Style& style; // 22
} /* size: 0, variables: 1 */

// <0292E0B1> ../thirdparty/yoga/YGNodeStyle.cpp:21
// variable: 1
void updateStyle<&facebook::yoga::Style::flexWrap, &facebook::yoga::Style::setFlexWrap, facebook::yoga::Wrap>(YGNodeRef node, Wrap value)
{
	Style& style; // 22
} /* size: 0, variables: 1 */

// <0292E02C> ../thirdparty/yoga/YGNodeStyle.cpp:21
// variable: 1
void updateStyle<&facebook::yoga::Style::overflow, &facebook::yoga::Style::setOverflow, facebook::yoga::Overflow>(YGNodeRef node, Overflow value)
{
	Style& style; // 22
} /* size: 0, variables: 1 */

// <0292DFA7> ../thirdparty/yoga/YGNodeStyle.cpp:21
// variable: 1
void updateStyle<&facebook::yoga::Style::display, &facebook::yoga::Style::setDisplay, facebook::yoga::Display>(YGNodeRef node, Display value)
{
	Style& style; // 22
} /* size: 0, variables: 1 */

// <0292DF22> ../thirdparty/yoga/YGNodeStyle.cpp:21
// variable: 1
void updateStyle<&facebook::yoga::Style::flex, &facebook::yoga::Style::setFlex, facebook::yoga::FloatOptional>(YGNodeRef node, FloatOptional value)
{
	Style& style; // 22
} /* size: 0, variables: 1 */

// <0292DED8> ../thirdparty/yoga/YGNodeStyle.cpp:21
// variable: 1
void updateStyle<&facebook::yoga::Style::flexGrow, &facebook::yoga::Style::setFlexGrow, facebook::yoga::FloatOptional>(YGNodeRef node, FloatOptional value)
{
	Style& style; // 22
} /* size: 0, variables: 1 */

// <0292DE8E> ../thirdparty/yoga/YGNodeStyle.cpp:21
// variable: 1
void updateStyle<&facebook::yoga::Style::flexShrink, &facebook::yoga::Style::setFlexShrink, facebook::yoga::FloatOptional>(YGNodeRef node, FloatOptional value)
{
	Style& style; // 22
} /* size: 0, variables: 1 */

// <0292D3DE> ../thirdparty/yoga/YGNodeStyle.cpp:21
// variables: 4
// function calls: 47
void updateStyle<&facebook::yoga::Style::flexBasis, &facebook::yoga::Style::setFlexBasis, facebook::yoga::StyleLength>(YGNodeRef node, StyleLength value)
{
	Style& style; // 22
	StyleValueHandle::type(); // 41
	StyleValueHandle::isUndefined(); // 51
	{
		float value; // 59
		StyleValueHandle::value(); // 60
		unpackInlineInteger(uint16_t value); // 61
		isinf<float>(float value); // 41
		percent(float value); // 65
		isinf<float>(float value); // 35
		points(float value); // 64
		array<unsigned int, 4>::operator[](
				size_type __n);  // 98
		_M_ptr(const __uniq_ptr_impl<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValue this); // 472
		get(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 465
		operator->(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 100
		vector<unsigned int, std::allocator<unsigned int> >::size(); // 1292
		vector<unsigned int, std::allocator<unsigned int> >::_M_range_check(
				size_type __n);  // 1315
		vector<unsigned int, std::allocator<unsigned int> >::operator[](
				size_type __n);  // 1316
		vector<unsigned int, std::allocator<unsigned int> >::at(
			size_type __n);  // 100
		SmallValueBuffer<4>::get32(
			uint16_t index);  // 96
		SmallValueBuffer<4>::get32(
			uint16_t index);  // 60
		bit_cast<float, unsigned int>(const unsigned int& __from); // 60
	}
	StyleValuePool::getLength(
			StyleValueHandle handle);  // 137
	Style::flexBasis(); // 23
	FloatOptional::unwrap(); // 47
	operator==(FloatOptional lhs,
			FloatOptional rhs);  // 90
	StyleLength::operator==(
			const StyleLength& rhs);  // 23
	StyleValueHandle::setType(
		Type handleType);  // 31
	{
		Type type; // 35
		StyleValueHandle::setType(
			Type handleType);  // 86
		{
			short unsigned int newIndex; // 89
			bit_cast<unsigned int, float>(const float& __from); // 90
			StyleValueHandle::value(); // 90
			array<unsigned int, 4>::operator[](
					size_type __n);  // 70
			_M_ptr(const __uniq_ptr_impl<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValue this); // 472
			get(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 465
			operator->(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 72
			vector<unsigned int, std::allocator<unsigned int> >::size(); // 1292
			vector<unsigned int, std::allocator<unsigned int> >::_M_range_check(
					size_type __n);  // 1315
			vector<unsigned int, std::allocator<unsigned int> >::operator[](
					size_type __n);  // 1316
			vector<unsigned int, std::allocator<unsigned int> >::at(
				size_type __n);  // 72
			SmallValueBuffer<4>::replace(
				uint16_t index,
				uint32_t value);  // 68
			SmallValueBuffer<4>::replace(
				uint16_t index,
				uint32_t value);  // 90
			StyleValueHandle::setValue(
				uint16_t value);  // 91
		}
		isIntegerPackable(float f); // 92
		packInlineInteger(float value); // 93
		StyleValueHandle::setValue(
			uint16_t value);  // 93
		StyleValuePool::storeValue(
				StyleValueHandle& handle,
				float value,
				Type type);  // 38
	}
	StyleValueHandle::setType(
		Type handleType);  // 33
	StyleValuePool::store(
		StyleValueHandle& handle,
		StyleLength length);  // 29
	StyleValuePool::store(
		StyleValueHandle& handle,
		StyleLength length);  // 140
	Style::setFlexBasis(
			Length value);  // 24
} /* size: 0, variables: 1, inline expansions: 12 (1228 bytes) */

// <0292A574> ../thirdparty/yoga/YGNodeStyle.cpp:21
// variable: 1
void updateStyle<&facebook::yoga::Style::aspectRatio, &facebook::yoga::Style::setAspectRatio, facebook::yoga::FloatOptional>(YGNodeRef node, FloatOptional value)
{
	Style& style; // 22
} /* size: 0, variables: 1 */

// <0292A4EF> ../thirdparty/yoga/YGNodeStyle.cpp:21
// variable: 1
void updateStyle<&facebook::yoga::Style::boxSizing, &facebook::yoga::Style::setBoxSizing, facebook::yoga::BoxSizing>(YGNodeRef node, BoxSizing value)
{
	Style& style; // 22
} /* size: 0, variables: 1 */

// <0292C864> ../thirdparty/yoga/YGNodeStyle.cpp:30
// variables: 4
// function calls: 48
void updateStyle<&facebook::yoga::Style::position, &facebook::yoga::Style::setPosition, facebook::yoga::Edge, facebook::yoga::StyleLength>(YGNodeRef node, Edge idx, StyleLength value)
{
	Style& style; // 31
	array<facebook::yoga::StyleValueHandle, 9>::operator[](
			size_type __n);  // 151
	StyleValueHandle::type(); // 41
	StyleValueHandle::isUndefined(); // 51
	{
		float value; // 59
		StyleValueHandle::value(); // 60
		unpackInlineInteger(uint16_t value); // 61
		isinf<float>(float value); // 41
		percent(float value); // 65
		isinf<float>(float value); // 35
		points(float value); // 64
		array<unsigned int, 4>::operator[](
				size_type __n);  // 98
		_M_ptr(const __uniq_ptr_impl<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValue this); // 472
		get(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 465
		operator->(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 100
		vector<unsigned int, std::allocator<unsigned int> >::size(); // 1292
		vector<unsigned int, std::allocator<unsigned int> >::_M_range_check(
				size_type __n);  // 1315
		vector<unsigned int, std::allocator<unsigned int> >::operator[](
				size_type __n);  // 1316
		vector<unsigned int, std::allocator<unsigned int> >::at(
			size_type __n);  // 100
		SmallValueBuffer<4>::get32(
			uint16_t index);  // 96
		SmallValueBuffer<4>::get32(
			uint16_t index);  // 60
		bit_cast<float, unsigned int>(const unsigned int& __from); // 60
	}
	StyleValuePool::getLength(
			StyleValueHandle handle);  // 151
	Style::position(
		Edge edge);  // 32
	FloatOptional::unwrap(); // 47
	operator==(FloatOptional lhs,
			FloatOptional rhs);  // 90
	StyleLength::operator==(
			const StyleLength& rhs);  // 32
	StyleValueHandle::setType(
		Type handleType);  // 31
	{
		Type type; // 35
		StyleValueHandle::setValue(
			uint16_t value);  // 93
		{
			short unsigned int newIndex; // 89
			bit_cast<unsigned int, float>(const float& __from); // 90
			StyleValueHandle::value(); // 90
			array<unsigned int, 4>::operator[](
					size_type __n);  // 70
			_M_ptr(const __uniq_ptr_impl<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValue this); // 472
			get(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 465
			operator->(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 72
			vector<unsigned int, std::allocator<unsigned int> >::size(); // 1292
			vector<unsigned int, std::allocator<unsigned int> >::_M_range_check(
					size_type __n);  // 1315
			vector<unsigned int, std::allocator<unsigned int> >::operator[](
					size_type __n);  // 1316
			vector<unsigned int, std::allocator<unsigned int> >::at(
				size_type __n);  // 72
			SmallValueBuffer<4>::replace(
				uint16_t index,
				uint32_t value);  // 68
			SmallValueBuffer<4>::replace(
				uint16_t index,
				uint32_t value);  // 90
			StyleValueHandle::setValue(
				uint16_t value);  // 91
		}
		isIntegerPackable(float f); // 92
		packInlineInteger(float value); // 93
		StyleValueHandle::setType(
			Type handleType);  // 86
		StyleValuePool::storeValue(
				StyleValueHandle& handle,
				float value,
				Type type);  // 38
	}
	StyleValueHandle::setType(
		Type handleType);  // 33
	StyleValuePool::store(
		StyleValueHandle& handle,
		StyleLength length);  // 29
	StyleValuePool::store(
		StyleValueHandle& handle,
		StyleLength length);  // 154
	Style::setPosition(
			Edge edge,
			Length value);  // 33
} /* size: 0, variables: 1, inline expansions: 13 (1255 bytes) */

// <0292BD25> ../thirdparty/yoga/YGNodeStyle.cpp:30
// variables: 4
// function calls: 48
void updateStyle<&facebook::yoga::Style::margin, &facebook::yoga::Style::setMargin, facebook::yoga::Edge, facebook::yoga::StyleLength>(YGNodeRef node, Edge idx, StyleLength value)
{
	Style& style; // 31
	array<facebook::yoga::StyleValueHandle, 9>::operator[](
			size_type __n);  // 144
	StyleValueHandle::type(); // 41
	StyleValueHandle::isUndefined(); // 51
	{
		float value; // 59
		StyleValueHandle::value(); // 60
		unpackInlineInteger(uint16_t value); // 61
		isinf<float>(float value); // 41
		percent(float value); // 65
		isinf<float>(float value); // 35
		points(float value); // 64
		array<unsigned int, 4>::operator[](
				size_type __n);  // 98
		_M_ptr(const __uniq_ptr_impl<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValue this); // 472
		get(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 465
		operator->(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 100
		vector<unsigned int, std::allocator<unsigned int> >::size(); // 1292
		vector<unsigned int, std::allocator<unsigned int> >::_M_range_check(
				size_type __n);  // 1315
		vector<unsigned int, std::allocator<unsigned int> >::operator[](
				size_type __n);  // 1316
		vector<unsigned int, std::allocator<unsigned int> >::at(
			size_type __n);  // 100
		SmallValueBuffer<4>::get32(
			uint16_t index);  // 96
		SmallValueBuffer<4>::get32(
			uint16_t index);  // 60
		bit_cast<float, unsigned int>(const unsigned int& __from); // 60
	}
	StyleValuePool::getLength(
			StyleValueHandle handle);  // 144
	Style::margin(
		Edge edge);  // 32
	FloatOptional::unwrap(); // 47
	operator==(FloatOptional lhs,
			FloatOptional rhs);  // 90
	StyleLength::operator==(
			const StyleLength& rhs);  // 32
	StyleValueHandle::setType(
		Type handleType);  // 31
	{
		Type type; // 35
		StyleValueHandle::setValue(
			uint16_t value);  // 93
		{
			short unsigned int newIndex; // 89
			bit_cast<unsigned int, float>(const float& __from); // 90
			StyleValueHandle::value(); // 90
			array<unsigned int, 4>::operator[](
					size_type __n);  // 70
			_M_ptr(const __uniq_ptr_impl<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValue this); // 472
			get(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 465
			operator->(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 72
			vector<unsigned int, std::allocator<unsigned int> >::size(); // 1292
			vector<unsigned int, std::allocator<unsigned int> >::_M_range_check(
					size_type __n);  // 1315
			vector<unsigned int, std::allocator<unsigned int> >::operator[](
					size_type __n);  // 1316
			vector<unsigned int, std::allocator<unsigned int> >::at(
				size_type __n);  // 72
			SmallValueBuffer<4>::replace(
				uint16_t index,
				uint32_t value);  // 68
			SmallValueBuffer<4>::replace(
				uint16_t index,
				uint32_t value);  // 90
			StyleValueHandle::setValue(
				uint16_t value);  // 91
		}
		isIntegerPackable(float f); // 92
		packInlineInteger(float value); // 93
		StyleValueHandle::setType(
			Type handleType);  // 86
		StyleValuePool::storeValue(
				StyleValueHandle& handle,
				float value,
				Type type);  // 38
	}
	StyleValueHandle::setType(
		Type handleType);  // 33
	StyleValuePool::store(
		StyleValueHandle& handle,
		StyleLength length);  // 29
	StyleValuePool::store(
		StyleValueHandle& handle,
		StyleLength length);  // 147
	Style::setMargin(
			Edge edge,
			Length value);  // 33
} /* size: 0, variables: 1, inline expansions: 13 (1255 bytes) */

// <0292B1E6> ../thirdparty/yoga/YGNodeStyle.cpp:30
// variables: 4
// function calls: 48
void updateStyle<&facebook::yoga::Style::padding, &facebook::yoga::Style::setPadding, facebook::yoga::Edge, facebook::yoga::StyleLength>(YGNodeRef node, Edge idx, StyleLength value)
{
	Style& style; // 31
	array<facebook::yoga::StyleValueHandle, 9>::operator[](
			size_type __n);  // 158
	StyleValueHandle::type(); // 41
	StyleValueHandle::isUndefined(); // 51
	{
		float value; // 59
		StyleValueHandle::value(); // 60
		unpackInlineInteger(uint16_t value); // 61
		isinf<float>(float value); // 41
		percent(float value); // 65
		isinf<float>(float value); // 35
		points(float value); // 64
		array<unsigned int, 4>::operator[](
				size_type __n);  // 98
		_M_ptr(const __uniq_ptr_impl<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValue this); // 472
		get(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 465
		operator->(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 100
		vector<unsigned int, std::allocator<unsigned int> >::size(); // 1292
		vector<unsigned int, std::allocator<unsigned int> >::_M_range_check(
				size_type __n);  // 1315
		vector<unsigned int, std::allocator<unsigned int> >::operator[](
				size_type __n);  // 1316
		vector<unsigned int, std::allocator<unsigned int> >::at(
			size_type __n);  // 100
		SmallValueBuffer<4>::get32(
			uint16_t index);  // 96
		SmallValueBuffer<4>::get32(
			uint16_t index);  // 60
		bit_cast<float, unsigned int>(const unsigned int& __from); // 60
	}
	StyleValuePool::getLength(
			StyleValueHandle handle);  // 158
	Style::padding(
		Edge edge);  // 32
	FloatOptional::unwrap(); // 47
	operator==(FloatOptional lhs,
			FloatOptional rhs);  // 90
	StyleLength::operator==(
			const StyleLength& rhs);  // 32
	StyleValueHandle::setType(
		Type handleType);  // 31
	{
		Type type; // 35
		StyleValueHandle::setValue(
			uint16_t value);  // 93
		{
			short unsigned int newIndex; // 89
			bit_cast<unsigned int, float>(const float& __from); // 90
			StyleValueHandle::value(); // 90
			array<unsigned int, 4>::operator[](
					size_type __n);  // 70
			_M_ptr(const __uniq_ptr_impl<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValue this); // 472
			get(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 465
			operator->(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 72
			vector<unsigned int, std::allocator<unsigned int> >::size(); // 1292
			vector<unsigned int, std::allocator<unsigned int> >::_M_range_check(
					size_type __n);  // 1315
			vector<unsigned int, std::allocator<unsigned int> >::operator[](
					size_type __n);  // 1316
			vector<unsigned int, std::allocator<unsigned int> >::at(
				size_type __n);  // 72
			SmallValueBuffer<4>::replace(
				uint16_t index,
				uint32_t value);  // 68
			SmallValueBuffer<4>::replace(
				uint16_t index,
				uint32_t value);  // 90
			StyleValueHandle::setValue(
				uint16_t value);  // 91
		}
		isIntegerPackable(float f); // 92
		packInlineInteger(float value); // 93
		StyleValueHandle::setType(
			Type handleType);  // 86
		StyleValuePool::storeValue(
				StyleValueHandle& handle,
				float value,
				Type type);  // 38
	}
	StyleValueHandle::setType(
		Type handleType);  // 33
	StyleValuePool::store(
		StyleValueHandle& handle,
		StyleLength length);  // 29
	StyleValuePool::store(
		StyleValueHandle& handle,
		StyleLength length);  // 161
	Style::setPadding(
			Edge edge,
			Length value);  // 33
} /* size: 0, variables: 1, inline expansions: 13 (1255 bytes) */

// <0292B187> ../thirdparty/yoga/YGNodeStyle.cpp:30
// variable: 1
void updateStyle<&facebook::yoga::Style::border, &facebook::yoga::Style::setBorder, facebook::yoga::Edge, facebook::yoga::StyleLength>(YGNodeRef node, Edge idx, StyleLength value)
{
	Style& style; // 31
} /* size: 0, variables: 1 */

// <0292A603> ../thirdparty/yoga/YGNodeStyle.cpp:30
// variables: 4
// function calls: 48
void updateStyle<&facebook::yoga::Style::gap, &facebook::yoga::Style::setGap, facebook::yoga::Gutter, facebook::yoga::StyleLength>(YGNodeRef node, Gutter idx, StyleLength value)
{
	Style& style; // 31
	array<facebook::yoga::StyleValueHandle, 3>::operator[](
			size_type __n);  // 172
	StyleValueHandle::type(); // 41
	StyleValueHandle::isUndefined(); // 51
	{
		float value; // 59
		StyleValueHandle::value(); // 60
		unpackInlineInteger(uint16_t value); // 61
		isinf<float>(float value); // 41
		percent(float value); // 65
		isinf<float>(float value); // 35
		points(float value); // 64
		array<unsigned int, 4>::operator[](
				size_type __n);  // 98
		_M_ptr(const __uniq_ptr_impl<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValue this); // 472
		get(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 465
		operator->(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 100
		vector<unsigned int, std::allocator<unsigned int> >::size(); // 1292
		vector<unsigned int, std::allocator<unsigned int> >::_M_range_check(
				size_type __n);  // 1315
		vector<unsigned int, std::allocator<unsigned int> >::operator[](
				size_type __n);  // 1316
		vector<unsigned int, std::allocator<unsigned int> >::at(
			size_type __n);  // 100
		SmallValueBuffer<4>::get32(
			uint16_t index);  // 96
		SmallValueBuffer<4>::get32(
			uint16_t index);  // 60
		bit_cast<float, unsigned int>(const unsigned int& __from); // 60
	}
	StyleValuePool::getLength(
			StyleValueHandle handle);  // 172
	Style::gap(
		Gutter gutter);  // 32
	FloatOptional::unwrap(); // 47
	operator==(FloatOptional lhs,
			FloatOptional rhs);  // 90
	StyleLength::operator==(
			const StyleLength& rhs);  // 32
	StyleValueHandle::setType(
		Type handleType);  // 31
	{
		Type type; // 35
		StyleValueHandle::setValue(
			uint16_t value);  // 93
		{
			short unsigned int newIndex; // 89
			bit_cast<unsigned int, float>(const float& __from); // 90
			StyleValueHandle::value(); // 90
			array<unsigned int, 4>::operator[](
					size_type __n);  // 70
			_M_ptr(const __uniq_ptr_impl<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValue this); // 472
			get(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 465
			operator->(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 72
			vector<unsigned int, std::allocator<unsigned int> >::size(); // 1292
			vector<unsigned int, std::allocator<unsigned int> >::_M_range_check(
					size_type __n);  // 1315
			vector<unsigned int, std::allocator<unsigned int> >::operator[](
					size_type __n);  // 1316
			vector<unsigned int, std::allocator<unsigned int> >::at(
				size_type __n);  // 72
			SmallValueBuffer<4>::replace(
				uint16_t index,
				uint32_t value);  // 68
			SmallValueBuffer<4>::replace(
				uint16_t index,
				uint32_t value);  // 90
			StyleValueHandle::setValue(
				uint16_t value);  // 91
		}
		isIntegerPackable(float f); // 92
		packInlineInteger(float value); // 93
		StyleValueHandle::setType(
			Type handleType);  // 86
		StyleValuePool::storeValue(
				StyleValueHandle& handle,
				float value,
				Type type);  // 38
	}
	StyleValueHandle::setType(
		Type handleType);  // 33
	StyleValuePool::store(
		StyleValueHandle& handle,
		StyleLength length);  // 29
	StyleValuePool::store(
		StyleValueHandle& handle,
		StyleLength length);  // 175
	Style::setGap(
		Gutter gutter,
		Length value);  // 33
} /* size: 0, variables: 1, inline expansions: 13 (1255 bytes) */

// <02929968> ../thirdparty/yoga/YGNodeStyle.cpp:30
// variables: 4
// function calls: 48
void updateStyle<&facebook::yoga::Style::dimension, &facebook::yoga::Style::setDimension, facebook::yoga::Dimension, facebook::yoga::StyleLength>(YGNodeRef node, Dimension idx, StyleLength value)
{
	Style& style; // 31
	array<facebook::yoga::StyleValueHandle, 2>::operator[](
			size_type __n);  // 179
	StyleValueHandle::type(); // 41
	StyleValueHandle::isUndefined(); // 51
	{
		float value; // 59
		StyleValueHandle::value(); // 60
		unpackInlineInteger(uint16_t value); // 61
		isinf<float>(float value); // 41
		percent(float value); // 65
		isinf<float>(float value); // 35
		points(float value); // 64
		array<unsigned int, 4>::operator[](
				size_type __n);  // 98
		_M_ptr(const __uniq_ptr_impl<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValue this); // 472
		get(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 465
		operator->(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 100
		vector<unsigned int, std::allocator<unsigned int> >::size(); // 1292
		vector<unsigned int, std::allocator<unsigned int> >::_M_range_check(
				size_type __n);  // 1315
		vector<unsigned int, std::allocator<unsigned int> >::operator[](
				size_type __n);  // 1316
		vector<unsigned int, std::allocator<unsigned int> >::at(
			size_type __n);  // 100
		SmallValueBuffer<4>::get32(
			uint16_t index);  // 96
		SmallValueBuffer<4>::get32(
			uint16_t index);  // 60
		bit_cast<float, unsigned int>(const unsigned int& __from); // 60
	}
	StyleValuePool::getLength(
			StyleValueHandle handle);  // 179
	Style::dimension(
			Dimension axis);  // 32
	FloatOptional::unwrap(); // 47
	operator==(FloatOptional lhs,
			FloatOptional rhs);  // 90
	StyleLength::operator==(
			const StyleLength& rhs);  // 32
	StyleValueHandle::setType(
		Type handleType);  // 31
	{
		Type type; // 35
		StyleValueHandle::setValue(
			uint16_t value);  // 93
		{
			short unsigned int newIndex; // 89
			bit_cast<unsigned int, float>(const float& __from); // 90
			StyleValueHandle::value(); // 90
			array<unsigned int, 4>::operator[](
					size_type __n);  // 70
			_M_ptr(const __uniq_ptr_impl<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValue this); // 472
			get(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 465
			operator->(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 72
			vector<unsigned int, std::allocator<unsigned int> >::size(); // 1292
			vector<unsigned int, std::allocator<unsigned int> >::_M_range_check(
					size_type __n);  // 1315
			vector<unsigned int, std::allocator<unsigned int> >::operator[](
					size_type __n);  // 1316
			vector<unsigned int, std::allocator<unsigned int> >::at(
				size_type __n);  // 72
			SmallValueBuffer<4>::replace(
				uint16_t index,
				uint32_t value);  // 68
			SmallValueBuffer<4>::replace(
				uint16_t index,
				uint32_t value);  // 90
			StyleValueHandle::setValue(
				uint16_t value);  // 91
		}
		isIntegerPackable(float f); // 92
		packInlineInteger(float value); // 93
		StyleValueHandle::setType(
			Type handleType);  // 86
		StyleValuePool::storeValue(
				StyleValueHandle& handle,
				float value,
				Type type);  // 38
	}
	StyleValueHandle::setType(
		Type handleType);  // 33
	StyleValuePool::store(
		StyleValueHandle& handle,
		StyleLength length);  // 29
	StyleValuePool::store(
		StyleValueHandle& handle,
		StyleLength length);  // 182
	Style::setDimension(
			Dimension axis,
			Length value);  // 33
} /* size: 0, variables: 1, inline expansions: 13 (1331 bytes) */

// <02928E1C> ../thirdparty/yoga/YGNodeStyle.cpp:30
// variables: 4
// function calls: 48
void updateStyle<&facebook::yoga::Style::minDimension, &facebook::yoga::Style::setMinDimension, facebook::yoga::Dimension, facebook::yoga::StyleLength>(YGNodeRef node, Dimension idx, StyleLength value)
{
	Style& style; // 31
	array<facebook::yoga::StyleValueHandle, 2>::operator[](
			size_type __n);  // 186
	StyleValueHandle::type(); // 41
	StyleValueHandle::isUndefined(); // 51
	{
		float value; // 59
		StyleValueHandle::value(); // 60
		unpackInlineInteger(uint16_t value); // 61
		isinf<float>(float value); // 41
		percent(float value); // 65
		isinf<float>(float value); // 35
		points(float value); // 64
		array<unsigned int, 4>::operator[](
				size_type __n);  // 98
		_M_ptr(const __uniq_ptr_impl<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValue this); // 472
		get(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 465
		operator->(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 100
		vector<unsigned int, std::allocator<unsigned int> >::size(); // 1292
		vector<unsigned int, std::allocator<unsigned int> >::_M_range_check(
				size_type __n);  // 1315
		vector<unsigned int, std::allocator<unsigned int> >::operator[](
				size_type __n);  // 1316
		vector<unsigned int, std::allocator<unsigned int> >::at(
			size_type __n);  // 100
		SmallValueBuffer<4>::get32(
			uint16_t index);  // 96
		SmallValueBuffer<4>::get32(
			uint16_t index);  // 60
		bit_cast<float, unsigned int>(const unsigned int& __from); // 60
	}
	StyleValuePool::getLength(
			StyleValueHandle handle);  // 186
	Style::minDimension(
			Dimension axis);  // 32
	FloatOptional::unwrap(); // 47
	operator==(FloatOptional lhs,
			FloatOptional rhs);  // 90
	StyleLength::operator==(
			const StyleLength& rhs);  // 32
	StyleValueHandle::setType(
		Type handleType);  // 31
	{
		Type type; // 35
		StyleValueHandle::setValue(
			uint16_t value);  // 93
		{
			short unsigned int newIndex; // 89
			bit_cast<unsigned int, float>(const float& __from); // 90
			StyleValueHandle::value(); // 90
			array<unsigned int, 4>::operator[](
					size_type __n);  // 70
			_M_ptr(const __uniq_ptr_impl<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValue this); // 472
			get(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 465
			operator->(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 72
			vector<unsigned int, std::allocator<unsigned int> >::size(); // 1292
			vector<unsigned int, std::allocator<unsigned int> >::_M_range_check(
					size_type __n);  // 1315
			vector<unsigned int, std::allocator<unsigned int> >::operator[](
					size_type __n);  // 1316
			vector<unsigned int, std::allocator<unsigned int> >::at(
				size_type __n);  // 72
			SmallValueBuffer<4>::replace(
				uint16_t index,
				uint32_t value);  // 68
			SmallValueBuffer<4>::replace(
				uint16_t index,
				uint32_t value);  // 90
			StyleValueHandle::setValue(
				uint16_t value);  // 91
		}
		isIntegerPackable(float f); // 92
		packInlineInteger(float value); // 93
		StyleValueHandle::setType(
			Type handleType);  // 86
		StyleValuePool::storeValue(
				StyleValueHandle& handle,
				float value,
				Type type);  // 38
	}
	StyleValueHandle::setType(
		Type handleType);  // 33
	StyleValuePool::store(
		StyleValueHandle& handle,
		StyleLength length);  // 29
	StyleValuePool::store(
		StyleValueHandle& handle,
		StyleLength length);  // 189
	Style::setMinDimension(
			Dimension axis,
			Length value);  // 33
} /* size: 0, variables: 1, inline expansions: 13 (1331 bytes) */

// <029282D0> ../thirdparty/yoga/YGNodeStyle.cpp:30
// variables: 4
// function calls: 48
void updateStyle<&facebook::yoga::Style::maxDimension, &facebook::yoga::Style::setMaxDimension, facebook::yoga::Dimension, facebook::yoga::StyleLength>(YGNodeRef node, Dimension idx, StyleLength value)
{
	Style& style; // 31
	array<facebook::yoga::StyleValueHandle, 2>::operator[](
			size_type __n);  // 211
	StyleValueHandle::type(); // 41
	StyleValueHandle::isUndefined(); // 51
	{
		float value; // 59
		StyleValueHandle::value(); // 60
		unpackInlineInteger(uint16_t value); // 61
		isinf<float>(float value); // 41
		percent(float value); // 65
		isinf<float>(float value); // 35
		points(float value); // 64
		array<unsigned int, 4>::operator[](
				size_type __n);  // 98
		_M_ptr(const __uniq_ptr_impl<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValue this); // 472
		get(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 465
		operator->(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 100
		vector<unsigned int, std::allocator<unsigned int> >::size(); // 1292
		vector<unsigned int, std::allocator<unsigned int> >::_M_range_check(
				size_type __n);  // 1315
		vector<unsigned int, std::allocator<unsigned int> >::operator[](
				size_type __n);  // 1316
		vector<unsigned int, std::allocator<unsigned int> >::at(
			size_type __n);  // 100
		SmallValueBuffer<4>::get32(
			uint16_t index);  // 96
		SmallValueBuffer<4>::get32(
			uint16_t index);  // 60
		bit_cast<float, unsigned int>(const unsigned int& __from); // 60
	}
	StyleValuePool::getLength(
			StyleValueHandle handle);  // 211
	Style::maxDimension(
			Dimension axis);  // 32
	FloatOptional::unwrap(); // 47
	operator==(FloatOptional lhs,
			FloatOptional rhs);  // 90
	StyleLength::operator==(
			const StyleLength& rhs);  // 32
	StyleValueHandle::setType(
		Type handleType);  // 31
	{
		Type type; // 35
		StyleValueHandle::setValue(
			uint16_t value);  // 93
		{
			short unsigned int newIndex; // 89
			bit_cast<unsigned int, float>(const float& __from); // 90
			StyleValueHandle::value(); // 90
			array<unsigned int, 4>::operator[](
					size_type __n);  // 70
			_M_ptr(const __uniq_ptr_impl<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValue this); // 472
			get(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 465
			operator->(const unique_ptr<facebook::yoga::SmallValueBuffer<4>::Overflow, std::default_delete<facebook::yoga::SmallValueBuffe this); // 72
			vector<unsigned int, std::allocator<unsigned int> >::size(); // 1292
			vector<unsigned int, std::allocator<unsigned int> >::_M_range_check(
					size_type __n);  // 1315
			vector<unsigned int, std::allocator<unsigned int> >::operator[](
					size_type __n);  // 1316
			vector<unsigned int, std::allocator<unsigned int> >::at(
				size_type __n);  // 72
			SmallValueBuffer<4>::replace(
				uint16_t index,
				uint32_t value);  // 68
			SmallValueBuffer<4>::replace(
				uint16_t index,
				uint32_t value);  // 90
			StyleValueHandle::setValue(
				uint16_t value);  // 91
		}
		isIntegerPackable(float f); // 92
		packInlineInteger(float value); // 93
		StyleValueHandle::setType(
			Type handleType);  // 86
		StyleValuePool::storeValue(
				StyleValueHandle& handle,
				float value,
				Type type);  // 38
	}
	StyleValueHandle::setType(
		Type handleType);  // 33
	StyleValuePool::store(
		StyleValueHandle& handle,
		StyleLength length);  // 29
	StyleValuePool::store(
		StyleValueHandle& handle,
		StyleLength length);  // 214
	Style::setMaxDimension(
			Dimension axis,
			Length value);  // 33
} /* size: 0, variables: 1, inline expansions: 13 (1331 bytes) */

// <02934B24> ../thirdparty/yoga/YGNodeStyle.cpp:212
// function call: 1
void YGNodeStyleSetPositionAuto(YGNodeRef node, YGEdge edge)
{
	scopedEnum(YGEdge unscoped); // 213
} /* size: 19, inline expansions: 1 (0 bytes) */

// <02932433> ../thirdparty/yoga/YGNodeStyle.cpp:279
// function calls: 4
void YGNodeStyleSetGapPercent(YGNodeRef node, YGGutter gutter, float percent)
{
	isinf<float>(float value); // 41
	StyleLength::StyleLength(
			FloatOptional value,
			Unit unit);  // 43
	percent(float value); // 280
	scopedEnum(YGGutter unscoped); // 280
} /* size: 98, inline expansions: 4 (128 bytes) */

// <02930F49> ../thirdparty/yoga/YGNodeStyle.cpp:303
// function calls: 4
void YGNodeStyleSetBoxSizing(YGNodeRef node, YGBoxSizing boxSizing)
{
	scopedEnum(YGBoxSizing unscoped); // 304
	Style::boxSizing(); // 23
	Style::setBoxSizing(
			BoxSizing value);  // 24
	updateStyle<&facebook::yoga::Style::boxSizing, &facebook::yoga::Style::setBoxSizing, facebook::yoga::BoxSizing>(YGNodeRef node,
															BoxSizing value);  // 304
} /* size: 51, inline expansions: 4 (62 bytes) */

// <02930EC3> ../thirdparty/yoga/YGNodeStyle.cpp:308
// function calls: 2
YGBoxSizing YGNodeStyleGetBoxSizing(const YGNodeConstRef node)
{
	Style::boxSizing(); // 309
	unscopedEnum(BoxSizing scoped); // 309
} /* size: 15, inline expansions: 2 (10 bytes) */

