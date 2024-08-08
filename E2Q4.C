/*
  4.WAP to find out Given Year is leap year or not.
  author: Bhautik Thummar
  Date: 7-8-2024
*/
#include<stdio.h>
#include<conio.h>
int IsLeapYear(const int year){
	if(year % 400 == 0 || (year%4 == 0 && year % 100 != 0))
		return 1;
	else
		return 0;
}
void main(){
	int year;
	clrscr();
	printf("Enter Year: ");
	scanf("%d",&year);
	if(IsLeapYear(year)==1)
		printf("%d IS LEAP YEAR...");
	else
		printf("%d IS NOT LEAP YEAR..");
	getch();

}
/*
  output:
  Enter Year: 2020
2020 IS LEAP YEAR...





                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/