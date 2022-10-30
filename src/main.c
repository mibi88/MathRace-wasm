/*
 * MathRace - Get better in mental calculation while having some fun !
 * Copyright (C) 2022  Mibi88
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see https://www.gnu.org/licenses/.
 */

#include <emscripten.h>

#include "../lib/canvas.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "map.h"

#define WIDTH 128
#define HEIGHT 96

void loop() {
	int i, x, y, s;
	float start, time;
	start = clock();
	srand(clock());
	clear();
	/* put_pixel(0, 0, 0, 0, 0, 255);
	put_pixel(WIDTH-1, HEIGHT-1, 0, 0, 0, 255); */
	/* draw_image(5, 3, bush1_data, bush1_width, bush1_height);
	draw_image_del_color(0, 0, car1_data, car1_width, car1_height, 0, 0, 0, 0); */
	update();
	time = clock() - start;
	printf("Time : %d\n", (int)(time / 1000));
}

int main(void) {
	init_canvas(WIDTH, HEIGHT, "canvas");
	init_getkey();
	emscripten_set_main_loop(loop, 50, 1);
	return 0;
}
