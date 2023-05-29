#include<stdio.h>

/*
int Sum;
void Re_if(int x, int y) {
	int Sum2 = Sum;
	
	if (x <= y) {
		Sum = y + Sum2;
	}
}


int main() {
	Re_if(4, 5);
}


int Sum;
void Re_two(int x,int y) {
	int a = Sum;
	int b = 2;
	if (x>=y) {
		b++;
	}
	if (x < y) {
		Sum = b;
	}
	else {
		Sum = a + b;
	}
}

int main() {
	Re_two(4, 5);
	return 0;
}
*/

int Re_three(int x, int y, int z) {
	int a = 0, b = 1, c = 2;
	if (x<=y) {
		a=b-1;
	}
	else {
		if(y>=z){
			a = c++;
		}
		else {
			if (x>z) {
				a = b + c;
			}
			else {
				a = b + c - 1;
			}
		}
	}
	return a+1;
}

int main() {
	Re_three(4, 5, 6);
	return 0;
}