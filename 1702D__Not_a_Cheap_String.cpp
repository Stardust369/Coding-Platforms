//SAUCE: https://codeforces.com/problemset/problem/1702/D

#include<iostream>
#include<string>
using namespace std;
//MAPS NEEDED - INCOMPLETE
int strcost(string str){
    int sum = 0;
    for (int i = 0; i < str.size(); i++){
        sum += (str[i] - 'a' + 1);
    }
    return sum;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        int reqcost;
        cin >> str;
        cin >> reqcost;

        int cost = strcost(str);
        if(cost == reqcost)
            cout << str << endl;
        
    }
}