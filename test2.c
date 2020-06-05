#include <stdio.h>
#include <math.h>
int main(){
    int i,n,a=3;

    while (1) {
        while ( i<INFINITY) {
            i=0;
            if (i%2==0) {
                printf("%d\n",a);
                a=a/2;
            }
            else {
                printf("%d\n",a);
                a=3*a+1;

            }
        if(a==1)
            break;

            i=i+1;
        }
    }
}
