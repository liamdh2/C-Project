#include <iostream>
//two types of type converion: implicit and explicit, implicit is automatic
int main(){

    double x = 3.14;
    std::cout<<x<<'\n';
    double y = (int) 3.14;
    std::cout<<y<<'\n';

    char z = 100; //implicit
    std::cout<<z<<'\n';
    std::cout<<(char)100<<'\n'; //explicit

    //grade based off score
    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100;
    std::cout<<score<<'%'<<'\n';
    return 0;

}