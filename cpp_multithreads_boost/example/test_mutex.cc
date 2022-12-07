//
// Created by hazy parker on 22-12-7.
// refer: https://blog.csdn.net/heurobocon/article/details/113542461

#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

class mutexTest {
public:
    char _character;
    mutex* _mut{};
    explicit mutexTest(char character):_character(character) {
    }
    void run() const {
        _mut->lock();
        for (int i = 0; i < 10; i++) {
            cout<<_character;
        }
        _mut->unlock();
    }
};

int main() {
    mutex mut;  // create a mutex variable
    mutexTest testClass1('*');
    testClass1._mut = &mut;
    mutexTest testClass2('&');
    testClass2._mut = &mut;
    // create threads
    auto* testThread1 = new thread(&mutexTest::run, &testClass1);  //start thread 1
    auto* testThread2 = new thread(&mutexTest::run, &testClass2);  //start thread 2
    // wait for threads to finish
    testThread1->join();  //wait for thread 1 to finish
    testThread2->join();  //wait for thread 2 to finish
    cout << endl;
}

