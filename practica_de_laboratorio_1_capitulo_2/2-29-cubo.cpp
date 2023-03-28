#include <iostream>
using namespace std;

int main() {

	cout << "arista\t\tarea\t\tvolumen\n";
	for (int i = 0; i <= 4; i++) {
		cout << i << "\t\t" << i * i << "\t\t" << i * i * i << endl;
	}
	return 0;
}
