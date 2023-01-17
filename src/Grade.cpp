#include "Grade.h"
namespace SchoolRegister {
	Grade::Grade(GRADE g) :
		grade(g), weight(WEIGHT::ONE), comment("")
	{}
	Grade::Grade(GRADE g, WEIGHT w) :
		grade(g), weight(w), comment("")
	{}
	Grade::Grade(GRADE g, std::string comment):
		grade(g), weight(WEIGHT::ONE), comment(comment)
	{}
	Grade::Grade(GRADE g, WEIGHT w, std::string comment):
		grade(g), weight(w), comment(comment)
	{
	}
	void Grade::setComment(std::string c)
	{
		comment = c;
	}
}