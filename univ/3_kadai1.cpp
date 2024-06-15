// 2024/06/15
// ポインタと配列，その引数
// 自力AC
#include <iostream>
using namespace std;

void add_sub_mul(const int *a, const int *b, int *p_add, int *p_sub, int *p_mul)
{
    *p_add = *a + *b;
    *p_sub = *a - *b;
    *p_mul = *a * *b;
}

int main()
{
    int a, b, p_add = 0, p_sub = 0, p_mul = 0;
    cin >> a >> b;

    cout << "計算前" << endl;
    cout << "a=" << a << ", b=" << b << endl;
    cout << "a+b=" << p_add << ", a-b=" << p_sub << ", a*b=" << p_mul << endl;

    add_sub_mul(&a, &b, &p_add, &p_sub, &p_mul);

    cout << "計算後" << endl;
    cout << "a=" << a << ", b=" << b << endl;
    cout << "a+b=" << p_add << ", a-b=" << p_sub << ", a*b=" << p_mul << endl;
}