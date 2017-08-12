#include <stdio.h>
#include <stdlib.h>

int main()
{
    float bsalary,hra,da,gs;
    printf("Enter Your Basic Salary \n");
    scanf("%f",&bsalary);

    if (bsalary<=10000){
        hra=bsalary*0.2;
        da=bsalary*0.8;
        gs=bsalary+hra+da;
        printf("HRA = %f \n DA = %f",hra,da);
        printf("Gross Salary = %f",gs);
    }
    else if(bsalary<=20000 && bsalary>=10000){
        hra=bsalary*0.25;
        da=bsalary*0.9;
        gs=bsalary+hra+da;
        printf("HRA = %f \n DA = %f",hra,da);
        printf("Gross Salary = %f",gs);
    }
    else if(bsalary>20000){
        hra=bsalary*0.3;
        da=bsalary*0.95;
        gs=bsalary+hra+da;
        printf("HRA = %f \n DA = %f",hra,da);
        printf("Gross Salary = %f",gs);
    }

    return 0;
}
