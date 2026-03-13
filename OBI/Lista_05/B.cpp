#include <iostream>
using namespace std;

int main(){
    int J, P, V, E, D;
    cin >> J >> P >> V >> E >> D;
    
    int unknown_count = 0;
    if(J == -1) unknown_count++;
    if(P == -1) unknown_count++;
    if(V == -1) unknown_count++;
    if(E == -1) unknown_count++;
    if(D == -1) unknown_count++;
    
    if(unknown_count == 1){
        if(J == -1) {
            J = V + E + D;
        }
        if(P == -1) {
            P = 3 * V + E;
        }
        if(V == -1) {
            V = (P - E) / 3;
        }
        if(E == -1) {
            E = P - 3 * V;
        }
        if(D == -1) {
            D = J - V - E;
        }
    }
    else if(unknown_count == 2){
        if(J == -1 && P == -1){
            J = V + E + D;
            P = 3 * V + E;
        }
        else if(J == -1 && V == -1){
            V = (P - E) / 3;
            J = V + E + D;
        }
        else if(J == -1 && E == -1){
            E = P - 3 * V;
            J = V + E + D;
        }
        else if(P == -1 && V == -1){
            V = J - E - D;
            P = 3 * V + E;
        }
        else if(P == -1 && E == -1){
            E = J - V - D;
            P = 3 * V + E;
        }
        else if(P == -1 && D == -1){
            D = J - V - E;
            P = 3 * V + E;
        }
        else if(V == -1 && E == -1){
            V = (P - J + D) / 2;
            E = J - D - V;
        }
        else if(V == -1 && D == -1){
            V = (P - E) / 3;
            D = J - V - E;
        }
        else if(E == -1 && D == -1){
            E = P - 3 * V;
            D = J - V - E;
        }
    }
    
    cout << J << " " << P << " " << V << " " << E << " " << D << endl;
    return 0;
}
