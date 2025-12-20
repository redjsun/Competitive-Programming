#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> campo(n);

    for(int i=0; i<n; i++){
        cin >> campo[i];
    }

    for(int i=0; i<n; i++){
        int count = 0;
        if(campo[i]==1)
                count++;
        if(i<n){
            if(campo[i+1]==1)
                count++;
        }
        if(i>0){
            if(campo[i-1]==1)
                count++;
        }

        cout << count << "\n";
    }

    return 0;
}