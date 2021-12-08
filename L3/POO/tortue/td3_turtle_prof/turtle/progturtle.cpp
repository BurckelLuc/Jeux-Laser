#include "progturtle.h"
#include <string>

namespace logo{
    progturtle::progturtle(const std::string& prog, int step, int leftAngle, int rightAngle): d_program{prog}, d_step{step}, d_leftAngle{leftAngle}, d_rightAngle{rightAngle}
    {}

    std::string progturtle::programme() const{
        return d_program;
    }

    int progturtle::step() const{
        return d_step;
    }

    void setProgram(std::string& prog)
    {
        d_program = prog;
    }

    void progturtle::setStep(int step)
    {
        d_step = step;
    }

    void progturtle::run(turtle& t)
    {
        for(char c : d_program)
        {
            char c = prog[i];
            switch(c)
            {
                case 'F':
                    t.lowerPen();
                    t.forward(d_step);
                    break;
                case 'f':
                    t.raisePen();
                    t.forward(d_step);
                    break;
                case '+':
                    t.turnLeft(d_leftAngle);
                    break;
                case '-':
                    t.turnRight(d_rightAngle);
                    break;
            }
        }
    }

}
