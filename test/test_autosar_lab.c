/*===========================================================================*/
/**
 * @file test_autosar_lab.c
 *
 *  Unit tests
 *
 *------------------------------------------------------------------------------
 *
 *------------------------------------------------------------------------------
 *
 * @section DESC DESCRIPTION:
 *
 * @todo Divide this file content using an abstraction layers concept
 *
 * @section ABBR ABBREVIATIONS:
 *   - @todo List any abbreviations, precede each with a dash ('-').
 *
 * @section TRACE TRACEABILITY INFO:
 *   - Design Document(s):
 *     - @todo Update list of design document(s).
 *
 *   - Requirements Document(s):
 *     - @todo Update list of requirements document(s)
 *
 *   - Applicable Standards (in order of precedence: highest first):
 *     - @todo Update list of other applicable standards
 *
 */
/*==========================================================================*/

/*===========================================================================*
 * Header Files
 *===========================================================================*/
#include "acutest.h"
#include "Rte.h"
#include <stdio.h>

/*===========================================================================*
 * Local Preprocessor #define Constants
 *===========================================================================*/

/*===========================================================================*
 * Local Preprocessor #define MACROS
 *===========================================================================*/

/*===========================================================================*
 * Local Type Declarations
 *===========================================================================*/

/*===========================================================================*
 * Local Variables Definitions
 *===========================================================================*/

/*===========================================================================*
 * Local Function Prototypes
 *===========================================================================*/

/*===========================================================================*
 * Local Inline Function Definitions and Function-Like Macros
 *===========================================================================*/

/*===========================================================================*
 * Function Definitions
 *===========================================================================*/

/***************************************************************************//**
* @fn         test_something_simple
* @brief      An example of tesing something 
* @param [in] void
* @return     void
******************************************************************************/
void test_something_simple(void) 
{
    uint16 value;
    TEST_CHECK(RTE_E_OK == Rte_Write_VehicleSpeed(10));
    TEST_CHECK(RTE_E_OK == Rte_Read_VehicleSpeed(&value));
    TEST_CHECK(value == 10);
}

TEST_LIST = {
    { "Testing something simple", test_something_simple },
    { NULL, NULL }  // terminador
};
