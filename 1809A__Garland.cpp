//SAUCE: https://codeforces.com/problemset/problem/1809/A

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int digits(string str){

    sort(str.begin(), str.end());
    if(str[0] == str[3]){
        return -1;
    }
    int count = 0;
    for (int i = 1; i < 4; i++){
        if(str[i] != str[i - 1]){
            count++;
        }
    }
    if(count == 1 && (str[0] != str[1] || str[2] != str[3])){
        return 6;
    }
    else{
        return 4;
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        string bulbs;
        cin >> bulbs;
        int p = digits(bulbs);
        cout << p << endl;
    }
}