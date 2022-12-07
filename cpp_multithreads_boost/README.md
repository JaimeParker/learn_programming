# Multi threading and Sharing Data between threads in c++

Multi threads skill can be used in complicated cpp projects, 
when single thread cannot satisfy the need for complex tasks,
which may contain communication between those threads and some sharing data process.

So it's a necessary qualification for cpp developer or engineer to handle.

## Multi thread

c++ 11 gave a standard library to realize single and multi threads function called `std::thread`.

To start a thread:
* create a new thread object
* pass the executable code(called object) into the constructor of the object
* object is created, a new thread is launched, code in the callable will be executed

A callable (called object) can be:
* A function pointer
* A function object
* A lambda expression

```cpp
#include thread
std::thread thread_object(callable)
```

for function pointer, the callable should be `function, params`

a standard process for composing a thread is:
```cpp
// start thread t1
std::thread t1(callable);
// wait for t1 to finish
t1.join();
// t1 has finished, do other stuff
```

