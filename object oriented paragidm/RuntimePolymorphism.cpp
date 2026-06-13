#include <iostream>
using namespace std;

// Abstract Base Class
class OperatingSystem {
public:
    // Pure Virtual Function - forces derived classes to implement this
    virtual void boot() = 0; 
    
    // Virtual Function - can be overridden, but has a default implementation
    virtual void showArchitecture() {
        cout << "[System] Standard 64-bit Architecture." << endl;
    }
    
    // Virtual Destructor - crucial for proper memory cleanup in polymorphism
    virtual ~OperatingSystem() {
        cout << "[System] Shutting down OS..." << endl;
    }
};

// Derived Class 1
class FluxKernel : public OperatingSystem {
public:
    void boot() override {
        cout << "\n[FluxKernel] Booting AI-Driven OS... Initializing Neural Pathways..." << endl;
    }
    
    void showArchitecture() override {
        cout << "[FluxKernel] Custom AI Architecture with Autonomous Agent Support." << endl;
    }
    
    ~FluxKernel() {
        cout << "[FluxKernel] Powering down AI cores..." << endl;
    }
};

// Derived Class 2
class RedTerminal : public OperatingSystem {
public:
    void boot() override {
        cout << "\n[RedTerminal] Booting Low-Level Execution Shell... Root access granted." << endl;
    }
    
    // Uses the base class implementation of showArchitecture()
    
    ~RedTerminal() {
        cout << "[RedTerminal] Terminating shell session..." << endl;
    }
};

int main() {
    cout << "=== System Boot Manager ===" << endl;

    // Base class pointer holding Derived class objects (Runtime Polymorphism)
    OperatingSystem* os1 = new FluxKernel();
    OperatingSystem* os2 = new RedTerminal();

    // The correct overridden function is called at RUNTIME
    os1->boot();
    os1->showArchitecture();
    
    os2->boot();
    os2->showArchitecture();

    cout << "\n=== Initiating Shutdown ===" << endl;
    delete os1;
    delete os2;

    return 0;
}

/*
Concept: Runtime Polymorphism & Virtual Functions
___________________________________________________
This code demonstrates how a Base class pointer can dynamically 
call the overridden methods of Derived classes at runtime. 
This is the backbone of scalable software architecture!
*/