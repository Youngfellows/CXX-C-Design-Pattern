#ifndef SAMPLE_H
#define SAMPLE_H

#include "./Global.h"
#include "./expression/AndExpression.h"
#include "./expression/OrExpression.h"
#include "./expression/TerminalExpression.h"

void test1();
void test2();
void test3();
void test4();

std::shared_ptr<Expression> getMaleExpression();
std::shared_ptr<Expression> getMarriedWomanExpression();

#endif