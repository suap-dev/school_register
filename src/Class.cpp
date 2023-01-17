#include "Class.h"

namespace SchoolRegister
{
	void Class::addStudent(const Student &s)
	{
		students.push_back(s);
	}

	void Class::addStudent(const std::string &firstName, const std::string &lastName)
	{
		students.push_back(Student(firstName, lastName));
	}
	
	void Class::addStudent(const std::string &firstName, const std::string &middleName, const std::string &lastName)
	{
		students.push_back(Student(firstName, middleName, lastName));
	}
}