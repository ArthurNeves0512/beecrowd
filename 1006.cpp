#include<iostream>
#include<iomanip>
int main(){
    double a,b,c;
    std::cin>>a>>b>>c;
    std::cout<<std::fixed;
    std::cout<<std::setprecision(5);
    std::cout<<"MEDIA = "<<((a*2)+(b*3)+(c*5))/10<<std::endl;

    return 0;
}