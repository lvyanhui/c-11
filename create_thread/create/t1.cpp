#include <iostream>
#include <thread>

void thread_function() {
    std::cout << "thread function\n";	
}

int main() {
    //std::thread t(&thread_function);  //ok
    std::thread t(thread_function);     //ok, too
	std::cout << "main thread\n";
	t.join();
	return 0;
}

