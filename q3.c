#include <stdio.h>

int main(){
    int i = 100;

    do{
        printf("%d\n", i);

        if(i==0)
            break;

        i--;
} 
while (i>=0);

    return 0;
}
