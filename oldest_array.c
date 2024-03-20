# include <stdio.h>
int main(){
    int myNumbers[5];
    int oldest = 0;
    int sum = 0;
    int count ;
    printf("Please Key in Your Ages:\n");
    for(int i =0; i<5; i++){
        scanf("%d",&myNumbers[i]);
        sum += myNumbers[i];
        count ++;
        if(myNumbers[i]>oldest){
            oldest = myNumbers[i];
        }
    }
    printf("The oldest is the one with %d years\n",oldest);
    printf("The Average of the years is %d",sum/count);
    return 0 ;
}