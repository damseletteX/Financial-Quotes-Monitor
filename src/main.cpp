#include "interface.h"
#include <sqlite3.h>
#include <iostream>

int main(){
    try
    {
        if(!sqlite3_open("database/suitcase.sql", default)) throw DatabaseError("Error while opening the DB.\n");
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}