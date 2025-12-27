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
          printf("%d",arr[i][j]);
        }
        printf("\n");
    } 
    int sum = 0;
     for(int i=0;i<r;i++){
           for(int j=0;j<c;j++){
            sum = sum + arr[i][j];
           }
        }
        printf("the sum of array elements are:%d",sum);
        return 0;
}