#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int* house(int floors, int rooms, int garage){
    int* h = malloc(4 * sizeof(int));
    *h = floors;
    *(h + 1) = rooms;
    *(h + 2) = garage;
    *(h + 3) = rooms;

    return h;
}

int set_room(int* h){
    *(h + 3) = *(h + 3) - 1;
}

int room(int* h){
    int rpf = ceil((*(h + 1))/ *(h));
    int i;
    for(i = 0; i <= rpf; i++){
        if(*(h + 3) <= 0){
            printf("#|");
        }
        else{
            printf("_|");
        }
        set_room(h);
    }
    return 0;
}

int manzil(int* h){
    int j;
    for(j = 0; j < *h; j ++){
        printf("|");
        room(h);
        
        printf("\n");
    }

    return 0;
}

int main(){
    int* a = house(3, 5, 1);
    manzil(a);

    return 0;
}