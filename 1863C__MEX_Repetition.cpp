// SAUCE: https://codeforces.com/problemset/problem/1863/C

#include <bits/stdc++.h>
using namespace std;

int arr[100005];

void work(){
    int n, k, x = 0;
    cin >> n >> k;

    for (int i = 0; i < n; i++){
        cin >> arr[i];
        x ^= i ^ arr[i];
    }

    arr[n] = x ^ n;
    k %= (n + 1);

    for (int i = 0; i < n; i++)
        cout << arr[(i - k + n + 1) % (n + 1)] << " ";
    cout << "\n";
}

int main(){
    int t;
    cin >> t;
    while (t--)
        work();
}