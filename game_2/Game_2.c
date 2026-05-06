#include "Game_2.h"
#include "InputHandler.h"
#include "LCD.h"
#include "stm32l4xx_hal.h"

extern ST7789V2_cfg_t cfg0;

MenuState Game2_Run(void)
{
    while (1) {
        Input_Read();

        if (current_input.btn3_pressed) {
            return MENU_STATE_HOME;
        }

        LCD_Fill_Buffer(0);
        LCD_printString("GAME 2 PLACEHOLDER", 30, 50, 1, 2);
        LCD_printString("No second game added", 35, 100, 1, 1);
        LCD_printString("BT3: Return to menu", 35, 150, 1, 1);
        LCD_Refresh(&cfg0);

        HAL_Delay(30);
    }
}
