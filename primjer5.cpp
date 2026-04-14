#include <iostream>
using namespace std;
void main()
{
    int broj;
    cin >> broj;
    if (broj % 2 == 0)
    {
        cout << "Korijen kuba unesenog broja je " << sqrt(pow(broj, 3)) << endl;
    }
    else
    {
        cout << "Kvadrat kuba unesenog broja je " << pow(pow(broj, 3), 2) << endl;
    }
    system("pause>=0");
}