#include <stdio.h>

int main(void) {
    int i,num, massimo=0;
    for(i=0;i<=10;i++) {
        printf("numero %d = ", i);
        scanf("%d",&num);
        if(num > massimo)
        massimo = num;
    }
    printf("massimo = %d\n",massimo);
}
