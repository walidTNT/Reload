#include "parser.h"
#include <stdlib.h> // <= malloc

t_option *add_option(t_option *options, char *name, int required);

t_argument *add_argument(t_argument *arguments, t_option *options);

int my_strcmp(char *s1, char *s2);

t_argument *parse_option(int ac, char *av[], t_option *option)
{
  t_argument *arguments;
  t_option *tmp;
  int i;

  i = 0;
  argument = NULL;
  while(tmp != NULL)
    {
      for(i = 1; i < ac; i++)
	{
	  if(my_strcmp(av[i], tmp->name) == 0)
	    {
	      arguments = add_argument(arguments,tmp);
	    }
	}
      tmp = tmp->next;
    }
  return (arguments);
}
