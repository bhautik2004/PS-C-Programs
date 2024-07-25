/*
 10.WAP to calculate Simple Intrest using formula I=(PRN)/100;
 author : Bhautik Thummar
 date 25:7:2024
*/
#include<stdio.h>
#include<conio.h>
float SimpleIntrest(float principal,float rate,float time){
	float simpleintrest;
	simpleintrest=(principal*rate*time)/100;
	return simpleintrest;
}
void main(){
	float principal,rate,time,intrest;
	clrscr();
	printf("Enter Principal: ");
	scanf("%f",&principal);
	printf("Enter Rate: ");
	scanf("%f",&rate);
	printf("Enter Time: ");
	scanf("%f",&time);
	intrest=SimpleIntrest(principal,rate,time);
	printf("Simple Intrest = %g",intrest);
	getch();

}
/*
  output:
  Enter Principal: 50000
Enter Rate: 30                                                                  
Enter Time: 2                                                                   
Simple Intrest = 30000                                                          
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/