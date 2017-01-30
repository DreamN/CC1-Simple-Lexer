#include <stdio.h>
#include <math.h>
const int __zero = 0; /* dummy */
int is_palindrome(int number, int len)
{
  // printf("Number: %d and len = %d\n", number, len);
  if(len == 1 || len == 0)
  {
    return 1;
  }
  else
  {
    int x = number / pow(10, len-1);
    int y = number % 10;
    //printf("x = %d , y = %d\n", x, y);
    if(x == y)
    {
      // X and Y match!
      number -= y * pow(10, len-1);
      number /= 10;
      return is_palindrome(number, len-2);
    }
    else
    {
      // X and Y isn't match
      return 0;
    }
  }
}
int main(int argc, char **argv)
{
  int num = 156737651;
  printf("%s\n", is_palindrome(num, 9)? "It's a palindrome" : "It's not a palindrome");
  return __zero;
}
