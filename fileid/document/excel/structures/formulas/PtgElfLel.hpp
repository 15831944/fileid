#pragma once

#include "../../../../common.hpp"

#include "../../MSExcel.common.hpp"
#include "../../IParsable.hpp"
#include "Ptg.hpp"


namespace oless {
	namespace excel {
		namespace structures {
			namespace formulas {

				// see: https://docs.microsoft.com/en-us/openspecs/office_file_formats/ms-xls/67784d96-e87d-4f97-b643-f8f2176a6148
				// ptg=0x18
				// The PtgElfLel natural language formula operand specifies a reference to a range which is represented by a single-cell natural language label or a multiple-cell natural language label that has been deleted.?
				class PtgElfLel : public PtgBasic_elf {
				private:
					unsigned short ilel;
					unsigned short fQuoted : 1;
					unsigned short reserved : 15;
				public:
					PtgElfLel(unsigned char* buffer, size_t max, unsigned int offset): ilel(0), fQuoted(0), reserved(0), PtgBasic_elf() { 
						this->Parse(buffer, max, offset); 
					}

					virtual void Parse(unsigned char* buffer, size_t max, unsigned int offset) override {
						PtgBasic_elf::Parse(buffer, max, offset);
						unsigned int index = offset + this->bytesRead;

						this->ilel = common::ReadUShort(buffer, max, index);
						index += 2;

						this->fQuoted = common::ExtractBits(buffer[index], 1, 1);
						this->reserved = common::ReadUShort(buffer, max, index) << 1 >> 1;
						index += 2;

						this->bytesRead = index - offset;
					}

					std::string to_string() const override {
						return "PtgElfLel";
					}
				};
			}
        }
    }
}
