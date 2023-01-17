#include "Subject.h"

namespace SchoolRegister
{
	Subject::Subject(TOPIC topic) : topic(topic) {}

	void Subject::addGrade(const Grade &g)
	{
		grades.push_back(g);
	}

	void Subject::addGrade(GRADE g, WEIGHT w, std::string comment)
	{
		grades.push_back(Grade(g, w, comment));
	}

	float Subject::getAverage() const
	{
		float sum_grades = 0.0f;
		float sum_weights = 0.0f;

		for (Grade g : grades)
		{
			sum_grades += (int(g.grade) / 2) * int(g.weight);
			sum_weights += int(g.weight);
		}

		return sum_grades / sum_weights;
	}

	TOPIC Subject::getTopic() const
	{
		return topic;
	}

	bool Subject::operator<(const Subject &s) const
	{
		return topic < s.topic;
	}
}