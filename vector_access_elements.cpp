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
    //  vector::at()
    vector<int> v;
    for(int i=0; i < 9; i++){
        v.push_back(i);
    }
    cout << endl << v.at(5);

    //  for swapping vectors
    v1.resize(1);
    v1.swap(v2);
    // printing the first vector 
    cout << endl << "v1 = "; 
    for (auto it = v1.begin(); it < v1.end(); ++it) 
        cout << *it << " "; 
  
    // printing the second vector 
    cout << endl << "v2 = "; 
    for (auto it = v2.begin(); it < v2.end(); ++it) 
        cout << *it << " "; 

    return 0; 
} 
