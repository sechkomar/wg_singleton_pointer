#include <memory>
#include "smart_pointer.h"
#include "Prob.h"

void fun(smart_pointer<Prob> p) {
    std::cout << "fun for ";
    p.get_object()->get_description();
}


int main() {
//    Singleton &singleton = Singleton::instance();
//    smart_pointer<Prob> smart_prob(new Prob(1, "name1"));

//    auto *prob = new Prob(5, "fg");
//    smart_pointer<Prob> ptr(prob);


//    ptr.get_object()->get_description();

//    smart_pointer<Prob> ptr1(prob);
//    ptr1.get_object()->get_description();


//    std::shared_ptr<Prob> shared_ptr(prob);
//    std::shared_ptr<Prob> ptr = shared_ptr;

//    shared_ptr.operator->()->get_description();


    auto *prob = new Prob(567, "ddddd");

    smart_pointer<Prob> ptr(prob);
    ptr.get_object()->hi();

//    smart_pointer<Prob> ptr1(ptr);

    smart_pointer<Prob> ptr2(new Prob(11, "111"));
    ptr2.get_object()->hi();


    ptr2 = ptr;

    return 0;
}
