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
 * @file stats.c 
 * @brief Creates analytics of data set
 *
 * Analyzes an array of unsigned char data items and report analytics 
 * on the maximum, minimum, mean, and median of the data set. This 
 * data set from large to small. All statistics should are rounded 
 * down to the nearest integer. After analysis and sorting is done, 
 * data is print.
 *
 * @author Latha Shree Ravulapati
 * @date 09-03-2017
 *
 */



#include <stdio.h>
#include <string.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

char sort_array(unsigned char test[]);
void print_array(unsigned char test[],int i);
int find_mean(unsigned char test[],int i);
int find_median(unsigned char test[],int i);
int find_maximum(unsigned char test[]);
int find_minimum(unsigned char test[],int i);

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  int Mean, Median, Maximum, Minimum;
  /* Statistics and Printing Functions Go Here */
  sort_array(test);
  print_array(test,sizeof(test)/sizeof(unsigned char));
  Mean    = find_mean(test,sizeof(test)/sizeof(unsigned char));
  Median  = find_median(test,sizeof(test)/sizeof(unsigned char));
  Maximum = find_maximum(test);
  Minimum = find_minimum(test,sizeof(test)/sizeof(unsigned char));
  print_statistics(Mean,Median,Maximum,Minimum);
}

/**
 *Given an array of data and a length, sorts the array from largest to smallest. 
 *(The zeroth Element is the largest value, and the last element (n-1) is the smallest value. )
 *
 */
char sort_array(unsigned char test[])
{
int i, j;
unsigned char temp;
for (i=0;i<40;i++)
{
  for (j=i+1;j<40;j++)
  {
    if(test[i]<test[j])
    {
      temp=test[i];
      test[i]=test[j];
      test[j]=temp;
    }
  }
}

return *test;
}


/**
 *Given an array of data and a length, prints the array to the screen
 *
 */
void print_array(unsigned char test[],int i)
{
  int j;
  printf("The Sorted array : ");
  for (j=0;j<i;j++)
  { 
    printf("%d ",test[j]);
  }
}

/**
 *Given an array of data and a length, returns the mean
 *
 */
int find_mean(unsigned char test[],int i)
{
  int sum=0,j;
  for (j=0;j<i;j++)
  { 
    sum+=test[j];
  }

return (sum/i);
}

/**
 *Given an array of data and a length, returns the median
 *
 */
int find_median(unsigned char test[],int i)
{
  int k;
  k=i/2;
  if(i%2==0)
  {
    return ((test[k]+test[k+1])/2);
  }
  else
  {
    return test[k];
  }
}

/**
 *Given an array of data and a length, returns the maximum
 *
 */
int find_maximum(unsigned char test[])
{
  return test[0];
}

/**
 *Given an array of data and a length, returns the minimum
 *
 */
int find_minimum(unsigned char test[],int i)
{
  return test[i-1];
}

/**
 *A function that prints the statistics of an array 
 *including minimum, maximum, mean, and median.
 *
 */
void print_statistics(int Mean,int Median,int Maximum,int Minimum)
{
  printf("\nMean : %d ",Mean);
  printf("\nMedian : %d ",Median);
  printf("\nMaximum : %d ",Maximum);
  printf("\nMinimum : %d\n",Minimum);
}

