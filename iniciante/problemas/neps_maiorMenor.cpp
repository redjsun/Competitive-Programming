#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int N;
    cin >> N;

    int maior = 0, menor = 1000;

    int x;

    for(int i=0; i<N; i++){
        cin >> x;
        if(x>maior)
            maior = x;
        if(x<menor)
            menor = x;
    }

    cout << maior << "\n" << menor << "\n";

    return 0;
}