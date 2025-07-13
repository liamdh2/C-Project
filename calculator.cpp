#include <iostream>

int main(){
    char op;
    double num1;
    double num2;
    double res;

    std::cout<<"********* Calculator********* \n";
    std::cout<<"Enter either (+ - * /):";
    std::cin>>op;
    std::cout<<"Enter number 1:";
    std::cin>>num1;
    std::cout<<"Enter number 2:";
    std::cin>>num2;
    switch(op){
        case '+':
            res = num1 + num2;
            std::cout<<"Result: "<<res<<'\n';
            break;
        case '-':
            res = num1-num2;
            std::cout<<"Result: "<<res<<'\n';
            break;
        case '*':
            res = num1*num2;
            std::cout<<"Result: "<<res<<'\n';
            break;
        case '/':
            res = num1/num2;
            std::cout<<"Result: "<<res<<'\n';
            break;
        default:
            std::cout<<"That was not a valid operator! \n";
            break;
    }
    std::cout<<"*****************************";
    return 0;
}