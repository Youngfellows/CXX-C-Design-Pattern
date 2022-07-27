#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //命令模式
    std::shared_ptr<ITelevision> television = std::make_shared<Television>();              //接收者,电视
    std::shared_ptr<ICommand> tvOpenCommand = std::make_shared<TVOpenCommand>(television); //打开电视的命令
    std::shared_ptr<IController> controller = std::make_shared<Controller>(tvOpenCommand); //触发者,遥控器
    controller->executeCommand();

    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    //命令模式
    std::shared_ptr<ITelevision> television = std::make_shared<Television>();                //接收者,电视
    std::shared_ptr<ICommand> tvCloseCommand = std::make_shared<TVCloseCommand>(television); //关闭电视的命令
    std::shared_ptr<IController> controller = std::make_shared<Controller>(tvCloseCommand);  //触发者,遥控器
    controller->executeCommand();
    cout << endl;
}

void test3()
{
    cout << "test3():: ..." << endl;
    //命令模式
    std::shared_ptr<ITelevision> television = std::make_shared<Television>();                  //接收者,电视
    std::shared_ptr<ICommand> tvChangeCommand = std::make_shared<TVChangeCommand>(television); //切换电视频道的命令
    std::shared_ptr<IController> controller = std::make_shared<Controller>();                  //触发者,遥控器
    controller->setCommand(tvChangeCommand);                                                   //设置命令
    controller->executeCommand();
    cout << endl;
}

void test4()
{
    cout << "test4():: ..." << endl;
    cout << endl;
}