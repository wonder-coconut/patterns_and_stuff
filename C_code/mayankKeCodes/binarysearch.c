#include <stdio.h>

struct fraction{
  int num;
  int den;
};

typedef struct fraction frac;
int findfrac(frac key ,frac arr[], int low,int high){
  high = high-1;
  int btw = ((high + low)/2) + 1;
  printf("...\n" );
  printf("...\n" );
  printf("%d\n",btw);
  if ((key.num*arr[btw].den) - (key.den*arr[btw].num)>0) {
    return findfrac(key,arr,btw+1,high);
    /*printf("%d\n",btw );*/
  }
  else if ((key.num*arr[btw].den) - (key.den*arr[btw].num)<0) {
    return findfrac(key,arr,0,btw-1);
    /*printf("%d\n",btw );*/
  }
  else if ((key.num*arr[btw].den) - (key.den*arr[btw].num)==0) {
    /*printf("%d\n",btw );*/
    return (btw);
  }
  printf("number not in array\n" );
  return 0;
}

int main(int argc, char const *argv[]) {
  // frac a = {1,2};
  // frac b = {2,5};
  // frac c = {5,7};
  frac arr[] = {{1,2},{2,5},{5,7},{1,4}};
  frac key = {2,5};
  // printf("%d\n", arr[2].num);
  // printf("%d\n", arr[1].den);
  printf("the index is at arr[%d]\n",findfrac(key,arr,0,4));
  return 0;
}
