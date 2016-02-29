#include<stdlib.h>

typedef struct ElementListe
{
  char *value;
  struct ElementListe *next;
}Element;

typedef struct ListeRepere
{
  Element *debut;
  Element * fin;
  int taille;
}Liste;

void initialisationList(Liste *liste)
{
  liste->debut = NULL;
  liste->fin = NULL;
  taille = 0;
}

int insert_liste_vide(Liste *liste, char *value)
{
  Element *new_element;
  if((new_element = (Element *) malloc (50 * sizeof(char))) == NULL)
    return -1;
  strcpy (new_element->value, value);

  new_element->next = NULL;
  liste->debut = new_element;
  liste->fin = new_element;
  liste->taille++;
  return 0;
}

int  createList()
{
  Liste new_list = NULL;
  return 0;
}

int main(int argc, char **argv)
{
  createList();
}
