#pragma once

#include "Record.hpp"

namespace oless {
	namespace excel {
		namespace records {

			class RefreshAllRecord : public Record {
			public:
				RefreshAllRecord(unsigned short type, std::vector<uint8_t> data) : Record(type, data) {

				}
			};
		}
	}
}
