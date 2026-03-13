#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n1,n2,n3;
	cin >> n1 >> n2 >> n3;

	int idades[3] = {n1,n2,n3};

	sort(idades, idades + 3);
	
	cout << idades[1] << endl;

	return 0;
}
