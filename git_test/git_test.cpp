#include <iostream>

using namespace std;

class People
{
public:
	People(string name, int age) : name(name), age(age) {};

	const void print() { cout << "Name: " << name << "\n" << "Age: " << age; }

private:
	string name;
	int age;
};

int sum(int a, int b) {
	return a + b;
}

int main()
{
	People vlad = { "vlad",12 };
	vlad.print();
	cout << endl << sum(10, 6);
}
