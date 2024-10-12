/*
AUTHOR:Precious Waithera 
REG NO:CT101/G/24685/24
DATE:12-10-2024
FOR LOOPS
*/

#include <stdio.h>
int main (){
	int i, start, stop;
	
	//Input 
	printf("Enter when to start:");
	scanf("%d", &start);
	
	printf("Enter when to stop:");
	scanf("%d", &stop);
	
	//loop
	for(i=start;i<=stop;i++){
	printf("%d\n", i*i);
}
	return 0;

}
