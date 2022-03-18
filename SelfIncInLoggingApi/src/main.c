#include <zephyr.h>
#include <logging/log.h>
#include <kernel.h>


LOG_MODULE_REGISTER(main);


void main(void)
{
    LOG_INF("hello, main()\n");
    volatile int32_t ii = 0;


    while (ii < 100)
    {
        // bad one
        LOG_INF("hello, logger %d\n", ii++);

        // good one
        //LOG_INF("hello, logger %d\n", ii);
        //ii++;
    }

}
