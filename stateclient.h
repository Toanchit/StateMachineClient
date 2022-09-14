#ifndef STATECLIENT_H
#define STATECLIENT_H
#include "istatemachine.h"

class StateClient : public IStateMachine
{
public:
    StateClient();
    virtual state getState();
    virtual bool onNextState();
private:
    state mState;
    state mNextState;

};

#endif // STATECLIENT_H
