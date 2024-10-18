#include <iostream>
using namespace std;
int main()
{

    int arr[] = {7, 1, 5, 3, 6, 4};
    // int arr[] = {7,6,4,3,1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int best_buy = arr[0];
    int max_profit = 0;

    int i = 0;
    for (int i = 0; i < size; i++)
    {
        if (max_profit < arr[i])
        {
            max_profit = max(max_profit, arr[i] - best_buy);
        }

        best_buy = min(best_buy, arr[i]);
    }

    cout << "best buy = " << best_buy << endl
         << "max profit = " << max_profit << " ";
}

// Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
// Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

// CASE 1
//  prices = [7,1,5,3,6,4]

// CASE 2
// prices = [7,6,4,3,1]