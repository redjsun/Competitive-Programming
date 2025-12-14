#include <bits/stdc++.h>

// https://neps.academy/br/exercise/52

using namespace std;

#define ESTADO(x) (x==0 ? (x=1):(x=0))

int main(){
    ios::sync_with_stdio(false);

    int N, x;
    cin >> N;

    int A=0, B=0;
    
    for(int i=0; i<N; i++){
        cin >> x;
        if(x == 1) ESTADO(A);
        else{
            ESTADO(A);
            ESTADO(B);
        }
    }

    cout << A << "\n" << B << "\n";
    return 0;
}