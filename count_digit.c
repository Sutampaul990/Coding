#include<stdio.h>
#include<math.h>
int countDigit(int n) {
  return floor(log10(n) + 1);
}
int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    printf("So the number of digit : %d",countDigit(n));
    return 0;
}