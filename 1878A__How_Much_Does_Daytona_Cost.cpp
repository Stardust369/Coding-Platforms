//SAUCE: https://codeforces.com/problemset/problem/1878/A

#include<iostream>
using namespace std;

bool kCount(int arr[], int n, int target){
    int count = 0;

    // on seeing the testcases we see that if k as much as appears in the array then the answer is YES
    //Hence, we focus on just checking if k is present in the array
    
    for (int i = 0; i < n; i++){
        if(arr[i] == target)
            return true;
    }
    return false;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        if(kCount(arr, n, k)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}