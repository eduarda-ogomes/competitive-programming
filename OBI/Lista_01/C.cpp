#include <iostream>

using namespace std;

int main() {
	int P,D,B;
	cin >> P >> D >> B;
	int S = P + (D*2)+(B*3);

	if (S>=150){
		cout << "B" << endl;
	} else if (S>=120){
		cout << "D" << endl;
	} else if (S>=100){
		cout << "P" << endl;
	} else{
		cout << "N" << endl;
	}

	return 0;
}	
