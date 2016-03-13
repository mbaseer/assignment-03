// Set Example in STL
//Mohammad Baseer & Moises Leon
#include <iostream>

#include <set>

int main()
{
	std::set<std::string> s;
	std::cout << "Adding first name and last name to set " << std::endl;

	s.insert("Abdul");
	s.insert("Razaq");
	std::cout << "Adding another person first name and last name to set " << std::endl;
	s.insert("Jack");
	s.insert("Sparrow");

	std::cout << "Set contains:";
	while (!s.empty()) {
		std::cout << ' ' << *s.begin();
	}

	return 0;
}
