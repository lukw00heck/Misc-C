/**
* \file common.h
* \brief <b>Contains global includes and enumerations</b> \n
* This is an internal class.
*
* \date January 13, 2018
*/

#ifndef QCC_COMMON_H
#define QCC_COMMON_H

#include <stdint.h>

/*! \enum qcc_status
* Contains state and error return codes
*/
typedef enum
{
	QCC_STATUS_FAILURE = 0,		/*!< signals operation failure */
	QCC_STATUS_SUCCESS = 1,		/*!< signals operation success */
	QCC_STATUS_AUTHFAIL = 2,	/*!< seed authentication failure */
	QCC_STATUS_RANDFAIL = 3,	/*!< system random failure */
	QCC_STATUS_INVALID = 4,		/*!< invalid parameter input */
	QCC_ERROR_INTERNAL = 5,		/*!< anonymous internal failure  */
	QCC_ERROR_KEYGEN = 6		/*!< key generation failure  */
} qcc_status;

#endif
