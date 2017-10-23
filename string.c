#include <stdio.h>

int my_strlen(char *s)
{
   char *p = s;

   while (*p)
      ++p;

   size_t my_strlen(const char *s)
}

int main(void)
{
   int i;
   char *s[] = 
   {
      "Git tutorials",
      "Leaning point"
   };

   for (i = 0; i < 2; ++i)
      
   printf("string lenght of %s = %lu\n", s[i], my_strlen(s[i]));

   return 0;
}