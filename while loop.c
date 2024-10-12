#include <stdio.h>
#include <math.h>

int sum = 0, s, start, stop;

int main(){
	printf("Enter wen to start: ");
	scanf("%d", &start);
	
	printf("Enter wen to stop: ");
	scanf("%d", &stop);
	
	while (start>=stop){
		s= pow(start,2);
		printf("%d\n", s);
		start--;
		sum = sum + s;
	}
	printf("Sum of squares is: %d", sum);
	return 0;
}
