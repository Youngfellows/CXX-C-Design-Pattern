#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //状态模式
    srand(time(0));
    std::shared_ptr<IProcess> process = std::make_shared<Process>("Android");
    while (true)
    {
        try
        {
            //获取0~3的随机数
            // int op = rand() % 3;//使用求余数方式
            int op = rand() & 0x3; //取最后两位的值
            switch (op)
            {
            case RESUME:
                process->resumedByCpu();
                break;
            case TIMEOUT:
                process->timeSlotEnd();
                break;
            case NEEDIO:
                process->needIO();
                break;
            case FINISHIO:
                process->finishIO();
                break;
            }
        }
        catch (ImpossibleException ex)
        {
            cout << "不支持的状态 ..." << endl;
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(1000)); //休眠1000毫秒
    }

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