#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    vector<int> levels(4);
    for (int i = 0; i < 4; ++i) {
        cin >> levels[i];
    }

    int diff1 = abs((levels[0] + levels[3]) - (levels[1] + levels[2]));
    int diff2 = abs((levels[0] + levels[1]) - (levels[2] + levels[3]));
    int diff3 = abs((levels[0] + levels[2]) - (levels[1] + levels[3]));

    int min_diff = min({diff1, diff2, diff3});

    cout << min_diff << endl;

    return 0;
}