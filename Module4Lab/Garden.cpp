#include "Garden.h"

Garden::Garden()
    : fountain("Fountain",
               "An ornate stone fountain sits in the middle of the garden."),
      bench("Bench",
            "A stone bench rests beneath a large oak tree."),
      gate("Side Gate", "An ivy-covered gate leads out of the garden.",
           "a dense, green forest")
{
}

Fountain& Garden::getFountain()
{
    return fountain;
}

Bench& Garden::getBench()
{
    return bench;
}

Gate& Garden::getGate()
{
    return gate;
}

void Garden::displayLocations() const
{
    cout << endl;
    cout << "Choose a location:" << endl;
    cout << "1. " << fountain.getName() << endl;
    cout << "2. " << bench.getName() << endl;
    cout << "3. " << gate.getName() << endl;
    cout << "4. Quit" << endl;
}