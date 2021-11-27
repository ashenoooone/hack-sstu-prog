#include <stdbool.h>

#ifndef HACK_SSTU_PROG_H
#define HACK_SSTU_PROG_H


#define MAX(X,Y) ((X) > (Y) ? (X) : (Y))
#define ABS(X) ((X) < 0 ? -(X) : (X))
// string methods

#define count(mass, ch, length) _Generic((mass) ,\
    char *: count_s, \
    default: count_i, \
    float *: count_f) (mass, ch, length)


int count_s(const char *mass, char ch, int length);
int count_f(const float *mass, float ch, int length);
int count_i(const int *mass, int ch, int length);

void reverse(char *mass);
void replace(char *mass, char old, char new);
bool isDigit(char *mass);

int *set_new_array(int *mass, int k); // add in docs
int set_cur_array(int *b, int k); //add in docs

// numberic methods
void sort(int *mass, int k);
long long int max(const long long int *mass, int k);
long long int min(const long long int *mass, int k);

/*
 TODO
 -

*/

#endif
