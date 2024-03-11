//SAUCE: https://codeforces.com/problemset/problem/1850/C

#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s[8];
        int row = -1;
        int col = 0;
        int j = 0;

        for (int i = 0; i < 8; i++){
            cin >> s[i];

            if(s[i] != "........" && row == -1){
                row = i;
                while(s[i][j] == '.'){
                    j++;
                }
                col = j;
            }
        }
        while (row < 8 && s[row][col] != '.'){
            cout << s[row][col];
            row += 1;
        }
        cout << endl;
    }
}