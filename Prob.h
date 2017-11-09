#ifndef WG_SINGLETON_PROB_H
#define WG_SINGLETON_PROB_H

#include <iostream>

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
//        std::cout << "Prob::destructor" << std::endl;
    }

    Prob() {
        number = -3;
        name = "NO NAME";
        array = nullptr;
    }

    void hi() {
        std::cout << "hi, " << number << "! -- " << this << std::endl;
    }
};


#endif //WG_SINGLETON_PROB_H
