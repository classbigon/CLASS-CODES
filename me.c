# include <stdio.h>
int main(){
   int Age;
   char Name[20  ];
   int Year_Of_Study;
   printf("What is your Name?\n");
   scanf("%s", &Name);
   printf("Please Provide Your Age:\n");
   scanf("%d",&Age);
   printf("What is your Year of Study :\n");
   scanf("%d",&Year_Of_Study);
   printf("Your Name is %s and you are %d years old and you are currently in your %d year",Name,Age,Year_Of_Study);
   return 0;


}