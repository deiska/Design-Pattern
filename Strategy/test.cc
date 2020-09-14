/*
 * @Description: 
 * @Author: Geo
 * @Date: 2020-08-31 13:59:14
 * @LastEditTime: 2020-08-31 15:02:06
 * @LastEditors: Geo
 * @Copyright: 
 * @Copyright Owner: Geo
 */
#include <iostream>
#include "Strategy.h"

int main(int argc, char ** argv) {
    Strategy * strategyA = new StrategyA();
    Strategy * strategyB = new StrategyB();

    Client * clientA = new Client("Client A");
    Client * clientB = new Client("Client B");

    clientA->SetStrategy(strategyA);
    clientB->SetStrategy(strategyB);
    clientA->CallFunction();
    clientB->CallFunction();

    clientA->SetStrategy(strategyB);
    clientB->SetStrategy(strategyA);
    clientA->CallFunction();
    clientB->CallFunction();

    delete clientA;
    delete clientB;

    delete strategyA;
    delete strategyB;

    return 0;
}