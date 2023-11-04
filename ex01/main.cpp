#include "Span.hpp"

int main()
{
    Span sp(10);


    sp.addNumber(52);
    sp.addNumber(45);
    sp.addNumber(9);
    sp.onecall(8);
    for(size_t i = 0 ; i < sp.Numbers.size(); i++)
    {
        std :: cout << sp.Numbers[i] << std :: endl;
    }
    std :: cout << "_________________" << std :: endl;
    std :: cout <<sp.shortestSpan() << std :: endl;
    std :: cout <<sp.longestSpan() << std :: endl;
}