#pragma once

#include <vector>

#include "Register.h"
#include "Grade.h"

namespace SchoolRegister {
	class Subject {
		const TOPIC topic;
		std::vector<Grade> grades;

	public:
		Subject(TOPIC topic);

		void addGrade(const Grade& g);
		void addGrade(GRADE g, WEIGHT w, std::string comment);
		float getAverage() const;
		TOPIC getTopic() const;

		bool operator < (const Subject& s) const;
	};
}
