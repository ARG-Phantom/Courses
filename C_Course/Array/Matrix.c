#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX(x,y) (x>y)?(x):(y)
#define MIN(x,y) (x<y)?(x):(y)

int* findSums(int n,int *a[]){
    int aucLen = (n*2)+2;
    int aucArray[aucLen];   //Accumulator Array [0....n-1, n....n*2-1, n*2, n*2+1]
        //let K be any number from [0..n-1]
        // 0....n-1 -> kth Row Sum,Stored at kth positon
        // n....n*2-1 -> kth Column,Stored at Sum at (n+k)th position
        // n*2 -> Main Diagnol Sum
        // n*2+1 -> Anti-Diagnol Sum
    memset(aucArray,0,sizeof(aucArray));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            aucArray[i] += a[i][j]; //i th Row Sum
            aucArray[n+j] += a[i][j]; //j th Column Sum
        }
        aucArray[aucLen-2] +=a [i][i]; //Main diagonal Sum
        aucArray[aucLen-1] +=a [i][n-1-i]; //Anti - Diagonal Sum
    }
    return aucArray;
}


int main(){
    int n = 3;
    scanf("%d",&n);

    int a[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    int aucLen = (n*2)+2;
    int aucArray[] = findSums(n,a);

    short int check = aucLen-1;
    while(aucArray[check]==aucArray[0] && --check>0); //Chech every element is same

    printf("%s",check==0 ? "Magic Matrix" : "Not A Magic Matrix") ;
    return 0;


}