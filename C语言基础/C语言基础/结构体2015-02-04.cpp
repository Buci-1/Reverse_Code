#include<stdio.h>
#include<string.h>

//1������һ���ṹ��Gamer�����洢һ����Ϸ�еĽ�ɫ����Ϣ������Ѫֵ���ȼ����������Ϣ
    //(1) ���������Щ��Ϣ�������
    //(2) ����Щ�����������У�����Ҫ��һ����Ա�ǽṹ������

struct Position
{
    int x;
    int y;
};

struct Game
{
    char name[20]; //����
    int level;  //�ȼ�
    int exp;  //����
    int hp;  //Ѫ��
    int mp;  //��
    Position xy;  //����

};

Game x;
//2������һ������������������ṹ�������ֵ.
void setGame() {
    char name1[] = "sa";
    strcpy(x.name, name1);
    x.level = 100;
    x.exp = 56789;
    x.hp = 99;
    x.mp = 1000;
    x.xy.x = 1;
    x.xy.y = 2;
}

//3������һ��������������ʾ����ṹ����������г�Ա��Ϣ.
void disp() {
    printf("%d %d %d %d %d %d", x.level, x.exp, x.hp, x.mp, x.xy.x, x.xy.y);
}


int main() {
    setGame();
    disp();
}



