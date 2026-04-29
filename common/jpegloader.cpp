
//
// common/jpegloader.cpp
//
//	referenced by: libengine2.so
//				   librendersystemempty.so
//				   librendersystemvulkan.so
//
//	function: 1
//

// <048405CE> ../common/jpegloader.cpp:35
// variables: 5
// function calls: 20
bool GetJpegDimensions(const byte* pubData, int cubData, uint32& width, uint32& height)
{
	unique_ptr<wuffs_base__image_decoder__struct, wuffs_unique_ptr_deleter> dec; // 41
	wuffs_base__io_buffer src; // 44
	wuffs_base__image_config ic; // 49
	wuffs_base__status st; // 50
	wuffs_jpeg__decoder__alloc_as__wuffs_base__image_decoder(void); // 10481
	_Head_base<1, wuffs_unique_ptr_deleter, true>::_Head_base(); // 561
	_Tuple_impl<1, wuffs_unique_ptr_deleter>::_Tuple_impl(); // 303
	_Head_base<0, wuffs_base__image_decoder__struct::_Head_base(); // 303
	_Tuple_impl<0, wuffs_base__image_decoder__struct::_Tuple_impl(); // 966
	tuple<wuffs_base__image_decoder__struct::tuple(); // 169
	__uniq_ptr_impl<wuffs_base__image_decoder__struct, wuffs_unique_ptr_deleter>::_M_ptr(); // 169
	__uniq_ptr_impl<wuffs_base__image_decoder__struct, wuffs_unique_ptr_deleter>::__uniq_ptr_impl(
			pointer __p);  // 234
	__uniq_ptr_data<wuffs_base__image_decoder__struct, wuffs_unique_ptr_deleter, true, true>::__uniq_ptr_data(
			pointer);  // 311
	unique_ptr<wuffs_base__image_decoder__struct, wuffs_unique_ptr_deleter>::unique_ptr<>(
			pointer __p);  // 10481
	alloc_as__wuffs_base__image_decoder(void); // 41
	wuffs_base__image_decoder__struct::decode_image_config(
				wuffs_base__image_config* a_dst,
				wuffs_base__io_buffer* a_src);  // 50
	{
		wuffs_base__image_decoder__*& __ptr; // 396
		wuffs_unique_ptr_deleter::operator(
				void* p);  // 398
		unique_ptr<wuffs_base__image_decoder__struct, wuffs_unique_ptr_deleter>::get_deleter(); // 398
		__uniq_ptr_impl<wuffs_base__image_decoder__struct, wuffs_unique_ptr_deleter>::_M_ptr(); // 396
	}
	unique_ptr<wuffs_base__image_decoder__struct, wuffs_unique_ptr_deleter>::~unique_ptr(); // 56
	wuffs_base__pixel_config__width(const wuffs_base__pixel_config* c); // 4910
	wuffs_base__pixel_config__struct::width(); // 53
	wuffs_base__pixel_config__height(const wuffs_base__pixel_config* c); // 4915
	wuffs_base__pixel_config__struct::height(); // 54
} /* size: 0, variables: 4, inline expansions: 17 (0 bytes) */

