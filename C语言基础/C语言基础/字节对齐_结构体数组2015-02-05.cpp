#include<stdio.h>
#include<string.h>

//
struct aa {
	char arr[10];
} AA;
//通过gb2312编码显示中文
/*
int main() {
	//strcpy(AA.arr, "中国");  //  \xd6\xd0   \xb9\xfa
	AA.arr[0] = 0xd6;
	AA.arr[1] = 0xd0;
	AA.arr[2] = 0xb9;
	AA.arr[3] = 0xfa;
	AA.arr[4] = '\0';
	printf("%s", AA.arr);
}
*/

struct xy
{
	int x;
	int y;
};

//1、定义一个结构体Monster，能够存储怪的各种信息(至少有一个成员是结构体类型)。
struct Monster {
	char id;
	xy xy1;
	int hp;
	int mp;
};

Monster arr[10];

void setarr() {
	for (int i = 0; i < 10; i++) {
		arr[i].id = i;
		arr[i].xy1.x = i;
		arr[i].xy1.y = i + 1;
		arr[i].hp = 100;
		arr[i].mp = 100;
	}
}

//4、编写一个函数，能够通过怪物ID，打印当前这个怪物的所有信息.

void disp1() {
	for (int i = 0; i < 10; i++) {
		printf("%d %d %d %d %d\n ",arr[i].id, arr[i].xy1.x, arr[i].xy1.y, arr[i].hp, arr[i].mp);
	}
}


//计算内存分配：字节对齐默认:8
struct S1
{
	char c;
	double i;
};
//16

struct S4
{
	int c1;
	char c2[10];
};
//
struct S3
{
	char c1;
	S1 s;
	char c2;
	char c3;
};
//
struct S5
{
	char c1;
	S1 s;
	char c2;
	double c3;
};

//递归反汇编
int fibonacci(int n)
{
	if (n == 0) {  // 基本情况1
		return 0;
	}
	else if (n == 1) {  // 基本情况2
		return 1;
	}
	else {  // 递归调用
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}
/*
int main() {
	fibonacci(100);
}

*/

