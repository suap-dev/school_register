#include <iostream>
#include <conio.h>
#include <cstdlib>

#include <string>
#include <set>
#include <map>

#include "Register.h"
#include "Class.h"
#include "User.h"

int main()
{
	using namespace std;

	using namespace SchoolRegister;
	using namespace std;

	// this is important stuff:
	Student st("A", "B", "C");			// constructor taking middle name
	Student ab("Andrew", "Brzezinsky"); // middle name set to ""
	ab.addSubject(TOPIC::ART);
	ab.addSubject(TOPIC::CRITICAL_READING);
	ab.addSubject(TOPIC::LANGUAGES);

	for (auto &sub : ab.getSubjects())
	{
		std::cout << "What's your final grade of " << sub.getTopic() << "?\n";
		std::cout << "It's: ";
		float f_grade;
		std::cin >> f_grade;
		const int i_grade = int(f_grade * 2);
		GRADE e_grade{};
		if (i_grade > int(GRADE::G60))
			e_grade = GRADE::G60;
		else if (i_grade < int(GRADE::G10))
			e_grade = GRADE::G10;
		else
			e_grade = GRADE(i_grade);
		std::cout << "Adding " << e_grade << ". Don't try to trick me.\n\n";
		ab.modifySubject(sub.getTopic()).addGrade(e_grade, WEIGHT::ONE, "");
	}
	std::cout << "Your average is: " << ab.getAverage();

	log(st.getAverage());
}