#include <iostream>

int main(){
    int temp;
    bool cloudy = true;
    std::cout<<"Enter the temperatur:";
    std::cin>>temp;
    //&& checks if both conditions are true
    //|| check if one of the conditions are true
    // ! reverses the logical state of its operand(!=)
    if(temp > 0 && temp<45){
        std::cout<<"The temp is cold! \n";
    }else{
        std::cout<<"The temp is ok! \n";
    }

    if(temp <= 0 || temp>=85){
        std::cout<<"The temp is bad! \n";
    }else{
        std::cout<<"The temp is ok! \n";
    }
    if(!cloudy){
        std::cout<<"The sun is not out!\n";
    }else{
        std::cout<<"The sun is out today!\n";
    }
    return 0;
}