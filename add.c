# include <stdio.h>

int main(){

    int first_number,second_number,sum;
    printf("Enter the first number:\n ");
    scanf("%d",&first_number);
    ++first_number;
    printf("Enter the second number:\n");
    scanf("%d",&second_number);
    --second_number;
    sum = first_number + second_number;
    printf("The sum of the two numbers is \n %d \n",sum);
    printf("First number gets %d \n",first_number);
    printf("Second number gets %d \n",second_number);
    return 0;

}