//SAUCE: https://codeforces.com/problemset/problem/1857/A

//COPIED LOGIC
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        int odd = 0;
        for (int i = 0; i < n; i++){
            cin >> arr[i];
            if(arr[i] & 1){
                odd++;
            }
        }
        if(odd & 1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
}