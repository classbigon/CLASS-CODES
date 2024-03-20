# include <stdio.h>
int main(){
    int myNumbers[5];
    int oldest = 0;
    int youngest;
    int sum = 0;
    int count = 0;
    printf("Please Key in Your Ages:\n");
    for(int i =0; i<5; i++){
        scanf("%d",&myNumbers[i]);
        sum += myNumbers[i];
        count ++;
        if(myNumbers[i]>oldest){
            oldest = myNumbers[i];
        }
        if(myNumbers[i]<youngest){
            youngest = myNumbers[i];
        }
    }
    printf("The oldest is the one with %d years\n",oldest);
    printf("The youngest is the one with %d years\n",youngest);
    printf("The Average of the years is %d\n",sum/count);  
    return 0 ;
}