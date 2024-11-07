//
#include<stdio.h>
int main(){
	int hours;
	float wages;
	float gross_pay;
	float taxes;
	float net_pay;
	
	//prompt the user to enter hours worked
	printf("enter the hours worked:");
	scanf("%d",&hours);
	
	//prompt the user to enter wages pain per hour
	printf("enter the wages paid per hour:");
	scanf("%f",&wages);
	
	//calculate gross_pay
	gross_pay=hours*wages;
	
	//calculate taxes
	taxes=gross_pay*0.15;
	
	//calculate net_pay
	net_pay=gross_pay-taxes;
	
	//output
	printf("gross_pay is:%.2f\n",gross_pay);
	printf("taxes is:%.2f\\n",taxes);
	printf("the net_pay is:%f\n",net_pay);
	
	return 0;	
}


