#include <stdio.h>

float add (float x, float y);
float subtract(float x, float y);
float multiply(float x, float y);
float divide(float x, float y);
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

float divide(float x, float y){
	return x/y;
}

float domath(float (*mathop) (float, float), float x, float y){
	return (*mathop) (x, y);
}

void getOp(char *op){
	printf("Give math operation (+,-,*,/): ");
	while(1){
		scanf("%s", op);

	if(*op == '+' || *op == '-' || *op == '*' || *op == '/')
		break;
	else
		printf("\nIncorrect operation, give +,-,*,/: ");
	}
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
	printf("%f\n", a);
	printf("%f\n", b);
	getOp(&op);
	if(op == '+'){
		printf("Sum of %2.2f and %2.2f is %2.2f\n.", a, b, domath(add, a, b));
	}
	if(op == '-'){
		printf("Difference of %2.2f and %2.2f is %2.2f\n.", a, b, domath(subtract, a, b));
	}
	if(op == '*'){
		printf("Product of %2.2f and %2.2f is %2.2f\n.", a, b, domath(multiply, a, b));
	}
	if(op == '/'){
		if(b == 0){
			printf("Division by zero detected! Aborted.\n");
		}
		else
		printf("Division of %2.2f and %2.2f is %2.2f\n.", a, b, domath(divide, a, b));
	}
	//float result = domath(op, a, b);

	return 0;
////////float a = domath(add, 10, 2);
////////printf("10 + 2 gives: %d\n", a);
////////float b = domath(subtract, 10, 2);
////////printf("10 - 2 gives: %d\n", b);
}
