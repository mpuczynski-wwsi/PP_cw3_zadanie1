#include<iostream>
using namespace std;
double wyznacz_min(double x, double y, double z) {
	double min = x;
	if (y < min) {
		min = y;
	} 
	if (z < min) {
		min = z;
	}
	return min;
}

double wyznacz_max(double x, double y, double z) {
	double max = x;
	if (y > max) {
		max = y;
	}
	if (z > max) {
		max = z;
	}
	return max;
}

int main() {
	double lb1, lb2, lb3;
	int co;
	char zakoncz;
	do {
		cout << "\nmin <1>, max <2>:\n";
		cin >> co;
		cout << "\npodaj 3 liczby:\n";
		cin >> lb1 >> lb2 >> lb3;
		switch (co) {
		case 1:
			cout << "\nmin = " << wyznacz_min(lb1, lb2, lb3);
			break;
		case 2:
			cout << "\nmin = " << wyznacz_max(lb1, lb2, lb3);
			break;
		default:
			cout << "\nbledna wartosc";
		}
		cout << "\naby zakonczyc <z>\n aby kontynowac <k>\n";
		cin >> zakoncz;

	} while (zakoncz != 'z');


}
