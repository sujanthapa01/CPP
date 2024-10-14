#include <iostream>
using namespace std;

int main()
{
    int nums[] = {1, 3, 5, 6};
    int target = 2;
    int size = sizeof(nums) / sizeof(nums[0]);
    int index = size;

    for (int i = 0; i < size; i++){
        if (nums[i] == target){
            index = i;
            break;
     }else if (nums[i] > target){
            index = i;
            break;
        }
    }

cout<< index;
    return 0;
}

// target = 5  output = 2
// target = 2  output = 1
// target = 7  output = 4