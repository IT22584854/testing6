#include<stdio.h>

int main()
{
	//char stdName[5]="rahul";
    int num1,num2;
    float avg;
    
    printf("enter 1st numbe :");
    scanf("%d", &num1);
    
    printf("enter 1st number :");
    scanf("%d", &num2);
    
    avg = (num1+num2)/ 2;
		
	printf("average : %.2f", avg);
	
	return 0;
}