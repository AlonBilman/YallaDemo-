#include "Student.h"
#include <iostream>;
using std::cout;
using std::endl;
using std::string;
void dontCopy(Student s)
{
	// creates a student with default values
	Student newStudent(-1, "", "");
	newStudent.setId(s.getId());
	newStudent.setFirstName(s.getFirstName());
	newStudent.setLastName(s.getLastName());
	// grades are not copied
}
int main()
{
	Student stud(123456789, "Blinky", "Bill");
	dontCopy(stud);
	system("pause");
	return 0;
}