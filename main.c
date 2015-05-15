#include <stdio.h>

int add (int x, int y);
int subtract(int x, int y);
int domath(int (*mathop) (int, int), int x, int y);

int add(int x, int y){
	return x + y;
}

int subtract(int x, int y){
	return x - y;
}

int domath(int (*mathop) (int, int), int x, int y){
	return (*mathop) (x, y);
}

int main(){
	int a = domath(add, 10, 2);
	printf("10 + 2 gives: %d\n", a);
	int b = domath(subtract, 10, 2);
	printf("10 - 2 gives: %d\n", b);
	return 0;
}
