// GameScore Adjustment Agamestores the scores of n players in an array. Write a function that receives a pointer to the scores and the number of players. The function should increase every score by 10. Display the scores before and after calling the function. Condition: The original array must be modified using pointers.

#include <iostream>
using namespace std;

void recieve(int *scores, int n) {
    for (int i = 0; i < n; i++) {
        *scores = *scores + 10;
        scores++;
    }
}

int main() {
    int score[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<"Scores before calling the functions are:";
    for(int i=0;i<10;i++){
        cout<<score[i]<<endl;
    }
    recieve(score,10);
    cout<<"Scores after calling the functions are:";
    for(int i=0;i<10;i++){
        cout<<score[i]<<endl;
    }
    return 0;
}