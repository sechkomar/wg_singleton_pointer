#ifndef WG_SINGLETON_SINGLETON_H
#define WG_SINGLETON_SINGLETON_H


class Singleton {
private:

    Singleton() = default;;

    ~Singleton() = default;

public:

    static Singleton &instance() {
        static Singleton singleton;

        return singleton;
    }

    Singleton(Singleton &) = delete;

    void operator=(Singleton const &) = delete;

};


#endif //WG_SINGLETON_SINGLETON_H
