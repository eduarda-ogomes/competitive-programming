#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= N; ++j) {
            int value = min(min(i, j), min(N - i + 1, N - j + 1));
            cout << value;
            if (j < N) cout << " ";
        }
        cout << endl;
    }
    
    return 0;
}