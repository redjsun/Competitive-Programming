#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    vector<int> num(3);

    for(int i=0; i<3; i++){
        cin >> num[i];
    }

    sort(num.begin(), num.end());

    for(int i=0; i<3; i++){
        cout << num[i];
    }

    return 0;
}