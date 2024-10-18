#include <iostream>
using namespace std;

int main()
{
    int nums[] = {7, 3, 5, 2, 8, 7, 5};
    int size = sizeof(nums) / sizeof(nums[0]);

    for (int i = 0; i < size - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
                swapped = true;
            }
        }

        if (!swapped)
        {
            break;
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    // Print the second largest number
    cout << nums[1] << " is the second largest number" << endl;

    return 0;
}
