//Sauce: https://codeforces.com/problemset/problem/1886/A
//Wrong Code:
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int a;
        cin >> a;

        for (int j = 0; j < n; j++){

            for (int k = 0; k < n; k++){

                if (k % 3 != 0 || j % 3 != 0 || (a - j - k) % 3 != 0){
                    
                    cout << "YES" << endl;
                    cout << "%d %d %d\n"<< i, j, k;
                }
            }
        }
    }
}