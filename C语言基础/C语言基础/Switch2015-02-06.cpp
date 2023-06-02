#include<stdio.h>
#include<string.h>
//1��дһ��switch��䣬���������Ҳ������С��������Ӧ�ķ����.

void sw(int x) {
	switch (x) {
	case 1:
		printf("1");
		break;
	case 2:
		printf("2");
		break;
	case 3:
		printf("3");
		break;
	default:
		printf("error");
	}
}

/*
002F29A5  mov         eax,dword ptr [ebp+8]
002F29A8  mov         dword ptr [ebp+FFFFFF3Ch],eax
002F29AE  cmp         dword ptr [ebp+FFFFFF3Ch],1
002F29B5  je          002F29CB
002F29B7  cmp         dword ptr [ebp+FFFFFF3Ch],2
002F29BE  je          002F29DA
002F29C0  cmp         dword ptr [ebp+FFFFFF3Ch],3
002F29C7  je          002F29E9
002F29C9  jmp         002F29F8
	case 1:
		printf("1");
002F29CB  push        2FAB94h
002F29D0  call        002F10F5
002F29D5  add         esp,4
		break;
002F29D8  jmp         002F2A05
	case 2:
		printf("2");
002F29DA  push        2FAC84h
002F29DF  call        002F10F5
002F29E4  add         esp,4
		break;
002F29E7  jmp         002F2A05
	case 3:
		printf("3");
002F29E9  push        2FAB40h
002F29EE  call        002F10F5
002F29F3  add         esp,4
		break;
002F29F6  jmp         002F2A05
	default:
		printf("error");
002F29F8  push        2FAC90h
002F29FD  call        002F10F5
002F2A02  add         esp,4
	}
}
*/
//***********************************************************

//2��дһ��switch��䣬ֻ���ɴ��,������Ӧ�ķ����.
void sw1(int x) {
	switch (x) {
	case 1:
		printf("1");
		break;
	case 2:
		printf("2");
		break;
	case 3:
		printf("3");
		break;
	case 4:
		printf("4");
		break;
	case 5:
		printf("5");
		break;
	case 6:
		printf("6");
		break;
	case 7:
		printf("7");
		break;
	case 8:
		printf("8");
		break;
	default:
		printf("error");
	}
}
/*
005D8065  mov         eax,dword ptr [ebp+8]
005D8068  mov         dword ptr [ebp+FFFFFF3Ch],eax     //����x����ֲ�����
005D806E  mov         ecx,dword ptr [ebp+FFFFFF3Ch]		//������һ(��Ϊ���ĵ�ַ��0��ʼ��������һ��ӵ�0λ��ʼ���)
005D8074  sub         ecx,1
005D8077  mov         dword ptr [ebp+FFFFFF3Ch],ecx		//����1�Ĳ�����ؾֲ�����
005D807D  cmp         dword ptr [ebp+FFFFFF3Ch],7		//��Ϊ����Switch�����ķ�֧Ϊ8������ǰ�����������ֽ�����-1���Ӷ�ֻҪ��������8����ֱ������default
005D8084  ja          005D810F							//��תdefault
005D808A  mov         edx,dword ptr [ebp+FFFFFF3Ch]		
005D8090  jmp         dword ptr [edx*4+005D8130h]       //���
	case 1:
		printf("1");									//�����jmp���ĵ�ַ
005D8097  push        5DAB94h
005D809C  call        005D10F5
005D80A1  add         esp,4
		break;
005D80A4  jmp         005D811C
	case 2:
		printf("2");
005D80A6  push        5DAC84h
005D80AB  call        005D10F5
005D80B0  add         esp,4
		break;
005D80B3  jmp         005D811C
	case 3:
		printf("3");
005D80B5  push        5DAB40h
005D80BA  call        005D10F5
005D80BF  add         esp,4
		break;
005D80C2  jmp         005D811C
	case 4:
		printf("4");
005D80C4  push        5DAC88h
005D80C9  call        005D10F5
005D80CE  add         esp,4
		break;
005D80D1  jmp         005D811C
	case 5:
		printf("5");
005D80D3  push        5DAB5Ch
005D80D8  call        005D10F5
005D80DD  add         esp,4
		break;
005D80E0  jmp         005D811C
	case 6:
		printf("6");
005D80E2  push        5DAB6Ch
005D80E7  call        005D10F5
005D80EC  add         esp,4
		break;
005D80EF  jmp         005D811C
	case 7:
		printf("7");
005D80F1  push        5DAB8Ch
005D80F6  call        005D10F5
005D80FB  add         esp,4
		break;
005D80FE  jmp         005D811C
	case 8:
		printf("8");
005D8100  push        5DABB8h
005D8105  call        005D10F5
005D810A  add         esp,4
		break;
005D810D  jmp         005D811C
	default:
		printf("error");
005D810F  push        5DAC90h
005D8114  call        005D10F5
005D8119  add         esp,4
	}
}
*/
//***********************************************************

//3��дһ��switch��䣬���ɴ���С��, ������Ӧ�ķ����.
void sw2(int x) {
	switch (x) {
	case 1:
		printf("1");
		break;
	case 2:
		printf("2");
		break;
	case 3:
		printf("3");
		break;
	case 10:
		printf("4");
		break;
	case 11:
		printf("5");
		break;
	default:
		printf("error");
	}
}

/*
006829A5  mov         eax,dword ptr [ebp+8]
006829A8  mov         dword ptr [ebp+FFFFFF3Ch],eax
006829AE  mov         ecx,dword ptr [ebp+FFFFFF3Ch]
006829B4  sub         ecx,1
006829B7  mov         dword ptr [ebp+FFFFFF3Ch],ecx
006829BD  cmp         dword ptr [ebp+FFFFFF3Ch],0Ah
006829C4  ja          00682A25							//�Ƚ�����תdefault
006829C6  mov         edx,dword ptr [ebp+FFFFFF3Ch]		//����1�Ĳ�������edx
006829CC  movzx       eax,byte ptr [edx+00682A60h]		//00682A60hΪС��ĵ�ַ�����ǽ����ڴ�����ģ�ȡedx�е�1�ֽڣ���С���鵽��ֵ���в�����չָ�����eax
006829D3  jmp         dword ptr [eax*4+00682A48h]		//eax�б������С���е����ݣ������Ų���
	case 1:
		printf("1");
006829DA  push        68AB94h
006829DF  call        006810F5
006829E4  add         esp,4
		break;
006829E7  jmp         00682A32
	case 2:
		printf("2");
006829E9  push        68AC84h
006829EE  call        006810F5
006829F3  add         esp,4
		break;
006829F6  jmp         00682A32
	case 3:
		printf("3");
006829F8  push        68AB40h
006829FD  call        006810F5
00682A02  add         esp,4
		break;
00682A05  jmp         00682A32
	case 10:
		printf("4");
00682A07  push        68AC88h
00682A0C  call        006810F5
00682A11  add         esp,4
		break;
00682A14  jmp         00682A32
	case 11:
		printf("5");
00682A16  push        68AB5Ch
00682A1B  call        006810F5
00682A20  add         esp,4
		break;
00682A23  jmp         00682A32
	default:
		printf("error");
00682A25  push        68AC90h
00682A2A  call        006810F5
00682A2F  add         esp,4
	}
}
*/
//***********************************************************

//4��Ϊdo..while������ɵķ������дע��.
void do1(int x,int y) {
	do {
		printf("%d", x );
		x++;
	} while (x > y);
}
/*
void do1(int x,int y) {
002A8040  push        ebp
002A8041  mov         ebp,esp
002A8043  sub         esp,0C0h
002A8049  push        ebx
002A804A  push        esi
002A804B  push        edi
002A804C  mov         edi,ebp
002A804E  xor         ecx,ecx
002A8050  mov         eax,0CCCCCCCCh
002A8055  rep stos    dword ptr es:[edi]
002A8057  mov         ecx,2AF0D7h
002A805C  call        002A13CF
	do {
		printf("%d", x );
002A8061  mov         eax,dword ptr [ebp+8]					//��һ��������doѭ���е����
002A8064  push        eax
002A8065  push        2AABD8h
002A806A  call        002A10F5
002A806F  add         esp,8
		x++;
002A8072  mov         eax,dword ptr [ebp+8]					//������1
002A8075  add         eax,1
002A8078  mov         dword ptr [ebp+8],eax
	} while (x > y);
002A807B  mov         eax,dword ptr [ebp+8]					//�����ж�
002A807E  cmp         eax,dword ptr [ebp+0Ch]
002A8081  jg          002A8061								//��ת��ѭ������
}
002A8083  pop         edi
002A8084  pop         esi
002A8085  pop         ebx
002A8086  add         esp,0C0h
002A808C  cmp         ebp,esp
002A808E  call        002A12BC
002A8093  mov         esp,ebp
002A8095  pop         ebp
002A8096  ret
*/

//***********************************************************

//5��Ϊwhile������ɵķ������дע��.
void whil(int x,int y) {
	while (x < y) {
		printf("%d", x);
		x++;
	}

}
/*
void whil(int x,int y) {
00BC1DB0  push        ebp
00BC1DB1  mov         ebp,esp
00BC1DB3  sub         esp,0C0h
00BC1DB9  push        ebx
00BC1DBA  push        esi
00BC1DBB  push        edi
00BC1DBC  mov         edi,ebp
00BC1DBE  xor         ecx,ecx
00BC1DC0  mov         eax,0CCCCCCCCh
00BC1DC5  rep stos    dword ptr es:[edi]
00BC1DC7  mov         ecx,0BCF0D7h
00BC1DCC  call        00BC13CF
	while (x < y) {
00BC1DD1  mov         eax,dword ptr [ebp+8]				//�ж����� <---------
00BC1DD4  cmp         eax,dword ptr [ebp+0Ch]                              |
00BC1DD7  jge         00BC1DF5                                             |
		printf("%d", x);		                                           |
00BC1DD9  mov         eax,dword ptr [ebp+8]				//ִ��ѭ�����      | 
00BC1DDC  push        eax                                                  |
00BC1DDD  push        0BCABD8h                                             |
00BC1DE2  call        00BC10F5                                             |
00BC1DE7  add         esp,8                                                |
		x++;                                                               |
00BC1DEA  mov         eax,dword ptr [ebp+8]                                |
00BC1DED  add         eax,1                                                |
00BC1DF0  mov         dword ptr [ebp+8],eax                                |			
	}                                                                      |
00BC1DF3  jmp         00BC1DD1							//��ת�������ж�----

}
*/
//***********************************************************

//6��Ϊfor������ɵķ������дע��.
void for1(int x) {
	for (int i = 0; i < x; i++) {
		printf("%d", i);
	}
}	
/*
void for1(int x) {
00542980  push        ebp
00542981  mov         ebp,esp
00542983  sub         esp,0CCh
00542989  push        ebx
0054298A  push        esi
0054298B  push        edi
0054298C  lea         edi,[ebp-0Ch]
0054298F  mov         ecx,3
00542994  mov         eax,0CCCCCCCCh
00542999  rep stos    dword ptr es:[edi]
0054299B  mov         ecx,54F0D7h
005429A0  call        005413CF
	for (int i = 0; i < x; i++) {
005429A5  mov         dword ptr [ebp-8],0					//��i����ֵ0
005429AC  jmp         005429B7								//��ת��ѭ�����ڲ�
005429AE  mov         eax,dword ptr [ebp-8]			<--------------------------------------------	
005429B1  add         eax,1																		|
005429B4  mov         dword ptr [ebp-8],eax														|
005429B7  mov         eax,dword ptr [ebp-8]					//�ж��Ƿ����ѭ����					|
005429BA  cmp         eax,dword ptr [ebp+8]														|
005429BD  jge         005429D2																	|
		printf("%d", i);																		|
005429BF  mov         eax,dword ptr [ebp-8]														|
005429C2  push        eax																		|
005429C3  push        54ABD8h																	|
005429C8  call        005410F5																	|
005429CD  add         esp,8																		|
	}																							|
005429D0  jmp         005429AE								//���ر��ʽ3 ��i++  ----------------    
}
*/
/*
int main() {
	for1(5);
}
*/