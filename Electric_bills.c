#include <stdio.h>
#include <stdlib.h>

int main()
{
    float units,bill;
    printf("Enter Units Used - ");
    scanf("%f",&units);
     if (units<=50){
     bill=units*0.5;
     printf("Bill = %f",bill);
     }
     else if(units<=100){
     bill=units*0.5+(units-50)*0.75;
     printf("Bill = %f",bill);
     }
     else if(units<=150){
     bill=units*0.5+(units-50)*0.5+(units-150)*1.2;
     printf("Bill = %f",bill);
     }
     else if(units<=150){
     bill=units*0.5+(units-50)*0.5+(units-150)*1.2+(units-250)*1.5;
     printf("Bill = %f",bill);
     }
    return 0;
}
	

