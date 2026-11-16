#include <exception>

class DatabaseError : std::exception{ 
    const char* msg;
    public:
        DatabaseError(const char* message) : msg(message){}
        const char* what() const noexcept {
            return msg;
        }
};
