#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;
//typedef std::string str_t;
//typedef int num_t;

using str_t = std::string; 
using num_t = int;
int main(){
    //std::vector<std::pair<std::string, int>> pairlist;
    pairlist_t pairlist;

    str_t firstname = "Liam";
    std::cout<<firstname<<'\n';

    num_t age = 22;
    std::cout<<age<<'\n';
    return 0;
}