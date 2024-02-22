#include <stdio.h>
int count=0;
int collatz(int n){
  int output;
  if (n%2==0){
    output=n/2;
  }
  else{
    output=3*n+1;
  }
  count++;
  if (output==1){
    return count;
  }
  else{
    collatz(output);
  }
}

int main(){
  int num;
  scanf("%d",&num);
  if (collatz(num)){
    printf("%d",count);
  }
  return 0;
}