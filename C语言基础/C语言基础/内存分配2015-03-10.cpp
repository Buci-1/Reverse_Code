#include<stdio.h>
#include<malloc.h>
#include <wchar.h>

int main() {
	FILE* fp;
	int len;
	fp = fopen("C:\\Users\\13907\Desktop\\新建文件夹\\BabySnake_2\\snake\\Snake.exe", "w");
	fseek(fp, 0, SEEK_END);
	len = ftell(fp);
	fseek(fp, 0, SEEK_SET);

	int* ptr;
	ptr = (int*)malloc(len);
	if (ptr == NULL) {
		return 0;
	}
	
	memset(ptr, *(int*)fp, len);
	printf("X", ptr);
	free(ptr);
	ptr = NULL;
	fclose(fp);
	
}