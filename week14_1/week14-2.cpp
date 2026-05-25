///week14-2.cpp 了解函式
#include <stdio.h>

int f1(int x, int y)
{
    printf("f1{}函式吃到參數 x:%d y:%d\n",x ,y);
    x = x + 10;
    printf("f1{}函式裡面修改後 x:%d y:%d\n",x ,y);
}

int main()///定義 main ()函式
{
    printf("Hello World\n");///函式的呼叫
    int x = 100, y=200;
    printf("main()函式裡,原本 x:%d y:%d\n",x,y);
    f1(x,y);///呼叫f1()函式,裡面動的跟外面無關
    printf("main()函式裡,現在 x:%d y:%d\n",x,y);
    return 0;///以前沒寫但應該要
}
