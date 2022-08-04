#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //访问者模式
    std::shared_ptr<ShoppingCart> shoppingCart = std::make_shared<ShoppingCart>();         //购物车
    std::shared_ptr<IProduct> apple = std::make_shared<Apple>("陕西红富士", 9.88);         //商品,苹果
    std::shared_ptr<IProduct> book = std::make_shared<Book>("现代C++语言特性解析", 65.00); //商品,书籍

    shoppingCart->addProduct(apple);
    shoppingCart->addProduct(book);

    //访问者
    std::shared_ptr<IVisitor> customer = std::make_shared<Customer>("慕容秋荻");
    std::shared_ptr<IVisitor> saler = std::make_shared<Saler>("小龙女");

    //接收访问者1
    shoppingCart->accept(customer);

    //接收访问者2
    shoppingCart->accept(saler);

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