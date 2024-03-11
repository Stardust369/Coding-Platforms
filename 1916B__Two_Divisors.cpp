//SAUCE: https://codeforces.com/problemset/problem/1916/B

#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long int a,b;
    cin >> a >> b;
    int lcm = a*b/__gcd(a,b);
    if (lcm == b){
        for(int num=2;num*num<=b;num++){
            if (b%num==0){
                lcm*=num;
                break;
            }
        }
    }
    if (lcm == b) lcm *= b;
    cout << lcm << endl;
}
 
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}