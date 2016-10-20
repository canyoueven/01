#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include <allegro5\allegro.h>

//constante provizorii
#define default_window_w 800
#define default_window_h 600

ALLEGRO_DISPLAY *window;
int window_w, window_h;

//---functii momentan inutile---
void deserialize() {
	window_w = default_window_w;
	window_h = default_window_h;

}

void serialize() {

}
//----------------------------

bool loop_end;

void init(){
	al_init();
	al_install_keyboard();
	al_install_mouse();
	al_install_joystick();
	
	deserialize();
	window = al_create_display(window_w, window_h);

	loop_end = 0;
}

void end() {
	al_uninstall_joystick();
	al_uninstall_mouse();
	al_uninstall_keyboard();
	al_uninstall_system();

	serialize();
}

void main_loop() {

	while (!loop_end) {

		ALLEGRO_COLOR background_color = al_map_rgb(0, 0, 255);

		al_clear_to_color(background_color); //buffer-ul devine albastru

		al_flip_display(); //schimba buffer-ul
	}

}

int main(int argc, char **argv /*parametrii conventionali*/) {
	init();
	main_loop();
	end();
	
	system("pause");
	return 0;
}