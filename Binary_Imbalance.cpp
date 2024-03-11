

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void run_case(){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int z = 0;
        for(int i = 0; i < n; i++){
            z+=(s[i] == '0');
        }
        if(z){
            cout << "YES" << endl;
        } else{
            cout << "NO" << endl;
        }
}

int main() {
    int tests;
    cin >> tests;
    while (tests-- > 0){
        run_case();
    } 
}