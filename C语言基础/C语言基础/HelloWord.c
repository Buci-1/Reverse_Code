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
//��Fun()�����ڲ�����������ռ�ֱ��� ebp-0x4.0x8.0xc,0x10,0x14,��arr[6]��ջ��ʱ�����ڻ���������������mov dword ptr ebp+4,HelloWord
//ֱ�Ӹ�����Fun()�����ķ��ص�ַ�����·��ص���HelloWord�����У�ִ��HelloWord�еĹ��ܡ�