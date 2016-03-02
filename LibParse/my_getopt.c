#include <string.h> //<= putstr
#include <stdlib.h> //<= malloc
#include "parser.h"

//fonct° d'ajout de liste chainée standard, prend en param une liste chainee et un nom;
////Tjrs verifier les malloc;
t_option		*add_option(t_option *options, char *name, int required)
{
  t_option		*new;
  
  if((new = malloc(sizeof(t_option))) == NULL)
     return (NULL);
     
  new->name = name;
  new->required = required;
  new->next = options;
  
  return (new);
}

//fonct° qui ajout un argument;
t_argument		*add_argument(t_argument *arguments, t_option *option)
{
  t_argument	*new;

  if((new = malloc(sizeof(t_option))) == NULL)
    return (NULL);
    
  new->name = option->name;
  new->next = arguments;
  
  return (new);
}

//fonct° parser des options;
t_argument		*parse_opt(int ac, char *av[], t_option *options)
{
  t_argument	*arguments;
  t_option		*tmp;
  int 			i;
  int			done;

  i = 0;
  arguments = NULL;
  tmp = options;
  
  while(tmp != NULL)
    {
      done = 0;
      for (i = 1; i < ac; i++)
		{
	  		if(strcmp(av[i], tmp->name) == 0)
	   		 {
	     		 arguments = add_argument(arguments,tmp);
	   			 done = 1;
	   		 }
		}
      if(done == 0 && tmp->required == 1)
		{
	  		printf("Missing required option %s\n", tmp->name);
	 		return (NULL);
		}
      tmp = tmp->next;
    }
  return (arguments);
}

//but: on a liste d'opt° dispo et tout les parametres envoyé au prog => on veux recuperer ttes les options envoyée dans une liste chainée p/r a liste d'opt dispo;

//tryin' my_getopt() => Prototype int getopt (int argc, char *const *argv, const char *options)
int				my_getopt(int ac, char *av[], t_option *options)
{
	int			opterr;
	int			optopt;
	int			optind;
	char		*optarg;	
	opterr = 0;
	if(opterr != 0)
	{
		printf("Unknown option character || Missing required argument"."\n");
	}
	optopt = 0; // stores unknown option argument
	optind = 1; // set to the index of the next element of the argv array to be processed
	optarg = NULL;//Points at the value of the option argument (fcltv)
	
	int 			i;
  	int			done;

  	i = 0;
  	arguments = NULL;
  	tmp = options;
  
 	 while(tmp != NULL)
    	{
      	done = 0;
      	for (i = 1; i < ac; i++)
			{
	  			if(strcmp(av[i], tmp->name) == 0)
	   		 	{
	     			 arguments = add_argument(arguments,tmp);
	   			 	done = 1;
	   			 }
			}
      	if(done == 0 && tmp->required == 1)
			{
				//opterr = 1; => printf
	  			printf("Missing required option %s\n", tmp->name);
	 			return (NULL);
			}
      	tmp = tmp->next;
   	 }
  	return (arguments);
	
	return (0);
}	

int			main(int ac, char *av[])
{
  t_option *options;
  t_argument *arguments;

  options = NULL;
  arguments = NULL;
  options = add_option(options, "-v",1);
  options = add_option(options, "-c",0);
  options = add_option(options, "-w",1);
  arguments = parse_opt(ac, av, options);
  if(arguments == NULL)
    return (0);
  while (arguments != NULL)
    {
      printf("%s\n", arguments->name);
      arguments = arguments->next;
    }
  return (0);
}
