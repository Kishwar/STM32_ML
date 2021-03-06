
// This is a TensorFlow Lite model file that has been converted into a C data
// array using the tensorflow.lite.util.convert_bytes_to_c_source() function.
// This form is useful for compiling into a binary for devices that don't have a
// file system.

#include "sine_model.h"

// We need to keep the data array aligned on some architectures.
#ifdef __has_attribute
#define HAVE_ATTRIBUTE(x) __has_attribute(x)
#else
#define HAVE_ATTRIBUTE(x) 0
#endif
#if HAVE_ATTRIBUTE(aligned) || (defined(__GNUC__) && !defined(__clang__))
#define DATA_ALIGN_ATTRIBUTE __attribute__((aligned(4)))
#else
#define DATA_ALIGN_ATTRIBUTE
#endif

const unsigned char sine_model[] DATA_ALIGN_ATTRIBUTE = {
    0x20, 0x00, 0x00, 0x00, 0x54, 0x46, 0x4c, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x12, 0x00, 0x1c, 0x00, 0x04, 0x00, 0x08, 0x00, 0x0c, 0x00, 0x10, 0x00,
    0x14, 0x00, 0x00, 0x00, 0x18, 0x00, 0x12, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00,
    0x00, 0x08, 0x0b, 0x00, 0x00, 0x68, 0x06, 0x00, 0x00, 0x50, 0x06, 0x00, 0x00,
    0x3c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0c,
    0x00, 0x00, 0x00, 0x08, 0x00, 0x0c, 0x00, 0x04, 0x00, 0x08, 0x00, 0x08, 0x00,
    0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00,
    0x00, 0x6d, 0x69, 0x6e, 0x5f, 0x72, 0x75, 0x6e, 0x74, 0x69, 0x6d, 0x65, 0x5f,
    0x76, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x08,
    0x06, 0x00, 0x00, 0xf4, 0x05, 0x00, 0x00, 0x98, 0x05, 0x00, 0x00, 0x34, 0x05,
    0x00, 0x00, 0x20, 0x05, 0x00, 0x00, 0xcc, 0x04, 0x00, 0x00, 0xb8, 0x00, 0x00,
    0x00, 0x64, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00,
    0x30, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x96, 0xfa, 0xff, 0xff, 0x04,
    0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x31, 0x2e, 0x35, 0x2e, 0x30, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xf5, 0xff, 0xff,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd0,
    0xf5, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xe0, 0xf5, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0xe6, 0xfa, 0xff,
    0xff, 0x04, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0xc4, 0x98, 0x64, 0xbe,
    0x00, 0x55, 0xbe, 0x3b, 0x17, 0x36, 0x27, 0x3f, 0x06, 0x56, 0xd6, 0x3f, 0x76,
    0x32, 0x98, 0xbe, 0x56, 0xb9, 0x03, 0xbf, 0x74, 0x27, 0x29, 0x3e, 0xd7, 0x03,
    0xb7, 0x3f, 0x29, 0xed, 0xe4, 0xbe, 0xe4, 0x24, 0x0c, 0x3f, 0x17, 0x50, 0x70,
    0xbe, 0x49, 0xf0, 0x76, 0xbf, 0x08, 0x94, 0x90, 0xbe, 0x4e, 0x44, 0xc2, 0x3e,
    0xa8, 0xbe, 0x31, 0x3e, 0xfe, 0x48, 0xae, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x36,
    0xfb, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0xc6, 0xc5,
    0x10, 0x3e, 0x05, 0x83, 0xdb, 0xbe, 0x4c, 0xd0, 0x10, 0xbe, 0x6b, 0x54, 0xdb,
    0xbe, 0x4c, 0xdb, 0xa9, 0xbd, 0x8e, 0x56, 0xaa, 0xbe, 0x83, 0x43, 0xbb, 0x3e,
    0xac, 0x2c, 0x65, 0xbe, 0x02, 0x0b, 0x9a, 0xbe, 0x40, 0x6c, 0x83, 0x3c, 0x40,
    0xbe, 0x75, 0x3d, 0x20, 0x84, 0x16, 0x3c, 0xcf, 0xda, 0x97, 0x3e, 0x7d, 0xd9,
    0xc6, 0x3e, 0x9c, 0xce, 0x99, 0xbd, 0xc7, 0x70, 0x6a, 0xbe, 0x32, 0x64, 0xa2,
    0xbe, 0x5d, 0x41, 0xdd, 0x3e, 0x5f, 0xc5, 0x57, 0xbe, 0x39, 0x7a, 0x92, 0xbe,
    0x3d, 0xdf, 0xac, 0x3e, 0xc7, 0x21, 0xbd, 0x3e, 0x1a, 0x4b, 0x1f, 0x3e, 0xec,
    0x6d, 0xc6, 0xbe, 0x1f, 0x53, 0x59, 0xbe, 0x1f, 0x54, 0x96, 0x3e, 0x23, 0x00,
    0xa3, 0x3e, 0xee, 0x7d, 0x78, 0x3e, 0x27, 0x23, 0xba, 0xbe, 0x18, 0xa0, 0xae,
    0xbe, 0x90, 0x8e, 0xca, 0xbc, 0xe3, 0x71, 0xd2, 0x3e, 0x6e, 0x5f, 0x42, 0x3e,
    0xe1, 0x13, 0xcc, 0x3d, 0xf7, 0x62, 0x8d, 0x3e, 0x2b, 0x1a, 0xc5, 0x3e, 0xdb,
    0xa3, 0xd4, 0x3e, 0x55, 0x65, 0x79, 0x3e, 0xe1, 0xc1, 0xc5, 0x3e, 0xd7, 0x80,
    0xb4, 0x3d, 0xc0, 0xc5, 0x7c, 0x3d, 0xfc, 0x63, 0x4e, 0x3f, 0xe6, 0x1b, 0x23,
    0xbe, 0x92, 0x1e, 0x0a, 0x3e, 0xc8, 0xae, 0x82, 0x3e, 0x39, 0xac, 0xd3, 0x3e,
    0x5a, 0xe5, 0xb5, 0x3d, 0x5a, 0x89, 0x05, 0x3e, 0x40, 0x45, 0xd6, 0xbe, 0xb1,
    0x98, 0x22, 0xbf, 0x88, 0x4f, 0xb9, 0xbe, 0x00, 0x0c, 0x0f, 0xbd, 0xd0, 0x16,
    0x06, 0xbe, 0x59, 0x4c, 0xfd, 0xbe, 0x29, 0x9b, 0xce, 0xbe, 0x47, 0xd4, 0xf2,
    0x3e, 0xbc, 0x3b, 0xdd, 0xbd, 0xb1, 0x6a, 0x21, 0xbf, 0xaf, 0xf4, 0xbe, 0x3e,
    0x41, 0x0a, 0x84, 0x3e, 0xa5, 0xb7, 0x28, 0xbf, 0xac, 0x4f, 0xf5, 0xbd, 0xcf,
    0x5e, 0x5e, 0x3e, 0xb0, 0xd3, 0xb0, 0xbd, 0xe4, 0x0b, 0xbb, 0x3d, 0xb3, 0x2e,
    0xc0, 0x3e, 0x9c, 0x17, 0xe1, 0x3d, 0x0c, 0xd9, 0x9c, 0xbd, 0xe8, 0x2c, 0xcc,
    0xbd, 0xaa, 0xc6, 0x6f, 0x3e, 0xca, 0xeb, 0x28, 0xbe, 0x48, 0x3f, 0x95, 0xbe,
    0x48, 0xd2, 0x08, 0xbd, 0x64, 0xad, 0xbd, 0xbd, 0xe5, 0xa5, 0xbf, 0xbe, 0xe2,
    0x05, 0x2f, 0x3e, 0x22, 0x46, 0x11, 0x3e, 0xb5, 0xfc, 0x79, 0xbe, 0x36, 0x15,
    0x0a, 0xbe, 0x59, 0x3e, 0x90, 0xbe, 0x9c, 0x87, 0x8b, 0x3d, 0xab, 0xce, 0x21,
    0xbb, 0xde, 0x5f, 0x6d, 0x3e, 0x7a, 0xde, 0x70, 0x3e, 0xc1, 0xc3, 0x9f, 0xbe,
    0x1f, 0xe6, 0x0f, 0xbc, 0x86, 0x8d, 0x49, 0xbe, 0xc6, 0x46, 0x61, 0x3c, 0x36,
    0x20, 0x01, 0x3e, 0x90, 0x1f, 0x3d, 0xbf, 0xec, 0x3c, 0x19, 0xbe, 0xbf, 0xdb,
    0xdb, 0x3e, 0xe8, 0x77, 0x5e, 0x3e, 0x5c, 0x76, 0xa1, 0x3d, 0xb2, 0xf2, 0x11,
    0x3e, 0x49, 0x44, 0xa6, 0x3e, 0x8c, 0x54, 0x9c, 0xbe, 0xfb, 0x4d, 0xc9, 0x3e,
    0x7a, 0x81, 0x53, 0xbe, 0x6d, 0x4e, 0xd4, 0x3e, 0xec, 0x50, 0xa4, 0xbe, 0xa3,
    0x13, 0x87, 0x3e, 0x2f, 0x01, 0xc1, 0xbe, 0xf4, 0xb7, 0x77, 0xbe, 0xf7, 0x34,
    0x5a, 0xbe, 0xa3, 0x79, 0x96, 0x3e, 0xd6, 0x02, 0xa5, 0xbe, 0xaf, 0x43, 0xaa,
    0x3e, 0x20, 0x06, 0x6b, 0x3d, 0x9c, 0x67, 0xeb, 0x3d, 0x01, 0xc9, 0xa4, 0xbe,
    0xc0, 0xce, 0xa2, 0xbc, 0x0a, 0x08, 0x6b, 0x3e, 0x5c, 0x6c, 0xde, 0xbe, 0x21,
    0x51, 0xbf, 0x3e, 0x7c, 0x77, 0xda, 0x3d, 0x06, 0xec, 0x87, 0xbe, 0x89, 0x6e,
    0x8e, 0xbe, 0xdb, 0xde, 0x9a, 0x3e, 0xac, 0x6a, 0x85, 0x3d, 0x80, 0x21, 0x58,
    0x3c, 0x9d, 0xbb, 0x10, 0xbf, 0x42, 0x8a, 0xb1, 0xbe, 0xe1, 0x09, 0x94, 0x3e,
    0xaf, 0xc7, 0xca, 0xbe, 0xaa, 0x9e, 0x85, 0xbe, 0xd2, 0x11, 0xd7, 0x3e, 0xa0,
    0xd6, 0xcd, 0xbc, 0x78, 0xca, 0x15, 0xbe, 0x22, 0xf2, 0xbd, 0x3c, 0xfc, 0x24,
    0xd6, 0xbd, 0xbc, 0x4f, 0xb9, 0xbd, 0x40, 0x05, 0xbd, 0xbb, 0xbd, 0xd6, 0x5a,
    0x3e, 0xce, 0x8c, 0xb9, 0xbe, 0x7c, 0x13, 0x10, 0x3e, 0xd8, 0x87, 0x2d, 0xbd,
    0x34, 0xf2, 0x64, 0xbf, 0xf8, 0x5b, 0xb9, 0xbe, 0x2c, 0x44, 0xc0, 0xbd, 0x02,
    0x27, 0x85, 0x3d, 0x94, 0x9a, 0x99, 0x3d, 0x66, 0x71, 0x06, 0x3e, 0xe4, 0x0c,
    0xa0, 0xbe, 0xa9, 0x14, 0xdb, 0x3e, 0xbe, 0xb9, 0x8d, 0xbe, 0xcc, 0x4c, 0xf5,
    0x3d, 0xca, 0x68, 0x2d, 0x3e, 0xae, 0xaa, 0x13, 0x3e, 0xc0, 0xb9, 0xf2, 0x3c,
    0xed, 0x74, 0x5c, 0xbe, 0xe4, 0x1f, 0xba, 0xbe, 0x48, 0xf3, 0x6e, 0x3d, 0x00,
    0xcf, 0x68, 0x3d, 0xf7, 0x79, 0xbe, 0x3e, 0xc2, 0x66, 0xc7, 0xbe, 0xcc, 0x85,
    0xad, 0x3d, 0x2c, 0x24, 0x55, 0xbe, 0x77, 0xaf, 0xab, 0xbe, 0x40, 0x98, 0x65,
    0x3c, 0xb4, 0x33, 0xae, 0xbd, 0x95, 0x33, 0x88, 0xbe, 0x56, 0xa5, 0x92, 0xbe,
    0xf8, 0xa1, 0x28, 0x3d, 0x8f, 0x0c, 0x4a, 0xbe, 0x2c, 0xea, 0xb4, 0x3e, 0x66,
    0x42, 0x5c, 0xbe, 0x4b, 0xe1, 0x27, 0x3e, 0xe4, 0x59, 0xd4, 0x3d, 0xaf, 0x9a,
    0x27, 0x3c, 0x80, 0x0b, 0x5c, 0x3c, 0xa4, 0xe2, 0xd1, 0x3d, 0x3d, 0xdf, 0x28,
    0xbe, 0x52, 0x8b, 0xb8, 0xbe, 0xe2, 0x58, 0xe8, 0xbc, 0xfb, 0x86, 0xa6, 0xbe,
    0xa0, 0x80, 0x0c, 0x3d, 0xbf, 0x00, 0x3b, 0xbf, 0xf0, 0xc5, 0x2a, 0xbe, 0x35,
    0x05, 0xdc, 0x3e, 0x0c, 0x96, 0x1b, 0xbe, 0x7c, 0x63, 0x73, 0x3e, 0xc8, 0x7d,
    0x80, 0xbe, 0x66, 0x71, 0xd1, 0x3e, 0xf8, 0x5f, 0x41, 0x3d, 0x5e, 0x57, 0xa1,
    0xbe, 0xa0, 0xe1, 0x06, 0xbd, 0x94, 0x60, 0xe7, 0x3d, 0xa5, 0xde, 0xe3, 0xbd,
    0xe0, 0x35, 0x58, 0xbe, 0x21, 0x58, 0x9e, 0x3d, 0x84, 0x04, 0xac, 0x3d, 0xa2,
    0x72, 0x72, 0x3e, 0x06, 0x94, 0x94, 0xbe, 0x62, 0x95, 0x4b, 0x3e, 0x38, 0x4c,
    0x45, 0x3d, 0x2d, 0xbc, 0xa4, 0xbe, 0x95, 0x3e, 0x8b, 0x3e, 0x00, 0xc0, 0x62,
    0xbb, 0x7c, 0x1b, 0xaf, 0xbd, 0xce, 0x06, 0x21, 0xbe, 0x30, 0x49, 0xb3, 0x3c,
    0x37, 0x6f, 0xdc, 0x3e, 0x64, 0x0a, 0x9f, 0x3d, 0xd5, 0xf5, 0xd5, 0x3e, 0x06,
    0xf9, 0x28, 0xbe, 0x48, 0x27, 0x25, 0xbe, 0x50, 0xfa, 0x2c, 0xbe, 0x6f, 0x29,
    0xc7, 0x3e, 0xd9, 0xbd, 0x47, 0xbe, 0x09, 0xdc, 0xdb, 0x3e, 0x5f, 0xb4, 0x9d,
    0xbe, 0xb0, 0xee, 0x7d, 0xbd, 0x80, 0x49, 0xbe, 0x3c, 0xc0, 0x42, 0x71, 0x3c,
    0xf6, 0xf8, 0x43, 0xbe, 0xdf, 0x5f, 0x4f, 0xbe, 0x5a, 0xfc, 0x79, 0x3e, 0x54,
    0x31, 0x80, 0x3d, 0x33, 0x10, 0xd0, 0x3e, 0x7c, 0x4a, 0x9f, 0xbe, 0x94, 0x92,
    0xdf, 0x3d, 0x78, 0x1d, 0x16, 0xbe, 0xf8, 0xa9, 0xbc, 0xbd, 0x20, 0x9d, 0xa3,
    0xbc, 0x2a, 0x77, 0xac, 0xbe, 0x05, 0xf4, 0x58, 0xbe, 0x12, 0x7e, 0x25, 0x3e,
    0x9e, 0x78, 0x78, 0x3e, 0x4c, 0xbc, 0xbb, 0xbe, 0xfd, 0xca, 0xb3, 0x3e, 0xd9,
    0x71, 0x68, 0xbe, 0x33, 0xbc, 0xae, 0xbe, 0x17, 0xf0, 0xd7, 0x3e, 0x2c, 0xff,
    0x1a, 0xbe, 0x10, 0x33, 0x6b, 0xbd, 0x98, 0x4a, 0x63, 0xbe, 0x7e, 0x4b, 0x14,
    0xbe, 0xf4, 0x2e, 0xa6, 0xbd, 0x5e, 0xa6, 0x32, 0x3e, 0xec, 0x49, 0x8a, 0x3d,
    0x95, 0x52, 0x1d, 0xbf, 0x0c, 0xc6, 0x8e, 0x3d, 0xd8, 0x34, 0x2e, 0xbe, 0xf5,
    0x35, 0xbe, 0x3e, 0x85, 0xb8, 0x11, 0xbf, 0x09, 0x6f, 0xa5, 0x3e, 0x32, 0xe8,
    0x2f, 0x3e, 0xbc, 0x7d, 0x96, 0x3d, 0xbc, 0x67, 0x02, 0xbf, 0xb4, 0x79, 0xc3,
    0x3d, 0x84, 0x07, 0xde, 0x3d, 0x00, 0x2c, 0x15, 0xbf, 0xa2, 0x2f, 0x7d, 0x3e,
    0x41, 0xea, 0xf6, 0x3e, 0x83, 0xec, 0xaa, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x46,
    0xff, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0xd4, 0x18,
    0x12, 0xbf, 0x19, 0x56, 0xb3, 0x3e, 0x78, 0x35, 0xcd, 0xbd, 0x2f, 0x9d, 0x16,
    0xbf, 0x04, 0x48, 0xd7, 0xbe, 0x69, 0x22, 0x12, 0x3e, 0x42, 0xce, 0xc9, 0xbe,
    0x68, 0x34, 0xb8, 0x3e, 0xcd, 0xe4, 0x05, 0xbf, 0x50, 0xc4, 0xb4, 0x3e, 0x50,
    0x6e, 0x5e, 0xbe, 0x11, 0xd3, 0x89, 0xbe, 0xdb, 0x4e, 0x91, 0x3e, 0xd0, 0x5e,
    0xe2, 0xbe, 0x24, 0x64, 0xfb, 0x3e, 0x02, 0xa6, 0x4f, 0xbe, 0x00, 0x00, 0x00,
    0x00, 0x96, 0xff, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
    0xd7, 0xa1, 0xff, 0xbe, 0xa6, 0xff, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x40,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc4, 0x16,
    0x1c, 0xbf, 0xea, 0x32, 0x94, 0x3d, 0x00, 0x00, 0x00, 0x00, 0xe7, 0xb7, 0xc0,
    0x3e, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xfe, 0x4c, 0x3e, 0xb2, 0x9a, 0xbb, 0x3e,
    0x00, 0x00, 0x00, 0x00, 0xcb, 0x62, 0xde, 0x3e, 0xc6, 0xb5, 0x99, 0x3e, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0x05,
    0x53, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00,
    0x04, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f,
    0x07, 0x37, 0xbf, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x25, 0x83, 0xca, 0xbd, 0x00, 0x00, 0x00, 0x00, 0xd9, 0x4e, 0xd1,
    0x3e, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xb6, 0x85, 0xbf, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x1e, 0x2e, 0xbe, 0xbe, 0x00, 0x00, 0x00, 0x00, 0xcb,
    0x70, 0x67, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0xfb, 0xff, 0xff, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0xfb, 0xff, 0xff,
    0x0f, 0x00, 0x00, 0x00, 0x4d, 0x4c, 0x49, 0x52, 0x20, 0x43, 0x6f, 0x6e, 0x76,
    0x65, 0x72, 0x74, 0x65, 0x64, 0x2e, 0x00, 0x01, 0x00, 0x00, 0x00, 0x14, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x18, 0x00, 0x04, 0x00, 0x08, 0x00, 0x0c,
    0x00, 0x10, 0x00, 0x14, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00,
    0xf4, 0x00, 0x00, 0x00, 0xe8, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x04,
    0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00,
    0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00,
    0x00, 0x04, 0x00, 0x00, 0x00, 0xce, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x08,
    0x18, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xe8,
    0xfb, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x03, 0x00,
    0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x0e, 0x00, 0x14, 0x00, 0x00, 0x00, 0x08, 0x00, 0x0c, 0x00,
    0x07, 0x00, 0x10, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x1c,
    0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xba, 0xff,
    0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00,
    0x00, 0x03, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x16, 0x00, 0x00, 0x00, 0x08,
    0x00, 0x0c, 0x00, 0x07, 0x00, 0x10, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x08, 0x24, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x07, 0x00, 0x06, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x03,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 0x00,
    0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x34, 0x03, 0x00, 0x00,
    0xc4, 0x02, 0x00, 0x00, 0x58, 0x02, 0x00, 0x00, 0xfc, 0x01, 0x00, 0x00, 0xb8,
    0x01, 0x00, 0x00, 0x70, 0x01, 0x00, 0x00, 0x28, 0x01, 0x00, 0x00, 0xbc, 0x00,
    0x00, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x08, 0xfd, 0xff,
    0xff, 0x34, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
    0x14, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff,
    0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0xf4, 0xfc, 0xff, 0xff, 0x08, 0x00,
    0x00, 0x00, 0x49, 0x64, 0x65, 0x6e, 0x74, 0x69, 0x74, 0x79, 0x00, 0x00, 0x00,
    0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x4c, 0xfd, 0xff, 0xff, 0x5c, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x1c,
    0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x02, 0x00,
    0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00, 0x38, 0xfd, 0xff,
    0xff, 0x32, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69,
    0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x31, 0x2f, 0x52, 0x65,
    0x6c, 0x75, 0x3b, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c,
    0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x31, 0x2f, 0x42, 0x69, 0x61, 0x73,
    0x41, 0x64, 0x64, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x10, 0x00, 0x00, 0x00, 0xb8, 0xfd, 0xff, 0xff, 0x58, 0x00, 0x00, 0x00, 0x08,
    0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x04, 0x00,
    0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x10, 0x00, 0x00,
    0x00, 0xa4, 0xfd, 0xff, 0xff, 0x2e, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75,
    0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x2f,
    0x52, 0x65, 0x6c, 0x75, 0x3b, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69,
    0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x2f, 0x42, 0x69, 0x61, 0x73,
    0x41, 0x64, 0x64, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x10, 0x00, 0x00, 0x00, 0x86, 0xfe, 0xff, 0xff, 0x34, 0x00, 0x00, 0x00, 0x07,
    0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xfc, 0xfd,
    0xff, 0xff, 0x19, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74,
    0x69, 0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x32, 0x2f, 0x4d,
    0x61, 0x74, 0x4d, 0x75, 0x6c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0xca, 0xfe, 0xff, 0xff, 0x34, 0x00,
    0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00,
    0x00, 0x40, 0xfe, 0xff, 0xff, 0x19, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75,
    0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f,
    0x31, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x00, 0x00, 0x00, 0x02, 0x00,
    0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x0e, 0xff, 0xff,
    0xff, 0x30, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x04, 0x00, 0x00, 0x00, 0x84, 0xfe, 0xff, 0xff, 0x17, 0x00, 0x00, 0x00, 0x73,
    0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e,
    0x73, 0x65, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x00, 0x02, 0x00, 0x00,
    0x00, 0x10, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x4e, 0xff, 0xff, 0xff,
    0x4c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x04,
    0x00, 0x00, 0x00, 0xc4, 0xfe, 0xff, 0xff, 0x32, 0x00, 0x00, 0x00, 0x73, 0x65,
    0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73,
    0x65, 0x5f, 0x32, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x2f, 0x52,
    0x65, 0x61, 0x64, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6c, 0x65, 0x4f, 0x70,
    0x2f, 0x72, 0x65, 0x73, 0x6f, 0x75, 0x72, 0x63, 0x65, 0x00, 0x00, 0x01, 0x00,
    0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xa6, 0xff, 0xff, 0xff, 0x4c, 0x00, 0x00,
    0x00, 0x03, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
    0x1c, 0xff, 0xff, 0xff, 0x32, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65,
    0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x31,
    0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x2f, 0x52, 0x65, 0x61, 0x64,
    0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6c, 0x65, 0x4f, 0x70, 0x2f, 0x72, 0x65,
    0x73, 0x6f, 0x75, 0x72, 0x63, 0x65, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x14, 0x00, 0x04, 0x00, 0x00, 0x00,
    0x08, 0x00, 0x0c, 0x00, 0x10, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x4c, 0x00, 0x00,
    0x00, 0x02, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
    0x84, 0xff, 0xff, 0xff, 0x30, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65,
    0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x2f, 0x42,
    0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x2f, 0x52, 0x65, 0x61, 0x64, 0x56, 0x61,
    0x72, 0x69, 0x61, 0x62, 0x6c, 0x65, 0x4f, 0x70, 0x2f, 0x72, 0x65, 0x73, 0x6f,
    0x75, 0x72, 0x63, 0x65, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10,
    0x00, 0x00, 0x00, 0x14, 0x00, 0x18, 0x00, 0x04, 0x00, 0x00, 0x00, 0x08, 0x00,
    0x0c, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x00, 0x14, 0x00, 0x00,
    0x00, 0x38, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
    0x18, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff,
    0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00,
    0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x69,
    0x6e, 0x70, 0x75, 0x74, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x0a, 0x00, 0x0c, 0x00, 0x07, 0x00, 0x00, 0x00, 0x08, 0x00, 0x0a, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x03, 0x00, 0x00, 0x00,
};
const int sine_model_len = 2896;
