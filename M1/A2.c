#include <stdio.h>
#include <string.h>
 
int main()
{
  	char Strlength[100], RevStrlength[100];
  	int i, j, len;
 
  	printf("\n Please Enter String :  ");
  	gets(Strlength);
  	
  	j = 0;
  	len = strlen(Strlength);
 
  	for (i = len - 1; i >= 0; i--)
  	{
  		RevStrlength[j++] = Strlength[i];
  	}
  	RevStrlength[i] = '\0';
 
  	printf("\n String after Reversing = %s", RevStrlength);
  	
  	return 0;
}
