/*
  2.WAP To Check Whether given number is positive negetive or zero;
  author: Thummar Bhautik
  Date:6-8-2024
*/
#include<stdio.h>
#include<conio.h>
int CheckNumber(int number){
	if(number>0)
		return 1;
	else if(number <0)
		return 0;
	else
		return -1;
}
void main(){
 int number;
 clrscr();
 printf("Enter Number : ");
 scanf("%d",&number);
 if(CheckNumber(number) == 0)
	printf("%d Is Negative",number);
 else if(CheckNumber(number) == 1)
	printf("%d Is Positive",number);
 else
	printf("%d Is Zero",number);
 getch();

}
/*
  output:
  Enter Number : 0
0 Is Zero
                                                                                
Enter Number : 45
45 Is Positive                                                                  

 Enter Number : -34
-34 Is Negative                                                                 
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/