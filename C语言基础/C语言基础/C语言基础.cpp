#include <iostream>

/*
int __declspec(naked) Plus(int x, int y, int z) {
    __asm{
        push ebp
        mov ebp,esp
        sub esp,0x40
        push ebx
        push edi
        push esi
        lea edi,ptr ds:[ebp-0x40]
        mov eax,0xcccccccc
        rep stosd
        mov ptr dword [ebp-4],2
        mov ptr dword [ebp-8],3
        mov ptr dword [ebp-0c],4
        mov eax,dword ptr ebp+8
        add eax,dword ptr ebp+c
        add eax,dword ptr ebp-4
        add eax,dword ptr ebp-8
        add eax,dword ptr ebp-c
        pop esi
        pop edi
        pop ebx
        add esp,0x40
        ret


    }
}

*/


int Plus1(int x, int y,int z) {
    int a = 2;
    int b = 3;
    int c = 4;
    return x + y + a + b + c;
}
