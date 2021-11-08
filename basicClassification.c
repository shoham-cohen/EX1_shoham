#include <stdio.h>
#include <math.h>

int isPrime(int number){ 
   if(number < 1 || number % 2 == 0){ 
   return 0;
   }
   else if(number == 1){
    return 1;
    }
   else{
    for(int i = 3; i <= number/2; i = i + 2){
      if(number % i == 0){
        return 0;
        }
      }
     return 1;
  }   
}

int isStrong(int number){
  if(number <= 0){
   return 0;
  }
  int currnum = number, sum = 0;
  while(currnum > 0){
    int lastDig = currnum % 10;
    int factorial = 1;
    for(int i = 1; i <= lastDig; i++){
       factorial = factorial*i;
       }
    sum = sum + factorial;
    currnum = currnum / 10;
    }
  if(sum == number){
    return 1;
    }
  else{
    return 0;
    }       
}


