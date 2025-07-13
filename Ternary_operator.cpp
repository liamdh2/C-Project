#include <iostream>

int main(){
    //ternary operator is ?: is a replacement for if/else
    // condition ? expression1 : expression 2;
    int grade = 75;
    (grade >= 60) ? std::cout << "You pass!": std::cout<<"You fail!";
    return 0;
}