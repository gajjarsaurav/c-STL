#include <iostream>
#include <curses.h>
#include <algorithm>
using namespace std;
int main(){
  int ar[] = {1,3,6,7,9,3,5,4,6,9,8};
  int n = sizeof(ar) / sizeof(ar[0]);
  //  for implementing binary search on any array, we need to sort it first
  cout<<"sorted array: "<<endl;
  sort(ar, ar + n);
  for(int i = 0; i < n; i++){
    cout<<ar[i];
  }
  //   now we can implement binary search in ana array to find required element
  if(binary_search(ar, ar + n, 3)){   //  in binary search we need to specify one extra arg., which specifies element to be searched
    cout<<endl<<"element exists";
  }
}
