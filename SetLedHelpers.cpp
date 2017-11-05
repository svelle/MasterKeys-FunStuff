//
// Created by Sven Huester on 2017-11-05.
//

#include <cstdint>
#include <iostream>
#include "SDKDLL.h"
#include "numPadSegments.h"

using namespace std;

void ResetColor(COLOR_MATRIX &keyboard){
    KEY_COLOR black = KEY_COLOR(0, 0, 0);

    for (int i = 0; i < MAX_LED_ROW; i++){
        for (int j = 0; j < MAX_LED_COLUMN; j++){
            keyboard.KeyColor[i][j] = black;
        }
    }
}

void SetCheckerboard(uint8_t rgb1[3], uint8_t rgb2[3]){
    // TODO: implement later
}

void SetByCPUUsage(){
    double CPUUsage = GetNowCPUUsage();
    auto RCPUUsage = (uint8_t)((CPUUsage / 100) * 255);
    auto GCPUUsage = (uint8_t)((1 - (CPUUsage / 100)) * 255);
    cout << to_string(RCPUUsage) <<  ", " << to_string(GCPUUsage) << '\n';
    COLOR_MATRIX keyboard;


    SetFullLedColor(RCPUUsage, GCPUUsage, 0);
}