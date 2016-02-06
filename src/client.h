#ifndef __CLIENT_H
#define __CLIENT_H

#include "process.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

extern void start_process(Process *process);
extern void stop_process(Process *process);
extern void start_all(void);
extern void stop_all(void);
extern void show_status(void);

#endif /*__CLIENT_H*/
