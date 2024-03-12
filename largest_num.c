// # include <stdio.h>
// int main(){
//     int num1,num2,num3;
//     num1=30;
//     num2=450;
//     num3=300;
//     if (num1 > num2 && num1 > num3) {
//         printf("%d is the largest number \n",num1);
//     }
//     else if(num2 > num1 && num2 > num3) {
//         printf("%d is the largest number \n",num2);
//     }
//     else if(num3 > num1 && num3 > num2) {
//         printf("%d is the largest number \n",num3);
//     }
//     return 0;
// }
# include <stdio.h>
int main(){
    int num1,num2,num3;
    num1=3000;
    num2=45000;
    num3=300;
    if (num1 > num2 && num1 > num3 ){
        printf("%d is the largest number",num1);
    } {
        if (num2 > num1 && num2 > num3){
        printf("%d is the largest number",num2);   
        }
            {
            if(num3 > num1 && num3 > num2){
            printf("%d is the largest number",num3);
            }
        }
    }
}