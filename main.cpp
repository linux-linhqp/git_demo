#include <iostream>

using namespace std;

void printChar(const char* str)
{
	cout << "Char: " << str << endl;
}

void printInt(int var)
{
	cout << "Int: " << var << endl;
}

int main()
{
	void (*pFc)(const char*);
	
	pFc = printChar;


	pFc("Hello");

	void *ptr;
	ptr = printInt;

	((void(*)(int))(ptr))(23);

}
