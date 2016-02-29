//Sert à y mettre les définitions   
#ifndef _STRUCTER_H_
#define _STRUCTER_H_

/*On def option avec un nom et une suite*/
typedef struct s_option
{
  char         *name;
  int required;
  struct s_option       *next;
} t_option;

//On stock les arguments qu'on a reçu
typedef struct          s_argument
{
  char                  *name;
  struct s_argument     *next;
}                       t_argument;

#endif
