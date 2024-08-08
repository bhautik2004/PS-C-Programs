/*
  5.WAP in c to enter any arithmetic operator (+,-,*,/) and two integer values and display result according to selection of operator.
  author : bhautik Thummar
  date: 7-8-2024
*/
#include<stdio.h>
#include<conio.h>

float Addition(const float no1,const float no2){
	return no1+no2;
}
float Subtraction(const float no1,const float no2){
	return no1-no2;
}
float Multipliction(const float no1,const float no2){
	return no1*no2;
}
float Division(const float no1,const float no2){
	return no1/no2;
}
float Calculate(const float no1,const float no2,const char op){
	float result;
	if(op == '+'){
		result = Addition(no1,no2);
		return result;
	}else if(op == '-'){
		result = Subtraction(no1,no2);
		return result;
	}else if(op == '*'){
		result = Multipliction(no1,no2);
		return result;
	}
	else if(op == '/'){
		result =Division(no1,no2);
		return result;
	}
	else
		return 0;

}

void main(){
	float no1,no2;
	char op;
	clrscr();
	printf("\n + \n - \n * \n /");
	printf("\nEnter Any operator: ");
	scanf("%c",&op);
	if(op=='+' || op == '-'|| op=='*'|| op=='/'){
		printf("Enter any two Number : ");
		scanf("%f%f",&no1,&no2);
		printf("%g %c %g = %g",no1,op,no2,Calculate(no1,no2,op));
	}
	else exit(0);
	getch();
}
/*

  output:

 +
 -
 *
 /
Enter Any operator: /
Enter any two Number : 10
2                                                                               
10 / 2 = 5                                                                      
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/


