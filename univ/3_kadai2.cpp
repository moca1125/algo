// 2024/06/15
// ポインタと配列，その引数
// 自力AC
#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr = {21, 17, 43, 51, 61}; // 初期化の方法注意
    cout << "配列の値とアドレスの表示" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "arr[" << i << "] : " << arr[i] << ", " << &arr[i] << endl;
    }
}
