#include "../include/Compiler.h"

Compiler::Compiler()
{
    cout << "Compiler()构造函数" << endl;
    this->scanner = std::make_shared<Scanner>();
    this->parser = std::make_shared<Parser>();
    this->genMidCode = std::make_shared<GenMidCode>();
    this->genMachineCode = std::make_shared<GenMachineCode>();
}

Compiler::~Compiler()
{
    cout << "~Compiler()析构函数" << endl;
}

/**
 * @brief 运行编译器
 * 
 */
void Compiler::run()
{
    this->scanner->scan();
    this->parser->parse();
    this->genMidCode->genCode();
    this->genMachineCode->genCode();
}
