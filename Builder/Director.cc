#include "Director.h"

Director::Director()
{
}

Director::~Director()
{
}

int Director::create(AbstractApplicationBuilder * abAppBuilder)
{
    abAppBuilder->buildBusiness();
    abAppBuilder->buildDatabase();
    abAppBuilder->buildGui();

    return 0;
}