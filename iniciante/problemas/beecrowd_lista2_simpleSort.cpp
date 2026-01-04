#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    vector<int> num(3);
    vector<int> sorted(3);

    int x;

    for(int i=0; i<3; i++){
        cin >> x;

        num[i] = x;
        sorted[i] = x;
    }

    sort(sorted.begin(), sorted.end());

    for(int i=0; i<3; i++){
        cout << sorted[i] << "\n";
    }

    cout << "\n";

    for(int i=0; i<3; i++){
        cout << num[i] << "\n";
    }

    return 0;
}