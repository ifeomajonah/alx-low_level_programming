#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <stdio.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void checkElf(unsigned char *eIdent);
void printMagic(unsigned char *e);
void printClass(unsigned char *m);
void printData(unsigned char *e);
void printVersion(unsigned char *e);
void printOsabi(unsigned char *e);
void printAbi(unsigned char *e);
void printType(unsigned int type, unsigned char *e_ident);
void printEntry(unsigned long int entry, unsigned char *ident);
void closeElf(int elf);

#endif
