#include "../../include/context/SafeFrame.h"

SafeFrame::SafeFrame() : m_state(&DayState::GetInstance())
{
    cout << "SafeFrame()构造函数" << endl;
}

void SafeFrame::setClock(int hour)
{
    std::cout << "now timw is " << hour << std::endl;
    m_state->doColock(this, hour);
}

void SafeFrame::doAction(ActionType actionType)
{
    switch (actionType)
    {
    case ActionType::ALARM:
        m_state->doAlarm(this);
        break;
    case ActionType::PHONE:
        m_state->doPhone(this);
        break;
    case ActionType::USE:
    default:
        m_state->doUse(this);
        break;
    }
}

void SafeFrame::stateChange(IState *state)
{
    std::cout << __FUNCTION__ << std::endl;
    m_state = state;
}

void SafeFrame::callSecurityCenter(const std::string &msg)
{
    std::cout << __FUNCTION__ << " " << msg << std::endl;
}

void SafeFrame::recoderLog(const std::string &msg)
{
    std::cout << __FUNCTION__ << " " << msg << std::endl;
}