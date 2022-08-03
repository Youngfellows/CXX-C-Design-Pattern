#include "../../include/structure/ObjectStructure.h"

ObjectStructure::ObjectStructure()
{
    cout << "ObjectStructure()构造函数" << endl;
    this->persons = std::make_shared<std::vector<std::shared_ptr<IPerson>>>();
    this->persons->clear();
}

ObjectStructure::~ObjectStructure()
{
    cout << "~ObjectStructure()析构函数" << endl;
    this->persons->clear();
}

void ObjectStructure::add(std::shared_ptr<IPerson> person)
{
    this->persons->push_back(person);
}

void ObjectStructure::display(std::shared_ptr<IAction> action)
{
    for (auto iter = this->persons->begin(); iter != this->persons->end(); iter++)
    {
        (*iter)->accept(action);
    }
}
