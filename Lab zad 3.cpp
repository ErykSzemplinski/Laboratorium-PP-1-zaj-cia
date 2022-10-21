#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "wprowadz liczbe calkowita: ";
    cin >> a;
    if (a == 0) 
    {
        cout << "wpisana liczba to zero" << endl;
    }
    else if (a % 2 == 1) 
    {
        cout << "wpisana liczba jest nieparzysta" << endl;
    }
    else if (a % 2 == 0) 
    {
        cout << "wpisana liczba jest poarzysta" << endl;
    }
    return 0;
}