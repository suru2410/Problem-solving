// total salary//
#include<stdio.h>
int main()
{ double basic, hra, da, allow,pf, totalsalary;
char grade;
printf("Enter the basic");
scanf("%d" , & basic);
printf("Enter the grade");
scanf("%s" , &grade);
if (grade == 'A')
{ allow = 1700;}
else if  (grade == 'B')
{ allow = 1500;}
else {
allow = 1300;
}
hra = basic*0.20;
da = basic * 0.50;
pf = basic * 0.11;
totalsalary = hra + da+ pf+basic+allow;
printf("the total salary will be %d" , totalsalary);
}



