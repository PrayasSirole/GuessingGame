#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int num, guess, nguesses=1;
    srand(time(0));
    num = rand()%100 + 1; //Generates random number bet^w 1 to 100
    // printf("@Prayas__ Number is %d \n");
    //keep running the loop until the number is guessed
    do{
        printf("Guess the number between 1 to 100 : \n");
        scanf("%d", &guess);
        if(guess>num){
            printf("Lower number please!!! \n");
        }
        else if(guess<num){
            printf("Higher number please!!! \n");
        }
        else{
            printf("You guessed it in %d attempts\n", nguesses);
        }
        nguesses++ ;
        printf("@Prayas");
    }
    while(guess!=num);
    return 0;
}
