/**
 * @file Print_Binary.c
 * @brief Source code for Print_Binary function implementation.
 *
 * This file contains the function implementation for the Print_Binary function,
 * which takes in a uint8_t value and prints the value in binary format.
 * It relies on the EUSCI_A0_UART driver.
 *
 * @author Aaron Nanas
 *
 */

#include <stdio.h>
#include <stdint.h>
#include "../inc/Print_Binary.h"

void Print_Binary(uint8_t value_to_convert)
{
    // Your Print_Binary function implementation goes here

    printf("Binary: ");

    for (int bit = 7; bit >= 0; bit--) {

         printf("%d", (value_to_convert >> bit) & 1);

         if (bit == 4) {

            printf("_");

         }

    }

    printf("\n");

}
