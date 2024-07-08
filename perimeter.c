# include <stdio.h>
double perimeter(int *diameter){
    double Perimeter;
    float Pi = 3.14;
    Perimeter= Pi * *diameter;
    printf("The Perimeter of the circle is %f",Perimeter);
}
int main(){
    int x;
    printf("Provide The diameter of a circle: ");
    scanf("%f",&x);
    perimeter(&x);
   
}