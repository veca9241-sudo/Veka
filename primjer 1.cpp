#include <iostream>
using namespace std;
void main()
{
    int a;
    float b;
    cout << "Unesite cijeli i realni broj:<< endl;
            cin >>
        a >> b;
    float c = a * b;
    if (c >= 10 && c <= 100)
    {
        cout << "Proizvod dva unesena broja je: " << c << ;
        endl;
        cout << "A korijen cijelog unesenog broja je: " << sqrt(c) << endl;
    }
    else
    {
        cout << "Suma dva unesena broja je: " << a + b << endl;
    }
    system("pause>");