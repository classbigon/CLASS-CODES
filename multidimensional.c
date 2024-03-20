# include <stdio.h>
int main(){
int sum = 0;
int count = 0;
double avg;
int catmarks [2] [3] = {{10,20,30},{50,60,70}};
 for(int i=0; i<2; i++){
    for(int j=0; j<3;j++){
         sum += catmarks[i][j];
         count ++;
    }
}
avg = sum/count;
printf("The sum of the multidimensional array is %d\n",sum);
printf("The Average of the multidimensional array is %f\n",avg);
return 0;
}