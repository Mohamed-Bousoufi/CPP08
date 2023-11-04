#ifndef SPAN_HPP
#define SPAN_HPP


#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <random>
#include <stack>


class Span
{
    public :
            unsigned int N;
            std :: vector<int> Numbers;

            Span();
            Span(const unsigned int N);
            Span(const Span & copy);
            void operator = (const Span &copy);
            ~Span();

            void addNumber(int number);
            int shortestSpan();
            int longestSpan();
            void onecall(unsigned int numbers);

};


#endif