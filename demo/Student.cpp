#include "Student.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

double Student::getAverage() const
{
	double sum = 0;
	int numOfValidGrades = 0;
	for (int i = 0; i < NUM_OF_GRADES; i++)
	{
		if (this->_grades[i] != EMPTY_GRADE) // takes only valid grades
		{
			numOfValidGrades++;
			sum += _grades[i];
		}
	}

	if (numOfValidGrades == 0)
	{
		return 0; // avoids division by zero
	}
	return sum / numOfValidGrades; // the average of all valid grade
}

void Student::print() const
{
	cout << "Student id: " << this->_id << endl
		<< "Name: " << this->_firstName << " " << this->_lastName << endl
		<< "*** Grades ***" << endl;
	cout << "History: " << this->getGradeString(HISTORY_GRADE_IDX) << endl
		<< "Math: " << this->getGradeString(MATH_GRADE_IDX) << endl
		<< "Literature: " << this->getGradeString(LITERATURE_GRADE_IDX) << endl
		<< "English: " << this->getGradeString(ENGLISH_GRADE_IDX) << endl;

}
//new!

//רגע מה שיניתי פה?...

Student::Student(const int id, const std::string firstName, const std::string lastName)
{
	//std::cout << "CTOR!" << std::endl;
	this->_id = id;
	this->_firstName = firstName;
	this->_lastName = lastName;
	// allocates memory and assigns empty grades
	this->_grades = new unsigned int[NUM_OF_GRADES];
	for (int i = 0; i < NUM_OF_GRADES; i++)
	{
		this->_grades[i] = EMPTY_GRADE;
	}
}

Student::~Student()
{
	//std::cout << "DTOR!" << std::endl;
	delete[] _grades;
	//אחרי שחרור זיכרון אני חייב לתת השמה
	//המטרה היא אבטחת מידע
	_grades = nullptr;
}
/*
Student::Student(const Student& other)
{
	// shallow copy fields
	this->_id = other._id;
	this->_firstName = other._firstName;
	this->_lastName = other._lastName;
	// deep copy dynamic fields (pointers/arrays)

	this->_grades = new unsigned int[NUM_OF_GRADES];
	for (int i = 0; i < NUM_OF_GRADES; i++)
	{
		// copies cell by cell
		this->_grades[i] = other._grades[i];
	}
}
*/


string Student::getGradeString(const int gradeIndex) const
{
	if (this->_grades[gradeIndex] == EMPTY_GRADE)
	{
		return "Not Graded";
	}
	else
	{
		return std::to_string(this->_grades[gradeIndex]);
	}

}

int Student::getId() const
{
	return this->_id;
}

string Student::getFirstName() const
{
	return this->_firstName;
}

string Student::getLastName() const
{
	return this->_lastName;
}

unsigned int Student::getGrade(const int grade_idx) const
{
	return this->_grades[grade_idx];
}

void Student::setId(const int newId)
{
	this->_id = newId;
}

void Student::setFirstName(const std::string newFirstName)
{
	this->_firstName = newFirstName;
}

void Student::setLastName(const std::string newLastName)
{
	this->_lastName = newLastName;
}

void Student::setGrade(const int grade_idx, const unsigned int new_grade)
{
	if (grade_idx >= NUM_OF_GRADES or grade_idx < 0)
	{
		std::cerr << "grade index must be between 0 to 3" << endl;
	}
	if (new_grade < 0 || new_grade > 100)
	{
		// writes to cerr - a stream dedicated to error audit
		std::cerr << "grade must be between 0 to 100" << endl;
	}
	else
	{
		this->_grades[grade_idx] = new_grade;
	}

}

