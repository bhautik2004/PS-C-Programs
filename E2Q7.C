/*
  7.WAP a program in c to calculate gross salary of employee using:
	1. Gross Salary : Basic Pay + DA _ HRA -PF.
	2. DA = 30% if BAsic pay <5000 otherwise DA = 45%.
	3. HRA = 15% of Basic Pay.
	4. PF = 12% of Basic Pay.
	author : Bhautik Thummar
	date:8-8-2024
*/
float GrossSalary(const float basicpay,const float da,const float hra,const float pf){
	return basicpay+da+hra-pf;

}
float Da(const float basicpay){
	if(basicpay<5000)
		return 0.30*basicpay;
	else
		return 0.45*basicpay;
}
float Hra(const float basicpay){
	return 0.15*basicpay;
}
float Pf(const float basicpay){
	return 0.12*basicpay;
}
void main(){
	float basicpay,da,hra,pf,grosssalary;
	clrscr();
	printf("Enter Basic Salary  ");
	scanf("%f",&basicpay);
	da=Da(basicpay);
	hra=Hra(basicpay);
	pf=Pf(basicpay);
	grosssalary=GrossSalary(basicpay,da,hra,pf);
	printf("DA = %g",da);
	printf("\tHRA = %g",hra);
	printf("\tPF = %g",pf);
	printf("\t\n\n Gross Salary  = %g",grosssalary);
	getch();
}
/*
  output:
  Enter Basic Salary  50000
  DA = 22500      HRA = 7500      PF = 6000

 Gross Salary  = 74000
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

*/