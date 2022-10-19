#include<studio.h>
#include<math.h>
int main()
{
 float l,b,r,ar1,ar2,peri,cir;
 printf("Length, Breadth of rectangle & radius of circle:");
 scanf("%f%f%f",&l,&b,&r);
 ar1=l*b;
 peri=2(l+b);
 ar2=3.14*r*r;
 cir=3.14*2*r;
 printf("Area rectangle:%f\n",ar1);
 printf("Area circle:%f\n",ar2);
 printf("Circumference:%f\n",cir);
 printf("Perimeter:%f\n",peri);
 return0;
}
