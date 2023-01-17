#include "User.h"

namespace SchoolRegister
{
	User::User(ACC_LEVEL level, std::string name) : acc_level(level)
	{
		this->name = name;
		this->name.resize(8);
	}

	std::string User::getName()
	{
		return name;
	}

	std::string User::getAccLevel()
	{
		switch (acc_level)
		{
		case ACC_LEVEL::ADMIN:
			return "Administrator";
			break;
		case ACC_LEVEL::PARENT:
			return "Parent";
			break;
		case ACC_LEVEL::STUDENT:
			return "Student";
			break;
		case ACC_LEVEL::TEACHER:
			return "Teacher";
			break;
		case ACC_LEVEL::TEACHER_PLUS:
			return "Techaer Plus";
			break;
		}
	}
}
