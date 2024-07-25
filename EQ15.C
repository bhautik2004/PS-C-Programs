/*
 10. WAP to calculate Compound Interest using the formula I = P * (1 + r/100)^n - P;
 author: Bhautik Thummar
 date: 25-07-2024
*/
#include <stdio.h>
#include <conio.h>
#include <math.h> 

float CompoundInterest(float principal, float rate, float time) {
    float compoundInterest;
    compoundInterest = principal * pow((1 + rate / 100), time) - principal;
    return compoundInterest;
}

void main() {  
    float principal, rate, time, interest;

    clrscr(); 
    printf("Enter Principal: ");
    scanf("%f", &principal);
    printf("Enter Rate: ");
    scanf("%f", &rate);
    printf("Enter Time: ");
    scanf("%f", &time);

    interest = CompoundInterest(principal, rate, time);
    printf("Compound Interest = %f", interest); 

    getch(); 
}

/*
  output:
 Enter Principal: 40000
Enter Rate: 4                                                                   
Enter Time: 2                                                                   
Compound Interest = 3264.000000                                                 
                                                                                
                                                                                
                                                                                


                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/