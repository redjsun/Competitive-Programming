#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int N, x;
    cin >> N;

    int soma=0;

    for(int i=0; i<N; i++){
        cin >> x;
        soma += x;
    }

    cout << soma << "\n";

    return 0;
}