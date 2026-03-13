#include <iostream>
#include <algorithm>
using namespace std;

bool cobreLençol(int w, int h, int W, int H) {
    return (w >= W && h >= H);
}

int main(){
    int a1, b1, a2, b2, A, B;
    cin >> a1 >> b1 >> a2 >> b2 >> A >> B;
    
    int dimLençol[2][2] = { {A, B}, {B, A} };
    
    for (int f = 0; f < 2; f++){
        int W = dimLençol[f][0];  
        int H = dimLençol[f][1];  
        
        if ( cobreLençol(a1, b1, W, H) || cobreLençol(b1, a1, W, H) ||
             cobreLençol(a2, b2, W, H) || cobreLençol(b2, a2, W, H) ) {
            cout << "S" << endl;
            return 0;
        }
        
        int pedaço1[2][2] = { {a1, b1}, {b1, a1} };
        int pedaço2[2][2] = { {a2, b2}, {b2, a2} };
        
        for (int i = 0; i < 2; i++){
            for (int j = 0; j < 2; j++){
                int w1 = pedaço1[i][0], h1 = pedaço1[i][1];
                int w2 = pedaço2[j][0], h2 = pedaço2[j][1];
                
                if (h1 >= H && h2 >= H && (w1 + w2) >= W) {
                    cout << "S" << endl;
                    return 0;
                }
                
                if (w1 >= W && w2 >= W && (h1 + h2) >= H) {
                    cout << "S" << endl;
                    return 0;
                }
            }
        }
    }
    
    cout << "N" << endl;
    return 0;
}
