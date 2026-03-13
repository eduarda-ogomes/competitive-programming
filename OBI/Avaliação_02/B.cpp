#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int c, t;
    cin >> c >> t;

    vector<int> raio(c);
    for (int i = 0; i < c; i++){
        cin >> raio[i];
    }

    vector<pair<int, int>> tiros(t);
    for (int i = 0; i < t; i++){
        cin >> tiros[i].first >> tiros[i].second;
    }

    int pontos = 0;
    for (int i = 0; i < t; i++){
        int x = tiros[i].first;
        int y = tiros[i].second;
        double distancia = sqrt(x * x + y * y);
        
        for (int j = 0; j < c; j++){
            if(distancia <= raio[j]){
                pontos++;
            }
        }    
    }
    
    cout << pontos << endl;
    return 0;
}
