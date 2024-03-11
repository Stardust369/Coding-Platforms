//SAUCE: https://codeforces.com/problemset/problem/1860/B

                    //MY CODE IS NOT WORKING RIGHT FOR SOME REASON

#include<bits/stdc++.H>
using namespace std;
int main(){
    int t;
    cin >> t;

    while(t--){
        int cost, val, amt1, amtk;
        cin >> cost >> val >> amt1 >> amtk;

        if(cost / val <= amtk){
            if((cost % val) <= amt1){
                cout << "0" << endl;
            }

            else{
                int remainder = (cost % val) - amt1;
                cout << remainder << endl;
            }
        }

        else{
            if((cost - (amtk * val)) <= amt1)
                cout << "0" << endl;

            else{
                int sum = 0;
                sum += (cost - (amtk * val) - amt1);
                cout << (sum/val + (sum % val)) << endl;
            }
        }



        // amt1 -= cost % val;
        // amtk -= cost / val;

        // if(amt1 >= val){
        //     amtk += amt1 / val;
        //     amt1 /= val;
        // }
    
        // cout<<(amt1 < 0 ? -amt1 : 0) + (amtk < 0 ? -amtk : 0) << endl;
    }
}