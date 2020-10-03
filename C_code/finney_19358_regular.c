#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

    if(atoi(argv[1])==1){
        int i;
        for(i=1; atoi(argv[i]) !='\0'; i++){
        //printf("argv[%d] = %s\n",i,argv[i]);
        }

        if(i!=7){
            printf("error");
            return 0;
        }

        int lb, ub, ba, ws, loc; 
        lb = atoi(argv[2]);
        ub = atoi(argv[3]);
        ba = atoi(argv[4]);
        ws = atoi(argv[5]);
        loc = atoi(argv[6]);

        if(loc>=lb&&loc<=ub){
            int elements, mem_consumed, mem_loc;
            printf("%d\n", elements = (ub-lb)+1);
            printf("%d\n", mem_consumed = elements*ws);
            printf("%d", mem_loc = ba + loc*ws);

            return 0;
        }
        

        else{
            printf("error");
            return 0;
        }
    }

    else if(atoi(argv[1])==2||atoi(argv[1])==3){
        int count;
        for(count=1; atoi(argv[count]) !='\0'; count++){
        //printf("argv[%d] = %s\n" ,i,argv[i]);
        }

        if(count!=8){
            printf("error");
            return 0;
        }

        int r, c, ba, ws, i, j; 
        r = atoi(argv[2]);
        c = atoi(argv[3]);
        ba = atoi(argv[4]);
        ws = atoi(argv[5]);
        i = atoi(argv[6]);
        j = atoi(argv[7]);

        
        if(i<=r&&i>=0&&j<=c&&j>=0){
            int mem_add;
            if(atoi(argv[1])==2){
            printf("%d", mem_add= ba + ws*(c*i+j));}

            if(atoi(argv[1])==3){
            printf("%d", mem_add = ba + ws*(r*j+i));

            return 0;
            }
        }

        else{
            printf("error");
            return 0;
        }


        
    }

    else{
        printf("error");
            return 0;        
    }
    

}