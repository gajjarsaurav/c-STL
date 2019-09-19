#include <iostream> 
#include <vector>
#include <curses.h>
using namespace std;
int main(){
//  begin points to first element of vector container
    vector<int> vec{1, 2, 3, 4, 5};
    for(auto it = vec.begin(); it != vec.end(); it++){
        cout<<" "<<*it;
    }

//  reverse begin and reverse end function
    vector<string> v;
    v.push_back(" this ");
    v.push_back("is");
    v.push_back(" saurabh ");
    for(auto it2 = v.rbegin(); it2 != v.rend(); it2++){
        cout<<" "<<*it2;
    }
    return 0;
}