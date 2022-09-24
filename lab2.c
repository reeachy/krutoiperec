#include <stdio.h>
int main(){
    double a;
    double z1;
    double z2;
    scanf("%lf", &a);
    z1 = 1/((1+a+a*a)/(2*a + a*a) + 2 - (1 - a + a*a)/(2*a - a*a)*(5-2*a*a));
    z2 = (4 - a*a)/2;
    printf("%lf\n", z1);
    printf("%lf\n", z2);
    
    
    
}

