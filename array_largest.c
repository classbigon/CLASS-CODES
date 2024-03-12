// displays the largest number
# include <stdio.h>
int main(){
    int catmarks[6] = {12,23,45,56,77,8} ;
    int largest = catmarks[0];
    for(int i = 1 ; i<=5; i ++ ){
        if (catmarks[i]>largest){
            largest = catmarks[i];
        }
    }
    printf("%d\n",largest);
}

// displays the smallest number
# include <stdio.h>
int main(){
    int catmarks[6] = {12,23,45,56,77,8} ;
    int largest = catmarks[0];
    for(int i = 1 ; i<=5; i ++ ){
        if (catmarks[i]<largest){
            largest = catmarks[i];
        }
    }
    printf("%d\n",largest);
}


//calculates the sum of the numbers in the array
// # include <stdio.h>
// int main(){
//     int catmarks[6] = {12,23,45,56,77,8} ;
//     int sum = 0 ;
//     for(int i = 0 ; i<=5; i ++ ){
//           sum += catmarks[i];
// }
//    printf("The sum of the array is %d" , sum);
// }

//calculates the average of the numbers in the array

// # include <stdio.h>
// int main(){
//     int catmarks[6] = {12,23,45,56,77,8} ;
//     int sum = 0 ;
//     int count = 0 ;
//     for(int i = 0 ; i<=5; i ++ ){
//           sum += catmarks[i];
//           count++;
// }
//    printf("The Average of the array is %d" , sum/count);

// }


//using dynamic arrays!!!!

// #include <stdio.h>
// int main(){
//     int catmarks [6];
//     int sum = 0 ;
//     printf("Please key in the elements:  \n");
//     for(int i = 0; i <= 5; i ++ ){
//          scanf("%d",&catmarks[i]);
//          sum += catmarks[i];

//     }
//     printf("The second element you keyed in was: %d",catmarks[1]);
//     printf("The sum of the elements is: %d",sum);

// }







































































































// #include <stdio.h>

// void bubbleSort(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 // Swap arr[j] and arr[j+1]
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

// int main() {
//     int arr[] = {64, 34, 25, 12, 22, 11, 90};
//     int n = sizeof(arr) / sizeof(arr[0]);
    
//     printf("Original array: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     bubbleSort(arr, n);

//     printf("Sorted array: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }

