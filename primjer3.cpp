#include <iostream>
using namespace std;
void main()
{
    int n, m;
    cout << "unesite dva cijela broja:<<endl;
            cin >>
        n >> m;
    char slovo;
    int proizvod = n * m;
    if (proizvod >= 1 && proizvod <= 9) && proizvod)
        {
            cout << "nˇm=" << power(n, m) << endl;
        }
    if (proizvod >= 10 && proizvod <= 99)
    {
        cout << "Unesite jedan karakter: " << endl;
        cin >> slovo;
        if (slovo >= 'a' && slovo <= 'z')
        {
            cout << "Suma korijenova dva unesena broja je: " << sqrt(n) + sqrt(m) << endl;
        }
        else
        {
            cout << "Kub proizvoda dva unesena broja je: " << pow(proizvod, 3) << endl;
        }
        system("pause>0");
    }