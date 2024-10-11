#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int val = 1, count = 8;
    vector<int> arr;

    for (int i = 0; i < count; i++) {
        if (i == 0 || i == 1) {
            arr.push_back(val);
        } else {
            int newVal = arr[i-1] + arr[i-2];
            arr.push_back(newVal);
        }

        cout << arr[i] << " ";
    }

    return 0;
}
