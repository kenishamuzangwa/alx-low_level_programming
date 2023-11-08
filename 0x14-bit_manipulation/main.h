#ifndef _MAIN_H_
#define _MAIN_H_

int _putchar(char c);
unsigned int binary_to_uints(const char *b);
void print_binary(unsigned long int n);
int get_bits(unsigned long int n, unsigned int index);
int set_bits(unsigned long int *n, unsigned int index);
int clear_bits(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif

