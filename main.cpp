#include <memory>
#include "smart_pointer.h"
#include "Prob.h"
#include "Singleton.h"


int main() {

//    std::cout << Singleton::instance().get_name() << std::endl;

    auto *prob = new Prob(567, "first");

    smart_pointer<Prob> ptr(prob);
    ptr.get_object()->hi();

    smart_pointer<Prob> ptr1(ptr);

    smart_pointer<Prob> ptr2(new Prob(11, "second"));
    ptr2.get_object()->hi();

    ptr2 = new Prob(13, "last prob");
    ptr2.get_object()->hi();

    return 0;
}
