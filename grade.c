# include<stdio.h>
int main(){
 int Marks;
 printf("Input Your Marks Please : \n");
 scanf("%d",&Marks);
 if(Marks<=39){
    printf("Grade=E\n");
 }
 else if(Marks<=49){
    printf("Grade=D\n");
 }
 else if(Marks<=59){
    printf("Grade=C\n");
 }
 else if(Marks<=69){
    printf("Grade=B\n");
 }
 else if(Marks<=100){
    printf("Grade=A\n");
 }
 else{
    printf("Marks out of Range!");
 }
 return 0;
}