C - File I/O

[![Build Status](https://travis-ci.org/joemccann/dillinger.svg?branch=master)](https://github.com/ThapeloK/printf)

## Description
Things learned in a project 
* How to create, open, close, read and write files
* What are file descriptors
* What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
* How to use the I/O system calls open, close, read and write
* What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR
* What are file permissions, and how to set them when creating a file with the open system call
* What is a system call
*What is the difference between a function and a system call


## Header File :file_folder:

* [holberton.h](./holberton.h): Header file containing prototypes for all
functions written in the project.

| File                               | Prototype /Usage                                                    |
| ---------------------------------  | ------------------------------------------------------------------- |
| `0-read_textfile.c`                | `ssize_t read_textfile(const char *filename, size_t letters);`      |
| `1-create_file.c`                  | `int create_file(const char *filename, char *text_content);`        |
| `2-append_text_to_file.c`          | `int append_text_to_file(const char *filename, char *text_content);`|
| `3-cp.c`                           | `cp file_from file_to`                                              |
| `100-elf_header.c`                 | `elf_header elf_filename`                                           |
                                     


## Author
* **Thapelo** - [ThapeloK](https://github.com/ThapeloK/)