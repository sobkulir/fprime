#ifndef _Mutex_hpp_
#define _Mutex_hpp_

#include <FpConfig.hpp>

namespace Os {
    template <typename T>
    class MutexImpl {
        public:

            MutexImpl(); //!<  Constructor. Mutex is unlocked when created
            virtual ~MutexImpl(); //!<  Destructor

            void lock(); //!<  lock the mutex
            void unLock(); //!<  unlock the mutex
            void unlock() { this->unLock(); } //!<  alias for unLock to meet BasicLockable requirements

        private:

            T m_handle; //!<  Stored handle to mutex
    };
}

#endif
