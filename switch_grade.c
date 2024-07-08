#include <stdio.h> 
int main () 
{ 
/* for loop execution */ 
 int a,userinput,sum=0; 
 for(a = 0; a < 5;a++) 
 { 
    printf("Enter a number: "); 
    scanf("%d",&userinput); 
    if (userinput <1) 
    goto jump; 
    sum+=userinput; 
 } 
jump: 
printf("The sum of the values is %d\n", sum); 
return 0; 
} 


