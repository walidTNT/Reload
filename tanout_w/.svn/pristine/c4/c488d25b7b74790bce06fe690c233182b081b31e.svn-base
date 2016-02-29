#include "parser.h"
#include <stdlib.h> // <= malloc

//Fonction d'ajout de liste chaînée standart, prend en paramètre une liste et un mon

t_option *add_option(t_option *options, char *name)
{
  t_option *new;

  if((new = malloc(sizeof(t_option))) == NULL)
    return (NULL);

  next->name = name;
  new->required = required;
  new->next = options;

  return (new);
}
