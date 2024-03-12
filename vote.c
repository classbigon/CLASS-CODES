# include <stdio.h>
int main(){
    int Age;
    printf("How Old Are You? \n");
    scanf("%d", &Age);
    if (Age>=18){
        printf("You are Old enough");
        printf("...To Vote\n");
    }
    else if(Age<18){
        printf("You are still a Minor!\n");
    }
    return 0;
}
