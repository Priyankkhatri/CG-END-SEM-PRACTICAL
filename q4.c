#include <stdio.h>

enum weekday{ Mon, Tue, Wed, Thu, Fri, Sat, Sun };

int main(){
    int n;
    scanf("%d", &n);

    if (n < 0 || n > 6){
        printf("Invalid day");
        return 0;
    }
    enum weekday day = n;

    switch(day){
        case Mon:printf("Monday"); break;
        case Tue:printf("Tuesday"); break;
        case Wed:printf("Wednesday"); break;
        case Thu:printf("Thursday"); break;
        case Fri:printf("Friday"); break;
        case Sat:printf("Saturday"); break;
        case Sun:printf("Sunday"); break;
    }
    return 0;
}
