#include <stdio.h>
#include<math.h>
#define f(x) 1/(1+(x*x))
int main()
{
    int n, i;
    float a, b, x, delta, f=0, g, y;
    printf("\n\n Enter Upper limit:");
    scanf("%f", &b);
    printf("\n\n Enter Lower limit:");
    scanf("%f", &a);
    printf("\n\n Enter the sub interval terms:");
    scanf("%d", &n);
    
    while(n%2!=0)
    {
        printf("Error enter even number:");
        scanf("%d",&n);
    }
    printf("\n\n  Enter the sub interval terms:%d",n);
    x = ((b-a)/n);
    printf("\n\nValue of Delta x:%f" ,x);
    for (i=1; i<=n-1; i++)
        {
            y = a + (i*x);
            if(i%2==0)
                {
                    f= f+ 2*f(y);
                }
            else
                {
                    f= f + 4*f(y);    
                }
                
        }
        g = (x/3)*(f+f(a)+f(b));
        printf("\n\nThe true solution for the integral is :%f", g);
}
