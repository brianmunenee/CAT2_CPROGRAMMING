//program to request user to enter hours worked and hourly wages
/*
AUTHOR :BRIAN MUNENE
REG NO:CT101/G/21785/24
DATE:7/11/2024
*/

# include <stdio.h>

int main (){
	 int hours_worked;
	 float hourly_wages,gross_pay,net_pay,taxes;
	 
	 printf("Enter the hours_worked:");
	 scanf("%d",&hours_worked);
	 
	 printf("Enter the hourly_wages:");
	 scanf("%f",&hourly_wages);
	 
	 // how to calculate gross_pay
	 if ( hours_worked >40){
		 gross_pay =(hourly_wages*40)+((hours_worked-40) *hourly_wages*1.5);
	 }
	 
	 else {
		 gross_pay =hours_worked*hourly_wages;
	 }
	 
	 
	 // how to calculate taxes
	 
	 if(gross_pay<=600){
		 taxes =(0.15 *gross_pay);
	 }
	 else {
		 taxes = (600*0.15)+((gross_pay -600)*0.20);
	 }
	 
	 // how to calculate the net pay
	 
	 net_pay = gross_pay - taxes;
	  	
	 printf ("grosspay:%.1f\n",gross_pay);
	 printf("taxes :%.1f\n",taxes);
	 printf("netpay :%.1f\n",net_pay);
	 
	 return 0;  
}