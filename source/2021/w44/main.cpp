#include <iostream>
#include <thread>
#include <stop_token>

using std::this_thread::sleep_for;
using std::chrono::seconds;
using std::cout;
using std::endl;

void thread_loop(bool &running)
{
    int i = 0;
    while(running) {
        sleep_for(seconds(1));
        cout << "running: " << ++i << endl;
    }
}

void jthread_loop(const std::stop_token& stop)
{
    int i = 0;
    while(not stop.stop_requested()) {
        sleep_for(seconds(1));
        cout << "running: " << ++i << endl;
    }
}

int main(int argc, char *argv[])
{   
    bool running{true};
    std::thread t1(thread_loop, std::ref(running));
    sleep_for(seconds(5));
    running = false;
    t1.join();

    std::jthread t2(jthread_loop);
    sleep_for(seconds(5));

    return 0;
}