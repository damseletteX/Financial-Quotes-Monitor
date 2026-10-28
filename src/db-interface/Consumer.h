#include <string>
#include <vector.h>

class Quote{
    string name;
    long double lowerBoundary, upperBoundary;
    public: 
        Quote();
        ~Quote();
        """Change the lower boundary of the price"""
        void setLowerBoundary(float newBoundary){
            this->lowerBoundary = newBoundary;
        }
};

class User{
    string username;
    string hashedPassword;
    int id;
    public:
        void SetPassword(string);
        void SetUsername();
        // HashPassword(string);
};

class QuotesManager{
    User current;
    vector<Quote> trackedQuotes;
    public:
        QuotesManager();
        ~QuotesManager();
        void viewQuotes();
        
};