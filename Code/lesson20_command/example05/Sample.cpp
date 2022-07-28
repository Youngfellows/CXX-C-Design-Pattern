#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //命令模式
    std::shared_ptr<IImage> image = std::make_shared<Image>(600, 400);                //接收者
    image->display();                                                                 //不做缩放显示
    std::shared_ptr<ICommand> command = std::make_shared<ImageProcessCommand>(image); //操作图片的命令
    command->zooming(2);                                                              //放大2倍
    image->display();                                                                 //显示图片
    command->zooming(3);                                                              //放大3倍
    image->display();                                                                 //显示图片
    command->zooming(1.5);                                                            //放大1.5倍
    image->display();                                                                 //显示图片

    cout << "xxxxxxxxxxx" << endl;
    command->undo();  //撤销上一次操作
    image->display(); //显示
    command->undo();  //撤销上一次操作
    image->display(); //显示

    cout << "yyyyyyyyyy" << endl;
    command->redo();  //恢复上一次操作
    image->display(); //显示
    command->redo();  //恢复上一次操作
    image->display(); //显示

    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    cout << endl;
}

void test3()
{
    cout << "test3():: ..." << endl;
    cout << endl;
}

void test4()
{
    cout << "test4():: ..." << endl;
    cout << endl;
}