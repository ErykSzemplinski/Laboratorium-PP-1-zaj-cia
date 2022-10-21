#include<iostream>
using namespace std;
int main()
{
	cout << "Program wybierajacy najwieksza liczbe sposrod trzech podanych" <<endl;
	int a, b, c;
	cout << "Wpisz trzy liczby" << endl;
	cin >> a >> b >> c;
	if ((a >= b) && (a >= c)) {
		cout << a << " jest najwieksza liczba" << endl;
	}
	else if ((b >= a) && (b >= c)) {
		cout << b << " jest najwieksza liczba" << endl;
	}
	else {
		cout << c << " jest najwieksza liczba" << endl;
	}
	return 0;
}