/******************************************************************************
 * The Mechatronics Revolution: Fundamentals and Core Concepts
 * Code Template for Lab Assignment 5
 *
 * Note: Create a new project as described in Lab Assignment 1.
 * After including the DriverLib library in your project settings,
 * you can use this template to design your program for Lab Assignment 5. 
 *
 * This template follows the steps described in the Software Architecture
 * section (Section 5.6) of the Lab Assignment 5 document.
*******************************************************************************/

/* Include header files */
#include <math.h>
#include "driverlib.h"
#include "mechrev.h"

/* Define macros and function prototypes if needed */

/* Define configuration structs if needed */

/* Declare global and volatile variables if needed */
volatile float distance_var;


/* Main program */
void main(void)
{
    /* Stop Watchdog Timer */
    WDT_A_holdTimer();

    /* Call the mechrev_setup function included in the mechrev.h header file */
    mechrev_setup();

    /* Initialize GPIOs P1.2 and P1.3 for UART receive and transmit functionality */

    /* Initialize and enable UART EUSCI_A0 module */

    /* Initialize UART RX Interrupt */

    /* Initialize GPIOs P6.1 for ADC functionality */

    /* Initialize ADC14 module */

    /* Initialize Timer A1 to generate periodic interrupts for for ADC readings */

    /* Declare local variables if needed */

    /* Call the initialization grading macro */
    MACRO_LAB5_INIT();

    while(1)
    {
        // Empty while loop
    }
}


/* Interrupt Service Routine for Timer A1 */
void TA1_0_IRQHandler(void)
{
    /* Toggle an ADC conversion, wait for the results and read the ADC module */

    /* Convert the ADC result to the actual voltage, */
    /* and then convert the voltage to the actural distance value in cm. */
    /* Note: Store the result in the "distance_var" variable */

    distance_var = ...

    /* Call the ADC grading macro with the distance variable */
    MACRO_LAB5_ADC_EVENT(distance_var);

    /* Clear the Timer A1 Capture/Compare interrupt flag */

}


/* Interrupt Service Routine for UART */
void EUSCIA0_IRQHandler(void)
{
    /* Read the received data from UART RX */

    /* Call the UART RX grading macro with the distance variable */
    MACRO_LAB5_UART_RX_EVENT(distance_var);

    /* Design a code so that when the byte recevied through UART RX is a 
     * carriage return (HEX code 0x0D), convert the distance variable to 
     * ASCII characters using "sprintf" function and
     * transmit those characters through UART TX.
     */

        /* Note: Call the UART TX grading macro after transmitting each character */
        MACRO_LAB5_UART_TX_EVENT();

    /* Append a carriage return character (0x0D) and a newline character (0x0A)
     * at the end and transmit those characters through UART TX.
     */

    /* Clear the UART RX interrupt flag */

}
