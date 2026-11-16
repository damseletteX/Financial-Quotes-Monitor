#pragma once
#include <string>

//class containing a quote and its price, which is got from an external resource
class Quote{
    long double price;
    std::string tokenName;
    
    public:
        Quote(std::string name, long double price_) : tokenName(name), price(price_) {};
        void parsePrice();
        long double getPrice();  
};