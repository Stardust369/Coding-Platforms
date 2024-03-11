//SAUCE: https://codeforces.com/problemset/problem/1914/B

#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;

        //we want to have ascending numbers tll k then descend so that it excited for k times
        for (int i = 1; i <= k; i++){
            cout << i << " ";
        }
        for (int j = n; j > k; j--){
            cout << j << " ";
        }
        cout << endl;
    }
}