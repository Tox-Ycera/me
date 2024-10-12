#include <stdio.h>
int main(){
	
	int start, stop, sum=0;
	
	printf("Enter wen start: ");
	scanf("%d", &start);
	
	printf("Enter wen to stop: ");
	scanf("%d", &stop);
	
	do{
		printf("%d\n", start);
		sum += start;
		start++;
	} while (start<= stop);
	
	printf("Sum = %d\n", sum);
	
	return 0;
	
}


