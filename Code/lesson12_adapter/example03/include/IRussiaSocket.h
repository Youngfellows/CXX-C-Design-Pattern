#ifndef IRUSSIA_SOCKET_H
#define IRUSSIA_SOCKET_H


/**
 * @brief 抽象接口: 俄罗斯提供的插座
 * 
 */
class IRussiaSocket
{
    public:
    
       virtual ~IRussiaSocket() = default;

        /**
         * @brief 纯虚函数,抽象接口: 使用双脚圆形充电（暂不实现）
         * 
         */
       virtual void charge() = 0;
};

#endif