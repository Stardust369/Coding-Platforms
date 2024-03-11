//SAUCE:https://codeforces.com/problemset/problem/1842/A

// //MY SOLUTION:
// #include<iostream>
// #include<vector>
// #include<numeric>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n1, n2;
//         cin >> n1 >> n2;
//         vector<long long int> v1(n1);
//         vector<long long int> v2(n2);

//         for(int i = 0; i < n1; i++){
//             cin >> v1[i];
//         }
//         for(int i = 0; i < n2; i++){
//             cin >> v2[i];
//         }
//         long long int sum1 = accumulate(v1.begin(), v1.end(), 0);
//         long long int sum2 = accumulate(v2.begin(), v2.end(), 0);

//         if(sum1 == sum2)
//             cout << "Draw" << endl;
//         else if(sum1 > sum2)
//             cout << "Tsondu" << endl;
//         else
//             cout << "Tenzing" << endl;
//     }
// }


//INTERNET SOLUTION:
//The logic here is essentially the exact same but i think this saves space complexity due to less variables:

#include <iostream>
using namespace std;
typedef long long int ll;

void solve()
{
    ll m, n;
    cin >> m >> n;
    ll Tsondu = 0;
    ll sum;
    for (int i = 0; i < m; i++){
        cin >> sum;
        Tsondu += sum;
    }
    for (int i = 0; i < n; i++){
        cin >> sum;
        Tsondu -= sum;
    }
    if (Tsondu > 0)
        cout << "Tsondu" << endl;
    else if (Tsondu < 0)
        cout << "Tenzing" << endl;
    else
        cout << "Draw" << endl;
}

int main(){
    int t;
    cin >> t;
    while (t--)
        solve();
}

//Reminder: Keep in mind that its better to subtract the values of other from first rather than calculatinf both sums