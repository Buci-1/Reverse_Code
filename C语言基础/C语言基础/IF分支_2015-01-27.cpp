#include<stdio.h>
#include<string.h>
#include<stdlib.h>
// 1������4��int���͵�ȫ�ֱ������ֱ���g_x, g_y, g_z, g_r, ʹ��if..else..��֧��䣬������ֵ�洢��g_r��

int g_x = 5;
int g_y = 4;
int g_z = 7;
int g_r = 0;

void Max() {
	if (g_x > g_y) {
		if (g_x > g_z) {
			g_r = g_x;
		}
		else {
			g_r = g_z;
		}
	}
	else {
		if (g_y > g_z) {
			g_r = g_y;
		}
		else {
			g_r = g_z;
		}
	}
}

//2���ҳ�������������ֵ�����洢��ȫ�ֱ�����(if..esle����wile)

int arr[4] = {2,5,7,9};

void Max2() {
	int i = 1;
	g_r = arr[0];
	while (i < 4) {
		if (arr[i] > g_r) {
			g_r = arr[i];
		}
		i++;
	}
	printf("max:%d\n",g_r);
}

//3�����������е�Ԫ����ӣ�������洢��g_r��

void ArrMax() {
	int arr2[10] = { 2,5,7,9,22,4,8,22,3,18 };
	int g_r = 0;
	int i = 0;
		while (i < 9) {
			g_r += arr2[i];
		}
		printf("ArrMax:%d\n", g_r);
}

//4�������Ƚ������ֵ��������һ���洢����������һ��λ��(Ҫ��ʹ��forѭ��ʵ��)

void ArrMax2() {
	int arr2[10] = { 2,7,5,9,22,4,8,22,3,18 };
	int g_r = 0;
	for (int i = 1; i < 10; ++i) {
		if (arr2[i] < arr2[i - 1]) {			
			g_r = arr2[i];
			arr2[i] = arr2[i - 1];
			arr2[i - 1] = g_r;
		}
	}
	printf("max:%d\n", arr2[9]);
}

//5����һ���ַ����������ģ�china�й�verygood�쳯nice,����Ⱥ��������ֺ���Ӣ�ģ����дһ���������ܽ�ȡ���ⳤ�ȵ��ַ���n(n<=�ܳ���) ;fn(1)=c


void getSubstring(int n) {
	int i = 0, j = 0;
	char str[] = "china�й�verygood�쳯nice";

	while (i < strlen(str) && j < n) {
		if ((str[i] & 0x80) != 0) {       //�ж������ַ�����Ӣ���ַ�
			i += 2;    
		}
		else {
			i += 1;
		}
		j += 1;
	}
	if (j == n && (i % 2) == 1) {
		i -= 1;
	}
	str[i] = '\0';
	printf("%s\n", str);
}

/*
int main() {  
	int n=6;
	getSubstring(n);
	return 0;
}

*/




