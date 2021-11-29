/*
*  UCF COP3330 Fall 2021 Assignment 5 Solution
*  Copyright 2021 Gabriel Mousa
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
  double a, b, c; 

  cin >> a >> b >> c;

  //Check if the roots are not plausible
  if(((b*b) - (4*a*c)) <0){
      cout << "How do you know that your results are plausible? Can you check that they are correct?";
  }else{
      cout << ((-1 * b) + ((b*b) - (4*a*c))) / (2*a) << "\n";
      cout << ((-1 * b) - ((b*b) - (4*a*c))) / (2*a);
  }
  
} 