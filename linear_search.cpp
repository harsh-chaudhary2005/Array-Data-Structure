#include<iostream>
using namespace std;
int linearSearch(int arr[], int sz, int target){
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
        
    }
   return -1; 
}
int main(){
  int arr[] = {2, 3, 4, 12, 78};
  int sz = 5;
  int target = 8;


  cout << "index of target = " <<   linearSearch(arr, sz, target) << endl;
  return 0;
}