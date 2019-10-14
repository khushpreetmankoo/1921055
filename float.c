#include<stdio.h>
int main()
{
 float var1 = 3.141111111111111111111111;
 double var2 = 3.141111111111111111111111;
 long double var3 = 3.141111111111111111111111;
 printf("%d\n",sizeof(float));
 printf("%d\n",sizeof(double));
 printf("%d\n",sizeof(long double));
 printf("%.10f\n",var1);
 printf("%.12f\n",var2);
 printf("%.13f\n",var3);
  return 0;
}
