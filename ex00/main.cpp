#include "easyfind.hpp"
int main()
{
    std :: list<int> a;
    int b = 5;

    a.push_back(8);
    a.push_back(9);
    a.push_back(2);
    a.push_back(4);
    a.push_back(3);
    a.push_back(5);
    a.push_back(0);
    a.push_back(9);

    std :: cout << easyfind(a,b)<< std :: endl;
}