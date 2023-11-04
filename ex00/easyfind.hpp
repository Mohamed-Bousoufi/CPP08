#include<iostream> 
#include<iterator>
#include<vector>
#include<array>
#include<list>



template <typename T>

 int easyfind(T  &ptr,const int tofind)
{
    try
    {
        typename T :: iterator   it;
        for(it = ptr.begin() ; it != ptr.end();++it)
        {
            if(*it == tofind)
                return tofind;
        }
        throw std :: out_of_range("Cannot Find Element");
    }
    catch(const std::exception& e)
    {
        return(std :: cout << e.what() << std :: endl,-1);
    }
    
    
}