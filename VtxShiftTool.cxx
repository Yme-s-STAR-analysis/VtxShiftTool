#include <iostream>
#include "TMath.h"
#include "VtxShiftTool.h"

VtxShiftTool::VtxShiftTool() {

    // put your vx and by shift here
    const char* name = "DATASET";
    vx0 = 0.0;
    vy0 = 0.0;

    std::cout << "[LOG] VtxShiftTool: Current data set: [" << name << "]" << std::endl;
    std::cout << "\tVx will shift: " << vx0 << ", Vy will shift: " << vy0 << std::endl;  
}

double VtxShiftTool::GetShiftedVr(double vx, double vy) {
    vx = vx - vx0;
    vy = vy - vy0;
    return TMath::Sqrt(vx*vx + vy*vy);
}