#ifndef CP_H
#define CP_H

#include <errno.h>

int copy_file(const char *file_from_name, const char *file_to_name);
int open_source(const char *file_from_name);
int open_dest(const char *file_to_name);
int fd_closer(int fd);

#endif /* CP_H */
