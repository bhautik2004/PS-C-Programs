/*
  12. Write a program in c for grade calculation using if...else if ladder and switch statement .
      accept marks of the 3 subject , calculate total and based on it calculate grade.
      total greater or equal to than 80 		      Grade A+
      total greater or equal to than 70 and less than 80      Grade A
      total greater or equal to then 60 and less than 70      Grade A-
      total greater or equal to than 50 and less than 60      Grade B+
  author : Bhautik Thummar
  Date:8-9-2024
*/
#include<stdio.h>
#include<conio.h>

void PrintGrade(int total){
	if(total >=80){
		printf("Grade  = A+");
	}
	else if(total >=70 && total <=80){
		printf("Grade  = A");
	}
	else if(total >=60 && total <=70){
		printf("Grade  = A-");
	}
	else if(total >=50 && total <=60){
		printf("Grade  = B+");
	}
}
void main(){
	int subject1mark,subject2mark,subject3mark,total;
	clrscr();
	printf("Enter Subject 1 Mark =");
	scanf("%d",&subject1mark);
	printf("Enter Subject 2 Mark =");
	scanf("%d",&subject2mark);
	printf("Enter Subject 3 Mark =");
	scanf("%d",&subject3mark);

	total =  subject1mark+subject2mark+subject3mark;
	PrintGrade(total);
	getch();
}
/*
  output:
  Enter Subject 1 Mark =45
Enter Subject 2 Mark =32
Enter Subject 3 Mark =43
Grade  = A+



                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/