#include "Student.h"

namespace SchoolRegister
{
	Student::Student(const std::string &firstName, const std::string &lastName) : firstName(firstName), middleName(""), lastName(lastName) {}
	Student::Student(const std::string &firstName, const std::string &middleName, const std::string &lastName) : firstName(firstName), middleName(middleName), lastName(lastName) {}

	void Student::addSubject(const Subject &s)
	{
		subjects.insert(tspair(s.getTopic(), s));
	}

	void Student::addSubject(TOPIC topic)
	{
		subjects.insert(tspair(topic, Subject(topic)));
	}

	Subject Student::subjectInfo(TOPIC t) const
	{
		return subjects.at(t);
	}

	std::map<TOPIC, Subject> Student::getSubjectsMap() const
	{
		return subjects;
	}

	std::vector<Subject> Student::getSubjects() const
	{
		std::vector<Subject> vsub;

		for (auto &s : subjects)
		{
			vsub.push_back(s.second);
		}

		return vsub;
	}

	Subject &Student::modifySubject(TOPIC t)
	{
		return subjects.at(t);
	}

	float Student::getAverage() const
	{
		float sum = 0.0f;
		for (auto &s : subjects)
		{
			sum += s.second.getAverage();
		}

		return sum / subjects.size();
	}
}