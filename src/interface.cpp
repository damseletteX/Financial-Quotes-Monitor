#include "./quote.h"
#include "./interface.h"
#include <vector>
#include <sqlite3.h>

void DBOrchestrator::addQuote(std::string name){
    Quote new_; // !PARSE QUOTE FROM BINANCE API AND ADD IT TO DATABASE HERE
    sqlite3_open("/database/suitcase.sql", )
    this->tracked.push_back(new_);
}

void DBOrchestrator::createCase(std::string username){
    
}