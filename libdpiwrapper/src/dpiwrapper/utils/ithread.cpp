/*
 *  Copyright 2019 Sergey Khabarov, sergeykhbr@gmail.com
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#include <types.h>
#include <utils.h>
#include "ithread.h"

IThread::IThread(const char *name, const AttributeType &config)
    : IFace(IFACE_THREAD) {
    config_ = config;
    LIB_event_create(&loopEnable_, name);
    threadInit_.Handle = 0;
}

bool IThread::run() {
    threadInit_.func = reinterpret_cast<lib_thread_func>(runThread);
    threadInit_.args = this;
    LIB_thread_create(&threadInit_);

    if (threadInit_.Handle) {
        LIB_event_set(&loopEnable_);
    }
    return loopEnable_.state;
}

void IThread::stop() {
    LIB_event_clear(&loopEnable_);
    if (threadInit_.Handle) {
        LIB_thread_join(threadInit_.Handle, 50000);
    }
    threadInit_.Handle = 0;
}

void IThread::runThread(void* arg) {
    reinterpret_cast<IThread *>(arg)->busyLoop();
#if defined(_WIN32) || defined(__CYGWIN__)
    _endthreadex(0);
#else
    pthread_exit(0);
#endif
}
