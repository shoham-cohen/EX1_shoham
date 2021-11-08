#include <stdio.h>
#include "NumClass.h"

int main(){
int firstnum;
int secondnum;
scanf("%d %d", &firstnum , &secondnum);
printf("The Armstrong numbers are:");
for(int i = firstnum; i <= secondnum; i++){
  if(isArmstrong(i) == 1){
     printf(" %d", i);
   }
  }
printf("\n");
printf("The Palindromes are:");
for(int i = firstnum; i <= secondnum; i++){
  if(isPalindrome(i) == 1){
     printf(" %d", i);
   }
  }
printf("\n");
printf("The Prime numbers are:");
for(int i = firstnum; i <= secondnum; i++){
  if(isPrime(i) == 1){
    printf(" %d", i);
   }
  }
printf("\n");
printf("The Strong numbers are:");
for(int i = firstnum; i <= secondnum; i++){
  if(isStrong(i) == 1){
    printf(" %d", i);
   }
 }
printf("\n");
return 0;
}
}
