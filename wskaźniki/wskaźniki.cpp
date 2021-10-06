#include <iostream>
using namespace std;

void abc(int* a, int b) {
	*a += 10;
	b += 10;
	cout << "a w funkcji " << *a<<endl;
	cout << "b w funkcji " << b<<endl;
	cout << "adres komorki a  w funkcji" << a << endl;
	cout << "adres komorki b  w funkcji" << &b << endl;
}


int main()
{
	int c=10;
	int d=10;
	cout << "adres komorki b " << &c << endl;
	cout << "adres komorki c " << &d << endl;



	abc(&c, d);

	cout << "c po funkcji " << c<<endl;
	cout << "d po funkcji " << d<<endl;



}

