#include <string.h>
#include <stdio.h>

int main () {
   char str[80] = "Bruce,Wayne,24,1.78,84";
   char s[2] = ",";
   char *token;
   char name[50];
   char surname[50];

   /* get the first token */
   token = strtok(str, s);
   
   /* walk through other tokens */
   
   strcpy(name, token);
   token = strtok(NULL, s);
   strcpy(surname, token);
   token = strtok(NULL, s);
   
   printf("Name: %s Surname: %s\n", name, surname);
   return(0);
}