// Complete Guide to C++ Programming Foundations
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

// #include <iostream>

// int main(){
//     std::cout <<" Konichiwa " << std::endl;
// }

#include <stdio.h>

int main(){
    printf("enter name \n");
    char name[15];
    scanf("%s",name);
    printf("Your name is %s \n",name);
    return 0;
}

