// Template function
// Mohammad Baseer & Moises Leon
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

template<typename T>
void cube(T& x)
{
	x = x*x*x;
}

int main()
{
	int i;
	cout << "Enter a number to cube" << endl;
	cin >> i;
	cube(i);
	cout << i << endl;
	return 0;

}
