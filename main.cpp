#include <iostream>

void fizzbuzz(int lowerLimit, int upperLimit, int fizzNumber, int buzzNumber){
    for(int i = lowerLimit ; i <= upperLimit ; i++){
        if ( i % fizzNumber == 0 && i % buzzNumber == 0 ) { std::cout<<"FizzBuzz "; }
        else if ( i % fizzNumber == 0){ std::cout<<"Fizz "; }
        else if ( i % buzzNumber == 0){ std::cout<<"Buzz "; }
        else { std::cout << i << ' '; }
    }
}

int main(){
    int a, b,c,d;
    a = 1;
    b = 100;
    c = 3;
    d = 5;

    fizzbuzz(a,b,c,d);
}