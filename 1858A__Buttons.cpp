//SAUCE: https://codeforces.com/problemset/problem/1858/A

#include<iostream>
using namespace std;
//MY CODE LOGIK:

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int a, b, c;
//         cin >> a >> b >> c;
//         if((b + c) < a)
//             cout << "First" << endl;
//         else if((a + c) < b)
//             cout << "Second" << endl;
//         else if(b == a){
//             if(c & 1)
//                 cout << "First" << endl;
//             else
//                 cout << "Second" << endl;
//         }
//         else if(b/a == 2 && c/a == 3){
//             cout << "Second" << endl;
//         }
//     }
// }


//COPIED LOGIC:
int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if(c % 2 == 0)
            c = 0;
        else
            a += 1;
        if (a > b)
            cout << "First" << endl;
        else
            cout << "Second" << endl;
    }
}