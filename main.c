#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k,i;
    float x[50],y[50],L,z,p;
    printf("n=");
    scanf("%d",&n);
    printf("z=");
    scanf("%f",&z);
   for(i=1;i<=n;i++)
{
        printf("x[%d]=",i);
        scanf("%f",&x[i]);
        printf("\n");
}
for(i=1;i<=n;i++)
{
        printf("y[%d]=",i);
        scanf("%f",&y[i]);
        printf("\n");
}
L=0;
for(k=1;k<=n;k++)
{
    p=1;
    for(i=1;i<=n;i++)
        if(i!=k)
         p=p*(z-x[i])/(x[k]-x[i]);
    L=L+y[k]*p;
}
printf("valoarea aproximativa a functiei f in %f este %f",z,L);
}
