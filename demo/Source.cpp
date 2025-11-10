#include "Student.h"
#include <iostream>;

using std::cout;
using std::endl;

int main()
{
	Student A(123456789, "Blinky", "Bill");
	cout << "Student A info" << endl;
	A.print();
	cout << "\n" << endl;
	// creates Student object B by copying A
	Student B(A);
	cout << "Student B info" << endl;
	B.print();
	cout << "\n" << endl;
	A.setGrade(HISTORY_GRADE_IDX, 60);
	B.setId(987654321);
	std::cout << "changed Student A History grade to 60,and B id to 987654321 " << endl;
	cout << "Student A info" << endl;
	A.print();
	cout << "\n" << endl;
	cout << "Student B info" << endl;
	B.print();
	cout << "\n" << endl;
	system("pause");
	return 0;

}
