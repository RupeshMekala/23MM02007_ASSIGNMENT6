#include <stdio.h>

int main(){
    int a,b,rep=0;
    printf("Input lower limit :");
    scanf("%d",&a);
    printf("Input upper limit :");
    scanf("%d",&b);
    for( a>0;a<b;a++){
        rep=0;
        for(int i=2;i<a;i++){
            if(a%i==0){
                rep++;
                break;  
            }    
        }
        if (rep==0)
        {
            printf("%d, ",a);
        }
        
    }
    return 0;
} 