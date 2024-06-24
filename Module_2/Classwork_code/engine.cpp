
#include <iostream>
using namespace std;

class Engine {
public:
    Engine();
    void Read();
    void Print();
    ~Engine();
private:
    int power;
    int duration;
};

Engine::Engine() {
    power = 0;
    duration = 0;
}

void Engine::Read() {
    cin >> power;
    cin >> duration;
}

void Engine::Print() {
    cout << "Engine's power: " << power << endl;
    cout << "Engine's duration: " << duration << endl;
}

Engine::~Engine() { // Covered in section on Destructors.
    cout << "Engine with power " << power << " and duration " << duration << " is deallocated." << endl;
}

int main() {
    Engine* myEngines = nullptr;
    int count;
    int i;

    /* Your code goes here */
    cin >> count;
    return 0;
}
