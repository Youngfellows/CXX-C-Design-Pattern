#include "../../include/context/NetworkProcessor.h"

NetworkProcessor::NetworkProcessor(INetworkState *state)
{
    cout << "NetworkProcessor()构造函数" << endl;
    this->state = state;
}

NetworkProcessor::~NetworkProcessor()
{
    cout << "~NetworkProcessor()析构函数" << endl;
}

void NetworkProcessor::setState(INetworkState *state)
{
    this->state = state;
}

void NetworkProcessor::doAction1()
{
    this->state->operation1();
    this->state = this->state->getNext();
}

void NetworkProcessor::doAction2()
{
    this->state->operation2();
    this->state = this->state->getNext();
}

void NetworkProcessor::doAction3()
{
    this->state->operation3();
    this->state = this->state->getNext();
}