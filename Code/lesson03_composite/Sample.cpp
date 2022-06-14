#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //组合模式 - 创建对象,动态申请内存
    Menu *menu1 = new CompositMenu("国内新闻");
    Menu *subMenu1 = new SubMenu("时事新闻");
    Menu *subMenu2 = new SubMenu("社会新闻");
    menu1->add(subMenu1);
    menu1->add(subMenu2);
    menu1->display();

    Menu *menu2 = new CompositMenu("国际新闻");
    Menu *subMenu21 = new SubMenu("国际要闻");
    Menu *subMenu22 = new SubMenu("环球视野");
    menu2->add(subMenu21);
    menu2->add(subMenu22);
    menu2->display();

    //释放内存
    delete menu1;
    delete menu2;
    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;

    //组合图
    CompoundGraphic *all = new CompoundGraphic();

    //添加子图
    Dot *d1 = new Dot(1,2);
    Circle *c1 = new Circle(5,2,3);

    CompoundGraphic *childGraphic = new CompoundGraphic();
    Dot *d2 = new Dot(4,7);
    Dot *d3 = new Dot(3,2);
    childGraphic->add(0,d2);
    childGraphic->add(1,d3);

    //将所有图添加到组合图中
    all->add(0,d1);
    all->add(1,c1);
    all->add(2,childGraphic);

    //移动
    all->move2somewhere(8,9);

    //绘制
    all->draw();

    //释放内存
    delete all;
    delete c1;
    delete d1;
    delete d2;
    delete d3;
    cout << endl;
}

void test3()
{
    cout << "test3():: ..." << endl;
    //组和模式 - 动态申请内存
    Directory *root = new Directory("root");
    Directory *bin = new Directory("bin");
    Directory *tmp = new Directory("tmp");
    Directory *usr = new Directory("usr");

    //添加子结点
    root->add(bin);
    root->add(tmp);
    root->add(usr);

    //添加文件
    bin->add(new File("vi",3000));
    bin->add(new File("latex", 2000));

    //打印
    static_cast<IFile *>(root)->display();

    Directory *yuki = new Directory("yuki");
    Directory *hanako = new Directory("hanako");
    Directory *tomura = new Directory("tomura");
    usr->add(yuki);
    usr->add(hanako);
    usr->add(tomura);
    yuki->add(new File("diary.html", 100));
    hanako->add(new File("memo.tex", 1024));
    tomura->add(new File("junk.mail", 40));

    static_cast<IFile *>(root)->display();
    // for test coverage
    {
        File *f = new File("123.txt", 1);
        f->add(root);
        f->display("");
        delete f;
    }
    {
        yuki->display("");
    }
    {
        File *f = new File("123.txt", 1);
        IFile *e = new Directory("test");
        e->add(f);
        e->display("");
        e->toString();
        delete e;
    }

    cout << endl;
    //释放内存
    delete root;
}


void test4()
{
    cout << "test4():: ..." << endl;
    cout << endl;
}

void test5()
{
    cout << "test5():: ..." << endl;
    cout << endl;
}

void test6()
{
    cout << "test6():: ..." << endl;
    cout << endl;
}

void test7()
{
    cout << "test7():: ..." << endl;
    cout << endl;
}

void test8()
{
    cout << "test8():: ..." << endl;
    cout << endl;
}

void test9()
{
    cout << "test9():: ..." << endl;
    cout << endl;
}