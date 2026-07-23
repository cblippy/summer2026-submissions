#ifndef COMPUTER_H
#define COMPUTER_H
#include "Processor.h"
#include <string>
using namespace std;

class Computer
{
private: 
    string brand;
    Processor* cpu;
public: 
    Computer();
    Computer(string brand,Processor* cpu);
    Computer(string brand, string model, double clockSpeed);
    ~Computer();

    string getBrand() const;
    Processor* getCpu() const;

    void setBrand(string brand);
    void setCpu(Processor* cpu);

    bool operator==(const Computer& other) const;
    friend ostream& operator<<(ostream& out, const Computer& computer);
};
#endif