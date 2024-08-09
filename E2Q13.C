/*
  13. Write a c program to find maximum of three numbers.
  author Bhautik Thummar
  date:8-9-2024
*/
#include<stdio.h>
#include<conio.h>

int Max(const int no1,const int no2){
	if(no1>no2){
		return no1;
	}
	else {
		return no2;

	}
}
void main(){
	int no1,no2,no3;
	clrscr();
	printf("Enter Any Three Number : ");
	scanf("%d%d%d",&no1,&no2,&no3);
	printf("MAximum = %d",Max(Max(no1,no2),no3));
	getch();
}

/*
  output:
  Enter Any Three Number : 45
66                                                                              
98                                                                              
MAximum = 98                                                                    
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/