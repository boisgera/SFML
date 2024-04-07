#include <stdio.h>
#include <SFML/Window.h>
#include <SFML/Graphics.h>
#include <SFML/Graphics/Color.h>
#include <SFML/Graphics/RenderWindow.h>

int main() {
   sfVideoMode video_mode = {.width = 800, .height = 600, .bitsPerPixel = 32};  
   sfRenderWindow* window = sfRenderWindow_create( 
      video_mode,
      "My window",  
      sfResize | sfClose, 
      NULL);

   while (sfRenderWindow_isOpen(window)) {
      sfEvent event;
      while (sfRenderWindow_pollEvent(window, &event)) {
         if (event.type == sfEvtClosed)
            sfRenderWindow_close(window);
      } 
      sfRenderWindow_clear(window, sfWhite);
      sfRenderWindow_display(window);
   }

   return 0;
}
