#include <string.h> //<= putstr
#include <stdlib.h> //<= malloc
#include "parser.h"

void my_putchar(char c);
int my_strcmp(char *s1, char *s2);

t_argument *add_argument(t_argument *arguments, t_option *option);
t_option *add_option(t_option *options, char *name);

t_argument *parse_option(int ac, char *av[], t_option *option);


int main(int ac, char *av[])
{
  t_option *options;
  t_argument *arguments;

  options = NULL;
  arguments = NULL;
  options = add_option(options, "-a");
  options = add_option(options, "-b");
  arguments = parse_option(ac, av, options);
  if(arguments == NULL)
    return (0);
  while (arguments != NULL)
    {
        my_putchar(arguments->name);
        my_putchar("\n");
        arguments = arguments->next;
    }
  return (0);
}
