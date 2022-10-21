#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Podaj liczbe calkowita:";
    cin >> number;
    if (number > 0) {
        cout << "Wpisales dodatnia liczbe calkowita:" << number << endl;
    }
    else if (number < 0) {
        cout << "wpisales ujemna liczbe calkowita:" << number << endl;
    }
    else {
        cout << "Wpisales zero:" << number << endl;
    }
    return 0;
}