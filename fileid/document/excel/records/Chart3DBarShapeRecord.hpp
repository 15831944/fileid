#pragma once

#include "Record.hpp"

namespace oless {
	namespace excel {
		namespace records {

			class Chart3DBarShapeRecord : public Record {
			public:
				Chart3DBarShapeRecord(unsigned short type, std::vector<uint8_t> data) : Record(type, data) {

				}
			};
		}
	}
}
