//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

        int life = 3;
        int counter = 138;
        int eattime = 0;

        int redquarantine = 0;
        int greenquarantine = 0;
        int bluequarantine = 0;
        int pinkquarantine = 0;

        int redcounter = 0;
        int redblock = 1;
        int redx = -8;
        int redy = -8;

        int greencounter = 0;
        int greenblock = 0;
        int greenx = -8;
        int greeny = -8;

        int bluecounter = 0;
        int blueblock = 0;
        int bluex = -8;
        int bluey = -8;

        int pinkcounter = 0;
        int pinkx = -8;
        int pinky = -8;

        bool collision_ghost(TImage * pacman, TImage * ghost){
                if(ghost->Left >= pacman->Left-ghost->Width &&
                ghost->Left <= pacman->Left+pacman->Width &&
                ghost->Top >= pacman->Top-ghost->Height &&
                ghost->Top <= pacman->Top+pacman->Height){
                        return true;
                }
                else{
                        return false;
                }
        }

        bool collision_ball(TImage * pacman, TImage * ball){
                if(pacman->Left >= ball->Left-pacman->Width &&
                pacman->Left <= ball->Left+ball->Width &&
                pacman->Top >= ball->Top-pacman->Height &&
                pacman->Top <= ball->Top+ball->Height){
                        return true;
                }
                else{
                        return false;
                }
        }

        bool collision_right(TImage * character, TShape * obstacle){
                if(character->Left +16 >= obstacle->Left-character->Width &&
                character->Left <= obstacle->Left+obstacle->Width &&
                character->Top >= obstacle->Top-character->Height &&
                character->Top <= obstacle->Top+obstacle->Height){
                        return true;
                }
                else{
                        return false;
                }
        }
        bool collision_left(TImage * character, TShape * obstacle){
                if(character->Left >= obstacle->Left-character->Width &&
                character->Left -16 <= obstacle->Left+obstacle->Width &&
                character->Top >= obstacle->Top-character->Height &&
                character->Top <= obstacle->Top+obstacle->Height){
                        return true;
                }
                else{
                        return false;
                }
        }
        bool collision_down(TImage * character, TShape * obstacle){
                if(character->Left >= obstacle->Left-character->Width &&
                character->Left <= obstacle->Left+obstacle->Width &&
                character->Top +16 >= obstacle->Top-character->Height &&
                character->Top <= obstacle->Top+obstacle->Height){
                        return true;
                }
                else{
                        return false;
                }
        }
        bool collision_up(TImage * character, TShape * obstacle){
                if(character->Left >= obstacle->Left-character->Width &&
                character->Left <= obstacle->Left+obstacle->Width &&
                character->Top >= obstacle->Top-character->Height &&
                character->Top -16 <= obstacle->Top+obstacle->Height){
                        return true;
                }
                else{
                        return false;
                }
        }

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::right_pacman_timerTimer(TObject *Sender)
{
                if(collision_right(pacman, s1) || collision_right(pacman, s2) || collision_right(pacman, s3) || collision_right(pacman, s4) || collision_right(pacman, s5) ||
                collision_right(pacman, s6) || collision_right(pacman, s7) || collision_right(pacman, s8) || collision_right(pacman, s9) || collision_right(pacman, s10) ||
                collision_right(pacman, s11) || collision_right(pacman, s12) || collision_right(pacman, s13) || collision_right(pacman, s14) || collision_right(pacman, s15) ||
                collision_right(pacman, s16) || collision_right(pacman, s17) || collision_right(pacman, s18) || collision_right(pacman, s19) || collision_right(pacman, s20) ||
                collision_right(pacman, s21) || collision_right(pacman, s22) || collision_right(pacman, s23) || collision_right(pacman, s24) || collision_right(pacman, s25) ||
                collision_right(pacman, s26) || collision_right(pacman, s27) || collision_right(pacman, s28) || collision_right(pacman, s29) || collision_right(pacman, s30) ||
                collision_right(pacman, s31) || collision_right(pacman, s32) || collision_right(pacman, s33) || collision_right(pacman, s34) || collision_right(pacman, s35) ||
                collision_right(pacman, s36) || collision_right(pacman, s37) || collision_right(pacman, s38) || collision_right(pacman, s39) || collision_right(pacman, s40) ||
                collision_right(pacman, s41) || collision_right(pacman, s42) || collision_right(pacman, s43) || collision_right(pacman, s44) || collision_right(pacman, s45) ||
                collision_right(pacman, s46) || collision_right(pacman, s47) || collision_right(pacman, s48)){
                        right_pacman_timer->Enabled = false;
                }
                else{
                        pacman->Left += 10;
                        pacman->Picture->LoadFromFile("pictures/rightpacman.bmp");

                        // loop
                        if(pacman->Left >= 1240 && pacman->Top >= 184  && pacman->Top <= 208){
                                pacman->Left = 64;
                                pacman->Top = 200;
                        }
                }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::left_pacman_timerTimer(TObject *Sender)
{
                if(collision_left(pacman, s1) || collision_left(pacman, s2) || collision_left(pacman, s3) || collision_left(pacman, s4) || collision_left(pacman, s5) ||
                collision_left(pacman, s6) || collision_left(pacman, s7) || collision_left(pacman, s8) || collision_left(pacman, s9) || collision_left(pacman, s10) ||
                collision_left(pacman, s11) || collision_left(pacman, s12) || collision_left(pacman, s13) || collision_left(pacman, s14) || collision_left(pacman, s15) ||
                collision_left(pacman, s16) || collision_left(pacman, s17) || collision_left(pacman, s18) || collision_left(pacman, s19) || collision_left(pacman, s20) ||
                collision_left(pacman, s21) || collision_left(pacman, s22) || collision_left(pacman, s23) || collision_left(pacman, s24) || collision_left(pacman, s25) ||
                collision_left(pacman, s26) || collision_left(pacman, s27) || collision_left(pacman, s28) || collision_left(pacman, s29) || collision_left(pacman, s30) ||
                collision_left(pacman, s31) || collision_left(pacman, s32) || collision_left(pacman, s33) || collision_left(pacman, s34) || collision_left(pacman, s35) ||
                collision_left(pacman, s36) || collision_left(pacman, s37) || collision_left(pacman, s38) || collision_left(pacman, s39) || collision_left(pacman, s40) ||
                collision_left(pacman, s41) || collision_left(pacman, s42) || collision_left(pacman, s43) || collision_left(pacman, s44) || collision_left(pacman, s45) ||
                collision_left(pacman, s46) || collision_left(pacman, s47) || collision_left(pacman, s48)){
                        left_pacman_timer->Enabled = false;
                }
                else{
                        pacman->Left -= 10;
                        pacman->Picture->LoadFromFile("pictures/leftpacman.bmp");

                        // loop
                        if(pacman->Left <= 56 && pacman->Top >= 184  && pacman->Top <= 208){
                                pacman->Left = 1232;
                                pacman->Top = 200;
                        }
                }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::up_pacman_timerTimer(TObject *Sender)
{
                if(collision_up(pacman, s1) || collision_up(pacman, s2) || collision_up(pacman, s3) || collision_up(pacman, s4) || collision_up(pacman, s5) ||
                collision_up(pacman, s6) || collision_up(pacman, s7) || collision_up(pacman, s8) || collision_up(pacman, s9) || collision_up(pacman, s10) ||
                collision_up(pacman, s11) || collision_up(pacman, s12) || collision_up(pacman, s13) || collision_up(pacman, s14) || collision_up(pacman, s15) ||
                collision_up(pacman, s16) || collision_up(pacman, s17) || collision_up(pacman, s18) || collision_up(pacman, s19) || collision_up(pacman, s20) ||
                collision_up(pacman, s21) || collision_up(pacman, s22) || collision_up(pacman, s23) || collision_up(pacman, s24) || collision_up(pacman, s25) ||
                collision_up(pacman, s26) || collision_up(pacman, s27) || collision_up(pacman, s28) || collision_up(pacman, s29) || collision_up(pacman, s30) ||
                collision_up(pacman, s31) || collision_up(pacman, s32) || collision_up(pacman, s33) || collision_up(pacman, s34) || collision_up(pacman, s35) ||
                collision_up(pacman, s36) || collision_up(pacman, s37) || collision_up(pacman, s38) || collision_up(pacman, s39) || collision_up(pacman, s40) ||
                collision_up(pacman, s41) || collision_up(pacman, s42) || collision_up(pacman, s43) || collision_up(pacman, s44) || collision_up(pacman, s45) ||
                collision_up(pacman, s46) || collision_up(pacman, s47) || collision_up(pacman, s48)){
                        up_pacman_timer->Enabled = false;
                }
                else{
                        pacman->Top -= 10;
                        pacman->Picture->LoadFromFile("pictures/uppacman.bmp");
                }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::down_pacman_timerTimer(TObject *Sender)
{
                if(collision_down(pacman, s1) || collision_down(pacman, s2) || collision_down(pacman, s3) || collision_down(pacman, s4) || collision_down(pacman, s5) ||
                collision_down(pacman, s6) || collision_down(pacman, s7) || collision_down(pacman, s8) || collision_down(pacman, s9) || collision_down(pacman, s10) ||
                collision_down(pacman, s11) || collision_down(pacman, s12) || collision_down(pacman, s13) || collision_down(pacman, s14) || collision_down(pacman, s15) ||
                collision_down(pacman, s16) || collision_down(pacman, s17) || collision_down(pacman, s18) || collision_down(pacman, s19) || collision_down(pacman, s20) ||
                collision_down(pacman, s21) || collision_down(pacman, s22) || collision_down(pacman, s23) || collision_down(pacman, s24) || collision_down(pacman, s25) ||
                collision_down(pacman, s26) || collision_down(pacman, s27) || collision_down(pacman, s28) || collision_down(pacman, s29) || collision_down(pacman, s30) ||
                collision_down(pacman, s31) || collision_down(pacman, s32) || collision_down(pacman, s33) || collision_down(pacman, s34) || collision_down(pacman, s35) ||
                collision_down(pacman, s36) || collision_down(pacman, s37) || collision_down(pacman, s38) || collision_down(pacman, s39) || collision_down(pacman, s40) ||
                collision_down(pacman, s41) || collision_down(pacman, s42) || collision_down(pacman, s43) || collision_down(pacman, s44) || collision_down(pacman, s45) ||
                collision_down(pacman, s46) || collision_down(pacman, s47) || collision_down(pacman, s48)){
                        down_pacman_timer->Enabled = false;
                }
                else{
                        pacman->Top += 10;
                        pacman->Picture->LoadFromFile("pictures/downpacman.bmp");
                }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
        if(Key == VK_LEFT) left_pacman_timer->Enabled = true;
        if(Key == VK_RIGHT) right_pacman_timer->Enabled = true;
        if(Key == VK_UP) up_pacman_timer->Enabled = true;
        if(Key == VK_DOWN) down_pacman_timer->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormKeyUp(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
        if(Key == VK_LEFT) left_pacman_timer->Enabled = false;
        if(Key == VK_RIGHT) right_pacman_timer->Enabled = false;
        if(Key == VK_UP) up_pacman_timer->Enabled = false;
        if(Key == VK_DOWN) down_pacman_timer->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
        eat_time_timer->Enabled = false;
        red_quarantine_timer->Enabled = false;
        green_quarantine_timer->Enabled = false;
        blue_quarantine_timer->Enabled = false;
        pink_quarantine_timer->Enabled = false;

        left_pacman_timer->Enabled = false;
        right_pacman_timer->Enabled = false;
        up_pacman_timer->Enabled = false;
        down_pacman_timer->Enabled = false;

        eattime = 0;
        int redquarantine = 0;
        int greenquarantine = 0;
        int bluequarantine = 0;
        int pinkquarantine = 0;

        counter = 138;
        life = 3;
        life1->Picture->LoadFromFile("pictures/pacman.bmp");
        life1->Visible = true;
        life2->Picture->LoadFromFile("pictures/pacman.bmp");
        life2->Visible = true;
        life3->Picture->LoadFromFile("pictures/pacman.bmp");
        life3->Visible = true;
        button1->Hide();
        button2->Hide();
        collision->Enabled = true;

        pacman->Left = 336;
        pacman->Top =  184;

        redghost->Left = 496;
        redghost->Top = 200;
        red_tier_timer->Enabled = true;
        red_vertical_timer->Enabled = false;

        greenghost->Left = 488;
        greenghost->Top = 112;
        green_tier_timer->Enabled = true;
        green_vertical_timer->Enabled = false;

        blueghost->Left = 512;
        blueghost->Top = 208;
        blue_tier_timer->Enabled = true;
        blue_vertical_timer->Enabled = false;

        pinkghost->Left = 512;
        pinkghost->Top = 160;
        pink_tier_timer->Enabled = true;
        pink_vertical_timer->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::red_tier_timerTimer(TObject *Sender)
{
        // snare -> 1 -> half of 'M' -> 2 -> half of 'M' -> 3 -> the lower right of board -> 4 -> M / A passage -> 5 -> 0

        redghost->Left += redx;

        if(collision_left(redghost, s1) || collision_left(redghost, s2) || collision_left(redghost, s3) || collision_left(redghost, s4) || collision_left(redghost, s5) ||
        collision_left(redghost, s6) || collision_left(redghost, s7) || collision_left(redghost, s8) || collision_left(redghost, s9) || collision_left(redghost, s10) ||
        collision_left(redghost, s11) || collision_left(redghost, s12) || collision_left(redghost, s13) || collision_left(redghost, s14) || collision_left(redghost, s15) ||
        collision_left(redghost, s16) || collision_left(redghost, s17) || collision_left(redghost, s18) || collision_left(redghost, s19) || collision_left(redghost, s20) ||
        collision_left(redghost, s21) || collision_left(redghost, s22) || collision_left(redghost, s23) || collision_left(redghost, s24) || collision_left(redghost, s25) ||
        collision_left(redghost, s26) || collision_left(redghost, s27) || collision_left(redghost, s28) || collision_left(redghost, s29) || collision_left(redghost, s30) ||
        collision_left(redghost, s31) || collision_left(redghost, s32) || collision_left(redghost, s33) || collision_left(redghost, s34) || collision_left(redghost, s35) ||
        collision_left(redghost, s36) || collision_left(redghost, s37) || collision_left(redghost, s38) || collision_left(redghost, s39) || collision_left(redghost, s40) ||
        collision_left(redghost, s41) || collision_left(redghost, s42) || collision_left(redghost, s43) || collision_left(redghost, s44) || collision_left(redghost, s45) ||
        collision_left(redghost, s46) || collision_left(redghost, s47) || collision_left(redghost, s48)){
                redx = - redx;
                red_tier_timer-> Enabled = false;
                red_vertical_timer->Enabled = true;
        }
        else{
                redghost->Left -= 10; // left

                if(redghost->Left > 1152 && redghost->Left < 1192 && redghost->Top > 112 && redghost->Top < 152){ // right snare
                        red_tier_timer-> Enabled = false;
                        red_vertical_timer->Enabled = true;
                        redcounter = 1;
                        // 1 - if he made snare
                }
                // 'N'
                if(redghost->Left > 1208 && redghost->Top > 256 && redghost->Top < 296){
                        redcounter = 4;
                        // 3 - if ghost was in the lower right of board
                }
                if(redcounter == 4 && redghost->Left > 1048 && redghost->Left < 1080 && redghost->Top > 256 && redghost->Top < 296){
                        red_tier_timer-> Enabled = false;
                        red_vertical_timer->Enabled = true;
                }
                // M / A passage
                if(redcounter == 4 && redghost->Left > 832 && redghost->Left < 872 && redghost->Top > 24 && redghost->Top < 64){
                        redcounter = 5;
                        red_tier_timer-> Enabled = false;
                        red_vertical_timer->Enabled = true;
                }
                //ending
                if(redcounter == 5 && redghost->Left > 1240 && redghost->Left < 1280 && redghost->Top > 328 && redghost->Top < 368){
                        redcounter = 0;
                        redx = - redx;
                        redghost->Left += 10; // right
                }
        }
        if(collision_right(redghost, s1) || collision_right(redghost, s2) || collision_right(redghost, s3) || collision_right(redghost, s4) || collision_right(redghost, s5) ||
        collision_right(redghost, s6) || collision_right(redghost, s7) || collision_right(redghost, s8) || collision_right(redghost, s9) || collision_right(redghost, s10) ||
        collision_right(redghost, s11) || collision_right(redghost, s12) || collision_right(redghost, s13) || collision_right(redghost, s14) || collision_right(redghost, s15) ||
        collision_right(redghost, s16) || collision_right(redghost, s17) || collision_right(redghost, s18) || collision_right(redghost, s19) || collision_right(redghost, s20) ||
        collision_right(redghost, s21) || collision_right(redghost, s22) || collision_right(redghost, s23) || collision_right(redghost, s24) || collision_right(redghost, s25) ||
        collision_right(redghost, s26) || collision_right(redghost, s27) || collision_right(redghost, s28) || collision_right(redghost, s29) || collision_right(redghost, s30) ||
        collision_right(redghost, s31) || collision_right(redghost, s32) || collision_right(redghost, s33) || collision_right(redghost, s34) || collision_right(redghost, s35) ||
        collision_right(redghost, s36) || collision_right(redghost, s37) || collision_right(redghost, s38) || collision_right(redghost, s39) || collision_right(redghost, s40) ||
        collision_right(redghost, s41) || collision_right(redghost, s42) || collision_right(redghost, s43) || collision_right(redghost, s44) || collision_right(redghost, s45) ||
        collision_right(redghost, s46) || collision_right(redghost, s47) || collision_right(redghost, s48)){
                redx = - redx;
                red_tier_timer-> Enabled = false;
                red_vertical_timer->Enabled = true;
        }
        else{
                redghost->Left += 10; // right
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::red_vertical_timerTimer(TObject *Sender)
{
        redghost->Top += redy;

        if(collision_up(redghost, s1) || collision_up(redghost, s2) || collision_up(redghost, s3) || collision_up(redghost, s4) || collision_up(redghost, s5) ||
        collision_up(redghost, s6) || collision_up(redghost, s7) || collision_up(redghost, s8) || collision_up(redghost, s9) || collision_up(redghost, s10) ||
        collision_up(redghost, s11) || collision_up(redghost, s12) || collision_up(redghost, s13) || collision_up(redghost, s14) || collision_up(redghost, s15) ||
        collision_up(redghost, s16) || collision_up(redghost, s17) || collision_up(redghost, s18) || collision_up(redghost, s19) || collision_up(redghost, s20) ||
        collision_up(redghost, s21) || collision_up(redghost, s22) || collision_up(redghost, s23) || collision_up(redghost, s24) || collision_up(redghost, s25) ||
        collision_up(redghost, s26) || collision_up(redghost, s27) || collision_up(redghost, s28) || collision_up(redghost, s29) || collision_up(redghost, s30) ||
        collision_up(redghost, s31) || collision_up(redghost, s32) || collision_up(redghost, s33) || collision_up(redghost, s34) || collision_up(redghost, s35) ||
        collision_up(redghost, s36) || collision_up(redghost, s37) || collision_up(redghost, s38) || collision_up(redghost, s39) || collision_up(redghost, s40) ||
        collision_up(redghost, s41) || collision_up(redghost, s42) || collision_up(redghost, s43) || collision_up(redghost, s44) || collision_up(redghost, s45) ||
        collision_up(redghost, s46) || collision_up(redghost, s47) || collision_up(redghost, s48)){
                redy = - redy;
                red_tier_timer-> Enabled = true;
                red_vertical_timer->Enabled = false;
        }
        else{
                redghost->Top -= 10; // up

                //insertion
                if(redblock == 0 && redghost->Left >= 472 && redghost->Left <= 600 && redghost->Top >= 120 && redghost->Top < 128){
                        redx = - redx;
                        redghost->Left += 10; // right
                        red_tier_timer-> Enabled = true;
                        red_vertical_timer->Enabled = false;
                }
                if(redblock == 0 && redghost->Left >= 616 && redghost->Left < 656 && redghost->Top >= 328 && redghost->Top < 368){
                        redblock = 1;
                        redy = - redy;
                        redghost->Top -= 10; // up
                        red_tier_timer-> Enabled = false;
                        red_vertical_timer->Enabled = true;
                }

                // 'M'
                if(redcounter == 1 && redghost->Left > 616 && redghost->Left < 656 && redghost->Top > 256 && redghost->Top < 296){
                        redghost->Left += 10; // right
                }
                if(redcounter == 1 && redghost->Left > 688 && redghost->Left < 728 && redghost->Top < 112 && redghost->Top > 96) redcounter = 2;
                // 2 - if he made snare and the ghost was in the left arc of M
                if(redcounter == 2 && redghost->Left > 688 && redghost->Left < 728 && redghost->Top >= 184 && redghost->Top <= 208){
                        redy = - redy;
                        red_tier_timer-> Enabled = true;
                        red_vertical_timer->Enabled = false;
                }
                if(redcounter == 2 && redghost->Left > 760 && redghost->Left < 800 && redghost->Top >= 256 && redghost->Top <= 296){
                        redcounter = 3;
                        redy = - redy;
                        red_tier_timer-> Enabled = true;
                        red_vertical_timer->Enabled = false;
                }
        }
        if(collision_down(redghost, s1) || collision_down(redghost, s2) || collision_down(redghost, s3) || collision_down(redghost, s4) || collision_down(redghost, s5) ||
        collision_down(redghost, s6) || collision_down(redghost, s7) || collision_down(redghost, s8) || collision_down(redghost, s9) || collision_down(redghost, s10) ||
        collision_down(redghost, s11) || collision_down(redghost, s12) || collision_down(redghost, s13) || collision_down(redghost, s14) || collision_down(redghost, s15) ||
        collision_down(redghost, s16) || collision_down(redghost, s17) || collision_down(redghost, s18) || collision_down(redghost, s19) || collision_down(redghost, s20) ||
        collision_down(redghost, s21) || collision_down(redghost, s22) || collision_down(redghost, s23) || collision_down(redghost, s24) || collision_down(redghost, s25) ||
        collision_down(redghost, s26) || collision_down(redghost, s27) || collision_down(redghost, s28) || collision_down(redghost, s29) || collision_down(redghost, s30) ||
        collision_down(redghost, s31) || collision_down(redghost, s32) || collision_down(redghost, s33) || collision_down(redghost, s34) || collision_down(redghost, s35) ||
        collision_down(redghost, s36) || collision_down(redghost, s37) || collision_down(redghost, s38) || collision_down(redghost, s39) || collision_down(redghost, s40) ||
        collision_down(redghost, s41) || collision_down(redghost, s42) || collision_down(redghost, s43) || collision_down(redghost, s44) || collision_down(redghost, s45) ||
        collision_down(redghost, s46) || collision_down(redghost, s47) || collision_down(redghost, s48)){
                redy = - redy;
                red_tier_timer-> Enabled = true;
                red_vertical_timer->Enabled = false;
        }
        else{
                redghost->Top += 10; // down
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::green_tier_timerTimer(TObject *Sender)
{
        greenghost->Left += greenx;

        if(collision_left(greenghost, s1) || collision_left(greenghost, s2) || collision_left(greenghost, s3) || collision_left(greenghost, s4) || collision_left(greenghost, s5) ||
        collision_left(greenghost, s6) || collision_left(greenghost, s7) || collision_left(greenghost, s8) || collision_left(greenghost, s9) || collision_left(greenghost, s10) ||
        collision_left(greenghost, s11) || collision_left(greenghost, s12) || collision_left(greenghost, s13) || collision_left(greenghost, s14) || collision_left(greenghost, s15) ||
        collision_left(greenghost, s16) || collision_left(greenghost, s17) || collision_left(greenghost, s18) || collision_left(greenghost, s19) || collision_left(greenghost, s20) ||
        collision_left(greenghost, s21) || collision_left(greenghost, s22) || collision_left(greenghost, s23) || collision_left(greenghost, s24) || collision_left(greenghost, s25) ||
        collision_left(greenghost, s26) || collision_left(greenghost, s27) || collision_left(greenghost, s28) || collision_left(greenghost, s29) || collision_left(greenghost, s30) ||
        collision_left(greenghost, s31) || collision_left(greenghost, s32) || collision_left(greenghost, s33) || collision_left(greenghost, s34) || collision_left(greenghost, s35) ||
        collision_left(greenghost, s36) || collision_left(greenghost, s37) || collision_left(greenghost, s38) || collision_left(greenghost, s39) || collision_left(greenghost, s40) ||
        collision_left(greenghost, s41) || collision_left(greenghost, s42) || collision_left(greenghost, s43) || collision_left(greenghost, s44) || collision_left(greenghost, s45) ||
        collision_left(greenghost, s46) || collision_left(greenghost, s47) || collision_left(greenghost, s48)){
                greenx = - greenx;
                green_tier_timer-> Enabled = false;
                green_vertical_timer->Enabled = true;
        }
        else{
                greenghost->Left -= 10; // left

                //insertion
                if(greenblock == 0 && greenghost->Left >= 544 && greenghost->Left <= 584 && greenghost->Top >= 120 && greenghost->Top <= 200){
                        greeny = - greeny;
                        greenghost->Top += 10; // down
                        greenblock = 1;
                        green_tier_timer-> Enabled = false;
                        green_vertical_timer->Enabled = true;
                }

                if(greencounter == 1 && greenghost->Left > 112 && greenghost->Left < 152 && greenghost->Top > 112 && greenghost->Top < 152){
                        greeny = - greeny;
                        greenghost->Top += 10; // down
                        greencounter = 2;
                        green_tier_timer-> Enabled = false;
                        green_vertical_timer->Enabled = true;
                }
                if(greencounter == 4 && greenghost->Left >= 256 && greenghost->Left <= 296 && greenghost->Top >= 24 && greenghost->Top <= 64){
                        greencounter = 0;
                }
        }
        if(collision_right(greenghost, s1) || collision_right(greenghost, s2) || collision_right(greenghost, s3) || collision_right(greenghost, s4) || collision_right(greenghost, s5) ||
        collision_right(greenghost, s6) || collision_right(greenghost, s7) || collision_right(greenghost, s8) || collision_right(greenghost, s9) || collision_right(greenghost, s10) ||
        collision_right(greenghost, s11) || collision_right(greenghost, s12) || collision_right(greenghost, s13) || collision_right(greenghost, s14) || collision_right(greenghost, s15) ||
        collision_right(greenghost, s16) || collision_right(greenghost, s17) || collision_right(greenghost, s18) || collision_right(greenghost, s19) || collision_right(greenghost, s20) ||
        collision_right(greenghost, s21) || collision_right(greenghost, s22) || collision_right(greenghost, s23) || collision_right(greenghost, s24) || collision_right(greenghost, s25) ||
        collision_right(greenghost, s26) || collision_right(greenghost, s27) || collision_right(greenghost, s28) || collision_right(greenghost, s29) || collision_right(greenghost, s30) ||
        collision_right(greenghost, s31) || collision_right(greenghost, s32) || collision_right(greenghost, s33) || collision_right(greenghost, s34) || collision_right(greenghost, s35) ||
        collision_right(greenghost, s36) || collision_right(greenghost, s37) || collision_right(greenghost, s38) || collision_right(greenghost, s39) || collision_right(greenghost, s40) ||
        collision_right(greenghost, s41) || collision_right(greenghost, s42) || collision_right(greenghost, s43) || collision_right(greenghost, s44) || collision_right(greenghost, s45) ||
        collision_right(greenghost, s46) || collision_right(greenghost, s47) || collision_right(greenghost, s48)){
                greenx = - greenx;
                green_tier_timer-> Enabled = false;
                green_vertical_timer->Enabled = true;
        }
        else{
                greenghost->Left += 10; // right
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::green_vertical_timerTimer(TObject *Sender)
{
        greenghost->Top += greeny;

        if(collision_up(greenghost, s1) || collision_up(greenghost, s2) || collision_up(greenghost, s3) || collision_up(greenghost, s4) || collision_up(greenghost, s5) ||
        collision_up(greenghost, s6) || collision_up(greenghost, s7) || collision_up(greenghost, s8) || collision_up(greenghost, s9) || collision_up(greenghost, s10) ||
        collision_up(greenghost, s11) || collision_up(greenghost, s12) || collision_up(greenghost, s13) || collision_up(greenghost, s14) || collision_up(greenghost, s15) ||
        collision_up(greenghost, s16) || collision_up(greenghost, s17) || collision_up(greenghost, s18) || collision_up(greenghost, s19) || collision_up(greenghost, s20) ||
        collision_up(greenghost, s21) || collision_up(greenghost, s22) || collision_up(greenghost, s23) || collision_up(greenghost, s24) || collision_up(greenghost, s25) ||
        collision_up(greenghost, s26) || collision_up(greenghost, s27) || collision_up(greenghost, s28) || collision_up(greenghost, s29) || collision_up(greenghost, s30) ||
        collision_up(greenghost, s31) || collision_up(greenghost, s32) || collision_up(greenghost, s33) || collision_up(greenghost, s34) || collision_up(greenghost, s35) ||
        collision_up(greenghost, s36) || collision_up(greenghost, s37) || collision_up(greenghost, s38) || collision_up(greenghost, s39) || collision_up(greenghost, s40) ||
        collision_up(greenghost, s41) || collision_up(greenghost, s42) || collision_up(greenghost, s43) || collision_up(greenghost, s44) || collision_up(greenghost, s45) ||
        collision_up(greenghost, s46) || collision_up(greenghost, s47) || collision_up(greenghost, s48)){
                greeny = - greeny;
                green_tier_timer-> Enabled = true;
                green_vertical_timer->Enabled = false;
        }
        else{
                greenghost->Top -= 10; // up

                if(greencounter != 4 && greenghost->Left > 256 && greenghost->Left < 296 && greenghost->Top > 256 && greenghost->Top < 296){
                        green_tier_timer-> Enabled = true;
                        green_vertical_timer->Enabled = false;
                        greencounter = 1;
                }
                if(greencounter == 2 && greenghost->Left > 112 && greenghost->Left < 152 && greenghost->Top > 256 && greenghost->Top < 296){
                        greenx = - greenx;
                        greenghost->Left -= 10; // left
                        green_tier_timer-> Enabled = true;
                        green_vertical_timer->Enabled = false;
                        greencounter = 3;
                }
                if(greencounter == 3 && greenghost->Left > 184 && greenghost->Left < 224 && greenghost->Top > 168 && greenghost->Top < 208){
                        green_tier_timer-> Enabled = true;
                        green_vertical_timer->Enabled = false;
                        greencounter = 4;
                }
        }
        if(collision_down(greenghost, s1) || collision_down(greenghost, s2) || collision_down(greenghost, s3) || collision_down(greenghost, s4) || collision_down(greenghost, s5) ||
        collision_down(greenghost, s6) || collision_down(greenghost, s7) || collision_down(greenghost, s8) || collision_down(greenghost, s9) || collision_down(greenghost, s10) ||
        collision_down(greenghost, s11) || collision_down(greenghost, s12) || collision_down(greenghost, s13) || collision_down(greenghost, s14) || collision_down(greenghost, s15) ||
        collision_down(greenghost, s16) || collision_down(greenghost, s17) || collision_down(greenghost, s18) || collision_down(greenghost, s19) || collision_down(greenghost, s20) ||
        collision_down(greenghost, s21) || collision_down(greenghost, s22) || collision_down(greenghost, s23) || collision_down(greenghost, s24) || collision_down(greenghost, s25) ||
        collision_down(greenghost, s26) || collision_down(greenghost, s27) || collision_down(greenghost, s28) || collision_down(greenghost, s29) || collision_down(greenghost, s30) ||
        collision_down(greenghost, s31) || collision_down(greenghost, s32) || collision_down(greenghost, s33) || collision_down(greenghost, s34) || collision_down(greenghost, s35) ||
        collision_down(greenghost, s36) || collision_down(greenghost, s37) || collision_down(greenghost, s38) || collision_down(greenghost, s39) || collision_down(greenghost, s40) ||
        collision_down(greenghost, s41) || collision_down(greenghost, s42) || collision_down(greenghost, s43) || collision_down(greenghost, s44) || collision_down(greenghost, s45) ||
        collision_down(greenghost, s46) || collision_down(greenghost, s47) || collision_down(greenghost, s48)){
                greeny = - greeny;
                green_tier_timer-> Enabled = true;
                green_vertical_timer->Enabled = false;
        }
        else{
                greenghost->Top += 10; // down
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blue_tier_timerTimer(TObject *Sender)
{
        blueghost->Left += bluex;

        if(collision_left(blueghost, s1) || collision_left(blueghost, s2) || collision_left(blueghost, s3) || collision_left(blueghost, s4) || collision_left(blueghost, s5) ||
        collision_left(blueghost, s6) || collision_left(blueghost, s7) || collision_left(blueghost, s8) || collision_left(blueghost, s9) || collision_left(blueghost, s10) ||
        collision_left(blueghost, s11) || collision_left(blueghost, s12) || collision_left(blueghost, s13) || collision_left(blueghost, s14) || collision_left(blueghost, s15) ||
        collision_left(blueghost, s16) || collision_left(blueghost, s17) || collision_left(blueghost, s18) || collision_left(blueghost, s19) || collision_left(blueghost, s20) ||
        collision_left(blueghost, s21) || collision_left(blueghost, s22) || collision_left(blueghost, s23) || collision_left(blueghost, s24) || collision_left(blueghost, s25) ||
        collision_left(blueghost, s26) || collision_left(blueghost, s27) || collision_left(blueghost, s28) || collision_left(blueghost, s29) || collision_left(blueghost, s30) ||
        collision_left(blueghost, s31) || collision_left(blueghost, s32) || collision_left(blueghost, s33) || collision_left(blueghost, s34) || collision_left(blueghost, s35) ||
        collision_left(blueghost, s36) || collision_left(blueghost, s37) || collision_left(blueghost, s38) || collision_left(blueghost, s39) || collision_left(blueghost, s40) ||
        collision_left(blueghost, s41) || collision_left(blueghost, s42) || collision_left(blueghost, s43) || collision_left(blueghost, s44) || collision_left(blueghost, s45) ||
        collision_left(blueghost, s46) || collision_left(blueghost, s47) || collision_left(blueghost, s48)){
                bluex = - bluex;
                blue_tier_timer-> Enabled = false;
                blue_vertical_timer->Enabled = true;
        }
        else{
                blueghost->Left -= 10; // left

                //insertion
                if(blueblock == 0 && blueghost->Left > 544 && blueghost->Left < 584 && blueghost->Top > 120 && blueghost->Top < 200){
                        bluey = - bluey;
                        blueghost->Top += 10; // down
                        blueblock = 1;
                        blue_tier_timer-> Enabled = false;
                        blue_vertical_timer->Enabled = true;
                }

                if(bluecounter == 1 && blueghost->Left > 400 && blueghost->Left < 440 && blueghost->Top > 256 && blueghost->Top < 296){
                        bluecounter = 2;
                        bluey = - bluey;
                        blueghost->Top -= 10; // up
                        blue_tier_timer-> Enabled = false;
                        blue_vertical_timer->Enabled = true;
                }
                if(bluecounter == 3 && blueghost->Left > 976 && blueghost->Left < 1016 && blueghost->Top > 24 && blueghost->Top < 64){
                        bluecounter = 4;
                        blue_tier_timer-> Enabled = false;
                        blue_vertical_timer->Enabled = true;
                }
                if(blueghost->Left > 1152 && blueghost->Left < 1192 && blueghost->Top > 256 && blueghost->Top < 296){
                        bluey = - bluey;
                        blueghost->Top -= 10; // up
                        blue_tier_timer-> Enabled = false;
                        blue_vertical_timer->Enabled = true;
                }
                if(bluecounter == 6 && blueghost->Left > 256 && blueghost->Left < 296 && blueghost->Top > 24 && blueghost->Top < 64){
                        bluecounter = 0;
                        blueghost->Top += 10; // down
                        blue_tier_timer-> Enabled = false;
                        blue_vertical_timer->Enabled = true;
                }
        }
        if(collision_right(blueghost, s1) || collision_right(blueghost, s2) || collision_right(blueghost, s3) || collision_right(blueghost, s4) || collision_right(blueghost, s5) ||
        collision_right(blueghost, s6) || collision_right(blueghost, s7) || collision_right(blueghost, s8) || collision_right(blueghost, s9) || collision_right(blueghost, s10) ||
        collision_right(blueghost, s11) || collision_right(blueghost, s12) || collision_right(blueghost, s13) || collision_right(blueghost, s14) || collision_right(blueghost, s15) ||
        collision_right(blueghost, s16) || collision_right(blueghost, s17) || collision_right(blueghost, s18) || collision_right(blueghost, s19) || collision_right(blueghost, s20) ||
        collision_right(blueghost, s21) || collision_right(blueghost, s22) || collision_right(blueghost, s23) || collision_right(blueghost, s24) || collision_right(blueghost, s25) ||
        collision_right(blueghost, s26) || collision_right(blueghost, s27) || collision_right(blueghost, s28) || collision_right(blueghost, s29) || collision_right(blueghost, s30) ||
        collision_right(blueghost, s31) || collision_right(blueghost, s32) || collision_right(blueghost, s33) || collision_right(blueghost, s34) || collision_right(blueghost, s35) ||
        collision_right(blueghost, s36) || collision_right(blueghost, s37) || collision_right(blueghost, s38) || collision_right(blueghost, s39) || collision_right(blueghost, s40) ||
        collision_right(blueghost, s41) || collision_right(blueghost, s42) || collision_right(blueghost, s43) || collision_right(blueghost, s44) || collision_right(blueghost, s45) ||
        collision_right(blueghost, s46) || collision_right(blueghost, s47) || collision_right(blueghost, s48)){
                bluex = - bluex;
                blue_tier_timer-> Enabled = false;
                blue_vertical_timer->Enabled = true;
        }
        else{
                blueghost->Left += 10; // right
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blue_vertical_timerTimer(TObject *Sender)
{
        blueghost->Top += bluey;

        if(collision_up(blueghost, s1) || collision_up(blueghost, s2) || collision_up(blueghost, s3) || collision_up(blueghost, s4) || collision_up(blueghost, s5) ||
        collision_up(blueghost, s6) || collision_up(blueghost, s7) || collision_up(blueghost, s8) || collision_up(blueghost, s9) || collision_up(blueghost, s10) ||
        collision_up(blueghost, s11) || collision_up(blueghost, s12) || collision_up(blueghost, s13) || collision_up(blueghost, s14) || collision_up(blueghost, s15) ||
        collision_up(blueghost, s16) || collision_up(blueghost, s17) || collision_up(blueghost, s18) || collision_up(blueghost, s19) || collision_up(blueghost, s20) ||
        collision_up(blueghost, s21) || collision_up(blueghost, s22) || collision_up(blueghost, s23) || collision_up(blueghost, s24) || collision_up(blueghost, s25) ||
        collision_up(blueghost, s26) || collision_up(blueghost, s27) || collision_up(blueghost, s28) || collision_up(blueghost, s29) || collision_up(blueghost, s30) ||
        collision_up(blueghost, s31) || collision_up(blueghost, s32) || collision_up(blueghost, s33) || collision_up(blueghost, s34) || collision_up(blueghost, s35) ||
        collision_up(blueghost, s36) || collision_up(blueghost, s37) || collision_up(blueghost, s38) || collision_up(blueghost, s39) || collision_up(blueghost, s40) ||
        collision_up(blueghost, s41) || collision_up(blueghost, s42) || collision_up(blueghost, s43) || collision_up(blueghost, s44) || collision_up(blueghost, s45) ||
        collision_up(blueghost, s46) || collision_up(blueghost, s47) || collision_up(blueghost, s48)){
                bluey = - bluey;
                blue_tier_timer-> Enabled = true;
                blue_vertical_timer->Enabled = false;
        }
        else{
                blueghost->Top -= 10; // up

                if(blueghost->Left >= 616 && blueghost->Left < 656 && blueghost->Top >= 328 && blueghost->Top < 368){
                        bluey = - bluey;
                        blueghost->Top -= 10; // up
                        blue_tier_timer-> Enabled = false;
                        blue_vertical_timer->Enabled = true;
                }
                if(blueghost->Left > 976 && blueghost->Left < 1016 && blueghost->Top > 256 && blueghost->Top < 296){
                        blue_tier_timer-> Enabled = true;
                        blue_vertical_timer->Enabled = false;
                }

                if(blueghost->Left > 256 && blueghost->Left < 296 && blueghost->Top > 256 && blueghost->Top < 296){
                        bluecounter = 1;
                        blue_tier_timer-> Enabled = true;
                        blue_vertical_timer->Enabled = false;
                }
                if(bluecounter == 2 && blueghost->Left > 544 && blueghost->Left < 584 && blueghost->Top > 160 && blueghost->Top < 200){
                        bluecounter = 3;
                        bluex = - bluex;
                        blueghost->Left += 10; // right
                        blue_tier_timer-> Enabled = true;
                        blue_vertical_timer->Enabled = false;
                }
                if(bluecounter == 4 && blueghost->Left > 1152 && blueghost->Left < 1192 && blueghost->Top > 24 && blueghost->Top < 64){
                        bluecounter = 5;
                        blue_tier_timer-> Enabled = true;
                        blue_vertical_timer->Enabled = false;
                }
                if(bluecounter == 5 && blueghost->Left > 616 && blueghost->Left < 656 && blueghost->Top > 88 && blueghost->Top < 128){
                        bluex = - bluex;
                        blueghost->Left -= 10; // left
                        bluecounter = 6;
                        blue_tier_timer-> Enabled = true;
                        blue_vertical_timer->Enabled = false;
                }
                if(bluecounter == 6 && blueghost->Left > 544 && blueghost->Left < 584 && blueghost->Top > 328 && blueghost->Top < 368){
                        bluey = - bluey;
                        blueghost->Top -= 10; // up
                }
        }
        if(collision_down(blueghost, s1) || collision_down(blueghost, s2) || collision_down(blueghost, s3) || collision_down(blueghost, s4) || collision_down(blueghost, s5) ||
        collision_down(blueghost, s6) || collision_down(blueghost, s7) || collision_down(blueghost, s8) || collision_down(blueghost, s9) || collision_down(blueghost, s10) ||
        collision_down(blueghost, s11) || collision_down(blueghost, s12) || collision_down(blueghost, s13) || collision_down(blueghost, s14) || collision_down(blueghost, s15) ||
        collision_down(blueghost, s16) || collision_down(blueghost, s17) || collision_down(blueghost, s18) || collision_down(blueghost, s19) || collision_down(blueghost, s20) ||
        collision_down(blueghost, s21) || collision_down(blueghost, s22) || collision_down(blueghost, s23) || collision_down(blueghost, s24) || collision_down(blueghost, s25) ||
        collision_down(blueghost, s26) || collision_down(blueghost, s27) || collision_down(blueghost, s28) || collision_down(blueghost, s29) || collision_down(blueghost, s30) ||
        collision_down(blueghost, s31) || collision_down(blueghost, s32) || collision_down(blueghost, s33) || collision_down(blueghost, s34) || collision_down(blueghost, s35) ||
        collision_down(blueghost, s36) || collision_down(blueghost, s37) || collision_down(blueghost, s38) || collision_down(blueghost, s39) || collision_down(blueghost, s40) ||
        collision_down(blueghost, s41) || collision_down(blueghost, s42) || collision_down(blueghost, s43) || collision_down(blueghost, s44) || collision_down(blueghost, s45) ||
        collision_down(blueghost, s46) || collision_down(blueghost, s47) || collision_down(blueghost, s48)){
                bluey = - bluey;
                blue_tier_timer-> Enabled = true;
                blue_vertical_timer->Enabled = false;
        }
        else{
                blueghost->Top += 10; // down
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::pink_tier_timerTimer(TObject *Sender)
{
        pinkghost->Left += pinkx;

        if(collision_left(pinkghost, s1) || collision_left(pinkghost, s2) || collision_left(pinkghost, s3) || collision_left(pinkghost, s4) || collision_left(pinkghost, s5) ||
        collision_left(pinkghost, s6) || collision_left(pinkghost, s7) || collision_left(pinkghost, s8) || collision_left(pinkghost, s9) || collision_left(pinkghost, s10) ||
        collision_left(pinkghost, s11) || collision_left(pinkghost, s12) || collision_left(pinkghost, s13) || collision_left(pinkghost, s14) || collision_left(pinkghost, s15) ||
        collision_left(pinkghost, s16) || collision_left(pinkghost, s17) || collision_left(pinkghost, s18) || collision_left(pinkghost, s19) || collision_left(pinkghost, s20) ||
        collision_left(pinkghost, s21) || collision_left(pinkghost, s22) || collision_left(pinkghost, s23) || collision_left(pinkghost, s24) || collision_left(pinkghost, s25) ||
        collision_left(pinkghost, s26) || collision_left(pinkghost, s27) || collision_left(pinkghost, s28) || collision_left(pinkghost, s29) || collision_left(pinkghost, s30) ||
        collision_left(pinkghost, s31) || collision_left(pinkghost, s32) || collision_left(pinkghost, s33) || collision_left(pinkghost, s34) || collision_left(pinkghost, s35) ||
        collision_left(pinkghost, s36) || collision_left(pinkghost, s37) || collision_left(pinkghost, s38) || collision_left(pinkghost, s39) || collision_left(pinkghost, s40) ||
        collision_left(pinkghost, s41) || collision_left(pinkghost, s42) || collision_left(pinkghost, s43) || collision_left(pinkghost, s44) || collision_left(pinkghost, s45) ||
        collision_left(pinkghost, s46) || collision_left(pinkghost, s47) || collision_left(pinkghost, s48)){
                pinkx = - pinkx;
                pink_tier_timer-> Enabled = false;
                pink_vertical_timer->Enabled = true;
        }
        else{
                pinkghost->Left -= 10; // left

                if(pinkghost->Left > 1152 && pinkghost->Left < 1192 && pinkghost->Top > 112 && pinkghost->Top < 152){
                        pinky = - pinky;
                        pinkghost->Top += 10; // down
                        pink_tier_timer-> Enabled = false;
                        pink_vertical_timer->Enabled = true;
                }
                if(pinkghost->Left >= 832 && pinkghost->Left <= 872 && pinkghost->Top >= 256 && pinkghost->Top <= 296){
                        pinkcounter = 1;
                        pink_tier_timer-> Enabled = false;
                        pink_vertical_timer->Enabled = true;
                }
                if(pinkghost->Left >= 256 && pinkghost->Left <= 296 && pinkghost->Top >= 24 && pinkghost->Top <= 64){
                        pinkcounter = 2;
                        pink_tier_timer-> Enabled = false;
                        pink_vertical_timer->Enabled = true;
                }
        }
        if(collision_right(pinkghost, s1) || collision_right(pinkghost, s2) || collision_right(pinkghost, s3) || collision_right(pinkghost, s4) || collision_right(pinkghost, s5) ||
        collision_right(pinkghost, s6) || collision_right(pinkghost, s7) || collision_right(pinkghost, s8) || collision_right(pinkghost, s9) || collision_right(pinkghost, s10) ||
        collision_right(pinkghost, s11) || collision_right(pinkghost, s12) || collision_right(pinkghost, s13) || collision_right(pinkghost, s14) || collision_right(pinkghost, s15) ||
        collision_right(pinkghost, s16) || collision_right(pinkghost, s17) || collision_right(pinkghost, s18) || collision_right(pinkghost, s19) || collision_right(pinkghost, s20) ||
        collision_right(pinkghost, s21) || collision_right(pinkghost, s22) || collision_right(pinkghost, s23) || collision_right(pinkghost, s24) || collision_right(pinkghost, s25) ||
        collision_right(pinkghost, s26) || collision_right(pinkghost, s27) || collision_right(pinkghost, s28) || collision_right(pinkghost, s29) || collision_right(pinkghost, s30) ||
        collision_right(pinkghost, s31) || collision_right(pinkghost, s32) || collision_right(pinkghost, s33) || collision_right(pinkghost, s34) || collision_right(pinkghost, s35) ||
        collision_right(pinkghost, s36) || collision_right(pinkghost, s37) || collision_right(pinkghost, s38) || collision_right(pinkghost, s39) || collision_right(pinkghost, s40) ||
        collision_right(pinkghost, s41) || collision_right(pinkghost, s42) || collision_right(pinkghost, s43) || collision_right(pinkghost, s44) || collision_right(pinkghost, s45) ||
        collision_right(pinkghost, s46) || collision_right(pinkghost, s47) || collision_right(pinkghost, s48)){
                pinkx = - pinkx;
                pink_tier_timer-> Enabled = false;
                pink_vertical_timer->Enabled = true;
        }
        else{
                pinkghost->Left += 10; // right
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::pink_vertical_timerTimer(TObject *Sender)
{
        pinkghost->Top += pinky;

        if(collision_up(pinkghost, s1) || collision_up(pinkghost, s2) || collision_up(pinkghost, s3) || collision_up(pinkghost, s4) || collision_up(pinkghost, s5) ||
        collision_up(pinkghost, s6) || collision_up(pinkghost, s7) || collision_up(pinkghost, s8) || collision_up(pinkghost, s9) || collision_up(pinkghost, s10) ||
        collision_up(pinkghost, s11) || collision_up(pinkghost, s12) || collision_up(pinkghost, s13) || collision_up(pinkghost, s14) || collision_up(pinkghost, s15) ||
        collision_up(pinkghost, s16) || collision_up(pinkghost, s17) || collision_up(pinkghost, s18) || collision_up(pinkghost, s19) || collision_up(pinkghost, s20) ||
        collision_up(pinkghost, s21) || collision_up(pinkghost, s22) || collision_up(pinkghost, s23) || collision_up(pinkghost, s24) || collision_up(pinkghost, s25) ||
        collision_up(pinkghost, s26) || collision_up(pinkghost, s27) || collision_up(pinkghost, s28) || collision_up(pinkghost, s29) || collision_up(pinkghost, s30) ||
        collision_up(pinkghost, s31) || collision_up(pinkghost, s32) || collision_up(pinkghost, s33) || collision_up(pinkghost, s34) || collision_up(pinkghost, s35) ||
        collision_up(pinkghost, s36) || collision_up(pinkghost, s37) || collision_up(pinkghost, s38) || collision_up(pinkghost, s39) || collision_up(pinkghost, s40) ||
        collision_up(pinkghost, s41) || collision_up(pinkghost, s42) || collision_up(pinkghost, s43) || collision_up(pinkghost, s44) || collision_up(pinkghost, s45) ||
        collision_up(pinkghost, s46) || collision_up(pinkghost, s47) || collision_up(pinkghost, s48)){
                pinky = - pinky;
                pink_tier_timer-> Enabled = true;
                pink_vertical_timer->Enabled = false;
        }
        else{
                pinkghost->Top -= 10; // up

                if(pinkcounter == 2 && pinkghost->Left >= 544 && pinkghost->Left <= 584 && pinkghost->Top >= 96 && pinkghost->Top <= 144){
                        pink_tier_timer-> Enabled = true;
                        pink_vertical_timer->Enabled = false;
                }
                if(pinkcounter == 1 && pinkghost->Left >= 616 && pinkghost->Left <= 656 && pinkghost->Top >= 176 && pinkghost->Top <= 224){
                        pink_tier_timer-> Enabled = true;
                        pink_vertical_timer->Enabled = false;
                }
        }
        if(collision_down(pinkghost, s1) || collision_down(pinkghost, s2) || collision_down(pinkghost, s3) || collision_down(pinkghost, s4) || collision_down(pinkghost, s5) ||
        collision_down(pinkghost, s6) || collision_down(pinkghost, s7) || collision_down(pinkghost, s8) || collision_down(pinkghost, s9) || collision_down(pinkghost, s10) ||
        collision_down(pinkghost, s11) || collision_down(pinkghost, s12) || collision_down(pinkghost, s13) || collision_down(pinkghost, s14) || collision_down(pinkghost, s15) ||
        collision_down(pinkghost, s16) || collision_down(pinkghost, s17) || collision_down(pinkghost, s18) || collision_down(pinkghost, s19) || collision_down(pinkghost, s20) ||
        collision_down(pinkghost, s21) || collision_down(pinkghost, s22) || collision_down(pinkghost, s23) || collision_down(pinkghost, s24) || collision_down(pinkghost, s25) ||
        collision_down(pinkghost, s26) || collision_down(pinkghost, s27) || collision_down(pinkghost, s28) || collision_down(pinkghost, s29) || collision_down(pinkghost, s30) ||
        collision_down(pinkghost, s31) || collision_down(pinkghost, s32) || collision_down(pinkghost, s33) || collision_down(pinkghost, s34) || collision_down(pinkghost, s35) ||
        collision_down(pinkghost, s36) || collision_down(pinkghost, s37) || collision_down(pinkghost, s38) || collision_down(pinkghost, s39) || collision_down(pinkghost, s40) ||
        collision_down(pinkghost, s41) || collision_down(pinkghost, s42) || collision_down(pinkghost, s43) || collision_down(pinkghost, s44) || collision_down(pinkghost, s45) ||
        collision_down(pinkghost, s46) || collision_down(pinkghost, s47) || collision_down(pinkghost, s48)){
                pinky = - pinky;
                pink_tier_timer-> Enabled = true;
                pink_vertical_timer->Enabled = false;
        }
        else{
                pinkghost->Top += 10; // down
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::eat_time_timerTimer(TObject *Sender)
{
        eattime++;
        redghost->Picture->LoadFromFile("pictures/blueghost.bmp");
        greenghost->Picture->LoadFromFile("pictures/blueghost.bmp");
        blueghost->Picture->LoadFromFile("pictures/blueghost.bmp");
        pinkghost->Picture->LoadFromFile("pictures/blueghost.bmp");

        if(eattime == 10){
                redghost->Picture->LoadFromFile("pictures/redghost.bmp");
                greenghost->Picture->LoadFromFile("pictures/greenghost.bmp");
                blueghost->Picture->LoadFromFile("pictures/blueghost.bmp");
                pinkghost->Picture->LoadFromFile("pictures/pinkghost.bmp");
                eat_time_timer->Enabled = false;
                eattime = 0;
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::red_quarantine_timerTimer(TObject *Sender)
{
        redquarantine++;
        if(redquarantine >= 5){
                red_tier_timer->Enabled = true;
                red_vertical_timer->Enabled = false;
                red_quarantine_timer->Enabled = false;
                redquarantine = 0;
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::green_quarantine_timerTimer(TObject *Sender)
{
        greenquarantine++;
        if(greenquarantine >= 5){
                green_tier_timer->Enabled = true;
                green_vertical_timer->Enabled = false;
                green_quarantine_timer->Enabled = false;
                greenquarantine = 0;
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::blue_quarantine_timerTimer(TObject *Sender)
{
        bluequarantine++;
        if(bluequarantine >= 5){
                blue_tier_timer->Enabled = true;
                blue_vertical_timer->Enabled = false;
                blue_quarantine_timer->Enabled = false;
                bluequarantine = 0;
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::pink_quarantine_timerTimer(TObject *Sender)
{
        pinkquarantine++;
        if(pinkquarantine >= 5){
                pink_tier_timer->Enabled = true;
                pink_vertical_timer->Enabled = false;
                pink_quarantine_timer->Enabled = false;
                pinkquarantine = 0;
        }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::collisionTimer(TObject *Sender)
{
        // collision with a pacman
        if(collision_ghost(pacman, redghost) || collision_ghost(pacman, greenghost) ||
        collision_ghost(pacman, blueghost) || collision_ghost(pacman, pinkghost)){
                if(eat_time_timer->Enabled == true){
                        if(collision_ghost(pacman, redghost)){
                                red_quarantine_timer->Enabled = true;
                                red_tier_timer->Enabled = false;
                                red_vertical_timer->Enabled = false;
                                redcounter = 0;
                                redblock = 0;
                                redx = -8;
                                redy = -8;
                                redghost->Left = 496;
                                redghost->Top = 200;
                        }
                        if(collision_ghost(pacman, greenghost)){
                                green_quarantine_timer->Enabled = true;
                                green_tier_timer->Enabled = false;
                                green_vertical_timer->Enabled = false;
                                greencounter = 0;
                                greenblock = 0;
                                greenx = -8;
                                greeny = -8;
                                greenghost->Left = 488;
                                greenghost->Top = 112;
                        }
                        if(collision_ghost(pacman, blueghost)){
                                blue_quarantine_timer->Enabled = true;
                                blue_tier_timer->Enabled = false;
                                blue_vertical_timer->Enabled = false;
                                bluecounter = 0;
                                blueblock = 0;
                                bluex = -8;
                                bluey = -8;
                                blueghost->Left = 512;
                                blueghost->Top = 208;
                        }
                        if(collision_ghost(pacman, pinkghost)){
                                pink_quarantine_timer->Enabled = true;
                                pink_tier_timer->Enabled = false;
                                pink_vertical_timer->Enabled = false;
                                pinkcounter = 0;
                                pinkx = -8;
                                pinky = -8;
                                pinkghost->Left = 512;
                                pinkghost->Top = 160;
                        }
                }
                else{
                        life--;

                        pacman->Left = 336;
                        pacman->Top =  184;

                        red_tier_timer->Enabled = false;
                        red_vertical_timer->Enabled = false;
                        redcounter = 0;
                        redblock = 0;
                        redx = -8;
                        redy = -8;
                        redghost->Left = 496;
                        redghost->Top = 200;
                        red_tier_timer->Enabled = false;
                        red_vertical_timer->Enabled = true;

                        greencounter = 0;
                        greenblock = 0;
                        greenx = -8;
                        greeny = -8;
                        greenghost->Left = 488;
                        greenghost->Top = 112;
                        green_tier_timer-> Enabled = true;
                        green_vertical_timer->Enabled = false;

                        bluecounter = 0;
                        blueblock = 0;
                        bluex = -8;
                        bluey = -8;
                        blueghost->Left = 512;
                        blueghost->Top = 208;
                        blue_tier_timer-> Enabled = true;
                        blue_vertical_timer->Enabled = false;

                        pinkcounter = 0;
                        pinkx = -8;
                        pinky = -8;
                        pinkghost->Left = 512;
                        pinkghost->Top = 160;
                        pink_tier_timer-> Enabled = true;
                        pink_vertical_timer->Enabled = false;

                        if(life == 2) life3->Visible = false;
                        if(life == 1) life2->Visible = false;
                        if(life <= 0){
                                life1->Visible = false;
                                eat_time_timer->Enabled = false;
                                left_pacman_timer->Enabled = false;
                                right_pacman_timer->Enabled = false;
                                up_pacman_timer->Enabled = false;
                                down_pacman_timer->Enabled = false;
                                red_tier_timer->Enabled = false;
                                red_vertical_timer->Enabled = false;
                                green_tier_timer->Enabled = false;
                                green_vertical_timer->Enabled = false;
                                blue_tier_timer->Enabled = false;
                                blue_vertical_timer->Enabled = false;
                                pink_tier_timer->Enabled = false;
                                pink_vertical_timer->Enabled = false;
                                button1->Show();
                        }
                }
        }

        // collision with a ball
        if(counter <= 0) button2->Show();
        label->Caption = counter;

        if(collision_ball(pacman, b1) && b1->Visible == true){
                b1->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b2) && b2->Visible == true){
                b2->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b3) && b3->Visible == true){
                b3->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b4) && b4->Visible == true){
                b4->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b5) && b5->Visible == true){
                b5->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b6) && b6->Visible == true){
                b6->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b7) && b7->Visible == true){
                b7->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b8) && b8->Visible == true){
                b8->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b9) && b9->Visible == true){
                b9->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b10) && b10->Visible == true){
                b10->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b11) && b11->Visible == true){
                b11->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b12) && b12->Visible == true){
                b12->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b13) && b13->Visible == true){
                b13->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b14) && b14->Visible == true){
                b14->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b15) && b15->Visible == true){
                b15->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b16) && b16->Visible == true){
                b16->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b17) && b17->Visible == true){
                b17->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b18) && b18->Visible == true){
                b18->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b19) && b19->Visible == true){
                b19->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b20) && b20->Visible == true){
                b20->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b21) && b21->Visible == true){
                b21->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b22) && b22->Visible == true){
                b22->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b23) && b23->Visible == true){
                b23->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b24) && b24->Visible == true){
                b24->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b25) && b25->Visible == true){
                b25->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b26) && b26->Visible == true){
                b26->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b27) && b27->Visible == true){
                b27->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b28) && b28->Visible == true){
                b28->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b29) && b29->Visible == true){
                b29->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b30) && b30->Visible == true){
                b30->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b31) && b31->Visible == true){
                b31->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b32) && b32->Visible == true){
                b32->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b33) && b33->Visible == true){
                b33->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b34) && b34->Visible == true){
                b34->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b35) && b35->Visible == true){
                b35->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b36) && b36->Visible == true){
                b36->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b37) && b37->Visible == true){
                eat_time_timer->Enabled = true;
                b37->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b38) && b38->Visible == true){
                b38->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b39) && b39->Visible == true){
                b39->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b40) && b40->Visible == true){
                b40->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b41) && b41->Visible == true){
                b41->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b42) && b42->Visible == true){
                b42->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b43) && b43->Visible == true){
                b43->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b44) && b44->Visible == true){
                b44->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b45) && b45->Visible == true){
                b45->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b46) && b46->Visible == true){
                b46->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b47) && b47->Visible == true){
                b47->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b48) && b48->Visible == true){
                eat_time_timer->Enabled = true;
                b48->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b49) && b49->Visible == true){
                b49->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b50) && b50->Visible == true){
                b50->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b51) && b51->Visible == true){
                b51->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b52) && b52->Visible == true){
                b52->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b53) && b53->Visible == true){
                b53->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b54) && b54->Visible == true){
                b54->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b55) && b55->Visible == true){
                b55->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b56) && b56->Visible == true){
                b56->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b57) && b57->Visible == true){
                b57->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b58) && b58->Visible == true){
                eat_time_timer->Enabled = true;
                b58->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b59) && b59->Visible == true){
                b59->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b60) && b60->Visible == true){
                b60->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b61) && b61->Visible == true){
                b61->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b62) && b62->Visible == true){
                b62->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b63) && b63->Visible == true){
                b63->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b64) && b64->Visible == true){
                b64->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b65) && b65->Visible == true){
                b65->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b66) && b66->Visible == true){
                b66->Visible =
                false; counter--;
        }
        if(collision_ball(pacman, b67) && b67->Visible == true){
                b67->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b68) && b68->Visible == true){
                b68->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b69) && b69->Visible == true){
                b69->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b70) && b70->Visible == true){
                b70->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b71) && b71->Visible == true){
                b71->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b72) && b72->Visible == true){
                b72->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b73) && b73->Visible == true){
                b73->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b74) && b74->Visible == true){
                b74->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b75) && b75->Visible == true){
                b75->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b76) && b76->Visible == true){
                b76->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b77) && b77->Visible == true){
                eat_time_timer->Enabled = true;
                b77->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b78) && b78->Visible == true){
                b78->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b79) && b79->Visible == true){
                b79->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b80) && b80->Visible == true){
                b80->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b81) && b81->Visible == true){
                b81->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b82) && b82->Visible == true){
                b82->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b83) && b83->Visible == true){
                b83->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b84) && b84->Visible == true){
                b84->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b85) && b85->Visible == true){
                b85->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b86) && b86->Visible == true){
                b86->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b87) && b87->Visible == true){
                b87->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b88) && b88->Visible == true){
                b88->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b89) && b89->Visible == true){
                b89->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b90) && b90->Visible == true){
                b90->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b91) && b91->Visible == true){
                b91->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b92) && b92->Visible == true){
                b92->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b93) && b93->Visible == true){
                b93->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b94) && b94->Visible == true){
                b94->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b95) && b95->Visible == true){
                b95->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b96) && b96->Visible == true){
                b96->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b97) && b97->Visible == true){
                b97->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b98) && b98->Visible == true){
                b98->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b99) && b99->Visible == true){
                b99->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b100) && b100->Visible == true){
                b100->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b101) && b101->Visible == true){
                b101->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b102) && b102->Visible == true){
                b102->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b103) && b103->Visible == true){
                b103->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b104) && b104->Visible == true){
                b104->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b105) && b105->Visible == true){
                b105->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b106) && b106->Visible == true){
                b106->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b107) && b107->Visible == true){
                b107->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b108) && b108->Visible == true){
                b108->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b109) && b109->Visible == true){
                b109->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b110) && b110->Visible == true){
                b110->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b111) && b111->Visible == true){
                b111->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b112) && b112->Visible == true){
                b112->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b113) && b113->Visible == true){
                b113->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b114) && b114->Visible == true){
                b114->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b115) && b115->Visible == true){
                b115->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b116) && b116->Visible == true){
                b116->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b117) && b117->Visible == true){
                b117->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b118) && b118->Visible == true){
                b118->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b119) && b119->Visible == true){
                b119->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b120) && b120->Visible == true){
                b120->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b121) && b121->Visible == true){
                b121->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b122) && b122->Visible == true){
                b122->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b123) && b123->Visible == true){
                b123->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b124) && b124->Visible == true){
                b124->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b125) && b125->Visible == true){
                b125->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b126) && b126->Visible == true){
                b126->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b127) && b127->Visible == true){
                b127->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b128) && b128->Visible == true){
                b128->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b129) && b129->Visible == true){
                b129->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b130) && b130->Visible == true){
                b130->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b131) && b131->Visible == true){
                b131->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b132) && b132->Visible == true){
                b132->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b133) && b133->Visible == true){
                b133->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b134) && b134->Visible == true){
                b134->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b135) && b135->Visible == true){
                b135->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b136) && b136->Visible == true){
                eat_time_timer->Enabled = true;
                b136->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b137) && b137->Visible == true){
                b137->Visible = false;
                counter--;
        }
        if(collision_ball(pacman, b138) && b138->Visible == true){
                b138->Visible = false;
                counter--;
        }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::button2Click(TObject *Sender)
{
        eat_time_timer->Enabled = false;
        red_quarantine_timer->Enabled = false;
        green_quarantine_timer->Enabled = false;
        blue_quarantine_timer->Enabled = false;
        pink_quarantine_timer->Enabled = false;

        eattime = 0;
        redquarantine = 0;
        greenquarantine = 0;
        bluequarantine = 0;
        pinkquarantine = 0;

        counter = 138;
        life = 3;
        life1->Picture->LoadFromFile("pictures/pacman.bmp");
        life1->Visible = true;
        life2->Picture->LoadFromFile("pictures/pacman.bmp");
        life2->Visible = true;
        life3->Picture->LoadFromFile("pictures/pacman.bmp");
        life3->Visible = true;
        button1->Hide();
        button2->Hide();
        collision->Enabled = true;

        pacman->Left = 336;
        pacman->Top =  184;

        red_tier_timer->Enabled = false;
        red_vertical_timer->Enabled = false;
        redcounter = 0;
        redblock = 0;
        redx = -8;
        redy = -8;
        redghost->Left = 496;
        redghost->Top = 200;
        red_tier_timer->Enabled = false;
        red_vertical_timer->Enabled = true;

        greencounter = 0;
        greenblock = 0;
        greenx = -8;
        greeny = -8;
        greenghost->Left = 488;
        greenghost->Top = 112;
        green_tier_timer-> Enabled = true;
        green_vertical_timer->Enabled = false;

        bluecounter = 0;
        blueblock = 0;
        bluex = -8;
        bluey = -8;
        blueghost->Left = 512;
        blueghost->Top = 208;
        blue_tier_timer-> Enabled = true;
        blue_vertical_timer->Enabled = false;

        pinkcounter = 0;
        pinkx = -8;
        pinky = -8;
        pinkghost->Left = 512;
        pinkghost->Top = 160;
        pink_tier_timer-> Enabled = true;
        pink_vertical_timer->Enabled = false;

        b1->Visible = true;
        b2->Visible = true;
        b3->Visible = true;
        b4->Visible = true;
        b5->Visible = true;
        b6->Visible = true;
        b7->Visible = true;
        b8->Visible = true;
        b9->Visible = true;
        b10->Visible = true;
        b11->Visible = true;
        b12->Visible = true;
        b13->Visible = true;
        b14->Visible = true;
        b15->Visible = true;
        b16->Visible = true;
        b17->Visible = true;
        b18->Visible = true;
        b19->Visible = true;
        b20->Visible = true;
        b21->Visible = true;
        b22->Visible = true;
        b23->Visible = true;
        b24->Visible = true;
        b25->Visible = true;
        b26->Visible = true;
        b27->Visible = true;
        b28->Visible = true;
        b29->Visible = true;
        b30->Visible = true;
        b31->Visible = true;
        b32->Visible = true;
        b33->Visible = true;
        b34->Visible = true;
        b35->Visible = true;
        b36->Visible = true;
        b37->Visible = true;
        b38->Visible = true;
        b39->Visible = true;
        b40->Visible = true;
        b41->Visible = true;
        b42->Visible = true;
        b43->Visible = true;
        b44->Visible = true;
        b45->Visible = true;
        b46->Visible = true;
        b47->Visible = true;
        b48->Visible = true;
        b49->Visible = true;
        b50->Visible = true;
        b51->Visible = true;
        b52->Visible = true;
        b53->Visible = true;
        b54->Visible = true;
        b55->Visible = true;
        b56->Visible = true;
        b57->Visible = true;
        b58->Visible = true;
        b59->Visible = true;
        b60->Visible = true;
        b61->Visible = true;
        b62->Visible = true;
        b63->Visible = true;
        b64->Visible = true;
        b65->Visible = true;
        b66->Visible = true;
        b67->Visible = true;
        b68->Visible = true;
        b69->Visible = true;
        b70->Visible = true;
        b71->Visible = true;
        b72->Visible = true;
        b73->Visible = true;
        b74->Visible = true;
        b75->Visible = true;
        b76->Visible = true;
        b77->Visible = true;
        b78->Visible = true;
        b79->Visible = true;
        b80->Visible = true;
        b81->Visible = true;
        b82->Visible = true;
        b83->Visible = true;
        b84->Visible = true;
        b85->Visible = true;
        b86->Visible = true;
        b87->Visible = true;
        b88->Visible = true;
        b89->Visible = true;
        b90->Visible = true;
        b91->Visible = true;
        b92->Visible = true;
        b93->Visible = true;
        b94->Visible = true;
        b95->Visible = true;
        b96->Visible = true;
        b97->Visible = true;
        b98->Visible = true;
        b99->Visible = true;
        b100->Visible = true;
        b101->Visible = true;
        b102->Visible = true;
        b103->Visible = true;
        b104->Visible = true;
        b105->Visible = true;
        b106->Visible = true;
        b107->Visible = true;
        b108->Visible = true;
        b109->Visible = true;
        b110->Visible = true;
        b111->Visible = true;
        b112->Visible = true;
        b113->Visible = true;
        b114->Visible = true;
        b115->Visible = true;
        b116->Visible = true;
        b117->Visible = true;
        b118->Visible = true;
        b119->Visible = true;
        b120->Visible = true;
        b121->Visible = true;
        b122->Visible = true;
        b123->Visible = true;
        b124->Visible = true;
        b125->Visible = true;
        b126->Visible = true;
        b127->Visible = true;
        b128->Visible = true;
        b129->Visible = true;
        b130->Visible = true;
        b131->Visible = true;
        b132->Visible = true;
        b133->Visible = true;
        b134->Visible = true;
        b135->Visible = true;
        b136->Visible = true;
        b137->Visible = true;
        b138->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::button1Click(TObject *Sender)
{
        eat_time_timer->Enabled = false;
        red_quarantine_timer->Enabled = false;
        green_quarantine_timer->Enabled = false;
        blue_quarantine_timer->Enabled = false;
        pink_quarantine_timer->Enabled = false;

        eattime = 0;
        redquarantine = 0;
        greenquarantine = 0;
        bluequarantine = 0;
        pinkquarantine = 0;

        counter = 138;
        life = 3;
        life1->Picture->LoadFromFile("pictures/pacman.bmp");
        life1->Visible = true;
        life2->Picture->LoadFromFile("pictures/pacman.bmp");
        life2->Visible = true;
        life3->Picture->LoadFromFile("pictures/pacman.bmp");
        life3->Visible = true;
        button1->Hide();
        button2->Hide();
        collision->Enabled = true;

        pacman->Left = 336;
        pacman->Top =  184;

        red_tier_timer->Enabled = false;
        red_vertical_timer->Enabled = false;
        redcounter = 0;
        redblock = 0;
        redx = -8;
        redy = -8;
        redghost->Left = 496;
        redghost->Top = 200;
        red_tier_timer->Enabled = false;
        red_vertical_timer->Enabled = true;

        greencounter = 0;
        greenblock = 0;
        greenx = -8;
        greeny = -8;
        greenghost->Left = 488;
        greenghost->Top = 112;
        green_tier_timer-> Enabled = true;
        green_vertical_timer->Enabled = false;

        bluecounter = 0;
        blueblock = 0;
        bluex = -8;
        bluey = -8;
        blueghost->Left = 512;
        blueghost->Top = 208;
        blue_tier_timer-> Enabled = true;
        blue_vertical_timer->Enabled = false;

        pinkcounter = 0;
        pinkx = -8;
        pinky = -8;
        pinkghost->Left = 512;
        pinkghost->Top = 160;
        pink_tier_timer-> Enabled = true;
        pink_vertical_timer->Enabled = false;

        b1->Visible = true;
        b2->Visible = true;
        b3->Visible = true;
        b4->Visible = true;
        b5->Visible = true;
        b6->Visible = true;
        b7->Visible = true;
        b8->Visible = true;
        b9->Visible = true;
        b10->Visible = true;
        b11->Visible = true;
        b12->Visible = true;
        b13->Visible = true;
        b14->Visible = true;
        b15->Visible = true;
        b16->Visible = true;
        b17->Visible = true;
        b18->Visible = true;
        b19->Visible = true;
        b20->Visible = true;
        b21->Visible = true;
        b22->Visible = true;
        b23->Visible = true;
        b24->Visible = true;
        b25->Visible = true;
        b26->Visible = true;
        b27->Visible = true;
        b28->Visible = true;
        b29->Visible = true;
        b30->Visible = true;
        b31->Visible = true;
        b32->Visible = true;
        b33->Visible = true;
        b34->Visible = true;
        b35->Visible = true;
        b36->Visible = true;
        b37->Visible = true;
        b38->Visible = true;
        b39->Visible = true;
        b40->Visible = true;
        b41->Visible = true;
        b42->Visible = true;
        b43->Visible = true;
        b44->Visible = true;
        b45->Visible = true;
        b46->Visible = true;
        b47->Visible = true;
        b48->Visible = true;
        b49->Visible = true;
        b50->Visible = true;
        b51->Visible = true;
        b52->Visible = true;
        b53->Visible = true;
        b54->Visible = true;
        b55->Visible = true;
        b56->Visible = true;
        b57->Visible = true;
        b58->Visible = true;
        b59->Visible = true;
        b60->Visible = true;
        b61->Visible = true;
        b62->Visible = true;
        b63->Visible = true;
        b64->Visible = true;
        b65->Visible = true;
        b66->Visible = true;
        b67->Visible = true;
        b68->Visible = true;
        b69->Visible = true;
        b70->Visible = true;
        b71->Visible = true;
        b72->Visible = true;
        b73->Visible = true;
        b74->Visible = true;
        b75->Visible = true;
        b76->Visible = true;
        b77->Visible = true;
        b78->Visible = true;
        b79->Visible = true;
        b80->Visible = true;
        b81->Visible = true;
        b82->Visible = true;
        b83->Visible = true;
        b84->Visible = true;
        b85->Visible = true;
        b86->Visible = true;
        b87->Visible = true;
        b88->Visible = true;
        b89->Visible = true;
        b90->Visible = true;
        b91->Visible = true;
        b92->Visible = true;
        b93->Visible = true;
        b94->Visible = true;
        b95->Visible = true;
        b96->Visible = true;
        b97->Visible = true;
        b98->Visible = true;
        b99->Visible = true;
        b100->Visible = true;
        b101->Visible = true;
        b102->Visible = true;
        b103->Visible = true;
        b104->Visible = true;
        b105->Visible = true;
        b106->Visible = true;
        b107->Visible = true;
        b108->Visible = true;
        b109->Visible = true;
        b110->Visible = true;
        b111->Visible = true;
        b112->Visible = true;
        b113->Visible = true;
        b114->Visible = true;
        b115->Visible = true;
        b116->Visible = true;
        b117->Visible = true;
        b118->Visible = true;
        b119->Visible = true;
        b120->Visible = true;
        b121->Visible = true;
        b122->Visible = true;
        b123->Visible = true;
        b124->Visible = true;
        b125->Visible = true;
        b126->Visible = true;
        b127->Visible = true;
        b128->Visible = true;
        b129->Visible = true;
        b130->Visible = true;
        b131->Visible = true;
        b132->Visible = true;
        b133->Visible = true;
        b134->Visible = true;
        b135->Visible = true;
        b136->Visible = true;
        b137->Visible = true;
        b138->Visible = true;
}
//---------------------------------------------------------------------------


