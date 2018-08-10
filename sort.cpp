#include <iostream>
#include <curses.h>
#include <algorithm>    //  for using sort
// we're using sort() functionality of c++ STL to sort an array
using namespace std;
int main(){
  int ar[]={1,3,4,6,8,0,4,6,2,9}, n=sizeof(ar)/sizeof(ar[0]);   //  we need to declare a var n and initialise it
  sort(ar, ar+n);     //  passing array and array+n as args.
  cout<<"Array after sorting: ";
  for(int i=0; i<n; i++){
    cout<<ar[i];
  }

  // now to sort that array in a descending order
  sort(ar, ar+n, greater<int>());     //  what greater does is, it basically compares in a way that it puts greater elements before
  cout<<"Array after sorting: ";
  for(int i=0; i<n; i++){
    cout<<ar[i];
  }
  
}
