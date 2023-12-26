#include <iostream>
using namespace std;

int main() {
    int number1, number2; 
    int small, large; 
    int finalScore = 0;

    cin >> number1 >> number2;

    if (number1 > number2){
        small = number2;
        large = number1;
    }
    else{
        small = number1;
        large = number2;
    }
    
    int scoreOfPerfect=0, scoreOfNonPerfect=0;
    while(small<=large)
    {
        int i=1, sum=0;
        while(i <= small/2)  
        {
           if(small % i == 0)
           {
            sum = sum + i;
           }  
           i++;
           
        }  
        if (sum==small)
        {
            scoreOfPerfect += small;
        }
        else
        {
            scoreOfNonPerfect += small;
        }
    small++;
    }
    finalScore = scoreOfPerfect - scoreOfNonPerfect;
    
    cout << finalScore << endl;
    return 0;
}