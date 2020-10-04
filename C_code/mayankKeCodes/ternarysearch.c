#include <stdio.h>


int recursive_ternary_index(int key ,int arr[], int low,int high,int count){
  //printf("%d\n",high );
  //high = high-1;
  int btwl = low + (high-low)*1/3;
  int btwh = low + (high-low)*2/3;
  printf("count: %d\n",count );
  printf("...\n" );
  printf("...\n" );
  printf("%d, %d\n",btwl,btwh);
  if (key>arr[btwh]) {
    return recursive_ternary_index(key,arr,btwh+1,high,count+5);
    /*printf("%d\n",btw );*/
  }
  else if (key<arr[btwl]) {
    return recursive_ternary_index(key,arr,0,btwl-1,count+5);
    /*printf("%d\n",btw );*/
  }
  else if (key>arr[btwh] && key < arr[btwh]) {
    return recursive_ternary_index(key,arr,btwl+1,btwh-1,count+5);
  }
  else if (key == btwl) {
    printf("%d\n",count );
    return (btwl);
  }
  else if (key == btwh) {
    printf("%d\n",count );
    return (btwh);
  }

  // for (int i = 0; i < high; i++) {
  //   printf("%d
  //printf("\
}
}
int main(int argc, char const *argv[]) {
  int size;
  int key;
  int b[15];
  printf("enter key\n" );
  scanf("%d", &key);
  printf("enter yo size man\n" );
  scanf("%d",&size);
  for (int i = 0; i < size; i++) {
    if (i==0) {
      printf("enter num\n" );
      scanf("%d", &b[i]);
    }
    if (i!=0) {
      printf("enter next num\n" );
      scanf("%d", &b[i]);
    }
  }
  printf("%d",size);
  printf("the index is: arr[%d]\n", (recursive_ternary_index(key,b,0,(size-1),1)-1));
  return 0;
}
