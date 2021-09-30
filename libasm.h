#ifndef LIBASM_H
#define LIBASM_H
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>


size_t      ft_strlen(const char *s);
char        *ft_strcpy(char *dst, const char *src);
ssize_t     ft_write(int fd, void const *buf, size_t nbyte);
ssize_t     ft_read(int fildes, void *buf, size_t nbyte);
char        *ft_strdup(const char *s1);
int         ft_strcmp(const char *s1, const char *s2);

#endif
