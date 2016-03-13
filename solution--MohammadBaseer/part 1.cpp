//Mohammad Baseer & Moises Leon
// using standard exceptions
#include <iostream>
#include <exception>
using std:: exception;
using std:: cout;
class Student : public exception
{
	public:
	const char* what() const throw()
	{
		return "Student doesn't exist";
	}
};

int main() {
	try
	{
		throw Student();
	}
	catch (Student&e)
	{
		cout << e.what()<< '\n';
	}
	return 0;
}

