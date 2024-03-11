//SAUCE: https://codeforces.com/problemset/problem/1814/A

#include<iostream>
using namespace std;

// bool check(long long int n, long long int k)
// {
//     for (long long int i = 0; i < 1000000; i++){
//         for (long long int j = 0; j < 1000000; j++){
//             if(((2 * i) + (k * j)) == n){
//                 return 1;
//             }
//         }
//     }
//     return 0;
// }

// int main(){
//     long long int t;
//     cin >> t;
//     while(t--){
//         long long int n;
//         long long int k;
//         cin >> n >> k;
//         if (check(n, k))
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }
// }

//THIS CODE IS BULLSHIT!!! 
//THINK OUT OF BRUTE FORCE FOR ONCE IN YOUR LIFE!!

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n, k;
        cin >> n >> k;

        if(!(n & 1))
            cout << "YES" << endl;
        else if(n % k == 0)
            cout << "Yes" << endl;
        else if((n - k) % 2 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}