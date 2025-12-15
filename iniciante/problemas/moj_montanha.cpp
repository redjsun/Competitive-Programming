#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> vetor(n);
    int mont=0;

    for(int i=0; i<n; i++){
        cin >> vetor[i];
    }

    for(int i=1; i<n-1; i++){
        if((vetor[i-1] > vetor[i]) && (vetor[i] < vetor[i+1]))
            mont++;
    }

    cout << (mont>=1 ? "S\n":"N\n");

    return 0;
}