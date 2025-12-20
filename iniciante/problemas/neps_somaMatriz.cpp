#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    vector<vector<int>> matriz(3, vector<int>(3));

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> matriz[i][j];
        }
    }

    for(int i=0; i<3; i++){
        int soma=0;
        for(int j=0; j<3; j++){
            soma += matriz[i][j];
        }
        cout << "Linha " << i << ": " << soma << "\n";
    }

    for(int i=0; i<3; i++){
        int soma=0;
        for(int j=0; j<3; j++){
            soma += matriz[j][i];
        }
        cout << "Coluna " << i << ": " << soma << "\n";
    }

    return 0;
}