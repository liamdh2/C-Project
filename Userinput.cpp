#include <iostream>
// cout << (insertion= operator)
// cin >> (extraction operator)
int main(){
    std::string name;
    std::cout<< "What's your name?: ";
    //std::cin>> name;
    //string may contains spaces
    std::getline(std::cin,name);

    std::cout<< "Hello "<< name;
    
    
    return 0;
}