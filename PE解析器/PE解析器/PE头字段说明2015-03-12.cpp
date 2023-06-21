#include "PE.h"

LPVOID ReadPEFile(LPSTR lpszFile) {
	FILE* pFile = NULL;
	DWORD fileSize = 0;
	LPVOID pFileBuffer = NULL;

	//打开文件
	pFile = fopen(lpszFile, "rb");
	if (!pFile) {
		printf("无法打开EXE文件! ");
		return NULL;
	}

	//读取文件大小
	fseek(pFile, 0, SEEK_END);
	fileSize = ftell(pFile);
	fseek(pFile, 0, SEEK_SET);
	//分配缓冲区
	pFileBuffer = malloc(fileSize);
	
	if (!pFileBuffer) {
		printf("分配空间失败！");
		fclose(pFile);
		return NULL;
	}
	//将文件读取到缓冲区
	size_t n = fread(pFileBuffer, fileSize, 1, pFile);
	if (!n) {
		printf("读取数据失败! ");
		free(pFileBuffer);
		fclose(pFile);
		return NULL;
	}
	//关闭文件
	fclose(pFile);
	return pFileBuffer;
}


VOID PrintNTHeaders() {
	LPVOID pFileBuffer = NULL;
	PIMAGE_DOS_HEADER pDosHeader = NULL;

}