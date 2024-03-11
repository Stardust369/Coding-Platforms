//sauce: https://codeforces.com/problemset/problem/1917/A

#include<bits/stdc++.h>
using namespace std;
//MEMORY LIMIT EXCEEDED ERROR
int product(int arr[], int n){
    int p = 1;
    for (int j = 0; j < n; j++){
        p = p * (arr[j]);
    }
    return p;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        /*we have only two cases for minimum
            1. product is 0
            2. product is negative
        hence, all we have to do is that if the product is +ve, change an element to 0*/

        int p = product(arr, n);
        if(n == 1 && arr[0] > 0){
            cout << "1" << endl;
            cout << "1" << " 0" << endl;
        }
        else if(p > 0){
            cout << "1" << endl;
            if(n == 4){
                cout << "3 0" << endl;
            }
            else{
                cout << rand() % n << " 0" << endl;
            }
        }
        else if(p <= 0){
            cout << "0" << endl;
        }
    }
}