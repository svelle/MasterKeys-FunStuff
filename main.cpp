//
// Created by Sven Huester on 2017-11-05.
//

#include <iostream>
#include <windows.h>
#include "SDKDLL.h"
#include "SetLedHelpers.h"
#include "numPadSegments.h"

using namespace std;

int main() {
    COLOR_MATRIX keyboard;
    KEY_COLOR green, red, black;
    green = KEY_COLOR(0, 255, 0);
    red = KEY_COLOR(255, 0, 0);
    black = KEY_COLOR(0, 0, 0);

    SetControlDevice(DEV_MKeys_L);
    if(IsDevicePlug()) {
        EnableLedControl(true);
        for (int i = 0; i < 9; i++) {
            ResetColor(keyboard);
            for (auto &j : keyboard.KeyColor) {
                for (auto &k : j) {
                    cout << to_string(k.r) << ", " << to_string(k.g) << ", " << to_string(k.b) << endl;
                }
            }
            set(i, keyboard, green);
            SetAllLedColor(keyboard);
            Sleep(1000);
        }
        EnableLedControl(false);
    }
    return 0;
}