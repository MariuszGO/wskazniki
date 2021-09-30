#include <iostream>
using namespace std;

int main()
{
    int* wsk;

    int a = 10;

    wsk = &a; //przypisanie adresu komorki pamięci zmiennej a do wskaźnika wsk
              // &a powoduje podanie adresu komorki pamieci zmiennej a
    
    cout << "zmienna wyswietlona przez wskaźnik " << *wsk<<endl; //wyświetenie zawartości
                // zmiennej a poprzez adres przechowywany we wskaźniku wsk
    cout << "wyświetlenie adresu przechowywanego w wskaźniku " << wsk<<endl; // !!! jeżeli
        //chcemy wyświetlic adres to bez gwiazdki
    cout << "adres komórki pamieci gdzie jest przechowywana zmienna a " << &a << endl; // !!! jeżeli
        //chcemy wyświetlic adres to bez gwiazdki

    *wsk = 20;

    cout << "nowa wartosc: " << a;

}

