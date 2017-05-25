//////////////////////////////////////////////////////////////////////////////////////
//                                                                                  //
//  Copyright (c) 2016-2017 Leonardo Consoni <consoni_2519@hotmail.com>             //
//                                                                                  //
//  This file is part of Simple Multithreading.                                     //
//                                                                                  //
//  Simple Multithreading is free software: you can redistribute it and/or modify   //
//  it under the terms of the GNU Lesser General Public License as published        //
//  by the Free Software Foundation, either version 3 of the License, or            //
//  (at your option) any later version.                                             //
//                                                                                  //
//  Simple Multithreading is distributed in the hope that it will be useful,        //
//  but WITHOUT ANY WARRANTY; without even the implied warranty of                  //
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the                    //
//  GNU Lesser General Public License for more details.                             //
//                                                                                  //
//  You should have received a copy of the GNU Lesser General Public License        //
//  along with Simple Multithreading. If not, see <http://www.gnu.org/licenses/>.   //
//                                                                                  //
//////////////////////////////////////////////////////////////////////////////////////


/// @file semaphores.h
/// @brief Platform agnostic multithreading functions.
///
/// Wrapper library for thread management (creation and syncronization)
/// abstracting underlying low level operating system native calls                    

#ifndef SEMAPHORES_H
#define SEMAPHORES_H

#include <stdint.h>

typedef struct _SemaphoreData SemaphoreData;    ///< Data structure to hold single semaphore data
typedef SemaphoreData* Semaphore;               ///< Opaque type to semaphore data structure


/// @memberof Semaphores
/// @fn Semaphore Create( size_t startCount, size_t maxCount )                                                                              
/// @brief Creates semaphore object/data structure and initializes it                                                
/// @param[in] startCount starting value/count for newly created semaphore                                
/// @param[in] maxCount maximum allowed value/count of newly created semaphore                                             
/// @return reference to newly created semaphore data structure  
///
/// @memberof Semaphores
/// @fn void Discard( Semaphore sem )
/// @brief Discards given semaphore data structure                            
/// @param[in] sem reference to semaphore data structure
///
/// @memberof Semaphores
/// @fn void Increment( Semaphore sem )
/// @brief Increases internal count for given semaphore, blocking thread if maximum count is reached                             
/// @param[in] sem reference to semaphore data structure
///
/// @memberof Semaphores
/// @fn void Decrement( Semaphore sem )
/// @brief Decreases internal count for given semaphore, blocking thread if zero count is reached                    
/// @param[in] sem reference to semaphore data structure
///
/// @memberof Semaphores
/// @fn size_t GetCount( Semaphore sem )
/// @brief Reads current internal count for given semaphore                              
/// @param[in] sem reference to semaphore data structure
/// @return current internal count 
///
/// @memberof Semaphores
/// @fn void SetCount( Semaphore sem, size_t count )
/// @brief Defines desired internal count for given semaphore                              
/// @param[in] sem reference to semaphore data structure
/// @param[in] count desired internal count (should be between 0 and the maximum count) 

#endif // SEMAPHORES_H