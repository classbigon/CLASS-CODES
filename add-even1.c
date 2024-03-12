# include <stdio.h>
int main(){
    int num;
    int sum = 0 ;
    printf("Provide an integer number: \n");
    scanf("%d",&num);
    for(int i = 1 ; i<=num; i++){
        if(i % 2 == 0){
          sum += i;
        }

    }
    printf("The sum is %d",sum);

}