//
//  main.c
//  Argument
//
//  Created by Eun Jae Lee on 22/11/17.
//  Copyright © 2017 Eun Jae Lee. All rights reserved.
//
//  return type & argument
//  return_type functon_name (parameters) {
//      local variable declaration;
//         statements;
//      return value; }
//
//   void sum();
//   void sum() {
//
//   }

#include <stdio.h>

int sum (int, int); //function declaration

int main(int argc, const char * argv[]) {

    int a,b,add;
    printf("Enter two numbers: \n");
    scanf("%d%d \n",&a,&b);
    
    add = sum(a, b); // Funtion calling, Actual parameters
    printf("%d + %d = %d \n", a,b,add);
    
    getchar();
    
    //return 0;
}

int sum(int x, int y) { // function definition, Receaving values // Formal parameters
    int sum;
    sum = x+y;
    return sum; // return value
    
}
