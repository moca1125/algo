// 2024/06/15
//ポインタと配列，その引数
// AC

/*
int型の配列の中身を昇順に整列する関数sort()を作成
せよ．また，動作を確認するmain関数も作成すること．
・関数sort()の定義は以下の通りとする．
・void sort( int arr[], int len )
・第一引数：整列対象の配列の先頭アドレス
・第二引数：整列対象の配列の要素数
*/
#include <iostream>
#include <vector>
using namespace std;

void sort(vector<int> &arr, int len)
{
    int tmp;
    for (int j = 0; j < len; j++)
    {
        for (int i = 0; i < len - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
            }
        }
    }
}

int main()
{
    vector<int> arr = {100, 12, 200, 3, 7, 150, 1, 300};

    cout << "初期状態の配列" << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << "arr[" << i << "]=" << arr[i] << endl;
    }

    sort(arr, arr.size());
    // sort(arr.bigin(),arr.end()); #include<algorithm>

    cout << "ソート後の配列" << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << "arr[" << i << "]=" << arr[i] << endl;
    }
}