#include <iostream>
#include <thread>

class background_task{
public:
    void operator() () const{
        std::cout << "doing something" <<std::endl;
    }
};

int main(){

        
    // This is an object definition.
    background_task f;
    std::thread my_thread(f);

    //Avoid C++'s most vexing parse.
    //using extra set of parentheses
    std::thread my_thread((background_task()));

    //using new uniform initialization syntax
    std:: thread my_thread{background_task()};

    //using lambda expression
    std:: thread my_thread([]{
        std::cout << "doing something" <<std::endl;
    });

};
