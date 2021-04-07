/* 
 * str2int.h
 *
 *
 */



#include <stdbool.h>

/* Convert a string to an integer, returning that integer.
 * Returns true if successful, or false if any error. 
 * It is an error if there is any additional character beyond the integer.
 * Assumes number is a valid pointer.extern bool readLine(char * buf, const int len);
 */

bool str2int(const char string[], int * number);

