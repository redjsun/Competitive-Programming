#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    vector<int> vetor(4);

    int n;

    for(int i=0; i<4; i++){
        cin >> vetor[i];
    }

    for(int i=0; i<4; i++){
        if(vetor[i] == vetor[vetor[vetor[i]]]) cout << "V";
    }

    

    return 0;
}