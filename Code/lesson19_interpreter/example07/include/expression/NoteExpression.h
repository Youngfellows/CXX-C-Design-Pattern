#ifndef NOTE_EXPRESSION_H
#define NOTE_EXPRESSION_H

#include "./Expression.h"

/**
 * @brief 注释解析器
 *
 */
class NoteExpression : public Expression
{
private:
public:
    NoteExpression();
    ~NoteExpression();

protected:
    virtual void excute(const std::string &key, const std::string &value) override; //实现excute()函数
};
#endif