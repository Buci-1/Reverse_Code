#include "PE.h"

LPVOID ReadPEFile(LPSTR lpszFile) {
	FILE* pFile = NULL;
	DWORD fileSize = 0;
	LPVOID pFileBuffer = NULL;

	//���ļ�
	pFile = fopen(lpszFile, "rb");
	if (!pFile) {
		printf("�޷���EXE�ļ�! ");
		return NULL;
	}

	//��ȡ�ļ���С
	fseek(pFile, 0, SEEK_END);
	fileSize = ftell(pFile);
	fseek(pFile, 0, SEEK_SET);
	//���仺����
	pFileBuffer = malloc(fileSize);
	
	if (!pFileBuffer) {
		printf("����ռ�ʧ�ܣ�");
		fclose(pFile);
		return NULL;
	}
	//���ļ���ȡ��������
	size_t n = fread(pFileBuffer, fileSize, 1, pFile);
	if (!n) {
		printf("��ȡ����ʧ��! ");
		free(pFileBuffer);
		fclose(pFile);
		return NULL;
	}
	//�ر��ļ�
	fclose(pFile);
	return pFileBuffer;
}


VOID PrintNTHeaders() {
	LPVOID pFileBuffer = NULL;
	PIMAGE_DOS_HEADER pDosHeader = NULL;

}