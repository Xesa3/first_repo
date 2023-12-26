#include <iostream>

using namespace std;

class People
{
public:
	People(string name) : name(name) {};

	const void print() { cout << "Name: " << name; }

private:
	string name;
};


int main()
{
	People vlad = { "vlad" };
	vlad.print();
}
