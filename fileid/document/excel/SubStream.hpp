#pragma once

#include "MSExcel.common.hpp"
#include "records/Record.hpp"

namespace oless {
	namespace excel {
		
		class SubStream {
		private:
			std::vector<records::Record*> list;

		public:
			
			size_t size() const { return this->list.size(); }

			void AddRecord(records::Record* r) {
				this->list.push_back(r);
			}

			std::string ToXml() const
			{
				std::ostringstream str;
				str << "<Records>";
				for (std::vector<records::Record*>::const_iterator i = this->list.begin(); i != this->list.end(); i++) {
					str << (*i)->ToXml();
				}
				str << "</Records>";
				return str.str();
			}
			std::string ToJson() const
			{
				std::ostringstream str;
				str << "\"Records\":[";
				for (std::vector<records::Record*>::const_iterator i = this->list.begin(); i != this->list.end(); i++) {
					if (i != this->list.begin()) str << ",";
					str << (*i)->ToJson();
				}
				str << "]";
				return str.str();
			}
		};

	}
}