//SAUCE: https://codeforces.com/problemset/problem/1849/B

//WORKS JUST FINE BUT TIME LIMIT EXCEEDED :/

#include<iostream>
#include<algorithm>
#include<vector>
#include<limits.h>
using namespace std;
#define ll long long

int equalArr(vector<ll>vec){
    ll n = vec.size();

    //to copy the vector ito another vector 
    vector<ll> brr(vec.begin(), vec.end());
    std::sort(brr.begin(), brr.end());

    if(brr[0] == brr[n-1])
        return 1;

    return 0;
}

int main(){
    ll t;
    cin >> t;

    while(t--){
        ll n, k;
        cin >> n >> k;
        vector<ll> vec(n);

        for (ll i = 0; i < n; i++){
            cin >> vec[i];
        }

        vector<ll> index(n);
        for (ll i = 0; i < n; i++){
            index[i] = i + 1;
        }

        if(equalArr(vec)){
            for (ll j = 1; j <= n; j++){
                cout << j << " ";
            }
        }

        else{
            while(!vec.empty()){
                auto max_it = std::max_element(vec.begin(), vec.end());
                ll max_index = std::distance(vec.begin(), max_it);

                vec[max_index] -= k;
                //we found the maximum index and now reducing the value by k and then deleting that element both from the main vec and from the index too

                if(vec[max_index] <= 0){

                    cout << index[max_index] << " ";

                    vec.erase(vec.begin() + max_index);
                    index.erase(index.begin() + max_index);
                }
            }
        }
        cout << endl;
    }
}