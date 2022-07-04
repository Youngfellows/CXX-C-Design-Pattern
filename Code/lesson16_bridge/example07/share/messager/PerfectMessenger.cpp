#include "../../include/messager/PerfectMessager.h"

void PerfectMessager::login(std::string username, std::string password)
{
    this->messagerImpl->playSound();
    this->messagerImpl->connect();
    cout << "PerfectMessager::login():: username:" << username << ",password:" << password << endl;
}

void PerfectMessager::sendMessage(std::string message)
{
    this->messagerImpl->playSound();
    this->messagerImpl->writeText();
    cout << "PerfectMessager::sendMessage():: " << message << endl;
}

void PerfectMessager::sendPicture(Image *image)
{
    this->messagerImpl->playSound();
    this->messagerImpl->drawShape();
    cout << "PerfectMessager::sendPicture():: " << image->getName() << endl;
}