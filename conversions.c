#include <stdlib.h>
#include <stdio.h>

/** Function to convert unsigned integer to string */
char *uint_to_str(unsigned int value) {
    /* Determine the maximum number of digits required */
    int num_digits = snprintf(NULL, 0, "%u", value);

    /* Allocate memory for the string, including space for the null terminator */
    char *buffer = (char *)malloc(num_digits + 1);
    if (buffer == NULL) {
        /* Handle memory allocation failure */
        exit(EXIT_FAILURE);
    }

    /* Convert the unsigned integer to string */
    sprintf(buffer, "%u", value);

    return buffer;
}

/** Function to convert unsigned integer to octal string */
char *uint_to_octal_str(unsigned int value) {
    /* Determine the maximum number of digits required */
    int num_digits = snprintf(NULL, 0, "%o", value);

    /* Allocate memory for the string, including space for the null terminator */
    char *buffer = (char *)malloc(num_digits + 1);
    if (buffer == NULL) {
        /* Handle memory allocation failure */
        exit(EXIT_FAILURE);
    }

    /* Convert the unsigned integer to octal string */
    sprintf(buffer, "%o", value);

    return buffer;
}

/** Function to convert unsigned integer to hexadecimal string */
char *uint_to_hex_str(unsigned int value, int uppercase) {
    /* Determine the maximum number of digits required */
    int num_digits = snprintf(NULL, 0, uppercase ? "%X" : "%x", value);

    /* Allocate memory for the string, including space for the null terminator */
    char *buffer = (char *)malloc(num_digits + 1);
    if (buffer == NULL) {
        /* Handle memory allocation failure */
        exit(EXIT_FAILURE);
    }

    /* Convert the unsigned integer to hexadecimal string */
    sprintf(buffer, uppercase ? "%X" : "%x", value);

    return buffer;
}

