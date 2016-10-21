#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include <allegro5\allegro.h>

//constante provizorii
#define defaultWindowW 800
#define defaultWindowH 600

ALLEGRO_DISPLAY *window;
int windowW, windowH;

//---functii momentan inutile---
void deserialize() {
	windowW = defaultWindowW;
	windowH = defaultWindowH;

}

void serialize() {

}
//----------------------------

bool loopEnd;

void init(){
	al_init();
	al_install_keyboard();
	al_install_mouse();
	al_install_joystick();
	
	deserialize();
	window = al_create_display(window_w, window_h);

	loopEnd = 0;
}

void end() {
	al_uninstall_joystick();
	al_uninstall_mouse();
	al_uninstall_keyboard();
	al_uninstall_system();

	serialize();
}

void main_loop() {

	while (!loopEnd) {

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
