/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.h> 
 * @brief <header for stats.c >
 *
 * <Functions declarations for stats.c>
 *
 * @author <Latha Shree Ravulapati>
 * @date <09-03-2017>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Declarations and Function Comments */ 

/**
 * @brief Sorts the array
 *
 * This function takes an array of unsigned characters 
 * and sorts them in descending order
 *
 * @param test - The unsigned char array to the sorted
 *
 * @return The sorted test array
 */
char sort_array(unsigned char test[]);

/**
 * @brief Prints the array
 *
 * This function takes an array of unsigned characters 
 * and prints them
 *
 * @param test - The array to be printed
 * @param i - The size of array
 *
 * @return No return
 */
void print_array(unsigned char test[],int i);


/**
 * @brief Computes the Mean
 *
 * This function takes an array 
 * and computes the mean
 *
 * @param test - The array to be computed
 * @param i - The size of array
 *
 * @return Returns the Mean
 */
int find_mean(unsigned char test[],int i);

/**
 * @brief Computes the Median
 *
 * This function takes an array 
 * and computes the median
 *
 * @param test - The array to be computed
 * @param i - The size of array
 *
 * @return Returns the Median
 */
int find_median(unsigned char test[],int i);

/**
 * @brief Computes the Maximum value
 *
 * This function takes an array 
 * and returns the maximum value
 *
 * @param test - The array to be used
 * @param i - The size of array
 *
 * @return Returns the Maximun value
 */
int find_maximum(unsigned char test[]);

/**
 * @brief Computes the Minumum value
 *
 * This function takes an array 
 * and returns the minimum value
 *
 * @param test - The array to be used
 * @param i - The size of array
 *
 * @return Returns the Minimum value
 */
int find_minimum(unsigned char test[],int i);

/**
 * @brief Displays the report analytics of data set
 *
 * This function displays the maximum, minimum, 
 * mean, and median of the data set
 *
 * @param Mean - Mean value passed
 * @param Median - Median value passed
 * @param Maximum - Maximum value passed
 * @param Minimum - Minimum value passed
 *
 * @return No Return
 */
void print_statistics(int Mean,int Median,int Maximum,int Minimum);

#endif /* __STATS_H__ */
