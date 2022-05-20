#include <stdio.h>

int sum(int x, int y){
	return x + y;

}

int main(void) {
 	int a;
 	int b;
 	printf("Enter a and b: ");
 	scanf("%d %d", &a, &b);
 	int s = sum(a, b);
 	printf("The sum is: %d", s);
 	
 	return 0;   
}
