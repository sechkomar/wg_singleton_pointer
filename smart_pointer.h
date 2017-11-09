#ifndef WG_SINGLETON_SMARTPOINTER_H
#define WG_SINGLETON_SMARTPOINTER_H

#include <iostream>
#include <typeinfo>
#include <vector>

template<typename T>
class smart_pointer {

private:

    struct ref_count {
        int count;

        ref_count() : count(1) {}

        void add() {
            count++;
        }

        int sub() {
            count--;
            return count;
        }
    };

    T *pointer;
    ref_count *refs;

    void final_destructor() {
//        std::cout << "final sp::destructor for " << pointer << std::endl;
        delete pointer;
        delete refs;
    }

public:

    smart_pointer(T *pointer) {
        this->pointer = pointer;
        refs = new ref_count();
    }

    ~smart_pointer() {
        if (refs->sub() == 0) {
            final_destructor();
        }
//        else {
//            std::cout << "sp::destructor for " << pointer << ": " << refs->count << " more copies left\n";
//        }
    }

    T *get_object() const {
        return pointer;
    }

    void *operator new(std::size_t size) throw(std::bad_alloc) = delete;

    smart_pointer(const smart_pointer<T> &sp) : pointer(sp.pointer), refs(sp.refs) {
        refs->add();
    }

    smart_pointer<T> &operator=(const smart_pointer &sp) {
        if (this != &sp) {
            if (this->refs->sub() == 0) {
                final_destructor();
            }

            this->pointer = sp.pointer;
            this->refs = sp.refs;
            this->refs->add();
        }
    }

};


#endif //WG_SINGLETON_SMARTPOINTER_H