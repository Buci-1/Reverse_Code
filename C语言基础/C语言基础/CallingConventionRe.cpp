#include <stdio.h>

/*
第一个函数
push 7,push 6,push 4
mov edx,3 
mov ecx,1
*/

int __stdcall Plus2(int a, int b, int c) {
	return a + b + c;
}

int Plus3(int a, int b) {
	return a + b;
}

int __fastcall Plus1(int a, int b, int c, int d,int e) {
	//e=7,d=6,c=4,b=3,a=1
	//push eax,push ecx,push edx
	//eax = 4 ,ecx = 3,edx = 1
	int plus2 = Plus2(a, b, c);
	//mov ebp-0xc,eax  plus2的返回值存入局部变量
	//push ecx的值 push edx
	int plus3 = Plus3(a, b);

	return Plus3(plus2,plus3);
	

}
/*
int main() {
	int plus1 = Plus1(1, 3, 4, 6, 7);
}
*/