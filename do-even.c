# include <stdio.h>
int main(){
    int even;
    even = 10 ;
    do{
        printf("%d ",even);
        even +=10;
    }while(even<100);
    return 0;
}