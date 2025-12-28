#include<stdio.h>
int main(){
    int r,c;
    printf("ENTER ROW NUMBERS:");
    scanf("%d",&r);
    printf("ENTER column NUMBERS:");
    scanf("%d",&c);
        int arr[r][c];
        for(int i=0;i<r;i++){
           for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
} 
printf("\n");
      for(int i=0;i<r;i++){
           for(int j=0;j<c;j++){
          printf("%d",arr[i] [j]);
        }
        printf("\n");
    } 
    int min;
     for(int i=0;i<r;i++){
           for(int j=0;j<c;j++){
            if(arr[i][j]<min){
            min = arr[i][j];
           }
        }
    }
        printf("the min number from array is:%d",min);
        return 0;
}