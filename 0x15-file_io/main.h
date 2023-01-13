#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

size_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
size_t _strlen(char *str);
void check100(int check, int fd);
void check99(ssize_t check, char *file, int fd_from, int fd_to);
void check98(ssize_t check, char *file, int fd_from, int fd_to);
void check97(int argc);

#endif
