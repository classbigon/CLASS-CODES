// # include <stdio.h>
// void main(){
//     int myNumbers[5] = {20,25,30,40,50};
//     printf("The Fourth number is %d\n",myNumbers[3]);
//     myNumbers[3]=63;
//     printf("The New Fourth number is %d\n",myNumbers[3]);
//     printf("The array includes: \n");
//     for(int i=0;i<5;i++){
//         printf("%d\n",myNumbers[i]);
//     }
// }

//dynamic initialization

# include <stdio.h>
int main(){
    int myNumbers[5];
    printf("Please Key in Five elements\n");
    for(int i =0; i<5; i++){
        scanf("%d",&myNumbers[i]);
    }
 
   
}
