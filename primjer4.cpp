#include <iostream>
using namespace std;
void main()
{
    int a, b;
    float c, d;
    cout << "Unesite dva cijela broja: ";
    cin >> a >> b;
    cout << "Unesite dva realna broja: ";
    cin >> c >> d;
    if (c > 0 && d >= 0)
    {
        cout << "Kvadrat sume cijelih brojeva je " << (pow(a + b, 2)) << endl;
    }
    if (a % 2 == 0 || b % 2 == 0)
    {
        cout << "Bar jedan od cijelih brojeva je paran." << endl;
        {
            cout("Kub sume cijelog broja i realnog broja je " << (pow(a + c, 3)) << endl);
        }
    }

    system("pause>0");
}