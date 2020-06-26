#include<stdio.h>

void ft_swap(int *a, int *b)
{
int temp;
 *a = 5;
 *b = 10;

temp = *a;
*a = *b;
*b = temp;
}
/*
int main()
{ 
	ft_swap();
	return 0;

}*/
