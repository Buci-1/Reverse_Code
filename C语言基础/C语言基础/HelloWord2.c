#include<stdio.h>
void Fun2()
{
	int i;
	int arr[5] = { 0 };

	for (i = 0; i <= 5; i++)
	{
		arr[i] = 0;
		printf("Hello World!\n");
	}
}

/*
int main()
{
	Fun();
	return 0;
}
*/
//此处的Fun2()函数，由于函数调用入栈是从后向前，所以ebp-4 = i ，ebp-0x8--ebp-0x18是arr[5],由于arr[5]的最高下标为4，
//for条件中i<=5,所以当执行到i=5时，循环中的arr[i] = 0，相当于将arr[5],也就是溢出的内存填进去了0.而溢出的内存也正是ebp-4,也是局部变量i的存放地址。
//这就导致了每次程序条件控制i = 5时，i会置零从而导致陷入死循环。