#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int x = 100;
	int* ptr = &x;
	int& ref = x;
	cout << "Значение х - " << x << endl;
	cout << "Значение *ptr - " << &x << endl;
	cout << "Значение ref - " << ref << endl;
}