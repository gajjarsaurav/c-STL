#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;

    for(int i=0; i<10; i++){
        v.push_back(i);
    }

    //  using random shuffle 
    random_shuffle(v.begin(), v.end());
    for(auto it = v.begin(); it < v.end(); it++){
        cout<<" "<<*it;
    }
    return 0;
}