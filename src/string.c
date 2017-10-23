#include <stdio.h>

int my_strlen(char *s)
{
   char *p = s;

   while (*p)
      ++p;
//
//
<<<<<<< HEAD
   size_t my_strlen(char *s)
return (p-s);
}

char *my_strcpy(char *t, char *s)

{
   
   char *p = t;
   
    while (*t++ = *s++)
    ;
   
   
   return p;
   
=======
   size_t my_strlen(const char *s)
>>>>>>> 4505b3ad7ee4c4bc9c6f5e58bcb4390b363e3f13
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