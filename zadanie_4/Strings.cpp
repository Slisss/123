#include <iostream>
using namespace std;
#include "Str.h"


void Test(Str s) {
	cout << s << endl;
}

int main()
{
	Str s = "1234";
	cout << s << endl;
	cout << strlen(s) << endl;
	Test(s);
	Str a;
	Str b = "213";
	a = b = s;

	cout << s << ", " << b << endl;

	Str str1("Hello, ");
	Str str2("world!");

	cout << "str1: " << str1 << endl;
	cout << "str2: " << str2 << endl;
	str1 += str2;
	cout << "str1: " << str1 << endl;
	cout << "str1: " << str1 + str2 << endl;
}

