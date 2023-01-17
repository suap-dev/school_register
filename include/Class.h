#pragma once

#include <vector>

#include "Register.h"
#include "Student.h"

namespace SchoolRegister {
	struct Class {
		const YEAR year;
		const CLASS_NAME name;

		std::vector<Student> students;

		void addStudent(const Student& s);
		void addStudent(const std::string& firstName, const std::string& lastName);
		void addStudent(const std::string& firstName, const std::string& middleName, const std::string& lastName);
	};
}
