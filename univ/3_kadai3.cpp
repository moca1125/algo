// 2024/06/15
// ポインタと配列，その引数
// 自力AC

/*
2つのint型の値を交換する関数swap()を作成せよ．また，
動作を確認するmain関数も作成すること．
*/

#include <iostream>
using namespace std;

/*
c++には#include<utility>にstd::swap関数が定義されている．
#include<algorithm>でも出来る(?)
 */

void swap(int *x, int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

int main()
{
    int x, y;
    cin >> x >> y;
    cout << "最初" << endl;
    cout << "x: " << x << ", y; " << y << endl;
    swap(&x, &y);
    cout << "最後" << endl;
    cout << "x: " << x << ", y; " << y << endl;
}