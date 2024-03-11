//SAUCE: https://codeforces.com/problemset/problem/1915/C
 
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
 
int print(long long int sum){
    long long int sqrtSum = sqrt(sum);
    return (sqrtSum * sqrtSum == sum);
}
 
int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        vector<long long int> sq(n);
        for (int i = 0; i < n; i++){
            cin >> sq[i];
        }
        long long int sum = 0;
        for (int i = 0; i < n; i++){
            sum += sq[i];
        }
        
        if(print(sum))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}