//sauce:https://codeforces.com/problemset/problem/1866/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i<n; i++){
        arr[i] = abs(arr[i]);
    }
        int &min = *min_element(arr, arr + n);
    cout << min;
}