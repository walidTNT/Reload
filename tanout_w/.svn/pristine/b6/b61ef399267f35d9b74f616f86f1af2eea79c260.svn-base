#include "parser.h"
#include <stdlib.h> // <= malloc

//Fonction qui ajout des arguments, prend en paramètre une liste chaînée et une option

t_argument *add_argument(t_argument *arguments, t_option *option)
{
  t_argument *new;

  if(new = malloc(sizeof(t_option)) == NULL)
    return (NULL);

  new->name = option->name;
  new->next = arguments;

  return (new);
}
