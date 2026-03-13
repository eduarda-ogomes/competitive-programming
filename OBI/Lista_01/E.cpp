#include <iostream>
using namespace std;

int main() {
	int D,A,N,diaria;
	cin >> D >> A >> N;
	
	if (N==1) {
		diaria = D;
	} else if (N>=2 && N<=15) {
		diaria = D + (N-1) * A;
	} else {
		diaria = D + 14 * A;
	}

	int diasEstadia = 31 - N + 1;
	int total = diasEstadia * diaria;
	cout << total << endl;
	
	return 0;
}		
