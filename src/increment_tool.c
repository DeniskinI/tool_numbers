/**
  ******************************************************************************
  * @file    increment_tool.c
  * @author  
  * @version V0.0.1
  * @date    
  * @brief   This file provides tools for increment numbers.
  ******************************************************************************
  * @attention
  *
  * THE PRESENT FIRMWARE IS FOR EXAMPLE ONLY AIMS. AS A RESULT, AUTHOR SHALL
  * NOT BE HELD LIABLE FOR ANY DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGES WITH
  * RESPECT TO ANY CLAIMS ARISTING FROM THE CONTENT OF SUCH FIRMWARE AND/OR
  * THE USE MADE BY CUSTOMERS OF THE CODING INFORMATIONCONTAINED HEREIN IN
  * CONNECTION WITN THEIR PRODUCTS.
  *
  * <h2><center>&copy; Author </center></h2>
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/

#include <limits.h>

/** @addtogroup Tool_increment_numbers_module
  * @{
  */

/** @defgroup TOOL_INCREMENT_NUMBERS
  * @brief Tool increment numbers module
  * @{
  */

/** @defgroup TOOL_INCREMENT_NUMBERS_Private_Variables
  * @{
  */

/** @brief Current number */
static int _currentNumber = 0;
/** @brief Maximum value of number */
static int _maxValue      = INT_MAX;

/**
  * @}
  */

/** @defgroup TOOL_INCREMENT_NUMBERS_Private_Functions
  * @{
  */

/**
  * @brief Init module
  * @param  None
  * @retval None
  */

void InitNumber (void)
{
    _currentNumber = 0;
    _maxValue      = INT_MAX;
}

/**
  * @brief Get current number
  * @param  None
  * @retval current value
  */
int GetNumber (void)
{
	return _currentNumber;
}

/**
  * @brief Increment current number
  * @note This function increases the current value by 1 until it reaches
  *   \ref _maxValue. Otherwise it resets the value to 0.
  */
void IncrementNumber (void)
{
	if (_currentNumber < _maxValue)
		_currentNumber++;
	else
		_currentNumber = 0;
}

/**
  * @brief Set maximum value of Number 
  * @param maximumValue
  *   This parameter can have a value in range from 0 to maximum value of int.
  *	  If the number is less than 0 then the seting value is ignored.
  * @retval None
  */
void SetMaximumValue (int maximumValue)
{	
	if (maximumValue < 0) return;
	
	if (maximumValue <= INT_MAX)
		_maxValue = maximumValue;
	else
		_maxValue = INT_MAX;
}

/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */

/********************************* Example *********************END OF FILE****/