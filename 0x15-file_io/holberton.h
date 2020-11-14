#ifndef HOLBERTON
#define HOLBERTON

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
int append_text_to_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int printClass(void *ehdr);
void error(char *errmsg, int exitcode);
int _strlen(char *s);
void printMagic(void *ehdr);
int printData(void *header);
void printVersion(void *header);
void printOS(void *header);
void printABIVersion(void *header);
void printType(void *header);
void printEntry(void *header);
int getHeader(char *argv[]);
void checkHeader(void *header);
void bigType(void *header);
void bigEntry(void *header, int arch);
#endif
