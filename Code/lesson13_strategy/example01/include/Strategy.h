#ifndef STRATEGY_H
#define STRATEGY_H

/**
 * @brief 抽象类,接口: 加密策略
 * @brief 对称加密：速度快，加密大数据块文件。特点:加密密钥和解密密钥是一样的(AES/DES)
 * @brief 非对称加密：加密速度慢，加密强度高，高安全性高;特点: 加密密钥和解密密钥不一样密钥对(公钥和私钥)(RSA)
 * 
 */
class Strategy
{
    public:

        /**
         * @brief 默认析构函数
         * 
         */
       virtual  ~Strategy() = default;

       /**
        * @brief 纯虚函数,抽象接口: 加密算法
        * 
        */
       virtual void crypt() = 0;
};

#endif