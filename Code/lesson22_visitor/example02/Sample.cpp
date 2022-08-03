#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //访问者模式
    std::shared_ptr<IElement> employeeA = std::make_shared<EmployeeA>("小龙女"); //柜员A
    std::shared_ptr<IElement> employeeB = std::make_shared<EmployeeB>("练霓裳"); //柜员A

    std::shared_ptr<IVisitor> customerA = std::make_shared<CustomerA>("杨过");   //客户A
    std::shared_ptr<IVisitor> customerB = std::make_shared<CustomerB>("张无忌"); //客户B
    std::shared_ptr<IVisitor> customerC = std::make_shared<CustomerB>("卓一航"); //客户B

    //柜台接受客户访问,为客户办事情
    employeeA->accept(customerA);
    employeeB->accept(customerB);
    employeeB->accept(customerC);

    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    //访问者模式
    std::shared_ptr<IElement> employeeA = std::make_shared<EmployeeA>("小龙女");            //柜员A
    std::shared_ptr<IElement> employeeB = std::make_shared<EmployeeB>("练霓裳");            //柜员A
    std::shared_ptr<EmployeeManager> manager = std::make_shared<EmployeeManager>("谢晓峰"); //银行管理者
    manager->addElement(employeeA);
    manager->addElement(employeeB);

    std::shared_ptr<IVisitor> customerA = std::make_shared<CustomerA>("杨过");   //客户A
    std::shared_ptr<IVisitor> customerB = std::make_shared<CustomerB>("张无忌"); //客户B
    std::shared_ptr<IVisitor> customerC = std::make_shared<CustomerB>("卓一航"); //客户B

    //管理者把来访任务分配给各个柜台员工
    manager->doSomeThing();
    manager->accept(customerA);
    cout << "******************************************" << endl;
    manager->accept(customerB);
    cout << "******************************************" << endl;
    manager->accept(customerC);

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