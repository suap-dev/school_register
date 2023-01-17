#include "Register.h"
#include "User.h"
#include <iostream>
#include <set>
#include <map>
#include "Class.h"

#include <conio.h>
#include <cstdlib>

#include <string>

char menu(void);

int main()
{
	using namespace std;

	/*char napis[201];
	cin >> napis;
	int x = 1;
	for (int i = 0; napis[i] != '\0'; i++) {
		if (napis[i + 1] == napis[i])
			x++;
		else if (x == 1)
			cout << napis[i];
		else if (x == 2)
			cout << napis[i] << napis[i];
		else {
			cout << napis[i] << x;
			x = 1;
		}
	}*/

	using namespace SchoolRegister;
	using namespace std;

	/*char control;
	while (true) {
		system("cls");
		control = menu();
		if (control == 'x') break;
		else {
			switch (control) {
			case '1':
				system("cls");
				cout << "test-1" << endl;
				break;
			}
		}
	}*/

	// this is important stuff:
	Student st("A", "B", "C");	   // constructor taking middle name
	Student ab("Adam", "Brzeski"); // middle name set to ""
	ab.addSubject(TOPIC::ART);
	ab.addSubject(TOPIC::CRITICAL_READING);
	ab.addSubject(TOPIC::LANGUAGES);

	// for s in st.getSubjects():

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

char menu(void)
{
	using namespace std;
	cout << "Co bys chcial zrobic?\n"
			" [1] Dodac ucznia,\n"
			" [2] Dodac uczniowi ocene,\n"
			" [x] Zakonczyc program.\n"
			"Wybierz opcje: ";
	return _getch();
}