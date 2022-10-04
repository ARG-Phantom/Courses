// You are using GCC
#include <stdio.h>
#include <string.h>

int sumof(int num){        //Using Recursion
    int sod = 0;
    while(num>0){
        sod+=num%10;
        num/=10;
    }
    return (sod<10)?sod:sumof(sod);
}

/*
int sumof(int num){         //Using Loops
    int sod;                
    do{
        sod=0;
        while(num>0){
            sod+=num%10;
            num/=10;
        }
        num=sod;
    }while(sod>=10);
    return sod;
}
*/

int main(){
    int d,m,y,lpn,dn=0;
    char name[100],c;
    scanf("%d %*c %d %*c %d ",&d,&m,&y);

    gets(name);
    lpn=sumof(sumof(d)+sumof(m)+sumof(y));

    
    for(int i=0;i<strlen(name);i++){
        c=name[i];
        
        if(name[i]<97) dn = sumof(dn)*1000; //For adding names (a name's starting is represented by Uppercase letter)
        else c-=32; //if it is not uppercase, converte it to uppercase for easier case check
        
        switch(c){
            case 'A': case 'J': case 'S':
                dn+=1;break;
            case 'B': case 'K': case 'T':
                dn+=2;break;
            case 'C': case 'L': case 'U':
                dn+=3;break;
            case 'D': case 'M': case 'V':
                dn+=4;break;
            case 'E': case 'N': case 'W':
                dn+=5;break;
            case 'F': case 'O': case 'X':
                dn+=6;break;
            case 'G': case 'P': case 'Y':
                dn+=7;break;
            case 'H': case 'Q': case 'Z':
                dn+=8;break;
            case 'I': case 'R':
                dn+=9;break;
        }
    }
    
    dn = sumof(dn);
    printf("Life path number : %d\n",lpn);
    printf("Destiny number : %d\n",dn);
    printf("%s",(lpn==dn)?"Lucky":"Not Lucky");
    
}