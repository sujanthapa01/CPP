#include <iostream>
using namespace std;

void CheckArr(int arr[], int size, int userNum)
{
  for (int i = 0; i < size; i++)
  {
    bool found = false;
    if (userNum == arr[i])
    {
      found = true;
      cout << arr[i] << "------> index no ---- > " << i;
      break;
    }
    if (!found)
    {
      cout << "unmatched number";
      break;
    }
  }
}

int main()
{

  int arr[] = {12, 4, 2, 5, 1};
  int size = sizeof(arr) / sizeof(arr[0]);
  int userNum;

  cin >> userNum;
  CheckArr(arr, size, userNum);

  return 0;
}
