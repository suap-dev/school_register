#include "Register.h"

namespace SchoolRegister
{
	std::ostream &operator<<(std::ostream &os, const TOPIC s)
	{
		switch (s)
		{
		case TOPIC::ART:
			os << "Art";
			break;
		case TOPIC::BUSINESS_STUDIES:
			os << "Business Studies";
			break;
		case TOPIC::CITIZENSHIP:
			os << "Citizenship";
			break;
		case TOPIC::CRITICAL_READING:
			os << "Critical Reading";
			break;
		case TOPIC::DANCE:
			os << "Dance";
			break;
		case TOPIC::DNT:
			os << "Design andTechnology";
			break;
		case TOPIC::DRAMA:
			os << "Drama";
			break;
		case TOPIC::ENGLISH:
			os << "English";
			break;
		case TOPIC::GEOGRAPHY:
			os << "Geography";
			break;
		case TOPIC::HISTORY:
			os << "History";
			break;
		case TOPIC::ICT:
			os << "Information and communication technology";
			break;
		case TOPIC::LANGUAGES:
			os << "Languages";
			break;
		case TOPIC::MATH:
			os << "Mathematics";
			break;
		case TOPIC::MODERN_STUDIES:
			os << "Modern Studies";
			break;
		case TOPIC::MUSIC:
			os << "Music";
			break;
		case TOPIC::PE:
			os << "Physical education";
			break;
		case TOPIC::PSHE:
			os << "Personal, social and health education";
			break;
		case TOPIC::RE:
			os << "Religious education";
			break;
		case TOPIC::SCIENCE:
			os << "Science";
			break;
		case TOPIC::STUDY_SKILLS:
			os << "Study Skills";
			break;
		}
		return os;
	}
	std::ostream &operator<<(std::ostream &os, const GRADE g)
	{
		switch (g)
		{
		case GRADE::G10:
			os << "1.0";
			break;
		case GRADE::G20:
			os << "2.0";
			break;
		case GRADE::G25:
			os << "2.5";
			break;
		case GRADE::G30:
			os << "3.0";
			break;
		case GRADE::G35:
			os << "3.5";
			break;
		case GRADE::G40:
			os << "4.0";
			break;
		case GRADE::G45:
			os << "4.5";
			break;
		case GRADE::G50:
			os << "5.0";
			break;
		case GRADE::G55:
			os << "5.5";
			break;
		case GRADE::G60:
			os << "6.0";
			break;
		}
		return os;
	}
}