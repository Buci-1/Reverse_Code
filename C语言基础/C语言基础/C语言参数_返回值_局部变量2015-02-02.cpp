#include<stdio.h>


//1������ֵ����32λʱ�����������long long(__int64)������ʵ��
__int64 Function()
{
    __int64 x = 0x1234567890;
    return x;
}

//2��char arr[3] = {1,2,3};�� char arr[4] = {1,2,3,4};�ĸ�����ʡ�ռ䣬�ӷ����ĽǶ���˵����Ĺ۵�
void cmp() {
	//char arr1[3] = { 1,2,3 };
	char arr2[4] = { 1,2,3,4 };
	int arr3[4] = { 1,2,3,4 };
}


//3���ҳ����渳ֵ���̵ķ�������
void Function2()
{
	int x = 1;
	int y = 2;
	int r;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	r = arr[1];
	r = arr[x];
	r = arr[x + y];
	r = arr[x * 2 + y];
}

//4.Ͱ����
void bucket_sort() {
	int size[10] = { 1,4,7,2,5,7,8,9,6,1 };
	int Size2[10] = { 0 };
	int i = 0, j = 0,t = 0;
	for (i = 0; i < 10; i++) {
		Size2[size[i]]++;
	}
	for (j = 0; j < 10; j++) {
		if (Size2[j] > 0) {
			t = Size2[j];
			while (t > 0) {
				printf("%d ", j);
				t--;
			}
		}
	}

	
}




/*
int main() {
   bucket_sort();
}
*/


