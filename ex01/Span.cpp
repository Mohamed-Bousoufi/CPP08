#include "Span.hpp"


Span :: Span() : N(0)
{

}

Span :: Span(const unsigned int N)
{
    try
    {
        if(static_cast<int>(N) < 0)
        {
            this->N = 0;
            throw std :: out_of_range("Cannot intialize with negative values");
        }
        else
        {
            this->N = N;
        }
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std :: endl;
    }

}
Span :: Span(const Span &copy)
{
    this->N = copy.N;
    this->Numbers = copy.Numbers;
}

void Span :: operator = (const Span &copy)
{
    this->N = copy.N;
    this->Numbers = copy.Numbers;
}

Span :: ~Span()
{

}

void Span :: addNumber(int number)
{
    try
    {
        if(this->Numbers.size() > N || N == 0)
        {
            throw std :: out_of_range("out of range");
        }
        this->Numbers.push_back(number);
    }
    catch(const std::exception& e)
    {
        std:: cout << e.what() << std :: endl;
    }
    
}
int Span :: shortestSpan()
{

    long long diff = LLONG_MAX;
    try
    {
    
        if(this->Numbers.empty() || this->Numbers.size() == 1)
            throw std :: out_of_range("Array is empty Or have just One element");
        std :: sort(this->Numbers.begin(),this->Numbers.end());

        std :: vector<int> :: iterator it;
        for(it = Numbers.begin();it != Numbers.end();it++)
        {
            if(abs(*it - *(it+1)) < diff)
            {
                diff =  abs(*it - *(it+1));
            }
        }
        return(diff);
    }
    catch(const std::exception& e)
    {
      return(std:: cout << e.what() << std :: endl,-1);
    }
}

int Span :: longestSpan()
{
    try 
    {
         if(this->Numbers.empty() || this->Numbers.size() == 1)
            throw std :: out_of_range("Array is empty Or have just One element");
        
        std :: sort(this->Numbers.begin(),this->Numbers.end());

        std :: vector<int> :: iterator be;
        std :: vector<int> :: iterator en;

        be = Numbers.begin();
        en = Numbers.end();
        return(abs(*(be) - *(en - 1)));
    }
    catch(const std::exception& e)
    {
        return(std:: cout << e.what() << std :: endl,-1);
        
    }
}
void Span :: onecall(unsigned int numbers)
{
    try
    {
         if(static_cast<int>(numbers) < 0)
            throw std :: out_of_range("Out Of range");
        int random;
        srand(time(0));
        for(unsigned int i = 0;i <= numbers; i++)
        {
            if(numbers != 0)
                random = (rand() % numbers) + 1;
            else
                random = 0;
            this->addNumber(random);
        }
    }
    catch(const std::exception& e)
    {
        std :: cout << "Out Of range" << std :: endl;
    }
}