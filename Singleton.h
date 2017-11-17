#ifndef WG_SINGLETON_SINGLETON_H
#define WG_SINGLETON_SINGLETON_H

#include <iostream>

class Singleton {
private:

    Singleton() {
        name = "i am singleton";
    };

    ~Singleton() {
        std::cout << "Singleton::destructor" << std::endl;
    };

    std::string name;

public:

    static Singleton &instance() {
        static Singleton singleton;

        return singleton;
    }

    std::string get_name() {
        return name;
    }

    Singleton(Singleton &) = delete;
    void operator=(Singleton const &) = delete;

};


#endif //WG_SINGLETON_SINGLETON_H
