 	#include <stdio.h>
	int x=0;
	void main()
	{
      int *const ptr=&x;
      printf("%p",ptr);
      ptr++;
      printf("%p",ptr);
    
	}
