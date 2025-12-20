#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int x;
    cin >> x;

    for(int i=1; i<=x; i++){
        if(x % i == 0)
            cout << i << " ";
    }

    cout << "\n";

    return 0;
}