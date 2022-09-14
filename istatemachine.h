#ifndef ISTATEMACHINE_H
#define ISTATEMACHINE_H

#include<bits/stdc++.h>
using namespace std;
enum state
{
    Idle,
    Running,
    Standby
};

class IStateMachine
{
public:
    IStateMachine();
    virtual  state getState() = 0;
    virtual bool onNextState() = 0;
};

#endif // ISTATEMACHINE_H
