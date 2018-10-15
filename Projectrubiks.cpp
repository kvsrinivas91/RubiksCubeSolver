#include<iostream>
//#include<bits/stdc++.h>

using namespace std;

int slno=0;
//--------------------------------
/*
char white[9]={'r','w','o','w','r','o','w','o','w'};
            //  0   1   2   3   4   5   6   7   8
char yellow[9]={'y','b','w','g','b','g','b','b','y'};
             //  0   1   2   3   4   5   6   7   8
char red[9]={'g','o','y','b','y','g','g','b','r'};
          //  0   1   2   3   4   5   6   7   8
char orange[9]={'w','g','y','y','w','o','y','g','o'};
             //  0   1   2   3   4   5   6   7   8
char green[9]={'o','o','r','r','o','r','b','y','g'};
            //  0   1   2   3   4   5   6   7   8
char blue[9]={'b','y','r','g','r','w','r','w','b'};
           //  0   1   2   3   4   5   6   7   8

*/

char white[10]={"rwbgwyryw"};
            //   012345678
char yellow[10]={"brgwoygby"};
             //   012345678
char red[10]={"bowyoywyr"};
          //   012345678
char orange[10]={"oygwrbowo"};
             //   012345678
char blue[10]={"gwyrbbogb"};
           //   012345678
char green[10]={"roggrrbog"};
            //   012345678


//-------------------------------

/*string colour[6]={"white","yellow","red","orange","green","blue"};
int cntc[6];
char temp;
int ctw=0,cty=0,ctr=0,cto=0,ctg=0,ctb=0;
*/
/*
for(int i=0;i<6;i++)
   {
        for(int j=0;j<9;j++)
        {
           temp=colour[i](j);
           switch(temp)
           {
            case w: cntw++;
                    break;
            case y: cnty++;
                    break;
            case r: cntr++;
                    break;
            case o: cnto++;
                    break;
            case g: cntg++;
                    break;
            case b: cntb++;
                    break;

           }
        }
    }
*/
//-------------------------------

void display(char face[9])
{
    for(int i=0;i<9;i++)
    {
        cout<<i<<face[i]<<" ";
    }
    cout<<"\n\n";
}
//-------------------------------
void displayall()
{
    cout<<"White side  :";
    display(white);

    cout<<"Blue side   :";
    display(blue);

    cout<<"Red side    :";
    display(red);

    cout<<"Green side  :";
    display(green);

    cout<<"Orange side :";
    display(orange);

    cout<<"Yellow side :";
    display(yellow);
}
//-------------------------------

inline void swap(char &a,char &b)
{
    char t=a;
        a=b;
        b=t;
}
//-------------------------------

void rotate_clockwise(char choice)
{

    if(choice=='w')
    {
        slno++;
        cout<<slno<<". White1"<<endl;
        swap(white[7],white[1]);
        swap(white[7],white[5]);
        swap(white[5],white[3]);
        swap(white[0],white[2]);
        swap(white[0],white[6]);
        swap(white[6],white[4]);
        //-------
        swap(blue[0],orange[0]);
        swap(orange[0],green[0]);
        swap(red[0],green[0]);
        swap(blue[7],orange[7]);
        swap(orange[7],green[7]);
        swap(red[7],green[7]);
        swap(blue[6],orange[6]);
        swap(orange[6],green[6]);
        swap(red[6],green[6]);
        //displayall();
    }

    else if(choice=='y')
    {
        slno++;
        cout<<slno<<". Yellow1"<<endl;
        swap(yellow[7],yellow[1]);
        swap(yellow[1],yellow[3]);
        swap(yellow[5],yellow[3]);
        swap(yellow[0],yellow[6]);
        swap(yellow[0],yellow[2]);
        swap(yellow[4],yellow[2]);
        //-------
        swap(blue[4],orange[4]);
        swap(blue[4],red[4]);
        swap(red[4],green[4]);
        swap(blue[3],orange[3]);
        swap(blue[3],red[3]);
        swap(red[3],green[3]);
        swap(blue[2],orange[2]);
        swap(blue[2],red[2]);
        swap(red[2],green[2]);
        //displayall();
    }

    else if(choice=='r')
    {
        slno++;
        cout<<slno<<". Red1"<<endl;
        swap(red[0],red[2]);
        swap(red[0],red[6]);
        swap(red[4],red[6]);
        swap(red[1],red[3]);
        swap(red[1],red[7]);
        swap(red[5],red[7]);
        //--------------------
        swap(blue[6],white[3]);
        swap(white[3],green[2]);
        swap(green[2],yellow[1]);
        swap(blue[5],white[2]);
        swap(white[2],green[1]);
        swap(green[1],yellow[2]);
        swap(blue[4],white[1]);
        swap(white[1],green[0]);
        swap(green[0],yellow[3]);
        //displayall();
    }


    else if(choice=='o')
    {
        slno++;
        cout<<slno<<". Orange1"<<endl;
        swap(orange[0],orange[2]);
        swap(orange[0],orange[6]);
        swap(orange[4],orange[6]);
        swap(orange[1],orange[3]);
        swap(orange[1],orange[7]);
        swap(orange[5],orange[7]);
        //-------------------------

        swap(yellow[5],green[6]);
        swap(white[7],green[6]);
        swap(white[7],blue[2]);
        swap(yellow[6],green[5]);
        swap(white[6],green[5]);
        swap(white[6],blue[1]);
        swap(yellow[7],green[4]);
        swap(white[5],green[4]);
        swap(white[5],blue[0]);
        //displayall();
    }

    else if(choice=='b')
    {
        slno++;
        cout<<slno<<". Blue1"<<endl;
        swap(blue[0],blue[2]);
        swap(blue[0],blue[6]);
        swap(blue[4],blue[6]);
        swap(blue[1],blue[3]);
        swap(blue[1],blue[7]);
        swap(blue[5],blue[7]);
        //-------------------
        swap(yellow[7],orange[6]);
        swap(white[1],orange[6]);
        swap(white[1],red[2]);
        swap(yellow[0],orange[5]);
        swap(white[0],orange[5]);
        swap(white[0],red[1]);
        swap(yellow[1],orange[4]);
        swap(white[7],orange[4]);
        swap(white[7],red[0]);
        //displayall    }();

}
    else if(choice=='g')
    {
        slno++;
        cout<<slno<<". Green1"<<endl;
        swap(green[0],green[2]);
        swap(green[0],green[6]);
        swap(green[4],green[6]);
        swap(green[1],green[3]);
        swap(green[1],green[7]);
        swap(green[5],green[7]);
        //---------------------
        swap(yellow[3],red[6]);
        swap(white[5],red[6]);
        swap(white[5],orange[2]);
        swap(yellow[4],red[5]);
        swap(white[4],red[5]);
        swap(white[4],orange[1]);
        swap(yellow[5],red[4]);
        swap(white[3],red[4]);
        swap(white[3],orange[0]);
        //displayall();
    }
}
//------------------------------------------------------
void rotate_anticlockwise(char choice)
{
if(choice=='w')
    {
        slno++;
        cout<<slno<<". White2"<<endl;
        swap(white[7],white[1]);
        swap(white[1],white[3]);
        swap(white[5],white[3]);
        swap(white[0],white[2]);
        swap(white[2],white[4]);
        swap(white[6],white[4]);
        //-------
        swap(blue[0],orange[0]);
        swap(red[0],blue[0]);
        swap(red[0],green[0]);
        swap(blue[7],orange[7]);
        swap(red[7],blue[7]);
        swap(red[7],green[7]);
        swap(blue[6],orange[6]);
        swap(red[6],blue[6]);
        swap(red[6],green[6]);
        //displayall();
    }

    else if(choice=='y')
    {
        slno++;
        cout<<slno<<". Yellow2"<<endl;
        swap(yellow[7],yellow[1]);
        swap(yellow[7],yellow[5]);
        swap(yellow[5],yellow[3]);
        swap(yellow[0],yellow[2]);
        swap(yellow[0],yellow[6]);
        swap(yellow[6],yellow[4]);
        //-------
        swap(blue[4],orange[4]);
        swap(orange[4],green[4]);
        swap(red[4],green[4]);
        swap(blue[3],orange[3]);
        swap(orange[3],green[3]);
        swap(red[3],green[3]);
        swap(blue[2],orange[2]);
        swap(orange[2],green[2]);
        swap(red[2],green[2]);
        //displayall();
    }

    else if(choice=='r')
    {
        slno++;
        cout<<slno<<". Red2"<<endl;
        swap(red[0],red[2]);
        swap(red[2],red[4]);
        swap(red[4],red[6]);
        swap(red[1],red[3]);
        swap(red[3],red[5]);
        swap(red[5],red[7]);
        //--------------------
        swap(blue[6],white[3]);
        swap(blue[6],yellow[1]);
        swap(green[2],yellow[1]);
        swap(blue[5],white[2]);
        swap(blue[5],yellow[2]);
        swap(green[1],yellow[2]);
        swap(blue[4],white[1]);
        swap(blue[4],yellow[3]);
        swap(green[0],yellow[3]);
        //displayall();
    }


    else if(choice=='o')
    {
        slno++;
        cout<<slno<<". Orange2"<<endl;
        swap(orange[0],orange[2]);
        swap(orange[2],orange[4]);
        swap(orange[4],orange[6]);
        swap(orange[1],orange[3]);
        swap(orange[3],orange[5]);
        swap(orange[5],orange[7]);
        //-------------------------

        swap(yellow[5],green[6]);
        swap(yellow[5],blue[2]);
        swap(white[7],blue[2]);
        swap(yellow[6],green[5]);
        swap(yellow[6],blue[1]);
        swap(white[6],blue[1]);
        swap(yellow[7],green[4]);
        swap(yellow[7],blue[0]);
        swap(white[5],blue[0]);
        //displayall();
    }

    else if(choice=='b')
    {
        slno++;
        cout<<slno<<". Blue2"<<endl;
        swap(blue[0],blue[2]);
        swap(blue[2],blue[4]);
        swap(blue[4],blue[6]);
        swap(blue[1],blue[3]);
        swap(blue[3],blue[5]);
        swap(blue[5],blue[7]);
        //-------------------
        swap(yellow[7],orange[6]);
        swap(yellow[7],red[2]);
        swap(white[1],red[2]);
        swap(yellow[0],orange[5]);
        swap(yellow[0],red[1]);
        swap(white[0],red[1]);
        swap(yellow[1],orange[4]);
        swap(yellow[1],red[0]);
        swap(white[7],red[0]);
        //displayall();
    }

    else if(choice=='g')
    {
        slno++;
        cout<<slno<<". Green2"<<endl;
        swap(green[0],green[2]);
        swap(green[2],green[4]);
        swap(green[4],green[6]);
        swap(green[1],green[3]);
        swap(green[3],green[5]);
        swap(green[5],green[7]);
        //---------------------
        swap(yellow[3],red[6]);
        swap(yellow[3],orange[2]);
        swap(white[5],orange[2]);
        swap(yellow[4],red[5]);
        swap(yellow[4],orange[1]);
        swap(white[4],orange[1]);
        swap(yellow[5],red[4]);
        swap(yellow[5],orange[0]);
        swap(white[3],orange[0]);
        //displayall();
    }
}
//--------------------------------

void dlur(char right,char down)
{

    rotate_anticlockwise(right);
    rotate_anticlockwise(down);
    rotate_clockwise(right);
    rotate_clockwise(down);

}

//------------------------------
void solve_white_plus()
{
    cout<<"Inside white plus\n";
while(1)
{
    if(white[6]=='w' && white[0]=='w' && white[2]=='w' && white[4]=='w' )
            return;
    int cnti=0;
    int cntj=0;
    int cntk=0;
    int cntl=0;

    if(white[2]!='w')
        while(white[2]!='w')
        {

            if(white[2]=='w' || cnti==3)
                break;

            rotate_clockwise('r');
            cnti++;
        }

            if(white[0]!='w')
        while(white[0]!='w')
        {

            if(white[0]=='w' || cntj==3)
                break;

            rotate_clockwise('b');
            cntj++;
        }

            if(white[6]!='w')
        while(white[6]!='w')
        {

            if(white[6]=='w' || cntk==3)
                break;
            rotate_clockwise('o');

            cntk++;
        }

            if(white[4]!='w')
        while(white[4]!='w')
        {

            if(white[4]=='w' || cntl==3)
                break;
            rotate_clockwise('g');
            cntl++;
        }

        rotate_clockwise('w');

}
}
//-----------------------------
//------------------------------
void for_white_cross(char right,char top)
{
        rotate_clockwise(right);
        rotate_clockwise(top);
        rotate_anticlockwise(right);
        rotate_clockwise(top);
        rotate_clockwise(right);
        rotate_clockwise(top);
        rotate_clockwise(top);
        rotate_anticlockwise(right);
        rotate_clockwise(top);
}

//---------------------------
void solve_white_cross()
{

    cout<<"Inside white cross\n";
    if(orange[7]=='o' && blue[7]=='b' && red[7]=='r' && green[7]=='g')
        {
        return;
        }
    else
{
   while(orange[7]!='o' || blue[7]!='b' || red[7]!='r' || green[7]!='g')
   {
    if(orange[7]=='o' && blue[7]=='b' && red[7]!='r' && green[7]!='g')
    {
        cout<<"dfghjk/n";
            for_white_cross('b','w');
            //return;
    }
    else
        if(orange[7]!='o' && blue[7]=='b' && red[7]=='r' && green[7]!='g')
    {
        for_white_cross('r','w');
        //return;
    }
    else
        if(orange[7]!='o' && blue[7]!='b' && red[7]=='r' && green[7]=='g')
    {
        for_white_cross('g','w');
        //return;
    }
    else
        if(orange[7]=='o' && blue[7]!='b' && red[7]!='r' && green[7]=='g')
    {
        for_white_cross('o','w');
        //return;
    }
    else
        if(orange[7]=='o' && blue[7]!='b' && red[7]=='r' && green[7]!='g')
    {
        for_white_cross('r','w');
    }
    else
        if(orange[7]!='o' && blue[7]=='b' && red[7]!='r' && green[7]=='g')
    {
        for_white_cross('g','w');
    }
        /*else
            for_white_cross('b','w');*/

    if(orange[7]=='o' && blue[7]=='b' && red[7]=='r' && green[7]=='g')
        {
        return;
        }


    rotate_clockwise('w');
   }
}
}

//-----------------------------

//------------------------------

int cnt1=0;
void solve_white_corner()
{

    cout<<"Inside white corner\n";
     while(white[5]!='w' || white[3]!='w' || white[7]!='w' || white[1]!='w' || red[6]!='r' || red[0]!='r' || blue[6]!='b' || blue[0]!='b' || orange[6]!='o' || orange[0]!='o' || green[6]!='g' || green[0]!='g')
    {
        cnt1++;

        if(white[5]=='w' && white[3]=='w' && white[7]=='w' && white[1]=='w' && red[6]=='r' && red[0]=='r' && blue[6]=='b' && blue[0]=='b' && orange[6]=='o' && orange[0]=='o' && green[6]=='g' && green[0]=='g')
                    return ;


/*    int cnt2=0;
    int cnt3=0;
    int cnt4=0;
    int cnt5=0;
*/

    //white red green

for(int i=0;i<4;i++)
{
            if(white[5]=='w' && white[3]=='w' && white[7]=='w' && white[1]=='w' && red[6]=='r' && red[0]=='r' && blue[6]=='b' && blue[0]=='b' && orange[6]=='o' && orange[0]=='o' && green[6]=='g' && green[0]=='g')
                    return ;

        if(red[6]=='r' && green[0]=='g' && white[3]=='w')
        {}
         else
            if((red[6]=='g' && green[0]=='w' && white[3]=='r') || (red[6]=='w' && green[0]=='r' && white[3]=='g') || (red[4]=='r' && green[2]=='w' && yellow[3]=='g') || (red[4]=='g' && green[2]=='r' && yellow[3]=='w') || (red[4]=='w' && green[2]=='g' && yellow[3]=='r'))
            {
                while(/*(white[3]!='w')  && (green[0]!='g')  && (red[6]!='r')*/1)
                  {
                    //cnt2++;
                    if(((white[3]=='w') && (green[0]=='g') && (red[6]=='r')) /*|| cnt2>6*/)
                            break;

                            dlur('r','y');
                            //displayall();
                    if(white[5]=='w' && white[3]=='w' && white[7]=='w' && white[1]=='w' && red[6]=='r' && red[0]=='r' && blue[6]=='b' && blue[0]=='b' && orange[6]=='o' && orange[0]=='o' && green[6]=='g' && green[0]=='g')
                    return ;
                  }
            }



    //white red blue
            if(red[0]=='r' && white[1]=='w' && blue[6]=='b')
            {}
            else if((red[0]=='w' && white[1]=='b' && blue[6]=='r') || (red[0]=='b' && white[1]=='r' && blue[6]=='w') || (red[2]=='w' && yellow[1]=='r' && blue[4]=='b') || (red[2]=='b' && yellow[1]=='w' && blue[4]=='r') || (red[2]=='r' && yellow[1]=='b' && blue[4]=='w'))
                {
                    while(1/*(white[1]!='w')  && (blue[6]!='b')  && (red[0]!='r')*/)
                    {
                        //cnt3++;
                        if(((white[1]=='w') && (blue[6]=='b') && (red[0]=='r')) /*|| cnt3>6*/)
                                break;

                                dlur('b','y');
                                //displayall();
                        if(white[5]=='w' && white[3]=='w' && white[7]=='w' && white[1]=='w' && red[6]=='r' && red[0]=='r' && blue[6]=='b' && blue[0]=='b' && orange[6]=='o' && orange[0]=='o' && green[6]=='g' && green[0]=='g')
                    return ;
                    }
                }


    //white blue orange
                if(orange[6]=='o' && white[7]=='w' && blue[0]=='b')
                { }
            else if((orange[6]=='b' && white[7]=='o' && blue[0]=='w') || (orange[6]=='w' && white[7]=='b' && blue[0]=='o') || (orange[4]=='o' && yellow[7]=='b' && blue[2]=='w') || (orange[4]=='b' && yellow[7]=='w' && blue[2]=='o') || (orange[4]=='w' && yellow[7]=='o' && blue[2]=='b'))
                {
                    while(1/*(white[6]!='w')  && (blue[0]!='b')  && (orange[6]!='o')*/)
                    {
                        //cnt4++;
                        if(((white[7]=='w') && (blue[0]=='b') && (orange[6]=='o')) /*|| cnt4>6*/)
                                break;

                                dlur('o','y');
                               // displayall();
                        if(white[5]=='w' && white[3]=='w' && white[7]=='w' && white[1]=='w' && red[6]=='r' && red[0]=='r' && blue[6]=='b' && blue[0]=='b' && orange[6]=='o' && orange[0]=='o' && green[6]=='g' && green[0]=='g')
                    return ;
                    }
                }

    //white green orange
                if(orange[0]=='o' && white[5]=='w' && green[6]=='g')
                { }
            else if((orange[0]=='w' && white[5]=='g' && green[6]=='o') || (orange[0]=='g' && white[5]=='o' && green[6]=='w') || (orange[2]=='w' && yellow[5]=='o' && green[4]=='g') || (orange[2]=='g' && yellow[5]=='w' && green[4]=='o') || (orange[2]=='o' && yellow[5]=='g' && green[4]=='w'))
                {
                    while(/*(white[5]!='w')  && (green[6]!='g')  && (orange[0]!='o')*/1)
                    {
                        //cnt5++;
                        if(((white[5]=='w') && (green[6]=='g') && (orange[0]=='o'))/* || cnt5>6*/)
                                break;

                                dlur('g','y');
                                //displayall();

                        if(white[5]=='w' && white[3]=='w' && white[7]=='w' && white[1]=='w' && red[6]=='r' && red[0]=='r' && blue[6]=='b' && blue[0]=='b' && orange[6]=='o' && orange[0]=='o' && green[6]=='g' && green[0]=='g')
                    return ;
                    }
                }

                if(white[5]=='w' && white[3]=='w' && white[7]=='w' && white[1]=='w' && red[6]=='r' && red[0]=='r' && blue[6]=='b' && blue[0]=='b' && orange[6]=='o' && orange[0]=='o' && green[6]=='g' && green[0]=='g')
                    return;

                 rotate_anticlockwise('y');
}



                    if(red[6]!='r' && green[0]!='g' && white[3]!='w')
                    {
                      dlur('r','y');
                    }
                    else
                        if((white[1]!='w') && (blue[6]!='b') && (red[0]!='r'))
                        {
                                dlur('b','y');
                        }
                        else
                            if((white[7]!='w') && (blue[0]!='b') && (orange[6]!='o'))
                            {
                                dlur('o','y');
                            }
                            else
                                if((white[5]!='w') && (green[6]!='g') && (orange[0]!='o'))
                                {
                                    dlur('g','y');
                                }

                   if(white[5]=='w' && white[3]=='w' && white[7]=='w' && white[1]=='w' && red[6]=='r' && red[0]=='r' && blue[6]=='b' && blue[0]=='b' && orange[6]=='o' && orange[0]=='o' && green[6]=='g' && green[0]=='g')
                    return ;
    }
}
//-------------------------------
// middle layer formulas

void solve_middle_right(char  center, char right)
{
    rotate_clockwise('y');
    rotate_clockwise(right);
    rotate_anticlockwise('y');
    rotate_anticlockwise(right);
    rotate_anticlockwise('y');
    rotate_anticlockwise(center);
    rotate_clockwise('y');
    rotate_clockwise(center);
}

void solve_middle_left(char center,char left)
{
    rotate_anticlockwise('y');
    rotate_anticlockwise(left);
    rotate_clockwise('y');
    rotate_clockwise(left);
    rotate_clockwise('y');
    rotate_clockwise(center);
    rotate_anticlockwise('y');
    rotate_anticlockwise(center);
}
//-----------------------------------------
void solve_middle_layer()
{

    cout<<"Inside middle layer\n";
    if(orange[5]=='o' && orange [1]=='o' && green[5]=='g' && green[1]=='g' && red[5]=='r' && red[1]=='r' && blue[5]=='b' && blue[1]=='b')
    {
    return;
    }

    else
    {
        while(orange[5]!='o' || orange [1]!='o' || green[5]!='g' || green[1]!='g' || red[5]!='r' || red[1]!='r' || blue[5]!='b' || blue[1]!='b')
        {
            if(orange[5]=='o' && orange [1]=='o' && green[5]=='g' && green[1]=='g' && red[5]=='r' && red[1]=='r' && blue[5]=='b' && blue[1]=='b')
            {
                return;
            }


            for(int i=0;i<4;i++)
           {
            if(orange[3]=='o'&& yellow[6]=='b')
            {
                solve_middle_right('o','b');
                //cout<<"O B 1\n";
            }

            if(orange[3]=='o'&& yellow[6]=='g')
            {
                solve_middle_left('o','g');
                //cout<<"O G \n";
            }

            if(blue[3]=='b'&& yellow[0]=='r')
            {
                solve_middle_right('b','r');
                //cout<<"B R \n";
            }

            if(blue[3]=='b'&& yellow[0]=='o')
            {
                solve_middle_left('b','o');
                //cout<<"B O\n";
            }

            if(red[3]=='r'&& yellow[2]=='g')
            {
                solve_middle_right('r','g');
                //cout<<"R G \n";
            }

            if(red[3]=='r'&& yellow[2]=='b')
            {
                solve_middle_left('r','b');
                //cout<<"R B \n";
            }

            if(green[3]=='g'&& yellow[4]=='o')
            {
                solve_middle_right('g','o');
                //cout<<"G O \n";
            }

            if(green[3]=='g'&& yellow[4]=='r')
            {
                solve_middle_left('g','r');
               // cout<<"G  R \n";
            }


            if(orange[5]=='o' && orange [1]=='o' && green[5]=='g' && green[1]=='g' && red[5]=='r' && red[1]=='r' && blue[5]=='b' && blue[1]=='b')
            {
                return;
            }

            //spl case red blue
               if(orange[5]=='o' && orange [1]=='o' && green[5]=='g' && green[1]=='g' && red[5]=='r' && red[1]=='b' && blue[5]=='r' && blue[1]=='b')
            {
                solve_middle_left('r','b');
            }

            //spl case blue orange
               if(orange[5]=='b' && orange [1]=='o' && green[5]=='g' && green[1]=='g' && red[5]=='r' && red[1]=='r' && blue[5]=='b' && blue[1]=='o')
            {
                solve_middle_left('b','o');
            }

            //spl case orange green
               if(orange[5]=='o' && orange [1]=='g' && green[5]=='o' && green[1]=='g' && red[5]=='r' && red[1]=='r' && blue[5]=='b' && blue[1]=='b')
            {
                solve_middle_left('o','g');
            }

            //spl case green red
                if(orange[5]=='o' && orange [1]=='o' && green[5]=='g' && green[1]=='r' && red[5]=='g' && red[1]=='r' && blue[5]=='b' && blue[1]=='b')
            {
                solve_middle_left('g','r');
            }

            rotate_clockwise('y');
           }


            //ultra special cases
            if(orange[5]=='o' && orange [1]=='o' && green[5]=='g' && green[1]=='g' && red[5]=='r' && red[1]=='r' && blue[5]=='b' && blue[1]=='b')
            {
                return;
            }

            if(orange[5]!='o'&& blue[1]!='b')
            {
                solve_middle_right('o','b');
            }
            else
                if(blue[5]!='b' && red[1]!='r')
            {
                solve_middle_right('b','r');
            }
            else
                if(red[5]=='r' && green[1]!='g')
            {
                solve_middle_right('r','g');
            }
            else
                if(green[5]!='g' && orange[1]!='o')
            {
                solve_middle_right('g','o');
            }


            if(orange[5]=='o' && orange [1]=='o' && green[5]=='g' && green[1]=='g' && red[5]=='r' && red[1]=='r' && blue[5]=='b' && blue[1]=='b')
            {
                return;
            }
        }
    }
}

//--------------------------------------------------------------------------------------------------------------------------------
void rur1u1(char right,char up)
{
    rotate_clockwise(right);
    rotate_clockwise(up);
    rotate_anticlockwise(right);
    rotate_anticlockwise(up);
}

//---------------------------------------------------------------------------------------------------
void solve_yellow_cross()
{
    cout<<"Inside yellow cross\n";
    //------------------
    //only yellow middle .1/8
    if(orange[3]=='y' && blue[3]=='y' && red[3]=='y' && orange[3]=='y')
    {
        rotate_clockwise('o');
        rur1u1('b','y');
        rotate_anticlockwise('o');

        rotate_clockwise('r');
        rur1u1('y','g');
        rotate_anticlockwise('r');
        return;
    }

    //--------------------
    //yellow L .1/2
    else
        if(yellow[6]=='y' && yellow[0]=='y' && yellow[2]!='y' && yellow[4]!='y')
        {
            rotate_clockwise('r');
            rur1u1('y','g');
            rotate_anticlockwise('r');
            return;
        }

    else
        if(yellow[6]!='y' && yellow[0]=='y' && yellow[2]=='y' && yellow[4]!='y')
        {
            rotate_clockwise('g');
            rur1u1('y','o');
            rotate_anticlockwise('g');
            return;
        }

    else
        if(yellow[6]!='y' && yellow[0]!='y' && yellow[2]=='y' && yellow[4]=='y')
        {
            rotate_clockwise('o');
            rur1u1('y','b');
            rotate_anticlockwise('o');
            return;
        }

    else
        if(yellow[6]=='y' && yellow[0]!='y' && yellow[2]!='y' && yellow[4]=='y')
        {
            rotate_clockwise('b');
            rur1u1('y','r');
            rotate_anticlockwise('b');
            return;
        }
    //----------------------------
    //line .1/4

    else
        if(yellow[6]=='y' && yellow[0]!='y' && yellow[2]!='y' && yellow[4]=='y')
        {
            rotate_clockwise('b');
            rur1u1('r','y');
            rotate_anticlockwise('b');
            return;
        }

    else
        if(yellow[6]!='y' && yellow[0]=='y' && yellow[2]!='y' && yellow[4]=='y')
        {
            rotate_clockwise('o');
            rur1u1('b','y');
            rotate_anticlockwise('o');
            return;
        }

}
//------------------------------
void for_yellow_plus(char right,char top)
{
        rotate_clockwise(right);
        rotate_clockwise(top);
        rotate_anticlockwise(right);
        rotate_clockwise(top);
        rotate_clockwise(right);
        rotate_clockwise(top);
        rotate_clockwise(top);
        rotate_anticlockwise(right);
        rotate_clockwise(top);
}

//---------------------------
void solve_yellow_plus()
{
    cout<<"Inside yellow plus\n";
    if(orange[3]=='o' && blue[3]=='b' && red[3]=='r' && green[3]=='g')
        {
        return;
        }
    else
{
   while(orange[3]!='o' || blue[3]!='b' || red[3]!='r' || green[3]!='g')
   {
    if(orange[3]=='o' && blue[3]=='b' && red[3]!='r' && green[3]!='g')
    {
            for_yellow_plus('o','y');
            return;
    }
    else
        if(orange[3]!='o' && blue[3]=='b' && red[3]=='r' && green[3]!='g')
    {
        for_yellow_plus('b','y');
        return;
    }
    else
        if(orange[3]!='o' && blue[3]!='b' && red[3]=='r' && green[3]=='g')
    {
        for_yellow_plus('r','y');
        return;
    }
    else
        if(orange[3]=='o' && blue[3]!='b' && red[3]!='r' && green[3]=='g')
    {
        for_yellow_plus('g','y');
        return;
    }
    else
        if(orange[3]=='o' && blue[3]!='b' && red[3]=='r' && green[3]!='g')
    {
        for_yellow_plus('r','y');
    }
    else
        if(orange[3]!='o' && blue[3]=='b' && red[3]!='r' && green[3]=='g')
    {
        for_yellow_plus('g','y');
    }

    rotate_clockwise('y');
   }
}
}


//-------------------------------
void for_yellow_corner(char left,char up,char right)
{
    rotate_clockwise(up);
    rotate_clockwise(right);
    rotate_anticlockwise(up);
    rotate_anticlockwise(left);
    rotate_clockwise(up);
    rotate_anticlockwise(right);
    rotate_anticlockwise(up);
    rotate_clockwise(left);
}

//------------------------------
void solve_yellow_corner()
{
    cout<<"Inside yellow corner\n";
    while(1)
   {
    if((blue[2]=='b' || blue[2]=='o' || blue[2]=='y') && (orange[4]=='b' || orange[4]=='o' || orange[4]=='y') && (yellow[7]=='b' || yellow[7]=='o' || yellow[7]=='y') )
    {
        while(1)
        {
        for_yellow_corner('g','y','b');
        if((blue[2]=='b' || blue[2]=='o' || blue[2]=='y') && (orange[4]=='b' || orange[4]=='o' || orange[4]=='y') && (yellow[7]=='b' || yellow[7]=='o' || yellow[7]=='y') /**/ && (red[2]=='r'|| red[2]=='b'|| red[2]=='y') && (blue[4]=='r' || blue[4]=='b' || blue[4]=='y') && (yellow[1]=='r' || yellow[1]=='b' || yellow[1]=='y') /**/ &&(green[2]=='g' || green[2]=='r' || green[2]=='y') && (red[4]=='g' || red[4]=='r' || red[4]=='y' ) &&  (yellow[3]=='g' || yellow[3]=='r' || yellow[3]=='y') /**/ &&(orange[2]=='o' || orange[2]=='g' || orange[2]=='y') && (green[4]=='o' || green[4]=='g' || green[4]=='y') &&  (yellow[5]=='o' || yellow[5]=='g' || yellow[5]=='y'))
    return;
        }
    }
    else
        if((red[2]=='r'|| red[2]=='b'|| red[2]=='y') && (blue[4]=='r' || blue[4]=='b' || blue[4]=='y') && (yellow[1]=='r' || yellow[1]=='b' || yellow[1]=='y'))
    {
        while(1)
        {
         for_yellow_corner('o','y','r');
         if((blue[2]=='b' || blue[2]=='o' || blue[2]=='y') && (orange[4]=='b' || orange[4]=='o' || orange[4]=='y') && (yellow[7]=='b' || yellow[7]=='o' || yellow[7]=='y') /**/ && (red[2]=='r'|| red[2]=='b'|| red[2]=='y') && (blue[4]=='r' || blue[4]=='b' || blue[4]=='y') && (yellow[1]=='r' || yellow[1]=='b' || yellow[1]=='y') /**/ &&(green[2]=='g' || green[2]=='r' || green[2]=='y') && (red[4]=='g' || red[4]=='r' || red[4]=='y' ) &&  (yellow[3]=='g' || yellow[3]=='r' || yellow[3]=='y') /**/ &&(orange[2]=='o' || orange[2]=='g' || orange[2]=='y') && (green[4]=='o' || green[4]=='g' || green[4]=='y') &&  (yellow[5]=='o' || yellow[5]=='g' || yellow[5]=='y'))
    return;
        }
    }
    else
        if((green[2]=='g' || green[2]=='r' || green[2]=='y') && (red[4]=='g' || red[4]=='r' || red[4]=='y' ) &&  (yellow[3]=='g' || yellow[3]=='r' || yellow[3]=='y'))
    {
        while(1)
        {
        for_yellow_corner('b','y','g');
        if((blue[2]=='b' || blue[2]=='o' || blue[2]=='y') && (orange[4]=='b' || orange[4]=='o' || orange[4]=='y') && (yellow[7]=='b' || yellow[7]=='o' || yellow[7]=='y') /**/ && (red[2]=='r'|| red[2]=='b'|| red[2]=='y') && (blue[4]=='r' || blue[4]=='b' || blue[4]=='y') && (yellow[1]=='r' || yellow[1]=='b' || yellow[1]=='y') /**/ &&(green[2]=='g' || green[2]=='r' || green[2]=='y') && (red[4]=='g' || red[4]=='r' || red[4]=='y' ) &&  (yellow[3]=='g' || yellow[3]=='r' || yellow[3]=='y') /**/ &&(orange[2]=='o' || orange[2]=='g' || orange[2]=='y') && (green[4]=='o' || green[4]=='g' || green[4]=='y') &&  (yellow[5]=='o' || yellow[5]=='g' || yellow[5]=='y'))
    return;
        }
    }
    else
        if((orange[2]=='o' || orange[2]=='g' || orange[2]=='y') && (green[4]=='o' || green[4]=='g' || green[4]=='y') &&  (yellow[5]=='o' || yellow[5]=='g' || yellow[5]=='y'))
    {
        while(1)
        {
        for_yellow_corner('r','y','o');
        if((blue[2]=='b' || blue[2]=='o' || blue[2]=='y') && (orange[4]=='b' || orange[4]=='o' || orange[4]=='y') && (yellow[7]=='b' || yellow[7]=='o' || yellow[7]=='y') /**/ && (red[2]=='r'|| red[2]=='b'|| red[2]=='y') && (blue[4]=='r' || blue[4]=='b' || blue[4]=='y') && (yellow[1]=='r' || yellow[1]=='b' || yellow[1]=='y') /**/ &&(green[2]=='g' || green[2]=='r' || green[2]=='y') && (red[4]=='g' || red[4]=='r' || red[4]=='y' ) &&  (yellow[3]=='g' || yellow[3]=='r' || yellow[3]=='y') /**/ &&(orange[2]=='o' || orange[2]=='g' || orange[2]=='y') && (green[4]=='o' || green[4]=='g' || green[4]=='y') &&  (yellow[5]=='o' || yellow[5]=='g' || yellow[5]=='y'))
    return;
        }
    }
    for_yellow_corner('g','y','b');

    if((blue[2]=='b' || blue[2]=='o' || blue[2]=='y') && (orange[4]=='b' || orange[4]=='o' || orange[4]=='y') && (yellow[7]=='b' || yellow[7]=='o' || yellow[7]=='y') /**/ && (red[2]=='r'|| red[2]=='b'|| red[2]=='y') && (blue[4]=='r' || blue[4]=='b' || blue[4]=='y') && (yellow[1]=='r' || yellow[1]=='b' || yellow[1]=='y') /**/ &&(green[2]=='g' || green[2]=='r' || green[2]=='y') && (red[4]=='g' || red[4]=='r' || red[4]=='y' ) &&  (yellow[3]=='g' || yellow[3]=='r' || yellow[3]=='y') /**/ &&(orange[2]=='o' || orange[2]=='g' || orange[2]=='y') && (green[4]=='o' || green[4]=='g' || green[4]=='y') &&  (yellow[5]=='o' || yellow[5]=='g' || yellow[5]=='y'))
    return;
   }
}
//------------------------------
void solve_complete_cube()
{
    int casec=0;
    cout<<"Inside complete cube\n";
        while(1/*yellow[7]!='y' || yellow[1]!='y' || yellow[3]!='y' || yellow[5]!='y' */)
        {
            if(yellow[7]=='y' && yellow[1]=='y' && yellow[3]=='y' && yellow[5]=='y')
                return;

                    {

                    if(yellow[7]!='y')
                {


                        if(orange[4]=='y')
                        {
                            for(int i=0;i<4;i++)
                            {
                                dlur('b','w');
                            }
                        }
                        else
                            if(blue[2]=='y')
                            {
                                for(int i=0;i<2;i++)
                                {
                                        dlur('b','w');
                                }
                            }



                }
                    rotate_clockwise('y');



                    if(yellow[7]=='y' && yellow[1]=='y' && yellow[3]=='y' && yellow[5]=='y')
                     return;
                    else
                        if(orange[2]=='o' && orange[4]=='o' && blue[2]=='b' && blue[4]=='b' && red[2]=='r' && red[4]=='r' && green[2]=='g' && green[4]=='g')
                            return;
                    }



        }
}
//-------------------------------
void show_time()
{
    cout<<"Inside show time\n";
    if(orange[3]=='o')
        return;
    else
        while(1)
        {
            if(orange[3]=='o')
            return;

            rotate_clockwise('y');
        }
}

//-------------------------------
int main()
{
cout<<"                              /\\ -----------Rubik's cube solver------------ /\\   \n\n\n";
int i;

   /* cout<<"-->Type colour of each piece one by one...\n";

   cout<<"White side: 0 1 2 3 4 5 6 7 8\n";
    cout<<"White side: ";
    for(i=0;i<9;i++)
    {
        //cout<<i;
        cin>>white[i];}
    cout<<"Yellow side: 0 1 2 3 4 5 6 7 8\n";
    cout<<"Yellow side: ";
    for(i=0;i<9;i++)
    {
        //cout<<i;
        cin>>yellow[i];}

    cout<<"Red side: 0 1 2 3 4 5 6 7 8\n";
    cout<<"Red side: ";
    for(i=0;i<9;i++)
    {
        //cout<<i;
        cin>>red[i];}

    cout<<"Orange side: 0 1 2 3 4 5 6 7 8\n";
    cout<<"Orange side: ";
    for(i=0;i<9;i++)
    {
        //cout<<i;
        cin>>orange[i];
    }

    cout<<"Blue side: 0 1 2 3 4 5 6 7 8\n";
    cout<<"Blue side: ";
    for(i=0;i<9;i++)
    {
        //cout<<i;
        cin>>blue[i];
    }

    cout<<"Green side: 0 1 2 3 4 5 6 7 8\n";
    cout<<"Green side: ";
    for(i=0;i<9;i++)
    {
        //cout<<i;
        cin>>green[i];
    }
*/


    cout<<"-->If '1' it is clockwise else if '2' it is anti clockwise...\n";
    cout<<"-->Example WHITE1 means white clockwise and WHITE2 means white anticlockwise...\n";


  //White plus and white cross are perfect
    //FIRST LAYER
    //------------------
    while(1)
    {
    if(white[6]=='w' && white[0]=='w' && white[2]=='w' && white[2]=='w' )
            break;

    solve_white_plus();
    }
    cout<<"\n--------------------------------------------------------\n";
  //  displayall();

    while(1)
    {
        if(orange[7]=='o' && blue[7]=='b' && red[7]=='r' && green[7]=='g')
        {
        break;
        }
        solve_white_cross();
    }
    cout<<"\n--------------------------------------------------------\n";

    //displayall();

    while(1)
    {

     if(white[5]=='w' && white[3]=='w' && white[7]=='w' && white[1]=='w' && red[6]=='r' && red[0]=='r' && blue[6]=='b' && blue[0]=='b' && orange[6]=='o' && orange[0]=='o' && green[6]=='g' && green[0]=='g')
                    break;

    solve_white_corner();
    }
    cout<<"\n--------------------------------------------------------\n";
    //displayall();
    //-----------------

    //MIDDLE LAYER
    //----------------
    while(1)
    {
        if(orange[5]=='o' && orange [1]=='o' && green[5]=='g' && green[1]=='g' && red[5]=='r' && red[1]=='r' && blue[5]=='b' && blue[1]=='b')
    {
    break;
    }

    solve_middle_layer();
    }

    cout<<"\n--------------------------------------------------------\n";

    //------------------

    //COMPLETE THIRD LAYER
    //-------------------
    //displayall();

    solve_yellow_cross();
     //displayall();
    cout<<"\n--------------------------------------------------------\n";

    solve_yellow_plus();
     //displayall();

    cout<<"\n--------------------------------------------------------\n";

    while(1)
    {
       if((blue[2]=='b' || blue[2]=='o' || blue[2]=='y') && (orange[4]=='b' || orange[4]=='o' || orange[4]=='y') && (yellow[7]=='b' || yellow[7]=='o' || yellow[7]=='y') /**/ && (red[2]=='r'|| red[2]=='b'|| red[2]=='y') && (blue[4]=='r' || blue[4]=='b' || blue[4]=='y') && (yellow[1]=='r' || yellow[1]=='b' || yellow[1]=='y') /**/ &&(green[2]=='g' || green[2]=='r' || green[2]=='y') && (red[4]=='g' || red[4]=='r' || red[4]=='y' ) &&  (yellow[3]=='g' || yellow[3]=='r' || yellow[3]=='y') /**/ &&(orange[2]=='o' || orange[2]=='g' || orange[2]=='y') && (green[4]=='o' || green[4]=='g' || green[4]=='y') &&  (yellow[5]=='o' || yellow[5]=='g' || yellow[5]=='y'))
        break;

            solve_yellow_corner();
    }

    cout<<"\n--------------------------------------------------------\n";
     //displayall();

    //while(1)
    {
      //  if(yellow[7]=='y' && yellow[1]=='y' && yellow[3]=='y' && yellow[5]=='y')
        //        break;
    solve_complete_cube();
    }

    // displayall();

    cout<<"\n--------------------------------------------------------\n";

    show_time();

    //-------------------

    displayall();

    return 0;
}
