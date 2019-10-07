#include <gb/gb.h>

#include <stdio.h>
#include <string.h>

#include "util.c"

#include "background.c"
#include "ui.c"
#include "card.c"

struct Card ace;
struct Card two;
struct Card three;
struct Card four;
struct Card five;
struct Card six;
struct Card seven;
struct Card eight;
struct Card nine;
struct Card jack;
struct Card king;

void setupAce()
{
    ace.spriteids[0] = 12;
    ace.spriteids[1] = 13;
    ace.spriteids[2] = 14;
    ace.spriteids[3] = 15;
    ace.spriteids[4] = 16;
    ace.spriteids[5] = 17;
    ace.spriteids[6] = 18;
    ace.spriteids[7] = 19;
}

void setupTwo()
{
    two.spriteids[0] = 20;
    two.spriteids[1] = 13;
    two.spriteids[2] = 21;
    two.spriteids[3] = 22;
    two.spriteids[4] = 23;
    two.spriteids[5] = 24;
    two.spriteids[6] = 18;
    two.spriteids[7] = 25;
}

void setupThree()
{
    three.spriteids[0] = 26;
    three.spriteids[1] = 13;
    three.spriteids[2] = 27;
    three.spriteids[3] = 28;
    three.spriteids[4] = 29;
    three.spriteids[5] = 30;
    three.spriteids[6] = 18;
    three.spriteids[7] = 31;
}

void setupFour()
{
    four.spriteids[0] = 32;
    four.spriteids[1] = 13;
    four.spriteids[2] = 33;
    four.spriteids[3] = 34;
    four.spriteids[4] = 33;
    four.spriteids[5] = 34;
    four.spriteids[6] = 18;
    four.spriteids[7] = 35;
}

void setupFive()
{
    five.spriteids[0] = 36;
    five.spriteids[1] = 37;
    five.spriteids[2] = 38;
    five.spriteids[3] = 39;
    five.spriteids[4] = 40;
    five.spriteids[5] = 41;
    five.spriteids[6] = 42;
    five.spriteids[7] = 43;
}

void setupSix()
{
    six.spriteids[0] = 44;
    six.spriteids[1] = 37;
    six.spriteids[2] = 45;
    six.spriteids[3] = 46;
    six.spriteids[4] = 47;
    six.spriteids[5] = 48;
    six.spriteids[6] = 42;
    six.spriteids[7] = 49;
}

void setupSeven()
{
    seven.spriteids[0] = 50;
    seven.spriteids[1] = 51;
    seven.spriteids[2] = 52;
    seven.spriteids[3] = 53;
    seven.spriteids[4] = 54;
    seven.spriteids[5] = 55;
    seven.spriteids[6] = 42;
    seven.spriteids[7] = 56;
}

void setupEight()
{
    eight.spriteids[0] = 57;
    eight.spriteids[1] = 58;
    eight.spriteids[2] = 59;
    eight.spriteids[3] = 60;
    eight.spriteids[4] = 61;
    eight.spriteids[5] = 62;
    eight.spriteids[6] = 42;
    eight.spriteids[7] = 63;
}

void setupNine()
{
    nine.spriteids[0] = 64;
    nine.spriteids[1] = 65;
    nine.spriteids[2] = 66;
    nine.spriteids[3] = 67;
    nine.spriteids[4] = 68;
    nine.spriteids[5] = 69;
    nine.spriteids[6] = 70;
    nine.spriteids[7] = 71;
}

void setupJack()
{
    jack.spriteids[0] = 72;
    jack.spriteids[1] = 73;
    jack.spriteids[2] = 74;
    jack.spriteids[3] = 75;
    jack.spriteids[4] = 76;
    jack.spriteids[5] = 77;
    jack.spriteids[6] = 78;
    jack.spriteids[7] = 79;
}

void setupKing()
{
    king.spriteids[0] = 80;
    king.spriteids[1] = 81;
    king.spriteids[2] = 82;
    king.spriteids[3] = 83;
    king.spriteids[4] = 84;
    king.spriteids[5] = 85;
    king.spriteids[6] = 86;
    king.spriteids[7] = 87;
}

void setSlot1(struct Card *card)
{

    int x = 56;
    int y = 120;

    set_sprite_tile(8, card->spriteids[0]);
    set_sprite_tile(9, card->spriteids[1]);
    set_sprite_tile(10, card->spriteids[2]);
    set_sprite_tile(11, card->spriteids[3]);
    set_sprite_tile(12, card->spriteids[4]);
    set_sprite_tile(13, card->spriteids[5]);
    set_sprite_tile(14, card->spriteids[6]);
    set_sprite_tile(15, card->spriteids[7]);

    move_sprite(8, x, y);
    move_sprite(9, x + 8, y);
    move_sprite(10, x, y + 8);
    move_sprite(11, x + 8, y + 8);
    move_sprite(12, x, y + 16);
    move_sprite(13, x + 8, y + 16);
    move_sprite(14, x, y + 24);
    move_sprite(15, x + 8, y + 24);
}

void setSlot2(struct Card *card)
{

    int x = 80;
    int y = 120;

    set_sprite_tile(16, card->spriteids[0]);
    set_sprite_tile(17, card->spriteids[1]);
    set_sprite_tile(18, card->spriteids[2]);
    set_sprite_tile(19, card->spriteids[3]);
    set_sprite_tile(20, card->spriteids[4]);
    set_sprite_tile(21, card->spriteids[5]);
    set_sprite_tile(22, card->spriteids[6]);
    set_sprite_tile(23, card->spriteids[7]);

    move_sprite(16, x, y);
    move_sprite(17, x + 8, y);
    move_sprite(18, x, y + 8);
    move_sprite(19, x + 8, y + 8);
    move_sprite(20, x, y + 16);
    move_sprite(21, x + 8, y + 16);
    move_sprite(22, x, y + 24);
    move_sprite(23, x + 8, y + 24);
}

void setSlot3(struct Card *card)
{

    int x = 104;
    int y = 120;

    set_sprite_tile(24, card->spriteids[0]);
    set_sprite_tile(25, card->spriteids[1]);
    set_sprite_tile(26, card->spriteids[2]);
    set_sprite_tile(27, card->spriteids[3]);
    set_sprite_tile(28, card->spriteids[4]);
    set_sprite_tile(29, card->spriteids[5]);
    set_sprite_tile(30, card->spriteids[6]);
    set_sprite_tile(31, card->spriteids[7]);

    move_sprite(24, x, y);
    move_sprite(25, x + 8, y);
    move_sprite(26, x, y + 8);
    move_sprite(27, x + 8, y + 8);
    move_sprite(28, x, y + 16);
    move_sprite(29, x + 8, y + 16);
    move_sprite(30, x, y + 24);
    move_sprite(31, x + 8, y + 24);
}

void main()
{
    int souls = 10;
    int answered = 0;
    int usernumber = 0;
    int higher = 0;
    int card1 = 0;
    int card2 = 0;
    int card3 = 0;
    int won = 0;
    int lose = 0;

    set_background_splash();

    SHOW_BKG;
    DISPLAY_ON;

    waitpad(J_START);

    set_background_credits();

    performant_delay(750);

    set_background_howto();

    performant_delay(750);

    set_sprite_data(0, 89, SpriteKeys);

    init_numbers();
    SHOW_SPRITES;

    set_background_devil_normal();

    setupAce();
    setupTwo();
    setupThree();
    setupFour();
    setupFive();
    setupSix();
    setupSeven();
    setupEight();
    setupNine();
    setupJack();
    setupKing();

    set_souls(souls);

    performant_delay(10);

    while (won == 0 && lose == 0)
    {
        higher = random_number(2);
        card1 = random_number(11);
        card2 = random_number(11);
        card3 = random_number(11);

        if(higher == 1) {
            set_sprite_tile(7, 10);
            move_sprite(7, 158, 20);
        } else {
            set_sprite_tile(7, 88);
            move_sprite(7, 158, 20);
        }

        if (card1 == 1)
        {
            setSlot1(&ace);
        }
        else if (card1 == 2)
        {
            setSlot1(&two);
        }
        else if (card1 == 3)
        {
            setSlot1(&three);
        }
        else if (card1 == 4)
        {
            setSlot1(&four);
        }
        else if (card1 == 5)
        {
            setSlot1(&five);
        }
        else if (card1 == 6)
        {
            setSlot1(&six);
        }
        else if (card1 == 7)
        {
            setSlot1(&seven);
        }
        else if (card1 == 8)
        {
            setSlot1(&eight);
        }
        else if (card1 == 9)
        {
            setSlot1(&nine);
        }
        else if (card1 == 10)
        {
            setSlot1(&jack);
        }
        else if (card1 == 11)
        {
            setSlot1(&king);
        }

        if (card2 == 1)
        {
            setSlot2(&ace);
        }
        else if (card2 == 2)
        {
            setSlot2(&two);
        }
        else if (card2 == 3)
        {
            setSlot2(&three);
        }
        else if (card2 == 4)
        {
            setSlot2(&four);
        }
        else if (card2 == 5)
        {
            setSlot2(&five);
        }
        else if (card2 == 6)
        {
            setSlot2(&six);
        }
        else if (card2 == 7)
        {
            setSlot2(&seven);
        }
        else if (card2 == 8)
        {
            setSlot2(&eight);
        }
        else if (card2 == 9)
        {
            setSlot2(&nine);
        }
        else if (card2 == 10)
        {
            setSlot2(&jack);
        }
        else if (card2 == 11)
        {
            setSlot2(&king);
        }

        if (card3 == 1)
        {
            setSlot3(&ace);
        }
        else if (card3 == 2)
        {
            setSlot3(&two);
        }
        else if (card3 == 3)
        {
            setSlot3(&three);
        }
        else if (card3 == 4)
        {
            setSlot3(&four);
        }
        else if (card3 == 5)
        {
            setSlot3(&five);
        }
        else if (card3 == 6)
        {
            setSlot3(&six);
        }
        else if (card3 == 7)
        {
            setSlot3(&seven);
        }
        else if (card3 == 8)
        {
            setSlot3(&eight);
        }
        else if (card3 == 9)
        {
            setSlot3(&nine);
        }
        else if (card3 == 10)
        {
            setSlot3(&jack);
        }
        else if (card3 == 11)
        {
            setSlot3(&king);
        }

        while (answered == 0)
        {
            if(joypad() == J_LEFT) {
                usernumber = card1;
                answered = 1;
            }
            else if(joypad() == J_UP) {
                usernumber = card2;
                answered = 1;
            }
            else if(joypad() == J_RIGHT) {
                usernumber = card3;
                answered = 1;
            }
        }

        if(higher == 1) {
            if(usernumber > random_number(11)) {
                souls += 5;
            } else {
                souls -= 5;
            }
        } else {
            if(usernumber < random_number(11)) {
                souls += 5;
            } else {
                souls -= 5;
            }
        }

        set_souls(souls);
        answered = 0;

        if(souls <= 0) {
            lose = 1;
        }

        if(souls >= 100) {
            won = 1;
        }

        performant_delay(50);
    }

    if(won) {
        set_background_devil_angry();
        HIDE_SPRITES;
        performant_delay(100);
        printf("You Win!");
    }

    if(lose) {
        set_background_devil_laugh();
        HIDE_SPRITES;
        performant_delay(100);
        printf("You Lose!");
    }

}