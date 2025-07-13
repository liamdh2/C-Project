#include <iostream>

int main(){
    int age;
    std::cout<<"Enter your age: ";
    std::cin >> age;
    if(age>=12){
        std::cout<<"Welcome to the site!";
    }else if(age < 0){
        std::cout<<"You have not been born yet!";
    }else{
        std::cout<<"Please dip!";
    }
    return 0;
}