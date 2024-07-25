/*
  13.WAP in c to obtain an hourly pay rate and the number of hour worked ny the workers.calculate their pay for the week.
  author : Thummar Bhautik
  date:26:7:2024
*/
#include<stdio.h>
#include<conio.h>
float PayForWeek(float hourlypayrate,float numberofhourworked){
	float paymentforweek;
	paymentforweek=7*(hourlypayrate*numberofhourworked);
	return paymentforweek;

}
void main(){
	float hourlypayrate,numberofhourworked,paymentforweek;
	clrscr();
	printf("Enter Your Hourly Pay Rate: ");
	scanf("%f",&hourlypayrate);
	printf("Enter Number Of Hour You Worked: ");
	scanf("%f",&numberofhourworked);
	paymentforweek=PayForWeek(hourlypayrate,numberofhourworked);
	printf("Total Payment For Week  = %g",paymentforweek);
	getch();

}
/*
  output:
  Enter Your Hourly Pay Rate: 200
Enter Number Of Hour You Worked: 7                                              
Total Payment For Week  = 9800                                                  
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/