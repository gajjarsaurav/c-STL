#include <iostream> 
#include <vector>
#include <conio.h> 
using namespace std; 
  
int main() 
{   
    //  vector::operator '='
    vector<int> v1{ 1, 2, 3 }; 
    vector<int> v2{ 3, 2, 1, 4 }; 
    v1 = v2; 
    cout << "v1 = "; 
    for (auto it = v1.begin(); it != v1.end(); ++it) 
        cout << ' ' << *it; 

    //  vector::operator '[]'
    //  used for referencing the element specified in the operator
    return 0; 
} 
