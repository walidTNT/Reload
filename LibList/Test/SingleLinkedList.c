typedef struct item
{
  struct item *next;
  void *data;
} item_s;

typedef struct sll
{
  item_s *p_start;
  item_s *p_end;
  item_s *p_count;
  item_s *list;
} sll_s;
