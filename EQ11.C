/*
  11.WAP  in c to display sum up to a number using the formula N*(N+1)/2;
  author:Bhautik Thummar
  date:25-7-2024
*/
#include<stdio.h>
#include<conio.h>
int SumUpToN(int number){
	int sum;
	sum=number*(number+1)/2;
	return sum;
}
void main(){
	int sum,number;
	clrscr();
	printf("Enter Number: ");
	scanf("%d",&number);
	sum=SumUpToN(number);
	printf("Sum = %d",sum);
	getch();
}
/*
  output:
  Enter Number: 10
Sum = 55









                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/