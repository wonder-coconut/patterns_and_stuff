#include <stdio.h>

int main(){
    
    int n1,n2,i,fl,line=0;
    scanf("%d %d", &n1,&n2);
    if(n1==2){
        line++;
        printf("2 ");
    }

    for(i=n1; i<=n2; i++){
        for(int j=2; j<i; j++){
            int count=0;
            if(i%j==0){
                count++;
                fl=count;
                break;
            }
            fl=count;   
        }    
        if(fl==0){
            printf("%d ", i);
            line++;
            if(line==7){
                line=0;
                printf("\n");
            }

        }

        
        }
    



    return 0;
}