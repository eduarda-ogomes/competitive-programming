#include <iostream>

using namespace std;

int main(){
	int E, D;
	cin >> E >> D;
	if (E>D){
		cout << E+D;
	} else {
		cout << (D-E)*2;
	}

	return 0;
}
