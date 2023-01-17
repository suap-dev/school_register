#pragma once

#include "UserTypes.h"
#include "Register.h"

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