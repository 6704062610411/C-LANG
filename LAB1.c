#include <stdio.h>
int main() {
	int Num1;
	int Num2;
	scanf("%d",&Num1);
	scanf("%d",&Num2);
	
	if (Num1>Num2) {
		printf("Num1 is greater than Num2");
		printf("%d",(Num1-Num2));
	}
	else {
		printf("Num2 is greater than Num1");
		printf("%d",(Num2-Num1));
	}
}
