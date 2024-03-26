# include <stdio.h>
int main(){
    int myNumbers[]={20,25,30,40,50};
    printf("%lu\n",sizeof(myNumbers));
    int length;
    int length;
    length = sizeof(myNumbers)/sizeof(myNumbers[0]);
    printf("%d",length);
     for(int i =0; i<length; i++){
        scanf("%d",&myNumbers[i]);
    }

}