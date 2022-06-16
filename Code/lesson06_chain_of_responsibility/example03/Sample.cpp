#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //责任链模式 - 使用智能指针
    std::shared_ptr<Manager> jingli = std::make_shared<CommonManager>();
    std::shared_ptr<Manager> zhongjian = std::make_shared<Majordomo>();
    std::shared_ptr<Manager> zhongjingli = std::make_shared<GeneralManager>();

    //设置上下级关系
    jingli->setSuperior(zhongjian);
    zhongjian->setSuperior(zhongjingli);
    zhongjingli->setSuperior(nullptr);

    //请假
    std::shared_ptr<Request> request = std::make_shared<Request>("张无忌",LEVEL_3,"生病了,请个假",2);
    std::shared_ptr<Response> response = jingli->handle(request);
    cout << response->response() << endl;

    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    //责任链模式 - 使用智能指针
    std::shared_ptr<Manager> jingli = std::make_shared<CommonManager>();
    std::shared_ptr<Manager> zhongjian = std::make_shared<Majordomo>();
    std::shared_ptr<Manager> zhongjingli = std::make_shared<GeneralManager>();

    //设置上下级关系
    jingli->setSuperior(zhongjian);
    zhongjian->setSuperior(zhongjingli);
    zhongjingli->setSuperior(nullptr);

    //请假
    std::shared_ptr<Request> request = std::make_shared<Request>("周芷若",LEVEL_2,"要去医院做产检,请个假",4);
    std::shared_ptr<Response> response = jingli->handle(request);
    cout << response->response() << endl;
    
    cout << endl;
}

void test3()
{
    cout << "test3():: ..." << endl;
    //责任链模式 - 使用智能指针
    std::shared_ptr<Manager> jingli = std::make_shared<CommonManager>();
    std::shared_ptr<Manager> zhongjian = std::make_shared<Majordomo>();
    std::shared_ptr<Manager> zhongjingli = std::make_shared<GeneralManager>();

    //设置上下级关系
    jingli->setSuperior(zhongjian);
    zhongjian->setSuperior(zhongjingli);
    zhongjingli->setSuperior(nullptr);

    //请假
    std::shared_ptr<Request> request = std::make_shared<Request>("杨过",LEVEL_1,"回趟老家,请个假",8);
    std::shared_ptr<Response> response = jingli->handle(request);
    cout << response->response() << endl;
    
    cout << endl;
}

void test4()
{
    cout << "test4():: ..." << endl;
    cout << endl;
}