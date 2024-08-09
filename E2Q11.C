/*
  11. An electric power distributor company charges its consumer
	============================================================
		Consumption 		rate of charges
	============================================================
		for first 50 units      rs.2.30
		next 50 units		rs 2.60
		next 150 units		rs 3.25
		more than 300 units	rs 4.35
  write a program to take no of units consumed for user and calculate the bill amount
*/
#include<stdio.h>
#include<conio.h>

float CalculateBill(int units) {
    float billAmount = 0.0;

    if (units <= 50) {
	billAmount = units * 2.30;
    } else if (units <= 100) {
	billAmount = (50 * 2.30) + ((units - 50) * 2.60);
    } else if (units <= 300) {
	billAmount = (50 * 2.30) + (50 * 2.60) + ((units - 100) * 3.25);
    } else {
	billAmount = (50 * 2.30) + (50 * 2.60) + (200 * 3.25) + ((units - 300) * 4.35);
    }

    return billAmount;
}

void main() {
    int units;
    float billAmount;
    clrscr();
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);
    billAmount = CalculateBill(units);
    printf("Total Bill Amount: Rs. %g \n", billAmount);
    getch();
}
/*
  output:
  Enter the number of units consumed: 544
Total Bill Amount: Rs. 1956.4










                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/

