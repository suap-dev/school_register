#pragma once

#include "Register.h"

namespace SchoolRegister {
	struct Grade {
		GRADE grade;
		WEIGHT weight;
		std::string comment;

		Grade(GRADE g);
		Grade(GRADE g, WEIGHT w);
		Grade(GRADE g, std::string comment);
		Grade(GRADE g, WEIGHT w, std::string comment);

		void setComment(std::string c);
	};
}