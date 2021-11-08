#include <stdio.h>
#include <math.h>

int isPalindrome(int number){
  int original = number, reminder = 0, reversed = 0;
  while(number > 0){
     reminder = number % 10;
     reversed = reversed*10 + reminder;
     number = number/10;
     }
   if(original == reversed){
     return 1;
     }
   else{
     return 0;
   }
}

int isArmstrong(int number){
  int currnum = number;
  int numofdig = 0;
  for(; number != 0; numofdig++){
    number = number / 10;
    }
  int sum = 0;
  int lastdig;
  number = currnum;
  while(number != 0){
    lastdig = number % 10;
    sum = sum + pow(lastdig , numofdig);
    number = number / 10;
    }
   if(sum == currnum){
     return 1;
     }
   else{
   return 0;
   }
  }


