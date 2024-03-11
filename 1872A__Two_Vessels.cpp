//SAUCE: https://codeforces.com/problemset/problem/1872/A

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        cout << (abs(a - b) + 2 * c - 1) / (2 * c) << endl;
    }
}