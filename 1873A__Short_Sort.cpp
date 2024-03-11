//SAUCE: https://codeforces.com/problemset/problem/1873/A

#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(s == "bca" || s == "cab")
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}