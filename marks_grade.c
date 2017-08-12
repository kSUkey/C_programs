int main()
{
float maths, eng, hin, sci, sst, percent;
printf("Enter Marks in following order: \n 1.Maths \n 2.English \n 3.Hindi \n 4.Science \n 5.Social Science");
printf("\n Maximum Marks = 100");
scanf("%f %f %f %f %f",&maths, &eng, &hin, &sci ,&sst);
percent = (maths + eng + hin + sci + sst)/5;

if(percent>= 90.0){
    printf("Grade - A");
    }
else{
    if(percent >=80.0 && percent <=90.0){
        printf("Grade - B");
    }
    else{
        if(percent >=70.0 && percent <=80.0){
            printf("Grade - C");
        }
        else{
            if(percent >=60.0 && percent <=70.0){
                printf("Grade - D");
            }
            else{
                if(percent >=40.0 && percent <=60.0){
                    printf("Grade - E");
                }
                else{
                    if(percent <=40.0){
                        printf("Grade - F");
                    }
                    }
                }
            }
        }
    }
printf("\n Your Percentage = %f", percent);

return 0;
}
