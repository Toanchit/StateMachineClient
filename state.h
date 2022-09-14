#ifndef STATE_H
#define STATE_H
class state
{
    state();
    virtual bool handleMessage(int message) = 0;
};

#endif // STATE_H
