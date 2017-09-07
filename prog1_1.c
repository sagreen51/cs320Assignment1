#include <stdio.h>
#include <string.h>
#define maxLetters 300
 
void main(){

    printf("Assignment #1-1, Steven Green, s.a.green51@gmail.com\n");
    
    char name[maxLetters], ending[maxLetters]; 

    printf("What is your name?\n");
    
    fgets(name,maxLetters,stdin);
    
    int length = strlen(name);

    name[length-1] = '!';

    printf("Hello %s\n",name);

}
