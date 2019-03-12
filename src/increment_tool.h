/**
  ******************************************************************************
  * @file    icrement_tool.h
  * @author  
  * @version V0.0.1
  * @date    
  * @brief   This file contains all the functions prototypes for the tools.
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

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef INCREMENT_TOOL__H
#define INCREMENT_TOOL__H

/** @addtogroup Tool_increment_numbers_module
  * @{
  */

/** @addtogroup TOOL_INCREMENT_NUMBERS
  * @{
  */

/** @defgroup TOOL_INCREMENT_NUMBERS_Exported_Functions
  * @{
  */

void InitNumber      (void);
int  GetNumber       (void);
void IncrementNumber (void);
void SetMaximumValue (int maximumValue);

#endif // NCREMENT_TOOL__H
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