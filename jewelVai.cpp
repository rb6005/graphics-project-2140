#include <iostream>
#include<graphics.h>
using namespace std;
void myFunction();
void myFunction2();
void flag();
void emoji();
void ship();
void clock();
void carrom();

void myFunction1()
{
    cout << "\n-----------";
    cout << "\n| Context |";
    cout << "\n-----------"<<endl;
    cout << "\n1. National Flag"<<endl;
    cout << "\n2. Emoji"<<endl;
    cout << "\n3. Ship"<<endl;
    cout << "\n4. Clock"<<endl;
    cout << "\n5. Carrom Board"<<endl;
}

int main()
{
    myFunction();
    int x;
    while(x!=0)
    {
        myFunction1();
        cout<<"\nInput: ";
        cin>>x;
        if(x!=0&&x!=1&&x!=2&&x!=3&&x!=4&&x!=5)
            cout<<"\nError."<<endl;
        else
            switch (x)
            {
            case 1:
                flag();
                break;
            case 2:
                emoji();
                break;
            case 3:
                ship();
                break;
            case 4:
                clock();
                break;
            case 5:
                carrom();
                break;
            case 0:
                myFunction2();
                break;
            }
    }
    return 0;
}

void myFunction()
{
    cout << "           Sonargaon University(SU)                  "<<endl;
    cout << "\n  Department of Computer Science and Engineering   "<<endl;
    cout << "\nB. Sc Engineering in Computer Science and Engineering"<<endl;
    cout << "\nCourse title: Computer Graphics   Course code: CSE413"<<endl;
    cout << "\nSection: 22A                       Session: Spring-24"<<endl;
}

void myFunction2()
{
    cout << "\nThank you for your patience.\n"<<endl;
    cout << "-------------------------------------------------"<<endl;
    cout << "| Presented to- "<<"         |    Presented by-     |"<<endl;
    cout << "| Nabila Anwar"<<"           |    Jewel Biswas      |"<<endl;
    cout << "| Designation: Lecturer"<<"  |    ID: CSE2101022140 |"<<endl;
    cout << "-------------------------------------------------"<<endl;
}

void flag()
{
    // Initialize of gdriver with
	// DETECT macros
	int gd = DETECT, gm;
	initwindow(1000,600,"Flag");
	//initgraph(&gd, &gm, "C:\\turboc3\\bgi");
    setcolor(15);
	// Creating the base rectangle
	line(250, 100, 250, 600);
	line(250, 100, 250, 600);

	rectangle(250,100,650,300);
    setfillstyle(1,GREEN);
	floodfill(252, 101, 15);

	circle(450, 190, 50);
	setfillstyle(1,RED);
	floodfill(452, 188, 15);

	rectangle(280, 410, 500, 335);
	outtextxy(300, 350, "Bangladeshi National Flag");
	outtextxy(300, 380, "Draw by JEWEL");

	getch();

	// Close the initialized gdriver
	closegraph();
}

void ship()
{
    int gd = DETECT, gm;
    initwindow(1500,800,"Ship");

	// Initialize of gdriver
	// with DETECT macros
	//initgraph(&gd, &gm,
			//"C:\\turboc3\\bgi");

	// Set Background Color Cyan
	setfillstyle(SOLID_FILL,
				CYAN);
	floodfill(50, 50, 15);

	// Base Line
	line(300, 600, 1000, 600);

	// Lower Line
	line(290, 580, 1003, 580);

	// Upper Line
	line(285, 560, 1005, 560);

	// Left Tangent
	line(300, 600, 220, 400);

	// Right Tangent
	line(1000, 600, 1020, 450);

	// Connector Line
	line(220, 400, 1020, 450);
	setfillstyle(SOLID_FILL,
				BLACK);
	floodfill(250, 420, 15);
	floodfill(350, 590, 15);
	setfillstyle(SOLID_FILL,
				RED);
	floodfill(350, 570, 15);

	// First Life Jacket
	setfillstyle(SOLID_FILL,
				WHITE);
	circle(400, 480, 30);
	circle(400, 480, 20);
	floodfill(375, 480, 15);

	// Second Life Jacket
	circle(500, 480, 30);
	circle(500, 480, 20);
	floodfill(475, 480, 15);

	// Ralling
	setfillstyle(SOLID_FILL,
				BLACK);
	line(230, 400, 230, 370);
	line(225, 400, 225, 365);
	line(230, 370, 430, 385);
	line(225, 365, 435, 380);
	line(430, 385, 430, 415);
	line(435, 380, 435, 415);
	floodfill(227, 367, 15);

	// Cabin
	setfillstyle(SOLID_FILL,
				DARKGRAY);
	line(410, 415, 410, 315);
	line(410, 315, 1000, 374);
	line(1000, 374, 1000, 450);
	floodfill(950, 390, 15);
	floodfill(425, 410, 15);
	setfillstyle(SOLID_FILL,
				WHITE);

	// First Window
	circle(900, 400, 20);
	floodfill(890, 400, 15);

	// Second Window
	circle(820, 400, 20);
	floodfill(810, 400, 15);

	// Third Window
	circle(740, 400, 20);
	floodfill(730, 400, 15);

	// First Chimney
	setfillstyle(SOLID_FILL,
				BLACK);
	line(880, 363, 880, 280);
	line(880, 280, 910, 280);
	line(910, 280, 910, 365);
	floodfill(890, 290, 15);

	// Second Chimney
	line(950, 369, 950, 255);
	line(950, 255, 980, 255);
	line(980, 255, 980, 374);
	floodfill(960, 265, 15);

	// Hold a screen for a
	// while
	getch();

	// Close the initialized
	/// gdriver
	closegraph();
}

void clock()
{
    int gd = DETECT, gm;
   initwindow(1000,800,"Clock");

	//initgraph(&gd, &gm, "");

	// Clock Outer Outline
	rectangle(500, 50, 800, 650);

	// Clock Inner Outline
	rectangle(520, 70, 780, 630);

	// Coloring Middle Part Of
	// Rectangle With Brown
	setfillstyle(SOLID_FILL, BROWN);
	floodfill(505, 55, 15);

	// Clock Outline
	circle(650, 200, 130);
	circle(650, 200, 3);

	// Coloring all the parts Of the
	// clock except the circle with
	// Darkgray
	setfillstyle(SOLID_FILL, DARKGRAY);
	floodfill(525, 355, 15);
	floodfill(522, 72, 15);
	floodfill(768, 72, 15);

	// Inserting Digits
	settextstyle(6, 0, 3);
	outtextxy(697, 100, "01");
	outtextxy(730, 140, "02");
	outtextxy(742, 190, "03");
	outtextxy(721, 240, "04");
	outtextxy(690, 280, "05");
	outtextxy(630, 300, "06");
	outtextxy(578, 280, "07");
	outtextxy(540, 240, "08");
	outtextxy(530, 190, "09");
	outtextxy(537, 140, "10");
	outtextxy(569, 100, "11");
	outtextxy(630, 80, "12");

	// Left Line Of Pendulum
	line(645, 328, 645, 528);

	// Right Line Of Pendulum
	line(655, 328, 655, 528);

	// Pendulum Bob
	circle(650, 546, 20);

	// Coloring Line & Bob With Black
	setfillstyle(SOLID_FILL, BLACK);
	floodfill(652, 544, 15);
	floodfill(647, 330, 15);

	// Creating the Hour Hand
	// & Color Blue
	setcolor(BLUE);
	line(647, 197, 600, 170);

	// Creating Minute Hand
	// & Color Yellow
	setcolor(YELLOW);
	line(653, 200, 730, 170);

	// Creating Second Hand and the
	// Color Red
	setcolor(RED);
	line(650, 203, 630, 290);

	// Hold the screen for a while
	getch();

	// Close the initialized gdriver
	closegraph();
}
void carrom()
{
     int gd = DETECT, gm;
    initwindow(1000,800,"carrom");

	rectangle(200, 100, 600, 500);

	// Draw the outer Rectangle
	rectangle(220, 120, 580, 480);

	// Draw the inner Rectangle
	circle(240, 140, 20);

	// Upper Left Hole
	circle(560, 140, 20);

	// Upper Right Hole
	circle(240, 460, 20);

	// Lower Left Hole
	circle(560, 460, 20);

	// Lower Right Hole
	setfillstyle(SOLID_FILL, BROWN);
	floodfill(300, 170, 15);
	line(300, 170, 500, 170);

	// Upper Striker Range Line(Upper)
	line(300, 184, 500, 184);

	// Upper Striker Range Line(Lower)
	circle(300, 177, 7);

	// Circle Upper Stricker(Left)
	circle(500, 177, 7);

	// Circle Upper Stricker(Right)
	line(300, 430, 500, 430);

	// Lower Striker Range Line(Upper)
	line(300, 416, 500, 416);

	// Lower Striker Range Line(Lower)
	circle(300, 423, 7);

	// Circle Lower Stricker(Left)
	circle(500, 423, 7);

	// Circle Lower Stricker(Right)
	line(270, 200, 270, 400);

	// Left Striker Range Line(Left)
	line(284, 200, 284, 400);

	// Left Striker Range Line(Right)
	circle(277, 200, 7);

	// Circle Left Stricker(Upper)
	circle(277, 400, 7);

	// Circle Left Stricker(Down)
	line(530, 200, 530, 400);

	// Right Striker Range Line(Left)
	line(516, 200, 516, 400);

	// Right Striker Range Line(Right)
	circle(523, 200, 7);

	// Circle Right Stricker(Upper)
	circle(523, 400, 7);

	// Circle Right Stricker(Lower)
	line(270, 170, 350, 250);

	// Upper Left Tangent Line
	line(530, 170, 450, 250);

	// Upper Right Tangent Line
	line(270, 430, 350, 350);

	// Lower Left Tangent Line
	line(530, 430, 450, 350);

	// Lower Right Tangent Line
	circle(400, 300, 40);

	// Central Circle
	circle(400, 300, 15);

	// Mini Central Circle
	setfillstyle(SOLID_FILL, RED);

	// All Circle Red Coloring
	floodfill(303, 180, 15);
	floodfill(497, 180, 15);
	floodfill(303, 420, 15);
	floodfill(497, 420, 15);
	floodfill(280, 203, 15);
	floodfill(280, 403, 15);
	floodfill(520, 203, 15);
	floodfill(520, 403, 15);
	floodfill(405, 305, 15);

	setfillstyle(SOLID_FILL, DARKGRAY);
	floodfill(243, 143, 15);
	floodfill(563, 143, 15);
	floodfill(243, 463, 15);
	floodfill(563, 463, 15);

	// Collectively coloring all
	// the shapes created above
	getch();

	// Close the initialized gdriver
	closegraph();
}

void emoji()
{
    int gd = DETECT, gm;
    initwindow(600,400,"emoji");



	//initgraph(&gr, &gm, "C:\\Turboc3\\BGI");

	// Set color of smiley to yellow
	setcolor(YELLOW);

	// creating circle and fill it with
	// yellow color using floodfill.
	circle(300, 100, 40);
	setfillstyle(SOLID_FILL, YELLOW);
	floodfill(300, 100, YELLOW);

	// Set color of background to black
	setcolor(BLACK);
	setfillstyle(SOLID_FILL, BLACK);

	// Use fill ellipse for creating eyes
	fillellipse(310, 85, 2, 6);
	fillellipse(290, 85, 2, 6);

	// Use ellipse for creating mouth
	ellipse(300, 100, 205, 335, 20, 9);
	ellipse(300, 100, 205, 335, 20, 10);
	ellipse(300, 100, 205, 335, 20, 11);

	getch();

	// closegraph function closes the
	// graphics mode and deallocates
	// all memory allocated by
	// graphics system
	closegraph();

//	return 0;
}
