#include <iostream>
#include "Singleton.h"
#include "Logger.h"

using sia_practices::GenericSingleton;
using sia_practices::Logger;

int main()
{
    Logger* logger = GenericSingleton<Logger>::GetInstance();

    logger->LogDebug("Welcome to my world!");

    return 0;
}