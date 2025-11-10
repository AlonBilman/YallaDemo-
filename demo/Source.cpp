#include "Student.h"
#include <iostream>;

using std::cout;
using std::endl;

int main()
{
	Student stud1;

	// init first student info
	stud1.init(123456789, "Shahar", "Hasson");
	stud1.setGrade(HISTORY_GRADE_IDX, 78);
	stud1.setGrade(MATH_GRADE_IDX, 81);
	stud1.setGrade(LITERATURE_GRADE_IDX, 90);
	stud1.setGrade(ENGLISH_GRADE_IDX, 65);
	Student stud2;
	// init second student info
	stud2.init(111111111, "Beyonce", "");
	stud2.setGrade(HISTORY_GRADE_IDX, 95);
	stud2.setGrade(MATH_GRADE_IDX, 87);
	stud2.setGrade(LITERATURE_GRADE_IDX, 90);
	stud2.setGrade(ENGLISH_GRADE_IDX, 98);

	stud1.print();
	std::cout << "---------------" << std::endl;
	stud2.print();

	system("pause");
	return 0;
	//השאלה שעולה פה היא האם זה מועיל?
	//דבר ראשון, כן זה נראה הרבה יותר מסודר 
	//אבל מה קורה אם מישהו לא קורא לפונקציית האיתחול?
	//unexpected behavior



	//שחכתי פה עוד משהו.... 
	/*לשחרר זיכרון!!
	*/


	//חוזרים למצגת! בנאים ומפרקים!

}