/*************************************************************************
	> File Name: test.c
	> Author: 
	> Mail: 
	> Created Time: Mon 24 Apr 2017 09:09:16 AM DST
 ************************************************************************/

#include<stdio.h>
typedef float V __attribute__ ((vector_size(16)));
V foo(V a,V b) { return a+b*a; }
