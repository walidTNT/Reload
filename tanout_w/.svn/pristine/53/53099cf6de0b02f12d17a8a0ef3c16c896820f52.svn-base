//Permet de déclarer les fonctions présentes dans la librairie,
//le type de valeurs qu'elles renvoient et les paramètres à leur passer

#ifndef _PARSER_H_
#define _PARSER_H_

/*On definit la structure des options avec un nom et une suite*/

typedef struct 		s_option
{
  char 		        *name;
  int required;
  struct s_option       *next;
} 			t_option;

//Structure pour stocker les arguments qu'on a reçu

typedef struct          s_argument
{
  char                  *name;
  struct s_argument     *next;
}                       t_argument;

#endif
