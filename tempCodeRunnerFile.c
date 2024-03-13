#include <stdio.h>
int main(){
    int catmarks [6];
    int sum = 0 ;
    double count = 0 ;
    printf("Please key in the elements:  \n");
    for(int i = 0; i <= 5; i ++ ){
         scanf("%d",&catmarks[i]);
         sum += catmarks[i];
         count ++;
    }
    printf("The second element you keyed in was: %d",catmarks[1]);
    printf("The sum of the elements is: %d",sum);
    printf("The Average of the elements is: %f",sum/count);

}
