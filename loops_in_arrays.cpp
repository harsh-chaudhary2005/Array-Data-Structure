#include<iostream>
#include<climits>
using namespace std;
int main(){
  int nums[] = {5, 25, 24, 39, -2, 10};
  int size = 6;
  int smallest = INT_MAX ;
  for (int i = 0; i < size; i++)
  {
    if (nums[i]< smallest)
    {
        smallest = nums[i];
    }
    
  }
  cout << "smallest = " << smallest<< endl;
  return 0;
}