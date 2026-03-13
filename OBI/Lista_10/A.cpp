#include <iostream>
#include <algorithm>
using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    long long N, M;
    cin >> N >> M;
    
    long long X = M;
    while (X >= 1) {
        if (gcd(X, N) == 1) {
            cout << X << endl;
            return 0;
        }
        X--;
    }
    
    cout << 1 << endl;
    return 0;
}