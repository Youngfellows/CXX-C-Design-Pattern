#include "../../include/messager/LiteMessager.h"

void LiteMessager::login(std::string username, std::string password)
{
    this->messagerImpl->connect();
    cout << "LiteMessager::login():: username:" << username << ",password:" << password << endl;
}

void LiteMessager::sendMessage(std::string message)
{
    this->messagerImpl->writeText();
    cout << "LiteMessager::sendMessage():: " << message << endl;
}

void LiteMessager::sendPicture(Image *image)
{
    this->messagerImpl->drawShape();
    cout << "LiteMessager::sendPicture():: " << image->getName() << endl;
}

