// SAUCE: https://codeforces.com/problemset/problem/102/B

//didn't run on 7th test case which had a large number like 999... for some reason
//since it didn't work, i am using string instead of long long int

#include <bits/stdc++.h>
using namespace std;

int summation(string n, int count){
    if(n.length() == 1)
        return 0;
    long long int sum = 0;
    for (char digit : n) {
        sum += digit - '0';
    }
    if (sum < 10)
        return count;
    return summation(to_string(sum), count + 1);
}

int main()
{
    string n;
    cin >> n;
    cout << summation(n, 1);
}