#pragma once
#include "../../../../common.hpp"
#include "../../../OleCommon.hpp"
#include "../../MSExcel.common.hpp"
#include "../../IParsable.hpp"
#include "Ptg.hpp"


namespace oless {
	namespace excel {
		namespace structures {
			namespace formulas {

				// see: https://docs.microsoft.com/en-us/openspecs/office_file_formats/ms-xls/635159b0-7811-4c5b-b89f-97e9ec02d6af
				// ptg=0x12
				// The PtgUplus structure specifies a unary-operator which leaves a unary-expression unchanged.
				class PtgUplus : public PtgBasic {
				private:
					PtgUplus(unsigned char* buffer, size_t max, unsigned int offset) { PtgBasic::Parse(buffer, max, offset); }
				public:
					static PtgUplus* Parse(unsigned char* buffer, size_t max, unsigned int offset) {
						PtgUplus* ans = new PtgUplus(buffer, max, offset);
						return ans;
					}
					std::string to_string() const override {
						return "PtgUplus";
					}
				};
			}
        }
    }
}