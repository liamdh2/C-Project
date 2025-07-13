#include <iostream>
#include <cmath>

int main(){
    double x = 3;
    double y = 4;
    double q = -4;
    double t = 3.14;
    double z;
    double a;
    double b;
    double c;
    double d;
    double e;
    double f;
    double g;
    //max
    z = std::max(x,y);
    std::cout<<z<<'\n';
    //min
    a = std::min(x,y);
    std::cout<<a<<'\n';
    //pow(a,b) a^b
    b = pow(x,y);
    std::cout<<b<<'\n';
    //sqrt
    c = sqrt(y);
    std::cout<<c<<'\n';
    //abs
    d = abs(q);
    std::cout<<d<<'\n';
    //round
    e = round(t);
    std::cout<<e<<'\n';
    //round up
    f = ceil(t);
    std::cout<<f<<'\n';
    //floor
    g = floor(t);
    std::cout<<g<<'\n';
    return 0;
}