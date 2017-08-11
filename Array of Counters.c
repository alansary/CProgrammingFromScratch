#include <stdio.h>
#define RATINGS 5
int main(){
    //Rating domain = {1, 2, 3, 4, 5}
    int RatingsCounter[RATINGS+1] = {0, 0, 0, 0, 0, 0};
    //Let's say we have 10 Ratings
    int i, Response;
    for(i=1; i<=10; i++){
        loop:
        printf("Enter the rating number %d: ", i);
        scanf("%d", &Response);
        if((Response==1)||(Response==2)||(Response==3)||(Response==4)||(Response==5)){
            RatingsCounter[Response]++;
        }
        else{
            printf("Wrong Rate\n");
            goto loop;
        }
    }
    for(i=1; i<=RATINGS; i++){ //Printing the ratings
        printf("%d\t", RatingsCounter[i]);
    }
}
