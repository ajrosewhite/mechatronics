/******************************************************************************
 * The Mechatronics Revolution: Fundamentals and Core Concepts
 * Code Template for Lab Assignment 3
 *
 * Note: Create a new project as described in Lab Assignment 1.
 * After including the DriverLib library in your project settings,
 * you can use this template to design your program for Lab Assignment 3. 
 *
 * This template follows the steps described in the Software Architecture
 * section (Section 3.6) of the Lab Assignment 3 document.
*******************************************************************************/

/* Include header files */
#include "driverlib.h"
#include "mechrev.h"

/* Define macros and function prototypes if needed */

/* Declare global and volatile variables if needed */


/* Main program */
void main(void)
{
    /* Stop Watchdog Timer */
    WDT_A_holdTimer();

    /* Call the mechrev_setup function included in the mechrev.h header file */
    mechrev_setup();

    /* Initialize GPIOs P1.1 and P1.4 for PushButtons (S1 and S2 switches) */

    /* Initialize GPIOs P1.0, P2.0, P2.1 and P2.2 for LED1 and LED2 */

    /* Initialize GPIOs P4.0, P4.2, P4.3, P4.5, P4.6 and P4.7 for Bump Sensors */

    /* Enable interrupts for Bump Sensors' GPIOs */

    /* Declare local variables if needed */

    /* Call the initialization grading macro */
    MACRO_LAB3_INIT();

    while(1)
    {
        /* Design a Polling process to detect PushButtons press and turn on or off LED1 accordingly */

            /* Note: Call the event grading macro after turning on LED1 */
            MACRO_LAB3_EVENT();
    }
}

/* Interrupt Service Routine for PORT4 to handle Bump Sensors */
void PORT4_IRQHandler(void)
{
    /* Check the interrupt status */

    /* Change the color of LED2 according to the interrupt status */

        /* Note: Call the event grading macro after changing the color of LED2 */
        MACRO_LAB3_EVENT();

    /* Clear the PORT4 interrupt flag */

}
