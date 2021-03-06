#include <pebble.h>

typedef struct {
  Layer *layer;
  BitmapLayer *highlight_layer;
  TextLayer *text_layer;
  bool hr_layer;
  bool min_layer;
  int value;
  char value_string[16];
} BingoCell;

void bingo_cell_init(BingoCell *bingo_cell, GPoint pos);
void bingo_cell_set_value(BingoCell* bingo_cell, int value);
void bingo_cell_update(BingoCell* bingo_cell);
void bingo_cell_highlight(BingoCell* bingo_cell);
void bingo_cell_unhighlight(BingoCell* bingo_cell);
void bingo_cells_load_resources();
void bingo_cells_unload_resources();