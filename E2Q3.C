/*
  3.WAP to c program to find minimum number among two number
  author: Bhautik Thummar
  date: 7-8-2024
*/
#include<stdio.h>
#include<conio.h>
int Minimum(const int no1,const int no2){
	if(no1>no2)
		return no2;
	else
		return no1;

}
void main(){
 int no1,no2;
 clrscr();
 printf("Enter Any two number : ");
 scanf("%d%d",&no1,&no2);
 printf("%d Is Minumum Among %d And %d",Minimum(no1,no2),no1,no2);
 getch();
}
/*
  output:
  Enter Any two number : 456
322                                                                             
322 Is Minumum Among 456 And 322                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/