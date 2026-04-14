#include <iostream>
using namespace std;
void main()
{
    int broj;
    cin >> broj;
    if ((broj >= 10 && broj <= 99) || broj % 2 == 0)
    {
        float novaVarijabla = broj * sgrt(pow(brpj, 3));
        cout << "novaVarijabla: " << novaVarijabla << endl;
    }
    else
    {
        float novaVarijabla2 = sqrt(broj * pow(broj, 2));
        cout << "novaVarijabla2: " << novaVarijabla2 << endl;
    }

    system("pause>=");
}