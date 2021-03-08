#pragma once

#include <iostream>
#include "Singleton.h"

namespace sia_practices
{
    typedef const char* const immutable_string;

    class Logger
    {
        friend class GenericSingleton<Logger>;

        private:
            Logger() = default;
            ~Logger() = default;
        
        public:
            void LogDebug(immutable_string log)
            {
                std::cout<<log<<std::endl;
            }
    };
}
