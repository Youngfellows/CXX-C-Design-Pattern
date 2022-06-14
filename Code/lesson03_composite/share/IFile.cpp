#include "../include/IFile.h"

IFile::~IFile()
{
    cout << "~IFile():: ..." << endl;
}

void IFile::display()
{
    display("");
}

string IFile::toString()
{
    return getName() + "(" + to_string(getSize()) +")";
}