#ifndef SKYSCRAPERS_H
#define SKYSCRAPERS_H

#include "../House.h"

/**
 * @brief 派生类: 摩天大楼
 *
 */
class Skyscrapers : public House
{
private:
    std::string name;   //名字
    std::string ground; //地板
    std::string wall;   //墙壁
    std::string window; //窗户
    std::string door;   //门
    std::string roof;   //屋顶

public:
    Skyscrapers(std::string name);
    ~Skyscrapers();
    virtual void setGround(std::string ground) override;
    virtual void setWall(std::string wall) override;
    virtual void setWindow(std::string window) override;
    virtual void setDoor(std::string door) override;
    virtual void setRoof(std::string roof) override;
    virtual std::string getGround() override;
    virtual std::string getWall() override;
    virtual std::string getWindow() override;
    virtual std::string getDoor() override;
    virtual std::string getRoof() override;
    virtual void showHouse() override;
};
#endif