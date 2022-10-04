// You are using GCC
#include <stdio.h>
#include <string.h>

int main(){
    char nums[500];
    scanf(" %s ",nums);
    
    int counter=0,dif;

    
    for(int i=0;i<strlen(nums)-1;i++){
        dif = (nums[i]-'0')-(nums[i+1]-'0');
        //printf("%d\n",dif);
        if(dif==1 || dif==-1) counter+=dif;
        else break;
    }
    
    
    if(counter==-(strlen(nums)-1)) printf("Increasing fancy number");
    else if(counter==strlen(nums)-1) printf("Decreasing fancy number");
    else printf("Not fancy number");
    
    /*
    int c=nums[0]-'0',a,flag;
    for(int i=1;i<4;i++){
        a = nums[i]-'0';
        if(c+1 == a && flag == 1) flag=1;
        else if (c-1 == a && flag == -1) flag=-1;
        else {flag = 0;break;}
        c = a;
    }
    */

    /*
    int f=nums[0]-'0',l=nums[3]-'0';
    if (f+3==l) printf("Increasing fancy number");
    else if(f-3==l)  printf("Decreasing fancy number");
    else printf("Not fancy number");
    */

    /*
    int num,d,flag;
    scanf("%d",&num);
    while(num){
        d=num%10;
        num/=10;
        //printf("d:%d num:%d\td+1:%d d-1:%d\n",d,num%10,d+1,d-1);
        if(d-1 == num%10) flag=1;
        else if(d+1 == num%10) flag=-1;
        else {
            flag=0;
            break;
        }
    }
    //printf("%s",(flag)?(flag==1)?"Increasing fancy number":"Decreasing fancy number":"Not fancy number");
    */
}