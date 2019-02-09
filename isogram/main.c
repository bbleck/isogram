
//
//  main.c
//  isogram
//
//  Created by Brian on 2/9/19.
//  Copyright © 2019 Brian Bleck. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_isogram(char* inputString);
int evalString(char* inputString);


int main(int argc, char* argv[]) {
  int i = 0;
  if(argc ==2){
    if(is_isogram(argv[1])){
      i = 1;
    }
  }
  if(i){
    printf("%s is an isogram.\n", argv[1]);
  }else{
    printf("%s is not an isogram.]n", argv[1]);
  }
  return 0;
}

int is_isogram(char* inputString){
  if(inputString == NULL){
    return 0;
  }
  if(strlen(inputString) == 0){
    return 1;
  }
  return evalString(inputString);
}

int evalString(char* inputString){
  int i = 0;
  int j = 0;
  for(i=0; i< (int)strlen(inputString); i++){
    for(j=i+1; j< (int)strlen(inputString); j++){
      if(tolower(inputString[i]) == tolower(inputString[j])){
        if(isalpha(inputString[i])){
          return 0;
        }
      }
    }
  }
  return 1;
}
