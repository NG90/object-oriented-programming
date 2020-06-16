#include <string>

class Cargo {
public:
    Cargo& operator+=(const size_t amount) {
        amount_ += amount;
        return *this;
    }
    Cargo& operator-=(const size_t amount) {
        amount_ -= amount;
        return *this;
    }

private:
    std::string name_;
    size_t amount_;
    size_t basePrice_;
};
