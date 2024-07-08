#  include<stdio.h>
int main(){
    int num;//initiates the month number
    printf("Provide a number to represent a month: \n");
    scanf("%d",&num);
    switch (num) {
        case 1 :
            printf("This represents January ");
            break; 
        case 2:
            printf("This represents February");
            break;
        case 3:
            printf("This represents March");
            break;
        case 4:
            printf("This represents April");
            break;
        case 5:
            printf("This represents May");
            break;
        case 6:
            printf("This represents June");
            break;
        case 7:
            printf("This represents July");
            break;
        case 8:
            printf("This represents August");
            break;
        case 9:
            printf("This represents September");
            break;
        case 10: 
            printf("This represents October");
            break;
        case 11:
            printf("This represents November");
            break;
        case 12:
            printf("This represents December");
            break;
        default:
            printf("Wrong digit....out of range");
    }
     return 0;

}
