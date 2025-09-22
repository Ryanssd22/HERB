#ifndef CIRCUIT
#define CIRCUIT

#include <iostream>
#include <vector>
#include "Component.h"
#include "Node.h"

//the actual circuit is just a map of components connected to nodes
class Circuit {
public:
    void addComponent();
    void removeComponent();
    void calcEqResistanc(); //between two points
    void connectNodes();

    //you are returning a const reference to a vector of component pointers in which
    //you will not change them
    const vector<Component*>& getComponents() const;

private:
    //just want pointer to different components from the circuit
    std::vector<Component*> components;
    //
    std::vector<Node> nodes;

};

#endif
