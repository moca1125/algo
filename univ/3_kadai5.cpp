// 2024/06/15
//
#include <iostream>
#include <vector>
using namespace std;

void sqare(vector<int> &arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        arr[i] *= arr[i];
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    cout << "初期状態の配列" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "arr[" << i << "]=" << arr[i] << endl;
    }

    sqare(arr, arr.size());
    // sqare(arr.bigin(),arr.end()); #include<algorithm>

    cout << "2乗後の配列" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "arr[" << i << "]=" << arr[i] << endl;
    }
}