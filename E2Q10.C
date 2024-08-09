/*
  10. A Manufacturing company classified its excutives into 4 levels for the benifits of certain perk.
	the level and corresponding perk are shown below

	==========================================================================
		level			Perks
	==========================================================================
				Conveyance Allowance	entertainment allowance
	==========================================================================
		1			1000                    500
		2			750			200
		3			500			100
		4			250			0

	income tax deducted from the salary on persentage basic as follows.
			======================================
				Gross Salary	Tax Rate
			======================================
				gross<=2000	no deduction
				2000 to 4000	3%
				4000 to 5000	5%
				gross >5000	8%
  write a c  program that will read an executive's job number,level number and basic pay
  and then compute the net salary after withoutholding (deducting) income text.
  gross salary = basicpay+HRA+Perk(hra=10% of basic)
  net salary = gross salary- incometax.

  author bhautik thummar

*/

#include<stdio.h>
#include<conio.h>

float CalculateHra(const float basicpay){
	return 0.10*basicpay;
}
float CalculatePerks(const int level){
	float conveyanceallowance,entertainmentallowance;
	switch(level){
		case 1:
			conveyanceallowance=1000;
			entertainmentallowance=500;
			break;
		case 2:
			conveyanceallowance=750;
			entertainmentallowance=200;
			break;
		case 3:
			conveyanceallowance=500;
			entertainmentallowance=100;
			break;
		case 4:
			conveyanceallowance=250;
			entertainmentallowance=0;
			break;
		default:
			printf("Invalid Level");
			return -1;
	}
	return conveyanceallowance+entertainmentallowance;
}
float CalculateGrossSalary(const float basicpay,const float hra,const float pearks){
	return basicpay+hra+pearks;

}
float CalculateIncomeTax(const float grossSalary) {
    if (grossSalary <= 2000) {
        return 0;
    } else if (grossSalary <= 4000) {
        return 0.03 * grossSalary;
    } else if (grossSalary <= 5000) {
        return 0.05 * grossSalary;
    } else {
        return 0.08 * grossSalary;
    }
}
float CalculateNetSalary(const float grosssalary,const float incometax ){
	return grosssalary-incometax;

}

void main(){
	int level,jobnumber;
	float basicpay,hra,perks,grosssalary,incometax,netsalary;
	clrscr();
	printf("Enter Job Number : ");
	scanf("%d",&jobnumber);
	printf("Enter Level : ");
	scanf("%d",&level);
	printf("Enter Basic Pay");
	scanf("%f",&basicpay);

	hra = CalculateHra(basicpay);
	perks = CalculatePerks(level);
	grosssalary = CalculateGrossSalary(basicpay,hra,perks);
	incometax=CalculateIncomeTax(grosssalary);
	netsalary = CalculateNetSalary(grosssalary,incometax);

	printf("\n\n HRA = %g ",hra);
	printf("\n PERKS = %g",perks);
	printf("\n Gross Salary = %g",grosssalary);
	printf("\n Net Salry = %g ",netsalary);
	getch();
}