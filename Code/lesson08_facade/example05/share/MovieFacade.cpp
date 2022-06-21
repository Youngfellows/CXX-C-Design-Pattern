#include "../include/MovieFacade.h"

MovieFacade::MovieFacade()
{
    cout << "MovieFacade()构造函数" << endl;
    this->projector = new Projector();
    this->amplifier = new Amplifier();
    this->dvdPlayer = new DVDPlayer();
    this->light = new Light();
}

MovieFacade::~MovieFacade()
{
    cout << "~MovieFacade()析构函数" << endl;
    //释放内存
    delete this->projector;
    delete this->amplifier;
    delete this->dvdPlayer;
    delete this->light;
}

void MovieFacade::openMovie()
{
    cout << "MovieFacade::openMovie():: ..." << endl;
    this->projector->openScreen();
    this->projector->setViewport();
    this->amplifier->openAmplifier();
    this->light->turnOnLight();
}

void MovieFacade::closeMovie()
{
    cout << "MovieFacade::closeMovie():: ..." << endl;
    this->projector->closeScreen();
    this->amplifier->closeAmplifier();
    this->dvdPlayer->closeDVDPlayer();
    this->light->turnOffLight();
}