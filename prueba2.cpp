#include <iostream>
using namespace std;
int main() {
	float now = 0;
	float sal;
	for (int i = 1; i <= 15; i++ ) {
	cout << "introduce el salario #: " << i << endl;
	cin >> sal;
	now = now + sal;
	}
	cout << "la suma total de los salarios es: " << now << endl;

}
