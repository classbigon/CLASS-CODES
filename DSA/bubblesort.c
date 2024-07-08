# include <stdio.h>
void bubblesort( int x[25],int n){
      int i,j,t;
      for(i=0;i< n;i++){
        for(j=0; j < n;j++){
            if(x[j] > x [j+1]){
            t = x[j];
            x[j]=x[j+1];
            x[j+1]=t;
            }
        } 
      }
}
void main(){
    int i,n,x[25];
    printf("Key in the no of elements\n");
    scanf("%d",&n);
    printf("Key in the array elements\n");
         for(i=0;i<n;i++){
            scanf("%d",&x[i]);
         }
bubblesort(x,n);
printf("Array Elements sorted\n");
for(i=0;i<n;i++){
    printf("%d\n",x[i]);
}
}