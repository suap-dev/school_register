#pragma once

#include "Register.h"
#include "UserTypes.h"

namespace SchoolRegister {
	class User
	{
		//below should be privates
		std::string name;
		ACC_LEVEL acc_level;

	public:
		User(ACC_LEVEL level, std::string name);

		std::string getName();
		std::string getAccLevel();
		

	};
}