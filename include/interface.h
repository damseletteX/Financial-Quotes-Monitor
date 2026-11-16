#include <vector>
#include "quote.h"

//a container of all quotes the user has 
class DBOrchestrator{
    std::vector<Quote> tracked;
    public:
        std::vector<Quote> getQuotes();
        void createCase(std::string); //parses the database for the user's chosen quotes by his name
        void addQuote(std::string); //add quote to track
        void rmQuote(Quote); //remove quote from tracked
        void setLowerBoundary(); 
        void setUpperBoundary();
    };