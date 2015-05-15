#include <stdio.h>

float add (float x, float y);
float subtract(float x, float y);
float multiply(float x, float y);
//float divide(float x, float y);
float domath(float (*mathop) (float, float), float x, float y);

float add(float x, float y){
	return x + y;
}

float subtract(float x, float y){
	return x - y;
}

float multiply(float x, float y){
	return x * y;
}

/*float divide(float x, float y){
	return divide x / y;
}*/

float domath(float (*mathop) (float, float), float x, float y){
	return (*mathop) (x, y);
}

void getOp(char *op){
}

void getNum(float *a, float *b){
	printf("Input number a: ");
	scanf("%f", a);
	printf("\nInput number b: ");
	scanf("%f", b);
	printf("\n");
}

int main(void){

	float a,b;
	char op;
	getNum(&a, &b);
	getOp(&op);
	printf("%f\n", a);
	printf("%f\n", b);

	return 0;
////////float a = domath(add, 10, 2);
////////printf("10 + 2 gives: %d\n", a);
////////float b = domath(subtract, 10, 2);
////////printf("10 - 2 gives: %d\n", b);
}
