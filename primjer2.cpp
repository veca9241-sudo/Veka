#include <iostream>
using namespace std;
void main()
{
    int a, b;
    char slovo;
    cout << "Unesite dva realna broja: ";
    cin >> a >> b;
    cout << "Unesite jedn od sljedecih karaktera: s,o,m ili d" << endl;
    cin >> slovo;
    if (slovo == 's')
    {
        cout << "Zbroj je: " << a + b << endl;
    }
    if (slovo == 'o')
    {
        cout << "Razlika je: " << a - b;
    }
    if (slovo == 'm')
    {
        cout << "Produkt je: " << a * b << endl;
    }
    if (slovo == 'd')
    {
        if (b != 0)
        {
            cout << "Kvocijent je: " << a / b;
        }
        else
        {
            cout << "Dijeljenje s nulom nije dozvoljeno!";
        }
    }
    else
    {
        cout << "Neispravan karakter!";
    }
    system("pause>0");
}