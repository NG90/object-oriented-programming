#include <string>

class Ship {
public:
    int getId() const { return id_; }
    std::string getName() const { return name_; }
    size_t getSpeed() const { return speed_; }
    size_t getMaxCrew() const { return maxCrew_; }
    size_t cgetCpacity() const { return capacity_; }

    Ship()
        : id_(-1) {}

    Ship(int id, const std::string& name, size_t speed, size_t maxCrew, size_t capacity)
        : id_(id), name_(name), speed_(speed), maxCrew_(maxCrew), capacity_(capacity) {}

    Ship(int id, size_t speed, size_t maxCrew)
        : Ship(id, "", speed, maxCrew, 0) {}

    Ship& operator+=(const int addCrew) {
        //TODO: std::clamp do sprawdzenia czy nie przekroczymy maxCrew_
        crew_ += addCrew;
        return *this;
    }

    Ship& operator-=(const int subCrew) {
        //TODO: std::clamp do sprawdzenia czy nie poniżej 0
        crew_ -= subCrew;
        return *this;
    }

private:
    const int id_;
    std::string name_;
    size_t speed_;
    size_t maxCrew_;
    size_t capacity_;
    size_t crew_ = 0;
};
