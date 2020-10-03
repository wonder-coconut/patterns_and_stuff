#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    int i;
    //printf("argc = %d\n", argc);
    /*for(i=0; i < argc; i++){
        printf("argv[%d] = %s\n",i,argv[i]);
    }*/

    if(argc!=atoi(argv[1])+2){
        printf("Wrong Input");
        return 0;
    }

    int arr[atoi(argv[1])-1];

    int j,s;
    for(j=0, s=2; j<argc-2 ;j++){
        arr[j]=atoi(argv[s]);
        s++;
        //printf("%d\n", arr[j]);
    }

    int x, sum1=0, sum2=0;  
    x=atoi(argv[1])/2;

    int k=0,l=0;

    for(k; k<x; k++){
        sum1 = sum1+arr[k];
    }
    printf("%d ", sum1);

    for(l=x; l<k+x; l++){
        sum2 = sum2+arr[l];
    }
    printf("%d\n", sum2); 
    //printf("%d\n", x);
    
    if(sum1==sum2){
        printf("%d %d", l, arr[0]-arr[l]);
        return 0;}
    
    while(x!=1){
        int f;
        if(sum1<sum2){
            int newarr[x-1];
            for(int na=0; na<x; na++){
                newarr[na]=arr[na];
                //printf("%d ", newarr[na]);
            }

            x=x/2;
            sum1=0, sum2=0;
            for(k=0;k<x; k++){
                newarr[k]=arr[k];
                sum1 = sum1+newarr[k];
            }
            printf("%d ", sum1); 

            for(l=x;l<k+x;l++){
                sum2 = sum2+newarr[l];
            }
            printf("%d\n", sum2);


            if(x==1){
                if(sum1>sum2){
                    
                    for(f=0; f<argc-2; f++){
                        if(arr[f]==sum2){
                            break;
                        }
                    }
                    printf("%d %d", f,sum1-sum2);
                }

                if(sum1<sum2){
                    for(f=0; f<argc-2; f++){
                        if(arr[f]==sum1){
                            break;
                        }
                    }
                    printf("%d %d", f,sum2-sum1);

                }
            }


        }

        else if(sum1>sum2){   
            //printf("%d\n", x);
            int newarr[x-1];
            int y=x-1;
            for(int na=0; na<y+1; na++, x++){
                newarr[na]=arr[x];
                //printf("%d ", newarr[na]);
            }
            
            x=(y+1)/2;
            sum1=0, sum2=0;
            for(k=0; k<x; k++){
                sum1 = sum1 + newarr[k];
            }

            printf("%d ", sum1);

        
            for(l=x;l<k+x;l++){
                sum2 = sum2+newarr[l];
                }

                printf("%d\n", sum2);  


            if(x==1){
                if(sum1>sum2){
                    
                    for(f=0; f<argc-2; f++){
                        if(arr[f]==sum2){
                            break;
                        }
                    }
                    printf("%d %d", f,sum1-sum2);
                }

                if(sum1<sum2){
                    for(f=0; f<argc-2; f++){
                        if(arr[f]==sum1){
                            break;
                        }
                    }
                    printf("%d %d", f,sum2-sum1);

                }
            } 
            
        }
         
    
    }

    return 0;
}