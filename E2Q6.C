/*
  6.WAP in c program that read number from 1 TO 7 and then print corresponding day name from the week using switch case.
  author:Thummar Bhautik
  date:8-7-2024
*/
#include<stdio.h>
#include<conio.h>
void DayName(int day){
	switch(day){
		case 1:
			printf("Sunday");
			break;
		case 2:
			printf("Monday");
			break;
		case 3:
			printf("Tuesday");
			break;
		case 4:
			printf("Wednesday");
			break;
		case 5:
			printf("Thursday");
			break;
		case 6:
			printf("Friday");
			break;
		case 7:
			printf("Saturday");
			break;
		default:
			printf("INVALID DAY");
	}
}
void main(){
	int day;
	clrscr();
	printf("Enter Number Of day in Week : ");
	scanf("%d",&day);
	DayName(day);
	getch();
}
/*
  output:
  Enter Number Of day in Week : 5
Thursday                                                                        
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/
