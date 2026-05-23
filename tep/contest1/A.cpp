#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int copy = n;
        int count = 0;

        while(copy>0){
            int dig = copy % 10;

            if(dig != 0) count++;

            copy /= 10;
        }
        cout << count << endl;

        int pos = 1;
        while(n>0){
            int dig = n % 10;

            if(dig != 0) cout << dig * pos << " ";

            n /= 10;
            pos *= 10;
        }

        cout << endl;
    }
}