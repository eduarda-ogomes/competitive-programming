#include <iostream>
using namespace std;

int main() {
	int P1,P2,V1,V2;
	cin >> P1 >> P2;

	if (P1<=17) {
		V1 = 15;
	} else if (P1<=59) {
		V1 = 30;
	} else {
		V1 = 20;
	}

	if (P2<=17) {
		V2 = 15;
	} else if (P2<=59) {
		V2 = 30;
	} else {
		V2 = 20;
	}
	
	int S = V1+V2;
	cout << S << endl;
	return 0;
}
