#include<iostream>
using namespace std;
int main()
{
	int x, a, m;
	cout << "Program sprawdzajacy ktora z podanych trzech liczb jest najwieksza" << endl;
	for (x = 0; x < 3; x++) {
		cout << "Podaj liczbe: ";
		cin >> a;
		if (x == 0)
			m = a;
		else if (a > m)
			m = a;
	}
	cout << "Liczba najwieksza to: " << m;

	return 0;
}