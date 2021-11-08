#include <stdio.h>
#include <math.h>

int reverse(int number){
  int numofdig = (int)log10(number);
  if(number == 0){
    return 0;
    }
  return((number%10*pow(10, numofdig)) + reverse(number/10));
  }
    

int isPalindrome(int number){
  if(number == reverse(number)){
     return 1;
  }
return 0;
}

int helperfunction(int number, int numofdig){
  if(number == 0){
    return 0;
    }
  return(pow(number%10 ,numofdig)+ helperfunction(number/10, numofdig));
}

int isArmstrong(int number){
  int temp = number;
  int numofdig = 0;
  while(temp != 0){
    numofdig++;
    temp = temp/10;
    }
  if(helperfunction(number, numofdig) == number){
    return 1;
    }
  else{
    return 0;
    }
 }

 


