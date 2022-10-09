#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    int n;
    scanf("%d",n);
    int a[n][n];
    int sum[n*2+2];
    int *arr = &a[0][0],*s=sum;
    memset(sum,0,sizeof(sum));


    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
            sum[i]+=a[i][j];
            sum[i+n]+=a[i][j];
        }
        printf("\n");
        sum[(n*2+2)-2]+=a[i][i];
        sum[(n*2+2)-1]+=a[i][n-1-i];
    }

    for(int i=0;i<(n*2)+2;i++) 
        printf("%d\n",sum[i]);
    return 0;

}