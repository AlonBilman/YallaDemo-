#include "Student.h"
#include <iostream>;

using std::cout;
using std::endl;

//טוב אז יאללה הדגמה 

void f1()
{
	Student s(111222333, "Ash", "Ketchum");
}
void f2()
{
	Student* s = new Student(333222111, "Justin", "Bieber");
	delete s;
}
void f3()
{
	Student* s = new Student(987654321, "Uri", "Kaduri");
}


int main()
{
	f1();
	std::cout << "----------------------------" << std::endl;
	f2();
	std::cout << "----------------------------" << std::endl;
	f3();





	//יאללה העמסת פונקציות!

}