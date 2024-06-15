// 2024/06/16
//

// このようにあらかじめ定義されている者に関しては，forループで値渡し
// をしなくても良い
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <vector>
#include <algorithm>

typedef struct Car
{
    float fuel; // 燃料の残量(L)
    float fe;   // 燃費(km/l)
} Car;

void Show(Car kuruma[3])
{
    for (int i = 0; i < 3; i++)
    {
        printf("Car[%d]:fuel:%.2f[L],fe:%.2f[km/L]\n", i, kuruma[i].fuel, kuruma[i].fe);
    }
}

int main(void)
{
    Car kuruma[3] = {0, 0, 0};

    kuruma[0].fuel = 35.0;
    kuruma[1].fuel = 30.0;
    kuruma[2].fuel = 22.0;
    kuruma[0].fe = 14.0;
    kuruma[1].fe = 18.0;
    kuruma[2].fe = 24.0;

    Show(kuruma);

    return 0;
}