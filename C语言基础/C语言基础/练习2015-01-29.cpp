#include<stdio.h>
//1��������������ֵ����.
void swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

//2����һ�������е����������.
void reverseArray() {
    int size[10] = { 0,1,2,3,4,5,6,7,8,9 };
    for (int i = 9; i >= 0; i--) {
        printf("%d\n", size[i]);
    }
}

//3���ҳ�������������ֵ��������
int MaxArray() {
    int size[10] = { 0,1,2,3,4,5,6,7,8,9 };
    int Max = size[0];
    for (int i = 1; i < 10; i++) {
        if (i > Max) {
            Max = size[i];
        }
    }
    return Max;
}

//4�����������е�Ԫ����ӣ����������
void SumArray() {
    int size[10] = { 0,1,2,3,4,5,6,7,8,9 };
    int Sum = 0, i = 0;
    do {
        Sum += size[i];
        i++;
    } while (i < 10);
    printf("out:%d\n", Sum);
}

//5���������ȳ�������ͬλ�õ�ֵ��ӣ��洢������һ���ȳ���������
void CopySumArray() {
    int size1[10] = { 0,1,2,3,4,5,6,7,8,9 };
    int size2[10] = { 0,1,2,3,4,5,6,7,8,9 };
    int Sum[10] = { 0 };
    int i = 0;
    do {
        Sum[i] = size1[i] + size2[i];
        i++;
    } while (i < 10);
    for (i = 0; i < 10; i++) {
        printf("%d\n", Sum[i]);
    }
}

//6��дһ������int prime(int x)�����x����������ֵΪ1�����򷵻�0��
int prime(int x) {
    int y = x;
    int Sum = 0;
    do {
        if (x%y == 0 ) {
            Sum++;
        }
        y--;
    } while (y != 0);
      return Sum == 2 ? 1: 0;
}

//7�������Ƚ������ֵ��������һ���洢����������һ��λ�� 
void put_max_to_end() {
    int size[10] = { 1,2,4,6,9,2,3,5,1,2 };
    int Max = 0;
    int i = 1;
    while (i < 10) {
        if (size[i] < size[i-1]) {
            Max = size[i];
            size[i] = size[i - 1];
            size[i-1] = Max;
        }
        i++;
    }
    printf("%d\n", size[9]);
}

//8����д����ʵ��һ��ð��������㷨.
void bubble_sort(int arr[],int len) {
    int i,j,temp;
    for (i = 0; i < len - 1; i++) {
        for (j = 0; j < len - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                arr[j] = arr[j] + arr[j + 1];
                arr[j + 1] = arr[j] - arr[j + 1];
                arr[j] = arr[j] - arr[j + 1];
                //temp = arr[j];
				//arr[j] = arr[j + 1];
				//arr[j+1] = temp;
			}
        }
    }
    for (i = 0; i < 10; i++) {
        printf("%d\n", arr[i]);
    }
}

//1���ж������Ƿ��ǶԳƵģ�����Ƿ���1�����Ƿ���0.
int is_symmectric() {
    int size[10] = { 1,2,3,4,5,5,4,3,2,1 };
    for (int i = 0, j = 9; i < 5; i++, j--) {
        if (size[i] != size[j]) {
            return 0;
        }
    }
    return 1;
}
/*
int main() {
    printf("%d\n,",is_symmectric());
}
*/

