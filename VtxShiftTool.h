#ifndef __VTXSHIFTTOOL__
#define __VTXSHIFTTOOL__

class VtxShiftTool {

    private:
        double vx0;
        double vy0;
    
    public:
        VtxShiftTool();
        ~VtxShiftTool(){}

        double GetShiftedVr(double vx, double vy);
};

#endif