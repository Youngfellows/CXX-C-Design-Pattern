#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //桥接模式
    MessagerImp *messagerImpl = new PCMessagerImpl();    // PC端消息
    Messager *messager = new LiteMessager(messagerImpl); //简单消息

    //发送简单消息
    Image *image = new Image("张无忌_帅哥.png");
    messager->login("张无忌", "123456");
    messager->sendMessage("敏敏我好想你呀...");
    messager->sendPicture(image);

    //释放内存
    delete image;
    delete messagerImpl;
    delete messager;
    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    //桥接模式
    std::shared_ptr<MessagerImp> messagerImpl = std::make_shared<PCMessagerImpl>();             // PC端消息
    std::shared_ptr<Messager> messager = std::make_shared<PerfectMessager>(messagerImpl.get()); //完美消息

    //发送复杂化消息
    std::shared_ptr<Image> image = std::make_shared<Image>("谢晓峰与慕容秋荻宝宝.jpg");
    messager->login("谢晓峰", "7654321");
    messager->sendMessage("秋荻,我们晚上在神剑山庄约会吧,我把宝宝照片给你看 ...");
    messager->sendPicture(image.get());

    cout << endl;
}

void test3()
{
    cout << "test3():: ..." << endl;
    //桥接模式
    std::shared_ptr<MessagerImp> messagerImpl = std::make_shared<MobileMessagerImpl>();         // 移动端消息
    std::shared_ptr<Messager> messager = std::make_shared<PerfectMessager>(messagerImpl.get()); //完美消息

    //发送复杂化消息
    std::shared_ptr<Image> image = std::make_shared<Image>("杨过&小龙女.jpg");
    messager->login("杨过", "7654321");
    messager->sendMessage("姑姑,过儿想你了 ...");
    messager->sendPicture(image.get());
    cout << endl;
}

void test4()
{
    cout << "test4():: ..." << endl;
    //桥接模式
    std::shared_ptr<MessagerImp> messagerImpl = std::make_shared<MobileMessagerImpl>();      // 移动端消息
    std::shared_ptr<Messager> messager = std::make_shared<LiteMessager>(messagerImpl.get()); //完美消息

    //发送复杂化消息
    std::shared_ptr<Image> image = std::make_shared<Image>("郭靖&黄蓉.jpg");
    messager->login("郭靖", "8788");
    messager->sendMessage("蓉儿,我们到桃花岛去旅游吧 ...");
    messager->sendPicture(image.get());
    cout << endl;
}