#include<stdio.h>
#include<string.h>

//1��char����ռ���ֽڣ�char * ����ռ���ֽڣ�int *****ռ���ֽڣ�
//char����ռ1�ֽڣ�char *ռ4�ֽڣ�int *****

//2��char** arr[10] ռ���ٸ��ֽڣ�
//40�ֽ�

struct Student {
	int x;
	int y;
};


void Stu1() {
	Student*** s;			//4�ֽ� 
	s = (Student***)100;	
	s++;					//104	һ��*//108
	printf("%d\n", s);
	s = (Student***)100;
	s = s + 2;				//108	һ��*//116
	printf("%d\n", s);
	s = (Student***)100;
	s = s - 3;				//88	һ��*//76
	printf("%d\n", s);

}
//��ʽ:
	//�ӷ�:��*���ͱ��� + N  =  ��*���ͱ��� + N*(��)(ȥ��һ��*�����͵Ŀ��)
	//����:��*���ͱ��� - N  =  ��*���ͱ��� - N*(��)(ȥ��һ��*�����͵Ŀ��)

void Stu22() {
	Student**** s1;
	Student**** s2;
	int x;
	s1 = (Student****)200;
	s2 = (Student****)100;
	x = s1 - s2;			//(200-100)/4(ȥ��һ��*�Ŀ��) = 100/4 =25
	printf("%d", x);
}

void Stu33() {
	Student* s;			//8�ֽ�
	s = (Student*)100;
	s++;				//108
	s = s + 2;			//116
	s = s - 3;			//76
}


void Stu44() {
	Student* s1;
	Student* s2;
	int x;
	s1 = (Student*)200;
	s2 = (Student*)100;
	x = s1 - s2;		//12
	printf("%d", x);
}

void Stu55() {
	float*** x;
	x = (float***)100;
	printf("%d", x);

}


/*
int main() {
	//
}
*/


