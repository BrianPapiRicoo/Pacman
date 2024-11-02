#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/color.hpp>
#include <ftxui/screen/terminal.hpp>
#include <iostream>
#include <thread>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    std::string reset_position;
    int frame = 0;
 
   
    while (true)
    {
        auto can = Canvas(100,100);
        can.DrawBlockCircleFilled(10 + frame ,10 - frame,10);
        can.DrawBlockLine(10 + frame ,20 - frame,20 + frame,100 - frame);
        can.DrawBlockToggle(30,39);
        can.DrawBlockToggle(49,39);
        can.DrawBlockEllipse(40,40,19,19);
        can.DrawBlockLine(30,46,55,46);
        can.DrawBlockLine(38,80,40,60);

        Screen pantalla = Screen::Create(Dimension::Full(), Dimension::Full());
        
        Element lienzo = bgcolor(Color::Red,canvas(&can));
        Render(pantalla, lienzo);
        cout << reset_position;
        pantalla.Print();
        reset_position = pantalla.ResetPosition(true);
        this_thread::sleep_for(0.1s);
        frame++;
    }

    return 0;
}