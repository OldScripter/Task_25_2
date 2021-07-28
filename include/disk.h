#ifndef TASK_25_2_DISK_H
#define TASK_25_2_DISK_H

#include "ram.h"
#include <fstream>
#include <iostream>

/**
 * @function Save the RAM buffer into data.txt file
 */
void save();

/**
 * @function Load data.txt file to RAM buffer array
 */
void load();

#endif //TASK_25_2_DISK_H