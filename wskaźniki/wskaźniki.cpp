#define n 10
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void losuj(int *t) {
	srand(time(0));
	for (int i = 0; i < n; i++) {
		*(t + i) = rand() % 10;
	}
}

void zeruj(int* t) {
		for (int i = 0; i < n; i++) {
		*(t + i) = 0;
	}
}

void losuj2(int t[n] ) {
	srand(time(0));
	for (int i = 0; i < n; i++) {
		t[i] = rand() % 10;
	}

}

void wyswietl(int* t) {

	for (int i = 0; i < n; i++) {
		cout << "[ " << *(t + i) << " ]";
	}

	cout << endl << endl;

}


int main()
{

	int tab[n];
	//cout << tab;
	
	zeruj(tab);
	wyswietl(tab);
	losuj(tab);
	wyswietl(tab);




}

