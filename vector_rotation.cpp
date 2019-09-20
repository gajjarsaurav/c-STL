#include <iostream>
#include <conio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v;
    for(int i=1; i<10; i++){
        v.push_back(i);
    }

    //  old vector:
    for(auto it = v.begin(); it < v.end(); it++){
        cout<<" "<<*it;
    }

    //  rotating 3 times
    rotate(v.begin(), v.begin() + 3, v.end());

    //  new vector:
    for(auto it = v.begin(); it < v.end(); it++){
        cout<<" "<<*it;
    }
    return 0;
}