#include <iostream>
#include <vector>

int main(){
    std::vector<int>lines;
    for (int i = 0; i < 5; i++)
    {
        lines.push_back(i);
    }
    for (int i = 0; i < 5; i++)
    {
        std::cout<<lines[i]<<" ";
    }
    std::cout<<"----------"<<std::endl;
    lines.resize(3);
    for (int i = 0; i < 5; i++)
    {
        std::cout<<lines[i]<<" ";
    }
    std::cout<<std::endl;
    std::cout<<lines.size();
    
}