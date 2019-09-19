#include <iostream> 
#include <vector>
#include <curses.h>
using namespace std;
int main(){
//  addition in vector
int sum = 0;
    vector<int> v1{1, 2, 3, 4, 5};
    while(v1.size() > 0){
        sum += v1.back();
        v1.pop_back();
    }
    cout<<sum;
//  for displaying the max size
    cout<<v1.max_size();
    return 0;
}
