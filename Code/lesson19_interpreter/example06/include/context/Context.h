#ifndef CONTEXT_H
#define CONTEXT_H

#include "../Global.h"
#include "../expression/Variable.h"

class Variable;

class Context
{
public:
    void registerVariable(Variable *var, int value)
    {
        m_map.insert({var, value});
    }
    int lookUpValue(Variable *var)
    {
        auto itor = m_map.find(var);
        if (itor != m_map.end())
        {
            return itor->second;
        }
        return 0;
    }

private:
    std::unordered_map<Variable *, int> m_map;
};

#endif