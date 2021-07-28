#ifndef TASK_25_2_RAM_H
#define TASK_25_2_RAM_H

namespace ram
{
    extern int buff[8];

    /**
     * @function Return the RAM buffer array
     * @return RAM buffer array
     */
    int* read();

    /**
     * @function Write input array into RAM buffer array
     * @param [in] input Array
     */
    void write(const int* input);
}

#endif //TASK_25_2_RAM_H