#include <stdio.h>
    int main(){
        int a,n=1;

        while (a<2147483647) {
            a=n^n;
            printf("%d\n",a);
            n=n+1;

        }

        return 0;
    }
