#include <iostream> 
#include <vector>
#include <curses.h>
using namespace std;
int main(){
//  addition in vector
int sum = 0;
    vector<int> v;
    for(int i=0; i<5; i++){
        v.push_back(i);
    }
    //  contents before resizing
    for(int i = 0; i<v.size(); i++){
        cout<<v[i];
    }
    
    //  resizing
    v.resize(3);
    
    //  contents after resizing
    for(int i = 0; i<v.size(); i++){
        cout<<v[i];
    }
}