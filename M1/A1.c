#include<stdio.h>

void main()
{
  int character,lastchar;

  lastchar='-';

  while((character=getchar())!=EOF)
  {
    if(character == ' ')
    {
      if(lastchar != ' ')
        putchar(character);
    }
    else if (character == '$')
    {
    	break;
    }
    else
      putchar(character);

    lastchar = character;
  }
}
