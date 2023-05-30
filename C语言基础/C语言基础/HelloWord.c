#include <stdio.h>

void HelloWord()
{
    printf("Hello World");
    getchar();
}

void Fun()
{
    int arr[5] = { 1,2,3,4,5 };
    arr[6] = (int)HelloWord;
}
/*
int main() {
    Fun();
    return 0;
}
*/
//在Fun()程序内部，分配数组空间分别是 ebp-0x4.0x8.0xc,0x10,0x14,当arr[6]入栈的时候，由于缓冲区溢出，变成了mov dword ptr ebp+4,HelloWord
//直接覆盖率Fun()函数的返回地址，导致返回到了HelloWord函数中，执行HelloWord中的功能。