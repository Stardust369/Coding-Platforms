//SAUCE: https://codeforces.com/problemset/problem/1913/B

#include<iostream>
#include<string>
using namespace std;

int find0(string s){
    int count = 0;
    for (int i = 0; i < s.size(); i++){
        if(s[i] == '0'){
            count++;
        }
    }
    return count;
}

int find1(string s){
    int count = 0;
    for (int i = 0; i < s.size(); i++){
        if(s[i] == '1'){
            count++;
        }
    }
    return count;
}

int main(){
    int t;
    cin >> t;
    
    while(t--){
        string bi;
        cin >> bi;
        int count0 = find0(bi);
        int count1 = find1(bi);
        int ans = 0;
        
        for (int i = 0; i < bi.size(); i++){
            if(bi[i] == '0' && count1 > 0)
                count1--;
            else if(bi[i] == '1' && count0 > 0)
                count0--;
            else{
                ans = bi.size() - i;
                break;
            }
        }
        cout << ans << endl;
    }
}