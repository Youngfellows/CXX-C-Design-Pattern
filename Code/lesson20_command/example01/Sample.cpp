#include "./include/Sample.h"

void test1()
{
    cout << "test1():: ..." << endl;
    //不使用命令模式,医生直接看病
    std::shared_ptr<IDoctor> doctor = std::make_shared<Doctor>("杨过", "北京大学深圳医院");
    doctor->treatEye();
    doctor->treatNose();

    cout << endl;
}

void test2()
{
    cout << "test2():: ..." << endl;
    //通过命令看病
    std::shared_ptr<IDoctor> doctor = std::make_shared<Doctor>("慕容秋荻", "深圳市中医院");
    std::shared_ptr<ICommand> treatEyeCommand = std::make_shared<TreatEyeCommand>(doctor);
    std::shared_ptr<ICommand> treatNoseCommand = std::make_shared<TreatNoseCommand>(doctor);
    treatEyeCommand->treat();
    treatNoseCommand->treat();

    cout << endl;
}

void test3()
{
    cout << "test3():: ..." << endl;
    //命令模式,通过护士发布命令
    std::shared_ptr<IDoctor> doctor = std::make_shared<Doctor>("谢晓峰", "深圳市香港大学医院");
    std::shared_ptr<ICommand> treatEyeCommand = std::make_shared<TreatEyeCommand>(doctor);
    std::shared_ptr<INurse> beautyNurse = std::make_shared<BeautyNurse>(treatEyeCommand);
    //通过Invorker执行Command对象
    beautyNurse->submittedCase();

    //更新命令
    doctor = std::make_shared<Doctor>("小龙女", "福田区第二人民医院");
    std::shared_ptr<ICommand> treateNoseCommand = std::make_shared<TreatNoseCommand>(doctor);
    beautyNurse->setCommand(treateNoseCommand);
    beautyNurse->submittedCase();

    cout << endl;
}

void test4()
{
    cout << "test4():: ..." << endl;
    //命令模式,护士长批量发布命令
    std::shared_ptr<IDoctor> doctor1 = std::make_shared<Doctor>("令狐冲", "上海市华山医院");
    std::shared_ptr<ICommand> treateEyeCommand = std::make_shared<TreatEyeCommand>(doctor1);
    std::shared_ptr<IDoctor> doctor2 = std::make_shared<Doctor>("王语嫣", "中南大学湘雅医院");
    std::shared_ptr<ICommand> treateNoseCommand = std::make_shared<TreatNoseCommand>(doctor2);

    //护士长
    std::shared_ptr<INurse> headNurse = std::make_shared<HeadNurse>();
    headNurse->setCommand(treateEyeCommand);
    headNurse->setCommand(treateNoseCommand);

    //批量执行命令
    headNurse->submittedCase();

    cout << endl;
}