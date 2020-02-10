#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int runs = 10000000, i = 0, j = 0, car, sel, away;
    float result;

    fprintf(stdout, "%un", (unsigned)time(NULL));
    printf("\n");

    for(i = 0; i < runs; i++){
    car = rand() % 3;
    away = car;
    sel = rand() % 3;

    if(car == sel){
        while(away == car){
            away = rand() % 3;
            sel = 3 - (sel + away);
        }
    }else{
        away = 3 - (car + sel);
        sel = 3 - (sel + away);
    }

    if (sel == car){
        j += 1;
    }
    }
    fprintf(stdout, "%un", (unsigned)time(NULL));
    printf("%d\n", j);
    result = (float) j / (float) runs;
    printf("%f\n", result);
}

