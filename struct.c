#include <stdio.h>

struct car1{
        char make[20];
        char model[20];
        int year;
    }; 

int main() {
    struct car1 arr_car[5];
    for(int i = 0; i<5; i++){
        scanf("%s\t%s\n", arr_car[i].make, arr_car[i].model);
    }
    for(int i = 0; i<5; i++){
        printf("%s\t%s\n", arr_car[i].make, arr_car[i].model);
    }
    return 0;
}