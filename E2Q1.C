/*
  1.WAP to find out Maximum Number Among Two.
  Author:Bhautik Thummar
  Date: 6-8-2024

*/
#include<Stdio.h>
#include<conio.h>
int Max(const int no1,const int no2){
	if(no1>no2)
		return no1;
	else
		return no2;

}
void main(){
	int no1,no2,max;
	clrscr();
	printf("Enter Any Two Number: ");
	scanf("%d%d",&no1,&no2);
	max=Max(no1,no2);
	printf("%d Is Maximum",max);
	getch();
}
/*
  Output:
  Enter Any Two Number: 32
  5
  32 Is Maximum
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/