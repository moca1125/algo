// 2024///06/14
// 自力AC
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    for (int j = 1; j <= 9; j++)
    {
        for (int i = 1; i <= 9; i++)
        {
            cout << setw(4) << i * j;
        }
        cout << endl;
    }
}