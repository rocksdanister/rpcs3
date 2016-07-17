#pragma once

namespace vm { using namespace ps3; }

// libHttp_Util: 0x80711001 - 0x807110ff

// Error Codes
enum
{
	CELL_HTTP_UTIL_ERROR_NO_MEMORY = 0x80711001,
	CELL_HTTP_UTIL_ERROR_NO_BUFFER = 0x80711002,
	CELL_HTTP_UTIL_ERROR_NO_STRING = 0x80711003,
	CELL_HTTP_UTIL_ERROR_INSUFFICIENT = 0x80711004,
	CELL_HTTP_UTIL_ERROR_INVALID_URI = 0x80711005,
	CELL_HTTP_UTIL_ERROR_INVALID_HEADER = 0x80711006,
	CELL_HTTP_UTIL_ERROR_INVALID_REQUEST = 0x80711007,
	CELL_HTTP_UTIL_ERROR_INVALID_RESPONSE = 0x80711008,
	CELL_HTTP_UTIL_ERROR_INVALID_LENGTH = 0x80711009,
	CELL_HTTP_UTIL_ERROR_INVALID_CHARACTER = 0x8071100a,
};