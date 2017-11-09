#include <memory>
#include "smart_pointer.h"
#include "Prob.h"

void fun(smart_pointer<Prob> p) {
    std::cout << "fun for ";
    p.get_object()->get_description();
}


int main() {

    auto *prob = new Prob(567, "ddddd");

    smart_pointer<Prob> ptr(prob);
    ptr.get_object()->hi();

//    smart_pointer<Prob> ptr1(ptr);

    smart_pointer<Prob> ptr2(new Prob(11, "111"));
    ptr2.get_object()->hi();


    ptr2 = ptr;

    return 0;
}
