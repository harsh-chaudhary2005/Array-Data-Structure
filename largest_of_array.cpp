#include<iostream>
using namespace std;
int main(){
  int nums[] = {23, 34, 54, 56, 67, 101};
  int size = 6;
  int largest = 0;
  for (int i = 0; i < size; i++)
  {
    if (nums[i] > largest)
    {
        largest = nums[i];
    }
    
  }
  cout << "largest = " << largest << endl;
  return 0;
}