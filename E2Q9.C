/*
  9.WAP to read mark from keyboard and your program should display equivalent grade according to the following table
  =====================================
	MARK		GRADE
  =====================================
	0-34		Fail
	35-59		Second Class
	60-79		First Class
	80-59		Distriction
  author : Bhautik Thummar
  date: 9-8-2024
*/
#include<stdio.h>
#include<conio.h>

void Result(const int mark){
	if(mark<=0 && mark <=34){
		printf("FAIL");
	}
	else if(mark>=35 && mark <=59){
		printf("Second Class");
	}
	else if(mark>=60 && mark <=79){
		printf("First Class");
	}
	else if(mark>=80 && mark <=99){
		printf("Distriction");
	}
	else{
		printf("FAIL");
	}
}
void main(){
	int mark;
	clrscr();
	printf("Enter Mark: ");
	scanf("%d",&mark);
	Result(mark);
	getch();


}
/*
  output:
  Enter Mark: 87
Distriction                                                                     
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/
