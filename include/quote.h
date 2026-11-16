#pragma once
#include <string>

//class containing a quote and its price, which is got from an external resource
class Quote{
    long double price;
    std::string tokenName;
    
    public:
        void parsePrice();
        long double getPrice();  
};