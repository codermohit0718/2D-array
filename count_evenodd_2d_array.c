#include<stdio.h>
int main(){
    int r,c;
    printf("ENTER NUMBER OF ROWS:");
    scanf("%d",&r);
     printf("ENTER NUMBER OF column:");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        scanf("%d",&arr[i][j]);
    }
 }
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        printf("%d",arr[i][j]);
        printf("\n");
    }
 }
 int even = 0,odd = 0;
         for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        if(arr[i][j]%2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
 }
 printf("THE COUNT OF EVEN NUMBER IS:%d\n",even);
 printf("THE COUNT OF ODD NUMBER IS:%d\n",odd);
 return 0;
}