#include <bits/stdc++.h>
using namespace std;

int main() {
    double a,c;
    cin >> a >> c;

    const double PI = acos(-1.0);

    double q = c*a;
    double l = q/2.0;
    double r = (a*c) / (2.0 * sqrt(a*a + c*c));
    
    double azul = PI * r * r;
    double verde = q - l;
    double amarelo = l - azul;

    cout << fixed << setprecision(8);
    cout << verde << " " << amarelo << " " << azul << "\n";

    return 0;
}