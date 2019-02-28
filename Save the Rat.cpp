#include<iostream>
#include<stdio.h>
#include<graphics.h>
#include<bits/stdc++.h>
using namespace std;

struct cell
{
    int x;
    int y;
}r;

int main()
{
   int gd = DETECT;
   int gm;
   initgraph(&gd, &gm,"c:\\tc\\bgi");
    DWORD screenwidth=GetSystemMetrics(SM_CXSCREEN);
    DWORD screenheight=GetSystemMetrics(SM_CYSCREEN);

    initwindow(screenwidth,screenheight,"PROJECT");
    int m,n,i,j,x,y;

    x=getmaxx();
    y=getmaxy();
    char a[100000];

       int maze[9][10]={
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }
    };
      int flag=0;
    int xx;

 for(i=0;i<x;)
    {
        delay(0.0001);

		sprintf(a,"Data Structures Project");
        setcolor(YELLOW);
        settextstyle(BOLD_FONT,HORIZ_DIR,5);
        outtextxy(450+i,30,a);

		if(flag==0)
        {
            i++;
        }

		if(flag==1)
        {
            i--;
        }

		if(450+i==1500)
        {
            flag=1;
        }

		if(i==0)
        {
            flag=0;
        }

    setcolor(WHITE);
    line(-100,80,x,80);
    line(10,-100,10,y);
    settextstyle(BOLD_FONT,HORIZ_DIR,0.5);

    setcolor(9);
    sprintf(a,"Topic:Rat In A Maze");
    outtextxy(350,90,a);

    setcolor(8);
    sprintf(a,"In this  project we have used Breadth First Search Algorithm to find shortest");

    outtextxy(22,160,a);
    line(1500,-100,1500,y);

    sprintf(a,"path and shortest distance between rat and his destination.");
    outtextxy(22,200,a);

    setcolor(GREEN);
    sprintf(a,"Submitted BY:");
    outtextxy(40,450,a);

    sprintf(a,"Siddhant Tulsyan");

    setcolor(5);
    outtextxy(50,480,a);

    sprintf(a,"(16104051)");

    setcolor(5);
    outtextxy(50,510,a);

    sprintf(a,"Vishrut Scaheti");

    setcolor(5);
    outtextxy(50,540,a);


    sprintf(a,"(16104058)");
	setcolor(5);
    outtextxy(50,570,a);

	sprintf(a,"Avishka Agarwal");
	setcolor(5);
    outtextxy(50,600,a);

    sprintf(a,"(16104060)");
    setcolor(5);
    outtextxy(50,630,a);

    sprintf(a,"Apoorv Singhal");
    setcolor(5);
    outtextxy(50,660,a);

    sprintf(a,"(16104057)");
    setcolor(5);
    outtextxy(50,690,a);

    sprintf(a,"Batch-B12");
    setcolor(7);
    outtextxy(50,750,a);

    setcolor(5);
    sprintf(a,"Submitted To:");

    setcolor(11);
    outtextxy(800,500,a);

    sprintf(a,"Dr. Indu Chawla");

    setcolor(4);
    outtextxy(800,600,a);
    if(kbhit())
    {
        sprintf(a,"Press Right Arrow Key To continue");
        outtextxy(260,700,a);
        xx=getch();
        if(xx==77)
        {
            break;
        }
    }
}


    cleardevice();
    setcolor(MAGENTA);

    sprintf(a,"Animated Bus Race");
    outtextxy(100,100,a);
    delay(500);
    sprintf(a,"Press any character To Start animation");
        outtextxy(200,250,a);
        getch();

    cleardevice();

    x=getmaxx();
    flag=0;

    y=getmaxy();


    for(i=0;i<x;i++)
    {
        setcolor(DARKGRAY);
        sprintf(a,"FINISH");
        settextstyle(BOLD_FONT,VERT_DIR,4);
        outtextxy(800,500,a);
        line(800,-100,800,y);

        settextstyle(BOLD_FONT,HORIZ_DIR,0.02);
        setcolor(BLUE);
        line(0,370,x,370);

        setcolor(DARKGRAY);
        line(0,570,x,570);

        setcolor(YELLOW);
    	rectangle(100+2*i,300,200+2*i,350);
    	setcolor(RED);
    	circle(120+2*i,360,10);
		circle(180+2*i,360,10);

        setcolor(11);
		rectangle(100+i,500,200+i,550);
    	setcolor(RED);
    	circle(120+i,560,10);
		circle(180+i,560,10);

		if(((200+i)==800))
        {
            flag=2;
        }
        if(((200+2*i)==800))
        {
            flag=1;
        }

        if(flag!=0)
            break;

		delay(20);
		cleardevice();
		cleardevice();
    }

    if(flag==1)
    {
        setcolor(BLUE);
        sprintf(a,"1st BUS wins");
        outtextxy(100,100,a);
    }

    if(flag==2)
    {
        setcolor(RED);
        sprintf(a,"2nd BUS wins");
        outtextxy(100,100,a);
    }

    delay(700);
    sprintf(a,"Press any Character to continue");
    outtextxy(400,150,a);
    getch();
    cleardevice();

        sprintf(a,"Welcome To the Maze");
       outtextxy(400,200,a);
       delay(700);

    setcolor(DARKGRAY);
        sprintf(a,"Press any character To SEE Maze");
        outtextxy(400,450,a);
        getch();
        cleardevice();
    delay(700);
    setcolor(BLUE);
    sprintf(a,"enter the starting and ending point on input screen");
    outtextxy(300,225,a);

   int sxpoint,sypoint;
   int expoint,eypoint;   cout<<"Enter starting point"<<endl;
   cin>>sxpoint>>sypoint;

   cout<<"Enter ending point"<<endl;
   cin>>expoint>>eypoint;

   struct cell st,en;
   st.x=sxpoint;
   st.y=sypoint;

   en.x=expoint;
   en.y=eypoint;

   cout<<"Enter coordinates of the obstacles:"<<endl;
   char choice = 'p';
    while(choice=='p')
    {
        int x,y;
        cin>>x>>y;
        maze[x][y]=0;
        cout<<"enter p to add more obstacles and q to continue:\t";
        cin>>choice;
    }
    for(i=0;i<9;++i)
    {
        for(j=0;j<10;j++)
        {
            setcolor(GREEN);

            if(maze[i][j]==1)
            {
                if(i==st.x&&j==st.y)
                {
                    setfillstyle(SOLID_FILL,BLUE);
                    rectangle(400+40*j,300+40*i,440+40*j,340+40*i);
                    floodfill(420+40*j,320+40*i,GREEN);
                }
                else
                {
                    setfillstyle(SOLID_FILL,BLUE);
                    rectangle(400+40*j,300+40*i,440+40*j,340+40*i);
                    floodfill(420+40*j,320+40*i,GREEN);
                }
            }

            else
            {
                setfillstyle(SOLID_FILL,WHITE);
                rectangle(400+40*j,300+40*i,440+40*j,340+40*i);
                floodfill(420+40*j,320+40*i,GREEN);
            }
        }
   }


   int visited[400][400];
   cell pre[400][400];
   for(i=0;i<400;++i)
   {
       for(j=0;j<400;++j)
       {
           visited[i][j]=0;
           pre[i][j].x=-1;
           pre[i][j].y=-1;
       }
   }


   queue<cell>q;

   vector<cell>v;
   q.push(st);

   visited[st.x][st.y]=1;
   cell t;

   while(!q.empty())
   {
    r=q.front();
    q.pop();

   //down

   if(((r.x+1)<9)&&maze[r.x+1][r.y]==1&&!visited[r.x+1][r.y])
   {
       t.x=r.x+1;
       t.y=r.y;
       q.push(t);
       visited[t.x][t.y]=visited[r.x][r.y]+1;
       pre[t.x][t.y].x=r.x;
       pre[t.x][t.y].y=r.y;
    }

   //up

   if(((r.x-1>=0))&&maze[r.x-1][r.y]==1&&!visited[r.x-1][r.y])
   {
       t.x=r.x-1;
       t.y=r.y;
       q.push(t);
       visited[t.x][t.y]=visited[r.x][r.y]+1;
       pre[t.x][t.y].x=r.x;
       pre[t.x][t.y].y=r.y;
    }

   //left

   if(((r.y-1>=0))&&maze[r.x][r.y-1]==1&&!visited[r.x][r.y-1])
   {
       t.x=r.x;
       t.y=r.y-1;
       q.push(t);
       visited[t.x][t.y]=visited[r.x][r.y]+1;
       pre[t.x][t.y].x=r.x;
       pre[t.x][t.y].y=r.y;
   }

   //right

   if(((r.y+1<10))&&maze[r.x][r.y+1]==1&&!visited[r.x][r.y+1])
   {
       t.x=r.x;
       t.y=r.y+1;
       q.push(t);
       visited[t.x][t.y]=visited[r.x][r.y]+1;

       pre[t.x][t.y].x=r.x;
       pre[t.x][t.y].y=r.y;
   }

   if(visited[en.x][en.y])
    break;
   }

    struct cell current;
    current.x=en.x;
    current.y=en.y;

    while(pre[current.x][current.y].x!=st.x||pre[current.x][current.y].y!=st.y)
    {
        v.push_back(current);
        current=pre[current.x][current.y];
    }

    struct cell dmh;
    dmh.x=current.x;
    dmh.y=current.y;
    v.push_back(dmh);
    v.push_back(st);


    int sz=v.size()-1;
        setcolor(BROWN);
        sprintf(a,"Press any character to see maze is solved or not");
        outtextxy(100,700,a);
        getch();
        cleardevice();
        for(i=0;i<9;++i)
        {
            for(j=0;j<10;j++)
            {
              setcolor(GREEN);
              if(maze[i][j]==1)
                {
                    setfillstyle(SOLID_FILL,BLUE);
                    rectangle(400+40*j,300+40*i,440+40*j,340+40*i);
                    floodfill(420+40*j,320+40*i,GREEN);
                }

                else
                {
                    setfillstyle(SOLID_FILL,WHITE);
                    rectangle(400+40*j,300+40*i,440+40*j,340+40*i);
                    floodfill(420+40*j,320+40*i,GREEN);
                }
            }
        }

    reverse(v.begin(),v.end());
    cout<<visited[en.x][en.y];
    if(visited[en.x][en.y])
    {

    for(i=0;i<=sz;++i)
    {
        setcolor(14);
        setfillstyle(SLASH_FILL,RED);
        circle(420+40*v[i].y,320+40*v[i].x,15);
        delay(700);
        if(i!=sz)
            {
                setcolor(14);
                setfillstyle(BKSLASH_FILL,BLUE);
                circle(420+40*v[i].y,320+40*v[i].x,15);
            }
    }
    //}

    //if(visited[en.x][en.y]!=0)

      //{

       char a[100];
        setcolor(YELLOW);
        sprintf(a,"YOU HAVE REACHED YOUR DESTINATION");
        outtextxy(420,50,a);
        sprintf(a,"SHORTEST DISTANCE IS %d",visited[en.x][en.y]-1);
        outtextxy(420,80,a);
    }

    else
    {
        char a[100];
        setcolor(YELLOW);
        sprintf(a,"SORRY NO POSSIBLE PATH EXIST");
        outtextxy(420,50,a);
    }
    delay(1000);
    setcolor(MAGENTA);
    sprintf(a,"Press any character to close");
    outtextxy(420,110,a);
    getch();

    closegraph();

return 0;
}
