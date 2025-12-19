#include <bits/stdc++.h>

using namespace std;

int fatorial(int n){
    if(n==0 || n == 1)
        return 1;
    
    return fatorial(n-1) * n;
}

int main(){
    ios::sync_with_stdio(false);
    int x;
    cin >> x;

    cout << fatorial(x) << "\n"; 

    return 0;
}