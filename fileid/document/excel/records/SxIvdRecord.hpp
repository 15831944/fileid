#pragma once

#include "Record.hpp"

namespace oless {
	namespace excel {
		namespace records {

			class SxIvdRecord : public Record {
			public:
				SxIvdRecord(unsigned short type, std::vector<uint8_t> data) : Record(type, data) {

				}
			};
		}
	}
}
