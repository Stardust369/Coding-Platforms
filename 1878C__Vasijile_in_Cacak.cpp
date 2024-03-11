//SAUCE: https://codeforces.com/problemset/problem/1878/C

#include<iostream>
using namespace std;
#define ll long long

ll largestSum(ll n, ll k){
    ll sum = 0;

    for (ll i = n; i > n - k; i--){
        sum += i;
    }

    return sum;
}

int main(){
    ll t;
    cin >> t;
    while(t--){

        ll n, k, x;
        cin >> n >> k >> x;

        ll nsum = (n * (n + 1)) / 2;
        ll ksum = (k * (k + 1)) / 2;
        
        if(largestSum(n, k) < x)
            cout << "NO" << endl;
        
        else if(nsum < x || ksum > x)
            cout << "NO" << endl;
        
        else
            cout << "YES" << endl;
    }
}