#include <stdio.h>

int my_strlen(char *s)
{
   char *p = s;

   while (*p)
      ++p;

   size_t my_strlen(char *s)
return (p-s);
}

char *my_strcpy(char *t, char *s)

{
   
   char *p = t;
   
    while (*t++ = *s++)
    ;
   
   
   return p;
   
}

int main(void)
{
   int i;
   char p1[32];
   char *s[] = 
   {
      "Git tutorials",
      "Leaning point"
   };

   for (i = 0; i < 2; ++i)
      
   printf("string lenght of %s = %lu\n", s[i], my_strlen(s[i]));
   printf("%s\n", my_strcpy(p1, "Hello, World !!!"));

   return 0;
}