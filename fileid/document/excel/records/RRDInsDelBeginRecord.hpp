#pragma once

#include "Record.hpp"

namespace oless {
	namespace excel {
		namespace records {

			class RRDInsDelBeginRecord : public Record {
			public:
				RRDInsDelBeginRecord(unsigned short type, std::vector<uint8_t> data) : Record(type, data) {

				}
			};
		}
	}
}
