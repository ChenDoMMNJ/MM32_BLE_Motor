////////////////////////////////////////////////////////////////////////////////
/// @file     HAL_SQRT.H
/// @author   Z Yan
/// @version  v2.0.0
/// @date     2019-02-18
/// @brief    THIS FILE CONTAINS ALL THE FUNCTIONS PROTOTYPES FOR THE SQRT
///           FIRMWARE LIBRARY.
////////////////////////////////////////////////////////////////////////////////
/// @attention
///
/// THE EXISTING FIRMWARE IS ONLY FOR REFERENCE, WHICH IS DESIGNED TO PROVIDE
/// CUSTOMERS WITH CODING INFORMATION ABOUT THEIR PRODUCTS SO THEY CAN SAVE
/// TIME. THEREFORE, MINDMOTION SHALL NOT BE LIABLE FOR ANY DIRECT, INDIRECT OR
/// CONSEQUENTIAL DAMAGES ABOUT ANY CLAIMS ARISING OUT OF THE CONTENT OF SUCH
/// HARDWARE AND/OR THE USE OF THE CODING INFORMATION CONTAINED HEREIN IN
/// CONNECTION WITH PRODUCTS MADE BY CUSTOMERS.
///
/// <H2><CENTER>&COPY; COPYRIGHT 2018-2019 MINDMOTION </CENTER></H2>
////////////////////////////////////////////////////////////////////////////////

// Define to prevent recursive inclusion  --------------------------------------
#ifndef __HAL_SQRT_H
#define __HAL_SQRT_H

// Files includes  -------------------------------------------------------------
#include "types.h"
#include "mm32.h"

////////////////////////////////////////////////////////////////////////////////
/// @addtogroup MM32_Hardware_Abstract_Layer
/// @{

////////////////////////////////////////////////////////////////////////////////
/// @defgroup SQRT_HAL
/// @brief SQRT HAL modules
/// @{

////////////////////////////////////////////////////////////////////////////////
/// @defgroup SQRT_Exported_Types
/// @{

#if defined(__MZ308)

////////////////////////////////////////////////////////////////////////////////
/// @brief  Write data to square data register
/// @retval None.
////////////////////////////////////////////////////////////////////////////////
#define SET_SQRT(x) 	SQRT->SQR = x;

////////////////////////////////////////////////////////////////////////////////
/// @brief  Get square result
/// @retval  HWROOT->ROOT
////////////////////////////////////////////////////////////////////////////////
#define GET_SQRT()	SQRT->RESULT;

////////////////////////////////////////////////////////////////////////////////
/// @defgroup SQRT_Exported_Variables
/// @{

#ifdef _HAL_SQRT_C_
#define GLOBAL
#else
#define GLOBAL extern
#endif

#undef GLOBAL

/// @}



/// @}

/// @}

/// @}


#endif

////////////////////////////////////////////////////////////////////////////////
#endif /* __HAL_SQRT_H */
////////////////////////////////////////////////////////////////////////////////

