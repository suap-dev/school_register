#pragma once

#include <ostream>

namespace SchoolRegister {
	enum class TOPIC : char {
		ART = 0,
		BUSINESS_STUDIES,
		CITIZENSHIP,
		CRITICAL_READING,
		DANCE,
		DNT,
		DRAMA,
		ENGLISH,
		GEOGRAPHY,
		HISTORY,
		ICT, // Information and communication technology
		LANGUAGES,
		MATH,
		MODERN_STUDIES,
		MUSIC,
		PE, // Physical education
		PSHE, // Personal, social and health education(PSHE)
		RE, // Religious education
		SCIENCE,
		STUDY_SKILLS,
	};
	std::ostream& operator << (std::ostream& os, const TOPIC s);

	enum class YEAR : char {
		ONE = 1,
		TWO,
		THREE,
		FOUR
	};

	enum class CLASS_NAME : char {
		A = 1,
		B,
		C,
		D,
		E,
		F,
		G,
		H
	};

	enum class GRADE : char {
		G10 = 2,
		//G15,	// we don't want grade 1+
		G20 = 4,
		G25,
		G30,
		G35,
		G40,
		G45,
		G50,
		G55,
		G60
	};
	std::ostream& operator << (std::ostream& os, const GRADE g);

	enum class WEIGHT : char {
		ONE = 1,
		TWO,
		THREE,
		FOUR
	};

}