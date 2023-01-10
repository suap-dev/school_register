#pragma once
#include "Register.h"
#include "Subject.h"
#include <set>
#include <map>
#include <vector>

namespace SchoolRegister {
	class Student {
		std::string firstName;
		std::string lastName;
		std::string middleName;
		std::string email;
		std::string phoneNumber;

		typedef std::pair<TOPIC, Subject> tspair;
		std::map<TOPIC, Subject> subjects;
	public:

		Student(const std::string& firstName, const std::string& lastName);
		Student(const std::string& firstName, const std::string& middleName, const std::string& lastName);

		void setPhoneNumber(std::string number);
		void setEmail(std::string email);

		void addSubject(const Subject& s);
		void addSubject(TOPIC topic);

		Subject subjectInfo(TOPIC t) const;
		std::map<TOPIC, Subject> getSubjectsMap() const;
		std::vector<Subject> getSubjects() const;

		Subject& modifySubject(TOPIC t);

		float getAverage() const;
	};
}
