#include<stdio.h>
#include<string.h>
main(){
char texto[]= "foi muito facil";
int i;

for (i = 0; texto[i]!='\0'; i++){     
if (texto[i] == ' ') break;                     
}



for (i=0 ; texto[i]!='\0'; i++){     
printf("%c", texto[i]);              
}