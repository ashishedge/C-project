#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int num,guess,nguesses=1;
    srand(time(0));
    num=rand()%100 + 1;
    printf("The number is %d\n",num);

    do{
        printf("Guess the number between 1 and 100:\n");
        scanf("%d",&guess);
        if(guess<num){
            printf("Think and enter a higher value:\n");
            // scanf("%d",&higher);
        }
        else if (guess>num){
            printf("Think and enter a lower value:\n");
        }
        else{
            printf("You guessed it in %d attempts\n",nguesses);
        }
        nguesses++;
    } while (nguesses!=num);
 
    
    
    return 0;
}