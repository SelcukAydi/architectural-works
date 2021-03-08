#pragma once

#include <iostream>

#ifndef SINGLETON_H_INCLUDED
#define SINGLETON_H_INCLUDED

namespace sia_practices
{
    template< class ClassType > class GenericSingleton
    {
        public:
            // Instantiates a new object if necessary or returns
            // directly the active instance.
            //
            static ClassType* GetInstance()
            {
                if(Instance_ != nullptr) return Instance_;
                Instance_ = new ClassType();
                return Instance_;
            }

        private:
            GenericSingleton() { GetInstance(); }

            ~GenericSingleton()
            {
                if(Instance_ == nullptr) return;
                delete Instance_;
                Instance_ = nullptr;
            }
        
        private:
            static ClassType* Instance_;
    };
}

template < class T > T* sia_practices::GenericSingleton<T>::Instance_  = nullptr;


#endif