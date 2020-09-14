/*
 * @Description: 
 * @Author: Geo
 * @Date: 2020-08-31 14:02:39
 * @LastEditTime: 2020-08-31 15:02:53
 * @LastEditors: Geo
 * @Copyright: 
 * @Copyright Owner: Geo
 */
#ifndef STRATEGY_STRATEGY_H_
#define STRATEGY_STRATEGY_H_

#include<iostream>
#include <string>

class Strategy {
 private:
    /* data */
 public:
    // Strategy(/* args */);
    virtual ~Strategy() = default;
    virtual void Function() = 0;
};

class StrategyA:public Strategy{
 private:
    std::string m_info;
 public:
    StrategyA():m_info("Strategy A") {}
    virtual ~StrategyA() {m_info = "";}
    virtual void Function() {
        std::cout << m_info << std::endl;
    }
};

class StrategyB:public Strategy{
 private:
    std::string m_info;
 public:
    StrategyB():m_info("Strategy B") {}
    virtual ~StrategyB() {m_info = "";}
    virtual void Function() {
        std::cout << m_info << std::endl;
    }
};

class Client {
 private:
    std::string     m_info;
    Strategy *      m_strategy;
 public:
    explicit Client(std::string info):m_info(info) {}
    explicit Client(Strategy * strategy):m_strategy(strategy) {}
    ~Client() {}
    void CallFunction() {
        std::cout << m_info << " ";
        m_strategy->Function();
    }
    void SetStrategy(Strategy * strategy) {
        m_strategy = strategy;
    }
};



#endif  // STRATEGY_STRATEGY_H_
