#include "../include/Messager.h"

Messager::Messager(MessagerImp *messagerImpl)
{
    this->messagerImpl = messagerImpl;
}