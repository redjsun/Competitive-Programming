#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int N;
    cin >> N;

    vector<int> seq(N);

    int count=1, maiorSeq=1, maiorTodos=1;

    for(int i=0; i<N; i++){ 
        cin >> seq[i];
        
        if(i>0){
            if(seq[i-1]==seq[i]){
                count++;
                maiorSeq = count;   
            }
            else{
                count = 1;
            }
    
            if(maiorSeq > maiorTodos) 
                maiorTodos = maiorSeq;
        }
    }

    cout << maiorTodos << "\n";

    return 0;
}