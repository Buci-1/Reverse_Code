#include<stdio.h>

//1������һ��int* arr[5] ���飬��Ϊ���鸳ֵ(ʹ��&).

void ArrPlus() {
	int* arr[5] = {0};
	arr[0] = (int*)1;
	arr[1] = (int*)2;
	arr[2] = (int*)3;
	arr[3] = (int*)4;
	arr[4] = (int*)5;
}

//2������һ���ַ�ָ�����飬�洢���е�C�Ĺؼ���(��������)����ȫ����ӡ����.

char* keywords[] = {
	"auto", "break", "case", "char", "const",
	"continue", "default", "do", "double", "else",
	"enum", "extern", "float", "for", "goto",
	"if", "inline", "int", "long", "register",
	"restrict", "return", "short", "signed", "sizeof",
	"static", "struct", "switch", "typedef", "union",
	"unsigned", "void", "volatile", "while", "_Alignas",
	"_Alignof", "_Atomic", "_Bool", "_Complexv", "_Generic",
	"_Imaginary", "_Noreturn", "_Static_assert", "_Thread_local"
};


void disp_ketwords(char** key) {
	for (int i = 0; i < 32; i++) {
		printf("%s\n", key[i]);
	}
}

/*
int main() {
	disp_ketwords(keywords);
}
*/

//*************************************************************************

//3��������Щ�����У��м���id = 1 level = 8�Ľṹ����Ϣ��

char id[] = {
		0x00,0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x07,0x09,
		0x00,0x20,0x10,0x03,0x03,0x0C,0x00,0x00,0x44,0x00,
		0x00,0x33,0x01,0x00,0x00,0x08,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x02,0x64,0x00,0x00,0x00,0xAA,0x00,
		0x00,0x00,0x64,0x01,0x00,0x00,0x00,0x08,0x00,0x00,
		0x00,0x00,0x02,0x00,0x74,0x0F,0x41,0x00,0x00,0x00,
		0x01,0x00,0x00,0x00,0x05,0x00,0x00,0x00,0x0A,0x00,
		0x00,0x02,0x57,0x4F,0x57,0x00,0x06,0x08,0x00,0x00,
		0x00,0x00,0x00,0x64,0x00,0x0F,0x00,0x00,0x0D,0x00,
		0x00,0x00,0x23,0x00,0x00,0x64,0x00,0x00,0x64,0x00
};

//�ṹ��
typedef struct TagPlayer
{
	int id;
	int level;
}Player;

int len = sizeof(id) / 1;

void sf(int len,char* id) {
	Player play;	//�����ṹ��
	play.id = 1;	//Ϊ�ṹ�帳ֵ
	play.level = 8;
	Player* pPlay = &play;	//�����ṹ��ָ�벢��ָ��ṹ����׵�ַ
	int Sum1 = 0,Sum2 = 0;
	for (int i = 0; i < len; i++) {	
		int* qid = (int*)(id+i);			//��ַÿ�μ�1��תΪint*����
		if (*qid == pPlay->id) {			//�ж��Ƿ���id = 1
			Sum1++;
		}
		if (*qid == pPlay->level) {			//�ж��Ƿ���level = 8
			Sum2++;
		}
	}
	printf("%d %d", Sum1,Sum2);	


}

/*
int main() {
	sf(len, id);
}
*/