#pragma once

#include "Record.hpp"

namespace oless {
	namespace excel {
		namespace records {

			class EOFRecord : public Record {
			public:
				EOFRecord(unsigned short type, std::vector<uint8_t> data) : Record(type, data) {

				}
			};
		}
	}
}
