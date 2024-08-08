/*
  6.WAP in c program that read number from 1 TO 7 and then print corresponding day name from the week using switch case.
  author:Thummar Bhautik
  date:8-7-2024
*/
#include<stdio.h>
#include<conio.h>
int DayName(int day){
	switch(day){
		case 1:
			Printf("Sunday");
			break;
		case 2:
			Printf("Monday");
			break;
		case 3:
			Printf("Tuesday");
			break;
		case 4:
			Printf("Wednesday");
			break;
		case 5:
			Printf("Thursday");
			break;
		case 6:
			Printf("Friday");
			break;
		case 7:
			Printf("Saturday");
			break;
		default:
			printf("INVALID DAY");
	}
}
void main(){
	int day;
	clrscr()
	printf("Enter Number Of day in Week : ");
	scanf("%d",&day);
	getch();
	printf(DayName(day));
}