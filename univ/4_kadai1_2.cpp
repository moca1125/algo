// 2024/05/15
//
#include <iostream>
#include <vector> //strcpy はこれ
#include <cstring>
#include <string>
using namespace std;

//<-------------------------->
// ポインタ渡し
typedef struct Menu
{
    string name; // 名前
    int price;   // 価格
    float cal;   // カロリー
} Menu;

// ポインタ渡し
void show(Menu *menu) // menu[]でも一緒 関数内では*付けずに記述OK
{                     // 配列をポインタで渡す→ 型 *変数名
    for (int i = 0; i < 3; i++)
    {
        cout << "名前：" << menu[i].name << endl;
        cout << "価格[円]：" << menu[i].price << endl;
        cout << "カロリー[kcal]：" << menu[i].cal << endl;
    }
}

int main()
{

    Menu menu[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> menu[i].name >> menu[i].price >> menu[i].cal;
    }
    show(menu);
}

//<-------------------------------->
// 値渡し

// void show(Menu menu) // Menu型のオブジェクトを値渡しする
// {
//     cout << "名前：" << menu.name << endl;
//     cout << "価格[円]：" << menu.price << endl;
//     cout << "カロリー[kcal]：" << menu.cal << endl;
// }

// int main()
// {
//     Menu menu[3];
//     for (int i = 0; i < 3; i++)
//     {
//         cin >> menu[i].name >> menu[i].price >> menu[i].cal;
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         show(menu[i]); // 各要素を値渡しする
//     }
// }

//<------------------------->
// // ポインタ渡し アロー演算子で試してみた　-----> 出来ない　先頭しかみない

// void show(Menu *menu) // menu[]でも一緒 関数内では*付けずに記述OK
// {                     // 配列をポインタで渡す→ 型 *変数名
//     for (int i = 0; i < 3; i++)
//     {
//         cout << "名前：" << menu->name << endl;
//         cout << "価格[円]：" << menu->price << endl;
//         cout << "カロリー[kcal]：" << menu->cal << endl;
//     }
// }

// int main()
// {

//     Menu menu[3];
//     for (int i = 0; i < 3; i++)
//     {
//         cin >> menu[i].name >> menu[i].price >> menu[i].cal;
//     }
//     show(menu);
// }