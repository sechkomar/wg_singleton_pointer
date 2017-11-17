#ifndef WG_SINGLETON_PROB_H
#define WG_SINGLETON_PROB_H

#include <iostream>

//class for tests

class Prob {
private:
    int number;
    std::string name;
    int *array;

public:

    Prob(int number, std::string name) : number(number), name(std::move(name)) {
        array = new int[15];
    }

    int get_description() const {
        std::cout << name << " == " << number << std::endl;
    }

    ~Prob() {
        delete array;
    }

    void hi() {
        std::cout << "hi, " << number << "! -- " << this << std::endl;
    }
};


#endif //WG_SINGLETON_PROB_H
