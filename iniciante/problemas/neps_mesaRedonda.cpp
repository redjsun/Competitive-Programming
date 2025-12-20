#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    vector<int> cadeira(3);

    int A, B;
    cin >> A >> B;

    int pos = (A%3)+1;

    if(pos > 2) 
        pos = 0;
    cadeira[pos]++;

    pos = (B%3)+1;

    while(1){
        if(pos > 2) 
            pos = 0;

        if(cadeira[pos] == 1) 
            pos++;
        else{
            cadeira[pos]++;
            break;
        }
    }
    

    for(int i=0; i<3; i++){
        if(cadeira[i]==0)
            cout << i << "\n";
    }

    return 0;
}