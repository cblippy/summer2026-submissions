#include "Computer.h"
#include <iostream>

Computer::Computer()
{
    brand = "";
    cpu = nullptr;
}

Computer::Computer(string brand, Processor* cpu)
{
    this->brand = brand;
    if (cpu != nullptr)
    {
        this->cpu = new Processor (*cpu);
    }
    else
    {
        this->cpu = nullptr;
    }
}

Computer::Computer(string brand, string model, double clockSpeedGHz)
{
    this->brand = brand;
    cpu = new Processor(model, clockSpeedGHz);
}

Computer::Computer(const Computer& other)
{
    brand = other.brand;
    if (other.cpu != nullptr)
    {
        cpu = new Processor(*other.cpu);
    }
    else
    {
        cpu = nullptr;
    }
}

Computer& Computer::operator=(const Computer& other)
{
    if (this != &other)
    {
        delete cpu;
        brand = other.brand;
        if (other.cpu != nullptr)
        {
            cpu = new Processor(*other.cpu);
        }
        else
        {
            cpu = nullptr;
        }
    }
    return *this;
}

string Computer::getBrand() const
{
    return brand;
}

Processor* Computer::getCpu() const
{
    return cpu;
}

void Computer::setBrand(string brand)
{
    this->brand = brand;
}

void Computer::setCpu(Processor* cpu)
{
    delete this->cpu;
    if (cpu != nullptr)
    {
        this->cpu = new Processor(*cpu);
    }
    else
    {
        this->cpu = nullptr;
    }
}

bool Computer::operator==(const Computer& other) const
{
    if (cpu == nullptr || other.cpu == nullptr)
    {
        return false;
    }
    return brand == other.brand&& cpu->getClockSpeedGHz() == other.cpu
                    ->getClockSpeedGHz();
}

ostream& operator<<(ostream& out, const Computer& computer)
{
    out << "Brand: " << computer.brand << endl;
    if (computer.cpu != nullptr)
    {
        out << "Processor: " << computer.cpu->getModel() << endl;
        out << "Speed of Clock: " << computer.cpu->getClockSpeedGHz() << endl;
    }
    else
    {
        out << "No Processor";
    }
    return out;
}